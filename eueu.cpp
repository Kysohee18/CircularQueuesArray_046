#include <iostream>
using namespace std;

//CircularQueuesArray_046
// minimal commit 15 
class Queues {
    int FRONT, REAR, max = 5;
    int queue_array[5];
    
    public: // acces modifier
    Queues(){
        FRONT = -1;
        REAR -= -1;
    }
    void insert() {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        cout << endl;

        //cek apakah antrian penuh
          if (FRONT == -1) {
            FRONT = 0;
            REAR = 0;

          }
        


