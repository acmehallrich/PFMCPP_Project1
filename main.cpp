#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:        cat
//  action 1:    the cat runs
cat.run();
//  action 2:    the cat meows
cat.meow();
//  action 3:    the cat eats
cat.eat();
//  2)            
//  Noun:        vinylRecord
//  action 1:    the vinylRecord plays music
vinylRecord.playsMusic();
//  action 2:    the vinylRecord skips
vinylRecord.skip();
//  action 3:    the vinylRecord turns
vinylRecord.turn();
//  3)
//  Noun:        weightLifter
//  action 1:    the weightLifter lifts weights
weightLifter.liftsweight();
//  action 2:    the weightLifter sweats
weightLifter.sweat();
//  action 3:    the weightLifter does pushups
weightLifter.doespushup();
//  4)
//  Noun:        chef    
//  action 1:    the chef cooks
chef.cook();
//  action 2:    the chef cuts onions
chef.cutOnion();
//  action 3:    the chef writes recipes 
chef.writeRecipe();
//  5)
//  Noun:        leg
//  action 1:    the leg kicks
leg.kick();
//  action 2:    the leg stretches 
leg.stretch();
//  action 3:    the leg twists
leg.twist();
//  6)
//  Noun:        musician
//  action 1:    the musician performs
musician.perform();
//  action 2:    the musician composes
musician.compose();
//  action 3:    the musician practices
musician.practice();
//  7)
//  Noun:        plant
//  action 1:    the plant grows
plant.grow();
//  action 2:    the plant dies
plant.die();
//  action 3:    the plant gives fruit
plant.giveFruit();
//  8)
//  Noun:        athlete  
//  action 1:    the athlete competes
athlete.compete();
//  action 2:    the athlete wins
athlete.win();
//  action 3:    the athlete trains
athlete.train();
//  9)
//  Noun:        audience
//  action 1:    the audience cheers
audience.cheer();
//  action 2:    the audience boos
audience.boo();
//  action 3:    the audience listens
audience.listen();
//  10)
//  Noun:        the airline pilot
//  action 1:    the airline pilot flies the plane
airlinePilot.flyThePlane();
//  action 2:    the airline pilot lands the plane
airlinePilot.landThePlane();
//  action 3:    the airline pilot talks to passengers
airlinePilot.talkToPassengers();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
