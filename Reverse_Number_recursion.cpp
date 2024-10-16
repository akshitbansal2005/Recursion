#include <iostream>
using namespace std;
void rev(int i) {
    if (i > 0) {
        cout << (i % 10); 
        rev(i / 10);      
    }
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Reversed number is: ";
    rev(num);
    cout << endl;
}
//Output
/*Enter a number: 35
Reversed number is: 53
*/
