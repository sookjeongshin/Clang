/* 팩토리얼은 수학에서 수열단원 6! = 6*54*3*2*1 */
#define ONE 1
int factorial(int n) {
	if(n>ONE) {
		return(n*factorial(n-1)); //재귀함수호출 반환값이 6*5*4*3*2*1
	}else{
		//n-1이 반복되다가 n이 1이 되었을 경우 1 반환, 재귀함수의 끝
		return(ONE);
	}

}