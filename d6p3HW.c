#include <stdio.h>
void count_repeated_characters(char str[]) {
    int count[256] = {0}; 
    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }
    printf("Repeated characters and their counts: \n");
    for (int i = 0; i < 256; i++) {
        if (count[i] > 1) {
            printf("%c : %d\n", i, count[i]);
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);
    count_repeated_characters(str);

    return 0;
}
