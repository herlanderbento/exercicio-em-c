
/*
    Faça um programa em C que preencha um vetor de
    inteiros com tamanho de N posições , os valores devem
    ser pedidos ao usuário.Em seguida, calcule e salve num
    segundo vetor o quadrado de cada elemento do primeiro
    vetor. Por fim, imprima os dois vetores. 
*/

int main()
{

    int i, vetor1[5], vetor2[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digita a posicao prover do vetor %d: ", i);
        scanf("%d", &vetor1[i]);
    }

    for (int i; i < 5; i++)
        vetor2[i] = vetor1[i] * vetor1[i];

    printf("\n Vetor 1:");
    for (int i; i < 5; i++)
        printf("%3d", vetor1[i]);

    printf("\n Vetor 2:");
    for (int i; i < 5; i++)
        printf("%3d", vetor2[i]);

    return 0;
}

/*
Faça um programa que some o conteúdo de dois vetores
de tamanho 10 e armazene o resultado em um terceiro
vetor. Imprima os três vetores na tela
*/

int main()
{

    int i, vet1[10], vet2[10], vet3[10];

    // gera valores entre 0 e 99 para os vetores 1 e 2
    for (i = 0; i < 10; i++)
    {
        vet1[i] = rand() % 100;
        vet2[i] = rand() % 100;
    }

    // soma os valores da posição i do vetor 1 e 2 e salva no vetor 3
    for (i = 0; i < 10; i++)
    {
        vet3[i] = vet1[i] + vet2[i];
    }

    printf("\nVetor 1: ");
    for (i = 0; i < 10; i++)
    {
        printf("%3d ", vet1[i]);
    }

    printf("\nVetor 2: ");
    for (i = 0; i < 10; i++)
    {
        printf("%3d ", vet2[i]);
    }

    printf("\nVetor 3: ");
    for (i = 0; i < 10; i++)
    {
        printf("%3d ", vet3[i]);
    }

    return 0;
}

/*
    . Escrever um programa que lê um vetor N de tamanho 10
    e o imprime na tela. Em seguida, troque o 1º elemento
    com o último, o 2ª com o penúltimo, ... até o 10ª com o
    11º. Imprima o vetor N modificado.
*/

int main()
{

    int i, end = 9, copy, vector[10];

    for (i = 0; i < 10; i++)
    {
        printf("digite %d: ", i);
        scanf("%d", &vector[i]);
    }

    printf("\nVetor original: ");
    for (i = 0; i < 10; i++)
    {
        printf("%2d", vector[i]);
    }

    for (i = 0; i < 10; i++)
    {
        copy = vector[i];
        vector[i] = vector[end];
        vector[end] = copy;
        end--;
    }

    printf("\nVetor modificado: ");
    for (i = 0; i < 10; i++)
    {
        printf("%2d", vector[i]);
    }

    return 0;
}

/*
1. Faça um programa que receba a temperatura média de
cada mês do ano, armazenando-as em um
vetor. Ao final, mostre a maior e a menor temperatura do
ano e em que mês ocorreram (mostrar o
mês por extenso: janeiro, fevereiro ...). Desconsidere empates
*/
int main()
{
    int i, indiceMaior, indiceMenor;
    float menor = 99, maior = 0, temp[12];

    for (i = 0; i < 12; i++)
    {
        printf("Digite a temperatura do mes %d: ", i + 1);
        scanf("%f", &temp[i]);
    }

    for (i = 0; i < 12; i++)
    {
        if (menor > temp[i])
        {
            menor = temp[i];
            indiceMenor = i;
        }
        if (maior < temp[i])
        {
            maior = temp[i];
            indiceMaior = i;
        }
    }

    printf("A menor temperatura foi %.2f e ocorreu no mes ", menor);
    switch (indiceMenor)
    {
    case 0:
        printf("Janeiro\n");
        break;
    case 1:
        printf("Fevereiro\n");
        break;
    case 2:
        printf("Marco\n");
        break;
    case 3:
        printf("Abril\n");
        break;
    case 4:
        printf("Maio\n");
        break;
    case 5:
        printf("Junho\n");
        break;
    case 6:
        printf("Julho\n");
        break;
    case 7:
        printf("Agosto\n");
        break;
    case 8:
        printf("Setembro\n");
        break;
    case 9:
        printf("Outubro\n");
        break;
    case 10:
        printf("Novembro\n");
        break;
    case 11:
        printf("Dezembro\n");
        break;
    }

    printf("A maior temperatura foi %.2f e ocorreu no mes ", maior);
    switch (indiceMaior)
    {
    case 0:
        printf("Janeiro\n");
        break;
    case 1:
        printf("Fevereiro\n");
        break;
    case 2:
        printf("Marco\n");
        break;
    case 3:
        printf("Abril\n");
        break;
    case 4:
        printf("Maio\n");
        break;
    case 5:
        printf("Junho\n");
        break;
    case 6:
        printf("Julho\n");
        break;
    case 7:
        printf("Agosto\n");
        break;
    case 8:
        printf("Setembro\n");
        break;
    case 9:
        printf("Outubro\n");
        break;
    case 10:
        printf("Novembro\n");
        break;
    case 11:
        printf("Dezembro\n");
        break;
    }

    return 0;
}

