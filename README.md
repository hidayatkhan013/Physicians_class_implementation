# Physicians_class_implementation

**1 Fellows and Physicians**

For this practical you can reuse/expand/adjust the code you wrote last week (a **Resident/Fellow** class). If you recall **Residents** and **Fellows** are Physicians, which are hospital staff.

1. Write a class called **Physician**. A Physician has a name (eg. &quot;Tom&quot;), an address (eg. &quot;London&quot;), an age (eg. &quot;34&quot;), a number of patients that s/he is seeing (eg. &quot;3&quot;) and all the names of those patients stored in an array (eg. &quot;Steve&quot;, &quot;Bryan&quot;, &quot;Nick&quot;). The class has a constructor that upon object creation sets the name of the Physician, their age and their address to values that are passed as parameters to the constructor. It also sets the number of patients that the Physician is seeing to 0. It also has a default constructor that only sets the number of patients to 0.

1. Implement 2 functions for each attribute above. One function sets the attribute to a desired value (eg. &quot;setname(&quot;Tom&quot;)) and one function returns the value of the attribute (eg. &quot;getname()&quot;). For the array of patients you will need a function that adds to it a new patient (eg. &quot;seepatient()&quot;) and function that returns information from your entire array (ie all the patients&#39; names that the Physician is currently seeing). Hint: you don&#39;t need a separate function for the &quot;number of patients&quot; attribute. This should be dealt with in your &quot;seepatient()&quot; function.

1. Write a function for when the Physician discharges a patient. The function should accept the name of the patient, look into the patients&#39; array and find the relevant entry and replace the name of that patient with the entry &quot;discharged&quot;. Now write a main() function, instantiate a Physician object and check that all your functions work properly.

1. Write a **Fellow** class that inherits from **Physician** (ie **Fellow** is a subclass of **Physician** ). The **Fellow** class should have an additional private variable called &quot;specialty&quot; that can be set to values such as (&quot;Cardiologist&quot;, &quot;Opthalmologist&quot;, etc). Write a constructor for the Fellow that sets their specialty to a string that you pass as a parameter and a function that returns that specialty. In your main function, instantiate a fellow and set their specialty with the constructor. Also set their name, address, age, etc. Which functions did you use to input this information? Output the fellow&#39;s information on the screen.

**Alpha Sting: Overriding functions and polymorphism**

In C++ we can redefine the behaviour of some functions in objects that are derived from parent classes. This makes the writing of code easier and is called polymorphism.

1. A Fellow sees and discharges patients in a different way to a Physician. For example, if the fellow is a cardiologist, they only see patients that have a heart condition and upon discharge they keep a note of that condition for their next meeting.

Override the &quot;seepatient()&quot; and &quot;dischargepatient()&quot; functions so that:

1. seepatient() stores the patient&#39;s name and the phrase &quot; with a coronary condition&quot; next to it.
2. dischargepatient() replaces the relevant patient entry with the phrase &quot;left ventricular hypertrophy&quot; instead of &quot;discharged&quot;.

Check that your fellow class stores and discharges patients properly by using its functions in main.
