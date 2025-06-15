//https://www.linkedin.com/in/mousa123/

#include <iostream>
#include <cmath>
#include <string>


using namespace std;

const int MAX_PASSENGERS = 200; //editable

// Predefined passenger names and IDs
string predefinedNames[MAX_PASSENGERS] = {
    "John Doe", "Jane Smith", "Alice Brown", "Bob Johnson", "Charlie Davis",
    "Emily Clark", "George Harris", "Hannah Adams", "Ian Brown", "Julia White",
    "Kevin Lee", "Laura Green", "Mike Carter", "Nina Turner", "Oliver King",
    "Paula Baker", "Quincy Hall", "Rachel Scott", "Sam Reed", "Tina Phillips",
    "Uma Peterson", "Victor Martin", "Willie Brooks", "Xena Reed", "Yara Green",
    "Zach Lewis", "Amelia Cole", "Benjamin Foster", "Chloe Ross", "David King",
    "Ella Cooper", "Frank Ward", "Grace Hughes", "Henry Stone", "Ivy Rivera",
    "Jack Bell", "Kara Myers", "Liam James", "Mia Young", "Noah Carter",
    "Olivia Scott", "Peter Evans", "Queen Arnold", "Ryan Rogers", "Sophia Foster",
    "Tom Perry", "Una Garcia", "Victor Powell", "Wendy Gray", "Xander Hughes",
    "Yasmin Wilson", "Zane Morris", "Aaron Blake", "Bianca Carter", "Caleb Davis",
    "Diana Ellis", "Ethan Flores", "Faith Graham", "Gavin Hill", "Harper Jenkins",
    "Isaac Knight", "Jasmine Lee", "Kyle Mitchell", "Lily Nelson", "Mason Ortiz",
    "Nora Price", "Owen Quinn", "Piper Reed", "Quinn Smith", "Reese Turner",
    "Sara Underwood", "Travis Vaughn", "Ursula West", "Vincent Young", "Willow Adams",
    "Xavier Brown", "Yvette Clark", "Zoe Daniels", "Aiden Edwards", "Bella Flores",
    "Cole Gray", "Daisy Harris", "Elijah Hughes", "Fiona Jenkins", "Grayson Knight",
    "Holly Lewis", "Ian Morgan", "Julia Nelson", "Kevin Owens", "Luna Parker",
    "Miles Quinn", "Naomi Roberts", "Oscar Simmons", "Peyton Turner", "Quincy Vega",
    "Ruby Walker", "Shane Young", "Tara Adams", "Uriel Brown", "Vanessa Carter",
    "Wesley Daniels", "Xena Ellis", "Yasmine Foster", "Zack Gray", "Addison Hughes",
    "Brady Jackson", "Cora Kelly", "Dexter Long", "Eva Martinez", "Finn Nelson",
    "Gemma Owen", "Harvey Powell", "Iris Roberts", "Jaxon Smith", "Kailey Thomas",
    "Leo Upton", "Mila Vaughn", "Nate West", "Omar Young", "Paige Adams",
    "Quinton Brown", "Riley Clark", "Sawyer Davis", "Tessa Ellis", "Ulysses Foster",
    "Valerie Green", "Wyatt Harris", "Xander Ivy", "Yara Jackson", "Zion Kelly",
    "Austin Long", "Brianna Martinez", "Carlos Nguyen", "Daniella Owens", "Evan Parker",
    "Faith Quinn", "Gage Rogers", "Hannah Scott", "Ivan Thomas", "Jessica Underwood",
    "Kaleb Vaughn", "Leah West", "Maddox Young", "Nia Adams", "Orlando Brown",
    "Parker Clark", "Quinn Davis", "Reagan Ellis", "Savannah Foster", "Theo Gray",
    "Uriel Hughes", "Vivian Jenkins", "Wade Knight", "Ximena Lewis", "Yusuf Morgan",
    "Zoe Nelson", "Alyssa Ortiz", "Blake Powell", "Cassidy Reed", "Declan Scott",
    "Ellie Turner", "Finn Upton", "Gia Vaughn", "Hudson West", "Isla Young",
    "Jasper Adams", "Kylie Brown", "Landon Clark", "Molly Davis", "Nolan Ellis",
    "Olive Foster", "Paul Gray", "Quincy Hughes", "Reese Jenkins", "Sawyer Knight",
    "Trinity Lewis", "Uri Morgan", "Violet Nelson", "Wyatt Ortiz", "Xena Powell",
    "Yvonne Reed", "Zane Scott"
};