/*
Preencher um vetor de 8 elementos inteiros. Mostrar o
vetor na horizontal com\t. Calcular a média do vetor.
Mostrar quantos números são múltiplos de 5. Quantos
números são maiores que 10 e menores que 30. Qual o
maior número do vetor.
*/
int main()
{
    int vet1[8], x, cont = 0, m5 = 0, NF = 0, MN = 0;
    float soma = 0;

    for (x = 0; x <= 7; x++)
    {
        printf("Informe um numero %d: ", x + 1);
        scanf("%d", &vet1[x]);
        printf("\n");
    }

    printf("\n\n");

    for (x = 0; x <= 7; x++)
        printf("\t%d", vet1[x]);

    printf("\n\n");

    for (x = 0; x <= 7; x++)
    {
        soma = soma + vet1[x];
        // múltiplos de 5
        if (vet1[x] % 5 == 0)
            m5++;
        // Maior que 10 e maior que 30
        if (vet1[x] > 10 && vet1[x] < 30)
            NF++;
        // maior valor
        if (vet1[x] > MN)
            MN = vet1[x];
    }
    printf(" __________________________________________");
    printf("\n| A media do vetor e: %3.2f |", soma / 8);
    printf("\n| Múltiplos de 5: %d |", m5);
    printf("\n| Entre 10 e 30: %d |", NF);
    printf("\n| Maior numero: %d |", MN);
    printf("\n|__________________________________________|");

    printf("\n\n");
    system("pause");
    return (0);
}

/*
 Faça um programa que leia 10 números reais e os
armazene em um vetor. Em seguida, leia um
código inteiro e faça uma das ações abaixo:
1 – imprime o vetor na ordem do início ao fim;
2 – imprime o vetor na ordem inversa (do fim para o
início).
3 – finaliza o programa;
O programa deve funcionar até que o usuário digite 3
para finalizar
*/

int main()
{

    int i, option;
    float vetor[10];

    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%f", &vetor[i]);
    }

    do
    {
        printf("\n1 - Imprimir vetor\n2 - Imp. vetor invertido\n3 - Finalizar");
        scanf("%d", &option);

        switch (option)
        {

        case 1:
            for (i = 0; i < 10; i++)
            {
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
            break;
        case 2:
            for (i = 9; i >= 0; i--)
            {
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
            break;
        case 3:
            printf("Finalizando...\n\n");
            break;
        default:
            printf("Opcao invalida!\n\n");
        }

    } while (option != 0);

    return 0;
}

/*
1. Faça um programa que leia 10 números inteiros,
armazene-os em um vetor, solicite um valor de referência
inteiro e: a) imprima os números do vetor que são maiores
que o valor referência b) retorne quantos números
armazenados no vetor são menores que o valor de
referência c) retorne quantas vezes o valor de referência
aparece no vetor.
*/

#include <stdio.h>

int main()
{
    int valor[10], i, ref, conta = 0, menores = 0, iguais = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Qual o %do valor?\n ", i + 1);
        scanf("%d", &valor[i]);
    }

    printf("\nEntre com o valor de referencia:\n");
    scanf("%d", &ref);

    for (i = 0; i < 10; i++)
    {
        if (valor[i] > ref)
            conta++;
        else if (valor[i] < ref)
            menores++;
        else
            iguais++;
    }

    if (ref > 0)
    {
        printf("\nOs valores maiores que a referencia sao:\n");
        for (i = 0; i < 10; i++)
        {
            if (valor[i] > ref)
            {
                printf("%d\n", valor[i]);
            }
        }
    }
    else
        printf("\nNao existem valores maiores que a referencia\n");
    if (menores > 0)
        printf("\nExistem %d valores menores que a referencia\n", menores);
    else
        printf("\nNao existem valores menores que a referencia\n");
    if (iguais > 0)
        printf("\nExistem %d valores iguais ao da referencia\n", iguais);
    else
        printf("\nNao existem valores iguais ao da referencia\n");
}

