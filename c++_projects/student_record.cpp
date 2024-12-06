// Program to implement records of your class
//  DS Ques 1
//  Date of assignment : 8/8/2022
//  Date of submission : 22/8/2022

#include <iostream>
#include <cstring>
using namespace std;

void addRecord();
void modifyRecord();
void listAll();
void listsameName();
void listsameState();
void listsameDistrict();
void clearRecord();
int counter = 0;
int studIndex = 0;
struct formatDate
{
    int dd = 01, mm = 01, yyyy = 2000;
};
struct baseInfo
{
    char name[50], fatherName[50], state[40], branch[6], rollno[8], country[20], district[30];
    int pin;
};
struct baseRecord
{
private:
    int studentNumber;

public:
    formatDate yearofAdmission, dob;
    baseInfo studentRecord;
    void inputInfo(int a);
    void printInfo();
    void modifyInfo();

} studentInfo[200];

void clearInfo(baseRecord arr[], int index, int size);

void baseRecord ::inputInfo(int a)
{
    studentNumber = a + 1;
    cout << "Enter Name of the Student: ";
    cin.getline(studentRecord.name, 50);
    cout << endl;
    cout << "Enter Father's Name: ";
    cin.getline(studentRecord.fatherName, 50);
    cout << endl;
    cout << "Enter Roll Number of the Student: ";
    cin.getline(studentRecord.rollno, 8);
    cout << endl;
    cout << "Enter Branch of the Student: ";
    cin.getline(studentRecord.branch, 6);
    cout << endl;
    cout << "Enter state of the student: ";
    cin.getline(studentRecord.state, 40);
    cout << endl;
    cout << "Enter country of the student: ";
    cin.getline(studentRecord.country, 20);
    cout << endl;
    cout << "Enter district of the student: ";
    cin.getline(studentRecord.district, 30);
    cout << endl;
    int flag = 1;
    while (flag == 1)
    {
        cout << "Enter DOB of the student(DD MM YYYY): ";
        cin >> dob.dd >> dob.mm >> dob.yyyy;
        if (dob.dd > 31 || dob.dd == 0)
        {
            cout << "\n Date input in provided date is incorrect, try again!!"
                 << "\n\n";
            flag = 1;
        }
        if (dob.mm > 12 || dob.mm == 0)
        {
            cout << "\n Month input in provided date is incorrect, try again!!"
                 << "\n\n";
            flag = 1;
        }
        if (dob.yyyy > 2005 || dob.yyyy <= 0 || dob.yyyy < 1995)
        {
            if (dob.yyyy > 2022)
            {
                cout << "\n Year input in provided date is more than the current year, try again!!"
                     << "\n\n";
                flag = 1;
            }
            else if (dob.yyyy < 1995)
            {
                cout << "\n Applicant is too old to apply for the program, check details and try again!!"
                     << "\n\n";
                flag = 1;
            }

            else
            {
                cout << "\n Applicant is too young to apply for the program, check details and try again!!"
                     << "\n\n";
                flag = 1;
            }
        }
        else
            flag = 0;
    }

    cout << endl;
    {
        int flag = 1;
        while (flag == 1)
        {
            cout << "Enter year of admission of the student: ";
            cin >> yearofAdmission.yyyy;
            if (yearofAdmission.yyyy < 2020 || yearofAdmission.yyyy > 2025)
            {
                cout << "\n Only batch starting from 2020 accepted, try again!!"
                     << "\n\n";
                flag = 1;
            }
            else
                flag = 0;
        }
    }
    cout << endl;
    cout << "Enter postal PIN: ";
    cin >> studentRecord.pin;
    cout << endl;
}
void baseRecord ::printInfo()
{
    cout << "\nStudent Number: " << studentNumber << endl;
    cout << "Name: " << studentRecord.name << endl;
    cout << "Father's Name: " << studentRecord.fatherName << endl;
    cout << "Roll No.: " << studentRecord.rollno << endl;
    cout << "Branch:" << studentRecord.branch << endl;
    cout << "State: " << studentRecord.state << endl;
    cout << "Date of Birth: " << dob.dd << "-" << dob.mm << "-" << dob.yyyy << endl;
    cout << "Batch: " << yearofAdmission.yyyy << " - " << yearofAdmission.yyyy + 4 << endl;
    cout << "PIN: " << studentRecord.pin << endl;
    cout << "District: " << studentRecord.district << endl;
    cout << "Country: " << studentRecord.country << endl;
}

