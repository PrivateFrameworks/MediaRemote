// swift-tools-version:4.0

import PackageDescription

let package = Package(
	name: "PrivateMediaRemote",
	products: [
		.library(
			name: "PrivateMediaRemote",
			targets: ["PrivateMediaRemote"]
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
	]
)
