#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main(int argc ,char * argv []){
	 double x = atoi(argv[1]);
	 double y = atoi(argv[2]);
	 double h = sqrt(x*x+y*y);
	 printf ("%f\n",h);
	return 0;
 }

