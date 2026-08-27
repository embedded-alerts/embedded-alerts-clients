package io.zedpkg.embedded_alerts
import java.net.URI
data class EmbeddedAlertsClient(val baseUrl: URI, val bearerToken: String? = null) {
  suspend fun health(): Boolean = baseUrl.toString().isNotEmpty()
}
