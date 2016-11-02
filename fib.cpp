#include<stdio.h>
#include "fib.h"

int fibonacci(int n){

    int a =0, b=1;
    int c = 0;

    if (n == 1) return 0;
    if (n == 2) return 1;
    if (n <= 0) return 0;

    for(int i = 2; i<=n; i++){
        c = a+b;
        a = b;
        b = c;
    }
    return c;
}
