#include <iostream>
#include <string>
using namespace std;
int main() {
    string P1, P2, T;
    getline(cin, P1);  
    getline(cin, P2);  
    getline(cin, T);  

    size_t pos = T.find(P1); 

    while (pos != string::npos) {
        T.replace(pos, P1.length(), P2);  
        pos = T.find(P1, pos + P2.length()); 
    }

    std::cout << T << std::endl; 
    return 0;
}
