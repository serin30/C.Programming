// 1. pointer 
#include <stdio.h>

void swap(int *, int *);
int *func();

int main(int argc, char const *argv[]) {
    char c = 'A';
    int i = 10;
    double d = 3.14;
    printf("%p, %d\n", &c, sizeof(&c));
    printf("%p, %d\n", &i, sizeof(&i));
    printf("%p, %d\n", &d, sizeof(&d));
    // 포인터 변수 선언
    char *pc = &c;
    int *pi = &i;
    double *pd = &d;

    // 간점 참조 연산자 (*)
    printf("%c, %c\n", c, *pc);
    printf("%d, %d\n", i, *pi);
    printf("%f, %f\n", d, *pd);

    (*pi)++;
    printf("%d, %d\n", i, *pi);

    // swap
    int a = 2, b = 3;
    swap(&a, &b);
    printf("%d, %d\n", a, b);

    // 포인터 연산
    printf("%p, %p\n", &i, pi);
    printf("%p, %p\n", &i + 1, pi + 1);
    printf("%ld\n", pi + 1 - pi);

    // 포인터 리턴하는 함수
    int *p = func();
    printf("%d\n", *p); // undefined behavior: returning address of local variable

    //int * -> char *
    int num = 10;
    int *iptr = &num;

  char *cptr = (char *)iptr;
  printf("%d, %d, %d, %d\n", *cptr, *(cptr + 1), *(cptr + 2), *(cptr + 3));

  return 0;
}
int *func(){
   static int a = 10;
    return &a;
}
void swap(int *pa, int *pb) {
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}