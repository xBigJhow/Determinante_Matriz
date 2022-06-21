#include <new>
#include <stdlib.h>
#include <string>
#include <locale.h>
#include <iostream>
#include <windows.h>
#define LEN 3
#define LEN_2 2

using namespace std;

void matriz_ordem_tres(){
    // CABEÇALHO
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
    cout << "\n    DETERMINANTE MATRIZ DE ORDEM 3 \n";
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n" << endl;
    int matriz[LEN][LEN];
    // RECEBER VALORES
    for(int i = 0; i < LEN; i++){
        for(int j = 0; j < LEN; j++){
        cout << "POS: [" << i+1 << "][" << j+1 << "]: ";
        cin >> matriz[i][j];
        }
    }
    //PRINTAR VALORES
    cout << endl;
    for(int i=0; i<LEN; i++){
        cout << "| ";
        for(int j=0; j<LEN; j++){
            cout << " " << matriz[i][j] << " ";
        }
        cout <<  " |" << endl;
        Sleep(1000);
    }
    // VARIAVEL PARA CALCULAR O VALOR
    int diag_princ_soma = (matriz[0][0]*matriz[1][1]*matriz[2][2]) + (matriz[0][1]*matriz[1][2]*matriz[2][0]) + (matriz[0][2]*matriz[1][0]*matriz[2][1]);
    int diag_sec_subtracao = (matriz[0][2]*matriz[1][1]*matriz[2][0]) + (matriz[0][0]*matriz[1][2]*matriz[2][1]) + (matriz[0][1]*matriz[1][0]*matriz[2][2]);
    int determinante = diag_princ_soma - diag_sec_subtracao;

    //RESULTADO
    cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
    cout << "\n    O DETERMINANTE FOI:   " << determinante << " \n";
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n" << endl;
}

void matriz_ordem_dois(){
    // CABEÇALHO
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
    cout << "\n    DETERMINANTE MATRIZ DE ORDEM 2 \n";
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n" << endl;
    int matriz[LEN_2][LEN_2];
    // RECEBER VALORES
    for(int i = 0; i < LEN_2; i++){
        for(int j = 0; j < LEN_2; j++){
        cout << "POS: [" << i+1 << "][" << j+1 << "]: ";
        cin >> matriz[i][j];
        }
    }
    //PRINTAR VALORES
    cout << endl;
    for(int i=0; i<LEN_2; i++){
        cout << "| ";
        for(int j=0; j<LEN_2; j++){
            cout << " " << matriz[i][j] << " ";
        }
        cout <<  " |" << endl;
        Sleep(1000);
    }
    // VARIAVEL PARA CALCULAR O VALOR
    int diag_princ_soma = (matriz[0][0] * matriz[1][1]);
    int diag_sec_subtracao = (matriz[0][1] * matriz[1][0]);
    int determinante = diag_princ_soma - diag_sec_subtracao;

    //RESULTADO
    cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
    cout << "\n    O DETERMINANTE FOI:   " << determinante << " \n";
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n" << endl;
}

void matriz_ordem_um(){
    // CABEÇALHO
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
    cout << "\n    DETERMINANTE MATRIZ DE ORDEM 1 \n";
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n" << endl;
    int matriz;
    // RECEBER VALORES
    cout << "POS: [1:1]: ";
        cin >> matriz;
    //PRINTAR VALORES
    cout << "| " << matriz << " | "  << endl;
    Sleep(1000);
    //RESULTADO
    cout << "\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
    cout << "\n    O DETERMINANTE FOI:   " << matriz << " \n";
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n" << endl;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    //VARIAVEL PARA ESCOLHA DA MATRIZ
    int menu_funcao = 1;
    while(menu_funcao != 4 && menu_funcao > 0){
        // MENU PARA ESCOLHA DAS MATRIZES
        cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-";
        cout << "\n          PROGRAMA PARA CALCULAR DETERMINANTES\n";
        cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n" << endl;
        cout << "[ 1 ] - MATRIZ DE ORDEM 1" << "   [ 2 ]  - MATRIZ DE ORDEM 2" << endl;
        cout << "[ 3 ] - MATRIZ DE ORDEM 3" << "   [ 4 ]  - ENCERRAR PROGRAMA" << endl;
        // ESCOLHER OPCAO
        cout << "\n  OPCAO DESEJADA: ";
        cin >> menu_funcao;
        system("CLS");
        switch(menu_funcao){
            case 1:
                matriz_ordem_um();
                break;
            case 2:
                matriz_ordem_dois();
                break;
            case 3:
                matriz_ordem_tres();
                break;
            case 4:
                cout << "PROGRAMA ENCERRADO!";
                Sleep(1000);
                break;
        }
    }
    return 0;
}
