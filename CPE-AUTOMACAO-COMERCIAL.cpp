//PROJETO COMPUTACIONAL CPE 1�/2019
//ALUNAS : ADRIELLE - 180096699
//         LET�CIA - 180104896

#include<iostream>
#include<locale.h>
#include<cstdlib>
#include<string>
#include<fstream>
#include<iomanip>
#include<cstring>

using namespace std;

//calculo de dados
float valor_transporte = 5.00;	
float valor_vale_alimentacao= 15.00;	

//para produto
int estoque[21];
int codigo[21];
string produto[21];
double valor[21];
double avista[21];
int estoque_produto[21];

//para cadastro de funcionarios
struct funcionario{
	int quant_funcionario;
	string nome;
	string sexo;
	int idade;
	int vale_transporte;
	string endereco;
	string cidade;
	int cep;
	string uf;
	long long int cpf;
	int rg;
	string email;
	string telefone;
	string cargo;
	string grau_ensino;
	float salario_bruto;
};

//para formulario de satisfa��o
struct formulario{
	long long int telefone_pesquisa;
	int conhecer;
	int utilidade;
	int qualidade;
	int eficiencia;
	int preco;
	int pagamento;
	int entrega;
	int escala;
};

//para cadastro de cliente para or�amento
struct cliente{
	string nome_empresa;
	string telefone_cliente;
	long long int cnpj;
	string email_cliente;
	string funcionario;
};

//para cadastro de cliente para suporte tecnico 
struct cliente_suporte{
	string nome_suporte;
	string produto_suporte;
	string telefone_suporte;
	long long int cnpj_suporte;
	int rg_suporte;
	string email_suporte;
	string problema_suporte;
};


/*COME�O DE FUN��ES PARA O PROGRAMA:
	*O programa � separado por meio de menus, especificado para cliente, funcionario e gerente,
	cada um com suas possibilidades de uso, cada possibilidade cont�m sua fun��o
*/

void cadastro_funcionario(){
	
	fstream cadastrof; //aberto um arquivo para armazenar informa��es dos funcion�rios 

	char sn;  
	
	char sn_opcoes;

	int opcao_gerente;
	string nome_pesquisa;
	char operacao1;
	char coment_f;
	
	string desempenho;
	string advertencia;
	string comentario;
	
	string nome_liquido;
	char operacao2;
	
	float inss8, inss9, inss11;
	float armazena_vt, armazena_va;
	float ir7, ir15, ir22;

	funcionario cadastro; //struct 
	
	cadastrof.open("cadastrofuncionario.txt", ios::out); //vai sair do programa e ir para o arquivo
	
	if(cadastrof.is_open()){
	
	inicio_cadastro:
	cout << "\tCADASTRO DE FUNCIONARIOS" << endl << endl;
		
	cout << "Quantos funcion�rios voc� deseja cadastrar? " << endl;
		cin >> cadastro.quant_funcionario;
	
	//vari�veis para armazenar informa��es dos dados e realizar pesquisas 
	string armazena_nome[cadastro.quant_funcionario];
	string armazena_sexo[cadastro.quant_funcionario];
	int armazena_idade[cadastro.quant_funcionario];
	string armazena_endereco[cadastro.quant_funcionario];
	string armazena_cidade[cadastro.quant_funcionario];
	int armazena_cep[cadastro.quant_funcionario];
	string armazena_uf[cadastro.quant_funcionario];
	long long int armazena_cpf[cadastro.quant_funcionario];
	int armazena_rg[cadastro.quant_funcionario];
	string armazena_email[cadastro.quant_funcionario];
	string armazena_telefone[cadastro.quant_funcionario];
	string armazena_cargo[cadastro.quant_funcionario];
	string armazena_ensino[cadastro.quant_funcionario];
	float armazena_salario[cadastro.quant_funcionario];
	int armazena_vale_transporte[cadastro.quant_funcionario];
	
	string armazena_desempenho[cadastro.quant_funcionario];
	string armazena_advertencia[cadastro.quant_funcionario];
	string armazena_comentario[cadastro.quant_funcionario];
		
	for(int i=0; i< cadastro.quant_funcionario; i++){
	
	cout << "NOME: ";
	 	cin.ignore();
		getline(cin,cadastro.nome);
		armazena_nome[i]=cadastro.nome;
		cadastrof << cadastro.nome << endl;
	
	cout << "SEXO: ";
		cin >> cadastro.sexo;
		armazena_sexo[i]=cadastro.sexo;
		cadastrof << cadastro.sexo << endl;
	
	cout << "IDADE: ";
		cin >> cadastro.idade;
		armazena_idade[i]=cadastro.idade;
		cadastrof << cadastro.idade << endl;
	
	cout << "ENDERE�O:";
		cin.ignore();
		getline(cin,cadastro.endereco);
		armazena_endereco[i]=cadastro.endereco;
		cadastrof << cadastro.endereco << endl;
		
	
	cout << "CIDADE: ";
		cin.ignore();
		getline(cin,cadastro.cidade);
		armazena_cidade[i]=cadastro.cidade;
		cadastrof << cadastro.cidade << endl;
	
	cout << "CEP: ";
		cin >> cadastro.cep;
		armazena_cidade[i]=cadastro.cep;
		cadastrof << cadastro.cep << endl;
	
	cout << "UF: ";
		cin >> cadastro.uf;
		armazena_uf[i]=cadastro.uf;
		cadastrof << cadastro.uf << endl;
	
	cout << "CPF: ";
		cin >> cadastro.cpf;
		armazena_cpf[i]=cadastro.cpf;
		cadastrof << cadastro.cpf << endl;
	
	cout << "RG: ";
		cin >> cadastro.rg;
		armazena_rg[i]=cadastro.rg;
		cadastrof << cadastro.rg << endl;
	
	cout << "E-MAIL: ";
		cin.ignore();
		getline(cin,cadastro.email);
		armazena_email[i]=cadastro.email;
		cadastrof << cadastro.email << endl;
	
	cout << "TELEFONE: ";
		cin.ignore();
		getline(cin ,cadastro.telefone);
		armazena_telefone[i]=cadastro.telefone;
		cadastrof << cadastro.telefone << endl;
	
	cout << "CARGO: ";
		cin.ignore();
		getline(cin, cadastro.cargo);
		armazena_cargo[i]=cadastro.cargo;
		cadastrof << cadastro.cargo << endl;
	
	cout << "GRAU DE ENSINO: ";
		cin.ignore();
		getline(cin,cadastro.grau_ensino);
		armazena_ensino[i]=cadastro.grau_ensino;
		cadastrof << cadastro.grau_ensino << endl;
		
	cout << "QUANTIDADE DE VALES TRANSPORTES DIARIOS: ";
		cin >> cadastro.vale_transporte;
		armazena_vale_transporte[i]=cadastro.vale_transporte;
	
	cout << "SALARIO BRUTO: ";
		cin >> cadastro.salario_bruto;
		armazena_salario[i]=cadastro.salario_bruto;
		cadastrof << cadastro.salario_bruto << endl << endl;
		
	cout << endl << endl;
	}

	cout << "Voc� deseja acessar outras op��es? (s/n)" << endl;
		cin >> sn_opcoes;
		
	system("cls");
		
		if(sn_opcoes== 's' || sn_opcoes== 'S'){
			inicio_opcoes:
			cout << "OP��ES: " << endl;
			cout << "1. Pesquisar por funcion�rio. " << endl;
			cout << "2. C�lculo de Dados do Sal�rio Liqu�do dos funcion�rios. " << endl;
			cout << "3. Lista de Funcion�rios. " << endl;
			cout << endl;
			
			cout << "Selecione uma das op��es listadas acima: " << endl;
				cin >> opcao_gerente;
				
				while(opcao_gerente<1 || opcao_gerente>3){
					cout << "OP��O INV�LIDA! Digite novamente: " << endl;
						cin >> opcao_gerente;
				}
				
				system("cls");
				
			switch (opcao_gerente){
				
				case 1:
					
					cout << "\tPesquisa de Funcion�rios" << endl << endl;
					cout << "Digite o nome do funcion�rio: " << endl;
						cin.ignore();
						getline(cin, nome_pesquisa);
						
					cout << endl << endl;
					
					for(int i=0; i<cadastro.quant_funcionario; i++){
						
						if(nome_pesquisa == armazena_nome[i]){
						cout << "NOME:" << armazena_nome[i] << endl;
						cout << "SEXO: " << armazena_sexo[i] << endl;
						cout << "IDADE: " << armazena_idade[i] << endl;
						cout << "ENDERE�O: " << armazena_endereco[i] << endl;
						cout << "CIDADE: " << armazena_cidade[i] << endl;
						cout << "CEP: " << armazena_cep[i] << endl;
						cout << "UF: " << armazena_uf[i] << endl;
						cout << "CPF: " << armazena_cpf[i] << endl;
						cout <<	"RG: " << armazena_rg[i] << endl;
						cout << "E-MAIL: " << armazena_email[i] << endl;
						cout << "TELEFONE: " << armazena_telefone[i] << endl;
						cout << "CARGO: " << armazena_cargo[i] << endl;
						cout << "GRAU DE ENSINO: " << armazena_ensino[i] << endl;
						cout << "SAL�RIO BRUTO: " << armazena_salario[i] << endl << endl;
						
						cout << "Deseja fazer alguma observa��o sobre o funcion�rio?(s/n)" << endl;
							cin >> coment_f;
						
						cout << endl;
						
							if(coment_f=='s' || coment_f=='S'){
								cout << "DESEMPENHO: (otimo/medio/baixo)" << endl;
									cin.ignore();
									getline(cin,desempenho);
									armazena_desempenho[i]=desempenho;
									
								cout << "ADVERT�NCIAS: " << endl;
									cin.ignore();
									getline(cin,advertencia);
									armazena_advertencia[i]=advertencia;
								
								cout << "COMENT�RIOS: " << endl;
									cin.ignore();
									getline(cin,comentario);
									armazena_comentario[i]=comentario;	
							}

						}
					}	
					
					cout << "Desejar realizar mais alguma opera��o?(s/n)" << endl;
						cin >> operacao1;
							
						if(operacao1=='s' || operacao1=='S'){
							system("cls");
							goto inicio_opcoes;
						}
						else{
							cout << "FIM DE PESQUISA!" << endl;
						}
						
				break;
					
				case 2:
					
					cout << "\tC�lculo do Sal�rio L�quido dos Funcion�rios" << endl << endl;
					cout << "Digite o nome do funcion�rio? " << endl;
						cin.ignore();
						getline(cin,nome_liquido);
			
					cout << endl;
					
					system("cls");
				
					for(int i=0; i<cadastro.quant_funcionario; i++){
						if( nome_liquido == armazena_nome[i]){
						
						cout << "NOME:" << armazena_nome[i] << endl;
						cout << "FUN��O: " << armazena_cargo[i] << endl;
						cout << "E-MAIL: " << armazena_email[i] << endl << endl;
						
						cout << "\tC�lculo de Sal�rio" << endl << endl;
						cout << "INSS-  Instituto Nacional de Seguro Social";
						
							if(armazena_salario[i]<=1690.00){
								cout << "8% do Sal�rio Bruto " << endl;
								cout << "DESCONTADO: R$"<< (armazena_salario[i]*0.08) << endl; 
								inss8= armazena_salario[i]*0.08;
							}
							
							else if(armazena_salario[i]>1690.00 && armazena_salario[i]<=2800.00){
								cout << "9% do Sal�rio Bruto " << endl;
								cout << "DESCONTADO: R$"<< (armazena_salario[i]*0.09) << endl;
								inss9= armazena_salario[i]*0.09;
							}
							
							else if(armazena_salario[i]>2800.00 && armazena_salario[i]<=5600.00){
								cout << "11% do Sal�rio Bruto " << endl;
								cout << "DESCONTADO: R$"<< (armazena_salario[i]*0.11) << endl; 
								inss11= armazena_salario[i]*0.11;
							}
							
						cout << endl;
							
						cout << "VALE TRANSPORTE- " << endl;
						
							cout << "Receber mensalmente: R$" << armazena_vale_transporte[i]*5.00*22 << endl;
							armazena_vt= armazena_vale_transporte[i]*5.00*22;
							
						cout << endl;
						
						cout << "VALE ALIMENTA��O- " << endl;
						
							cout << "Receber mensalmente: R$" << valor_vale_alimentacao*22 << endl;
							armazena_va= valor_vale_alimentacao*22;
						
						cout << endl;
						
						cout << "IMPOSTO DE RENDA- " << endl;
						
							if(armazena_salario[i]<=1900.00){
								cout << "ISENTO DE TAXA " << endl;
								cout << "DESCONTADO: R$0.00" << endl; 
							}
							
							else if(armazena_salario[i]>1900.00 && armazena_salario[i]<=2800.00){
								cout << "7.5% do Sal�rio Bruto " << endl;
								cout << "DESCONTADO: R$" << (armazena_salario[i]*0.075) << endl;
								ir7= armazena_salario[i]*0.075;
							}
							
							else if(armazena_salario[i]>2800.00 && armazena_salario[i]<=3700.00){
								cout << "15% do Sal�rio Bruto " << endl;
								cout << "DESCONTADO: R$" << (armazena_salario[i]*0.15) << endl; 
								ir15= armazena_salario[i]*0.15;
							}
							
							else if(armazena_salario[i]>3700.00){
								cout << "22.5% do Sal�rio Bruto " << endl;
								cout << "DESCONTADO: " << (armazena_salario[i]*0.225) << endl; 
								ir22= armazena_salario[i]*0.225;
							}
						
						cout << endl << endl;
						
						cout << "SAL�RIO LIQU�DO R$" << armazena_salario[i] - inss8 - inss9 - inss11 + armazena_vt + armazena_va - ir7 - ir15 - ir22 << endl;		
						}
					}
					
					cout << "Desejar realizar mais alguma opera��o?(s/n)" << endl;
						cin >> operacao2;
							
						if(operacao2=='s' || operacao2=='S'){
							system("cls");
							goto inicio_opcoes;
						}
						else{
							cout << "FIM DE PESQUISA!" << endl;
						}
					
				break;
						
				case 3:
					
					cout << "\tLista de Todos os Funcion�rios" << endl << endl;
					
					for(int i=0; i<cadastro.quant_funcionario;i++){
						
						cout << "NOME:" << armazena_nome[i] << endl;
						cout << "SEXO: " << armazena_sexo[i] << endl;
						cout << "IDADE: " << armazena_idade[i] << endl;
						cout << "ENDERE�O: " << armazena_endereco[i] << endl;
						cout << "CIDADE: " << armazena_cidade[i] << endl;
						cout << "CEP: " << armazena_cep[i] << endl;
						cout << "UF: " << armazena_uf[i] << endl;
						cout << "CPF: " << armazena_cpf[i] << endl;
						cout <<	"RG: " << armazena_rg[i] << endl;
						cout << "E-MAIL: " << armazena_email[i] << endl;
						cout << "TELEFONE: " << armazena_telefone[i] << endl;
						cout << "CARGO: " << armazena_cargo[i] << endl;
						cout << "GRAU DE ENSINO: " << armazena_ensino[i] << endl;
						cout << "SAL�RIO BRUTO: " << armazena_salario[i] << endl;
						cout << "DESEMPENHO: " << armazena_desempenho[i] << endl;
						cout << "ADVERT�NCIA: " << armazena_advertencia[i] << endl;
						cout << "COMENT�RIOS: " << armazena_comentario[i] << endl;
						cout << endl << endl;
						
					}
					
					cout << "Desejar realizar mais alguma opera��o?(s/n)" << endl;
						cin >> operacao2;
							
						if(operacao2=='s' || operacao2=='S'){
							system("cls");
							goto inicio_opcoes;
						}
						else{
							cout << "FIM DE PESQUISA!" << endl;
						}
						
				break;

			}		
		}	
		else{
			cout << "FIM DE CADASTRO! " << endl << endl;
		}
	}
	else{
		cout << "N�o foi possivel abrir o arquivo!" << endl;
	}	
}


