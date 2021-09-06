/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Purpose:  1D Array Class Implementation
 */

#include "Class1DArray.h"

#include <iostream>
#include <cstdlib>
using namespace std;

DynAry1::DynAry1(int n){
    size=(n<2?2:n);
    array=new int[size];
    for(int i=0;i<size;i++){
        array[i]=rand()%90+10;//Random 2 Digit numbers
    }
}

DynAry1::DynAry1(int n,int val){
    size=(n<2?2:n);
    array=new int[size];
    for(int i=0;i<size;i++){
        array[i]=val;//Random 2 Digit numbers
    }
}

DynAry1::~DynAry1(){
    delete []array;
}
        
void DynAry1::prntCls(int perLine)const{
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

int DynAry1::getCell(int index)const{
    if(index>=0&&index<size)return array[index];
}
        
void DynAry1::setCell(int index,int value){
    if(index>=0&&index<size)array[index]=value;
}

