#include "structs.h"

/* Desc: Função para ler as password
 * Parametros: void
 * Retorno: char*
 */
char* lerPassowrd();

/* Desc: Função para ler valores inteiros
 * Parametros: n: int*
 * Retorno: void
 */
void lerInteiro(int *n);

/* Desc: Função para ler valores floats
 * Parametros: n: float*
 * Retorno: void
 */
void lerFloat(float *n);

/* Desc: Função para criar a lista de contas que existem para efetuar login
 * Parametros: void
 * Retorno: ListaContasLogin* || NULL
 */
ListaContasLogin* criaListaContasLogin();

/* Desc: Função para criar a lista de Clientes
 * Parametros: void
 * Retorno: ListaCliente* || NULL
 */
ListaCliente* criaListaCliente();

/* Desc: Função para criar a lista de Gestor
 * Parametros: void
 * Retorno: ListaGestor* || NULL
 */
ListaGestor* criaListaGestor();

/* Desc: Função para criar a lista de Produtos
 * Parametros: void
 * Retorno: ListaProduto* || NULL
 */
ListaProduto* criaListaProduto();

/* Desc: Função para criar a lista de Stock
 * Parametros: void
 * Retorno: ListaStock* || NULL
 */
ListaStock* criaListaStock();

/* Desc: Função para criar a lista dos produtos que estão no carrinho de compras
 * Parametros: void
 * Retorno: ListaCarrinhoCompras* || NULL
 */
ListaCarrinhoCompras* criaListaCarrinhoCompras();

/* Desc: Função para criar a lista das compras ja realizadas no sistema
 * Parametros: void
 * Retorno: ListaCompra* || NULL
 */
ListaCompra* criaListaCompra();

/* Desc: Função para criar a lista dos items das compras ja efetuadas no sistema
 * Parametros: void
 * Retorno: ListaCompra* || NULL
 */
ListaItemsCompra* criaListaItemsCompra();

/* Desc: Função libertar a lista com as contas para efetuar login no sistema
 * Parametros: li: ListaContasLogin* || NULL
 * Retorno: void
 */
void libertaListaContasLogin(ListaContasLogin* li);

/* Desc: Função libertar a lista com os dados dos clientes
 * Parametros: li: ListaCliente* || NULL
 * Retorno: void
 */
void libertaListaCliente(ListaCliente* li);

/* Desc: Função libertar a lista com os dados dos gestores
 * Parametros: li: ListaGestor* || NULL
 * Retorno: void
 */
void libertaListaGestor(ListaGestor* li);

/* Desc: Função libertar a lista com os dados dos produtos
 * Parametros: li: ListaProduto*
 * Retorno: void
 */
void libertaListaProduto(ListaProduto* li);

/* Desc: Função libertar a lista com os dados do stock dos produtos
 * Parametros: li: ListaStock*
 * Retorno: void
 */
void libertaListaStock(ListaStock* li);

/* Desc: Função libertar a lista com os dados do carrinho de compras
 * Parametros: li: ListaCarrinhoCompras*
 * Retorno: void
 */
void libertaListaCarrinhoCompras(ListaCarrinhoCompras* li);

/* Desc: Função libertar a lista com os dados das compras feitas no sistema
 * Parametros: li: ListaCompra*
 * Retorno: void
 */
void libertaListaCompra(ListaCompra* li);

/* Desc: Função libertar a lista com os dados dos items das compras feitas no sistema
 * Parametros: li: ListaItemsCompra*
 * Retorno: void
 */
void libertaListaItemsCompra(ListaItemsCompra* li);

/* Desc: Função para inciar todos os processos que sejam necessarios no programa
 * Parametros: void
 * Retorno: int, 1 - tudo ok, 0 - ocorreu algum erro
 */
int startProgram();

/* Desc: Função para limpar as listas quando for desligar o programa
 * Parametros: void
 * Retorno: void
 */
void endProgram();

/* Desc: Função para obeter o id guardado nos arquivos
 * Parametros: n: int*, file: char*
 * Retorno: int, 1 - tudo ok, 0 - ocorreu algum erro
 */
int getIdFromFile(int *n, char *file);

/* Desc: Função para verificar se um arquivo existe
 * Parametros: file: char*
 * Retorno: int, 1 - existe, 0 - não existe
 */
int fileExist(char *file);

/* Desc: Função para alterar o id do arquivo, também serve para criar o arquivo
 * Parametros: file: char*, id: int
 * Retorno: int, 1 - alterado/criado, 0 - ocorreu algum erro
 */
