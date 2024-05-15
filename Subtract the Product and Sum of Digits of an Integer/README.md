## Raciocínio Lógico da solução


Bem simples de se fazer (e eu também já tinha feito algo parecido hj)

Basicamente é só criar duas variáveis, uma para a soma e outra para a multiplicação
	O cuidado deve estar que a variável da multiplicação se inicia com 1, porque qualquer número multiplicado por zero é zero, e isso daria erro no código.
	Outro cuidado é que a soma tem que iniciar com 0

A forma mais fácil é criar um loop que não para até o número dado não chegar a zero e ir atualizando as variáveis em cada loop.

A chave da solução é que (apenas em computadores, n%10 sempre da o primeiro dígito do número) basta diminuir o valor dado pelo seu primeiro dígito e depois dividir por 10.
	Ao diminuir o número pelo seu primeiro dígito, o final fica 0, e é possível diminuir esse número dividindo-o por 10, para que o próximo loop seja perfeito também

No final, basta retornar o valor da multiplicação menos a soma, como é pedido

Mesmo com diversas contas, ainda dá o resultado em 0ms