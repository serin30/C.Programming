// 2. 조건문 - switch~case문
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 90점 이상이면 'A', 80점 이상이면 'B'
// 70점 이상이면 'C', 600점 이상이면 'D'
//60점 미만이면 'F
    
    int score;
    char grade;
    scanf("%d", &score);
    switch(score / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';            
    }
    printf("%d점 %c등급\n", score, grade);
    // 사칙 연신 
    char op;
    int op1, op2, result;
    printf("연산식 입력(2 + 3)=>");
    scanf("%d %c %d", &op1, &op, &op2);

    switch (op){
        case '+':
            result = op1 + op2;
            break;
        case '-':
            result = op1 - op2;
            break;
        case '*':
            result = op1 * op2;
            break;
        case '/':
            result = op1 / op2;
            break;
        default:
        printf("없는 것");
            
    }
    printf("%d %c %d = %d\n", op1, op, op2, result);
    return 0;
    // 메뉴 
    int menu;
    char op;
    int op1, op2, op3;
    printf("메뉴를 선택하세요\n");
    scanf("%d", &menu);
    switch(menu) {
        case 1:
            printf("라면\n");
            break;
        case 2:
            printf("치킨\n");
            break;
        case 3:
            printf("삼겹살\n");
            break;
        default:
            printf("없는 것");
    }
    return 0;
}
