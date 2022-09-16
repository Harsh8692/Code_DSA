var a = 3 == 3;
a
//true
var b = 3 == '3';
b
//true (equal)'=='operator can't distinguish between string and number.
var c = 3 === 3;
c
//true
var d = 3 === '3';
d
//false (strict equal)'==='operator can distinguish between string and number.
var e = 3 != 3;
e
//false (not equal)'!=' operator. 
var f = 3 != '3';
f
//false
var g = 3 !== 3;
g 
//false
var h = 3 !== '3';
h
//true
var i = 5 <= 5;
i