void pesquisaproduto(){

	
	codigo[1]= 100, codigo[2]=200, codigo[3]= 300, codigo[4]= 400, codigo[5]=500;
	codigo[6]= 600, codigo[7]=700, codigo[8]= 800, codigo[9]= 900, codigo[10]=1000;
	codigo[11]= 1100, codigo[12]=1200, codigo[13]= 1300, codigo[14]= 1400, codigo[15]=1500;
	codigo[16]= 1600, codigo[17]=1700, codigo[18]= 1800, codigo[19]= 1900, codigo[20]=2000;
	
	produto[1]="Gaveta dinheiro bematch GD46";
	produto[2] = "HD HPE 1TB SATA p/ SERV HPE";
	produto[3] = "Impressora de etiqueta Elgin";
	produto[4] = "Impressora t�rmica bematch MP2800";
	produto[5] = "Leitor CB Las USB";
	produto[6] = "Monitor Dell";
	produto[7] = "No break NHS";
	produto[8] = "Kit teclado +mouse";
	produto[9] = "Computador bematch RC8400";
	produto[10] = "MIT player W toledo";
	produto[11] = "Liquidificador Urano 950A";
	produto[12] = "Gancho girat�rio grande";
	produto[13] = "Tampa bematch";
	produto[14] = "Bobina Regispel 57x300";
	produto[15] = "Balan�a Toledo 9094";
	produto[16] = "Balan�a PRIX 5 PLUS";
	produto[17] = "Carregador Datalogic micro USB";
	produto[18] = "Embaladora p/ filme Sulpack";
	produto[19] = "Faca a�oug. Starrett";
	produto[20] = "Faca desossa Starrett";

	valor[1]= 577.00 , avista[1]= 548.15;
	valor[2]= 1067.00 , avista[2]= 1013.65;
	valor[3]= 5330.00 , avista[3]= 5063.95;
	valor[4]= 700.00 , avista[4]= 665.00;
	valor[5]= 198.00 , avista[5]= 188.10;
	valor[6]= 585.00 , avista[6]= 555.75;
	valor[7]= 709.00 , avista[7]= 673.55;
	valor[8]= 172.00 , avista[8]= 163.40;
	valor[9]= 1645.00 , avista[9]= 15672.75;
	valor[10]= 3400.00 , avista[10]= 3230.00;
	valor[11]= 915.00 , avista[11]= 869.25;
	valor[12]= 50.00 , avista[12]= 47.50;
	valor[13]= 131.00 , avista[13]= 124.45;
	valor[14]= 150.00, avista[14]= 142.50;
	valor[15]= 642.00 , avista[15]= 609.90;
	valor[16]= 5724.00 , avista[16]= 5437.80;
	valor[17]= 183.00 , avista[17]= 173.85;
	valor[18]= 810.00 , avista[18]= 769.50;
	valor[19]= 69.90 , avista[19]= 66.40;
	valor[20]= 31.30, avista[20]= 29.70;
	
	estoque[1] =  (30 - estoque_produto[1]) ,  estoque[2] =  (30-estoque_produto[2]) ,  estoque[3] =  (30 - estoque_produto[3]) , estoque[4] = (30-estoque_produto[4]) ,  estoque[5] = (30-estoque_produto[5]); 
	estoque[6] =  (30 - estoque_produto[6]) ,  estoque[7] =  (30-estoque_produto[7]) ,  estoque[8] =  (30-estoque_produto[8]) ,   estoque[9] = (30-estoque_produto[8]) ,  estoque[10] =(30-estoque_produto[10]); 
	estoque[11] = (30 - estoque_produto[11]) , estoque[12] = (30-estoque_produto[12]) , estoque[13] = (30- estoque_produto[13]) , estoque[14] =(30-estoque_produto[14]) , estoque[15] =(30-estoque_produto[15]); 
	estoque[16] = (30 - estoque_produto[16]) , estoque[17] = (30-estoque_produto[16]) , estoque[18] = (30-estoque_produto[18]) ,  estoque[19] =(30-estoque_produto[19]) , estoque[20] =(30-estoque_produto[20]); 
	
			
	inicio_pp:
	int pesquisa;
	int achou=0;
	char aswr_pp;
	
	cout << "\t PESQUISA POR PRODUTO" << endl << endl;
	cout << "Digite o c�digo do produto:  ";
	cin>> pesquisa;
	cout << endl;
	
	for(int i=1; i<=20 ;i++){
		
		if(codigo[i]==pesquisa){
			cout << "C�DIGO            " << "PRODUTO                      " << "VALOR   " << "A VISTA   " << "ESTOQUE" << endl << endl;
			cout << codigo[i] << "     " << produto[i] << "          " << valor[i] << "     " << avista[i] << "    " << estoque[i] << endl;
			achou= 1;
		}
	}
	cout << endl;
	
	if(achou==0){
		cout << "Produto n�o encontrado no estoque! Deseja tentar novamente? (s/n)" << endl;
		cin >> aswr_pp;
		if(aswr_pp=='s' || aswr_pp=='S'){
			system("cls");
			goto inicio_pp;
		}
	}
	cout << endl;
	cout << "Deseja procurar por um outro produto? (s/n)"<< endl;
	cin >> aswr_pp;
		if(aswr_pp=='s' || aswr_pp=='S'){
			system("cls");
			goto inicio_pp;
		}
	
}


