#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    dale
            {
                printf("\nPONTUACAO ATUAL: %d\n", pontuacao);
                // Imprime o numero do Arquimedes e do Jogador
                printf("\nNUMERO DE ARQUIMEDES: %d\n", arquimedes);
                printf("\nSEUS NUMEROS ATUAIS: ");

                for (i = 0; i < qtd_numeros; i++)
                {
                    printf("%d ", numeros_jogador[i]);
                }

                printf("\n\nSelecione uma opcao:\n\n1) JOGAR\n2) PULAR (-1)\n0) SAIR\n\n--> ");
                scanf(" %d", &opcao);

                printf("\n");
            } while (opcao < 0 || opcao > 2);

            // Opcao 1: Jogar
            if (opcao == 1)
            {
                // Verifica se o jogador nao jogara numeros iguais
                do
                {
                    printf("\nDigite 1, 2, 3, 4 ou 5 para o primeiro numero que deseja jogar: \n\n");
                    for (i = 0; i < qtd_numeros; i++)
                    {
                        printf("%d) %do numero\n", i + 1, i + 1);
                    }
                    printf("\n--> ");
                    scanf(" %d", &primeiro);

                    printf("Digite 1, 2, 3, 4 ou 5 para o segundo numero que deseja jogar: \n\n");
                    for (i = 0; i < qtd_numeros; i++)
                    {
                        printf("%d) %do numero\n", i + 1, i + 1);
                    }
                    printf("\n--> ");
                    scanf(" %d", &segundo);
                } while (primeiro == segundo);

                printf("\nDigite o numero da operacao desejada:\n1) +\n2) -\n3) *\n4) /\n\n--> ");
                scanf(" %d", &operacao);

                if (operacao == 1)
                {
                    resultado = numeros_jogador[primeiro - 1] + numeros_jogador[segundo - 1];
                }
                else if (operacao == 2)
                {
                    resultado = numeros_jogador[primeiro - 1] - numeros_jogador[segundo - 1];
                }
                else if (operacao == 3)
                {
                    resultado = numeros_jogador[primeiro - 1] * numeros_jogador[segundo - 1];
                }
                else if (operacao == 4)
                {
                    resultado = numeros_jogador[primeiro - 1] / numeros_jogador[segundo - 1];
                }

                if (resultado == arquimedes)
                {
                    printf("VOCE ACERTOU E GANHOU 2 PONTOS!\n");
                    pontuacao += 2;
                }
                else
                {
                    printf("VOCE ERROU E PERDEU 2 PONTOS E 1 VIDA!\n");
                    pontuacao -= 2;
                    vidas -= 1;
                }
            }

            // Opcao 2: Pular
            if (opcao == 2)
            {
                pontuacao -= 1;
            }

            // Opcao 0: Sair
            if (opcao == 0)
            {
                printf("\n\n==========================\n");
                printf("\nJOGO FINALIZADO\n");
                printf("\nSua pontuacao: %d\n", pontuacao);
                printf("Rodadas jogadas: %d\n", rodadas);
                printf("\n==========================\n\n");
                return 0;
            }

            rodadas++;
        }

        printf("\n\n==========================\n");
        printf("\nJOGO FINALIZADO\n");
        printf("\nSua pontuacao: %d\n", pontuacao);
        printf("Rodadas jogadas: %d\n", rodadas);
        printf("\n==========================\n\n");
    }
    else if (opcao == 2)
    {
        int voltar;
        do
        {
            printf("\nREGRAS DO JOGO:\n");
            printf("1. Voce deve tentar igualar o numero de Arquimedes usando operacoes matematicas com os numeros fornecidos.\n");
            printf("2. Voce pode somar, subtrair, multiplicar ou dividir dois numeros de sua escolha.\n");
            printf("3. Se acertar, ganha 2 pontos. Se errar, perde 2 pontos e uma vida.\n");
            printf("4. Voce pode pular uma rodada, mas perdera 1 ponto.\n");
            printf("5. O jogo termina quando voce perde todas as vidas ou atinge 10 pontos.\n");
            printf("\nDigite 1 para voltar ao menu principal.\n");
            scanf(" %d", &voltar);
        } while (voltar != 1);

        // Reseta opcao para mostrar o menu de novo
        opcao = 0;
        main();
    }

    return 0;
}
