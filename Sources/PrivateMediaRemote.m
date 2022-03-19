#import <PrivateMediaRemote/PrivateMediaRemote.h>

@implementation PrivateMediaRemote

+ (NSURL *)bundleURL {
	return [NSURL fileURLWithPath:@"/System/Library/PrivateFrameworks/MediaRemote.framework"];
}

+ (NSBundle *)bundle {
	return [NSBundle bundleWithURL:self.bundleURL];
}

+ (BOOL)load {
	return [self.bundle load];
}

+ (BOOL)unload {
	return [self.bundle unload];
}

@end
