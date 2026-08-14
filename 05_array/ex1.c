// 1. 차원 
#include <stdio.h>
#define SIZE 5
int main(int argc, char const *argv[]){
    // 1. 1차원 배열
    char str[SIZE];
    int arr[SIZE];
    double arr2[SIZE];                                                                                                                                                                                                                                                                                                                                                                                                          
    printf("sizeof(str): %lu\n", sizeof(str)); // 5
    printf("sizeof(arr): %lu\n", sizeof(arr)); // 20
    printf("sizeof(arr2): %lu\n", sizeof(arr2)); // 40
    // 배열 초기화
    int num[SIZE                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                ] = {0};

    int len = sizeof(num) / sizeof(int);
        for(int i = 0; i < SIZE; i++){
            printf("%d ", num[i]);
        }
        printf("\n");
    // 5 4 3 2 1 출력하기
    for(int i = len - 1; i >= 0; i--){
        printf("%d ", num[i]);
    }
    printf("\n");
    // 배열멸은 첫번째 배열요소의 시작주소값
    printf("%p\n", num); 
    printf("%p\n", &num[0]);
    // num = 10; // error: assignment to expression with array type

    // 배열명에 +, - 연산을 하면 자료형의 크기만큼 연산이 이러님.
    printf("%p\n", num + 1);
    // num[-1] = 10; // error: subscripted value is not an array, pointer, or vector
    // 5명 플밍 점수를 입력받아 평균을 구하
    int score[5];
    int sum = 0;
    for(int i = 0; i < 5; i++){
        printf("점수 입력: ");
        scanf("%d", &score[i]);
        sum += score[i];
    }
    printf("평균: %.2f\n", (double)sum / 5);
    return 0;

}