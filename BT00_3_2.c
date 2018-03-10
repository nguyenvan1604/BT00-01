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

    int n = strlen(a), m = strlen(b);
    if(n != m)
    {
        printf("\n\tN");
        return 0;
    }
    int counta[26] = {};
    int countb[26] = {};
    int i;
    for(i=0;i<n;i++)
    {
        counta[a[i] - 'a']++;
        countb[b[i] - 'a']++;
    }
    for(i=0;i<n;i++)
        if(counta[i] != countb[i])
        {
            printf("\n\tN");
            return 0;
        }
    printf("\n\tY");

    printf("\n\n");
    return 0;
}
