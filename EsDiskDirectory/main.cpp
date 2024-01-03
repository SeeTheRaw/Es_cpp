#include "DiskFile.hpp"
#include "DiskDirectory.hpp"


int main(){

DiskFile file01 ("ricettario.txt", 80, false);
DiskFile file02 ("passwords.txt", 34, true);
DiskFile file03 ("drawing.jpeg", 79, true);
file01.print();

DiskDirectory cartella01 ("cartella01");
DiskDirectory cartella02 ("eserciziVecchi");

cartella01.addFile(file01);
cartella01.addFile(file03);
cartella01.addDirectory(cartella02);
cartella01.list(cartella01);

cout << "\n\n";
cartella01.removeFile(2);
cartella01.list(cartella01);

cout << "\n\n";
cartella01.removeDirectory(3);
cartella01.list(cartella01);









return 0;

}