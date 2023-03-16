#include <iostream>
#include <cstring>

using namespace std;


//Global Variables
const int max_score = 8;
int current_score = 0;
string input;

struct {
    const string name = "Nick";
    const int age = 15;
    const int grade = 10;
    const string pronouns = "he/xe";
    const float birthday = 29.09;
    const string fandoms[2][2] = {
        {"The_Owl_House","TOH"},
        {"Harry_Potter","HP"},
    };
    const string haircolor = "brown";
    const string nationality ="german";
} myinfo;

//Declare Functions
void printMyinfo();
void greeting();


//Classes
class User {
    public:
        string name;
        int age;
        int grade;
        string pronouns;
        float birthday;
        string fandoms[1] = {};
        string haircolor;
        string nationality;
        //Functions
        void printYourinfo();
        int compareName();
        int compareAge();
        int compareGrade();
        int comparePronouns();
        int compareBirthday();
        void enterYourinfo();
        void compareAll();
        int compareFandoms();
        int compareHaircolor();
        int compareNationality();

        User(){
            enterYourinfo();
        }
};


//main
int main() {
    greeting();
    User user1;
    user1.printYourinfo();
    while (input != "Q" || input != "q"){
        cout << "What would you like to do?\n V: View your Info\n C: Compare our infos\n R: Reenter your info\n Q: Quit\n\n";
        cin >>input;
        if (input == "V" || input == "v"){
            user1.printYourinfo();
        }
        else if (input == "C" || input == "c"){
            user1.compareAll();
        }
        else if (input == "R" || input == "r"){
            user1.enterYourinfo();
            cout << "\nYour information is: \n\n";
            user1.printYourinfo();
        }
        else if (input == "Q" || input == "q"){
                cout << "Bye! :)\n\n";
                return 0;
        }
        else{
            cout << "!Not a valid input option!\n\n";
        }
    }
}


//Define Functions
void User::enterYourinfo(){
    cout << "Please enter your name: \n";
    cin >> this->name;
    cout << "Please enter your age: \n";
    cin >> this->age;
    cout << "Please enter your grade if any: \n";
    cin >> this->grade;
    cout << "Please enter your pronouns (fromat: prn1/prn2): \n";
    cin >> this->pronouns;
    cout << "Please enter your birthday(format: dd.mm): \n";
    cin >> this->birthday;
    cout << "Please enter your main fandom\n\t(!!Please use '_' instead of spaces or use an all caps abbreviation!!): \n";
    cin >> this->fandoms[0];
    cout << "Please enter your haircolor (!No modifiers like dark/light allowed!): \n";
    cin >> this->haircolor;
    cout << "Please enter your nationality: \n";
    cin >> this->nationality;
}

void User::printYourinfo(){
        cout << "\nYour information is: \n\n";
        cout << this->name << endl;
        cout << this->age << endl;
        cout << this->grade << endl;
        cout << this->pronouns << endl;
        cout << this->birthday << endl;
        cout << this->fandoms[0] << endl;
        cout << this->haircolor << endl;
        cout << this->nationality << "\n\n";
}

int User::compareName(){
    if (this->name == myinfo.name){
        cout << "Name? Match!\n";
        ++current_score;
    } else {
        cout << "Name? No match :(\n";
    }
    return current_score;
}
int User::compareAge() {
    if (this->age == myinfo.age) {
        cout << "Age? Match! \n";
        ++current_score;
    } else {
        cout << "Age? No match :(\n";
    }
    return current_score;
}

int User::compareGrade() {
    if (this->grade == myinfo.grade) {
        cout << "Grade? Match!\n";
        ++current_score;
    } else {
        cout << "Grade? No match :(\n";
    }
    return current_score;
}

int User::comparePronouns() {
    if (this->pronouns == myinfo.pronouns) {
        cout << "Pronouns? Match!\n";
        ++current_score;
    } else {
        cout << "Pronouns? No match :(\n";
    }
    return current_score;
}

int User::compareBirthday() {
    if (this->birthday == myinfo.birthday) {
        cout << "Birthday? Match!\n\n";
        ++current_score;
    } else {
        cout << "Birthday? No match :(\n";
    }
    return current_score;
}

int User::compareFandoms() {
    if (this->fandoms[0] == myinfo.fandoms[0][0]
        || this->fandoms[0] == myinfo.fandoms[0][1]
        || this->fandoms[0] == myinfo.fandoms[1][0]
        || this->fandoms[0] == myinfo.fandoms[1][1]) {
            cout << "Fandom(s)? Match!\n\n";
            ++current_score;
    } else {
        cout << "Fandom(s)? No match :(\n\n";
    }
    return current_score;
}

int User::compareHaircolor() {
    if (this->haircolor == myinfo.haircolor) {
        cout << "Haircolor? Match!\n\n";
        ++current_score;
    } else {
        cout << "Haircolor? No match :(\n";
    }
    return current_score;
}

int User::compareNationality() {
    if (this->nationality == myinfo.nationality) {
        cout << "Nationality? Match!\n\n";
        ++current_score;
    } else {
        cout << "Nationality? No match :(\n";
    }
    return current_score;
}

void User::compareAll() {
    compareName();
    compareAge();
    compareGrade();
    comparePronouns();
    compareBirthday();
    compareFandoms();
    compareHaircolor();
    compareNationality();
    cout << "\nYour final score is: " << current_score << "/" << max_score << "\n\n";
    current_score= 0;
}

void greeting() {
    cout << "Greetings foreigner!\nI hope you'll have a wonderful time in this silly programm :3\n\n";
}
