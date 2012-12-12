/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.2210 from the
 * contents of Roomlist.xs. Do not edit this file, edit Roomlist.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "Roomlist.xs"
#include "module.h"

#line 13 "Roomlist.c"
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

#line 65 "Roomlist.c"

XS(XS_Purple__Roomlist_cancel_get_list); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Roomlist_cancel_get_list)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "list");
    {
	Purple__Roomlist	list = purple_perl_ref_object(ST(0));

	purple_roomlist_cancel_get_list(list);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Roomlist_expand_category); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Roomlist_expand_category)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "list, category");
    {
	Purple__Roomlist	list = purple_perl_ref_object(ST(0));
	Purple__Roomlist__Room	category = purple_perl_ref_object(ST(1));

	purple_roomlist_expand_category(list, category);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Roomlist_get_in_progress); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Roomlist_get_in_progress)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "list");
    {
	Purple__Roomlist	list = purple_perl_ref_object(ST(0));
	gboolean	RETVAL;

	RETVAL = purple_roomlist_get_in_progress(list);
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Roomlist_get_list); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Roomlist_get_list)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "gc");
    {
	Purple__Connection	gc = purple_perl_ref_object(ST(0));
	Purple__Roomlist	RETVAL;

	RETVAL = purple_roomlist_get_list(gc);
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Roomlist");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Roomlist_new); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Roomlist_new)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "account");
    {
	Purple__Account	account = purple_perl_ref_object(ST(0));
	Purple__Roomlist	RETVAL;

	RETVAL = purple_roomlist_new(account);
	ST(0) = purple_perl_bless_object(RETVAL, "Purple::Roomlist");

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_Purple__Roomlist_ref); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Roomlist_ref)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "list");
    {
	Purple__Roomlist	list = purple_perl_ref_object(ST(0));

	purple_roomlist_ref(list);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Roomlist_room_add); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Roomlist_room_add)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "list, room");
    {
	Purple__Roomlist	list = purple_perl_ref_object(ST(0));
	Purple__Roomlist__Room	room = purple_perl_ref_object(ST(1));

	purple_roomlist_room_add(list, room);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Roomlist_room_add_field); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Roomlist_room_add_field)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "list, room, field");
    {
	Purple__Roomlist	list = purple_perl_ref_object(ST(0));
	Purple__Roomlist__Room	room = purple_perl_ref_object(ST(1));
	gconstpointer	field = INT2PTR(gconstpointer,SvIV(ST(2)));

	purple_roomlist_room_add_field(list, room, field);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Roomlist_room_join); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Roomlist_room_join)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "list, room");
    {
	Purple__Roomlist	list = purple_perl_ref_object(ST(0));
	Purple__Roomlist__Room	room = purple_perl_ref_object(ST(1));

	purple_roomlist_room_join(list, room);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Roomlist_set_fields); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Roomlist_set_fields)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "list, fields");
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
	Purple__Roomlist	list = purple_perl_ref_object(ST(0));
	SV *	fields = ST(1);
#line 77 "Roomlist.xs"
	GList *t_GL;
	int i, t_len;
#line 272 "Roomlist.c"
#line 80 "Roomlist.xs"
	t_GL = NULL;
	t_len = av_len((AV *)SvRV(fields));

	for (i = 0; i <= t_len; i++)
		t_GL = g_list_append(t_GL, SvPVutf8_nolen(*av_fetch((AV *)SvRV(fields), i, 0)));

	purple_roomlist_set_fields(list, t_GL);
#line 281 "Roomlist.c"
	PUTBACK;
	return;
    }
}


XS(XS_Purple__Roomlist_set_in_progress); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Roomlist_set_in_progress)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "list, in_progress");
    {
	Purple__Roomlist	list = purple_perl_ref_object(ST(0));
	gboolean	in_progress = (bool)SvTRUE(ST(1));

	purple_roomlist_set_in_progress(list, in_progress);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Roomlist_show_with_account); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Roomlist_show_with_account)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "account");
    {
	Purple__Account	account = purple_perl_ref_object(ST(0));

	purple_roomlist_show_with_account(account);
    }
    XSRETURN_EMPTY;
}


