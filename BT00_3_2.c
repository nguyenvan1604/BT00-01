#include<stdio.h>

int main()
{
    char s1[] = "ueoai";
    char s2[] = "oaiue";
    int i,j;
    printf("Hai chuoi ban dau: s1(%s) va s2(%s)",s1,s2);
    int dem1=0, dem2=0;
    char temp;
    while(s1[dem1] != NULL)
        dem1++;
    while(s2[dem2] != NULL)
        dem2++;
    if(dem1 != dem2)
        {
            printf("\nHai chuoi khong phai la anagram");
            return 0;
        }
    for(i=0;i<dem1-1;i++)
        for(j=i+1;j<dem1;j++)
    {
        if(s1[i]>s1[j])
        {
            temp = s1[i];
            s1[i] = s1[j];
            s1[j] = temp;
        }
        if(s2[i]>s2[j])
        {
            temp = s2[i];
            s2[i] = s2[j];
            s2[j] = temp;
        }
    }
    for(i=0;i<dem1;i++)
        if(s1[i] != s2[i])
        {
            printf("\nHai chuoi khong phai la anagram");
            return 0;
        }
    printf("\nHai chuoi la anagram");
    return 0;
}
