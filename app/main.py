import ProjectDrabinka as PD

path = "DATA.tsv"

# makes Tournament object from file
tournament = PD.Tournament(path)

age_range = PD.RangeUnShort()
age_range.min = 12
age_range.max = 13

weight_range = PD.RangeUnShort()
weight_range.min = 0
weight_range.max = 55

tournament.addCategory("M12-1355-", age_range, weight_range, PD.Sex.MAN)

print(tournament.getCategoryByCode("M12-1355-"))