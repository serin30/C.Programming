// 1. 기분 출력
#include <stdio.h>

int main(int argc, char const *argv[]) {
    printf("1330\nHaserin");
    // gcc 컴파일 명령
    // gcc -o ex1 ex1.c
    // 이스케이프 문자
    printf("1234567890\n");
    printf("a\tb\tc\n");
    printf("aa\tbb\tcc\n");
printf("학번: \'1330\'\n");
    printf("이름: \"Haserin\"\n");
    // 학번: (\1330\)
    printf("학번: \\1330\\\n");

    return 0;
}