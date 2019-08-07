/* Pythagorean Theorem Solver*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() { 
	printf("a^2+b^2=c^2 \n");
	double a;
	double b=4;
	double c=5;
	char solve='a';
//	printf("What variable are you solving for?");
//	scanf("%s", solve);
	if (solve=='a') {
//	    printf("What are the values of b and c?");
//	    scanf("%lf","%lf", b, c);
	    a=sqrt((c*c)-(b*b));
	    printf("%lf",a);
	} else if (solve=='b') {
//	    printf("What are the values of a and c?");
//	    scanf("%lf","%lf", a, c);
	    b=sqrt((c*c)-(a*a));
	    printf("%lf",b);
	} else {
//	    printf("What are the values of a and b?");
//	    scanf("%lf","%lf", a, b);
	    c=(a*a)+(b*b);
	    printf("%lf",c);
	} 
	return 0; 
}  

