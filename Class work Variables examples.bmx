'PROGRAM: variables.
'OBJECTIVE: Working with variables.
'PROGRAMMER: Yaowei Lei.
'Date: 09/16/2021

'Variables can be declared as either global or local.
'Global Variables: can be seen by all functions in a blitzMax program or application.
'Local variable: can be seen by the function where this variable is declared only.
'All names of variables begin with lowercase only.

Global f_name:String
Global m_initial:String
Global l_name:String
Global year_birth:Int

f_name = "Yaowei"
l_name = "Lei"
m_initial = "N"
year_birth = 1900

Print 
Print 
Print 
Print "My first name is " + f_name 
Print "My middle name initial is " + m_initial
Print "My last name is " + l_name
Print "At last, my year of born is " + year_birth
Print 
Print "Thank you and goodbye!!"
Print
Print
Print "My name is " + f_name + " " + l_name + "."
Print "I was born in " + year_birth + "!"
Print "Thank you for inquiring, ciao."
Print
Print
Global full_name:String = f_name + " " + l_name + "."
Print "My name is "+ full_name

Print
Print
Print
f_name = Input("What is your first name? ")
l_name = Input("What is your last name? ")
Global year_birth_str:String = Input("What year were you born? ")
year_birth = Int(year_birth_str)
Global age:Int = (2021 - year_birth)
Print
Print "Hello " + f_name + " " + l_name + "." 
Print "Congratulation, you are "+ age + " years old this year!!"