# Online Expense Splitter (C++)

A simple C++ console program that splits a total expense equally among multiple participants.  
The user can enter the total expense, choose a currency, and specify the number of participants.  
The program then calculates how much each person needs to pay.

---

## Overview

When people share expenses such as trips, meals, or group activities, calculating each person's share manually can be time-consuming and sometimes inaccurate.

This program automates the process by:
- Taking the total expense as input
- Allowing the user to select a currency
- Asking for the number of participants
- Calculating the equal share for each person

---

## Features

- Menu-driven console program
- Supports multiple currencies
- Automatically calculates equal expense share
- Handles invalid participant input
- Simple and beginner-friendly C++ implementation

---

## Supported Currencies

The program currently supports:

- INR – Indian Rupee
- USD – US Dollar
- EUR – Euro
- GBP – British Pound
- JPY – Japanese Yen
- AUD – Australian Dollar
- CAD – Canadian Dollar

---

## How the Program Works

1. The program displays a menu:
   - Split Expense
   - Exit

2. If the user selects **Split Expense**, the program asks for:
   - Total expense amount
   - Currency type
   - Number of participants

3. The program calculates the share using the formula:

Share = Total Expense / Number of Participants

4. The result is displayed in the selected currency.

---

## Example Output

Online Expense Splitter  
1. Split Expense  
2. Exit  

Enter your choice: 1  

Enter total expense amount: 1000  

Select Currency Type  
1. INR  
2. USD  
3. EUR  
4. GBP  
5. JPY  
6. AUD  
7. CAD  

Enter currency choice: 1  

Enter number of payers: 4  

Each Person Pays: 250 INR  

---

## Requirements

- C++ Compiler (g++)
- Any C++ IDE such as:
  - VS Code
  - CodeBlocks
  - Dev-C++
  - CLion

---

## How to Compile and Run

Compile the program:
g++ expense_splitter.cpp -o expense_splitter

Run the program:
./expense_splitter


---

## Future Improvements

- Support uneven expense distribution
- Save expenses to a file
- Add multiple expense tracking
- Create a graphical user interface

---

## Author

Aditya Yadav
Itm Skills University
