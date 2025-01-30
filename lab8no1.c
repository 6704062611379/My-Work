#include <stdio.h>

int findMax(int num[],int Arsize);
void printAr(int myAr[],int Arsize);
void addone(int number[], int add[],int Arsize);
void addtwo(int number[], int pos[], int x, int possize);
void addthree(int number[], int pos[][], int possize);
main() {
	int number[] = {20,50,100,99,9};
	int add[] = {10,20,30,40,50};
	int pos[] = {1,4};
	int sizenum = sizeof(number)/sizeof(number[0]);
	int sizepos = sizeof(pos)/sizeof(pos[0]);
	int max,x;
	
	scanf("%d",&x);

	addone(number,add,sizenum);
	addtwo(number,pos,x,sizepos);
	addthree(number,pos,sizepos);
	max = findMax(number,sizenum);
	printAr(number,sizenum);
	printf("Maximum of these number is %d\n",max);
}
int findMax(int num[],int Arsize) {
	int maximum,i;
	maximum = num[0];

	for(i=0;i<Arsize;i++) {
		if(num[i] > maximum)
			maximum = num[i];
	}
	return maximum;
}
// print

void printAr(int myAr[],int Arsize){ 
	int i;
	for(i=0;i<Arsize;i++){
		printf("number %d : %d\n",i+1,myAr[i]);
	}
}

// 1.1

void addone(int number[], int add[],int Arsize){
	int i;
	for(i=0;i<Arsize;i++){
		number[i] = number[i] + add[i];
	}
}

// 1.2 

void addtwo(int number[], int pos[], int x, int possize){
	int i;
	for(i=0;i<possize;i++){
		number[pos[i]] += x;
	}
}

// 1.3 

void addthree(int number[], int pos[][], int possize){
	int i;
	
}

/* result
number[1] : 30
number[2] : 70
number[3] : 130
number[4] : 139
number[5] : 59
Maximum of these number is 139
*/
