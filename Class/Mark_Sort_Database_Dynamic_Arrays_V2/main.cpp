/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 29th, 2021, 2:50 PM
 * Purpose:  Mark Sort Dynamic Arrays
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
int *filData(int);
int *filIndx(int);
void prntAry(int *,int,int);
void prntAry(int *,int *,int,int);
void markSrt(int *,int *,int);
void reAloc8(int *,int *);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int size=100;
    int *array,*index;
    
    //Initialize or input i.e. set variable values
    array=filData(size);
    index=filIndx(size);
    
    //Display the outputs
    cout<<"The Original Array"<<endl;
    prntAry(array,size,10);
    cout<<"The Original Index Array"<<endl;
    prntAry(index,size,10);
    cout<<"The Original Array Using the Original Indexed Array"<<endl;
    prntAry(array,index,size,10);
    
    //Sorted List
    markSrt(array,index,size);
    
    //Display the outputs
    cout<<"The Original Array after sorting"<<endl;
    prntAry(array,size,10);
    cout<<"The Indexed Array after sorting"<<endl;
    prntAry(index,size,10);
    cout<<"The Original Array with Sorted Indexed Array"<<endl;
    prntAry(array,index,size,10);
    
    //Clean up
    reAloc8(array,index);

    //Exit stage right or left!
    return 0;
}

void markSrt(int *a,int *idx,int n){
    for(int j=0;j<n-1;j++){
        for(int i=j+1;i<n;i++){
            if(*(a+*(idx+j))>*(a+*(idx+i))){
                int temp=*(idx+i);
                *(idx+i)=*(idx+j);
                *(idx+j)=temp;
            }
        }
    }
}

int *filData(int n){
    n=n<2?2:n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        *(a+i)=rand()%90+10;//[10-99]  Just 2 digit numbers
    }
    return a;
}

int *filIndx(int n){
    n=n<2?2:n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        *(a+i)=i;
    }
    return a;
}

void reAloc8(int *a,int *i){
    delete []a;
    delete []i;
}
void prntAry(int a[],int idx[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<*(a+*(idx+i))<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}