#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int main() {
  // Nível 1

  // 1.
  char nome[] = "Seu nome";
  printf("Meu nome é %s\n", nome);

  // 2.
  char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
  printf("%c\n", vogais[0]);
  printf("%c\n", vogais[1]);
  printf("%c\n", vogais[2]);
  printf("%c\n", vogais[3]);
  printf("%c\n", vogais[4]);

  // 3.
  char letra;
  scanf(" %c", &letra);
  if (letra == 'a') {
    printf("A letra %c é uma vogal.\n", letra);
  } else if (letra == 'e') {
    printf("A letra %c é uma vogal.\n", letra);
  } else if (letra == 'i') {
    printf("A letra %c é uma vogal.\n", letra);
  } else if (letra == 'o') {
    printf("A letra %c é uma vogal.\n", letra);
  } else if (letra == 'u') {
    printf("A letra %c é uma vogal.\n", letra);
  } else {
    printf("A letra %c não é uma vogal.\n", letra);
  }

  // 4.
  char palavra[10];
  scanf(" %s", palavra);
  printf("%s\n", palavra);

  // 5.
  char frase[20];
  scanf(" %[^\n]%*c", frase); // Lê frase com espaços
  printf("%s\n", frase);

  // Nível 2

  // 6.
  char numeros[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
  printf("%c\n", numeros[0]);
  printf("%c\n", numeros[2]);
  printf("%c\n", numeros[4]);
  printf("%c\n", numeros[6]);
  printf("%c\n", numeros[8]);

  // 7.
  char frutas[5][10] = {"Maçã", "Banana", "Laranja", "Pera", "Uva"};
  printf("%s\n", frutas[3]);

  // 8.
  char cores[7][10] = {"Vermelho", "Verde", "Azul", "Amarelo", "Laranja", "Roxo", "Preto"};
  int corNum;
  scanf("%d", &corNum);
  printf("%s\n", cores[corNum - 1]);

  // 9.
  char animais[10][10] = {"Cachorro", "Gato", "Cavalo", "Vaca", "Porco", "Galinha", "Coelho", "Ovelha", "Macaco", "Peixe"};
  char animal;
  scanf(" %c", &animal);
  if (animal == 'C') {
    printf("%s\n", animais[0]);
  } else if (animal == 'G') {
    printf("%s\n", animais[1]);
  } else if (animal == 'C') {
    printf("%s\n", animais[2]);
  } else if (animal == 'V') {
    printf("%s\n", animais[3]);
  } else if (animal == 'P') {
    printf("%s\n", animais[4]);
  } else if (animal == 'G') {
    printf("%s\n", animais[5]);
  } else if (animal == 'C') {
    printf("%s\n", animais[6]);
  } else if (animal == 'O') {
    printf("%s\n", animais[7]);
  } else if (animal == 'M') {
    printf("%s\n", animais[8]);
  } else if (animal == 'P') {
    printf("%s\n", animais[9]);
  }

// 10.
char dias[7][10] = {"Domingo", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado"};
int diaNum;
scanf("%d", &diaNum);
printf("%s\n", dias[diaNum - 1]);

// Nível 3

// 11.
char palavra1[10], palavra2[10];
scanf(" %s %s", palavra1, palavra2);
if (strcmp(palavra1, palavra2) < 0) {
  printf("%s\n", palavra1);
} else {
  printf("%s\n", palavra2);
}

// 12.
char frase[20];
int vogais = 0;
scanf(" %[^\n]%*c", frase);
if (frase[0] == 'a') {
  vogais++;
}
if (frase[1] == 'e') {
  vogais++;
}
if (frase[2] == 'i') {
  vogais++;
}
if (frase[3] == 'o') {
  vogais++;
}
if (frase[4] == 'u') {
  vogais++;
}
printf("O número de vogais na frase é: %d\n", vogais);

// 13.
char texto[50];
int posicaoA = -1;
scanf(" %[^\n]%*c", texto);
if (texto[0] == 'a') {
  posicaoA = 0;
} else if (texto[1] == 'a') {
  posicaoA = 1;
} else if (texto[2] == 'a') {
  posicaoA = 2;
} else if (texto[3] == 'a') {
  posicaoA = 3;
} else if (texto[4] == 'a') {
  posicaoA = 4;
}
if (posicaoA == -1) {
  printf("A letra 'a' não foi encontrada no texto.\n");
} else {
  printf("A primeira ocorrência da letra 'a' está na posição %d.\n", posicaoA);
}

// 14.
char palavra[10];
int tamanhoPalavra;
scanf(" %s", palavra);
tamanhoPalavra = strlen(palavra);
printf("%c", palavra[tamanhoPalavra - 1]);
printf("%c", palavra[tamanhoPalavra - 2]);
printf("%c", palavra[tamanhoPalavra - 3]);
printf("%c", palavra[tamanhoPalavra - 4]);
printf("%c", palavra[tamanhoPalavra - 5]);
printf("\n");

// 15.
char frase[20];
scanf(" %[^\n]%*c", frase);
if (frase[0] == 'a') {
  frase[0] = '*';
}
if (frase[1] == 'e') {
  frase[1] = '*';
}
if (frase[2] == 'i') {
  frase[2] = '*';
}
if (frase[3] == 'o') {
  frase[3] = '*';
}
if (frase[4] == 'u') {
  frase[4] = '*';
}
printf("%s\n", frase);

// Nível 4

// 16.
char nomes[10][20], sobrenomes[10][20];
int idades[10];
for (int i = 0; i < 10; i++) {
  scanf(" %s %s %d", nomes[i], sobrenomes[i], &idades[i]);
}
printf("%s %s - %d anos\n", nomes[0], sobrenomes[0], idades[0]);
printf("%s %s - %d anos\n", nomes[1], sobrenomes[1], idades[1]);
printf("%s %s - %d anos\n", nomes[2], sobrenomes[2], idades[2]);
printf("%s %s - %d anos\n", nomes[3], sobrenomes[3], idades[3]);
printf("%s %s - %d anos\n", nomes[4], sobrenomes[4], idades[4]);

// 17.
char produtos[20][20];
float precos[20];
for (int i = 0; i < 10; i++) {
  scanf(" %s %f", produtos[i], &precos[i]);
}
printf("%s - R$ %.2f\n", produtos[0], precos[0]);
printf("%s - R$ %.2f\n", produtos[1], precos[1]);
printf("%s - R$ %.2f\n", produtos[2], precos[2]);
printf("%s - R$ %.2f\n", produtos[3], precos[3]);
printf("%s - R$ %.2f\n", produtos[4], precos[4]);

// 18.
char cidades[15][20];
for (int i = 0; i < 15; i++) {
  scanf(" %s", cidades[i]);
}
if (strcmp(cidades[0], cidades[1]) > 0) {
  char temp[20];
  strcpy(temp, cidades[0]);
  strcpy(cidades[0], cidades[1]);
  strcpy(cidades[1], temp);
}
if (strcmp(cidades[1], cidades[2]) > 0) {
  char temp[20];
  strcpy(temp, cidades[1]);
  strcpy(cidades[1], cidades[2]);
  strcpy(cidades[2], temp);
}
if (strcmp(cidades[2], cidades[3]) > 0) {
  char temp[20];
  strcpy(temp, cidades[2]);
  strcpy(cidades[2], cidades[3]);
  strcpy(cidades[3], temp);
}
if (strcmp(cidades[3], cidades[4]) > 0) {
  char temp[20];
  strcpy(temp, cidades[3]);
  strcpy(cidades[3], cidades[4]);
  strcpy(cidades[4], temp);
}
printf("%s\n", cidades[0]);
printf("%s\n", cidades[1]);
printf("%s\n", cidades[2]);
printf("%s\n", cidades[3]);
printf("%s\n", cidades[4]);

// 19.
char texto[50];
int palavras = 0;
scanf(" %[^\n]%*c", texto);
if (texto[0] == ' ') {
  palavras++;
}
if (texto[1] == ' ') {
  palavras++;
}
if (texto[2] == ' ') {
  palavras++;
}
if (texto[3] == ' ') {
  palavras++;
}
if (texto[4] == ' ') {
  palavras++;
}
palavras++; // Conta a última palavra
printf("O número de palavras no texto é: %d\n", palavras);

// 20.
char frase[20];
int tamanhoFrase, maiorPalavra = 0, posicaoInicio = 0;
scanf(" %[^\n]%*c", frase);
tamanhoFrase = strlen(frase);
if (frase[0] != ' ') {
  maiorPalavra = 1;
}
if (frase[1] != ' ') {
  if (maiorPalavra < 2) {
    maiorPalavra = 2;
  }
}
if (frase[2] != ' ') {
  if (maiorPalavra < 3) {
    maiorPalavra = 3;
  }
}
if (frase[3] != ' ') {
  if (maiorPalavra < 4) {
    maiorPalavra = 4;
  }
}
if (frase[4] != ' ') {
  if (maiorPalavra < 5) {
    maiorPalavra = 5;
  }
}
for (int i = 1; i < tamanhoFrase; i++) {
  if (frase[i] == ' ' && frase[i - 1] != ' ') {
    if (i - posicaoInicio > maiorPalavra) {
      maiorPalavra = i - posicaoInicio;
    }
    posicaoInicio = i;
  }
}
if (tamanhoFrase - posicaoInicio > maiorPalavra) {
  maiorPalavra = tamanhoFrase - posicaoInicio;
}
for (int i = tamanhoFrase - 1; i >= 0; i--) {
  if (frase[i] != ' ') {
    printf("%c", frase[i]);
  } else if (i - posicaoInicio < maiorPalavra) {
    printf("%c", frase[i]);
  } else {
    break;
  }
}
printf("\n");

// Desafio
char frase[20], fraseInvertida[20];
int tamanhoFrase;
scanf(" %[^\n]%*c", frase);
tamanhoFrase = strlen(frase);
for (int i = 0; i < tamanhoFrase; i++) {
  fraseInvertida[tamanhoFrase - i - 1] = frase[i];
}
printf("%s\n", fraseInvertida);

// Bônus
char texto[50];
int palavras = 0, frases = 0, paragrafos = 0;
scanf(" %[^\n]%*c", texto);
for (int i = 0; i < strlen(texto); i++) {
  if (texto[i] == ' ') {
    palavras++;
  } else if (texto[i] == '.') {
    frases++;
  } else if (texto[i] == '\n') {
    paragrafos++;
  }
}
palavras++; // Conta a última palavra
frases++; // Conta a última frase
paragrafos++; // Conta o último parágrafo
printf("O número de palavras no texto é: %d\n", palavras);
printf("O número de frases no texto é: %d\n", frases);
printf("O número de parágrafos no texto é: %d\n", paragrafos);