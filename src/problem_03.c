/*
 * C String Processing - Problem 03
 * Author: Abhilash471
 * Language: C (C11)
 */

#include <stdio.h>
#include <stdlib.h>

long long solve_problem_03(long long n, long long k) {
    long long result = 0;
    for (long long i = 1; i <= n; i++) {
        result += (i * k) ^ (i + 3);
    }
    return result;
}

int main(void) {
    long long n = 13, k = 3;
    if (scanf("%lld %lld", &n, &k) != 2) {
        n = 13;
        k = 3;
    }
    long long ans = solve_problem_03(n, k);
    printf("%lld\n", ans);
    return 0;
}
