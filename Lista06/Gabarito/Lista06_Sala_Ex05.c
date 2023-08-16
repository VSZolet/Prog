/*
a)
Se a �nica tarefa � imprimir os valores, n�o � preciso um vetor. Podemos
fazer da seguinte forma:

repete N vezes:
	l� um n�mero
	se o n�mero estiver nos limites da faixa
		mostra o n�mero

b)
Se s� queremos saber a soma total, n�o precisamos de um vetor. Podemos usar
a velha t�cnica do acumulador: iniciamos uma vari�vel em 0 e somamos a ela
cada um dos valores da sequ�ncia.

c)
Ainda n�o conhecemos um algoritmo para ordenar valores, mas j� fizemos
exerc�cios que envolviam colocar 3 valores lidos em ordem. Pense agora em
um algoritmo para 4 valores. Note que se formos lendo os valores um a um,
no momento em que um valor � lido, ainda n�o sabemos se ele � menor ou
maior que o pr�ximo valor, ou seja, n�s sempre precisamos conhecer todos
os valores antes de poder escrev�-los em ordem. Como fazer isso com N
vari�veis seria invi�vel, a solu��o deve envolver vetores, de alguma forma.

d)
N�o precisamos de um vetor. Podemos armazenar em uma vari�vel o menor
elemento, e ir atualizando esta vari�vel conforme os valores s�o lidos.
Algo assim:

menor = o maior n�mero poss�vel, ou o primeiro elemento de entrada
para cada elemento de entrada
	l� um n�mero
	se o n�mero � menor que o menor
		menor = n�mero
no fim, a vari�vel menor cont�m o menor n�mero

e)
N�o precisamos de um vetor. Podemos armazenar os dois menores valores, e
ir atualizando estas vari�veis conforme os valores s�o lidos. Algo assim:

menor1 = o maior n�mero poss�vel
menor2 = o maior n�mero poss�vel
para cada elemento de entrada
	l� um n�mero
	se o n�mero � menor que menor1
		menor2 = menor1
		menor1 = n�mero
	sen�o, se o n�mero � menor que menor2
		menor2 = n�mero
no fim, menor1 � o menor n�mero, menor2 o segundo menor

Repare que isso funciona bem para o segundo menor elemento, mas n�o para
o n-�simo menor elemento. Se queremos o n-�simo menor elemento, precisamos
lembrar de todos os n menores elementos da sequ�ncia, e quanto maior for o
n, mais desajeitada ser� a solu��o. Neste caso, precisar�amos de um vetor.

Solu��o Prof. Bogdan.
*/
