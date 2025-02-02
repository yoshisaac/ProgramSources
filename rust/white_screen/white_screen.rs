use std::time;
use term_size;
use std::io;
use std::io::Write;
use ctrlc;
use std::num::ParseIntError;

fn main() {

    ctrlc::set_handler(move || {
        print!("\u{001B}[?25h");
	std::process::exit(0);
    }).expect("Error setting Ctrl-C handler.");
	
    print!("\u{001B}[?25l");

    let Some((columns_init, lines_init)) = term_size::dimensions() else { todo!() };
    let mut mono_characters_init: String = String::new();    

    for _y in 0..lines_init {
	for _x in 0..columns_init {
	    mono_characters_init += "█";
	}
	mono_characters_init += "\n";
    }

    print!("{}", mono_characters_init);
    
    loop {
	let Some((columns, _lines)) = term_size::dimensions() else { todo!() };
	let mut mono_characters: String = String::new();

	for _ in 0..columns {
	    mono_characters += "█";
	}

	print!("{}", mono_characters);
	let _ = io::stdout().flush();
	std::thread::sleep(time::Duration::from_nanos(99999999));
	print!("\n");
    }
}
