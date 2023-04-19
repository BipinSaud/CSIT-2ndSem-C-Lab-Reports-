#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Write content to file
    ofstream outputFile("demo.txt");
    outputFile << "Hello Bipin";
    cout << "Content written successfully!" << endl;
    outputFile.close();

    // Read content from file
    char text[100];
    ifstream inputFile("demo.txt");
    while (inputFile.getline(text, 100))
    {
        cout << text << endl;
    }
    inputFile.close();

    return 0;
}
