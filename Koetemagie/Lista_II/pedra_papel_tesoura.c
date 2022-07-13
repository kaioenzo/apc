#include <stdio.h>
int main(){
    int player_1,player_2;
    int pedra = 0;
    int papel = 1;
    int tesoura = 2;
    int lagarto = 3;
    int spock = 4;
    scanf("%d%d",&player_1,&player_2);
    //pedra
    if (player_1==pedra && player_2==tesoura)
    {
        printf("A\n");
    }else if(player_1==tesoura && player_2==pedra){
        printf("B\n");
    }
    if (player_1==pedra && player_2==lagarto)
    {
        printf("A\n");
    }else if(player_1==lagarto && player_2==pedra){
        printf("B\n");
    }
    //tesoura
    if (player_1==tesoura && player_2==papel)
    {
        printf("A\n");
    }else if(player_1==papel && player_2==tesoura){
        printf("B\n");
    }
    //papel
    if (player_1==papel && player_2==pedra)
    {
        printf("A\n");
    }else if(player_1==pedra && player_2==papel){
        printf("B\n");
    }
    if(player_1==papel && player_2==spock){
        printf("A\n");
    }else if(player_1==spock && player_2==papel){
        printf("B\n");
    }
    //tesoura
    if(player_1==tesoura && player_2==lagarto){
        printf("A\n");
    }else if(player_1==lagarto && player_2==tesoura){
        printf("B\n");
    }
    //lagarto
    if(player_1==lagarto && player_2==spock){
        printf("A\n");
    }else if(player_1==spock && player_2==lagarto){
        printf("B\n");
    }
    if(player_1==lagarto && player_2==papel){
        printf("A\n");
    }else if(player_1==papel && player_2==lagarto){
        printf("B\n");
    }
    //spock
    if(player_1==spock && player_2==tesoura){
        printf("A\n");
    }else if(player_1==tesoura && player_2==spock){
        printf("B\n");
    }
    if(player_1==spock && player_2==pedra){
        printf("A\n");
    }else if(player_1==pedra && player_2==spock){
        printf("B\n");
    }
    //empate
    if (player_1==player_2)
    {
       printf("empate\n");
    }

}