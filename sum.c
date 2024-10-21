#include <stdio.h>

int sum(int k);

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int k) {
  int sumtotal;
  for(int i=0,i<=k,i++){
   sumtotal=sumtotal+i;
}
return sum;
}