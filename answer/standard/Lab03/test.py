import os;


if __name__=='__main__':
    test_floder = './Test-nowrong/'
    test_files = os.listdir(test_floder)
    
    # make
    os.system('cd ./Code && make clean && make')
    
    
    # make log file
    f = open('./'+'temp.output','w')
    
    all_log = []
    
    for f_name in test_files:
        all_log.append('-------start testing '+f_name+'------\n')
        command = './Code/parser ./Test-nowrong/' + f_name
        os.system(command + '> temp.output')
        f = open('./temp.output','r')
        all_log.extend(f.readlines())
        
    # print(all_log)
    f = open('./'+'temp.output','w')
    f.writelines(all_log)
        
        
