#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *s)
{
    int l = strlen(s), i;
    char t;
    for (i = 0; i < l / 2; i++) // Modified loop to iterate only till half length
    {
        t = s[i];
        s[i] = s[l - 1 - i];
        s[l - 1 - i] = t;
    }
}

void concat(char *s1, char *s2)
{
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    s1 = realloc(s1, (l1 + l2 + 1) * sizeof(char)); // Reallocate memory for s1 to fit both strings and null terminator
    strcat(s1, s2);                                 // Use strcat to concatenate s2 to s1
}

int compare(char *s1, char *s2)
{
    return strcmp(s1, s2); // Use strcmp for string comparison
}

char *substring(char *s, int start, int n)
{
    int len = strlen(s);
    if (start >= len || start < 0 || (start + n) > len)
        return NULL;
    char *sub = (char *) malloc((n + 1) * sizeof(char)); // Allocate memory for sub
    strncpy(sub, s + start, n);                          // Use strncpy to copy substring
    sub[n] = '\0';                                       // Add null terminator
    return sub;
}

void display(char *s)
{
    printf("%s\n", s);
}

int main()
{
    int l1, l2, i, palindrome;
    printf("Enter length of the 2 strings\n");
    scanf("%d %d", &l1, &l2);
    char *s1 = (char *) malloc((l1 + 1) * sizeof(char)); // Allocate memory for s1 and s2
    char *s2 = (char *) malloc((l2 + 1) * sizeof(char));
    printf("Enter 1st String\n");
    scanf(" %[^\n]s", s1); // Read input string with spaces
    printf("Enter 2nd String\n");
    scanf(" %[^\n]s", s2);
    printf("S1 : ");
    display(s1);
    printf("S2 : ");
    display(s2);
    int ch;
    do
    {
        printf("Enter choice:\n 1. Reverse s1 \n 2. Reverse s2 \n 3. Concat s1 at the end of s2 \n 4. Concat s2 at the end of s1 "
               "\n 5. Compare s1 & s2 \n 6. Check Palindrome \n 7. Get substring \n 8. Exit \n");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                reverse(s1);
                display(s1);
                break;
            case 2:
                reverse(s2);
                display(s2);
                break;
            case 3:
                concat(s1, s2);
                display(s1);
                break;
            case 4:
                concat(s2, s1);
                display(s2);
                break;
            case 5:
                printf("Result = %d\n", compare(s1, s2));
                break;
            case 6:
                printf("Enter 1 to check palindrome for s1 & 2 for s2\n");
                int x, i, f = 0;
                scanf("%d", &x);
                switch (x)
                {
                    case 1:
                        palindrome = 1;
                        for (i = 0; i < l1 / 2; i++)
                        {
                            if (s1[i] != s1[l1 - 1 - i])
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
                        for (i = 0; i < l2 / 2; i++)
                        {
                            if (s2[i] != s2[l2 - 1 - i])
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
                printf("Enter start index & length\n");
                int st, len;
                scanf("%d %d", &st, &len);
                printf("Enter 1 to select s1 & 2 for s2\n");
                int cc;
                scanf("%d", &cc);
                if (cc == 1)
                {
                    char *sub = substring(s1, st, len);
                    if (sub != NULL)
                        display(sub);
                    else
                        printf("Invalid substring range\n");
                    free(sub); // Free memory allocated for sub
                }
                else if (cc == 2)
                {
                    char *sub = substring(s2, st, len);
                    if (sub != NULL)
                        display(sub);
                    else
                        printf("Invalid substring range\n");
                    free(sub); // Free memory allocated for sub
                }
                else
                {
                    printf("Wrong Choice!\n");
                }
                break;
            case 8:
                printf("End of program\n");
                break;
            default:
                printf("Wrong Choice!\n");
        }
    }
    while (ch != 8);
    free(s1); // Free memory allocated for s1 and s2
    free(s2);
    return 0;
}
