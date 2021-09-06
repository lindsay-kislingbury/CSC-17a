/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on October 16th, 2018, 1:40 PM
 * Purpose:  1D Array Class
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries
#include "Class1DArray.h"

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
template<class T>
void prntAry(T *,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables and Initialize
    int size=200;
    int perLine=20;
    DynAry1<int>   *array1D;
    DynAry1<float> *brray1D;
    
    //Initialize Variables
    array1D=new DynAry1<int>(size);
    brray1D=new DynAry1<float>(size,0);
    
    //Print the Data
    array1D->prntCls(perLine);
    
    //Mod the data and reprint
    array1D->setCell(size/2,size/4);
    prntAry(array1D,perLine);
    
    //Mod the b array
    brray1D->setCell(size/2,size/40);
    brray1D->prntCls(perLine);
    
    //Deallocate memory
    delete array1D,brray1D;
    
    //Exit stage right!
    return 0;
}

template<class T>
void prntAry(T *a,int perLine){
    cout<<endl;
    for(int i=0;i<a->getSize();i++){
        cout<<a->getCell(i)<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}