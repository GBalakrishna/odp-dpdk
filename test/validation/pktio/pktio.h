/* Copyright (c) 2015, Linaro Limited
 * All rights reserved.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 */

#ifndef _ODP_TEST_PKTIO_H_
#define _ODP_TEST_PKTIO_H_

#include <CUnit/Basic.h>

/* test functions: */
void pktio_test_poll_queue(void);
void pktio_test_poll_multi(void);
void pktio_test_sched_queue(void);
void pktio_test_sched_multi(void);
void pktio_test_jumbo(void);
void pktio_test_mtu(void);
void pktio_test_promisc(void);
void pktio_test_mac(void);
void pktio_test_inq_remdef(void);
void pktio_test_open(void);
void pktio_test_lookup(void);
void pktio_test_inq(void);

/* test arrays: */
extern CU_TestInfo pktio_suite[];

/* test array init/term functions: */
int pktio_suite_term(void);
int pktio_suite_init(void);

/* test registry: */
extern CU_SuiteInfo pktio_suites[];

/* main test program: */
int pktio_main(void);

#endif