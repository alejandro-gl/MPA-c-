/* Juan Francisco Torres Martínez - alu80
Alejandro Gallego López - alu37
Santiago Moltó Martínez - alu55 */

#include <iostream>
#include <stack>

using namespace std;



int main()
{
	
	stack <int> pila;
    
    int z = 1;	
    int x = 0;
    int y = 0;

    cout << "Introduce valores de x:";
    cin >> x;
    cout << "\nIntroduce valores de y:";
    cin >> y;
    
    
    
    if(y < 0){
    	cout << "\nResultado: Error" << endl;
    	
   }
   else{
		
        
    	
    while(y != 0){
            pila.push(y);
            y = y / 2;
            if(y == 0){
                z = 1;
            }
        }

        while(!pila.empty()){
            z = z * z;
            if(pila.top()%2 == 1){
                z = z * x;
            }
            pila.pop(); 
		

        }
        
		}
       cout << "\nResultado: "<< z << endl;
}
    
	
	



