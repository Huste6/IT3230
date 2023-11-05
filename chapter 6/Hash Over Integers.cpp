
#include <iostream>
#include <unordered_set>
#include <string>
#include <sstream>
using namespace std;

int main() {
    unordered_set<long long> database;
    string line;

    // Read the keys into the database
    while (getline(cin, line)) {
        if (line == "*") {
            break;
        }
        stringstream ss(line);
        long long key;
        while (ss >> key) {
            database.insert(key);
        }
    }

    // Process the actions
    while (getline(cin, line)) {
        if (line == "***") {
            break;
        }
        stringstream ss(line);
        string cmd;
        long long key;
        ss >> cmd >> key;
        if (cmd == "find") {
            if (database.count(key) > 0) {
                cout << "1\n";
            } else {
                cout << "0\n";
            }
        } else if (cmd == "insert") {
            if (database.count(key) > 0) {
                cout << "0\n";
            } else {
                database.insert(key);
                cout << "1\n";
            }
        }
    }

    return 0;
}

