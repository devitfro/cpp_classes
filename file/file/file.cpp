#include <iostream>
#include <cstdio> 

using namespace std;

int main() {
    string theme, word;

    cout << "Enter theme: ";
    cin >> theme;

    cout << "Enter word: ";
    cin >> word;

    const char* fileNameFlowers = "flowers.txt";
    const char* fileNameAnimals = "animals.txt";

    FILE* fileFLowers = nullptr;
    FILE* fileAnimals = nullptr;

    errno_t errFlowers = fopen_s(&fileFLowers, fileNameFlowers, "a");
    errno_t errAnimals = fopen_s(&fileAnimals, fileNameAnimals, "a");

    if (errFlowers != 0) {
        cout << "Could not open flowers.txt for writing!\n";
    }

    if (errAnimals != 0) {
        cout << "Could not open animals.txt for writing!\n";
    }
   
    if (theme == "flowers" && fileFLowers) {
        fprintf(fileFLowers, "%s\n", word.c_str());
        fclose(fileFLowers);
        cout << "Word written to flowers.txt\n";
    }
    else if (theme == "animals" && fileAnimals) {
        fprintf(fileAnimals, "%s\n", word.c_str());
        fclose(fileAnimals);
        cout << "Word written to animals.txt\n";
    }
    else {
        string fileNameAnother = theme + ".txt";
        FILE* fileAnother = nullptr;
        errno_t errAnother = fopen_s(&fileAnother, fileNameAnother.c_str(), "a");
       
        if (fileFLowers) {
            fprintf(fileAnother, "%s\n", word.c_str());
            fclose(fileAnother);
            cout << "Word written to " << fileNameAnother << "\n";
        }
    }

    return 0;
}
