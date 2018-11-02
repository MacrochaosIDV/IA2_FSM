#pragma once

/***********************
*  Includes
***********************/
#include <stack>
#include "CMenuScreen.h"
#include "CGameOver.h"
#include "CGamePlay.h"
#include "CGraphics.h"
#include "CHelp.h"
#include "CLogo.h"
#include "CMainMenu.h"
#include "COptions.h"
#include "CPause.h"
#include "CPlay.h"
#include "CSound.h"

using std::stack;

class CMenuApp
{
public:
  CMenuApp(){}
  ~CMenuApp(){}

  void setState(CMenuScreen * pNewScreen);
  void pushState(CMenuScreen * pNewScreen);
  void popState();
  void init();
  void update(sf::RenderWindow& _window, sf::Event& _event);
  void emptyStack();

  CGameOver gameOver;
  CGamePlay optGamePlay;
  CGraphics optGraphics;
  CHelp help;
  CLogo logo;
  CMainMenu mainMenu;
  COptions options;
  CPause pause;
  CPlay playing;
  CSound optSound;

  stack<CMenuScreen*> mpSTKCurrScreen;
  CMenuScreen * mpCurrScreen;
  bool bStateStays;


};

