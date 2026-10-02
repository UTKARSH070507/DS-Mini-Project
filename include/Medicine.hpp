#pragma once
#include <string>
using namespace std;
class Medicine {
    int id,quantity;
    double price;
    std::string name,manufacturer,expiryDate,type;

    public:
        Medicine(int id, int quantity, double price, std::string name, std::string manufacturer, std::string expiryDate, std::string type);
        void display();
        int getId();
        double getPrice();
        int getQuantity();
        string getName();
        void update();
};