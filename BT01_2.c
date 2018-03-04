#include<stdio.h>

 int main()
 {
    float A[2][3] = {1,2,3,4,5,6};
    float *p = A;
    printf("In ra ma tran:\n");
    int i,j;
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
        {
            printf("%6.2f",*(p+i*3+j));
            if(j==3-1)
                printf("\n");
        }
    int n = sizeof(A) / sizeof(float);

    float sum = 0;
    for(i=0;i<n;i++)
        sum += *(p+i);
    printf("Tong cua ma tra tren la: %.2f",sum);
    printf("\n\n");

    return 0;
 }
