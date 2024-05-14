## Raciocínio da resposta

O raciocínio é criar um loop que vai de 1 até n (i = 1; i<=n) (não excluindo n).

Para cada valor de ( i ) o programa vai passar por dois casos: se é divisível ou não-divisível. Nos dois casos, o valor de ( i ) é somado ao valor de Divisíveis e Não-Divisíveis, respectivamente (os valores se iniciam em 0).

Ao final do loop, é retornado o valor dos Não-Divisíveis - Divisíveis


Não foi preciso o uso de break, e mesmo assim o tempo de resposta foi menor que o de quase todos os que conseguiram resolver o desafio