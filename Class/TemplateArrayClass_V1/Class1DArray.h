/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on October 16th, 2018, 1:40 PM
 * Purpose:  1D Array Class Specification
 */

#ifndef STRUC1DARRAY_H
#define STRUC1DARRAY_H

template<class T>
class DynAry1{
    private:
        int size;
        T *array;
    public:
        DynAry1(int);
        ~DynAry1();
        void prntCls(int);
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
DynAry1<T>::~DynAry1(){
    delete []array;
}
        
template<class T>
void DynAry1<T>::prntCls(int perLine){
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}



#endif /* STRUC1DARRAY_H */

