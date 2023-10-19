#include <stdio.h>

int main() {

int n, i, nota;
float media, soma=0, min, max;

printf("Introduza n notas: ");
scanf("%.d", &n);
getchar();

for (i=0; i<n; i++) {

printf("Introduza uma nota: ");
scanf("%.d", &nota);
getchar();


soma = soma+nota;

media= soma/n;

min=nota;
if (min<=nota) {
    min=nota;
}

max=nota;
if(max>=nota) {
    max=nota;
}






} 

printf("Soma: %.2f ", soma);
printf("Media: %.2f", media);
printf("Minimo: %.2f", min);
printf("Maximo: %.2f", max);


}