#include<stdio.h>
#define size 3
int main()
{
    int A[size][size], B[size][size], C[size][size], D[size][size], E[size][size];
    int i,j,k;
    int *p1=A, *p2=B, *p3=C, *p4=D, *p5=E;
    int sum;
    printf("Nhap ma tran 1:\n");
    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
            scanf("%d",p1+i*size+j);

    printf("Nhap ma tran 2:\n");
    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
            scanf("%d",p2+i*size+j);

    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
            *(p3+i*size+j) = *(p1+i*size+j) - *(p2+i*size+j);



    printf("\nKet qua tru hai ma tran:\n");
    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
            printf("%3d",*(p3+i*size+j));

    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
            *(p4+i*size+j) = *(p1+i*size+j) + *(p2+i*size+j);

    printf("\nKet qua cong hai ma tran:\n");
    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
            printf("%3d",*(p4+i*size+j));

    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
        {
            sum = 0;
            for(k=0;k<size;k++)
                sum += *(p1+i*size+k) * *(p2+k*size+j);
            *(p5+i*size+j) = sum;
        }

    printf("\nKet qua nhan hai ma tran:\n");
    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
            printf("%4d",*(p5+i*size+j));

    return 0;
}
