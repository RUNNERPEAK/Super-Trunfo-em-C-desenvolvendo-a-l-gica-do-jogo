# Super-Trunfo-em-C-desenvolvendo-a-l-gica-do-jogo

SUPER TRUNFO DE PAÍSES

Consiste em um código básico feito em C, onde permite que o usuário faça a comparação de diferentes atributos como, PIB, população, densidade demográfica, área e número de pontos turísticos. A densidade é calculada de forma automática pelo sistema, no final os dados que foram inseridos pelo jogar são mostrados de forma organizada, dando ao mesmo a opção de fazer a comparação entre dois atributos escolhidos. O país que fazer uma maior pontuação (resultante da soma do valor dos atributos escolhidos para comparação), será o vencedor da rodada, sendo mostrado quantos pontos o vencedor fez, e quantos pontos o perdedor fez.


INSTRUÇÕES

1. O programa solicitará que o jogador dê entrada em alguns dados para poder cadastrar o país que você utilizará no jogo (são duas cartas a serem cadastradas).

2. Após isso, será exibido as duas cartas, com seus respectivos atributos já devidamente calculados e corretos. Então temos a opção do menu interativo, onde é possível escolher dois atributos que o jogador tenha a intenção de fazer o comparativo.

3. Com os dois atributos escolhidos, será exibido qual carta ganhou em cada atributo, e qual das duas fez uma maior pontuação, ganhando assim a rodada.

------------------------------------------------------------------------------------------------------------------------


    • O usuário inserirá as cartas a serem comparadas.
    • O sistema exibirá os resultados das comparações, indicando a carta vencedora em cada propriedade.
    • Interface básica e linhas comentadas para melhor compreensão.
    • Caso não esteja no GitHub irá ser necessário um compilador C para executar o programa ( como o MinGW ).
    • Caso esteja no GitHub é possível utilizar o espaço do Codespace para execução e depuração do código.
      
EXEMPLO :
Digite o nome do país.
Brasil
Qual é a populção que esse país possui?
211000000
Qual a área do país em km²?
8515767
Qual o PIB do país (em bilhões de reais)?
2200.0
Quantos pontos turísticos tem nesse país?
1200

Digite o nome do país.
Argentina
Qual é a populção que esse país possui?
45000000
Qual a área do país em km²?
2780400
Qual o PIB do país (em bilhões de reais)?
600.0
Quantos pontos turísticos tem nesse país?
800

-> DADOS DO PRIMEIRO PAÍS CADASTRADO <-
Nome do país: Brasil.
População do país: 211000000 habitantes.
Área do país: 8515767.00 km².
PIB: R$2200.00 bilhões de reais.
Número de pontos turísticos: 1200.
Densidade demográfica: 24.78 hab/km².

-> DADOS DO SEGUNDO PAÍS CADASTRADO <-
Nome do país: Argentina.
População do país: 45000000 habitantes.
Área do país: 2780400.00 km².
PIB: R$600.00 bilhões de reais.
Número de pontos turísticos: 800.
Densidade demográfica: 16.18 hab/km².

ESCOLHA AQUILO QUE DESEJA COMPARAR
1. Comparar a população entre as cartas.
2. Comparar a área das cartas.
3. Comparar o PIB das cartas.
4. Comparar a quantia de pontos turísticos das cartas.
5. Comparar a densidade demográfica das cartas.
0. Sair do menu.

Escolha o primeiro atributo para comparação: 1
Escolha o segundo atributo para comparação: 2

Brasil é mais populoso com 211000000 habitantes, enquanto Argentina possui 45000000 habitantes.
A carta 1 (Brasil) ganhou!
Brasil possui uma área de 8515767.00 km², enquanto Argentina possui apenas 2780400.00 km².
A carta 1 (Brasil) ganhou!

->Pontuações finais <-
Pontuação do país Brasil: 211000000.000000 pontos.
Pontuação do país Argentina: 45000000.000000 pontos.
Brasil venceu!

