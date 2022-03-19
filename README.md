# MediaRemote

## Installation

### Using Swift Package Manager

Add the following to your `dependencies` in `Package.swift`:
```swift
.package(url: "https://github.com/PrivateFrameworks/MediaRemote", .upToNextMinor(from: "0.1.0")),
```

And then add `PrivateMediaRemote` as a dependency to your target:
```swift
    .target(
        name: "Home",
        dependencies: [
            // ...
            .product(name: "PrivateMediaRemote", package: "MediaRemote"),
        ]
    ),
```

To link `/System/Library/PrivateFrameworks/MediaRemote.framework` add `MediaRemote` to your target dependencies:
```swift
    .target(
        name: "Home",
        dependencies: [
            // ...
            .product(name: "PrivateMediaRemote", package: "MediaRemote"),
            .product(name: "MediaRemote", package: "MediaRemote"),
        ]
    ),
```
