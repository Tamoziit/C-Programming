#include<stdio.h>
#include<math.h>
int decimalToBinary(int n){
    int bin = 0;
    int rem, i = 1;
    while (n!=0){
        rem = n%2;
        n /= 2;
        bin += rem*i;
        i *= 10;
    }
    return bin;
}
int decimalToOctal(int n){
    int oct = 0, i = 1;
    while (n != 0){
        oct += (n%8)*i;
        n /= 8;
        i *= 10;
    }
    return oct;
}
int octalToDecimal(int n){
    int dec = 0, i = 0, rem;
    while (n != 0){
        rem = n%10;
        n /= 10;
        dec += rem*pow(8,i);
        ++i;
    }
    return dec;
}
int binaryToDecimal(int n){
    int dec = 0, i = 0, rem;
    while (n != 0){
        rem = n%10;
        n /= 10;
        dec += rem*pow(2,i);
        ++i;
    }
    return dec;
}
int main(){
    int n,b;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the base of the given number:\n2 - Binary\n8 - Octal\n10 - Decimal\n");
    scanf("%d", &b);
    switch (b)
    {
        case 2:
            printf("Enter the base you want to convert to:\n8 - Octal\n10 - Decimal\n");
            scanf("%d", &b);
            switch (b)
            {
                case 8:
                    printf("The octal equivalent of %d is %d\n", n, decimalToOctal(binaryToDecimal(n)));
                    break;
                case 10:
                    printf("The decimal equivalent of %d is %d\n", n, binaryToDecimal(n));
                    break;
                default:
                    printf("Invalid base\n");
                    break;
            }
            break;
        case 8:
            printf("Enter the base you want to convert to:\n2 - Binary\n10 - Decimal\n");
            scanf("%d", &b);
            switch (b)
            {
                case 2:
                    printf("The binary equivalent of %d is %d\n", n, decimalToBinary(octalToDecimal(n)));
                    break;
                case 10:
                    printf("The decimal equivalent of %d is %d\n", n, octalToDecimal(n));
                    break;
                default:
                    printf("Invalid base\n");
                    break;
            }
            break;
        case 10:
            printf("Enter the base you want to convert to:\n2 - Binary\n8 - Octal\n");
            scanf("%d", &b);
            switch (b)
            {
                case 2:
                    printf("The binary equivalent of %d is %d\n", n, decimalToBinary(n));
                    break;
                case 8:
                    printf("The octal equivalent of %d is %d\n", n, decimalToOctal(n));
                    break;
                default:
                    printf("Invalid base\n");
                    break;
            }
            break;
    }
    return 0;    
}