string predefinedIDs[MAX_PASSENGERS] = {
    "ID001", "ID002", "ID003", "ID004", "ID005",
    "ID006", "ID007", "ID008", "ID009", "ID010",
    "ID011", "ID012", "ID013", "ID014", "ID015",
    "ID016", "ID017", "ID018", "ID019", "ID020",
    "ID021", "ID022", "ID023", "ID024", "ID025",
    "ID026", "ID027", "ID028", "ID029", "ID030",
    "ID031", "ID032", "ID033", "ID034", "ID035",
    "ID036", "ID037", "ID038", "ID039", "ID040",
    "ID041", "ID042", "ID043", "ID044", "ID045",
    "ID046", "ID047", "ID048", "ID049", "ID050",
    "ID051", "ID052", "ID053", "ID054", "ID055",
    "ID056", "ID057", "ID058", "ID059", "ID060",
    "ID061", "ID062", "ID063", "ID064", "ID065",
    "ID066", "ID067", "ID068", "ID069", "ID070",
    "ID071", "ID072", "ID073", "ID074", "ID075",
    "ID076", "ID077", "ID078", "ID079", "ID080",
    "ID081", "ID082", "ID083", "ID084", "ID085",
    "ID086", "ID087", "ID088", "ID089", "ID090",
    "ID091", "ID092", "ID093", "ID094", "ID095",
    "ID096", "ID097", "ID098", "ID099", "ID100",
    "ID101", "ID102", "ID103", "ID104", "ID105",
    "ID106", "ID107", "ID108", "ID109", "ID110",
    "ID111", "ID112", "ID113", "ID114", "ID115",
    "ID116", "ID117", "ID118", "ID119", "ID120",
    "ID121", "ID122", "ID123", "ID124", "ID125",
    "ID126", "ID127", "ID128", "ID129", "ID130",
    "ID131", "ID132", "ID133", "ID134", "ID135",
    "ID136", "ID137", "ID138", "ID139", "ID140",
    "ID141", "ID142", "ID143", "ID144", "ID145",
    "ID146", "ID147", "ID148", "ID149", "ID150",
    "ID151", "ID152", "ID153", "ID154", "ID155",
    "ID156", "ID157", "ID158", "ID159", "ID160",
    "ID161", "ID162", "ID163", "ID164", "ID165",
    "ID166", "ID167", "ID168", "ID169", "ID170",
    "ID171", "ID172", "ID173", "ID174", "ID175",
    "ID176", "ID177", "ID178", "ID179", "ID180",
    "ID181", "ID182", "ID183", "ID184", "ID185",
    "ID186", "ID187", "ID188", "ID189", "ID190",
    "ID191", "ID192", "ID193", "ID194", "ID195",
    "ID196", "ID197", "ID198", "ID199", "ID200"
};


class passenger {
private:
    string name;  
    string id;    

public:
    
   passenger(const string& name = "", const string& id = "")
    {
        this->name = name;
        this->id = id;
    }

    // Set passenger details
    void setDetails(const string& name, const string& id) 
    {
        this->name = name;
        this->id = id;
    }

    // Getters for name and ID
    string getName() const {
        return name;
    }

    string getId() const 
    {
        return id;
    }

    // Function to display passenger details
    void displayPassengerDetails() const {
        cout << "the passenger with given passenger info has been initialized using overloading and contructor of 2 Arguments." << endl;
        cout << "Passenger Name: " << name << endl;
        cout << "Passenger ID: " << id << endl;
    }

    // Overloading the >> operator to input passenger details (name and id)
    friend istream& operator>>(istream& input, passenger& passenger) {
        cout << "Enter passenger name: ";
        input >> passenger.name;
        cout << "Enter passenger ID: ";
        input >> passenger.id;
        return input;
    }

    
};


