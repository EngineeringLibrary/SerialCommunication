SerialCommunication
===================

Algorítimo em C++ para uso de comunicação serial 

Resumo sobre o uso
--------------------- 
	Código em C++  desenvolvido em ambiente DevC++ para transferência de dados via comunicação serial.
Configuração de porta:
	Primeiro precisa ser verificado qual o número da porta que será usada pelo dispositivo, no Gerenciador de Dispositivos essa informação é mostrada, no win7 o acesso se dá clicando na janela do Windows depois  Painel de controle\Sistema\Gerenciador de Dispositivos\Postas. O número tem que ser colocado dentro do main.cpp na linha 11 ex:. Serial Porta("COM5");, ainda em portas clicando com o botão direito do mouse depois em propriedades\configuração de porta,  conseguimos acessar as informações de sincronismo que deverão ser colocados no arquivo comunicação.cpp nas linhas 34,35,36 e 37 do código.
	Char foi to tipo do dado usado e o processo de escrita, leitura e fechamento  na porta pode ser feito por intermédio das classes Write(bytes_pra_envio); , Read(); , Close();.

Escrevendo dados: 
Na escrita, a palavra para ser transferida precisa ser colocada entre aspas  na linha 12 ex:.  char bytes_pra_envio[] = "UNP";  depois é só chamar a escrita digitando porta.Write(bytes_pra_envio); depois é só compilar e rodar o código.
  
Lendo dados:
Na leitura é preciso que seja chamado a função Porta.Read(); , ao compilar e rodar o dado recebido vai ser printado na tela.

