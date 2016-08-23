#ifndef WINDOWSDPISCALE_H
#define WINDOWSDPISCALE_H

#include <QtGlobal>

#ifdef Q_OS_WIN

#include <windows.h>

const float DEFAULT_DPI = 96.0;

float windowsDpiScale_x()
{
    HDC screen = GetDC( 0 );
    float dpiX = static_cast<float>(GetDeviceCaps(screen, LOGPIXELSX));
    ReleaseDC( 0, screen );
    return dpiX / DEFAULT_DPI;
}

float windowsDpiScale_y()
{
    HDC screen = GetDC( 0 );
    float dpiY = static_cast<float>(GetDeviceCaps(screen, LOGPIXELSY));
    ReleaseDC( 0, screen );
    return dpiY / DEFAULT_DPI;
}

#endif //Q_OS_WIN

#endif // WINDOWSDPISCALE_H
