// DO NOT EDIT THIS FILE, AUTOMATICALLY GENERATED
static char* stringlist000[] = { "id1", NULL };
static char* stringlist001[] = { "id1", "qw", NULL };
static char* stringlist002[] = { "baseq2", NULL };
static char* stringlist003[] = { "baseq3", "demoq3", NULL };
static char* stringlist004[] = { "main", "demomain", NULL };
static char* stringlist005[] = { "etmain", NULL };
static char* stringlist006[] = { "BaseEF", NULL };
static char* stringlist007[] = { "main", NULL };
static char* stringlist008[] = { "main", NULL };
static char* stringlist009[] = { "main", NULL };
struct game games[] = {
  {
    type                : Q1_SERVER,
    flags               : GAME_CONNECT | GAME_RECORD | GAME_QUAKE1_PLAYER_COLORS | GAME_QUAKE1_SKIN,
    name                : "Quake",
    default_port        : 26000,
    id                  : "QS",
    qstat_str           : "QS",
    qstat_option        : "-qs",
    icon                : "q1_xpm",
    parse_player        : poqs_parse_player,
    parse_server        : quake_parse_server,
    config_is_valid     : quake_config_is_valid,
    write_config        : write_quake_variables,
    exec_client         : q1_exec_generic,
    custom_cfgs         : quake_custom_cfgs,
    save_info           : quake_save_info,
    init_maps           : quake_init_maps,
    has_map             : quake_has_map,
    suggest_commands    : "twilight-nq:nq-sgl:nq-glx:nq-sdl:nq-x11",
    pd                  : &q1_private,
    main_mods           : stringlist000,
  },
  {
    type                : QW_SERVER,
    flags               : GAME_CONNECT | GAME_RECORD | GAME_SPECTATE | GAME_RCON
	    | GAME_QUAKE1_PLAYER_COLORS | GAME_QUAKE1_SKIN,
    name                : "QuakeWorld",
    default_port        : 27500,
    default_master_port : 27000,
    id                  : "QWS",
    qstat_str           : "QWS",
    qstat_option        : "-qws",
    qstat_master_option : "-qwm",
    icon                : "q_xpm",
    parse_player        : qw_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : qw_analyze_serverinfo,
    config_is_valid     : quake_config_is_valid,
    write_config        : write_quake_variables,
    exec_client         : qw_exec,
    custom_cfgs         : quake_custom_cfgs,
    save_info           : quake_save_info,
    init_maps           : quake_init_maps,
    has_map             : quake_has_map,
    suggest_commands    : "twilight-qw:qw-client-sgl:qw-client-glx:qw-client-sdl:qw-client-x11",
    pd                  : &qw_private,
    main_mods           : stringlist001,
  },
  {
    type                : Q2_SERVER,
    flags               : GAME_CONNECT | GAME_RECORD | GAME_SPECTATE | GAME_PASSWORD | GAME_RCON,
    name                : "Quake2",
    default_port        : 27910,
    default_master_port : 27900,
    id                  : "Q2S",
    qstat_str           : "Q2S",
    qstat_option        : "-q2s",
    qstat_master_option : "-q2m",
    icon                : "q2_xpm",
    parse_player        : q2_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q2_analyze_serverinfo,
    config_is_valid     : quake_config_is_valid,
    write_config        : write_quake_variables,
    exec_client         : q2_exec,
    custom_cfgs         : quake_custom_cfgs,
    save_info           : quake_save_info,
    init_maps           : quake_init_maps,
    has_map             : quake_has_map,
    arch_identifier     : "version",
    identify_cpu        : identify_cpu,
    identify_os         : identify_os,
    suggest_commands    : "quake2",
    pd                  : &q2_private,
    main_mods           : stringlist002,
  },
  {
    type                : Q3_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD | GAME_RCON | GAME_QUAKE3_MASTERPROTOCOL,
    name                : "Quake3: Arena",
    default_port        : 27960,
    default_master_port : 27950,
    id                  : "Q3S",
    qstat_str           : "Q3S",
    qstat_option        : "-q3s",
    qstat_master_option : "-q3m",
    icon                : "q3_xpm",
    parse_player        : q3_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q3_analyze_serverinfo,
    config_is_valid     : quake3_config_is_valid,
    exec_client         : q3_exec,
    custom_cfgs         : quake_custom_cfgs,
    save_info           : quake_save_info,
    init_maps           : q3_init_maps,
    has_map             : quake_has_map,
    get_mapshot         : q3_get_mapshot,
    arch_identifier     : "version",
    identify_cpu        : identify_cpu,
    identify_os         : identify_os,
    suggest_commands    : "q3:quake3",
    default_home        : "~/.q3a",
    pd                  : &q3_private,
    main_mods           : stringlist003,
  },
  {
    type                : WO_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD | GAME_RCON | GAME_QUAKE3_MASTERPROTOCOL,
    name                : "Wolfenstein",
    default_port        : 27960,
    default_master_port : 27950,
    id                  : "WOS",
    qstat_str           : "RWS",
    qstat_option        : "-rws",
    qstat_master_option : "-rwm",
    icon                : "wo_xpm",
    parse_player        : q3_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q3_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q3_exec,
    custom_cfgs         : quake_custom_cfgs,
    save_info           : quake_save_info,
    init_maps           : q3_init_maps,
    has_map             : quake_has_map,
    get_mapshot         : q3_get_mapshot,
    arch_identifier     : "version",
    identify_cpu        : identify_cpu,
    identify_os         : identify_os,
    suggest_commands    : "wolf",
    default_home        : "~/.wolf",
    pd                  : &wolf_private,
    main_mods           : stringlist004,
  },
  {
    type                : WOET_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD | GAME_RCON | GAME_QUAKE3_MASTERPROTOCOL,
    name                : "Enemy Territory",
    default_port        : 27960,
    default_master_port : 27950,
    id                  : "WOETS",
    qstat_str           : "WOETS",
    qstat_option        : "-woets",
    qstat_master_option : "-woetm",
    icon                : "et_xpm",
    parse_player        : q3_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q3_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q3_exec,
    custom_cfgs         : quake_custom_cfgs,
    save_info           : quake_save_info,
    init_maps           : q3_init_maps,
    has_map             : quake_has_map,
    get_mapshot         : q3_get_mapshot,
    arch_identifier     : "version",
    identify_cpu        : identify_cpu,
    identify_os         : identify_os,
    suggest_commands    : "et",
    default_home        : "~/.etwolf",
    pd                  : &wolfet_private,
    main_mods           : stringlist005,
  },
  {
    type                : EF_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD | GAME_RCON | GAME_QUAKE3_MASTERPROTOCOL,
    name                : "Voyager Elite Force",
    default_port        : 27960,
    default_master_port : 27950,
    id                  : "EFS",
    qstat_str           : "Q3S",
    qstat_option        : "-q3s",
    qstat_master_option : "-efm",
    icon                : "ef_xpm",
    parse_player        : q3_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q3_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q3_exec,
    custom_cfgs         : quake_custom_cfgs,
    save_info           : quake_save_info,
    arch_identifier     : "version",
    identify_cpu        : identify_cpu,
    identify_os         : identify_os,
    main_mods           : stringlist006,
  },
  {
    type                : H2_SERVER,
    flags               : GAME_CONNECT | GAME_QUAKE1_PLAYER_COLORS,
    name                : "Hexen2",
    default_port        : 26900,
    id                  : "H2S",
    qstat_str           : "H2S",
    qstat_option        : "-h2s",
    icon                : "hex_xpm",
    parse_player        : poqs_parse_player,
    parse_server        : quake_parse_server,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q1_exec_generic,
    save_info           : quake_save_info,
  },
  {
    type                : HW_SERVER,
    flags               : GAME_CONNECT | GAME_QUAKE1_PLAYER_COLORS | GAME_RCON,
    name                : "HexenWorld",
    default_port        : 26950,
    id                  : "HWS",
    qstat_str           : "HWS",
    qstat_option        : "-hws",
    icon                : "hw_xpm",
    parse_player        : qw_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : qw_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q1_exec_generic,
    save_info           : quake_save_info,
  },
  {
    type                : SN_SERVER,
    flags               : GAME_CONNECT | GAME_RCON,
    name                : "Sin",
    default_port        : 22450,
    id                  : "SNS",
    qstat_str           : "SNS",
    qstat_option        : "-sns",
    icon                : "sn_xpm",
    parse_player        : q2_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q2_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q2_exec_generic,
    save_info           : quake_save_info,
  },
  {
    type                : HL_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD | GAME_RCON,
    name                : "Half-Life",
    default_port        : 27015,
    default_master_port : 27010,
    id                  : "HLS",
    qstat_str           : "HLS",
    qstat_option        : "-hls",
    qstat_master_option : "-hlm",
    icon                : "hl_xpm",
    parse_player        : hl_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : hl_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : hl_exec,
    save_info           : quake_save_info,
    init_maps           : quake_init_maps,
    has_map             : quake_has_map,
    arch_identifier     : "sv_os",
    identify_os         : identify_os,
    pd                  : &hl_private,
  },
  {
    type                : KP_SERVER,
    flags               : GAME_CONNECT | GAME_RCON,
    name                : "Kingpin",
    default_port        : 31510,
    id                  : "Q2S:KP",
    qstat_str           : "Q2S",
    qstat_option        : "-q2s",
    icon                : "kp_xpm",
    parse_player        : q2_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q2_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q2_exec_generic,
    save_info           : quake_save_info,
    arch_identifier     : "version",
    identify_cpu        : identify_cpu,
    identify_os         : identify_os,
  },
  {
    type                : SFS_SERVER,
    flags               : GAME_CONNECT | GAME_RCON,
    name                : "Soldier of Fortune",
    default_port        : 28910,
    id                  : "SFS",
    qstat_str           : "SFS",
    qstat_option        : "-sfs",
    icon                : "sfs_xpm",
    parse_player        : q2_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q2_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q2_exec_generic,
    save_info           : quake_save_info,
    suggest_commands    : "sof",
  },
  {
    type                : SOF2S_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD | GAME_RCON | GAME_QUAKE3_MASTERPROTOCOL,
    name                : "Soldier of Fortune 2",
    default_port        : 20100,
    default_master_port : 20110,
    id                  : "SOF2S",
    qstat_str           : "Q3S",
    qstat_option        : "-q3s",
    qstat_master_option : "-q3m",
    icon                : "sof2s_xpm",
    parse_player        : q3_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q3_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q3_exec,
    custom_cfgs         : quake_custom_cfgs,
    save_info           : quake_save_info,
    arch_identifier     : "version",
    identify_cpu        : identify_cpu,
    identify_os         : identify_os,
    main_mods           : stringlist007,
  },
  {
    type                : T2_SERVER,
    flags               : GAME_CONNECT | GAME_RCON,
    name                : "Tribes 2",
    default_port        : 28000,
    default_master_port : 28000,
    id                  : "T2S",
    qstat_str           : "T2S",
    qstat_option        : "-t2s",
    qstat_master_option : "-t2m",
    icon                : "t2_xpm",
    parse_player        : t2_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : t2_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : t2_exec,
    save_info           : quake_save_info,
    arch_identifier     : "linux",
    identify_os         : t2_identify_os,
    suggest_commands    : "tribes2",
  },
  {
    type                : HR_SERVER,
    flags               : GAME_CONNECT | GAME_RCON,
    name                : "Heretic2",
    default_port        : 28910,
    id                  : "Q2S:HR",
    qstat_str           : "Q2S",
    qstat_option        : "-q2s",
    icon                : "hr2_xpm",
    parse_player        : q2_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q2_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q2_exec_generic,
    save_info           : quake_save_info,
  },
  {
    type                : UN_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD,
    name                : "Unreal / UT",
    default_port        : 7777,
    id                  : "UNS",
    qstat_str           : "UNS",
    qstat_option        : "-uns",
    icon                : "un_xpm",
    parse_player        : un_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : un_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : ut_exec,
    save_info           : quake_save_info,
    init_maps           : unreal_init_maps,
    has_map             : unreal_has_map,
    suggest_commands    : "ut",
    pd                  : &ut_private,
  },
  {
    type                : UT2_SERVER,
    flags               : GAME_CONNECT | GAME_SPECTATE | GAME_PASSWORD | GAME_LAUNCH_HOSTPORT,
    name                : "UT 2003",
    default_port        : 7777,
    id                  : "UT2S",
    qstat_str           : "UT2S",
    qstat_option        : "-ut2s",
    icon                : "ut2_xpm",
    parse_player        : un_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : un_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : ut_exec,
    save_info           : quake_save_info,
    init_maps           : unreal_init_maps,
    has_map             : unreal_has_map,
    suggest_commands    : "ut2003:ut2003_demo",
    pd                  : &ut2_private,
  },
  {
    type                : UT2004_SERVER,
    flags               : GAME_CONNECT | GAME_SPECTATE | GAME_PASSWORD | GAME_LAUNCH_HOSTPORT,
    name                : "UT 2004",
    default_port        : 7777,
    id                  : "UT2004S",
    qstat_str           : "UT2S",
    qstat_option        : "-ut2s",
    icon                : "ut2004_xpm",
    parse_player        : un_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : un_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : ut_exec,
    save_info           : quake_save_info,
    init_maps           : unreal_init_maps,
    has_map             : unreal_has_map,
    suggest_commands    : "ut2004:ut2004demo",
    pd                  : &ut2004_private,
  },
  {
    type                : RUNE_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD,
    name                : "Rune",
    default_port        : 7777,
    id                  : "RUNESRV",
    qstat_str           : "UNS",
    qstat_option        : "-uns",
    icon                : "rune_xpm",
    parse_player        : un_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : un_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : ut_exec,
    save_info           : quake_save_info,
    init_maps           : unreal_init_maps,
    has_map             : unreal_has_map,
    suggest_commands    : "rune",
    pd                  : &rune_private,
  },
  {
    type                : POSTAL2_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD,
    name                : "Postal 2",
    default_port        : 7777,
    id                  : "POSTAL2",
    qstat_str           : "UNS",
    qstat_option        : "-uns",
    icon                : "postal2_xpm",
    parse_player        : un_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : un_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : ut_exec,
    save_info           : quake_save_info,
    init_maps           : unreal_init_maps,
    has_map             : unreal_has_map,
    suggest_commands    : "postal2mp:postal2mpdemo",
    pd                  : &postal2_private,
  },
  {
    type                : AAO_SERVER,
    flags               : GAME_CONNECT | GAME_SPECTATE | GAME_PASSWORD | GAME_LAUNCH_HOSTPORT,
    name                : "America's Army",
    default_port        : 1716,
    id                  : "AMS",
    qstat_str           : "AMS",
    qstat_option        : "-ams",
    icon                : "aao_xpm",
    parse_player        : un_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : un_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : ut_exec,
    save_info           : quake_save_info,
    init_maps           : unreal_init_maps,
    has_map             : unreal_has_map,
    suggest_commands    : "armyops",
    pd                  : &aao_private,
  },
  {
    type                : DESCENT3_SERVER,
    flags               : GAME_CONNECT,
    name                : "Descent3",
    default_port        : 2092,
    default_master_port : 3445,
    id                  : "D3P",
    qstat_str           : "D3P",
    qstat_option        : "-d3p",
    qstat_master_option : "-d3m",
    icon                : "descent3_xpm",
    parse_player        : descent3_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : descent3_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : exec_generic,
    save_info           : quake_save_info,
    suggest_commands    : "descent3",
  },
  {
    type                : SSAM_SERVER,
    flags               : GAME_CONNECT,
    name                : "Serious Sam",
    default_port        : 25600,
    id                  : "SMS",
    qstat_str           : "SMS",
    qstat_option        : "-sms",
    icon                : "ssam_xpm",
    parse_player        : un_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : un_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : ssam_exec,
    save_info           : quake_save_info,
    suggest_commands    : "ssamtfe",
  },
  {
    type                : SSAMSE_SERVER,
    flags               : GAME_CONNECT,
    name                : "Serious Sam TSE",
    default_port        : 25600,
    id                  : "SMSSE",
    qstat_str           : "SMS",
    qstat_option        : "-sms",
    icon                : "ssam_xpm",
    parse_player        : un_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : un_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : ssam_exec,
    save_info           : quake_save_info,
    suggest_commands    : "ssamtse",
  },
  {
    type                : MOHAA_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD | GAME_RCON | GAME_QUAKE3_MASTERPROTOCOL,
    name                : "Medal of Honor: Allied Assault",
    default_port        : 12204,
    default_master_port : 27950,
    id                  : "MHS",
    qstat_str           : "MHS",
    qstat_option        : "-mhs",
    qstat_master_option : "-q3m",
    icon                : "mohaa_xpm",
    parse_player        : q3_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q3_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q3_exec,
    custom_cfgs         : quake_custom_cfgs,
    save_info           : quake_save_info,
    init_maps           : q3_init_maps,
    has_map             : quake_has_map,
    get_mapshot         : q3_get_mapshot,
    arch_identifier     : "version",
    identify_cpu        : identify_cpu,
    identify_os         : identify_os,
    suggest_commands    : "mohaa",
    default_home        : "~/.mohaa",
    pd                  : &mohaa_private,
    main_mods           : stringlist008,
  },
  {
    type                : COD_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD | GAME_RCON | GAME_QUAKE3_MASTERPROTOCOL,
    name                : "Call of Duty",
    default_port        : 28960,
    default_master_port : 20510,
    id                  : "CODS",
    qstat_str           : "CODS",
    qstat_option        : "-cods",
    qstat_master_option : "-codm",
    icon                : "cod_xpm",
    parse_player        : q3_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q3_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q3_exec,
    custom_cfgs         : quake_custom_cfgs,
    save_info           : quake_save_info,
    init_maps           : q3_init_maps,
    has_map             : quake_has_map,
    get_mapshot         : q3_get_mapshot,
    identify_cpu        : identify_cpu,
    identify_os         : identify_os,
    suggest_commands    : "codmp",
    pd                  : &cod_private,
    main_mods           : stringlist009,
  },
  {
    type                : SAS_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD | GAME_ADMIN,
    name                : "Savage",
    default_port        : 11235,
    id                  : "SAS",
    qstat_str           : "SAS",
    qstat_option        : "-sas",
    icon                : "savage_xpm",
    parse_player        : savage_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : savage_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : savage_exec,
    save_info           : quake_save_info,
    suggest_commands    : "savage",
  },
  {
    type                : BF1942_SERVER,
    flags               : GAME_CONNECT,
    name                : "Battlefield 1942",
    default_port        : 14567,
    id                  : "BF1942",
    qstat_str           : "EYE",
    qstat_option        : "-eye",
    icon                : "bf1942_xpm",
    parse_player        : un_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : bf1942_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : bf1942_exec,
    save_info           : quake_save_info,
  },
  {
    type                : GPS_SERVER,
    flags               : GAME_CONNECT,
    name                : "Generic Gamespy",
    default_port        : 27888,
    id                  : "GPS",
    qstat_str           : "GPS",
    qstat_option        : "-gps",
    icon                : "gamespy3d_xpm",
    parse_player        : un_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : un_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : gamespy_exec,
    save_info           : quake_save_info,
  },
  {
    type                : UNKNOWN_SERVER,
    name                : "unknown",
    parse_server        : quake_parse_server,
    config_is_valid     : config_is_valid_generic,
    exec_client         : exec_generic,
    save_info           : quake_save_info,
  },
};
