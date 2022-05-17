#include "AboutScreen.hpp"

AboutScreen::AboutScreen(StateManager* stateManager) : GameScreen(stateManager)
{
    createGUI();
}

AboutScreen::~AboutScreen()
{
}

void AboutScreen::renderScreen()
{
    SDL_RenderCopy(gWindow->getRenderer(), AssetManager::getInstance()->getTexture("game_board_background.png"), NULL, NULL);
    renderWidget();
}

void AboutScreen::updateScreen(float deltaTime)
{
}

void AboutScreen::handleEvent(const SDL_Event& event)
{
    handleWidgetEvent(event);
}

void AboutScreen::createGUI()
{
    createButton("button_home.png", {1200, 600 }, std::bind(&AboutScreen::goToMenu, this));
}

void AboutScreen::goToMenu()
{
    stateManager->switchScreen(StateManager::Screen::StartScreen);
}

