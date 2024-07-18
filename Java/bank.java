
class BankAccount {
    protected String accountNumber;
    protected double balance;
    protected double interestRate;

    public BankAccount(String accountNumber, double balance, double interestRate) {
        this.accountNumber = accountNumber;
        this.balance = balance;
        this.interestRate = interestRate;
    }
    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            System.out.println("Deposited: " + amount + ", New balance: " + balance);
        } else {
            System.out.println("Deposit amount must be positive.");
        }
    }
    public void displayBalance() {
        System.out.println("Account Number: " + accountNumber + ", Balance: " + balance);
    }
}
class SavingsAccount extends BankAccount {
    private double minimumBalance;

  
    public SavingsAccount(String accountNumber, double balance, double interestRate, double minimumBalance) {
        super(accountNumber, balance, interestRate);
        this.minimumBalance = minimumBalance;
    }

    
    public void withdraw(double amount) {
        if (amount > 0 && (balance - amount) >= minimumBalance) {
            balance -= amount;
            System.out.println("Withdrew: " + amount + ", New balance: " + balance);
        } else if (amount <= 0) {
            System.out.println("Withdrawal amount must be positive.");
        } else {
            System.out.println("Cannot withdraw: Insufficient balance to maintain minimum balance.");
        }
    }
}


public class bank {
    public static void main(String[] args) {
        
        BankAccount bankAccount = new BankAccount("123456789", 1000.0, 0.05);
        bankAccount.displayBalance();
        bankAccount.deposit(500.0);
        bankAccount.displayBalance();

       
        SavingsAccount savingsAccount = new SavingsAccount("987654321", 2000.0, 0.03, 500.0);
        savingsAccount.displayBalance();
        savingsAccount.deposit(300.0);
        savingsAccount.displayBalance();
        savingsAccount.withdraw(1000.0);
        savingsAccount.displayBalance();
        savingsAccount.withdraw(2000.0);  
    }
}
