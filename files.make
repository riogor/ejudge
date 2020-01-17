# -*- Makefile -*-

# Copyright (C) 2002-2020 Alexander Chernov <cher@ejudge.ru> */

# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2 of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.

USERLIST_CLNT_CFILES=\
 userlist_clnt/admin_process.c\
 userlist_clnt/bytes_available.c\
 userlist_clnt/bin_data.c\
 userlist_clnt/change_registration.c\
 userlist_clnt/close.c\
 userlist_clnt/cnts_passwd_op.c\
 userlist_clnt/control.c\
 userlist_clnt/copy_user_info.c\
 userlist_clnt/create_cookie.c\
 userlist_clnt/create_member.c\
 userlist_clnt/create_user.c\
 userlist_clnt/create_user_2.c\
 userlist_clnt/delete_cookie.c\
 userlist_clnt/delete_field.c\
 userlist_clnt/delete_info.c\
 userlist_clnt/do_pass_fd.c\
 userlist_clnt/dump_database.c\
 userlist_clnt/edit_field.c\
 userlist_clnt/edit_field_seq.c\
 userlist_clnt/generate_team_passwd.c\
 userlist_clnt/get_contests.c\
 userlist_clnt/get_cookie.c\
 userlist_clnt/get_count.c\
 userlist_clnt/get_database.c\
 userlist_clnt/get_fd.c\
 userlist_clnt/get_info.c\
 userlist_clnt/get_param.c\
 userlist_clnt/get_prev_user_id.c\
 userlist_clnt/get_uid_by_pid.c\
 userlist_clnt/get_uid_by_pid_2.c\
 userlist_clnt/get_xml_by_text.c\
 userlist_clnt/import_csv_users.c\
 userlist_clnt/list_all_users.c\
 userlist_clnt/list_users.c\
 userlist_clnt/list_users_2.c\
 userlist_clnt/login.c\
 userlist_clnt/logout.c\
 userlist_clnt/lookup_cookie.c\
 userlist_clnt/lookup_user.c\
 userlist_clnt/lookup_user_id.c\
 userlist_clnt/map_contest.c\
 userlist_clnt/move_member.c\
 userlist_clnt/notify.c\
 userlist_clnt/open.c\
 userlist_clnt/pass_fd.c\
 userlist_clnt/priv_cookie.c\
 userlist_clnt/priv_cookie_login.c\
 userlist_clnt/priv_login.c\
 userlist_clnt/read_and_notify.c\
 userlist_clnt/read_notification.c\
 userlist_clnt/recover_passwd_2.c\
 userlist_clnt/recv_packet.c\
 userlist_clnt/register_contest.c\
 userlist_clnt/register_new.c\
 userlist_clnt/register_new_2.c\
 userlist_clnt/send_packet.c\
 userlist_clnt/set_cookie.c\
 userlist_clnt/set_info.c\
 userlist_clnt/set_notification_callback.c\
 userlist_clnt/set_passwd.c\
 userlist_clnt/team_cookie.c

SUPER_CLNT_CFILES=\
 super_clnt/control.c\
 super_clnt/create_contest.c\
 super_clnt/do_pass_fd.c\
 super_clnt/http_request.c\
 super_clnt/main_page.c\
 super_clnt/open.c\
 super_clnt/pass_fd.c\
 super_clnt/recv_packet.c\
 super_clnt/send_packet.c\
 super_clnt/set_param.c\
 super_clnt/simple_cmd.c

NEW_SERVER_CLNT_CFILES=\
 new_server_clnt/close.c\
 new_server_clnt/control.c\
 new_server_clnt/http_request.c\
 new_server_clnt/open.c\
 new_server_clnt/pass_fd.c\
 new_server_clnt/recv_packet.c\
 new_server_clnt/send_packet.c

REUSE_CFILES=\
 reuse/reuse_hash.c\
 reuse/reuse_mempage.c\
 reuse/reuse_xalloc.c\
 reuse/reuse_xcalloc.c\
 reuse/reuse_xexpand.c\
 reuse/reuse_xexpand2.c\
 reuse/reuse_xexpand3.c\
 reuse/reuse_xexpand4.c\
 reuse/reuse_xfree.c\
 reuse/reuse_xmalloc.c\
 reuse/reuse_xmemdup.c\
 reuse/reuse_xrealloc.c\
 reuse/reuse_xstrarrayfree.c\
 reuse/reuse_xstrdup.c\
 reuse/reuse_xstrmerge0.c\
 reuse/reuse_xstrmerge1.c\
 reuse/reuse_xstrmerge2.c\
 reuse/reuse_xstrmerge3.c

