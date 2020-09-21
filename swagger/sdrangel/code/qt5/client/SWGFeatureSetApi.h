/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 5.9.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

#ifndef _SWG_SWGFeatureSetApi_H_
#define _SWG_SWGFeatureSetApi_H_

#include "SWGHttpRequest.h"

#include "SWGDeviceState.h"
#include "SWGErrorResponse.h"
#include "SWGFeatureActions.h"
#include "SWGFeatureReport.h"
#include "SWGFeatureSet.h"
#include "SWGFeatureSettings.h"
#include "SWGSuccessResponse.h"

#include <QObject>

namespace SWGSDRangel {

class SWGFeatureSetApi: public QObject {
    Q_OBJECT

public:
    SWGFeatureSetApi();
    SWGFeatureSetApi(QString host, QString basePath);
    ~SWGFeatureSetApi();

    QString host;
    QString basePath;
    QMap<QString, QString> defaultHeaders;

    void featuresetFEatureSettingsPut(qint32 feature_set_index, qint32 feature_index, SWGFeatureSettings& body);
    void featuresetFeatureActionsPost(qint32 feature_set_index, qint32 feature_index, SWGFeatureActions& body);
    void featuresetFeatureDelete(qint32 feature_set_index, qint32 feature_index);
    void featuresetFeaturePost(qint32 feature_set_index, SWGFeatureSettings& body);
    void featuresetFeatureReportGet(qint32 feature_set_index, qint32 feature_index);
    void featuresetFeatureRunDelete(qint32 feature_set_index, qint32 feature_index);
    void featuresetFeatureRunGet(qint32 feature_set_index, qint32 feature_index);
    void featuresetFeatureRunPost(qint32 feature_set_index, qint32 feature_index);
    void featuresetFeatureSettingsGet(qint32 feature_set_index, qint32 feature_index);
    void featuresetFeatureSettingsPatch(qint32 feature_set_index, qint32 feature_index, SWGFeatureSettings& body);
    void featuresetGet(qint32 feature_set_index);
    
private:
    void featuresetFEatureSettingsPutCallback (SWGHttpRequestWorker * worker);
    void featuresetFeatureActionsPostCallback (SWGHttpRequestWorker * worker);
    void featuresetFeatureDeleteCallback (SWGHttpRequestWorker * worker);
    void featuresetFeaturePostCallback (SWGHttpRequestWorker * worker);
    void featuresetFeatureReportGetCallback (SWGHttpRequestWorker * worker);
    void featuresetFeatureRunDeleteCallback (SWGHttpRequestWorker * worker);
    void featuresetFeatureRunGetCallback (SWGHttpRequestWorker * worker);
    void featuresetFeatureRunPostCallback (SWGHttpRequestWorker * worker);
    void featuresetFeatureSettingsGetCallback (SWGHttpRequestWorker * worker);
    void featuresetFeatureSettingsPatchCallback (SWGHttpRequestWorker * worker);
    void featuresetGetCallback (SWGHttpRequestWorker * worker);
    
signals:
    void featuresetFEatureSettingsPutSignal(SWGFeatureSettings* summary);
    void featuresetFeatureActionsPostSignal(SWGSuccessResponse* summary);
    void featuresetFeatureDeleteSignal(SWGFeatureSettings* summary);
    void featuresetFeaturePostSignal(SWGSuccessResponse* summary);
    void featuresetFeatureReportGetSignal(SWGFeatureReport* summary);
    void featuresetFeatureRunDeleteSignal(SWGDeviceState* summary);
    void featuresetFeatureRunGetSignal(SWGDeviceState* summary);
    void featuresetFeatureRunPostSignal(SWGDeviceState* summary);
    void featuresetFeatureSettingsGetSignal(SWGFeatureSettings* summary);
    void featuresetFeatureSettingsPatchSignal(SWGFeatureSettings* summary);
    void featuresetGetSignal(SWGFeatureSet* summary);
    
    void featuresetFEatureSettingsPutSignalE(SWGFeatureSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void featuresetFeatureActionsPostSignalE(SWGSuccessResponse* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void featuresetFeatureDeleteSignalE(SWGFeatureSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void featuresetFeaturePostSignalE(SWGSuccessResponse* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void featuresetFeatureReportGetSignalE(SWGFeatureReport* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void featuresetFeatureRunDeleteSignalE(SWGDeviceState* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void featuresetFeatureRunGetSignalE(SWGDeviceState* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void featuresetFeatureRunPostSignalE(SWGDeviceState* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void featuresetFeatureSettingsGetSignalE(SWGFeatureSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void featuresetFeatureSettingsPatchSignalE(SWGFeatureSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void featuresetGetSignalE(SWGFeatureSet* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    
    void featuresetFEatureSettingsPutSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void featuresetFeatureActionsPostSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void featuresetFeatureDeleteSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void featuresetFeaturePostSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void featuresetFeatureReportGetSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void featuresetFeatureRunDeleteSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void featuresetFeatureRunGetSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void featuresetFeatureRunPostSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void featuresetFeatureSettingsGetSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void featuresetFeatureSettingsPatchSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void featuresetGetSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    
};

}
#endif
