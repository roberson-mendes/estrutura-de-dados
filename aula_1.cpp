#include <iostream>
#include <cstddef>
using namespace std;

// Funções simples
int soma(int number1, int number2){
    return number1 + number2;
}

void primeiros_passos() {
    // How to Inicialize variables
    int number1;
    int number2;
    
    // How to IOStream
    std::cout << "Hello world\n" << "\n";
    cout << "Apresentando IOStream: " << endl;
    std::cout << " digite o primeiro número: ";
    std::cin >> number1;
    std::cout << " digite o segundo numero: ";
    std::cin >> number2;

    // Mathematical operators
    cout << "\nRealizando operações matemáticas... " << endl;
    int sum = number1 + number2;
    cout << " resultado da soma: " << sum << endl;
    int subtraction = number1 - number2;
    cout << " resultado da subtração: " << subtraction << endl;
    int multiplication = number1 * number2;
    cout << " resultado da multiplicação: " << multiplication << endl;
    if(number1 != 0 ) {
        int division = number1 / number2;
        cout << " resultado da divisão: " << division << endl;
        float fdivision = (float) number1 / number2;
        cout << " resultado da divisão de float: " << fdivision << endl;
        int res = number1 % number2;
        cout << " resultado  operação de resto : " << res << endl;
    } else { cout << " operações de divisão não podem ter 0 no numerador." << endl; }


    // Conditional operators
    cout << "\nCalculando operadores condicionais..." << endl;
    if(number1 == number2)
        std::cout << "numero_1 == numero_2" << number2 << std::endl;
    if(number1 != number2)
        std::cout << "numero_1 != numero_2" << number2 << std::endl;
    if(number1 < number2)
        std::cout << "numero_1 < numero_2" << number2 << std::endl;
    if(number1 > number2)
        std::cout << "numero_1 > numero_2" << number2 << std::endl;

    // Repetition
    cout << "\nApresentando laços de repetição:" << endl;
    int counter = 0;
    int amount = 0;
    cout << "\n laço 'while'" << endl;
    while(counter < 5) {
        std::cout << "  Digite um número : (" << counter << ")";
        std::cin >> number1;
        counter++;
    }

    cout << "\n laço 'for'" << endl;
    int total = 0;
    for(int number = 1; number <= 20; number++) {
        total += number;
        cout << "  total:" << total << endl;
    }


    int count;
    int valor;
    int sumAvarage;
    sumAvarage = 0;
    count = 0;

    cout << "\n laço 'do-while'" << endl;
    cout << "  para encerrar, digite um valor menor que 0\n" << endl;
    do {
        cout << "  insira um valor: ";
        cin >> valor;
        sumAvarage += valor;
        count++;
        cout << "  contador:" << count << endl;
    } while(valor >= 0);

    //How to type cast
    cout << "\nFazendo type-casting e calculando média aritmética..." << endl;
    float avarage = (float) sumAvarage / (float) count;
    cout << " a média é: " << avarage << endl;
}

//##############################################----- Ponteiros -----#####################################################################

//#######################--- Valor vs Referência ---#######################

void troca_valores_passagem_por_valor(int val1, int val2) {
    int temp;
    temp = val1;
    val1 = val2;
    val2 = temp;
}

void troca_valores_passagem_por_referencia(int &val1, int &val2) {
    int temp;
    temp = val1;
    val1 = val2;
    val2 = temp;
}

void passagem_por_valor_vs_referencia() {
    cout << "\nPassagem vs referência" << endl;
    int val1 = 0;
    cout << " valor da variavel 1: " << val1 << endl;
    int val2 = 2;
    cout << " valor da variavel 2: " << val2 << endl;
    cout << " valores trocados pass. por valor: ";
    troca_valores_passagem_por_valor(val1, val2);
    cout << "\n  val1: " << val1 << "\n  val2: " << val2 << endl;
    cout << "  como podemos ver... Não funciona" << endl;
    cout << " valores trocados pass. por referencia: ";
    troca_valores_passagem_por_referencia(val1, val2);
    cout << "\n  val1: " << val1 << "\n  val2: " << val2 << endl;
}

//#######################--- Inicialização de ponteiros ---#######################

/*
    Nesta função o programa lança um erro, pois o valor 
    do ponteiro é um valor de uma memória que não existe
    (NULL) e, ao tentar acessar o valor de uma memória 
    que não existe, é lançadoo o erro.
*/
void ponteiro_vazio() {
    int *ponteiro = NULL;
    cout << "Valor no espaço de memória contido no endereço do ponteiro: " << *ponteiro << endl;
}

void mostra_inicializacao_estatica() {
    cout << "\nInicializando estaticamente um ponteiro" << endl;
    int a = 1;
    int *ponteiro = &a;
    cout << " Valor do ponteiro inicializado: " << ponteiro << endl;
}

void mostra_inicializacao_dinamica() {
    cout << "\nIniciando o ponteiro dinamicamente..." << endl;
    int *ponteiro = new int;
    cout << " Ponteiro iniciado. Valor contido nele: " << ponteiro << endl;
    cout << " Colocando um valor na memória apontada..." << endl;
    *ponteiro = 22;
    cout << " Valor colocado na memória apontada: " << *ponteiro << endl;

}

//#######################--- Operação em ponteiros ---#######################
void opera_nos_valores_contidos_na_memoria_dos_ponteiros() {
    cout << "\nOperando em valores na memória de ponteiros..." << endl;
    cout << "\n Inicializando dois ponteiros..." << endl;
    int *ponteiro1 = new int;
    *ponteiro1 = 22;
    int *ponteiro2 = new int;
    *ponteiro2 = 22;

    cout << " Somando o valor da memória de ambos..." << endl;
    int resultado = *ponteiro1 + *ponteiro2;
    cout << " Resultado da soma: " << resultado << endl;

}


//#######################--- Exibindo valor de ponteiros ---#######################
void exibe_valor_do_ponteiro() {
    int *ponteiro = NULL;
    int a = 1;
    ponteiro = &a;
    cout << "Valor do ponteiro: " << ponteiro << endl;
}

void exibe_valor_da_memoria_apontada() {
    int *ponteiro = NULL;
    int a = 1;
    ponteiro = &a;
    cout << "Valor do ponteiro: " << *ponteiro << endl;
}

int main() {
    primeiros_passos();
    mostra_inicializacao_estatica();
    mostra_inicializacao_dinamica();
    opera_nos_valores_contidos_na_memoria_dos_ponteiros();
    passagem_por_valor_vs_referencia();
    return 0;
}