#include<stdio.h>
int main()
{
    int n,i;
    printf("\nEnter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("\nInput the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe second smallest element is %d\n",arr[1]);
    return 0;
}
