/*This is an adventure game based on Harry Potter. This code is done for the Codecademy C++ mid-course project.
Done by María Fernanda López Salinas 06/08/2021*/

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int caseb1(int x);
int caseb2(int y);
int casec(int z);

int main(void) {
                                                                              
    std::cout << "                                  @&@&\n";                                    
    std::cout << "                                  @@@@\n";                                    
    std::cout << "                             ,%&&@@@@@@&&%\n";                          
    std::cout << "                            &@@@@@@@@@@@@@@%\n";                        
    std::cout << "                            &@@@@@@@@@@@@@@%\n";                        
    std::cout << "                            %@@@@@@@@@@@@@&%\n";                       
    std::cout << "                            %@@@@@@@@@@@@@&#\n";                       
    std::cout << "                            ,((/(&#&&&#*///\n";                         
    std::cout << "                               /,%#&@%#*/\n";                        
    std::cout << "                              .*.%(&@&%,/\n";                          
    std::cout << "                              ,*//((#(//*,\n";                          
    std::cout << "                           ,,,,,,,,/(*,***,,*\n";                          
    std::cout << "                          ,,,,,, ,,***,,,,,,,,,\n";                          
    std::cout << "                        ,,,,,,,,*,,***,,,,,,,,,\n";                         
    std::cout << "                        ,*,,,,,,,,,//#*,,,,,,***\n";                          
    std::cout << "                         ,*,,*,/((/(%%(##&,,,,/\n";                          
    std::cout << "                         ,,,,%#%#(/(%##%%%#&#,,\n";                          
    std::cout << "                          ,*,##%%(#/((%(%&#%#*\n";                          
    std::cout << "                           ,,,,(%(/(((((%#,,,*\n";                         
    std::cout << "                           ,,,,,***#/&*,,,,,*\n";                          
    std::cout << "                            ,,,,,,****,,,,,,\n";                          
    std::cout << "                             ,,,,,,***,,,,,,\n";                          
    std::cout << "                              ,,,,,***,,,,,\n";                         
    std::cout << "                              .,,,,,,,,,,,\n";                          
    std::cout << "                               ****//****,\n";                          
    std::cout << "                                ,**((***,\n";                          
    std::cout << "                                 *,(**,*\n";                          
    std::cout << "                                  .(#*,,\n";                          
    std::cout << "                                  **/**\n";                          
    std::cout << "                                  .*%*,\n";                          
    std::cout << "                                   ***,\n";
    std::cout << "Welcome to your first potion's exam. Looks like you're \n ";
    std::cout << "ready for a challenge! In order to take out your first exam, \n"; 
    std::cout << "you need to enter your first name or a nickname. \n ";  

    std::cout << "\n";
    string name;
    std::cin >> name; 

    std::cout << "Excellent, " << name << " ,let's start!";
    std::cout << "Looks like professor Snape aka the half-blood prince \n";
    std::cout << "is having a bad day and you're paying the consequences.\n";
    std::cout << "Apparently this exam will be hard, but don't worry,\n";
    std::cout << "the important thing is you have amazing friends like Hermione that can help you\n";
    std::cout << "Well, Snape decided that you need to prepare a perfect..\n";
    Sleep(8000);
    std::cout << "Polyjuice Potion!!\n";
    Sleep(2000);
    std::cout << "Oh oh.. looks like professor Snape is really moody right now and\n";
    std::cout << "he sends Hermione away from you so she can't help you\n";
    std::cout << "You actually don't remember how to make the potion since\n";
    std::cout << "you didn't study for this test\n";
    std::cout << "WHAT DO YOU DO? \n";

    char choice1;
    
    for (int i = 0; i < 3 && choice1 != 'A' && choice1 != 'B' && choice1 != 'C'; i++) {

        std::cout << "Enter A if you tell professor Snape that you don't feel prepared enough to take the test.\n";
        std::cout << "Enter B if you use your invisibility cape to sneak into the library to check the recipe.\n";
        std::cout << "Enter C if you start making the potion by intuition.\n";
        std::cin >> choice1;

    }

    switch (choice1) {

        case 'A':
            std::cout << "'Well well well, looks that you haven't studied.\n";
            std::cout << "This time Mrs. Granger couldn't help you pass your exam.\n";
            std::cout << "Apparently you won't pass your potion's course.'\n";
            std::cout << "THE END\n";
            return 0;

        case 'B':
            std::cout << "Ohhh.. it looks like you want to risk yourself by sneaking into the library.\n";
            std::cout << "So.. well, the invisibiity cape is in your bag.\n";
            std::cout << "Remember to be careful.\n";
            std::cout << "Also remember to rush since professor Snape thinks you're in the sanitary. \n";
            Sleep(1500);
            caseb1(0);
            break;

        case 'C':
            std::cout << "Hmmm, what can go wrong by trying to do the potion?\n";
            std::cout << "Let's figure it out\n";
            casec(0);
            break;

        default:
            std::cout << "Sorry, you haven't entered a valid choice.\n";
            std::cout << "Goodbye.\n";
            return 0;

    }


}

