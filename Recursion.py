input_srt_1 = "lucidProgramming"
input_srt_2 = "LucidProgramming"
input_srt_3 = "lucidprogramming"

def find_uppercase_iterative(input_str):
	for i in range(len(input_str)):
		if input_str[i].isupper():
			return input_str[i]
		return "No upper case character found"

print(find_uppercase_iterative(input_srt_1))
print(find_uppercase_iterative(input_srt_2))
print(find_uppercase_iterative(input_srt_3))
