# Determinante de uma matriz.

Código feito para achar um determinante de matrizes de ordem 1, 2 e 3.

**Utilizado o método de Sarrus**

---

### Para entender como é feito o cálculo do determinante com a regra de Sarrus, considere a seguinte matriz A de ordem 3:

![Matriz Ordem 3](https://github.com/xBigJhow/Determinante_Matriz/blob/main/images/Matriz%20Ordem%203.png)

Inicialmente, as duas primeiras colunas são repetidas à direita da matriz A:

![Matriz Ordem 3 duplicada](https://github.com/xBigJhow/Determinante_Matriz/blob/main/images/Matriz%20Ordem%203_duplicada.png)

Em seguida, os elementos da diagonal principal são multiplicados. Esse processo deve ser feito também com as diagonais que estão à direita da diagonal principal para que seja possível somar os produtos dessas três diagonais:


![Diagonal Principal](https://github.com/xBigJhow/Determinante_Matriz/blob/main/images/Diagonal%20Principal.png)

O mesmo processo deve ser realizado com a diagonal secundária e as demais diagonais à sua direita. Entretanto, é necessário subtrair os produtos encontrados:

![Diagonal Secundaria](https://github.com/xBigJhow/Determinante_Matriz/blob/main/images/Diagonal%20Secundária.png)

---

## Programa retornando o valor do determinante de uma matriz ordem 3.

![Programa](https://github.com/xBigJhow/Determinante_Matriz/blob/main/images/determinante_matriz_programa_cpp.png)

