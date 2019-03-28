#include <iostream>
#include <cstdlib>

using namespace std;

int Contar(int *V, int n, int x){
    int i, nveces;
    nveces = 0;

    for(i=1; i <= n; i++)
    {
        if(V[i] == x)
            nveces++;
    }

    return nveces;
}

int main(){
    int x, n;
    cout << "Introduce valor a buscar (x):";
    cin >> x;
    cout << "\nIntroduce n.elementos del vector (n):";
    cin >> n;

    int *vmejor = new int[n+1];
    int *vpeor = new int[n+1];
    int *vcualquiera = new int[n+1];

    if(NULL == vmejor || NULL == vpeor || NULL == vcualquiera)
        return -1;

    int i;
    for(i=1; i<=n; i++)
        vpeor[i] = x;

    for(i = 1; i<=n; i++)
        vmejor[i] = i + n -1;

    for(i = 1; i<=n; i++){
        if(i <= n/2){
            vcualquiera[i] = x;
            continue;
        }
        vcualquiera[i] = i + n -1;
    }
	
	
    cout << endl << "\nVector vpeor:"<<endl;
    for(i = 1; i<=n; i++){
    	vpeor[i] = x;
        cout<<vpeor[i] <<' ';
    }
    
    cout << endl;

    cout <<"Vector vmejor:"<<endl;
    for(i = 1; i<=n; i++){
    	vmejor[i] = i + n -1;
        cout<< vmejor[i];
        cout << ' ';
    }
    cout << endl;

    cout << "Vector vcualquiera:"<<endl;
    for(i = 1; i<=n; i++){
        cout << vcualquiera[i] << ' ';
    }
    cout << endl;
	
	cout << "\nCASO PEOR" << endl;
    cout << "Numero veces: " << Contar(vpeor, n, x) << endl;
    cout << "CASO MEJOR" << endl;
    cout << "Numero veces: " << Contar(vmejor, n, x) << endl;
    cout << "OTRO CASO" << endl;
    cout << "Numero veces: " << Contar(vcualquiera, n, x) << endl;

    system("pause");

    return 0;
}
