#!/bin/bash

rm ./data/Screen1/eng/s0/intro.mp4
rm ./data/Screen2/eng/s0/intro.mp4
rm ./data/videos/pr1.mp4
rm ./data/videos/pr2.mp4
rm ./data/videos/pr3.mp4
rm ./data/videos/pr4.mp4
rm ./data/videos/pr5.mp4
rm ./data/videos/pr6.mp4

cp -r -v ./videos/intro.mp4 ./data/Screen1/eng/s0/
cp -r -v ./videos/intro.mp4 ./data/Screen2/eng/s0/
cp -r -v ./videos/vid.mp4 ./data/Screen1/eng/s1/
cp -r -v ./videos/crio.mp4 ./data/videos/
cp -r -v ./videos/hot.mp4 ./data/videos/
cp -r -v ./videos/pr1.mp4 ./data/videos/
cp -r -v ./videos/pr2.mp4 ./data/videos/
cp -r -v ./videos/pr3.mp4 ./data/videos/
cp -r -v ./videos/pr4.mp4 ./data/videos/
cp -r -v ./videos/pr5.mp4 ./data/videos/
cp -r -v ./videos/pr6.mp4 ./data/videos/
