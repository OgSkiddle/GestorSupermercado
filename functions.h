#include "structs.h"

/* Desc: Fun��o para ler as password
 * Parametros: void
 * Retorno: char*
 */
char* lerPassowrd();

/* Desc: Fun��o para ler valores inteiros
 * Parametros: n: int*
 * Retorno: void
 */
void lerInteiro(int *n);

/* Desc: Fun��o para ler valores floats
 * Parametros: n: float*
 * Retorno: void
 */
void lerFloat(float *n);

/* Desc: Fun��o para criar a lista de contas que existem para efetuar login
 * Parametros: void
 * Retorno: ListaContasLogin* || NULL
 */
ListaContasLogin* criaListaContasLogin();

/* Desc: Fun��o para criar a lista de Clientes
 * Parametros: void
 * Retorno: ListaCliente* || NULL
 */
ListaCliente* criaListaCliente();

/* Desc: Fun��o para criar a lista de Gestor
 * Parametros: void
 * Retorno: ListaGestor* || NULL
 */
ListaGestor* criaListaGestor();

/* Desc: Fun��o para criar a lista de Produtos
 * Parametros: void
 * Retorno: ListaProduto* || NULL
 */
ListaProduto* criaListaProduto();

/* Desc: Fun��o para criar a lista de Stock
 * Parametros: void
 * Retorno: ListaStock* || NULL
 */
ListaStock* criaListaStock();

/* Desc: Fun��o para criar a lista dos produtos que est�o no carrinho de compras
 * Parametros: void
 * Retorno: ListaCarrinhoCompras* || NULL
 */
ListaCarrinhoCompras* criaListaCarrinhoCompras();

/* Desc: Fun��o para criar a lista das compras ja realizadas no sistema
 * Parametros: void
 * Retorno: ListaCompra* || NULL
 */
ListaCompra* criaListaCompra();

/* Desc: Fun��o para criar a lista dos items das compras ja efetuadas no sistema
 * Parametros: void
 * Retorno: ListaCompra* || NULL
 */
ListaItemsCompra* criaListaItemsCompra();

/* Desc: Fun��o libertar a lista com as contas para efetuar login no sistema
 * Parametros: li: ListaContasLogin* || NULL
 * Retorno: void
 */
void libertaListaContasLogin(ListaContasLogin* li);

/* Desc: Fun��o libertar a lista com os dados dos clientes
 * Parametros: li: ListaCliente* || NULL
 * Retorno: void
 */
void libertaListaCliente(ListaCliente* li);

/* Desc: Fun��o libertar a lista com os dados dos gestores
 * Parametros: li: ListaGestor* || NULL
 * Retorno: void
 */
void libertaListaGestor(ListaGestor* li);

/* Desc: Fun��o libertar a lista com os dados dos produtos
 * Parametros: li: ListaProduto*
 * Retorno: void
 */
void libertaListaProduto(ListaProduto* li);

/* Desc: Fun��o libertar a lista com os dados do stock dos produtos
 * Parametros: li: ListaStock*
 * Retorno: void
 */
void libertaListaStock(ListaStock* li);

/* Desc: Fun��o libertar a lista com os dados do carrinho de compras
 * Parametros: li: ListaCarrinhoCompras*
 * Retorno: void
 */
void libertaListaCarrinhoCompras(ListaCarrinhoCompras* li);

/* Desc: Fun��o libertar a lista com os dados das compras feitas no sistema
 * Parametros: li: ListaCompra*
 * Retorno: void
 */
void libertaListaCompra(ListaCompra* li);

/* Desc: Fun��o libertar a lista com os dados dos items das compras feitas no sistema
 * Parametros: li: ListaItemsCompra*
 * Retorno: void
 */
void libertaListaItemsCompra(ListaItemsCompra* li);

/* Desc: Fun��o para inciar todos os processos que sejam necessarios no programa
 * Parametros: void
 * Retorno: int, 1 - tudo ok, 0 - ocorreu algum erro
 */
