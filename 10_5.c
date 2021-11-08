#include <stdio.h>
#define N 255


typedef struct Mountain {
    char name[255];
    double height;
} Mountain;


void inputMountain(Mountain* m) {
    printf("\nName: ");
    scanf("%s", &m->name);
    printf("Max height: ");
    scanf("%lf", &m->height);
}


void printMountain(Mountain m) {
    printf("\n%s - %gm", m.name, m.height);
}


Mountain HighestMountain(Mountain mountains[N], unsigned n) {
    int max_i = 0, max_height = 0;
    for (unsigned i = 0; i<n; i++) {
        if (max_height < mountains[i].height) {
            max_i = i;
            max_height = mountains[i].height;
        }
    }
    return mountains[max_i];
}


void FindMountain(char name[N], Mountain mountains[N], unsigned n) {
    int flag;
    for (unsigned i = 0; i<n; i++) {
        if (strcmp(mountains[i].name, name)==0) {
            printMountain(mountains[i]);
            flag = 1;
        }
    }
    if (flag == 0) printf("\nThere are no mountains with such a name!");
}


int main() {
    Mountain mountains[N], highest_m;
    char name[N];
    unsigned n;
    printf("n = ");
    scanf("%d", &n);
    for (unsigned i = 0; i<n; i++) {
        inputMountain(&mountains[i]);
    }
    highest_m = HighestMountain(mountains, n);
    printf("\nHighest mountain:");
    printMountain(highest_m);
    printf("\nFind by name: ");
    scanf("%s", &name);
    FindMountain(name, mountains, n);
}
