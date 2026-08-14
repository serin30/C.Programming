// 2. 함수 - 소수 판별
#include <stdio.h>
#include <math.h>
#include <time.h>
int is_prime1(int n);
int is_prime2(int n);
int is_prime3(int n);
int main(int argc, char const *argv[])
{ int n = 2147483647;
        clock_t start, end;
        double result1, result2, result3;
        start = clock();
        printf("%d\n", is_prime1(n));
        end = clock();
        result1 = (double)(end - start) / CLOCKS_PER_SEC;
        printf("%d\n", is_prime2(n));
        printf("%d\n", is_prime3(n));
        start = clock();
        printf("%d\n", is_prime1(n));
        end = clock();
        result1 = (double)(end - start) / CLOCKS_PER_SEC;

        start = clock();
        printf("%d\n", is_prime2(n));
        end = clock();
        result2 = (double)(end - start) / CLOCKS_PER_SEC;

        start = clock();
        printf("%d\n", is_prime3(n));
        end = clock();
        result3 = (double)(end - start) / CLOCKS_PER_SEC;

        printf("is_prime1: %.3f\n", result1);
        printf("is_prime2: %.3f\n", result2);
        printf("is_prime3: %.3f\n", result3);
        // 2~100 까지 소수 판별
        
        return 0;
}
int is_prime1(int n){
        if(n <= 1) return 0;
        for(int i =2; i < n; i++)// 시간본잡도 : O(n)
        {
                if(n%i == 0) return 0; // 1,000,000
        }
        return 1;
}
int is_prime2(int n){
        if(n <= 1) return 0;
        for(int i =2; i <= n/2; i++)// 시간본잡도 : O(n)
        {
                if(n%i == 0) return 0; // 500,000
        }
        return 1;
}
int is_prime3(int n){
        if(n <= 1) return 0;
        for(int i =2; i <= sqrt(n); i++)// 시간본잡도 : O(root n)
        {
                if(n%i == 0) return 0; // 1,000
        }
        return 1;
}