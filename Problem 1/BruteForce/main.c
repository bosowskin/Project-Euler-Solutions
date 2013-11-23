#include <stdio.h>

int main(void)
{

    int i = 0, j = 0;

    for(i = 0; i < 1000; i++)
        (i % 5 == 0 || i % 3 == 0) ? (j+= i):j;
    printf("The answer is %i\n", j);

}

