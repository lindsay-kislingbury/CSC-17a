/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Purpose:  2D Array Class specification
 */

#ifndef CLASS2DARRAY_H
#define CLASS2DARRAY_H

class DynAry2{
    private:
        int rows;
        int cols;
        int **array;
    public:
        DynAry2(int,int);
        ~DynAry2();
        prntCls();
};



#endif /* CLASS1DARRAY_H */

