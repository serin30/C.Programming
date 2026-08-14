// 3. 반복문 - while 문
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 1~n까지의 합
    int i = 1, sum = 0;
    int n = 10; 
    while (i <= n)
    {
sum +=i;
    }
    printf("sum: %d\n", sum);
    // abcDE1234 : 소문자 3개, 대문자 2개, 숫자 4개
    char c;
    scanf("%c", &c);
    int upper = 0, lower = 0, num = 0;
    while (c != '\n')
    {
        if (c >= 'a' && c <= 'z')
            lower++;
        if (c >= 'A' && c <= 'Z')
            upper++;
        if (c >= '0' && c <= '9')
            num++;
        scanf("%c", &c);
    }
    printf("소문자 %d개, 대문자 %d개, 숫자 %d개\n", lower, upper, num);
    // 메뉴 선택 
    int menu = 0;
    printf("1. 라면\n");
    printf("2. 치킨\n");
    printf("3. 피자\n");
    printf("9. 종료\n");
    int noodle = 0, chicken = 0, pizza = 0;
    while (menu != 9) {
        printf("메뉴를 선택하세요\n");
        scanf("%d", &menu);
        switch (menu){
            case 1: noodle++; break;
            case 2: chicken++; break;
            case 3: pizza++; break;
            case 9: break;
            default: printf("Choose different menu\n");
        }
        if (menu == 9) break;
        
    }

    return 0;
}