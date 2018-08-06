//
// Created by Administrator on 2018/3/2 0002.
//

#ifndef VIDEOEDITOR_FRAME_H
#define VIDEOEDITOR_FRAME_H

#include <cstdint>

#define MODEL_FLAG_AUDIO 0
#define MODEL_FLAG_VIDEO 1

class AVModel {
public:
    uint8_t *image;
    int imageLen;

    uint8_t *sample;
    int sampleLen;

    int width;
    int height;
    int pixelFormat;
    int flag; // 0 for audio data, 1 for video data

    AVModel();

    ~AVModel();

    const char *getName();

    void freeImage();

    void freeSample();
};

#endif //VIDEOEDITOR_FRAME_H