int startProgram();

/* Desc: Fun��o para limpar as listas quando for desligar o programa
 * Parametros: void
 * Retorno: void
 */
void endProgram();

/* Desc: Fun��o para obeter o id guardado nos arquivos
 * Parametros: n: int*, file: char*
 * Retorno: int, 1 - tudo ok, 0 - ocorreu algum erro
 */
int getIdFromFile(int *n, char *file);

/* Desc: Fun��o para verificar se um arquivo existe
 * Parametros: file: char*
 * Retorno: int, 1 - existe, 0 - n�o existe
 */
int fileExist(char *file);

/* Desc: Fun��o para alterar o id do arquivo, tamb�m serve para criar o arquivo
 * Parametros: file: char*, id: int
 * Retorno: int, 1 - alterado/criado, 0 - ocorreu algum erro
 */
int changeIDInFile(char *file, int id);

/* Desc: Fun��o para adicionar um novo registro na lista das contas para login
 * Parametros: file: li: ListaContasLogin*, contaLogin: ContasLogin, isFromSystem: int
 * Retorno: int, 1 - adicionado, 0 - ocorreu algum erro
 */
int insereContaLogin(ListaContasLogin* li, ContasLogin contaLogin, int isFromSystem);

/* Desc: Fun��o para adicionar um novo registro na lista de clientes
 * Parametros: file: li: ListaCliente*, Cliente: Cliente, isFromSystem: int
 * Retorno: int, 1 - adicionado, 0 - ocorreu algum erro
 */
int insereCliente(ListaCliente* li, Cliente cliente, int isFromSystem);

/* Desc: Fun��o para adicionar um novo registro na lista de gestor
 * Parametros: file: li: ListaGestor*, gestor: Gestor, isFromSystem: int
 * Retorno: int, 1 - adicionado, 0 - ocorreu algum erro
 */
int insereGestor(ListaGestor* li, Gestor gestor, int isFromSystem);

/* Desc: Fun��o para adicionar um novo registro na lista de produto
 * Parametros: file: li: ListaProduto*, produto: Produto, isFromSystem: int
 * Retorno: int, 1 - adicionado, 0 - ocorreu algum erro
 */
int insereProduto(ListaProduto* li, Produto produto, int isFromSystem);

/* Desc: Fun��o para adicionar um novo registro na lista de stock
 * Parametros: file: li: ListaStock*, stock: Stock, isFromSystem: int
 * Retorno: int, 1 - adicionado, 0 - ocorreu algum erro
 */
int insereStock(ListaStock* li, Stock stock, int isFromSystem);

/* Desc: Fun��o para adicionar um novo registro na lista de carrinho de compras
 * Parametros: file: li: ListaCarrinhoCompras*, carrinhoCompra: CarrinhoCompras
 * Retorno: int, 1 - adicionado, 0 - ocorreu algum erro
 */
int insereCarrinhoCompras(ListaCarrinhoCompras* li, CarrinhoCompras carrinhoCompra);

/* Desc: Fun��o para adicionar um novo registro na lista de carrinho de compras
 * Parametros: file: li: ListaCompra*, compra: Compra, isFromSystem: int
 * Retorno: int, 1 - adicionado, 0 - ocorreu algum erro
 */
int insereCompra(ListaCompra* li, Compra compra, int isFromSystem);

/* Desc: Fun��o para adicionar um novo registro na lista de carrinho de compras
 * Parametros: file: li: ListaItemsCompra*, itemCompra: ItemsCompra, isFromSystem: int
 * Retorno: int, 1 - adicionado, 0 - ocorreu algum erro
 */
int insereItemsCompra(ListaItemsCompra* li, ItemsCompra itemCompra, int isFromSystem);

/* Desc: Fun��o para remover um registro da lista de contas login
 * Parametros: file: li: ListaContasLogin*, id: int
 * Retorno: int, 1 - removido, 0 - ocorreu algum erro
 */
