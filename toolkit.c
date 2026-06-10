#include <stdio.h>
#include "mathlib.h"

int main(void)
{
    int choice;

    do
    {
        printf("= Math Toolkit =\n");
        printf("1. Clamp a value\n");
        printf("2. Compute a power\n");
        printf("3. Prime check\n");
        printf("4. GCD\n");
        printf("5. Array average\n");
        printf("6. Count digits\n");
        printf("7. Quit\n");
        printf("Enter choice (1-7): ");

        fscanf(stdin, "%d", &choice);

        if(choice < 1 || choice > 7)
        {
            printf("Invalid choice.\n");
        }
        else if(choice == 1)
        {
            int value;
            int lo;
            int hi;

            printf("Enter value, lo, hi: ");
            fscanf(stdin, "%d,%d,%d", &value, &lo, &hi);
            printf("clamp(%d,%d,%d) = %d\n", value, lo, hi, clamp(value, lo, hi));
        }
        else if(choice == 2)
        {
            double base;
            int exp;

            printf("Enter base amd exponent: ");
            fscanf(stdin, "%lf %d", &base, &exp);

            printf("power(%.2f, %d) = %.2f\n", base, exp, power(base, exp));
        }
        else if(choice == 3)
        {
            int n;
            printf("Enter n: ");
            fscanf(stdin, "%d", &n);

            if(is_prime(n))
            {
                printf("%d is prime.\n", n);
            }
            else{
                printf("%d is not prime.\n", n);
            }
        }
        else if(choice = 4)
        {
            int a;
            int b;

            printf("Enter a and b: ");
            fscanf(stdin, "%d, %d", &a, &b);

            printf("gcd(%d, %d) = %d\n");
        }
        else if(choice == 5)
        {
            int arr[100];
            int len;
            int i;

            printf("Enter count then values: ");
            fscanf(stdin, "%d", &len);

            for(i = 0; i < len, i++)
            {
                fscanf(stdin, "%d", &arr[i]);
            }

            printf("average = %.2f\n", average(arr, len));
        }
        else if(choice == 6)
        {
            long long n;

            printf("Enter integer: ");
            fscanf(stdin, "%lld", %n);

            printf("%lld has %d digits.\n", n, count_digits(n));
        }
        else
        {
            printf("Goodbye!\n");
        }
    } while (choice != 7);
    return 0;
}