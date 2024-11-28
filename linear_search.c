#include<stdio.h>

int main()
{
    int n,i,key;

    printf("How many elements in the array? ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements in the array: ",n);
    for (i = 0; i< n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The elements in the array is: ");
    for(i = 0;i < n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("Enter Key/Pivot element to find in the array: ");
    scanf("%d",&key);

    for(i = 0;i<n;i++)
    {
        if(arr[i] == key)
        {
            printf("Data found at %d index..",i);
            break;
        }
    }
    if(i == n)
    {
        printf("Data not found!");
    }
}