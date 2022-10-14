/*
    Miguel Esteban Martinez Villegas #12 3D
    14/10/2022
*/

#include <bits/stdc++.h>
using namespace std;

string myName = "Miguel Esteban Martinez Villegas";

char mayuscula(char c){
    //El "break;" es redundante porque ya estamos saliendo de la funcion con el return
    //pero bueno, asi lo pide
    switch(c){
        case 'a':
            return 'A';
            break;
        case 'b':
            return 'B';
            break;
        case 'c':
            return 'C';
            break;
        case 'd':
            return 'D';
            break;
        case 'e':
            return 'E';
            break;
        case 'f':
            return 'F';
            break;
        case 'g':
            return 'G';
            break;
        case 'h':
            return 'H';
            break;
        case 'i':
            return 'I';
            break;
        case 'j':
            return 'J';
            break;
        case 'k':
            return 'K';
            break;
        case 'l':
            return 'L';
            break;
        case 'm':
            return 'M';
            break;
        case 'n':
            return 'N';
            break;
        case 'o':
            return 'O';
            break;
        case 'p':
            return 'P';
            break;
        case 'q':
            return 'Q';
            break;
        case 'r':
            return 'R';
            break;
        case 's':
            return 'S';
            break;
        case 't':
            return 'T';
            break;
        case 'u':
            return 'U';
            break;
        case 'v':
            return 'V';
            break;
        case 'w':
            return 'W';
            break;
        case 'x':
            return 'X';
            break;
        case 'y':
            return 'Y';
            break;
        case 'z':
            return 'Z';
            break;
        default:
            return c;
            break;
    }
}

char minuscula(char c){
    //"break;" redundante otra vez
    switch(c){
        case 'A':
            return 'a';
            break;
        case 'B':
            return 'b';
            break;
        case 'C':
            return 'c';
            break;
        case 'D':
            return 'd';
            break;
        case 'E':
            return 'e';
            break;
        case 'F':
            return 'f';
            break;
        case 'G':
            return 'g';
            break;
        case 'H':
            return 'h';
            break;
        case 'I':
            return 'i';
            break;
        case 'J':
            return 'j';
            break;
        case 'K':
            return 'k';
            break;
        case 'L':
            return 'l';
            break;
        case 'M':
            return 'm';
            break;
        case 'N':
            return 'n';
            break;
        case 'O':
            return 'o';
            break;
        case 'P':
            return 'p';
            break;
        case 'Q':
            return 'q';
            break;
        case 'R':
            return 'r';
            break;
        case 'S':
            return 's';
            break;
        case 'T':
            return 't';
            break;
        case 'U':
            return 'u';
            break;
        case 'V':
            return 'v';
            break;
        case 'W':
            return 'w';
            break;
        case 'X':
            return 'x';
            break;
        case 'Y':
            return 'y';
            break;
        case 'Z':
            return 'z';
            break;
        default:
            return c;
            break;
    }
}

int main(){
    int i = 0;
    while(i < myName.length()){
        if(myName[i] == 'a' || myName[i] == 'e' || myName[i] == 'i' || myName[i] == 'o' || myName[i] == 'u') myName[i] = mayuscula(myName[i]);
        else if(!(myName[i] == 'A' || myName[i] == 'E' || myName[i] == 'I' || myName[i] == 'O' || myName[i] == 'U')) myName[i] = minuscula(myName[i]);
        i++;
    }
    cout << myName << '\n';
}