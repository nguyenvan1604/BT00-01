#include<stdio.h>

int main()
{
    //In chuoi
    char s[] = "co nhung noi dau tu minh phai vui sau";
    printf("%s",s);

    //Tim do dai chuoi
    int dem = 0;
    while(s[dem] != NULL)
        dem++;
    printf("\nDo dai chuoi: %d",dem);
    //Dem so lan xuat hien cua ky tu

    char ch = 'a';
    int dem2 = 0;
    int i=0, j =0;
    while(s[i] != NULL)
    {
        if(s[i] == ch)
            dem2++;
        i++;
    }
    printf("\nSo lan xuat hien cua ky tu '%c' trong chuoi: %d",ch,dem2);

    //Dem so nguyen am ,phu am
    i=0;
    int dem3 = 0, dem4 = 0;
    while(s[i] != NULL)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            dem3++;
        else
            if(s[i] != 32)
                dem4++;
        i++;
    }
    printf("\nSo nguyen am, phu am trong chuoi la: %d, %d",dem3,dem4);

    //Sao chep chuoi
    char s3[38];
    i=0;
    while(s[i] != NULL)
    {
        s3[i] = s[i];
        i++;
    }
    s3[i] = NULL;
    printf("\nChuoi ban dau: %s",s);
    printf("\nChuoi sao chep: %s",s3);

    //Sap xep ky tu cua chuoi
    char temp;
    for(i=0;i<dem-1;i++)
        for(j=i+1;j<dem;j++)
            if(s3[i]>s3[j])
            {
                temp = s3[i];
                s3[i] = s3[j];
                s3[j] = temp;
            }
    printf("\nChuoi sau khi sap xep: %s",s3);
    //Dao nguoc chuoi
    for(i=0;i<dem/2;i++)
    {
        temp = s[i];
        s[i] = s[dem-1-i];
        s[dem-1-i] = temp;
    }
    printf("\nChuoi dao nguoc: %s",s);

    //tim kiem chuoi
    for(i=0;i<dem/2;i++)//Dao nguoc lai nhu ban dau
    {
        temp = s[i];
        s[i] = s[dem-1-i];
        s[dem-1-i] = temp;
    }
    char s4[] = "dau";
    dem2 = 0;dem3 = 0;dem4 = 0;
    while(s4[dem2] != NULL)
        dem2++;
    i=0;
    while(s[i] != NULL)
    {
        if(s[i] == s4[dem3])
        {
            while(s[i] == s4[dem3]  && s[i] != NULL)
            {
                i++;
                dem3++;
            }
            if(dem3 == dem2 && (s[i] == 32 || s[i] == NULL))
                dem4++;
            else
            while(s[i] != 32)
            {
                i++;
                if(s[i] == NULL)
                    break;
            }
        }
        i++;
        dem3=0;
    }
    printf("\nChuoi '%s' xuat hien %d lan\n", s4, dem4);

    printf("\n----------------------------------\n");

    //So sanh 2 chuoi
    char s5[] = "Hello", s6[] = "hi";
    printf("Hai chuoi ban dau: s5(%s) va s6(%s)",s5,s6);
    dem4 = 1;
    i = 0;
    while(s5[i] != NULL)
    {
        if(s5[i] = s6[i])
        {
            dem4 = 0;
            break;
        };
        i++;
    }
    if(dem4 == 1)
        printf("\nHai chuoi dong nhat");
    else
        printf("\nHai chuoi khong dong nhat");

    //Noi chuoi
    dem2 = 0;
    dem3 = 0;
    while(s5[dem2] != NULL)
        dem2++;
    while(s6[dem3] != NULL)
        dem3++;

    for(i=dem2;i<dem2+dem3;i++)
    {
        s5[i] = s6[j];
        j++;
    }
    s5[i] = NULL;
    printf("\nNoi chuoi s6 vao s5 ta duoc: %s",s5);



    //Trao doi 2 chuoi
    char s7[]="hello", s8[]="hi";
    i = 0;
    while(s7[i] != NULL)
    {
        temp = s7[i];
        s7[i] = s8[i];
        s8[i] = temp;
        i++;
    }
    printf("\nSau khi trao doi ta duoc: s5(%s) va s6(%s)",s7,s8);

    return 0;
}
