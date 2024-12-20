#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct items {
    string name;
    float price;
    int id;

    // display function
    void displayProducts(){
        cout << "\n---- ITEM MANAGEMENT SYSTEM ----\n";
        cout << "Product ID: " << id << ", Product Name: " << name << "Product Price: " << price << endl;
    }

};
