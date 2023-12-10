#include <stdio.h>

int main(){
    int Inter,Gremio,VitoriaInter,VitoriaGremio,Empates,Njogos,Op;
    Inter=Gremio=VitoriaInter=VitoriaGremio=Empates=Njogos=Op=0;
    
while(1)
{
    scanf ("%d %d" ,&Inter,&Gremio);
    if(Inter>Gremio) VitoriaInter++;
    if(Inter<Gremio) VitoriaGremio++;
    if(Inter==Gremio) Empates++;
    Njogos++;

    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d",&Op);

    if(Op==1){
        continue;
    }
    if (Op==2){
         break;
    }
}
printf("%d grenais\n",Njogos);
printf("Inter:%d\n",VitoriaInter);
printf("Gremio:%d\n",VitoriaGremio);
printf("Empates:%d\n",Empates);
if (VInter>VGremio){
    printf("Inter venceu mais\n");
}
if(VitoriaInter<VitoriaGremio){
    printf("Gremio venceu mais\n" );
}    
if (VitoriaInter==VitoriaGremio){
    printf("nao houve vencedor\n");
}
return 0;
}