int removeContaLogin(ListaContasLogin* li, int id);

/* Desc: Fun��o para remover um registro da lista de clientes
 * Parametros: file: li: ListaCliente*, numCliente: int
 * Retorno: int, 1 - removido, 0 - ocorreu algum erro
 */
int removeCliente(ListaCliente* li, int numCliente);

/* Desc: Fun��o para remover um registro da lista de gestores
 * Parametros: file: li: ListaGestor*, codGestor: int
 * Retorno: int, 1 - removido, 0 - ocorreu algum erro
 */
int removeGestor(ListaGestor* li, int codGestor);

/* Desc: Fun��o para remover um registro da lista de produtos
 * Parametros: file: li: ListaProduto*, codProduto: int
 * Retorno: int, 1 - removido, 0 - ocorreu algum erro
 */
int removeProduto(ListaProduto* li, int codProduto);

/* Desc: Fun��o para remover um registro da lista de produtos
 * Parametros: file: li: ListaStock*, id: int
 * Retorno: int, 1 - removido, 0 - ocorreu algum erro
 */
int removeStock(ListaStock* li, int id);

/* Desc: Fun��o para remover todos os registros de stock de um produto
 * Parametros: file: li: ListaStock*, idProduto: int
 * Retorno: int, 1 - removido, 0 - ocorreu algum erro
 */
int removeStockProduto(ListaStock* li, int idProduto);

/* Desc: Fun��o para remover um registro do carrinho de compras
 * Parametros: file: li: ListaCarrinhoCompras*, idProduto: int
 * Retorno: int, 1 - removido, 0 - ocorreu algum erro
 */
int removeCarrinhoCompras(ListaCarrinhoCompras* li, int idProduto);

/* Desc: Fun��o para remover um registro da lista de compras
 * Parametros: file: li: ListaCompra*, id: int
 * Retorno: int, 1 - removido, 0 - ocorreu algum erro
 */
int removeCompra(ListaCompra* li, int id);

/* Desc: Fun��o para remover os items dos produtos de uma compra feita
 * Parametros: file: li: ListaItemsCompra*, idCompra: int
 * Retorno: int, 1 - removido, 0 - ocorreu algum erro
 */
int removeItemsCompra(ListaItemsCompra* li, int idCompra);

/* Desc: Fun��o para obeter a data atual
 * Parametros: void
 * Retorno: Data
 */
Data dataAtual();

/* Desc: Fun��o para verificar se a data � valida
 * Parametros: dataValidade: Data
 * Retorno: int: 1 - valido, 0 - n�o valido
 */
int dentroDaValidade(Data dataValidade);

/* Desc: Fun��o para verificar o stock de um produto
 * Parametros: li: ListaStock*, idProduto: int
 * Retorno: int
 */
int verificarStockProduto(ListaStock* li, int idProduto);

/* Desc: Fun��o para listar  todos os clientes
 * Parametros: li: ListaCliente*
 * Retorno: int: 1 - tudo imprimido com sucesso, 0 - ocorreu algum erro a imprimir
 */
int imprimeClientes(ListaCliente* li);

/* Desc: Fun��o para listar todos os gestores
 * Parametros: li: ListaGestor*
 * Retorno: int: 1 - tudo imprimido com sucesso, 0 - ocorreu algum erro a imprimir
 */
int imprimeGestores(ListaGestor* li);

/* Desc: Fun��o para listar todos os produtos
 * Parametros: li: ListaProduto*
 * Retorno: int: 1 - tudo imprimido com sucesso, 0 - ocorreu algum erro a imprimir
 */
int imprimeProdutos(ListaProduto* li);

/* Desc: Fun��o para listar todos os stock de um produto
 * Parametros: li: ListaStock*, idProduto: int
 * Retorno: int: 0 - n�o existe nenhum produto ou deu algum erro, > 0 tudo ok
 */
