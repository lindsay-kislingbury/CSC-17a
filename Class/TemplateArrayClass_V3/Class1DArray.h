/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on October 16th, 2018, 1:40 PM
 * Purpose:  1D Template Array Class Specification
 */

#ifndef STRUC1DARRAY_H
#define STRUC1DARRAY_H

#include <iostream>
#include <cstdlib>
using namespace std;

template<class T>
class DynAry1{
    private:
        int size;
        T *array;
    public:
        DynAry1(int);
        DynAry1(int,int);
        ~DynAry1();
        void prntCls(int)const;
        T getCell(int)const;
        int getSize()const{
            return size;
        }
        void setCell(int,int);
};

template<class T>
DynAry1<T>::DynAry1(int n){
    size=(n<2?2:n);
    array=new T[size];
    for(int i=0;i<size;i++){
        array[i]=rand()%90+10;//Random 2 Digit numbers
    }
}

template<class T>
DynAry1<T>::DynAry1(int n,int val){
    size=(n<2?2:n);
    array=new T[size];
    for(int i=0;i<size;i++){
        array[i]=val;//Random 2 Digit numbers
    }
}

template<class T>
DynAry1<T>::~DynAry1(){
    delete []array;
}

template<class T>
void DynAry1<T>::prntCls(int perLine)const{
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

template<class T>
T DynAry1<T>::getCell(int index)const{
    if(index>=0&&index<size)return array[index];
}

template<class T>
void DynAry1<T>::setCell(int index,int value){
    if(index>=0&&index<size)array[index]=value;
}

#endif /* STRUC1DARRAY_H */