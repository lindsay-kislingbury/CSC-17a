/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Purpose:  1D Array Class Specification
 */

#ifndef STRUC1DARRAY_H
#define STRUC1DARRAY_H

class DynAry1{
    private:
        int size;
        int *array;
    public:
        DynAry1(int);
        ~DynAry1();
        void prntCls(int);
};



#endif /* STRUC1DARRAY_H */

