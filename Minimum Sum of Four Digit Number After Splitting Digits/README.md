## Raciocínio Lógico por trás do código


* Recomendável analisar minuciosamente o código para entender melhor.

Esse exercício é bem bem bem trabalhoso. 
E o mais engraçado é que o meu código que tem muito mais linhas é muito mais rápido que outros de pouquíssimas linhas.

Basicamente qual foi a minha linha de raciocínio. Colocar cada dígito do número dado em um vetor e depois ordenar esse vetor para que os menores números estejam sempre nas casas 0 e 1.

Depois de ordenar o vetor da forma que eu quero, eu só preciso pegar os (menores valores * 2) e os maiores e somá-los.

Não tem muito como explicar por palavras, olhar é muito melhor.


Um código bem pequeno que usava sort demorava 2ms, já o meu demora apenas 0ms.