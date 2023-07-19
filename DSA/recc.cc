#include <stdio.h>

#include <stdio.h>

void decimalToBinary(int decimal) {
    if (decimal > 0) {
        decimalToBinary(decimal / 2);
        printf("%d", decimal % 2);
    }
}

int main() {
    int decimal = 10;

    printf("Decimal: %d\nBinary: ", decimal);
    decimalToBinary(decimal);
    printf("\n");

    return 0;
}
#include <stdio.h>

int main() {
    int decimal=10;
    int binary[32];
    int i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    printf("Decimal: %d\nBinary: ", decimal);

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");

    return 0;
}
//convert decimal to binary 
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, j, bin[32];
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    i = 0;
    while (n > 0)
    {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary of the given number= ");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", bin[j]);
    }
    return 0;
}
#include <stdio.h>

int main() {
    int decimal = 10;
    int tempDecimal = decimal;
    int binary[32];
    int i = 0;

    while (tempDecimal > 0) {
        binary[i] = tempDecimal % 2;
        tempDecimal /= 2;
        i++;
    }

    printf("Decimal: %d\nBinary: ", decimal);

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");

    return 0;
}

