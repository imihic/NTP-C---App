#include "rtaudio/RtAudio.h"
#include <iostream>
#include <cstdlib>
#include <cstring>

#pragma package(smart_init,weak)

class AudioStream {
   public :
          static RtAudio adac;
          static int inout( void *outputBuffer, void *inputBuffer, unsigned int nBufferFrames,
           double streamTime, RtAudioStreamStatus status, void *data )
           {
           // Since the number of input and output channels is equal, we can do
     // a simple buffer copy operation here.
     if ( status ) std::cout << "Stream over/underflow detected." << std::endl;
     unsigned int *bytes = (unsigned int *) data;
     memcpy( outputBuffer, inputBuffer, *bytes );
     return 0;
     }

   static int recordStreamAudio(){
          if ( adac.getDeviceCount() < 1 ) {
                 std::cout << "\nNo audio devices found!\n";
                 exit( 0 );
          }

  // Set the same number of channels for both input and output.
  unsigned int bufferBytes, bufferFrames = 512;
  RtAudio::StreamParameters iParams, oParams;
  iParams.deviceId = 0; // first available device
  iParams.nChannels = 2;
  oParams.deviceId = 0; // first available device
  oParams.nChannels = 2;

  adac.openStream( &oParams, &iParams, RTAUDIO_SINT32, 44100, &bufferFrames, &inout, (void *)&bufferBytes );

  bufferBytes = bufferFrames * 2 * 4;

  adac.startStream();
  return 0;
}


  static void stopStream() {
         adac.stopStream();
  }
};
