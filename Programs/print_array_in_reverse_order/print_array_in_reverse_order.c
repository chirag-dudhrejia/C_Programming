#include<stdio.h>
 
int main() {
   int arr[20], i, n;
 
   scanf("%d", &n); /* Accepts the number of elements in the array */

  for (i = 0; i < n; i++) 
    {
     scanf("%d", &arr[i]);
    }

    int ncopy;
	ncopy = n - 1;

	for(i = 0; i < n/2; i++)
    {
    	arr[i] += arr[ncopy];
      	arr[ncopy] = arr[i] - arr[ncopy];
      	arr[i] -= arr[ncopy--];
    }
    
    for (i = 0; i < n; i++) {
      printf("%d\n", arr[i]); // For printing the array elements 
   }
 
   return 0;
}