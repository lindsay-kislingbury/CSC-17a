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
void prntAry(DynAry2 *);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables and Initialize
    int rows=10;
    int cols=5;
    DynAry2 *array2D=new DynAry2(rows,cols);
    DynAry2 *brray2D=new DynAry2(rows,cols,0);
    
    //Initialize Variables
    array2D->prntCls();
    
    //Modify the arrays
    array2D->setCell(5,4,50);
    brray2D->setCell(5,4,50);
    array2D->prntCls();
    brray2D->prntCls();
    prntAry(brray2D);
    
    
    //Deallocate memory
    delete array2D;
    
    //Exit stage right!
    return 0;
}

void prntAry(DynAry2 *a){
    cout<<endl;
    for(int row=0;row<a->getRows();row++){
        for(int col=0;col<a->getCols();col++){
            cout<<a->getCell(row,col)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}