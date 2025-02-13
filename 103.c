#include <stdio.h>
int coffeeCS(int A[], char m[][15], int p[], int N);
main(){
	char m[][15] = {"Latte","Espresso","Iris","Frappuccino","Cappuccino","Mocha","Americano","Black Eye"};
	int p[] = {35,45,30,50,45,48,39,35};
	int n,i;
	scanf("%d", &n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	coffeeCS(a,m,p,n);
}
int coffeeCS(int A[], char m[][15], int p[], int N){
	int i;
	int mo[2][8]={{1,2,3,4,5,6,7,8}
					,{0,0,0,0,0,0,0,0}};
	printf("%s",m[mo[0][0]-1]);
	/*for(i=0;i<N;i++){
		
	}*/
}
