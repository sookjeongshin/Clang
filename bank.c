#include <stdio.h>
void main() {
	printf("안녕하세요 C언어 은행입출금 프로그램입니다.\n");
	int choic, total, inpuyMoney, drawMoney;
	total = 0; //초기잔고값
	while(1) {
		printf("1.예금/ 2.출금 / 3.잔고/ 4.종료 : ");
		scanf("%d", &choic);
		if(choic == 1) {
			printf("현재 금액: %d원\n", total);
			printf("얼마를 입금하시겠습니까? : ");
			scanf("%d", &inputMoney);
			total = total + inputMoney; //total변수를 누적하는 로직
			
			printf("예금 성공! 현재금액: %d원 \n\n\n", total);
		}
		else if(choic == 2) {
			printf("현재 금액 : %d원\n", total);
			printf("얼마를 출금하시겠습니까? : ");
			scanf("%d", &drawMoney);
			if(drawMoney > total) {
				printf("잔액이 부족합니다. 출금실패!\n\n\n");
			}
			else{
				
			}
			
		}
	}
}