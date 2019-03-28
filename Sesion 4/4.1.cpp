/* Juan Francisco Torres Martínez - alu80
Alejandro Gallego López - alu37
Santiago Moltó Martínez - alu55 */

#include <iostream>
#include <stack>

using namespace std;

int programa1 (int x, int y){
	
	stack <int> pila;
	
	while(x > 1){
        pila.push(-x+y);
        x = x - 1;
        y = y + 2;
}

    while(! pila.empty()){
	
        y = y + pila.top();
        pila.pop();
    }

    return y;
	
}


int main()
{
	
	
    int x = 5;
    int y = 4;

    cout << "Introduce valores de x:";
    cin >> x;
    cout << "\nIntroduce valores de y:";
    cin >> y;
    
    cout << "\nResultado: " << programa1(x,y) << endl;
}