void compra_produto(){
		
	double valor_compra;
	int quant_dif;
	int codigo_compra;
	string funcionario_compra;
	int quant_compra;
	char sim_nao_compra;
	int pagamento;
	char frete;
	string endereco_frete;
	int cep_frete;
	
	string nomeproduto;

	int estoque[21];
	int codigo[21];
	string produto[21]; 
	double valor[21];
	double avista[21];
	
	estoque_produto[21];
	
	codigo[1]= 100, codigo[2]=200, codigo[3]= 300, codigo[4]= 400, codigo[5]=500;
	codigo[6]= 600, codigo[7]=700, codigo[8]= 800, codigo[9]= 900, codigo[10]=1000;
	codigo[11]= 1100, codigo[12]=1200, codigo[13]= 1300, codigo[14]= 1400, codigo[15]=1500;
	codigo[16]= 1600, codigo[17]=1700, codigo[18]= 1800, codigo[19]= 1900, codigo[20]=2000;
	
	produto[1]="Gaveta dinheiro bematch GD46";
	produto[2] = "HD HPE 1TB SATA p/ SERV HPE";
	produto[3] = "Impressora de etiqueta Elgin";
	produto[4] = "Impressora t�rmica bematch MP2800";
	produto[5] = "Leitor CB Las USB";
	produto[6] = "Monitor Dell";
	produto[7] = "No break NHS";
	produto[8] = "Kit teclado +mouse";
	produto[9] = "Computador bematch RC8400";
	produto[10] = "MIT player W toledo";
	produto[11] = "Liquidificador Urano 950A";
	produto[12] = "Gancho girat�rio grande";
	produto[13] = "Tampa bematch";
	produto[14] = "Bobina Regispel 57x300";
	produto[15] = "Balan�a Toledo 9094";
	produto[16] = "Balan�a PRIX 5 PLUS";
	produto[17] = "Carregador Datalogic micro USB";
	produto[18] = "Embaladora p/ filme Sulpack";
	produto[19] = "Faca a�oug. Starrett";
	produto[20] = "Faca desossa Starrett";

	valor[1]= 577.00 , avista[1]= 548.15;
	valor[2]= 1067.00 , avista[2]= 1013.65;
	valor[3]= 5330.00 , avista[3]= 5063.95;
	valor[4]= 700.00 , avista[4]= 665.00;
	valor[5]= 198.00 , avista[5]= 188.10;
	valor[6]= 585.00 , avista[6]= 555.75;
	valor[7]= 709.00 , avista[7]= 673.55;
	valor[8]= 172.00 , avista[8]= 163.40;
	valor[9]= 1645.00 , avista[9]= 15672.75;
	valor[10]= 3400.00 , avista[10]= 3230.00;
	valor[11]= 915.00 , avista[11]= 869.25;
	valor[12]= 50.00 , avista[12]= 47.50;
	valor[13]= 131.00 , avista[13]= 124.45;
	valor[14]= 150.00, avista[14]= 142.50;
	valor[15]= 642.00 , avista[15]= 609.90;
	valor[16]= 5724.00 , avista[16]= 5437.80;
	valor[17]= 183.00 , avista[17]= 173.85;
	valor[18]= 810.00 , avista[18]= 769.50;
	valor[19]= 69.90 , avista[19]= 66.40;
	valor[20]= 31.30, avista[20]= 29.70;
	
	estoque[1] =  (30 - estoque_produto[1]) ,  estoque[2] =  (30-estoque_produto[2]) ,  estoque[3] =  (30 - estoque_produto[3]) , estoque[4] = (30-estoque_produto[4]) ,  estoque[5] = (30-estoque_produto[5]); 
	estoque[6] =  (30 - estoque_produto[6]) ,  estoque[7] =  (30-estoque_produto[7]) ,  estoque[8] =  (30-estoque_produto[8]) ,   estoque[9] = (30-estoque_produto[8]) ,  estoque[10] =(30-estoque_produto[10]); 
	estoque[11] = (30 - estoque_produto[11]) , estoque[12] = (30-estoque_produto[12]) , estoque[13] = (30- estoque_produto[13]) , estoque[14] =(30-estoque_produto[14]) , estoque[15] =(30-estoque_produto[15]); 
	estoque[16] = (30 - estoque_produto[16]) , estoque[17] = (30-estoque_produto[16]) , estoque[18] = (30-estoque_produto[18]) ,  estoque[19] =(30-estoque_produto[19]) , estoque[20] =(30-estoque_produto[20]);  
	

	cout << "\tCOMPRA DE EQUIPAMENTOS:" << endl << endl;
	
	cout << setprecision(2) << fixed;
	cout << "C�DIGO            " << "PRODUTO                      " << "VALOR   " << "A VISTA   " << "ESTOQUE" << endl << endl;
	cout << codigo[1] << "     " << produto[1] << "          " << valor[1] << "     " << avista[1] << "    " << estoque[1] << endl;
	cout << codigo[2] << "     " << produto[2] << "           " << valor[2] << "    " << avista[2] << "   " << estoque[2] << endl;
	cout << codigo[3] << "     " << produto[3] << "          " << valor[3] << "    " << avista[3] << "   " << estoque[3] << endl;
	cout << codigo[4] << "     " << produto[4] << "     " << valor[4] << "     " << avista[4] << "    " << estoque[4] << endl;
	cout << codigo[5] << "     " << produto[5] << "                     " << valor[5] << "     " << avista[5] << "    " << estoque[5] << endl;
	cout << codigo[6] << "     " << produto[6] << "                          " << valor[6] << "     " << avista[6] << "    " << estoque[6] << endl;
	cout << codigo[7] << "     " << produto[7] << "                          " << valor[7] << "     " << avista[7] << "    " << estoque[7] << endl;
	cout << codigo[8] << "     " << produto[8] << "                    " << valor[8] << "     " << avista[8] << "    " << estoque[8] << endl;
	cout << codigo[9] << "     " << produto[9] << "             " << valor[9] << "    " << avista[9] << "  " << estoque[9] << endl;
	cout << codigo[10] << "     " << produto[10] << "                   " << valor[10] << "   " << avista[10] << "    " << estoque[10] << endl;
	cout << codigo[11] << "     " << produto[11] << "             " << valor[11] << "     " << avista[11] << "    " << estoque[11] << endl;
	cout << codigo[12] << "     " << produto[12] << "               " << valor[12] << "      " << avista[12] << "     " << estoque[12] << endl;
	cout << codigo[13] << "     " << produto[13] << "                         " << valor[13] << "     " << avista[13] << "    " << estoque[13] << endl;
	cout << codigo[14] << "     " << produto[14] << "                " << valor[14] << "     " << avista[14] << "    " << estoque[14] << endl;
	cout << codigo[15] << "     " << produto[15] << "                   " << valor[15] << "     " << avista[15] << "    " << estoque[15] << endl;
	cout << codigo[16] << "     " << produto[16] << "                   " << valor[16] << "    " << avista[16] << "   " << estoque[16] << endl;
	cout << codigo[17] << "     " << produto[17] << "        " << valor[17] << "     " << avista[17] << "    " << estoque[17] << endl;
	cout << codigo[18] << "     " << produto[18] << "           " << valor[18] << "     " << avista[18] << "    " << estoque[18] << endl;
	cout << codigo[19] << "     " << produto[19] << "                  " << valor[19] << "      " << avista[19] << "     " << estoque[19] << endl;
	cout << codigo[20] << "     " << produto[20] << "                 " << valor[20] << "      " << avista[20] << "     " << estoque[20] << endl;
	 
	cout << endl << endl;
	
	cout << "Qual funcion�rio est� te atendendo?" << endl;
		cin.ignore();
		getline(cin,funcionario_compra);
	cout << endl;
	
	cout << "Qual met�do de pagamento ?" << endl << endl;
		cout << "1. � VISTA" << endl;
		cout << "2. DEBITO " << endl;
		cout << "3. CR�DITO " << endl;
		cout << "4. BOLETO " << endl;
		cout << endl;
			cin >> pagamento;
		cout << endl;
	
	cout << "Quantos produtos diferentes ser�o adiquiridos?" << endl;
		cin >> quant_dif;
	cout << endl;
		
	for(int i=0; i<quant_dif; i++){
	
	cout << "Digite o c�digo do produto a ser comprado: " << endl;
		cin >> codigo_compra;
	cout << endl;
		
	cout << "Qual a quantidade desejada? " << endl;
		cin >> quant_compra;
	cout << endl;
	
		for(int j=1; j<=20 ;j++){
		
			if(codigo[j]==codigo_compra){
				estoque_produto[j] += quant_compra;
			  	if(pagamento==1)
					valor_compra+= avista[j]*quant_compra;
				else
					valor_compra+= valor[j]*quant_compra;

			}
		}
			
	}
		
	cout << endl;
	
			cout << "VALOR TOTAL DA COMPRA: " << valor_compra << endl << endl;
				
			cout << "Gostaria de frete?(s/n)" << endl;         //COLOCAR FRETE ??????
				cin>> frete;
			
				if(frete=='s' || frete=='S'){
					cout << "Para qual endere�o? " << endl;
						cin.ignore();
						getline(cin,endereco_frete);
					cout << "Digite seu CEP: " << endl;
						cin >> cep_frete;
						cout << endl;
					cout << "VALOR TOTAL DA COMPRA: R$ " << valor_compra+100 << endl << endl;
				}
				else{
					cout << "VALOR TOTAL DA COMPRA: R$ " << valor_compra << endl << endl;	
				}
				
			cout << "PAGAMENTO REALIZADO COM SUCESSO! " << endl;
			cout << "GARANTIA DE 6 MESES! " << endl;
			cout << "OBRIGADA POR ESCOLHER OS NOSSOS SERVI�OS!" << endl;
				
}


