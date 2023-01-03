# import all necessary libraries
import pandas as pd
import numpy as np

# % matplotlib inline
from plotly import __version__
import cufflinks as cf

from plotly import download_plotlyjs, init_notebook_mode, plot, iplot

# to get the connection
init_notebook_mode(connected = True)

# plotly also serves online,
# but we are using just a sample
cf.go_offline()

# creating dataframes
df = pd.DataFrame(np.random.randn(100, 4), columns ='A B C D'.split())

df2 = pd.DataFrame({'Category':['A', 'B', 'C'], 'Values':[32, 43, 50]})
df2.head()
