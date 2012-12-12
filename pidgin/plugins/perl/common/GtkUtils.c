/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.2210 from the
 * contents of GtkUtils.xs. Do not edit this file, edit GtkUtils.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "GtkUtils.xs"
#include "gtkmodule.h"

#line 13 "GtkUtils.c"
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

#line 65 "GtkUtils.c"

XS(XS_Pidgin__Utils_save_accels); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Utils_save_accels)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "data");
    {
	gpointer	data = purple_perl_ref_object(ST(0));
	gboolean	RETVAL;

	RETVAL = pidgin_save_accels(data);
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Pidgin__Utils_load_accels); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Utils_load_accels)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       croak_xs_usage(cv,  "");
    {

	pidgin_load_accels();
    }
    XSRETURN_EMPTY;
}


XS(XS_Pidgin__Utils_convert_buddy_icon); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Utils_convert_buddy_icon)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "plugin, path, size");
    {
	Purple__Plugin	plugin = purple_perl_ref_object(ST(0));
	const char *	path = (const char *)SvPV_nolen(ST(1));
	size_t *	size = INT2PTR(size_t *,SvIV(ST(2)));
	gchar_own *	RETVAL;

	RETVAL = pidgin_convert_buddy_icon(plugin, path, size);
	ST(0) = sv_newmortal();
	/* used when we can directly own the returned string. */
	/* we have to copy in the case when perl's malloc != gtk's malloc,
	 * so best copy all the time. */
	sv_setpv ((SV*)ST(0), RETVAL);
	SvUTF8_on (ST(0));
	g_free (RETVAL);

    }
    XSRETURN(1);
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Pidgin__Utils); /* prototype to pass -Wmissing-prototypes */
XS(boot_Pidgin__Utils)
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

        (void)newXSproto_portable("Pidgin::Utils::save_accels", XS_Pidgin__Utils_save_accels, file, "$");
        (void)newXSproto_portable("Pidgin::Utils::load_accels", XS_Pidgin__Utils_load_accels, file, "");
        (void)newXSproto_portable("Pidgin::Utils::convert_buddy_icon", XS_Pidgin__Utils_convert_buddy_icon, file, "$$$");
#if (PERL_REVISION == 5 && PERL_VERSION >= 9)
  if (PL_unitcheckav)
       call_list(PL_scopestack_ix, PL_unitcheckav);
#endif
    XSRETURN_YES;
}
