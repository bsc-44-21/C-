#include<iostream>
#include<algorithm>// functions for a range of elements (containers) such as arrays, vectors, lists, etc
#include<iterator>// provides various iterator-related classes and functions.
#include<fstream>
#include<sstream>
#include<string>
#include<cctype>//functions for character classification and transformation

using namespace std;

namespace words {
    //Declaring all functions in the namespace
    string read_file(const string& file_name);
    int count_words(const string& text);
    int count_vowels(const string& text);
    string reverse_and_capitalize(const string& text);
}

int main() {
    const string file_name = "Text.txt";
    string file_data = words::read_file(file_name);
    if (file_data.empty()) {
        cerr << "File data is empty. Exiting.\n";
        return 1;
    }

    cout << "File contents:\n" << file_data << endl;

    int num_words_statement = words::count_words(file_data);
    cout << "Number of words in the text statement: " << num_words_statement << endl;

    int num_vowels = words::count_vowels(file_data);
    cout << "Number of vowels in the text statement: " << num_vowels << endl;

    string reversed_text = words::reverse_and_capitalize(file_data);
    cout << "Reversed text with second letter capitalized: " << reversed_text << endl;

    return 0;
}

// Function reads the contents of the file using reference
string words::read_file(const string& file_name) {
    ifstream file(file_name);
    if (!file.is_open()) {
        cerr << "Error opening file '" << file_name << "'\n";
        return "";
    }

    stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

// Function calculates the number of words in the text file
int words::count_words(const string& text) {
    istringstream iss(text);
    return distance(istream_iterator<string>(iss), istream_iterator<string>());
}

// Function calculates the number of vowels in a string
int words::count_vowels(const string& text) {
    int count = 0;
    for (char c : text) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

// Function reverses the text and capitalizes the second letter of each word
string words::reverse_and_capitalize(const string& text) {
    string reversed_text = text;
    reverse(reversed_text.begin(), reversed_text.end());

    bool capitalize_next = true;
    for (char& c : reversed_text) {
        if (isalpha(c)) {
            if (capitalize_next) {
                c = toupper(c);
                capitalize_next = false;
            } else {
                capitalize_next = true;
            }
        }
    }

    return reversed_text;
}
