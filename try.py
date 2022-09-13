import tkinter as tk

def show_output():
    number = int(number_input.get())

    if number == 0:
        output_label.configure(text='แย่นะ')
        return

    output = ''
    for i in range(1, 13):
        output += str(number) + ' x ' + str(i)
        output += ' = ' + str(number * i) + '\n'

        output_label.configure(text=output)

window = tk.Tk()
window.title('แม่สูตรคูณ')
window.minsize(width=400, height=400)

titel_label = tk.Label(master=window, text='แม่สูตรคูร')
titel_label.pack(pady=20)

number_input = tk.Entry(master=window, width=15)
number_input.pack()

ok_button = tk.Button(
    master=window, text='ได้แก่',
    command=show_output, width=15, height=2
)
ok_button.pack(pady=20)

output_label = tk.Label(master=window)
output_label.pack()



window.mainloop()