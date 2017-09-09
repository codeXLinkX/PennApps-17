
# get the args as python py.py --l = '[1,2,3,4,5,6]'

import pickle
import sys


def main():
    file_name = sys.argv[1]
    x = sys.argv[2].split()
    model = pickle.load(open(file_name, 'rb'))
    y_pred = model.predict(x)
    return y_pred


if __name__ == '__main__':
    main()
