#include <stdio.h>

int usal(int n, int k) {
	int r=1;
	for (int i=0;i<k;i++) r*=n;
	return r;
}

int main(void) {
	// your code here
	int t,n;
	scanf("%d",&t);
	for (int test=0;test<t;test++) {
		scanf("%d",&n);
		//de Polignac
		int us=0,r=0;
		while (usal(5,us+1)<=n) us++;
		for (int i=1;i<=us;i++) 
			r+=(n/usal(5,i));
		printf("%d\n",r);
	}
	return 0;
}