class flight {
private:
    int seatsColumns; // Number of columns for seats
    int passengerCount; // Number of total passengers
    int capacity; // Number of rows in the seating plan
    passenger* name; // Array of passengers aggregated from the passenger class
    passenger** seatingPlan; // 2D array for seating arrangement
    string flightNumber; 
    string destination; 
    string departureTime; 
    string timeZone; 

public:
    flight(int col, int p, string d) {
        seatsColumns = col;
        passengerCount = p;
        destination = d;
        capacity = ceil(static_cast<double>(passengerCount) / seatsColumns); //calculate number of rows based on user input

        //create array of passengers
        name = new passenger[passengerCount]; 

        
        for (int i = 0; i < passengerCount; i++) 
        {
            name[i].setDetails(predefinedNames[i], predefinedIDs[i]);
        }

        // dynamic allocation of the 2D arr
        seatingPlan = new passenger*[capacity];
        for (int i = 0; i < capacity; i++) {
            seatingPlan[i] = new passenger[seatsColumns];
        }
        

        // Reseeeeerve
        int passengerIndex = 0;
        for (int i = 0; i < capacity; i++) {
            for (int j = 0; j < seatsColumns; j++) 
            {
                if (passengerIndex < passengerCount) {
                    seatingPlan[i][j] = name[passengerIndex];
                    passengerIndex++;
                }
                
            }
        }
    }

    // Copy Constructor
    flight(const flight& other) {
    
    flightNumber = other.flightNumber;
    destination = other.destination;
    departureTime = other.departureTime;
    timeZone = other.timeZone;
    capacity = other.capacity;
    seatsColumns = other.seatsColumns;
    passengerCount = other.passengerCount;

    // Deep copy the passenger list
    name = new passenger[passengerCount];
    for (int i = 0; i < passengerCount; i++) {
        name[i] = other.name[i];  
    }

    // Deep copy the seating plan
    seatingPlan = new passenger*[capacity];
    for (int i = 0; i < capacity; i++) {
        seatingPlan[i] = new passenger[seatsColumns];
        for (int j = 0; j < seatsColumns; j++) {
            seatingPlan[i][j] = other.seatingPlan[i][j];  
        }
    }
}

    // feature 2: add passengers
    void addPassengers(int num) {
        int totalAdded = num + passengerCount;  

        // Check if the total number exceeds a reasonable limit to prevent system crashes
        if (totalAdded > 100) 
        {  
            cout << "Error: Too many passengers! Please enter a smaller number." << endl;
            return;
        }

        passenger* newName = new passenger[totalAdded];  // Create new passenger array

        // Copy the existing passengers into the new array
        for (int i = 0; i < passengerCount; i++) {
            newName[i] = name[i];
        }

        
        for (int i = 0; i < num; i++) {
            newName[passengerCount + i].setDetails(predefinedNames[passengerCount + i], predefinedIDs[passengerCount + i]);
        }

        // Update  total passenger count
        passengerCount = totalAdded;

        // Update  capacity based on the new passenger count and columns
        int newcapacity = ceil(static_cast<double>(passengerCount) / seatsColumns);

        
        delete[] name;
        cout << endl << "Destructor has been implemented." << endl << 
        "Total number of passenger has changed. Old Passenger Object has been destructed." <<endl <<
        "Feature 4 point 5 has been successfuly done" <<endl;

        name = newName;

        
        passenger** newSeatingPlan = new passenger*[newcapacity];
        for (int i = 0; i < newcapacity; i++) {
            newSeatingPlan[i] = new passenger[seatsColumns];
        }

        
        int passengerIndex = 0;
        for (int i = 0; i < newcapacity; i++) {
            for (int j = 0; j < seatsColumns; j++) {
                if (passengerIndex < passengerCount) {
                    newSeatingPlan[i][j] = name[passengerIndex];
                    passengerIndex++;
                }
            }
        }

        
        for (int i = 0; i < capacity; i++) 
        {
            delete[] seatingPlan[i];  // Free old seating rows
        }
        delete[] seatingPlan;  // Free old seating plan

        
        seatingPlan = newSeatingPlan;
        capacity = newcapacity;

    }
    
