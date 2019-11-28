// Jordan Steer-Furderer
// CIS 25
// This program reads a file and replaces any whitespace
// greater than a single space, with a single spaece.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//
//const string INPUT_FILE = "/Users/jordansteer/Desktop/my_four_line_file.txt";
//const int LINES = 4;

    void blankFixer(){

        const string INPUT_FILE = "/Users/jordansteer/Desktop/my_four_line_file.txt";
        const int LINES = 4;

        ifstream inputFile;
        inputFile.open(INPUT_FILE);
//    ofstream outputFile;
//    outputFile.open("/Users/jordansteer/Desktop/dumbnote.txt");

    //if (inputFile){
        bool wroteSpace = false;

        for (int line = 0; line < LINES; line++){
            string currentLine;
            getline(inputFile, currentLine);

            for (int i = 0; i < currentLine.size(); i++){

                if (currentLine.at(i) != ' '){
                    cout << currentLine.at(i);

                    wroteSpace = false;
                }

                else if(wroteSpace == false){
                    cout << ' ';

                    wroteSpace = true;
                }

            }
cout << endl;


}


}


int main()
{

//    ifstream inputFile;
//    inputFile.open(INPUT_FILE);
//
//const string INPUT_FILE = "/Users/jordansteer/Desktop/my_four_line_file.txt";
//const int LINES = 4;

    blankFixer();

//
//    ofstream outputFile;
//   outputFile.open("/Users/jordansteer/Desktop/dumbnote.txt");
//
//    //if (inputFile){
//
//
//        bool wroteSpace = false;
//
//        for (int line = 0; line < LINES; line++){
//            string currentLine;
//            getline(inputFile, currentLine);
//
//            for (int i = 0; i < currentLine.size(); i++){
//
//                if (currentLine.at(i) != ' '){
//                    cout << currentLine.at(i);
//
//                    wroteSpace = false;
//                }
//
//                else if(wroteSpace == false){
//                    cout << ' ';
//
//                    wroteSpace = true;
//                }
//
//            }
//cout << endl;
//            //cout << currentLine << endl;
//
//    //}
//
// //   inputFile.close();
//   // outputFile.close();
//
//
//    }
//


//
//else {
//    cout << "FOCK YOU" << endl;
//}





//    for (int line = 0; line < LINES; line++){
//        string currentLine;
//        getline(inputFile, currentLine);
//        cout << currentLine << endl;
//
//    }
//
//    inputFile.close();


//  string line;
//  ifstream myfile ("/Users/jordansteer/Desktop/dumbnote.txt");
//  if (myfile.is_open())
//  {
//    while ( getline (myfile,line) )
//    {
//      cout << line << '\n';
//    }
//    myfile.close();
//  }
//
//  else cout << "Unable to open file";

  return 0;

}
