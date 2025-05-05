//#include<fstream>

void insertObject(string fileName, Student object){
    ofstream myFile(fileName, ios::binary | ios::app);
    myFile.write((char *)&object, sizeof(object));
    myFile.close();
}
void retrieveObject(string fileName, int rollNumber){
    Student temp;
    ifstream myFile(fileName, ios::binary);
    while(myFile.read((char *)&temp, sizeof(temp))){
        if(temp.getRollNumber() == rollNumber){
            temp.display();
            myFile.close();
        }
    }
}
void retrieveAllObjetcs(string fileName){
    Student temp;
    ifstream myFile(fileName, ios::binary);
    while(myFile.read((char *)&temp, sizeof(temp))){
        temp.display();
    }
    myFile.close();
}
void updateObject(string fileName, int rollNumber, string studentName){
    Student temp;
    fstream myFile(fileName, ios::in | ios::out | ios::binary);
    while(myFile.read((char *)&temp, sizeof(temp))){
        if(temp.getRollNumber() == rollNumber){
            strcpy(temp.getStudentName(), studentName.c_str());
            int current = myFile.tellg();
            int oneblock = sizeof(temp);
            myFile.seekg(current-oneblock);
            myFile.write((char *)&temp, sizeof(temp));
            myFile.close();
        }
    }
}
void deleteObject(const char *fileName,int rollNumber){
    Student temp;
    fstream myFile(fileName, ios::in | ios::out | ios::binary);
    ofstream myFile_temp("temp.bin", ios::app | ios::binary);
    while(myFile.read((char *)&temp, sizeof(temp))){
        if(temp.getRollNumber() != rollNumber){
            myFile_temp.write((char *)&temp, sizeof(temp));
        }
    }
    myFile.close();
    myFile_temp.close();
    remove(fileName);
    rename("temp.bin", fileName);
}
