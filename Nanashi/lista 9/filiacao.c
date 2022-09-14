struct tipoFiliacao {
    char nome[80];
    char nomeMae[80];
    char nomePai[80];
};

struct tipoFiliacao separaLinhaCSV(char linha[240]) {

    struct tipoFiliacao pessoa;

    // A.
    int i = 0;
    for (; linha[i] != ','; i++ ) pessoa.nome[i] = linha[i];
    pessoa.nome[i] = '\0';

    // B.
    int j = i+1;
    int a = 0;
    for ( a = 0; linha[j] != ','; j++, a++ ) pessoa.nomeMae[a] = linha[j];
    pessoa.nomeMae[a] = '\0';

    // C.
    int k = j+1;
    int b = 0 ;
    for (; linha[k] != '\0'; k++, b++ ) pessoa.nomePai[b] = linha[k];
    pessoa.nomePai[b] = '\0';

    return pessoa;


}