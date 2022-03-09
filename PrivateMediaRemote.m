#import <Foundation/Foundation.h>
#import <PrivateMediaRemote/PrivateMediaRemote.h>

@implementation PrivateMediaRemote

+ (NSURL *)bundleURL {
	static NSURL *bundleURL = nil;
	static dispatch_once_t onceToken;
	[NSBundle bundleWithPath:@""];
	dispatch_once(&onceToken, ^{
		bundleURL = [NSURL fileURLWithPath:@"/System/Library/PrivateFrameworks/MediaRemote.framework"];
	});
	return bundleURL;
}

+ (NSBundle *)bundle {
	static NSBundle *privateFramework = nil;
	static dispatch_once_t onceToken;
	dispatch_once(&onceToken, ^{
		privateFramework = [NSBundle bundleWithURL:self.bundleURL];
	});
	return privateFramework;
}

+ (BOOL)load {
	return [self.bundle load];
}

+ (BOOL)unload {
	return [self.bundle unload];
}

@end
