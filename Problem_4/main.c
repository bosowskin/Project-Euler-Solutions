#include <stdio.h>
#include <math.h>
#include <time.h>

int IsPalindrome(int n);


int IsPalindrome(int n){

    int i = 0;
    int save = n;
    int count = 0;
    char digits[12];

    while(n > 0){ // extract digits
        digits[count++] = n % 10;
        n /= 10;
    }
    for(i = 0, count-= 1; count >=i; i++, count--) // compare digits
        if(digits[i] != digits[count])
            return 0;
    return save;





}
/* Finds the largest palindrome produced by multiplying 2 three digit numbers */
int main(void)
{
    clock_t begin, end;
    double time;
    int i = 1, j = 1;
    int v = 0, t;

    begin = clock();
    for(i = 1; i <= 999 ;i++){ // total brute force right here
        for(j = 1; j <= 999; j++){
            t = IsPalindrome(i * j);
            t > v ? v = t: t;
        }
    }
    end = clock();
    time = (double)(end-begin)/ CLOCKS_PER_SEC;

    printf("The largest Palindrome by multiplying two 3 digit numbers is %i!\n"
           "It took %6.10f seconds to compute this!\n",v, time);
    return 0;
}

