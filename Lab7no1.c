#include <stdio.h>
double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
 
void main(void) {
  	int a, b, c, d, e , n ;
  	double r, s, t, u, v , x;
	functionP(functionN(a, a), s, t, t+r);
}
int functionN(int a, double a){
	return 
}
/*

a)  functionM(); = No problem
b)  a = functionM(); = No problem
c)  b = functionN(a,b); = No problem
d)  r = functionO(r,a,s,b); = No problem 
e)  s = functionP(a,b,c,d,e); = paramiter overflow
f)  u = functionM(); = No problem
g)  c = d + functionN(r,s); = No problem
h)  t = s * functionO(r, a, r, a); = Duplicate paramiter
i)  a = v + functionP(r, s, t, t); Have a problem the paramiter should be an int like in the function.
j)  functionP(functionN(a, a), s, t, t+r);
k)  v = functionP(functionN(a, a), s, t, t+r);

*/
