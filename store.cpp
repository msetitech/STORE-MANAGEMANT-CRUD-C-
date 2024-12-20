#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Item {
    string name;
    float price;
    int id;

    // Display function
    void displayProducts() const{
        cout << "\n---- ITEM MANAGEMENT SYSTEM ----\n";
        cout << "Product ID: " << id 
             << ", Product Name: " << name 
             << ", Product Price: $" << price << endl;
    }
};


void createItem(vector<Item>& items);
void readItem(const vector<Item>& items);
void updateItem(vector<Item>& items);
void removeItem(vector<Item>& items);

int main(){
    vector<Item> items;
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
            createItem(items);
            break;
        case 2:
            readItem(items);
            break;
        case 3:
            updateItem(items);
            break;
        case 4:
            removeItem(items);
            break;
        case 5:
            cout << "Exiting ........" << endl;
            break;
        default:
            cout << "Invalid Choice Try again (enter 1 - 5):";
            
        }

    } while (choice != 5);
    return 0;
}

void createItem(vector<Item>& items){
    Item newItem;
    cout << "Enter item ID: ";
    cin >> newItem.id;
    cin.ignore();
    cout << "Enter Item Name: ";
    getline(cin, newItem.name);
    cout << "Enter the Price: ";
    cin >> newItem.price;

    items.push_back(newItem);
    cout << "item Created Successfully. \n";
}

void readItem(const vector<Item>& items) {
    if (items.empty()) {
        cout << "\nNo item is found.\n";
    } else {
        cout << "\n ---- Item List ---- \n";
        for (auto& item : items) {
            item.displayProducts();
        }
    }
}

void updateItem(vector<Item>& items){
    if(items.empty()){
        cout << "\nNo Item to Update\n";
        return;
    }
    int id;
    cout << "Enter Product ID to Update";
    cin >> id;

    for(auto& item : items){
        if(item.id == id){
            cin.ignore();
            cout << "Enter New Name: ";
            getline(cin, item.name);
            cout << "Enter New Price: ";
            cin >> item.price;

            cout << "Item Updated Successfull ";
            return;
        }
    }
    cout << "item with ID "<< id << "Not found";
}