int caseb1(int x) {

    std::cout << "Now is time to decide your way to the library so you doesn't get caught up in troubles\n";
    std::cout <<"Which way do you want to follow to the library?\n ";
    char choiceb1;

    for (int j = 0; j < 3 && choiceb1 != 'A' && choiceb1 != 'B'; j++) {
    std::cout << "Enter A if you want to take the clock tower's way.\n";
    std::cout << "Enter B if you want to take the divination tower's way.\n";
    std::cin >> choiceb1;
    }
switch (choiceb1) {

        case 'A':
            std::cout << "'Well well well, looks that you are a little bit silly with your cape\n";
            std::cout << "and you stumbled upon professor McGonagall.\n";
            Sleep(1500);
            std::cout << "'Hmmm.. what do we have in here? Again using your invisibility cape?\n";
            std::cout << "Don't you have an exam to present with professor Snape? \n";
            std::cout << "I'm sorry but I will need to report you and I will take 10 points away from your house'\n";
            std::cout << "THE END\n";
            x=0;
            return x;

        case 'B':
            std::cout << "Apparently you chose the right way to the library without being seen\n";
            std::cout << "Now, you can find the recipe in 'Moste Potente Potions'. However, the book is\n";
            std::cout << "housed in the Restricted Section of the Hogwarts library.\n";
            caseb2(x);
            break;

        default:
            std::cout << "Sorry, you haven't entered a valid choice.\n";
            std::cout << "Goodbye.\n";
            x=0;
            return x;

    }   

}

int caseb2(int y)  {

    std::cout << "Do you want to take the risk and go inside the restricted section?\n";
    char choiceb2;

    for (int k = 0; k < 3 && choiceb2 != 'Y' && choiceb2 != 'N'; k++) {
    std::cout << "Enter Y if you want to enter in the restricted section of the library\n";
    std::cout << "Enter N if you want to make your way back to the potion's room and try to do the potion without help\n";
    std::cin >> choiceb2;
    }
switch (choiceb2) {

        case 'Y':
            std::cout << "Ooops!! Looks like Mrs. Norris discovered you and now Filch is angry \n";
            std::cout << "He has decided to take you with professor Snape and you failed your exam.\n";
            std::cout << "Good luck trying to sneak again into prohibited places. Study hard\n.";
            std::cout << "THE END\n";
            y=0;
            return y;

        case 'N':
            std::cout << "Excellent, you have chosen to try.. at least. That doesn't mean\n";
            std::cout << "you're going to pass your exam. However, felix felicis! The best of luck! \n";
            casec(0);
            break;

        default:
            std::cout << "Sorry, you haven't entered a valid choice.\n";
            std::cout << "Goodbye.\n";
            y=0;
            return y;

    }   

}

