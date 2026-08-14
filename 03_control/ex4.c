// 4. 반복문 - do~while문
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    // 메뉴 선택 
    //int menu = 0;
    //printf("1. 라면\n");
    //printf("2. 치킨\n");
    //printf("3. 피자\n");
    //printf("9. 종료\n");
    //int noodle = 0, chicken = 0, pizza = 0;
    //do {
      //  printf("메뉴를 선택하세요\n");
        //scanf("%d", &menu);
        //switch (menu){
          //  case 1: noodle++; break;
            //case 2: chicken++; break;
            //case 3: pizza++; break;
            //case 9: break;
           // default: printf("Choose different menu\n");
       // }
       // if (menu == 9) break;
        
    //} while (1);

    // 숫자 맞추기 게임
    int answer;
    // srand() : 난수 생성기의 시드값을 설정하는 함수
    printf("숫자 맞추기 게임\n");
    srand(time(NULL));
    answer = rand() % 100+ 1; // 1~100
    do {
        printf("숫자를 입력=>");
        int guess;
        scanf("%d", &guess);
        if (guess > answer){
            printf("작은 숫자\n");
        }
        else if (guess < answer){
            printf("큰 숫자\n");

        }
        else if (guess == answer){
            printf("정답입니다\n");
            break;
        }
    } while (1);
    return 0;
}