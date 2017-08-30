# Lab Exercise 1: Introduction to C, Git, and the MSP430
This lab is meant to be a gentle introduction to working with the code provided over github, adding your own code, C programming, and getting your launchpads to work. The due date for this Lab exercise is the date of submission for the Milestone project.

## Assignment
The overall goal of this exercise is to generate a "math.c" and "math.h" file that can be placed into an example UART Calculator code. The code provided to you will listen over the hardware UART Channel for a string with the format "INT1(operator)INT2\r" where \r is a carraige return. The code will then check the format of the string, then if it is formatted correctly, invoke a math() function to perform the requested operation (this is your code). math() will return an integer, which will be converted to a string and sent back over UART. So what you need to do to complete this is:
1. Generate a new repository to work in from Github classroom (if you are reading this, you most likely have done this).
2. Run the example code provided to ensure that you can communicate over UART to your launchpads.
3. Import the assignment files and generate a math.c file from the provided prototype in the corresponding math.h
4. Upload your code with documentation back to your repository.
5. Update your README.md files with documentation similar to those found in the assignment files.


## Lab "Report"
Good news! You do not have to write a lab report on what you do in this lab. Instead, we would rather see you develop your documentation skills so that the code you develop can be used by yourself and others in the future. What this means is that you will have to learn how to write what you are reading right now, a README.md. You are responsible for each set of code (.c and .h file) to generate documentation on the software, its use, and how it works. You can find an example of this in your assignment folder with the main.c and uart.c/.h files. 

## Submitting Code and Documentation
Since we are utilizing GitHub Classroom, it is your job to push your final commits to this repository before the deadline laid out in the milestone. Once this dealine has passed, whatever code is on your repository will be treated as your submission.
### "But I ran out of time. I was busy with other classes."
You have to realize these lab exercises are all self paced. Note the deadline. You theoretically have 5 weeks to do something that really should only take you a few hours. If you can not manage your time in such a way to finish these labs, you seriously need to consider your commitment to the program and to your schoolwork in general. These lab exercises are meant to only take at most 5-8 hours a week, which is one day, or a little more than 1 hour a day. Not to mention the fact that you have the internet, tutorials, forums, documentation, app notes, etc. and these labs are designed to make you use these resources.
### Why Self Paced?
I am going to say it now, there are going to be a handful of you that will not get sleep within 48 hours of the due date of a milestone cause you didnt't think the labs will be difficult. So are we setting you up for failure? Not really, only those who really do not know how to manage time and do not take this class seriously will fail. The true reason and motivation to implementing self paced labs is to facilitate those who want to take the exercise further. Some of you will finish this lab in under an hour. And you might think "What would make this better? Maybe I could..." and you take your own time and you become truly invested in the project. THIS is what we want to see. Nothing would make us happier than to see people when asked to implement a simple calulator come back and say "Well why don't you have XXX? Can this be done with YYY".

## Grading Scheme
Currently, your repository will be graded on the following pillars:
* Does your code work?
* Is your code documented and the quality of documentation?
* How easy is it to utilize/implement your code?

The main reason we are utilizing git is so we can generate libraries of example code and drivers for you to use in the future and show to potential employers what you have done.
