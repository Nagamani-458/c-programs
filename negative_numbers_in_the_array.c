#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   j=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                if(i!=j)
                {
