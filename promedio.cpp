// Programa que lee un archivo CSV para texto
// Creado por Cesar Aceros
// Inspirado en: https://www.codespeedy.com/read-data-from-csv-file-in-cpp/
//
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
void parseCSV()
{
    ifstream data("PromedioCSV.csv");
    string line;
    vector<vector<string>> parsedCsv;
    int rowcount=0;
    int colcount=0;
    while (getline(data,line))
    {
        stringstream lineStream(line);
        string cell;
        vector<string>parsedRow;
        colcount=0;
        while (getline(lineStream,cell,','))
        {
            parsedRow.push_back(cell);
            colcount++;
        }
        rowcount++;
        parsedCsv.push_back(parsedRow);


    }
    float sumatoria=0;
    for(int i=0; i<rowcount; i++){
        for(int j=0; j<colcount;j++){
        float suma=std::stof(parsedCsv[i][j=2]);
        sumatoria=(suma+sumatoria);
        }
        cout << '\n';


    }float promedio=0;
    promedio=sumatoria/rowcount;
    cout<<promedio;
}
int main()
{
    parseCSV();
    return 0;
}

