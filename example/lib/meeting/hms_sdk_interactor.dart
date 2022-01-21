//Project imports
import 'package:hmssdk_flutter/hmssdk_flutter.dart';

class HMSSDKInteractor {
  late HMSConfig config;
  late List<HMSMessage> messages;
  late HMSSDK hmsSDK;

  HMSSDKInteractor() {
    hmsSDK = HMSSDK();
    hmsSDK.build();
  }

  Future<void> join({required HMSConfig config}) async {
    this.config = config;
    await hmsSDK.join(config: this.config);
  }

  void leave({required HMSActionResultListener hmsActionResultListener}) async {
    hmsSDK.leave(hmsActionResultListener: hmsActionResultListener);
  }

  Future<HMSException?> switchAudio({bool isOn = false}) async {
    return await hmsSDK.switchAudio(isOn: isOn);
  }

  Future<HMSException?> switchVideo({bool isOn = false}) async {
    return await hmsSDK.switchVideo(isOn: isOn);
  }

  Future<void> switchCamera() async {
    return await hmsSDK.switchCamera();
  }

  Future<bool> isScreenShareActive() async {
    return await hmsSDK.isScreenShareActive();
  }

  void sendBroadcastMessage(
      String message, HMSActionResultListener hmsActionResultListener) {
    hmsSDK.sendBroadcastMessage(
        message: message,
        type: "chat",
        hmsActionResultListener: hmsActionResultListener);
  }

  void sendDirectMessage(String message, HMSPeer peerTo,
      HMSActionResultListener hmsActionResultListener) async {
    hmsSDK.sendDirectMessage(
        message: message,
        peerTo: peerTo,
        type: "chat",
        hmsActionResultListener: hmsActionResultListener);
  }

  void sendGroupMessage(String message, List<HMSRole> hmsRolesTo,
      HMSActionResultListener hmsActionResultListener) async {
    hmsSDK.sendGroupMessage(
        message: message,
        hmsRolesTo: hmsRolesTo,
        type: "chat",
        hmsActionResultListener: hmsActionResultListener);
  }

  Future<void> preview({required HMSConfig config}) async {
    this.config = config;
    return hmsSDK.preview(config: config);
  }

  void startHMSLogger(HMSLogLevel webRtclogLevel, HMSLogLevel logLevel) {
    hmsSDK.startHMSLogger(webRtclogLevel: webRtclogLevel, logLevel: logLevel);
  }

  void removeHMSLogger() {
    hmsSDK.removeHMSLogger();
  }

  void addLogsListener(HMSLogListener hmsLogListener) {
    hmsSDK.addLogListener(hmsLogListener: hmsLogListener);
  }

  void removeLogsListener(HMSLogListener hmsLogListener) {
    hmsSDK.removeLogListener(hmsLogListener: hmsLogListener);
  }

  void addMeetingListener(HMSUpdateListener listener) {
    hmsSDK.addMeetingListener(listener: listener);
  }

  void removeMeetingListener(HMSUpdateListener listener) {
    hmsSDK.removeMeetingListener(listener: listener);
  }

  void addPreviewListener(HMSPreviewListener listener) {
    hmsSDK.addPreviewListener(listener: listener);
  }

  void removePreviewListener(HMSPreviewListener listener) {
    hmsSDK.removePreviewListener(listener: listener);
  }

  void acceptChangeRole(HMSRoleChangeRequest hmsRoleChangeRequest,
      HMSActionResultListener hmsActionResultListener) {
    hmsSDK.acceptChangeRole(
        hmsRoleChangeRequest: hmsRoleChangeRequest,
        hmsActionResultListener: hmsActionResultListener);
  }

  void stopCapturing() {
    hmsSDK.stopCapturing();
  }

  Future<HMSPeer?> getLocalPeer() async {
    return await hmsSDK.getLocalPeer();
  }

  Future<bool> startCapturing() async {
    return await hmsSDK.startCapturing();
  }

