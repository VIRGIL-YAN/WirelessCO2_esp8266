#include "lwip/ip_addr.h"
#include "time.h"

bool sntp_inits(int8_t UTC_offset) ICACHE_FLASH_ATTR;
void sntp_close(void) ICACHE_FLASH_ATTR;
time_t get_sntp_time(void) ICACHE_FLASH_ATTR;
time_t get_sntp_localtime(void) ICACHE_FLASH_ATTR;
time_t sntp_local_to_UTC_time(time_t local) ICACHE_FLASH_ATTR;

extern ip_addr_t dhcp_sntp_server_address;
extern uint8 sntp_status; // 1 - ok

void sntp_send_request(ip_addr_t *server_addr) ICACHE_FLASH_ATTR;
