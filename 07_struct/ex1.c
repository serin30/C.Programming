// 구조체 기초
#include <stdio.h>
#include <string.h>

// 구조체 정의
struct Score{
    double kor;
    double eng;
    double math;
};
struct Student
{
    int n;
    char name[10];
    //double score;
    struct Score score;
};
void print_student(struct Student s);
int main(int argc, char const *argv[])
{
    // 구조체 변수 선언
   struct Student s1;
   struct Student s2 = {2, "크롱", {100, 100, 100}};

   // 멤버 참조 연산자(.)
   s1.n = 1;
   strcpy(s1.name, "뽀로로");
   s1.score.kor = 100;
   s1.score.eng = 100;
   s1.score.math = 100;

   printf("[%d] %s, %.1f\n", s1.n, s1.name, s1.score.kor);
   printf("[%d] %s, %.1f\n", s2.n, s2.name, s2.score.kor);

   // 구조체 변수 대입 연산
   struct Student s3;
   s3 = s1;

   s3.n = 3;
   strcpy(s3.name, "포비");

   //printf("[%d] %s, %.1f\n", s1.n, s1.name, s1.score.kor);
   //printf("[%d] %s, %.1f\n", s3.n, s3.name, s3.score.kor);

    print_student(s1);
    print_student(s2);
    return 0;
}

void print_student(struct Student s){
    printf("[%d] %s, %.1f\n", s.n, s.name, s.score.kor);
}