#include<stdio.h>

int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the all elements of the array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("Select the sorting algorithm:\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Merge Sort\n5. Quick Sort\n");
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
    case 
        break;
    
    default:
        break;
    }
    return 0;
}