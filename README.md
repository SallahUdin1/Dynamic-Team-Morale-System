# Dynamic-Team-Morale-System
C++ simulation of a Dynamic Team Morale System for a football game. Models morale shifts based on gameplay events, coach decisions, and fan/media influence. Enhances realism, strategy, and immersion using modular object-oriented design.

# Inventory Management System (C++)

This is a simple **console-based Inventory Management System** built in C++. It allows the user to add, list, and sell items. When an item’s quantity reaches zero after a sale, it is automatically removed from the inventory.

## 🛠 Features

- Add new items to the inventory
- Sell items (reduce quantity)
- Auto-remove items with zero quantity
- List all current items
- Track total money earned from sales
- Proper memory management (no memory leaks)

## 📁 Project Structure

📦 InventorySystem/ ┣ 📜 main.cpp # Main source code ┗ 📜 README.md # This documentation

markdown
Copy
Edit

## 🧾 How It Works

### 1. Add Item
- Prompts for item name, quantity, and price
- Stores the item dynamically in a vector

### 2. Sell Item
- Checks if item exists by name
- Prompts for quantity to sell
- Updates quantity and total money earned
- Removes item if quantity becomes zero

### 3. List Items
- Displays all available items with their details

## 🧠 Concepts Used

- Classes & Objects
- Pointers and Dynamic Memory
- Vectors (`std::vector`)
- Encapsulation (Getters and Setters)
- Memory cleanup using destructor
- Console I/O (`std::cin`, `std::cout`)

## 🖥️ How to Run

1. **Clone or Download** the repository
2. Compile using g++ or any C++ compiler:

```bash
g++ -o inventory main.cpp
./inventory
Follow the menu options to interact with the system.

✅ Example
mathematica
Copy
Edit
Welcome to the inventory!

MENU
1. Add new item
2. Sell item
3. List items
4. Exit

Enter your choice: 1
Enter item name: apple
Enter quantity: 10
Enter price: 5.5

Item added successfully!
📌 Notes
This version uses raw pointers with manual memory cleanup (delete) in the destructor.

A version using smart pointers (std::unique_ptr) is also possible for better memory safety.

👨‍💻 Author
Developed by Sallah Udin
