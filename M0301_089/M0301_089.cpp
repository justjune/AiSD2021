/*
ѕример кода из —киены.
ƒобавление элементов в однонаправленный динамический список.
ѕечать элементов списка.
»ллюстрацию исполнени€ можно посмотреть по ссылке:
https://pythontutor.com/cpp.html#code=%23include%20%3Ciostream%3E%0Ausing%20namespace%20std%3B%0A%0Astruct%20Node%0A%7B%0A%20%20%20%20int%20data%3B%0A%20%20%20%20Node*%20next%3B%0A%7D%3B%0A%0Aclass%20List%0A%7B%0Aprivate%3A%0A%20%20%20%20Node*%20head%3B%20//%22%D0%B3%D0%BE%D0%BB%D0%BE%D0%B2%D0%B0%22%20%D1%81%D0%B2%D1%8F%D0%B7%D0%B0%D0%BD%D0%BD%D0%BE%D0%B3%D0%BE%20%D1%81%D0%BF%D0%B8%D1%81%D0%BA%D0%B0%0Apublic%3A%0A%20%20%20%20List%28%29%20//%D0%BA%D0%BE%D0%BD%D1%81%D1%82%D1%80%D1%83%D0%BA%D1%82%D0%BE%D1%80%20%D0%BA%D0%BB%D0%B0%D1%81%D1%81%D0%B0%20%D0%B1%D0%B5%D0%B7%20%D0%BF%D0%B0%D1%80%D0%B0%D0%BC%D0%B5%D1%82%D1%80%D0%BE%D0%B2%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20head%20%3D%20NULL%3B%20//%D0%BF%D0%B5%D1%80%D0%B2%D0%BE%D0%B3%D0%BE%20%D1%8D%D0%BB%D0%B5%D0%BC%D0%B5%D0%BD%D1%82%D0%B0%20%D0%BF%D0%BE%D0%BA%D0%B0%20%D0%BD%D0%B5%D1%82%0A%20%20%20%20%7D%0A%20%20%20%20//%D0%BC%D0%B5%D1%82%D0%BE%D0%B4,%20%D0%B4%D0%BE%D0%B1%D0%B0%D0%B2%D0%BB%D1%8F%D1%8E%D1%89%D0%B8%D0%B9%20%D0%BD%D0%BE%D0%B2%D1%8B%D0%B9%20%D1%83%D0%B7%D0%B5%D0%BB%20%D0%B2%20%D1%81%D0%BF%D0%B8%D1%81%D0%BE%D0%BA%0A%20%20%20%20void%20addNode%28int%20d%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20Node*%20nd%20%3D%20new%20Node%3B%20//%D0%B4%D0%B8%D0%BD%D0%B0%D0%BC%D0%B8%D1%87%D0%B5%D1%81%D0%BA%D0%B8%20%D1%81%D0%BE%D0%B7%D0%B4%D0%B0%D0%B5%D0%BC%20%D0%BD%D0%BE%D0%B2%D1%8B%D0%B9%20%D1%83%D0%B7%D0%B5%D0%BB%0A%20%20%20%20%20%20%20%20nd-%3Edata%20%3D%20d%3B%20%20%20%20%20%20%20%20//%D0%B7%D0%B0%D0%B4%D0%B0%D0%B5%D0%BC%20%D1%83%D0%B7%D0%BB%D1%83%20%D0%B4%D0%B0%D0%BD%D0%BD%D1%8B%D0%B5%0A%20%20%20%20%20%20%20%20nd-%3Enext%20%3D%20NULL%3B%20%20%20%20%20//%D0%BD%D0%BE%D0%B2%D1%8B%D0%B9%20%D1%83%D0%B7%D0%B5%D0%BB%20%D0%B2%20%D0%BA%D0%BE%D0%BD%D1%86%D0%B5,%20%D0%BF%D0%BE%D1%8D%D1%82%D0%BE%D0%BC%D1%83%20NULL%0A%20%20%20%20%20%20%20%20if%20%28head%20%3D%3D%20NULL%29%20%20%20%20%20//%D0%B5%D1%81%D0%BB%D0%B8%20%D1%81%D0%BE%D0%B7%D0%B4%D0%B0%D0%B5%D0%BC%20%D0%BF%D0%B5%D1%80%D0%B2%D1%8B%D0%B9%20%D1%83%D0%B7%D0%B5%D0%BB%0A%20%20%20%20%20%20%20%20%20%20%20%20head%20%3D%20nd%3B%0A%20%20%20%20%20%20%20%20else%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20//%D0%B5%D1%81%D0%BB%D0%B8%20%D1%83%D0%B7%D0%B5%D0%BB%20%D1%83%D0%B6%D0%B5%20%D0%BD%D0%B5%20%D0%BF%D0%B5%D1%80%D0%B2%D1%8B%D0%B9%0A%20%20%20%20%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20Node*%20current%20%3D%20head%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20//%D0%B8%D1%89%D0%B5%D0%BC%20%D0%B2%20%D1%86%D0%B8%D0%BA%D0%BB%D0%B5%20%D0%BF%D1%80%D0%B5%D0%B4%D1%88%D0%B5%D1%81%D1%82%D0%B2%D1%83%D1%8E%D1%89%D0%B8%D0%B9%20%D0%BF%D0%BE%D1%81%D0%BB%D0%B5%D0%B4%D0%BD%D0%B5%D0%BC%D1%83%20%D1%83%D0%B7%D0%B5%D0%BB%0A%20%20%20%20%20%20%20%20%20%20%20%20while%20%28current-%3Enext%20!%3D%20NULL%29%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20current%20%3D%20current-%3Enext%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20//%D0%BF%D1%80%D0%B5%D0%B4%D1%88%D0%B5%D1%81%D1%82%D0%B2%D1%83%D1%8E%D1%89%D0%B8%D0%B9%20%D1%83%D0%BA%D0%B0%D0%B7%D1%8B%D0%B2%D0%B0%D0%B5%D1%82%20%D0%BD%D0%B0%20%D0%BF%D0%BE%D1%81%D0%BB%D0%B5%D0%B4%D0%BD%D0%B8%D0%B9%0A%20%20%20%20%20%20%20%20%20%20%20%20current-%3Enext%20%3D%20nd%3B%0A%20%20%20%20%20%20%20%20%7D%0A%20%20%20%20%7D%0A%20%20%20%20//%D0%BC%D0%B5%D1%82%D0%BE%D0%B4,%20%D0%B2%D1%8B%D0%B2%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D0%B9%20%D1%81%D0%B2%D1%8F%D0%B7%D0%B0%D0%BD%D0%BD%D1%8B%D0%B9%20%D1%81%D0%BF%D0%B8%D1%81%D0%BE%D0%BA%20%D0%BD%D0%B0%20%D1%8D%D0%BA%D1%80%D0%B0%D0%BD%0A%20%20%20%20void%20printList%28%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20Node*%20current%20%3D%20head%3B%0A%20%20%20%20%20%20%20%20while%20%28current%20!%3D%20NULL%29%0A%20%20%20%20%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20cout%20%3C%3C%20current-%3Edata%20%3C%3C%20endl%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20current%20%3D%20current-%3Enext%3B%0A%20%20%20%20%20%20%20%20%7D%0A%20%20%20%20%7D%0A%7D%3B%0Aint%20main%28%29%0A%7B%0A%20%20%20%20List%20myList%3B%0A%20%20%20%20myList.addNode%285%29%3B%0A%20%20%20%20myList.addNode%2811%29%3B%0A%20%20%20%20myList.addNode%2826%29%3B%0A%20%20%20%20myList.printList%28%29%3B%0A%20%20%20%20return%200%3B%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D
*/
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

class List
{
private:
    Node* head; //"голова" св€занного списка
public:
    List() //конструктор класса без параметров
    {
        head = NULL; //первого элемента пока нет
    }
    //метод, добавл€ющий новый узел в список
    void addNode(int d)
    {
        Node* nd = new Node; //динамически создаем новый узел
        nd->data = d;        //задаем узлу данные
        nd->next = NULL;     //новый узел в конце, поэтому NULL
        if (head == NULL)     //если создаем первый узел
            head = nd;
        else                 //если узел уже не первый
        {
            Node* current = head;
            //ищем в цикле предшествующий последнему узел
            while (current->next != NULL)
                current = current->next;
            //предшествующий указывает на последний
            current->next = nd;
        }
    }
    //метод, вывод€щий св€занный список на экран
    void printList()
    {
        Node* current = head;
        while (current != NULL)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }
};
int main()
{
    List myList;
    myList.addNode(5);
    myList.addNode(11);
    myList.addNode(26);
    myList.printList();
    return 0;
}