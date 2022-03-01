#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 

#define NOMINMAX


/*
Tutorial 13 Client Solution
Author: Pindrought
Date: 02/26/2017
*/
#include "Client.h"
#include <iostream>
#include "Game.h"
int main()
{
	//Client myClient("127.0.0.1",1111); //Create client to connect to server 127.0.0.1 [localhost] on port 1111
	//if (!myClient.Connect()) //If client fails to connect...
	//{
	//	std::cout << "Failed to connect to server..." << std::endl;
	//	system("pause");
	//	return -1;
	//}
	//std::string userinput; //holds the user's chat message
	//while (true)
	//{
	//	std::getline(std::cin,userinput); //Get line if user presses enter and fill the buffer
	//	myClient.SendString(userinput); //Send string to server
	//}

	try
	{
		Game game;
		game.run();
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	std::cin.get();
	return 0;
}

