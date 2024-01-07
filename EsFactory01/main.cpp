#include "CircleFactory.hpp"
#include "SquareFactory.hpp"


int main(){
    // Utilizzo della Factory per creare un cerchio
    std::unique_ptr<ShapeFactory> circleFactory = std::make_unique<CircleFactory>();
    std::unique_ptr<Shape> circle = circleFactory->createShape();
    circle->draw();

    // Utilizzo della Factory per creare un quadrato
    std::unique_ptr<ShapeFactory> squareFactory = std::make_unique<SquareFactory>();
    std::unique_ptr<Shape> square = squareFactory->createShape();
    square->draw();

    return 0;
}