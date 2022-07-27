#include<stdio.h>
//Bubble Sort Function
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the all elements of the array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("Select the sorting algorithm:\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Merge Sort\n5. Quick Sort\nEnter your choice: ");
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        bubbleSort(array,size);
        break;
    
    default:
        break;
    }
    printf("The sorted array is: ");
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    return 0;
}