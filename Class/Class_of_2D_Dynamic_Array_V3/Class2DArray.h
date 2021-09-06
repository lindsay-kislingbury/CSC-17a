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
        DynAry2(int,int,int);
        ~DynAry2();
        prntCls()const;
        void setCell(int,int,int);
        int getCell(int,int)const;
        int getRows()const{return rows;}
        int getCols()const{return cols;}
};

#endif /* CLASS1DARRAY_H */

