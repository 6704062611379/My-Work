#include <stdio.h>
#include <ctype.h>

int checkLogin(char *login, char *passwd);
int checkValidPass(char*ps);

int main() {
	char login[64], password[64];
	printf("Enter login : "); gets(login);
	printf("Enter password : "); gets(password);
	
	/*printf("length:%d\n", strlen(password));
	if( checkLogin(login, password) == 1) {
		printf("Welcome\n");
	} else {
		printf("Incorrect login or password\n");
	}*/
	if( checkValidPass(password)){
		// Accepted
		printf("Accepted\n");
	}
	else{
		//not Accepted
		printf("Reject\n");
	}
}
int checkValidPass(char*ps){
	int i,accepted=0, founddigit=0, l = strlen(ps), score=0, numscore = 0;
	if(l >= 5 && l <= 8 && (isdigit(ps[0]) == 0)){
		for(i=0;i<l;i++){
			if(isupper(ps[i])){
				score++;
			}
			else if(isdigit(ps[i])){
				numscore++;
			}
		}
		if(score >= 2 && numscore >= 2){
			return  1;
		}
	}
	else{
		return 0;
	}
}
/*int checkLogin(char *login, char *passwd) {
	if( !strcmp(login, "student1") && !strcmp(passwd, "mypass")){
		return 1;
	}
	else{
		return 0;
	}
}*/



