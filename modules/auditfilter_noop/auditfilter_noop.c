/*-
 * Copyright (c) 2006 Robert N. M. Watson
 * All rights reserved.
 *
 * This software was developed by Robert Watson for the TrustedBSD Project.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $P4: //depot/projects/trustedbsd/openbsm/modules/auditfilter_noop/auditfilter_noop.c#3 $
 */

/*
 * Sample audit filter: no-op which sinks audit records in both BSM and
 * parsed formats, but does nothing with them.
 */

#include <bsm/libbsm.h>

#include <bsm/libbsm.h>
#include <bsm/audit_filter.h>

int
AUDIT_FILTER_ATTACH(void **instance, int argc, char *argv[])
{

	return (0);
}

int
AUDIT_FILTER_REINIT(void *instance, int argc, char *argv[])
{

	return (0);
}

void
AUDIT_FILTER_RECORD(void *instance, struct timespec *ts, int token_count,
    const tokenstr_t *tok[])
{

}

void
AUDIT_FILTER_AUDITRECORD(void *instance, struct timespec *ts, u_char *data,
    u_int len)
{

}

void
AUDIT_FILTER_DETACH(void *instance)
{

}
