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
    printf("The common elements in the two arrays are: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j])
            printf("%d ", arr1[i]);
        }
    }
    printf("\n");
    return 0;
}
