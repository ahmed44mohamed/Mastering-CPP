/*
    Hospital Management System
    --------------------------
    This project is a simple console-based Hospital Management System written in C++. 
    It allows users to manage patient records efficiently through a menu-driven interface.

    Features:
    - Add new patients with details such as name, ID, age, and health status.
    - View a list of all patients and their information.
    - Search for patients by their unique ID.
    - Edit patient information, including name, ID, age, time spent in hospital, and health status.
    - Delete patient records by ID.
    - Export all patient data to a text file ("patients.txt") for external use or backup.
    - Check if a patient is eligible to leave the hospital based on their health status.

    The system uses object-oriented programming principles, including inheritance and encapsulation.
    The `Patients` class represents individual patients and inherits from an abstract base class.
    The program stores patient records in a dynamic array (vector) for efficient management.

    This project is intended for educational purposes and demonstrates basic file I/O, 
    class design, and user interaction in C++.
*/

#include <iostream>
#include <utility>
#include <vector>
#include <fstream>

using namespace std;

// Health status using enumeration
enum Health {
    Sick,
    Good
};

class AbstractPatient {
public:
    virtual void ask_for_leave() const = 0;
};

// Patient class 
class Patients : AbstractPatient {
private:
    // Data Members
    string PatientName;
    int PatientId, PatientAge, SpendTimeByHours;
    Health PatientHealth;

public:
    // Constructor
    Patients(string patient_name, int id, int patient_age, int spend_time_by_hours, Health patient_health) : PatientName(std::move(patient_name)), PatientId(id), PatientAge(patient_age), SpendTimeByHours(spend_time_by_hours), PatientHealth(patient_health) {}
    // setters functions
    void set_patient_name(const string &patient_name) { PatientName = patient_name; }
    void set_patient_id(int id) { PatientId = id; }
    void set_patient_age(int patient_age) { PatientAge = patient_age; }
    void set_spend_time(int spend_time_by_hours) { SpendTimeByHours = spend_time_by_hours; }
    void set_patient_health(Health patient_health) { PatientHealth = patient_health; }


    // getters functions
    string get_patient_name () const { return PatientName; }
    int get_patient_id () const { return PatientId; }
    int get_patient_age () const { return PatientAge; }
    int get_spend_time () const { return SpendTimeByHours; }
    Health get_patient_health () const { return PatientHealth; }

    // print all patients and IDs
    void print_info_about_patient() const {
        cout << "\n---------------------------\n"
        << "Name: " << PatientName
            << "\nID: " << PatientId
            << "\nPatient Age: " << PatientAge
            << "\nThe time, he spent it: " << SpendTimeByHours << '\n';
        (PatientHealth ? cout << "Patient health:  Good\n" : cout << "Patient health:  Sick\n");
    }

    // if patient want to leave depend on his / her health
    void ask_for_leave() const override {
        (PatientHealth ? cout << "------------------\nThe patient health is \"Good\"\n\tSo He \"can leave\"\n" : cout << "------------------\nThe patient health is \"Sick\"\n\tSo He \"can not leave\"\n");
    }
};

// function to find index of patient by using patient's id
int get_patient_index_by_id(const vector <Patients> &container, int id) {
    for (int i = 0; i < container.size(); i++) {
        if (container[i].get_patient_id() == id)
            return i;
    }
    return -1;
}

