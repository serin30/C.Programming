// 3. 문자열 함수
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]){
    char str1[] = "apple banana";
    char str2[10] = {0};

    // 문자열 길이
    printf("%d\n", strlen(str1));
    printf("%d\n", sizeof(str1));
    // 문자열 복사
    //strcpy(str2, str1); // 버퍼 오버플로우 위험
    //puts(str2);
    strncpy(str2, str1, sizeof(str2) - 1); // 버퍼 오버플로우 방지, null 문자 포함
    puts(str2);

    // 문자열 비교
    char str3[10] = "apple";
    char str4[10] = "apple";
    printf("%d\n", strcmp(str3, str4)); // 0
    // 문자열 연결
    //strcat(str3, str4); // 버퍼 오버플로우 위험
    strncat(str3, str4, sizeof(str3) - strlen(str3) - 1); // 버퍼 오버플로우 방지, null 문자 포함
    puts(str3); // appleapple

    // 문자열 교환
    //int a = 10, b = 20;
    //int temp;
    //temp = a;
    //a = b;
    //b = temp;
    char a[10] = "apple";
    char b[10] = "banana";
    char temp[10];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
    puts(a);
    puts(b);
    return 0;
}