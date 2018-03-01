#include<stdio.h>

 int main()
 {
    float A[2][3] = {1,2,3,4,5,6};
    int n = sizeof(A) / sizeof(float);
    float *p = A;
    int i;
    float sum = 0;
    for(i=0;i<n;i++)
        sum += *(p+i);
    printf("%.2f", sum);

    return 0;
 }
