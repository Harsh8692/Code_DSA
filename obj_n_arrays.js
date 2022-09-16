//Objects
let animal ={
    name:"Cow",
    legs: 4,
}
console.log(animal); // {name:"Cow", legs: 4,}
//Dot Notation
console.log(animal.name); //Cow
// Cow

//Square Brackets Notation
console.log(animal["legs"]); //4
// 4
//Arrays
let selectBooks = ["cs", "Math", "Physics"]
console.log(selectBooks) // ["cs", "Math", "Physics"]

//Functions
function namasteWorld(name, lastName) {
    console.log(" Namaste " + name + " "+ lastName);  // Namaste Harsh Yadav
}
namasteWorld("Harsh", "Yadav");