/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Purpose:  2D Array Structure
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries
#include "Class2DArray.h"

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables and Initialize
    int rows=10;
    int cols=5;
    DynAry2 array2D(rows,cols);
    
    //Initialize Variables
    array2D.prntCls();
    
    //Deallocate memory
    
    //Exit stage right!
    return 0;
}