#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  //*variant 6
int main()
{
    double x,PI=2*acos(0),res,val; val=PI/180;
    scanf("%lf",&x);

    // x = x * val;

    printf("%lf\n", (cos(x*val))+(cos(2*x*val))+(cos(6*x*val))+(cos(7*x*val)) );

    printf("%lf", 4*cos(0.5*x*val)*cos(2.5*x*val)*cos(4*x*val) );

    return 0;
}
