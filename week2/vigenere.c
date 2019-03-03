#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int shift(char c);

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
    printf("Argc: %s\n", argv[1]);

      for (int i = 0, n = strlen(argv[1]); i < n; i++)
      {
          if (!isalpha(argv[1][i]))
          {
              printf("Usage: ./vigenere keyword\n");

              return -1;
          }
         int key = shift(argv[1][i]);
         printf("key %i\n", key);
      }
}

int shift(char c)
{
    // 'A' + (p[i] - 'A' + letterKey) % 26);
    printf("c input %c\n", c);
    int key;
    int lowerCase = (c - 'a') % 26;
    int higherCase = (c - 'A') % 26;
//     if (lowerCase > 0)  return lowerCase;
    printf("lowerCase: %d\n", lowerCase);
    printf("higherCase: %d\n", higherCase);
    return 0;
}
