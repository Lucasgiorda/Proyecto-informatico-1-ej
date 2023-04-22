#include<stdlib.h>
#include<stdio.h>
#define g 9.066

 int main(int argc, char *argv[]) {

	double xo = atof(argv[1]);
	double yo = atof(argv[2]);
	double t = atof(argv[3]);
        double res = xo+yo*t-(1/2)*g*(t*t);
	printf("%f\n",res);
	return 0;

}
