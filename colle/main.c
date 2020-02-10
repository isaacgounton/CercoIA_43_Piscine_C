#include <stdio.h>
#include <stdlib.h>
#include "colle.h"

int     main()
{
    int     choice;

    do
    {
        printf("\n\n             \xDB|--------------- ####### MENU OF COLLE ####### ------|\xDB\n              \xDB                                                              \xDB\n            \xDB                                                              \xDB");
        printf("\n             \xDB|                  1:COLLE 01                        |\xDB\n             \xDB                                                              \xDB");
        printf("\n             \xDB|                  2:COLLE 02                        |\xDB\n             \xDB                                                              \xDB");
        printf("\n             \xDB|                  3:COLLE 03                        |\xDB\n             \xDB                                                              \xDB");
        printf("\n             \xDB|                  4:COLLE 04                        |\xDB\n             \xDB                                                              \xDB");
        printf("\n             \xDB|                  5:COLLE 05                        |\xDB\n             \xDB                                                              \xDB");
        printf("\n             \xDB|_________________ 0:QUIT    _______________________ |\xDB\n\n");
        printf("\n\n                     ENTER YOUR CHOICE : ");
        scanf("%d", &choice);

        switch(choice)
        {
            system("cls");
            case 1: system("cls");
            printf("\n\n          ###HERE IS WHAT COLLE 1 HAS RETURNED ===\n");
            printf("*********** Colle (5, 3) ***********\n");
            colle01(5, 3);
            printf("\n*********** Colle (5, 1) ***********\n");
            colle01(5, 1);
            printf("\n*********** Colle (1, 1) ***********\n");
            colle01(1, 1);
            printf("\n*********** Colle (1, 5) ***********\n");
            colle01(1, 5);
            printf("\n*********** Colle (4, 4) ***********\n");
            colle01(4, 4);
            break;

            system("cls");
            case 2: system("cls");
            printf("\n\n         ###HERE IS WHAT COLLE 2 HAS RETURNED ===\n\n");
            printf("*********** Colle (5, 3) ***********\n");
            colle02(5, 3);
            printf("\n*********** Colle (5, 1) ***********\n");
            colle02(5, 1);
            printf("\n*********** Colle (1, 1) ***********\n");
            colle02(1, 1);
            printf("\n*********** Colle (1, 5) ***********\n");
            colle02(1, 5);
            printf("\n*********** Colle (4, 4) ***********\n");
            colle02(4, 4);
            break;

            system("cls");
            case 3: system("cls");
            printf("\n\n         ###HERE IS WHAT COLLE 3 HAS RETURNED ===\n\n");
            printf("*********** Colle (5, 3) ***********\n");
            colle03(5, 3);
            printf("\n*********** Colle (5, 1) ***********\n");
            colle03(5, 1);
            printf("\n*********** Colle (1, 1) ***********\n");
            colle03(1, 1);
            printf("\n*********** Colle (1, 5) ***********\n");
            colle03(1, 5);
            printf("\n*********** Colle (4, 4) ***********\n");
            colle03(4, 4);
            break;

            system("cls");
            case 4: system("cls");
            printf("\n\n       ###HERE IS WHAT COLLE 4 HAS RETURNED ===\n\n");
            printf("*********** Colle (5, 3) ***********\n");
            colle04(5, 3);
            printf("\n*********** Colle (5, 1) ***********\n");
            colle04(5, 1);
            printf("\n*********** Colle (1, 1) ***********\n");
            colle04(1, 1);
            printf("\n*********** Colle (1, 5) ***********\n");
            colle04(1, 5);
            printf("\n*********** Colle (4, 4) ***********\n");
            colle04(4, 4);
            break;

            case 5: system("cls");
            printf("\n\n###HERE IS WHAT COLLE 5 HAS RETURNED ===\n\n");
            printf("*********** Colle (5, 3) ***********\n");
            colle05(5, 3);
            printf("\n*********** Colle (5, 1) ***********\n");
            colle05(5, 1);
            printf("\n*********** Colle (1, 1) ***********\n");
            colle05(1, 1);
            printf("\n*********** Colle (1, 5) ***********\n");
            colle05(1, 5);
            printf("\n*********** Colle (4, 4) ***********\n");
            colle05(4, 4);
            break;

            system("cls");
            case 0: system("cls");
            printf("\n                      *****QUIT*****\n\n\n\n");
            //creer_membres();
            //groupe2();
            break;

            default :system("cls");
            //Color(12,0);

            printf("\n       ERROR!! Try again ! ");
            //retour_au_menu();
            system("cls");
            break;
      }
    } while(choice != 0);

    return 0;
}
