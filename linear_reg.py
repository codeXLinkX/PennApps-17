import pandas as pd
import numpy as np
from sklearn import linear_model
import sys
import pickle


def predict(x, y):

    regr = linear_model.LinearRegression()
    regr.fit(x, y)
    if len(sys.argv) > 3:
        file = sys.argv[3]
    else:
        file = 'model'
    pickle.dump(regr, open(file, 'wb'))
    # model = pickle.load(open('model', 'rb'))
    # y_pred = model.predict(x)
    # print("Predictions")
    # print(y_pred)

def read_file(arg):

    args = len(arg)

    if (args > 1):
        file_name = sys.argv[1]
    else:
        file_name = 'data.csv'

    data = pd.read_csv(file_name).squeeze()

    if (args > 2):
        feature_count = int(sys.argv[2])
    else:
        feature_count = len(data.columns)

    x = data[data.columns[0:feature_count]]
    y = data[data.columns[feature_count:]]

    return x, y


def main():

    x, y = read_file(sys.argv)

    predict(x, y)



if __name__ == '__main__':
    main()