int imprimeStocksProduto(ListaStock* li, int idProduto);

/* Desc: Fun��o para listar todos os produtos que est�o no carrinho de compras
 * Parametros: li: ListaCarrinhoCompras*
 * Retorno: int: 1 - tudo imprimido com sucesso, 0 - ocorreu algum erro a imprimir
 */
int imprimeCarrinhoCompras(ListaCarrinhoCompras* li);

/* Desc: Fun��o para listar todas as compras feitas no sistema
 * Parametros: li: ListaCompra*
 * Retorno: int: 1 - tudo imprimido com sucesso, 0 - ocorreu algum erro a imprimir
 */
int imprimeCompras(ListaCompra* li);

/* Desc: Fun��o para listar todas as compras feitas pelo cliente
 * Parametros: li: ListaCompra*, idCliente: int
 * Retorno: int: 0 - n�o existe nenhuma compra ou deu algum erro, > 0 tudo ok
 */
int imprimeComprasCliente(ListaCompra* li, int idCliente);

/* Desc: Fun��o para listar todos os items feitos em uma compra
 * Parametros: li: ListaItemsCompra*, idCompra: int
 * Retorno: int: 1 - tudo imprimido com sucesso, 0 - ocorreu algum erro a imprimir
 */
int imprimeItemsCompra(ListaItemsCompra* li, int idCompra);

/* Desc: Fun��o para consultar uma conta login pelo id
 * Parametros: li: ListaContasLogin*, id: int, contaLogin: ContasLogin*
 * Retorno: int: 1 - conta existe, 0 - conta n�o existe
 */
int consultaContaLoginByID(ListaContasLogin* li, int id, ContasLogin *contaLogin);

/* Desc: Fun��o para consultar uma conta login pelo username
 * Parametros: li: ListaContasLogin*, username: char*, contaLogin: ContasLogin*
 * Retorno: int: 1 - conta existe, 0 - conta n�o existe
 */
int consultaContaLoginByUsername(ListaContasLogin* li, char *username, ContasLogin *contaLogin);

/* Desc: Fun��o para consultar uma conta login pelo tipo conta e o idTipo
 * Parametros: li: ListaContasLogin*, tipoConta: int, idTipo: int, contaLogin: ContasLogin*
 * Retorno: int: 1 - conta existe, 0 - conta n�o existe
 */
int consultaContaLoginByIDTipo(ListaContasLogin* li, int tipoConta, int idTipo, ContasLogin *contaLogin);

/* Desc: Fun��o para consultar o cliente pelo numCliente
 * Parametros: li: ListaCliente*, numCliente: int, cliente: Cliente*
 * Retorno: int: 1 - cliente existe, 0 - cliente n�o existe
 */
int consultaCliente(ListaCliente* li, int numCliente, Cliente *cliente);

/* Desc: Fun��o para consultar o gestor pelo codGestor
 * Parametros: li: ListaGestor*, codGestor: int, gestor: Gestor*
 * Retorno: int: 1 - gestor existe, 0 - gestor n�o existe
 */
int consultaGestor(ListaGestor* li, int codGestor, Gestor *gestor);

/* Desc: Fun��o para consultar o produto pelo codProduto
 * Parametros: li: ListaProduto*, codProduto: int, produto: Produto*
 * Retorno: int: 1 - Produto existe, 0 - Produto n�o existe
 */
int consultaProduto(ListaProduto* li, int codProduto, Produto *produto);

/* Desc: Fun��o para consultar o stock pelo o id
 * Parametros: li: ListaStock*, codProduto: int, stock: Stock*
 * Retorno: int: 1 - Stock existe, 0 - Stock n�o existe
 */
int consultaStock(ListaStock* li, int id, Stock *stock);

/* Desc: Fun��o para consultar o stock de um produto, ele ira retornar o 1 registro que encontrar
 * Parametros: li: ListaStock*, idProduto: int, stock: Stock*
 * Retorno: int: 1 - Stock existe, 0 - Stock n�o existe
 */
