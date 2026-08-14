// 3. 문자열
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char **pa, char **pb);
void printArr(char **, int);

int main(int argc, char const *argv[]) {
    char str[10] = "apple";
    str[0] = 'A';

    // 문자열 상수 형태
    printf("apple");
    printf("%p\n", "apple");
    printf("%p\n", "apple");
    printf("%p\n", "apple");

    char *sp = "apple";
    printf("%p\n", sp);
    //sp[0] = 'A'; // 문자열 상수는 수정할 수 없음
    printf("%s\n", ++sp);

    // dimigo -> imigo -> migo -> igo -> go -> o
    char *sp2 = "dimigo";
    while(sp2[0] != '\0'){
        printf("%s\n", sp2);
        sp2++;
    }

    // 이중 포인터
    int a = 10;
    int *p = &a;
    int **pp = &p;
    printf("%d, %d, %d\n", a, *p, **pp);    

    // 문자열 교환하기
    char *str1 = "Hello";
    char *str2 = "World";
    swap(&str1, &str2);
    printf("%s, %s\n", str1, str2); // World, Hello

    // 포인터 배열
    char *ptr_arr[3] = {"apple", "banana", "kiwi"};
    printArr(ptr_arr, 3);

    // void형 포인터
    void *pv = NULL;
    int i = 10;
    pv = &i;
    //printf("%d\n", *pv);
    int *pi = (int *)pv;
    printf("%d\n", *pi);
    // 메모리 동적 할당
    // 정적 할당 : 컴파일 시점에 메모리의 크기가 정해짐
    // 동적 할당 : 런타임 시점에 메모리의 크기가 정해짐
    int n = 5;
    int *arr = (int *)malloc(n * sizeof(int)); // int arr[5]
    if(arr == NULL)
    {
        printf("메모리 할당 실패");
        return 1; // exit(1)
    }
    memset(arr, 0, n * sizeof(int));
    printf("%d, %d\n", arr[0], arr[4]);

    free(arr); // 메모리 반납
    arr = NULL;

    return 0;
}
void printArr(char **arr, int n){
    for (int i = 0; i < n; i++){

    }
}
void swap(char **pa, char **pb){
    char *temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}