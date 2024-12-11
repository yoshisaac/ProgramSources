#!/bin/swift
import Foundation

var x: Double = 0

while true {
    for _ in 0...Int(abs(tan(sin(x))*100)) {
        print(" ", terminator: "")
    }
    print("*")

    x+=0.1
    try await Task.sleep(for: .milliseconds(100)) 
}
