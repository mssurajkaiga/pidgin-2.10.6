/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.2210 from the
 * contents of Privacy.xs. Do not edit this file, edit Privacy.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "Privacy.xs"
#include "module.h"

#line 13 "Privacy.c"
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

#line 65 "Privacy.c"

XS(XS_Purple__Privacy_permit_add); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Privacy_permit_add)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "account, name, local_only");
    {
	Purple__Account	account = purple_perl_ref_object(ST(0));
	const char *	name = (const char *)SvPV_nolen(ST(1));
	gboolean	local_only = (bool)SvTRUE(ST(2));
	gboolean	RETVAL;

	RETVAL = purple_privacy_permit_add(account, name, local_only);
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Privacy_permit_remove); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Privacy_permit_remove)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "account, name, local_only");
    {
	Purple__Account	account = purple_perl_ref_object(ST(0));
	const char *	name = (const char *)SvPV_nolen(ST(1));
	gboolean	local_only = (bool)SvTRUE(ST(2));
	gboolean	RETVAL;

	RETVAL = purple_privacy_permit_remove(account, name, local_only);
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Privacy_deny_add); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Privacy_deny_add)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "account, name, local_only");
    {
	Purple__Account	account = purple_perl_ref_object(ST(0));
	const char *	name = (const char *)SvPV_nolen(ST(1));
	gboolean	local_only = (bool)SvTRUE(ST(2));
	gboolean	RETVAL;

	RETVAL = purple_privacy_deny_add(account, name, local_only);
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Privacy_deny_remove); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Privacy_deny_remove)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "account, name, local_only");
    {
	Purple__Account	account = purple_perl_ref_object(ST(0));
	const char *	name = (const char *)SvPV_nolen(ST(1));
	gboolean	local_only = (bool)SvTRUE(ST(2));
	gboolean	RETVAL;

	RETVAL = purple_privacy_deny_remove(account, name, local_only);
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Privacy_check); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Privacy_check)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "account, who");
    {
	Purple__Account	account = purple_perl_ref_object(ST(0));
	const char *	who = (const char *)SvPV_nolen(ST(1));
	gboolean	RETVAL;

	RETVAL = purple_privacy_check(account, who);
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Purple__Privacy); /* prototype to pass -Wmissing-prototypes */
XS(boot_Purple__Privacy)
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

        (void)newXSproto_portable("Purple::Privacy::permit_add", XS_Purple__Privacy_permit_add, file, "$$$");
        (void)newXSproto_portable("Purple::Privacy::permit_remove", XS_Purple__Privacy_permit_remove, file, "$$$");
        (void)newXSproto_portable("Purple::Privacy::deny_add", XS_Purple__Privacy_deny_add, file, "$$$");
        (void)newXSproto_portable("Purple::Privacy::deny_remove", XS_Purple__Privacy_deny_remove, file, "$$$");
        (void)newXSproto_portable("Purple::Privacy::check", XS_Purple__Privacy_check, file, "$$");
#if (PERL_REVISION == 5 && PERL_VERSION >= 9)
  if (PL_unitcheckav)
       call_list(PL_scopestack_ix, PL_unitcheckav);
#endif
    XSRETURN_YES;
}
