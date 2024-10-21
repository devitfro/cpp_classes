#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <ctime> 
#include <cstring>

using namespace std;
void print_count_and_index_symb(string input_string, char symb);
void count_word_in_string(string input_string, string word);
bool is_palindrome(const string& input_string);
bool is_spam(const string& user_input, string spam_words[], int size);
const char* generate_password(int length);

int main()
{
	// task 1
	string input_string;
	char symb;

	cout << "Enter string: ";
	getline(cin, input_string);

	cout << "Enter symb for search: ";
	cin >> symb;

	print_count_and_index_symb(input_string, symb);

	// task 2
	string input_string, word;

	cout << "Enter string: ";
	getline(cin, input_string);

	cout << "Enter word for search: ";
	cin >> word;
	count_word_in_string(input_string, word);

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

	// task 4
	const int SIZE = 2;
	string spam_words[SIZE] = { "viagra", "xxx" };

	cout << "Enter string: ";
	string user_input;
	getline(cin, user_input);

	bool result = is_spam(user_input, spam_words, SIZE);
	if (result) {
		cout << "It's spam!" << endl;
	}
	else {
		cout << "No spam!" << endl;
	}

	// task 5
	int length;
	cout << "Enter the password length: ";
	cin >> length;

	if (length <= 0 || length >= 31) {
		cout << "Password length must be between 1 and 30." << endl;
		return 1;
	}

	const char* password = generate_password(length);
	cout << "Generated password: " << password << endl;

	return 0;
}

const char* generate_password(int length) {
	const char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+";
	static char password[30];
	password[0] = '\0';

	srand((time(0)));

	for (int i = 0; i < length; i++) {
		int index = rand() % (sizeof(characters) - 1);
		strncat_s(password, &characters[index], 1);
	}

	return password;
}

bool is_spam(const string& user_input, string spam_words[], int size) {
	string lower_input;
	lower_input.reserve(user_input.size());

	for (char ch : user_input) {
		lower_input += tolower(ch);
	}

	for (int i = 0; i < size; i++) {
		if (lower_input.find(spam_words[i]) != string::npos) {
			return true;
		}
	}
	return false;
}

bool is_palindrome(const string& input_string) {
	int start = 0;
	size_t end = input_string.length() - 1;

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
