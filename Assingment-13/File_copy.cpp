#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Open input file for reading
    ifstream fin("input.txt");

    // Open output file for writing
    ofstream fout("output.txt");

    char ch;

    // Check whether input file is opened or not
    if (!fin)
    {
        cout << "Unable to open input file.";
        return 1;
    }

    // Read characters from input file one by one
    while (fin.get(ch))
    {
        // Write each character into output file
        fout.put(ch);
    }

    // Display message after copying the file
    cout << "File copied successfully.";

    // Close both files
    fin.close();
    fout.close();

    return 0;
}
