//L.S.W - Teste de C 2019/10/22
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

const int MAX = 6;
//Estrutura
typedef struct Usuario{
       char nome[30];
       char email[30];
       int idade;
    }Usuario;

//----------------------------------------------------------
//Tela principal Usuarios Cadastro - Consulta - Atualiza - Remove.
//----------------------------------------------------------
telaOpcao() {
    system("clear"); 
    printf("==========================\n");
    printf("        Sistema \n");
    printf("==========================\n");
    printf("Selecione as opcoes:\n");
    printf("1- Cadastro\n");
    printf("2- Consulta\n");
    printf("3- Atualiza\n");
    printf("4- Exclui\n");
    printf("5- Sair\n");
    printf("\n");
    printf("==========================\n");
    printf("Opcao:");
}
//----------------------------------------------------------
//Tela Consulta
//----------------------------------------------------------
telaConsulta() {
    system("clear"); 
    printf("==========================\n");
    printf("        Consulta \n");
    printf("==========================\n");
    printf("Nome:\n");
    printf("Email:\n");
    printf("\n");
    printf("1-Consultar\n");
    printf("==========================\n");
    printf("Opcao:");
}
//----------------------------------------------------------
//Tela Autaliza
//----------------------------------------------------------
telaAtualiza() {
    system("clear"); 
    printf("==========================\n");
    printf("        Atualizar \n");
    printf("==========================\n");
    printf("Nome:\n");
    printf("Idade:\n");
    printf("Email:\n");
    printf("\n");
    printf("1-Atualizar\n");
    printf("==========================\n");
    printf("Opcao:");
}
//----------------------------------------------------------
//Tela Cadastro
//----------------------------------------------------------
telaCadastro() {
    Usuario usuario;
   
    system("clear"); 
    printf("==========================\n");
    printf("        Cadastro \n");
    printf("==========================\n");
    printf("Nome:");
    scanf("%s",&usuario.nome);
    printf("Idade:");
    scanf("%d",&usuario.idade);
    printf("Email:");
    scanf("%s",&usuario.email);
    printf("\n");
    printf("1-Gravar\n");
    printf("==========================\n");
    printf("Opcao:");

}
//----------------------------------------------------------
//Tela Excluir
//----------------------------------------------------------
telaExcluir() {
    system("clear"); 
    printf("==========================\n");
    printf("        Excluir \n");
    printf("==========================\n");
    printf("Nome:\n");
    printf("Email:\n");
    printf("\n");
    printf("1-Excluir\n");
    printf("==========================\n");
    printf("Opcao:");
}
//----------------------------------------------------------
//consulta usuaio
//----------------------------------------------------------
consultaUser(int op) {
    if(op == 1) {
        printf("Consulta\n");
        system("pause");
    }else {
        printf("Opcao invalida!\n");
        system("pause");
    }
}
//----------------------------------------------------------
//Atualiza usuaio
//----------------------------------------------------------
atualizaUser(int op) {
    if(op == 1) {
        printf("Atualiza\n");
        system("pause");
    }else {
        printf("Opcao invalida!\n");
        system("pause");
    }
}
//----------------------------------------------------------
//Funcao que exlui o usuario.
//----------------------------------------------------------
excluirUser(int op) {
    if (op == 1) {
        printf("Exluido usuario\n");
        system("pause");   
    }else {
        printf("Opcao invalida!\n");
        system("pause"); 
    }
}
//----------------------------------------------------------
//Funcao cadastra usuario.
//----------------------------------------------------------
cadastraUser(int op) {
    if (op == 1) {
        printf("Cadastra usuario\n");
        system("pause");    
    }else {
        printf("Opcao invalida!\n");
        system("pause"); 
    }
}
/*
//----------------------------------------------------------
//Compara o usuario de acesso com o do Padrao 
//----------------------------------------------------------
comparaUser(char* usuario,char* senha) {
    int resUser,resSenh;
    char userPadrao[30]  = "admin";
    char senhaPadrao[15] = "admin";              //Usuario padrao de acesso 

    resUser = strcmp(userPadrao,usuario);        //Confere se os sao iguais a string
    resSenh = strcmp(senhaPadrao,senha);
    
    if ((resUser != 0) || (resSenh != 0)) {      //Confere o retorno e printa na tela mensagem
        printf("Sem permissao");
    }else {
        printf("Ben-vindo! %s", usuario);
    }
}
*/
//----------------------------------------------------------
//Inicio do programa.
//----------------------------------------------------------
void main() {
   int op;
  
   do {
        telaOpcao();
        scanf("%d",&op);
        switch(op) {
            case 1 :
                telaCadastro();
                scanf("%d",&op);
                cadastraUser(op);
                break;
            case 2 :
                telaConsulta();
                scanf("%d",&op);
                consultaUser(op);
                break;
            case 3 :
                telaAtualiza();
                scanf("%d",&op);
                atualizaUser(op); 
                break;
            case 4 :
                telaExcluir();
                scanf("%d",&op);
                excluirUser(op);
                break;
            case 5 :
                printf("\nSair do sistema\n");
                system("pause");
                break;    
            default:
                printf("\nOpcao invalida!");
                break;
        }

   }while(op != 5);
}
//-----------------------------------------------------------
