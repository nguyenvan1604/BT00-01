#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char a[30], b[30];
    printf("Nhap chuoi thu 1: ");
    fflush(stdin);
    gets(a);
    printf("Nhap chuoi thu 2: ");
    fflush(stdin);
    gets(b);
    printf("\n-----------------------\n");
    int dem1 = strlen(a) + 1, dem2 = strlen(b) + 1;
    if(dem1 != dem2)
        {
            printf("\n\tN1");
            return 0;
        }
    int i,j;
    char temp;
    for(i=0;i<dem1-1;i++)
        for(j=i+1;j<dem1;j++)
    {
        if(a[i]>a[j])
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        if(b[i]>b[j])
        {
            temp = b[i];
            b[i] = b[j];
            b[j] = temp;
        }
    }
    for(i=0;i<dem1;i++)
        if(a[i] != b[i])
        {
            printf("\n\tNe");
            return 0;
        }
    printf("\n\tY");
    return 0;
}
/* Cach 2
#include<stdio.h>
#include<conio.h>
#include<string.h>

char *sapxep(char *p, int k)
{
    int i,j;
    for(i=0;i<k-1;i++)
        for(j=i+1;j<k;j++)
            if(*(p+i)>*(p+j))
            {
                char temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
    return p;
}

int main()
{
    char a[30], b[30];
    printf("Nhap chuoi thu 1: ");
    fflush(stdin);
    gets(a);
    printf("Nhap chuoi thu 2: ");
    fflush(stdin);
    gets(b);

    printf("\n-----------------------\n");

    int i = strlen(a) + 1, j = strlen(b) + 1;
    if(i != j)
    {
        printf("\n\tN");
        return 0;
    }
    char *p1 = a, *p2 = b;
    p1 = sapxep(p1,i);
    p2 = sapxep(p2,i);
    int k;
    for(k=0;k<i;k++)
        if(*(p1+k) != *(p2+k))
        {
            printf("\n\tN");
            return 0;
        }
    printf("\n\tY");

    printf("\n\n");
    return 0;
}
*/
