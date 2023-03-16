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

struct{
    string name;
    int age;
    int grade;
    string pronouns;
    float birthday;
    string fandoms[1] = {};
    string haircolor;
    string nationality;
} yourinfo;


//Declare Functions
void printMyinfo();
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
void greeting();


//main
int main() {
    greeting();
    enterYourinfo();
    cout << "\nYour information is: \n\n";
    printYourinfo();
    while (input != "Q" || input != "q"){
        cout << "What would you like to do?\n V: View your Info\n C: Compare our infos\n R: Reenter your info\n Q: Quit\n\n";
        cin >>input;
        if (input == "V" || input == "v"){
            printYourinfo();
        }
        else if (input == "C" || input == "c"){
            compareAll();
        }
        else if (input == "R" || input == "r"){
            enterYourinfo();
            cout << "\nYour information is: \n\n";
            printYourinfo();
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
void enterYourinfo(){
    cout << "Please enter your name: \n";
    cin >> yourinfo.name;
    cout << "Please enter your age: \n";
    cin >> yourinfo.age;
    cout << "Please enter your grade if any: \n";
    cin >> yourinfo.grade;
    cout << "Please enter your pronouns (fromat: prn1/prn2): \n";
    cin >> yourinfo.pronouns;
    cout << "Please enter your birthday(format: dd.mm): \n";
    cin >> yourinfo.birthday;
    cout << "Please enter your main fandom\n\t(!!Please use '_' instead of spaces or use an all caps abbreviation!!): \n";
    cin >> yourinfo.fandoms[0];
    cout << "Please enter your haircolor (!No modifiers like dark/light allowed!): \n";
    cin >> yourinfo.haircolor;
    cout << "Please enter your nationality: \n";
    cin >> yourinfo.nationality;
}

void printYourinfo(){
        cout << yourinfo.name << endl;
        cout << yourinfo.age << endl;
        cout << yourinfo.grade << endl;
        cout << yourinfo.pronouns << endl;
        cout << yourinfo.birthday << endl;
        cout << yourinfo.fandoms[0] << endl;
        cout << yourinfo.haircolor << endl;
        cout << yourinfo.nationality << "\n\n";
}

int compareName(){
    if (yourinfo.name == myinfo.name){
        cout << "Name? Match!\n";
        ++current_score;
    } else {
        cout << "Name? No match :(\n";
    }
    return current_score;
}
int compareAge() {
    if (yourinfo.age == myinfo.age) {
        cout << "Age? Match! \n";
        ++current_score;
    } else {
        cout << "Age? No match :(\n";
    }
    return current_score;
}

int compareGrade() {
    if (yourinfo.grade == myinfo.grade) {
        cout << "Grade? Match!\n";
        ++current_score;
    } else {
        cout << "Grade? No match :(\n";
    }
    return current_score;
}

int comparePronouns() {
    if (yourinfo.pronouns == myinfo.pronouns) {
        cout << "Pronouns? Match!\n";
        ++current_score;
    } else {
        cout << "Pronouns? No match :(\n";
    }
    return current_score;
}

int compareBirthday() {
    if (yourinfo.birthday == myinfo.birthday) {
        cout << "Birthday? Match!\n\n";
        ++current_score;
    } else {
        cout << "Birthday? No match :(\n";
    }
    return current_score;
}

int compareFandoms() {
    if (yourinfo.fandoms[0] == myinfo.fandoms[0][0]
        || yourinfo.fandoms[0] == myinfo.fandoms[0][1]
        || yourinfo.fandoms[0] == myinfo.fandoms[1][0]
        || yourinfo.fandoms[0] == myinfo.fandoms[1][1]) {
            cout << "Fandom(s)? Match!\n\n";
            ++current_score;
    } else {
        cout << "Fandom(s)? No match :(\n\n";
    }
    return current_score;
}

int compareHaircolor() {
    if (yourinfo.haircolor == myinfo.haircolor) {
        cout << "Haircolor? Match!\n\n";
        ++current_score;
    } else {
        cout << "Haircolor? No match :(\n";
    }
    return current_score;
}

int compareNationality() {
    if (yourinfo.nationality == myinfo.nationality) {
        cout << "Nationality? Match!\n\n";
        ++current_score;
    } else {
        cout << "Nationality? No match :(\n";
    }
    return current_score;
}

void compareAll() {
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
