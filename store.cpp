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

int main(){
    vector<item> items;
    int choice;
    do{
        //Display all menu
        cout << "\n --- CRUD MENUS --- \n";
        cout << "1. Create Item\n";
        cout << "2. Read Item\n";
        cout << "3. Update Item\n";
        cout << "4. Remove Item\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            createItem();
            break;
        case 2:
            readItem();
            break;
        case 3:
            updateItem();
            break;
        case 4:
            removeItem();
            break;
        case 5:
            cout << "Exiting ........" << endl;
        default:
            cout << "Invalid Choice Try again (enter 1 - 5):";
            break;
        
    }while (choice != 5);

    return 0;
}