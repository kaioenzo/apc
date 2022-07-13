#include <stdio.h>
int main(){
    int a_escolha, b_escolha, c_escolha, d_escolha,camp_1_escolha,camp_2_escolha;
    int a_num,b_num,c_num,d_num,camp1_num,camp2_num;
    int result_jogo_1,result_jogo_2;
    char camp_jogo_1,camp_jogo_2,result_camp;

    scanf("%d%d%d",&a_escolha,&a_num,&b_num);
    scanf("%d%d%d",&c_escolha,&c_num,&d_num);
    scanf("%d%d%d",&camp_1_escolha,&camp1_num,&camp2_num);
    
//seta par e impar pra A e B/ C e D e para os campeões
    if(a_escolha == 0){
        b_escolha == 1;
    }else{
        b_escolha == 0;
    }

    if(c_escolha == 0){
        d_escolha == 1;
    }else{
        d_escolha == 0;
    }

    if(camp_1_escolha == 0){
        camp_2_escolha == 1;
    }else{
        camp_2_escolha == 0;
    }


//campeão jogo 1
    result_jogo_1 = a_num + b_num;
    if(result_jogo_1 % 2 == 0){
        if(a_escolha == 0){
            camp_jogo_1 = 'A';
        }else{
            camp_jogo_1 = 'B';
        }
    }else{
        if(a_escolha == 1){
            camp_jogo_1 = 'A';
        }else{
            camp_jogo_1 = 'B';
        }
    }

//campeão jogo 2
    result_jogo_2 = c_num + d_num;
    if(result_jogo_2 % 2 == 0){
        if(c_escolha == 0){
            camp_jogo_2 = 'C';
        }else{
            camp_jogo_2 = 'D';
        }
    }else{
        if(c_escolha == 1){
            camp_jogo_2 = 'C';
        }else{
            camp_jogo_2 = 'D';
        }
    }

//campeão jogo 3
    result_camp = camp1_num + camp2_num;
    if(result_camp % 2 == 0){
        if(camp_1_escolha == 0){
            result_camp = camp_jogo_1;
        }else{
            result_camp = camp_jogo_2;
        }
    }else{
        if(camp_1_escolha == 1){
            result_camp = camp_jogo_1;
        }else{
            result_camp = camp_jogo_2;
        }
    }


    printf("%c\n", result_camp);
}
