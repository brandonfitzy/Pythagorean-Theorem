/* Pythagorean Theorem Solver*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    char solve;
	printf("a^2+b^2=c^2 \n");
	printf("What value would you like to solve for? \n");
	scanf("%c",&solve);
	double a;
	double b;
	double c;
	if (solve=='a') {
	    printf("What are the values of b?\n");
	    scanf("%lf", &b);
	    printf("What are the values of c?\n");
	    scanf("%lf", &c);
	    a=sqrt((c*c)-(b*b));
	    printf("%lf",a);
	} else if (solve=='b') {
	    printf("What are the values of a?\n");
	    scanf("%lf", &a);
	    printf("What are the values of c?\n");
	    scanf("%lf", &c);
	    b=sqrt((c*c)-(a*a));
	    printf("%lf",b);
	} else {
	    printf("What are the values of a?\n");
	    scanf("%lf", &a);
	    printf("What are the values of b?\n");
	    scanf("%lf", &b);
	    c=sqrt((a*a)+(b*b));
	    printf("%lf",c);
	}
	return 0;
}


