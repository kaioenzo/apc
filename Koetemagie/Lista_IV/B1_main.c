#include <stdio.h>

extern void fazGrama (double pesoKg);
extern void fazTonelada (double pesoKg);

int main () {

  // Transformar para tonelada.
  fazGrama(5);

  // Transformar para grama.
  fazTonelada(75);

  // Enviar um valor negativo para grama.
  fazGrama(-2);
  
  // Enviar um valor negativo para tonelada.
  fazTonelada(-5);

  return 0;

}
