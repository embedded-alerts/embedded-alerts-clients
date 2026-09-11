package io.zedpkg.embedded_alerts;
import java.net.URI;
public record EmbeddedAlertsClient(URI baseUrl, String bearerToken) {
  public boolean health() { return baseUrl != null; }
}
