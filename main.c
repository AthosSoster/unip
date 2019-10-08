#include <stdio.h>
#include <stdlib.h>
//Prototipação
void foot(int ano);
void head();
int levalida1();
int levalida2();
char opvld();
int add(int n1,int n2);
int sub(int n1,int n2);
int tim(int n1,int n2);
int divi(int n1,int n2);
//Main
int main()
{
	head();
	int n1=0,n2=0,cont=0,a=1;
	n1 = levalida1();
	char op = opvld();
	n2 = levalida2();
	switch (op){
		case '+':
			printf("\nO Resultado e: %d",add(n1,n2));
			break;
		case '-':
			printf("\nO Resultado e: %d",sub(n1,n2));
			break;
		case 'x':
			printf("\nO Resultado e: %d",tim(n1,n2));
			break;
		case '/':
			if(divi(n1,n2)==0){
				printf("\nNão e possivel dividir por 0.");
			}
			else{
			printf("\nO Resultado e: %d",divi(n1,n2));
			}
		break;
	}
	foot(2019);
	return 0;
}
//Header e Foot
void head(){
	printf("\nCALC MASTER 1.0\n");
	printf("_____________________\n");	
}
void foot(int ano){
	printf("\n\nMade by: Athos C. Soster\nCopyright %d",ano);
}
//Validação de Input
int levalida1(){
	int n1=0,cont=0;
	do{
		if(cont%3==0 && cont!=0){
			system("cls");
			printf("\nDigite um numero valido!\n");
		}
		else if(cont!=0){
			printf("\nDigite um numero valido!\n");
		}
		printf("\nDigite o primeiro numero: ");
		scanf("%d",&n1);
		cont++;
	}while(n1<1 || n1>12);
	return n1;
}
int levalida2(){
	int n2=0,cont=0;
	do{
		if(cont%3==0 && cont!=0){
			system("cls");
			printf("\nDigite um numero valido!\n");
		}
		else if(cont!=0){
			printf("\nDigite um numero valido!\n");
		}
		printf("\nDigite o segundo numero: ");
		scanf("%d",&n2);
		cont++;
	}while(n2<0 || n2>15);
	return n2;
}
char opvld(){
	char op;
	int cont = 0;
	do{
		if(cont%3==0 && cont!=0){
			system("cls");
			printf("\nDigite um caractere valido!\n");
		}
		else if(cont!=0){
			printf("\nDigite um caractere valido!\n");
		}
		printf("\nDigite a Operacao: ");
		scanf(" %c",&op);
		cont++;
	}while(op!='+' && op!='-' && op!='x' && op!='/');
	return op;
}
//Operações matemáticas
int add(int n1,int n2){
	int res = n1+n2;
	return res;
}
int sub(int n1, int n2){
	int res = n1-n2;
	return res;
}
int tim(int n1, int n2){
	int res = n1*n2;
	return res;
}
int divi(int n1, int n2){
	if(n1==0 || n2==0){
		return 0;
	}
	else{
		int res = n1/n2;
		return res;
	}
	
}

