// 4. 자료형
#include <stdio.h>
#include <limits.h>
#include <float.h>   
#include <stdbool.h>   
int main(int argc, char const *argv[]) {
    
    //기본 자료형: 정수형, 실수형, 문자형
    // 1. 정수형 : short, int, long, long long
    
    //자료형 크기 
    printf("%d, %d\n", sizeof(short), sizeof(unsigned short));
    printf("%d, %d\n", sizeof(int), sizeof(unsigned int));
    printf("%d, %d\n", sizeof(long), sizeof(unsigned long));
    printf("%d, %d\n", sizeof(long long), sizeof(unsigned long long));
    //값의 범위 
    printf("%d ~ %d\n", SHRT_MIN, SHRT_MAX);
    printf("%d ~ %d\n", INT_MIN, INT_MAX);
    printf("%u\n", UINT_MAX);
    printf("%ld ~ %ld\n", LONG_MIN, LONG_MAX);
    printf("%lld ~ %lld\n", LLONG_MIN, LLONG_MAX);
    printf("%llu\n", ULLONG_MAX);

    // 2. 실수형 : float, double, long double
    float f;
    double d;
    long double ld;
    printf("%d, %d, %d\n", sizeof(f), sizeof(d), sizeof(ld));
printf("%e\n", FLT_MIN, FLT_MAX);
//유효자리수
printf("%d, %d, %d\n", FLT_DIG, DBL_DIG, LDBL_DIG);
float f2 = 1.23456f;
printf("%.10f\n", f2); // 6자리까지만 정확하게 출력됨
f2 = 123456789.0;
printf("%.0f\n", f2); // 123456792  8자리까지만 정확하게 출력됨

float sum = 0;
for(int i = 0; i < 10; i++)
{
        sum = sum + 0.1f; // 0.1f는 정확하게 표현할 수 없는 수이므로, 오차가 발생함
}
printf("%.10f\n", sum); // 1.000000이 출력되어야 하지만, 0.999999가 출력됨
printf("%.10f\n", 0.1f); // 1.000000이 출력되어야 하지만, 0.999999가 출력됨
// 3. 문자형 : char

printf("%d\n", sizeof(char));
printf("%d ~ %d\n", CHAR_MIN, CHAR_MAX);
printf("%d ~ %d\n", 0, UCHAR_MAX);
// 논리형 없음
printf("%d\n", 10< 20); // 1 (참)
printf("%d\n", 10 > 20); // 0 (거짓)
// C99, bool type 지원
bool b1 = true;
bool b = true;
printf("%d\n", b);
// 오버플러우
char c = 127; // -128 ~ 127
c = c + 1; // 128
printf("%d\n", c); // -128
c = -128; 
c = c - 1;
printf("%d\n", c); // 127






    return 0;
}