int main (void) {
    int choice;
    vector <Patients> container;
    // Welcome message
    cout << "\t\t\t\t\t---{ Hospital Management System 👋}---\n\nHow Can I help you today?\n";

    do {
        // show message
        cout << "\n\n"
            << "1. See the list of all patients\n"
            << "2. Add a new patient\n"
            << "3. Delete a patient\n"
            << "4. Search for a patient by ID\n"
            << "5. Edit a patient's information\n"
            << "6. Make a file containing all patients\n"
            << "7. Ask for leave hospital\n"
            << "0. Exit\n"
            << "Enter your choice here: ";
        cin >> choice;

        switch (choice) {
        // to See the list of all patients
        case 1: {
            if (container.empty())
                cout << "---------------------------\nThere are no patients now\n---------------------------\n";
            else {
                for (const Patients &p : container) p.print_info_about_patient();
            }
        }
        break;
        // to Add a new patient
        case 2: {
            string name;
            int id, age;
            cout << "---------------------------\n";
            cout << "Enter the name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter the ID: ";
            cin >> id;
            cout << "Enter the age: ";
            cin >> age;
            Patients p(name, id, age, 0, Sick);
            container.push_back(p);
            cout << "Patient added successfully!  ✅";
            p.print_info_about_patient();
            break;
        }

        // to Delete a patient
        case 3: {
            int search_id;
            cout << "Enter the patient ID to delete: ";
            cin >> search_id;
            int index = get_patient_index_by_id(container, search_id);
            if (index != -1) {
                container.erase(container.begin() + index);
                cout << "Patient deleted successfully. ✅\n";
            }
            else cout << "No patient with ID " << search_id << "❌\n";
            break;
        }
        // to Search for a patient by ID
        case 4: {
            int search_id;
            cout << "Enter the patient ID to search: ";
            cin >> search_id;
            int index = get_patient_index_by_id(container, search_id);
            if (index != -1) {
                cout << "Patient found: ✅\n";
                container[index].print_info_about_patient();
            }
            else cout << "No patient with ID " << search_id << "❌ \n";
            break;
        }
        // to Edit a patient's information
        case 5: {
            int search_id;
            cout << "Enter the patient ID to edit here: ";
            cin >> search_id;
            int index = get_patient_index_by_id(container, search_id);
            if (index != -1) {
                int edit_num;
                do
                {
                    // show edit message
                    cout << "\nWhich Data would you like to edit it?\n"
                        << "1. Name\n"
                        << "2. ID\n"
                        << "3. Age\n"
                        << "4. Time spent in hospital\n"
                        << "5. Patient Health\n"
                        << "0. All OK\n"
                        << "Enter your choice: ";
                    cin >> edit_num;
                    switch (edit_num)
                    {
                        // to edit patient name
                    case 1:
                    {
                        cout << "Enter The new name here: ";
                        string new_name;
                        cin.ignore();
                        getline(cin, new_name);
                        container[index].set_patient_name(new_name);
                        cout << " ✅\n";
                    }
                    break;

                    case 2:
                    {
                        // to edit patient id
                        cout << "Enter The new ID here: ";
                        int new_id;
                        cin >> new_id;
                        container[index].set_patient_id(new_id);
                        cout << " ✅\n";
                    }
                    break;

                    case 3:
                    {
                        // to edit patient age
                        cout << "Enter The new age here: ";
                        int new_age;
                        cin >> new_age;
                        container[index].set_patient_age(new_age);
                        cout << " ✅\n";
                    }
                    break;

                    case 4:
                    {
                        // to edit patient spend time
                        cout << "Enter The new spend time here: ";
                        int new_time;
                        cin >> new_time;
                        container[index].set_spend_time(new_time);
                        cout << " ✅\n";
                    }
                    break;
                    case 5:
                    {
                        // to edit patient health
                        cout << "Enter The new Patient health here ( good or sick ): ";
                        string new_health;
                        cin >> new_health;
                        for (char &letter : new_health)
                            letter = tolower(letter);

                        if (new_health == "sick")
                        {
                            container[index].set_patient_health(Sick);
                            cout << " ✅\n";
                        }

                        else if (new_health == "good")
                        {
                            container[index].set_patient_health(Good);
                            cout << " ✅\n";
                        }

                        else
                            cout << "Please enter sick or good\n";
                    }
                    break;
                    default:
                        break;
                    }
                } while (edit_num);
            }
            else
            {
                cout << "No patient with ID " << search_id << "❌\n";
            }
        }
        break;
        // to make a text file contain all infomation about patients as "file.txt" at explorer section
        case 6:
        {
            ofstream file("patients.txt");
            if (file.is_open())
            {
                for (const auto &p : container)
                {
                    file << "Name: " << p.get_patient_name() << '\n'
                        << "ID: " << p.get_patient_id() << '\n'
                        << "Age: " << p.get_patient_age() << '\n'
                        << "Time spent in hospital: " << p.get_spend_time() << '\n';
                    (p.get_patient_health() ? file << "Patient health:  Good\n" : file << "Patient health:  Sick\n");
                    file << "---------------------------\n";
                }
                file.close();
                cout << "File created successfully ✅\n";
            }
            else
            {
                cout << "Error creating file ❌\n";
            }
        }
        break;
        // to edit patient health
        case 7:
        {
            if (container.empty())
            {
                cout << "---------------------------\nThere are no patients now\n---------------------------\n";
            }
            else {
                cout << "Enter the patient id here: ";
                int id;
                cin >> id;
                int index = get_patient_index_by_id(container, id);
                if (index != -1)
                    container[index].ask_for_leave();
            }
        }

        break;

        default:
            break;
        }

        cout << "\nWould you like another service?\n"
            << "1. Yes\n"
            << "0. No (Exit)\n"
            << "Enter your choice: ";
        cin >> choice;

    } while (choice);

    cout << "\t\t\t\t---{ YOU ARE WELCOME ❤️  }---\n";

    return 0;
}