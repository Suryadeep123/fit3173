#include <stdio.h> 
  
void swap(int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
  
// bubble sort algorithm
void bubbleSort(int arr[], int n) 
{ 
   for (int i = 0; i < n-1; i++)       
       for (int j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 
  
/* print data elements in an array */
void printArray(int arr[], int size) 
{ 
    for (int i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
}
// main function to drive the program
int main()
{
    int arr[] = {62, 14, 52, 10, 2, 101, 98};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("The sorted array is : \n");
    printArray(arr, n);
    return 0;
}
