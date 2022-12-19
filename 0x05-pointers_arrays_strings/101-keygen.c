#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * keygen - generate password
 * @length: the desired length of the password
 * Return: Always 0
 */
int main(int argc, char **argv)
{
        int p;
        int s;
        int length;

        // Check that a length argument was provided
        if (argc < 2) {
                fprintf(stderr, "Usage: %s LENGTH\n", argv[0]);
                return 1;
        }

        // Parse the length argument
        length = atoi(argv[1]);
        if (length <= 0) {
                fprintf(stderr, "Error: Invalid length\n");
                return 1;
        }

        srand(time(NULL));
        s = 0;
        while (s < 2772 && length > 0) {
                p = (rand() % 128);
                s += p;
                putchar(p);
                length--;
        }
        putchar(2772 - s);
        return 0;
}
