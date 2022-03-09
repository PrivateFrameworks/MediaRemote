#ifndef PrivateMediaRemote_Blocks_h
#define PrivateMediaRemote_Blocks_h

typedef void (^MRMediaRemoteGetNowPlayingInfoBlock)(NSDictionary *info);
typedef void (^MRMediaRemoteGetNowPlayingClientBlock)(_MRNowPlayingClientProtobuf *clientObj);
typedef void (^MRMediaRemoteGetNowPlayingApplicationIsPlayingBlock)(BOOL playing);

#endif /* PrivateMediaRemote_Blocks_h */