int consultaStockProduto(ListaStock* li, int idProduto, Stock *stock);

/* Desc: Fun��o para consultar o produto no carrinho de compras pelo o seu id
 * Parametros: li: ListaCarrinhoCompras*, idProduto: int, carrinhoCompra: CarrinhoCompras*
 * Retorno: int: 1 - CarrinhoCompras existe, 0 - CarrinhoCompras n�o existe
 */
int consultaCarrinhoCompras(ListaCarrinhoCompras* li, int idProduto, CarrinhoCompras *carrinhoCompra);

/* Desc: Fun��o para consultar uma compra pelo seu id
 * Parametros: li: ListaCompra*, id: int, compra: Compra*
 * Retorno: int: 1 - compra existe, 0 - compra n�o existe
 */
int consultaCompra(ListaCompra* li, int id, Compra *compra);

/* Desc: Fun��o para carregar as contas de login
 * Parametros: void
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int carregarContasLogin();

/* Desc: Fun��o para carregar os clientes
 * Parametros: void
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int carregarClientes();

/* Desc: Fun��o para carregar os gestores
 * Parametros: void
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int carregarGestores();

/* Desc: Fun��o para carregar dos produtos
 * Parametros: void
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int carregarProdutos();

/* Desc: Fun��o para carregar o stock dos produtos
 * Parametros: void
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int carregarStock();

/* Desc: Fun��o para carregar as compras
 * Parametros: void
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int carregarCompras();

/* Desc: Fun��o para carregar os items das compras
 * Parametros: void
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int carregarItemsCompras();

/* Desc: Fun��o para salvar as contas de login
 * Parametros: li: ListaContasLogin*
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int salvarContasLogin(ListaContasLogin* li);

/* Desc: Fun��o para salvar os clientes
 * Parametros: li: ListaCliente*
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int salvarClientes(ListaCliente* li);

/* Desc: Fun��o para salvar os gestores
 * Parametros: li: ListaGestor*
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int salvarGestores(ListaGestor* li);

/* Desc: Fun��o para salvar dos produtos
 * Parametros: li: ListaProduto*
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int salvarProdutos(ListaProduto* li);

/* Desc: Fun��o para salvar o stock dos produtos
 * Parametros: li: ListaStock*
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int salvarStock(ListaStock* li);

/* Desc: Fun��o para salvar as compras
 * Parametros: li: ListaCompra*
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int salvarCompras(ListaCompra* li);

/* Desc: Fun��o para salvar os items das compras
 * Parametros: li: ListaItemsCompra*
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int salvarItemsCompras(ListaItemsCompra* li);

/* Desc: Fun��o para alterar a conta login
 * Parametros: li: ListaContasLogin*, contaLogin: ContasLogin
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int alterarContaLogin(ListaContasLogin* li, ContasLogin contaLogin);

/* Desc: Fun��o para alterar um cliente
 * Parametros: li: ListaCliente*, cliente: Cliente
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int alterarCliente(ListaCliente* li, Cliente cliente);

/* Desc: Fun��o para alterar um gestor
 * Parametros: li: ListaGestor*, cliente: Cliente
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int alterarGestor(ListaGestor* li, Gestor gestor);

/* Desc: Fun��o para alterar um produto
 * Parametros: li: ListaProduto*, produto: Produto
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int alterarProduto(ListaProduto* li, Produto produto);

/* Desc: Fun��o para alterar um produto
 * Parametros: li: ListaStock*, stock: Stock
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int alterarStock(ListaStock* li, Stock stock);

/* Desc: Fun��o para alterar um item do carrinho de compras
 * Parametros: li: ListaCarrinhoCompras*, carrinhoCompras: CarrinhoCompras
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int alterarCarrinhoCompras(ListaCarrinhoCompras* li, CarrinhoCompras carrinhoCompras);

/* Desc: Fun��o para mostrar o menu de login
 * Parametros: void
 * Retorno: void
 */
