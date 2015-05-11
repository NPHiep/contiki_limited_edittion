#ifndef __PROJECT_CONF_H__
#define __PROJECT_CONF_H__

// single-instance 0, multi-instance 1
#define PROJ_CONF_SMLT_TYPE 0

/* Config for single-instance simulation */
#if !PROJ_CONF_SMLT_TYPE
#undef RPL_CONF_MAX_INSTANCES
#define RPL_CONF_MAX_INSTANCES 1

#undef RPL_CONF_MAX_DAG_PER_INSTANCE
#define RPL_CONF_MAX_DAG_PER_INSTANCE 2 
#endif

/* Evaluation */
#undef RPL_CONF_OF1
#define RPL_CONF_OF1 rpl_mrhof

#undef RPL_CONF_OF2
#define RPL_CONF_OF2 rpl_mrhof

/* Config for setup network */
 
// default 12, ietf 3
#undef RPL_CONF_DIO_INTERVAL_MIN
#define RPL_CONF_DIO_INTERVAL_MIN 14

// default 8, ietf 20=2.3 hr
#undef RPL_CONF_DIO_INTERVAL_DOUBLINGS
#define RPL_CONF_DIO_INTERVAL_DOUBLINGS 12

// default 8
#undef NETSTACK_CONF_RDC_CHANNEL_CHECK_RATE
#define NETSTACK_CONF_RDC_CHANNEL_CHECK_RATE 8

// default 1
#define CONTROL_TRAFFIC 2

/* Config for routes */

/* Config routing table */
#undef UIP_CONF_MAX_ROUTES
#define UIP_CONF_MAX_ROUTES 12

/* Config default routes list */
#undef UIP_CONF_DS6_DEFRT_NBU
#define UIP_CONF_DS6_DEFRT_NBU 6

#endif /* __PROJECT_CONF_H__ */
