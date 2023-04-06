#include <stdio.h>
#include <limits.h>

int minJumps(int arr[], int n) {
    if (n <= 1) {
        
        return 0;
    }

    if (arr[0] == 0) {
        
        return -1;
    }

    int jumps = 1; // Minimum number of jumps needed to reach end
    int steps = arr[0]; // Maximum number of steps we can take from current position
    int maxReach = arr[0]; // Maximum index we can reach from the current position

    for (int i = 1; i < n; i++) {
        if (i == n-1) {
            
            return jumps;
        }

       
        maxReach = (i + arr[i] > maxReach) ? i + arr[i] : maxReach;

        
        steps--;

        if (steps == 0) {
            jumps++;

            if (i >= maxReach) {
                
                return -1;
            }

            
            steps = maxReach - i;
        }
    }

    
    return -1;
}

int main() {
    int arr[] = {2, 3, 1, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minJumpsNeeded = minJumps(arr, n);

    if (minJumpsNeeded == -1) {
        printf("The end of the array is not reachable.\n");
    } else {
        printf("Minimum number of jumps needed to reach end: %d\n", minJumpsNeeded);
    }

    return 0;
} 
