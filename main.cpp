//https://www.linkedin.com/in/mousa123/

#include "assignoop.h"
#ifndef ASSIGNOOP_H  
#define ASSIGNOOP_H  
#include <string>
#include <iostream>
#include <cmath>

using namespace std; 

int main() {
    string flightNumber, destination, departureTime, timeZone;
    int columns, initialPassengers, additionalPassengers;
    int choice;

    cout << "Enter Flight Number: ";
    cin >> flightNumber;

    cout << "Enter Destination: ";
    cin >> destination;

    cout << "Enter Departure Time (HH:MM format): ";
    cin >> departureTime;

    cout << "Enter Time Zone (e.g., GMT, UTC, EST, etc.): ";
    cin >> timeZone;

    // Prompt user to input seating configuration
    cout << "Enter number of columns: ";
    cin >> columns;

    cout << "Enter number of passengers to reserve initially: ";
    cin >> initialPassengers;

    // Create flight object with user inputs
    flight myFlight(columns, initialPassengers, destination);
    myFlight.setFlightDetails(flightNumber, destination, departureTime, timeZone); // Set flight details
    
    // Display initial seating plan
    cout << "\nInitial Seating Plan:" << endl;
    myFlight.displaySeatingPlan();

    // Main loop for menu options
    do {
        cout << "\n--- Flight Management System ---\n";
        cout << "1. Check if a specific seat is reserved\n";
        cout << "2. Search for a passenger by name\n";
        cout << "3. Add more passengers\n";
        cout << "4. Display current seating plan\n";
        cout << "5. Add a new row to the seating plan\n";
        cout << "6. Remove the last added passenger\n";
        cout << "7. Display flight details\n";
        cout << "8. Display passenger details by seat\n"; 
        cout << "9. Display the current number of passengers\n";
        cout << "10. Add new passenger info (name and ID using input)\n";
        cout << "11. Remove a specific passenger by name and ID\n";  
        cout << "12. Copy flight details \n"; ////////////////////////////////////
        cout << "13. Add 1 more passengers\n"; /////////////////////////////////////
        cout << "14. Remove number of passengers\n"; ////////////////////////////////
        cout << "15. Exit\n";  // Exit option updated to 12
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int row, col;
            cout << "Enter the row number: ";
            cin >> row;
            cout << "Enter the column number: ";
            cin >> col;
            myFlight.checkSeatReservation(row, col);  // Check if seat is reserved
        } 
        else if (choice == 2) {
            string firstName, lastName;
            cout << "Enter the first name: ";
            cin >> firstName;
            cout << "Enter the last name: ";
            cin >> lastName;
            myFlight.searchPassenger(firstName, lastName);  // Search for passenger by name
        } 
        else if (choice == 3) {
            // Ask if the user wants to add more passengers
            cout << "Enter number of additional passengers to reserve: ";
            cin >> additionalPassengers;

            // Add more passengers dynamically
            myFlight.addPassengers(additionalPassengers);

            // Display updated seating plan
            cout << "\nUpdated Seating Plan:" << endl;
            myFlight.displaySeatingPlan();
        }
        else if (choice == 4) {
            cout << "\nCurrent Seating Plan:" << endl;
            myFlight.displaySeatingPlan();  // Display the current seating plan
        }
        else if (choice == 5) {
            // Add a new row to the seating plan
            ++myFlight;
            cout << "\nAdded a new row to the flight.\n";
            myFlight.displaySeatingPlan();
        }
        else if (choice == 6) {
            // Remove the last added passenger
            --myFlight;
            cout << "\nRemoved the last added passenger.\n";
            myFlight.displaySeatingPlan();
        }
        else if (choice == 7) {
            myFlight.displayFlightDetails(); // Call the function again to display flight details
        }
        else if (choice == 8) {
            myFlight.displayPassengerDetailsBySeat(); // Display passenger details by seat
        }
        else if (choice == 9) {
             myFlight.totalNum();
        }
        else if (choice == 10) {
            // Add a new passenger
            passenger newPassenger;
            cin >> newPassenger;  // User inputs a new passenger using overloaded >>
            cout << "\nNew passenger added:\n";
            newPassenger.displayPassengerDetails();  // Display the new passenger details
        }
        else if (choice == 11) {
            // Remove a specific passenger
            string nameToRemove, idToRemove;
            cout << "Enter the name of the passenger to remove: ";
            cin >> nameToRemove;
            cout << "Enter the ID of the passenger to remove: ";
            cin >> idToRemove;

            passenger passengerToRemove(nameToRemove, idToRemove);
            myFlight.removePassenger(passengerToRemove);  // Remove the specific passenger
            myFlight.displaySeatingPlan();  // Display updated seating plan after removal
        }
        else if (choice==12){
            flight copymyflight (myFlight);
             copymyflight.displayFlightDetails();
        cout << myFlight << endl;
        }
        else if (choice == 13) {
            // Add more 1 passenger dynamically
             myFlight+=1;
            // Display updated seating plan
             cout << "\nUpdated Seating Plan:" << endl;
            myFlight.displaySeatingPlan();
        }
        else if (choice == 14) {
            // remove number of passenger 
        cout << "Enter the number of passengers to remove: ";
        int numToRemove;
        cin >> numToRemove;
        myFlight -= numToRemove;
          myFlight.displaySeatingPlan();
        }
        else if (choice != 15) {
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 15);

    cout << "Exiting the system. Goodbye!\n";
    return 0;
}

#endif