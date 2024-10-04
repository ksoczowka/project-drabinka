import simpleTestExtension as ste

path = "DATA.tsv"

data = ste.getDataFromFile(path)

print(data[int(input("Wpisz numer: "))])