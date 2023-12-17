// -----------------------------------------------------------------------------
// https://lptcp.blogspot.com/
// 
/*
	main.cpp

*/
// https://github.com/l-paz91/
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include <SFML/Graphics.hpp>

// -----------------------------------------------------------------------------

int main()
{
	using namespace sf;

	// create the main window, prevent it from being resized
	RenderWindow mainWindow(VideoMode(1024, 768), "SFML Works", sf::Style::Titlebar | sf::Style::Close);

	// set framerate
	mainWindow.setFramerateLimit(60);

	// clock for timing
	Clock clock;

	// create the background image
	Texture backgroundTexture;
	backgroundTexture.loadFromFile("Graphics/Woodland1.png");

	RectangleShape background;
	background.setSize(Vector2f(600.f, 600.f));
	background.setTexture(&backgroundTexture);
	background.setPosition(212.f, 84.f);

	// start the game loop
	while (mainWindow.isOpen())
	{
		// Handle Timing
		Time dt = clock.restart();

		// ---- PROCESS EVENTS ----------------------------------------------------- //
		sf::Event event;
		while (mainWindow.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				mainWindow.close();
			}

			// process game events

		}

		// ---- CLEAR SCREEN ------------------------------------------------------- //
		mainWindow.clear();

		// ---- UPDATE ------------------------------------------------------------- //

		// ---- RENDER ------------------------------------------------------------- //
		mainWindow.draw(background);

		// ---- DISPLAY WINDOW ----------------------------------------------------- //
		mainWindow.display();
	}

	return 0;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------