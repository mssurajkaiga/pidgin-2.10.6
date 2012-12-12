/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.2210 from the
 * contents of Server.xs. Do not edit this file, edit Server.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "Server.xs"
#include "module.h"

#line 13 "Server.c"
#ifndef PERL_UNUSED_VAR
#  define PERL_UNUSED_VAR(var) if (0) var = var
#endif

#ifndef PERL_ARGS_ASSERT_CROAK_XS_USAGE
#define PERL_ARGS_ASSERT_CROAK_XS_USAGE assert(cv); assert(params)

/* prototype to pass -Wmissing-prototypes */
STATIC void
S_croak_xs_usage(pTHX_ const CV *const cv, const char *const params);

STATIC void
S_croak_xs_usage(pTHX_ const CV *const cv, const char *const params)
{
    const GV *const gv = CvGV(cv);

    PERL_ARGS_ASSERT_CROAK_XS_USAGE;

    if (gv) {
        const char *const gvname = GvNAME(gv);
        const HV *const stash = GvSTASH(gv);
        const char *const hvname = stash ? HvNAME(stash) : NULL;

        if (hvname)
            Perl_croak(aTHX_ "Usage: %s::%s(%s)", hvname, gvname, params);
        else
            Perl_croak(aTHX_ "Usage: %s(%s)", gvname, params);
    } else {
        /* Pants. I don't think that it should be possible to get here. */
        Perl_croak(aTHX_ "Usage: CODE(0x%"UVxf")(%s)", PTR2UV(cv), params);
    }
}
#undef  PERL_ARGS_ASSERT_CROAK_XS_USAGE

#ifdef PERL_IMPLICIT_CONTEXT
#define croak_xs_usage(a,b)	S_croak_xs_usage(aTHX_ a,b)
#else
#define croak_xs_usage		S_croak_xs_usage
#endif

#endif

/* NOTE: the prototype of newXSproto() is different in versions of perls,
 * so we define a portable version of newXSproto()
 */
#ifdef newXS_flags
#define newXSproto_portable(name, c_impl, file, proto) newXS_flags(name, c_impl, file, proto, 0)
#else
#define newXSproto_portable(name, c_impl, file, proto) (PL_Sv=(SV*)newXS(name, c_impl, file), sv_setpv(PL_Sv, proto), (CV*)PL_Sv)
#endif /* !defined(newXS_flags) */

#line 65 "Server.c"

