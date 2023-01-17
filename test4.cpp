#include "Application.h"

int main(){
    TextEditor editor;
    cout << "Enter file name: ";
    string fileName;
    cin >> fileName;
    editor.openFile(fileName);
    editor.editFile();
    editor.saveFile();
}