     // Function to add 1 more passenger to the flight
    void add1Passengers() {
    if (passengerCount >= 100) {  // Limit the number of passengers to 100
        cout << "Error: Too many passengers! Cannot add more." << endl;
        return;
    }

    
    passengerCount++;

    
    int newCapacity = ceil(static_cast<double>(passengerCount) / seatsColumns);

    
    passenger* newName = new passenger[passengerCount];

    
    for (int i = 0; i < passengerCount - 1; i++) {
        newName[i] = name[i];
    }

    
    newName[passengerCount - 1].setDetails(predefinedNames[passengerCount - 1], predefinedIDs[passengerCount - 1]);

    
    delete[] name;
    name = newName;

    
    passenger** newSeatingPlan = new passenger*[newCapacity];
    for (int i = 0; i < newCapacity; i++) {
        newSeatingPlan[i] = new passenger[seatsColumns];
    }

    
    int passengerIndex = 0;
    for (int i = 0; i < newCapacity; i++) {
        for (int j = 0; j < seatsColumns; j++) {
            if (passengerIndex < passengerCount) {
                newSeatingPlan[i][j] = seatingPlan[i][j];
                passengerIndex++;
            }
        }
    }


    for (int i = 0; i < capacity; i++) {
        delete[] seatingPlan[i];
    }
    delete[] seatingPlan;

    
    seatingPlan = newSeatingPlan;
    capacity = newCapacity;
}

    // Function to display the seating plan
    void displaySeatingPlan() {
        int passengerIndex = 0;
        for (int i = 0; i < capacity; i++) {
            for (int j = 0; j < seatsColumns; j++) 
            {
                if (passengerIndex < passengerCount) 
                {
                    cout << "X" << " ";  
                    passengerIndex++;
                }   
                else cout << "_" << " "; 

                if (j == (seatsColumns-1)/2) cout<<" ("<< i+1<<") "; //display the island between colomns like an actual plane    
            }
            cout << endl;
        }
    }
    
    // Function to set flight details (in case you want to update them after object creation)
    void setFlightDetails(const string& fNumber, const string& dest, const string& depTime, const string& zone) {
        flightNumber = fNumber;
        destination = dest;
        departureTime = depTime;
        timeZone = zone;
    }
    
    // Function to display all the flight details
     void displayFlightDetails() {
        cout << "\n----------------Flight Details:----------------\n";
        cout << "Flight Number: " << flightNumber << endl;
        cout << "Destination: " << destination << endl;
        cout << "Departure Time: " << departureTime << " " << timeZone << endl;
        cout << "Number of Seats (Columns): " << seatsColumns << endl;
        cout << "Total Passengers: " << passengerCount << endl;
        cout << "Flight Capacity (Rows): " << capacity << endl;
        cout << "Boarded Passengers:\n";
        for (int i = 0; i < passengerCount; i++) {
            cout << name[i].getName() << " (" << name[i].getId() << ")" << endl;
        }
        displaySeatingPlan();
    }

    //Display Current Number of Passnegrs on the Flight
    void totalNum()
    {
        cout << "Total Passengers: " << passengerCount << endl;
    }

    // Function to check if a specific seat (I, J) is reserved
    void checkSeatReservation(int i, int j) {
            i -= 1;
            j -= 1;
    // Ensure valid indices
    if (i < 0 || i >= capacity+1 || j < 0 || j >= seatsColumns+1) {
        cout << "Invalid seat indices! Please enter valid row and column." << endl;
        return;
    }
    
    // Check if the seat is reserved
    if (seatingPlan[i][j].getName() != "" && seatingPlan[i][j].getId() != "") {
        cout << "Seat (" << i+1 << ", " << j+1 << ") is reserved." << endl;
    } else {
        cout << "Seat (" << i+1 << ", " << j+1 << ") is available." << endl;
    }
}
    
    
    bool searchPassenger(const string& firstName, const string& lastName) {
    string fullName = firstName + " " + lastName;  
    
    
    for (int i = 0; i < passengerCount; i++) {
        if (name[i].getName() == fullName) {  
            
            for (int row = 0; row < capacity; row++) {
                for (int col = 0; col < seatsColumns; col++) {
                    
                    if (seatingPlan[row][col].getName() == fullName &&
                        !seatingPlan[row][col].getId().empty()) {  
                        cout << "Yes, " << fullName << " is on the flight." << endl;
                        return true;
                    }
                }
            }
        }
    }

    cout << "No, " << fullName << " does not have a reserved seat." << endl;
    return false;
}

