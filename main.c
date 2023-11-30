#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	char name[100];
	float score;	
};

int main(int argc, char *argv[]) {
	struct student s1 = {123, "MinSeo", 4.3};
	
	return 0;
}
