/*
 * C String Processing - Problem 09
 * Author: Abhilash471
 * Language: C (C11)
 */

#include <stdio.h>
#include <stdlib.h>

long long solve_problem_09(long long n, long long k) {
    long long result = 0;
    for (long long i = 1; i <= n; i++) {
        result += (i * k) ^ (i + 9);
    }
    return result;
}

int main(void) {
    long long n = 19, k = 9;
    if (scanf("%lld %lld", &n, &k) != 2) {
        n = 19;
        k = 9;
    }
    long long ans = solve_problem_09(n, k);
    printf("%lld\n", ans);
    return 0;
}
