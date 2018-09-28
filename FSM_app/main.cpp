#include <iostream>
#include <vector>


#include "CMenuApp.h"
using std::cout;
using std::endl;
using std::vector;
//using namespace sf;

//int sum(int a, int b) {
//  return a + b;
//}
//int resta(int a, int b) {
//  return a - b;
//}
//int notMain() {
//  int(*mifuncion)(int, int) = sum;
//  cout<< mifuncion(2, 3) << std::endl;
//  mifuncion = resta;
//  cout << mifuncion(2, 3) << std::endl;
//  return 0;
//}

CMenuApp app;

int main() {
  sf::RenderWindow window(sf::VideoMode(600, 400), "Screens App");
  sf::Event _event;
  app.init();
  while (window.isOpen()) {
    
    /*while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window.close();
      }
    }*/

    window.clear();
    app.update(window, _event);
    //window.draw();
    window.display();
  }
  cout << "Application now closing" << endl;
  return 0;
}
