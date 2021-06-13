triangle_words=0
f = open('Problem_42_words.txt','r')
for word in f.read().split(','):
    word=word.replace("\"",'')#to remove ""(quotes)
    word_tot=0
    for ch in word:
        word_tot+=ord(ch)-64
    n_th_trianlge = (8*(word_tot)+1)**0.5 
    if n_th_trianlge== n_th_trianlge//1:#check whole_number
        triangle_words+=1
print(triangle_words)
f.close()
