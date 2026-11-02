// ------------------------------------------------
// № 1, 1 способ

// #include <fstream>

// int main() {
//     std::ifstream inn("input.txt");
//     std::ofstream outt("output.txt");

//     char c;

//     while (inn.get(c)) {
//         c = tolower(c);

//         if (c != 'u' && c != 's' && c != 'e' &&
//             c != 'r' && c != 'a' && c != 'g' &&
//             c != 'm' && c != 'n' && c != 't') {
//             outt << c;
//         }
//     }

//     inn.close();
//     outt.close();

//     return 0;
// }

// ------------------------------------------------
// № 1, 2 способ


// #include <fstream>
// #include <string>
// #include <cctype>


// int main() {
//     std::ifstream fin("input.txt");
//     std::ofstream fout("output.txt");

//     std::string s = "useragmnt";
//     char c;

//     while (fin.get(c)) {
//         char x = tolower(c);

//         if (s.find(x) == std::string::npos) {
//             fout << c;
//         }
//     }

//     fin.close();
//     fout.close();

//     return 0;
// }


// ------------------------------------------------
// № 2


// #include <iostream>
// #include <fstream>
// #include <string>

// int main() {
//     std::ifstream inn1("input1.txt");
//     std::ifstream inn2("input2.txt");

//     std::string x, y;

//     inn1 >> x;
//     inn2 >> y;
//     if (x.find(y) != std::string::npos) {
//         std::cout << "yes" << std::endl;
//     }
//     else {
//         std::cout << "no" << std::endl;
//     }

//     inn1.close();
//     inn2.close();

//     return 0;
// }

// ------------------------------------------------
// № 3


// #include <iostream>
// #include <fstream>
// #include <string>

// int main() {
//     std::ifstream inn("input.txt");
//     std::ofstream outt("output.txt");

//     std::string s;
//     getline(inn, s);

//     for (int i = 0; i < s.size(); i++) {
//         if (s[i] >= '0' && s[i] <= '9') {
//             unsigned long long n = 0;

//             while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
//                 n = n * 10 + s[i] - '0';
//                 i++;
//             }

//             std::string b = "";

//             if (n == 0)
//                 b = "0";

//             while (n > 0) {
//                 b = char(n % 2 + '0') + b;
//                 n = n / 2;
//             }

//             outt << b;
//             i--;
//         }
//         else {
//             outt << s[i];
//         }
//     }

//     return 0;
// }

