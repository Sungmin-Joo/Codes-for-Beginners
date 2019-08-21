string1 = '''
if a != 0:
    print("'a' is ",a)
else:
    print("'a' is zero.")
'''

string2 = '''
a+10
'''
def  what_is_eval():
    print('----------------------------------')
    print('this is code in what_is_eval')
    print('do "eval(string2)" in function : ',eval(string2))
    '''
    var 'a' is not a global var but a local var.
    but when call 'a' in 'what_is_eval', func know the local var 'a'.

    This is due to the nature of the 'val' function.
    The 'val' function has the same effect as registering a 'factor' directly
    with the interpreter when the function is performed.

    It is one of the convenient and dangerous functions.
    '''

def what_is_exec():
    print('----------------------------------')
    print('this is code in what_is_exec')

    print('do "exec(string1)" in function : ')
    exec(string1)
    '''
    The function "exec" has the same role as the function "val" but has different factors.
    The factor in the function 'val' is one expression,
    and the factor in the function 'exec' is a sentence with the word Python applied.
    '''

if '__main__':
    a=20
    print('Local variables \'a\' is defined in \'__main__\'')
    print("Do \'print(a)\' : ",a)
    print('Let\'s run the \'what_is_eval\' function')
    what_is_eval()
    print('Let\'s run the \'what_is_exec\' function')
    what_is_exec()