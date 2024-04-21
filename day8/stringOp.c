#include <stdio.h>
#include <stdlib.h>

void reverse(char* s);
void concat(char* s1, char* s2);
int compare(char* s1, char* s2);
char* substring(char* s, int start, int n);
int string_length(const char* s);

int main() {
    int i, palindrome;
    char* s1 = NULL;
    char* s2 = NULL;
    int choice, start, n;

    s1 = (char*)malloc(100 * sizeof(char));
    s2 = (char*)malloc(100 * sizeof(char));

    printf("Enter the first string: ");
    scanf("%s", s1);
    printf("Enter the second string: ");
    scanf("%s", s2);

    printf("Menu:\n");
    printf("1. Reverse s1\n");
    printf("2. Reverse s2\n");
    printf("3. Concatenate s1 at the end of s2\n");
    printf("4. Concatenate s2 at the end of s1\n");
    printf("5. Compare s1 and s2\n");
    printf("6. Check palindrome\n");
    printf("7. Get substring\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            reverse(s1);
            printf("Reversed s1: %s\n", s1);
            break;
        case 2:
            reverse(s2);
            printf("Reversed s2: %s\n", s2);
            break;
        case 3:
            concat(s1, s2);
            printf("Concatenated s1 at the end of s2: %s\n", s2);
            break;
        case 4:
            concat(s2, s1);
            printf("Concatenated s2 at the end of s1: %s\n", s1);
            break;
        case 5:
            printf("Comparison result: %d\n", compare(s1, s2));
            break;
        case 6:
            printf("Enter 1 to check palindrome for s1 & 2 for s2\n");
                int x, i, f = 0;
                scanf("%d", &x);
                switch (x)
                {
                    case 1:
                        palindrome = 1;
                        for (i = 0; i < string_length(s1) / 2; i++)
                        {
                            if (s1[i] != s1[string_length(s1) - 1 - i])
                            {
                                palindrome = 0;
                                break;
                            }
                        }
                        if (palindrome)
                            printf("Palindrome\n");
                        else
                            printf("Not Palindrome\n");
                        break;
                    case 2:
                        palindrome = 1;
                        for (i = 0; i < string_length(s2) / 2; i++)
                        {
                            if (s2[i] != s2[string_length(s2) - 1 - i])
                            {
                                palindrome = 0;
                                break;
                            }
                        }
                        if (palindrome)
                            printf("Palindrome\n");
                        else
                            printf("Not Palindrome\n");
                        break;
                    default:
                        printf("Wrong Choice!\n");
                }
                break;
        case 7:
            printf("Enter start index and length: ");
            scanf("%d %d", &start, &n);
            if (start < 0 || start >= string_length(s1) || n < 0 || start + n > string_length(s1)) {
                printf("Invalid start index or length.\n");
            } else {
                char* sub = substring(s1, start, n);
                if (sub)
                    printf("Substring: %s\n", sub);
                else
                    printf("Invalid start index or length.\n");
                free(sub);
            }
            break;
        default:
            printf("Invalid choice\n");
    }

    free(s1);
    free(s2);
    return 0;
}

void reverse(char* s) {
    int length = string_length(s);
    int i, j;
    char temp;
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

void concat(char* s1, char* s2) {
    int length1 = string_length(s1);
    int length2 = string_length(s2);
    int i, j = 0;
    for (i = length1; i < length1 + length2; i++) {
        s1[i] = s2[j++];
    }
    s1[i] = '\0';
}

int compare(char* s1, char* s2) {
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

char* substring(char* s, int start, int n) {
    int length = string_length(s);
    if (start < 0 || start >= length || n < 0 || start + n > length) {
        return NULL;
    }
    char* sub = (char*)malloc((n + 1) * sizeof(char));
    int i;
    for (i = 0; i < n; i++) {
        sub[i] = s[start + i];
    }
    sub[i] = '\0';
    return sub;
}

int string_length(const char* s) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}
