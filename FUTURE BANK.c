


    #include <stdio.h>                ///ALL LEADER FILE///
     #include <stdlib.h>
      #include "Login.h"
       #include<time.h>
        #include<dos.h>
          #include"Splash Screen.h"
          #include"Menu.h"
           void splash_screen(void);   ///ALL FUNCTIONS//
          void menu();
         void deposit_money();
        void withdrow_money();
       void transfer_money();
      void account_details();
     void transction_details();
     void recursiveLoadin(int progress);

    void last_details();


int main(void)


{

    recursiveLoadin(0);
    system("color 7"); ///COLOR THE SYSTEM///
    splash_screen();
    delay(1);          ///DELAY THE SYSTERM///
   // system("clear");
    system("cls");

    int choice;

    login();
    delay(2);
    system("D:\\bank4.jpg");
    delay (2);
    system("D:\\music.mp3");
    system("cls");

    while(1)

    {

    menu ();
    printf("-------------------------------------------------------\n");
    printf("ENTER YOUR CHOICE :");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        system("cls");
        deposit_money();
        break;
   case 2:
        system("cls");
        withdrow_money();
        break;
     case 3:
        system("cls");
        transfer_money();
        break;
    case 4:
        system("cls");
        account_details();
        break;
    case 5:
        system("cls");
        transction_details();
        break;

    case 6:
        system("cls");
        registation();
        break;
    case 7:
       system("cls");
        last_details();
        exit(0);


    default:
        system("cls");
        printf("\n\n..........................<INVALID CHOICE >...................\n");

        break;
    }
    }
    getch();


}