int changeIDInFile(char *file, int id);

/* Desc: Função para adicionar um novo registro na lista das contas para login
 * Parametros: file: li: ListaContasLogin*, contaLogin: ContasLogin, isFromSystem: int
 * Retorno: int, 1 - adicionado, 0 - ocorreu algum erro
 */
int insereContaLogin(ListaContasLogin* li, ContasLogin contaLogin, int isFromSystem);

/* Desc: Função para adicionar um novo registro na lista de clientes
 * Parametros: file: li: ListaCliente*, Cliente: Cliente, isFromSystem: int
 * Retorno: int, 1 - adicionado, 0 - ocorreu algum erro
 */
int insereCliente(ListaCliente* li, Cliente cliente, int isFromSystem);

/* Desc: Função para adicionar um novo registro na lista de gestor
 * Parametros: file: li: ListaGestor*, gestor: Gestor, isFromSystem: int
 * Retorno: int, 1 - adicionado, 0 - ocorreu algum erro
 */
int insereGestor(ListaGestor* li, Gestor gestor, int isFromSystem);

/* Desc: Função para adicionar um novo registro na lista de produto
 * Parametros: file: li: ListaProduto*, produto: Produto, isFromSystem: int
 * Retorno: int, 1 - adicionado, 0 - ocorreu algum erro
 */
int insereProduto(ListaProduto* li, Produto produto, int isFromSystem);

/* Desc: Função para adicionar um novo registro na lista de stock
 * Parametros: file: li: ListaStock*, stock: Stock, isFromSystem: int
 * Retorno: int, 1 - adicionado, 0 - ocorreu algum erro
 */
int insereStock(ListaStock* li, Stock stock, int isFromSystem);

/* Desc: Função para adicionar um novo registro na lista de carrinho de compras
 * Parametros: file: li: ListaCarrinhoCompras*, carrinhoCompra: CarrinhoCompras
 * Retorno: int, 1 - adicionado, 0 - ocorreu algum erro
 */
int insereCarrinhoCompras(ListaCarrinhoCompras* li, CarrinhoCompras carrinhoCompra);

/* Desc: Função para adicionar um novo registro na lista de carrinho de compras
 * Parametros: file: li: ListaCompra*, compra: Compra, isFromSystem: int
 * Retorno: int, 1 - adicionado, 0 - ocorreu algum erro
 */
int insereCompra(ListaCompra* li, Compra compra, int isFromSystem);

/* Desc: Função para adicionar um novo registro na lista de carrinho de compras
 * Parametros: file: li: ListaItemsCompra*, itemCompra: ItemsCompra, isFromSystem: int
 * Retorno: int, 1 - adicionado, 0 - ocorreu algum erro
 */
int insereItemsCompra(ListaItemsCompra* li, ItemsCompra itemCompra, int isFromSystem);

/* Desc: Função para remover um registro da lista de contas login
 * Parametros: file: li: ListaContasLogin*, id: int
 * Retorno: int, 1 - removido, 0 - ocorreu algum erro
 */
int removeContaLogin(ListaContasLogin* li, int id);

/* Desc: Função para remover um registro da lista de clientes
 * Parametros: file: li: ListaCliente*, numCliente: int
 * Retorno: int, 1 - removido, 0 - ocorreu algum erro
 */
int removeCliente(ListaCliente* li, int numCliente);

/* Desc: Função para remover um registro da lista de gestores
 * Parametros: file: li: ListaGestor*, codGestor: int
 * Retorno: int, 1 - removido, 0 - ocorreu algum erro
 */
int removeGestor(ListaGestor* li, int codGestor);

/* Desc: Função para remover um registro da lista de produtos
 * Parametros: file: li: ListaProduto*, codProduto: int
 * Retorno: int, 1 - removido, 0 - ocorreu algum erro
 */
int removeProduto(ListaProduto* li, int codProduto);

/* Desc: Função para remover um registro da lista de produtos
 * Parametros: file: li: ListaStock*, id: int
 * Retorno: int, 1 - removido, 0 - ocorreu algum erro
 */
int removeStock(ListaStock* li, int id);

/* Desc: Função para remover todos os registros de stock de um produto
 * Parametros: file: li: ListaStock*, idProduto: int
 * Retorno: int, 1 - removido, 0 - ocorreu algum erro
 */
int removeStockProduto(ListaStock* li, int idProduto);

/* Desc: Função para remover um registro do carrinho de compras
 * Parametros: file: li: ListaCarrinhoCompras*, idProduto: int
 * Retorno: int, 1 - removido, 0 - ocorreu algum erro
 */
