//2. 문자 배열
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]){
    // 2. 문자 배열
    char name[6] = {'a', 'p', 'p', 'l', 'e', '\0'}; // 문자열의 끝을 알리는 null 문자
    printf("%s\n", name); // apple
    char name2[7] = "banana"; // 문자열 리터럴로 초기화, 자동으로 null 문자 포함

printf("%s\n", name2); // banana
printf("%p, %p\n",name, name2);
// 문자열 입출력 함수
char str[20];
scanf("%19s", str); // 공백문자 전까지 입력, 마지막에 null 문자 자동 추가wo
printf("%s\n", str);
//gets(str);
// 버퍼 지우기

 // 공백문자 포함 입력, 버퍼 오버플로우 위험
 while (getchar() != '\n'); // 버퍼 지우기
    
fgets(str, sizeof(str), stdin); // 한줄 천체 입력, 앤터까지 입력, 버퍼 오버플로우 방지
//str[strlen(str) - 1] = '\0'; // fgets는 앤터도 입력받으므로 null 문자로 대체
str[strcspn(str, "\n")] = '\0'; // 앤터를 null 문자로 대체 
printf("[%s]\n", str);
puts(str); // puts는 자동으로 줄바꿈 추가
printf("------------\n");


return 0;

}