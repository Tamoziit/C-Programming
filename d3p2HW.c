#include <stdio.h>

int main() {
    char alphabet;

    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);

    switch (alphabet) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", alphabet);
            break;
        case 48 ... 57:
            printf("Invalid input.\n");
            break;
        default:
            printf("%c is a consonant.\n", alphabet);
            break;
    }

    return 0;
}
