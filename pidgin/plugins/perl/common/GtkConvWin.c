/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.2210 from the
 * contents of GtkConvWin.xs. Do not edit this file, edit GtkConvWin.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "GtkConvWin.xs"
#include "gtkmodule.h"

#line 13 "GtkConvWin.c"
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

#line 65 "GtkConvWin.c"

XS(XS_Pidgin__Conversation__Window_new); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Window_new)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "class");
    {
	Pidgin__Conversation__Window	RETVAL;

	RETVAL = pidgin_conv_window_new(/* void */);
	ST(0) = purple_perl_bless_object(RETVAL, "Pidgin::Conversation::Window");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Pidgin__Conversation__Window_destroy); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Window_destroy)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "win");
    {
	Pidgin__Conversation__Window	win = purple_perl_ref_object(ST(0));

	pidgin_conv_window_destroy(win);
    }
    XSRETURN_EMPTY;
}


XS(XS_Pidgin__Conversation__Window_show); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Window_show)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "win");
    {
	Pidgin__Conversation__Window	win = purple_perl_ref_object(ST(0));

	pidgin_conv_window_show(win);
    }
    XSRETURN_EMPTY;
}


XS(XS_Pidgin__Conversation__Window_hide); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Window_hide)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "win");
    {
	Pidgin__Conversation__Window	win = purple_perl_ref_object(ST(0));

	pidgin_conv_window_hide(win);
    }
    XSRETURN_EMPTY;
}


XS(XS_Pidgin__Conversation__Window_raise); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Window_raise)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "win");
    {
	Pidgin__Conversation__Window	win = purple_perl_ref_object(ST(0));

	pidgin_conv_window_raise(win);
    }
    XSRETURN_EMPTY;
}


XS(XS_Pidgin__Conversation__Window_switch_gtkconv); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Window_switch_gtkconv)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "win, gtkconv");
    {
	Pidgin__Conversation__Window	win = purple_perl_ref_object(ST(0));
	Pidgin__Conversation	gtkconv = purple_perl_ref_object(ST(1));

	pidgin_conv_window_switch_gtkconv(win, gtkconv);
    }
    XSRETURN_EMPTY;
}


XS(XS_Pidgin__Conversation__Window_add_gtkconv); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Window_add_gtkconv)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "win, gtkconv");
    {
	Pidgin__Conversation__Window	win = purple_perl_ref_object(ST(0));
	Pidgin__Conversation	gtkconv = purple_perl_ref_object(ST(1));

	pidgin_conv_window_add_gtkconv(win, gtkconv);
    }
    XSRETURN_EMPTY;
}


XS(XS_Pidgin__Conversation__Window_remove_gtkconv); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Window_remove_gtkconv)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "win, gtkconv");
    {
	Pidgin__Conversation__Window	win = purple_perl_ref_object(ST(0));
	Pidgin__Conversation	gtkconv = purple_perl_ref_object(ST(1));

	pidgin_conv_window_remove_gtkconv(win, gtkconv);
    }
    XSRETURN_EMPTY;
}