/*
: “Faça um programa que leia dez conjuntos de dois valores, o
primeiro representando o número do aluno e o segundo representando a sua
altura em metros. Encontre o aluno mais baixo e o mais alto. Mostre o número
do aluno mais baixo e do mais alto, juntamente com suas alturas”
*/

int main()
{
    int i, numeroAlunos[10], quantidadeAlturaMaior = 0, alunoMaisBaixo;
    float alturaAluno[10], alunoMaisAlto = 0, menorAltura;

    printf("- Cadastre 10 alunos\n");
    for (i = 0; i < 10; i++)
    {
        printf("Aluno %d:\n", i + 1);
        printf("Numero: ");
        scanf("%d", &numeroAlunos[i]);
        printf("Altura: ");
        scanf("%f", &alturaAluno[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            menorAltura = alturaAluno[i];
            alunoMaisBaixo = i;
        }
        if (alturaAluno[i] > alunoMaisAlto)
        {
            alunoMaisAlto = alturaAluno[i];
            quantidadeAlturaMaior = i;
        }
        if (alturaAluno[i] < menorAltura)
        {
            menorAltura = alturaAluno[i];
            alunoMaisBaixo = i;
        }
    }
    printf("Aluno mais alto:\n");
    printf("Numero: %d\n", numeroAlunos[quantidadeAlturaMaior]);
    printf("Altura: %.2f\n", alturaAluno[quantidadeAlturaMaior]);
    printf("Aluno mais baixo:\n");
    printf("Numero: %d\n", numeroAlunos[alunoMaisBaixo]);
    printf("Altura: %.2f", alturaAluno[alunoMaisBaixo]);
}

/*
: “Faça um código em c que leia um número e diga se ele é ou não
perfeito. Um número se diz perfeito se é igual à soma de seus divisores próprios.
Divisores próprios de um número positivo N são todos os divisores inteiros
positivos de N exceto o próprio N. Por exemplo, o número 6, seus divisores
próprios são 1, 2 e 3, cuja soma é igual à 6 (1 + 2 + 3 = 6). Outro exemplo é o
número 28, cujos divisores próprios são 1, 2,4, 7 e 14, e a soma dos seus
divisores próprios é 28 (1 + 2 + 4 + 7 + 14 = 28)
*/

int main()
{
    int num, sum = 0, div[1000], valor, j = 0;

    printf("Digite um numero para ver se e perfeito:\n> ");

    scanf("%d", &num);
    for (int i = num - 1; i > 0; i--)
    {
        valor = num % i;
        if (valor == 0)
        {
            div[j] = i;
            j++;
        }
    }
    for (int k = 0; k < j; k++)
    {
        sum += div[k];
        if (div[k] != 1)
        {
            printf("%d+", div[k]);
        }
        else
        {
            printf("%d", div[k]);
        }
    }
    if (sum == num)
    {
        printf("=%d \n%d e um numero perfeito.", sum, num);
    }
    else
    {
        printf("=%d \n%d nao e um numero perfeito.", sum, num);
    }
}

/*
Construa um programa que receba um número e verifique
se ele é um número triangular. (Um número é triangular
quando é resultado do produto de três números
consecutivos. Exemplo: 24 = 2×3×4)
*/

int main()
{
    int number, number1 = 1, product;

    printf("Digite um numero: ");
    scanf("%d", &number);

    product = number1 * (number1 + 1) * (number1 + 2);

    while (product < number)
    {
        number1++;
        product = number1 * (number1 + 1) * (number1 + 2);
    }
    if (product == number)
        printf("\nE triangular.");
    else
        printf("\nNao e triangular.");
    printf("\n");

    system("pause");
    return 0;
}

/*Leia dois vetores de inteiros x e y, cada um com 5
elementos (assuma que o usuário não informa elementos
repetidos). Calcule e mostre os vetores resultantes em
cada caso abaixo:
1. Soma entre x e y: soma de cada elemento de x com
o elemento da mesma posição em y.
2. Produto entre x e y: multiplicação de cada
elemento de x com o elemento da mesma posição
em y.
3. Diferença entre x e y: todos os elementos de x que
não existam em y.
4. Intersecão entre x e y: apenas os elementos que
aparecem nos dois vetores.
5. União entre x e y: todos os elementos de x, e todos
os elementos de y que não estão em x.
6. Encerrar o programa */

int main()
{

	int x[5], y[5], i, z = 0;

	for (i = 0; i < 5; i++)
	{
		printf(" Qual e o valor de x[%d]?\n", i);
		printf(">");
		scanf("%d", &x[i]);
	}

	printf("\n");
	printf("-------");
	for (i = 0; i < 5; i++)
	{
		printf(" Qual e o valor de y[%d]:\n ", i);
		printf(">");
		scanf("%d", &y[i]);
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		z = x[i] - y[i];
		printf("\nA subtracao de x e y e: %d", z);
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		z = x[i] * y[i];
		printf("\nA Multplicacao de x e y e: %d", z);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		z = x[i] + y[i];
		printf("\nA Soma de x e y e: %d", z);
	}
	printf("\n");

	printf("\n\nA interseccao entre X e Y:\n");
	for (i = 0; i < 5; i++)
	{
		for (i = 0; i < 5; i++)
		{
			if (x[i] == y[i])
			{
				printf("%d\n", x[i], y[i]);
			}
		}
	}
	printf("\n\nA uniao entre X e Y:\n");
}

/*
1. Leia um vetor de 20 posições.
a) Permita que o usuário consulte o valor armazenado a
partir de um índice.
b) Permita que o usuário consulte pelo índice quantos
valores precisar. Pare a consulta apenas quando um valor
de índice inválido for fornecido (menor que zero e maior ou
igual a 20).
c) Leia um inteiro n do usuário e o busque no vetor. Ao final,
diga se ele existe ou não existe no vetor.
d) Complemente a letra c e diga, quando o elemento existir,
quantas vezes ele foi achado.
*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int numbers[20], i = 0, option, number, index, v_exists;
  bool existe = false;

  for (i = 0; i < 20; i++)
  {
    printf("Digite o %d numero: ", i + 1);
    scanf("%d", &numbers[i]);
  }

  while (option != 3)
  {
    printf("Selecione uma operação\n");
    printf("1- Consulta um número pelo index\n");
    printf("2- Verificar se um número existe no vetor\n");
    printf("3- Sair\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
      while (index >= 0 && index < 20)
      {
        printf("Digite o index: ");
        scanf("%d", &index);
        system("cls");
        if (index >= 0 && index < 20)
        {
          printf("O valor na posição %d é %d\n\n", index, numbers[index]);
        }
        else
        {
          system("cls");
          printf("Não existe nenhum valor no vetor na posição %d\n\n", index);
        }
      }
      index = 0;
      break;

    case 2:
      printf("Digite o valor de n: ");
      scanf("%d", &number);
      for (i = 0; i < 20; i++)
      {
        if (numbers[i] == number)
        {
          existe = true;
          v_exists++;
        }
      }
      system("cls");
      if (existe)
      {
        printf("O número %d existe no vetor\n", number);
        printf("E apareceu %d vezes\n\n", v_exists);
      }
      else
      {
        printf("O número %d não existe no vetor\n\n", number);
      }
      existe = false;
      v_exists = 0;
      break;

    case 3:
      printf("Fim da operação\n");
      break;

    default:
      system("cls");
      printf("Opção invalida\n\n");
      break;
    }
  }
  return 0;
}

/*
Elabore um algoritmo que leia N números e a cada 2
posições, faça a média e armazene no outro vetor
*/

#include <stdio.h>

int main()
{
  int a[10], b[10], c[10], i = 0;

  for (i = 0; i < 10; i++)
  {
    printf("Escreva o %d numero de a: ", i + 1);
    scanf("%d", &a[i]);
  }
  printf("\n");
  for (i = 0; i < 10; i++)
  {
    printf("Escreva o %d numero de b: ", i + 1);
    scanf("%d", &b[i]);
  }
  printf("\n");

  for (i = 0; i < 10; i++)
  {
    c[i] = a[i] + b[i];
    printf("%d+%d=%d\n", a[i], b[i], c[i]);
  }

  return 0;
}

