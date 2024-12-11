#!/bin/swift

func spaces(_ h: Int) {
    //if h == 0 {return}
    for _ in 0...h {
        print(" ", terminator: "")
    }
}

while true {
    for i in 0...15 {
        spaces(i)
        print("*")  
        try await Task.sleep(for: .milliseconds(100)) 
    }

    for i in 0...15 {
        spaces(16-i)
        print("*")  
        try await Task.sleep(until: .now.advanced(by: .milliseconds(100)))         
    }
}
