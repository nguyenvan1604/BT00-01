//Kiem tra ma phuong
#include<stdio.h>
#define size 3

int main()
{
    int A[size][size]; //= {{2,9,4},{7,5,3},{6,1,8}};
    int *p = A;
    int i,j;
    int sum,sum1,sum2;
    int flag;
    printf("Nhap ma tran:\n");
    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
        {
            printf("A[%d][%d] = ",i+1,j+1);
            scanf("%d",p+i*size+j);
        }

    sum = 0;
    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
            if(i==j)
                sum += *(p+i*size+j);

    for(i=0;i<size;i++)
    {
        sum1 = 0;
        for(j=0;j<size;j++)
            sum1 += *(p+i*size+j);
        if(sum1==sum)
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }

    for(i=0;i<size;i++)
    {
        sum2 = 0;
        for(j=0;j<size;j++)
            sum2 += *(p+j*size+i);
        if(sum2==sum)
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    if(flag==1)
        printf("\nMa tran tren la ma phuong");
    else
        printf("\nMa tran tren khong la ma phuong");

    printf("\nTong duong cheo cua ma tran la: %d",sum);

    sum = 0;
    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
            sum += *(p+i*size+j);

    printf("\nTong tat ca phan tu cua ma tran la: %d",sum);

    int temp;
    for(i=1;i<size;i++)
        for(j=0;j<i;j++)
        {
            temp = *(p+i*size+j);
            *(p+i*size+j) = *(p+j*size+i);
            *(p+j*size+i) = temp;
        }

    printf("\nMa tran chuyen vi cua ma tran tren la:\n");
    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
            printf("%2d\n",*(p+i*size+j));

    return 0;
}
