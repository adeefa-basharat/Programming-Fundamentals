#include <iostream>
using namespace std;

int main()
{
    int mainChoice, subChoice;
    float qty, bill = 0;
    char again;

    do
    {
        cout << "\n===== RESTAURANT MENU =====\n";
        cout << "1. Breakfast\n";
        cout << "2. Lunch\n";
        cout << "3. Dinner\n";
        cout << "Enter your choice: ";
        cin >> mainChoice;

        switch (mainChoice)
        {
        case 1: // Breakfast
            cout << "\n--- Breakfast Menu ---\n";
            cout << "1. Anda Paratha (Rs.40)\n";
            cout << "2. Nan Channy (Rs.60)\n";
            cout << "3. Siri Paye (Rs.150)\n";
            cout << "4. Tea (Rs.15)\n";
            cout << "Enter item: ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> qty;

            if (subChoice == 1) bill += qty * 40;
            else if (subChoice == 2) bill += qty * 60;
            else if (subChoice == 3) bill += qty * 150;
            else if (subChoice == 4) bill += qty * 15;
            else cout << "Invalid item!\n";
            break;

        case 2: // Lunch
            cout << "\n--- Lunch Menu ---\n";
            cout << "1. Chicken Karahi (Rs.1050/kg)\n";
            cout << "2. Mutton Karahi (Rs.1800/kg)\n";
            cout << "3. Egg Fried Rice (Rs.450/plate)\n";
            cout << "4. BBQ (Rs.1050/dozen)\n";
            cout << "Enter item: ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> qty;

            if (subChoice == 1) bill += qty * 1050;
            else if (subChoice == 2) bill += qty * 1800;
            else if (subChoice == 3) bill += qty * 450;
            else if (subChoice == 4) bill += qty * 1050;
            else cout << "Invalid item!\n";
            break;

        case 3: // Dinner
            cout << "\n--- Dinner Menu ---\n";
            cout << "1. Chicken Karahi (Rs.1050/kg)\n";
            cout << "2. Mutton Karahi (Rs.1800/kg)\n";
            cout << "3. Egg Fried Rice (Rs.450/plate)\n";
            cout << "4. BBQ (Rs.1050/dozen)\n";
            cout << "5. Sajji (Rs.800/kg)\n";
            cout << "Enter item: ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> qty;

            if (subChoice == 1) bill += qty * 1050;
            else if (subChoice == 2) bill += qty * 1800;
            else if (subChoice == 3) bill += qty * 450;
            else if (subChoice == 4) bill += qty * 1050;
            else if (subChoice == 5) bill += qty * 800;
            else cout << "Invalid item!\n";
            break;

        default:
            cout << "Invalid main menu choice!\n";
        }

        cout << "\nDo you want to order more? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "\n===== TOTAL BILL =====\n";
    cout << "Amount to Pay: Rs. " << bill << endl;

    return 0;
}
