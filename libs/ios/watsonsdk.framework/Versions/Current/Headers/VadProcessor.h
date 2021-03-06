/* DO NOT EDIT THIS FILE - it is machine generated */

/* Header for class com_ibm_crl_speech_vad_VadProcessorJNI */

#ifndef _Included_VadProcessor
#define _Included_VadProcessor
#ifdef __cplusplus
extern "C" {
#endif
#undef com_ibm_crl_speech_vad_VadProcessorJNI_DEFAULT_SAMPLERATE
#define com_ibm_crl_speech_vad_VadProcessorJNI_DEFAULT_SAMPLERATE 16000L
#undef com_ibm_crl_speech_vad_VadProcessorJNI_DEFAULT_FRAMESIZE
#define com_ibm_crl_speech_vad_VadProcessorJNI_DEFAULT_FRAMESIZE 320L
    

#ifndef BYTE
#define BYTE unsigned char
#endif    

#ifndef bool
typedef enum {false=0, true=1} bool; 
#endif

/*
 * Class:     com_ibm_crl_speech_vad_VadProcessorJNI
 * Method:    preprocessChunk
 * Signature: (I[B)[B
 */
 void VadProcessor_preprocessChunk
  (int, BYTE*, int);

/*
 * Class:     com_ibm_crl_speech_vad_VadProcessorJNI
 * Method:    allocate
 * Signature: (II)I
 */
 int VadProcessor_allocate
  (int, int);

/*
 * Class:     com_ibm_crl_speech_vad_VadProcessorJNI
 * Method:    deallocate
 * Signature: (I)V
 */
 void VadProcessor_deallocate
  (int);

/*
 * Class:     com_ibm_crl_speech_vad_VadProcessorJNI
 * Method:    isPausing
 * Signature: ()Z
 */
 bool VadProcessor_isPausing();

#ifdef __cplusplus
}
#endif
#endif
