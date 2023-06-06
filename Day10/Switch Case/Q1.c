#include<stdio.h>

int main()
{
	int mainmenu, submenu;
	
	printf("Please select number for language: \n1. English \n2. Hindi \n3. Gujarati\n");
	scanf("%d",&mainmenu);
	
	switch(mainmenu)
	{
		case 1:
			printf("1. Recharge and Other plans \n2. New connection \n3. For current plans \n4. For talking with Customer care Executive\n");
			scanf("%d",&submenu);
				switch(submenu)
				{
					case 1:
						printf("We have sent sms of Recharge and Plans\n");
						break;
					case 2:
						printf("We have sent link for getting new connection\n");
						break;
					case 3:
						printf("We will sent you sms of your current plans shortly\n");
						break;
					case 4:
						printf("Please wait while we connect the call with customer care executive\n");
						break;
					default:
						printf("Invalid selection!");
						break;
				}
			break;
		case 2:
			printf("1. Recharge and Other plans \n2. New connection \n3. For current plans \n4. For talking with Customer care Executive\n");
			scanf("%d",&submenu);
				switch(submenu)
				{
					case 1:
						printf("We have sent sms of Recharge and Plans\n");
						break;
					case 2:
						printf("We have sent link for getting new connection\n");
						break;
					case 3:
						printf("We will sent you sms of your current plans shortly\n");
						break;
					case 4:
						printf("Please wait while we connect the call with customer care executive\n");
						break;
					default:
						printf("Invalid selection!");
						break;
				}
			break;
		case 3:
			printf("1. Recharge and Other plans \n2. New connection \n3. For current plans \n4. For talking with Customer care Executive\n");
			scanf("%d",&submenu);
				switch(submenu)
				{
					case 1:
						printf("We have sent sms of Recharge and Plans");
						break;
					case 2:
						printf("We have sent link for getting new connection");
						break;
					case 3:
						printf("We will sent you sms of your current plans shortly");
						break;
					case 4:
						printf("Please wait while we connect the call with customer care executive");
						break;
					default:
						printf("Invalid selection!");
						break;
				}
		break;
		default:
			printf("Invalid selection!!");
			break;
	}
	
	return 0;
}
