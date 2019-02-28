#include <iostream>
#include <cstdlib>
#include <ctime>
int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (RAND_MAX + 1.0);
    return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}
void print(int x,int r)
{
    if(x>r)
        std::cout << "Your guess is high.\n";
    else if(x<r)
        std::cout << "Your guess is low.\n";
    else
    {
        std::cout << "You Won!\n";
        exit(0);
    }

}
int main()
{   srand(static_cast<unsigned int>(time(0)));
    rand();
    int x,r,i;
    std::cout << "Let's play a game.  I'm thinking of a number.  You have 7 tries to guess what it is.\n";
    r=getRandomNumber(1,100);
    for(i=1;i<=7;++i)
    {
        std::cout << "Guess #" << i << ":";
        std::cin >> x;
        print(x,r);
    }
    std::cout << "Sorry You Lose,The Correct Number was :" << r;

}
