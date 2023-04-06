#include <stdio.h>
int main() {
   int arr[100], n, i, j, temp;
   int second_largest, second_smallest, sum;
   float avg;
   printf("Enter the size of the array: ");
   scanf("%d", &n);
   printf("Enter the elements of the array: ");
   for(i=0; i<n; i++) {
      scanf("%d", &arr[i]);
   }
   for(i=0; i<n; i++) {
      for(j=i+1; j<n; j++) {
         if(arr[i] < arr[j]) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }
   second_largest = arr[1];
   second_smallest = arr[n-2];
   sum = second_largest + second_smallest;
   avg = (float) sum / 2;
   for(i=0; i<n; i++) {
      if(arr[i] == avg) {
         printf("The average of second largest and second smallest elements (%.2f) is present in the array\n", avg);
         return 0;
      }
   }

   printf("The average of second largest and second smallest elements (%.2f) is not present in the array\n", avg);

   return 0;
}
