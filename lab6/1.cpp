#include <cstdio>

void remove_all_occurrences(int arr[], int value, int n) {
    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != value) {
            arr[i - counter] = arr[i];
        } else {
            counter++;
        }
    }
    
    for (int i = 0; i < (n - counter); i++) {
        printf("%d ", arr[i]);
    }

}

int main() {
    int n;
    printf("How big is your array? ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements for the array one at a time: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int value;
    printf("What value do you want to delete? ");
    scanf("%d", &value);
    remove_all_occurrences(arr, value, n);
    return 0;
}
