// 4. 연산자 (비트, 삼항)
#include <stdio.h>
int main(int argc, char const *argv[]) {
    
    //a = 10;
    int a = 10;
    //a = a << 1;
    printf("%d\n", a); // 20
 a = a >> 1;
 printf("%d\n", a); // 10
 char i = 65;// 0100 0001
 printf("%d", i << 1);// 1000 0010 (130)
 char c = i << 1; // 1000 0010 (130) -> char 범위를 벗어나므로, -126이 됨
    printf("%d\n", c); // -126
    // 삼항연산자
    // (조건식) ? A : B
    // 90점 이상이면 'A'
    // 80점 이상 90점 미만이면 'B'
    // 80점 미만이면 'C'
    int score = 85;
    char grade;
    grade = (score >= 90) ? 'A' : 
        ((score >= 80) ? 'B' : 'C');
    printf("%d점 %c등급\n", score, grade); // 85점 B등급
    




   
    return 0;
}