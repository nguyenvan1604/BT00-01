#include <stdio.h>
#include <stdlib.h>
typedef struct data
    {
    int a;
    float b;
    } data;
int compare(data x, data y)
{
    if(x.a>y.a || (x.a=y.a && x.b >y.b))
        return 1;
    else
        if(x.a==y.a && x.b == y.b)
            return 0;
        else
            return -1;
}
void bubble_sort(data arr[], int n, int (*f)(data x, data y))
{
    data x,y;
    int i,j;
    for (i=0;i<n-1;i++)
        for(j=i;j<n;j++)
        {
        x = arr[i];
        y = arr[j];
        if (f(x,y)>0)
            {
            data temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
 //   for (i=0;i<n;i++)
 //       printf("%d\t%f\n", arr[i].a, arr[i].b);
}
int main()
{
    data arr[4];
    arr[0].a=1; arr[0].b=2;
    arr[1].a=3; arr[1].b=5;
    arr[2].a=1; arr[2].b=13;
    arr[3].a=-5; arr[3].b=2;
    bubble_sort(arr, 4, compare);
    int i;
    for(i=0; i<4; i++)
        printf("%d\t%f\n", arr[i].a, arr[i].b); //Van in ra dung boi vi khong su dung bien cuc bo trong ham bubble_sỏt
    return 0;
}
