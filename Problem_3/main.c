#include <stdio.h>
#include <time.h>
#include <math.h>


/* This program finds the largest prime factor of the number 600851475143; */

int LargestFactor(long long n);

static long long num = 600851475143;
//static long long num = 24;

int LargestFactor(long long n){
     int z = 2;

     while((long long) z * z <= n){
         if(n % z == 0){
             n/= z;
             printf("%i is a prime factor...\n", z);
         }
         else
             z++;
     }
     if (n > 1)
         return n;
     else
         return 0;

}

int main(void)
{
    clock_t begin, end;
    double time;

    int i;
    begin = clock();

    i = LargestFactor(num);

    end = clock();

    time = (double)(end - begin)/CLOCKS_PER_SEC;

    printf("The largest prime factor of %lld is %i!\n It took %f seconds to run this code.\n", num, i, time);
    return 0;
}




