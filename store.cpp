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

void createItem(vector<item>& items);
void readItem(vector<item>& items);
void updateItem(vector<item>& items);
void removeItem(vector<item>& items);

