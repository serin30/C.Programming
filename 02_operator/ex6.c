// 6. 데이터 입력
#include <stdio.h>
int main(int argc, char const *argv[]) {
        int a, b, c;
        //printf("%p %p %p\n", &a, &b, &c);
        //scanf("%d%d", &a, &b); // &a : a 변수의 주소값
        //printf("%d, %d\n", a, b);
        // 10:20:30
        //scanf("%d:%d:%d", &a, &b, &c);
        //printf("%d시, %d분, %d초\1n", a, b, c);
        //scanf("%d", &a);A
        // int r = scanf("%d", &a); // 입력 성공 시 1, 실패 시 0
        // printf("%d\n", r);
        // // %f, %lf 구분
        // float f;
        // double d;
        // scanf("%f", &f);
        // scanf("%lf", &d);
        // printf("%f, %lf\n", f, d);
       
        
        // %c 사용지 주의
        // char ch;
        // getchar(); // 엔터키 제거
        // scanf(" %c", &ch); // 엔터키가 남아있어서 바로 입력
        // printf("%c\n", ch);
        float height;
        double weight;
        scanf("%f", &height);
        scanf("%lf", &weight);
        printf("%f, %lf\n", height, weight);
        return 0;        
}