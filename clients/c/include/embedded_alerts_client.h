#ifndef EMBEDDED_ALERTS_CLIENT_H
#define EMBEDDED_ALERTS_CLIENT_H
#include <stdbool.h>
typedef struct { const char *base_url; const char *bearer_token; } embedded_alerts_client;
embedded_alerts_client embedded_alerts_client_new(const char *base_url, const char *bearer_token);
bool embedded_alerts_client_health(const embedded_alerts_client *client);
#endif
