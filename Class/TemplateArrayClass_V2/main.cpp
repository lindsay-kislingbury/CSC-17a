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

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables and Initialize
    int size=100;
    DynAry1<short> *array1D;
    DynAry1<unsigned short> *array1D2;
    
    //Initialize Variables
    array1D=new DynAry1<short>(size);
    array1D2=new DynAry1<unsigned short>(size);
    
    //Print the Data
    array1D->prntCls(10);
    array1D2->prntCls(10);
    
    //Deallocate memory
    delete array1D;
    delete array1D2;
    
    //Exit stage right!
    return 0;
}