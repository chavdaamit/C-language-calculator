# 🧮 Simple Calculator in C (Using Functions & Switch Case)

This repository contains a **menu-driven calculator program in C**. The program performs basic arithmetic operations using **user-defined functions**, **switch-case**, and a **while loop**.





---

## 📌 Program Features

* Addition
* Subtraction
* Multiplication
* Division
* Modulus
* Continuous execution using loop
* Exit option

---

## 🧾 Source Code

```c
#include <stdio.h>

int add(int a, int b){ return a + b; }
int sub(int a, int b){ return a - b; }
int mul(int a, int b){ return a * b; }
float div(int a, int b){ return (float)a / b; }
int mod(int a, int b){ return a % b; }

int main(){

    int choice, a, b;

    while(1){
        printf("\npress 1 for +");
        printf("\npress 2 for -");
        printf("\npress 3 for *");
        printf("\npress 4 for /");
        printf("\npress 5 for %%");
        printf("\npress 0 for Exit");

        printf("\nEnter your Choice: ");
        scanf("%d", &choice);

        if(choice == 0)
            break;

        printf("Enter First number: ");
        scanf("%d", &a);
        printf("Enter Second number: ");
        scanf("%d", &b);

        switch(choice){
            case 1:
                printf("Addition = %d", add(a,b));
                break;
            case 2:
                printf("Subtraction = %d", sub(a,b));
                break;
            case 3:
                printf("Multiplication = %d", mul(a,b));
                break;
            case 4:
                printf("Division = %.2f", div(a,b));
                break;
            case 5:
                printf("Modulus = %d", mod(a,b));
                break;
            default:
                printf("Invalid Choice");
        }
    }

    return 0;
}
```

---

## ▶️ Sample Outputs

### ➕ Addition

```
press 1 for +
Enter your Choice: 1
Enter First number: 10
Enter Second number: 5
Addition = 15
```

### ➖ Subtraction

```
Enter your Choice: 2
Enter First number: 10
Enter Second number: 5
Subtraction = 5
```

### ✖️ Multiplication

```
Enter your Choice: 3
Enter First number: 10
Enter Second number: 5
Multiplication = 50
```

### ➗ Division

```
Enter your Choice: 4
Enter First number: 10
Enter Second number: 3
Division = 3.33
```

### ➗ Modulus

```
Enter your Choice: 5
Enter First number: 10
Enter Second number: 3
Modulus = 1
```

### ❌ Exit

```
Enter your Choice: 0
Program Terminated
```

---

#

