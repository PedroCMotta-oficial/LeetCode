## Entendimento do Código

O desafio da questão é dado um número qualquer ( n ), entre 1 e 150, saber qual o menor múltiplo de n e 2.

O raciocínio é basicamente que existe um loop que começa do número escolhido (i = n) até 3 vezes o número (i < 3n).

caso o número não seja múltiplo de 2 e n ao mesmo tempo, ele não faz nada.

porém, caso o número seja múltiplo de 2 e n, existirão dois casos:

	* O primeiro caso é o de o número ( i ) ser menor que uma variável (mínimo). Se for, o mínimo passa a ser o valor de ( i ).

	*Caso o número ( i ) seja maior que o valor mínimo (mínimo), o loop é interrompido.

após o loop, tudo o que resta é retornar o valor mínimo (a variável mínimo).


O código pode não estar totalmente otimizado ou preferível (por conta do break), mas é uma alternativa viável.

Esse código usa mais memória que o comum, porém, por conta da interrupção do loop, acaba se tornando um código super rápido (ainda mais se n for um número pequeno). Por isso, o código conseguiu ficar entre os mais rápidos, ultrapassando quase todos os que conseguiram resolver o desafio.