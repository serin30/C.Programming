#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
        //2차원 배열
        int arr[2][3];
        printf("%d", sizeof(arr)); // 24
        printf("%d", sizeof(arr[0])); // 12
        printf("%lu", sizeof(arr[0][0])); // 4
        printf("\n");
         int num[2][3] = {{1, 2, 3}, {4, 5, 6}}; // 행 우선 초기화
         for(int i = 0; i < 2; i++) {
            printf(" ");
            for(int j = 0; j < 3; j++)
                printf("%d", num[i][j]);
            printf("\n");
         }
         printf("%p\n", num); // 2차원 배열의 시작 주소값
        printf("%p\n", num[0]);
        printf("%p\n", &num[0][0]);
        printf("%p\n", num[1]);
        printf("%p\n", &num[1][0]); // 2차원 배열에서 num[i]는 i번째 행의 시작 주소값, &num[i][0]도 i번째 행의 시작 주소값
         printf("%d\n", num[1][0]);
         // 2명 국어, 수학, 영어 점수를 입력받아 평균을 구하기
         int score[2][4];
         for(int i = 0; i < 2; i++){
            printf("%d번 점수 =>", i + 1);
            for(int j = 0; j < 3; j++){
                scanf("%d", &score[i][j]);
                score[i][3] += score[i][j]; // 국어 수학 영어 총점

            }
            printf("%d번 평균 : %.2f\n", i + 1, score[i][3] / 3.0);
         }
         // 가변 길이 배열
         int n;
         scanf("%d", &n);
         int a[n][n];
         memset(a, 0, sizeof(a));
         for(int i = 0; i < n; i++){
            a[i][i]=1;
            for(int j = 0; j < n; j++)
            printf("%d", a[i][j]);
            printf("\n");
         }
         // 3차원 배열 선언
         int arr2[2][3][4];
         printf("%d\n", sizeof(arr2)); //96
         printf("%d\n", sizeof(arr2[0])); // 48 
         printf("%d\n", sizeof(arr2[0][0])); // 16
         printf("%d\n", sizeof(arr2[0][0][0])); // 4
         return 0;
}