XS(XS_Pidgin__Conversation__Window_get_gtkconv_at_index); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Window_get_gtkconv_at_index)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "win, index");
    {
	Pidgin__Conversation__Window	win = purple_perl_ref_object(ST(0));
	int	index = (int)SvIV(ST(1));
	Pidgin__Conversation	RETVAL;

	RETVAL = pidgin_conv_window_get_gtkconv_at_index(win, index);
	ST(0) = purple_perl_bless_object(RETVAL, "Pidgin::Conversation");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Pidgin__Conversation__Window_get_active_gtkconv); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Window_get_active_gtkconv)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "win");
    {
	Pidgin__Conversation__Window	win = purple_perl_ref_object(ST(0));
	Pidgin__Conversation	RETVAL;

	RETVAL = pidgin_conv_window_get_active_gtkconv(win);
	ST(0) = purple_perl_bless_object(RETVAL, "Pidgin::Conversation");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Pidgin__Conversation__Window_get_active_conversation); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Window_get_active_conversation)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "win");
    {
	Pidgin__Conversation__Window	win = purple_perl_ref_object(ST(0));
	Purple__Conversation	RETVAL;

	RETVAL = pidgin_conv_window_get_active_conversation(win);
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Conversation");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Pidgin__Conversation__Window_is_active_conversation); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Window_is_active_conversation)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "conv");
    {
	Purple__Conversation	conv = purple_perl_ref_object(ST(0));
	gboolean	RETVAL;

	RETVAL = pidgin_conv_window_is_active_conversation(conv);
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Pidgin__Conversation__Window_has_focus); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Window_has_focus)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "win");
    {
	Pidgin__Conversation__Window	win = purple_perl_ref_object(ST(0));
	gboolean	RETVAL;

	RETVAL = pidgin_conv_window_has_focus(win);
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Pidgin__Conversation__Window_get_at_xy); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Window_get_at_xy)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "x, y");
    {
	int	x = (int)SvIV(ST(0));
	int	y = (int)SvIV(ST(1));
	Pidgin__Conversation__Window	RETVAL;

	RETVAL = pidgin_conv_window_get_at_xy(x, y);
	ST(0) = purple_perl_bless_object(RETVAL, "Pidgin::Conversation::Window");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Pidgin__Conversation__Window_get_gtkconvs); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Window_get_gtkconvs)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "win");
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
	Pidgin__Conversation__Window	win = purple_perl_ref_object(ST(0));
#line 71 "GtkConvWin.xs"
	GList *l;
#line 379 "GtkConvWin.c"
#line 73 "GtkConvWin.xs"
	for (l = pidgin_conv_window_get_gtkconvs(win); l != NULL; l = l->next) {
		XPUSHs(sv_2mortal(purple_perl_bless_object(l->data, "Pidgin::Conversation")));
	}
#line 384 "GtkConvWin.c"
	PUTBACK;
	return;
    }
}


XS(XS_Pidgin__Conversation__Window_get_gtkconv_count); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Window_get_gtkconv_count)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "win");
    {
	Pidgin__Conversation__Window	win = purple_perl_ref_object(ST(0));
	guint	RETVAL;
	dXSTARG;

	RETVAL = pidgin_conv_window_get_gtkconv_count(win);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Pidgin__Conversation__Window_first_with_type); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Window_first_with_type)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "type");
    {
	Purple__ConversationType	type = (Purple__ConversationType)SvIV(ST(0));
	Pidgin__Conversation__Window	RETVAL;

	RETVAL = pidgin_conv_window_first_with_type(type);
	ST(0) = purple_perl_bless_object(RETVAL, "Pidgin::Conversation::Window");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Pidgin__Conversation__Window_last_with_type); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Window_last_with_type)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "type");
    {
	Purple__ConversationType	type = (Purple__ConversationType)SvIV(ST(0));
	Pidgin__Conversation__Window	RETVAL;

	RETVAL = pidgin_conv_window_last_with_type(type);
	ST(0) = purple_perl_bless_object(RETVAL, "Pidgin::Conversation::Window");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Pidgin__Conversation__Placement_get_options); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Placement_get_options)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       croak_xs_usage(cv,  "");
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
#line 95 "GtkConvWin.xs"
	GList *l;
#line 474 "GtkConvWin.c"
#line 97 "GtkConvWin.xs"
	for (l = pidgin_conv_placement_get_options(); l != NULL; l = l->next) {
		XPUSHs(sv_2mortal(purple_perl_bless_object(l->data, "Pidgin::Conversation::Window")));
	}
#line 479 "GtkConvWin.c"
	PUTBACK;
	return;
    }
}