    //Feature 4 Point 1
    void displayPassengerDetailsBySeat() {
    int i, j;
    cout << "Enter the row and column of the seat (e.g., 1 2): ";
    cin >> i >> j;

    // Adjust indices to match array indexing
    i -= 1;
    j -= 1;

    
    if (i < 0 || i >= capacity || j < 0 || j >= seatsColumns) {
        cout << "Invalid seat indices! Please enter valid row and column." << endl;
        return;
    }

    
    if (seatingPlan[i][j].getName() != "" && seatingPlan[i][j].getId() != "") {
        cout << "Passenger details for seat (" << i + 1 << ", " << j + 1 << "):" << endl;
        seatingPlan[i][j].displayPassengerDetails();  // Display name and ID
    } else {
        cout << "Seat (" << i + 1 << ", " << j + 1 << ") is empty." << endl;
    }
}
    
   
    flight& operator++() {
        int newCapacity = capacity + 1;

        passenger** newSeatingPlan = new passenger*[newCapacity];
        for (int i = 0; i < newCapacity; i++) {
            newSeatingPlan[i] = new passenger[seatsColumns];
        }

        for (int i = 0; i < capacity; i++) {
            for (int j = 0; j < seatsColumns; j++) {
                newSeatingPlan[i][j] = seatingPlan[i][j];
            }
        }

        for (int i = 0; i < capacity; i++) {
            delete[] seatingPlan[i];
        }
        delete[] seatingPlan;

        seatingPlan = newSeatingPlan;
        capacity = newCapacity;

        return *this;
    }
    
    friend ostream& operator<<(ostream& out, const flight& f) {
        
        out << "Flight Number: " << f.flightNumber << endl;
        out << "Destination: " << f.destination << endl;
        out << "Departure Time: " << f.departureTime << endl;
        out << "Time Zone: " << f.timeZone << endl;

        out << "\n--- Seating Plan ---\n";
        out << "Rows: " << f.capacity << " | Columns: " << f.seatsColumns << endl;

        
        out << "Seating Arrangement:\n";
        for (int i = 0; i < f.capacity; i++) {
            for (int j = 0; j < f.seatsColumns; j++) {
                if (f.seatingPlan[i][j].getName() != "") {
                    out << "[" << f.seatingPlan[i][j].getName() << "]";
                } else {
                    out << "[Available]";
                }
            }
            out << endl;
        }

        
        out << "\nPassengers List:\n";
        for (int i = 0; i < f.passengerCount; i++) {
            out << f.name[i].getName() << endl;
        }

        return out;  // Return the ostream to allow chaining
    }

    // Overload the += operator to add one or more passengers to the flight
    flight& operator+=(int numToAdd) {
    if (numToAdd <= 0) {
        cout << "Error: Please enter a positive number of passengers to add." << endl;
        return *this;
    }

    
    if (passengerCount + numToAdd > 100) {  
        cout << "Error: Too many passengers! Cannot add more." << endl;
        return *this;
    }

    
    passengerCount += numToAdd;

    
    int newCapacity = ceil(static_cast<double>(passengerCount) / seatsColumns);

    
    passenger* newName = new passenger[passengerCount];

    
    for (int i = 0; i < passengerCount - numToAdd; i++) {
        newName[i] = name[i];
    }

    
    for (int i = passengerCount - numToAdd; i < passengerCount; i++) {
        newName[i].setDetails(predefinedNames[i], predefinedIDs[i]);  // Set predefined names/IDs
    }

    
    delete[] name;
    name = newName;

   
    passenger** newSeatingPlan = new passenger*[newCapacity];
    for (int i = 0; i < newCapacity; i++) {
        newSeatingPlan[i] = new passenger[seatsColumns];
    }

    
    int passengerIndex = 0;
    for (int i = 0; i < capacity; i++) {
        for (int j = 0; j < seatsColumns; j++) {
            if (passengerIndex < passengerCount - numToAdd) {
                newSeatingPlan[i][j] = seatingPlan[i][j];
                passengerIndex++;
            }
        }
    }

 
    for (int i = passengerIndex / seatsColumns; i < newCapacity && passengerIndex < passengerCount; i++) {
        for (int j = 0; j < seatsColumns && passengerIndex < passengerCount; j++) {
            newSeatingPlan[i][j] = newName[passengerIndex];
            passengerIndex++;
        }
    }

    
    for (int i = 0; i < capacity; i++) {
        delete[] seatingPlan[i];
    }
    delete[] seatingPlan;

    seatingPlan = newSeatingPlan;
    capacity = newCapacity;

    return *this;
}
    
