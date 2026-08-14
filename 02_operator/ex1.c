// 1. 언산자
#include <stdio.h>
int main(int argc, char const *argv[]) {
    // 대입연산자
    int a,b = 10;
    printf("%d, %d\n", a, b);
     a =b = 20; // 오른쪽에서 왼쪽으로 연산
     printf("%d, %d\n", a, b);
        // 산술연산자
        a =5, b= 2;
        printf("%d + %d + %d\n", a, b, a+b);
        printf("%d - %d = %d\n", a, b, a-b);
        printf("%d * %d = %d\n", a, b, a*b);
        printf("%d / %d = %d\n", a, b, a/b);
        printf("%d %% %d = %d\n", a, b, a%b);
        // 자동 형변환
        double d = a; // 5 -.> 5.0
        printf("%.1f\n", d);

        d = a + 3.5; // int + double -> 5.0 + 3.5 -> 8.5
        printf("%.1f\n", d);
        //강제 형변환 (Casting);
    printf("%.1f\n", (double)a/b); // 2.5     
    // 정수 승력
    char c1 = 100, c2 = 100;
    printf("%d, %d\n", sizeof(c1), sizeof(c2)); // char는 정수로 출력
    printf("%d\n", c1 + c2); // char + char -> int + int -> 30
    char c = c1 + c2; // char = int -> 30 -> char
    printf("%d\n", c); // char는 정수로 출력 -> 30
    // 정수 축소 변환
    a = 255;
    c = a;// char <- int(00000 11111111)
    printf("%d\n", c); // char는 정수로 출력 -> 0
    d=3.14;
    int i =d; // int <- double(3.14)
    printf("%d\n ", i); // int는 정수로 출력 -> 3
    
     return 0;
}