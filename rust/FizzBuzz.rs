fn main() {

    for i in 1..101 {
	let mut x = i.to_string();

	if i%3 == 0 && i%5 == 0 {
	    x = "FizzBuzz".to_string();
	}
	else if i%5 == 0 {
	    x = "Buzz".to_string();
	}
	else if i%3 == 0 {
	    x = "Fizz".to_string();
	}

	println!("{i} - {x}");
    }
    
}
