// 2. 혀식 지정자를 이용한 출력
#include <stdio.h>
int main(int argc, char const *argv[]) {
    
    printf("%d\n",10);// 부호있는 10진 정수
    
    printf("%d\n",-10);// 부호있는 10진 정수
    
    printf("%d + %d = %d\n",10,20,30);
    
    printf("%u\n",10);// 부호없는 10진 정수
    
    printf("%u\n",-10);// 부호없는 10진 정수
    
    printf("%o\n",10);// 8진 정수
    
    printf("%x\n",10);// 16진 정수
    
    printf("%X\n",10);// 16진 정수(대문자)
    
    printf("%f\n",3.14);// 실수
    
    printf("%e\n",3.14);// 지수형 실수
    
    printf("%c\n",'A');// 문자
    
    printf("%s\n","가나다");// 문자열
    
    printf("%p\n", main);// 포인터
    
    printf("%%\n");// % 문자
    
    printf("%c\n",65);
    
    printf("%d\n",'A');
    
    printf("%d\n",'a');
    
    printf("%d\n",'0');
    
    printf("%d\n",'A'+1);
    
    printf("%c\n",'A'+1);
    
    printf("%d\n",'Z'-'A'+1);
    
    printf("%d\n",'a'-'A');
    
    printf("%c\n",'a'-32);
    
    printf("%d\n",'5'-'0');
    
    return 0;
}