#include "StateMachine.h"

StateMachine::StateMachine()
{
	currentUIState.state = UIState::MainMenu;
	elapsedTime = 0;
}

void StateMachine::UpdateUIState(float _elapsedTime)
{

	

}

void StateMachine::ChangeUIState(UIState::State _UIStateName)
{



}

void StateMachine::Render()
{



}