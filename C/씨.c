#include <stdio.h>
void float_example(){
  float a = 7.9;
 
  printf("%f\n", a); // 7.900000 (기본 6자리)
  printf("%.3f\n", a); // 7.900 (3자리까지)
  printf("%6.2f\n", a); //   7.90 (자릿수를 6칸으로 잡아두고 소수점 두자리 => 앞에 2칸 공백)
}

struct stName {
    char nael[12];
    int os, db, hab, hhab;
};
 
int pointer_exam1() {
    struct stName st[3] = { {"stName1", 95, 88}, {"stName2", 84, 91}, {"stName3", 86, 75} };
    struct stName* p;
    p = &st[0]; // 구조체 배열의 첫번째 원소를 가리킴 
 
    (p + 1)->hab = (p + 1)->os + (p + 2)->db; // +1은 그 다음 원소, +2는 그 다음 원소를 뜻함 => (p + 1)->hab = 84 + 75 =159
    (p + 1)->hhab = (p + 1)->hab + p->os + p->db; // 159 + 95 + 88 = 342
 
    printf("%d", (p + 1)->hab + (p + 1)->hhab); // 159 + 342 = 501
}

// C언어 배열에서 초기값을 설정하지 않으면 0으로 세팅된다 

// 다음 C언어로 구현된 코드를 분석하여 출력과 같은 결과가 나타나도록 괄호에 알맞는 출력문을 작성하시오. (단, printf()함수를 사용한 한 개의 식으로 작성하시오.)
// 출력 : [a]=3.46 / [b]=5.612e-02
main(){
 
  float a = 3.45678f;
  double b = 0.0561214;
  (     )
}
// printf("[a]=%.2f / [b]=%.3e"); 

int main() {
    int ary[3];
    int s = 0;
 
    *(ary + 0) = 1; // 배열의 첫번째 원소 = 1
    ary[1] = *(ary + 0) + 2; // 배열의 1번째 원소에 2를 더한 값 = 3
    ary[2] = *ary + 3; // 배열의 1번째 원소에 3을 더한 값 = 4
 
    for (int i = 0; i < 3; i++)
        s = s + ary[i]; // 1+3+4=8
 
    printf("%d", s); // 8
}




