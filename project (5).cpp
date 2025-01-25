#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<cstddef>
using namespace std;
// Function prototypes
void displayMenu();
void orderFunction();
void updateFunction();
void deleteFunction();
void writeCommentFunction();
// Function pointer type for menu functions
typedef void (*MenuFunction)();
// Main function

int main() {
    // Array to hold menu functions
        cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
        cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@                                          @@@@@@@@@@@@@@@@@@@@"<<endl;
        cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@    welcome restaurant ordering system    @@@@@@@@@@@@@@@@@@@@"<<endl;
        cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@                                          @@@@@@@@@@@@@@@@@@@@"<<endl;
        cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;

    MenuFunction menuFunctions[] = {
        displayMenu,
        orderFunction,
        updateFunction,
        deleteFunction,
        writeCommentFunction
    };
    int choice;
    do {
        displayMenu();
        cin >> choice;

        if (choice >= 0 && choice < sizeof(menuFunctions) / sizeof(menuFunctions[0])) {
            // Call the selected menu function
            menuFunctions[choice]();
        }
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);
    string phoneNumber;
    cout<<"Enter the phone number to delete the record:";
    cin>>phoneNumber;
    return 0;
}

// Function to display the menu
void displayMenu() {
    cout << "\nMenu:\n";
    cout << "1. Order\n";
    cout << "2. Update order\n";
    cout << "3. Delete order\n";
    cout << "4. Write a comment\n";
    cout << "0. Quit\n";
    cout << "Choice: ";
}
// Function for ordering
// Function for ordering
// Function for ordering
struct order{
    string place;
    string restaurantName;
    string deliveryOption;
};
void orderFunction() {
    order orders;
    int quant;
    vector<string>foodItems;
    vector<int>quantities;
    int placeChoice;
    cout << "Choose a place nearby:\n";
    cout << "1. Arat Kilo\n";
    cout << "2. Bolea\n";
    cout << "3. Piasa\n";
    cout << "Choice: ";
    cin >> placeChoice;
    int total=0;
    switch (placeChoice)
    {
        int foodchoice;
        case 1: {
            orders.place="Arat killo";
            int restaurantChoice;
            cout << "Choose a restaurant in Arat Kilo:\n";
            cout << "1. Mama's Kitchen\n";
            cout << "2. Mami Erteb\n";
            cout << "Choice: ";
            cin >> restaurantChoice;
            switch (restaurantChoice) {
        case 1: {
            orders.restaurantName="Mama's Kitchen";
            // Order from Mama's Kitchen
            cout << "Menu:\n";
            cout << "1. Pasta - 100 Birr\n";
            cout << "2. Pizza - 120 Birr\n";
            cout << "3. Salad - 85 Birr\n";
            int quantity;
            int choice;
            do {
            cout<<"choose an item from the menu (1-3):"<<endl;
            cout<<"Enter 0 to stop ordering"<<endl;
            cin>>choice;
        switch(choice)
                    {
        case 0:
            break;
        case 1:
            cout<<"Enter the quantity for Pasta: ";
            cin>>quantity;
            total+=quantity*100;
            cout<<"you ordered "<<quantity<<" pasta."<<endl;
            foodItems.push_back("pasta");
            quantities.push_back(quantity);
            break;
        case 2:
            cout<<"Enter the quantity for Pizza: ";
            cin>>quantity;
            total+=quantity*120;
            cout<<"you ordered "<<quantity<<" pizza."<<endl;
            foodItems.push_back("pizza");
            quantities.push_back(quantity);
            quant=quantity;
            break;
        case 3:
            cout<<"Enter the quantity for Salad: ";
            cin>>quantity;
            total+=quantity*85;
            cout<<"you ordered "<<quantity<<" salad."<<endl;
            foodItems.push_back("salad");
            quantities.push_back(quantity);
            break;
        default :
            cout<<"Invalid choose\n";
                }
                } while(choice!=0);
            cout<<"cost of order "<<total<<" Birr\n";
            cout << "You ordered from Mama's Kitchen.\n";
            break;
                }
        case 2: {
            orders.restaurantName="Mami Erteb";
            // Order from Mami Erteb
            cout << "Menu:\n";
            cout << "1. Erteb - 45 Birr\n";
            cout << "2. Felafel - 35 Birr\n";
            cout << "3. Erteb with Felafel - 60 Birr\n";
            int quantity;
            int choice;
            do {
            cin>>choice;
            cout<<"choose an item from the menu (1-3):"<<endl;
            cout<<"Enter 0 to stop ordering"<<endl;
       switch(choice){
      case 0:
           break;
      case 1:
           cout<<"Enter the quantity for Erteb: ";
           cin>>quantity;
           total+=quantity*45;
           cout<<"you ordered "<<quantity<<" Erteb."<<endl;
           foodItems.push_back("Erteb");
           quantities.push_back(quantity);
           break;
      case 2:
            cout<<"Enter the quantity for Felafel: ";
            cin>>quantity;
            total+=quantity*35;
            cout<<"you ordered "<<quantity<<" Felafel."<<endl;
            foodItems.push_back("Felafel");
            quantities.push_back(quantity);
            quant=quantity;
            break;
      case 3:
            cout<<"Enter the quantity for Ertib with Felafel: ";
            cin>>quantity;
            total+=quantity*60;
            cout<<"you ordered "<<quantity<<" Ertib with Felafel."<<endl;
            foodItems.push_back("Ertib with Felafel");
            quantities.push_back(quantity);
            quant=quantity;
            break;
     default :
            cout<<"Invalid choose\n";
            }
            } while(choice!=0);
            cout<<"cost of order "<<total<<" Birr\n";
            cout << "You ordered from Mami erteb.\n";
            break;
            }
     default:
            cout << "Invalid restaurant choice.\n";
            return;
            }
            break;
            }
    case 2: {
            orders.place="Bolea";
            int restaurantChoice;
            cout << "Choose a restaurant in Bolea:\n";
            cout << "1. Bella Pasta and Pizza\n";
            cout << "2. Golden Plate Restaurant\n";
            cout << "Choice: ";
            cin >> restaurantChoice;

    switch (restaurantChoice) {
    case 1: {
            orders.restaurantName="Bella Pasta and Pizza";
            // Order from Bella Pasta and Pizza
            cout << "Menu:\n";
            cout << "1. Pasta - 100 Birr\n";
            cout << "2. cake - 200 Birr\n";
            cout << "3. Garlic Bread - 30 Birr\n";
            int quantity;
            int choice;
            do {
            cout<<"choose an item from the menu (1-3):"<<endl;
            cout<<"Enter 0 to stop ordering"<<endl;
            cin>>choice;
    switch(choice)
                {
    case 0:
            break;
    case 1:
           cout<<"Enter the quantity for Pasta: ";
           cin>>quantity;
           total+=quantity*100;
           cout<<"you ordered "<<quantity<<" pasta."<<endl;
           foodItems.push_back("Pasta");
           quantities.push_back(quantity);
           break;
    case 2:
          cout<<"Enter the quantity for cake: ";
          cin>>quantity;
          total+=quantity*200;
          cout<<"you ordered "<<quantity<<" cake."<<endl;
          foodItems.push_back("Cake");
          quantities.push_back(quantity);
          break;
    case 3:
         cout<<"Enter the quantity for  garlic bread: ";
         cin>>quantity;
         total+=quantity*30;
         cout<<"you ordered "<<quantity<<" garlic bread."<<endl;
         foodItems.push_back("garlic bread");
         quantities.push_back(quantity);
         break;
    default :
        cout<<"Invalid choose\n";
            }
            } while(choice!=0);
        cout<<"cost of order "<<total<<" Birr\n";
        cout << "You ordered from bella pasta and pizza.\n";
        break;
            }
    case 2: {
        orders.restaurantName="Golden Plate Restaurant";
        // Order from Golden Plate Restaurant
        cout << "Menu:\n";
        cout << "1. Burger - 100 Birr\n";
        cout << "2. Grilled Chicken - 120 Birr\n";
        cout << "3. French Fries - 55 Birr\n";
        int quantity;
        int choice;
        do {
        cout<<"choose an item from the menu (1-3):"<<endl;
        cout<<"Enter 0 to stop ordering"<<endl;
        cin>>choice;
   switch(choice)
            {
    case 0:
        break;
    case 1:
       cout<<"Enter the quantity for Burger: ";
       cin>>quantity;
       total+=quantity*100;
       cout<<"you ordered "<<quantity<<" Burger."<<endl;
       foodItems.push_back("Burger");
       quantities.push_back(quantity);
       break;
    case 2:
        cout<<"Enter the quantity for Grilled Chicken: ";
        cin>>quantity;
        total+=quantity*120;
        cout<<"you ordered "<<quantity<<"Grilled Chicken."<<endl;
        foodItems.push_back("Grilled Chicken");
        quantities.push_back(quantity);
        break;
    case 3:
        cout<<"Enter the quantity for French Fries: ";
        cin>>quantity;
        total+=quantity*55;
        cout<<"you ordered "<<quantity<<" French Fries."<<endl;
        foodItems.push_back("French Fries");
        quantities.push_back(quantity);
        break;
    default :
        cout<<"Invalid choose\n";
          }
          } while(choice!=0);
        cout<<"cost of order "<<total<<" Birr\n";
        cout << "You ordered from Golden Plate Restaurant.\n";
        break;
           }
    default:
        cout << "Invalid restaurant choice.\n";
        return;
          }
          break;
          }
    case 3: {
        orders.place="Piasa";
        int restaurantChoice;
        cout << "Choose a restaurant in Piasa:\n";
        cout << "1. Yod Abyssinia\n";
        cout << "2. Aman Cafe and Restaurant\n";
        cout << "Choice: "<<endl;
        cin >> restaurantChoice;
    switch (restaurantChoice) {
    case 1: {
        orders.restaurantName="Yod Abyssinia";
        // Order from Yod Abyssinia
        cout << "Menu:\n";
        cout << "1. Doro Wat - 150 Birr\n";
        cout << "2. Kitfo - 200 Birr\n";
        cout << "3. Tibs - 300 Birr\n";
        int quantity;
        int choice;
    do {
        cout<<"choose an item from the menu (1-3):"<<endl;
        cout<<"Enter 0 to stop ordering"<<endl;
        cin>>choice;
    switch(choice)
        {
    case 0:
       break;
    case 1:
      cout<<"Enter the quantity for Doro Wat: ";
      cin>>quantity;
      total+=quantity*150;
      cout<<"you ordered "<<quantity<<" Doro Wat."<<endl;
      foodItems.push_back("Doro Wat");
      quantities.push_back(quantity);
      break;
    case 2:
      cout<<"Enter the quantity for Kitfo: ";
      cin>>quantity;
      total+=quantity*200;
      cout<<"you ordered "<<quantity<<" Kitfo."<<endl;
      foodItems.push_back("Kitfo");
      quantities.push_back(quantity);
      break;
    case 3:
     cout<<"Enter the quantity for Tibs: ";
     cin>>quantity;
     total+=quantity*300;
     cout<<"you ordered "<<quantity<<" Tibs."<<endl;
     foodItems.push_back("Tibs");
     quantities.push_back(quantity);
     break;
   default :
     cout<<"Invalid choose\n";
      }
      } while(choice!=0);
     cout<<"cost of order "<<total<<" Birr\n";
     cout << "You ordered from Yod Abyssinia.\n";
     break;
      }
    case 2:{
      orders.restaurantName="Aman cafe and restorant";
      cout << "Menu:\n";
      cout << "1. Coffee - 25 Birr\n";
      cout << "2. Spaghetti - 150 Birr\n";
      cout << "3. Vegetable Curry - 80 Birr\n";
      int quantity;
      int choice;
    do {
      cout<<"choose an item from the menu (1-3):"<<endl;
      cout<<"Enter 0 to stop ordering"<<endl;
      cin>>choice;
    switch(choice){
    case 0:
      break;
    case 1:
      cout<<"Enter the quantity for Coffee: ";
      cin>>quantity;
      total+=quantity*25;
      cout<<"you ordered "<<quantity<<" Coffee."<<endl;
      foodItems.push_back("Coffee");
      quantities.push_back(quantity);
      break;
    case 2:
      cout<<"Enter the quantity for Spaghetti: ";
      cin>>quantity;
      total+=quantity*150;
      cout<<"you ordered "<<quantity<<"Spaghetti."<<endl;
      foodItems.push_back("Spaghetti");
      quantities.push_back(quantity);
      break;
    case 3:
      cout<<"Enter the quantity for  Vegetable Curry: ";
      cin>>quantity;
      total+=quantity*80;
      cout<<"you ordered "<<quantity<<"  Vegetable Curry."<<endl;
      foodItems.push_back("Vegetable Curry");
      quantities.push_back(quantity);
      break;
   default :
     cout<<"Invalid choose\n";
     }
     } while(choice!=0);
    cout<<"cost of order "<<total<<" Birr\n";
    cout << "You ordered from Aman Cafe and Restaurant.\n";
    break;
    }
  default:
    cout << "Invalid restaurant choice.\n";
    return;
    }
    }
}
    string phoneNumber;
    bool valid = false;
    while (!valid) {
        cout << "Enter a 10-digit phone number: ";
        cin >> phoneNumber;
        // Check if the input has exactly 10 characters
    if (phoneNumber.length() != 10) {
        cout << "Invalid phone number. Please enter exactly 10 digits.\n";
        continue; // Restart the loop
        }
        // Check if all characters are digits
        bool allDigits = true;
        for (char c : phoneNumber) {
    if (!isdigit(c)) {
        allDigits = false;
        break;
        }
        }
    if (!allDigits) {
        cout << "Invalid phone number. Please enter digits only.\n";
        continue; // Restart the loop
        }
        valid = true; // Phone number is valid
        }
        cout << "Phone number entered: " << phoneNumber << "\n";
        int deliveryChoice;
        cout << "How would you like to receive your food?\n";
        cout << "1. Delivery by car\n";
        cout << "2. Self-pickup\n";
        cout << "Choice: ";
        cin >> deliveryChoice;
    // Process the delivery choice
   switch (deliveryChoice) {
   case 1:
        {
       orders.deliveryOption="Delivery by car";
       cout << "Enter the distance from the restaurant in kilometers: ";
       double distance;
       cin >> distance;
       double deliveryCost = distance * 15;
       double Total = total + deliveryCost;
       double deliveryTime = distance * 8 + 30;
       cout << "Your food will be delivered by car.\n";
       cout << "Delivery cost: " << deliveryCost << " Birr.\n";
       cout << "The total cost with your order is: " << Total << " Birr.\n";
       cout << "Estimated delivery time: " << deliveryTime << " minutes.\n";
       break;
       }
    case 2:{
       orders.deliveryOption="Self-pickup";
       cout << "You will pick up your food yourself.\n";
       cout << "Pick up the food after 30 minutes.\n";
       break;
          }
    default:
      cout << "Invalid delivery choice.\n";
      return;
}
ofstream file("order.txt", ios::app);
    if (file.is_open()) {
        // Write the order information to the file
      file << "Phone Number: " << phoneNumber<< endl;
      file << "Place: "  <<  orders.place<< endl;
      file << "Restaurant: " << orders.restaurantName<< endl;
      file << "Food Items: ";
 for(size_t i=0;i<foodItems.size();i++)
       {
      file<<foodItems[i];
      if(i!=foodItems.size()-1)
      file<<",";
        }
      file<<endl;
      file << "Quantities:";
 for(size_t i=0;i<quantities.size();i++)
        {
      file<<quantities[i];
 if(i!=quantities.size()-1)
        {
     file<<",";
        }
        }
     file<<"respectively with the food item"<<endl;
     file << "Total Cost: " << total << "Birr" << endl;
     file << "Delivery Option: " << orders.deliveryOption << endl;
     file << "---------------------------" << endl;
     cout << "Order information saved to file.\n";
     file.close();
    }
    else {
     cout << "Unable to open the file.\n";
    }

}
void updateFunction() {
    // Implement the logic for updating an order
    cout << "Updating an order...\n";

    // Prompt the user to enter the order details to update
    int orderId;
    cout << "Enter the order ID to update: ";
    cin >> orderId;

    // Implement the logic to update the order based on the order ID
    // ...
    // Display a confirmation message
    cout << "Order " << orderId << " has been updated.\n";
}

