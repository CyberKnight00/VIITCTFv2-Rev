import time,sys
part5 = 'f3phe3'
part1 = 'Clp'
part2 = 'S1y3'

 # Auther Vishal Biswas a.k.a CyberKnight00 
 # https://twitter.com/CyberKnight00

def flag(key, t):
    if key == 'Password' and t == 1337:
        part3 = 'a0g'
        print '404 Flag Not Found'
        part4 = 'f0'
        time.sleep(60)
        flag = part1 + '_' + part2 + '_' + part3 + '_' + part4 + '_' + part5
        flag = flag.decode('rot13')
        print 'Just Kidding Flag is : VIITCTF{' + flag + '}'
    else:
        print key * t


if len(sys.argv) < 2:
    print 'Give a string ', sys.argv[0], ' < string >'
elif len(sys.argv) < 3:
    print 'Give a number ', sys.argv[0], ' ', sys.argv[1], ' < number >'
else:
    flag(sys.argv[1], int(sys.argv[2]))