void listaproduto(){	
	string nomeproduto;

	int estoque[21];
	int codigo[21];
	estoque_produto[21];
	string produto[21]; 
	double valor[21];
	double avista[21];
	
	codigo[1]= 100, codigo[2]=200, codigo[3]= 300, codigo[4]= 400, codigo[5]=500;
	codigo[6]= 600, codigo[7]=700, codigo[8]= 800, codigo[9]= 900, codigo[10]=1000;
	codigo[11]= 1100, codigo[12]=1200, codigo[13]= 1300, codigo[14]= 1400, codigo[15]=1500;
	codigo[16]= 1600, codigo[17]=1700, codigo[18]= 1800, codigo[19]= 1900, codigo[20]=2000;
	
	produto[1]="Gaveta dinheiro bematch GD46";
	produto[2] = "HD HPE 1TB SATA p/ SERV HPE";
	produto[3] = "Impressora de etiqueta Elgin";
	produto[4] = "Impressora t�rmica bematch MP2800";
	produto[5] = "Leitor CB Las USB";
	produto[6] = "Monitor Dell";
	produto[7] = "No break NHS";
	produto[8] = "Kit teclado +mouse";
	produto[9] = "Computador bematch RC8400";
	produto[10] = "MIT player W toledo";
	produto[11] = "Liquidificador Urano 950A";
	produto[12] = "Gancho girat�rio grande";
	produto[13] = "Tampa bematch";
	produto[14] = "Bobina Regispel 57x300";
	produto[15] = "Balan�a Toledo 9094";
	produto[16] = "Balan�a PRIX 5 PLUS";
	produto[17] = "Carregador Datalogic micro USB";
	produto[18] = "Embaladora p/ filme Sulpack";
	produto[19] = "Faca a�oug. Starrett";
	produto[20] = "Faca desossa Starrett";

	valor[1]= 577.00 , avista[1]= 548.15;
	valor[2]= 1067.00 , avista[2]= 1013.65;
	valor[3]= 5330.00 , avista[3]= 5063.95;
	valor[4]= 700.00 , avista[4]= 665.00;
	valor[5]= 198.00 , avista[5]= 188.10;
	valor[6]= 585.00 , avista[6]= 555.75;
	valor[7]= 709.00 , avista[7]= 673.55;
	valor[8]= 172.00 , avista[8]= 163.40;
	valor[9]= 1645.00 , avista[9]= 15672.75;
	valor[10]= 3400.00 , avista[10]= 3230.00;
	valor[11]= 915.00 , avista[11]= 869.25;
	valor[12]= 50.00 , avista[12]= 47.50;
	valor[13]= 131.00 , avista[13]= 124.45;
	valor[14]= 150.00, avista[14]= 142.50;
	valor[15]= 642.00 , avista[15]= 609.90;
	valor[16]= 5724.00 , avista[16]= 5437.80;
	valor[17]= 183.00 , avista[17]= 173.85;
	valor[18]= 810.00 , avista[18]= 769.50;
	valor[19]= 69.90 , avista[19]= 66.40;
	valor[20]= 31.30, avista[20]= 29.70;
	
	estoque[1] =  (30 - estoque_produto[1]) ,  estoque[2] =  (30-estoque_produto[2]) ,  estoque[3] =  (30 - estoque_produto[3]) , estoque[4] = (30-estoque_produto[4]) ,  estoque[5] = (30-estoque_produto[5]); 
	estoque[6] =  (30 - estoque_produto[6]) ,  estoque[7] =  (30-estoque_produto[7]) ,  estoque[8] =  (30-estoque_produto[8]) ,   estoque[9] = (30-estoque_produto[8]) ,  estoque[10] =(30-estoque_produto[10]); 
	estoque[11] = (30 - estoque_produto[11]) , estoque[12] = (30-estoque_produto[12]) , estoque[13] = (30- estoque_produto[13]) , estoque[14] =(30-estoque_produto[14]) , estoque[15] =(30-estoque_produto[15]); 
	estoque[16] = (30 - estoque_produto[16]) , estoque[17] = (30-estoque_produto[16]) , estoque[18] = (30-estoque_produto[18]) ,  estoque[19] =(30-estoque_produto[19]) , estoque[20] =(30-estoque_produto[20]); 
	

		
	cout << "\tESTOQUE de PRODUTO" << endl << endl;
	cout << setprecision(2) << fixed;
	cout << "C�DIGO            " << "PRODUTO                      " << "VALOR   " << "A VISTA   " << "ESTOQUE" << endl << endl;
	cout << codigo[1] << "     " << produto[1] << "          " << valor[1] << "     " << avista[1] << "    " << estoque[1] << endl;
	cout << codigo[2] << "     " << produto[2] << "           " << valor[2] << "    " << avista[2] << "   " << estoque[2] << endl;
	cout << codigo[3] << "     " << produto[3] << "          " << valor[3] << "    " << avista[3] << "   " << estoque[3] << endl;
	cout << codigo[4] << "     " << produto[4] << "     " << valor[4] << "     " << avista[4] << "    " << estoque[4] << endl;
	cout << codigo[5] << "     " << produto[5] << "                     " << valor[5] << "     " << avista[5] << "    " << estoque[5] << endl;
	cout << codigo[6] << "     " << produto[6] << "                          " << valor[6] << "     " << avista[6] << "    " << estoque[6] << endl;
	cout << codigo[7] << "     " << produto[7] << "                          " << valor[7] << "     " << avista[7] << "    " << estoque[7] << endl;
	cout << codigo[8] << "     " << produto[8] << "                    " << valor[8] << "     " << avista[8] << "    " << estoque[8] << endl;
	cout << codigo[9] << "     " << produto[9] << "             " << valor[9] << "    " << avista[9] << "  " << estoque[9] << endl;
	cout << codigo[10] << "     " << produto[10] << "                   " << valor[10] << "   " << avista[10] << "    " << estoque[10] << endl;
	cout << codigo[11] << "     " << produto[11] << "             " << valor[11] << "     " << avista[11] << "    " << estoque[11] << endl;
	cout << codigo[12] << "     " << produto[12] << "               " << valor[12] << "      " << avista[12] << "     " << estoque[12] << endl;
	cout << codigo[13] << "     " << produto[13] << "                         " << valor[13] << "     " << avista[13] << "    " << estoque[13] << endl;
	cout << codigo[14] << "     " << produto[14] << "                " << valor[14] << "     " << avista[14] << "    " << estoque[14] << endl;
	cout << codigo[15] << "     " << produto[15] << "                   " << valor[15] << "     " << avista[15] << "    " << estoque[15] << endl;
	cout << codigo[16] << "     " << produto[16] << "                   " << valor[16] << "    " << avista[16] << "   " << estoque[16] << endl;
	cout << codigo[17] << "     " << produto[17] << "        " << valor[17] << "     " << avista[17] << "    " << estoque[17] << endl;
	cout << codigo[18] << "     " << produto[18] << "           " << valor[18] << "     " << avista[18] << "    " << estoque[18] << endl;
	cout << codigo[19] << "     " << produto[19] << "                  " << valor[19] << "      " << avista[19] << "     " << estoque[19] << endl;
	cout << codigo[20] << "     " << produto[20] << "                 " << valor[20] << "      " << avista[20] << "     " << estoque[20] << endl;
	
}


