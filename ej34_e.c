#include<stdlib.h>
#include<math.h>

 int main(int argc ,char *argv[])
          {
		  double t= atof(argv[1]);
                  double res = sin(2*t) + sin(3*t);
                   printf("%f\n",res);
		   return 0;
	  }
