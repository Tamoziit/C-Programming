#include <stdio.h>

void count_and_replace(char str[]) {
    int blanks = 0, tabs = 0, newlines = 0;
    int length = 0;

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length; i++) {
        if (str[i] == ' ') {
            blanks++;
        }
        else if (str[i] == '\t') {
            tabs++;
            // Shift characters to the right starting from the end
            for (int j = length; j > i; j--) {
                str[j] = str[j - 1];
            }
            // Replace tab with \t
            str[i] = '\\'; 
            str[i + 1] = 't';
            length++;
        }
        else if (str[i] == '\n') {
            newlines++;
            // Shift characters to the right starting from the end
            for (int j = length; j > i; j--) {
                str[j] = str[j - 1];
            }
            // Replace newline with \n
            str[i] = '\\'; 
            str[i + 1] = 'n';
            // Update the length of the string
            length++;
        }
    }

    printf("Number of blank spaces: %d\n", blanks);
    printf("Number of tabs: %d\n", tabs);
    printf("Number of new lines: %d\n", newlines);
    printf("Modified line of text: %s\n", str);
}

int main() {
    char str[100];

    printf("Enter a String :");
    scanf("%[^$]", str);

    count_and_replace(str);

    return 0;
}
