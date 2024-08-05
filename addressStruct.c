//struct pq
#include<stdio.h>
struct address {
	int houseNo;
	int blockNo;
	char city[50];
	char state[50];
};
void printAddress(struct address add);
int main(){
	struct address adds[5];
	printf("Enter address 1 : \n");
	scanf("%d",&adds[0].houseNo);
	scanf("%d",&adds[0].blockNo);
	scanf("%s",adds[0].city);
	scanf("%s",adds[0].state);
 

	printf("Enter address 2 : \n");
	scanf("%d",&adds[1].houseNo);
	scanf("%d",&adds[1].blockNo);
	scanf("%s",adds[1].city);
	scanf("%s",adds[1].state);


	printf("Enter address 3 : \n");
	scanf("%d",&adds[2].houseNo);
	scanf("%d",&adds[2].blockNo);
	scanf("%s",adds[2].city);
	scanf("%s",adds[2].state);


	printf("Enter address 4 : \n");
	scanf("%d",&adds[3].houseNo);
	scanf("%d",&adds[3].blockNo);
	scanf("%s",adds[3].city);
	scanf("%s",adds[3].state);


	printf("Enter address 5 : \n");
	scanf("%d",&adds[4].houseNo);
	scanf("%d",&adds[4].blockNo);
	scanf("%s",adds[4].city);
	scanf("%s",adds[4].state);

//print address  by function ... 
	printAddress(adds[0]);
	printAddress(adds[1]);
	printAddress(adds[2]);
	printAddress(adds[3]);
	printAddress(adds[4]);
	return 0;
}
void printAddress(struct address add){
	printf("%d %d %s %s\n",add.houseNo,add.blockNo,add.city,add.state);
}