use std::time;
use term_size;

fn main() {
    let Some((columns, lines)) = term_size::dimensions() else { todo!() };
    let mut mono_characters: String = String::new();
    let mut x: usize = 0;
    while x < columns {
	mono_characters += "█";
	x+=1;
    }
    loop {
	println!("{}", mono_characters);
	
	std::thread::sleep(time::Duration::from_nanos(99999999));
    }
}
