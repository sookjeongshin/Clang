#include <stdio.h> //#으로 시작하는 명령어는 매크로명령어라고 합니다.
#define AGE 28
#define PI 3.141592
#define NAME "신숙정" //매그로로 정의한 상수
const int a=10; //const명령어로 상수를 정의;
const float b=10.56789;
const char c='K'; 					//char 단일문자타입형태
const char* OPEN="오픈소스그룹"; //char* 포인터변수

void main () 
{
	int i=28; 
	float j=4.0; 
	char k='A'; 
	char ch[10]="홍길동"; //배열문자
	char *p="프로그래머홍길동홍길동"; //char *포인터변수
	printf("기관은: %s이름은: %s 나이는: %d\n\n", OPEN,NAME,AGE);
	printf("-----------------------------\n");
	printf("%s %s나이는 %d직급:%c 평점:%f\n", ch,p,i,k,j);
}