#include <stdio.h> // * = เน้น
int coffeeCS(int A[], char m[][15], int p[], int N);
int main(){
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
	int i,j, max=0, sum=0;
	int mo[2][8]={{1,2,3,4,5,6,7,8}
				 ,{0,0,0,0,0,0,0,0}};
	//printf("%s",m[mo[0][0]-1]);
	for(i=0;i<N;i++){ //****** การเปรียบเทียบ
		for(j=0;j<8;j++){
			if(A[i] == mo[0][j]){
				mo[1][j]++;
			}
		}
	}
	for(i=0;i<8;i++){
		printf("%s(%d)\n", m[mo[0][i]-1], p[i]*mo[1][i]);//******
	}
	for(i=0;i<N;i++){
		sum = sum + p[A[i]-1];//******
	}
	printf("Total: %d\n", sum);
	for(i=0;i<8;i++){//******
		if(mo[1][i]>max){
			max = mo[1][i]; //******
		}
	}
	for(i=0;i<8;i++){//******
		if(max == mo[1][i]){
			printf("Max list coffee: %s(%d)", m[mo[0][i]-1], max);
		}
	}
}
