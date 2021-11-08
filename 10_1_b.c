#include <stdio.h>


struct ChessPos {
    char pos[2];
};


void inputPos(struct ChessPos *figure) {
    printf("Position: ");
    scanf("%s", &figure->pos);
}


void printPos(struct ChessPos figure) {
    printf("Position is %s", figure.pos);
}


int main() {
    struct ChessPos horse;
    inputPos(&horse);
    printPos(horse);
}
