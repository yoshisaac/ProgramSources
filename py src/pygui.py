import dearpygui.dearpygui as dpg
import time as thread
import threading

dpg.create_context()

with dpg.window(label=" ", width=300, height=300, no_move=True, no_collapse=True):
    dpg.add_checkbox(tag="bool", label="print text")
    dpg.add_input_text(tag="txt", label="<-- Text!!", default_value="Hello, World!")
    dpg.add_spacer(height=155)
    dpg.add_button(tag="button", label="destroy gui")

dpg.create_viewport(title=" ", width=300, max_width=300, min_width=300, height=300, max_height=300, min_height=300)
dpg.setup_dearpygui()
dpg.show_viewport()

while dpg.is_dearpygui_running():

    #Close button
    if dpg.get_item_state("button")['clicked'] == True:
        dpg.stop_dearpygui()

    #Toggle for printing the typed text
    if dpg.get_value("bool") == True:
        print(dpg.get_value("txt"))
    else:
        print("off")

    dpg.render_dearpygui_frame()

dpg.destroy_context()