// 4. 1차원 배열 - 응용
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>
long long fibo(int n);
long long fibo2(int n);
long long memo[100] = {0}; // 메모이제이션을 위한 배열
int main(int argc, char const *argv[])
{
    //int n = 46;
    //clock_t start, end;
    double result1, result2;
    // 피보나치 수열
    // f(0) = 0, f(1) = 1
    //start = clock();
    //printf("%lld\n", fibo(n));
    //end = clock();
    //result1 = (double)(end - start) / CLOCKS_PER_SEC;

    //start = clock();
    //printf("%lld\n", fibo2(n));
    //end = clock();
    //result2 = (double)(end - start) / CLOCKS_PER_SEC;
    //printf("%.3f\n", result1);
    //printf("%.3f\n", result2);
    // 에라토스테네스의 체: 2~100사이의 모든 소수 찾기
    int prime[101];
    int m = 100;
    memset(prime, 1, sizeof(prime)); // 모든 수를 소수로 초기화
    prime[0] = 0;
    prime[1] = 0;
    for(int i = 2; i <= sqrt(m); i++){
        if(prime[i]){
            for(int j = i * i; j <= m; j += i){
                prime[j] = 0; // i의 배수는 소수가 아님
            }

        }
    }
    for(int i = 2; i <= m; i++){
        if(prime[i])printf("%d ", i);
    }
    return 0;
}
// 재귀함수
long long fibo(int n)
{
    if (n <= 1) return n;
    return fibo(n - 1) + fibo(n - 2);
}
// 메모이제이션을 이용한 피보나치 수열 계산
long long fibo2(int n)
{
    if (n <= 1) return n;
    if(memo[n] != 0) return memo[n]; // 이미 계산된 값이 있으면 반환
    memo[n] = fibo2(n - 1) + fibo2(n - 2); // 계산된 값을 메모이제이션 배열에 저장
    return memo[n];
}