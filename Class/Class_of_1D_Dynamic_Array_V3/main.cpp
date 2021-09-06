/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
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
void prntAry(DynAry1 *,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables and Initialize
    int size=100;
    DynAry1 *array1D,*brray1D;
    
    //Initialize Variables
    array1D=new DynAry1(size);
    brray1D=new DynAry1(size,0);
    
    //Print the Data
    array1D->prntCls(10);
    
    //Mod the data and reprint
    array1D->setCell(size/2,size/2);
    prntAry(array1D,10);
    
    //Mod the b array
    brray1D->setCell(size/2,size/20);
    brray1D->prntCls(10);
    
    //Deallocate memory
    delete array1D,brray1D;
    
    //Exit stage right!
    return 0;
}

void prntAry(DynAry1 *a,int perLine){
    cout<<endl;
    for(int i=0;i<a->getSize();i++){
        cout<<a->getCell(i)<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}