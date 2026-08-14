#include <stdio.h>
int main(int argc, char const *argv[]) {
    // 복합 대입 연산자
    int a = 10;
    a += 3; // a = a + 3
    printf("%d\n", a); // 13
    a -= 3; // a = a - 3
    printf("%d\n", a); // 10
    a *= 3; // a = a * 3
    printf("%d\n", a); 
    a /= 3; // a = a / 3
    printf("%d\n", a); 
    a %= 3; // a = a % 3
    printf("%d\n", a);
     return 0;
     // 증감 연산자
     a++;
        printf("%d\n", a); // 2
        --a; //  a = a - 1  
        printf("%d\n", a); // 1
        // 수식 내에서의 사용 시 중의하기
        int b = ++a; // a = a + 1 -> b = a
        printf("%d, %d\n", a, b);// 2,2
        b = a++;
        printf("%d, %d\n", a, b);// 3,2
        
}