#include <iostream>
#include <queue>

using namespace std;

void input(queue <int> &q ,int n, int &sum){
    int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        q.push(temp);
        sum+=temp;
    }
}

int main(){
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int sum1 = 0, sum2 = 0, sum3 = 0;

    queue <int> q1;
    queue <int> q2;
    queue <int> q3;

    input(q1, n1, sum1);
    input(q2, n2, sum2);
    input(q3, n3, sum3);


    while(true){

        if(sum1 == sum2 && sum1 == sum3){
            break;
        }

        if(sum1 > sum2 || sum1 > sum3){
            sum1 -= q1.front();
            q1.pop();
        }
        else if( sum2 > sum1 || sum2 > sum3){
            sum2 -= q2.front();
            q2.pop();
        }
        else if( sum3 > sum1 || sum3 > sum2){
            sum3 -= q3.front();
            q3.pop();
        }


    }

    cout << sum1;

return 0;
}
