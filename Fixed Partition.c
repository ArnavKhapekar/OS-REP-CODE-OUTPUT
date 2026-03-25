#include <stdio.h>
int main() {
int partitions[5] = {100, 200, 300, 400, 500};
int processes[5] = {90, 210, 150, 380, 600};
int i, j, allocated[5] = {0};
int internal_frag = 0;

for(i = 0; i < 5; i++) {
for(j = 0; j < 5; j++) {
if(!allocated[j] && partitions[j] >= processes[i]) {
allocated[j] = 1;
internal_frag += partitions[j] - processes[i];
printf("Process %d allocated to Partition %d\n", i+1, j+1);
break;

9

}
}
if(j == 5)

printf("Process %d not allocated\n", i+1);
}
printf("Total Internal Fragmentation = %d\n", internal_frag);
return 0;
}
