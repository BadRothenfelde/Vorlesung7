#include <stdio.h>
int main () {
//x ist Kapital, xn Kapital vom Jahr n, n ist Jahre, z ist zinssatz
  float x, xn, n, z = 1.045, i; 
  printf("Linearer Zinsrechner\n");
  printf("Geben Sie ihren Betrag und die Laufzeit an\n");
  scanf("%f", &x);
  scanf("%f", &n);

  //Anfang der Zählschleife 
  for (i = 0; i != n; i++) {
 x = x * 1.045;
    printf("Im Jahr %.1f beträgt der Zinswert %.2f\n", i+1, x); 
      }
  printf("Der finale Zinswert beträgt %.2f\n", x);
return 0; 
  }