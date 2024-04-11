#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  // Nível 1

  // 1.
  char nome[] = "Seu nome";
  printf("Meu nome é %s\n", nome);

  // 2.
  char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
  for (int i = 0; i < 5; i++) {
    printf("%c\n", vogais[i]);
  }

  // 3.
  char letra;
  scanf(" %c", &letra);
  if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
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
  char numeros[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '10'};
  for (int i = 0; i < 10; i++) {
    if (numeros[i] % 2 == 0) {
      printf("%c\n", numeros[i]);
    }
  }

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
  for (int i = 0; i < 10; i++) {
    if (animais[i][0] == animal) {
      printf("%s\n", animais[i]);
      break;
    }
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
  for (int i = 0; frase[i] != '\0'; i++) {
    if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {
      vogais++;
    }
  }
  printf("O número de vogais na frase é: %d\n", vogais);

  // 13.
char texto[50];
int posicaoA = -1;
scanf(" %[^\n]%*c", texto);
for (int i = 0; texto[i] != '\0'; i++) {
  if (texto[i] == 'a') {
    posicaoA = i;
    break;
  }
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
for (int i = tamanhoPalavra - 1; i >= 0; i--) {
  printf("%c", palavra[i]);
}
printf("\n");

// 15.
char frase[20];
scanf(" %[^\n]%*c", frase);
for (int i = 0; frase[i] != '\0'; i++) {
  if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {
    frase[i] = '*';
  }
}
printf("%s\n", frase);

// Nível 4

// 16.
char nomes[10][20], sobrenomes[10][20];
int idades[10];
for (int i = 0; i < 10; i++) {
  scanf(" %s %s %d", nomes[i], sobrenomes[i], &idades[i]);
}
for (int i = 0; i < 10; i++) {
  printf("%s %s - %d anos\n", nomes[i], sobrenomes[i], idades[i]);
}

// 17.
char produtos[20][20];
float precos[20];
for (int i = 0; i < 10; i++) {
  scanf(" %s %f", produtos[i], &precos[i]);
}
for (int i = 0; i < 10; i++) {
  printf("%s - R$ %.2f\n", produtos[i], precos[i]);
}

// 18.
char cidades[15][20];
for (int i = 0; i < 15; i++) {
  scanf(" %s", cidades[i]);
}
for (int i = 0; i < 15 - 1; i++) {
  for (int j = i + 1; j < 15; j++) {
    if (strcmp(cidades[i], cidades[j]) > 0) {
      char temp[20];
      strcpy(temp, cidades[i]);
      strcpy(cidades[i], cidades[j]);
      strcpy(cidades[j], temp);
    }
  }
}
for (int i = 0; i < 15; i++) {
  printf("%s\n", cidades[i]);
}

// 19.
char texto[50];
int palavras = 0;
scanf(" %[^\n]%*c", texto);
for (int i = 0; texto[i] != '\0'; i++) {
  if (texto[i] == ' ') {
    palavras++;
  }
}
palavras++; // Conta a última palavra
printf("O número de palavras no texto é: %d\n", palavras);

// 20.
char frase[20];
int tamanhoFrase, maiorPalavra = 0, posicaoInicio = 0;
scanf(" %[^\n]%*c", frase);
tamanhoFrase = strlen(frase);
for (int i = 0; i < tamanhoFrase; i++) {
  if (frase[i] == ' ') {
    if (i - posicaoInicio > maiorPalavra) {
      maiorPalavra = i - posicaoInicio;
    }
    posicaoInicio = i + 1;
  }
}