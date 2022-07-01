//Write a java program using class to implement Banking management System
// PIN = 1234
import java.util.Scanner;
public class SIP_project{
    public static void main(String args[]){ 
        int balance = 5000, withdraw, deposit;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter PIN: ");
        int pin = s.nextInt();

        while(pin != 1234){
            System.out.print("Invalid PIN. Try again: ");
            pin = s.nextInt();
        }
        System.out.println("");
        
        while(true){
            System.out.println("Choose 1 for Withdraw");
            System.out.println("Choose 2 for Deposit");
            System.out.println("Choose 3 for Check Balance");
            System.out.println("Choose 4 for Account Details");
            System.out.println("Choose 5 for EXIT");
            System.out.print("Choose the operation you want to perform: ");
            int choice = s.nextInt();
            switch(choice){
                case 1:
                System.out.print("Enter money to be withdrawn:");
                withdraw = s.nextInt();
                if(balance >= withdraw)
                {
                    balance = balance - withdraw;
                    System.out.println("Remaining amount in your account is:"+balance);
                }
                else
                {
                    System.out.println("Insufficient Balance");
                }
                System.out.println("");
                break;
 
                case 2:
                System.out.print("Enter money to be deposited:");
                deposit = s.nextInt();
                balance = balance + deposit;
                System.out.println("Your Money has been successfully depsited");
                System.out.println("Updated balance in your account is:"+balance);
                System.out.println("");
                break;
 
                case 3:
                System.out.println("Balance : "+balance);
                System.out.println("");
                break;

                case 4:
                System.out.println("Account Details");
                System.out.println("Account Number: 12345");
                System.out.println("Account Holder Name: Aryan Singh");
                System.out.println("Account Type: Savings");
                System.out.println("Balance: "+balance);
                System.out.println("");

                case 5:
                System.exit(0);
            }
        }
    }
}