COMMON_CFILES=\
 lib/allowed_list.c\
 lib/archive_paths.c\
 lib/avatar_plugin.c\
 lib/base32.c\
 lib/base64.c\
 lib/bitset.c\
 lib/bson_utils.c\
 lib/bson_utils_new.c\
 lib/build_support.c\
 lib/cgi.c\
 lib/charsets.c\
 lib/cJSON.c\
 lib/clarlog.c\
 lib/cldb_plugin_file.c\
 lib/clntutil.c\
 lib/common_plugin.c\
 lib/compile_packet_1.c\
 lib/compile_packet_2.c\
 lib/compile_packet_3.c\
 lib/compile_packet_4.c\
 lib/compile_packet_5.c\
 lib/compile_packet_6.c\
 lib/content_plugin.c\
 lib/content_plugin_file.c\
 lib/content_plugin_none.c\
 lib/contests.c\
 lib/contests_2.c\
 lib/contest_tmpl.c\
 lib/copyright.c\
 lib/csv.c\
 lib/dates_config.c\
 lib/diff.c\
 lib/digest_1.c\
 lib/digest_2.c\
 lib/digest_3.c\
 lib/digest_4.c\
 lib/digest_5.c\
 lib/dos2unix_str.c\
 lib/dwarf_parse.c\
 lib/ej_import_packet.c\
 lib/ejudge_cfg.c\
 lib/ej_libzip.c\
 lib/ej_uuid.c\
 lib/errlog.c\
 lib/expat_iface.c\
 lib/external_action.c\
 lib/filehash.c\
 lib/filter_eval.c\
 lib/filter_tree.c\
 lib/html.c\
 lib/html_checkbox.c\
 lib/html_date_select.c\
 lib/html_input_password.c\
 lib/html_input_text.c\
 lib/html_hidden.c\
 lib/html_hyperref.c\
 lib/html_parse.c\
 lib/html_start_form.c\
 lib/http_request.c\
 lib/imagemagick.c\
 lib/l10n.c\
 lib/lang_config.c\
 lib/lang_config_vis.c\
 lib/master_html.c\
 lib/meta_generic.c\
 lib/mime_type.c\
 lib/misctext.c\
 lib/ncheck_packet.c\
 lib/new_server_html.c\
 lib/new_server_html_2.c\
 lib/new_server_html_3.c\
 lib/new_server_html_4.c\
 lib/new_server_html_5.c\
 lib/new_server_proto.c\
 lib/new_server_tables.c\
 lib/ncurses_utils.c\
 lib/nsdb_plugin_files.c\
 lib/nwrun_packet.c\
 lib/opcaps.c\
 lib/opcaps_2.c\
 lib/packet_name.c\
 lib/parsecfg.c\
 lib/parsecfg_2.c\
 lib/pathutl.c\
 lib/plugin.c\
 lib/polygon_packet.c\
 lib/prepare.c\
 lib/prepare_out.c\
 lib/prepare_serve.c\
 lib/prepare_dates.c\
 lib/printing.c\
 lib/problem_common.c\
 lib/problem_config.c\
 lib/problem_xml.c\
 lib/problem_xml_2.c\
 lib/process_stats.c\
 lib/protocol.c\
 lib/random.c\
 lib/reports.c\
 lib/rldb_plugin_file.c\
 lib/run_common.c\
 lib/run_inverse.c\
 lib/runlog.c\
 lib/runlog_import.c\
 lib/runlog_static.c\
 lib/runlog_xml.c\
 lib/run_packet_4.c\
 lib/run_packet_5.c\
 lib/run_packet_6.c\
 lib/send_job_packet.c\
 lib/server_framework.c\
 lib/serve_2.c\
 lib/serve_state.c\
 lib/session.c\
 lib/sformat.c\
 lib/shellcfg_parse.c\
 lib/standings.c\
 lib/statusdb.c\
 lib/status_plugin_file.c\
 lib/stringset.c\
 lib/super_html.c\
 lib/super_html_2.c\
 lib/super_html_3.c\
 lib/super_html_4.c\
 lib/super_html_5.c\
 lib/super_html_6.c\
 lib/super_html_7.c\
 lib/super_html_8.c\
 lib/super_http_request.c\
 lib/super_proto.c\
 lib/super_run_packet.c\
 lib/super_run_status.c\
 lib/super_serve_pi.c\
 lib/sha.c\
 lib/sha256.c\
 lib/sha256utils.c\
 lib/sha512.c\
 lib/sha512utils.c\
 lib/blowfish.c\
 lib/t3m_dir_listener.c\
 lib/t3m_submits.c\
 lib/t3m_zip_packet_class.c\
 lib/t3_packets.c\
 lib/teamdb.c\
 lib/teamdb_2.c\
 lib/team_extra.c\
 lib/team_extra_xml.c\
 testinfo.c\
 lib/testing_report_bson.c\
 lib/testing_report_xml.c\
 lib/tex_dom.c\
 lib/tex_dom_parse.c\
 lib/tex_dom_doc.c\
 lib/tex_dom_render.c\
 lib/tsc.c\
 lib/type_info.c\
 lib/uldb_plugin_xml.c\
 lib/userlist.c\
 lib/userlist_bin.c\
 lib/userlist_check.c\
 lib/userlist_proto.c\
 lib/userlist_xml.c\
 lib/variant_map.c\
 lib/varsubst.c\
 lib/vcs.c\
 lib/watched_file.c\
 lib/xuser_plugin_file.c\
 lib/zip_utils.c\
 xml_utils/attr_bool.c\
 xml_utils/attr_bool_byte.c\
 xml_utils/attr_date.c\
 xml_utils/attr_int.c\
 xml_utils/attr_long_long.c\
 xml_utils/attr_ulong.c\
 xml_utils/elem_ip_mask.c\
 xml_utils/empty_text.c\
 xml_utils/err_attrs.c\
 xml_utils/err_attr_invalid.c\
 xml_utils/err_attr_not_allowed.c\
 xml_utils/err_attr_undefined.c\
 xml_utils/err_attr_undefined_s.c\
 xml_utils/err_elem_empty.c\
 xml_utils/err_elem_invalid.c\
 xml_utils/err_elem_not_allowed.c\
 xml_utils/err_elem_redefined.c\
 xml_utils/err_elem_undefined.c\
 xml_utils/err_elem_undefined_s.c\
 xml_utils/err_get_attr_name.c\
 xml_utils/err_get_elem_name.c\
 xml_utils/err_nested_elems.c\
 xml_utils/err_top_level.c\
 xml_utils/err_top_level_s.c\
 xml_utils/err_variables.c\
 xml_utils/full_cookie.c\
 xml_utils/leaf_elem.c\
 xml_utils/parse_bool.c\
 xml_utils/parse_date.c\
 xml_utils/parse_int.c\
 xml_utils/parse_ip.c\
 xml_utils/parse_ip_mask.c\
 xml_utils/unparse_bool.c\
 xml_utils/unparse_date.c\
 xml_utils/unparse_ip.c\
 xml_utils/unparse_ip_mask.c\
 xml_utils/unparse_run_status.c\
 xml_utils/unparse_text.c\
 xml_utils/xml_err.c\
 xml_utils/xml_err_a.c\
 ${REUSE_CFILES}

