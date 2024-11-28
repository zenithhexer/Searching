Binary search is an efficient algorithm for finding a target value within a sorted array or list. It works by repeatedly dividing the search interval in half. If the value of the target is less than the item in the middle of the interval, the search continues in the lower half; otherwise, it continues in the upper half. This process is repeated until the target is found or the search interval is empty.

## Steps:

   1. Start with the entire sorted array or list.
   2. Find the middle element of the list.
   3. If the target is equal to the middle element, return the position.
   4. If the target is smaller than the middle element, repeat the search in the left half.
   5. If the target is larger than the middle element, repeat the search in the right half.
   6. Continue halving the search range until the target is found or the range is empty.

## Time Complexity:

  - Best case: O(1)O(1) (if the target is found in the middle).
  - Worst case: O(log⁡n)O(logn), where nn is the number of elements in the list.

## Advantages:

  Efficient for large datasets because of its logarithmic time complexity.

## Limitations:

  The list or array must be sorted for binary search to work.

  The code for binary search is given below:
  ```bash
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
    
  ```

# Linear Search:

Linear search, also known as sequential search, is a straightforward algorithm for finding a target value within an array or list. It checks each element of the array one by one until the target is found or all elements have been checked.

## Steps:

 1.  Start with the first element in the array.
  2. Compare the target with the current element.
  3. If the target matches the current element, return the index.
  4. If not, move to the next element and repeat the process.
  5. Continue until either the target is found or all elements have been checked.

## Time Complexity:

   - Best case: O(1)O(1) (if the target is the first element).
   - Worst case: O(n)O(n), where nn is the number of elements in the list.

## Advantages:

  - Works on both sorted and unsorted data.
  - Simple to implement.

## Limitations:

  Inefficient for large datasets, as it checks each element one by one.
  
  The code for linear search is given below:
  ```bash
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
  ```
