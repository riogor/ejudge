const unsigned char * const ns_symbolic_action_table[NEW_SRV_ACTION_LAST] =
{
  [0] = "0",
  [NEW_SRV_ACTION_LOGIN_PAGE] = "login-page",
  [NEW_SRV_ACTION_MAIN_PAGE] = "main-page",
  [NEW_SRV_ACTION_COOKIE_LOGIN] = "cookie-login",
  [NEW_SRV_ACTION_VIEW_USERS] = "view-users",
  [NEW_SRV_ACTION_VIEW_ONLINE_USERS] = "view-online-users",
  [NEW_SRV_ACTION_USERS_REMOVE_REGISTRATIONS] = "users-remove-registrations",
  [NEW_SRV_ACTION_USERS_SET_PENDING] = "users-set-pending",
  [NEW_SRV_ACTION_USERS_SET_OK] = "users-set-ok",
  [NEW_SRV_ACTION_USERS_SET_REJECTED] = "users-set-rejected",
  [NEW_SRV_ACTION_USERS_SET_INVISIBLE] = "users-set-invisible",
  [NEW_SRV_ACTION_USERS_CLEAR_INVISIBLE] = "users-clear-invisible",
  [NEW_SRV_ACTION_USERS_SET_BANNED] = "users-set-banned",
  [NEW_SRV_ACTION_USERS_CLEAR_BANNED] = "users-clear-banned",
  [NEW_SRV_ACTION_USERS_SET_LOCKED] = "users-set-locked",
  [NEW_SRV_ACTION_USERS_CLEAR_LOCKED] = "users-clear-locked",
  [NEW_SRV_ACTION_USERS_SET_INCOMPLETE] = "users-set-incomplete",
  [NEW_SRV_ACTION_USERS_CLEAR_INCOMPLETE] = "users-clear-incomplete",
  [NEW_SRV_ACTION_USERS_SET_DISQUALIFIED] = "users-set-disqualified",
  [NEW_SRV_ACTION_USERS_CLEAR_DISQUALIFIED] = "users-clear-disqualified",
  [NEW_SRV_ACTION_USERS_ADD_BY_LOGIN] = "users-add-by-login",
  [NEW_SRV_ACTION_USERS_ADD_BY_USER_ID] = "users-add-by-user-id",
  [NEW_SRV_ACTION_PRIV_USERS_VIEW] = "priv-users-view",
  [NEW_SRV_ACTION_PRIV_USERS_REMOVE] = "priv-users-remove",
  [NEW_SRV_ACTION_PRIV_USERS_ADD_OBSERVER] = "priv-users-add-observer",
  [NEW_SRV_ACTION_PRIV_USERS_DEL_OBSERVER] = "priv-users-del-observer",
  [NEW_SRV_ACTION_PRIV_USERS_ADD_EXAMINER] = "priv-users-add-examiner",
  [NEW_SRV_ACTION_PRIV_USERS_DEL_EXAMINER] = "priv-users-del-examiner",
  [NEW_SRV_ACTION_PRIV_USERS_ADD_CHIEF_EXAMINER] = "priv-users-add-chief-examiner",
  [NEW_SRV_ACTION_PRIV_USERS_DEL_CHIEF_EXAMINER] = "priv-users-del-chief-examiner",
  [NEW_SRV_ACTION_PRIV_USERS_ADD_COORDINATOR] = "priv-users-add-coordinator",
  [NEW_SRV_ACTION_PRIV_USERS_DEL_COORDINATOR] = "priv-users-del-coordinator",
  [NEW_SRV_ACTION_PRIV_USERS_ADD_BY_LOGIN] = "priv-users-add-by-login",
  [NEW_SRV_ACTION_PRIV_USERS_ADD_BY_USER_ID] = "priv-users-add-by-user-id",
  [NEW_SRV_ACTION_CHANGE_LANGUAGE] = "change-language",
  [NEW_SRV_ACTION_CHANGE_PASSWORD] = "change-password",
  [NEW_SRV_ACTION_VIEW_SOURCE] = "view-source",
  [NEW_SRV_ACTION_VIEW_REPORT] = "view-report",
  [NEW_SRV_ACTION_PRINT_RUN] = "print-run",
  [NEW_SRV_ACTION_VIEW_CLAR] = "view-clar",
  [NEW_SRV_ACTION_SUBMIT_RUN] = "submit-run",
  [NEW_SRV_ACTION_SUBMIT_CLAR] = "submit-clar",
  [NEW_SRV_ACTION_START_CONTEST] = "start-contest",
  [NEW_SRV_ACTION_STOP_CONTEST] = "stop-contest",
  [NEW_SRV_ACTION_CONTINUE_CONTEST] = "continue-contest",
  [NEW_SRV_ACTION_SCHEDULE] = "schedule",
  [NEW_SRV_ACTION_CHANGE_DURATION] = "change-duration",
  [NEW_SRV_ACTION_UPDATE_STANDINGS_1] = "update-standings-1",
  [NEW_SRV_ACTION_RESET_1] = "reset-1",
  [NEW_SRV_ACTION_SUSPEND] = "suspend",
  [NEW_SRV_ACTION_RESUME] = "resume",
  [NEW_SRV_ACTION_TEST_SUSPEND] = "test-suspend",
  [NEW_SRV_ACTION_TEST_RESUME] = "test-resume",
  [NEW_SRV_ACTION_PRINT_SUSPEND] = "print-suspend",
  [NEW_SRV_ACTION_PRINT_RESUME] = "print-resume",
  [NEW_SRV_ACTION_SET_JUDGING_MODE] = "set-judging-mode",
  [NEW_SRV_ACTION_SET_ACCEPTING_MODE] = "set-accepting-mode",
  [NEW_SRV_ACTION_SET_TESTING_FINISHED_FLAG] = "set-testing-finished-flag",
  [NEW_SRV_ACTION_CLEAR_TESTING_FINISHED_FLAG] = "clear-testing-finished-flag",
  [NEW_SRV_ACTION_GENERATE_PASSWORDS_1] = "generate-passwords-1",
  [NEW_SRV_ACTION_CLEAR_PASSWORDS_1] = "clear-passwords-1",
  [NEW_SRV_ACTION_GENERATE_REG_PASSWORDS_1] = "generate-reg-passwords-1",
  [NEW_SRV_ACTION_RELOAD_SERVER] = "reload-server",
  [NEW_SRV_ACTION_RELOAD_SERVER_ALL] = "reload-server-all",
  [NEW_SRV_ACTION_PRIV_SUBMIT_CLAR] = "priv-submit-clar",
  [NEW_SRV_ACTION_PRIV_SUBMIT_RUN_COMMENT] = "priv-submit-run-comment",
  [NEW_SRV_ACTION_RESET_FILTER] = "reset-filter",
  [NEW_SRV_ACTION_CLEAR_RUN] = "clear-run",
  [NEW_SRV_ACTION_CHANGE_STATUS] = "change-status",
  [NEW_SRV_ACTION_REJUDGE_ALL_1] = "rejudge-all-1",
  [NEW_SRV_ACTION_REJUDGE_SUSPENDED_1] = "rejudge-suspended-1",
  [NEW_SRV_ACTION_REJUDGE_DISPLAYED_1] = "rejudge-displayed-1",
  [NEW_SRV_ACTION_FULL_REJUDGE_DISPLAYED_1] = "full-rejudge-displayed-1",
  [NEW_SRV_ACTION_SQUEEZE_RUNS] = "squeeze-runs",
  [NEW_SRV_ACTION_RESET_CLAR_FILTER] = "reset-clar-filter",
  [NEW_SRV_ACTION_LOGOUT] = "logout",
  [NEW_SRV_ACTION_CHANGE_RUN_USER_ID] = "change-run-user-id",
  [NEW_SRV_ACTION_CHANGE_RUN_USER_LOGIN] = "change-run-user-login",
  [NEW_SRV_ACTION_CHANGE_RUN_PROB_ID] = "change-run-prob-id",
  [NEW_SRV_ACTION_CHANGE_RUN_VARIANT] = "change-run-variant",
  [NEW_SRV_ACTION_CHANGE_RUN_LANG_ID] = "change-run-lang-id",
  [NEW_SRV_ACTION_CHANGE_RUN_IS_IMPORTED] = "change-run-is-imported",
  [NEW_SRV_ACTION_CHANGE_RUN_IS_HIDDEN] = "change-run-is-hidden",
  [NEW_SRV_ACTION_CHANGE_RUN_IS_EXAMINABLE] = "change-run-is-examinable",
  [NEW_SRV_ACTION_CHANGE_RUN_IS_READONLY] = "change-run-is-readonly",
  [NEW_SRV_ACTION_CHANGE_RUN_IS_MARKED] = "change-run-is-marked",
  [NEW_SRV_ACTION_CHANGE_RUN_IS_SAVED] = "change-run-is-saved",
  [NEW_SRV_ACTION_CHANGE_RUN_STATUS] = "change-run-status",
  [NEW_SRV_ACTION_CHANGE_RUN_TEST] = "change-run-test",
  [NEW_SRV_ACTION_CHANGE_RUN_SCORE] = "change-run-score",
  [NEW_SRV_ACTION_CHANGE_RUN_SCORE_ADJ] = "change-run-score-adj",
  [NEW_SRV_ACTION_CHANGE_RUN_PAGES] = "change-run-pages",
  [NEW_SRV_ACTION_DOWNLOAD_RUN] = "download-run",
  [NEW_SRV_ACTION_COMPARE_RUNS] = "compare-runs",
  [NEW_SRV_ACTION_UPLOAD_REPORT] = "upload-report",
  [NEW_SRV_ACTION_STANDINGS] = "standings",
  [NEW_SRV_ACTION_REJUDGE_PROBLEM_1] = "rejudge-problem-1",
  [NEW_SRV_ACTION_CLAR_REPLY] = "clar-reply",
  [NEW_SRV_ACTION_CLAR_REPLY_ALL] = "clar-reply-all",
  [NEW_SRV_ACTION_CLAR_REPLY_READ_PROBLEM] = "clar-reply-read-problem",
  [NEW_SRV_ACTION_CLAR_REPLY_NO_COMMENTS] = "clar-reply-no-comments",
  [NEW_SRV_ACTION_CLAR_REPLY_YES] = "clar-reply-yes",
  [NEW_SRV_ACTION_CLAR_REPLY_NO] = "clar-reply-no",
  [NEW_SRV_ACTION_REJUDGE_DISPLAYED_2] = "rejudge-displayed-2",
  [NEW_SRV_ACTION_FULL_REJUDGE_DISPLAYED_2] = "full-rejudge-displayed-2",
  [NEW_SRV_ACTION_REJUDGE_PROBLEM_2] = "rejudge-problem-2",
  [NEW_SRV_ACTION_REJUDGE_ALL_2] = "rejudge-all-2",
  [NEW_SRV_ACTION_REJUDGE_SUSPENDED_2] = "rejudge-suspended-2",
  [NEW_SRV_ACTION_VIEW_TEST_INPUT] = "view-test-input",
  [NEW_SRV_ACTION_VIEW_TEST_ANSWER] = "view-test-answer",
  [NEW_SRV_ACTION_VIEW_TEST_INFO] = "view-test-info",
  [NEW_SRV_ACTION_VIEW_TEST_OUTPUT] = "view-test-output",
  [NEW_SRV_ACTION_VIEW_TEST_ERROR] = "view-test-error",
  [NEW_SRV_ACTION_VIEW_TEST_CHECKER] = "view-test-checker",
  [NEW_SRV_ACTION_VIEW_AUDIT_LOG] = "view-audit-log",
  [NEW_SRV_ACTION_UPDATE_STANDINGS_2] = "update-standings-2",
  [NEW_SRV_ACTION_RESET_2] = "reset-2",
  [NEW_SRV_ACTION_GENERATE_PASSWORDS_2] = "generate-passwords-2",
  [NEW_SRV_ACTION_CLEAR_PASSWORDS_2] = "clear-passwords-2",
  [NEW_SRV_ACTION_GENERATE_REG_PASSWORDS_2] = "generate-reg-passwords-2",
  [NEW_SRV_ACTION_VIEW_CNTS_PWDS] = "view-cnts-pwds",
  [NEW_SRV_ACTION_VIEW_REG_PWDS] = "view-reg-pwds",
  [NEW_SRV_ACTION_TOGGLE_VISIBILITY] = "toggle-visibility",
  [NEW_SRV_ACTION_TOGGLE_BAN] = "toggle-ban",
  [NEW_SRV_ACTION_TOGGLE_LOCK] = "toggle-lock",
  [NEW_SRV_ACTION_TOGGLE_INCOMPLETENESS] = "toggle-incompleteness",
  [NEW_SRV_ACTION_SET_DISQUALIFICATION] = "set-disqualification",
  [NEW_SRV_ACTION_CLEAR_DISQUALIFICATION] = "clear-disqualification",
  [NEW_SRV_ACTION_USER_CHANGE_STATUS] = "user-change-status",
  [NEW_SRV_ACTION_VIEW_USER_INFO] = "view-user-info",
  [NEW_SRV_ACTION_ISSUE_WARNING] = "issue-warning",
  [NEW_SRV_ACTION_NEW_RUN_FORM] = "new-run-form",
  [NEW_SRV_ACTION_NEW_RUN] = "new-run",
  [NEW_SRV_ACTION_VIEW_USER_DUMP] = "view-user-dump",
  [NEW_SRV_ACTION_FORGOT_PASSWORD_1] = "forgot-password-1",
  [NEW_SRV_ACTION_FORGOT_PASSWORD_2] = "forgot-password-2",
  [NEW_SRV_ACTION_FORGOT_PASSWORD_3] = "forgot-password-3",
  [NEW_SRV_ACTION_SUBMIT_APPEAL] = "submit-appeal",
  [NEW_SRV_ACTION_VIEW_PROBLEM_SUMMARY] = "view-problem-summary",
  [NEW_SRV_ACTION_VIEW_PROBLEM_STATEMENTS] = "view-problem-statements",
  [NEW_SRV_ACTION_VIEW_PROBLEM_SUBMIT] = "view-problem-submit",
  [NEW_SRV_ACTION_VIEW_SUBMISSIONS] = "view-submissions",
  [NEW_SRV_ACTION_VIEW_CLAR_SUBMIT] = "view-clar-submit",
  [NEW_SRV_ACTION_VIEW_CLARS] = "view-clars",
  [NEW_SRV_ACTION_VIEW_SETTINGS] = "view-settings",
  [NEW_SRV_ACTION_VIRTUAL_START] = "virtual-start",
  [NEW_SRV_ACTION_VIRTUAL_STOP] = "virtual-stop",
  [NEW_SRV_ACTION_VIRTUAL_RESTART] = "virtual-restart",
  [NEW_SRV_ACTION_VIEW_USER_REPORT] = "view-user-report",
  [NEW_SRV_ACTION_DOWNLOAD_ARCHIVE_1] = "download-archive-1",
  [NEW_SRV_ACTION_DOWNLOAD_ARCHIVE_2] = "download-archive-2",
  [NEW_SRV_ACTION_UPLOAD_RUNLOG_CSV_1] = "upload-runlog-csv-1",
  [NEW_SRV_ACTION_UPLOAD_RUNLOG_CSV_2] = "upload-runlog-csv-2",
  [NEW_SRV_ACTION_VIEW_RUNS_DUMP] = "view-runs-dump",
  [NEW_SRV_ACTION_EXPORT_XML_RUNS] = "export-xml-runs",
  [NEW_SRV_ACTION_WRITE_XML_RUNS] = "write-xml-runs",
  [NEW_SRV_ACTION_WRITE_XML_RUNS_WITH_SRC] = "write-xml-runs-with-src",
  [NEW_SRV_ACTION_UPLOAD_RUNLOG_XML_1] = "upload-runlog-xml-1",
  [NEW_SRV_ACTION_UPLOAD_RUNLOG_XML_2] = "upload-runlog-xml-2",
  [NEW_SRV_ACTION_LOGIN] = "login",
  [NEW_SRV_ACTION_DUMP_PROBLEMS] = "dump-problems",
  [NEW_SRV_ACTION_DUMP_LANGUAGES] = "dump-languages",
  [NEW_SRV_ACTION_SOFT_UPDATE_STANDINGS] = "soft-update-standings",
  [NEW_SRV_ACTION_HAS_TRANSIENT_RUNS] = "has-transient-runs",
  [NEW_SRV_ACTION_DUMP_RUN_STATUS] = "dump-run-status",
  [NEW_SRV_ACTION_DUMP_SOURCE] = "dump-source",
  [NEW_SRV_ACTION_DUMP_CLAR] = "dump-clar",
  [NEW_SRV_ACTION_GET_CONTEST_NAME] = "get-contest-name",
  [NEW_SRV_ACTION_GET_CONTEST_TYPE] = "get-contest-type",
  [NEW_SRV_ACTION_GET_CONTEST_STATUS] = "get-contest-status",
  [NEW_SRV_ACTION_GET_CONTEST_SCHED] = "get-contest-sched",
  [NEW_SRV_ACTION_GET_CONTEST_DURATION] = "get-contest-duration",
  [NEW_SRV_ACTION_GET_CONTEST_DESCRIPTION] = "get-contest-description",
  [NEW_SRV_ACTION_DUMP_MASTER_RUNS] = "dump-master-runs",
  [NEW_SRV_ACTION_DUMP_REPORT] = "dump-report",
  [NEW_SRV_ACTION_FULL_UPLOAD_RUNLOG_XML] = "full-upload-runlog-xml",
  [NEW_SRV_ACTION_JSON_USER_STATE] = "json-user-state",
  [NEW_SRV_ACTION_VIEW_STARTSTOP] = "view-startstop",
  [NEW_SRV_ACTION_CLEAR_DISPLAYED_1] = "clear-displayed-1",
  [NEW_SRV_ACTION_CLEAR_DISPLAYED_2] = "clear-displayed-2",
  [NEW_SRV_ACTION_IGNORE_DISPLAYED_1] = "ignore-displayed-1",
  [NEW_SRV_ACTION_IGNORE_DISPLAYED_2] = "ignore-displayed-2",
  [NEW_SRV_ACTION_DISQUALIFY_DISPLAYED_1] = "disqualify-displayed-1",
  [NEW_SRV_ACTION_DISQUALIFY_DISPLAYED_2] = "disqualify-displayed-2",
  [NEW_SRV_ACTION_TOKENIZE_DISPLAYED_1] = "tokenize-displayed-1",
  [NEW_SRV_ACTION_TOKENIZE_DISPLAYED_2] = "tokenize-displayed-2",
  [NEW_SRV_ACTION_UPDATE_ANSWER] = "update-answer",
  [NEW_SRV_ACTION_UPSOLVING_CONFIG_1] = "upsolving-config-1",
  [NEW_SRV_ACTION_UPSOLVING_CONFIG_2] = "upsolving-config-2",
  [NEW_SRV_ACTION_UPSOLVING_CONFIG_3] = "upsolving-config-3",
  [NEW_SRV_ACTION_UPSOLVING_CONFIG_4] = "upsolving-config-4",
  [NEW_SRV_ACTION_EXAMINERS_PAGE] = "examiners-page",
  [NEW_SRV_ACTION_ASSIGN_CHIEF_EXAMINER] = "assign-chief-examiner",
  [NEW_SRV_ACTION_ASSIGN_EXAMINER] = "assign-examiner",
  [NEW_SRV_ACTION_UNASSIGN_EXAMINER] = "unassign-examiner",
  [NEW_SRV_ACTION_GET_FILE] = "get-file",
  [NEW_SRV_ACTION_PRINT_USER_PROTOCOL] = "print-user-protocol",
  [NEW_SRV_ACTION_PRINT_USER_FULL_PROTOCOL] = "print-user-full-protocol",
  [NEW_SRV_ACTION_PRINT_UFC_PROTOCOL] = "print-ufc-protocol",
  [NEW_SRV_ACTION_FORCE_START_VIRTUAL] = "force-start-virtual",
  [NEW_SRV_ACTION_PRINT_SELECTED_USER_PROTOCOL] = "print-selected-user-protocol",
  [NEW_SRV_ACTION_PRINT_SELECTED_USER_FULL_PROTOCOL] = "print-selected-user-full-protocol",
  [NEW_SRV_ACTION_PRINT_SELECTED_UFC_PROTOCOL] = "print-selected-ufc-protocol",
  [NEW_SRV_ACTION_PRINT_PROBLEM_PROTOCOL] = "print-problem-protocol",
  [NEW_SRV_ACTION_ASSIGN_CYPHERS_1] = "assign-cyphers-1",
  [NEW_SRV_ACTION_ASSIGN_CYPHERS_2] = "assign-cyphers-2",
  [NEW_SRV_ACTION_VIEW_EXAM_INFO] = "view-exam-info",
  [NEW_SRV_ACTION_PRIV_SUBMIT_PAGE] = "priv-submit-page",
  [NEW_SRV_ACTION_USE_TOKEN] = "use-token",
  [NEW_SRV_ACTION_GENERATE_TELEGRAM_TOKEN] = "generate-telegram-token",

  [NEW_SRV_ACTION_REG_CREATE_ACCOUNT_PAGE] = "reg-create-account-page",
  [NEW_SRV_ACTION_REG_CREATE_ACCOUNT] = "reg-create-account",
  [NEW_SRV_ACTION_REG_ACCOUNT_CREATED_PAGE] = "reg-account-created-page",
  [NEW_SRV_ACTION_REG_LOGIN_PAGE] = "reg-login-page",
  [NEW_SRV_ACTION_REG_LOGIN] = "reg-login",
  [NEW_SRV_ACTION_REG_VIEW_GENERAL] = "reg-view-general",
  [NEW_SRV_ACTION_REG_VIEW_CONTESTANTS] = "reg-view-contestants",
  [NEW_SRV_ACTION_REG_VIEW_RESERVES] = "reg-view-reserves",
  [NEW_SRV_ACTION_REG_VIEW_COACHES] = "reg-view-coaches",
  [NEW_SRV_ACTION_REG_VIEW_ADVISORS] = "reg-view-advisors",
  [NEW_SRV_ACTION_REG_VIEW_GUESTS] = "reg-view-guests",
  [NEW_SRV_ACTION_REG_ADD_MEMBER_PAGE] = "reg-add-member-page",
  [NEW_SRV_ACTION_REG_EDIT_GENERAL_PAGE] = "reg-edit-general-page",
  [NEW_SRV_ACTION_REG_EDIT_MEMBER_PAGE] = "reg-edit-member-page",
  [NEW_SRV_ACTION_REG_MOVE_MEMBER] = "reg-move-member",
  [NEW_SRV_ACTION_REG_REMOVE_MEMBER] = "reg-remove-member",
  [NEW_SRV_ACTION_REG_SUBMIT_GENERAL_EDITING] = "reg-submit-general-editing",
  [NEW_SRV_ACTION_REG_CANCEL_GENERAL_EDITING] = "reg-cancel-general-editing",
  [NEW_SRV_ACTION_REG_SUBMIT_MEMBER_EDITING] = "reg-submit-member-editing",
  [NEW_SRV_ACTION_REG_CANCEL_MEMBER_EDITING] = "reg-cancel-member-editing",
  [NEW_SRV_ACTION_REG_REGISTER] = "reg-register",
  [NEW_SRV_ACTION_REG_DATA_EDIT] = "reg-data-edit",
  [NEW_SRV_ACTION_PRIO_FORM] = "prio-form",
  [NEW_SRV_ACTION_SET_PRIORITIES] = "set-priorities",
  [NEW_SRV_ACTION_PRIV_SUBMIT_RUN_COMMENT_AND_IGNORE] = "priv-submit-run-comment-and-ignore",
  [NEW_SRV_ACTION_VIEW_USER_IPS] = "view-user-ips",
  [NEW_SRV_ACTION_VIEW_IP_USERS] = "view-ip-users",
  [NEW_SRV_ACTION_CHANGE_FINISH_TIME] = "change-finish-time",
  [NEW_SRV_ACTION_PRIV_SUBMIT_RUN_COMMENT_AND_OK] = "priv-submit-run-comment-and-ok",
  [NEW_SRV_ACTION_PRIV_SUBMIT_RUN_COMMENT_AND_REJECT] = "priv-submit-run-comment-and-reject",
  [NEW_SRV_ACTION_PRIV_SUBMIT_RUN_COMMENT_AND_SUMMON] = "priv-submit-run-comment-and-summon",
  [NEW_SRV_ACTION_PRIV_SUBMIT_RUN_JUST_IGNORE] = "priv-submit-run-just-ignore",
  [NEW_SRV_ACTION_PRIV_SUBMIT_RUN_JUST_OK] = "priv-submit-run-just-ok",
  [NEW_SRV_ACTION_PRIV_SUBMIT_RUN_JUST_SUMMON] = "priv-submit-run-just-summon",
  [NEW_SRV_ACTION_PRIV_OLD_SET_RUN_REJECTED] = "priv-old-set-run-rejected",
  [NEW_SRV_ACTION_VIEW_TESTING_QUEUE] = "view-testing-queue",
  [NEW_SRV_ACTION_TESTING_DELETE] = "testing-delete",
  [NEW_SRV_ACTION_TESTING_UP] = "testing-up",
  [NEW_SRV_ACTION_TESTING_DOWN] = "testing-down",
  [NEW_SRV_ACTION_TESTING_DELETE_ALL] = "testing-delete-all",
  [NEW_SRV_ACTION_TESTING_UP_ALL] = "testing-up-all",
  [NEW_SRV_ACTION_TESTING_DOWN_ALL] = "testing-down-all",
  [NEW_SRV_ACTION_INVOKER_DELETE] = "invoker-delete",
  [NEW_SRV_ACTION_INVOKER_STOP] = "invoker-stop",
  [NEW_SRV_ACTION_INVOKER_DOWN] = "invoker-down",
  [NEW_SRV_ACTION_MARK_DISPLAYED_2] = "mark-displayed-2",
  [NEW_SRV_ACTION_UNMARK_DISPLAYED_2] = "unmark-displayed-2",
  [NEW_SRV_ACTION_SET_STAND_FILTER] = "set-stand-filter",
  [NEW_SRV_ACTION_RESET_STAND_FILTER] = "reset-stand-filter",
  [NEW_SRV_ACTION_ADMIN_CONTEST_SETTINGS] = "admin-contest-settings",
  [NEW_SRV_ACTION_ADMIN_CHANGE_ONLINE_VIEW_SOURCE] = "admin-change-online-view-source",
  [NEW_SRV_ACTION_ADMIN_CHANGE_ONLINE_VIEW_REPORT] = "admin-change-online-view-report",
  [NEW_SRV_ACTION_ADMIN_CHANGE_ONLINE_VIEW_JUDGE_SCORE] = "admin-change-online-view-judge-score",
  [NEW_SRV_ACTION_ADMIN_CHANGE_ONLINE_FINAL_VISIBILITY] = "admin-change-online-final-visibility",
  [NEW_SRV_ACTION_ADMIN_CHANGE_ONLINE_VALUER_JUDGE_COMMENTS] = "admin-change-online-valuer-judge-comments",
  [NEW_SRV_ACTION_RELOAD_SERVER_2] = "reload-server-2",
  [NEW_SRV_ACTION_CHANGE_RUN_FIELDS] = "change-run-fields",
  [NEW_SRV_ACTION_PRIV_EDIT_CLAR_PAGE] = "priv-edit-clar-page",
  [NEW_SRV_ACTION_PRIV_EDIT_CLAR_ACTION] = "priv-edit-clar-action",
  [NEW_SRV_ACTION_PRIV_EDIT_RUN_PAGE] = "priv-edit-run-page",
  [NEW_SRV_ACTION_PRIV_EDIT_RUN_ACTION] = "priv-edit-run-action",
  [NEW_SRV_ACTION_PING] = "ping",
  [NEW_SRV_ACTION_SUBMIT_RUN_BATCH] = "submit-run-batch",
  [NEW_SRV_ACTION_CONTESTS_PAGE] = "contests-page",
  [NEW_SRV_ACTION_CONTEST_BATCH] = "contest-batch",
  [NEW_SRV_ACTION_RELOAD_STATEMENT] = "reload-statement",
  [NEW_SRV_ACTION_RELOAD_STATEMENT_ALL] = "reload-statement-all",
  [NEW_SRV_ACTION_ADD_REVIEW_COMMENT] = "add-review-comment",
  [NEW_SRV_ACTION_VIEW_USERS_NEW_PAGE] = "view-users-new-page",
  [NEW_SRV_ACTION_VIEW_USERS_NEW_AJAX] = "view-users-new-ajax",
  [NEW_SRV_ACTION_USERS_SET_STATUS] = "users-set-status",
  [NEW_SRV_ACTION_USERS_CHANGE_FLAGS] = "users-change-flags",
  [NEW_SRV_ACTION_UPLOAD_AVATAR] = "upload-avatar",
  [NEW_SRV_ACTION_GET_AVATAR] = "get-avatar",
  [NEW_SRV_ACTION_CROP_AVATAR_PAGE] = "crop-avatar-page",
  [NEW_SRV_ACTION_SAVE_CROPPED_AVATAR_AJAX] = "save-cropped-avatar-ajax",
  [NEW_SRV_ACTION_PRIV_REGENERATE_CONTENT] = "priv-regenerate-content",
  [NEW_SRV_ACTION_RELOAD_CONTEST_PAGES] = "reload-contest-pages",
  [NEW_SRV_ACTION_RELOAD_ALL_CONTEST_PAGES] = "reload-all-contest-pages",
  [NEW_SRV_ACTION_DELETE_AVATAR] = "delete-avatar",
  [NEW_SRV_ACTION_TOGGLE_PRIVILEGED] = "toggle-privileged",
  [NEW_SRV_ACTION_TOGGLE_REG_READONLY] = "toggle-reg-readonly",
  [NEW_SRV_ACTION_USER_CHANGE_STATUS_2] = "user-change-status-2",
  [NEW_SRV_ACTION_CONFIRM_AVATAR] = "confirm-avatar",
  [NEW_SRV_ACTION_LANGUAGE_STATS_PAGE] = "language-stats-page",
  [NEW_SRV_ACTION_USER_CONTESTS_JSON] = "user-contests-json",
  [NEW_SRV_ACTION_LOGIN_JSON] = "login-json",
  [NEW_SRV_ACTION_ENTER_CONTEST_JSON] = "enter-contest-json",
  [NEW_SRV_ACTION_CONTEST_STATUS_JSON] = "contest-status-json",
  [NEW_SRV_ACTION_PROBLEM_STATUS_JSON] = "problem-status-json",
  [NEW_SRV_ACTION_PROBLEM_STATEMENT_JSON] = "problem-statement-json",
  [NEW_SRV_ACTION_LIST_RUNS_JSON] = "list-runs-json",
  [NEW_SRV_ACTION_RUN_STATUS_JSON] = "run-status-json",
  [NEW_SRV_ACTION_RUN_MESSAGES_JSON] = "run-messages-json",
  [NEW_SRV_ACTION_RUN_TEST_JSON] = "run-test-json",
  [NEW_SRV_ACTION_CONTEST_INFO_JSON] = "contest-info-json",
  [NEW_SRV_ACTION_SESSION_INFO_JSON] = "session-info-json",
  [NEW_SRV_ACTION_ENTER_CONTEST] = "enter-contest",
  [NEW_SRV_ACTION_LOCK_FILTER] = "lock-filter",
  [NEW_SRV_ACTION_PROBLEM_STATS_PAGE] = "problem-stats-page",
  [NEW_SRV_ACTION_API_KEYS_PAGE] = "api-keys-page",
  [NEW_SRV_ACTION_CREATE_API_KEY] = "create-api-key",
  [NEW_SRV_ACTION_DELETE_API_KEY] = "delete-api-key",
  [NEW_SRV_ACTION_RAW_AUDIT_LOG] = "raw-audit-log",
};
