//Most basic JS program

var numb = 25;        //Declaring a variable of type var named "num" with value 1
console.log("Variable value is " + numb);  //Printng num

//Creating a JS program for user sign in portal of a website(Basic)

const Uid = HAR123; //Contain UniqueID of the user

var firstName = "Harsh";        //User Information
var lastName = "Khandelwal";
var email = "harsh18@gmail.com";
var password = "123456";
var country = "India";
var state = "Rajasthan";
var isLoggedInFromGoogle = false;
var isLoggedInFromFacebook = false;

console.log(`
    User with UID   : ${Uid}
    First Name      : ${firstName}
    Last Name       : ${lastName}
    Email ID        : ${email}
    password        : ${password}
    Country         : ${country}
    State           : ${state}
    Google Log-In   : ${isLoggedInFromGoogle}
    Facebook Log-In : ${isLoggedInFromFacebook}

`);

//Creating a JS program to show operators

var num1 = 556;
var num2 = 156;
var ans = num1 + num2;
console.log(ans);       //Prints 712
ans = num1 * num2;
console.log(ans);       //Prints 86736
ans = num1 % num2;
console.log(ans);       //Prints 88
ans = num1 > num2;
console.log(ans);       // Prints True

//JS program to calculate discount percentage

var costPrice = 799;    //CP of the product
var sellPrice = 399;    //SP of the product
var discount  = ((costPrice - sellPrice) / costPrice) * 100; //Formula to calculate discount
console.log("Discount percentage is " + discount + "%");    //Displays discount %
discount = Math.round(discount);    //Calling round function to remove unwanted digits
console.log("Discount percentage is " + discount + "%"); //Prints 50%

//Program to show conditionals in JS to show if student is pass or fail

var marks = 30;
if(marks < 33)
{
    console.log("Student is Fail");
}
else
{
    console.log("Student is Pass");
}

//JS program to display custom message based on the temperature using conditionals
var temp = 25;
if(temp < 20)
{
    console.log("It is freezing cold outside"); //If temp is less than 20
}
else if(temp < 30)
{
    console.log("It's moderately cold/hot outside");  //If temp is less than 30
}
else
{
    console.log("It's damn hot outside");
}

//JS program to check whether user is logged in successfully or not

var email , google , facebook;
email       = true;
facebook    = true;
google      = false;
if(email == true)
{
    console.log("Login through email success");
}
else if(google == true)
{
    console.log("Login through google success");
}
else
{
    console.log("Login through Facebook success");
}

//Program to show user signout or signin button based on authentication

var authenticated = true;
//Using if else
if(authenticated)
{
    console.log("Sign Out");
}
else
{
    console.log("Sign In");
}
//Using Ternary Operator
(authenticated) ? console.log("Sign Out") : console.log("Sign In");


/* Testing Switch case statemnts in JS to create the following roles:
    admin gets full access
    subadmin - gets access to create/delete courses
    testprep - gets access to create/delete tests
    user-gets access to consume content */

var identity = "user";
switch (identity) {
    case "admin":
        console.log("You get full access");
        break;
    case "user":
        console.log("You can Consume Content");
        break;
    case "subadmin":
        console.log("You get access to create/delete courses");
        break;
    case "testprep":
        console.log("You get access to  create/delete tests");
        break;

    default:
        console.log("Denied Access");
        break;
}


//JS program to add two numbers using function

var num1 = 78;
var num2 = 61;

//Creating function addNumbers to add the two numbers
function addNumbers(num1 , num2)
{
    return (num1 + num2);
}

//Printing the sum of the numbers
console.log(`Sum of ${num1} and ${num2} is ` + addNumbers(num1,num2));

/*
Define a function that can answer the role of a user.
A user can be on following roles:
admin - with all access
subadmin - with acccess to create/delete courses
testprep - with access to create/delete tests
user - consume all content
other - trial user.
Input: getUserRole (name, role)
*/
var name = "Harsh";
var role = "user";
function getUserRole(name , role)
{
    switch (role) {
        case "admin":
            return `${name} is admin with full access`;

        case "subadmin ":
            return `${name} is subadmin with access to create/delete courses`;

        case "testprep":
            return `${name} is testprep with access to create/delete tests`;

        case "user":
            return `${name} is user with access to consume content`;

        default:
            return `${name} is trial user with no access`;
    }
}

console.log(getUserRole(name , role));


//Understanding Contexts in JS

var age = 65;

displayAge(age);

function displayAge(a)
{
    console.log(a);
}

printAge(age);

var printAge = function (a)
{
    console.log(a);
}

// Explanation: In the above the first function will produce the output whereas the second function will produce error.This is because Global context scans functions and makes it available whereas it scans variable and make them undefined.


//Introduction To Arrays in JS
var numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9];

console.log(numbers); // Printing the whole array

console.log(numbers[5]); // Prints the element at index 5

//Note:- Unlike C/C++ in JS an array can be accessed as a whole without a loop


//Performing some operations on array
//fill()
var arr = [1, 2, 3, 4, 5, 6, 7, 8, 9];
console.log(arr.fill(5 , 0 , 6));

//Explanation:- fill() function fills the array with the element which is passed as argument. It accepts 3 arguments, element to be filled , start point , end point. The start point is inclusive and end point is exclusive.

//filter()

var arr = [15, 16, 26, 89, 123, 456];

var example = arr.filter((num) => num < 100);

console.log(example); // Prints all the number which satisfy the above condition


//Slice()
var users = ["Hey", "there", "how is it?", "I", "am", "harsh"];

console.log(users.slice(0, 3));

//Explaination:- Slice accepts 2 arguments, start point and end point. It then slices the array from the starting point and ending point.