void pesquisa_satisfacao(){

	formulario satisfacao;
	
	string nome_pesquisa;
	string email_pesquisa;
	string melhor;
	string pior;

	cout << "\tFORMUL�RIO DE SATISFA��O" << endl << endl;
	
	cout << "NOME:";
		cin.ignore();
		getline(cin,nome_pesquisa);
	cout << endl;
	
	cout << "E-MAIL:";
		cin.ignore();
		getline(cin,email_pesquisa);
	cout << endl;
	
	cout << "TELEFONE:";
		cin >> satisfacao.telefone_pesquisa;
	cout << endl;
	
	cout << "COMO CONHECEU A NOSSA LOJA? " << endl;
	cout << "1. Sou cliente Antigo" << endl;
	cout << "2. Busca na Internet" << endl;
	cout << "3. An�ncio" << endl;
	cout << "4. Indica��o de amigo" << endl;
	cout << "5. Redes Sociais" << endl;
		cin >> satisfacao.conhecer;
	cout << endl;
	
	cout << "COMO VO�� AVALIA OS SEGUINTES ASPECTOS DE NOSSOS PRODUTOS? " << endl;
	cout << "\tQUALIDADE" << endl;
	cout << "\t\t 1. OT�MO" << endl;
	cout << "\t\t 2. BOM" << endl;
	cout << "\t\t 3. REGULAR" << endl;
	cout << "\t\t 4. RUIM" << endl;
	cout << "\t\t 5. PESS�MO" << endl; 
		cin >> satisfacao.qualidade;
	cout << endl;
	
	cout << "\tUTILIDADE" << endl;
	cout << "\t\t 1. OT�MO" << endl;
	cout << "\t\t 2. BOM" << endl;
	cout << "\t\t 3. REGULAR" << endl;
	cout << "\t\t 4. RUIM" << endl;
	cout << "\t\t 5. PESS�MO" << endl;
		cin >> satisfacao.utilidade;
	cout << endl;
	
	cout << "\tEFICI�NCIA" << endl;
	cout << "\t\t 1. OT�MO" << endl;
	cout << "\t\t 2. BOM" << endl;
	cout << "\t\t 3. REGULAR" << endl;
	cout << "\t\t 4. RUIM" << endl;
	cout << "\t\t 5. PESS�MO" << endl;
		cin >> satisfacao.eficiencia;
	cout << endl;
	
	cout << "\tPRE�O" << endl;
	cout << "\t\t 1. OT�MO" << endl;
	cout << "\t\t 2. BOM" << endl;
	cout << "\t\t 3. REGULAR" << endl;
	cout << "\t\t 4. RUIM" << endl;
	cout << "\t\t 5. PESS�MO" << endl;
		cin >> satisfacao.preco;
	cout << endl;
	
	cout << "\tCONDI��ES DE PAGAMENTO" << endl;
	cout << "\t\t 1. OT�MO" << endl;
	cout << "\t\t 2. BOM" << endl;
	cout << "\t\t 3. REGULAR" << endl;
	cout << "\t\t 4. RUIM" << endl;
	cout << "\t\t 5. PESS�MO" << endl;
		cin >> satisfacao.pagamento;
	cout << endl;
	
	cout << "\tENTREGA" << endl;
	cout << "\t\t 1. OT�MO" << endl;
	cout << "\t\t 2. BOM" << endl;
	cout << "\t\t 3. REGULAR" << endl;
	cout << "\t\t 4. RUIM" << endl;
	cout << "\t\t 5. PESS�MO" << endl;
		cin >> satisfacao.entrega;
	cout << endl;
	
	cout << "EM SUA OPINI�O QUAL O MELHOR ASPECTO EM NOSSOS PRODUTOS? " << endl;
		cin.ignore();
		getline(cin,melhor);
	cout << endl;
	
	cout << "EM SUA OPINI�O QUAL O PIOR ASPECTO EM NOSSOS PRODUTOS? " << endl;
		cin.ignore();
		getline(cin,pior);
	cout << endl;
	
	cout << "NO GERAL, NUMA ESCALA DE 0 A 10, COMO AVALIA O NOSSO ATENDIMENTO? " << endl;
		cin >> satisfacao.escala;
	cout << endl;
	
}


