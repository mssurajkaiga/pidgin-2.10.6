/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.2210 from the
 * contents of GtkThemes.xs. Do not edit this file, edit GtkThemes.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "GtkThemes.xs"
#include "gtkmodule.h"

#line 13 "GtkThemes.c"
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

#line 65 "GtkThemes.c"

XS(XS_Pidgin__Themes_init); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Themes_init)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       croak_xs_usage(cv,  "");
    {

	pidgin_themes_init();
    }
    XSRETURN_EMPTY;
}


XS(XS_Pidgin__Themes_smileys_disabled); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Themes_smileys_disabled)
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

	RETVAL = pidgin_themes_smileys_disabled();
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Pidgin__Themes_smiley_theme_probe); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Themes_smiley_theme_probe)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       croak_xs_usage(cv,  "");
    {

	pidgin_themes_smiley_theme_probe();
    }
    XSRETURN_EMPTY;
}


XS(XS_Pidgin__Themes_load_smiley_theme); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Themes_load_smiley_theme)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "file, load");
    {
	const char *	file = (const char *)SvPV_nolen(ST(0));
	gboolean	load = (bool)SvTRUE(ST(1));

	pidgin_themes_load_smiley_theme(file, load);
    }
    XSRETURN_EMPTY;
}


XS(XS_Pidgin__Themes_get_proto_smileys); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Themes_get_proto_smileys)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "id");
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
	const char *	id = (const char *)SvPV_nolen(ST(0));
#line 24 "GtkThemes.xs"
	GSList *l;
#line 160 "GtkThemes.c"
#line 26 "GtkThemes.xs"
	for (l = pidgin_themes_get_proto_smileys(id); l != NULL; l = l->next) {
		XPUSHs(sv_2mortal(purple_perl_bless_object(l->data, "Pidgin::IMHtml::Smiley")));
	}
#line 165 "GtkThemes.c"
	PUTBACK;
	return;
    }
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Pidgin__Themes); /* prototype to pass -Wmissing-prototypes */
XS(boot_Pidgin__Themes)
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

        (void)newXSproto_portable("Pidgin::Themes::init", XS_Pidgin__Themes_init, file, "");
        (void)newXSproto_portable("Pidgin::Themes::smileys_disabled", XS_Pidgin__Themes_smileys_disabled, file, "");
        (void)newXSproto_portable("Pidgin::Themes::smiley_theme_probe", XS_Pidgin__Themes_smiley_theme_probe, file, "");
        (void)newXSproto_portable("Pidgin::Themes::load_smiley_theme", XS_Pidgin__Themes_load_smiley_theme, file, "$$");
        (void)newXSproto_portable("Pidgin::Themes::get_proto_smileys", XS_Pidgin__Themes_get_proto_smileys, file, "$");
#if (PERL_REVISION == 5 && PERL_VERSION >= 9)
  if (PL_unitcheckav)
       call_list(PL_scopestack_ix, PL_unitcheckav);
#endif
    XSRETURN_YES;
}

