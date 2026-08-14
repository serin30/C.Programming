// 3. 함수 - 재귀함수
#include <stdio.h>
int factorial(int n);
int fibo(int n);
int fibo2(int n);
int gcd(int a, int b);
int main(int argc, char const *argv[])
{
    // 1. 팩토리얼
    int n = 5;
    
    printf("factorial: %d\n", factorial(n));
    // 2. 피보나치 수열
    printf("fibo: %d\n", fibo(n));// 0 1 1 2 3 5 8 13 21 ...    
    printf("fibo2: %d\n", fibo2(n));

    // 3. 최대공약수 (유클리드 호제법)
    printf("GCD: %d\n", gcd(72, 30)); // 6


        return 0;
}
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
// f(0) = 0, f(1) = 1
// f(n) = f(n-1) + f(n-2)
int fibo(int n){
    if(n <= 1) return n;
    return fibo(n-1) + fibo(n-2);
}
// 0 1 1 2 3 5 8 13 21 ...
int fibo2(int n){
    if(n <= 1) return n;
    int a = 0, b = 1, c;
    for(int i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;

}
// 0! = 1
// n! = n * (n-1)! 
int factorial(int n){
    if(n <= 1) return 1; // 종료 조건
    return n * factorial(n-1); // 재귀 호출
}
