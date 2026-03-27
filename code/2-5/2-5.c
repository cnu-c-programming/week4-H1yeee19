#include <stdio.h>
#include <math.h>

int main() {
  double x = 9.0;
  double y = 2.5;

  printf("%.2f\n", sqrt(x));
  printf("%.2f\n", pow(x, y));  
  printf("%.1f\n", ceil(x));  
  printf("%.1f\n", floor(x));

  return 0;

}
