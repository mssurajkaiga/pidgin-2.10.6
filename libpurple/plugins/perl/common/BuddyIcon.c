/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.2210 from the
 * contents of BuddyIcon.xs. Do not edit this file, edit BuddyIcon.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "BuddyIcon.xs"
#include "module.h"

#line 13 "BuddyIcon.c"
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

#line 65 "BuddyIcon.c"

XS(XS_Purple__Buddy__Icon_ref); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Buddy__Icon_ref)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "icon");
    {
	Purple__Buddy__Icon	icon = purple_perl_ref_object(ST(0));
	Purple__Buddy__Icon	RETVAL;

	RETVAL = purple_buddy_icon_ref(icon);
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Buddy::Icon");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Buddy__Icon_unref); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Buddy__Icon_unref)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "icon");
    {
	Purple__Buddy__Icon	icon = purple_perl_ref_object(ST(0));
	Purple__Buddy__Icon	RETVAL;

	RETVAL = purple_buddy_icon_unref(icon);
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Buddy::Icon");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Buddy__Icon_update); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Buddy__Icon_update)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "icon");
    {
	Purple__Buddy__Icon	icon = purple_perl_ref_object(ST(0));

	purple_buddy_icon_update(icon);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Buddy__Icon_set_data); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Buddy__Icon_set_data)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 4)
       croak_xs_usage(cv,  "icon, data, len, checksum");
    {
	Purple__Buddy__Icon	icon = purple_perl_ref_object(ST(0));
	void *	data = INT2PTR(void *,SvIV(ST(1)));
	size_t	len = (size_t)SvUV(ST(2));
	char *	checksum = (char *)SvPV_nolen(ST(3));

	purple_buddy_icon_set_data(icon, data, len, checksum);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Buddy__Icon_get_account); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Buddy__Icon_get_account)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "icon");
    {
	Purple__Buddy__Icon	icon = purple_perl_ref_object(ST(0));
	Purple__Account	RETVAL;

	RETVAL = purple_buddy_icon_get_account(icon);
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Account");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Buddy__Icon_get_username); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Buddy__Icon_get_username)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "icon");
    {
	Purple__Buddy__Icon	icon = purple_perl_ref_object(ST(0));
	const char *	RETVAL;
	dXSTARG;

	RETVAL = purple_buddy_icon_get_username(icon);
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}


XS(XS_Purple__Buddy__Icon_get_data); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Buddy__Icon_get_data)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "icon, len");
    {
	Purple__Buddy__Icon	icon = purple_perl_ref_object(ST(0));
	size_t	len = (size_t)SvUV(ST(1));
	const void *	RETVAL;
	dXSTARG;

	RETVAL = purple_buddy_icon_get_data(icon, &len);
	XSprePUSH; PUSHi(PTR2IV(RETVAL));
    }
    XSRETURN(1);
}


XS(XS_Purple__Buddy__Icon_get_extension); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Buddy__Icon_get_extension)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "icon");
    {
	Purple__Buddy__Icon	icon = purple_perl_ref_object(ST(0));
	const char *	RETVAL;
	dXSTARG;

	RETVAL = purple_buddy_icon_get_extension(icon);
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}


XS(XS_Purple__Buddy__Icon_get_scale_size); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Buddy__Icon_get_scale_size)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "spec, width, height");
    {
	Purple__Buddy__Icon__Spec	spec = purple_perl_ref_object(ST(0));
	int *	width = INT2PTR(int *,SvIV(ST(1)));
	int *	height = INT2PTR(int *,SvIV(ST(2)));

	purple_buddy_icon_get_scale_size(spec, width, height);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Buddy__Icon_get_full_path); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Buddy__Icon_get_full_path)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "icon");
    {
	Purple__Buddy__Icon	icon = purple_perl_ref_object(ST(0));
	gchar_own *	RETVAL;

	RETVAL = purple_buddy_icon_get_full_path(icon);
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


XS(XS_Purple__Buddy__Icons_set_caching); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Buddy__Icons_set_caching)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "caching");
    {
	gboolean	caching = (bool)SvTRUE(ST(0));

	purple_buddy_icons_set_caching(caching);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Buddy__Icons_is_caching); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Buddy__Icons_is_caching)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       croak_xs_usage(cv,  "");
    {
	gboolean	RETVAL;

	RETVAL = purple_buddy_icons_is_caching();
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Buddy__Icons_set_cache_dir); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Buddy__Icons_set_cache_dir)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "cache_dir");
    {
	const char *	cache_dir = (const char *)SvPV_nolen(ST(0));

	purple_buddy_icons_set_cache_dir(cache_dir);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Buddy__Icons_get_cache_dir); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Buddy__Icons_get_cache_dir)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       croak_xs_usage(cv,  "");
    {
	const char *	RETVAL;
	dXSTARG;

	RETVAL = purple_buddy_icons_get_cache_dir();
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}


XS(XS_Purple__Buddy__Icons_get_handle); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Buddy__Icons_get_handle)
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

	RETVAL = purple_buddy_icons_get_handle();
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Handle");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Purple__Buddy__Icon); /* prototype to pass -Wmissing-prototypes */
XS(boot_Purple__Buddy__Icon)
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

        (void)newXSproto_portable("Purple::Buddy::Icon::ref", XS_Purple__Buddy__Icon_ref, file, "$");
        (void)newXSproto_portable("Purple::Buddy::Icon::unref", XS_Purple__Buddy__Icon_unref, file, "$");
        (void)newXSproto_portable("Purple::Buddy::Icon::update", XS_Purple__Buddy__Icon_update, file, "$");
        (void)newXSproto_portable("Purple::Buddy::Icon::set_data", XS_Purple__Buddy__Icon_set_data, file, "$$$$");
        (void)newXSproto_portable("Purple::Buddy::Icon::get_account", XS_Purple__Buddy__Icon_get_account, file, "$");
        (void)newXSproto_portable("Purple::Buddy::Icon::get_username", XS_Purple__Buddy__Icon_get_username, file, "$");
        (void)newXSproto_portable("Purple::Buddy::Icon::get_data", XS_Purple__Buddy__Icon_get_data, file, "$$");
        (void)newXSproto_portable("Purple::Buddy::Icon::get_extension", XS_Purple__Buddy__Icon_get_extension, file, "$");
        (void)newXSproto_portable("Purple::Buddy::Icon::get_scale_size", XS_Purple__Buddy__Icon_get_scale_size, file, "$$$");
        (void)newXSproto_portable("Purple::Buddy::Icon::get_full_path", XS_Purple__Buddy__Icon_get_full_path, file, "$");
        (void)newXSproto_portable("Purple::Buddy::Icons::set_caching", XS_Purple__Buddy__Icons_set_caching, file, "$");
        (void)newXSproto_portable("Purple::Buddy::Icons::is_caching", XS_Purple__Buddy__Icons_is_caching, file, "");
        (void)newXSproto_portable("Purple::Buddy::Icons::set_cache_dir", XS_Purple__Buddy__Icons_set_cache_dir, file, "$");
        (void)newXSproto_portable("Purple::Buddy::Icons::get_cache_dir", XS_Purple__Buddy__Icons_get_cache_dir, file, "");
        (void)newXSproto_portable("Purple::Buddy::Icons::get_handle", XS_Purple__Buddy__Icons_get_handle, file, "");
#if (PERL_REVISION == 5 && PERL_VERSION >= 9)
  if (PL_unitcheckav)
       call_list(PL_scopestack_ix, PL_unitcheckav);
#endif
    XSRETURN_YES;
}

