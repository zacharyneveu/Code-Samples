Zachary Neveu
Embedded Design, Fall 2016
Mohammed K. Tavana

The function of this program is to initialize several different kinds of pets
(dogs, cats, birds, fish, and penguins), and print out their values.
Primarily, I used this program as a chance to work with classes and
inheritance.  I used a separate class for each type of pet, and all classes
inherited some basic properties from a base class for all types of pets which
holds owner information.  Each type of pet has some of it's own type specific
 information (e.g. swimSpeed for fish).  The penguin class inherits from both
the bird class and the fish class because it is a bird that swims.  This gave
an opportunity to practice double inheritance but posed an interesting
challenge as well.  Because both the fish and bird classes are subclasses of
the pets class, and penguin inherits all functions in both fish and bird
classes, the penguin class includes double, identical copies of all functions
in the pets class.  I discovered that this is called the "diamond of death"
problem and solved it using virtual inheritance.