XS(XS_Purple__Roomlist_unref); /* prototype to pass -Wmissing-prototypes */
XS(XS_Purple__Roomlist_unref)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "list");
    {
	Purple__Roomlist	list = purple_perl_ref_object(ST(0));

	purple_roomlist_unref(list);
    }
    XSRETURN_EMPTY;
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Purple__Roomlist); /* prototype to pass -Wmissing-prototypes */
XS(boot_Purple__Roomlist)
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

        (void)newXSproto_portable("Purple::Roomlist::cancel_get_list", XS_Purple__Roomlist_cancel_get_list, file, "$");
        (void)newXSproto_portable("Purple::Roomlist::expand_category", XS_Purple__Roomlist_expand_category, file, "$$");
        (void)newXSproto_portable("Purple::Roomlist::get_in_progress", XS_Purple__Roomlist_get_in_progress, file, "$");
        (void)newXSproto_portable("Purple::Roomlist::get_list", XS_Purple__Roomlist_get_list, file, "$");
        (void)newXSproto_portable("Purple::Roomlist::new", XS_Purple__Roomlist_new, file, "$");
        (void)newXSproto_portable("Purple::Roomlist::ref", XS_Purple__Roomlist_ref, file, "$");
        (void)newXSproto_portable("Purple::Roomlist::room_add", XS_Purple__Roomlist_room_add, file, "$$");
        (void)newXSproto_portable("Purple::Roomlist::room_add_field", XS_Purple__Roomlist_room_add_field, file, "$$$");
        (void)newXSproto_portable("Purple::Roomlist::room_join", XS_Purple__Roomlist_room_join, file, "$$");
        (void)newXSproto_portable("Purple::Roomlist::set_fields", XS_Purple__Roomlist_set_fields, file, "$$");
        (void)newXSproto_portable("Purple::Roomlist::set_in_progress", XS_Purple__Roomlist_set_in_progress, file, "$$");
        (void)newXSproto_portable("Purple::Roomlist::show_with_account", XS_Purple__Roomlist_show_with_account, file, "$");
        (void)newXSproto_portable("Purple::Roomlist::unref", XS_Purple__Roomlist_unref, file, "$");

    /* Initialisation Section */

#line 7 "Roomlist.xs"
{
	HV *room_stash = gv_stashpv("Purple::Roomlist::Room::Type", 1);
	HV *field_stash = gv_stashpv("Purple::Roomlist::Field::Type", 1);

	static const constiv *civ, room_const_iv[] = {
#define const_iv(name) {#name, (IV)PURPLE_ROOMLIST_ROOMTYPE_##name}
		const_iv(CATEGORY),
		const_iv(ROOM),
	};
	static const constiv field_const_iv[] = {
#undef const_iv
#define const_iv(name) {#name, (IV)PURPLE_ROOMLIST_FIELD_##name}
		const_iv(BOOL),
		const_iv(INT),
		const_iv(STRING),
	};

	for (civ = room_const_iv + sizeof(room_const_iv) / sizeof(room_const_iv[0]); civ-- > room_const_iv; )
		newCONSTSUB(room_stash, (char *)civ->name, newSViv(civ->iv));

	for (civ = field_const_iv + sizeof(field_const_iv) / sizeof(field_const_iv[0]); civ-- > field_const_iv; )
		newCONSTSUB(field_stash, (char *)civ->name, newSViv(civ->iv));
}

#line 410 "Roomlist.c"

    /* End of Initialisation Section */

#if (PERL_REVISION == 5 && PERL_VERSION >= 9)
  if (PL_unitcheckav)
       call_list(PL_scopestack_ix, PL_unitcheckav);
#endif
    XSRETURN_YES;
}

