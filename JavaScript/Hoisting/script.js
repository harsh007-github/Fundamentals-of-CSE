//Program to Demonstrate Hoising in Java Scipt
//Hoisting a concept in JavaScript that allows us to extract values to variables and functions even before they are defined (or declared) without giving any errors which occur during the 1st phase of Execution Context, memory creation.

printData();

console.log(a);

var a = 25;

function printData() {
  console.log("This program illustrates Hoisting!");
}

//Explanation:- Flow of the program is, firstly the printData() is invoked, secondly a is printed as undefined since it is printed before it is defined.
