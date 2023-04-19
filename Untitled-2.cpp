#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Open the input file
    ifstream input_file("file1.txt");

    // Open the output file
    ofstream output_file("file2.txt");

    // Copy the contents of the input file to the output file
    char c;
    while (input_file.get(c))
    {
        output_file << c;
    }
    cout << "content of file1 copied in file2.";

    // Close the input and output files
    input_file.close();
    output_file.close();

    return 0;
}
