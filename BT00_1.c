#include<stdio.h>

int main()
{
    int A[100];
    int n,i,j;
    //nhap mang
    int *p;
    p = A;
    printf("Nhap kich thuoc mang: ");
    scanf("%d",&n);
    printf("Nhap mang:\n");
    for(i=0;i<n;i++)
    {
        printf("Phan tu thu %d la: ",i+1);
        scanf("%d",p+i);
    }
    //in ra mang
    printf("\nIn ra mang:");
    for(i=0;i<n;i++)
        printf("%2d",*(p+i));
    //in ra mang dao nguoc
    printf("\nIn ra mang dao nguoc: ");
    for(i=n-1;i>=0;i--)
        printf("%2d",*(p+i));
    //tinh tong cua mang
    int S=0;
    for(i=0;i<n;i++)
        S+=*(p+i);
    printf("\nTong cua mang: %d",S);
    //tinh gia tri trung binh
    printf("\nGia tri trung binh cua mang: %4.2f",(float)S/n);
    //tim phan tu lon nhat, lon thu 2, nho nhat,
    int temp;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(*(p+i)<*(p+j))
        {
            temp = *(p+i);
            *(p+i) = *(p+j);
            *(p+j) = temp;
        }
    printf("\nPhan tu lon nhat: %d",*p);
    printf("\nPhan tu lon thu hai: %d",*(p+1));
    printf("\nPhan tu nho nhat: %d",*(p+n-1));
    //sao chep sang mang khac
    int B[100];
    int *p2 = B;
    for(i=0;i<n;i++)
        *(p2+i) = *(p+i);
    //sao chep mang dao nguoc
    for(i=0;i<n;i++)
        *(p2+n-1-i) = *(p+i);
    //chia + tron mang @@
    return 0;
}
