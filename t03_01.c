// NIM - NAMA

#include <stdio.h>

int main(int _argc, char **_argv)
{

  int n,max,min,i;
  scanf("%d", &n);
  
  int angka[n]
  for (int i = 0; i < n; i++) {
    scanf("%d", &angka[i]);
    if (i == 0) {
      max = angka[i];
      min = angka[i];
    } else {
      if (angka[i] > max) {
        max = angka[i];
      }
      if (angka[i] < min) {
        min = angka[i];
      }
    }
 
  }
  printf("%d\n" ,&min);
  printf("%d\n" ,&max);

  


  return 0;
}
