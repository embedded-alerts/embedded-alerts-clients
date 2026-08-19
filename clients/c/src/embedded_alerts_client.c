#include "embedded_alerts_client.h"
embedded_alerts_client embedded_alerts_client_new(const char *base_url, const char *bearer_token) {
  embedded_alerts_client value = {base_url, bearer_token}; return value;
}
bool embedded_alerts_client_health(const embedded_alerts_client *client) { return client != 0 && client->base_url != 0; }
