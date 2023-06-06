#include<stdio.h>

int main()
{
	int mainmenu, submenu;
	
	printf("Please select number for language: \n1. English \n2. Hindi \n3. Gujarati\n");
	scanf("%d",&mainmenu);
	
	switch(mainmenu)
	{
		case 1:
			printf("1. For ticket booking \n2. For knowing status of booked ticket \n3. For knowing location of bus \n4. For talking with Customer care Executive\n");
			scanf("%d",&submenu);
				switch(submenu)
				{
					case 1:
						printf("We have sent sms for booking tickets online\n");
						break;
					case 2:
						printf("We have sent link for getting the status of booked ticket\n");
						break;
					case 3:
						printf("We will sent location in the sms shortly\n");
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
			printf("1. For ticket booking \n2. For knowing status of booked ticket \n3. For knowing location of bus \n4. For talking with Customer care Executive\n");
			scanf("%d",&submenu);
				switch(submenu)
				{
					case 1:
						printf("We have sent sms for booking tickets online\n");
						break;
					case 2:
						printf("We have sent link for getting the status of booked ticket\n");
						break;
					case 3:
						printf("We will sent location in the sms shortly\n");
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
			printf("1. For ticket booking \n2. For knowing status of booked ticket \n3. For knowing location of bus \n4. For talking with Customer care Executive\n");
			scanf("%d",&submenu);
				switch(submenu)
				{
					case 1:
						printf("We have sent sms for booking tickets online\n");
						break;
					case 2:
						printf("We have sent link for getting the status of booked ticket\n");
						break;
					case 3:
						printf("We will sent location in the sms shortly\n");
						break;
					case 4:
						printf("Please wait while we connect the call with customer care executive\n");
						break;
					default:
						printf("Invalid selection!");
						break;
				}
		default:
			printf("Invalid selection!!");
			break;
	}
	
	return 0;
}
