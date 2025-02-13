#include <stdio.h>
int createArray(int A[], int B[], int C[], int D[], int length);
void printArray(int ABCD[], int length);

main(){
	int n;
	scanf("%d",&n);
	int a[n], b[n], c[n], d[n];
	createArray(a, b, c, d, n);
	printArray(a, n);
}
int createArray(int A[], int B[], int C[], int D[], int length){
	int i,X[length];
	for(i=0;i<length;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<length;i++){
		scanf("%d",&B[i]);
	}
	for(i=0;i<length;i++){
		scanf("%d",&C[i]);
	}
	for(i=0;i<length;i++){
		scanf("%d",&D[i]);
	}
	for(i=0;i<length;i++){
		if(A[i]>=B[i] && A[i]>=C[i] && A[i]>=D[i]){
			X[i] = A[i];
		}
		else if(B[i]>=A[i] && B[i]>=C[i] && B[i]>=D[i]){
			X[i] = B[i];
		}
		else if(C[i]>=A[i] && C[i]>=B[i] && C[i]>=D[i]){
			X[i] = C[i];
		}
		else{
			X[i] = D[i];
		}
		A[i] = X[i];
	}
	for(i=0;i<length;i++){
		printf("%d ",X[i]);
	}
}
void printArray(int ABCD[], int length){
	int i, max=0;
	for(i=0;i<length;i++){
		if(ABCD[i] > max){
			max = ABCD[i];
		}
	}
	printf("\n%d",max);
}
