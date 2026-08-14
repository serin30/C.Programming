// 5. 변수
#include <stdio.h>

int global_var; // 전역 변수

void my_func();  // 함수 프로토타이프 선언
int main(int argc, char const *argv[]) {
        // 변수 선언 : 자료형 변수명;
        int num; 
        printf("%d\n", num); //  쓰레기값이 출력됨
        num = 10; // 변수에 값 대입
        int n1, n2 = 10;
        printf("%d, %d\n", n1, n2);
        // 변수의 종류 : 지역 변수, 전역 변수
        int x = 10;
        {
                int y = 20;
                printf("%d, %d\n", x, y); // 10, 20
        }
        //  지역 변수
        printf("%d\n", global_var); // 0
        my_func(); // 함수 호출
        printf("%d\n", global_var); // 10
        //  변술의 범위 (Scope)
        int i = 3;
        {
                int i = 5;
                printf("%d\n", i); // 5
        }
       // 식별자 규칙
       int score, score2;
       // int 2score; // 식별자는 숫자로 시작할 수 없음
       int _score; // 식별자는 _로 시작할 수 있음
       // int $score;
       int Score;
       // 상수
       int max_len = 20;
       const int MAX_LEN = 20; // 상수는 대문자로 작성하는 것이
       max_len = 20;
        // MAX_LEN = 20; // 상수는 값을 변경할 수 없음
        

        return 0;
}

