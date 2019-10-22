//L.S.W - Teste de C 2019/10/22
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//----------------------------------------------------------
//Tela principal de acesso.
//----------------------------------------------------------
principal() {
    char usuario[30];
    char senha[15]; 
    char userPadrao[30]  = "admin";
    char senhaPadrao[15] = "admin";	 //Usuario padrao de acesso 
    system("clear");
 	printf("==========================\n");
    printf("  Sistema Teste C - Login\n");
    printf("==========================\n");
    printf("Usuario:");
    gets(usuario);
    printf("\n");
    printf("Senha:");
    gets(senha);
    printf("\n");
    comparaUser(usuario,senha,userPadrao,senhaPadrao);
    printf("\n");
    
}
//----------------------------------------------------------
//Compara o usuario de acesso com o do Padrao 
//----------------------------------------------------------
comparaUser(char* usuario,char* senha,char* userPadrao,char* senhaPadrao) {
	int resUser,resSenh;

	resUser = strcmp(userPadrao,usuario);	//Confere se os sao iguais a string
	resSenh = strcmp(senhaPadrao,senha);
  	
  	if ((resUser != 0) || (resSenh != 0)) { //Confere o retorno e printa na tela mensagem
  		printf("Sem permissao");
  	}else {
  		printf("Ben-vindo! %s", usuario);

  	}
}
//----------------------------------------------------------
//Inicio do programa.
//----------------------------------------------------------
void main() {
	bool op = true;
	int  opcao= 0;
	
	while(op) {
		if (opcao != 27) {
			principal();
    		printf("==========================\n");
    		op = true;
    		
    	} else if ((opcao == 27)) {
    		system("clear");
    		printf("==========================\n");
    		printf("Acionado o ESC By\n");
    		op = false;
    		
    	} else {
    		printf("==========================\n");
    		printf("Presione qualquer techa\n");
    		principal();
    		op = true;
    	}
    	printf("ESC PARA SAIR\n");
		opcao = getchar();
	
	}
	
}
//-----------------------------------------------------------