void orcamento(){

 	cliente orcamento;

 	int prod_orcamento;
 	int codigo_orcamento;
 	int quant_orcamento;

 	string armazena_nome_empresa;
 	string armazena_telefone_cliente;
 	int armazena_cnpj;
 	string armazena_email_cliente;
 	string armazena_funcionario;

 	int achar =0;

 	int armazena_codigo[20];
 	int armazena_quant_orcamento[20];
 	string armazena_produto[20];
 	float armazena_valor[20];
 
	int correspondente[30];
 
 	float valortotal;

	codigo[1]= 100, codigo[2]=200, codigo[3]= 300, codigo[4]= 400, codigo[5]=500;
	codigo[6]= 600, codigo[7]=700, codigo[8]= 800, codigo[9]= 900, codigo[10]=1000;
	codigo[11]= 1100, codigo[12]=1200, codigo[13]= 1300, codigo[14]= 1400, codigo[15]=1500;
	codigo[16]= 1600, codigo[17]=1700, codigo[18]= 1800, codigo[19]= 1900, codigo[20]=2000;

	produto[1]="Gaveta dinheiro bematch GD46";
	produto[2] = "HD HPE 1TB SATA p/ SERV HPE";
	produto[3] = "Impressora de etiqueta Elgin";
	produto[4] = "Impressora t�rmica bematch MP2800";	
	produto[5] = "Leitor CB Las USB";
	produto[6] = "Monitor Dell";
	produto[7] = "No break NHS";
	produto[8] = "Kit teclado +mouse";
	produto[9] = "Computador bematch RC8400";
	produto[10] = "MIT player W toledo";
	produto[11] = "Liquidificador Urano 950A";
	produto[12] = "Gancho girat�rio grande";
	produto[13] = "Tampa bematch";
	produto[14] = "Bobina Regispel 57x300";
	produto[15] = "Balan�a Toledo 9094";
	produto[16] = "Balan�a PRIX 5 PLUS";
	produto[17] = "Carregador Datalogic micro USB";
	produto[18] = "Embaladora p/ filme Sulpack";
	produto[19] = "Faca a�oug. Starrett";
	produto[20] = "Faca desossa Starrett";

	valor[1]= 577.00 , avista[1]= 548.15;
	valor[2]= 1067.00 , avista[2]= 1013.65;
	valor[3]= 5330.00 , avista[3]= 5063.95;
	valor[4]= 700.00 , avista[4]= 665.00;
	valor[5]= 198.00 , avista[5]= 188.10;
	valor[6]= 585.00 , avista[6]= 555.75;
	valor[7]= 709.00 , avista[7]= 673.55;
	valor[8]= 172.00 , avista[8]= 163.40;
	valor[9]= 1645.00 , avista[9]= 15672.75;
	valor[10]= 3400.00 , avista[10]= 3230.00;
	valor[11]= 915.00 , avista[11]= 869.25;
	valor[12]= 50.00 , avista[12]= 47.50;
	valor[13]= 131.00 , avista[13]= 124.45;
	valor[14]= 150.00, avista[14]= 142.50;
	valor[15]= 642.00 , avista[15]= 609.90;
	valor[16]= 5724.00 , avista[16]= 5437.80;
	valor[17]= 183.00 , avista[17]= 173.85;
	valor[18]= 810.00 , avista[18]= 769.50;
	valor[19]= 69.90 , avista[19]= 66.40;
	valor[20]= 31.30, avista[20]= 29.70;

	estoque[1] =30 , estoque[2] =30 , estoque[3] =30 , estoque[4] =30 , estoque[5] =30; 
	estoque[6] =30 , estoque[7] =30 , estoque[8] =30 , estoque[9] =30 , estoque[10] =30; 
	estoque[11] =30 , estoque[12] =30 , estoque[13] =30 , estoque[14] =30 , estoque[15] =30; 
	estoque[16] =30 , estoque[17] =30 , estoque[18] =30 , estoque[19] =30 , estoque[20] =30; 


	cout << "\tOR�AMENTO DE PRODUTOS" << endl;

	cout << "1� PASSO: Cadastro Cliente" << endl << endl;

	cout << "NOME DA EMPRESA: ";
		cin.ignore();
		getline(cin,orcamento.nome_empresa);
		armazena_nome_empresa=orcamento.nome_empresa;

	cout << "CNPJ: ";
		cin >> orcamento.cnpj;
		armazena_cnpj=orcamento.cnpj;

	cout << "E-MAIL: ";
		cin.ignore();
		getline(cin,orcamento.email_cliente);
		armazena_email_cliente=orcamento.email_cliente;

	cout << "TELEFONE: ";
		cin.ignore();
		getline(cin,orcamento.telefone_cliente);
		armazena_telefone_cliente=orcamento.telefone_cliente;

	system("cls");

	cout << "2� PASSO: Escolha de Produtos" << endl << endl;

	listaproduto();

	cout << endl << endl;
	cout << "Quantos produtos diferentes ser�o adiquiridos? " << endl;
		cin >> prod_orcamento;

	for(int i=1; i<=prod_orcamento; i++){

 		cout << "Digite o c�digo do produto" << i << "a ser comprado: " << endl;
 			cin >> codigo_orcamento;
 			cout << endl;

 		cout << "Qual a quantidade desejada? " << endl;
 			cin >> quant_orcamento;
 			armazena_quant_orcamento[i]=quant_orcamento;
 			cout << endl;
			armazena_codigo[i]= codigo_orcamento; 
			
		for(int j=1 ; j<=20 ; j++){
 
 			if(codigo[j]==codigo_orcamento){
  			armazena_produto[i]=produto[j];
  			armazena_valor[i]= valor[j];
  			}
  
		}

	}

	system("cls");

	cout << "3� PASSO: Informar nome do funcion�rio que est� dando suporte: " << endl << endl;

	cout << "NOME DO FUNCION�RIO: ";
		cin.ignore();
		getline(cin,orcamento.funcionario);
		armazena_funcionario = orcamento.funcionario;

	system("cls");

	//imprimir or�amento 

	cout << "\t\t\tNIHON AUTOMA��O COMERCIAL" << endl;
	cout << "\t\t\t suporte.nihon@gmail.com" << endl;
	cout << "\t\t\t 712/713 Norte Bloco C" << endl;
	cout << "\t\t\t    (61)3002-0678" << endl;
	cout << endl;
	cout << "\t\t\t      OR�AMENTO " << endl << endl;

	cout << "\t    " << "Cliente: " << armazena_nome_empresa << "       " << "CNPJ: " << armazena_cnpj << endl;
	cout << "\t    " << "Telefone: " << armazena_telefone_cliente << "   " << "E-mail: " <<  armazena_email_cliente << endl << endl;

	cout << "Quantidade" << "     C�digo" <<  "          Descri��o" <<  "            Valor Unit�rio" <<  "        Valor Total" << endl;
	
	for(int a=1; a<=prod_orcamento; a++){
		cout << "   " << armazena_quant_orcamento[a] << "         " << armazena_codigo[a] << "            " << armazena_produto[a] << "         " << "R$" << armazena_valor[a] << "           " << "R$" << armazena_valor[a]*armazena_quant_orcamento[a] << endl;
		
		valortotal += (armazena_valor[a]*armazena_quant_orcamento[a]);
	}
	
	cout << "                                                                       | Sub-Total |" << " R$ " << valortotal << endl; 
	cout << "                                                                       | Desconto  |" << " R$ 5,00" << endl;
	cout << "                                                                       | Total     |" << " R$ " << (valortotal)-5 << endl;

	cout << endl;
	
	cout << "Observa��es: " << endl;
	cout << "Atendimento feito por " << armazena_funcionario << endl;
	cout << "Local de retirada de produtos: 712/713 norte bloco C" << endl;
	cout << "Caso de frete taxa de R$ 100,00 a mais no valor total" << endl;
	cout << "Formas de pagamento: dinheiro, d�bito, cr�dito e boleto banc�rio" << endl;
	cout << "Consultar formas de garantia e parcelamento" << endl;

	cout << endl;
	
	cout << "Obrigada por escolher os nossos servi�os" << endl;	

}

	
void descricao_produto(){
	
	inicio_descricao:
	int codigo_descricao;
	char sn_descricao;
	
	codigo[1]= 100, codigo[2]=200, codigo[3]= 300, codigo[4]= 400, codigo[5]=500;
	codigo[6]= 600, codigo[7]=700, codigo[8]= 800, codigo[9]= 900, codigo[10]=1000;
	codigo[11]= 1100, codigo[12]=1200, codigo[13]= 1300, codigo[14]= 1400, codigo[15]=1500;
	codigo[16]= 1600, codigo[17]=1700, codigo[18]= 1800, codigo[19]= 1900, codigo[20]=2000;

	produto[1]="Gaveta dinheiro Bematch GD46";
	produto[2] = "HD HPE 1TB SATA p/ SERV HPE";
	produto[3] = "Impressora de etiqueta Elgin";
	produto[4] = "Impressora t�rmica bematch MP2800";	
	produto[5] = "Leitor CB Laser Bematch S-100";
	produto[6] = "Monitor Dell";
	produto[7] = "No break NHS";
	produto[8] = "Kit teclado +mouse";
	produto[9] = "Computador bematch RC8400";
	produto[10] = "MIT player W toledo";
	produto[11] = "Liquidificador Urano 950A";
	produto[12] = "Gancho girat�rio grande";
	produto[13] = "Tampa bematch";
	produto[14] = "Bobina Regispel 57x300";
	produto[15] = "Balan�a Toledo 9094";
	produto[16] = "Balan�a PRIX 5 PLUS";
	produto[17] = "Carregador Datalogic micro USB";
	produto[18] = "Embaladora p/ filme Sulpack";
	produto[19] = "Faca a�oug. Starrett";
	produto[20] = "Faca desossa Starrett";

	valor[1]= 577.00 , avista[1]= 548.15;
	valor[2]= 1067.00 , avista[2]= 1013.65;
	valor[3]= 5330.00 , avista[3]= 5063.95;
	valor[4]= 700.00 , avista[4]= 665.00;
	valor[5]= 198.00 , avista[5]= 188.10;
	valor[6]= 585.00 , avista[6]= 555.75;
	valor[7]= 709.00 , avista[7]= 673.55;
	valor[8]= 172.00 , avista[8]= 163.40;
	valor[9]= 1645.00 , avista[9]= 15672.75;
	valor[10]= 3400.00 , avista[10]= 3230.00;
	valor[11]= 915.00 , avista[11]= 869.25;
	valor[12]= 50.00 , avista[12]= 47.50;
	valor[13]= 131.00 , avista[13]= 124.45;
	valor[14]= 150.00, avista[14]= 142.50;
	valor[15]= 642.00 , avista[15]= 609.90;
	valor[16]= 5724.00 , avista[16]= 5437.80;
	valor[17]= 183.00 , avista[17]= 173.85;
	valor[18]= 810.00 , avista[18]= 769.50;
	valor[19]= 69.90 , avista[19]= 66.40;
	valor[20]= 31.30, avista[20]= 29.70;

	estoque[1] =30 , estoque[2] =30 , estoque[3] =30 , estoque[4] =30 , estoque[5] =30; 
	estoque[6] =30 , estoque[7] =30 , estoque[8] =30 , estoque[9] =30 , estoque[10] =30; 
	estoque[11] =30 , estoque[12] =30 , estoque[13] =30 , estoque[14] =30 , estoque[15] =30; 
	estoque[16] =30 , estoque[17] =30 , estoque[18] =30 , estoque[19] =30 , estoque[20] =30; 
	
	listaproduto();
	
	cout << endl;
	cout << "\tDESCRI��O DE PRODUTOS" << endl;
	
	cout << endl;
	cout << "Digite o c�digo do produto que voc� deseja ver detalhes: " << endl;
		cin >> codigo_descricao;
	
	
	system("cls");
	
	if (codigo_descricao==100){
	
	cout << endl;
		
	cout << "Gaveta dinheiro Bematch GD46" << endl << endl;
	
	cout << "Projetada para organizar e simplificar a opera��o de frente de caixa e conferir mais conforto e ergonomia " << endl;
	cout << "ao dia a dia do operador." << endl;
	cout << "Seu design compacto se adapta facilmente a ambientes com espa�o reduzido." << endl << endl;
	cout << "# Tr�s posi��es de fechadura: travada, opera��o autom�tica e com abertura manual" << endl;
	cout << "# Preparada para as novas c�dulas de Real." << endl;
	cout << "# Tampa para bandeja de dinheiro � um acess�rio opcional" << endl;

		
	}
	
	else if (codigo_descricao==200){
		
	cout << endl;
	
	cout << "HD HPE 1TB SATA p/ SERV HPE" << endl << endl;
	
	cout << "O HD ou Disco R�gido serve para armazenar arquivos, programas e todo tipo de conte�do " << endl;
	cout << "que se deseja manter no computador." << endl << endl;
	cout << "# Capacidade de armazenamento: 1 TB " << endl;
	cout << "# Interface Standard Diret�rio: SATA/600 " << endl;
	cout << "# Interface do controlador: SATA " << endl;
	cout << "# Largura da Unidade: 3.5"  << endl;
	cout << "# Nome de marca: HPE " << endl;
    cout << "# Tipo de unidade: Interno " << endl;
	cout << "# Velocidade do eixo (rpm): 7200 " << endl;
		
	
	}
	
	else if (codigo_descricao==300){
	
	cout << endl;
		
	cout << "Impressora de etiqueta Elgin" << endl << endl;
	
	cout << "Equipamento para impress�o de etiquetas, adesivas ou n�o (tags, etiquetas de g�ndola, etc)." << endl;
	cout << "A tecnologia de impress�o � de transfer�ncia t�rmica,por isso pode imprimir etiquetas de papel" << endl;
	cout << "comum / sint�tico, utilizando uma fita entintada (Ribbon) ou etiquetas �t�rmicas�, sem uso da fita entintada." << endl << endl;
	cout << "# Programa gratuito para cria��o dos layouts de etiquetas, onde pode-se facilmente imprimir" << endl; 
	cout << "  textos, imagens / logotipos e c�digo de barras." << endl;

				
	}
	
	else if (codigo_descricao==400){
	
	cout << endl;
	
	cout << "Impressora t�rmica bematch MP2800" << endl << endl;
	
	cout << "Com tamanho reduzido e ampla conectividade, pode ser integrada a qualquer software de PDV do mercado e " << endl;
	cout << "oferece efici�ncia na impress�o de documentos fiscais como DANFE, CF-e e c�digos de barras. " << endl;
	cout << "Tudo para o seu estabelecimento ser ainda mais produtivo e lucrativo." << endl << endl;

	cout << "# Impress�o de textos, gr�ficos e c�digos de barras a 250mm/s" << endl;
	cout << "# Conex�es USB, Serial e Ethernet" << endl;
	cout << "# Corte de papel atrav�s de guilhotina" << endl;
	cout << "# Assist�ncia t�cnica especializada" << endl;
		
		
	}
	
	else if (codigo_descricao==500){
	
	cout << endl;
		
	cout << "Leitor CB Laser Bematch S-100" << endl << endl;
	
	cout << "O modelo S-100 � um produto compacto, de baixo custo, com acionamento por gatilho." << endl << endl;

	cout << "# Muito resistente, suporta quedas de at� 1,5 metro" << endl;
	cout << "#Desenhado para o uso em balc�es de varejo e check-outs com pequeno e m�dio volume de mercadoria" << endl;
	cout << "#Formatado para ler o c�digo Febraban dos boletos banc�rios, agilizando o pagamento de t�tulos nos Internet Banks" << endl;
	
		
	}
	
	else if (codigo_descricao==600){
	
	cout << endl;
		
	cout << "Monitor Dell" << endl << endl;
	
	cout << "Obtenha f�cil compatibilidade com PCs legados e prontos para o futuro por meio de conectividade VGA e HDMI." << endl << endl;
	cout << "# Redu��o do impacto no meio ambiente: o monitor Dell 22 conta com o recurso PowerNap, que reduz a " << endl;
	cout << "  luminosidade da tela ou coloca o monitor no modo de suspens�o quando ele n�o est� em uso. " << endl;
	
	cout << endl;
	cout << "O monitor tamb�m atende aos mais recentes padr�es de conformidade regulamentar e ambiental:" << endl;

	cout << "# Com qualifica��o ENERGY STAR� " << endl;
	cout << "# CECP Certified" << endl;
	cout << "# TCO Certified Displays " << endl;
 
	cout << endl;
	cout << "Ecologicamente corretos: o novo monitor da Dell � fabricado com vidro sem ars�nico e painel de LED sem merc�rio." << endl;
	cout << "As placas de circuito do monitor s�o fabricadas com retardadores de chama bromados (BFR) e laminados sem PVC." << endl;
		
		
	}
	
	else if (codigo_descricao==700){
	
	cout << endl;
	
	cout << "No break NHS" << endl << endl;
	
	cout << "Os modelos NHS � bivolt autom�tico na entrada e possui sinaliza��o atrav�s de display LCD." << endl << endl;
	cout << "Prote��es:" << endl;
	cout << "# Contra curto-circuito, sobrecarga e sobretemperatura" << endl;
	cout << "# Contra descarga total de bateria" << endl;
	cout << "# Contra surtos de tens�o" << endl;
		
		
	}
	
	else if (codigo_descricao==800){
	
	cout << endl;
	
	cout << "Kit teclado +mouse" << endl << endl;
	
	cout << "Projetados com detalhes sofisticados, tamanho compacto e teclas chiclete, o Teclado e mouse wireless" << endl;
	cout << "oferecem um design moderno e confort�vel com a conveni�ncia da performance wireless" << endl;
		
		
	}
	
	else if (codigo_descricao==900){
	
	cout << endl;
		
	cout << "Computador bematch RC8400" << endl << endl;
	
	cout << "Com desempenho e tamanho ideais para frentes de caixa com pouco espa�o no balc�o, o RC-8400 consome at� 75%" << endl;
	cout << "menos energia que computadores convencionais e � totalmente compat�vel com teclados program�veis." << endl << endl;

	cout << "# Confiabilidade e garantia de economia no final do m�s" << endl;
	cout << "# Desempenho para elevar sua produtividade" << endl;
	cout << "# Mais op��es de conex�es para o seu neg�cio se ligar nas vendas" << endl;
	cout << "# Mais interatividade com seus clientes" << endl;
		
		
	}
	
	else if (codigo_descricao==1000){
	
	cout << endl;
		
	cout << "MIT player W toledo" << endl << endl;
	
	cout << "# Mini PC com sistema operacional Android 4.4;" << endl;
	cout << "# Processamento de 1.8 GHz, viabilizando excelente defini��o de imagens, v�deos e sons;" << endl;
	cout << "# Mem�ria interna com armazenamento de 16 GB e possibilidade de expans�o atrav�s de um cart�o de mem�ria;" << endl;
	cout << "# Compat�vel com monitores, telas de LCD, plasma ou LED com sa�da HDMI;" << endl;
	cout << "# Resolu��o de v�deo com excelente defini��o de 1024 x 768 pixels;" << endl;
	cout << "# Funcionamento em rede ethernet cabo 100/1000 Gbps;" << endl;
	cout << "# Compat�vel com arquivos de imagem (BMP e JPG), �udio (AAC e MP3) e v�deo (MP4)." << endl;
		
	}
	
	else if (codigo_descricao==1100){
	
	cout << endl;
	
	cout << "Liquidificador Urano 950A" << endl << endl;
	
	cout << "O liquidificador U CB 950A tem motor potente e l�minas de a�o inoxid�vel para misturar completamente os alimentos."<< endl << endl;
	
	cout << "# Motor industrial de alta velocidade e efici�ncia que pode chegar at� 3600 RPM." << endl;
    cout << "# Possui ventilador resfriador e sistema de prote��o do calor do motor." << endl;
    cout << "# Sistema eletr�nico para controlar a velocidade corrente atual, proteger o motor e reduzir a interfer�ncia do ambiente." << endl;
    cout << "# Sistema de prote��o de sobrecarga." << endl;
    cout << "# Chave seletora e Chave �PULSAR� para atender �s diferentes solicita��es." << endl;
    cout << "# Conector de a�o inox resistente." << endl;
    cout << "# Grupo de l�minas � orientado pelo rolamento de esfera. Evite usar por um longo per�odo de tempo. " << endl;	
		
		
	}
	
	else if (codigo_descricao==1200){
	
	cout << endl;
	
	cout << "Gancho girat�rio grande" << endl << endl;
	
	cout << "Indicado para realizar rota��es completas de 360� antes do i�amento ou eleva��o da carga." << endl;
	cout << "Pintado na cor amarela, proporcionando resist�ncia � oxida��o. " << endl << endl;

	cout << "Especifica��es T�cnicas:" << endl;

	cout << "# Medida do gancho olhal girat�rio: 10 mm " << endl;
	cout << "# Comprimento total do gancho com olhal girat�rio (A): 238,0 mm " << endl;
	cout << "# Largura interna do olhal girat�rio do gancho (B): 44,0 mm " << endl;
	cout << "# Altura interna do olhal girat�rio do gancho (C): 35,0 mm " << endl;
	cout << "# Espessura do corpo do olhal girat�rio do gancho (D): 15,8 mm " << endl;
	cout << "# Abertura do gancho com olhal girat�rio (E): 28,0 mm " << endl;
	cout << "# Altura da base do gancho com olhal girat�rio (F): 32,0 mm " << endl;
	cout << "# Espessura do corpo do gancho com olhal girat�rio (G): 23,0 mm " << endl;
	cout << "# Carga de trabalho do gancho olhal girat�rio: 3,20 t " << endl;
	cout << "# Carga de ruptura do gancho olhal girat�rio: 12,6 t " << endl;
	cout << "# Fator de seguran�a do gancho olhal girat�rio: 4:1 " << endl;
	
		
		
	}
	
	else if (codigo_descricao==1300){
	
	cout << endl;
		
	cout << "Tampa bematch" << endl;
	
	cout << "A tampa para a gaveta de dinheiro permite uma maior praticidade ao seu equipamento, al�m de permitir uma " << endl;
	cout << "maior prote��o aos seus valores." << endl; 
	cout << "Al�m disso ela permite a troca r�pida de operadores, e o fechamento de caixa realizada de maneira r�pida." << endl;
		
	}
	
	else if (codigo_descricao==1400){
		
	cout << endl;
	
	cout << "Bobina Regispel 57x300" << endl << endl;
	
	cout << "As bobinas t�rmicas Regispel s�o a solu��o eficaz para o processo de automa��o do seu neg�cio." << endl;
	cout << "Imprime com precis�o os comprovantes e fiscais, com a qualidade garantida atrav�s das normas " << endl;
	cout << "e certifica��es que a Regispel possui." << endl << endl;

	cout << "Os equipamentos utilizados na produ��o das bobinas t�rmicas possuem controle de metragem e regulagem de"<< endl;
	cout << "tens�o no rebobinamento, proporcionando um produto com excelente acabamento" << endl;
		
	}
	
	else if (codigo_descricao==1500){
	
	cout << endl;
		
	cout << "Balan�a Toledo 9094" << endl << endl;
	
	cout << "# Display de cristal l�quido com backlight;" << endl;
	cout << "# Bateria interna recarreg�vel;" << endl;
	cout << "# Carregador de bateria autom�tico;" << endl;
	cout << "# Desligamento autom�tico;" << endl;
	cout << "# Fonte adaptadora multivoltagem;" << endl;
	cout << "# Gabinete de pl�stico ABS;" << endl;
	cout << "# Tara sucessiva;" << endl;
	cout << "# Flexibilidade de manuseio;" << endl;
	cout << "# Prote��o contra interfer�ncias e sobrecargas;" << endl;
	cout << "# Prato de pesagem de f�cil higieniza��o;" << endl;
	cout << "# Teclado de f�cil digita��o;" << endl;
		
	}
	
	else if (codigo_descricao==1600){
		
	cout << endl;
		
	cout << "Balan�a PRIX 5 PLUS" << endl << endl;
	
	cout << "Solu��o inovadora em pesagem, rotulagem,automa��o e m�dia interna que atende plenamente �s reais necessidades." << endl;
	cout << "A 5 Plus � o resultado deste esfor�o e compromisso com o cliente." << endl << endl;

    cout << "� a balan�a computadora com impressora integrada da Toledo do Brasil, com design arrojado e inovador," << endl;
	cout << "cores suaves e recursos tecnol�gicos �nicos no pa�s." << endl << endl;

	cout << "Permite mem�ria seja compartilhada com todos os campos de cadastro,oferecendo alt�ssima flexibilidade" << endl;
	cout << "para o atendimento das necessidades de todos os tipos de estabelecimentos do mercado varejista," << endl;
	cout << "desde os de pequeno porte at� hipermercados." << endl << endl;

	cout << "Todos os itens poder�o ser codificados e precificados com at� 6 d�gitos, al�m da data e hora da embalagem, " << endl;
	cout << "validade de 0 a 990 dias e lote de at� 12 caracteres alfanum�ricos para eventual controle de rastreabilidade." << endl << endl;
	
	cout << "# Cadastro local e/ou via rede" << endl;
	cout << "# At� 30 kg com tripla faixa de pesagem" << endl;
	cout << "# 60 teclas r�pidas e acesso a at� 180 itens" << endl;
	cout << "# Maior �rea �til de pesagem" << endl;
	cout << "# Venda direta e pr�-embalagem na mesma balan�a" << endl;
	cout << "# Recurso de tara predeterminada" << endl;
	cout << "# Controle de vendas por operador" << endl;
		
	}
	
	else if (codigo_descricao==1700){
	
	cout << endl;
		
	cout << "Carregador Datalogic micro USB" << endl << endl;
	
	cout << "Carregador Micro USB, liga o coletor via micro USB diretamente para tomada de parede. Skorpio X3, X4 e ELF." << endl << endl;
	
	cout << "# Compatibilidade: Coletores de Dados Skirpio X3, X4 e ELF" << endl;
	cout << "# Tens�o: 110 - 220V (AC)" << endl;
		
	}
	
	else if (codigo_descricao==1800){
	
	cout << endl;
		
	cout << "Embaladora p/ filme Sulpack" << endl << endl;
	
	cout << "Utilizados para embalagens de bandejas com frutas, legumes, frios, carnes, farin�ceos, etc.," << endl;
	cout << "utilizando filme de PVC estic�vel."<< endl;	
	
	cout << "# Para bobinas de at� 480mm de largura;"<< endl;
	cout << "# A�o inox 430 escovado;"<< endl;
	cout << "# Sistema de corte atrav�s de barra de corte;"<< endl;
	cout << "# Temperatura constante da barra de corte e da placa de selagem ap�s preaquecimento."<< endl;
		
	}
	
	else if (codigo_descricao==1900){
	
	cout << endl;
		
	cout << "Faca a�oug. Starrett" << endl << endl;
	
	cout << "Lan�amento oferece para a�ougues, frigor�ficos, supermercados e profissionais da ind�stria" << endl;
	cout << " de alimentos em geral uma nova e excelente op��o para o corte de carnes." << endl << endl;

	cout << "Caracter�sticas:" << endl << endl;

	cout << "# L�minas em a�o inoxid�vel" << endl;
	cout << "# Cabos ergon�micos e injetados em polipropileno que propicia melhor conforto" << endl;
	cout << "# Acabamento polido da l�mina" << endl;
	cout << "# Identifica��o com grava��o a laser no corpo da l�mina" << endl;
	cout << "# Liga de a�o especial, com maior vida �til" << endl;
	cout << "# Certifoca��o NSF" << endl << endl;

	cout << "Vantagens:" << endl << endl;

	cout << "# Alto �ndice de durabilidade." << endl;
	cout << "# Prote��o antimicrobiana Sanitized nos cabos (evita prolifera��o de bact�rias)." << endl;
	cout << "# Maior seguran�a." << endl;
	cout << "# Garantia de proced�ncia e rastreabilidade." << endl;
	cout << "# N�o mancha e n�o oxida." << endl;
	cout << "# �ngulo exclusivo de afia��o permitindo cortes com mais impacto." << endl;
		
	}	
	
	else if (codigo_descricao==2000){
	
	cout << endl;
	
	cout << "Faca desossa Starrett" << endl << endl;
		
	cout << "Caracter�sticas:" << endl << endl;

	cout << "# L�minas em a�o inoxid�vel" << endl;
	cout << "# Cabos ergon�micos e injetados em polipropileno que propicia melhor conforto" << endl;
	cout << "# Acabamento polido da l�mina" << endl;
	cout << "# Identifica��o com grava��o a laser no corpo da l�mina" << endl;
	cout << "# Liga de a�o especial, com maior vida �til" << endl;
	cout << "# Certifoca��o NSF" << endl << endl;

	cout << "Vantagens:" << endl << endl;

	cout << "# Alto �ndice de durabilidade." << endl;
	cout << "# Prote��o antimicrobiana Sanitized nos cabos (evita prolifera��o de bact�rias)." << endl;
	cout << "# Maior seguran�a." << endl;
	cout << "# Garantia de proced�ncia e rastreabilidade." << endl;
	cout << "# N�o mancha e n�o oxida." << endl;
	cout << "# �ngulo exclusivo de afia��o permitindo cortes com mais impacto." << endl;	
		
	}
	
	cout << endl << endl;
	cout << "Deseja realizar outra pesquisa? (s/n)" << endl;
		cin >> sn_descricao;
		
		if(sn_descricao=='s' || sn_descricao=='S'){
			system("cls");
			goto inicio_descricao;
		}
	
}
	
	
void suporte_cadastro(){

string erro;

cliente_suporte cadastro;

	cout << "\tSUPORTE T�CNICO" << endl << endl;
	cout << "Para dar continuidade ao pedido de suporte t�cnico, complete com as informa��es necess�rias. " << endl << endl;

	cout << "Nome da empresa: ";
		cin.ignore();
		getline(cin,cadastro.nome_suporte);
		
	cout << "Telefone para contato: ";
		cin.ignore();
		getline(cin,cadastro.telefone_suporte);

	cout << "CNPJ da empresa: ";
		cin >> cadastro.cnpj_suporte;

	cout << "E-mail para contato: ";
		cin.ignore();
		getline(cin,cadastro.email_suporte);

	cout << endl;

	cout << "Nome do produto: ";
		cin.ignore();
		getline(cin,cadastro.produto_suporte);
		
	cout << "Descreva o problema: ";
		cin.ignore();
		getline(cin,cadastro.problema_suporte);
		
system("cls");

cout << "\tSUPORTE T�CNICO" << endl << endl;
cout << cadastro.nome_suporte << " o seu pedido para suporte do produto " << cadastro.produto_suporte << " foi recebido com sucesso!"<< endl;
cout << " Aguarde contato para solucionarmos o seu problema! Caso necess�rio, envie-nos um e-mail: nihon@gmail.com" <<endl;

}


