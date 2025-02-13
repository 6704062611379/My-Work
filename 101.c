#include <stdio.h>
void check(int A[][20], int B[][20], int r, int c);

main(){
	int r,c,i,j;
	scanf("%d %d",&r,&c);
	int a[r][c], b[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	check(a, b, r, c);
	
}
void check(int A[][20], int B[][20], int r, int c){
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(A[i][j]>B[i][j]){
				printf("%d,%d ", i,j);
			}
		}
	}
}

/*2 5
10 11 12 13 14
16 17 1 1 1
0 1 2 3 4
5 6 19 19 19*/
