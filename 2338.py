alphabet = {
             "=.===":          'a',
			 "===.=.=.=":      'b',
			 "===.=.===.=":    'c',
			 "===.=.=":        'd',
			 "=":              'e',
			 "=.=.===.=":	   'f',
			 "===.===.=":      'g',
			 "=.=.=.=":		   'h',
			 "=.=":			   'i',
			 "=.===.===.===":  'j',
			 "===.=.===":	   'k',
			 "=.===.=.=":	   'l',
			 "===.===": 	   'm',
			 "===.=":		   'n',
			 "===.===.===":	   'o',
			 "=.===.===.=":	   'p',
			 "===.===.=.===":  'q',
			 "=.===.=":		   'r',
			 "=.=.=":		   's',
			 "===":			   't',
			 "=.=.===":		   'u',""
			 "=.=.=.===":	   'v',
			 "=.===.===":	   'w',
			 "===.=.=.===":    'x',
			 "===.=.===.===":  'y',
			 "===.===.=.=":    'z',
}

n = int(input())

for i in range(n):
    morse = input().split("...")
    #morse.remove("")
    #print(morse)    
    
    message = ""
    for letter in morse:
        #letter = letter if letter.startswith(".") else letter[1:-1]
        if letter == "":
            message += " "
        else:
            message += alphabet[letter if not letter.startswith(".") else letter[1:len(letter)]]

    print(message)
