#include <iostream>
using namespace std;
void rev(char* str) {
    if (*str != '\0') {
        rev(str + 1); 
        cout << *str; 
    }
}
int main() {
    char str[20];
    cout << "Enter a string: ";
    cin >> str;
    cout << "Reversed string is: ";
    rev(str);
    cout << endl;
}
//Output
/*Enter a string: hellowworld
Reversed string is: dlrowwolleh
*/