  Future<HMSPeer?> getPeer({required String peerId}) async {
    List<HMSPeer>? peers = await hmsSDK.getPeers();

    return peers?.firstWhere((element) => element.peerId == peerId);
  }

  void changeTrackState(HMSTrack forRemoteTrack, bool mute,
      HMSActionResultListener hmsActionResultListener) {
    hmsSDK.changeTrackState(
        forRemoteTrack: forRemoteTrack,
        mute: mute,
        hmsActionResultListener: hmsActionResultListener);
  }

  void endRoom(bool lock, String reason,
      HMSActionResultListener hmsActionResultListener) {
    hmsSDK.endRoom(
        lock: lock,
        reason: reason,
        hmsActionResultListener: hmsActionResultListener);
  }

  void removePeer(
      HMSPeer peer, HMSActionResultListener hmsActionResultListener) {
    hmsSDK.removePeer(
        peer: peer,
        reason: "Removing Peer from Flutter",
        hmsActionResultListener: hmsActionResultListener);
  }

  void changeRole(
      {required HMSPeer forPeer,
      required HMSRole toRole,
      bool force = false,
      required HMSActionResultListener hmsActionResultListener}) {
    hmsSDK.changeRole(
        forPeer: forPeer,
        toRole: toRole,
        force: force,
        hmsActionResultListener: hmsActionResultListener);
  }

  Future<List<HMSRole>> getRoles() async {
    return await hmsSDK.getRoles();
  }

  Future<bool> isAudioMute(HMSPeer? peer) async {
    return await hmsSDK.isAudioMute(peer: peer);
  }

  Future<bool> isVideoMute(HMSPeer? peer) async {
    // TODO: add permission checks in exmaple app UI
    return await hmsSDK.isVideoMute(peer: peer);
  }

  void muteAll() {
    // TODO: add permission checks in exmaple app UI
    hmsSDK.muteAll();
  }

  void startScreenShare() {
    hmsSDK.startScreenShare();
  }

  void stopScreenShare() {
    hmsSDK.stopScreenShare();
  }

  void unMuteAll() {
    // TODO: add permission checks in exmaple app UI
    hmsSDK.unMuteAll();
  }

  void setPlayBackAllowed(bool allow) {
    // TODO: add permission checks in exmaple app UI
    hmsSDK.setPlayBackAllowed(allow: allow);
  }

  void startRtmpOrRecording(HMSRecordingConfig hmsRecordingConfig,
      HMSActionResultListener hmsActionResultListener) {
    hmsSDK.startRtmpOrRecording(
        hmsRecordingConfig: hmsRecordingConfig,
        hmsActionResultListener: hmsActionResultListener);
  }

  void stopRtmpAndRecording(HMSActionResultListener hmsActionResultListener) {
    hmsSDK.stopRtmpAndRecording(
        hmsActionResultListener: hmsActionResultListener);
  }

  Future<HMSRoom?> getRoom() async {
    return await hmsSDK.getRoom();
  }

  void changeMetadata(
      {required String metadata,
      required HMSActionResultListener hmsActionResultListener}) {
    hmsSDK.changeMetadata(
        metadata: metadata, hmsActionResultListener: hmsActionResultListener);
  }

  void changeName(
      {required String name,
      required HMSActionResultListener hmsActionResultListener}) {
    hmsSDK.changeName(
        name: name, hmsActionResultListener: hmsActionResultListener);
  }

  Future<void> startHLSStreaming(String meetingUrl,
      HMSActionResultListener hmsActionResultListener) async {
    await hmsSDK.startHlsStreaming(meetingUrl, "meta data",
        hmsActionResultListener: hmsActionResultListener);
  }

  Future<void> stopHLSStreaming(
      {required HMSActionResultListener hmsActionResultListener}) async {
    await hmsSDK.stopHlsStreaming(
        hmsActionResultListener: hmsActionResultListener);
  }

  Future<List<HMSPeer>?> getPeers() async{
    return await hmsSDK.getPeers();
  }

}