// Function for deleting an order
void deleteFunction() {
    string phoneNumber;
    cout << "Enter the phone number to delete the record: ";
    cin >> phoneNumber;

    ifstream inputFile("order.txt");
    ofstream outputFile("temp.txt");

if (inputFile.is_open() && outputFile.is_open()) {
    string line;
    bool orderFound = false;

 while (getline(inputFile, line)) {
 if (line.find("Phone Number: " + phoneNumber) != string::npos) {
    // Skip the lines corresponding to the order
for (int i = 0; i < 6; i++) {
    getline(inputFile, line);
                }

    // Mark the order as found
    orderFound = true;
               }
else {
    // Write the line to the temporary file
    outputFile << line << endl;
              }
              }
    inputFile.close();
    outputFile.close();
   // Delete the original file
    remove("order.txt");
    // Rename the temporary file to the original file name
    rename("temp.txt", "order.txt");
if (orderFound) {
    cout << "Order with phone number " << phoneNumber << " has been deleted.\n";
                }
else {
    cout << "No order found with phone number " << phoneNumber << ".\n";
    }
    }
else {
    cout << "Unable to open the file.\n";
     }
}

// Function for writing a comment

 void writeCommentFunction() {
    ofstream file("comments.txt", ios::app);  // Open the file in append mode
 if (!file) {
    cout << "Error opening the file." << endl;
    return;
    }
    cout << "Writing a comment...\n";
    const int maxSize = 300;
    char comment[maxSize];
    cout << "Enter your comment (up to 300 characters):\n";
    cin.ignore();
    cin.getline(comment, maxSize);

    file << comment << endl;  // Write the comment to the file
    file.close();  // Close the file

    cout << "Your comment: " << comment << endl;
    cout << "Thank you for the comment!" << endl;
}
