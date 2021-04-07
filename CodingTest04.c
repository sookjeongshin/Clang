import java.util.Scanner;
class CodingTest04 {
	public static void main(String[] args) throws Exception {
		int n, insert, comp, Key;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		int Numbers[] = new int[n];
		for(int i=0; i<n; i++){
			Numbers[i] = sc.nextInt();
		}
		for(insert=1; insert<n; insert++) {
			Key = Numbers[insert];
			for(comp=insert-1; comp>=0; comp--) {
			if(Key < Numbers[comp]) {
				Numbers[comp+1] = Numbers[comp];
				Numbers[comp] = Key;
			}	
		}
	}
	for(int i=0; i<n; i++) {
		System.out.print(Numbers[i]+" ");
	}
}
}