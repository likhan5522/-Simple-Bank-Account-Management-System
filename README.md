 💰 Simple Bank Account Management System (C++)

This is a basic Bank Account Management System written in C++. It simulates simple banking operations like deposit, withdrawal, Fixed Deposit Receipts (FDR), and Deposit Pension Schemes (DPS) for multiple users.
🚀 Features

    Create bank accounts for multiple users
    Deposit and withdraw money
    Create Fixed Deposit Receipt (FDR) with interest
    Create Deposit Pension Scheme (DPS) with monthly deposits and interest
    Display user account details

🛠️ Technologies Used

    Language: C++
    Compiler: Any C++17 compatible compiler (e.g., g++, MSVC)
    Standard Library: <iostream>, string manipulation

🧪 Example Output

Abdul Malek deposited 500. New balance: 1500 Abdul Malek withdrew 200. New balance: 1300 Abdul Malek created FDR for 2 years. Maturity amount: 1416 Abdul Malek created DPS for 3 years. Total after maturity: 3816

All User Details: Name: Abdul Malek, Account No: 1001, Balance: 600 Name: Firoz Hossain, Account No: 1002, Balance: 1000 Name: Sahadat Ali, Account No: 1003, Balance: 1000 Name: Abdul Kader, Account No: 1004, Balance: 1000 Name: Eusuf Khan, Account No: 1005, Balance: 1000 Name: Salman Khan, Account No: 1006, Balance: 1000 Name: Rabeya Akter, Account No: 1007, Balance: 1000 Name: Ivory Khatun, Account No: 1008, Balance: 1000 Name: Polash Saha, Account No: 1009, Balance: 1000 Name: Indubati, Account No: 1010, Balance: 1000
👨‍💻 How It Works

Each user is represented as a BankAccount object with:

    name
    accountNumber
    balance
    fdrAmount
    dpsMonthly

Available Methods

    setDetails(name, accNo, balance)
    deposit(amount)
    withdraw(amount)
    createFDR(amount, years)
    createDPS(monthlyAmount, years)
    showDetails()

📁 File Structure

📦BankAccountSystem └── main.cpp # Main source file
🧾 Interest Rates

    FDR Interest: 8% per year
    DPS Interest: 6% total on accumulated monthly deposits

📦 How to Compile & Run
On Linux/macOS:

g++ main.cpp -o bank
./bank
On Windows (Git Bash or PowerShell):
bash
Copy
Edit
g++ main.cpp -o bank.exe
./bank.exe
📜 License
This project is open-source and free to use. No restrictions.

👤 Author
Developed by Likhan Bhakta
