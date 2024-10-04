import ProjectDrabinka as PD

path = "DATA.tsv"

# makes Tournament object from file
tournament = PD.Tournament(path)

age_range = PD.RangeUnShort(12, 13)
weight_range = PD.RangeUnShort(0, 55)

tournament.addCategory("M|12-13|0-55", age_range, weight_range, PD.Sex.MAN)

print(tournament.getCategoryByCode("M|12-13|0-55"))