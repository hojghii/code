import tkinter as tk
def set_message():
    name = text_input.get()
    output_label.configure(text=f'สวัสดีก่ะ {name} ยินดีที่ได้รู้จักนะก๊ะ')


window = tk.Tk()
window.title('งับ')
window.minsize(width=500, height=500)

title_label = tk.Label(master=window, text='กรุณากรอกชื่อหน่อยนะก๊ะ', font=(50))
title_label.pack(pady=20)

text_input = tk.Entry(master=window, width=20, font=(10))
text_input.pack(pady=20)

submit_button = tk.Button(master=window, text='Submit', command=set_message)
submit_button.pack(pady=20)

output_label = tk.Label(master=window, text='')
output_label.pack(pady=20)

window.mainloop()