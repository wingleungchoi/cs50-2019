#include <cs50.h>
#include <stdio.h>

int check_number(void);
void build_pyramid(int n);

int main(void)
{
    int number = check_number();
    // int number = get_int("Height: ");
    printf("Input Height: %i\n", number);
    build_pyramid(number);
}

int check_number(void)
{
    int n = 0;
    do
    {
        printf("Number must be between 1 and 8\n");
        n = get_int("Height: ");        
    }
    while (n > 8 || n < 1);
    return n;
}

void build_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (2 * n) + 1; j++)
        {
            if (i + j < n - 1)
                printf(" ");
            else if (j == n)
                printf(" ");
            else if (j > n + i + 1)
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }
}
