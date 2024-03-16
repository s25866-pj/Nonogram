#include <iostream>
#include <fstream>
int main() {
    int wiersz;
    int kolumna;
    std::ifstream myFile;
    std::ofstream exitFile;
    myFile.open("file.txt");
    exitFile.open("ex_file.txt");
    myFile>>wiersz>>kolumna;
    std::cout << wiersz << std::endl << kolumna;

    int nonogramTab[wiersz][kolumna];
    for(int i=0;i<wiersz;i++){
        for(int j=0;j<kolumna;j++){
            nonogramTab[i][j]=0;
        }
    }
    for(int i =0;i<wiersz;i++){
        for(int j=0; j<kolumna;j++){
            exitFile<<nonogramTab[i][j]<<" ";
        }
        exitFile<<std::endl;
    }
    myFile.close();
    exitFile.close();
    return 0;
}