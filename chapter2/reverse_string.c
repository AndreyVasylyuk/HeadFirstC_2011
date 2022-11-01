#include <stdio.h>

main()
{
    char* alphabet = "abcde";
    print_reverse(alphabet);
}

void print_reverse(char* s)
{
    size_t len = strlen(s);
    char* t = s + len - 1;
    while (t >= s) {
        printf("%c", *t);
        t = t - 1;
    }
    puts("");
}
