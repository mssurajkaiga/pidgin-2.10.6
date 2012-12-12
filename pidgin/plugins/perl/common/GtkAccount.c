/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.2210 from the
 * contents of GtkAccount.xs. Do not edit this file, edit GtkAccount.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "GtkAccount.xs"
#include "gtkmodule.h"

#line 13 "GtkAccount.c"
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

#line 65 "GtkAccount.c"

XS(XS_Pidgin__Account_get_handle); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Account_get_handle)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       croak_xs_usage(cv,  "");
    {
	Purple__Handle	RETVAL;

	RETVAL = pidgin_account_get_handle();
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Handle");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Pidgin__Account__Dialog_show); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Account__Dialog_show)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "type, account");
    {
	Pidgin__Account__Dialog__Type	type = (Pidgin__Account__Dialog__Type)SvIV(ST(0));
	Purple__Account	account = purple_perl_ref_object(ST(1));

	pidgin_account_dialog_show(type, account);
    }
    XSRETURN_EMPTY;
}


XS(XS_Pidgin__Account__Window_show); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Account__Window_show)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       croak_xs_usage(cv,  "");
    {

	pidgin_accounts_window_show();
    }
    XSRETURN_EMPTY;
}


XS(XS_Pidgin__Account__Window_hide); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Account__Window_hide)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       croak_xs_usage(cv,  "");
    {

	pidgin_accounts_window_hide();
    }
    XSRETURN_EMPTY;
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Pidgin__Account); /* prototype to pass -Wmissing-prototypes */
XS(boot_Pidgin__Account)
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

        (void)newXSproto_portable("Pidgin::Account::get_handle", XS_Pidgin__Account_get_handle, file, "");
        (void)newXSproto_portable("Pidgin::Account::Dialog::show", XS_Pidgin__Account__Dialog_show, file, "$$");
        (void)newXSproto_portable("Pidgin::Account::Window::show", XS_Pidgin__Account__Window_show, file, "");
        (void)newXSproto_portable("Pidgin::Account::Window::hide", XS_Pidgin__Account__Window_hide, file, "");
#if (PERL_REVISION == 5 && PERL_VERSION >= 9)
  if (PL_unitcheckav)
       call_list(PL_scopestack_ix, PL_unitcheckav);
#endif
    XSRETURN_YES;
}

