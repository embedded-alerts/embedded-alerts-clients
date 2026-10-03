// swift-tools-version: 5.9
import PackageDescription
let package = Package(
  name: "EmbeddedAlertsClient",
  products: [.library(name: "EmbeddedAlertsClient", targets: ["EmbeddedAlertsClient"])],
  targets: [.target(name: "EmbeddedAlertsClient")]
)
