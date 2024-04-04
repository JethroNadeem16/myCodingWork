/* File: test_static.c */
#include "matrix_static.h"

matrix transpose(matrix m){
    int i,j;
    matrix result;
    result = create_empty(m.row_dim, m.col_dim);
    for (i=0; i<m.row_dim; i++)
    for (j=0; j<m.col_dim; j++)
    result.element[i][j] = m.element[j][i];
    return result;
}


int main() 
{
    static T data[] = {1,2,3,4};
    matrix a,b,transa,transb;
    a = create_initvals(2,2,data);
    b = create_empty(2,2);
    equate(&a,&b);
    printf("\n Matrix a:");
    matrix_print(a);
    printf("\n Transpose Matrix a:");
    transa=transpose(a);
    matrix_print(transa);
    printf("\n Matrix b:");
    matrix_print(b);
    printf("\n Transpose Matrix b:");
    transb=transpose(b);
    matrix_print(transb);
    printf("\n a+b:");
    matrix_print(add(a,b));
}

