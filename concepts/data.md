# Tipo de dado

Define o conjunto de valores (domínio) que uma variável pode assumir.

Exemplo

- `int -> -2, -1, 1, 0, 2`

# Estrutura de dados

Trata-se de um relacionamento lógico entre tipos de dados.

Exemplo

- `struct` -> `float`, `char`, `int`... Todos juntos em uma estrutura.

# TAD - Tipo Abstrato de dados

Tipos abstratos de dados ou "TAD", incluem as operações para manipulação dos dados.

Exemplo

- Criação da estrutura, inclusão de um elemento, remoção de um elemento, acesso a um elemento.

Vantagens:

- Encapsulamento e segurança: usuário não tem acesso direto aos dados.
- Flexibilidade e reutilização: podemos alterar um "TAD" sem alterar as aplicações que o utilizam.

- Exemplo de TAD: arquivos em C.
  - `FILE* f;`
  - Os dados de "f" somente podem ser acessados pelas funções de manipulação do tipo:
    - `fopen()`
    - `fclose()`
    - `fputc()`
    - `fgetc()`
    - `feof()`

# Convenções em C

A convenção em linguagem C é preparar dois arquivos para implementar um "TAD".

- Arquivo ".h": protótipos das funções, tipos de ponteiro, dados globalmente acessíveis.
- Arquivo ".c": declaração do tipo de dados e implementação das suas funções.

Assim separamos o "conceito" (definição do tipo) de sua "implementação".
