/* Juan Francisco Torres Martínez - alu80
Alejandro Gallego López - alu37
Santiago Moltó Martínez - alu55 */

#include <iostream>
#include <stack>

using namespace std;

int programa3 (int a, int b){
	
	stack <int> pila;
	
	if(a < 3){
        pila.push(a + b);
       }
	while(! pila.empty()){
	
        b = pila.top();
        
        pila.pop();
	}
	
	while(a >= 3){
	
	pila.push(+a);
        a = a/3;
        b = b - 2;
        

}
	 while(! pila.empty()){
	
        b = a + b + pila.top();
        
        pila.pop();
    
}
   
	
		return b;
    
	
}


int main()
{
	
	
    int a;
    int b;

    cout << "Introduce valores de a:";
    cin >> a;
    cout << "\nIntroduce valores de b:";
    cin >> b;
    
    cout << "\nResultado: " << programa3(a,b) << endl;
}
