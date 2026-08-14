// 구조체 응용
#include <stdio.h>
#include <string.h>

typedef int INT;

typedef struct Student{
    int number;
    char name[10];
    double score;
} Student;

typedef struct Node{
    int data;
    struct Node *p;
} Node;

void print_student(Student *p, int n);

int main(int argc, char const *argv[])
{
    Student s = {1, "뽀로로", 100};
    Student *p = &s;

    // 간점 멤버 참조 연산자(->)
    printf("[%d] %s %.1f\n", p->number, p->name, p->score);
    printf("[%d] %s %.1f\n", (*p).number, (*p).name, (*p).score);

    // 구조체 배열
    Student arr[4] = {
        {1, "뽀로로", 100},
        {2, "크롱", 90},
        {3, "포비", 80},
        {4, "루피", 70},
    };

    print_student(arr, 4);


    return 0;
}
void print_student(Student *p, int n){
    for (int i = 0; i < n; i++){
        //printf("[%d] %s %.1f", p[i].number, p[i].name, p[i].score);
        printf("[%d] %s %.1f\n", (*(p+i)).number, (*(p+i)).name, (*(p+i)).score);
        printf("[%d] %s %.1f\n", (p+i)->number, (p+i)->name, (p+i)->score);
        printf("[%d] %s %.1f\n", p->number, p->name, p->score);
        p++; // 다음 구조체로 이동
    }
}