XS(XS_Purple__Serv_add_deny); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_add_deny)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "con, a");
    {
	Purple__Connection	con = purple_perl_ref_object(ST(0));
	const char *	a = (const char *)SvPV_nolen(ST(1));

	serv_add_deny(con, a);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Serv_add_permit); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_add_permit)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "a, b");
    {
	Purple__Connection	a = purple_perl_ref_object(ST(0));
	const char *	b = (const char *)SvPV_nolen(ST(1));

	serv_add_permit(a, b);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Serv_alias_buddy); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_alias_buddy)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "buddy");
    {
	Purple__BuddyList__Buddy	buddy = purple_perl_ref_object(ST(0));

	serv_alias_buddy(buddy);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Serv_chat_invite); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_chat_invite)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 4)
       croak_xs_usage(cv,  "con, a, b, c");
    {
	Purple__Connection	con = purple_perl_ref_object(ST(0));
	int	a = (int)SvIV(ST(1));
	const char *	b = (const char *)SvPV_nolen(ST(2));
	const char *	c = (const char *)SvPV_nolen(ST(3));

	serv_chat_invite(con, a, b, c);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Serv_chat_leave); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_chat_leave)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "a, b");
    {
	Purple__Connection	a = purple_perl_ref_object(ST(0));
	int	b = (int)SvIV(ST(1));

	serv_chat_leave(a, b);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Serv_chat_send); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_chat_send)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 4)
       croak_xs_usage(cv,  "con, a, b, flags");
    {
	Purple__Connection	con = purple_perl_ref_object(ST(0));
	int	a = (int)SvIV(ST(1));
	const char *	b = (const char *)SvPV_nolen(ST(2));
	Purple__MessageFlags	flags = (Purple__MessageFlags)SvIV(ST(3));
	int	RETVAL;
	dXSTARG;

	RETVAL = serv_chat_send(con, a, b, flags);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Purple__Serv_chat_whisper); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_chat_whisper)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 4)
       croak_xs_usage(cv,  "con, a, b, c");
    {
	Purple__Connection	con = purple_perl_ref_object(ST(0));
	int	a = (int)SvIV(ST(1));
	const char *	b = (const char *)SvPV_nolen(ST(2));
	const char *	c = (const char *)SvPV_nolen(ST(3));

	serv_chat_whisper(con, a, b, c);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Serv_get_info); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_get_info)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "con, a");
    {
	Purple__Connection	con = purple_perl_ref_object(ST(0));
	const char *	a = (const char *)SvPV_nolen(ST(1));

	serv_get_info(con, a);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Serv_got_alias); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_got_alias)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "gc, who, alias");
    {
	Purple__Connection	gc = purple_perl_ref_object(ST(0));
	const char *	who = (const char *)SvPV_nolen(ST(1));
	const char *	alias = (const char *)SvPV_nolen(ST(2));

	serv_got_alias(gc, who, alias);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Serv_got_chat_in); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_got_chat_in)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 6)
       croak_xs_usage(cv,  "g, id, who, chatflags, message, mtime");
    {
	Purple__Connection	g = purple_perl_ref_object(ST(0));
	int	id = (int)SvIV(ST(1));
	const char *	who = (const char *)SvPV_nolen(ST(2));
	Purple__MessageFlags	chatflags = (Purple__MessageFlags)SvIV(ST(3));
	const char *	message = (const char *)SvPV_nolen(ST(4));
	time_t	mtime = (time_t)SvIV(ST(5));

	serv_got_chat_in(g, id, who, chatflags, message, mtime);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Serv_got_chat_invite); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_got_chat_invite)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 5)
       croak_xs_usage(cv,  "gc, name, who, message, components");
    {
	Purple__Connection	gc = purple_perl_ref_object(ST(0));
	const char *	name = (const char *)SvPV_nolen(ST(1));
	const char *	who = (const char *)SvPV_nolen(ST(2));
	const char *	message = (const char *)SvPV_nolen(ST(3));
	SV *	components = ST(4);
#line 75 "Server.xs"
	HV * t_HV;
	HE * t_HE;
	SV * t_SV;
	GHashTable * t_GHash;
	I32 len;
	char *t_key, *t_value;
#line 303 "Server.c"
#line 82 "Server.xs"
	t_HV =  (HV *)SvRV(components);
	t_GHash = g_hash_table_new(g_str_hash, g_str_equal);

	for (t_HE = hv_iternext(t_HV); t_HE != NULL; t_HE = hv_iternext(t_HV) ) {
		t_key = hv_iterkey(t_HE, &len);
		t_SV = *hv_fetch(t_HV, t_key, len, 0);
 		t_value = SvPVutf8_nolen(t_SV);

		g_hash_table_insert(t_GHash, t_key, t_value);
	}
	serv_got_chat_invite(gc, name, who, message, t_GHash);
#line 316 "Server.c"
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Serv_got_chat_left); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_got_chat_left)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "g, id");
    {
	Purple__Connection	g = purple_perl_ref_object(ST(0));
	int	id = (int)SvIV(ST(1));

	serv_got_chat_left(g, id);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Serv_got_im); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_got_im)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 5)
       croak_xs_usage(cv,  "gc, who, msg, imflags, mtime");
    {
	Purple__Connection	gc = purple_perl_ref_object(ST(0));
	const char *	who = (const char *)SvPV_nolen(ST(1));
	const char *	msg = (const char *)SvPV_nolen(ST(2));
	Purple__MessageFlags	imflags = (Purple__MessageFlags)SvIV(ST(3));
	time_t	mtime = (time_t)SvIV(ST(4));

	serv_got_im(gc, who, msg, imflags, mtime);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Serv_got_joined_chat); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_got_joined_chat)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "gc, id, name");
    {
	Purple__Connection	gc = purple_perl_ref_object(ST(0));
	int	id = (int)SvIV(ST(1));
	const char *	name = (const char *)SvPV_nolen(ST(2));
	Purple__Conversation	RETVAL;

	RETVAL = serv_got_joined_chat(gc, id, name);
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Conversation");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Serv_got_typing); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_got_typing)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 4)
       croak_xs_usage(cv,  "gc, name, timeout, state");
    {
	Purple__Connection	gc = purple_perl_ref_object(ST(0));
	const char *	name = (const char *)SvPV_nolen(ST(1));
	int	timeout = (int)SvIV(ST(2));
	Purple__TypingState	state = (Purple__TypingState)SvIV(ST(3));

	serv_got_typing(gc, name, timeout, state);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Serv_got_typing_stopped); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_got_typing_stopped)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "gc, name");
    {
	Purple__Connection	gc = purple_perl_ref_object(ST(0));
	const char *	name = (const char *)SvPV_nolen(ST(1));

	serv_got_typing_stopped(gc, name);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Serv_join_chat); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_join_chat)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "conn, components");
    {
	Purple__Connection	conn = purple_perl_ref_object(ST(0));
	HV *	components;
#line 130 "Server.xs"
	HE *t_HE;
	SV *t_SV;
	I32 len;
	GHashTable *t_GHash;
	char *t_key, *t_value;
#line 451 "Server.c"

	STMT_START {
		SV* const xsub_tmp_sv = ST(1);
		SvGETMAGIC(xsub_tmp_sv);
		if (SvROK(xsub_tmp_sv) && SvTYPE(SvRV(xsub_tmp_sv)) == SVt_PVHV){
		    components = (HV*)SvRV(xsub_tmp_sv);
		}
		else{
		    Perl_croak(aTHX_ "%s: %s is not a HASH reference",
				"Purple::Serv::join_chat",
				"components");
		}
	} STMT_END;
#line 136 "Server.xs"
	t_GHash = g_hash_table_new(g_str_hash, g_str_equal);

	for (t_HE = hv_iternext(components); t_HE != NULL;
	     t_HE = hv_iternext(components)) {
		t_key = hv_iterkey(t_HE, &len);
		t_SV = *hv_fetch(components, t_key, len, 0);
		t_value = SvPVutf8_nolen(t_SV);

		g_hash_table_insert(t_GHash, t_key, t_value);
	}
	serv_join_chat(conn, t_GHash);
	g_hash_table_destroy(t_GHash);
#line 478 "Server.c"
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Serv_move_buddy); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_move_buddy)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "buddy, group1, group2");
    {
	Purple__BuddyList__Buddy	buddy = purple_perl_ref_object(ST(0));
	Purple__BuddyList__Group	group1 = purple_perl_ref_object(ST(1));
	Purple__BuddyList__Group	group2 = purple_perl_ref_object(ST(2));

	serv_move_buddy(buddy, group1, group2);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Serv_reject_chat); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_reject_chat)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "con, components");
    {
	Purple__Connection	con = purple_perl_ref_object(ST(0));
	SV *	components = ST(1);
#line 160 "Server.xs"
	HV * t_HV;
	HE * t_HE;
	SV * t_SV;
	GHashTable * t_GHash;
	I32 len;
	char *t_key, *t_value;
#line 525 "Server.c"
#line 167 "Server.xs"
	t_HV =  (HV *)SvRV(components);
	t_GHash = g_hash_table_new(g_str_hash, g_str_equal);

	for (t_HE = hv_iternext(t_HV); t_HE != NULL; t_HE = hv_iternext(t_HV) ) {
		t_key = hv_iterkey(t_HE, &len);
		t_SV = *hv_fetch(t_HV, t_key, len, 0);
 		t_value = SvPVutf8_nolen(t_SV);

		g_hash_table_insert(t_GHash, t_key, t_value);
	}
	serv_reject_chat(con, t_GHash);
#line 538 "Server.c"
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Serv_rem_deny); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_rem_deny)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "con, a");
    {
	Purple__Connection	con = purple_perl_ref_object(ST(0));
	const char *	a = (const char *)SvPV_nolen(ST(1));

	serv_rem_deny(con, a);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Serv_rem_permit); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_rem_permit)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "con, a");
    {
	Purple__Connection	con = purple_perl_ref_object(ST(0));
	const char *	a = (const char *)SvPV_nolen(ST(1));

	serv_rem_permit(con, a);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Serv_send_file); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_send_file)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "gc, who, file");
    {
	Purple__Connection	gc = purple_perl_ref_object(ST(0));
	const char *	who = (const char *)SvPV_nolen(ST(1));
	const char *	file = (const char *)SvPV_nolen(ST(2));

	serv_send_file(gc, who, file);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Serv_send_im); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_send_im)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 4)
       croak_xs_usage(cv,  "con, a, b, flags");
    {
	Purple__Connection	con = purple_perl_ref_object(ST(0));
	const char *	a = (const char *)SvPV_nolen(ST(1));
	const char *	b = (const char *)SvPV_nolen(ST(2));
	Purple__MessageFlags	flags = (Purple__MessageFlags)SvIV(ST(3));
	int	RETVAL;
	dXSTARG;

	RETVAL = serv_send_im(con, a, b, flags);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Purple__Serv_send_typing); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_send_typing)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "con, a, state");
    {
	Purple__Connection	con = purple_perl_ref_object(ST(0));
	const char *	a = (const char *)SvPV_nolen(ST(1));
	Purple__TypingState	state = (Purple__TypingState)SvIV(ST(2));
	int	RETVAL;
	dXSTARG;

	RETVAL = serv_send_typing(con, a, state);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Purple__Serv_set_info); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_set_info)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "con, a");
    {
	Purple__Connection	con = purple_perl_ref_object(ST(0));
	const char *	a = (const char *)SvPV_nolen(ST(1));

	serv_set_info(con, a);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Serv_set_permit_deny); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Serv_set_permit_deny)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "con");
    {
	Purple__Connection	con = purple_perl_ref_object(ST(0));

	serv_set_permit_deny(con);
    }
    XSRETURN_EMPTY;
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Purple__Serv); /* prototype to pass -Wmissing-prototypes */
XS(boot_Purple__Serv)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
#if (PERL_REVISION == 5 && PERL_VERSION < 9)
    char* file = __FILE__;
