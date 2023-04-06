#include <stdio.h>

int main() {
   int arr[] = {2, 7, 1, 23, 5, 7, 2, 23};
   int n = sizeof(arr) / sizeof(int);
   int even[n], odd[n], i, j = 0, k = 0;

   
   for(i=0; i<n; i++) {
      if(arr[i] % 2 == 0) {
         even[j] = arr[i];
         j++;
      } else {
         odd[k] = arr[i];
         k++;
      }
   }

   
   printf("The even elements are:\n");
   for(i=0; i<j; i++) {
      printf("%d ", even[i]);
   }
   printf("\n");

   printf("The odd elements are:\n");
   for(i=0; i<k; i++) {
      printf("%d ", odd[i]);
   }

   return 0;
}
