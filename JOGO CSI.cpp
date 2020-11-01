#include <stdio.h>
main ()
{
	int cont,p1,p2,p3,p4,p5;
	int sim=0;
	do
	{
		printf ("Telefonou para a vitima? (1-Sim/2-Nao)");
		scanf("%d",&p1);
		if (p1==1)
		{
			sim++;
		}
		printf("Esteve no local do crime? (1-Sim/2-Nao)");
		scanf("%d",&p2);
		if (p2==1)
		{
			sim++;
		}
		printf("Mora perto da vitima? (1-Sim/2-Nao)");
		scanf("%d",&p3);
		if (p3==1)
		{
			sim++;
		}
		printf("Devia para a vitima? (1-Sim/2-Nao)");
		scanf("%d",&p4);
		if (p4==1)
		{
			sim++;
		}
		printf("Ja estudou com a vitima? (1-Sim/2-Nao)");
		scanf("%d",&p5);
		if (p5==1)
		{
			sim++;
		}
			else if (sim==2)
			{
				printf("SUSPEITA.\n");
			}
			else if (sim==3||sim==4)
			{
				printf("CUMPLICE.\n");
			}
			else if (sim==5)
			{
				printf("ASSASSINO.\n");
			}
			else if (sim==1||sim==0)
			{
				printf("INOCENTE.\n");
			}
		printf("Deseja continuar? (1-Sim/2-Nao)");
		scanf("%d",&cont);
	}while (cont!=2);
}
