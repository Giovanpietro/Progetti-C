#include <stdio.h>
#define MAXLINE 1000 //massima lunghezza di una riga di input

int get(char line[], int maxline);
void copy(char to[], char from[]);

//visualizza la riga più lunga del testo in ingresso
int main()
{
    int len; //lunghezza della riga corrente
    int max; //lunghezza massima riscontrata finora
    char line[MAXLINE]; //riga corrente
    char longest[MAXLINE]; //contiene la riga più lunga trovata

    max = 0;
    while((len = get(line, MAXLINE)) > 0)
        if(len > max){
            max = len;
            copy(longest, line);
        }
        if(max > 0) //c'era almeno una riga in ingresso
            printf("%s", longest);
        return 0;
}

/* getline: legge una riga in ingresso, la assegna a s, ne restutuisce
la lunghezza */
int get(char s[], int lim){

    int c, i;

    for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i]=c;
        if(c == '\n'){
            s[i]=c;
            ++i;
        }

        s[i] = '\0';
        return i;
}
/* copy: copia la stringa 'from' sulla stringa 'to'; assume che 'to' sia
sufficientemente lunga */

void copy(char to[], char from[]){

    int i;

    i=0;
    while((to[i] = from[i]) != '\0')
        ++i;
}
