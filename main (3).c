/*
 ============================================================================
 Name        : sathish A
 Copyright   : Your copyright notice
 Description : atm program in C, Ansi-style
 ============================================================================
 */


//best way to run my code in programiz complier

#include <stdio.h>
#include<string.h>

int main() {
    int pinnumber;//to print the pin number;
    int old_pinnumber;//this int is created for switch 
    int newpinnumber;//this int is created for switch 
    int newpinnumber1;//this int is created for switch 
    int phonenumber;//this int is created for switch 
    int amount;
    int fixed_amount=15000;//this is a fixed amount created by programmer;
   
    int bank;
    int otp;
    char length[10];
    int stringlength;
    
    stringlength=strlen(length);
    printf("WELCOME TO THE ATM SERVICES😃\n");
   printf("%s\n",__DATE__);
   printf("********* Please insert a card *********\n");
   printf("Please wait while the trancsation is on the progress\n");
   
    int a=2,b,c,d=0;
  
    for(b=0;b<=a;b++){
        
        for(c=0;c<=a;c++){
            d++;
            printf("%d\t",d);
        }
        printf("\n");
        
    }
    printf("OK\t0 CANCEL\t\n");
     printf("Please enter a valid pin number\n");
     scanf("%d",&pinnumber);
     if(pinnumber<=9999&&pinnumber>=1000){
          printf("--------------------------------------------------\n");
   printf("--------------------------------------------------\n");
   
   printf("********* Banking options *******\n");
   printf("1.Withdraw\n");
   printf("2.Deposit\n");
   printf("3.Balance enquiry\n");
   printf("4.Mini statement\n");
   printf("5.change pin\n");
 
     }
   else{
       printf("Invalid\n");
       printf("--------------------------------------------------\n");
   printf("--------------------------------------------------\n");
        
   
    int a=2,b,c,d=0;
  
    for(b=0;b<=a;b++){
        
        for(c=0;c<=a;c++){
            d++;
            printf("%d\t",d);
        }
        printf("\n");
        
    }
    printf("OK\t0 CANCEL\t\n");
     printf("Please enter a valid pin number\n");
     scanf("%d",&pinnumber);
     printf("--------------------------------------------------\n");
   printf("--------------------------------------------------\n");
      printf("******* Banking options *******\n");
   printf("1.Withdraw\n");
   printf("2.Deposit\n");
   printf("3.Balance enquiry\n");
   printf("4.Mini statement\n");
   printf("5.change pin\n");
  
       
   }
     printf("--------------------------------------------------\n");
   printf("--------------------------------------------------\n");
   printf("Enter your choice\t");
 scanf("%d",&bank);
   switch(bank){
       case 1:
       printf("Enter a amount  \t");
       scanf("%d",&amount);
       if(amount<=50000){
           printf("Withdraw a amount..%d\n",amount);
            printf("********Thanks for using us********\n");
       }
       else{
           printf(" Please enter less '50000'\n");
             printf("Enter a amount  \t");
       scanf("%d",&amount);
       if(amount<=50000){
           printf("Withdraw a amount..%d\n",amount);
            printf("********Thanks for using us********\n");
       }
       }
       break;
       case 2:
       printf("Deposit a amount\t");
       scanf("%d",&amount);
       printf("********Thanks for using us*********\n");
       break;
       case 3:
       printf("Your balance is   %d",fixed_amount);
       printf("********Thanks for using us*********\n");
       break;
       case 4:
       printf("mini statement\n");
       printf("bank name: SBI\n");
       printf("savings account\n");
       printf("your balance:14000\n");
       printf("********Thanks for using us*********\n");
       break;
       case 5:
       printf("enter your old pin\n");
       scanf("%d",&old_pinnumber);
       if(pinnumber==old_pinnumber){
          
       }
       else{
           printf("please check the pin and properly\n");
           printf("enter your old pin\n");
       scanf("%d",&old_pinnumber);
       }
       printf("enter a phone number \t:+91");
       scanf("%s",length);
       if(stringlength==10&&length[0]==54||length[0]==55||length[0]==56||length[0]==57){
          
           printf("OTP HAS SENT SUCCESSFULLY!\n");
       }
       else{
           printf("wrong format phone number\n");
            printf("enter a phone number \t:+91");
       scanf("%s",length);
       if(stringlength==10&&length[0]==54||length[0]==55||length[0]==56||length[0]==57){
        
           printf("OTP HAS SENT SUCCESSFULLY!\n");
       }
           
       }
       printf("enter a  6 digit otp \n");
       scanf("%d",&otp);
       if(otp>=100000&&otp<=999999){
           printf("ONE TIME PASSWORD:\t%d\n",otp);
       }
       else{
           printf("invalid otp ,please enter correctly\n");
           printf("enter a  6 digit otp \n");
       scanf("%d",&otp);
           
       }
       printf("ENTER A NEW PIN:\t");
       scanf("%d",&newpinnumber);
       if(newpinnumber<=9999&&newpinnumber>=1000){
       printf("%d\n",newpinnumber);
       printf("REENTER YOUR PIN\n");
       scanf("%d",&newpinnumber1);
       if(newpinnumber==newpinnumber1){
           printf("YOUR NEW PIN NUMBER IS:\t%d",newpinnumber1);
       }
       else{
           printf("you have entered a wrong pinnumber\nplease enter correctly");
           printf("REENTER YOUR PIN\n");
       scanf("%d",&newpinnumber1);
       if(newpinnumber==newpinnumber1){
           printf("YOUR NEW PIN NUMBER IS:\t%d",newpinnumber1);
       }
       }
       }
       break;
                
   }
   
    return 0;
}
    