int casec(int z) {

    std::cout << "Let's start making this potion by intuition!\n";
    std::cout << "You remember that the first step is to add certain measures of\n";
    std::cout << "fluxweed to the cauldron, but you don't remember exactly how many.\n";
    std::cout << "How many measures do we add?\n";

char choicec1;

    for (int i = 0; i < 3 && choicec1 != 'A' && choicec1 != 'B' && choicec1 != 'C'; i++) {

        std::cout << "Enter A if you add 1 measure\n";
        std::cout << "Enter B if you add 2 measures\n";
        std::cout << "Enter C if you add 3 measures.\n";
        std::cin >> choicec1;

    }

    switch (choicec1) {

        case 'A':
            std::cout << "Hmm.. let's see how this turns out. \n";
            std::cout << "Are you really sure that we needed only 1 measure? \n";
            break;

        case 'B':
            std::cout << "Hm.. looks like maybe you should have studied for this test\n";
            std::cout << "Hoping to have some luck while doing this potion \n";
            break;

        case 'C':
            std::cout << "Well.. looks like you're right.\n";
            std::cout << "Apparently you have a really nice intuition. Keep it going! \n";
            break;

        default:
            std::cout << "Sorry, you haven't entered a valid choice.\n";
            std::cout << "Goodbye.\n";
            return 0;
    }

    std::cout << "Now, you observe that one of your classmates is adding 2 bundles of knotgrass to the cauldron\n";
    std::cout << "And even if you are not proud of copying him, you really need to do it in order not to fail. \n";
    std::cout << "You get distracted for a second and you didn't observe if he stired the potion 4 times clockwise\n";
    std::cout << "or 4 times anti-clockwise\n";
    std::cout << "Which one are you choosing?\n";

char choicec2;

    for (int i = 0; i < 3 && choicec2 != 'A' && choicec2 != 'B' && choicec2 != 'C'; i++) {

        std::cout << "Enter A if you stir 4 times clockwise\n";
        std::cout << "Enter B if you stir 4 times anti-clockwise\n";
        std::cout << "Enter C if you stir randomly in each direction.\n";
        std::cin >> choicec2;

    }

    switch (choicec2) {

        case 'A':
            std::cout << "Looks like you took the perfect choice! Or at least your potion hasn't exploded... yet. \n";
            std::cout << "Hoping your intution keeps like that. Good luck! \n";
            break;

        case 'B':
            std::cout << "Hm.. looks like maybe you should have studied for this test\n";
            std::cout << "Hoping you have some luck while doing this potion.. that right now is smelling a liiiitle bit weird. \n";
            break;

        case 'C':
            std::cout << "Oh oh.. it looks like stiring randomly didn't turn out well\n";
            std::cout << "and now your potion... exploded!! Snape is mad at you and \n";
            std::cout << "sorry but you have failed your exam.\n";
            std::cout << "THE END\n";
            return 0;

        default:
            std::cout << "Sorry, you haven't entered a valid choice.\n";
            std::cout << "Goodbye.\n";
            return 0;
    }

    std::cout << "OHH.. THANKS GOD! Hermione managed to send you a little note with the following instructions and \n";
    std::cout << "you don't have to keep guessing.. until the final steps.\n";
    std::cout << "'Add 4 leeches to the cauldron .Add 2 scoops of lacewing flies to the mortar, \n"; 
    std::cout << "crush to a fine paste, then add 2 measures of the crushed lacewings to the cauldron. Heat for 30 seconds on a low heat'.";
    std::cout << "However, you don't remember for how many minutes you need to wave your wand then\n";
    std::cout << "let the potion brew since you have a copper caudldron\n";
    char choicec3;

    for (int i = 0; i < 3 && choicec3 != 'A' && choicec3 != 'B' && choicec3 != 'C'; i++) {

        std::cout << "Enter A if you choose let it brew for 80 minutes\n";
        std::cout << "Enter B if you choose to let it brew for 60 minutes\n";
        std::cout << "Enter C if you choose to let it brew for 30 minutes\n";
        std::cin >> choicec3;

    }

    switch (choicec3) {

        case 'A':
            std::cout << "Oh oh! That's so much more time for a copper cauldron and now your potion is useless. \n";
            std::cout << "You needed to let it brew for 60 minutes. Good luck for your next test! \n";
            return 0;

        case 'B':
            std::cout << "Excellent! Looks like you remembered something or maybe you're really good at guessing\n";
            std::cout << "60 minutes is perfect for a copper cauldron. Looks like you made the right choice! \n";
            break;

        case 'C':
            std::cout << "Oh oh.. that's less time than expected for a copper cauldron\n";
            std::cout << "your potion is not ready yet and you decided to present it to professor Snape like that \n";
            std::cout << "sorry but you have failed your exam.\n";
            std::cout << "THE END\n";
            return 0;

        default:
            std::cout << "Sorry, you haven't entered a valid choice.\n";
            std::cout << "Goodbye.\n";
            return 0;
    }

    std::cout << "Congratulations! Somehow you managed to pass your exam.. your potion is not perfect \n";
    std::cout << "but it works. Professor Snape has decided to grade you with a B+. Nice intuition!!\n";


}
