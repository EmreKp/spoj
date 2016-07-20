#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//wikipedia pseudocode
int * erast(int n){
	int l=0;
	int a[n+1];
	for (int i=0;i<=n;i++) a[i]=1;
	for (int j=2;j<=n;j++) {
			if (a[j]==1) {
				int b=0;
				int k=j*j;
				while (k<=n) {
					a[k]=0;
					k+=j;
				}
			}
	}
	for (int i=2;i<=n;i++) {
		if (a[i]==1) l++;
	}
	int* p=(int*)malloc(l*sizeof(int));
	int k=0;
	for (int i=2;i<=n;i++) {
		if (a[i]==1) {
			p[k]=i;
			k++;
		}
	}
	return p;
}
//segmented sieve by recommendations
//code finally implemented by myself by some help
int main() {
	int t,m,n;
	scanf("%d",&t);
	for (int test=0;test<t;test++) {
		scanf("%d %d",&m,&n);
		int b[n-m+1]; //b[i] : m+i
		for (int j=0;j<=n-m+1;j++) b[j]=1;
		int* ar=erast(sqrt(n));
		for (int i=0;ar[i]!=0;i++) {
			for (int s=m;s<=n;s++) {
				if (s%ar[i]==0 && s!=ar[i]) b[s-m]=0;
			}
		}
		for (int i=0;i<=n-m;i++) {
			if (b[i]==1 && m+i!=1) printf("%d\n",m+i);
		}
	}
	return 0;
}