void meta_empresa(){
	
	cout << "\tMETA MENSAL DA EMPRESA"<< endl << endl;
	cout << "Valor esperado de vendas: R$500.000,00" << endl;
	cout << "Quantidade esperada de vendas de produtos: 458 unidades/600 unidades" << endl;
	cout << "M�dia de horas trabalhadas: >=8h di�rias"<< endl;

	
	
}


void meta_funcionario(){
	cout << "\tMETA MENSAL DO FUNCION�RIO"<< endl << endl;
	cout << "Valor esperado de vendas: R$50.000,00" << endl;
	cout << "Quantidade esperada de vendas de produtos: >=80 unidades" << endl;
	cout << "M�dia de horas trabalhadas: >=8h di�rias"<< endl;
	
}	


void submenu_gerente(){
	
	int aswr_g;
	char aswrg;

	inicio_g:
	cout << "\t MENU DO GERENTE" << endl << endl;
	cout << "1. Cadastrar Funcion�rios." << endl;
	cout << "2. Estoque produto." << endl; 
	cout << "3. Pesquisar por produto." << endl;
	cout << "4. Meta mensal da empresa. " << endl;
	cout << endl;

	cout << "Digite a op��o desejada: " << endl;
		cin >> aswr_g;

	while(aswr_g>4 || aswr_g<1){
 		cout << "OP��O INV�LIDA! Tente novamente:" << endl;
 			cin >> aswr_g;
	}
	
	
	switch(aswr_g){
 		case 1:
  			system("cls");
  			cadastro_funcionario();
  			
  			break;

 		case 2:
 			
 			system("cls");
 			listaproduto();
  
  			break;
  			
 		case 3: 
 
 			system("cls");
 			pesquisaproduto();
 			
  			break;
  			
 		case 4:
  
  			system("cls");
  			meta_empresa();
  
  			break;
  	
      	
}
	cout << endl << "Gostaria de realizar mais uma opera��o? (s/n)";
		cin >> aswrg;
		
		if(aswrg== 's' || aswrg== 'S'){
			system("cls");
			goto inicio_g;
		}


}


