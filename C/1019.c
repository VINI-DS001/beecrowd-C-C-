#include <stdio.h>
#include <string.h>

#define MAX 100          
typedef char TIPO_STACK; 

TIPO_STACK stack[MAX];
int top = -1;

void pop( TIPO_STACK * );
void push( TIPO_STACK  );

int main(void)
{
         char fraseOriginal[MAX], fraseInvertida[MAX];
         int i, tamanho;

         printf("\n=== Checar existencia de palindromo ===\n\n    Entre com a frase a ser checada \n(sem caracteres especiais e sem espacos) \n\nFrase: ");
         scanf("%s", fraseOriginal);

         tamanho = strlen( fraseOriginal );

         for( i = 0; i < tamanho; i++ )
                   push( fraseOriginal[i] );


          for( i = 0; i < tamanho; i++ )
                    pop( &fraseInvertida[i] );


          fraseInvertida[tamanho] = '{FONTE}';

          printf("Frase Invertida: %s", fraseInvertida);

          if( !strcmp( fraseOriginal, fraseInvertida) )
                     printf("\nResultado: Confere, palindromo existente\n\n");

          else
                     printf("\nResultado: Nao confere\n\n");

           return ( 0 );

}

void pop( TIPO_STACK *elemento )
{
          if( top == -1 ) // pilha vazia
                   printf("\npilha vazia\n");

          else {
                    *elemento = stack[top];
                    top--;
          }

}

void push( TIPO_STACK elemento )
{
          if( top == MAX ) // pilha cheia
                    printf("\npilha cheia\n");

          else {
      top++;
                    stack[top] = elemento;
          }
}