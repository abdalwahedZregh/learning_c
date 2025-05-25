#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l9ima1;
    int l9ima2;
    int calc;

    printf("Enter your first number: ");
    scanf("%d", &l9ima1);

    printf("Enter your second number: ");
    scanf("%d", &l9ima2);

    while (1) {
        printf("\n1. +\n2. -\n3. *\n4. /\nChoose your operation: ");
        scanf("%d", &calc);

        if (calc == 1) {
            printf("Result: %d\n", l9ima1 + l9ima2);
            break;
        }
        else if (calc == 2) {
            printf("Result: %d\n", l9ima1 - l9ima2);
            break;
        }
        else if (calc == 3) {
            printf("Result: %d\n", l9ima1 * l9ima2);
            break;
        }
        else if (calc == 4) {
            if (l9ima2 != 0) {
                printf("Result: %d\n", l9ima1 / l9ima2);
                break;
            } else {
                printf("Cannot divide by zero! Please choose another operation.\n");
            }
        } else {
            printf("Invalid operation! Please choose again.\n");
        }
    }

    return 0;
}
