// 6. 2차원 문자 배열
#include <stdio.h>
#include <string.h>
void print_sort(int num[], int n);
void bubble_sort(int num[5], int n);
void bubble_sort1(char name[][20], int n);
void print_sort1(char name[][20], int n);
int main(int argc, char const *argv[])
{
    char fruits[3][7] = {"apple", "banana", "kiwi"};
    for (int i = 0; i < 3; i++)
    {
        puts(fruits[i]);
    }
    // 오늘의 급식 메뉴 (밥, 국, 반찬, 디저트)
    char menu[4][100];
    printf("<오늘의 메뉴 입력>\n");

    for (int i = 0; i < 4; i++)
    {
        // fgets() 함수 이용
        fgets(menu[i], sizeof(menu[i]), stdin);
        // fgets() 함수는 입력받은 문자열 뒤에 개행문자(\n)가 포함되어 저장되므로, 개행문자를 제거해야 함
        menu[i][strcspn(menu[i], "\n")] = '\0'; // 개행문자 제거}
    }
    puts("\n<오늘의 메뉴 출력>");
    for (int i = 0; i < 4; i++)
    {
        puts(menu[i]);
    }
    // 일주일치 급식 메뉴 (3차원 배열)

    // 버블 정렬
    int num[5] = {5, 4, 1, 3, 2};
    bubble_sort(num, 5);
    print_sort(num, 5);
    // 문자열 정렬
    char name[4][20] = {"홍길동", "홍길서", "홍길남", "홍길복"};
    bubble_sort1(name, 4);
    print_sort1(name, 4);
    return 0;
}
void print_sort(int num[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", num[i]);
    }
}
void bubble_sort(int num[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (num[j] > num[j + 1])
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
        printf("=== %d회전 ===\n", i + 1);
        print_sort(num, 5);
    }
}
void print_sort1(char name[][20], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }
}
void bubble_sort1(char name[][20], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        char temp[20] = {0};
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(name[j], name[j + 1]) > 0)
            {

                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
        printf("===%dpart===\n", i + 1);
        print_sort1(name, n);
    }
}
