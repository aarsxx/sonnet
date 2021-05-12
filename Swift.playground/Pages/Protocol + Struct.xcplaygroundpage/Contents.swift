//: [Previous](@previous)

import Foundation

protocol Healer {
    func heal()
}

struct TiePilot {
    var starfigherModel: String = "TIE/IN Interceptor"
    var rank: String = "Lieutenant"
}

struct StormTrooper: Healer {
    var name: String = "TK-9091"
    var unit: String = "501st Legion"

    func heal() {
        print("Deploying Advanced Medical Probe!")
    }
}

print(obi_wan.midichlorians)
// Output: 13400

struct Jedi {
    var name: String
    var midichlorians: Int

    func mindTrick() {
        print("These aren't the Droids you're looking for...")
    }
    
}

// Instance of a struct
var obi_wan = Jedi(name: "Obi-Wan Kenobi", midichlorians: 13400)

// Reading a property
print(obi_wan.midichlorians)

// Calling mindTrick() function
obi_wan.mindTrick()

//: [Next](@next)