XS(XS_Pidgin__Conversation__Placement_add_fnc); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Placement_add_fnc)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "id, name, fnc");
    {
	const char *	id = (const char *)SvPV_nolen(ST(0));
	const char *	name = (const char *)SvPV_nolen(ST(1));
	Pidgin__Conversation__PlacementFunc	fnc = purple_perl_ref_object(ST(2));

	pidgin_conv_placement_add_fnc(id, name, fnc);
    }
    XSRETURN_EMPTY;
}


XS(XS_Pidgin__Conversation__Placement_remove_fnc); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Placement_remove_fnc)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "id");
    {
	const char *	id = (const char *)SvPV_nolen(ST(0));

	pidgin_conv_placement_remove_fnc(id);
    }
    XSRETURN_EMPTY;
}


XS(XS_Pidgin__Conversation__Placement_get_name); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Placement_get_name)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "id");
    {
	const char *	id = (const char *)SvPV_nolen(ST(0));
	const char *	RETVAL;
	dXSTARG;

	RETVAL = pidgin_conv_placement_get_name(id);
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}


XS(XS_Pidgin__Conversation__Placement_get_fnc); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Placement_get_fnc)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "id");
    {
	const char *	id = (const char *)SvPV_nolen(ST(0));
	Pidgin__Conversation__PlacementFunc	RETVAL;

	RETVAL = pidgin_conv_placement_get_fnc(id);
	ST(0) = purple_perl_bless_object(RETVAL, "Pidgin::Conversation::PlacementFunc");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Pidgin__Conversation__Placement_set_current_func); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Placement_set_current_func)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "func");
    {
	Pidgin__Conversation__PlacementFunc	func = purple_perl_ref_object(ST(0));

	pidgin_conv_placement_set_current_func(func);
    }
    XSRETURN_EMPTY;
}


XS(XS_Pidgin__Conversation__Placement_get_current_func); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Placement_get_current_func)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       croak_xs_usage(cv,  "");
    {
	Pidgin__Conversation__PlacementFunc	RETVAL;

	RETVAL = pidgin_conv_placement_get_current_func();
	ST(0) = purple_perl_bless_object(RETVAL, "Pidgin::Conversation::PlacementFunc");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Pidgin__Conversation__Placement_place); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Placement_place)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "gtkconv");
    {
	Pidgin__Conversation	gtkconv = purple_perl_ref_object(ST(0));

	pidgin_conv_placement_place(gtkconv);
    }
    XSRETURN_EMPTY;
}


XS(XS_Pidgin__Conversation__Windows_get_list); /* prototype to pass -Wmissing-prototypes */
XS(XS_Pidgin__Conversation__Windows_get_list)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       croak_xs_usage(cv,  "");
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
#line 136 "GtkConvWin.xs"
	GList *l;
#line 646 "GtkConvWin.c"
#line 138 "GtkConvWin.xs"
	for (l = pidgin_conv_windows_get_list(); l != NULL; l = l->next) {
		XPUSHs(sv_2mortal(purple_perl_bless_object(l->data, "Pidgin::Conversation::Window")));
	}
