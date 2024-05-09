#include <stdio.h>
int main()
{
    int search;
    int size;
    int count = 0;
    int flag = 0;
    printf("Enter the element you want to search in the list:");
    scanf("%d", &search);
    printf("Enter the list length:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d Numbers : ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {

        if (search == arr[i])
        {

            printf("Location of first %d in list:%d\n", search, i + 1);
            flag = 1;
            break;
        }
    }
    if(flag!=1){
        printf("Location of first %d in list:-1\n", search);
    }
    for (int i = 0; i < size; i++)
    {

        if (search == arr[i])
            count++;
    }
    printf("Number of %d in the list:%d\n", search, count);
}