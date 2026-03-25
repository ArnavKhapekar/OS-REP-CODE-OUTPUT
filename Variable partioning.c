#include <stdio.h>
int main() {
int blocks[5] = {100, 500, 200, 300, 600};
int processes[4] = {212, 417, 112, 426};
int i, j;
for(i = 0; i < 4; i++) {
for(j = 0; j < 5; j++) {
if(blocks[j] >= processes[i]) {
printf("Process %d allocated to Block %d\n", i+1, j+1);
blocks[j] -= processes[i];
break;
}
}
if(j == 5)

10

printf("Process %d not allocated\n", i+1);
}
return 0;
}
