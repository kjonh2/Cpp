#include <iostream>
#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include <glm\glm.hpp>

int main()
{
	//Criar uma variavel do tipo janela do glfw
	GLFWwindow *janela;

	//Verificar se consigo iniciar o GLFW
	if (!glfwInit())
	{
		//Se nao conseguiu criar a janela e iniciar o GLFW aparece esta msg na consola
		std::cout << "Nao foi possivel iniciar o GLFW";
		return -1;
	}

	//Criar a janela atravez da variavel que criei em cima com a funçao creatwindow
	janela= glfwCreateWindow(600, 400, "Primeira Janela", NULL, NULL);

	//Verificar se a janela foi criada corretamente
	if (!janela)
	{
		//Se nao houver janela entao terminamos o glfw
		//Se o programa chegar aqui significa que o glfwInit correu bem mas a janela nao
		//por isso é que temos de fechar o glfw aqui para nao ficar na memoria aberto
		glfwTerminate();
		return -1;
	}

	//Criar uma superficie para puder desenhar nela


	//Fazer loop para manter a janela aberta
	//Aqui é que vai ser feita a chamada a todo o tipo de logica
	while (!glfwWindowShouldClose(janela))
	{
		//Para limpar o ecra sempre que da a volta no loop
		glClear(GL_COLOR_BUFFER_BIT);

		//Aqui é onde se faz o render do OpenGl
		//------------------//

		//Normalmente quando se escreve para uma janela, tens dois buffers, que é o que esta a ser lido
		//e o buffer onde esta a ser escrito, por isso a cada loop tem de se fazer swapBuffer para trocar
		//apaga o anterior e imprime no ecra o actual que foi escrito neste loop
		glfwSwapBuffers(janela);

		//Para conseguir ter eventos do teclado ou de outro tipo qualquer tem de se chamar dentro do loop
		//a funçao glfwPollEvent
		glfwPollEvents();
	}

	//Se o codigo chegar aqui quer dizer que saiu do loop e entao o programa vai fechar
	//Assim sendo tem de se fechar o glfw
	glfwTerminate();
	return 0;
}