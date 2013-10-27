
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	typedef struct peewee
	{
		char *prenom;
		char *nom;
		unsigned short age;
		int no;
	} ble, dinde;

	struct myStruct
	{
		char *prenom;
		char *nom;
		unsigned short age;
	} gtg;

	struct myStruct so;
	//so.no = 7;
	so.age = 10;
	so.prenom = "Bobe";
	so.nom = "Popolich";

	ble mon_ble;

	gtg.age = 93;
	mon_ble.nom = "jimi";

	//system("COLOR 6C");
	//system("ls -l");
	printf("\033[22;31mHello, world!");

	//int i;
	for(int i = 0;i < argc; i++)
	{
		printf("nbr argc: %d\n", i);
		printf("nbr argv[]: %s\n", argv[i]);
	}

	printf("\nDecimal: %d\nFloat: %15.15f\nOctale: %o\nHexadecimal: %010d\n", 57, 57.0, 57, 'A');

	printf("%s %s, %d, %d, %s", so.prenom, so.nom, so.age, gtg.age, mon_ble.nom);
	printf("\033[22;31mHello, world!");

	return 0;
}





