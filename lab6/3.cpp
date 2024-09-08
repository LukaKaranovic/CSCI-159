#include <cstdio>

int main() {
    int n, m;
    printf("How many elements does array 1 have? ");
    scanf("%d", &n);
    printf("How many elements does array 2 have? ");
    scanf("%d", &m);
    int arr1[n], arr2[m];

    printf("Enter the elements of array 1: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }   
    printf("Enter the elements of array 2: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }  
    
    int o = 0;
    int arr3[n + m];
    // Checks if element in array 1 is the same in array 2
    for (int i = 0; i < n; i++) {
        bool arr1inarr2 = false;
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                arr1inarr2 = true;
            }
        } // If it isn't the same, will add to array 3.
        if (arr1inarr2 == false) {
            arr3[o] = arr1[i];
            o++;
        } 
    }
    // Checks if element in array 2 is the same in array 1
    for (int i = 0; i < m; i++) {
        bool arr2inarr1 = false;
        for (int j = 0; j < n; j++) {
            if (arr2[i] == arr1[j]) {
                arr2inarr1 = true;
            }
        } // If it isn't the same, will add to array 3
        if (arr2inarr1 == false) {
            arr3[o] = arr2[i];
            o++;
        } 
    }
    printf("The unique elements from the two arrays are: "); 
    for (int i = 0; i < o; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}
