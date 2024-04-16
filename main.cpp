#include <iostream>
#include <cstring>

using namespace std;

int main() {
    // Nível 1
    // Exercício 1
    string nome = "João";
    cout << "Nome: " << nome << endl;

    // Exercício 2
    char vogais[] = {'a', 'e', 'i', 'o', 'u'};
    cout << vogais[0] << endl;
    cout << vogais[1] << endl;
    cout << vogais[2] << endl;
    cout << vogais[3] << endl;
    cout << vogais[4] << endl;

    // Exercício 3
    string letra;
    cout << "Digite uma letra: ";
    cin >> letra;
    if (letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u") {
        cout << "É uma vogal." << endl;
    } else {
        cout << "Não é uma vogal." << endl;
    }

    // Exercício 4
    char palavra[10];
    cout << "Digite uma palavra: ";
    cin >> palavra;
    cout << "Palavra: " << palavra << endl;

    // Exercício 5
    char frase[20];
    cout << "Digite uma frase: ";
    cin.ignore();
    cin.getline(frase, 20);
    cout << "Frase: " << frase << endl;

    // Nível 2
    // Exercício 1
    char numeros[] = {'2', '4', '6', '8', '1', '3', '5', '7', '9'};
    cout << numeros[0] << endl;
    cout << numeros[1] << endl;
    cout << numeros[2] << endl;
    cout << numeros[3] << endl;
    cout << numeros[4] << endl;

    // Exercício 2
    char frutas[][20] = {"Banana", "Maçã", "Pera", "Uva", "Melancia"};
    cout << "Fruta na posição 3: " << frutas[2] << endl;

    // Exercício 3
    char cores[][10] = {"Vermelho", "Laranja", "Amarelo", "Verde", "Azul", "Anil", "Violeta"};
    int posicao;
    cout << "Digite um número entre 1 e 7: ";
    cin >> posicao;
    cout << "Cor na posição " << posicao << ": " << cores[posicao - 1] << endl;

    // Exercício 4
    char animais[][20] = {"Gato", "Cachorro", "Elefante", "Leão", "Tigre", "Cavalo", "Vaca", "Girafa", "Pato", "Papagaio"};
    char caractere;
    cout << "Digite uma letra: ";
    cin >> caractere;
    if (caractere == 'G' || caractere == 'C' || caractere == 'E' || caractere == 'L' || caractere == 'T' || caractere == 'C' || caractere == 'V' || caractere == 'P') {
        cout << "Animal: ";
        switch(caractere) {
            case 'G':
                cout << "Gato";
                break;
            case 'C':
                cout << "Cachorro";
                cout << "Cavalo";
                break;
            case 'E':
                cout << "Elefante";
                break;
            case 'L':
                cout << "Leão";
                break;
            case 'T':
                cout << "Tigre";
                break;
            case 'V':
                cout << "Vaca";
                break;
            case 'P':
                cout << "Pato";
                break;
        }
        cout << endl;
    }

    // Exercício 5
    char dias[][15] = {"Domingo", "Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sábado"};
    cout << "Digite um número entre 1 e 7: ";
    cin >> posicao;
    cout << "Dia da semana na posição " << posicao << ": " << dias[posicao - 1] << endl;

    // Nível 3
    // Exercício 1
    char palavra1[10], palavra2[10];
    cout << "Digite a primeira palavra: ";
    cin >> palavra1;
    cout << "Digite a segunda palavra: ";
    cin >> palavra2;
    if (strcmp(palavra1, palavra2) > 0) {
        cout << "A primeira palavra é maior em ordem alfabética." << endl;
    } else if (strcmp(palavra1, palavra2) < 0) {
        cout << "A segunda palavra é maior em ordem alfabética." << endl;
    } else {
        cout << "As palavras são iguais." << endl;
    }

    // Exercício 2
    char frase_vogais[20];
    strcpy(frase_vogais, frase);
    int num_vogais = 0;
    if (frase_vogais[0] == 'a' || frase_vogais[0] == 'e' || frase_vogais[0] == 'i' || frase_vogais[0] == 'o' || frase_vogais[0] == 'u') num_vogais++;
    if (frase_vogais[1] == 'a' || frase_vogais[1] == 'e' || frase_vogais[1] == 'i' || frase_vogais[1] == 'o' || frase_vogais[1] == 'u') num_vogais++;
    if (frase_vogais[2] == 'a' || frase_vogais[2] == 'e' || frase_vogais[2] == 'i' || frase_vogais[2] == 'o' || frase_vogais[2] == 'u') num_vogais++;
    if (frase_vogais[3] == 'a' || frase_vogais[3] == 'e' || frase_vogais[3] == 'i' || frase_vogais[3] == 'o' || frase_vogais[3] == 'u') num_vogais++;
    if (frase_vogais[4] == 'a' || frase_vogais[4] == 'e' || frase_vogais[4] == 'i' || frase_vogais[4] == 'o' || frase_vogais[4] == 'u') num_vogais++;
    cout << "Número de vogais na frase: " << num_vogais << endl;

    // Exercício 3
    char texto[50];
    cout << "Digite um texto: ";
    cin.ignore();
    cin.getline(texto, 50);
    char *ptr = strchr(texto, 'a');
    if (ptr != nullptr) {
        cout << "Posição da primeira letra 'a': " << (ptr - texto) << endl;
    } else {
        cout << "A letra 'a' não foi encontrada no texto." << endl;
    }

    // Exercício 4
    char palavra_invertida[10];
    cout << "Digite uma palavra: ";
    cin >> palavra_invertida;
    cout << "Palavra invertida: " << palavra_invertida[9] << palavra_invertida[8] << palavra_invertida[7] << palavra_invertida[6] << palavra_invertida[5] << palavra_invertida[4] << palavra_invertida[3] << palavra_invertida[2] << palavra_invertida[1] << palavra_invertida[0] << endl;

    // Exercício 5
    char frase_substituida[20];
    strcpy(frase_substituida, frase);
    if (frase_substituida[0] == 'a' || frase_substituida[0] == 'e' || frase_substituida[0] == 'i' || frase_substituida[0] == 'o' || frase_substituida[0] == 'u') frase_substituida[0] = '*';
    if (frase_substituida[1] == 'a' || frase_substituida[1] == 'e' || frase_substituida[1] == 'i' || frase_substituida[1] == 'o' || frase_substituida[1] == 'u') frase_substituida[1] = '*';
    if (frase_substituida[2] == 'a' || frase_substituida[2] == 'e' || frase_substituida[2] == 'i' || frase_substituida[2] == 'o' || frase_substituida[2] == 'u') frase_substituida[2] = '*';
    if (frase_substituida[3] == 'a' || frase_substituida[3] == 'e' || frase_substituida[3] == 'i' || frase_substituida[3] == 'o' || frase_substituida[3] == 'u') frase_substituida[3] = '*';
    if (frase_substituida[4] == 'a' || frase_substituida[4] == 'e' || frase_substituida[4] == 'i' || frase_substituida[4] == 'o' || frase_substituida[4] == 'u') frase_substituida[4] = '*';
    cout << "Frase com vogais substituídas: " << frase_substituida << endl;

    // Nível 4
    // Exercício 1
    char nomes[10][50];
    int idades[10];
    cout << "Digite o nome da pessoa 1: ";
    cin >> nomes[0];
    cout << "Digite a idade da pessoa 1: ";
    cin >> idades[0];
    cout << "Digite o nome da pessoa 2: ";
    cin >> nomes[1];
    cout << "Digite a idade da pessoa 2: ";
    cin >> idades[1];
    cout << "Digite o nome da pessoa 3: ";
    cin >> nomes[2];
    cout << "Digite a idade da pessoa 3: ";
    cin >> idades[2];
    cout << "Digite o nome da pessoa 4: ";
    cin >> nomes[3];
    cout << "Digite a idade da pessoa 4: ";
    cin >> idades[3];
    cout << "Digite o nome da pessoa 5: ";
    cin >> nomes[4];
    cout << "Digite a idade da pessoa 5: ";
    cin >> idades[4];
    cout << "Digite o nome da pessoa 6: ";
    cin >> nomes[5];
    cout << "Digite a idade da pessoa 6: ";
    cin >> idades[5];
    cout << "Digite o nome da pessoa 7: ";
    cin >> nomes[6];
    cout << "Digite a idade da pessoa 7: ";
    cin >> idades[6];
    cout << "Digite o nome da pessoa 8: ";
    cin >> nomes[7];
    cout << "Digite a idade da pessoa 8: ";
    cin >> idades[7];
    cout << "Digite o nome da pessoa 9: ";
    cin >> nomes[8];
    cout << "Digite a idade da pessoa 9: ";
    cin >> idades[8];
    cout << "Digite o nome da pessoa 10: ";
    cin >> nomes[9];
    cout << "Digite a idade da pessoa 10: ";
    cin >> idades[9];
    cout << "Lista de nomes e idades:" << endl;
    cout << nomes[0] << "\t" << idades[0] << endl;
    cout << nomes[1] << "\t" << idades[1] << endl;
    cout << nomes[2] << "\t" << idades[2] << endl;
    cout << nomes[3] << "\t" << idades[3] << endl;
    cout << nomes[4] << "\t" << idades[4] << endl;
    cout << nomes[5] << "\t" << idades[5] << endl;
    cout << nomes[6] << "\t" << idades[6] << endl;
    cout << nomes[7] << "\t" << idades[7] << endl;
    cout << nomes[8] << "\t" << idades[8] << endl;
    cout << nomes[9] << "\t" << idades[9] << endl;

    // Exercício 2
    char produtos[20][50];
    float precos[20];
    cout << "Digite o nome do produto 1: ";
    cin >> produtos[0];
    cout << "Digite o preço do produto 1: ";
    cin >> precos[0];
    cout << "Digite o nome do produto 2: ";
    cin >> produtos[1];
    cout << "Digite o preço do produto 2: ";
    cin >> precos[1];
    cout << "Digite o nome do produto 3: ";
    cin >> produtos[2];
    cout << "Digite o preço do produto 3: ";
    cin >> precos[2];
    cout << "Digite o nome do produto 4: ";
    cin >> produtos[3];
    cout << "Digite o preço do produto 4: ";
    cin >> precos[3];
    cout << "Digite o nome do produto 5: ";
    cin >> produtos[4];
    cout << "Digite o preço do produto 5: ";
    cin >> precos[4];
    cout << "Digite o nome do produto 6: ";
    cin >> produtos[5];
    cout << "Digite o preço do produto 6: ";
    cin >> precos[5];
    cout << "Digite o nome do produto 7: ";
    cin >> produtos[6];
    cout << "Digite o preço do produto 7: ";
    cin >> precos[6];
    cout << "Digite o nome do produto 8: ";
    cin >> produtos[7];
    cout << "Digite o preço do produto 8: ";
    cin >> precos[7];
    cout << "Digite o nome do produto 9: ";
    cin >> produtos[8];
    cout << "Digite o preço do produto 9: ";
    cin >> precos[8];
    cout << "Digite o nome do produto 10: ";
    cin >> produtos[9];
    cout << "Digite o preço do produto 10: ";
    cin >> precos[9];
    cout << "Lista de produtos e preços:" << endl;
    cout << produtos[0] << "\tR$ " << precos[0] << endl;
    cout << produtos[1] << "\tR$ " << precos[1] << endl;
    cout << produtos[2] << "\tR$ " << precos[2] << endl;
    cout << produtos[3] << "\tR$ " << precos[3] << endl;
    cout << produtos[4] << "\tR$ " << precos[4] << endl;
    cout << produtos[5] << "\tR$ " << precos[5] << endl;
    cout << produtos[6] << "\tR$ " << precos[6] << endl;
    cout << produtos[7] << "\tR$ " << precos[7] << endl;
    cout << produtos[8] << "\tR$ " << precos[8] << endl;
    cout << produtos[9] << "\tR$ " << precos[9] << endl;

    // Exercício 3
    char cidades[15][50];
    cout << "Digite o nome da cidade 1: ";
    cin >> cidades[0];
    cout << "Digite o nome da cidade 2: ";
    cin >> cidades[1];
    cout << "Digite o nome da cidade 3: ";
    cin >> cidades[2];
    cout << "Digite o nome da cidade 4: ";
    cin >> cidades[3];
    cout << "Digite o nome da cidade 5: ";
    cin >> cidades[4];
    cout << "Digite o nome da cidade 6: ";
    cin >> cidades[5];
    cout << "Digite o nome da cidade 7: ";
    cin >> cidades[6];
    cout << "Digite o nome da cidade 8: ";
    cin >> cidades[7];
    cout << "Digite o nome da cidade 9: ";
    cin >> cidades[8];
    cout << "Digite o nome da cidade 10: ";
    cin >> cidades[9];
    cout << "Digite o nome da cidade 11: ";
    cin >> cidades[10];
    cout << "Digite o nome da cidade 12: ";
    cin >> cidades[11];
    cout << "Digite o nome da cidade 13: ";
    cin >> cidades[12];
    cout << "Digite o nome da cidade 14: ";
    cin >> cidades[13];
    cout << "Digite o nome da cidade 15: ";
    cin >> cidades[14];
    // Ordenando as cidades
    if (strcmp(cidades[0], cidades[1]) > 0) {
        char temp[50];
        strcpy(temp, cidades[0]);
        strcpy(cidades[0], cidades[1]);
        strcpy(cidades[1], temp);
    }
    if (strcmp(cidades[1], cidades[2]) > 0) {
        char temp[50];
        strcpy(temp, cidades[1]);
        strcpy(cidades[1], cidades[2]);
        strcpy(cidades[2], temp);
    }
    if (strcmp(cidades[2], cidades[3]) > 0) {
        char temp[50];
        strcpy(temp, cidades[2]);
        strcpy(cidades[2], cidades[3]);
        strcpy(cidades[3], temp);
    }
    if (strcmp(cidades[3], cidades[4]) > 0) {
        char temp[50];
        strcpy(temp, cidades[3]);
        strcpy(cidades[3], cidades[4]);
        strcpy(cidades[4], temp);
    }
    if (strcmp(cidades[4], cidades[5]) > 0) {
        char temp[50];
        strcpy(temp, cidades[4]);
        strcpy(cidades[4], cidades[5]);
        strcpy(cidades[5], temp);
    }
    if (strcmp(cidades[5], cidades[6]) > 0) {
        char temp[50];
        strcpy(temp, cidades[5]);
        strcpy(cidades[5], cidades[6]);
        strcpy(cidades[6], temp);
    }
    if (strcmp(cidades[6], cidades[7]) > 0) {
        char temp[50];
        strcpy(temp, cidades[6]);
        strcpy(cidades[6], cidades[7]);
        strcpy(cidades[7], temp);
    }
    if (strcmp(cidades[7], cidades[8]) > 0) {
        char temp[50];
        strcpy(temp, cidades[7]);
        strcpy(cidades[7], cidades[8]);
        strcpy(cidades[8], temp);
    }
    if (strcmp(cidades[8], cidades[9]) > 0) {
        char temp[50];
        strcpy(temp, cidades[8]);
        strcpy(cidades[8], cidades[9]);
        strcpy(cidades[9], temp);
    }
    if (strcmp(cidades[9], cidades[10]) > 0) {
        char temp[50];
        strcpy(temp, cidades[9]);
        strcpy(cidades[9], cidades[10]);
        strcpy(cidades[10], temp);
    }
    if (strcmp(cidades[10], cidades[11]) > 0) {
        char temp[50];
        strcpy(temp, cidades[10]);
        strcpy(cidades[10], cidades[11]);
        strcpy(cidades[11], temp);
    }
    if (strcmp(cidades[11], cidades[12]) > 0) {
        char temp[50];
        strcpy(temp, cidades[11]);
        strcpy(cidades[11], cidades[12]);
        strcpy(cidades[12], temp);
    }
    if (strcmp(cidades[12], cidades[13]) > 0) {
        char temp[50];
        strcpy(temp, cidades[12]);
        strcpy(cidades[12], cidades[13]);
        strcpy(cidades[13], temp);
    }
    if (strcmp(cidades[13], cidades[14]) > 0) {
        char temp[50];
        strcpy(temp, cidades[13]);
        strcpy(cidades[13], cidades[14]);
        strcpy(cidades[14], temp);
    }
    cout << "Lista de cidades em ordem alfabética:" << endl;
    for (int i = 0; i < 15; i++) {
        cout << cidades[i] << endl;
    }

    // Exercício 4
    char texto_contagem[50];
    cout << "Digite um texto: ";
    cin.ignore();
    cin.getline(texto_contagem, 50);
    int num_palavras = 1;
    for (char c : texto_contagem) {
        if (c == ' ') {
            num_palavras++;
        }
    }
    cout << "Número de palavras no texto: " << num_palavras << endl;

    // Exercício 5
    char frase_longa[20];
    cout << "Digite uma frase: ";
    cin.ignore();
    cin.getline(frase_longa, 20);
    char palavra_mais_longa[20];
    strcpy(palavra_mais_longa, frase_longa);
    char *token = strtok(palavra_mais_longa, " ");
    char *mais_longa = token;
    while (token != nullptr) {
        if (strlen(token) > strlen(mais_longa)) {
            mais_longa = token;
        }
        token = strtok(nullptr, " ");
    }
    cout << "Palavra mais longa: " << mais_longa << endl;

    return 0;
}
