#include<bits/stdc++.h>
using namespace std;

//chatbot
void chatbot(){
    string input;
    cout<<"Chatbot: Hello! How can I help You?"<<endl;
    while(1){
        getline(cin, input);
        if (input.find("hi") != string::npos || input.find("hello") != string::npos) {
            cout << "Chatbot: Hello there!" <<endl;
        }
        else if(input.find("how are you") != string::npos ){
            cout << "Chatbot: I'm good, thank you for asking. How are you?" <<endl;
        }
        else if(input.find("I am fine how about you?")!=string::npos  || input.find("well") !=string::npos){
            cout<<"Chatbot: Nice to meet you. Do you have any question?"<<endl;
        }
        else if(input.find("Describe Tower of Hanoi Problem?") != string::npos ){
            cout << "Chatbot: The Tower of Hanoi is a mathematical puzzle that consists of three rods and a number of disks of different sizes, which can slide onto any rod. The puzzle starts with the disks in a neat stack in ascending order of size on one rod, the smallest at the top, thus making a conical shape. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules: Only one disk can be moved at a time Each move consists of taking the upper disk from one of the rods and sliding it onto another rod, on top of the other disks that may already be present on that rod No disk may be placed on top of a smaller disk The puzzle can be solved using a recursive algorithm. The basic idea is to divide the problem into subproblems by moving the top n-1 disks from the source rod to the auxiliary rod, then moving the nth disk from the source rod to the target rod, and finally moving the n-1 disks from the auxiliary rod to the target rod. The number of moves required to solve a Tower of Hanoi puzzle is 2^n - 1, where n is the number of disks. This can be proven using mathematical induction. The Tower of Hanoi is a classic example of a problem that can be solved using recursion, and it is often used as a teaching tool in computer science and mathematics. It is also used to teach problem-solving and algorithm design, as well as to illustrate the power and the limits of recursion.?" <<endl;
        }
        else if (input.find("bye") != string::npos || input.find("exit") != string::npos) {
            cout << "Chatbot: Goodbye!" << endl;
            break;
        }
        else {
            cout << "Chatbot: I'm sorry, I didn't understand what you said. Could you repeat it?" <<endl;
        }
    } 
}

// text editor
class TextEditor {
  public:
    void openFile(string fileName);
    void editFile();
    void saveFile();
  private:
    string fileName;
    string fileContent;
};

void TextEditor::openFile(string fileName) {
    this->fileName = fileName;
    ifstream file(fileName);
    string line;
    while (getline(file, line)) {
        fileContent += line + '\n';
    }
    file.close();
}

void TextEditor::editFile() {
    cout << "File content:\n" << fileContent << std::endl;
    cout << "Enter new content (type 'exit' to save and exit):\n";
    string newContent;
    string line;
    while (getline(cin, line)) {
        if (line == "exit") {
            break;
        }
        newContent += line + '\n';
    }
    fileContent = newContent;
}

void TextEditor::saveFile() {
    ofstream file(fileName);
    file << fileContent;
    file.close();
}

