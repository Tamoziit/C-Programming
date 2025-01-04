#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubbleSort(char **arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar();
    char **strings = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        char buffer[100];
        scanf("%[^\n]", buffer);
        getchar();
        strings[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(strings[i], buffer);
    }
    bubbleSort(strings, n);
    printf("Sorted strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    for (int i = 0; i < n; i++) {
        free(strings[i]);
    }
    free(strings);
    return 0;
}