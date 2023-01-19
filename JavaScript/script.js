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
