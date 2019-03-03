#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
  }

}
