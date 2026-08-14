// 1. 함수 - 기볻
#include <stdio.h>
#include <ctype.h>
#include "myheader.h"
int main(int argc, char const *argv[]) {
        printf("%d\n", add(5, 2)); // 7
        printf("%d\n", sub(5, 2)); // 3
        printf("%d\n", mul(5, 2)); // 10
        printf("%.1f\n", div(5, 2)); // 2.5
        // 입력 문자가 알파벳인지, 숫자인지 판별하는 함수 만들기
        char ch;
        printf("문자 입력: ");
        scanf("%c", &ch);
        // is_alpha(char c): 알파벳이면 1, 아니면 0 반환
        // is_number(char c): 숫자이면 1, 아니면 0 반환
        // 그 외는 가타 문자
        if (isalpha(ch))printf("알파벳\n");
        else if (isdigit(ch)) printf("숫자\n");
        else printf("가타 문자\n");
        // 표준 라이브러리 함수 사용하기
        if (is_alpha(ch)) printf("알파벳\n");
        else if (is_number(ch)) printf("숫자\n");
        else printf("가타 문자\n");

        return 0;}
int is_alpha(char c){
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) return 1;
     return 0;
}
int is_number(char c){
    if (c >= '0' && c <= '9') return 1;
    return 0;
}
int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
double div(int a, int b) {
    return (double)a / b;
}
