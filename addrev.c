#include <stdio.h>

int usal(int n, int k) {
	int r=1;
	for (int i=0;i<k;i++) r*=n;
	return r;
}

int ters(int n) {
	int bas; //basamak
	for (int k=0;;k++) {
		if (n%usal(10,k)==n) {
			bas=k; 
			break;
		}
	}
	int r=0,b[bas];
	for (int i=0;i<bas;i++) {
		b[i]=(n/usal(10,i))%10;
		r+=b[i]*(usal(10,bas-i-1));
	}
	return r;
}

int main(void) {
	// your code here
	int t,m,n;
	scanf("%d",&t);
	for (int te=0;te<t;te++) {
		scanf("%d %d",&m,&n);
		int ilk=ters(m);
		int son=ters(n);
		int top=ilk+son;
		int trs=ters(top);
		printf("%d\n",trs);
	}
	return 0;
}
