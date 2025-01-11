#include <stdio.h>
#include <math.h>

int convertBase(int num, int baseFrom, int baseTo) {
    int result = 0, position = 0;
    while (num != 0) {
        int digit = num % baseTo;
        result += digit * pow(baseFrom, position);
        position++;
        num /= baseTo;
    }
    return result;
}

int main() {
    int num, baseFrom, baseTo;
    char choice;
    do {
        printf("\nMenu: \n1. Convert from Binary \n2. Convert from Octal \n3. Convert from Decimal \n4. Quit\nEnter your choice:");
        scanf(" %c", &choice);
        switch (choice) {
            case '1': baseFrom = 2;
                break;
            case '2': baseFrom = 8;
                break;
            case '3': baseFrom = 10;
                break;
            case '4': printf("Exiting...\n");
                return 0;
            default: printf("Invalid choice. Please enter again.\n");
                continue;
        }

        printf("Enter the number: ");
        scanf("%d", &num);
        printf("Enter the base you want to convert to (2, 8, or 10): ");
        scanf("%d", &baseTo);

        if (baseFrom == baseTo) {
            printf("The number in the given base is the same as the number itself: %d\n", num);
        } else if ((baseFrom == 2 || baseFrom == 8 || baseFrom == 10) && (baseTo == 2 || baseTo == 8 || baseTo == 10)) {
            printf("The %s equivalent of %d is %d\n", baseTo == 2 ? "binary" : (baseTo == 8 ? "octal" : "decimal"), num, convertBase(num, baseFrom, baseTo));
        } else {
            printf("Invalid base\n");
        }
    } while (1);
    return 0;
}
