/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.2210 from the
 * contents of Stringref.xs. Do not edit this file, edit Stringref.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "Stringref.xs"
#include "module.h"

#line 13 "Stringref.c"
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

#line 65 "Stringref.c"

XS(XS_Purple__Stringref_cmp); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Stringref_cmp)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "s1, s2");
    {
	Purple__Stringref	s1 = purple_perl_ref_object(ST(0));
	Purple__Stringref	s2 = purple_perl_ref_object(ST(1));
	int	RETVAL;
	dXSTARG;

	RETVAL = purple_stringref_cmp(s1, s2);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Purple__Stringref_len); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Stringref_len)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "stringref");
    {
	Purple__Stringref	stringref = purple_perl_ref_object(ST(0));
	size_t	RETVAL;
	dXSTARG;

	RETVAL = purple_stringref_len(stringref);
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Purple__Stringref_new); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Stringref_new)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "class, value");
    {
	const char *	value = (const char *)SvPV_nolen(ST(1));
	Purple__Stringref	RETVAL;

	RETVAL = purple_stringref_new(value);
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Stringref");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Stringref_new_noref); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Stringref_new_noref)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "class, value");
    {
	const char *	value = (const char *)SvPV_nolen(ST(1));
	Purple__Stringref	RETVAL;

	RETVAL = purple_stringref_new_noref(value);
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Stringref");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Stringref_ref); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Stringref_ref)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "stringref");
    {
	Purple__Stringref	stringref = purple_perl_ref_object(ST(0));
	Purple__Stringref	RETVAL;

	RETVAL = purple_stringref_ref(stringref);
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Stringref");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Stringref_unref); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Stringref_unref)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "stringref");
    {
	Purple__Stringref	stringref = purple_perl_ref_object(ST(0));

	purple_stringref_unref(stringref);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Stringref_value); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Stringref_value)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "stringref");
    {
	Purple__Stringref	stringref = purple_perl_ref_object(ST(0));
	const char *	RETVAL;
	dXSTARG;

	RETVAL = purple_stringref_value(stringref);
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Purple__Stringref); /* prototype to pass -Wmissing-prototypes */
XS(boot_Purple__Stringref)
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

        (void)newXSproto_portable("Purple::Stringref::cmp", XS_Purple__Stringref_cmp, file, "$$");
        (void)newXSproto_portable("Purple::Stringref::len", XS_Purple__Stringref_len, file, "$");
        (void)newXSproto_portable("Purple::Stringref::new", XS_Purple__Stringref_new, file, "$$");
        (void)newXSproto_portable("Purple::Stringref::new_noref", XS_Purple__Stringref_new_noref, file, "$$");
        (void)newXSproto_portable("Purple::Stringref::ref", XS_Purple__Stringref_ref, file, "$");
        (void)newXSproto_portable("Purple::Stringref::unref", XS_Purple__Stringref_unref, file, "$");
        (void)newXSproto_portable("Purple::Stringref::value", XS_Purple__Stringref_value, file, "$");
#if (PERL_REVISION == 5 && PERL_VERSION >= 9)
  if (PL_unitcheckav)
       call_list(PL_scopestack_ix, PL_unitcheckav);
#endif
    XSRETURN_YES;
}