#line 651 "GtkConvWin.c"
	PUTBACK;
	return;
    }
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Pidgin__Conversation__Window); /* prototype to pass -Wmissing-prototypes */
XS(boot_Pidgin__Conversation__Window)
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

        (void)newXSproto_portable("Pidgin::Conversation::Window::new", XS_Pidgin__Conversation__Window_new, file, "$");
        (void)newXSproto_portable("Pidgin::Conversation::Window::destroy", XS_Pidgin__Conversation__Window_destroy, file, "$");
        (void)newXSproto_portable("Pidgin::Conversation::Window::show", XS_Pidgin__Conversation__Window_show, file, "$");
        (void)newXSproto_portable("Pidgin::Conversation::Window::hide", XS_Pidgin__Conversation__Window_hide, file, "$");
        (void)newXSproto_portable("Pidgin::Conversation::Window::raise", XS_Pidgin__Conversation__Window_raise, file, "$");
        (void)newXSproto_portable("Pidgin::Conversation::Window::switch_gtkconv", XS_Pidgin__Conversation__Window_switch_gtkconv, file, "$$");
        (void)newXSproto_portable("Pidgin::Conversation::Window::add_gtkconv", XS_Pidgin__Conversation__Window_add_gtkconv, file, "$$");
        (void)newXSproto_portable("Pidgin::Conversation::Window::remove_gtkconv", XS_Pidgin__Conversation__Window_remove_gtkconv, file, "$$");
        (void)newXSproto_portable("Pidgin::Conversation::Window::get_gtkconv_at_index", XS_Pidgin__Conversation__Window_get_gtkconv_at_index, file, "$$");
        (void)newXSproto_portable("Pidgin::Conversation::Window::get_active_gtkconv", XS_Pidgin__Conversation__Window_get_active_gtkconv, file, "$");
        (void)newXSproto_portable("Pidgin::Conversation::Window::get_active_conversation", XS_Pidgin__Conversation__Window_get_active_conversation, file, "$");
        (void)newXSproto_portable("Pidgin::Conversation::Window::is_active_conversation", XS_Pidgin__Conversation__Window_is_active_conversation, file, "$");
        (void)newXSproto_portable("Pidgin::Conversation::Window::has_focus", XS_Pidgin__Conversation__Window_has_focus, file, "$");
        (void)newXSproto_portable("Pidgin::Conversation::Window::get_at_xy", XS_Pidgin__Conversation__Window_get_at_xy, file, "$$");
        (void)newXSproto_portable("Pidgin::Conversation::Window::get_gtkconvs", XS_Pidgin__Conversation__Window_get_gtkconvs, file, "$");
        (void)newXSproto_portable("Pidgin::Conversation::Window::get_gtkconv_count", XS_Pidgin__Conversation__Window_get_gtkconv_count, file, "$");
        (void)newXSproto_portable("Pidgin::Conversation::Window::first_with_type", XS_Pidgin__Conversation__Window_first_with_type, file, "$");
        (void)newXSproto_portable("Pidgin::Conversation::Window::last_with_type", XS_Pidgin__Conversation__Window_last_with_type, file, "$");
        (void)newXSproto_portable("Pidgin::Conversation::Placement::get_options", XS_Pidgin__Conversation__Placement_get_options, file, "");
        (void)newXSproto_portable("Pidgin::Conversation::Placement::add_fnc", XS_Pidgin__Conversation__Placement_add_fnc, file, "$$$");
        (void)newXSproto_portable("Pidgin::Conversation::Placement::remove_fnc", XS_Pidgin__Conversation__Placement_remove_fnc, file, "$");
        (void)newXSproto_portable("Pidgin::Conversation::Placement::get_name", XS_Pidgin__Conversation__Placement_get_name, file, "$");
        (void)newXSproto_portable("Pidgin::Conversation::Placement::get_fnc", XS_Pidgin__Conversation__Placement_get_fnc, file, "$");
        (void)newXSproto_portable("Pidgin::Conversation::Placement::set_current_func", XS_Pidgin__Conversation__Placement_set_current_func, file, "$");
        (void)newXSproto_portable("Pidgin::Conversation::Placement::get_current_func", XS_Pidgin__Conversation__Placement_get_current_func, file, "");
        (void)newXSproto_portable("Pidgin::Conversation::Placement::place", XS_Pidgin__Conversation__Placement_place, file, "$");
        (void)newXSproto_portable("Pidgin::Conversation::Windows::get_list", XS_Pidgin__Conversation__Windows_get_list, file, "");
#if (PERL_REVISION == 5 && PERL_VERSION >= 9)
  if (PL_unitcheckav)
       call_list(PL_scopestack_ix, PL_unitcheckav);
#endif
    XSRETURN_YES;
}

