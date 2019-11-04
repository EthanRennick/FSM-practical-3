#include <iostream>
#include <SFML/Graphics.hpp>
#include <AnimatedSprite.h>
#include <Player.h>
#include <Input.h>
#include <Debug.h>

using namespace std;

int main()
{
	// Create the main window
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
	bool jumping = false;
	// Load a sprite to display
	sf::Texture texture;
	if (!texture.loadFromFile("assets\\spread.png")) {
		DEBUG_MSG("Failed to load file");
		return EXIT_FAILURE;
	}

	// Setup Players Default Animated Sprite
	//some of these dont work
	AnimatedSprite animated_sprite(texture);
	animated_sprite.addFrame(sf::IntRect(0, 0, 35, 45)); //idle 1
	animated_sprite.addFrame(sf::IntRect(70, 90, 50, 40)); //walking? 2 
	animated_sprite.addFrame(sf::IntRect(125, 135, 45, 45)); //climbing 3
	animated_sprite.addFrame(sf::IntRect(170, 0, 40, 49)); //jumping 4 
	animated_sprite.addFrame(sf::IntRect(116, 0, 50, 47)); //falling 5 
	animated_sprite.addFrame(sf::IntRect(335, 90, 50, 50)); //crouching 6 
	animated_sprite.addFrame(sf::IntRect(0, 48, 40, 40)); //landing 7


	// Setup the Player
	Player player(animated_sprite);
	Input input;
	
	// Start the game loop
	while (window.isOpen())
	{
		// Process events
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				// Close window : exit
				window.close();
				break;
			case sf::Event::KeyPressed:
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
				{
					input.setCurrent(Input::Action::LEFT);
			
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
				{
					input.setCurrent(Input::Action::RIGHT);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
				{
					input.setCurrent(Input::Action::UP);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
				{
					input.setCurrent(Input::Action::DOWN);
				}
				/*else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
				{
					input.setCurrent(Input::Action::SPACE);
				}*/
				break;
			default:
				input.setCurrent(Input::Action::IDLE);
				break;
			}
		}

		// Handle input to Player
		player.handleInput(input);

		// Update the Player
		player.update();

		// Clear screen
		window.clear();

		// Draw the Players Current Animated Sprite
		window.draw(player.getAnimatedSprite());

		// Update the window
		window.display();
	}

	return EXIT_SUCCESS;
};