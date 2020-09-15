/*
 * Copyright (c) 2006-2020, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-08-12     RT-Thread    first version
 */

#include <rtthread.h>
//#include "canfestival.h"
//#include "heartbeat.h"

#define DBG_TAG "main"
#define DBG_LVL DBG_LOG
#include <rtdbg.h>

int main(void)
{
    int count = 1;
//    setNodeId(&heartbeat_Data, 0x01);
//    setState(&heartbeat_Data, Initialisation);
//    setState(&heartbeat_Data, Operational);

    while (count++)
    {
        LOG_D("Hello RT-Thread!");
        rt_thread_mdelay(30000);
    }

    return RT_EOK;
}
