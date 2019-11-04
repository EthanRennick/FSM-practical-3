#include <iostream>
#include <Player.h>
#include <Idle.h>
#include <Debug.h>
#include "Falling.h"

Player::Player() //dfault constructor creates machine to idle
{
	m_state.setCurrent(new Idle());
	m_state.setPrevious(new Idle());
}

Player::Player(const AnimatedSprite& s) : m_animated_sprite(s)
{
	m_state.setCurrent(new Idle());
	m_state.setPrevious(new Idle());
}

Player::~Player() {}

AnimatedSprite& Player::getAnimatedSprite()
{
	int frame = m_animated_sprite.getCurrentFrame();
	m_animated_sprite.setTextureRect(m_animated_sprite.getFrame(frame));
	return m_animated_sprite;
}

void Player::handleInput(Input in)
{
	DEBUG_MSG("Handle Input");

	switch (in.getCurrent()) //gets the current input
		//switches state according to button press
	{
	case Input::Action::IDLE:
		m_animated_sprite.setFrame(0);
		m_state.idle();
		break;
	case Input::Action::UP:
		m_animated_sprite.setFrame(3);
		m_state.jumping();
		m_animated_sprite.setFrame(4);
		m_state.falling();
		m_animated_sprite.setFrame(6);
		m_state.landing();
		break;
	case Input::Action::LEFT:
		m_animated_sprite.setFrame(2);
		m_state.climbing();
		break;
	case Input::Action::RIGHT:
		m_animated_sprite.setFrame(1);
		m_state.walking();
		break;
	case Input::Action::DOWN:
		m_animated_sprite.setFrame(5);
		m_state.crouching();
		break;
	case Input::Action::SPACE:
		m_state.climbing();
		break;
	default:
		m_state.idle();

		break;
	}

	
}

void Player::update()
{
	//std::cout << "Handle Update" << std::endl;
	m_animated_sprite.update();
}