#else
    const char* file = __FILE__;
#endif

    PERL_UNUSED_VAR(cv); /* -W */
    PERL_UNUSED_VAR(items); /* -W */
#ifdef XS_APIVERSION_BOOTCHECK
    XS_APIVERSION_BOOTCHECK;
#endif
    XS_VERSION_BOOTCHECK ;

        (void)newXSproto_portable("Purple::Serv::add_deny", XS_Purple__Serv_add_deny, file, "$$");
        (void)newXSproto_portable("Purple::Serv::add_permit", XS_Purple__Serv_add_permit, file, "$$");
        (void)newXSproto_portable("Purple::Serv::alias_buddy", XS_Purple__Serv_alias_buddy, file, "$");
        (void)newXSproto_portable("Purple::Serv::chat_invite", XS_Purple__Serv_chat_invite, file, "$$$$");
        (void)newXSproto_portable("Purple::Serv::chat_leave", XS_Purple__Serv_chat_leave, file, "$$");
        (void)newXSproto_portable("Purple::Serv::chat_send", XS_Purple__Serv_chat_send, file, "$$$$");
        (void)newXSproto_portable("Purple::Serv::chat_whisper", XS_Purple__Serv_chat_whisper, file, "$$$$");
        (void)newXSproto_portable("Purple::Serv::get_info", XS_Purple__Serv_get_info, file, "$$");
        (void)newXSproto_portable("Purple::Serv::got_alias", XS_Purple__Serv_got_alias, file, "$$$");
        (void)newXSproto_portable("Purple::Serv::got_chat_in", XS_Purple__Serv_got_chat_in, file, "$$$$$$");
        (void)newXSproto_portable("Purple::Serv::got_chat_invite", XS_Purple__Serv_got_chat_invite, file, "$$$$$");
        (void)newXSproto_portable("Purple::Serv::got_chat_left", XS_Purple__Serv_got_chat_left, file, "$$");
        (void)newXSproto_portable("Purple::Serv::got_im", XS_Purple__Serv_got_im, file, "$$$$$");
        (void)newXSproto_portable("Purple::Serv::got_joined_chat", XS_Purple__Serv_got_joined_chat, file, "$$$");
        (void)newXSproto_portable("Purple::Serv::got_typing", XS_Purple__Serv_got_typing, file, "$$$$");
        (void)newXSproto_portable("Purple::Serv::got_typing_stopped", XS_Purple__Serv_got_typing_stopped, file, "$$");
        (void)newXSproto_portable("Purple::Serv::join_chat", XS_Purple__Serv_join_chat, file, "$$");
        (void)newXSproto_portable("Purple::Serv::move_buddy", XS_Purple__Serv_move_buddy, file, "$$$");
        (void)newXSproto_portable("Purple::Serv::reject_chat", XS_Purple__Serv_reject_chat, file, "$$");
        (void)newXSproto_portable("Purple::Serv::rem_deny", XS_Purple__Serv_rem_deny, file, "$$");
        (void)newXSproto_portable("Purple::Serv::rem_permit", XS_Purple__Serv_rem_permit, file, "$$");
        (void)newXSproto_portable("Purple::Serv::send_file", XS_Purple__Serv_send_file, file, "$$$");
        (void)newXSproto_portable("Purple::Serv::send_im", XS_Purple__Serv_send_im, file, "$$$$");
        (void)newXSproto_portable("Purple::Serv::send_typing", XS_Purple__Serv_send_typing, file, "$$$");
        (void)newXSproto_portable("Purple::Serv::set_info", XS_Purple__Serv_set_info, file, "$$");
        (void)newXSproto_portable("Purple::Serv::set_permit_deny", XS_Purple__Serv_set_permit_deny, file, "$");
#if (PERL_REVISION == 5 && PERL_VERSION >= 9)
  if (PL_unitcheckav)
       call_list(PL_scopestack_ix, PL_unitcheckav);
#endif
    XSRETURN_YES;
}