void menuLogin();

/* Desc: Fun��o para fazer login no app
 * Parametros: void
 * Retorno: void
 */
void login();

/* Desc: Fun��o para criar uma conta de cliente
 * Parametros: createdByAdmin: int
 * Retorno: int: 1 - conta criada, 2 - ocorreu algum erro
 */
int criarContaCliente(int createdByAdmin);

/* Desc: Fun��o para alterar password
 * Parametros: void
 * Retorno: void
 */
void alterarPassword();

/* Desc: Fun��o para mostrar o menu do cliente
 * Parametros: void
 * Retorno: void
 */
void menuCliente();

/* Desc: Fun��o para mostrar o menu do gestor
 * Parametros: void
 * Retorno: void
 */
void menuGestor();

/* Desc: Fun��o para mostrar apenas os ultimos 4 d�gitos do cart�o de cr�dito
 * Parametros: numCartao: char*
 * Retorno: char*
 */
char* esconderCartaoCredito(char *numCartao);

/* Desc: Fun��o para verificar se na string contem apenas n�meros
 * Parametros: string: char*
 * Retorno: int: 1 - � tudo string, 2 - cont�m letras ou espa�os
 */
int isAllNumber(char *string);

/* Desc: Fun��o para verificar se o n�mero do cart�o est� correto
 * Parametros: numCartao: char*
 * Retorno: int: 1 - valido, 2 - invalido
 */
int verificarNumeroCartao(char *numCartao);

/* Desc: Fun��o para verificar o stock de todos os produtos est� dentro da validade
 * Parametros: li: ListaStock*
 * Retorno: void
 */
void verificarStocksProdutos(ListaStock* li);

/* Desc: Fun��o para mostrar o menu e alterar os dados do cliente
 * Parametros: void
 * Retorno: void
 */
void alterarDadosCliente();

/* Desc: Fun��o para adicionar um produto ao carrinho de compras
 * Parametros: void
 * Retorno: void
 */
void comprarProduto();

/* Desc: Fun��o para alterar a quantidade que iremos comprar de um produto
 * Parametros: void
 * Retorno: void
 */
void alterarQuantidadeProdutoCarrinho();

/* Desc: Fun��o para remover um produto do carrinho de compras
 * Parametros: void
 * Retorno: void
 */
void removerProdutoCarrinho();

/* Desc: Fun��o para finalizar uma compra
 * Parametros: void
 * Retorno: void
 */
void finalizarCompra();

/* Desc: Fun��o para finalizar uma compra
 * Parametros: li: ListaStock*, idProduto: int, stockARemover: int
 * Retorno: int: 1 - sucesso, 0 - deu algum erro;
 */
int removerStockProduto(ListaStock* li, int idProduto, int stockARemover);

/* Desc: Fun��o para mostrar o menu e alterar os dados do gestor
 * Parametros: void
 * Retorno: void
 */
void alterarDadosGestor();

/* Desc: Fun��o para mostrar o menu de remover clientes
 * Parametros: void
 * Retorno: void
 */
void removerCliente();

/* Desc: Fun��o para mostrar o menu de criar um gestor
 * Parametros: void
 * Retorno: void
 */
void criarGestor();

/* Desc: Fun��o para mostrar o menu de remover um gestor
 * Parametros: void
 * Retorno: void
 */
void removerGestor();

/* Desc: Fun��o para mostrar o menu de adicionar um produto
 * Parametros: void
 * Retorno: void
 */
void adicionarProduto();

/* Desc: Fun��o para mostrar o menu de remover um produto
 * Parametros: void
 * Retorno: void
 */
void removerProduto();

/* Desc: Fun��o para mostrar o menu para adicionar stock a um produto
 * Parametros: void
 * Retorno: void
 */
void adicionarStock();

/* Desc: Fun��o para ler e validar a data
 * Parametros: void
 * Retorno: Data
 */
Data lerData();

