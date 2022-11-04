#include"includes.h"
#include"BookC.h"


void BookC::get(string name, string author, int yearPubl, int pages, int price, string annotation, string genre) {

    this->name = name;
    this->author = author;
    this->yearPubl = yearPubl;
    this->pages = pages;
    this->price = price;
    this->annotation = annotation;
    this->genre = genre;

    ofstream f("Book.txt", ios::app);
    f << this->name << endl;
    f.clear();
    f.seekp(0);
    f.close();

//    ofstream out("Book.txt");
//    out << this->name << endl;
//    out.close();

    ofstream fout((name + ".txt").c_str());

    fout << "Название: \n\t" <<this->name << endl;
    fout << "Автор: \n\t" << this->author << endl;
    fout << "Год публикации: \n\t" << this->yearPubl << endl;
    fout << "Страницы: \n\t" << this->pages << endl;
    fout << "Автор: \n\t" << this->price << endl;
    fout << "Анотация: \n\t" << this->annotation << endl;
    fout << "Жанр: \n\t" << this->genre << endl;

    fout.close();
}
