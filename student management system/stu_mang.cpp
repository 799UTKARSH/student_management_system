#include <iostream>
using namespace std;
string name[20], roll[20], course[20], branch[20], year[20], email[20], mob[20];
int total = 0;

void enter()
{
    int choice;
    cout << "Howmany students info do you want to enter" << endl;
    cin >> choice;
    if (total == 0)
    {

        total = total + choice;
        for (int i = 0; i < choice; i++)
        {
            cout << "\nEnter data of student " << i + 1 << endl
                 << endl;
            cout << "Enter name:  ";
            cin >> name[i];
            cout << "enter roll no.: ";
            cin >> roll[i];
            cout << "course:  ";
            cin >> course[i];
            cout << "Branch name: ";
            cin >> branch[i];
            cout << "Enter current year:  ";
            cin >> year[i];
            cout << "Enter email: ";
            cin >> email[i];
            cout << "Enter mobile no.: ";
            cin >> mob[i];
        }
    }
    else
    {
        for (int i = total; i < choice + total; i++)
        {
            cout << "\nEnter data of student " << i + 1 << endl
                 << endl;
            cout << "Enter name:  ";
            cin >> name[i];
            cout << "Roll no.: ";
            cin >> roll[i];
            cout << "course:  ";
            cin >> course[i];
            cout << "Branch name: ";
            cin >> branch[i];
            cout << "Enter current year:  ";
            cin >> year[i];
            cout << "Enter email: ";
            cin >> email[i];
            cout << "Enter mobile no.: ";
            cin >> mob[i];
        }
        total = total + choice;
    }
}
void display()
{
    if (total == 0)
    {
        cout << "No data is inserted now...." << endl;
    }
    else
    {
        cout << "student details" << endl;
        cout << "-----------------------------------------------------------------------------" << endl;
        for (int i = 0; i < total; i++)
        {
            cout << "student" << i + 1 << endl
                 << endl;
            cout << "name: " << name[i] << endl;
            cout << "Roll no.: " << roll[i] << endl;
            cout << "course name: " << course[i] << endl;
            cout << "branch name:  " << branch[i] << endl;
            cout << "current year: " << year[i] << endl;
            cout << "email id: " << email[i] << endl;
            cout << "mobile no.:  " << mob[i] << endl;
            cout << "----------------------------------------------------------------------------" << endl;
        }
    }
}
void update()
{
    string roll_no;
    char choice, cond;
    if (total == 0)
    {
        cout << "No data is inserted now...." << endl;
    }
    else
    {

        cout << "Enter roll no. of student which you want to search:  ";
        cin >> roll_no;
        for (int i = 0; i < total; i++)
        {
            if (roll_no == roll[i])
            {
                cout << "student previous saved record" << endl;
                cout << "name: " << name[i] << endl;
                cout << "Roll no.: " << roll[i] << endl;
                cout << "course name: " << course[i] << endl;
                cout << "branch name:  " << branch[i] << endl;
                cout << "current year: " << year[i] << endl;
                cout << "email id: " << email[i] << endl;
                cout << "mobile no.:  " << mob[i] << endl;

                cout << "------------------------------------------------------------------------------" << endl;

                cout << "if u want to update in a particular field press 1: " << endl;
                cout << "if u want to change in all field press 2: " << endl;
                cin >> choice;
                bool x = true;
                if (choice == '1')
                {
                    while (x == true)
                    {
                        cout << "if u want to update in a paticular field , enter name of field :" << endl;
                        cout << "for( name -> n ,roll no.->r, course-> c, Branch name -> b, year-> y, email-> e, mobile no.-> m)" << endl;
                        cout << "if u want to no update press x: " << endl;
                        cin >> cond;

                        switch (cond)
                        {
                        case 'n':
                            cout << "Enter student name:  ";
                            cin >> name[i];
                            break;
                        case 'r':
                            cout << "Enter student roll no:  ";
                            cin >> roll[i];
                            break;
                        case 'c':
                            cout << "Enter course name:  ";
                            cin >> course[i];
                            break;
                        case 'b':
                            cout << "Enter branch name:  ";
                            cin >> branch[i];
                            break;
                        case 'y':
                            cout << "Enter current year:  ";
                            cin >> year[i];
                            break;
                        case 'm':
                            cout << "Enter mobile no:  ";
                            cin >> mob[i];
                            break;
                        case 'x':
                            x = false;
                            break;
                        default:
                            cout << "u entered a wrong field";
                            break;
                        }
                    }
                }
                else if (choice == '2')
                {
                    cout << "Enter updated information of student: " << endl
                         << endl;

                    cout << "\nEnter data of student " << i + 1 << endl
                         << endl;
                    cout << "Enter name:  ";
                    cin >> name[i];
                    cout << "Roll no.: ";
                    cin >> roll[i];
                    cout << "course:  ";
                    cin >> course[i];
                    cout << "Branch name: ";
                    cin >> branch[i];
                    cout << "Enter current year:  ";
                    cin >> year[i];
                    cout << "Enter email: ";
                    cin >> email[i];
                    cout << "Enter mobile no.: ";
                    cin >> mob[i];
                }
                else
                {
                    cout << "Wrong choice !";
                }
                
            }
        }
    }
}
void search()
{
    string roll_no;
    if (total == 0)
    {
        cout << "No data is inserted now...." << endl;
    }
    else
    {
        cout << "Enter roll no. of student which you want to search:  ";
        cin >> roll_no;

        for (int i = 0; i < total; i++)
        {
            if (roll_no == roll[i])
            {
                cout << "searched student record" << endl;
                cout << "name: " << name[i] << endl;
                cout << "Roll no.: " << roll[i] << endl;
                cout << "course name: " << course[i] << endl;
                cout << "branch name:  " << branch[i] << endl;
                cout << "current year: " << year[i] << endl;
                cout << "email id: " << email[i] << endl;
                cout << "mobile no.:  " << mob[i] << endl;
            }
        }
    }
}
void remove()
{
    int n;
    if (total == 0)
    {
        cout << "No data is inserted now...." << endl;
    }
    else
    {
        cout << "Deleting all entery of students information press 1:" << endl;
        cout << "Deleting a specific student information press 2: " << endl;
        cin >> n;
        if (n == 1)
        {
            total = 0;
        }
        else if (n == 2)
        {
            string roll_no;
            cout << "enter the roll no of the student which you want to delete:  ";
            cin >> roll_no;
            for (int i = 0; i < total; i++)
            {
                if (roll_no == roll[i])
                {
                    for (int j = i; j < total; j++)
                    {
                        name[j] = name[j + 1];
                        roll[j] = roll[j + 1];
                        course[j] = course[j + 1];
                        branch[j] = branch[j + 1];
                        year[j] = year[j + 1];
                        email[j] = email[j + 1];
                        mob[j] = email[j + 1];
                    }
                    total = total - 1;
                    cout << "your required record is deleted from the saved record:" << endl;
                }
            }
        }
    }
}

int main()
{
    int value;
    while (true)
    {
        cout << "For inserting student information press 1" << endl;
        cout << "For display the inserted info. of student press 2" << endl;
        cout << "For updating the inserted info of student press 3" << endl;
        cout << "for searching a student info press 4" << endl;
        cout << "for deleting the inserted  info of student press 5" << endl;
        cout << "for exit press 6" << endl;
        cin >> value;

        switch (value)
        {
        case 1:
            enter();
            break;
        case 2:
            display();
            break;
        case 3:
            update();
            break;
        case 4:
            search();
            break;
        case 5:
            remove();
            break;
        case 6:
            exit(0);
            break;

        default:
            cout << "Invalid entery , Enter valid entry :" << endl;
            break;
        }
    }
    return 0;
}