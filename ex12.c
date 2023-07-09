int afimb(char *a, char *b)
{
    int lenA = strlen(a);
    int lenB = strlen(b);
    
    if(lenA > lenB)
    {
        return 0;
    }
    
    int i = lenA - 1; //começa no ultimo caractere de A
    int j = lenB - 1;//começa no ultimo caractere de B
    
    while (i >= 0 && a[i] == b[j]) //continua no loop enquanto os caracteres sao iguais
    {
        i--;
        j--;
    }

    
    if (i < 0) //loop completamente percorrido
    {
        return 1; // A está contida no final de B, todos os caracteres foram verificados 
    } else //foi encontrada uma diferença ou ja percorremos todo A e nao encontramos B ainda
    {
        return 0; // A não está contida no final de B
    }
    
    return 0;
    
}
