/* Copyright 1998 by the Massachusetts Institute of Technology.
 *
 * Permission to use, copy, modify, and distribute this
 * software and its documentation for any purpose and without
 * fee is hereby granted, provided that the above copyright
 * notice appear in all copies and that both that copyright
 * notice and this permission notice appear in supporting
 * documentation, and that the name of M.I.T. not be used in
 * advertising or publicity pertaining to distribution of the
 * software without specific, written prior permission.
 * M.I.T. makes no representations about the suitability of
 * this software for any purpose.  It is provided "as is"
 * without express or implied warranty.
 */

#ifndef LARVNET__H
#define LARVNET__H

/* Paths used on the larvnet server */
#define LARVNET_PATH_CONFIG	"/usr/local/etc/larvnet.conf"
#define LARVNET_PATH_PIDFILE	"/var/lib/larvnet/larvnetd.pid"
#define LARVNET_PATH_CGROUPS	"/var/lib/larvnet/larvnet.cgroups"
#define LARVNET_PATH_CLUSTERS	"/var/lib/larvnet/larvnet.clusters"
#define LARVNET_PATH_PRINTERS	"/var/lib/larvnet/larvnet.printers"

/* Path used on larvnet clients */
#define LARVNET_PATH_BUSY	"/var/lib/larvnet/busy"

/* Ports used by the larvnet system */
#define LARVNET_FALLBACK_PORT	49153
#define BUSYPOLL_FALLBACK_PORT	49154
#define LARVNET_MAX_PACKET	4096

#endif /* LARVNET__H */