int removeCarrinhoCompras(ListaCarrinhoCompras* li, int idProduto);

/* Desc: Função para remover um registro da lista de compras
 * Parametros: file: li: ListaCompra*, id: int
 * Retorno: int, 1 - removido, 0 - ocorreu algum erro
 */
int removeCompra(ListaCompra* li, int id);

/* Desc: Função para remover os items dos produtos de uma compra feita
 * Parametros: file: li: ListaItemsCompra*, idCompra: int
 * Retorno: int, 1 - removido, 0 - ocorreu algum erro
 */
int removeItemsCompra(ListaItemsCompra* li, int idCompra);

/* Desc: Função para obeter a data atual
 * Parametros: void
 * Retorno: Data
 */
Data dataAtual();

/* Desc: Função para verificar se a data é valida
 * Parametros: dataValidade: Data
 * Retorno: int: 1 - valido, 0 - não valido
 */
int dentroDaValidade(Data dataValidade);

/* Desc: Função para verificar o stock de um produto
 * Parametros: li: ListaStock*, idProduto: int
 * Retorno: int
 */
int verificarStockProduto(ListaStock* li, int idProduto);

/* Desc: Função para listar  todos os clientes
 * Parametros: li: ListaCliente*
 * Retorno: int: 1 - tudo imprimido com sucesso, 0 - ocorreu algum erro a imprimir
 */
int imprimeClientes(ListaCliente* li);

/* Desc: Função para listar todos os gestores
 * Parametros: li: ListaGestor*
 * Retorno: int: 1 - tudo imprimido com sucesso, 0 - ocorreu algum erro a imprimir
 */
int imprimeGestores(ListaGestor* li);

/* Desc: Função para listar todos os produtos
 * Parametros: li: ListaProduto*
 * Retorno: int: 1 - tudo imprimido com sucesso, 0 - ocorreu algum erro a imprimir
 */
int imprimeProdutos(ListaProduto* li);

/* Desc: Função para listar todos os stock de um produto
 * Parametros: li: ListaStock*, idProduto: int
 * Retorno: int: 0 - não existe nenhum produto ou deu algum erro, > 0 tudo ok
 */
int imprimeStocksProduto(ListaStock* li, int idProduto);

/* Desc: Função para listar todos os produtos que estão no carrinho de compras
 * Parametros: li: ListaCarrinhoCompras*
 * Retorno: int: 1 - tudo imprimido com sucesso, 0 - ocorreu algum erro a imprimir
 */
int imprimeCarrinhoCompras(ListaCarrinhoCompras* li);

/* Desc: Função para listar todas as compras feitas no sistema
 * Parametros: li: ListaCompra*
 * Retorno: int: 1 - tudo imprimido com sucesso, 0 - ocorreu algum erro a imprimir
 */
int imprimeCompras(ListaCompra* li);

/* Desc: Função para listar todas as compras feitas pelo cliente
 * Parametros: li: ListaCompra*, idCliente: int
 * Retorno: int: 0 - não existe nenhuma compra ou deu algum erro, > 0 tudo ok
 */
int imprimeComprasCliente(ListaCompra* li, int idCliente);

/* Desc: Função para listar todos os items feitos em uma compra
 * Parametros: li: ListaItemsCompra*, idCompra: int
 * Retorno: int: 1 - tudo imprimido com sucesso, 0 - ocorreu algum erro a imprimir
 */
int imprimeItemsCompra(ListaItemsCompra* li, int idCompra);

/* Desc: Função para consultar uma conta login pelo id
 * Parametros: li: ListaContasLogin*, id: int, contaLogin: ContasLogin*
 * Retorno: int: 1 - conta existe, 0 - conta não existe
 */
int consultaContaLoginByID(ListaContasLogin* li, int id, ContasLogin *contaLogin);

/* Desc: Função para consultar uma conta login pelo username
 * Parametros: li: ListaContasLogin*, username: char*, contaLogin: ContasLogin*
 * Retorno: int: 1 - conta existe, 0 - conta não existe
 */
int consultaContaLoginByUsername(ListaContasLogin* li, char *username, ContasLogin *contaLogin);

/* Desc: Função para consultar uma conta login pelo tipo conta e o idTipo
 * Parametros: li: ListaContasLogin*, tipoConta: int, idTipo: int, contaLogin: ContasLogin*
 * Retorno: int: 1 - conta existe, 0 - conta não existe
 */
