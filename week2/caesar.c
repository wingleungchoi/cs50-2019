#include <cs50.h>
#include <stdio.h>
#include <string.h>

void append(char* s, char c)
{
        int len = strlen(s);
        s[len] = c;
        s[len+1] = '\0';
}

char* encrypt(char* plaintext);
// int k = 1;
int main(int argc, string argv[])
{
    printf("Argc: %2d\n", atoi(argv[1]));
    int k = atoi(argv[1]);
    char* plaintext = get_string("Plaintext: ");
    printf("Plaintext input: %s\n", plaintext);

    int n = strlen(plaintext);
    char ciphertext[n];

    for (int i = 0; i < n; i++)
    {
        char pi = plaintext[i];
        for (int j = 0; j < k; j ++)
        {
            pi++;
            ciphertext[i] = pi;
        }
        printf("ciphertext: %c\n", pi);
    }
    ciphertext[n] = '\0';
    printf("Ciphertext: %s\n", ciphertext);
    return 1;
}

char* encrypt(char* plaintext)
{
    return plaintext;
}
