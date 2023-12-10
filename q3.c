#include <stdio.h>

int main(){
int dia, diafinal, hora, horafinal, minuto, minutofim, segundo, segundofim;

scanf("Dia %d", &dia);
scanf("%d : %d : %d\n", &hora, &minuto, &segundo);
scanf("Dia %d", &diafinal);
scanf("%d : %d : %d", &horafinal, &minutofim, &segundofim);

segundo = segundofim - segundo;
minuto = minutofim - minuto;
hora = horafinal - hora;
dia = diafinal - dia;

if (segundo < 0){
   segundo += 60;
   minuto--;
}

if (minuto < 0){
    minuto += 60;
    hora--;
}

if (hora < 0){
    hora += 24;
    dia--;
}

printf("%d dia(s)\n", dia);
printf("%d hora(s)\n", hora);
printf("%d minuto(s)\n", minuto);
printf("%d segundo(s)\n", segundo);
}
