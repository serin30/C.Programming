#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n = 3;
    if (n > 1 && n < 5)
    {
        printf("출력됨\n");
    }
    if (n % 2 == 0)
    {
        printf("짝수\n");
    }
    else
    {
        printf("홀수\n");
    }
    int a = 10, b = 20;
    // a > b: a, a < b: b, a == b: 같은 값
    scanf ("%d %d", &a, &b);
    if (a > b) {
        printf("%d\n", a);
}
else if (a < b){
    printf("%d", b);
}
else if (a == b) {
printf("같은 값\n");
}
// 90점 이상이면 'A', 80점 이상이면 'B'
// 70점 이상이면 'C', 600점 이상이면 'D'
//60점 미만이면 'F'
int score;
char grade;
scanf("%d", &score);
if (score >= 90 && score <= 100) {
    grade = 'A';
}
else if (score >= 80) {
    grade = 'B';
}
else if (score >= 70) {
    grade = 'C';
}
else if (score >= 60) {
    grade = 'D';
}
else {
    grade = 'F';
}

    return 0;
}
