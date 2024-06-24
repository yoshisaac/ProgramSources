//This is basically a joke.
//There is a Swift interpreter for windows, and this is for it. 

let waveLength = 45

func spaces(n: Int) {
    var i = 0
    while i < n {
        print(" ", terminator: "")
        i += 1
    }
} 

var time: Int
while true {
    var x = 0
    while x < waveLength {
        spaces(n: x)
        print("*")
        x += 1
        time = 0
        while time < 999999 {time = time + 1} //This is CPU dependent. 
    }                                        //It might make the program run slower or faster depending on the hardware.

    var y = waveLength
    while y > 0 {
        spaces(n: y)
        print("*")
        y -= 1
        time = 0
        while time < 999999 {time = time + 1}
    }
}