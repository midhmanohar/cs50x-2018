from cs50 import get_string

book=["chen",
    "kernighan",
    "Leitner",
    "Lewis",
    "Malan",
    "Muller",
    "Seltzer",
    "smith"]

name = get_string("name:");

if name in book:
    print(f"calling {name}")
else:
    print("Quitting")
