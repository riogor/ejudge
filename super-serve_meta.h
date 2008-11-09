// This is an auto-generated file, do not edit
// Generated 2008/11/09 20:14:36

#ifndef __SUPER_SERVE_META_H__
#define __SUPER_SERVE_META_H__

#include <stdlib.h>

enum
{
  SSSS_next = 1,
  SSSS_prev,
  SSSS_sid,
  SSSS_init_time,
  SSSS_flags,
  SSSS_edited_cnts,
  SSSS_advanced_view,
  SSSS_show_html_attrs,
  SSSS_show_html_headers,
  SSSS_show_paths,
  SSSS_show_access_rules,
  SSSS_show_permissions,
  SSSS_show_form_fields,
  SSSS_show_notifications,
  SSSS_users_header_text,
  SSSS_users_footer_text,
  SSSS_register_header_text,
  SSSS_register_footer_text,
  SSSS_team_header_text,
  SSSS_team_menu_1_text,
  SSSS_team_menu_2_text,
  SSSS_team_menu_3_text,
  SSSS_team_separator_text,
  SSSS_team_footer_text,
  SSSS_priv_header_text,
  SSSS_priv_footer_text,
  SSSS_register_email_text,
  SSSS_copyright_text,
  SSSS_welcome_text,
  SSSS_reg_welcome_text,
  SSSS_users_header_loaded,
  SSSS_users_footer_loaded,
  SSSS_register_header_loaded,
  SSSS_register_footer_loaded,
  SSSS_team_header_loaded,
  SSSS_team_menu_1_loaded,
  SSSS_team_menu_2_loaded,
  SSSS_team_menu_3_loaded,
  SSSS_team_separator_loaded,
  SSSS_team_footer_loaded,
  SSSS_priv_header_loaded,
  SSSS_priv_footer_loaded,
  SSSS_register_email_loaded,
  SSSS_copyright_loaded,
  SSSS_welcome_loaded,
  SSSS_reg_welcome_loaded,
  SSSS_serve_parse_errors,
  SSSS_cfg,
  SSSS_global,
  SSSS_lang_a,
  SSSS_langs,
  SSSS_loc_cs_map,
  SSSS_cs_loc_map,
  SSSS_lang_opts,
  SSSS_lang_flags,
  SSSS_aprob_u,
  SSSS_aprob_a,
  SSSS_aprobs,
  SSSS_aprob_flags,
  SSSS_prob_a,
  SSSS_probs,
  SSSS_prob_flags,
  SSSS_atester_total,
  SSSS_atesters,
  SSSS_tester_total,
  SSSS_testers,
  SSSS_show_global_1,
  SSSS_show_global_2,
  SSSS_show_global_3,
  SSSS_show_global_4,
  SSSS_show_global_5,
  SSSS_show_global_6,
  SSSS_show_global_7,
  SSSS_enable_stand2,
  SSSS_enable_plog,
  SSSS_enable_extra_col,
  SSSS_disable_compilation_server,
  SSSS_cs_langs_loaded,
  SSSS_cs_lang_total,
  SSSS_cs_cfg,
  SSSS_cs_langs,
  SSSS_cs_lang_names,
  SSSS_contest_start_cmd_text,
  SSSS_stand_header_text,
  SSSS_stand_footer_text,
  SSSS_stand2_header_text,
  SSSS_stand2_footer_text,
  SSSS_plog_header_text,
  SSSS_plog_footer_text,
  SSSS_var_header_text,
  SSSS_var_footer_text,
  SSSS_compile_home_dir,

  SSSS_LAST_FIELD,
};

struct sid_state;

int ss_sid_state_get_type(int tag);
size_t ss_sid_state_get_size(int tag);
const char *ss_sid_state_get_name(int tag);
const void *ss_sid_state_get_ptr(const struct sid_state *ptr, int tag);
void *ss_sid_state_get_ptr_nc(struct sid_state *ptr, int tag);
int ss_sid_state_lookup_field(const char *name);

#endif
