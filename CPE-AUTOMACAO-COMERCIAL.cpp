//PROJETO COMPUTACIONAL CPE 1°/2019
//ALUNAS : ADRIELLE - 180096699
//         LETÍCIA - 180104896

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

//para formulario de satisfação
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

//para cadastro de cliente para orçamento
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


/*COMEÇO DE FUNÇÕES PARA O PROGRAMA:
	*O programa é separado por meio de menus, especificado para cliente, funcionario e gerente,
	cada um com suas possibilidades de uso, cada possibilidade contém sua função
*/

void cadastro_funcionario(){
	
	fstream cadastrof; //aberto um arquivo para armazenar informações dos funcionários 

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
		
	cout << "Quantos funcionários você deseja cadastrar? " << endl;
		cin >> cadastro.quant_funcionario;
	
	//variáveis para armazenar informações dos dados e realizar pesquisas 
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
	
	cout << "ENDEREÇO:";
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

	cout << "Você deseja acessar outras opções? (s/n)" << endl;
		cin >> sn_opcoes;
		
	system("cls");
		
		if(sn_opcoes== 's' || sn_opcoes== 'S'){
			inicio_opcoes:
			cout << "OPÇÕES: " << endl;
			cout << "1. Pesquisar por funcionário. " << endl;
			cout << "2. Cálculo de Dados do Salário Liquído dos funcionários. " << endl;
			cout << "3. Lista de Funcionários. " << endl;
			cout << endl;
			
			cout << "Selecione uma das opções listadas acima: " << endl;
				cin >> opcao_gerente;
				
				while(opcao_gerente<1 || opcao_gerente>3){
					cout << "OPÇÃO INVÁLIDA! Digite novamente: " << endl;
						cin >> opcao_gerente;
				}
				
				system("cls");
				
			switch (opcao_gerente){
				
				case 1:
					
					cout << "\tPesquisa de Funcionários" << endl << endl;
					cout << "Digite o nome do funcionário: " << endl;
						cin.ignore();
						getline(cin, nome_pesquisa);
						
					cout << endl << endl;
					
					for(int i=0; i<cadastro.quant_funcionario; i++){
						
						if(nome_pesquisa == armazena_nome[i]){
						cout << "NOME:" << armazena_nome[i] << endl;
						cout << "SEXO: " << armazena_sexo[i] << endl;
						cout << "IDADE: " << armazena_idade[i] << endl;
						cout << "ENDEREÇO: " << armazena_endereco[i] << endl;
						cout << "CIDADE: " << armazena_cidade[i] << endl;
						cout << "CEP: " << armazena_cep[i] << endl;
						cout << "UF: " << armazena_uf[i] << endl;
						cout << "CPF: " << armazena_cpf[i] << endl;
						cout <<	"RG: " << armazena_rg[i] << endl;
						cout << "E-MAIL: " << armazena_email[i] << endl;
						cout << "TELEFONE: " << armazena_telefone[i] << endl;
						cout << "CARGO: " << armazena_cargo[i] << endl;
						cout << "GRAU DE ENSINO: " << armazena_ensino[i] << endl;
						cout << "SALÁRIO BRUTO: " << armazena_salario[i] << endl << endl;
						
						cout << "Deseja fazer alguma observação sobre o funcionário?(s/n)" << endl;
							cin >> coment_f;
						
						cout << endl;
						
							if(coment_f=='s' || coment_f=='S'){
								cout << "DESEMPENHO: (otimo/medio/baixo)" << endl;
									cin.ignore();
									getline(cin,desempenho);
									armazena_desempenho[i]=desempenho;
									
								cout << "ADVERTÊNCIAS: " << endl;
									cin.ignore();
									getline(cin,advertencia);
									armazena_advertencia[i]=advertencia;
								
								cout << "COMENTÁRIOS: " << endl;
									cin.ignore();
									getline(cin,comentario);
									armazena_comentario[i]=comentario;	
							}

						}
					}	
					
					cout << "Desejar realizar mais alguma operação?(s/n)" << endl;
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
					
					cout << "\tCálculo do Salário Líquido dos Funcionários" << endl << endl;
					cout << "Digite o nome do funcionário? " << endl;
						cin.ignore();
						getline(cin,nome_liquido);
			
					cout << endl;
					
					system("cls");
				
					for(int i=0; i<cadastro.quant_funcionario; i++){
						if( nome_liquido == armazena_nome[i]){
						
						cout << "NOME:" << armazena_nome[i] << endl;
						cout << "FUNÇÃO: " << armazena_cargo[i] << endl;
						cout << "E-MAIL: " << armazena_email[i] << endl << endl;
						
						cout << "\tCálculo de Salário" << endl << endl;
						cout << "INSS-  Instituto Nacional de Seguro Social";
						
							if(armazena_salario[i]<=1690.00){
								cout << "8% do Salário Bruto " << endl;
								cout << "DESCONTADO: R$"<< (armazena_salario[i]*0.08) << endl; 
								inss8= armazena_salario[i]*0.08;
							}
							
							else if(armazena_salario[i]>1690.00 && armazena_salario[i]<=2800.00){
								cout << "9% do Salário Bruto " << endl;
								cout << "DESCONTADO: R$"<< (armazena_salario[i]*0.09) << endl;
								inss9= armazena_salario[i]*0.09;
							}
							
							else if(armazena_salario[i]>2800.00 && armazena_salario[i]<=5600.00){
								cout << "11% do Salário Bruto " << endl;
								cout << "DESCONTADO: R$"<< (armazena_salario[i]*0.11) << endl; 
								inss11= armazena_salario[i]*0.11;
							}
							
						cout << endl;
							
						cout << "VALE TRANSPORTE- " << endl;
						
							cout << "Receber mensalmente: R$" << armazena_vale_transporte[i]*5.00*22 << endl;
							armazena_vt= armazena_vale_transporte[i]*5.00*22;
							
						cout << endl;
						
						cout << "VALE ALIMENTAÇÃO- " << endl;
						
							cout << "Receber mensalmente: R$" << valor_vale_alimentacao*22 << endl;
							armazena_va= valor_vale_alimentacao*22;
						
						cout << endl;
						
						cout << "IMPOSTO DE RENDA- " << endl;
						
							if(armazena_salario[i]<=1900.00){
								cout << "ISENTO DE TAXA " << endl;
								cout << "DESCONTADO: R$0.00" << endl; 
							}
							
							else if(armazena_salario[i]>1900.00 && armazena_salario[i]<=2800.00){
								cout << "7.5% do Salário Bruto " << endl;
								cout << "DESCONTADO: R$" << (armazena_salario[i]*0.075) << endl;
								ir7= armazena_salario[i]*0.075;
							}
							
							else if(armazena_salario[i]>2800.00 && armazena_salario[i]<=3700.00){
								cout << "15% do Salário Bruto " << endl;
								cout << "DESCONTADO: R$" << (armazena_salario[i]*0.15) << endl; 
								ir15= armazena_salario[i]*0.15;
							}
							
							else if(armazena_salario[i]>3700.00){
								cout << "22.5% do Salário Bruto " << endl;
								cout << "DESCONTADO: " << (armazena_salario[i]*0.225) << endl; 
								ir22= armazena_salario[i]*0.225;
							}
						
						cout << endl << endl;
						
						cout << "SALÁRIO LIQUÍDO R$" << armazena_salario[i] - inss8 - inss9 - inss11 + armazena_vt + armazena_va - ir7 - ir15 - ir22 << endl;		
						}
					}
					
					cout << "Desejar realizar mais alguma operação?(s/n)" << endl;
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
					
					cout << "\tLista de Todos os Funcionários" << endl << endl;
					
					for(int i=0; i<cadastro.quant_funcionario;i++){
						
						cout << "NOME:" << armazena_nome[i] << endl;
						cout << "SEXO: " << armazena_sexo[i] << endl;
						cout << "IDADE: " << armazena_idade[i] << endl;
						cout << "ENDEREÇO: " << armazena_endereco[i] << endl;
						cout << "CIDADE: " << armazena_cidade[i] << endl;
						cout << "CEP: " << armazena_cep[i] << endl;
						cout << "UF: " << armazena_uf[i] << endl;
						cout << "CPF: " << armazena_cpf[i] << endl;
						cout <<	"RG: " << armazena_rg[i] << endl;
						cout << "E-MAIL: " << armazena_email[i] << endl;
						cout << "TELEFONE: " << armazena_telefone[i] << endl;
						cout << "CARGO: " << armazena_cargo[i] << endl;
						cout << "GRAU DE ENSINO: " << armazena_ensino[i] << endl;
						cout << "SALÁRIO BRUTO: " << armazena_salario[i] << endl;
						cout << "DESEMPENHO: " << armazena_desempenho[i] << endl;
						cout << "ADVERTÊNCIA: " << armazena_advertencia[i] << endl;
						cout << "COMENTÁRIOS: " << armazena_comentario[i] << endl;
						cout << endl << endl;
						
					}
					
					cout << "Desejar realizar mais alguma operação?(s/n)" << endl;
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
		cout << "Não foi possivel abrir o arquivo!" << endl;
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
	produto[4] = "Impressora térmica bematch MP2800";
	produto[5] = "Leitor CB Las USB";
	produto[6] = "Monitor Dell";
	produto[7] = "No break NHS";
	produto[8] = "Kit teclado +mouse";
	produto[9] = "Computador bematch RC8400";
	produto[10] = "MIT player W toledo";
	produto[11] = "Liquidificador Urano 950A";
	produto[12] = "Gancho giratório grande";
	produto[13] = "Tampa bematch";
	produto[14] = "Bobina Regispel 57x300";
	produto[15] = "Balança Toledo 9094";
	produto[16] = "Balança PRIX 5 PLUS";
	produto[17] = "Carregador Datalogic micro USB";
	produto[18] = "Embaladora p/ filme Sulpack";
	produto[19] = "Faca açoug. Starrett";
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
	cout << "Digite o código do produto:  ";
	cin>> pesquisa;
	cout << endl;
	
	for(int i=1; i<=20 ;i++){
		
		if(codigo[i]==pesquisa){
			cout << "CÓDIGO            " << "PRODUTO                      " << "VALOR   " << "A VISTA   " << "ESTOQUE" << endl << endl;
			cout << codigo[i] << "     " << produto[i] << "          " << valor[i] << "     " << avista[i] << "    " << estoque[i] << endl;
			achou= 1;
		}
	}
	cout << endl;
	
	if(achou==0){
		cout << "Produto não encontrado no estoque! Deseja tentar novamente? (s/n)" << endl;
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
	produto[4] = "Impressora térmica bematch MP2800";
	produto[5] = "Leitor CB Las USB";
	produto[6] = "Monitor Dell";
	produto[7] = "No break NHS";
	produto[8] = "Kit teclado +mouse";
	produto[9] = "Computador bematch RC8400";
	produto[10] = "MIT player W toledo";
	produto[11] = "Liquidificador Urano 950A";
	produto[12] = "Gancho giratório grande";
	produto[13] = "Tampa bematch";
	produto[14] = "Bobina Regispel 57x300";
	produto[15] = "Balança Toledo 9094";
	produto[16] = "Balança PRIX 5 PLUS";
	produto[17] = "Carregador Datalogic micro USB";
	produto[18] = "Embaladora p/ filme Sulpack";
	produto[19] = "Faca açoug. Starrett";
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
	cout << "CÓDIGO            " << "PRODUTO                      " << "VALOR   " << "A VISTA   " << "ESTOQUE" << endl << endl;
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
	
	cout << "Qual funcionário está te atendendo?" << endl;
		cin.ignore();
		getline(cin,funcionario_compra);
	cout << endl;
	
	cout << "Qual metódo de pagamento ?" << endl << endl;
		cout << "1. Á VISTA" << endl;
		cout << "2. DEBITO " << endl;
		cout << "3. CRÉDITO " << endl;
		cout << "4. BOLETO " << endl;
		cout << endl;
			cin >> pagamento;
		cout << endl;
	
	cout << "Quantos produtos diferentes serão adiquiridos?" << endl;
		cin >> quant_dif;
	cout << endl;
		
	for(int i=0; i<quant_dif; i++){
	
	cout << "Digite o código do produto a ser comprado: " << endl;
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
					cout << "Para qual endereço? " << endl;
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
			cout << "OBRIGADA POR ESCOLHER OS NOSSOS SERVIÇOS!" << endl;
				
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
	produto[4] = "Impressora térmica bematch MP2800";
	produto[5] = "Leitor CB Las USB";
	produto[6] = "Monitor Dell";
	produto[7] = "No break NHS";
	produto[8] = "Kit teclado +mouse";
	produto[9] = "Computador bematch RC8400";
	produto[10] = "MIT player W toledo";
	produto[11] = "Liquidificador Urano 950A";
	produto[12] = "Gancho giratório grande";
	produto[13] = "Tampa bematch";
	produto[14] = "Bobina Regispel 57x300";
	produto[15] = "Balança Toledo 9094";
	produto[16] = "Balança PRIX 5 PLUS";
	produto[17] = "Carregador Datalogic micro USB";
	produto[18] = "Embaladora p/ filme Sulpack";
	produto[19] = "Faca açoug. Starrett";
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
	cout << "CÓDIGO            " << "PRODUTO                      " << "VALOR   " << "A VISTA   " << "ESTOQUE" << endl << endl;
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

	cout << "\tFORMULÁRIO DE SATISFAÇÃO" << endl << endl;
	
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
	cout << "3. Anúncio" << endl;
	cout << "4. Indicação de amigo" << endl;
	cout << "5. Redes Sociais" << endl;
		cin >> satisfacao.conhecer;
	cout << endl;
	
	cout << "COMO VOÇÊ AVALIA OS SEGUINTES ASPECTOS DE NOSSOS PRODUTOS? " << endl;
	cout << "\tQUALIDADE" << endl;
	cout << "\t\t 1. OTÍMO" << endl;
	cout << "\t\t 2. BOM" << endl;
	cout << "\t\t 3. REGULAR" << endl;
	cout << "\t\t 4. RUIM" << endl;
	cout << "\t\t 5. PESSÍMO" << endl; 
		cin >> satisfacao.qualidade;
	cout << endl;
	
	cout << "\tUTILIDADE" << endl;
	cout << "\t\t 1. OTÍMO" << endl;
	cout << "\t\t 2. BOM" << endl;
	cout << "\t\t 3. REGULAR" << endl;
	cout << "\t\t 4. RUIM" << endl;
	cout << "\t\t 5. PESSÍMO" << endl;
		cin >> satisfacao.utilidade;
	cout << endl;
	
	cout << "\tEFICIÊNCIA" << endl;
	cout << "\t\t 1. OTÍMO" << endl;
	cout << "\t\t 2. BOM" << endl;
	cout << "\t\t 3. REGULAR" << endl;
	cout << "\t\t 4. RUIM" << endl;
	cout << "\t\t 5. PESSÍMO" << endl;
		cin >> satisfacao.eficiencia;
	cout << endl;
	
	cout << "\tPREÇO" << endl;
	cout << "\t\t 1. OTÍMO" << endl;
	cout << "\t\t 2. BOM" << endl;
	cout << "\t\t 3. REGULAR" << endl;
	cout << "\t\t 4. RUIM" << endl;
	cout << "\t\t 5. PESSÍMO" << endl;
		cin >> satisfacao.preco;
	cout << endl;
	
	cout << "\tCONDIÇÕES DE PAGAMENTO" << endl;
	cout << "\t\t 1. OTÍMO" << endl;
	cout << "\t\t 2. BOM" << endl;
	cout << "\t\t 3. REGULAR" << endl;
	cout << "\t\t 4. RUIM" << endl;
	cout << "\t\t 5. PESSÍMO" << endl;
		cin >> satisfacao.pagamento;
	cout << endl;
	
	cout << "\tENTREGA" << endl;
	cout << "\t\t 1. OTÍMO" << endl;
	cout << "\t\t 2. BOM" << endl;
	cout << "\t\t 3. REGULAR" << endl;
	cout << "\t\t 4. RUIM" << endl;
	cout << "\t\t 5. PESSÍMO" << endl;
		cin >> satisfacao.entrega;
	cout << endl;
	
	cout << "EM SUA OPINIÃO QUAL O MELHOR ASPECTO EM NOSSOS PRODUTOS? " << endl;
		cin.ignore();
		getline(cin,melhor);
	cout << endl;
	
	cout << "EM SUA OPINIÃO QUAL O PIOR ASPECTO EM NOSSOS PRODUTOS? " << endl;
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
	produto[4] = "Impressora térmica bematch MP2800";	
	produto[5] = "Leitor CB Las USB";
	produto[6] = "Monitor Dell";
	produto[7] = "No break NHS";
	produto[8] = "Kit teclado +mouse";
	produto[9] = "Computador bematch RC8400";
	produto[10] = "MIT player W toledo";
	produto[11] = "Liquidificador Urano 950A";
	produto[12] = "Gancho giratório grande";
	produto[13] = "Tampa bematch";
	produto[14] = "Bobina Regispel 57x300";
	produto[15] = "Balança Toledo 9094";
	produto[16] = "Balança PRIX 5 PLUS";
	produto[17] = "Carregador Datalogic micro USB";
	produto[18] = "Embaladora p/ filme Sulpack";
	produto[19] = "Faca açoug. Starrett";
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


	cout << "\tORÇAMENTO DE PRODUTOS" << endl;

	cout << "1° PASSO: Cadastro Cliente" << endl << endl;

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

	cout << "2° PASSO: Escolha de Produtos" << endl << endl;

	listaproduto();

	cout << endl << endl;
	cout << "Quantos produtos diferentes serão adiquiridos? " << endl;
		cin >> prod_orcamento;

	for(int i=1; i<=prod_orcamento; i++){

 		cout << "Digite o código do produto" << i << "a ser comprado: " << endl;
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

	cout << "3° PASSO: Informar nome do funcionário que está dando suporte: " << endl << endl;

	cout << "NOME DO FUNCIONÁRIO: ";
		cin.ignore();
		getline(cin,orcamento.funcionario);
		armazena_funcionario = orcamento.funcionario;

	system("cls");

	//imprimir orçamento 

	cout << "\t\t\tNIHON AUTOMAÇÃO COMERCIAL" << endl;
	cout << "\t\t\t suporte.nihon@gmail.com" << endl;
	cout << "\t\t\t 712/713 Norte Bloco C" << endl;
	cout << "\t\t\t    (61)3002-0678" << endl;
	cout << endl;
	cout << "\t\t\t      ORÇAMENTO " << endl << endl;

	cout << "\t    " << "Cliente: " << armazena_nome_empresa << "       " << "CNPJ: " << armazena_cnpj << endl;
	cout << "\t    " << "Telefone: " << armazena_telefone_cliente << "   " << "E-mail: " <<  armazena_email_cliente << endl << endl;

	cout << "Quantidade" << "     Código" <<  "          Descrição" <<  "            Valor Unitário" <<  "        Valor Total" << endl;
	
	for(int a=1; a<=prod_orcamento; a++){
		cout << "   " << armazena_quant_orcamento[a] << "         " << armazena_codigo[a] << "            " << armazena_produto[a] << "         " << "R$" << armazena_valor[a] << "           " << "R$" << armazena_valor[a]*armazena_quant_orcamento[a] << endl;
		
		valortotal += (armazena_valor[a]*armazena_quant_orcamento[a]);
	}
	
	cout << "                                                                       | Sub-Total |" << " R$ " << valortotal << endl; 
	cout << "                                                                       | Desconto  |" << " R$ 5,00" << endl;
	cout << "                                                                       | Total     |" << " R$ " << (valortotal)-5 << endl;

	cout << endl;
	
	cout << "Observações: " << endl;
	cout << "Atendimento feito por " << armazena_funcionario << endl;
	cout << "Local de retirada de produtos: 712/713 norte bloco C" << endl;
	cout << "Caso de frete taxa de R$ 100,00 a mais no valor total" << endl;
	cout << "Formas de pagamento: dinheiro, débito, crédito e boleto bancário" << endl;
	cout << "Consultar formas de garantia e parcelamento" << endl;

	cout << endl;
	
	cout << "Obrigada por escolher os nossos serviços" << endl;	

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
	produto[4] = "Impressora térmica bematch MP2800";	
	produto[5] = "Leitor CB Laser Bematch S-100";
	produto[6] = "Monitor Dell";
	produto[7] = "No break NHS";
	produto[8] = "Kit teclado +mouse";
	produto[9] = "Computador bematch RC8400";
	produto[10] = "MIT player W toledo";
	produto[11] = "Liquidificador Urano 950A";
	produto[12] = "Gancho giratório grande";
	produto[13] = "Tampa bematch";
	produto[14] = "Bobina Regispel 57x300";
	produto[15] = "Balança Toledo 9094";
	produto[16] = "Balança PRIX 5 PLUS";
	produto[17] = "Carregador Datalogic micro USB";
	produto[18] = "Embaladora p/ filme Sulpack";
	produto[19] = "Faca açoug. Starrett";
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
	cout << "\tDESCRIÇÃO DE PRODUTOS" << endl;
	
	cout << endl;
	cout << "Digite o código do produto que você deseja ver detalhes: " << endl;
		cin >> codigo_descricao;
	
	
	system("cls");
	
	if (codigo_descricao==100){
	
	cout << endl;
		
	cout << "Gaveta dinheiro Bematch GD46" << endl << endl;
	
	cout << "Projetada para organizar e simplificar a operação de frente de caixa e conferir mais conforto e ergonomia " << endl;
	cout << "ao dia a dia do operador." << endl;
	cout << "Seu design compacto se adapta facilmente a ambientes com espaço reduzido." << endl << endl;
	cout << "# Três posições de fechadura: travada, operação automática e com abertura manual" << endl;
	cout << "# Preparada para as novas cédulas de Real." << endl;
	cout << "# Tampa para bandeja de dinheiro é um acessório opcional" << endl;

		
	}
	
	else if (codigo_descricao==200){
		
	cout << endl;
	
	cout << "HD HPE 1TB SATA p/ SERV HPE" << endl << endl;
	
	cout << "O HD ou Disco Rígido serve para armazenar arquivos, programas e todo tipo de conteúdo " << endl;
	cout << "que se deseja manter no computador." << endl << endl;
	cout << "# Capacidade de armazenamento: 1 TB " << endl;
	cout << "# Interface Standard Diretório: SATA/600 " << endl;
	cout << "# Interface do controlador: SATA " << endl;
	cout << "# Largura da Unidade: 3.5"  << endl;
	cout << "# Nome de marca: HPE " << endl;
    cout << "# Tipo de unidade: Interno " << endl;
	cout << "# Velocidade do eixo (rpm): 7200 " << endl;
		
	
	}
	
	else if (codigo_descricao==300){
	
	cout << endl;
		
	cout << "Impressora de etiqueta Elgin" << endl << endl;
	
	cout << "Equipamento para impressão de etiquetas, adesivas ou não (tags, etiquetas de gôndola, etc)." << endl;
	cout << "A tecnologia de impressão é de transferência térmica,por isso pode imprimir etiquetas de papel" << endl;
	cout << "comum / sintético, utilizando uma fita entintada (Ribbon) ou etiquetas “térmicas”, sem uso da fita entintada." << endl << endl;
	cout << "# Programa gratuito para criação dos layouts de etiquetas, onde pode-se facilmente imprimir" << endl; 
	cout << "  textos, imagens / logotipos e código de barras." << endl;

				
	}
	
	else if (codigo_descricao==400){
	
	cout << endl;
	
	cout << "Impressora térmica bematch MP2800" << endl << endl;
	
	cout << "Com tamanho reduzido e ampla conectividade, pode ser integrada a qualquer software de PDV do mercado e " << endl;
	cout << "oferece eficiência na impressão de documentos fiscais como DANFE, CF-e e códigos de barras. " << endl;
	cout << "Tudo para o seu estabelecimento ser ainda mais produtivo e lucrativo." << endl << endl;

	cout << "# Impressão de textos, gráficos e códigos de barras a 250mm/s" << endl;
	cout << "# Conexões USB, Serial e Ethernet" << endl;
	cout << "# Corte de papel através de guilhotina" << endl;
	cout << "# Assistência técnica especializada" << endl;
		
		
	}
	
	else if (codigo_descricao==500){
	
	cout << endl;
		
	cout << "Leitor CB Laser Bematch S-100" << endl << endl;
	
	cout << "O modelo S-100 é um produto compacto, de baixo custo, com acionamento por gatilho." << endl << endl;

	cout << "# Muito resistente, suporta quedas de até 1,5 metro" << endl;
	cout << "#Desenhado para o uso em balcões de varejo e check-outs com pequeno e médio volume de mercadoria" << endl;
	cout << "#Formatado para ler o código Febraban dos boletos bancários, agilizando o pagamento de títulos nos Internet Banks" << endl;
	
		
	}
	
	else if (codigo_descricao==600){
	
	cout << endl;
		
	cout << "Monitor Dell" << endl << endl;
	
	cout << "Obtenha fácil compatibilidade com PCs legados e prontos para o futuro por meio de conectividade VGA e HDMI." << endl << endl;
	cout << "# Redução do impacto no meio ambiente: o monitor Dell 22 conta com o recurso PowerNap, que reduz a " << endl;
	cout << "  luminosidade da tela ou coloca o monitor no modo de suspensão quando ele não está em uso. " << endl;
	
	cout << endl;
	cout << "O monitor também atende aos mais recentes padrões de conformidade regulamentar e ambiental:" << endl;

	cout << "# Com qualificação ENERGY STAR® " << endl;
	cout << "# CECP Certified" << endl;
	cout << "# TCO Certified Displays " << endl;
 
	cout << endl;
	cout << "Ecologicamente corretos: o novo monitor da Dell é fabricado com vidro sem arsênico e painel de LED sem mercúrio." << endl;
	cout << "As placas de circuito do monitor são fabricadas com retardadores de chama bromados (BFR) e laminados sem PVC." << endl;
		
		
	}
	
	else if (codigo_descricao==700){
	
	cout << endl;
	
	cout << "No break NHS" << endl << endl;
	
	cout << "Os modelos NHS é bivolt automático na entrada e possui sinalização através de display LCD." << endl << endl;
	cout << "Proteções:" << endl;
	cout << "# Contra curto-circuito, sobrecarga e sobretemperatura" << endl;
	cout << "# Contra descarga total de bateria" << endl;
	cout << "# Contra surtos de tensão" << endl;
		
		
	}
	
	else if (codigo_descricao==800){
	
	cout << endl;
	
	cout << "Kit teclado +mouse" << endl << endl;
	
	cout << "Projetados com detalhes sofisticados, tamanho compacto e teclas chiclete, o Teclado e mouse wireless" << endl;
	cout << "oferecem um design moderno e confortável com a conveniência da performance wireless" << endl;
		
		
	}
	
	else if (codigo_descricao==900){
	
	cout << endl;
		
	cout << "Computador bematch RC8400" << endl << endl;
	
	cout << "Com desempenho e tamanho ideais para frentes de caixa com pouco espaço no balcão, o RC-8400 consome até 75%" << endl;
	cout << "menos energia que computadores convencionais e é totalmente compatível com teclados programáveis." << endl << endl;

	cout << "# Confiabilidade e garantia de economia no final do mês" << endl;
	cout << "# Desempenho para elevar sua produtividade" << endl;
	cout << "# Mais opções de conexões para o seu negócio se ligar nas vendas" << endl;
	cout << "# Mais interatividade com seus clientes" << endl;
		
		
	}
	
	else if (codigo_descricao==1000){
	
	cout << endl;
		
	cout << "MIT player W toledo" << endl << endl;
	
	cout << "# Mini PC com sistema operacional Android 4.4;" << endl;
	cout << "# Processamento de 1.8 GHz, viabilizando excelente definição de imagens, vídeos e sons;" << endl;
	cout << "# Memória interna com armazenamento de 16 GB e possibilidade de expansão através de um cartão de memória;" << endl;
	cout << "# Compatível com monitores, telas de LCD, plasma ou LED com saída HDMI;" << endl;
	cout << "# Resolução de vídeo com excelente definição de 1024 x 768 pixels;" << endl;
	cout << "# Funcionamento em rede ethernet cabo 100/1000 Gbps;" << endl;
	cout << "# Compatível com arquivos de imagem (BMP e JPG), áudio (AAC e MP3) e vídeo (MP4)." << endl;
		
	}
	
	else if (codigo_descricao==1100){
	
	cout << endl;
	
	cout << "Liquidificador Urano 950A" << endl << endl;
	
	cout << "O liquidificador U CB 950A tem motor potente e lâminas de aço inoxidável para misturar completamente os alimentos."<< endl << endl;
	
	cout << "# Motor industrial de alta velocidade e eficiência que pode chegar até 3600 RPM." << endl;
    cout << "# Possui ventilador resfriador e sistema de proteção do calor do motor." << endl;
    cout << "# Sistema eletrônico para controlar a velocidade corrente atual, proteger o motor e reduzir a interferência do ambiente." << endl;
    cout << "# Sistema de proteção de sobrecarga." << endl;
    cout << "# Chave seletora e Chave “PULSAR” para atender às diferentes solicitações." << endl;
    cout << "# Conector de aço inox resistente." << endl;
    cout << "# Grupo de lâminas é orientado pelo rolamento de esfera. Evite usar por um longo período de tempo. " << endl;	
		
		
	}
	
	else if (codigo_descricao==1200){
	
	cout << endl;
	
	cout << "Gancho giratório grande" << endl << endl;
	
	cout << "Indicado para realizar rotações completas de 360º antes do içamento ou elevação da carga." << endl;
	cout << "Pintado na cor amarela, proporcionando resistência à oxidação. " << endl << endl;

	cout << "Especificações Técnicas:" << endl;

	cout << "# Medida do gancho olhal giratório: 10 mm " << endl;
	cout << "# Comprimento total do gancho com olhal giratório (A): 238,0 mm " << endl;
	cout << "# Largura interna do olhal giratório do gancho (B): 44,0 mm " << endl;
	cout << "# Altura interna do olhal giratório do gancho (C): 35,0 mm " << endl;
	cout << "# Espessura do corpo do olhal giratório do gancho (D): 15,8 mm " << endl;
	cout << "# Abertura do gancho com olhal giratório (E): 28,0 mm " << endl;
	cout << "# Altura da base do gancho com olhal giratório (F): 32,0 mm " << endl;
	cout << "# Espessura do corpo do gancho com olhal giratório (G): 23,0 mm " << endl;
	cout << "# Carga de trabalho do gancho olhal giratório: 3,20 t " << endl;
	cout << "# Carga de ruptura do gancho olhal giratório: 12,6 t " << endl;
	cout << "# Fator de segurança do gancho olhal giratório: 4:1 " << endl;
	
		
		
	}
	
	else if (codigo_descricao==1300){
	
	cout << endl;
		
	cout << "Tampa bematch" << endl;
	
	cout << "A tampa para a gaveta de dinheiro permite uma maior praticidade ao seu equipamento, além de permitir uma " << endl;
	cout << "maior proteção aos seus valores." << endl; 
	cout << "Além disso ela permite a troca rápida de operadores, e o fechamento de caixa realizada de maneira rápida." << endl;
		
	}
	
	else if (codigo_descricao==1400){
		
	cout << endl;
	
	cout << "Bobina Regispel 57x300" << endl << endl;
	
	cout << "As bobinas térmicas Regispel são a solução eficaz para o processo de automação do seu negócio." << endl;
	cout << "Imprime com precisão os comprovantes e fiscais, com a qualidade garantida através das normas " << endl;
	cout << "e certificações que a Regispel possui." << endl << endl;

	cout << "Os equipamentos utilizados na produção das bobinas térmicas possuem controle de metragem e regulagem de"<< endl;
	cout << "tensão no rebobinamento, proporcionando um produto com excelente acabamento" << endl;
		
	}
	
	else if (codigo_descricao==1500){
	
	cout << endl;
		
	cout << "Balança Toledo 9094" << endl << endl;
	
	cout << "# Display de cristal líquido com backlight;" << endl;
	cout << "# Bateria interna recarregável;" << endl;
	cout << "# Carregador de bateria automático;" << endl;
	cout << "# Desligamento automático;" << endl;
	cout << "# Fonte adaptadora multivoltagem;" << endl;
	cout << "# Gabinete de plástico ABS;" << endl;
	cout << "# Tara sucessiva;" << endl;
	cout << "# Flexibilidade de manuseio;" << endl;
	cout << "# Proteção contra interferências e sobrecargas;" << endl;
	cout << "# Prato de pesagem de fácil higienização;" << endl;
	cout << "# Teclado de fácil digitação;" << endl;
		
	}
	
	else if (codigo_descricao==1600){
		
	cout << endl;
		
	cout << "Balança PRIX 5 PLUS" << endl << endl;
	
	cout << "Solução inovadora em pesagem, rotulagem,automação e mídia interna que atende plenamente às reais necessidades." << endl;
	cout << "A 5 Plus é o resultado deste esforço e compromisso com o cliente." << endl << endl;

    cout << "É a balança computadora com impressora integrada da Toledo do Brasil, com design arrojado e inovador," << endl;
	cout << "cores suaves e recursos tecnológicos únicos no país." << endl << endl;

	cout << "Permite memória seja compartilhada com todos os campos de cadastro,oferecendo altíssima flexibilidade" << endl;
	cout << "para o atendimento das necessidades de todos os tipos de estabelecimentos do mercado varejista," << endl;
	cout << "desde os de pequeno porte até hipermercados." << endl << endl;

	cout << "Todos os itens poderão ser codificados e precificados com até 6 dígitos, além da data e hora da embalagem, " << endl;
	cout << "validade de 0 a 990 dias e lote de até 12 caracteres alfanuméricos para eventual controle de rastreabilidade." << endl << endl;
	
	cout << "# Cadastro local e/ou via rede" << endl;
	cout << "# Até 30 kg com tripla faixa de pesagem" << endl;
	cout << "# 60 teclas rápidas e acesso a até 180 itens" << endl;
	cout << "# Maior área útil de pesagem" << endl;
	cout << "# Venda direta e pré-embalagem na mesma balança" << endl;
	cout << "# Recurso de tara predeterminada" << endl;
	cout << "# Controle de vendas por operador" << endl;
		
	}
	
	else if (codigo_descricao==1700){
	
	cout << endl;
		
	cout << "Carregador Datalogic micro USB" << endl << endl;
	
	cout << "Carregador Micro USB, liga o coletor via micro USB diretamente para tomada de parede. Skorpio X3, X4 e ELF." << endl << endl;
	
	cout << "# Compatibilidade: Coletores de Dados Skirpio X3, X4 e ELF" << endl;
	cout << "# Tensão: 110 - 220V (AC)" << endl;
		
	}
	
	else if (codigo_descricao==1800){
	
	cout << endl;
		
	cout << "Embaladora p/ filme Sulpack" << endl << endl;
	
	cout << "Utilizados para embalagens de bandejas com frutas, legumes, frios, carnes, farináceos, etc.," << endl;
	cout << "utilizando filme de PVC esticável."<< endl;	
	
	cout << "# Para bobinas de até 480mm de largura;"<< endl;
	cout << "# Aço inox 430 escovado;"<< endl;
	cout << "# Sistema de corte através de barra de corte;"<< endl;
	cout << "# Temperatura constante da barra de corte e da placa de selagem após preaquecimento."<< endl;
		
	}
	
	else if (codigo_descricao==1900){
	
	cout << endl;
		
	cout << "Faca açoug. Starrett" << endl << endl;
	
	cout << "Lançamento oferece para açougues, frigoríficos, supermercados e profissionais da indústria" << endl;
	cout << " de alimentos em geral uma nova e excelente opção para o corte de carnes." << endl << endl;

	cout << "Características:" << endl << endl;

	cout << "# Lâminas em aço inoxidável" << endl;
	cout << "# Cabos ergonômicos e injetados em polipropileno que propicia melhor conforto" << endl;
	cout << "# Acabamento polido da lâmina" << endl;
	cout << "# Identificação com gravação a laser no corpo da lâmina" << endl;
	cout << "# Liga de aço especial, com maior vida útil" << endl;
	cout << "# Certifocação NSF" << endl << endl;

	cout << "Vantagens:" << endl << endl;

	cout << "# Alto índice de durabilidade." << endl;
	cout << "# Proteção antimicrobiana Sanitized nos cabos (evita proliferação de bactérias)." << endl;
	cout << "# Maior segurança." << endl;
	cout << "# Garantia de procedência e rastreabilidade." << endl;
	cout << "# Não mancha e não oxida." << endl;
	cout << "# Ângulo exclusivo de afiação permitindo cortes com mais impacto." << endl;
		
	}	
	
	else if (codigo_descricao==2000){
	
	cout << endl;
	
	cout << "Faca desossa Starrett" << endl << endl;
		
	cout << "Características:" << endl << endl;

	cout << "# Lâminas em aço inoxidável" << endl;
	cout << "# Cabos ergonômicos e injetados em polipropileno que propicia melhor conforto" << endl;
	cout << "# Acabamento polido da lâmina" << endl;
	cout << "# Identificação com gravação a laser no corpo da lâmina" << endl;
	cout << "# Liga de aço especial, com maior vida útil" << endl;
	cout << "# Certifocação NSF" << endl << endl;

	cout << "Vantagens:" << endl << endl;

	cout << "# Alto índice de durabilidade." << endl;
	cout << "# Proteção antimicrobiana Sanitized nos cabos (evita proliferação de bactérias)." << endl;
	cout << "# Maior segurança." << endl;
	cout << "# Garantia de procedência e rastreabilidade." << endl;
	cout << "# Não mancha e não oxida." << endl;
	cout << "# Ângulo exclusivo de afiação permitindo cortes com mais impacto." << endl;	
		
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

	cout << "\tSUPORTE TÉCNICO" << endl << endl;
	cout << "Para dar continuidade ao pedido de suporte técnico, complete com as informações necessárias. " << endl << endl;

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

cout << "\tSUPORTE TÉCNICO" << endl << endl;
cout << cadastro.nome_suporte << " o seu pedido para suporte do produto " << cadastro.produto_suporte << " foi recebido com sucesso!"<< endl;
cout << " Aguarde contato para solucionarmos o seu problema! Caso necessário, envie-nos um e-mail: nihon@gmail.com" <<endl;

}


void meta_empresa(){
	
	cout << "\tMETA MENSAL DA EMPRESA"<< endl << endl;
	cout << "Valor esperado de vendas: R$500.000,00" << endl;
	cout << "Quantidade esperada de vendas de produtos: 458 unidades/600 unidades" << endl;
	cout << "Média de horas trabalhadas: >=8h diárias"<< endl;

	
	
}


void meta_funcionario(){
	cout << "\tMETA MENSAL DO FUNCIONÁRIO"<< endl << endl;
	cout << "Valor esperado de vendas: R$50.000,00" << endl;
	cout << "Quantidade esperada de vendas de produtos: >=80 unidades" << endl;
	cout << "Média de horas trabalhadas: >=8h diárias"<< endl;
	
}	


void submenu_gerente(){
	
	int aswr_g;
	char aswrg;

	inicio_g:
	cout << "\t MENU DO GERENTE" << endl << endl;
	cout << "1. Cadastrar Funcionários." << endl;
	cout << "2. Estoque produto." << endl; 
	cout << "3. Pesquisar por produto." << endl;
	cout << "4. Meta mensal da empresa. " << endl;
	cout << endl;

	cout << "Digite a opção desejada: " << endl;
		cin >> aswr_g;

	while(aswr_g>4 || aswr_g<1){
 		cout << "OPÇÃO INVÁLIDA! Tente novamente:" << endl;
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
	cout << endl << "Gostaria de realizar mais uma operação? (s/n)";
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
	cout << "\tMENU DO FUNCIONÁRIO" << endl << endl;
	cout << "1. Estoque Produto" << endl;
	cout << "2. Pesquisar por Produto" << endl;
	cout << "3. Meta mensal da empresa" << endl;
	cout << "4. Meta mensal do funcionário" << endl;
	
	cout << endl;
	
	cout << "Digite a opção desejada: " << endl;
		cin >> aswr_f;
		
		if(aswr_f<1 || aswr_f>4){
			cout << "Opção inválida. Digite novamente: ";
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
	
	cout << endl << "Gostaria de realizar mais uma operação? (s/n)";
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
	cout << "2. Descrição dos Produtos" << endl;
	cout << "3. Orçamento" << endl;
	cout << "4. Compra" << endl;
	cout << "5. Avaliação da compra " << endl;
	cout << "6. Suporte Técnico" << endl;
	cout << endl;
	
	cout << "Digite a opção desejada: " << endl;
		cin >> aswr_c;
		
		if(aswr_c<1 || aswr_c>6){
			cout << "Opção inválida. Digite novamente: ";
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
    
	cout << endl << "Gostaria de realizar mais uma operação? (s/n)";
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

 	cout << "CÓDIGO PARA ACESSO:" << endl;
 	cout << "Digite sua senha de acesso: " << endl;
 		cin >> senha_g;
 
 	while(armazenasenha_g != senha_g){
  		cout << "SENHA INVÁLIDA! Tente novamente: " << endl;
  			cin >> senha_g; 
 	}
 	
}


void validacao_funcionario(){
	//SENHA PRE DEFINIDA PARA FUNCIONARIO: 122400
	
	int senha_f;
	
	cout << "CÓDIGO PARA ACESSO: " << endl;
	cout << "Digite sua senha de acesso: " << endl;
		cin >> senha_f;
		
	
		while(senha_f != 122400){
			cout << "SENHA INVÁLIDA! Tente novamente: " << endl;
			cin >> senha_f;
			
		}

}




int main(){
	
	setlocale (LC_ALL, "Portuguese"); 
	
	int aswr;
	
	inicio_main:
	cout << "\tL.A Gestão de Negócios" << endl << endl;
	cout << "1. GERENTE/DONO " << endl;
	cout << "2. FUNCIONÁRIO " << endl;
	cout << "3. CLIENTE " << endl << endl;
	cout << "Digite a opção desejada: ";
		cin >> aswr;
		
		while(aswr<1 || aswr>3){
			cout << "Opção inválida. Digite novamente: ";
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
