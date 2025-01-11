#include <stdio.h>

// Function to copy a string
void stringcopy(char *dest, char *src) {
    while ((*dest++ = *src++))
        ;
}

// Function to compare two strings
int comparestr(char *str1, char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return (unsigned char)*str1 - (unsigned char)*str2;
}

// Function to concatenate two strings
void strincat(char *dest, char *src, int n) {
    while (*dest)
        dest++;
    while (*src && n-- > 0) {
        *dest++ = *src++;
    }
    *dest = '\0';
}

// Function to tokenize a string
char* tokenizestr(char *str, char *delim) {
    static char *token;
    if (str)
        token = str;
    else if (!token)
        return NULL;

    char *start = token;
    while (*token) {
        int found_delim = 0;
        for (int i = 0; delim[i] != '\0'; i++) {
            if (*token == delim[i]) {
                found_delim = 1;
                break;
            }
        }
        if (found_delim) {
            *token = '\0';
            token++;
            return start;
        }
        token++;
    }
    if (start == token) // If no delimiter was found and the string is empty
        return NULL;
    else { // If the string ends with non-delimiter characters
        token = NULL;
        return start;
    }
}

int main() {
    int ch;
    printf("1. strcpy\n");
    printf("2. strcmp\n");
    printf("3. strncat\n");
    printf("4. strtok\n");
    printf("Enter choice: ");
    scanf("%d", &ch);
    getchar(); // consume newline character

    switch (ch){
        case 1:
            printf("Enter source string: ");
            char str1[100], str2[100];
            scanf("%[^\n]", str2);
            getchar(); // consume newline character
            stringcopy(str1, str2);
            printf("strcpy: %s\n", str1);
            break;
        case 2:
            printf("Enter two strings: ");
            char str3[100], str4[100];
            scanf(" %[^\n]", str3);
            getchar(); // consume newline character
            scanf(" %[^\n]", str4);
            getchar(); // consume newline character
            int result = comparestr(str3, str4);
            printf("strcmp: %d\n", result);
            break;
        case 3:
            printf("Enter two strings: ");
            char str5[100], str6[100];
            scanf(" %[^\n]", str5);
            getchar(); // consume newline character
            scanf(" %[^\n]", str6);
            getchar(); // consume newline character
            int num;
            printf("Enter number of characters to concatenate: ");
            scanf("%d", &num);
            getchar(); // consume newline character
            strincat(str5, str6, num);
            printf("strncat: %s\n", str5);
            break;
        case 4:
            printf("Enter a string: ");
            char str7[100], delim[100];
            scanf(" %[^\n]", str7);
            getchar(); // consume newline character
            printf("Enter delimiter: ");
            scanf(" %[^\n]", delim);
            getchar(); // consume newline character
            char *token = tokenizestr(str7, delim);
            while (token) {
                printf("Token: %s\n", token);
                token = tokenizestr(NULL, delim);
            }

            break;
    }
    return 0;
}
