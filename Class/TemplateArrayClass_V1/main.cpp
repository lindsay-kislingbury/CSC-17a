/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on November 21st, 2018, 1:40 PM
 * Purpose:  1D Template Array Class
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
    DynAry1<int> array1D(size);
    DynAry1<float> array1D2(size);
    
    //Print the Data
    array1D.prntCls(10);
    array1D2.prntCls(10);
    
    //Exit stage right!
    return 0;
}