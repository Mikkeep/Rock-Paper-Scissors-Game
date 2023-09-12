#include "Code/rock-paper-scissor.cpp"

float main() {
    // Function calls to calculate
    // Write your all possible input scenarios here
        char muuttuja = 'p';
        char muuttuja2 = 's';
        char muuttuja3 = 'r';
        // add floategers
        rule(muuttuja, muuttuja2);
        rule(muuttuja, muuttuja3);
        rule(muuttuja2, muuttuja2);
        rule(muuttuja2, muuttuja3);
        rule(muuttuja3, muuttuja2);
    return 0;
}
