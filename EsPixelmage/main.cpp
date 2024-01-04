#include "image.hpp"

int main()
{
    try{
        // Creazione di un'istanza di Image
        Image myImage(800, 600);

        // Impostazione e recupero di un pixel
        Pixel pixel1 = {255, 0, 0};
        myImage.setPixel(100, 200, pixel1);

        Pixel retrievedPixel = myImage.getPixel(100, 200);
        std::cout << "\nPixel retrieved: (" << retrievedPixel.r << ", " << retrievedPixel.g << ", " << retrievedPixel.b << ")\n";

        // Tentativo di accesso a un pixel al di fuori del range
        // Questo solleverà un'eccezione std::out_of_range
        Pixel pixel2 = {400,0,0};
        myImage.setPixel(100, 200, pixel2);
    } 
    
    catch (const std::out_of_range &e){
        std::cerr << "Eccezione out_of_range: " << e.what() << std::endl;
    }

    catch (const std::invalid_argument &e){
        std::cerr << "Eccezione invalid_argument: " << e.what() << std::endl;
    }

    return 0;
}