int consultaContaLoginByIDTipo(ListaContasLogin* li, int tipoConta, int idTipo, ContasLogin *contaLogin);

/* Desc: Função para consultar o cliente pelo numCliente
 * Parametros: li: ListaCliente*, numCliente: int, cliente: Cliente*
 * Retorno: int: 1 - cliente existe, 0 - cliente não existe
 */
int consultaCliente(ListaCliente* li, int numCliente, Cliente *cliente);

/* Desc: Função para consultar o gestor pelo codGestor
 * Parametros: li: ListaGestor*, codGestor: int, gestor: Gestor*
 * Retorno: int: 1 - gestor existe, 0 - gestor não existe
 */
int consultaGestor(ListaGestor* li, int codGestor, Gestor *gestor);

/* Desc: Função para consultar o produto pelo codProduto
 * Parametros: li: ListaProduto*, codProduto: int, produto: Produto*
 * Retorno: int: 1 - Produto existe, 0 - Produto não existe
 */
int consultaProduto(ListaProduto* li, int codProduto, Produto *produto);

/* Desc: Função para consultar o stock pelo o id
 * Parametros: li: ListaStock*, codProduto: int, stock: Stock*
 * Retorno: int: 1 - Stock existe, 0 - Stock não existe
 */
int consultaStock(ListaStock* li, int id, Stock *stock);

/* Desc: Função para consultar o stock de um produto, ele ira retornar o 1 registro que encontrar
 * Parametros: li: ListaStock*, idProduto: int, stock: Stock*
 * Retorno: int: 1 - Stock existe, 0 - Stock não existe
 */
int consultaStockProduto(ListaStock* li, int idProduto, Stock *stock);

/* Desc: Função para consultar o produto no carrinho de compras pelo o seu id
 * Parametros: li: ListaCarrinhoCompras*, idProduto: int, carrinhoCompra: CarrinhoCompras*
 * Retorno: int: 1 - CarrinhoCompras existe, 0 - CarrinhoCompras não existe
 */
int consultaCarrinhoCompras(ListaCarrinhoCompras* li, int idProduto, CarrinhoCompras *carrinhoCompra);

/* Desc: Função para consultar uma compra pelo seu id
 * Parametros: li: ListaCompra*, id: int, compra: Compra*
 * Retorno: int: 1 - compra existe, 0 - compra não existe
 */
int consultaCompra(ListaCompra* li, int id, Compra *compra);

/* Desc: Função para carregar as contas de login
 * Parametros: void
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int carregarContasLogin();

/* Desc: Função para carregar os clientes
 * Parametros: void
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int carregarClientes();

/* Desc: Função para carregar os gestores
 * Parametros: void
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int carregarGestores();

/* Desc: Função para carregar dos produtos
 * Parametros: void
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int carregarProdutos();

/* Desc: Função para carregar o stock dos produtos
 * Parametros: void
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int carregarStock();

/* Desc: Função para carregar as compras
 * Parametros: void
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int carregarCompras();

/* Desc: Função para carregar os items das compras
 * Parametros: void
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int carregarItemsCompras();

/* Desc: Função para salvar as contas de login
 * Parametros: li: ListaContasLogin*
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int salvarContasLogin(ListaContasLogin* li);

/* Desc: Função para salvar os clientes
 * Parametros: li: ListaCliente*
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int salvarClientes(ListaCliente* li);

/* Desc: Função para salvar os gestores
 * Parametros: li: ListaGestor*
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int salvarGestores(ListaGestor* li);

/* Desc: Função para salvar dos produtos
 * Parametros: li: ListaProduto*
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int salvarProdutos(ListaProduto* li);

/* Desc: Função para salvar o stock dos produtos
 * Parametros: li: ListaStock*
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int salvarStock(ListaStock* li);

/* Desc: Função para salvar as compras
 * Parametros: li: ListaCompra*
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int salvarCompras(ListaCompra* li);

/* Desc: Função para salvar os items das compras
 * Parametros: li: ListaItemsCompra*
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int salvarItemsCompras(ListaItemsCompra* li);

/* Desc: Função para alterar a conta login
 * Parametros: li: ListaContasLogin*, contaLogin: ContasLogin
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int alterarContaLogin(ListaContasLogin* li, ContasLogin contaLogin);

/* Desc: Função para alterar um cliente
 * Parametros: li: ListaCliente*, cliente: Cliente
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int alterarCliente(ListaCliente* li, Cliente cliente);

/* Desc: Função para alterar um gestor
 * Parametros: li: ListaGestor*, cliente: Cliente
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int alterarGestor(ListaGestor* li, Gestor gestor);

/* Desc: Função para alterar um produto
 * Parametros: li: ListaProduto*, produto: Produto
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int alterarProduto(ListaProduto* li, Produto produto);

/* Desc: Função para alterar um produto
 * Parametros: li: ListaStock*, stock: Stock
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int alterarStock(ListaStock* li, Stock stock);

/* Desc: Função para alterar um item do carrinho de compras
 * Parametros: li: ListaCarrinhoCompras*, carrinhoCompras: CarrinhoCompras
 * Retorno: int: 1 - tudo ok, 0 - deu algum erro
 */
