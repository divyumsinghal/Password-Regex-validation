# Password Regex Validation


## Table of Contents

1. [Overview](#overview)
2. [Explanation of the Regex Pattern](#explanation-of-the-regex-pattern)
3. [Valid and Invalid Passwords](#valid-and-invalid-passwords)
   1. [Valid Passwords](#valid-passwords)
   2. [Invalid Passwords](#invalid-passwords)
4. [License](#license)


## Overview

This C++ project provides a regex pattern for validating passwords based on a set of complex rules. The regex pattern enforces various constraints to ensure that passwords meet specific security requirements.

## Explanation of the Regex Pattern

1. **Password can't contain whitespace:** `(?!.*[\s])`
    - This part ensures that there are no whitespace characters in the Password.

2. **Password can't contain special characters (except for allowed ones):** `(?!.*[@#$%^&+=])`
    - This section prevents the use of special characters like @, #, $, %, ^, &, +, and = in the Password.

3. **Password can't contain consecutive periods, underscores, or hyphens:** `(?!.*[._-]{2,})`
    - This part ensures that there are no consecutive periods, underscores, or hyphens in the Password.

4. **Password can't contain more than 4 consecutive digits:** `(?!.*\d{5,})`
    - It restricts the Password from having more than 4 consecutive digits.

5. **Password can't contain more than 4 consecutive uppercase letters:** `(?!.*[A-Z]{5,})`
    - This rule prevents more than 4 consecutive uppercase letters in the Password.

6. **Password can't contain more than 4 consecutive lowercase letters:** `(?!.*[a-z]{5,})`
    - This rule prevents more than 4 consecutive lowercase letters in the Password.

7. **Main Password part:** `[A-Za-z0-9!#$%&'*+/=?^_`{|}~-]+`
    - This part allows a combination of alphanumeric characters and a selected set of special characters.

8. **Optional periods and alphanumeric characters for subdomains:** `(?:\.[A-Za-z0-9!#$%&'*+/=?^_`{|}~-]+)*`
    - This part allows for subdomains, which are separated by periods and follow the same character rules as the main Password.

## Explanation of the Regex Pattern

1. `^`: Asserts the start of the string.

2. `(?!.*[\\s])`: Negative lookahead assertion to ensure that there are no whitespace characters in the string.

3. `(?!.*[@#$%^&+=])`: Negative lookahead assertion to ensure that there are no special characters like @, #, $, %, ^, &, +, or = in the string.

4. `(?!.*[._-]{2,})`: Negative lookahead assertion to ensure that there are no sequences of two or more periods (.), underscores (_), or hyphens (-) in a row in the string.

5. `(?!.*\\d{5,})`: Negative lookahead assertion to ensure that there are no sequences of five or more digits in a row in the string.

6. `(?!.*[A-Z]{5,})`: Negative lookahead assertion to ensure that there are no sequences of five or more uppercase letters in a row in the string.

7. `(?!.*[a-z]{5,})`: Negative lookahead assertion to ensure that there are no sequences of five or more lowercase letters in a row in the string.

8. `[A-Za-z0-9!#$%&'*+/=?^_`{|}~-]+`: Matches one or more characters from the character class, which includes letters (both uppercase and lowercase), digits, and various special characters.

9. `(?:\\.[A-Za-z0-9!#$%&'*+/=?^_`{|}~-]+)*`: This part handles the validation of domain names. It allows for a dot (.) followed by a series of characters similar to the previous character class, and this can repeat zero or more times due to the asterisk (*).

10. `$`: Asserts the end of the string.

## Valid and Invalid Passwords:

### Valid Passwords:
1. `johnDoe123`
    - Contains a mix of letters and digits, with no special characters, consecutive digits, or consecutive uppercase/lowercase letters.

2. `Alice.Smith`
    - Uses a period as a separator in the Password and includes both uppercase and lowercase letters.

### Invalid Passwords:
1. `my name`
    - Contains a space, which is not allowed.

2. `user@site`
    - Contains the @ symbol, which is not allowed.

3. `too__many_underscores`
    - Includes consecutive underscores, which are not allowed.

4. `12345Password`
    - Contains more than four consecutive digits, which is not allowed.

5. `TOOMANYCAPS`
    - Contains more than four consecutive uppercase letters, which is not allowed.

6. `lowercaseletters`
    - Contains more than four consecutive lowercase letters, which is not allowed.

7. `Password.....`
    - Includes consecutive periods, which are not allowed.

8. `user&name`
    - Contains the & symbol, which is not allowed.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
