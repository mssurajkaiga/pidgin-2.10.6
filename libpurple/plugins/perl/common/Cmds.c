/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.2210 from the
 * contents of Cmds.xs. Do not edit this file, edit Cmds.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "Cmds.xs"
#include "module.h"
#include "../perl-handlers.h"

#line 14 "Cmds.c"
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

#line 66 "Cmds.c"

XS(XS_Purple__Cmd_help); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Cmd_help)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "conv, command");
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
	Purple__Conversation	conv = purple_perl_ref_object(ST(0));
	const gchar *	command = (const gchar *)SvPV_nolen(ST(1));
#line 69 "Cmds.xs"
	GList *l, *ll;
#line 85 "Cmds.c"
#line 71 "Cmds.xs"
	for (l = ll = purple_cmd_help(conv, command); l != NULL; l = l->next) {
		XPUSHs(sv_2mortal(newSVpv(l->data, 0)));
	}
	g_list_free(ll);
#line 91 "Cmds.c"
	PUTBACK;
	return;
    }
}


XS(XS_Purple__Cmd_list); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Cmd_list)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "conv");
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
	Purple__Conversation	conv = purple_perl_ref_object(ST(0));
#line 80 "Cmds.xs"
	GList *l, *ll;
#line 114 "Cmds.c"
#line 82 "Cmds.xs"
	for (l = ll = purple_cmd_list(conv); l != NULL; l = l->next) {
		XPUSHs(sv_2mortal(newSVpv(l->data, 0)));
	}
	g_list_free(ll);
#line 120 "Cmds.c"
	PUTBACK;
	return;
    }
}


XS(XS_Purple__Cmd_register); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Cmd_register)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items < 8 || items > 9)
       croak_xs_usage(cv,  "plugin, command, args, priority, flag, prpl_id, func, helpstr, data = 0");
    {
	Purple__Plugin	plugin = purple_perl_ref_object(ST(0));
	const gchar *	command = (const gchar *)SvPV_nolen(ST(1));
	const gchar *	args = (const gchar *)SvPV_nolen(ST(2));
	Purple__Cmd__Priority	priority = (Purple__Cmd__Priority)SvIV(ST(3));
	Purple__Cmd__Flag	flag = (Purple__Cmd__Flag)SvIV(ST(4));
	const gchar *	prpl_id = (const gchar *)SvPV_nolen(ST(5));
	SV *	func = ST(6);
	const gchar *	helpstr = (const gchar *)SvPV_nolen(ST(7));
	SV *	data;
	Purple__Cmd__Id	RETVAL;
	dXSTARG;

	if (items < 9)
	    data = 0;
	else {
	    data = ST(8);
	}
#line 99 "Cmds.xs"
	RETVAL = purple_perl_cmd_register(plugin, command, args, priority, flag,
	                                prpl_id, func, helpstr, data);
#line 158 "Cmds.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Purple__Cmd_unregister); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Cmd_unregister)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "id");
    {
	Purple__Cmd__Id	id = (Purple__Cmd__Id)SvIV(ST(0));
#line 108 "Cmds.xs"
	purple_perl_cmd_unregister(id);
#line 179 "Cmds.c"
    }
    XSRETURN_EMPTY;
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Purple__Cmd); /* prototype to pass -Wmissing-prototypes */
XS(boot_Purple__Cmd)
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

        (void)newXSproto_portable("Purple::Cmd::help", XS_Purple__Cmd_help, file, "$$");
        (void)newXSproto_portable("Purple::Cmd::list", XS_Purple__Cmd_list, file, "$");
        (void)newXSproto_portable("Purple::Cmd::register", XS_Purple__Cmd_register, file, "$$$$$$$$;$");
        (void)newXSproto_portable("Purple::Cmd::unregister", XS_Purple__Cmd_unregister, file, "$");

    /* Initialisation Section */

#line 8 "Cmds.xs"
{
	HV *status_stash = gv_stashpv("Purple::Cmd::Status", 1);
	HV *ret_stash = gv_stashpv("Purple::Cmd::Return", 1);
	HV *p_stash = gv_stashpv("Purple::Cmd::Priority", 1);
	HV *flag_stash = gv_stashpv("Purple::Cmd::Flag", 1);

	static const constiv *civ, status_const_iv[] = {
#define const_iv(name) {#name, (IV)PURPLE_CMD_STATUS_##name}
		const_iv(OK),
		const_iv(FAILED),
		const_iv(NOT_FOUND),
		const_iv(WRONG_ARGS),
		const_iv(WRONG_PRPL),
		const_iv(WRONG_TYPE),
	};
	static const constiv ret_const_iv[] = {
#undef const_iv
#define const_iv(name) {#name, (IV)PURPLE_CMD_RET_##name}
		const_iv(OK),
		const_iv(FAILED),
		const_iv(CONTINUE),
	};
	static const constiv p_const_iv[] = {
#undef const_iv
#define const_iv(name) {#name, (IV)PURPLE_CMD_P_##name}
		const_iv(VERY_LOW),
		const_iv(LOW),
		const_iv(DEFAULT),
		const_iv(PRPL),
		const_iv(PLUGIN),
		const_iv(ALIAS),
		const_iv(HIGH),
		const_iv(VERY_HIGH),
	};
	static const constiv flag_const_iv[] = {
#undef const_iv
#define const_iv(name) {#name, (IV)PURPLE_CMD_FLAG_##name}
		const_iv(IM),
		const_iv(CHAT),
		const_iv(PRPL_ONLY),
		const_iv(ALLOW_WRONG_ARGS),
	};

	for (civ = status_const_iv + sizeof(status_const_iv) / sizeof(status_const_iv[0]); civ-- > status_const_iv;)
		newCONSTSUB(status_stash, (char *)civ->name, newSViv(civ->iv));

	for (civ = ret_const_iv + sizeof(ret_const_iv) / sizeof(ret_const_iv[0]); civ-- > ret_const_iv;)
		newCONSTSUB(ret_stash, (char *)civ->name, newSViv(civ->iv));

	for (civ = p_const_iv + sizeof(p_const_iv) / sizeof(p_const_iv[0]); civ-- > p_const_iv;)
		newCONSTSUB(p_stash, (char *)civ->name, newSViv(civ->iv));

	for (civ = flag_const_iv + sizeof(flag_const_iv) / sizeof(flag_const_iv[0]); civ-- > flag_const_iv;)
		newCONSTSUB(flag_stash, (char *)civ->name, newSViv(civ->iv));
}

#line 272 "Cmds.c"

    /* End of Initialisation Section */

#if (PERL_REVISION == 5 && PERL_VERSION >= 9)
  if (PL_unitcheckav)
       call_list(PL_scopestack_ix, PL_unitcheckav);
#endif
    XSRETURN_YES;
}

