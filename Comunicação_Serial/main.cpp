#include <iostream>
#include <stdlib.h>
#include "comunicacao.h"
//#include <cstdlib>
//#include <string>


using namespace std;

int main (){
Serial Porta("COM5");
char bytes_pra_envio[] = "UNP";

Porta.Write(bytes_pra_envio);
Porta.Read();
Porta.Close();

	system("pause\n\n");
}

