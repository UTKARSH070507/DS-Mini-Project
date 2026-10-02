#include "../include/Medicine.hpp"
#include <iostream>
#include <string>
using namespace std;

Medicine::Medicine(int id, int quantity, double price, std::string name, std::string manufacturer, std::string expiryDate, std::string type)
    : id(id), quantity(quantity), price(price), name(name), manufacturer(manufacturer), expiryDate(expiryDate), type(type) {}

int Medicine::getId() {
    return id;
}

double Medicine::getPrice() {
    return price;
}

int Medicine::getQuantity() {
    return quantity;
}

string Medicine::getName() {
    return name;
}

void Medicine::display() {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Expiry Date: " << expiryDate << endl;
    cout << "Type: " << type << endl;
    cout << "Price: $" << price << endl;
    cout << "Quantity: " << quantity << endl;
}

void Medicine::update() {
    cout << "Updating medicine details for ID: " << id << endl;
    cout << "Enter new name: ";
    getline(cin >> ws, name); 
    cout << "Enter new manufacturer: ";
    getline(cin >> ws, manufacturer);
    cout << "Enter new expiry date (YYYY-MM-DD): ";
    getline(cin >> ws, expiryDate);
    cout << "Enter new type: ";
    getline(cin >> ws, type);
    cout << "Enter new price: ";
    cin >> price;
    cout << "Enter new quantity: ";
    cin >> quantity;
}


