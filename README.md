Year 2 - Sem 1 - OOP

### **Project Name: "SkyLine Manager"**  
*(A sleek, aviation-themed name suggesting flight control and passenger management.)*  

### **Project Overview**  
A **C++ Flight Management System** that handles:  
- Passenger reservations  
- Seat assignments  
- Flight details tracking  
- Dynamic seat plan adjustments  
- Operator overloading for intuitive operations  

---

### **Key Features**  
1. **Interactive Menu System**  
   - 15+ options for managing flights (add/remove passengers, search, display plans, etc.).  
2. **Dynamic Seating Allocation**  
   - Adjusts rows/columns based on passenger count.  
3. **Predefined & Custom Passengers**  
   - Uses a dataset of 200+ predefined passengers or allows manual entry.  
4. **Operator Overloading**  
   - `++`/`--` to add/remove rows, `+=`/`-=` for bulk passenger changes.  
5. **Deep Copy Constructor**  
   - Safely duplicates flight objects.  
6. **Input/Output Overloading**  
   - `>>`/`<<` for streamlined passenger/flight data handling.  

---

### **Skills Demonstrated**  
#### **Core C++**  
- **OOP Principles**: Classes (`flight`, `passenger`), encapsulation, aggregation.  
- **Memory Management**: Dynamic arrays (`new`/`delete`), deep copying, destructors.  
- **Operator Overloading**: `++`, `--`, `+=`, `-=`, `>>`, `<<`.  
- **STL Usage**: `string`, `iostream`, `cmath`.  

#### **Algorithmic Logic**  
- **Seat Allocation**: Calculates rows/columns dynamically (`ceil(passengers/columns)`).  
- **Search Functions**: Linear search for passengers by name/seat.  

#### **User Experience**  
- **Interactive CLI**: Menu-driven interface with input validation.  
- **Error Handling**: Checks for invalid seats/passenger limits.  

#### **Advanced Techniques**  
- **Copy Constructor**: Ensures safe object duplication.  
- **RAII**: Destructors prevent memory leaks.  

---

### **Test Cases Highlight**  
- **Seat Reservation**: Validates edge cases (invalid indices, empty seats).  
- **Passenger Removal**: Tests `--` and `-=` operators.  
- **Flight Copying**: Verifies deep copy integrity.  

---

### **Suggested Improvements**  
1. **File I/O**: Save/load flight data to/from files.  
2. **Exception Handling**: Replace `cout` errors with `try/catch`.  
3. **GUI**: Port to Qt for visual seat maps.  

Contributers: Mousa M Mousa, Omar Wahy
---

### **Why "SkyLine Manager"?**  
- **Professional**: Fits aviation industry standards.  
- **Memorable**: Short and evocative.  
- **Scalable**: Could extend to multi-flight systems.  
