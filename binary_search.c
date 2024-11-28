#include<stdio.h>

int main()
{
    int n,i,key,beg,end,mid;
    printf("How many elements? ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements in the array(sorted): ");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The elements in the array are: ");
    for(i = 0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");

    printf("Enter Pivot element to search: ");
    scanf("%d",&key);

    beg = 0;
    end = n-1;

    while(beg<=end)
    {
        mid = (beg+end)/2;
        if(arr[mid]==key)
        {
            printf("Data found at %d index",mid);
            break;
        }
        else if(arr[mid]<key)
        {
            beg = mid+1;
        }
        else{
            end = mid-1;
        }
    }

    if(beg>end)
    {
        printf("Data not found!");
    }

    return 0;
}