void baseRecord ::modifyInfo()
{
    cout << "Current Details of concerned student: ";
    printInfo();
    fflush(stdin);
    cout << "\n\nEnter the info you want to change: " << endl
         << "1. Name" << endl
         << "2. Father's Name" << endl
         << "3. Roll No." << endl
         << "4. Branch" << endl
         << "5. State" << endl
         << "6. Country" << endl
         << "7. District" << endl
         << "8. DOB" << endl
         << "9. Batch" << endl
         << "10. PIN" << endl;
    int option;
    cin >> option;
    fflush(stdin);
    switch (option)
    {
    case 1:
        cout << "Enter new Name" << endl;
        cin.getline(studentRecord.name, 50);
        cout << endl;
        break;
    case 2:
        cout << "Enter new Father's Name" << endl;
        cin.getline(studentRecord.fatherName, 50);
        cout << endl;
        break;

    case 3:
        cout << "Enter new Roll No." << endl;
        cin.getline(studentRecord.rollno, 8);
        cout << endl;
        break;

    case 4:
        cout << "Enter new Branch" << endl;
        cin.getline(studentRecord.branch, 6);
        cout << endl;
        break;
    case 5:
        cout << "Enter new State" << endl;
        cin.getline(studentRecord.state, 40);
        cout << endl;
        break;
    case 6:
        cout << "Enter new Country" << endl;
        cin.getline(studentRecord.country, 40);
        cout << endl;
        break;
    case 7:
        cout << "Enter new District" << endl;
        cin.getline(studentRecord.district, 30);
        cout << endl;
        break;
    case 8:
    {
        int flag = 1;
        while (flag == 1)
        {
            cout << "Enter DOB of the student(DD MM YYYY): ";
            cin >> dob.dd >> dob.mm >> dob.yyyy;
            if (dob.dd > 31 || dob.dd <= 0)
            {
                cout << "\n Date input in provided date is incorrect, try again!!"
                     << "\n\n";
                flag = 1;
            }
            if (dob.mm > 12 || dob.mm <= 0)
            {
                cout << "\n Month input in provided date is incorrect, try again!!"
                     << "\n\n";
                flag = 1;
            }
            if (dob.yyyy > 2005 || dob.yyyy <= 0 || dob.yyyy < 1995)
            {
                if (dob.yyyy > 2022)
                {
                    cout << "\n Year input in provided date is more than the current year, try again!!"
                         << "\n\n";
                    flag = 1;
                }
                else if (dob.yyyy < 1995)
                {
                    cout << "\n Applicant is too old to apply for the program, check details and try again!!"
                         << "\n\n";
                    flag = 1;
                }

                else
                {
                    cout << "\n Applicant is too young to apply for the program, check details and try again!!"
                         << "\n\n";
                    flag = 1;
                }
            }
            else
                flag = 0;
        }
        break;
    }
    case 9:
    {
        int flag = 1;
        while (flag == 1)
        {
            cout << "Enter new year of admission of the student: ";
            cin >> yearofAdmission.yyyy;
            if (yearofAdmission.yyyy < 2020)
            {
                cout << "\n Only batch starting from 2021 accepted, try again!!"
                     << "\n\n";
                flag = 1;
            }
            else
                flag = 0;
            cout << endl;
        }
    }
    break;

    case 10:
        cout << "Enter new PIN: ";
        cin >> studentRecord.pin;
        cout << endl;
        break;
    default:
        cout << "Wrong Input. Try Again.\n\n\n";
        modifyInfo();
        break;
    }
}