PLATFORM_CFILES =\
 $(ARCH)/fileutl.c\
 $(ARCH)/cr_serialize.c\
 $(ARCH)/interrupt.c\
 $(ARCH)/curtime.c\
 $(ARCH)/timestamp.c\
 $(ARCH)/ej_process.c\
 $(ARCH)/cpu.c\
 $(ARCH)/file_perms.c\
 $(ARCH)/full_archive.c\
 $(ARCH)/pollfds.c\
 $(ARCH)/startstop.c\
 $(ARCH)/sock_op_enable_creds.c\
 $(ARCH)/sock_op_get_fds.c\
 $(ARCH)/sock_op_put_fds.c\
 $(ARCH)/sock_op_get_creds.c\
 $(ARCH)/sock_op_put_creds.c\
 $(ARCH)/open_memstream.c\
 $(ARCH)/fmemopen.c\
 $(ARCH)/reuse_attachfile.c\
 $(ARCH)/reuse_checkaccess.c\
 $(ARCH)/reuse_dirname.c\
 $(ARCH)/reuse_errormsg.c\
 $(ARCH)/reuse_errorstring.c\
 $(ARCH)/reuse_findinpath.c\
 $(ARCH)/reuse_exec.c\
 $(ARCH)/reuse_getbasename.c\
 $(ARCH)/reuse_geterrorstring.c\
 $(ARCH)/reuse_getlastname.c\
 $(ARCH)/reuse_getsignalstring.c\
 $(ARCH)/reuse_getsuffix.c\
 $(ARCH)/reuse_getworkingdir.c\
 $(ARCH)/reuse_isabsolutepath.c\
 $(ARCH)/reuse_isfile.c\
 $(ARCH)/reuse_logger.c\
 $(ARCH)/reuse_makedir.c\
 $(ARCH)/reuse_makedirpath.c\
 $(ARCH)/reuse_nodename.c\
 $(ARCH)/reuse_normalize_path.c\
 $(ARCH)/reuse_rdirname.c\
 $(ARCH)/reuse_rgetbasename.c\
 $(ARCH)/reuse_rgetlastname.c\
 $(ARCH)/reuse_rgetsuffix.c\
 $(ARCH)/reuse_rgetworkingdir.c\
 $(ARCH)/reuse_setlock.c\
 $(ARCH)/reuse_sleep.c\
 $(ARCH)/reuse_substsuffix.c\
 $(ARCH)/reuse_tempnam.c\
 $(ARCH)/reuse_logger.c

