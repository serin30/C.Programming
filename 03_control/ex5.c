// 5. 반복 - for문
#include <stdio.h>
int main(int argc, char const *argv[])
{
// 구구단 출력하기
// 2 * 1 = 2 ... 2 * 9 = 18
// ...
// 9 * 1 = 9 ... 9 * 9 = 81
//for (int i = 2; i <= 9; i++)
//{
  //  for (int j = 1 ; j <= 9; j++)
    //{
      //  printf("%d * %d = %d\n", i, j, i *j);

    //}

// 각 자릿수의 합 구하기
// 12345 => 15 출력
int num, sum =0;
printf("숫자 입력: ");
scanf("%d", &num);
while (num >0)
{
    sum += num %10; 
    num /= 10;
    
}
printf("각 자릿수의 합: %d\n", sum);
// 발표 삼각형 출력1
// *
// **
// ***
// ****
// *****
printf("발표 삼각형 출력1\n");
for (int i = 1; i <= 5; i++){
    for (int j = 1; j <= i; j++){
        printf("*");
    }
    printf("\n");
}
// 발표 삼각형 출력2
// *****
// ****
// ***
// **
// *
printf("발표 삼각형 출력2\n");
for (int i = 5; i >= 1; i--){
    for (int j = 1; j <= i; j++){
        printf("*");
    }
    printf("\n");
}
// 발표 삼각형 출력3
//     *
//    **
//   ***
//  ****
// *****

printf("발표 삼각형 출력3\n");
for (int i = 1; i <= 5; i++){
    for (int j = 1; j <=5; j++){
        printf(" ");
    }
    for (int j = 1; j <= i; j++){
        printf("*");
    }
    printf("\n");
}
// 정삼각형 출력
//     *
//    *** 
//   *****
//  *******
// *********
printf("정삼각형 출력\n");
for (int i = 1; i <=5; i++){
    for (int j = 1; j<=5 -i; j++){
        printf(" ");
    }
    for (int j = 1; j <= 2 * i -1; j++){
        printf("*");
    }
    printf("\n");
}
}
// 발표 삼각형 출력4
// *******
//  *****
//   ***
//    *
 for(int i = 5; i>=1; i--){
    for(int j = 1; j <= 5 - i; j++){
        printf(" ");

    }
    for(int j = 1; j <=2 * i -1; j++){
        printf("*");
    }
    printf("\n");
 }