int main()
{
    cout << "Choose the operation you want to perform: " << endl
         << "1. Add students record" << endl
         << "2. Modify Student record" << endl
         << "3. List all the student info" << endl
         << "4. List all the students with same full name" << endl
         << "5. List all the students from same state" << endl
         << "6. List all the students from same district" << endl
         << "7. Clear Record" << endl
         << "8. Exit" << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:

        addRecord();
        break;

    case 2:
        fflush(stdin);
        modifyRecord();
        break;

    case 3:
        listAll();
        break;
    case 4:
        listsameName();
        break;
    case 5:
        listsameState();
        break;
    case 6:
        listsameDistrict();
        break;
    case 7:
        clearRecord();
        break;
    case 8:
        exit(1);
        break;
    default:
        cout << "Wrong input, try again!";

        main();
        break;
    }

    return 0;
}

void addRecord()
{
    cout << "Enter the Number of students: ";
    int number;
    cin >> number;
    number += studIndex;
    fflush(stdin);
    for (; studIndex < number; studIndex++)
    {
        cout << "Enter Information of Student " << counter + 1 << endl
             << endl;
        fflush(stdin);
        studentInfo[studIndex].inputInfo(counter);
        studentInfo[studIndex].printInfo();
        counter++;
    }
    cout << endl;
    main();
}
void modifyRecord()
{
    cout << "Enter the student's Roll Number whose record you want to change: ";

    char search[8];
    cin.getline(search, 8);
    int i = 0;
    int res;
    for (i = 0; i < counter; i++)
    {
        res = strcmp(studentInfo[i].studentRecord.rollno, search);
    }
    if (res == 0)
    {
        studentInfo[i - 1].modifyInfo();
    }
    else
    {
        cout << "Student Record Doesn't exist\n"
             << endl;
    }
    main();
}
void listAll()
{
    for (int i = 0; i < counter; i++)
    {
        studentInfo[i].printInfo();
    }
    main();
}

void listsameName()
{
    fflush(stdin);
    cout << "Enter the Name you want to search for: ";
    char searchname[50];
    cin.getline(searchname, 50);
    int i = 0;
    int res;
    for (i = 0; i < counter; i++)
    {
        res = strcmp(studentInfo[i].studentRecord.name, searchname);

        if (res == 0)
        {
            studentInfo[i].printInfo();
        }
    }
    main();
}
void listsameState()
{
    fflush(stdin);
    cout << "Enter the State you want to search for: ";
    char searchstate[20];
    cin.getline(searchstate, 20);
    int i = 0;
    int res;
    for (i = 0; i < counter; i++)
    {
        res = strcmp(studentInfo[i].studentRecord.state, searchstate);

        if (res == 0)
        {
            studentInfo[i].printInfo();
        }
    }
    main();
}

void listsameDistrict()
{
    fflush(stdin);
    cout << "Enter the district you want to search for: ";
    char searchdistrict[30];
    cin.getline(searchdistrict, 30);
    int i = 0;
    int res;
    for (i = 0; i < counter; i++)
    {
        res = strcmp(studentInfo[i].studentRecord.district, searchdistrict);

        if (res == 0)
        {
            studentInfo[i].printInfo();
        }
    }
    main();
}
void clearRecord()
{
    cout << "Enter the student's Roll Number whose record you want to clear: ";
    fflush(stdin);
    char search[8];
    cin.getline(search, 8);
    int i = 0;
    int res;
    for (i = 0; i < counter; i++)
    {
        res = strcmp(studentInfo[i].studentRecord.rollno, search);
    }
    if (res == 0)
    {
        clearInfo(studentInfo, i - 1, 200);
    }
    else
    {
        cout << "Student Record Doesn't exist\n\n"
             << endl;
    }
    main();
}

void clearInfo(baseRecord arr[], int index, int size)
{
    cout << "Clearing Record...\n\n"
         << endl;
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    studIndex--;
}