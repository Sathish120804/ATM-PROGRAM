# ATM-PROGRAM
this is a simple atm program in c language 
there are 5 options in my program:
withdraw,deposit,balance enquiry,ministatement,pin change
Program Explanation
 Initialize the variables pin, amount and transaction with 1520, 1000 and ‘y’ respectively.
 Ask for the pin from user. If the input pin is equal to 1520, then allow for the further operations.
 Use switch statement to do the operations like Check Balance, Withdraw Cash, Deposit Cash and Quit.
 For Check Balance simply print the variable amount as output and exit.
For Withdraw Cash, first ask the amount to withdraw and store it in the variable withdraw.
If withdraw % 100 != 0, then ask user to enter the amount in multiplies of 100.
If withdraw amount is greater than (amount-50000), then print the output as “INSUFFICENT BALANCE”.
 Otherwise subtract the variable withdraw from variable amount, print the amount and exit.
 For deposit operation, ask the user for amount and store it in the variable deposit.
 Add the variable deposit to variable amount, print the amount and exit.
 If quit, then finally ask the user if they wish to continue or not. Ask them to type y/n and store it in the variable transaction.
 If variable transaction is y/Y, then continue the operation. Otherwise terminate the while loop by assigning 1 to variable 
