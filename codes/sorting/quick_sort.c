/** Divide  : Partition the array A[low....high] into two sub-arrays
  *           A[low....j-1] and A[j+1...high] such that each element
  *           of A[low....j-1] is less than or equal to A[j], which
  *           in turn is is less than or equal to A[j+1...high]. Compute
  *           the index j as part of this partitioning procedure.
  * Conquer : Sort the two sub-arrays A[low....j-1] and A[j+1....high]
  *           by recursive calls to quicksort
  **/

#include<stdio.h>
void quicksort(int *arr, int low, int high)
{
  int pivot, i, j, temp;
  if(low < high) {
    pivot = low; // select a pivot element
    i = low;
    j = high;
    while(i < j) {
      // increment i till you get a number greater than the pivot element
      while(arr[i] <= arr[pivot] && i <= high)
        i++;
      // decrement j till you get a number less than the pivot element
      while(arr[j] > arr[pivot] && j >= low)
        j--;
      // if i < j swap the elements in locations i and j
      if(i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }

    // when i >= j it means the j-th position is the correct position
    // of the pivot element, hence swap the pivot element with the
    // element in the j-th position
    temp = arr[j];
    arr[j] = arr[pivot];
    arr[pivot] = temp;
    // Repeat quicksort for the two sub-arrays, one to the left of j
    // and one to the right of j
    quicksort(arr, low, j-1);
    quicksort(arr, j+1, high);
  }
}
int main()
{
  int arr[20], n, i;
  printf("Enter the size of the array\n");
  scanf("%d", &n);

  printf("Enter the elements to be sorted\n");
  for(i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  quicksort(arr, 0, n-1);

  printf("Sorted array\n");
  for(i = 0; i < n; i++)
    printf("%d ", arr[i]);

  return 0;
}
