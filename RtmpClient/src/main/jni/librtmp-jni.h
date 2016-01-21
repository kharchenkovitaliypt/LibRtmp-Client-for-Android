/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <stddef.h>
/* Header for class net_butterflytv_rtmp_client_RtmpClient */

#ifndef _Included_net_butterflytv_rtmp_client_RtmpClient
#define _Included_net_butterflytv_rtmp_client_RtmpClient
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     net_butterflytv_rtmp_client_RtmpClient
 * Method:    read
 * Signature: ([CI)I
 */
JNIEXPORT jint JNICALL Java_net_butterflytv_rtmp_1client_RtmpClient_read
  (JNIEnv *, jobject, jbyteArray, jint, jint);

/*
 * Class:     net_butterflytv_rtmp_client_RtmpClient
 * Method:    write
 * Signature: ([CI)I
 */
JNIEXPORT jint JNICALL Java_net_butterflytv_rtmp_1client_RtmpClient_write
  (JNIEnv *, jobject, jcharArray, jint);

/*
 * Class:     net_butterflytv_rtmp_client_RtmpClient
 * Method:    seek
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_net_butterflytv_rtmp_1client_RtmpClient_seek
  (JNIEnv *, jobject, jint);

/*
 * Class:     net_butterflytv_rtmp_client_RtmpClient
 * Method:    pause
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_net_butterflytv_rtmp_1client_RtmpClient_pause
  (JNIEnv *, jobject, jint);

/*
 * Class:     net_butterflytv_rtmp_client_RtmpClient
 * Method:    close
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_butterflytv_rtmp_1client_RtmpClient_close
  (JNIEnv *, jobject);

JNIEXPORT jint JNICALL
Java_net_butterflytv_rtmp_1client_RtmpClient_open(JNIEnv *env, jobject instance, jstring url,
                                                   jboolean isPublishMode);

#ifdef __cplusplus
}
#endif
#endif
