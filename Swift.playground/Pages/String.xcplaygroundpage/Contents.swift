//: [Previous](@previous)

import Foundation

var jobTitle: String = "iOS App Developer"

var hello = "Hello, \(jobTitle)"
// Output: Hello, iOS App Developer

let a = "Never gonna"
let b = "give you up"
let rr =  a + " " + b

let number = 42
let numberAsString = "\(number)"

let number2 = "42"
let numberAsInt = Int(number2)

let text = "Forty-two!"

for char in text {
    print(char)
}
text[text.startIndex] // F
text[text.index(before: text.endIndex)] // !
text[text.index(text.startIndex, offsetBy: 3)] // t
text[..<text.index(text.startIndex, offsetBy: 3)] // For
text[text.index(text.endIndex, offsetBy: -4)...] // two!

//: [Next](@next)
