#include <stdio.h>
#define MAXLINE 1000  //massima lunghezza di una riga di input

int max;              //lunghezza massima riscontrata finora
char line[MAXLINE];   //riga corrente
char longest[MAXLINE];//contiene la riga più lunga trovata

int get(void);
void copy(void);

/* visualizza la riga più lunga del testo in ingresso;
versione specializzata */
int main()
{
    int len;
    extern int max;
    extern char longest[];
    max = 0;
    while((len = get()) > 0)
        if(len > max){
        max = len;
        copy();
    }
    if(max > 0) //c'era almeno una riga in ingresso
        printf("%s", longest);
    return 0;
}

//getline: versione specializzata
int get(void)
{
    int c, i;
    extern char line[];

    for(i = 0; i < MAXLINE-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if(c == '\n'){
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

//copy: versione specializzata
void copy(void)
{
    int i;
    extern char line[], longest[];

    i = 0;
    while((longest[i] = line[i])!= '\0')
        ++i;
}
