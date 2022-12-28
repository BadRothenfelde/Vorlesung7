#include <stdio.h>
int add(int x, int y) { //hier wurde ein name (add) und die variablen bestimmt
    return x + y; //hier die operation die ausgeführt werden soll
}

int main (void) { //void im main 
    int result = add(3, 3); //neuer variablenname: result entspricht der funktion add mit den Zahlen (2 und 3) eingesetzt für die Variablen oben
    
  printf("Result: %d\n", result);
    return 0;
}
