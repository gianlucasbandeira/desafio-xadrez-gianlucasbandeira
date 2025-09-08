#include <stdio.h>

int main() {

printf("Agora vamos dar inicio ao jogo de xadrez!\n\n");
  
printf("Vamos começar com a torre:\n\n");
int torre = 0;
while (torre <= 4){
  printf("direita\n");
  torre = torre + 1;
}
printf("\n");

  
printf("Agora vamos para o bispo:\n\n");
int bispo = 0;
  do {
    printf("direita\n");
    printf("cima\n");
    bispo = bispo + 1;}
  while (bispo <=4);
  printf("\n");

  
  printf("Agora vamos para a rainha:\n\n");
  for (int rainha = 0; rainha <= 7; rainha = rainha + 1)
  printf("esquerda\n");
  
  
return 0;
}

//exercicios:

//float x = 10;

/* while (x <= 99){
    printf("%f\n", x);
  x = x + 5.5;
}*/

/*
do {
  printf("%F\n", x);
  x = (x + 5.5);
}while (x <=100);
*/

/*
for (x = 10; x <=100; x = x + 6.6)
{
  printf("%f\n", x);
}
*/