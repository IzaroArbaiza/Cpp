# cpp01 Module Exercises

## Exercise 00: BraiiiiiiinnnzzzZ

**Objective:**
Create a `Zombie` class and manage a zombie object.

**Steps:**
1. **Define the `Zombie` Class:**
   - The class should have a `name` attribute.
   - Include a method `announce` that prints the zombie's name followed by "BraiiiiiiinnnzzzZ...".

2. **Implement Constructor and Destructor:**
   - The constructor should initialize the zombie's name.
   - The destructor should print a message indicating the zombie is destroyed.

3. **Create Zombies:**
   - Create zombie instances in the main function and have them announce themselves.

## Exercise 01: Moar brainz!

**Objective:**
Create a zombie on the heap and manage its lifecycle.

**Steps:**
1. **Define the `Zombie` Class:**
   - Similar to Exercise 00.

2. **Create Function for Zombie on the Heap:**
   - Implement a function that creates a `Zombie` on the heap and returns a pointer to it.

3. **Use the Function:**
   - In the main function, create a zombie on the heap, make it announce itself, and then delete it to free memory.

## Exercise 02: HI THIS IS BRAIN

**Objective:**
Create a zombie event class to manage zombie creation.

**Steps:**
1. **Define the `ZombieEvent` Class:**
   - This class should have a method to set the type of zombies.
   - Include a method to create a zombie with a given name and return it.

2. **Integrate with `Zombie` Class:**
   - Modify the `Zombie` class to include a `type` attribute.
   - Adjust the announce method to include the type in the message.

3. **Use ZombieEvent in Main:**
   - Use `ZombieEvent` to create and manage zombies.

## Exercise 03: Unnecessary violence

**Objective:**
Create a horde of zombies using dynamic memory allocation.

**Steps:**
1. **Define the `ZombieHorde` Class:**
   - This class should have an array or vector of `Zombie` objects.
   - Include a method to create multiple zombies at once.

2. **Implement Constructor and Destructor:**
   - The constructor should take the number of zombies and allocate memory for them.
   - The destructor should clean up the allocated memory.

3. **Announce Zombies:**
   - Implement a method to make all zombies in the horde announce themselves.

## Exercise 04: Sed is for losers

**Objective:**
Implement a basic text search and replace program.

**Steps:**
1. **File I/O:**
   - Open a file, read its contents, and write the modified contents to a new file.

2. **String Replacement:**
   - Implement functionality to replace all occurrences of a given string with another string.

3. **Handle Edge Cases:**
   - Consider cases like empty strings, strings not found, and handle file errors gracefully.

## Exercise 05: Harl 2.0

**Objective:**
Create a `Harl` class with different levels of complaints.

**Steps:**
1. **Define the `Harl` Class:**
   - The class should have methods for different levels of complaints (`debug`, `info`, `warning`, `error`).

2. **Implement Complaint Methods:**
   - Each method should print a message corresponding to the complaint level.

3. **Method to Trigger Complaints:**
   - Implement a method that takes a level and triggers the corresponding complaint method.

## Exercise 06: Harl filter

**Objective:**
Enhance the `Harl` class to filter log messages based on a specified log level.

**Steps:**
1. **Add Filtering Functionality:**
   - Modify the `Harl` class to include a method that sets the minimum log level.

2. **Filter Messages:**
   - Only log messages that are at or above the set level.

3. **Demonstrate Filtering:**
   - Create a `Harl` object, set the log level, and demonstrate filtering by logging messages at various levels.
