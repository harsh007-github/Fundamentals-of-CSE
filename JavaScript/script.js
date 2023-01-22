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
