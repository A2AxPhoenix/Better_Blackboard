#include "../dependencies/read.h"
#include "unistd.h"
#include <exception>
#include <unordered_map>
#include "Professor.h"
#include "Student.h"
#include "Assessment.h"
using namespace std;

int main() {

    const short PROF = 1;
    const short STUDENT = 2; 

    unordered_map<A, class Tp>

    system("figlet Better Blackboard | lolcat"); // if you do not have either installed, comment this line
                                                 // cout << "BETTER BLACKBOARD TM" << endl;   // then uncomment this line.
    usleep(100'000); // Sleep for a sec
    cout << "Welcome to Better Blackboard." << endl;
    usleep(100'000); 
    int profOrStud = 0;
    while (true) {
        try {
            profOrStud = read("Are you a 1) Professor or 2) Student?\n");
            if (profOrStud < PROF or profOrStud > STUDENT) throw logic_error("Invalid input. Please enter either a \"1\" or \"2\" only.\n");
            else break;
        }
        catch (exception &e) {
            cout << e.what() << endl;
        }
    }
    try {
        if (profOrStud == PROF) {
            
        }
        else if (profOrStud == STUDENT) {

        }
        else { // Sanity Check
            throw runtime_error("This should be impossible.\nError: Professor and Student conditional throwing on already verified values.\n");
        }
    }
    catch (exception &e) {
        cout << e.what() << endl;
    }
}
