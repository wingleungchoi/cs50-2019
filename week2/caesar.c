#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int getLetterKey(char c);
int shift(char c, int key);

int main(int argc, string argv[])
{
    if (argc < 2) {
        printf ("Dont' forget to pass arguments!\n");
        return(-1);
    }
    if (argc > 2) {
        printf ("Usage: ./vigenere keyword\n");
        return(-1);
    }
    char* plaintext = get_string("Plaintext: ");
    printf("Plaintext input: %s\n", plaintext);

      for (int i = 0, n = strlen(plaintext); i < n; i++)
      {
          if (!isalpha(plaintext[i]))
          {
              printf("Usage: ./vigenere keyword\n");

              return -1;
          }
         int letterKey = getLetterKey(argv[1][0]);
         int newChar = shift(plaintext[i], letterKey);
         printf("newChar %c\n", newChar);
      }
}

int getLetterKey(char c)
{
    c = tolower(c);
    return (c - 'a') % 3;
}

int shift(char c, int key)
{
    // 'A' + (p[i] - 'A' + letterKey) % 26);
    printf("c input %c\n", c);
    int lowerCase = c - 'a';
    int higherCase = c - 'A';
    if (lowerCase >= 0)  return ('a' + (lowerCase + key));
    return ('A' + (higherCase + key));
}
