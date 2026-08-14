// 3. 연산자 (비교, 논리)
#include <stdio.h>
int main(int argc, char const *argv[]) {
    // 비교 연산자
    int a = 1, b = 2;
    printf("%d\n", a < b); // 1 (true)
    printf("%d\n", a > b); // 0 (false)
    printf("%d\n", a <= b); // 1 (true)
    printf("%d\n", a >= b); // 0 (false)
    printf("%d\n", a == b); // 0 (false)
    printf("%d\n", a != b); // 1 (true)
 // 점수 60점 이상이면 "Pass",
 // 60점 미만이면 "Fail" 출력
    int score = 90;
    if (score >= 60) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }
    // 논리 연산자
    a = 0;
    b = 1;
    printf("%d\n", !a); // 1 (true)
    printf("%d\n", a && b); // 0 (false)
    printf("%d\n", a || b); // 1 (true)
    // 윤년 계산 (365.2422)
    // 4로 나누어 떨어지고, 100으로 나누어 떨어지지 않거나
    // 400으로 나누어 떨어지는 해는 윤년
    // 윤연: 2024, 2028, 2000 / 평년
    int year = 2026;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d는 윤년입니다.\n", year);
    } else {
        printf("%d는 평년입니다.\n", year);
    }   
    int year2 = 2024;
    if ((year2 % 4 != 0 && year2 % 100 == 0) || year2 % 400 != 0) {
        printf("%d는 윤년입니다.\n", year2);
    } else {
        printf("%d는 평년입니다.\n", year2);
    }   
    // Short-circuit evaluation (단락 평가)
    a = 0;
    if (a != 0 && 10 / a > 1) { // a가 0이므로, 10 / a는 실행되지 않음
        printf("실행됨\n");
    a = 1, b = 2;
    if (a || b++ > 5)
    {
        printf("실행됨\n");
    }
    printf("%d\n", b); // b는 2 (b++이 실행되지 않음)
    }a = 8, b= 10; // 0000 1000
                   // 0000 1010
    printf("%d\n", a & b); // 0000 1000 (8)
    printf("%d\n", a | b); // 0000 1010 (10)
    printf("%d\n", a ^ b); // 0000 0010 (2)
    printf("%d\n", ~a); // 11..11 1111 0111 (-9)
    // 00..00 0000 1001(9)
    // & 특정 비트 확인
    printf("%d\n", a & 1); // 0 (a의 마지막 비트는 0) 0000 & 0001
    printf("%s\n", (a % 2 ==0)? "짝수" : "홀수"); // 삼항 연산자 (조건 ? 참일 때 : 거짓일 때
    // | : 특정 비트 켜기
    a |= 1; // a = a | 1; (a의 마지막 비트를 1로 설정)
    printf("%d\n", a); // 9 (0000 1001)
    // SWAP 처리
    // 1) temp 변수 사용
    a = 2, b = 3;
    int temp = a; // temp = 2
    a = b; // a: 3
    b = temp; // b: 2
    int // 2) XOR 연산자 사용
    a = 2, b = 3;
    a ^= b; // a = a ^ b (2 ^ 3 = 1
    b ^= a;
    a ^= b;
    printf("%d %d\n", a, b); // a: 2, b: 3
    // a = a + b // a : 5
    // b = a - b // b : 2
    // a = a - b // a : 3
    return 0;
}