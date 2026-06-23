#include <stdio.h>
void float_example(){
  float a = 7.9;
 
  printf("%f\n", a); // 7.900000 (기본 6자리)
  printf("%.3f\n", a); // 7.900 (3자리까지)
  printf("%6.2f\n", a); //   7.90 (자릿수를 6칸으로 잡아두고 소수점 두자리 => 앞에 2칸 공백)
}


