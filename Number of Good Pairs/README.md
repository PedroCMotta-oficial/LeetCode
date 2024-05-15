## Raciocínio da questão


Basicamente o comando da questão diz que é preciso contar a quantidade de pares perfeitos que existem em um vetor.

Por conta disso, basta criar dois loops. O primeiro é lento que vai de (i = 0) até o tamanho do vetor. O segundo é o loop rápido que vai de (i+1) até o tamanho do vetor. Caso o número do vetor do loop lento por igual ao número do vetor do loop rápido, a quantidade de pares perfeitos aumenta em um.

o final, basta retornar o valor da quantidade de pares.