import pandas as pd
import numpy as np
from sklearn import linear_model
import sys
import pickle


def predict(x, y):

    regr = linear_model.LinearRegression()
    regr.fit(x, y)
    preds = regr.predict(x)
    pickle.dump(regr, open('model', 'wb'))
    model = pickle.load(open('model', 'rb'))
    y_pred = model.predict(x)
    print("Predictions")
    print(y_pred)

def main():

    args = len(sys.argv)

    if(args > 1):
        file_name = sys.argv[1]
    else:
        file_name = 'data.csv'

    data = pd.read_csv(file_name).squeeze()

    if (args > 2):
        feature_count = int(sys.argv[2])
    else:
        feature_count = len(data.columns)

    x = data[data.columns[0:feature_count]]
    print(x)
    y = data[data.columns[feature_count:]]
    print(y)
    predict(x, y)



if __name__ == '__main__':
    main()
