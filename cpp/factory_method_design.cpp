#include <iostream>
#include <string>

class Cup
{
    public:
        Cup()
          : color("")
        {}

        std::string color;

        /* This is the factory method. */
        static Cup* getCup(std::string color);
};

class RedCup : public Cup
{
    public:
        RedCup()
        {
            color = "red";
        }
};

class BlueCup : public Cup
{
    public:
        BlueCup()
        {
            color = "blue";
        }
};

Cup* Cup::getCup(std::string color)
{
    if (color == "red")
        return new RedCup();
    else if (color == "blue")
        return new BlueCup();
    else
        return 0;
}


/* A little testing */
int main()
{
    /* Now we decide the type of the cup at
     * runtime by the factory method argument */
    Cup* redCup  = Cup::getCup("red");
    std::cout << redCup->color << std::endl;

    Cup* blueCup = Cup::getCup("blue");
    std::cout << blueCup->color << std::endl;
}
