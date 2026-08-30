defmodule EmbeddedAlertsClient.MixProject do
  use Mix.Project
  def project, do: [app: :embedded_alerts_client, version: "0.1.0", elixir: "~> 1.15"]
  def application, do: [extra_applications: [:logger]]
end
