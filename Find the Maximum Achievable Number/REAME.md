## Raciocínio do código

Essa questão realmente é meio estranha de se entender. Porém, se torna muito fácil.

Basicamente a questão quer saber um número x que diminuido de 1 em 1 por t vezes chega em num. Porém, ao diminuir o x, o num deverá ser aumentado.

Essa questão se torna muito fácil porque da pra perceber que (t^2) sempre vai ser o número de diminuições e aumentos feitos para x e num serem iguais. Essa conclusão se chega com os exemplos. 

Dessa forma, para achar o número x, basta retornar num + (t^2).