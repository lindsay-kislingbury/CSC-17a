/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Purpose:  2D Array Class implementation
 */

#include "Class2DArray.h"
#include <iostream>
#include <cstdlib>
using namespace std;
        
DynAry2::DynAry2(int r,int c){
    rows=(r<2?2:r);
    cols=(c<2?2:c);
    array=new int*[rows];
    for(int i=0;i<rows;i++){
        array[i]=new int[cols];
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            array[i][j]=rand()%90+10;//Random 2 Digit numbers
        }  
    }
}
        
DynAry2::~DynAry2(){
    for(int i=0;i<rows;i++){
        delete []array[i];
    }
    delete []array;
}
        
DynAry2::prntCls(){
    cout<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}


