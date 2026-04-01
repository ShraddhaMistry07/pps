#include <stdio.h>

void sortArray(int arr[], int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSorted Array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void searchArray(int arr[], int n, int key)
{
    int i, found = 0;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found\n");
    }
}

int main()
{
    int arr[50], n, choice, key;

    printf("1. Sorting\n");
    printf("2. Searching\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0 || n > 50)
    {
        printf("Invalid number of elements\n");
        return 0;
    }

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if(choice == 1)
    {
        sortArray(arr, n);
    }
    else if(choice == 2)
    {
        printf("Enter element to search: ");
        scanf("%d", &key);
        searchArray(arr, n, key);
    }
    else
    {
        printf("Invalid Choice\n");
    }

    return 0;
}
