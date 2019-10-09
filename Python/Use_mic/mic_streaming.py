import pyaudio
import numpy as np
import threading


def output(pi_obj, data):
    pi_obj.write(data)

def start_streaming():
    CHUNK = 1024
    RATE = 44100

    p=pyaudio.PyAudio()
    stream_in=p.open(format=pyaudio.paInt16,
                        channels=1,
                        rate=RATE,
                        input=True,
                        frames_per_buffer=CHUNK)

    stream_out = p.open(format = pyaudio.paInt16,
                        channels = 1,
                        rate = RATE,
                        output = True)

    while True:
        t1 = threading.Thread(target=output, args=(stream_out, stream_in.read(CHUNK)))
        t1.daemon = True
        t1.start()

    stream_in.stop_stream()
    stream_in.close()
    stream_out.stop_stream()
    stream_out.close()
    p.terminate()

if __name__ == "__main__":
    start_streaming()