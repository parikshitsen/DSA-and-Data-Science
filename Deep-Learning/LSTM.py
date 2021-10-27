from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Embedding, LSTM, Dense, Dropout,Bidirectional
from tensorflow.keras.optimizers import Adam
from keras import layers
import tensorflow as tf
# # Model................
batch_size = 54 #### Root of the total no of Data
max_length=314

model_lstm = Sequential()
model_lstm.add(Embedding(num_words, output_dim = 45, input_length=max_length))
model_lstm.add(LSTM(90, dropout=0.1))
model_lstm.add(Dense(5, activation='softmax'))
optimizer = Adam(learning_rate=0.01)
model_lstm.compile(loss='sparse_categorical_crossentropy', optimizer=optimizer, metrics=["accuracy",tf.keras.metrics.CategoricalAccuracy()])

model_lstm.fit(Xt_train ,Y_train , epochs=20,batch_size=batch_size)