#pragma once
#include <stdio.h>

class UIState
{
public:

	enum State
	{
		MainMenu = 0,
		BattleScene,
		OptionMenu,
		FieldMap,
	};

	State state;

	void OnEnter();
	void OnExit();
	void Render();

};