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


