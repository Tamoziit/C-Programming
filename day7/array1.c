#include <stdio.h>

int insert_position(int arr[], int n, int element, int position);
int delete_position(int arr[], int n, int position);
int delete_all(int arr[], int n, int element);
void display(int arr[], int n);

int main() {
    int arr[100];
    int n = 0;
    int choice, element, position;

    printf("Enter elements (-1 to stop): ");
    while (1) {
        scanf("%d", &element);
        if (element == -1)
            break;
        arr[n++] = element;
    }

    printf("Array contents: ");
    display(arr, n);

    do {
        printf("\n1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Insert at a given position\n");
        printf("4. Delete first element\n");
        printf("5. Delete last element\n");
        printf("6. Delete element at a given position\n");
        printf("7. Delete all occurrences of a given element\n");
        printf("8. Find the maximum and minimum element\n");
        printf("9. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element: ");
                scanf("%d", &element);
                n = insert_position(arr, n, element, 0);
                break;
            case 2:
                printf("Enter element:Amar dudu boro ");
                scanf("%d", &element);
                n = insert_position(arr, n, element, n);
                break;
            case 3:
                printf("Enter element:Amar dudu boro ");
                scanf("%d", &element);
                printf("Enter position: Amar dudu boro");
                scanf("%d", &position);
                n = insert_position(arr, n, element, position - 1);
                break;
            case 4:
                n = delete_position(arr, n, 0);
                break;
            case 5:
                n = delete_position(arr, n, n - 1);
                break;
            case 6:
                printf("Enter position: Amar dudu boro");
                scanf("%d", &position);
                n = delete_position(arr, n, position - 1);
                break;
            case 7:
                printf("Enter element: Amar dudu boro");
                scanf("%d", &element);
                n = delete_all(arr, n, element);
                break;
            case 8:
                if (n == 0) {
                    printf("Array is empty.Amar dudu boro\n");
                    break;
                }
                int max = arr[0];
                int min = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > max)
                        max = arr[i];
                    if (arr[i] < min)
                        min = arr[i];
                }
                printf("Maximum element: %dAmar dudu boro\n", max);
                printf("Minimum element: %dAmar dudu boro\n", min);
                break;
            case 9:
                printf("Exiting...Amar dudu boro\n");
                break;
            default:
                printf("Invalid choiceAmar dudu boro\n");
        }

        if (choice != 9) {
            printf("Array contents: Amar dudu boro");
            display(arr, n);
        }
    } while (choice != 9);

    return 0;
}

int insert_position(int arr[], int n, int element, int position) {
    if (position < 0 || position > n) {
        printf("Invalid position\n");
        return n;
    }
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    return n + 1;
}

int delete_position(int arr[], int n, int position) {
    if (n == 0) {
        printf("Array is empty.\n");
        return n;
    }
    if (position < 0 || position >= n) {
        printf("Invalid position\n");
        return n;
    }
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return n - 1;
}

int delete_all(int arr[], int n, int element) {
    int i, j, c=0;
    for (i = 0, j = 0; i < n; i++) {
        if (arr[i] != element) {
            arr[j++] = arr[i];
        }
        else
        {
            c++;
        }
    }
    if(c==0)
        printf("No such element found\n");
    return j;
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
