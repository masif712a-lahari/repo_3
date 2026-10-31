#include <stdio.h>

int main(void)
{
    int h, m, s;
    printf("Enter hour minute second (h:m:s): ");
    scanf("%i:%i:%i", &h, &m, &s);
    printf("HOUR : %i\n", h);
    printf("minute : %i\n", m);
    printf("seconf : %i\n", s);

    return 0;
}