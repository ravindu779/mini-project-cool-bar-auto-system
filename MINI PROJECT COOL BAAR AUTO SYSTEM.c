#include<stdio.h>

int selection();
int pay();
int main()
{
    int net,payment,blance;
    printf("\t\t\t\t\t|||>>>STAR COOL BAAR<<<|||");
    change:
    net=selection();
    printf("\n\tYOUR TOTEL BILL AMOUNT :%d",net);
    if(net>0)
    {
        payment=pay();
        printf("\n\tYOUR TOTEL BILL AMOUNT  :%d",net);
        printf("\n\tYOUR TOTEL PAYED AMOUNT :%d",payment);
        if(net==payment)
        {
            printf("\n\tYOUR PAYMENT IS SUCCESSFULL");
            printf("\n\n\tTAKE YOUR BLANCE AMOUNT AND DRINKS\n");
        }
        else if(net<payment)
        {
            blance=(payment-net);
            printf("\n\tYOUR BALANCE AMOUNT     :%d",blance);
            printf("\n\n\t\tTAKE YOUR BLANCE AMOUNT AND DRINKS\n");
        }
        else
        {
            printf("\n\n!!!YOUR PAYMENT IS LOW CHANGE YOUR CHOICE...................................................................!");
            goto change;
        }
    }
    else
    {

        printf("\nTRY AGAIN.......................................................................................................!\n");
    }
    printf("\n\n\t\t\t\t\tTHANK YOU COME AGAIN!\n");
    return 0;
}

 int selection()
{
    int ch,qty,i,net=0;

    start:
    printf("\n\n\t\t\t\t\tWELLCOME TO MENU");
    printf("\n\n\t\t\t\t1.COCA COLA CAN 320ml             Rs:300");
    printf("\n\t\t\t\t2.7UP CAN 330ml                   Rs:250");
    printf("\n\t\t\t\t3.BARBICAN STRAWBERRY CAN 250ML   Rs:320");
    printf("\n\t\t\t\t4.BARBICAN APPLE CAN 250ml        Rs:350");
    printf("\n\t\t\t\t5.chocolate milkshake             Rs:200");
    printf("\n\t\t\t\t6.REDBULL 250ml                   Rs:300");
    printf("\n\t\t\t\t7.FANTA ORANGE CAN 330ml          Rs:250");
    printf("\n\t\t\t\t8.PEPSI CAN 330ml                 Rs:350");
    printf("\n\t\t\t\t9.SPRITE CAN 320ml                Rs:250");
    printf("\n\nEnter Your choice  : ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("\n\t\t\t\tYOU HAVE SELECTED COCA COLA CAN 320ml");
        printf("\nEnter The Qty      : ");
        scanf("%d",&qty);
        net=net+(qty*300);
        break;
     case 2:
        printf("\n\t\t\t\tYOU HAVE SELECTED 7UP CAN 330ml");
        printf("\nEnter The Qty      : ");
        scanf("%d",&qty);
        net=net+(qty*250);
        break;
     case 3:
        printf("\n\t\t\t\tYOU HAVE SELECTED BARBICAN STRAWBERRY CAN 250ML");
        printf("\nEnter The Qty      : ");
        scanf("%d",&qty);
        net=net+(qty*320);
        break;
     case 4:
        printf("\n\t\t\t\tYOU HAVE SELECTED BARBICAN APPLE CAN 250ml");
        printf("\nEnter The Qty      : ");
        scanf("%d",&qty);
        net=net+(qty*350);
        break;
     case 5:
        printf("\n\t\t\t\tYOU HAVE SELECTED chocolate milkshake 200ml");
        printf("\nEnter The Qty      : ");
        scanf("%d",&qty);
        net=net+(qty*200);
        break;
     case 6:
        printf("\n\t\t\t\tYOU HAVE SELECTED REDBULL 250ml");
        printf("\nEnter The Qty      : ");
        scanf("%d",&qty);
        net=net+(qty*300);
        break;
     case 7:
        printf("\n\t\t\t\tYOU HAVE SELECTED FANTA ORANGE CAN 330ml");
        printf("\nEnter The Qty      : ");
        scanf("%d",&qty);
        net=net+(qty*250);
        break;
     case 8:
        printf("\n\t\t\t\tYOU HAVE SELECTED PEPSI CAN 330ml");
        printf("\nEnter The Qty      : ");
        scanf("%d",&qty);
        net=net+(qty*350);
        break;
     case 9:
        printf("\n\t\t\t\tYOU HAVE SELECTED SPRITE CAN 320ml");
        printf("\nEnter The Qty      : ");
        scanf("%d",&qty);
        net=net+(qty*250);
        break;
     default:
          printf("\nINVALID PRODUCT SELECTION---------------------------------------------------------------------------------------!\n");
          break;
    }

    printf("\nDO YOU WANT TO CONTINUE PRESS 1> \nIF YOU DO NOT WANT TO CONTINUE PRESS THE OTHER DIGIT>\n");
    scanf("%d",&i);
    if(i==1)
    {
        goto start;
    }
    else
    {
        return net;
    }
}

int pay()
{
    int amount;
    printf("\n\tGIVE YOUR PAYMENT      :");
    scanf("%d" ,&amount);
    return amount;
}
