#include <stdio.h>
#include <time.h>
#include <math.h>

/* The objective of this program is to find the sum of all even Fibonacci numbers < 4,000,000 */
int main(void)
{
    clock_t begin, end;
    double time;
    unsigned int prev = 1, current = 2, sum = 2;
    unsigned int temp = 0;

    begin = clock();

    while(current <= 4e6){
        temp = current; // save the current number
        current+= prev; // get the new current number
        prev = temp; // update the previous number

        if(!(current & 0x00000001)) // check if current is not odd
            sum += current;
    }
    end = clock();

    time = (double)(end - begin)/ CLOCKS_PER_SEC;
    printf("The sum of all even Fibonacci numbers less than 4,000,000 is %i\n"
            "This took %f seconds to execute!\n ", sum, time);
    return 0;
}

