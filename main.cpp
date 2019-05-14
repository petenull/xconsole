#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    time_t date;
    struct tm * timeinfo;
    time (&date);
    timeinfo = localtime (&date);
    printf ("%s", asctime(timeinfo));
    string line;
    while(getline(cin, line)) {
        if (line == "help") {
            printf("list of commands:\n");
            printf("    exit - exits program\n");
            printf("    random - prints random number from 1 - 9\n");
        }
        else if (line == "exit") {
            return 0;
        }
        
        else if (line == "random") {
            int r = rand() % 9 + 1;
            cout << r << "\n";
        }
        else if (line == "") {}
        else if (line == "passgen") {
            int r1 = rand() % 9 + 1;
            int r2 = rand() % 9 + 1;
            int r3 = rand() % 9 + 1;
            int r4 = rand() % 9 + 1;
            int r5 = rand() % 9 + 1;
            int r6 = rand() % 9 + 1;
            int r7 = rand() % 9 + 1;
            int r8 = rand() % 9 + 1;
            cout << r1 << r2 << r3 << r4 << r5 << r6 << r7 << r8 << "\n";
        }
        else {
            printf("unknown command\n");
        }
    }
}
