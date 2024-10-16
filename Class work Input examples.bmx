'PROGRAM: Working with the Input function.
'OBJECTIVE: Ask a user for some information, then output a result.
'PROGRAMMER: Yaowei Lei.
'Date: 09/21/2021

Global name:String
Global favColor:String
Global yob:String
Global age:Int
Global favAnimal:String
Global height:String


name = Input("What is your name? ")
favColor = Input("What is your favorite color? ")
yob = Input("What year were you born? ")
favAnimal = Input("What is your favorite animal? ")
height = Input("How tall are you? ")

Print
Print
Print "Hello, " + name + "! Welcome to our game!"
age = (2021 - Int(yob))

Print "You are " + age + " years old this year!!"
Print "You are " + height + "feet tall! "
Print "Your favorite color is " + favColor + ","
Print "Also, your favorite animal is " + favAnimal + ". "
Print
Print "The end."
