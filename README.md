# DSA-module-2
Linked List Implementation in C
(Single, Doubly & Circular Linked Lists)

## 📝 Definition:

A Linked List is a linear data structure where each element contains data and a pointer to the next node.
Unlike arrays, linked lists are dynamic  they can grow or shrink at runtime.

Type 	Description:
Singly Linked List	Nodes connected in one direction only.

Doubly Linked List	Each node connected to both previous and next nodes


Circular Linked List	Last node connects back to the first node.

## ⚙️  Algorithm:
| **Step No.** | **Process Description**                                            |
| ------------ | ------------------------------------------------------------------ |
| **1**        | Start the program and define a `struct` for node (data + pointer). |
| **2**        | Initialize the `head` pointer as `NULL`.                           |
| **3**        | Create a new node dynamically using `malloc()`.                    |
| **4**        | Perform Insert / Delete / Traverse operations.                     |
| **5**        | Update node links properly after each operation.                   |
| **6**        | Display the list and free allocated memory before exit.            |



## 🧩 Technology used:

| **Technology                            | **Purpose                              |
| ------------------------------------- | ------------------------------------------------- |
| **C Language**                        | Core implementation of linked list operations.    |
| **Pointers**                          | To dynamically link nodes.                        |
| **Structures (`struct`)**             | To group node data and link pointer.              |
| **Dynamic Memory (`malloc`, `free`)** | For runtime node creation and deletion.           |
| **VS Code / GCC**                     | IDE and compiler to build and execute C programs. |



## 🧰 Installation & Setup:
| **Step** | **Command / Description**                       |
| -------- | ----------------------------------------------- |
| **1**    | Install a C compiler (`gcc` or `MinGW`).        |
| **2**    | Open **VS Code** and install *C/C++ Extension*. |
| **3**    | Create file `linkedlist.c` or multiple files.   |
| **4**    | Compile → `gcc filename.c -o outputname`        |
| **5**    | Run → `./outputname`                            |


## 🧮  Code Execution Procedure:
🔹 Single Linked List:
File Name	single_linkedlist.c
Compile	gcc single_linkedlist.c -o single
Run	./single
Main Operations	Insert (begin, end), Delete, Traverse, Display

🔹 Doubly Linked List:
File Name	doubly_linkedlist.c
Compile	gcc doubly_linkedlist.c -o double
Run	./double
Main Operations	Insert (begin, after node), Delete, Forward/Backward Traverse

🔹 Circular Linked List:
File Name	circular_linkedlist.c
Compile	gcc circular_linkedlist.c -o circular
Run	./circular
Main Operations	Insert (end), Delete (specific node), Traverse circularly

## Output:
| **Linked List Type**     | **Operation**                   | **Output**                 |
| ------------------------ | ------------------------------- | -------------------------- |
| **Singly Linked List**   | **After Insertion**             | `10 -> 20 -> 30 -> NULL`   |
|                          | **After Deleting 20**           | `10 -> 30 -> NULL`         |
| **Doubly Linked List**   | **Forward (After Insertion)**   | `10 -> 20 -> 30 -> NULL`   |
|                          | **Reverse (After Insertion)**   | `30 -> 20 -> 10 -> NULL`   |
|                          | **Forward (After Deleting 20)** | `10 -> 30 -> NULL`         |
|                          | **Reverse (After Deleting 20)** | `30 -> 10 -> NULL`         |
| **Circular Linked List** | **After Insertion**             | `10 -> 20 -> 30 -> (head)` |
|                          | **After Deleting 20**           | `10 -> 30 -> (head)`       |
