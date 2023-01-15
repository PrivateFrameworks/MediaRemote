// swift-tools-version:5.3

// Swift 5.3 adds support for `binaryTarget`

import PackageDescription

let package = Package(
	name: "PrivateMediaRemote",
	platforms: [
		.iOS(.v8),
		.macOS(.v10_12),
		.tvOS(.v9),
		.watchOS(.v2),
	],
	products: [
		.library(
			name: "PrivateMediaRemote",
			targets: ["PrivateMediaRemote"]
		),
		.library(
			name: "MediaRemote",
			targets: ["MediaRemote"]
		),
	],
    dependencies: [
		.package(url: "https://github.com/PrivateFrameworks/ProtocolBuffer", .upToNextMinor(from: "0.1.0")),
    ],
	targets: [
		.target(
			name: "PrivateMediaRemote",
			dependencies: [
				.product(name: "PrivateProtocolBuffer", package: "ProtocolBuffer"),
			],
			path: "Sources",
			publicHeadersPath: "."
		),
		.binaryTarget(
			name: "MediaRemote",
			path: "MediaRemote.xcframework"
		),
	]
)
