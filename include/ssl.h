/*
 * ssl.h -- header file for ssl.c
 *
 * Original framework written by Juraj Bednar
 * Modified by B. Thomas Frazier
 *
 * Copyright 2000, 2002 EPIC Software Labs
 *
 */

#ifndef __ssl_h__
#define __ssl_h__

#if 0
typedef struct ssl_info {
	int	vfd;
	int	verify_result;
	char *	pem;
	char *	digest;
	char *	subject;
	char *	u_cert_subject;
	char *	issuer;
	char *	u_cert_issuer;
	void *	pubkey;
	char *	ssl_version;
} ssl_info;
#endif

	int	startup_ssl (int nfd, int channel);
	int	shutdown_ssl (int nfd);
	int	ssl_connect (int nfd, int quiet);
	int	write_ssl (int nfd, const void *, size_t);
	int	ssl_read (int nfd, int quiet);
	const char *get_ssl_cipher (int nfd);
	int	is_ssl_enabled (int nfd);
	int	client_ssl_enabled (void);
	int	ssl_connected (int nfd);

#endif
