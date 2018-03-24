#include<stdio.h>
#include<string.h>

void main()
{
    int i,n,l,flag=0;
    char p[10],q[10];
    printf("Enter string ");
    gets(p);
    printf("Enter second string ");
    gets(q);
    l=strlen(p);
    for(i=0;i<l/2;i++)
    {
        if(p[i]==q[l/2+i] && (q[i]==p[l/2+i] || q[i]==p[l/2+1+i] ))
        {
            flag++;
        }
    }
    if(flag==i || flag==i+1)
    {
        printf("True");
    }
    else
    {
        printf("Not True");
    }

}