    // Overload the -- operator to remove the last passenger from the seating plan
    flight& operator--() {
   
    
    if (passengerCount > 0) {
        passengerCount--;  

        
        int newCapacity = ceil(static_cast<double>(passengerCount) / seatsColumns);

        
        passenger** newSeatingPlan = new passenger*[newCapacity];
        for (int i = 0; i < newCapacity; i++) {
            newSeatingPlan[i] = new passenger[seatsColumns];
        }

        
        int passengerIndex = 0;
        for (int i = 0; i < newCapacity; i++) {
            for (int j = 0; j < seatsColumns; j++) {
                if (passengerIndex < passengerCount) {
                    newSeatingPlan[i][j] = seatingPlan[i][j];
                    passengerIndex++;
                }
            }
        }

        for (int i = 0; i < capacity; i++) {
            delete[] seatingPlan[i];
        }
        delete[] seatingPlan;

        seatingPlan = newSeatingPlan;
        capacity = newCapacity;
    } else {
        cout << "No passengers to remove." << endl;
    }

    return *this;
}

    // Overload the -= operator to remove the last n passengers from the seating plan
    flight& operator-=(int numToRemove) {
    if (numToRemove <= 0) {
        cout << "Error: Please enter a positive number of passengers to remove." << endl;
        return *this;
    }

    
    int newPassengerCount = (numToRemove >= passengerCount) ? 0 : passengerCount - numToRemove;

    
    int newCapacity = ceil(static_cast<double>(newPassengerCount) / seatsColumns);

    
    passenger** newSeatingPlan = new passenger*[newCapacity];
    for (int i = 0; i < newCapacity; i++) {
        newSeatingPlan[i] = new passenger[seatsColumns];
    }

    // Copy remaining passengers to the new seating plan
    int passengerIndex = 0;
    for (int i = 0; i < newCapacity; i++) {
        for (int j = 0; j < seatsColumns; j++) {
            if (passengerIndex < newPassengerCount) {
                newSeatingPlan[i][j] = seatingPlan[i][j];
                passengerIndex++;
            }
        }
    }

   
    for (int i = 0; i < capacity; i++) {
        delete[] seatingPlan[i];
    }
    delete[] seatingPlan;

   
    seatingPlan = newSeatingPlan;
    capacity = newCapacity;
    passengerCount = newPassengerCount;

    return *this;
}
    
    //remove Passenger
    void removePassenger(const passenger& passengerToRemove) {
    for (int row = 0; row < capacity; ++row) {
        for (int col = 0; col < seatsColumns; ++col) {
            
            if (seatingPlan[row][col].getName() == passengerToRemove.getName() && 
                seatingPlan[row][col].getId() == passengerToRemove.getId()) {
                
                seatingPlan[row][col] = passenger(); 

                
                --passengerCount;

                cout << "Passenger removed successfully!" << endl;
                return; 
            }
        }
    }
    cout << "Passenger not found!" << endl; 
}

    // Destructor to free allocated memory
    ~flight() {
        // Free seating plan memory
        for (int i = 0; i < capacity; i++) {
            delete[] seatingPlan[i];
        }
        delete[] seatingPlan;

        // Free passenger array memory
        delete[] name;
    }
};