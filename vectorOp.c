#include<vectorOp.h>
#include <stdlib.h>
int* vAdd(int *A,int *B,int size)
{
    int *C=malloc(sizeof(int)*size);
    int i=0;
    for(i=0;i<size;i++)
    {
        C[i]=A[i]+B[i];
    }
    return C;
    
}
int* vSub(int *A,int *B,int size)
{
    int *C=malloc(sizeof(int)*size);
    int i=0;
    for(i=0;i<size;i++)
    {
        C[i]=A[i]-B[i];
    }
    return C;
}
int vDot(int *A,int *B,int size)
{
    int C=0;
    int i=0;
    for(i=0;i<size;i++)
    {
        C+=A[i]*B[i];
    }
    return C;

}
