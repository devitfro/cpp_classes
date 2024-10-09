#include <iostream>
#include <string>
#include <sstream>

using namespace std;
void print_count_and_index_symb(string input_string, char symb);
void count_word_in_string(string input_string, string word);
bool is_palindrome(const string& input_string);

int main()
{
	// task 1
	/*string input_string;
	char symb;

	cout << "Enter string: ";
	getline(cin, input_string);

	cout << "Enter symb for search: ";
	cin >> symb;

	print_count_and_index_symb(input_string, symb);*/

	// task 2
	/*string input_string, word;

	cout << "Enter string: ";
	getline(cin, input_string);

	cout << "Enter word for search: ";
	cin >> word;
	count_word_in_string(input_string, word);*/

	// task 3
	string input_string;
	cout << "Enter string: ";
	getline(cin, input_string);

	if (is_palindrome(input_string)) {
		cout << "Is palindrome" << endl;
	}
	else {
		cout << "Not palindrome" << endl;
	}
	

	return 0;
}

bool is_palindrome(const string& input_string) {
	int start = 0;
	int end = input_string.length() - 1;

	while (start < end) {
		if (input_string[start] != input_string[end]) {
			return false;
		}
		start++;
		end--;
	}
	return true;
}

void count_word_in_string(string input_string, string word) {
	int count = 0;
	stringstream ss(input_string);
	string word_;

	while (ss >> word_) {
		if (word_ == word) {
			count++;
		}
	}

	cout << "Word '" << word << "' = " << count << endl;
}

void print_count_and_index_symb(string input_string, char symb) {
	int count = 0;
	for (size_t i = 0; i < input_string.length(); i++) {
		if (input_string[i] == symb) {
			cout << "Index of symb '" << symb << "' = : " << i << endl;;
			count++;
		}
	}
	if (count == 0) {
		cout << "Symbol not found in your string";
	}
	cout << "\nCount of symb: " << symb << "in your string = " << count << endl;
}
