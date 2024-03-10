#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, r;
    while (1)
    {
        printf("Enter:\n 1 for Arithemetic operations \n 2 for Bitwise operations \n 3 to Exit\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("Enter 2 nos.: \n");
            scanf("%d %d", &a, &b);
            printf("Enter: \n 1 to Add \n 2 to Subtract \n 3 to Multiply \n");
            scanf("%d", &d);
            switch (d)
            {
            case 1:
                r = a + b;
                break;
            case 2:
                r = a - b;
                break;
            case 3:
                r = a * b;
                break;
            default:
                printf("Wrong Choice!\n");
            }
            if(d == 1 || d == 2 || d == 3)
                printf("Result: %d\n", r);
            break;
        case 2:
            printf("Enter 2 nos.: \n");
            scanf("%d %d", &a, &b);
            printf("Enter: \n 1 for AND \n 2 for OR \n");
            scanf("%d", &d);
            switch (d)
            {
            case 1:
                r = a & b;
                break;
            case 2:
                r = a | b;
                break;
            default:
                printf("Wrong Choice!\n");
            }
            if(d == 1 || d == 2 )
                printf("Result: %d\n", r);
            break;
        case 3:
            printf("End of Program");
            exit(0);
        default:
            printf("Wrong Choice!\n");
        }
    }
    return 0;
}