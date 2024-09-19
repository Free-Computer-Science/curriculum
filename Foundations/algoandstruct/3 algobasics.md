# The Basics of Algorithms

***Lesson Objectives:*** Learn how to plan, write and analyze algorithms using 3 different problems


## Looking at algorithms

Go to example 11insert.txt and look at the string. You will find that there is a random set of numbers out of order in a text file.
As a hypothetical, let us put forward an example ticket you might get while working as a software professional: 

## An Aside: The Ticket
In the world of software development, much of what we do rides on **tickets** or specific work orders we receive to build, design, or resolve issues as they arise.
These tickets are often called "issues", "bugs", or "user stories." The specifics of why are for a later course, but for now, we are just going to call this one a "user story."

1. Tickets ususally have a notification or identity number
2. They always have a user associated with them
3. They capture what the end-user wants in a single sentence
4. They have a "so that I can do X" statement
5. And there is acceptance criteria


Sometimes user stories are bundled into a larger set of user stories called "epics." Rather than diving into the nitty gritty, let's assume you have been given a ticket:

1. Name: tst-123456 insert.txt is output as unsorted
2. User: Name, Your
3. insert.txt is always output as unsorted, but it has been deemed not feasable to modify current program. User wants a program that sorts this information from smallest to largest so that we can properly interpret data.
4. Acceptance criteria: Data is sorted correctly

Congrats! Your first ticket! (or your umpteenth if you are already a software developer). While you don't need to do this for everything,
it is good to think about tickets and stories as you go through the exercises and projects you take on.

That being said, let's look at how we would sort this data

## Psuedocode

Before we begin, we want to talk through our code before we ever start to write it. To do so, lets use a process called 
"psuedocoding" which allows us to 'write' code with ever writing it. We'll use words we are familiar with in programmng, 
such as "for" or "if" or other parts of our control flow, but without worrying about some of the more nitty gritty stuff.


```
function sort(number)
    
    
```