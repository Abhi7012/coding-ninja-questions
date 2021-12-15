// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//find largest sum from the 2d array;
void findLargest(int** input, int nRows, int mCols)
{
    //Write your code here
    int n = nRows;
    int m = mCols;
    int maxsum = INT_MIN;
    int sum = 0;
    int rc = 0;
    int x = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum = sum + input[i][j];

        }
        if (sum > maxsum) {
            maxsum = sum;
            rc = i;
            x = 0;
        }
        sum = 0;

    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum = sum + input[j][i];

        }
        if (sum > maxsum) {
            maxsum = sum;
            rc = i;
            x = 1;
        }
        sum = 0;

    }
    if (x == 0) {
        cout << "row" << " " << rc << " " << maxsum;

    }
    else {
        cout << "column" << " " << rc << " " << maxsum;

    }
}


//check if a array is a palindrome or not
bool checkPalindrome(char str[]) {
    // Write your code here
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        count++;
        i++;

    }
    int j = count - 1;
    i = 0;
    while (i <= j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}


//replacing elements of a char array
void replaceCharacter(char input[], char c1, char c2) {
    // Write your code here
    int i = 0;
    int count = 0;
    while (input[i] != '\0') {
        count++;
        i++;
    }
    i = 0;
    for (; i < count; i++) {
        if (input[i] == c1) {
            input[i] = c2;
        }

    }

}


//triming spaces from char arrays
void trimSpaces(char input[]) {
    // Write your code here
    int count = 0;
    while (input[count] != '\0') {
        count++;
    }
    int i = 0;
    while (i < count) {
        if (input[i] == ' ') {
            int j = i;
            while (j < count) {
                input[j] = input[j + 1];
                j++;
            }
        }
        else {
            i++;

        }
    }
}




//reversing an char array word wise
void reverseStringWordWise(char input[]) {
    // Write your code here
    int count = 0;
    while (input[count] != '\0') {
        count++;
    }
    int i = 0;
    int j = count - 1;
    while (i <= j) {
        int temp;
        temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
    i = 0;
    int space = 0;

    while (space <= count) {
        if (input[space] == ' ' || input[space] == '\0') {
            int k = space - 1;
            while (i <= k) {
                int temp;
                temp = input[i];
                input[i] = input[k];
                input[k] = temp;
                i++;
                k--;
            }
            i = space + 1;
        }
        space++;
    }

}



//printing all substrings
void printSubstrings(char input[]) {
    // Write your code here
    for (int i = 0; input[i] != '\0'; i++) {
        for (int j = i; input[j] != '\0'; j++) {
            for (int k = i; k <= j; k++) {
                cout << input[k];

            }
            cout << endl;
        }
    }
}



int main()
{
    cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
