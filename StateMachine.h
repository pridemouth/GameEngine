#pragma once
#include "UIState.h"

class StateMachine
{
public:

	StateMachine();
	void UpdateUIState(float _elapsedTime);
	void ChangeUIState(UIState::State _UIStateName);
	void Render();

private:

	float elapsedTime;
	UIState currentUIState;

};