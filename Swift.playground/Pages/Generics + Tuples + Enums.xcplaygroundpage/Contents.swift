//: [Previous](@previous)

import Foundation

// Generics

func insertAnimal<T>(_ animal: T, inFarm farm: Farm)
{
    // Insert `animal` in `farm`
}

// Tuples

let coffee = ("Cappuccino", 3.99)

let (name, price) = coffee
print(price)

let (name, _) = coffee
print(name)
// Output: Cappuccino

let flight = (code: "XJ601", heading: "North", passengers: 216)
print(flight.heading)
// Output: North

// enum

enum Compass {
    case north
    case east
    case south
    case west
}

//: [Next](@next)
