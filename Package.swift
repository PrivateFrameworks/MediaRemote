// swift-tools-version:5.5

import PackageDescription

let package = Package(
	name: "PrivateMediaRemote",
	platforms: [
		.iOS(.v8),
		.macOS(.v10_12),
		.macCatalyst(.v13),
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
		.testTarget(
			name: "TestsWithLinking",
			dependencies: [
				"PrivateMediaRemote",
				"MediaRemote",
				.product(name: "ProtocolBuffer", package: "ProtocolBuffer"),
			],
			path: "Tests/Linked",
			cSettings: [
				.define("LINKED_TESTS"),
			]
		),
		.testTarget(
			name: "TestsWithoutLinking",
			dependencies: ["PrivateMediaRemote"],
			path: "Tests/Unlinked",
			cSettings: [
				.define("UNLINKED_TESTS"),
			]
		),
	]
)