void submenu_funcionario(){
	
	int aswr_f;
	char aswrf;
	
	inicio_f:
	cout << "\tMENU DO FUNCION�RIO" << endl << endl;
	cout << "1. Estoque Produto" << endl;
	cout << "2. Pesquisar por Produto" << endl;
	cout << "3. Meta mensal da empresa" << endl;
	cout << "4. Meta mensal do funcion�rio" << endl;
	
	cout << endl;
	
	cout << "Digite a op��o desejada: " << endl;
		cin >> aswr_f;
		
		if(aswr_f<1 || aswr_f>4){
			cout << "Op��o inv�lida. Digite novamente: ";
				cin >> aswr_f;
		}
		
	switch (aswr_f){
		case 1:
			
			system("cls");
			listaproduto();
			
			break;
			
		case 2:
			
			system("cls");
			pesquisaproduto();
			
			break;
			
		case 3:
			
			system("cls");
			meta_empresa();
			
			break;
			
		case 4:
			
			system("cls");
			meta_funcionario();
			
			break;
	}
	
	cout << endl << "Gostaria de realizar mais uma opera��o? (s/n)";
		cin >> aswrf;
		
		if(aswrf== 's' || aswrf== 'S'){
			system("cls");
			goto inicio_f;
		}


}


void submenu_cliente(){
	
	int aswr_c;
	char aswrc;
	
	inicio_c:
	cout << "\tSEJA BEM-VINDO" << endl << endl;
	cout << "1. Estoque Produto" << endl;
	cout << "2. Descri��o dos Produtos" << endl;
	cout << "3. Or�amento" << endl;
	cout << "4. Compra" << endl;
	cout << "5. Avalia��o da compra " << endl;
	cout << "6. Suporte T�cnico" << endl;
	cout << endl;
	
	cout << "Digite a op��o desejada: " << endl;
		cin >> aswr_c;
		
		if(aswr_c<1 || aswr_c>6){
			cout << "Op��o inv�lida. Digite novamente: ";
				cin >> aswr_c;
		}
		
		switch (aswr_c){
			case 1:
			
				system("cls");
				listaproduto();
				
				break;
			
			case 2:
				
				system("cls");
				descricao_produto();
				

				break;
			
			case 3:
			
				system("cls");
				orcamento();
			
				break;
				
			case 4:
				
				system("cls");
				compra_produto();
				
				break;
			
			
			case 5:
				
				system("cls");
				pesquisa_satisfacao();
				
				break;
				
			case 6:
				
				system("cls");
				suporte_cadastro();
				
				break;
	
        }
    
	cout << endl << "Gostaria de realizar mais uma opera��o? (s/n)";
		cin >> aswrc;
		
		if(aswrc== 's' || aswrc== 'S'){
			system("cls");
			goto inicio_c;
		}

}


void validacao_gerente(){

	char sim_nao_g;
	int senha_g;
	int armazenasenha_g;

	cout << "Cadastrar senha? (s/n) " << endl;
		cin>> sim_nao_g;

	if(sim_nao_g == 's' || sim_nao_g== 'S'){
 		cout << endl;
 		cout << "CADASTRO DE SENHA " << endl;
 		cout << "Digite a senha a ser cadastrada:"<< endl;
 			cin >>  armazenasenha_g;
	}
	
	system("cls");

 	cout << "C�DIGO PARA ACESSO:" << endl;
 	cout << "Digite sua senha de acesso: " << endl;
 		cin >> senha_g;
 
 	while(armazenasenha_g != senha_g){
  		cout << "SENHA INV�LIDA! Tente novamente: " << endl;
  			cin >> senha_g; 
 	}
 	
}


void validacao_funcionario(){
	//SENHA PRE DEFINIDA PARA FUNCIONARIO: 122400
	
	int senha_f;
	
	cout << "C�DIGO PARA ACESSO: " << endl;
	cout << "Digite sua senha de acesso: " << endl;
		cin >> senha_f;
		
	
		while(senha_f != 122400){
			cout << "SENHA INV�LIDA! Tente novamente: " << endl;
			cin >> senha_f;
			
		}

}




int main(){
	
	setlocale (LC_ALL, "Portuguese"); 
	
	int aswr;
	
	inicio_main:
	cout << "\tL.A Gest�o de Neg�cios" << endl << endl;
	cout << "1. GERENTE/DONO " << endl;
	cout << "2. FUNCION�RIO " << endl;
	cout << "3. CLIENTE " << endl << endl;
	cout << "Digite a op��o desejada: ";
		cin >> aswr;
		
		while(aswr<1 || aswr>3){
			cout << "Op��o inv�lida. Digite novamente: ";
				cin >> aswr;
		}
		
	system("cls");
		
	switch(aswr){
		
		case 1: //GERENTE
			validacao_gerente();
			system("cls");
			submenu_gerente();
		
		break;
		
		case 2: //FUNCIONARIO 
			validacao_funcionario();
			cout << endl;
			submenu_funcionario();
			
			
		break;
		
		case 3: //CLIENTE 
			cout << endl;
			submenu_cliente();
			
			
		break;
			
	}
	system("cls");
	goto inicio_main;
	
	return 0;
}
