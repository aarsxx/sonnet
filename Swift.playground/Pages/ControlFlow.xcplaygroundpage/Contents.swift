//: [Previous](@previous)

import Foundation

let isPresident = true
let threatLevel = 1
let officerRank = 1

if threatLevel > 5 && officerRank >= 3 || isPresident {
    print("(1) FIRE ROCKETS!!!")
}

if threatLevel > 5 && (officerRank >= 3 || isPresident) {
    print("(2) FIRE ROCKETS!!!")
}
// Output: (1) FIRE ROCKETS!!!

for i in 1...5 {
    print(i)
}
// Output: 1 2 3 4 5

for i in 1..<5 {
    print(i)
}
// Output: 1 2 3 4

for i in 0..<10
{
    if i.isMultiple(of: 2) {
        continue
    }

    if i == 7 {
        break
    }

    print(i)
}
// Output: 1 3 5

for i in 0..<10
{
    if i.isMultiple(of: 2) {
        continue
    }

    if i == 7 {
        break
    }

    print(i)
}
// Output: 1 3 5

var steps = 42

while steps > 0 {
    steps -= 9
    print(steps)
}
// Output: 33 24 15 6 -3

enum WeatherType {
    case rain, clear, sunny, overcast, tsunami, earthquake, snow;
}

let weather = WeatherType.sunny

switch weather
{
    case .rain:
        print("Bring a raincoat!")
    case .clear, .sunny:
        print("Don't forget your sunglasses.")
    case .overcast:
        print("It's really depressing.")
    case .tsunami, .earthquake:
        print("OH NO! BIG WAVE!")
    default:
        print("Expect the best, prepare for the worst.")
}

//: [Next](@next)