int alterarCarrinhoCompras(ListaCarrinhoCompras* li, CarrinhoCompras carrinhoCompras);

/* Desc: Função para mostrar o menu de login
 * Parametros: void
 * Retorno: void
 */
void menuLogin();

/* Desc: Função para fazer login no app
 * Parametros: void
 * Retorno: void
 */
void login();

/* Desc: Função para criar uma conta de cliente
 * Parametros: createdByAdmin: int
 * Retorno: int: 1 - conta criada, 2 - ocorreu algum erro
 */
int criarContaCliente(int createdByAdmin);

/* Desc: Função para alterar password
 * Parametros: void
 * Retorno: void
 */
void alterarPassword();

/* Desc: Função para mostrar o menu do cliente
 * Parametros: void
 * Retorno: void
 */
void menuCliente();

/* Desc: Função para mostrar o menu do gestor
 * Parametros: void
 * Retorno: void
 */
void menuGestor();

/* Desc: Função para mostrar apenas os ultimos 4 dígitos do cartão de crédito
 * Parametros: numCartao: char*
 * Retorno: char*
 */
char* esconderCartaoCredito(char *numCartao);

/* Desc: Função para verificar se na string contem apenas números
 * Parametros: string: char*
 * Retorno: int: 1 - é tudo string, 2 - contém letras ou espaços
 */
int isAllNumber(char *string);

/* Desc: Função para verificar se o número do cartão está correto
 * Parametros: numCartao: char*
 * Retorno: int: 1 - valido, 2 - invalido
 */
int verificarNumeroCartao(char *numCartao);

/* Desc: Função para verificar o stock de todos os produtos está dentro da validade
 * Parametros: li: ListaStock*
 * Retorno: void
 */
void verificarStocksProdutos(ListaStock* li);

/* Desc: Função para mostrar o menu e alterar os dados do cliente
 * Parametros: void
 * Retorno: void
 */
void alterarDadosCliente();

/* Desc: Função para adicionar um produto ao carrinho de compras
 * Parametros: void
 * Retorno: void
 */
void comprarProduto();

/* Desc: Função para alterar a quantidade que iremos comprar de um produto
 * Parametros: void
 * Retorno: void
 */
void alterarQuantidadeProdutoCarrinho();

/* Desc: Função para remover um produto do carrinho de compras
 * Parametros: void
 * Retorno: void
 */
void removerProdutoCarrinho();

/* Desc: Função para finalizar uma compra
 * Parametros: void
 * Retorno: void
 */
void finalizarCompra();

/* Desc: Função para finalizar uma compra
 * Parametros: li: ListaStock*, idProduto: int, stockARemover: int
 * Retorno: int: 1 - sucesso, 0 - deu algum erro;
 */
int removerStockProduto(ListaStock* li, int idProduto, int stockARemover);

/* Desc: Função para mostrar o menu e alterar os dados do gestor
 * Parametros: void
 * Retorno: void
 */
void alterarDadosGestor();

/* Desc: Função para mostrar o menu de remover clientes
 * Parametros: void
 * Retorno: void
 */
void removerCliente();

/* Desc: Função para mostrar o menu de criar um gestor
 * Parametros: void
 * Retorno: void
 */
void criarGestor();

/* Desc: Função para mostrar o menu de remover um gestor
 * Parametros: void
 * Retorno: void
 */
void removerGestor();

/* Desc: Função para mostrar o menu de adicionar um produto
 * Parametros: void
 * Retorno: void
 */
void adicionarProduto();

/* Desc: Função para mostrar o menu de remover um produto
 * Parametros: void
 * Retorno: void
 */
void removerProduto();

/* Desc: Função para mostrar o menu para adicionar stock a um produto
 * Parametros: void
 * Retorno: void
 */
void adicionarStock();

/* Desc: Função para ler e validar a data
 * Parametros: void
 * Retorno: Data
 */
Data lerData();

