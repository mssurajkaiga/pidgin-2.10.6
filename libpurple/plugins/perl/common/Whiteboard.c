/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.2210 from the
 * contents of Whiteboard.xs. Do not edit this file, edit Whiteboard.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "Whiteboard.xs"
#include "module.h"

#line 13 "Whiteboard.c"
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

#line 65 "Whiteboard.c"

XS(XS_Purple__Whiteboard_clear); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Whiteboard_clear)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "wb");
    {
	Purple__Whiteboard	wb = purple_perl_ref_object(ST(0));

	purple_whiteboard_clear(wb);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Whiteboard_create); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Whiteboard_create)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "account, who, state");
    {
	Purple__Account	account = purple_perl_ref_object(ST(0));
	const char*	who = (const char *)SvPV_nolen(ST(1));
	int	state = (int)SvIV(ST(2));
	Purple__Whiteboard	RETVAL;

	RETVAL = purple_whiteboard_create(account, who, state);
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Whiteboard");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Whiteboard_destroy); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Whiteboard_destroy)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "wb");
    {
	Purple__Whiteboard	wb = purple_perl_ref_object(ST(0));

	purple_whiteboard_destroy(wb);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Whiteboard_draw_line); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Whiteboard_draw_line)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 7)
       croak_xs_usage(cv,  "wb, x1, y1, x2, y2, color, size");
    {
	Purple__Whiteboard	wb = purple_perl_ref_object(ST(0));
	int	x1 = (int)SvIV(ST(1));
	int	y1 = (int)SvIV(ST(2));
	int	x2 = (int)SvIV(ST(3));
	int	y2 = (int)SvIV(ST(4));
	int	color = (int)SvIV(ST(5));
	int	size = (int)SvIV(ST(6));

	purple_whiteboard_draw_line(wb, x1, y1, x2, y2, color, size);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Whiteboard_draw_point); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Whiteboard_draw_point)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 5)
       croak_xs_usage(cv,  "wb, x, y, color, size");
    {
	Purple__Whiteboard	wb = purple_perl_ref_object(ST(0));
	int	x = (int)SvIV(ST(1));
	int	y = (int)SvIV(ST(2));
	int	color = (int)SvIV(ST(3));
	int	size = (int)SvIV(ST(4));

	purple_whiteboard_draw_point(wb, x, y, color, size);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Whiteboard_get_session); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Whiteboard_get_session)
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
	const char*	who = (const char *)SvPV_nolen(ST(1));
	Purple__Whiteboard	RETVAL;

	RETVAL = purple_whiteboard_get_session(account, who);
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Whiteboard");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Whiteboard_send_brush); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Whiteboard_send_brush)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "wb, size, color");
    {
	Purple__Whiteboard	wb = purple_perl_ref_object(ST(0));
	int	size = (int)SvIV(ST(1));
	int	color = (int)SvIV(ST(2));

	purple_whiteboard_send_brush(wb, size, color);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Whiteboard_send_clear); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Whiteboard_send_clear)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "wb");
    {
	Purple__Whiteboard	wb = purple_perl_ref_object(ST(0));

	purple_whiteboard_send_clear(wb);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Whiteboard_set_brush); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Whiteboard_set_brush)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "wb, size, color");
    {
	Purple__Whiteboard	wb = purple_perl_ref_object(ST(0));
	int	size = (int)SvIV(ST(1));
	int	color = (int)SvIV(ST(2));

	purple_whiteboard_set_brush(wb, size, color);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Whiteboard_set_dimensions); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Whiteboard_set_dimensions)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "wb, width, height");
    {
	Purple__Whiteboard	wb = purple_perl_ref_object(ST(0));
	int	width = (int)SvIV(ST(1));
	int	height = (int)SvIV(ST(2));

	purple_whiteboard_set_dimensions(wb, width, height);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Whiteboard_get_brush); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Whiteboard_get_brush)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "wb");
    {
	Purple__Whiteboard	wb = purple_perl_ref_object(ST(0));
	gboolean	RETVAL;
	int	size;
	int	color;

	RETVAL = purple_whiteboard_get_brush(wb, &size, &color);
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
	XSprePUSH;	EXTEND(SP,2);
	PUSHs(sv_newmortal());
	sv_setiv(ST(1), (IV)size);
	PUSHs(sv_newmortal());
	sv_setiv(ST(2), (IV)color);
    }
    XSRETURN(3);
}


XS(XS_Purple__Whiteboard_get_dimensions); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Whiteboard_get_dimensions)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "wb");
    {
	Purple__Whiteboard	wb = purple_perl_ref_object(ST(0));
	gboolean	RETVAL;
	int	width;
	int	height;

	RETVAL = purple_whiteboard_get_dimensions(wb, &width, &height);
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
	XSprePUSH;	EXTEND(SP,2);
	PUSHs(sv_newmortal());
	sv_setiv(ST(1), (IV)width);
	PUSHs(sv_newmortal());
	sv_setiv(ST(2), (IV)height);
    }
    XSRETURN(3);
}


XS(XS_Purple__Whiteboard_start); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Whiteboard_start)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "wb");
    {
	Purple__Whiteboard	wb = purple_perl_ref_object(ST(0));

	purple_whiteboard_start(wb);
    }
    XSRETURN_EMPTY;
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Purple__Whiteboard); /* prototype to pass -Wmissing-prototypes */
XS(boot_Purple__Whiteboard)
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

        (void)newXSproto_portable("Purple::Whiteboard::clear", XS_Purple__Whiteboard_clear, file, "$");
        (void)newXSproto_portable("Purple::Whiteboard::create", XS_Purple__Whiteboard_create, file, "$$$");
        (void)newXSproto_portable("Purple::Whiteboard::destroy", XS_Purple__Whiteboard_destroy, file, "$");
        (void)newXSproto_portable("Purple::Whiteboard::draw_line", XS_Purple__Whiteboard_draw_line, file, "$$$$$$$");
        (void)newXSproto_portable("Purple::Whiteboard::draw_point", XS_Purple__Whiteboard_draw_point, file, "$$$$$");
        (void)newXSproto_portable("Purple::Whiteboard::get_session", XS_Purple__Whiteboard_get_session, file, "$$");
        (void)newXSproto_portable("Purple::Whiteboard::send_brush", XS_Purple__Whiteboard_send_brush, file, "$$$");
        (void)newXSproto_portable("Purple::Whiteboard::send_clear", XS_Purple__Whiteboard_send_clear, file, "$");
        (void)newXSproto_portable("Purple::Whiteboard::set_brush", XS_Purple__Whiteboard_set_brush, file, "$$$");
        (void)newXSproto_portable("Purple::Whiteboard::set_dimensions", XS_Purple__Whiteboard_set_dimensions, file, "$$$");
        (void)newXSproto_portable("Purple::Whiteboard::get_brush", XS_Purple__Whiteboard_get_brush, file, "$");
        (void)newXSproto_portable("Purple::Whiteboard::get_dimensions", XS_Purple__Whiteboard_get_dimensions, file, "$");
        (void)newXSproto_portable("Purple::Whiteboard::start", XS_Purple__Whiteboard_start, file, "$");
#if (PERL_REVISION == 5 && PERL_VERSION >= 9)
  if (PL_unitcheckav)
       call_list(PL_scopestack_ix, PL_unitcheckav);
#endif
    XSRETURN_YES;
}