CFILES=\
 bin/ej-clean-users.c\
 bin/ej-collect-emails.c\
 bin/ej-compile.c\
 bin/ej-convert-clars.c\
 bin/ej-convert-runs.c\
 bin/ejudge-edit-users.c\
 bin/ej-compile-control.c\
 bin/ej-ncheck.c\
 bin/ej-batch.c\
 bin/ej-import-contest.c\
 bin/ej-jobs.c\
 bin/ej-normalize.c\
 bin/ej-page-gen.c\
 bin/ej-parblock.c\
 bin/ej-polygon.c\
 bin/ej-super-run.c\
 bin/ejudge-configure-compilers.c\
 bin/ejudge-control.c\
 bin/ejudge-setup.c\
 bin/ejudge-execute.c\
 bin/ej-fix-db.c\
 bin/ej-jobs-control.c\
 bin/ejudge-jobs-cmd.c\
 make-js-actions.c\
 cgi-bin/new-client.c\
 bin/ej-contests.c\
 bin/ejudge-contests-cmd.c\
 bin/ej-contests-control.c\
 bin/ej-nwrun.c\
 bin/ej-run.c\
 bin/ej-serve.c\
 cgi-bin/serve-control.c\
 bin/ej-slice-userlist.c\
 struct-sizes.c\
 bin/ej-super-server.c\
 bin/ej-super-server-control.c\
 testinfo.c\
 bin/ej-users.c\
 bin/ej-users-control.c\
 cgi-bin/users.c\
 unix/cpu.c\
 win32/cpu.c\
 unix/file_perms.c\
 win32/file_perms.c\
 unix/fileutl.c\
 win32/fileutl.c\
 unix/cr_serialize.c\
 win32/cr_serialize.c\
 unix/ej_process.c\
 win32/ej_process.c\
 unix/interrupt.c\
 win32/interrupt.c\
 unix/curtime.c\
 win32/curtime.c\
 unix/fmemopen.c\
 win32/fmemopen.c\
 unix/open_memstream.c\
 win32/open_memstream.c\
 unix/pollfds.c\
 win32/pollfds.c\
 unix/timestamp.c\
 win32/timestamp.c\
 unix/full_archive.c\
 win32/full_archive.c\
 unix/sock_op_enable_creds.c\
 win32/sock_op_enable_creds.c\
 unix/sock_op_get_creds.c\
 win32/sock_op_get_creds.c\
 unix/sock_op_get_fds.c\
 win32/sock_op_get_fds.c\
 unix/sock_op_put_fds.c\
 win32/sock_op_put_fds.c\
 unix/sock_op_put_creds.c\
 win32/sock_op_put_creds.c\
 unix/startstop.c\
 win32/startstop.c\
 unix/reuse_logger.c\
 win32/reuse_logger.c\
 unix/reuse_attachfile.c\
 win32/reuse_attachfile.c\
 unix/reuse_checkaccess.c\
 win32/reuse_checkaccess.c\
 unix/reuse_dirname.c\
 win32/reuse_dirname.c\
 unix/reuse_errormsg.c\
 win32/reuse_errormsg.c\
 unix/reuse_errorstring.c\
 win32/reuse_errorstring.c\
 unix/reuse_exec.c\
 win32/reuse_exec.c\
 unix/reuse_findinpath.c\
 win32/reuse_findinpath.c\
 unix/reuse_getbasename.c\
 win32/reuse_getbasename.c\
 unix/reuse_geterrorstring.c\
 win32/reuse_geterrorstring.c\
 unix/reuse_getlastname.c\
 win32/reuse_getlastname.c\
 unix/reuse_getsignalstring.c\
 win32/reuse_getsignalstring.c\
 unix/reuse_getsuffix.c\
 win32/reuse_getsuffix.c\
 unix/reuse_getworkingdir.c\
 win32/reuse_getworkingdir.c\
 unix/reuse_isabsolutepath.c\
 win32/reuse_isabsolutepath.c\
 unix/reuse_isfile.c\
 win32/reuse_isfile.c\
 unix/reuse_makedir.c\
 win32/reuse_makedir.c\
 unix/reuse_makedirpath.c\
 win32/reuse_makedirpath.c\
 unix/reuse_nodename.c\
 win32/reuse_nodename.c\
 unix/reuse_normalize_path.c\
 win32/reuse_normalize_path.c\
 unix/reuse_rdirname.c\
 win32/reuse_rdirname.c\
 unix/reuse_rgetbasename.c\
 win32/reuse_rgetbasename.c\
 unix/reuse_rgetlastname.c\
 win32/reuse_rgetlastname.c\
 unix/reuse_rgetsuffix.c\
 win32/reuse_rgetsuffix.c\
 unix/reuse_rgetworkingdir.c\
 win32/reuse_rgetworkingdir.c\
 unix/reuse_setlock.c\
 win32/reuse_setlock.c\
 unix/reuse_sleep.c\
 win32/reuse_sleep.c\
 unix/reuse_substsuffix.c\
 win32/reuse_substsuffix.c\
 unix/reuse_tempnam.c\
 win32/reuse_tempnam.c\
 ${COMMON_CFILES}\
 ${SUPER_CLNT_CFILES}\
 ${USERLIST_CLNT_CFILES}\
 ${NEW_SERVER_CLNT_CFILES}

