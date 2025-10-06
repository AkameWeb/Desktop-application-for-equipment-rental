# Equipment Rental Management System

**Version 1.0** | Qt-based desktop application for equipment rental management

## 📋 Project Description

A desktop application built with Qt Creator and SQLite for automating equipment rental processes, featuring role-based access control (Admin and User levels).

## 🎯 Key Features

### 🔐 Authentication System
- **Two access levels:**
  - **Administrator** - Full system access
  - **User** - Limited access for basic operations

### 📦 Equipment Management
- Add new equipment to inventory
- Edit existing equipment records
- View complete equipment list
- Track equipment status (Available/Rented)

### 🏢 Rental Operations
- Process equipment checkout
- Monitor rental periods
- Handle equipment returns
- Rental history tracking

## 🛠 Technology Stack

- **Framework:** Qt 6
- **Programming Language:** C++
- **Database:** SQLite 3
- **UI:** QWidgets
- **Build System:** QMake/CMake

## 📊 Functional Modules

### Administrator Features:
- ✅ Complete equipment CRUD operations
- ✅ User management and role assignment
- ✅ Rental transaction oversight
- ✅ System configuration
- ✅ Reports and analytics

### User Features:
- ✅ Browse available equipment
- ✅ Request equipment rental
- ✅ View personal rental history
- ✅ Return equipment

## 🚀 Installation & Setup

### Prerequisites
- Qt 6.0 or higher
- C++17 compatible compiler
- SQLite3 development libraries

### Build Instructions
```bash
git clone https://github.com/AkameWeb/Desktop-application-for-equipment-rental.git
cd equipment-rental-system
qmake EquipmentRental.pro
make
./EquipmentRental

EquipmentRental/
├── src/
│   ├── main.cpp
│   ├── MainWindow.cpp/h
│   ├── DatabaseManager.cpp/h
│   ├── AuthService.cpp/h
│   ├── EquipmentManager.cpp/h
│   └── RentalService.cpp/h
├── ui/
│   └── *.ui files
├── resources/
│   └── icons, images
├── database/
│   └── equipment_rental.db
└── EquipmentRental.pro
