for i, j in enumerate([*open(0)][1:]):print('Case #%d: %s = %d'%(i+1, j.replace(' ', ' + ').rstrip(), sum(map(int, j.split()))))