HFILES=\
 ./include/ejudge/archive_paths.h\
 ./include/ejudge/avatar_plugin.h\
 ./include/ejudge/base32.h\
 ./include/ejudge/base64.h\
 ./include/ejudge/bitset.h\
 ./include/ejudge/bson_utils.h\
 ./include/ejudge/build_support.h\
 ./include/ejudge/cgi.h\
 ./include/ejudge/charsets.h\
 ./include/ejudge/cJSON.h\
 ./include/ejudge/clarlog.h\
 ./include/ejudge/clarlog_state.h\
 ./include/ejudge/cldb_plugin.h\
 ./include/ejudge/clntutil.h\
 ./include/ejudge/common_plugin.h\
 ./include/ejudge/compat.h\
 ./include/ejudge/compile_packet.h\
 ./include/ejudge/compile_packet_priv.h\
 ./include/ejudge/content_plugin.h\
 ./include/ejudge/contests.h\
 ./include/ejudge/copyright.h\
 ./include/ejudge/cpu.h\
 ./include/ejudge/cr_serialize.h\
 ./include/ejudge/csv.h\
 ./include/ejudge/curtime.h\
 ./include/ejudge/dates_config.h\
 ./include/ejudge/diff.h\
 ./include/ejudge/digest_io.h\
 ./include/ejudge/dwarf_parse.h\
 ./include/ejudge/ejudge_cfg.h\
 ./include/ejudge/ejudge_plugin.h\
 ./include/ejudge/ej_byteorder.h\
 ./include/ejudge/ej_import_packet.h\
 ./include/ejudge/ej_limits.h\
 ./include/ejudge/ej_process.h\
 ./include/ejudge/ej_types.h\
 ./include/ejudge/ej_libzip.h\
 ./include/ejudge/ej_uuid.h\
 ./include/ejudge/errlog.h\
 ./include/ejudge/expat_iface.h\
 ./include/ejudge/external_action.h\
 ./include/ejudge/filehash.h\
 ./include/ejudge/file_perms.h\
 ./include/ejudge/fileutl.h\
 ./include/ejudge/filter_eval.h\
 ./include/ejudge/filter_tree.h\
 ./include/ejudge/full_archive.h\
 ./include/ejudge/html.h\
 ./include/ejudge/html_parse.h\
 ./include/ejudge/http_request.h\
 ./include/ejudge/imagemagick.h\
 ./include/ejudge/internal_pages.h\
 ./include/ejudge/interrupt.h\
 ./include/ejudge/iterators.h\
 ./include/ejudge/job_packet.h\
 ./include/ejudge/l10n.h\
 ./include/ejudge/lang_config_vis.h\
 ./include/ejudge/list_ops.h\
 ./include/ejudge/meta_generic.h\
 ./include/ejudge/mime_type.h\
 ./include/ejudge/mischtml.h\
 ./include/ejudge/misctext.h\
 ./include/ejudge/ncheck_packet.h\
 ./include/ejudge/ncurses_utils.h\
 ./include/ejudge/new-server.h\
 ./include/ejudge/nsdb_plugin.h\
 ./include/ejudge/nwrun_packet.h\
 ./include/ejudge/opcaps.h\
 ./include/ejudge/packet_name.h\
 ./include/ejudge/parsecfg.h\
 ./include/ejudge/pathutl.h\
 ./include/ejudge/pollfds.h\
 ./include/ejudge/polygon_packet.h\
 ./include/ejudge/prepare.h\
 ./include/ejudge/prepare_dflt.h\
 ./include/ejudge/prepare_serve.h\
 ./include/ejudge/printing.h\
 ./include/ejudge/problem_common.h\
 ./include/ejudge/problem_config.h\
 ./include/ejudge/problem_xml.h\
 ./include/ejudge/process_stats.h\
 ./include/ejudge/protocol.h\
 ./include/ejudge/random.h\
 ./include/ejudge/rldb_plugin.h\
 ./include/ejudge/run.h\
 ./include/ejudge/runlog.h\
 ./include/ejudge/runlog_state.h\
 ./include/ejudge/run_packet.h\
 ./include/ejudge/run_packet_priv.h\
 ./include/ejudge/server_framework.h\
 ./include/ejudge/serve_state.h\
 ./include/ejudge/sformat.h\
 ./include/ejudge/shellcfg_parse.h\
 ./include/ejudge/sock_op.h\
 ./include/ejudge/startstop.h\
 ./include/ejudge/statusdb.h\
 ./include/ejudge/stringset.h\
 ./include/ejudge/super_clnt.h\
 ./include/ejudge/super_html.h\
 ./include/ejudge/super_proto.h\
 ./include/ejudge/super_run_packet.h\
 ./include/ejudge/super_run_status.h\
 ./include/ejudge/super-serve.h\
 ./include/ejudge/sha.h\
 ./include/ejudge/sha256.h\
 ./include/ejudge/sha256utils.h\
 ./include/ejudge/sha512.h\
 ./include/ejudge/sha512utils.h\
 ./include/ejudge/status_plugin.h\
 ./include/ejudge/blowfish.h\
 ./include/ejudge/t3m_dir_listener.h\
 ./include/ejudge/t3m_packet_class.h\
 ./include/ejudge/t3m_submits.h\
 ./include/ejudge/t3_packets.h\
 ./include/ejudge/teamdb.h\
 ./include/ejudge/teamdb_priv.h\
 ./include/ejudge/team_extra.h\
 ./include/ejudge/testinfo.h\
 ./include/ejudge/testing_report_xml.h\
 ./include/ejudge/tex_dom.h\
 ./include/ejudge/timestamp.h\
 ./include/ejudge/tsc.h\
 ./include/ejudge/type_info.h\
 ./include/ejudge/uldb_plugin.h\
 ./include/ejudge/userlist.h\
 ./include/ejudge/userlist_bin.h\
 ./include/ejudge/userlist_clnt.h\
 ./include/ejudge/variant_map.h\
 ./include/ejudge/varsubst.h\
 ./include/ejudge/vcs.h\
 ./include/ejudge/version.h\
 ./include/ejudge/watched_file.h\
 ./include/ejudge/win32_compat.h\
 unix/unix_fileutl.h\
 userlist_clnt/private.h\
 ./include/ejudge/new_server_clnt.h\
 ./include/ejudge/new_server_proto.h\
 new_server_clnt/new_server_clnt_priv.h\
 ./include/ejudge/xml_utils.h\
 ./include/ejudge/xuser_plugin.h\
 ./include/ejudge/zip_utils.h

OTHERFILES=\
 filter_expr.y\
 filter_scan.lex\
 plugins/userlist-mysql/uldb_mysql.c
