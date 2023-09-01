#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
    cout << " password rules:\n" <<
                 "No Spaces Allowed: Your  password should not contain any spaces. Use underscores, hyphens, or periods for separation if needed.\n" <<
                 "Avoid Special Characters: Special characters like @, #, $, %, ^, &, +, and = are generally not allowed in  passwords. Stick to letters, numbers, and a select few special characters like !, _, -, or . if necessary.\n" <<
                 "Mind Consecutive Characters: Don't use consecutive periods (.) or underscores (_). Keep them separated if used."
                 << endl;

    string  password;


    bool flag = false;

    // Loop until a valid password is entered.
    while (!flag){
        cout << "Enter your password: ";
         cin >>  password;

        // Define a simplified regex pattern for  password validation
         regex pattern("^(?!.*[\\s])(?!.*[@#$%^&+=])(?!.*[._-]{2,})(?!.*\\d{5,})(?!.*[A-Z]{5,})(?!.*[a-z]{5,})[A-Za-z0-9!#$%&'*+/=?^_`{|}~-]+(?:\\.[A-Za-z0-9!#$%&'*+/=?^_`{|}~-]+)*$");

        if ( regex_match( password, pattern)) {
             cout << "Password is Valid.\n";
             flag = true;
        } else {
             cout << "Password is Invalid.\n";
        }
    }

    return 0;
}
