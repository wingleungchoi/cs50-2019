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
int k = 1;
int main(int argc, string argv[])
{
    char* plaintext = get_string("Plaintext: ");
    printf("Plaintext input: %s\n", plaintext);
    char * ciphertext = encrypt(plaintext);
    printf("Ciphertext: %s\n", ciphertext);
}

char* encrypt(char* plaintext)
{
    int n = strlen(plaintext);
    char* ciphertext = "";
    for (int i = 0; i < n; i++)
    {
        char pi = plaintext[i];
        for (int j = 0; j < k; j ++)
        {
            pi++;
            append(ciphertext, pi);
        }
        printf("ciphertext: %c\n", pi);
    }
    return ciphertext;
}
