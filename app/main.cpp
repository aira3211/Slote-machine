
#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace  std;


int rand_number(int min , int max);

int main()
{
  srand(time(0));

  int exit = 0;
  int money = 1000;
  int get;
  int get_bet;
  while(exit != 1)
  {
    srand(time(0));
    int random_number[3] = {rand_number(2,7),rand_number(2,7),rand_number(2,7)};

    std::cout << "______________________________" << '\n';
    std::cout << "                              |" << '\n';
    std::cout << "your money : $ " << money<<"           |                "<<'\n';
    cout << "1.Play solt 2.Exit " << "           |                  "<<'\n';
    std::cout << "                              |" << '\n';
    std::cerr << "______________________________|" << '\n';
    cin >> get;
    if (get == 2)
    {
      exit = 1;
      cout << "Exititing...."<<'\n';
      cout << "Bye" << '\n';
    }
    else
    {
      cout << "Let's play " << endl;
      cout << "Pleas Enter your bet: " ;
      cin >> get_bet;
      if (random_number[0] == random_number[1] && random_number[0] == random_number[2] && random_number[0] == 7)
      {
        money += 10 * get_bet;
        std::cout << "your money " << money <<  '\n';
        std::cout << random_number[0] << random_number[1] << random_number[2] << endl;
        cout << "you win "<<'\n' ;
      }

      else if (random_number[0] == random_number[1] && random_number[1] == random_number[2] && random_number[1] != 7)
      {
        money += 5*get_bet;
        cout << "your money " << money <<  '\n';
        std::cout << random_number[0] << random_number[1] << random_number[2] << endl;
        cout << "you win " << '\n';

      }

      else if(random_number[0] == random_number[1] || random_number[0] == random_number[1] || random_number[1] == random_number[2])
      {
        money += 3 * get_bet;
        std::cout << random_number[0] << random_number[1] << random_number[2] << endl;
        std::cout<<"You win!"<<'\n';
      }
      else
      {
        money = 0;
        break;
      }

    }
  }

}





int rand_number(int min , int max)
{
  return (rand()%max-1) + min;
}
