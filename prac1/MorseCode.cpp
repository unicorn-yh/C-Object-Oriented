#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    /*static const char* morse_code[]= {'.-','-...','-.-.','-..','.','..-.','--.','....','..','.---',
    '-.-','.-..','--','-.','---','.--.','--.-','.-.','...','-',
    '..-','...-','.--','-..-','-.--','--..','.-.-.-'};*/
    static const char *morse_code[] = {
        ".-",   //A
        "-...", //B
        "-.-.", //C
        "-..",  //D
        ".",    //E
        "..-.", //F
        "--.",  //G
        "....", //H
        "..",   //I
        ".---", //J
        "-.-",  //K
        ".-..", //L
        "--",   //M
        "-.",   //N
        "---",  //O
        ".--.", //P
        "--.-", //Q
        ".-.",  //R
        "...",  //S
        "-",    //T
        "..-",  //U
        "...-", //V
        ".--",  //W
        "-..-", //X
        "-.--", //Y
        "--..", //Z
    };
    char message[50],c; 
    int dif=0,size=0;
    scanf("%s",message);
    for(int i=0;i<sizeof(message),message[i]!='\0';i++){
        c=message[i];
        if (isspace(c)) printf(" ");
        else if(isalpha(c)){
            dif=int(toupper(message[i]))-'A';
            printf("%s ",morse_code[dif]);
        } 
    }
    printf(".-.-.-");
    return 0;
}
