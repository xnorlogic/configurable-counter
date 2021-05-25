# configurable-counter
configurable counter in C

Configurable parameters:

--Counter configuration UP or DOWN--
CONFIG_CNT_UP

--Configuration to make the counter value as global access--
COUNT_GLOBAL_VALUE

--Standard counter reset value--
CNT_RESET_VALUE          0

--Counter UP configuration parameters--
COUNT_UP_RESET_VALUE     CNT_RESET_VALUE
COUNT_UP_THRESHOLD       10
COUNT_UP_STEP            1

--Counter DOWN configuration parameters--
COUNT_DOWN_RESET_VALUE   10
COUNT_DOWN_THRESHOLD     CNT_RESET_VALUE 
COUNT_DOWN_STEP          1
