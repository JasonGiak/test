#include <stdio.h>
#include <stdlib.h>

int sum(int lab, int ergasia, int exetasi){
    int telikos;
    telikos = lab * 0.3 + ergasia * 0.2 + exetasi * 0.5;

    return telikos;
}



int main(int argc, char **argv){

if(argc != 4){
    printf("eisai malakas vale 3");
    return 0;
}

int x = atoi(argv[1]);
int y = atoi(argv[2]);
int z = atoi(argv[3]);





printf("%d",sum(x,y,z));


return 0;
}

