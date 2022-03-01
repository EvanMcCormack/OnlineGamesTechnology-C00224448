#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include "Client.h"

class Game
{
private:
	Client m_client;
public:
	Game();
	~Game();

	void run();

private:

	void processEvents();
	void processKeys(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();



	sf::RenderWindow m_window;

	bool m_exitGame;
};

#endif