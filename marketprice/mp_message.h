/*
 * Description: 
 *     History: yang@haipo.me, 2017/04/16, create
 */

# ifndef _MP_MESSAGE_H_
# define _MP_MESSAGE_H_

# define MARKET_SIDE_SELL   1
# define MARKET_SIDE_BUY    2
# define MARKET_DEALS_MAX   10000

# include "mp_config.h"

int init_message(void);

json_t *get_market_status(const char *market, int period);
json_t *get_market_deals(const char *market, int limit);

# endif

