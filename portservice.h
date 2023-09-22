#ifndef PORTSERVICE_H
#define PORTSERVICE_H

#include <QString>

QString getPortNumberInfoStatic(quint32 port)
{
    if (port == 1) {
        return "TCP Port Service Multiplexer";
    }
    if (port == 2) { return "Management Utility";}
    if (port == 3) { return "Compression Process";}
    if (port == 5) { return "Remote Job Entry";}
    if (port == 7) { return "Echo";}
    if (port == 9) { return "Discard";}
    if (port == 11) { return "Active Users";}
    if (port == 13) { return "Daytime";}
    if (port == 15) { return "Unassigned [was netstat]";}
    if (port == 17) { return "Quote of the Day";}
    if (port == 18) { return "Message Send Protocol  historic";}
    if (port == 19) { return "Character Generator";}
    if (port == 20) { return "File Transfer [Default Data]";}
    if (port == 21) { return "File Transfer Protocol [Control]";}
    if (port == 22) { return "The Secure Shell  SSH Protocol";}
    if (port == 23) { return "Telnet";}
    if (port == 24) { return "any private mail system";}
    if (port == 25) { return "Simple Mail Transfer";}
    if (port == 27) { return "NSW User System FE";}
    if (port == 29) { return "MSG ICP";}
    if (port == 31) { return "MSG Authentication";}
    if (port == 33) { return "Display Support Protocol";}
    if (port == 35) { return "any private printer server";}
    if (port == 37) { return "Time";}
    if (port == 38) { return "Route Access Protocol";}
    if (port == 39) { return "Resource Location Protocol";}
    if (port == 41) { return "Graphics";}
    if (port == 42) { return "Host Name Server";}
    if (port == 43) { return "Who Is";}
    if (port == 44) { return "MPM FLAGS Protocol";}
    if (port == 45) { return "Message Processing Module [recv]";}
    if (port == 46) { return "MPM [default send]";}
    if (port == 48) { return "Digital Audit Daemon";}
    if (port == 49) { return "Login Host Protocol  TACACS";}
    if (port == 50) { return "Remote Mail Checking Protocol";}
    if (port == 52) { return "XNS Time Protocol";}
    if (port == 53) { return "Domain Name Server";}
    if (port == 54) { return "XNS Clearinghouse";}
    if (port == 55) { return "ISI Graphics Language";}
    if (port == 56) { return "XNS Authentication";}
    if (port == 57) { return "any private terminal access";}
    if (port == 58) { return "XNS Mail";}
    if (port == 59) { return "any private file service";}
    if (port == 62) { return "ACA Services";}
    if (port == 63) { return "whois++";}
    if (port == 64) { return "Communications Integrator  CI";}
    if (port == 65) { return "TACACS-Database Service";}
    if (port == 66) { return "Oracle SQL*NET";}
    if (port == 67) { return "Bootstrap Protocol Server";}
    if (port == 68) { return "Bootstrap Protocol Client";}
    if (port == 69) { return "Trivial File Transfer";}
    if (port == 70) { return "Gopher";}
    if (port == 71) { return "Remote Job Service";}
    if (port == 72) { return "Remote Job Service";}
    if (port == 73) { return "Remote Job Service";}
    if (port == 74) { return "Remote Job Service";}
    if (port == 75) { return "any private dial out service";}
    if (port == 76) { return "Distributed External Object Store";}
    if (port == 77) { return "any private RJE service";}
    if (port == 78) { return "vettcp";}
    if (port == 79) { return "Finger";}
    if (port == 80) { return "World Wide Web HTTP";}
    if (port == 82) { return "XFER Utility";}
    if (port == 83) { return "MIT ML Device";}
    if (port == 84) { return "Common Trace Facility";}
    if (port == 85) { return "MIT ML Device";}
    if (port == 86) { return "Micro Focus Cobol";}
    if (port == 87) { return "any private terminal link";}
    if (port == 88) { return "Kerberos";}
    if (port == 89) { return "SU/MIT Telnet Gateway";}
    if (port == 90) { return "DNSIX Securit Attribute Token Map";}
    if (port == 91) { return "MIT Dover Spooler";}
    if (port == 92) { return "Network Printing Protocol";}
    if (port == 93) { return "Device Control Protocol";}
    if (port == 94) { return "Tivoli Object Dispatcher";}
    if (port == 95) { return "SUPDUP";}
    if (port == 96) { return "DIXIE Protocol Specification";}
    if (port == 97) { return "Swift Remote Virtural File Protocol";}
    if (port == 98) { return "TAC News";}
    if (port == 99) { return "Metagram Relay";}
    if (port == 101) { return "NIC Host Name Server";}
    if (port == 102) { return "ISO-TSAP Class 0";}
    if (port == 103) { return "Genesis Point-to-Point Trans Net";}
    if (port == 104) { return "ACR-NEMA Digital Imag & Comm 300";}
    if (port == 105) { return "CCSO name server protocol / Mailbox Name Nameserver";}
    if (port == 106) { return "3COM-TSMUX";}
    if (port == 107) { return "Remote Telnet Service";}
    if (port == 108) { return "SNA Gateway Access Server";}
    if (port == 109) { return "Post Office Protocol - Version 2";}
    if (port == 110) { return "Post Office Protocol - Version 3";}
    if (port == 111) { return "SUN Remote Procedure Call";}
    if (port == 112) { return "McIDAS Data Transmission Protocol";}
    if (port == 113) { return "Authentication Service";}
    if (port == 115) { return "Simple File Transfer Protocol";}
    if (port == 116) { return "ANSA REX Notify";}
    if (port == 117) { return "UUCP Path Service";}
    if (port == 118) { return "SQL Services";}
    if (port == 119) { return "Network News Transfer Protocol";}
    if (port == 120) { return "CFDPTKT";}
    if (port == 121) { return "Encore Expedited Remote ProCall";}
    if (port == 122) { return "SMAKYNET";}
    if (port == 123) { return "Network Time Protocol";}
    if (port == 124) { return "ANSA REX Trader";}
    if (port == 125) { return "Locus PC-Interface Net Map Ser";}
    if (port == 126) { return "NXEdit";}
    if (port == 127) { return "Locus PC-Interface Conn Server";}
    if (port == 128) { return "GSS X License Verification";}
    if (port == 129) { return "Password Generator Protocol";}
    if (port == 130) { return "cisco FNATIVE";}
    if (port == 131) { return "cisco TNATIVE";}
    if (port == 132) { return "cisco SYSMAINT";}
    if (port == 133) { return "Statistics Service";}
    if (port == 134) { return "INGRES-NET Service";}
    if (port == 135) { return "DCE endpoint resolution";}
    if (port == 136) { return "PROFILE Naming System";}
    if (port == 137) { return "NETBIOS Name Service";}
    if (port == 138) { return "NETBIOS Datagram Service";}
    if (port == 139) { return "NETBIOS Session Service";}
    if (port == 140) { return "EMFIS Data Service";}
    if (port == 141) { return "EMFIS Control Service";}
    if (port == 142) { return "Britton-Lee IDM";}
    if (port == 143) { return "Internet Message Access Protocol";}
    if (port == 144) { return "Universal Management Architecture";}
    if (port == 145) { return "UAAC Protocol";}
    if (port == 146) { return "ISO-IP0";}
    if (port == 147) { return "ISO-IP";}
    if (port == 148) { return "Jargon";}
    if (port == 149) { return "AED 512 Emulation Service";}
    if (port == 150) { return "SQL-NET";}
    if (port == 151) { return "HEMS";}
    if (port == 152) { return "Background File Transfer Program";}
    if (port == 153) { return "SGMP";}
    if (port == 154) { return "NETSC";}
    if (port == 155) { return "NETSC";}
    if (port == 156) { return "SQL Service";}
    if (port == 157) { return "KNET/VM Command/Message Protocol";}
    if (port == 158) { return "PCMail Server";}
    if (port == 159) { return "NSS-Routing";}
    if (port == 160) { return "SGMP-TRAPS";}
    if (port == 161) { return "SNMP";}
    if (port == 162) { return "SNMPTRAP";}
    if (port == 163) { return "CMIP/TCP Manager";}
    if (port == 164) { return "CMIP/TCP Agent";}
    if (port == 165) { return "Xerox";}
    if (port == 166) { return "Sirius Systems";}
    if (port == 167) { return "NAMP";}
    if (port == 168) { return "RSVD";}
    if (port == 169) { return "SEND";}
    if (port == 170) { return "Network PostScript";}
    if (port == 171) { return "Network Innovations Multiplex";}
    if (port == 172) { return "Network Innovations CL/1";}
    if (port == 173) { return "Xyplex";}
    if (port == 174) { return "MAILQ";}
    if (port == 175) { return "VMNET";}
    if (port == 176) { return "GENRAD-MUX";}
    if (port == 177) { return "X Display Manager Control Protocol";}
    if (port == 178) { return "NextStep Window Server";}
    if (port == 179) { return "Border Gateway Protocol";}
    if (port == 180) { return "Intergraph";}
    if (port == 181) { return "Unify";}
    if (port == 182) { return "Unisys Audit SITP";}
    if (port == 183) { return "OCBinder";}
    if (port == 184) { return "OCServer";}
    if (port == 185) { return "Remote-KIS";}
    if (port == 186) { return "KIS Protocol";}
    if (port == 187) { return "Application Communication Interface";}
    if (port == 188) { return "Plus Five's MUMPS";}
    if (port == 189) { return "Queued File Transport";}
    if (port == 190) { return "Gateway Access Control Protocol";}
    if (port == 191) { return "Prospero Directory Service";}
    if (port == 192) { return "OSU Network Monitoring System";}
    if (port == 193) { return "Spider Remote Monitoring Protocol";}
    if (port == 194) { return "Internet Relay Chat Protocol";}
    if (port == 195) { return "DNSIX Network Level Module Audit";}
    if (port == 196) { return "DNSIX Session Mgt Module Audit Redir";}
    if (port == 197) { return "Directory Location Service";}
    if (port == 198) { return "Directory Location Service Monitor";}
    if (port == 199) { return "SMUX";}
    if (port == 200) { return "IBM System Resource Controller";}
    if (port == 201) { return "AppleTalk Routing Maintenance";}
    if (port == 202) { return "AppleTalk Name Binding";}
    if (port == 203) { return "AppleTalk Unused";}
    if (port == 204) { return "AppleTalk Echo";}
    if (port == 205) { return "AppleTalk Unused";}
    if (port == 206) { return "AppleTalk Zone Information";}
    if (port == 207) { return "AppleTalk Unused";}
    if (port == 208) { return "AppleTalk Unused";}
    if (port == 209) { return "The Quick Mail Transfer Protocol";}
    if (port == 210) { return "ANSI Z3950";}
    if (port == 211) { return "Texas Instruments 914C/G Terminal";}
    if (port == 212) { return "ATEXSSTR";}
    if (port == 213) { return "IPX";}
    if (port == 214) { return "VM PWSCS";}
    if (port == 215) { return "Insignia Solutions";}
    if (port == 216) { return "Computer Associates Int'l License Server";}
    if (port == 217) { return "dBASE Unix";}
    if (port == 218) { return "Netix Message Posting Protocol";}
    if (port == 219) { return "Unisys ARPs";}
    if (port == 220) { return "Interactive Mail Access Protocol v3";}
    if (port == 221) { return "Berkeley rlogind with SPX auth";}
    if (port == 222) { return "Berkeley rshd with SPX auth";}
    if (port == 223) { return "Certificate Distribution Center";}
    if (port == 224) { return "masqdialer";}
    if (port == 242) { return "Direct";}
    if (port == 243) { return "Survey Measurement";}
    if (port == 244) { return "inbusiness";}
    if (port == 245) { return "LINK";}
    if (port == 246) { return "Display Systems Protocol";}
    if (port == 247) { return "SUBNTBCST_TFTP";}
    if (port == 248) { return "bhfhs";}
    if (port == 256) { return "RAP";}
    if (port == 257) { return "Secure Electronic Transaction";}
    if (port == 259) { return "Efficient Short Remote Operations";}
    if (port == 260) { return "Openport";}
    if (port == 261) { return "IIOP Name Service over TLS/SSL";}
    if (port == 262) { return "Arcisdms";}
    if (port == 263) { return "HDAP";}
    if (port == 264) { return "BGMP";}
    if (port == 265) { return "X-Bone CTL";}
    if (port == 266) { return "SCSI on ST";}
    if (port == 267) { return "Tobit David Service Layer";}
    if (port == 268) { return "Tobit David Replica";}
    if (port == 269) { return "MANET Protocols";}
    if (port == 271) { return "IETF Network Endpoint Assessment  NEA Posture Transport Protocol over TLS  PT-TLS";}
    if (port == 280) { return "http-mgmt";}
    if (port == 281) { return "Personal Link";}
    if (port == 282) { return "Cable Port A/X";}
    if (port == 283) { return "rescap";}
    if (port == 284) { return "corerjd";}
    if (port == 286) { return "FXP Communication";}
    if (port == 287) { return "K-BLOCK";}
    if (port == 308) { return "Novastor Backup";}
    if (port == 309) { return "EntrustTime";}
    if (port == 310) { return "bhmds";}
    if (port == 311) { return "AppleShare IP WebAdmin";}
    if (port == 312) { return "VSLMP";}
    if (port == 313) { return "Magenta Logic";}
    if (port == 314) { return "Opalis Robot";}
    if (port == 315) { return "DPSI";}
    if (port == 316) { return "decAuth";}
    if (port == 317) { return "Zannet";}
    if (port == 318) { return "PKIX TimeStamp";}
    if (port == 319) { return "PTP Event";}
    if (port == 320) { return "PTP General";}
    if (port == 321) { return "PIP";}
    if (port == 322) { return "RTSPS";}
    if (port == 323) { return "Resource PKI to Router Protocol";}
    if (port == 324) { return "Resource PKI to Router Protocol over TLS";}
    if (port == 333) { return "Texar Security Port";}
    if (port == 344) { return "Prospero Data Access Protocol";}
    if (port == 345) { return "Perf Analysis Workbench";}
    if (port == 346) { return "Zebra server";}
    if (port == 347) { return "Fatmen Server";}
    if (port == 348) { return "Cabletron Management Protocol";}
    if (port == 349) { return "mftp";}
    if (port == 350) { return "MATIP Type A";}
    if (port == 351) { return "MATIP Type B / bhoetty";}
    if (port == 352) { return "DTAG / bhoedap4";}
    if (port == 353) { return "NDSAUTH";}
    if (port == 354) { return "bh611";}
    if (port == 355) { return "DATEX-ASN";}
    if (port == 356) { return "Cloanto Net 1";}
    if (port == 357) { return "bhevent";}
    if (port == 358) { return "Shrinkwrap";}
    if (port == 359) { return "Network Security Risk Management Protocol";}
    if (port == 360) { return "scoi2odialog";}
    if (port == 361) { return "Semantix";}
    if (port == 362) { return "SRS Send";}
    if (port == 363) { return "RSVP Tunnel";}
    if (port == 364) { return "Aurora CMGR";}
    if (port == 365) { return "DTK";}
    if (port == 366) { return "ODMR";}
    if (port == 367) { return "MortgageWare";}
    if (port == 368) { return "QbikGDP";}
    if (port == 369) { return "rpc2portmap";}
    if (port == 370) { return "codaauth2";}
    if (port == 371) { return "Clearcase";}
    if (port == 372) { return "ListProcessor";}
    if (port == 373) { return "Legent Corporation";}
    if (port == 374) { return "Legent Corporation";}
    if (port == 375) { return "Hassle";}
    if (port == 376) { return "Amiga Envoy Network Inquiry Proto";}
    if (port == 377) { return "NEC Corporation";}
    if (port == 378) { return "NEC Corporation";}
    if (port == 379) { return "TIA/EIA/IS-99 modem client";}
    if (port == 380) { return "TIA/EIA/IS-99 modem server";}
    if (port == 381) { return "hp performance data collector";}
    if (port == 382) { return "hp performance data managed node";}
    if (port == 383) { return "hp performance data alarm manager";}
    if (port == 384) { return "A Remote Network Server System";}
    if (port == 385) { return "IBM Application";}
    if (port == 386) { return "ASA Message Router Object Def";}
    if (port == 387) { return "Appletalk Update-Based Routing Pro";}
    if (port == 388) { return "Unidata LDM";}
    if (port == 389) { return "Lightweight Directory Access Protocol";}
    if (port == 390) { return "UIS";}
    if (port == 391) { return "SynOptics SNMP Relay Port";}
    if (port == 392) { return "SynOptics Port Broker Port";}
    if (port == 393) { return "Meta5";}
    if (port == 394) { return "EMBL Nucleic Data Transfer";}
    if (port == 395) { return "NetScout Control Protocol";}
    if (port == 396) { return "Novell Netware over IP";}
    if (port == 397) { return "Multi Protocol Trans Net";}
    if (port == 398) { return "Kryptolan";}
    if (port == 399) { return "ISO Transport Class 2 Non-Control over TCP";}
    if (port == 400) { return "Oracle Secure Backup";}
    if (port == 401) { return "Uninterruptible Power Supply";}
    if (port == 402) { return "Genie Protocol";}
    if (port == 403) { return "decap";}
    if (port == 404) { return "nced";}
    if (port == 405) { return "ncld";}
    if (port == 406) { return "Interactive Mail Support Protocol";}
    if (port == 407) { return "Timbuktu";}
    if (port == 408) { return "Prospero Resource Manager Sys Man";}
    if (port == 409) { return "Prospero Resource Manager Node Man";}
    if (port == 410) { return "DECLadebug Remote Debug Protocol";}
    if (port == 411) { return "Remote MT Protocol";}
    if (port == 412) { return "Trap Convention Port";}
    if (port == 413) { return "Storage Management Services Protocol";}
    if (port == 414) { return "InfoSeek";}
    if (port == 415) { return "BNet";}
    if (port == 416) { return "Silverplatter";}
    if (port == 417) { return "Onmux";}
    if (port == 418) { return "Hyper-G";}
    if (port == 419) { return "Ariel 1";}
    if (port == 420) { return "SMPTE";}
    if (port == 421) { return "Ariel 2";}
    if (port == 422) { return "Ariel 3";}
    if (port == 423) { return "IBM Operations Planning and Control Start";}
    if (port == 424) { return "IBM Operations Planning and Control Track";}
    if (port == 425) { return "ICAD";}
    if (port == 426) { return "smartsdp";}
    if (port == 427) { return "Server Location";}
    if (port == 428) { return "OCS_CMU";}
    if (port == 429) { return "OCS_AMU";}
    if (port == 430) { return "UTMPSD";}
    if (port == 431) { return "UTMPCD";}
    if (port == 432) { return "IASD";}
    if (port == 433) { return "NNTP for transit servers  NNSP";}
    if (port == 434) { return "MobileIP-Agent";}
    if (port == 435) { return "MobilIP-MN";}
    if (port == 436) { return "DNA-CML";}
    if (port == 437) { return "comscm";}
    if (port == 438) { return "dsfgw";}
    if (port == 439) { return "dasp";}
    if (port == 440) { return "sgcp";}
    if (port == 441) { return "decvms-sysmgt";}
    if (port == 442) { return "cvc_hostd";}
    if (port == 443) { return "http protocol over TLS/SSL";}
    if (port == 444) { return "Simple Network Paging Protocol";}
    if (port == 445) { return "Microsoft-DS";}
    if (port == 446) { return "DDM-Remote Relational Database Access";}
    if (port == 447) { return "DDM-Distributed File Management";}
    if (port == 448) { return "DDM-Remote DB Access Using Secure Sockets";}
    if (port == 449) { return "AS Server Mapper";}
    if (port == 450) { return "Computer Supported Telecomunication Applications";}
    if (port == 451) { return "Cray Network Semaphore server";}
    if (port == 452) { return "Cray SFS config server";}
    if (port == 453) { return "CreativeServer";}
    if (port == 454) { return "ContentServer";}
    if (port == 455) { return "CreativePartnr";}
    if (port == 456) { return "macon-tcp";}
    if (port == 457) { return "scohelp";}
    if (port == 458) { return "apple quick time";}
    if (port == 459) { return "ampr-rcmd";}
    if (port == 460) { return "skronk";}
    if (port == 461) { return "DataRampSrv";}
    if (port == 462) { return "DataRampSrvSec";}
    if (port == 463) { return "alpes";}
    if (port == 464) { return "kpasswd";}
    if (port == 465) { return "URL Rendezvous Directory for SSM / Message Submission over TLS protocol";}
    if (port == 466) { return "digital-vrc";}
    if (port == 467) { return "mylex-mapd";}
    if (port == 468) { return "proturis";}
    if (port == 469) { return "Radio Control Protocol";}
    if (port == 470) { return "scx-proxy";}
    if (port == 471) { return "Mondex";}
    if (port == 472) { return "ljk-login";}
    if (port == 473) { return "hybrid-pop";}
    if (port == 474) { return "tn-tl-w1";}
    if (port == 475) { return "tcpnethaspsrv";}
    if (port == 476) { return "tn-tl-fd1";}
    if (port == 477) { return "ss7ns";}
    if (port == 478) { return "spsc";}
    if (port == 479) { return "iafserver";}
    if (port == 480) { return "iafdbase";}
    if (port == 481) { return "Ph service";}
    if (port == 482) { return "bgs-nsi";}
    if (port == 483) { return "ulpnet";}
    if (port == 484) { return "Integra Software Management Environment";}
    if (port == 485) { return "Air Soft Power Burst";}
    if (port == 486) { return "avian";}
    if (port == 487) { return "saft Simple Asynchronous File Transfer";}
    if (port == 488) { return "gss-http";}
    if (port == 489) { return "nest-protocol";}
    if (port == 490) { return "micom-pfs";}
    if (port == 491) { return "go-login";}
    if (port == 492) { return "Transport Independent Convergence for FNA";}
    if (port == 493) { return "Transport Independent Convergence for FNA";}
    if (port == 494) { return "POV-Ray";}
    if (port == 495) { return "intecourier";}
    if (port == 496) { return "PIM-RP-DISC";}
    if (port == 497) { return "Retrospect backup and restore service";}
    if (port == 498) { return "siam";}
    if (port == 499) { return "ISO ILL Protocol";}
    if (port == 500) { return "isakmp";}
    if (port == 501) { return "STMF";}
    if (port == 502) { return "Modbus Application Protocol";}
    if (port == 503) { return "Intrinsa";}
    if (port == 504) { return "citadel";}
    if (port == 505) { return "mailbox-lm";}
    if (port == 506) { return "ohimsrv";}
    if (port == 507) { return "crs";}
    if (port == 508) { return "xvttp";}
    if (port == 509) { return "snare";}
    if (port == 510) { return "FirstClass Protocol";}
    if (port == 511) { return "PassGo";}
    if (port == 512) { return "remote process execution;} authentication performed using passwords and UNIX login names";}
    if (port == 514) { return "cmd like exec, but automatic authentication is performed as for login server";}
    if (port == 515) { return "spooler";}
    if (port == 516) { return "videotex";}
    if (port == 517) { return "like tenex link, but across machine - unfortunately, doesn't use link protocol  this is actually just a rendezvous port from which a tcp connection is established";}
    if (port == 519) { return "unixtime";}
    if (port == 520) { return "extended file name server";}
    if (port == 521) { return "ripng";}
    if (port == 522) { return "ULP";}
    if (port == 523) { return "IBM-DB2";}
    if (port == 524) { return "NCP";}
    if (port == 525) { return "timeserver";}
    if (port == 526) { return "newdate";}
    if (port == 527) { return "Stock IXChange";}
    if (port == 528) { return "Customer IXChange";}
    if (port == 529) { return "IRC-SERV";}
    if (port == 530) { return "rpc";}
    if (port == 531) { return "chat";}
    if (port == 532) { return "readnews";}
    if (port == 533) { return "for emergency broadcasts";}
    if (port == 534) { return "windream Admin";}
    if (port == 535) { return "iiop";}
    if (port == 536) { return "opalis-rdv";}
    if (port == 537) { return "Networked Media Streaming Protocol";}
    if (port == 538) { return "gdomap";}
    if (port == 539) { return "Apertus Technologies Load Determination";}
    if (port == 540) { return "uucpd";}
    if (port == 541) { return "uucp-rlogin";}
    if (port == 542) { return "commerce";}
    if (port == 544) { return "krcmd";}
    if (port == 545) { return "appleqtcsrvr";}
    if (port == 546) { return "DHCPv6 Client";}
    if (port == 547) { return "DHCPv6 Server";}
    if (port == 548) { return "AFP over TCP";}
    if (port == 549) { return "IDFP";}
    if (port == 550) { return "new-who";}
    if (port == 551) { return "cybercash";}
    if (port == 552) { return "DeviceShare";}
    if (port == 553) { return "pirp";}
    if (port == 554) { return "Real Time Streaming Protocol  RTSP";}
    if (port == 556) { return "rfs server";}
    if (port == 557) { return "openvms-sysipc";}
    if (port == 558) { return "SDNSKMP";}
    if (port == 559) { return "TEEDTAP";}
    if (port == 560) { return "rmonitord";}
    if (port == 562) { return "chcmd";}
    if (port == 563) { return "nntp protocol over TLS/SSL  was snntp";}
    if (port == 564) { return "plan 9 file service";}
    if (port == 565) { return "whoami";}
    if (port == 566) { return "streettalk";}
    if (port == 567) { return "banyan-rpc";}
    if (port == 568) { return "microsoft shuttle";}
    if (port == 569) { return "microsoft rome";}
    if (port == 570) { return "demon";}
    if (port == 571) { return "udemon";}
    if (port == 572) { return "sonar";}
    if (port == 573) { return "banyan-vip";}
    if (port == 574) { return "FTP Software Agent System";}
    if (port == 575) { return "VEMMI";}
    if (port == 576) { return "ipcd";}
    if (port == 577) { return "vnas";}
    if (port == 578) { return "ipdd";}
    if (port == 579) { return "decbsrv";}
    if (port == 580) { return "SNTP HEARTBEAT";}
    if (port == 581) { return "Bundle Discovery Protocol";}
    if (port == 582) { return "SCC Security";}
    if (port == 583) { return "Philips Video-Conferencing";}
    if (port == 584) { return "Key Server";}
    if (port == 586) { return "Password Change";}
    if (port == 587) { return "Message Submission";}
    if (port == 588) { return "CAL";}
    if (port == 589) { return "EyeLink";}
    if (port == 590) { return "TNS CML";}
    if (port == 591) { return "FileMaker, Inc - HTTP Alternate  see Port 80";}
    if (port == 592) { return "Eudora Set";}
    if (port == 593) { return "HTTP RPC Ep Map";}
    if (port == 594) { return "TPIP";}
    if (port == 595) { return "CAB Protocol";}
    if (port == 596) { return "SMSD";}
    if (port == 597) { return "PTC Name Service";}
    if (port == 598) { return "SCO Web Server Manager 3";}
    if (port == 599) { return "Aeolon Core Protocol";}
    if (port == 600) { return "Sun IPC server";}
    if (port == 601) { return "Reliable Syslog Service";}
    if (port == 602) { return "XML-RPC over BEEP";}
    if (port == 603) { return "IDXP";}
    if (port == 604) { return "TUNNEL";}
    if (port == 605) { return "SOAP over BEEP";}
    if (port == 606) { return "Cray Unified Resource Manager";}
    if (port == 607) { return "nqs";}
    if (port == 608) { return "Sender-Initiated/Unsolicited File Transfer";}
    if (port == 609) { return "npmp-trap";}
    if (port == 610) { return "npmp-local";}
    if (port == 611) { return "npmp-gui";}
    if (port == 612) { return "HMMP Indication";}
    if (port == 613) { return "HMMP Operation";}
    if (port == 614) { return "SSLshell";}
    if (port == 615) { return "Internet Configuration Manager";}
    if (port == 616) { return "SCO System Administration Server";}
    if (port == 617) { return "SCO Desktop Administration Server";}
    if (port == 618) { return "DEI-ICDA";}
    if (port == 619) { return "Compaq EVM";}
    if (port == 620) { return "SCO WebServer Manager";}
    if (port == 621) { return "ESCP";}
    if (port == 622) { return "Collaborator";}
    if (port == 623) { return "DMTF out-of-band web services management protocol";}
    if (port == 624) { return "Crypto Admin";}
    if (port == 625) { return "DEC DLM";}
    if (port == 626) { return "ASIA";}
    if (port == 627) { return "PassGo Tivoli";}
    if (port == 628) { return "QMQP";}
    if (port == 629) { return "3Com AMP3";}
    if (port == 630) { return "RDA";}
    if (port == 631) { return "IPP  Internet Printing Protocol";}
    if (port == 632) { return "bmpp";}
    if (port == 633) { return "Service Status update  Sterling Software";}
    if (port == 634) { return "ginad";}
    if (port == 635) { return "RLZ DBase";}
    if (port == 636) { return "ldap protocol over TLS/SSL  was sldap";}
    if (port == 637) { return "lanserver";}
    if (port == 638) { return "mcns-sec";}
    if (port == 639) { return "MSDP";}
    if (port == 640) { return "entrust-sps";}
    if (port == 641) { return "repcmd";}
    if (port == 642) { return "ESRO-EMSDP V13";}
    if (port == 643) { return "SANity";}
    if (port == 644) { return "dwr";}
    if (port == 645) { return "PSSC";}
    if (port == 646) { return "LDP";}
    if (port == 647) { return "DHCP Failover";}
    if (port == 648) { return "Registry Registrar Protocol  RRP";}
    if (port == 649) { return "Cadview-3d - streaming 3d models over the internet";}
    if (port == 650) { return "OBEX";}
    if (port == 651) { return "IEEE MMS";}
    if (port == 652) { return "HELLO_PORT";}
    if (port == 653) { return "RepCmd";}
    if (port == 654) { return "AODV";}
    if (port == 655) { return "TINC";}
    if (port == 656) { return "SPMP";}
    if (port == 657) { return "RMC";}
    if (port == 658) { return "TenFold";}
    if (port == 660) { return "MacOS Server Admin";}
    if (port == 661) { return "HAP";}
    if (port == 662) { return "PFTP";}
    if (port == 663) { return "PureNoise";}
    if (port == 664) { return "DMTF out-of-band secure web services management protocol";}
    if (port == 665) { return "Sun DR";}
    if (port == 666) { return "doom Id Software";}
    if (port == 667) { return "campaign contribution disclosures - SDR Technologies";}
    if (port == 668) { return "MeComm";}
    if (port == 669) { return "MeRegister";}
    if (port == 670) { return "VACDSM-SWS";}
    if (port == 671) { return "VACDSM-APP";}
    if (port == 672) { return "VPPS-QUA";}
    if (port == 673) { return "CIMPLEX";}
    if (port == 674) { return "ACAP";}
    if (port == 675) { return "DCTP";}
    if (port == 676) { return "VPPS Via";}
    if (port == 677) { return "Virtual Presence Protocol";}
    if (port == 678) { return "GNU Generation Foundation NCP";}
    if (port == 679) { return "MRM";}
    if (port == 680) { return "entrust-aaas";}
    if (port == 681) { return "entrust-aams";}
    if (port == 682) { return "XFR";}
    if (port == 683) { return "CORBA IIOP";}
    if (port == 684) { return "CORBA IIOP SSL";}
    if (port == 685) { return "MDC Port Mapper";}
    if (port == 686) { return "Hardware Control Protocol Wismar";}
    if (port == 687) { return "asipregistry";}
    if (port == 688) { return "ApplianceWare managment protocol";}
    if (port == 689) { return "NMAP";}
    if (port == 690) { return "Velneo Application Transfer Protocol";}
    if (port == 691) { return "MS Exchange Routing";}
    if (port == 692) { return "Hyperwave-ISP";}
    if (port == 693) { return "almanid Connection Endpoint";}
    if (port == 694) { return "ha-cluster";}
    if (port == 695) { return "IEEE-MMS-SSL";}
    if (port == 696) { return "RUSHD";}
    if (port == 697) { return "UUIDGEN";}
    if (port == 698) { return "OLSR";}
    if (port == 699) { return "Access Network";}
    if (port == 700) { return "Extensible Provisioning Protocol";}
    if (port == 701) { return "Link Management Protocol  LMP";}
    if (port == 702) { return "IRIS over BEEP";}
    if (port == 704) { return "errlog copy/server daemon";}
    if (port == 705) { return "AgentX";}
    if (port == 706) { return "SILC";}
    if (port == 707) { return "Borland DSJ";}
    if (port == 709) { return "Entrust Key Management Service Handler";}
    if (port == 710) { return "Entrust Administration Service Handler";}
    if (port == 711) { return "Cisco TDP";}
    if (port == 712) { return "TBRPF";}
    if (port == 713) { return "IRIS over XPC";}
    if (port == 714) { return "IRIS over XPCS";}
    if (port == 715) { return "IRIS-LWZ";}
    if (port == 729) { return "IBM NetView DM/6000 Server/Client";}
    if (port == 730) { return "IBM NetView DM/6000 send/tcp";}
    if (port == 731) { return "IBM NetView DM/6000 receive/tcp";}
    if (port == 741) { return "netGW";}
    if (port == 742) { return "Network based Rev Cont Sys";}
    if (port == 744) { return "Flexible License Manager";}
    if (port == 747) { return "Fujitsu Device Control";}
    if (port == 748) { return "Russell Info Sci Calendar Manager";}
    if (port == 749) { return "kerberos administration";}
    if (port == 754) { return "send";}
    if (port == 767) { return "phone";}
    if (port == 777) { return "Multiling HTTP";}
    if (port == 800) { return "mdbs_daemon ";}
    if (port == 802) { return "Modbus Application Protocol Secure";}
    if (port == 810) { return "FCP";}
    if (port == 828) { return "itm-mcell-s";}
    if (port == 829) { return "PKIX-3 CA/RA";}
    if (port == 830) { return "NETCONF over SSH";}
    if (port == 831) { return "NETCONF over BEEP";}
    if (port == 832) { return "NETCONF for SOAP over HTTPS";}
    if (port == 833) { return "NETCONF for SOAP over BEEP";}
    if (port == 847) { return "dhcp-failover 2";}
    if (port == 848) { return "GDOI";}
    if (port == 853) { return "DNS query-response protocol run over TLS/DTLS";}
    if (port == 854) { return "Dynamic Link Exchange Protocol  DLEP";}
    if (port == 860) { return "iSCSI";}
    if (port == 861) { return "OWAMP-Control";}
    if (port == 862) { return "Two-way Active Measurement Protocol  TWAMP Control";}
    if (port == 873) { return "rsync";}
    if (port == 886) { return "ICL coNETion locate server";}
    if (port == 887) { return "ICL coNETion server info";}
    if (port == 888) { return "AccessBuilder / CD Database Protocol";}
    if (port == 900) { return "OMG Initial Refs";}
    if (port == 901) { return "SMPNAMERES";}
    if (port == 902) { return "self documenting Telnet Door";}
    if (port == 903) { return "self documenting Telnet Panic Door";}
    if (port == 910) { return "Kerberized Internet Negotiation of Keys  KINK";}
    if (port == 911) { return "xact-backup";}
    if (port == 912) { return "APEX relay-relay service";}
    if (port == 913) { return "APEX endpoint-relay service";}
    if (port == 953) { return "BIND9 remote name daemon controller";}
    if (port == 989) { return "ftp protocol, data, over TLS/SSL";}
    if (port == 990) { return "ftp protocol, control, over TLS/SSL";}
    if (port == 991) { return "Netnews Administration System";}
    if (port == 992) { return "telnet protocol over TLS/SSL";}
    if (port == 993) { return "IMAP over TLS protocol";}
    if (port == 995) { return "POP3 over TLS protocol";}
    if (port == 996) { return "vsinet";}
    if (port == 1001) { return "HTTP Web Push";}
    if (port == 1010) { return "surf";}
    if (port == 1021) { return "RFC3692-style Experiment 1";}
    if (port == 1022) { return "RFC3692-style Experiment 2";}
    if (port == 1025) { return "network blackjack";}
    if (port == 1026) { return "Calendar Access Protocol";}
    if (port == 1029) { return "Solid Mux Server";}
    if (port == 1033) { return "local netinfo port";}
    if (port == 1034) { return "ActiveSync Notifications";}
    if (port == 1035) { return "MX-XR RPC";}
    if (port == 1036) { return "Nebula Secure Segment Transfer Protocol";}
    if (port == 1037) { return "AMS";}
    if (port == 1038) { return "Message Tracking Query Protocol";}
    if (port == 1039) { return "Streamlined Blackhole";}
    if (port == 1040) { return "Netarx Netcare";}
    if (port == 1041) { return "AK2 Product";}
    if (port == 1042) { return "Subnet Roaming";}
    if (port == 1043) { return "BOINC Client Control";}
    if (port == 1044) { return "Dev Consortium Utility";}
    if (port == 1045) { return "Fingerprint Image Transfer Protocol";}
    if (port == 1046) { return "WebFilter Remote Monitor";}
    if (port == 1047) { return "Sun's NEO Object Request Broker";}
    if (port == 1048) { return "Sun's NEO Object Request Broker";}
    if (port == 1049) { return "Tobit David Postman VPMN";}
    if (port == 1050) { return "CORBA Management Agent";}
    if (port == 1051) { return "Optima VNET";}
    if (port == 1052) { return "Dynamic DNS Tools";}
    if (port == 1053) { return "Remote Assistant  RA";}
    if (port == 1054) { return "BRVREAD";}
    if (port == 1055) { return "ANSYS - License Manager";}
    if (port == 1056) { return "VFO";}
    if (port == 1057) { return "STARTRON";}
    if (port == 1058) { return "nim";}
    if (port == 1059) { return "nimreg";}
    if (port == 1060) { return "POLESTAR";}
    if (port == 1061) { return "KIOSK";}
    if (port == 1062) { return "Veracity";}
    if (port == 1063) { return "KyoceraNetDev";}
    if (port == 1064) { return "JSTEL";}
    if (port == 1065) { return "SYSCOMLAN";}
    if (port == 1066) { return "FPO-FNS";}
    if (port == 1067) { return "Installation Bootstrap Proto Serv";}
    if (port == 1068) { return "Installation Bootstrap Proto Cli";}
    if (port == 1069) { return "COGNEX-INSIGHT";}
    if (port == 1070) { return "GMRUpdateSERV";}
    if (port == 1071) { return "BSQUARE-VOIP";}
    if (port == 1072) { return "CARDAX";}
    if (port == 1073) { return "Bridge Control";}
    if (port == 1074) { return "Warmspot Management Protocol";}
    if (port == 1075) { return "RDRMSHC";}
    if (port == 1076) { return "DAB STI-C";}
    if (port == 1077) { return "IMGames";}
    if (port == 1078) { return "Avocent Proxy Protocol";}
    if (port == 1079) { return "ASPROVATalk";}
    if (port == 1080) { return "Socks";}
    if (port == 1081) { return "PVUNIWIEN";}
    if (port == 1082) { return "AMT-ESD-PROT";}
    if (port == 1083) { return "Anasoft License Manager";}
    if (port == 1084) { return "Anasoft License Manager";}
    if (port == 1085) { return "Web Objects";}
    if (port == 1086) { return "CPL Scrambler Logging";}
    if (port == 1087) { return "CPL Scrambler Internal";}
    if (port == 1088) { return "CPL Scrambler Alarm Log";}
    if (port == 1089) { return "FF Annunciation";}
    if (port == 1090) { return "FF Fieldbus Message Specification";}
    if (port == 1091) { return "FF System Management";}
    if (port == 1092) { return "Open Business Reporting Protocol";}
    if (port == 1093) { return "PROOFD";}
    if (port == 1094) { return "ROOTD";}
    if (port == 1095) { return "NICELink";}
    if (port == 1096) { return "Common Name Resolution Protocol";}
    if (port == 1097) { return "Sun Cluster Manager";}
    if (port == 1098) { return "RMI Activation";}
    if (port == 1099) { return "RMI Registry";}
    if (port == 1100) { return "MCTP";}
    if (port == 1101) { return "PT2-DISCOVER";}
    if (port == 1102) { return "ADOBE SERVER 1";}
    if (port == 1103) { return "ADOBE SERVER 2";}
    if (port == 1104) { return "XRL";}
    if (port == 1105) { return "FTRANHC";}
    if (port == 1106) { return "ISOIPSIGPORT-1";}
    if (port == 1107) { return "ISOIPSIGPORT-2";}
    if (port == 1108) { return "ratio-adp";}
    if (port == 1110) { return "Start web admin server";}
    if (port == 1111) { return "LM Social Server";}
    if (port == 1112) { return "Intelligent Communication Protocol";}
    if (port == 1113) { return "Licklider Transmission Protocol";}
    if (port == 1114) { return "Mini SQL";}
    if (port == 1115) { return "ARDUS Transfer";}
    if (port == 1116) { return "ARDUS Control";}
    if (port == 1117) { return "ARDUS Multicast Transfer";}
    if (port == 1118) { return "SACRED";}
    if (port == 1119) { return "Battlenet Chat/Game Protocol";}
    if (port == 1120) { return "Battlenet File Transfer Protocol";}
    if (port == 1121) { return "Datalode RMPP";}
    if (port == 1122) { return "availant-mgr";}
    if (port == 1123) { return "Murray";}
    if (port == 1124) { return "HP VMM Control";}
    if (port == 1125) { return "HP VMM Agent";}
    if (port == 1126) { return "HP VMM Agent";}
    if (port == 1127) { return "KWDB Remote Communication";}
    if (port == 1128) { return "SAPHostControl over SOAP/HTTP";}
    if (port == 1129) { return "SAPHostControl over SOAP/HTTPS";}
    if (port == 1130) { return "CAC App Service Protocol";}
    if (port == 1131) { return "CAC App Service Protocol Encripted";}
    if (port == 1132) { return "KVM-via-IP Management Service";}
    if (port == 1133) { return "Data Flow Network";}
    if (port == 1134) { return "MicroAPL APLX";}
    if (port == 1135) { return "OmniVision Communication Service";}
    if (port == 1136) { return "HHB Gateway Control";}
    if (port == 1137) { return "TRIM Workgroup Service";}
    if (port == 1138) { return "encrypted admin requests";}
    if (port == 1139) { return "Enterprise Virtual Manager";}
    if (port == 1140) { return "AutoNOC Network Operations Protocol";}
    if (port == 1141) { return "User Message Service";}
    if (port == 1142) { return "User Discovery Service";}
    if (port == 1143) { return "Infomatryx Exchange";}
    if (port == 1144) { return "Fusion Script";}
    if (port == 1145) { return "X9 iCue Show Control";}
    if (port == 1146) { return "audit transfer";}
    if (port == 1147) { return "CAPIoverLAN";}
    if (port == 1148) { return "Elfiq Replication Service";}
    if (port == 1149) { return "BlueView Sonar Service";}
    if (port == 1150) { return "Blaze File Server";}
    if (port == 1151) { return "Unizensus Login Server";}
    if (port == 1152) { return "Winpopup LAN Messenger";}
    if (port == 1153) { return "ANSI C1222 Port";}
    if (port == 1154) { return "Community Service";}
    if (port == 1155) { return "Network File Access";}
    if (port == 1156) { return "iasControl OMS";}
    if (port == 1157) { return "Oracle iASControl";}
    if (port == 1158) { return "dbControl OMS";}
    if (port == 1159) { return "Oracle OMS";}
    if (port == 1160) { return "DB Lite Mult-User Server";}
    if (port == 1161) { return "Health Polling";}
    if (port == 1162) { return "Health Trap";}
    if (port == 1163) { return "SmartDialer Data Protocol";}
    if (port == 1164) { return "QSM Proxy Service";}
    if (port == 1165) { return "QSM GUI Service";}
    if (port == 1166) { return "QSM RemoteExec";}
    if (port == 1167) { return "Cisco IP SLAs Control Protocol";}
    if (port == 1168) { return "VChat Conference Service";}
    if (port == 1169) { return "TRIPWIRE";}
    if (port == 1170) { return "AT+C License Manager";}
    if (port == 1171) { return "AT+C FmiApplicationServer";}
    if (port == 1172) { return "DNA Protocol";}
    if (port == 1173) { return "D-Cinema Request-Response";}
    if (port == 1174) { return "FlashNet Remote Admin";}
    if (port == 1175) { return "Dossier Server";}
    if (port == 1176) { return "Indigo Home Server";}
    if (port == 1177) { return "DKMessenger Protocol";}
    if (port == 1178) { return "SGI Storage Manager";}
    if (port == 1179) { return "Backup To Neighbor";}
    if (port == 1180) { return "Millicent Client Proxy";}
    if (port == 1181) { return "3Com Net Management";}
    if (port == 1182) { return "AcceleNet Control";}
    if (port == 1183) { return "LL Surfup HTTP";}
    if (port == 1184) { return "LL Surfup HTTPS";}
    if (port == 1185) { return "Catchpole port";}
    if (port == 1186) { return "MySQL Cluster Manager";}
    if (port == 1187) { return "Alias Service";}
    if (port == 1188) { return "HP Web Admin";}
    if (port == 1189) { return "Unet Connection";}
    if (port == 1190) { return "CommLinx GPS / AVL System";}
    if (port == 1191) { return "General Parallel File System";}
    if (port == 1192) { return "caids sensors channel";}
    if (port == 1193) { return "Five Across Server";}
    if (port == 1194) { return "OpenVPN";}
    if (port == 1195) { return "RSF-1 clustering";}
    if (port == 1196) { return "Network Magic";}
    if (port == 1197) { return "Carrius Remote Access";}
    if (port == 1198) { return "cajo reference discovery";}
    if (port == 1199) { return "DMIDI";}
    if (port == 1200) { return "SCOL";}
    if (port == 1201) { return "Nucleus Sand Database Server";}
    if (port == 1202) { return "caiccipc";}
    if (port == 1203) { return "License Validation";}
    if (port == 1204) { return "Log Request Listener";}
    if (port == 1205) { return "Accord-MGC";}
    if (port == 1206) { return "Anthony Data";}
    if (port == 1207) { return "MetaSage";}
    if (port == 1208) { return "SEAGULL AIS";}
    if (port == 1209) { return "IPCD3";}
    if (port == 1210) { return "EOSS";}
    if (port == 1211) { return "Groove DPP";}
    if (port == 1212) { return "lupa";}
    if (port == 1213) { return "Medtronic/Physio-Control LIFENET";}
    if (port == 1214) { return "KAZAA";}
    if (port == 1215) { return "scanSTAT 10";}
    if (port == 1216) { return "ETEBAC 5";}
    if (port == 1217) { return "HPSS NonDCE Gateway";}
    if (port == 1218) { return "AeroFlight-ADs";}
    if (port == 1219) { return "AeroFlight-Ret";}
    if (port == 1220) { return "QT SERVER ADMIN";}
    if (port == 1221) { return "SweetWARE Apps";}
    if (port == 1222) { return "SNI R&D network";}
    if (port == 1223) { return "TrulyGlobal Protocol";}
    if (port == 1224) { return "VPNz";}
    if (port == 1225) { return "SLINKYSEARCH";}
    if (port == 1226) { return "STGXFWS";}
    if (port == 1227) { return "DNS2Go";}
    if (port == 1228) { return "FLORENCE";}
    if (port == 1229) { return "ZENworks Tiered Electronic Distribution";}
    if (port == 1230) { return "Periscope";}
    if (port == 1231) { return "menandmice-lpm";}
    if (port == 1232) { return "Remote systems monitoring";}
    if (port == 1233) { return "Universal App Server";}
    if (port == 1234) { return "Infoseek Search Agent";}
    if (port == 1235) { return "mosaicsyssvc1";}
    if (port == 1236) { return "bvcontrol";}
    if (port == 1237) { return "tsdos390";}
    if (port == 1238) { return "hacl-qs";}
    if (port == 1239) { return "NMSD";}
    if (port == 1240) { return "Instantia";}
    if (port == 1241) { return "nessus";}
    if (port == 1242) { return "NMAS over IP";}
    if (port == 1243) { return "SerialGateway";}
    if (port == 1244) { return "isbconference1";}
    if (port == 1245) { return "isbconference2";}
    if (port == 1246) { return "payrouter";}
    if (port == 1247) { return "VisionPyramid";}
    if (port == 1248) { return "hermes";}
    if (port == 1249) { return "Mesa Vista Co";}
    if (port == 1250) { return "swldy-sias";}
    if (port == 1251) { return "servergraph";}
    if (port == 1252) { return "bspne-pcc";}
    if (port == 1253) { return "q55-pcc";}
    if (port == 1254) { return "de-noc";}
    if (port == 1255) { return "de-cache-query";}
    if (port == 1256) { return "de-server";}
    if (port == 1257) { return "Shockwave 2";}
    if (port == 1258) { return "Open Network Library";}
    if (port == 1259) { return "Open Network Library Voice";}
    if (port == 1260) { return "ibm-ssd";}
    if (port == 1261) { return "mpshrsv";}
    if (port == 1262) { return "QNTS-ORB";}
    if (port == 1263) { return "dka";}
    if (port == 1264) { return "PRAT";}
    if (port == 1265) { return "DSSIAPI";}
    if (port == 1266) { return "DELLPWRAPPKS";}
    if (port == 1267) { return "eTrust Policy Compliance";}
    if (port == 1268) { return "PROPEL-MSGSYS";}
    if (port == 1269) { return "WATiLaPP";}
    if (port == 1270) { return "Microsoft Operations Manager";}
    if (port == 1271) { return "eXcW";}
    if (port == 1272) { return "CSPMLockMgr";}
    if (port == 1273) { return "EMC-Gateway";}
    if (port == 1274) { return "t1distproc";}
    if (port == 1275) { return "ivcollector";}
    if (port == 1277) { return "mqs";}
    if (port == 1278) { return "Dell Web Admin 1";}
    if (port == 1279) { return "Dell Web Admin 2";}
    if (port == 1280) { return "Pictrography";}
    if (port == 1281) { return "healthd";}
    if (port == 1282) { return "Emperion";}
    if (port == 1283) { return "Product Information";}
    if (port == 1284) { return "IEE-QFX";}
    if (port == 1285) { return "neoiface";}
    if (port == 1286) { return "netuitive";}
    if (port == 1287) { return "RouteMatch Com";}
    if (port == 1288) { return "NavBuddy";}
    if (port == 1289) { return "JWalkServer";}
    if (port == 1290) { return "WinJaServer";}
    if (port == 1291) { return "SEAGULLLMS";}
    if (port == 1292) { return "dsdn";}
    if (port == 1293) { return "PKT-KRB-IPSec";}
    if (port == 1294) { return "CMMdriver";}
    if (port == 1295) { return "End-by-Hop Transmission Protocol";}
    if (port == 1296) { return "dproxy";}
    if (port == 1297) { return "sdproxy";}
    if (port == 1298) { return "lpcp";}
    if (port == 1299) { return "hp-sci";}
    if (port == 1300) { return "H323 Secure Call Control Signalling";}
    if (port == 1301) { return "CI3-Software-1";}
    if (port == 1302) { return "CI3-Software-2";}
    if (port == 1303) { return "sftsrv";}
    if (port == 1304) { return "Boomerang";}
    if (port == 1305) { return "pe-mike";}
    if (port == 1306) { return "RE-Conn-Proto";}
    if (port == 1307) { return "Pacmand";}
    if (port == 1308) { return "Optical Domain Service Interconnect  ODSI";}
    if (port == 1309) { return "JTAG server";}
    if (port == 1310) { return "Husky";}
    if (port == 1311) { return "RxMon";}
    if (port == 1312) { return "STI Envision";}
    if (port == 1313) { return "BMC_PATROLDB";}
    if (port == 1314) { return "Photoscript Distributed Printing System";}
    if (port == 1315) { return "ELS, Event Listener Service";}
    if (port == 1316) { return "Exbit-ESCP";}
    if (port == 1317) { return "vrts-ipcserver";}
    if (port == 1318) { return "krb5gatekeeper";}
    if (port == 1319) { return "AMX-ICSP";}
    if (port == 1320) { return "AMX-AXBNET";}
    if (port == 1321) { return "PIP";}
    if (port == 1322) { return "Novation";}
    if (port == 1323) { return "brcd";}
    if (port == 1324) { return "delta-mcp";}
    if (port == 1325) { return "DX-Instrument";}
    if (port == 1326) { return "WIMSIC";}
    if (port == 1327) { return "Ultrex";}
    if (port == 1328) { return "EWALL";}
    if (port == 1329) { return "netdb-export";}
    if (port == 1330) { return "StreetPerfect";}
    if (port == 1331) { return "intersan";}
    if (port == 1332) { return "PCIA RXP-B";}
    if (port == 1333) { return "Password Policy";}
    if (port == 1334) { return "writesrv";}
    if (port == 1335) { return "Digital Notary Protocol";}
    if (port == 1336) { return "Instant Service Chat";}
    if (port == 1337) { return "menandmice DNS";}
    if (port == 1338) { return "WMC-log-svr";}
    if (port == 1339) { return "kjtsiteserver";}
    if (port == 1340) { return "NAAP";}
    if (port == 1341) { return "QuBES";}
    if (port == 1342) { return "ESBroker";}
    if (port == 1343) { return "re101";}
    if (port == 1344) { return "ICAP";}
    if (port == 1345) { return "VPJP";}
    if (port == 1346) { return "Alta Analytics License Manager";}
    if (port == 1347) { return "multi media conferencing";}
    if (port == 1348) { return "multi media conferencing";}
    if (port == 1349) { return "Registration Network Protocol";}
    if (port == 1350) { return "Registration Network Protocol";}
    if (port == 1351) { return "Digital Tool Works  MIT";}
    if (port == 1352) { return "Lotus Note";}
    if (port == 1353) { return "Relief Consulting";}
    if (port == 1354) { return "Five Across XSIP Network";}
    if (port == 1355) { return "Intuitive Edge";}
    if (port == 1356) { return "CuillaMartin Company";}
    if (port == 1357) { return "Electronic PegBoard";}
    if (port == 1358) { return "CONNLCLI";}
    if (port == 1359) { return "FTSRV";}
    if (port == 1360) { return "MIMER";}
    if (port == 1361) { return "LinX";}
    if (port == 1362) { return "TimeFlies";}
    if (port == 1363) { return "Network DataMover Requester";}
    if (port == 1364) { return "Network DataMover Server";}
    if (port == 1365) { return "Network Software Associates";}
    if (port == 1366) { return "Novell NetWare Comm Service Platform";}
    if (port == 1367) { return "DCS";}
    if (port == 1368) { return "ScreenCast";}
    if (port == 1369) { return "GlobalView to Unix Shell";}
    if (port == 1370) { return "Unix Shell to GlobalView";}
    if (port == 1371) { return "Fujitsu Config Protocol";}
    if (port == 1372) { return "Fujitsu Config Protocol";}
    if (port == 1373) { return "Chromagrafx";}
    if (port == 1374) { return "EPI Software Systems";}
    if (port == 1375) { return "Bytex";}
    if (port == 1376) { return "IBM Person to Person Software";}
    if (port == 1377) { return "Cichlid License Manager";}
    if (port == 1378) { return "Elan License Manager";}
    if (port == 1379) { return "Integrity Solutions";}
    if (port == 1380) { return "Telesis Network License Manager";}
    if (port == 1381) { return "Apple Network License Manager";}
    if (port == 1382) { return "udt_os";}
    if (port == 1383) { return "GW Hannaway Network License Manager";}
    if (port == 1384) { return "Objective Solutions License Manager";}
    if (port == 1385) { return "Atex Publishing License Manager";}
    if (port == 1386) { return "CheckSum License Manager";}
    if (port == 1387) { return "Computer Aided Design Software Inc LM";}
    if (port == 1388) { return "Objective Solutions DataBase Cache";}
    if (port == 1389) { return "Document Manager";}
    if (port == 1390) { return "Storage Controller";}
    if (port == 1391) { return "Storage Access Server";}
    if (port == 1392) { return "Print Manager";}
    if (port == 1393) { return "Network Log Server";}
    if (port == 1394) { return "Network Log Client";}
    if (port == 1395) { return "PC Workstation Manager software";}
    if (port == 1396) { return "DVL Active Mail";}
    if (port == 1397) { return "Audio Active Mail";}
    if (port == 1398) { return "Video Active Mail";}
    if (port == 1399) { return "Cadkey License Manager";}
    if (port == 1400) { return "Cadkey Tablet Daemon";}
    if (port == 1401) { return "Goldleaf License Manager";}
    if (port == 1402) { return "Prospero Resource Manager";}
    if (port == 1403) { return "Prospero Resource Manager";}
    if (port == 1404) { return "Infinite Graphics License Manager";}
    if (port == 1405) { return "IBM Remote Execution Starter";}
    if (port == 1406) { return "NetLabs License Manager";}
    if (port == 1407) { return "TIBET Data Server";}
    if (port == 1408) { return "Sophia License Manager";}
    if (port == 1409) { return "Here License Manager";}
    if (port == 1410) { return "HiQ License Manager";}
    if (port == 1411) { return "AudioFile";}
    if (port == 1412) { return "InnoSys";}
    if (port == 1413) { return "Innosys-ACL";}
    if (port == 1414) { return "IBM MQSeries";}
    if (port == 1415) { return "DBStar";}
    if (port == 1416) { return "Novell LU62 ";}
    if (port == 1417) { return "Timbuktu Service 1 Port";}
    if (port == 1418) { return "Timbuktu Service 2 Port";}
    if (port == 1419) { return "Timbuktu Service 3 Port";}
    if (port == 1420) { return "Timbuktu Service 4 Port";}
    if (port == 1421) { return "Gandalf License Manager";}
    if (port == 1422) { return "Autodesk License Manager";}
    if (port == 1423) { return "Essbase Arbor Software";}
    if (port == 1424) { return "Hybrid Encryption Protocol";}
    if (port == 1425) { return "Zion Software License Manager";}
    if (port == 1426) { return "Satellite-data Acquisition System 1";}
    if (port == 1427) { return "mloadd monitoring tool";}
    if (port == 1428) { return "Informatik License Manager";}
    if (port == 1429) { return "Hypercom NMS";}
    if (port == 1430) { return "Hypercom TPDU";}
    if (port == 1431) { return "Reverse Gossip Transport";}
    if (port == 1432) { return "Blueberry Software License Manager";}
    if (port == 1433) { return "Microsoft-SQL-Server";}
    if (port == 1434) { return "Microsoft-SQL-Monitor";}
    if (port == 1435) { return "IBM CICS";}
    if (port == 1436) { return "Satellite-data Acquisition System 2";}
    if (port == 1437) { return "Tabula";}
    if (port == 1438) { return "Eicon Security Agent/Server";}
    if (port == 1439) { return "Eicon X25/SNA Gateway";}
    if (port == 1440) { return "Eicon Service Location Protocol";}
    if (port == 1441) { return "Cadis License Management";}
    if (port == 1442) { return "Cadis License Management";}
    if (port == 1443) { return "Integrated Engineering Software";}
    if (port == 1444) { return "Marcam  License Management";}
    if (port == 1445) { return "Proxima License Manager";}
    if (port == 1446) { return "Optical Research Associates License Manager";}
    if (port == 1447) { return "Applied Parallel Research LM";}
    if (port == 1448) { return "OpenConnect License Manager";}
    if (port == 1449) { return "PEport";}
    if (port == 1450) { return "Tandem Distributed Workbench Facility";}
    if (port == 1451) { return "IBM Information Management";}
    if (port == 1452) { return "GTE Government Systems License Man";}
    if (port == 1453) { return "Genie License Manager";}
    if (port == 1454) { return "interHDL License Manager";}
    if (port == 1455) { return "ESL License Manager";}
    if (port == 1456) { return "DCA";}
    if (port == 1457) { return "Valisys License Manager";}
    if (port == 1458) { return "Nichols Research Corp";}
    if (port == 1459) { return "Proshare Notebook Application";}
    if (port == 1460) { return "Proshare Notebook Application";}
    if (port == 1461) { return "IBM Wireless LAN";}
    if (port == 1462) { return "World License Manager";}
    if (port == 1463) { return "Nucleus";}
    if (port == 1464) { return "MSL License Manager";}
    if (port == 1465) { return "Pipes Platform";}
    if (port == 1466) { return "Ocean Software License Manager";}
    if (port == 1467) { return "CSDMBASE";}
    if (port == 1468) { return "CSDM";}
    if (port == 1469) { return "Active Analysis Limited License Manager";}
    if (port == 1470) { return "Universal Analytics";}
    if (port == 1471) { return "csdmbase";}
    if (port == 1472) { return "csdm";}
    if (port == 1473) { return "OpenMath";}
    if (port == 1474) { return "Telefinder";}
    if (port == 1475) { return "Taligent License Manager";}
    if (port == 1476) { return "clvm-cfg";}
    if (port == 1477) { return "ms-sna-server";}
    if (port == 1478) { return "ms-sna-base";}
    if (port == 1479) { return "dberegister";}
    if (port == 1480) { return "PacerForum";}
    if (port == 1481) { return "AIRS";}
    if (port == 1482) { return "Miteksys License Manager";}
    if (port == 1483) { return "AFS License Manager";}
    if (port == 1484) { return "Confluent License Manager";}
    if (port == 1485) { return "LANSource";}
    if (port == 1486) { return "nms_topo_serv";}
    if (port == 1487) { return "LocalInfoSrvr";}
    if (port == 1488) { return "DocStor";}
    if (port == 1489) { return "dmdocbroker";}
    if (port == 1490) { return "insitu-conf";}
    if (port == 1492) { return "stone-design-1";}
    if (port == 1493) { return "netmap_lm";}
    if (port == 1494) { return "ica";}
    if (port == 1495) { return "cvc";}
    if (port == 1496) { return "liberty-lm";}
    if (port == 1497) { return "rfx-lm";}
    if (port == 1498) { return "Sybase SQL Any";}
    if (port == 1499) { return "Federico Heinz Consultora";}
    if (port == 1500) { return "VLSI License Manager";}
    if (port == 1501) { return "Satellite-data Acquisition System 3";}
    if (port == 1502) { return "Shiva";}
    if (port == 1503) { return "Databeam";}
    if (port == 1504) { return "EVB Software Engineering License Manager";}
    if (port == 1505) { return "Funk Software, Inc";}
    if (port == 1506) { return "Universal Time daemon  utcd";}
    if (port == 1507) { return "symplex";}
    if (port == 1508) { return "diagmond";}
    if (port == 1509) { return "Robcad, Ltd License Manager";}
    if (port == 1510) { return "Midland Valley Exploration Ltd Lic Man";}
    if (port == 1511) { return "3l-l1";}
    if (port == 1512) { return "Microsoft's Windows Internet Name Service";}
    if (port == 1513) { return "Fujitsu Systems Business of America, Inc";}
    if (port == 1514) { return "Fujitsu Systems Business of America, Inc";}
    if (port == 1515) { return "ifor-protocol";}
    if (port == 1516) { return "Virtual Places Audio data";}
    if (port == 1517) { return "Virtual Places Audio control";}
    if (port == 1518) { return "Virtual Places Video data";}
    if (port == 1519) { return "Virtual Places Video control";}
    if (port == 1520) { return "atm zip office";}
    if (port == 1521) { return "nCube License Manager";}
    if (port == 1522) { return "Ricardo North America License Manager";}
    if (port == 1523) { return "cichild";}
    if (port == 1524) { return "ingres";}
    if (port == 1525) { return "oracle / Prospero Directory Service non-priv";}
    if (port == 1526) { return "Prospero Data Access Prot non-priv";}
    if (port == 1527) { return "oracle";}
    if (port == 1529) { return "oracle";}
    if (port == 1530) { return "rap-service";}
    if (port == 1531) { return "rap-listen";}
    if (port == 1532) { return "miroconnect";}
    if (port == 1533) { return "Virtual Places Software";}
    if (port == 1534) { return "micromuse-lm";}
    if (port == 1535) { return "ampr-info";}
    if (port == 1536) { return "ampr-inter";}
    if (port == 1537) { return "isi-lm";}
    if (port == 1538) { return "3ds-lm";}
    if (port == 1539) { return "Intellistor License Manager";}
    if (port == 1540) { return "rds";}
    if (port == 1541) { return "rds2";}
    if (port == 1542) { return "gridgen-elmd";}
    if (port == 1543) { return "simba-cs";}
    if (port == 1544) { return "aspeclmd";}
    if (port == 1545) { return "vistium-share";}
    if (port == 1546) { return "abbaccuray";}
    if (port == 1547) { return "laplink";}
    if (port == 1548) { return "Axon License Manager";}
    if (port == 1549) { return "Shiva Hose";}
    if (port == 1550) { return "Image Storage license manager 3M Company";}
    if (port == 1551) { return "HECMTL-DB";}
    if (port == 1552) { return "pciarray";}
    if (port == 1553) { return "sna-cs";}
    if (port == 1554) { return "CACI Products Company License Manager";}
    if (port == 1555) { return "livelan";}
    if (port == 1556) { return "VERITAS Private Branch Exchange";}
    if (port == 1557) { return "ArborText License Manager";}
    if (port == 1558) { return "xingmpeg";}
    if (port == 1559) { return "web2host";}
    if (port == 1560) { return "ASCI-RemoteSHADOW";}
    if (port == 1561) { return "facilityview";}
    if (port == 1562) { return "pconnectmgr";}
    if (port == 1563) { return "Cadabra License Manager";}
    if (port == 1564) { return "Pay-Per-View";}
    if (port == 1565) { return "WinDD";}
    if (port == 1566) { return "CORELVIDEO";}
    if (port == 1567) { return "jlicelmd";}
    if (port == 1568) { return "tsspmap";}
    if (port == 1569) { return "ets";}
    if (port == 1570) { return "orbixd";}
    if (port == 1571) { return "Oracle Remote Data Base";}
    if (port == 1572) { return "Chipcom License Manager";}
    if (port == 1573) { return "itscomm-ns";}
    if (port == 1574) { return "mvel-lm";}
    if (port == 1575) { return "oraclenames";}
    if (port == 1576) { return "Moldflow License Manager";}
    if (port == 1577) { return "hypercube-lm";}
    if (port == 1578) { return "Jacobus License Manager";}
    if (port == 1579) { return "ioc-sea-lm";}
    if (port == 1580) { return "tn-tl-r1";}
    if (port == 1581) { return "MIL-2045-47001";}
    if (port == 1582) { return "MSIMS";}
    if (port == 1583) { return "simbaexpress";}
    if (port == 1584) { return "tn-tl-fd2";}
    if (port == 1585) { return "intv";}
    if (port == 1586) { return "ibm-abtact";}
    if (port == 1587) { return "pra_elmd";}
    if (port == 1588) { return "triquest-lm";}
    if (port == 1589) { return "VQP";}
    if (port == 1590) { return "gemini-lm";}
    if (port == 1591) { return "ncpm-pm";}
    if (port == 1592) { return "commonspace";}
    if (port == 1593) { return "mainsoft-lm";}
    if (port == 1594) { return "sixtrak";}
    if (port == 1595) { return "radio";}
    if (port == 1596) { return "radio-sm";}
    if (port == 1597) { return "orbplus-iiop";}
    if (port == 1598) { return "picknfs";}
    if (port == 1599) { return "simbaservices";}
    if (port == 1600) { return "issd";}
    if (port == 1601) { return "aas";}
    if (port == 1602) { return "inspect";}
    if (port == 1603) { return "pickodbc";}
    if (port == 1604) { return "icabrowser";}
    if (port == 1605) { return "Salutation Manager  Salutation Protocol";}
    if (port == 1606) { return "Salutation Manager  SLM-API";}
    if (port == 1607) { return "stt";}
    if (port == 1608) { return "Smart Corp License Manager";}
    if (port == 1609) { return "isysg-lm";}
    if (port == 1610) { return "taurus-wh";}
    if (port == 1611) { return "Inter Library Loan";}
    if (port == 1612) { return "NetBill Transaction Server";}
    if (port == 1613) { return "NetBill Key Repository";}
    if (port == 1614) { return "NetBill Credential Server";}
    if (port == 1615) { return "NetBill Authorization Server";}
    if (port == 1616) { return "NetBill Product Server";}
    if (port == 1617) { return "Nimrod Inter-Agent Communication";}
    if (port == 1618) { return "skytelnet";}
    if (port == 1619) { return "xs-openstorage";}
    if (port == 1620) { return "faxportwinport";}
    if (port == 1621) { return "softdataphone";}
    if (port == 1622) { return "ontime";}
    if (port == 1623) { return "jaleosnd";}
    if (port == 1624) { return "udp-sr-port";}
    if (port == 1625) { return "svs-omagent";}
    if (port == 1626) { return "Shockwave";}
    if (port == 1627) { return "T128 Gateway";}
    if (port == 1628) { return "LonTalk normal";}
    if (port == 1629) { return "LonTalk urgent";}
    if (port == 1630) { return "Oracle Net8 Cman";}
    if (port == 1631) { return "Visit view";}
    if (port == 1632) { return "PAMMRATC";}
    if (port == 1633) { return "PAMMRPC";}
    if (port == 1634) { return "Log On America Probe";}
    if (port == 1635) { return "EDB Server 1";}
    if (port == 1636) { return "ISP shared public data control";}
    if (port == 1637) { return "ISP shared local data control";}
    if (port == 1638) { return "ISP shared management control";}
    if (port == 1639) { return "cert-initiator";}
    if (port == 1640) { return "cert-responder";}
    if (port == 1641) { return "InVision";}
    if (port == 1642) { return "isis-am";}
    if (port == 1643) { return "isis-ambc";}
    if (port == 1644) { return "Satellite-data Acquisition System 4";}
    if (port == 1645) { return "SightLine";}
    if (port == 1646) { return "sa-msg-port";}
    if (port == 1647) { return "rsap";}
    if (port == 1648) { return "concurrent-lm";}
    if (port == 1649) { return "kermit";}
    if (port == 1650) { return "nkdn";}
    if (port == 1651) { return "shiva_confsrvr";}
    if (port == 1652) { return "xnmp";}
    if (port == 1653) { return "alphatech-lm";}
    if (port == 1654) { return "stargatealerts";}
    if (port == 1655) { return "dec-mbadmin";}
    if (port == 1656) { return "dec-mbadmin-h";}
    if (port == 1657) { return "fujitsu-mmpdc";}
    if (port == 1658) { return "sixnetudr";}
    if (port == 1659) { return "Silicon Grail License Manager";}
    if (port == 1660) { return "skip-mc-gikreq";}
    if (port == 1661) { return "netview-aix-1";}
    if (port == 1662) { return "netview-aix-2";}
    if (port == 1663) { return "netview-aix-3";}
    if (port == 1664) { return "netview-aix-4";}
    if (port == 1665) { return "netview-aix-5";}
    if (port == 1666) { return "netview-aix-6";}
    if (port == 1667) { return "netview-aix-7";}
    if (port == 1668) { return "netview-aix-8";}
    if (port == 1669) { return "netview-aix-9";}
    if (port == 1670) { return "netview-aix-10";}
    if (port == 1671) { return "netview-aix-11";}
    if (port == 1672) { return "netview-aix-12";}
    if (port == 1673) { return "Intel Proshare Multicast";}
    if (port == 1674) { return "Intel Proshare Multicast";}
    if (port == 1675) { return "Pacific Data Products";}
    if (port == 1676) { return "netcomm1";}
    if (port == 1677) { return "groupwise";}
    if (port == 1678) { return "prolink";}
    if (port == 1679) { return "darcorp-lm";}
    if (port == 1680) { return "microcom-sbp";}
    if (port == 1681) { return "sd-elmd";}
    if (port == 1682) { return "lanyon-lantern";}
    if (port == 1683) { return "ncpm-hip";}
    if (port == 1684) { return "SnareSecure";}
    if (port == 1685) { return "n2nremote";}
    if (port == 1686) { return "cvmon";}
    if (port == 1687) { return "nsjtp-ctrl";}
    if (port == 1688) { return "nsjtp-data";}
    if (port == 1689) { return "firefox";}
    if (port == 1690) { return "ng-umds";}
    if (port == 1691) { return "empire-empuma";}
    if (port == 1692) { return "sstsys-lm";}
    if (port == 1693) { return "rrirtr";}
    if (port == 1694) { return "rrimwm";}
    if (port == 1695) { return "rrilwm";}
    if (port == 1696) { return "rrifmm";}
    if (port == 1697) { return "rrisat";}
    if (port == 1698) { return "RSVP-ENCAPSULATION-1";}
    if (port == 1699) { return "RSVP-ENCAPSULATION-2";}
    if (port == 1700) { return "mps-raft";}
    if (port == 1701) { return "l2f/l2tp";}
    if (port == 1702) { return "deskshare";}
    if (port == 1703) { return "hb-engine";}
    if (port == 1704) { return "bcs-broker";}
    if (port == 1705) { return "slingshot";}
    if (port == 1706) { return "jetform";}
    if (port == 1707) { return "vdmplay";}
    if (port == 1708) { return "gat-lmd";}
    if (port == 1709) { return "centra";}
    if (port == 1710) { return "impera";}
    if (port == 1711) { return "pptconference";}
    if (port == 1712) { return "resource monitoring service";}
    if (port == 1713) { return "ConferenceTalk";}
    if (port == 1714) { return "sesi-lm";}
    if (port == 1715) { return "houdini-lm";}
    if (port == 1716) { return "xmsg";}
    if (port == 1717) { return "fj-hdnet";}
    if (port == 1718) { return "H323 Multicast Gatekeeper Discover";}
    if (port == 1719) { return "H323 Unicast Gatekeeper Signaling";}
    if (port == 1720) { return "H323 Call Control Signalling";}
    if (port == 1721) { return "caicci";}
    if (port == 1722) { return "HKS License Manager";}
    if (port == 1723) { return "pptp";}
    if (port == 1724) { return "csbphonemaster";}
    if (port == 1725) { return "iden-ralp";}
    if (port == 1726) { return "IBERIAGAMES";}
    if (port == 1727) { return "winddx";}
    if (port == 1728) { return "TELINDUS";}
    if (port == 1729) { return "CityNL License Management";}
    if (port == 1730) { return "roketz";}
    if (port == 1731) { return "MSICCP";}
    if (port == 1732) { return "proxim";}
    if (port == 1733) { return "SIMS - SIIPAT Protocol for Alarm Transmission";}
    if (port == 1734) { return "Camber Corporation License Management";}
    if (port == 1735) { return "PrivateChat";}
    if (port == 1736) { return "street-stream";}
    if (port == 1737) { return "ultimad";}
    if (port == 1738) { return "GameGen1";}
    if (port == 1739) { return "webaccess";}
    if (port == 1740) { return "encore";}
    if (port == 1741) { return "cisco-net-mgmt";}
    if (port == 1742) { return "3Com-nsd";}
    if (port == 1743) { return "Cinema Graphics License Manager";}
    if (port == 1744) { return "ncpm-ft";}
    if (port == 1745) { return "remote-winsock";}
    if (port == 1746) { return "ftrapid-1";}
    if (port == 1747) { return "ftrapid-2";}
    if (port == 1748) { return "oracle-em1";}
    if (port == 1749) { return "aspen-services";}
    if (port == 1750) { return "Simple Socket Library's PortMaster";}
    if (port == 1751) { return "SwiftNet";}
    if (port == 1752) { return "Leap of Faith Research License Manager";}
    if (port == 1753) { return "Predatar Comms Service";}
    if (port == 1754) { return "oracle-em2";}
    if (port == 1755) { return "ms-streaming";}
    if (port == 1756) { return "capfast-lmd";}
    if (port == 1757) { return "cnhrp";}
    if (port == 1758) { return "tftp-mcast";}
    if (port == 1759) { return "SPSS License Manager";}
    if (port == 1760) { return "www-ldap-gw";}
    if (port == 1761) { return "cft-0";}
    if (port == 1762) { return "cft-1";}
    if (port == 1763) { return "cft-2";}
    if (port == 1764) { return "cft-3";}
    if (port == 1765) { return "cft-4";}
    if (port == 1766) { return "cft-5";}
    if (port == 1767) { return "cft-6";}
    if (port == 1768) { return "cft-7";}
    if (port == 1769) { return "bmc-net-adm";}
    if (port == 1770) { return "bmc-net-svc";}
    if (port == 1771) { return "vaultbase";}
    if (port == 1772) { return "EssWeb Gateway";}
    if (port == 1773) { return "KMSControl";}
    if (port == 1774) { return "global-dtserv";}
    if (port == 1775) { return "data interchange between visual processing containers";}
    if (port == 1776) { return "Federal Emergency Management Information System";}
    if (port == 1777) { return "powerguardian";}
    if (port == 1778) { return "prodigy-internet";}
    if (port == 1779) { return "pharmasoft";}
    if (port == 1780) { return "dpkeyserv";}
    if (port == 1781) { return "answersoft-lm";}
    if (port == 1782) { return "hp-hcip";}
    if (port == 1784) { return "Finle License Manager";}
    if (port == 1785) { return "Wind River Systems License Manager";}
    if (port == 1786) { return "funk-logger";}
    if (port == 1787) { return "funk-license";}
    if (port == 1788) { return "psmond";}
    if (port == 1789) { return "hello";}
    if (port == 1790) { return "Narrative Media Streaming Protocol";}
    if (port == 1791) { return "EA1";}
    if (port == 1792) { return "ibm-dt-2";}
    if (port == 1793) { return "rsc-robot";}
    if (port == 1794) { return "cera-bcm";}
    if (port == 1795) { return "dpi-proxy";}
    if (port == 1796) { return "Vocaltec Server Administration";}
    if (port == 1797) { return "UMA";}
    if (port == 1798) { return "Event Transfer Protocol";}
    if (port == 1799) { return "NETRISK";}
    if (port == 1800) { return "ANSYS-License manager";}
    if (port == 1801) { return "Microsoft Message Que";}
    if (port == 1802) { return "ConComp1";}
    if (port == 1803) { return "HP-HCIP-GWY";}
    if (port == 1804) { return "ENL";}
    if (port == 1805) { return "ENL-Name";}
    if (port == 1806) { return "Musiconline";}
    if (port == 1807) { return "Fujitsu Hot Standby Protocol";}
    if (port == 1808) { return "Oracle-VP2";}
    if (port == 1809) { return "Oracle-VP1";}
    if (port == 1810) { return "Jerand License Manager";}
    if (port == 1811) { return "Scientia-SDB";}
    if (port == 1812) { return "RADIUS";}
    if (port == 1813) { return "RADIUS Accounting";}
    if (port == 1814) { return "TDP Suite";}
    if (port == 1815) { return "MMPFT";}
    if (port == 1816) { return "HARP";}
    if (port == 1817) { return "RKB-OSCS";}
    if (port == 1818) { return "Enhanced Trivial File Transfer Protocol";}
    if (port == 1819) { return "Plato License Manager";}
    if (port == 1820) { return "mcagent";}
    if (port == 1821) { return "donnyworld";}
    if (port == 1822) { return "es-elmd";}
    if (port == 1823) { return "Unisys Natural Language License Manager";}
    if (port == 1824) { return "metrics-pas";}
    if (port == 1825) { return "DirecPC Video";}
    if (port == 1826) { return "ARDT";}
    if (port == 1827) { return "ASI";}
    if (port == 1828) { return "itm-mcell-u";}
    if (port == 1829) { return "Optika eMedia";}
    if (port == 1830) { return "Oracle Net8 CMan Admin";}
    if (port == 1831) { return "Myrtle";}
    if (port == 1832) { return "ThoughtTreasure";}
    if (port == 1833) { return "udpradio";}
    if (port == 1834) { return "ARDUS Unicast";}
    if (port == 1835) { return "ARDUS Multicast";}
    if (port == 1836) { return "ste-smsc";}
    if (port == 1837) { return "csoft1";}
    if (port == 1838) { return "TALNET";}
    if (port == 1839) { return "netopia-vo1";}
    if (port == 1840) { return "netopia-vo2";}
    if (port == 1841) { return "netopia-vo3";}
    if (port == 1842) { return "netopia-vo4";}
    if (port == 1843) { return "netopia-vo5";}
    if (port == 1844) { return "DirecPC-DLL";}
    if (port == 1845) { return "altalink";}
    if (port == 1846) { return "Tunstall PNC";}
    if (port == 1847) { return "SLP Notification";}
    if (port == 1848) { return "fjdocdist";}
    if (port == 1849) { return "ALPHA-SMS";}
    if (port == 1850) { return "GSI";}
    if (port == 1851) { return "ctcd";}
    if (port == 1852) { return "Virtual Time";}
    if (port == 1853) { return "VIDS-AVTP";}
    if (port == 1854) { return "Buddy Draw";}
    if (port == 1855) { return "Fiorano RtrSvc";}
    if (port == 1856) { return "Fiorano MsgSvc";}
    if (port == 1857) { return "DataCaptor";}
    if (port == 1858) { return "PrivateArk";}
    if (port == 1859) { return "Gamma Fetcher Server";}
    if (port == 1860) { return "SunSCALAR Services";}
    if (port == 1861) { return "LeCroy VICP";}
    if (port == 1862) { return "MySQL Cluster Manager Agent";}
    if (port == 1863) { return "MSNP";}
    if (port == 1864) { return "Paradym 31 Port";}
    if (port == 1865) { return "ENTP";}
    if (port == 1866) { return "swrmi";}
    if (port == 1867) { return "UDRIVE";}
    if (port == 1868) { return "VizibleBrowser";}
    if (port == 1869) { return "TransAct";}
    if (port == 1870) { return "SunSCALAR DNS Service";}
    if (port == 1871) { return "Cano Central 0";}
    if (port == 1872) { return "Cano Central 1";}
    if (port == 1873) { return "Fjmpjps";}
    if (port == 1874) { return "Fjswapsnp";}
    if (port == 1875) { return "westell stats";}
    if (port == 1876) { return "ewcappsrv";}
    if (port == 1877) { return "hp-webqosdb";}
    if (port == 1878) { return "drmsmc";}
    if (port == 1879) { return "NettGain NMS";}
    if (port == 1880) { return "Gilat VSAT Control";}
    if (port == 1881) { return "IBM WebSphere MQ Everyplace";}
    if (port == 1882) { return "CA eTrust Common Services";}
    if (port == 1883) { return "Message Queuing Telemetry Transport Protocol";}
    if (port == 1884) { return "Internet Distance Map Svc";}
    if (port == 1885) { return "Veritas Trap Server";}
    if (port == 1886) { return "Leonardo over IP";}
    if (port == 1887) { return "FileX Listening Port";}
    if (port == 1888) { return "NC Config Port";}
    if (port == 1889) { return "Unify Web Adapter Service";}
    if (port == 1890) { return "wilkenListener";}
    if (port == 1891) { return "ChildKey Notification";}
    if (port == 1892) { return "ChildKey Control";}
    if (port == 1893) { return "ELAD Protocol";}
    if (port == 1894) { return "O2Server Port";}
    if (port == 1896) { return "b-novative license server";}
    if (port == 1897) { return "MetaAgent";}
    if (port == 1898) { return "Cymtec secure management";}
    if (port == 1899) { return "MC2Studios";}
    if (port == 1900) { return "SSDP";}
    if (port == 1901) { return "Fujitsu ICL Terminal Emulator Program A";}
    if (port == 1902) { return "Fujitsu ICL Terminal Emulator Program B";}
    if (port == 1903) { return "Local Link Name Resolution";}
    if (port == 1904) { return "Fujitsu ICL Terminal Emulator Program C";}
    if (port == 1905) { return "Secure UPLink Gateway Protocol";}
    if (port == 1906) { return "TPortMapperReq";}
    if (port == 1907) { return "IntraSTAR";}
    if (port == 1908) { return "Dawn";}
    if (port == 1909) { return "Global World Link";}
    if (port == 1910) { return "UltraBac Software communications port";}
    if (port == 1911) { return "Starlight Networks Multimedia Transport Protocol";}
    if (port == 1912) { return "rhp-iibp";}
    if (port == 1913) { return "armadp";}
    if (port == 1914) { return "Elm-Momentum";}
    if (port == 1915) { return "FACELINK";}
    if (port == 1916) { return "Persoft Persona";}
    if (port == 1917) { return "nOAgent";}
    if (port == 1918) { return "IBM Tivole Directory Service - NDS";}
    if (port == 1919) { return "IBM Tivoli Directory Service - DCH";}
    if (port == 1920) { return "IBM Tivoli Directory Service - FERRET";}
    if (port == 1921) { return "NoAdmin";}
    if (port == 1922) { return "Tapestry";}
    if (port == 1923) { return "SPICE";}
    if (port == 1924) { return "XIIP";}
    if (port == 1925) { return "Surrogate Discovery Port";}
    if (port == 1926) { return "Evolution Game Server";}
    if (port == 1927) { return "Videte CIPC Port";}
    if (port == 1928) { return "Expnd Maui Srvr Dscovr";}
    if (port == 1929) { return "Bandwiz System - Server";}
    if (port == 1930) { return "Drive AppServer";}
    if (port == 1931) { return "AMD SCHED";}
    if (port == 1932) { return "CTT Broker";}
    if (port == 1933) { return "IBM LM MT Agent";}
    if (port == 1934) { return "IBM LM Appl Agent";}
    if (port == 1935) { return "Macromedia Flash Communications Server MX";}
    if (port == 1936) { return "JetCmeServer Server Port";}
    if (port == 1937) { return "JetVWay Server Port";}
    if (port == 1938) { return "JetVWay Client Port";}
    if (port == 1939) { return "JetVision Server Port";}
    if (port == 1940) { return "JetVision Client Port";}
    if (port == 1941) { return "DIC-Aida";}
    if (port == 1942) { return "Real Enterprise Service";}
    if (port == 1943) { return "Beeyond Media";}
    if (port == 1944) { return "close-combat";}
    if (port == 1945) { return "dialogic-elmd";}
    if (port == 1946) { return "tekpls";}
    if (port == 1947) { return "SentinelSRM";}
    if (port == 1948) { return "eye2eye";}
    if (port == 1949) { return "ISMA Easdaq Live";}
    if (port == 1950) { return "ISMA Easdaq Test";}
    if (port == 1951) { return "bcs-lmserver";}
    if (port == 1952) { return "mpnjsc";}
    if (port == 1953) { return "Rapid Base";}
    if (port == 1954) { return "ABR-API  diskbridge";}
    if (port == 1955) { return "ABR-Secure Data  diskbridge";}
    if (port == 1956) { return "Vertel VMF DS";}
    if (port == 1957) { return "unix-status";}
    if (port == 1958) { return "CA Administration Daemon";}
    if (port == 1959) { return "SIMP Channel";}
    if (port == 1960) { return "Merit DAC NASmanager";}
    if (port == 1961) { return "BTS APPSERVER";}
    if (port == 1962) { return "BIAP-MP";}
    if (port == 1963) { return "WebMachine";}
    if (port == 1964) { return "SOLID E ENGINE";}
    if (port == 1965) { return "Tivoli NPM";}
    if (port == 1966) { return "Slush";}
    if (port == 1967) { return "SNS Quote";}
    if (port == 1968) { return "LIPSinc";}
    if (port == 1969) { return "LIPSinc 1";}
    if (port == 1970) { return "NetOp Remote Control";}
    if (port == 1971) { return "NetOp School";}
    if (port == 1972) { return "Cache";}
    if (port == 1973) { return "Data Link Switching Remote Access Protocol";}
    if (port == 1974) { return "DRP";}
    if (port == 1975) { return "TCO Flash Agent";}
    if (port == 1976) { return "TCO Reg Agent";}
    if (port == 1977) { return "TCO Address Book";}
    if (port == 1978) { return "UniSQL";}
    if (port == 1979) { return "UniSQL Java";}
    if (port == 1980) { return "PearlDoc XACT";}
    if (port == 1981) { return "p2pQ";}
    if (port == 1982) { return "Evidentiary Timestamp";}
    if (port == 1983) { return "Loophole Test Protocol";}
    if (port == 1984) { return "BB";}
    if (port == 1985) { return "Hot Standby Router Protocol";}
    if (port == 1986) { return "cisco license management";}
    if (port == 1987) { return "cisco RSRB Priority 1 port";}
    if (port == 1988) { return "cisco RSRB Priority 2 port";}
    if (port == 1989) { return "cisco RSRB Priority 3 port/MHSnet system";}
    if (port == 1990) { return "cisco STUN Priority 1 port";}
    if (port == 1991) { return "cisco STUN Priority 2 port";}
    if (port == 1992) { return "cisco STUN Priority 3 port";}
    if (port == 1993) { return "cisco SNMP TCP port";}
    if (port == 1994) { return "cisco serial tunnel port";}
    if (port == 1995) { return "cisco perf port";}
    if (port == 1996) { return "cisco Remote SRB port";}
    if (port == 1997) { return "cisco Gateway Discovery Protocol";}
    if (port == 1998) { return "cisco X25 service  XOT";}
    if (port == 1999) { return "cisco identification port";}
    if (port == 2000) { return "Cisco SCCP";}
    if (port == 2003) { return "Brutus Server";}
    if (port == 2011) { return "raid";}
    if (port == 2029) { return "Hot Standby Router Protocol IPv6";}
    if (port == 2031) { return "mobrien-chat";}
    if (port == 2036) { return "Ethernet WS DP network";}
    if (port == 2037) { return "APplus Application Server";}
    if (port == 2039) { return "Prizma Monitoring Service";}
    if (port == 2042) { return "isis";}
    if (port == 2043) { return "isis-bcast";}
    if (port == 2049) { return "Network File System - Sun Microsystems";}
    if (port == 2050) { return "Avaya EMB Config Port";}
    if (port == 2051) { return "EPNSDP";}
    if (port == 2052) { return "clearVisn Services Port";}
    if (port == 2053) { return "Lot105 DSuper Updates";}
    if (port == 2054) { return "Weblogin Port";}
    if (port == 2055) { return "Iliad-Odyssey Protocol";}
    if (port == 2056) { return "OmniSky Port";}
    if (port == 2057) { return "Rich Content Protocol";}
    if (port == 2058) { return "NewWaveSearchables RMI";}
    if (port == 2059) { return "BMC Messaging Service";}
    if (port == 2060) { return "Telenium Daemon IF";}
    if (port == 2061) { return "NetMount";}
    if (port == 2062) { return "ICG SWP Port";}
    if (port == 2063) { return "ICG Bridge Port";}
    if (port == 2064) { return "ICG IP Relay Port";}
    if (port == 2065) { return "Data Link Switch Read Port Number";}
    if (port == 2066) { return "AVM USB Remote Architecture";}
    if (port == 2067) { return "Data Link Switch Write Port Number";}
    if (port == 2068) { return "Avocent AuthSrv Protocol";}
    if (port == 2069) { return "HTTP Event Port";}
    if (port == 2070) { return "AH and ESP Encapsulated in UDP packet";}
    if (port == 2071) { return "Axon Control Protocol";}
    if (port == 2072) { return "GlobeCast mSync";}
    if (port == 2073) { return "DataReel Database Socket";}
    if (port == 2074) { return "Vertel VMF SA";}
    if (port == 2075) { return "Newlix ServerWare Engine";}
    if (port == 2076) { return "Newlix JSPConfig";}
    if (port == 2077) { return "Old Tivoli Storage Manager";}
    if (port == 2078) { return "IBM Total Productivity Center Server";}
    if (port == 2079) { return "IDWARE Router Port";}
    if (port == 2080) { return "Autodesk NLM  FLEXlm";}
    if (port == 2081) { return "KME PRINTER TRAP PORT";}
    if (port == 2082) { return "Infowave Mobility Server";}
    if (port == 2083) { return "Secure Radius Service";}
    if (port == 2084) { return "SunCluster Geographic";}
    if (port == 2085) { return "ADA Control";}
    if (port == 2086) { return "GNUnet";}
    if (port == 2087) { return "ELI - Event Logging Integration";}
    if (port == 2088) { return "IP Busy Lamp Field";}
    if (port == 2089) { return "Security Encapsulation Protocol - SEP";}
    if (port == 2090) { return "Load Report Protocol";}
    if (port == 2091) { return "PRP";}
    if (port == 2092) { return "Descent 3";}
    if (port == 2093) { return "NBX CC";}
    if (port == 2094) { return "NBX AU";}
    if (port == 2095) { return "NBX SER";}
    if (port == 2096) { return "NBX DIR";}
    if (port == 2097) { return "Jet Form Preview";}
    if (port == 2098) { return "Dialog Port";}
    if (port == 2099) { return "H2250 Annex G Signalling";}
    if (port == 2100) { return "Amiga Network Filesystem";}
    if (port == 2101) { return "rtcm-sc104";}
    if (port == 2102) { return "Zephyr server";}
    if (port == 2103) { return "Zephyr serv-hm connection";}
    if (port == 2104) { return "Zephyr hostmanager";}
    if (port == 2105) { return "MiniPay";}
    if (port == 2106) { return "MZAP";}
    if (port == 2107) { return "BinTec Admin";}
    if (port == 2108) { return "Comcam";}
    if (port == 2109) { return "Ergolight";}
    if (port == 2110) { return "UMSP";}
    if (port == 2111) { return "OPNET Dynamic Sampling Agent Transaction Protocol";}
    if (port == 2112) { return "Idonix MetaNet";}
    if (port == 2113) { return "HSL StoRM";}
    if (port == 2114) { return "Classical Music Meta-Data Access and Enhancement";}
    if (port == 2115) { return "Key Distribution Manager";}
    if (port == 2116) { return "CCOWCMR";}
    if (port == 2117) { return "MENTACLIENT";}
    if (port == 2118) { return "MENTASERVER";}
    if (port == 2119) { return "GSIGATEKEEPER";}
    if (port == 2120) { return "Quick Eagle Networks CP";}
    if (port == 2121) { return "SCIENTIA-SSDB";}
    if (port == 2122) { return "CauPC Remote Control";}
    if (port == 2123) { return "GTP-Control Plane  3GPP";}
    if (port == 2124) { return "ELATELINK";}
    if (port == 2125) { return "LOCKSTEP";}
    if (port == 2126) { return "PktCable-COPS";}
    if (port == 2127) { return "INDEX-PC-WB";}
    if (port == 2128) { return "Net Steward Control";}
    if (port == 2129) { return "cs-livecom";}
    if (port == 2130) { return "XDS";}
    if (port == 2131) { return "Avantageb2b";}
    if (port == 2132) { return "SoleraTec End Point Map";}
    if (port == 2133) { return "ZYMED-ZPP";}
    if (port == 2134) { return "AVENUE";}
    if (port == 2135) { return "Grid Resource Information Server";}
    if (port == 2136) { return "APPWORXSRV";}
    if (port == 2137) { return "CONNECT";}
    if (port == 2138) { return "UNBIND-CLUSTER";}
    if (port == 2139) { return "IAS-AUTH";}
    if (port == 2140) { return "IAS-REG";}
    if (port == 2141) { return "IAS-ADMIND";}
    if (port == 2142) { return "TDM OVER IP";}
    if (port == 2143) { return "Live Vault Job Control";}
    if (port == 2144) { return "Live Vault Fast Object Transfer";}
    if (port == 2145) { return "Live Vault Remote Diagnostic Console Support";}
    if (port == 2146) { return "Live Vault Admin Event Notification";}
    if (port == 2147) { return "Live Vault Authentication";}
    if (port == 2148) { return "VERITAS UNIVERSAL COMMUNICATION LAYER";}
    if (port == 2149) { return "ACPTSYS";}
    if (port == 2150) { return "DYNAMIC3D";}
    if (port == 2151) { return "DOCENT";}
    if (port == 2152) { return "GTP-User Plane  3GPP";}
    if (port == 2153) { return "Control Protocol";}
    if (port == 2154) { return "Standard Protocol";}
    if (port == 2155) { return "Bridge Protocol";}
    if (port == 2156) { return "Talari Reliable Protocol";}
    if (port == 2157) { return "Xerox Network Document Scan Protocol";}
    if (port == 2158) { return "TouchNetPlus Service";}
    if (port == 2159) { return "GDB Remote Debug Port";}
    if (port == 2160) { return "APC 2160";}
    if (port == 2161) { return "APC 2161";}
    if (port == 2162) { return "Navisphere";}
    if (port == 2163) { return "Navisphere Secure";}
    if (port == 2164) { return "Dynamic DNS Version 3";}
    if (port == 2165) { return "X-Bone API";}
    if (port == 2166) { return "iwserver";}
    if (port == 2167) { return "Raw Async Serial Link";}
    if (port == 2168) { return "easy-soft Multiplexer";}
    if (port == 2169) { return "Backbone for Academic Information Notification  BRAIN";}
    if (port == 2170) { return "EyeTV Server Port";}
    if (port == 2171) { return "MS Firewall Storage";}
    if (port == 2172) { return "MS Firewall SecureStorage";}
    if (port == 2173) { return "MS Firewall Replication";}
    if (port == 2174) { return "MS Firewall Intra Array";}
    if (port == 2175) { return "Microsoft Desktop AirSync Protocol";}
    if (port == 2176) { return "Microsoft ActiveSync Remote API";}
    if (port == 2177) { return "qWAVE Bandwidth Estimate";}
    if (port == 2178) { return "Peer Services for BITS";}
    if (port == 2179) { return "Microsoft RDP for virtual machines";}
    if (port == 2180) { return "Millicent Vendor Gateway Server";}
    if (port == 2181) { return "eforward";}
    if (port == 2182) { return "CGN status";}
    if (port == 2183) { return "Code Green configuration";}
    if (port == 2184) { return "NVD User";}
    if (port == 2185) { return "OnBase Distributed Disk Services";}
    if (port == 2186) { return "Guy-Tek Automated Update Applications";}
    if (port == 2187) { return "Sepehr System Management Control";}
    if (port == 2188) { return "Radware Resource Pool Manager";}
    if (port == 2189) { return "Secure Radware Resource Pool Manager";}
    if (port == 2190) { return "TiVoConnect Beacon";}
    if (port == 2191) { return "TvBus Messaging";}
    if (port == 2192) { return "ASDIS software management";}
    if (port == 2193) { return "DrWeb Enterprise Management Service";}
    if (port == 2197) { return "MNP data exchange";}
    if (port == 2198) { return "OneHome Remote Access";}
    if (port == 2199) { return "OneHome Service Port";}
    if (port == 2200) { return "ICI";}
    if (port == 2201) { return "Advanced Training System Program";}
    if (port == 2202) { return "Int Multimedia Teleconferencing Cosortium";}
    if (port == 2203) { return "b2 Runtime Protocol";}
    if (port == 2204) { return "b2 License Server";}
    if (port == 2205) { return "Java Presentation Server";}
    if (port == 2206) { return "HP OpenCall bus";}
    if (port == 2207) { return "HP Status and Services";}
    if (port == 2208) { return "HP I/O Backend";}
    if (port == 2209) { return "HP RIM for Files Portal Service";}
    if (port == 2210) { return "NOAAPORT Broadcast Network";}
    if (port == 2211) { return "EMWIN";}
    if (port == 2212) { return "LeeCO POS Server Service";}
    if (port == 2213) { return "Kali";}
    if (port == 2214) { return "RDQ Protocol Interface";}
    if (port == 2215) { return "IPCorecoza GPRS";}
    if (port == 2216) { return "VTU data service";}
    if (port == 2217) { return "GoToDevice Device Management";}
    if (port == 2218) { return "Bounzza IRC Proxy";}
    if (port == 2219) { return "NetIQ NCAP Protocol";}
    if (port == 2220) { return "NetIQ End2End";}
    if (port == 2221) { return "EtherNet/IP over TLS";}
    if (port == 2222) { return "EtherNet/IP I/O";}
    if (port == 2223) { return "Rockwell CSP2";}
    if (port == 2224) { return "Easy Flexible Internet/Multiplayer Games";}
    if (port == 2225) { return "Resource Connection Initiation Protocol";}
    if (port == 2226) { return "Digital Instinct DRM";}
    if (port == 2227) { return "DI Messaging Service";}
    if (port == 2228) { return "eHome Message Server";}
    if (port == 2229) { return "DataLens Service";}
    if (port == 2230) { return "MetaSoft Job Queue Administration Service";}
    if (port == 2231) { return "WiMAX ASN Control Plane Protocol";}
    if (port == 2232) { return "IVS Video default";}
    if (port == 2233) { return "INFOCRYPT";}
    if (port == 2234) { return "DirectPlay";}
    if (port == 2235) { return "Sercomm-WLink";}
    if (port == 2236) { return "Nani";}
    if (port == 2237) { return "Optech Port1 License Manager";}
    if (port == 2238) { return "AVIVA SNA SERVER";}
    if (port == 2239) { return "Image Query";}
    if (port == 2240) { return "RECIPe";}
    if (port == 2241) { return "IVS Daemon";}
    if (port == 2242) { return "Folio Remote Server";}
    if (port == 2243) { return "Magicom Protocol";}
    if (port == 2244) { return "NMS Server";}
    if (port == 2245) { return "HaO";}
    if (port == 2246) { return "PacketCable MTA Addr Map";}
    if (port == 2247) { return "Antidote Deployment Manager Service";}
    if (port == 2248) { return "User Management Service";}
    if (port == 2249) { return "RISO File Manager Protocol";}
    if (port == 2250) { return "remote-collab";}
    if (port == 2251) { return "Distributed Framework Port";}
    if (port == 2252) { return "NJENET using SSL";}
    if (port == 2253) { return "DTV Channel Request";}
    if (port == 2254) { return "Seismic POC Port";}
    if (port == 2255) { return "VRTP - ViRtue Transfer Protocol";}
    if (port == 2256) { return "PCC MFP";}
    if (port == 2257) { return "simple text/file transfer";}
    if (port == 2258) { return "Rotorcraft Communications Test System";}
    if (port == 2260) { return "APC 2260";}
    if (port == 2261) { return "CoMotion Master Server";}
    if (port == 2262) { return "CoMotion Backup Server";}
    if (port == 2263) { return "ECweb Configuration Service";}
    if (port == 2264) { return "Audio Precision Apx500 API Port 1";}
    if (port == 2265) { return "Audio Precision Apx500 API Port 2";}
    if (port == 2266) { return "M-Files Server";}
    if (port == 2267) { return "OntoBroker";}
    if (port == 2268) { return "AMT";}
    if (port == 2269) { return "MIKEY";}
    if (port == 2270) { return "starSchool";}
    if (port == 2271) { return "Secure Meeting Maker Scheduling";}
    if (port == 2272) { return "Meeting Maker Scheduling";}
    if (port == 2273) { return "MySQL Instance Manager";}
    if (port == 2274) { return "PCTTunneller";}
    if (port == 2275) { return "iBridge Conferencing";}
    if (port == 2276) { return "iBridge Management";}
    if (port == 2277) { return "Bt device control proxy";}
    if (port == 2278) { return "Simple Stacked Sequences Database";}
    if (port == 2279) { return "xmquery";}
    if (port == 2280) { return "LNVPOLLER";}
    if (port == 2281) { return "LNVCONSOLE";}
    if (port == 2282) { return "LNVALARM";}
    if (port == 2283) { return "LNVSTATUS";}
    if (port == 2284) { return "LNVMAPS";}
    if (port == 2285) { return "LNVMAILMON";}
    if (port == 2286) { return "NAS-Metering";}
    if (port == 2287) { return "DNA";}
    if (port == 2288) { return "NETML";}
    if (port == 2289) { return "Lookup dict server";}
    if (port == 2290) { return "Sonus Logging Services";}
    if (port == 2291) { return "EPSON Advanced Printer Share Protocol";}
    if (port == 2292) { return "Sonus Element Management Services";}
    if (port == 2293) { return "Network Platform Debug Manager";}
    if (port == 2294) { return "Konshus License Manager  FLEX";}
    if (port == 2295) { return "Advant License Manager";}
    if (port == 2296) { return "Theta License Manager  Rainbow";}
    if (port == 2297) { return "D2K DataMover 1";}
    if (port == 2298) { return "D2K DataMover 2";}
    if (port == 2299) { return "PC Telecommute";}
    if (port == 2300) { return "CVMMON";}
    if (port == 2301) { return "Compaq HTTP";}
    if (port == 2302) { return "Bindery Support";}
    if (port == 2303) { return "Proxy Gateway";}
    if (port == 2304) { return "Attachmate UTS";}
    if (port == 2305) { return "MT ScaleServer";}
    if (port == 2306) { return "TAPPI BoxNet";}
    if (port == 2307) { return "pehelp";}
    if (port == 2308) { return "sdhelp";}
    if (port == 2309) { return "SD Server";}
    if (port == 2310) { return "SD Client";}
    if (port == 2311) { return "Message Service";}
    if (port == 2312) { return "WANScaler Communication Service";}
    if (port == 2313) { return "IAPP  Inter Access Point Protocol";}
    if (port == 2314) { return "CR WebSystems";}
    if (port == 2315) { return "Precise Sft";}
    if (port == 2316) { return "SENT License Manager";}
    if (port == 2317) { return "Attachmate G32";}
    if (port == 2318) { return "Cadence Control";}
    if (port == 2319) { return "InfoLibria";}
    if (port == 2320) { return "Siebel NS";}
    if (port == 2321) { return "RDLAP";}
    if (port == 2322) { return "ofsd";}
    if (port == 2323) { return "3d-nfsd";}
    if (port == 2324) { return "Cosmocall";}
    if (port == 2325) { return "ANSYS Licensing Interconnect";}
    if (port == 2326) { return "IDCP";}
    if (port == 2327) { return "xingcsm";}
    if (port == 2328) { return "Netrix SFTM";}
    if (port == 2329) { return "NVD";}
    if (port == 2330) { return "TSCCHAT";}
    if (port == 2331) { return "AGENTVIEW";}
    if (port == 2332) { return "RCC Host";}
    if (port == 2333) { return "SNAPP";}
    if (port == 2334) { return "ACE Client Auth";}
    if (port == 2335) { return "ACE Proxy";}
    if (port == 2336) { return "Apple UG Control";}
    if (port == 2337) { return "ideesrv";}
    if (port == 2338) { return "Norton Lambert";}
    if (port == 2339) { return "3Com WebView";}
    if (port == 2340) { return "WRS Registry ";}
    if (port == 2341) { return "XIO Status";}
    if (port == 2342) { return "Seagate Manage Exec";}
    if (port == 2343) { return "nati logos";}
    if (port == 2344) { return "fcmsys";}
    if (port == 2345) { return "dbm";}
    if (port == 2346) { return "Game Connection Port";}
    if (port == 2347) { return "Game Announcement and Location";}
    if (port == 2348) { return "Information to query for game status";}
    if (port == 2349) { return "Diagnostics Port";}
    if (port == 2350) { return "Pharos Booking Server";}
    if (port == 2351) { return "psrserver";}
    if (port == 2352) { return "pslserver";}
    if (port == 2353) { return "pspserver";}
    if (port == 2354) { return "psprserver";}
    if (port == 2355) { return "psdbserver";}
    if (port == 2356) { return "GXT License Managemant";}
    if (port == 2357) { return "UniHub Server";}
    if (port == 2358) { return "Futrix";}
    if (port == 2359) { return "FlukeServer";}
    if (port == 2360) { return "NexstorIndLtd";}
    if (port == 2361) { return "TL1";}
    if (port == 2362) { return "digiman";}
    if (port == 2363) { return "Media Central NFSD";}
    if (port == 2364) { return "OI-2000";}
    if (port == 2365) { return "dbref";}
    if (port == 2366) { return "qip-login";}
    if (port == 2367) { return "Service Control";}
    if (port == 2368) { return "OpenTable";}
    if (port == 2370) { return "L3-HBMon";}
    if (port == 2371) { return "HP Remote Device Access";}
    if (port == 2372) { return "LanMessenger";}
    if (port == 2373) { return "Remograph License Manager";}
    if (port == 2374) { return "Hydra RPC";}
    if (port == 2375) { return "Docker REST API  plain text";}
    if (port == 2376) { return "Docker REST API  ssl";}
    if (port == 2377) { return "RPC interface for Docker Swarm";}
    if (port == 2379) { return "etcd client communication";}
    if (port == 2380) { return "etcd server to server communication";}
    if (port == 2381) { return "Compaq HTTPS";}
    if (port == 2382) { return "Microsoft OLAP";}
    if (port == 2383) { return "Microsoft OLAP";}
    if (port == 2384) { return "SD-REQUEST";}
    if (port == 2385) { return "SD-DATA";}
    if (port == 2386) { return "Virtual Tape";}
    if (port == 2387) { return "VSAM Redirector";}
    if (port == 2388) { return "MYNAH AutoStart";}
    if (port == 2389) { return "OpenView Session Mgr";}
    if (port == 2390) { return "RSMTP";}
    if (port == 2391) { return "3COM Net Management";}
    if (port == 2392) { return "Tactical Auth";}
    if (port == 2393) { return "MS OLAP 1";}
    if (port == 2394) { return "MS OLAP 2";}
    if (port == 2395) { return "LAN900 Remote";}
    if (port == 2396) { return "Wusage";}
    if (port == 2397) { return "NCL";}
    if (port == 2398) { return "Orbiter";}
    if (port == 2399) { return "FileMaker, Inc - Data Access Layer";}
    if (port == 2400) { return "OpEquus Server";}
    if (port == 2401) { return "cvspserver";}
    if (port == 2402) { return "TaskMaster 2000 Server";}
    if (port == 2403) { return "TaskMaster 2000 Web";}
    if (port == 2404) { return "IEC 60870-5-104 process control over IP";}
    if (port == 2405) { return "TRC Netpoll";}
    if (port == 2406) { return "JediServer";}
    if (port == 2407) { return "Orion";}
    if (port == 2408) { return "CloudFlare Railgun Web Acceleration Protocol";}
    if (port == 2409) { return "SNS Protocol";}
    if (port == 2410) { return "VRTS Registry";}
    if (port == 2411) { return "Netwave AP Management";}
    if (port == 2412) { return "CDN";}
    if (port == 2413) { return "orion-rmi-reg";}
    if (port == 2414) { return "Beeyond";}
    if (port == 2415) { return "Codima Remote Transaction Protocol";}
    if (port == 2416) { return "RMT Server";}
    if (port == 2417) { return "Composit Server";}
    if (port == 2418) { return "cas";}
    if (port == 2419) { return "Attachmate S2S";}
    if (port == 2420) { return "DSL Remote Management";}
    if (port == 2421) { return "G-Talk";}
    if (port == 2422) { return "CRMSBITS";}
    if (port == 2423) { return "RNRP";}
    if (port == 2424) { return "KOFAX-SVR";}
    if (port == 2425) { return "Fujitsu App Manager";}
    if (port == 2426) { return "VeloCloud MultiPath Protocol";}
    if (port == 2427) { return "Media Gateway Control Protocol Gateway";}
    if (port == 2428) { return "One Way Trip Time";}
    if (port == 2429) { return "FT-ROLE";}
    if (port == 2430) { return "venus";}
    if (port == 2431) { return "venus-se";}
    if (port == 2432) { return "codasrv";}
    if (port == 2433) { return "codasrv-se";}
    if (port == 2434) { return "pxc-epmap";}
    if (port == 2435) { return "OptiLogic";}
    if (port == 2436) { return "TOP/X";}
    if (port == 2437) { return "UniControl";}
    if (port == 2438) { return "MSP";}
    if (port == 2439) { return "SybaseDBSynch";}
    if (port == 2440) { return "Spearway Lockers";}
    if (port == 2441) { return "Pervasive I*net Data Server";}
    if (port == 2442) { return "Netangel";}
    if (port == 2443) { return "PowerClient Central Storage Facility";}
    if (port == 2444) { return "BT PP2 Sectrans";}
    if (port == 2445) { return "DTN1";}
    if (port == 2446) { return "bues_service";}
    if (port == 2447) { return "OpenView NNM daemon";}
    if (port == 2448) { return "hpppsvr";}
    if (port == 2449) { return "RATL";}
    if (port == 2450) { return "netadmin";}
    if (port == 2451) { return "netchat";}
    if (port == 2452) { return "SnifferClient";}
    if (port == 2453) { return "madge ltd";}
    if (port == 2454) { return "IndX-DDS";}
    if (port == 2455) { return "WAGO-IO-SYSTEM";}
    if (port == 2456) { return "altav-remmgt";}
    if (port == 2457) { return "Rapido_IP";}
    if (port == 2458) { return "griffin";}
    if (port == 2459) { return "Community";}
    if (port == 2460) { return "ms-theater";}
    if (port == 2461) { return "qadmifoper";}
    if (port == 2462) { return "qadmifevent";}
    if (port == 2463) { return "LSI RAID Management";}
    if (port == 2464) { return "DirecPC SI";}
    if (port == 2465) { return "Load Balance Management";}
    if (port == 2466) { return "Load Balance Forwarding";}
    if (port == 2467) { return "High Criteria";}
    if (port == 2468) { return "qip_msgd";}
    if (port == 2469) { return "MTI-TCS-COMM";}
    if (port == 2470) { return "taskman port";}
    if (port == 2471) { return "SeaODBC";}
    if (port == 2472) { return "C3";}
    if (port == 2473) { return "Aker-cdp";}
    if (port == 2474) { return "Vital Analysis";}
    if (port == 2475) { return "ACE Server";}
    if (port == 2476) { return "ACE Server Propagation";}
    if (port == 2477) { return "SecurSight Certificate Valifation Service";}
    if (port == 2478) { return "SecurSight Authentication Server  SSL";}
    if (port == 2479) { return "SecurSight Event Logging Server  SSL";}
    if (port == 2480) { return "Informatica PowerExchange Listener";}
    if (port == 2481) { return "Oracle GIOP";}
    if (port == 2482) { return "Oracle GIOP SSL";}
    if (port == 2483) { return "Oracle TTC";}
    if (port == 2484) { return "Oracle TTC SSL";}
    if (port == 2485) { return "Net Objects1";}
    if (port == 2486) { return "Net Objects2";}
    if (port == 2487) { return "Policy Notice Service";}
    if (port == 2488) { return "Moy Corporation";}
    if (port == 2489) { return "TSILB";}
    if (port == 2490) { return "qip_qdhcp";}
    if (port == 2491) { return "Conclave CPP";}
    if (port == 2492) { return "GROOVE";}
    if (port == 2493) { return "Talarian MQS";}
    if (port == 2494) { return "BMC AR";}
    if (port == 2495) { return "Fast Remote Services";}
    if (port == 2496) { return "DIRGIS";}
    if (port == 2497) { return "Quad DB";}
    if (port == 2498) { return "ODN-CasTraq";}
    if (port == 2499) { return "UniControl";}
    if (port == 2500) { return "Resource Tracking system server";}
    if (port == 2501) { return "Resource Tracking system client";}
    if (port == 2502) { return "Kentrox Protocol";}
    if (port == 2503) { return "NMS-DPNSS";}
    if (port == 2504) { return "WLBS";}
    if (port == 2505) { return "PowerPlay Control";}
    if (port == 2506) { return "jbroker";}
    if (port == 2507) { return "spock";}
    if (port == 2508) { return "JDataStore";}
    if (port == 2509) { return "fjmpss";}
    if (port == 2510) { return "fjappmgrbulk";}
    if (port == 2511) { return "Metastorm";}
    if (port == 2512) { return "Citrix IMA";}
    if (port == 2513) { return "Citrix ADMIN";}
    if (port == 2514) { return "Facsys NTP";}
    if (port == 2515) { return "Facsys Router";}
    if (port == 2516) { return "Main Control";}
    if (port == 2517) { return "H323 Annex E Call Control Signalling Transport";}
    if (port == 2518) { return "Willy";}
    if (port == 2519) { return "globmsgsvc";}
    if (port == 2520) { return "Pervasive Listener";}
    if (port == 2521) { return "Adaptec Manager";}
    if (port == 2522) { return "WinDb";}
    if (port == 2523) { return "Qke LLC V3";}
    if (port == 2524) { return "Optiwave License Management";}
    if (port == 2525) { return "MS V-Worlds";}
    if (port == 2526) { return "EMA License Manager";}
    if (port == 2527) { return "IQ Server";}
    if (port == 2528) { return "NCR CCL";}
    if (port == 2529) { return "UTS FTP";}
    if (port == 2530) { return "VR Commerce";}
    if (port == 2531) { return "ITO-E GUI";}
    if (port == 2532) { return "OVTOPMD";}
    if (port == 2533) { return "SnifferServer";}
    if (port == 2534) { return "Combox Web Access";}
    if (port == 2535) { return "MADCAP";}
    if (port == 2536) { return "btpp2audctr1";}
    if (port == 2537) { return "Upgrade Protocol";}
    if (port == 2538) { return "vnwk-prapi";}
    if (port == 2539) { return "VSI Admin";}
    if (port == 2540) { return "LonWorks";}
    if (port == 2541) { return "LonWorks2";}
    if (port == 2542) { return "uDraw Graph";}
    if (port == 2543) { return "REFTEK";}
    if (port == 2544) { return "Management Daemon Refresh";}
    if (port == 2545) { return "sis-emt";}
    if (port == 2546) { return "vytalvaultbrtp";}
    if (port == 2547) { return "vytalvaultvsmp";}
    if (port == 2548) { return "vytalvaultpipe";}
    if (port == 2549) { return "IPASS";}
    if (port == 2550) { return "ADS";}
    if (port == 2551) { return "ISG UDA Server";}
    if (port == 2552) { return "Call Logging";}
    if (port == 2553) { return "efidiningport";}
    if (port == 2554) { return "VCnet-Link v10";}
    if (port == 2555) { return "Compaq WCP";}
    if (port == 2556) { return "nicetec-nmsvc";}
    if (port == 2557) { return "nicetec-mgmt";}
    if (port == 2558) { return "PCLE Multi Media";}
    if (port == 2559) { return "LSTP";}
    if (port == 2560) { return "labrat";}
    if (port == 2561) { return "MosaixCC";}
    if (port == 2562) { return "Delibo";}
    if (port == 2563) { return "CTI Redwood";}
    if (port == 2564) { return "HP 3000 NS/VT block mode telnet";}
    if (port == 2565) { return "Coordinator Server";}
    if (port == 2566) { return "pcs-pcw";}
    if (port == 2567) { return "Cisco Line Protocol";}
    if (port == 2568) { return "SPAM TRAP";}
    if (port == 2569) { return "Sonus Call Signal";}
    if (port == 2570) { return "HS Port";}
    if (port == 2571) { return "CECSVC";}
    if (port == 2572) { return "IBP";}
    if (port == 2573) { return "Trust Establish";}
    if (port == 2574) { return "Blockade BPSP";}
    if (port == 2575) { return "HL7";}
    if (port == 2576) { return "TCL Pro Debugger";}
    if (port == 2577) { return "Scriptics Lsrvr";}
    if (port == 2578) { return "RVS ISDN DCP";}
    if (port == 2579) { return "mpfoncl";}
    if (port == 2580) { return "Tributary";}
    if (port == 2581) { return "ARGIS TE";}
    if (port == 2582) { return "ARGIS DS";}
    if (port == 2583) { return "MON";}
    if (port == 2584) { return "cyaserv";}
    if (port == 2585) { return "NETX Server";}
    if (port == 2586) { return "NETX Agent";}
    if (port == 2587) { return "MASC";}
    if (port == 2588) { return "Privilege";}
    if (port == 2589) { return "quartus tcl";}
    if (port == 2590) { return "idotdist";}
    if (port == 2591) { return "Maytag Shuffle";}
    if (port == 2592) { return "netrek";}
    if (port == 2593) { return "MNS Mail Notice Service";}
    if (port == 2594) { return "Data Base Server";}
    if (port == 2595) { return "World Fusion 1";}
    if (port == 2596) { return "World Fusion 2";}
    if (port == 2597) { return "Homestead Glory";}
    if (port == 2598) { return "Citrix MA Client";}
    if (port == 2599) { return "Snap Discovery";}
    if (port == 2600) { return "HPSTGMGR";}
    if (port == 2601) { return "discp client";}
    if (port == 2602) { return "discp server";}
    if (port == 2603) { return "Service Meter";}
    if (port == 2604) { return "NSC CCS";}
    if (port == 2605) { return "NSC POSA";}
    if (port == 2606) { return "Dell Netmon";}
    if (port == 2607) { return "Dell Connection";}
    if (port == 2608) { return "Wag Service";}
    if (port == 2609) { return "System Monitor";}
    if (port == 2610) { return "VersaTek";}
    if (port == 2611) { return "LIONHEAD";}
    if (port == 2612) { return "Qpasa Agent";}
    if (port == 2613) { return "SMNTUBootstrap";}
    if (port == 2614) { return "Never Offline";}
    if (port == 2615) { return "firepower";}
    if (port == 2616) { return "appswitch-emp";}
    if (port == 2617) { return "Clinical Context Managers";}
    if (port == 2618) { return "Priority E-Com";}
    if (port == 2619) { return "bruce";}
    if (port == 2620) { return "LPSRecommender";}
    if (port == 2621) { return "Miles Apart Jukebox Server";}
    if (port == 2622) { return "MetricaDBC";}
    if (port == 2623) { return "LMDP";}
    if (port == 2624) { return "Aria";}
    if (port == 2625) { return "Blwnkl Port";}
    if (port == 2626) { return "gbjd816";}
    if (port == 2627) { return "Moshe Beeri";}
    if (port == 2628) { return "DICT";}
    if (port == 2629) { return "Sitara Server";}
    if (port == 2630) { return "Sitara Management";}
    if (port == 2631) { return "Sitara Dir";}
    if (port == 2632) { return "IRdg Post";}
    if (port == 2633) { return "InterIntelli";}
    if (port == 2634) { return "PK Electronics";}
    if (port == 2635) { return "Back Burner";}
    if (port == 2636) { return "Solve";}
    if (port == 2637) { return "Import Document Service";}
    if (port == 2638) { return "Sybase Anywhere";}
    if (port == 2639) { return "AMInet";}
    if (port == 2640) { return "Alcorn McBride Inc protocol used for device control";}
    if (port == 2641) { return "HDL Server";}
    if (port == 2642) { return "Tragic";}
    if (port == 2643) { return "GTE-SAMP";}
    if (port == 2644) { return "Travsoft IPX Tunnel";}
    if (port == 2645) { return "Novell IPX CMD";}
    if (port == 2646) { return "AND License Manager";}
    if (port == 2647) { return "SyncServer";}
    if (port == 2648) { return "Upsnotifyprot";}
    if (port == 2649) { return "VPSIPPORT";}
    if (port == 2650) { return "eristwoguns";}
    if (port == 2651) { return "EBInSite";}
    if (port == 2652) { return "InterPathPanel";}
    if (port == 2653) { return "Sonus";}
    if (port == 2654) { return "Corel VNC Admin";}
    if (port == 2655) { return "UNIX Nt Glue";}
    if (port == 2656) { return "Kana";}
    if (port == 2657) { return "SNS Dispatcher";}
    if (port == 2658) { return "SNS Admin";}
    if (port == 2659) { return "SNS Query";}
    if (port == 2660) { return "GC Monitor";}
    if (port == 2661) { return "OLHOST";}
    if (port == 2662) { return "BinTec-CAPI";}
    if (port == 2663) { return "BinTec-TAPI";}
    if (port == 2664) { return "Patrol for MQ GM";}
    if (port == 2665) { return "Patrol for MQ NM";}
    if (port == 2666) { return "extensis";}
    if (port == 2667) { return "Alarm Clock Server";}
    if (port == 2668) { return "Alarm Clock Client";}
    if (port == 2669) { return "TOAD";}
    if (port == 2670) { return "TVE Announce";}
    if (port == 2671) { return "newlixreg";}
    if (port == 2672) { return "nhserver";}
    if (port == 2673) { return "First Call 42";}
    if (port == 2674) { return "ewnn";}
    if (port == 2675) { return "TTC ETAP";}
    if (port == 2676) { return "SIMSLink";}
    if (port == 2677) { return "Gadget Gate 1 Way";}
    if (port == 2678) { return "Gadget Gate 2 Way";}
    if (port == 2679) { return "Sync Server SSL";}
    if (port == 2680) { return "pxc-sapxom";}
    if (port == 2681) { return "mpnjsomb";}
    if (port == 2683) { return "NCDLoadBalance";}
    if (port == 2684) { return "mpnjsosv";}
    if (port == 2685) { return "mpnjsocl";}
    if (port == 2686) { return "mpnjsomg";}
    if (port == 2687) { return "pq-lic-mgmt";}
    if (port == 2688) { return "md-cf-http";}
    if (port == 2689) { return "FastLynx";}
    if (port == 2690) { return "HP NNM Embedded Database";}
    if (port == 2691) { return "ITInternet ISM Server";}
    if (port == 2692) { return "Admins LMS";}
    if (port == 2694) { return "pwrsevent";}
    if (port == 2695) { return "VSPREAD";}
    if (port == 2696) { return "Unify Admin";}
    if (port == 2697) { return "Oce SNMP Trap Port";}
    if (port == 2698) { return "MCK-IVPIP";}
    if (port == 2699) { return "Csoft Plus Client";}
    if (port == 2700) { return "tqdata";}
    if (port == 2701) { return "SMS RCINFO";}
    if (port == 2702) { return "SMS XFER";}
    if (port == 2703) { return "SMS CHAT";}
    if (port == 2704) { return "SMS REMCTRL";}
    if (port == 2705) { return "SDS Admin";}
    if (port == 2706) { return "NCD Mirroring";}
    if (port == 2707) { return "EMCSYMAPIPORT";}
    if (port == 2708) { return "Banyan-Net";}
    if (port == 2709) { return "Supermon";}
    if (port == 2710) { return "SSO Service";}
    if (port == 2711) { return "SSO Control";}
    if (port == 2712) { return "Axapta Object Communication Protocol";}
    if (port == 2713) { return "Raven Trinity Broker Service";}
    if (port == 2714) { return "Raven Trinity Data Mover";}
    if (port == 2715) { return "HPSTGMGR2";}
    if (port == 2716) { return "Inova IP Disco";}
    if (port == 2717) { return "PN REQUESTER";}
    if (port == 2718) { return "PN REQUESTER 2";}
    if (port == 2719) { return "Scan & Change";}
    if (port == 2720) { return "wkars";}
    if (port == 2721) { return "Smart Diagnose";}
    if (port == 2722) { return "Proactive Server";}
    if (port == 2723) { return "WatchDog NT Protocol";}
    if (port == 2724) { return "qotps";}
    if (port == 2725) { return "MSOLAP PTP2";}
    if (port == 2726) { return "TAMS";}
    if (port == 2727) { return "Media Gateway Control Protocol Call Agent";}
    if (port == 2728) { return "SQDR";}
    if (port == 2729) { return "TCIM Control";}
    if (port == 2730) { return "NEC RaidPlus";}
    if (port == 2731) { return "Fyre Messanger";}
    if (port == 2732) { return "G5M";}
    if (port == 2733) { return "Signet CTF";}
    if (port == 2734) { return "CCS Software";}
    if (port == 2735) { return "NetIQ Monitor Console";}
    if (port == 2736) { return "RADWIZ NMS SRV";}
    if (port == 2737) { return "SRP Feedback";}
    if (port == 2738) { return "NDL TCP-OSI Gateway";}
    if (port == 2739) { return "TN Timing";}
    if (port == 2740) { return "Alarm";}
    if (port == 2741) { return "TSB";}
    if (port == 2742) { return "TSB2";}
    if (port == 2743) { return "murx";}
    if (port == 2744) { return "honyaku";}
    if (port == 2745) { return "URBISNET";}
    if (port == 2746) { return "CPUDPENCAP";}
    if (port == 2752) { return "RSISYS ACCESS";}
    if (port == 2753) { return "de-spot";}
    if (port == 2754) { return "APOLLO CC";}
    if (port == 2755) { return "Express Pay";}
    if (port == 2756) { return "simplement-tie";}
    if (port == 2757) { return "CNRP";}
    if (port == 2758) { return "APOLLO Status";}
    if (port == 2759) { return "APOLLO GMS";}
    if (port == 2760) { return "Saba MS";}
    if (port == 2761) { return "DICOM ISCL";}
    if (port == 2762) { return "DICOM TLS";}
    if (port == 2763) { return "Desktop DNA";}
    if (port == 2764) { return "Data Insurance";}
    if (port == 2765) { return "qip-audup";}
    if (port == 2766) { return "Compaq SCP";}
    if (port == 2767) { return "UADTC";}
    if (port == 2768) { return "UACS";}
    if (port == 2769) { return "eXcE";}
    if (port == 2770) { return "Veronica";}
    if (port == 2771) { return "Vergence CM";}
    if (port == 2772) { return "auris";}
    if (port == 2773) { return "RBackup Remote Backup";}
    if (port == 2774) { return "RBackup Remote Backup";}
    if (port == 2775) { return "SMPP";}
    if (port == 2776) { return "Ridgeway Systems & Software";}
    if (port == 2777) { return "Ridgeway Systems & Software";}
    if (port == 2778) { return "Gwen-Sonya";}
    if (port == 2779) { return "LBC Sync";}
    if (port == 2780) { return "LBC Control";}
    if (port == 2781) { return "whosells";}
    if (port == 2782) { return "everydayrc";}
    if (port == 2783) { return "AISES";}
    if (port == 2784) { return "world wide web - development";}
    if (port == 2785) { return "aic-np";}
    if (port == 2786) { return "aic-oncrpc - Destiny MCD database";}
    if (port == 2787) { return "piccolo - Cornerstone Software";}
    if (port == 2788) { return "NetWare Loadable Module - Seagate Software";}
    if (port == 2789) { return "Media Agent";}
    if (port == 2790) { return "PLG Proxy";}
    if (port == 2791) { return "MT Port Registrator";}
    if (port == 2792) { return "f5-globalsite";}
    if (port == 2793) { return "initlsmsad";}
    if (port == 2795) { return "LiveStats";}
    if (port == 2796) { return "ac-tech";}
    if (port == 2797) { return "esp-encap";}
    if (port == 2798) { return "TMESIS-UPShot";}
    if (port == 2799) { return "ICON Discover";}
    if (port == 2800) { return "ACC RAID";}
    if (port == 2801) { return "IGCP";}
    if (port == 2802) { return "Veritas TCP1";}
    if (port == 2803) { return "btprjctrl";}
    if (port == 2804) { return "March Networks Digital Video Recorders and Enterprise Service Manager products";}
    if (port == 2805) { return "WTA WSP-S";}
    if (port == 2806) { return "cspuni";}
    if (port == 2807) { return "cspmulti";}
    if (port == 2808) { return "J-LAN-P";}
    if (port == 2809) { return "CORBA LOC";}
    if (port == 2810) { return "Active Net Steward";}
    if (port == 2811) { return "GSI FTP";}
    if (port == 2812) { return "atmtcp";}
    if (port == 2813) { return "llm-pass";}
    if (port == 2814) { return "llm-csv";}
    if (port == 2815) { return "LBC Measurement";}
    if (port == 2816) { return "LBC Watchdog";}
    if (port == 2817) { return "NMSig Port";}
    if (port == 2818) { return "rmlnk";}
    if (port == 2819) { return "FC Fault Notification";}
    if (port == 2820) { return "UniVision";}
    if (port == 2821) { return "VERITAS Authentication Service";}
    if (port == 2822) { return "ka0wuc";}
    if (port == 2823) { return "CQG Net/LAN";}
    if (port == 2824) { return "CQG Net/LAN 1";}
    if (port == 2826) { return "slc systemlog";}
    if (port == 2827) { return "slc ctrlrloops";}
    if (port == 2828) { return "ITM License Manager";}
    if (port == 2829) { return "silkp1";}
    if (port == 2830) { return "silkp2";}
    if (port == 2831) { return "silkp3";}
    if (port == 2832) { return "silkp4";}
    if (port == 2833) { return "glishd";}
    if (port == 2834) { return "EVTP";}
    if (port == 2835) { return "EVTP-DATA";}
    if (port == 2836) { return "catalyst";}
    if (port == 2837) { return "Repliweb";}
    if (port == 2838) { return "Starbot";}
    if (port == 2839) { return "NMSigPort";}
    if (port == 2840) { return "l3-exprt";}
    if (port == 2841) { return "l3-ranger";}
    if (port == 2842) { return "l3-hawk";}
    if (port == 2843) { return "PDnet";}
    if (port == 2844) { return "BPCP POLL";}
    if (port == 2845) { return "BPCP TRAP";}
    if (port == 2846) { return "AIMPP Hello";}
    if (port == 2847) { return "AIMPP Port Req";}
    if (port == 2848) { return "AMT-BLC-PORT";}
    if (port == 2849) { return "FXP";}
    if (port == 2850) { return "MetaConsole";}
    if (port == 2851) { return "webemshttp";}
    if (port == 2852) { return "bears-01";}
    if (port == 2853) { return "ISPipes";}
    if (port == 2854) { return "InfoMover";}
    if (port == 2855) { return "MSRP over TCP";}
    if (port == 2856) { return "cesdinv";}
    if (port == 2857) { return "SimCtIP";}
    if (port == 2858) { return "ECNP";}
    if (port == 2859) { return "Active Memory";}
    if (port == 2860) { return "Dialpad Voice 1";}
    if (port == 2861) { return "Dialpad Voice 2";}
    if (port == 2862) { return "TTG Protocol";}
    if (port == 2863) { return "Sonar Data";}
    if (port == 2864) { return "main 5001 cmd";}
    if (port == 2865) { return "pit-vpn";}
    if (port == 2866) { return "iwlistener";}
    if (port == 2867) { return "esps-portal";}
    if (port == 2868) { return "Norman Proprietaqry Events Protocol";}
    if (port == 2869) { return "ICSLAP";}
    if (port == 2870) { return "daishi";}
    if (port == 2871) { return "MSI Select Play";}
    if (port == 2872) { return "RADIX";}
    if (port == 2874) { return "DX Message Base Transport Protocol";}
    if (port == 2875) { return "DX Message Base Transport Protocol";}
    if (port == 2876) { return "SPS Tunnel";}
    if (port == 2877) { return "BLUELANCE";}
    if (port == 2878) { return "AAP";}
    if (port == 2879) { return "ucentric-ds";}
    if (port == 2880) { return "Synapse Transport";}
    if (port == 2881) { return "NDSP";}
    if (port == 2882) { return "NDTP";}
    if (port == 2883) { return "NDNP";}
    if (port == 2884) { return "Flash Msg";}
    if (port == 2885) { return "TopFlow";}
    if (port == 2886) { return "RESPONSELOGIC";}
    if (port == 2887) { return "aironet";}
    if (port == 2888) { return "SPCSDLOBBY";}
    if (port == 2889) { return "RSOM";}
    if (port == 2890) { return "CSPCLMULTI";}
    if (port == 2891) { return "CINEGRFX-ELMD License Manager";}
    if (port == 2892) { return "SNIFFERDATA";}
    if (port == 2893) { return "VSECONNECTOR";}
    if (port == 2894) { return "ABACUS-REMOTE";}
    if (port == 2895) { return "NATUS LINK";}
    if (port == 2896) { return "ECOVISIONG6-1";}
    if (port == 2897) { return "Citrix RTMP";}
    if (port == 2898) { return "APPLIANCE-CFG";}
    if (port == 2899) { return "POWERGEMPLUS";}
    if (port == 2900) { return "QUICKSUITE";}
    if (port == 2901) { return "ALLSTORCNS";}
    if (port == 2902) { return "NET ASPI";}
    if (port == 2903) { return "SUITCASE";}
    if (port == 2904) { return "M2UA";}
    if (port == 2905) { return "M3UA";}
    if (port == 2906) { return "CALLER9";}
    if (port == 2907) { return "WEBMETHODS B2B";}
    if (port == 2908) { return "mao";}
    if (port == 2909) { return "Funk Dialout";}
    if (port == 2910) { return "TDAccess";}
    if (port == 2911) { return "Blockade";}
    if (port == 2912) { return "Epicon";}
    if (port == 2913) { return "Booster Ware";}
    if (port == 2914) { return "Game Lobby";}
    if (port == 2915) { return "TK Socket";}
    if (port == 2916) { return "Elvin Server";}
    if (port == 2917) { return "Elvin Client";}
    if (port == 2918) { return "Kasten Chase Pad";}
    if (port == 2919) { return "roboER";}
    if (port == 2920) { return "roboEDA";}
    if (port == 2921) { return "CESD Contents Delivery Management";}
    if (port == 2922) { return "CESD Contents Delivery Data Transfer";}
    if (port == 2923) { return "WTA-WSP-WTP-S";}
    if (port == 2924) { return "PRECISE-VIP";}
    if (port == 2926) { return "MOBILE-FILE-DL";}
    if (port == 2927) { return "UNIMOBILECTRL";}
    if (port == 2928) { return "REDSTONE-CPSS";}
    if (port == 2929) { return "AMX-WEBADMIN";}
    if (port == 2930) { return "AMX-WEBLINX";}
    if (port == 2931) { return "Circle-X";}
    if (port == 2932) { return "INCP";}
    if (port == 2933) { return "4-TIER OPM GW";}
    if (port == 2934) { return "4-TIER OPM CLI";}
    if (port == 2935) { return "QTP";}
    if (port == 2936) { return "OTPatch";}
    if (port == 2937) { return "PNACONSULT-LM";}
    if (port == 2938) { return "SM-PAS-1";}
    if (port == 2939) { return "SM-PAS-2";}
    if (port == 2940) { return "SM-PAS-3";}
    if (port == 2941) { return "SM-PAS-4";}
    if (port == 2942) { return "SM-PAS-5";}
    if (port == 2943) { return "TTNRepository";}
    if (port == 2944) { return "Megaco H-248";}
    if (port == 2945) { return "H248 Binary";}
    if (port == 2946) { return "FJSVmpor";}
    if (port == 2947) { return "GPS Daemon request/response protocol";}
    if (port == 2948) { return "WAP PUSH";}
    if (port == 2949) { return "WAP PUSH SECURE";}
    if (port == 2950) { return "ESIP";}
    if (port == 2951) { return "OTTP";}
    if (port == 2952) { return "MPFWSAS";}
    if (port == 2953) { return "OVALARMSRV";}
    if (port == 2954) { return "OVALARMSRV-CMD";}
    if (port == 2955) { return "CSNOTIFY";}
    if (port == 2956) { return "OVRIMOSDBMAN";}
    if (port == 2957) { return "JAMCT5";}
    if (port == 2958) { return "JAMCT6";}
    if (port == 2959) { return "RMOPAGT";}
    if (port == 2960) { return "DFOXSERVER";}
    if (port == 2961) { return "BOLDSOFT-LM";}
    if (port == 2962) { return "IPH-POLICY-CLI";}
    if (port == 2963) { return "IPH-POLICY-ADM";}
    if (port == 2964) { return "BULLANT SRAP";}
    if (port == 2965) { return "BULLANT RAP";}
    if (port == 2966) { return "IDP-INFOTRIEVE";}
    if (port == 2967) { return "SSC-AGENT";}
    if (port == 2968) { return "ENPP";}
    if (port == 2969) { return "ESSP";}
    if (port == 2970) { return "INDEX-NET";}
    if (port == 2971) { return "NetClip clipboard daemon";}
    if (port == 2972) { return "PMSM Webrctl";}
    if (port == 2973) { return "SV Networks";}
    if (port == 2974) { return "Signal";}
    if (port == 2975) { return "Fujitsu Configuration Management Service";}
    if (port == 2976) { return "CNS Server Port";}
    if (port == 2977) { return "TTCs Enterprise Test Access Protocol - NS";}
    if (port == 2978) { return "TTCs Enterprise Test Access Protocol - DS";}
    if (port == 2979) { return "H263 Video Streaming";}
    if (port == 2980) { return "Instant Messaging Service";}
    if (port == 2981) { return "MYLXAMPORT";}
    if (port == 2982) { return "IWB-WHITEBOARD";}
    if (port == 2983) { return "NETPLAN";}
    if (port == 2984) { return "HPIDSADMIN";}
    if (port == 2985) { return "HPIDSAGENT";}
    if (port == 2986) { return "STONEFALLS";}
    if (port == 2987) { return "identify";}
    if (port == 2988) { return "HIPPA Reporting Protocol";}
    if (port == 2989) { return "ZARKOV Intelligent Agent Communication";}
    if (port == 2990) { return "BOSCAP";}
    if (port == 2991) { return "WKSTN-MON";}
    if (port == 2992) { return "Avenyo Server";}
    if (port == 2993) { return "VERITAS VIS1";}
    if (port == 2994) { return "VERITAS VIS2";}
    if (port == 2995) { return "IDRS";}
    if (port == 2996) { return "vsixml";}
    if (port == 2997) { return "REBOL";}
    if (port == 2998) { return "Real Secure";}
    if (port == 2999) { return "RemoteWare Unassigned";}
    if (port == 3000) { return "HBCI";}
    if (port == 3001) { return "OrigoDB Server Native Interface";}
    if (port == 3002) { return "EXLM Agent";}
    if (port == 3003) { return "CGMS";}
    if (port == 3004) { return "Csoft Agent";}
    if (port == 3005) { return "Genius License Manager";}
    if (port == 3006) { return "Instant Internet Admin";}
    if (port == 3007) { return "Lotus Mail Tracking Agent Protocol";}
    if (port == 3008) { return "Midnight Technologies";}
    if (port == 3009) { return "PXC-NTFY";}
    if (port == 3010) { return "Telerate Workstation";}
    if (port == 3011) { return "Trusted Web";}
    if (port == 3012) { return "Trusted Web Client";}
    if (port == 3013) { return "Gilat Sky Surfer";}
    if (port == 3014) { return "Broker Service";}
    if (port == 3015) { return "NATI DSTP";}
    if (port == 3016) { return "Notify Server";}
    if (port == 3017) { return "Event Listener";}
    if (port == 3018) { return "Service Registry";}
    if (port == 3019) { return "Resource Manager";}
    if (port == 3020) { return "CIFS";}
    if (port == 3021) { return "AGRI Server";}
    if (port == 3022) { return "CSREGAGENT";}
    if (port == 3023) { return "magicnotes";}
    if (port == 3024) { return "NDS_SSO";}
    if (port == 3025) { return "Arepa Raft";}
    if (port == 3026) { return "AGRI Gateway";}
    if (port == 3027) { return "LiebDevMgmt_C";}
    if (port == 3028) { return "LiebDevMgmt_DM";}
    if (port == 3029) { return "LiebDevMgmt_A";}
    if (port == 3030) { return "Arepa Cas";}
    if (port == 3031) { return "Remote AppleEvents/PPC Toolbox";}
    if (port == 3032) { return "Redwood Chat";}
    if (port == 3033) { return "PDB";}
    if (port == 3034) { return "Osmosis / Helix  R AEEA Port";}
    if (port == 3035) { return "FJSV gssagt";}
    if (port == 3036) { return "Hagel DUMP";}
    if (port == 3037) { return "HP SAN Mgmt";}
    if (port == 3038) { return "Santak UPS";}
    if (port == 3039) { return "Cogitate, Inc";}
    if (port == 3040) { return "Tomato Springs";}
    if (port == 3041) { return "di-traceware";}
    if (port == 3042) { return "journee";}
    if (port == 3043) { return "Broadcast Routing Protocol";}
    if (port == 3044) { return "EndPoint Protocol";}
    if (port == 3045) { return "ResponseNet";}
    if (port == 3046) { return "di-ase";}
    if (port == 3047) { return "Fast Security HL Server";}
    if (port == 3048) { return "Sierra Net PC Trader";}
    if (port == 3049) { return "NSWS";}
    if (port == 3050) { return "gds_db";}
    if (port == 3051) { return "Galaxy Server";}
    if (port == 3052) { return "APC 3052";}
    if (port == 3053) { return "dsom-server";}
    if (port == 3054) { return "AMT CNF PROT";}
    if (port == 3055) { return "Policy Server";}
    if (port == 3056) { return "CDL Server";}
    if (port == 3057) { return "GoAhead FldUp";}
    if (port == 3058) { return "videobeans";}
    if (port == 3059) { return "qsoft";}
    if (port == 3060) { return "interserver";}
    if (port == 3061) { return "cautcpd";}
    if (port == 3062) { return "ncacn-ip-tcp";}
    if (port == 3063) { return "ncadg-ip-udp";}
    if (port == 3064) { return "Remote Port Redirector";}
    if (port == 3065) { return "slinterbase";}
    if (port == 3066) { return "NETATTACHSDMP";}
    if (port == 3067) { return "FJHPJP";}
    if (port == 3068) { return "ls3 Broadcast";}
    if (port == 3069) { return "ls3";}
    if (port == 3070) { return "MGXSWITCH";}
    if (port == 3071) { return "Crossplatform replication protocol";}
    if (port == 3072) { return "ContinuStor Monitor Port";}
    if (port == 3073) { return "Very simple chatroom prot";}
    if (port == 3074) { return "Xbox game port";}
    if (port == 3075) { return "Orbix 2000 Locator";}
    if (port == 3076) { return "Orbix 2000 Config";}
    if (port == 3077) { return "Orbix 2000 Locator SSL";}
    if (port == 3078) { return "Orbix 2000 Locator SSL";}
    if (port == 3079) { return "LV Front Panel";}
    if (port == 3080) { return "stm_pproc";}
    if (port == 3081) { return "TL1-LV";}
    if (port == 3082) { return "TL1-RAW";}
    if (port == 3083) { return "TL1-TELNET";}
    if (port == 3084) { return "ITM-MCCS";}
    if (port == 3085) { return "PCIHReq";}
    if (port == 3086) { return "JDL-DBKitchen";}
    if (port == 3087) { return "Asoki SMA";}
    if (port == 3088) { return "eXtensible Data Transfer Protocol";}
    if (port == 3089) { return "ParaTek Agent Linking";}
    if (port == 3090) { return "Senforce Session Services";}
    if (port == 3091) { return "1Ci Server Management";}
    if (port == 3093) { return "Jiiva RapidMQ Center";}
    if (port == 3094) { return "Jiiva RapidMQ Registry";}
    if (port == 3095) { return "Panasas rendezvous port";}
    if (port == 3096) { return "Active Print Server Port";}
    if (port == 3098) { return "Universal Message Manager";}
    if (port == 3099) { return "CHIPSY Machine Daemon";}
    if (port == 3100) { return "OpCon/xps";}
    if (port == 3101) { return "HP PolicyXpert PIB Server";}
    if (port == 3102) { return "SoftlinK Slave Mon Port";}
    if (port == 3103) { return "Autocue SMI Protocol";}
    if (port == 3104) { return "Autocue Logger Protocol";}
    if (port == 3105) { return "Cardbox";}
    if (port == 3106) { return "Cardbox HTTP";}
    if (port == 3107) { return "Business protocol";}
    if (port == 3108) { return "Geolocate protocol";}
    if (port == 3109) { return "Personnel protocol";}
    if (port == 3110) { return "simulator control port";}
    if (port == 3111) { return "Web Synchronous Services";}
    if (port == 3112) { return "KDE System Guard";}
    if (port == 3113) { return "CS-Authenticate Svr Port";}
    if (port == 3114) { return "CCM AutoDiscover";}
    if (port == 3115) { return "MCTET Master";}
    if (port == 3116) { return "MCTET Gateway";}
    if (port == 3117) { return "MCTET Jserv";}
    if (port == 3118) { return "PKAgent";}
    if (port == 3119) { return "D2000 Kernel Port";}
    if (port == 3120) { return "D2000 Webserver Port";}
    if (port == 3121) { return "The pacemaker remote  pcmk-remote service extends high availability functionality outside of the Linux cluster into remote nodes";}
    if (port == 3122) { return "MTI VTR Emulator port";}
    if (port == 3123) { return "EDI Translation Protocol";}
    if (port == 3124) { return "Beacon Port";}
    if (port == 3125) { return "A13-AN Interface";}
    if (port == 3127) { return "CTX Bridge Port";}
    if (port == 3128) { return "Active API Server Port";}
    if (port == 3129) { return "NetPort Discovery Port";}
    if (port == 3130) { return "ICPv2";}
    if (port == 3131) { return "Net Book Mark";}
    if (port == 3132) { return "Microsoft Business Rule Engine Update Service";}
    if (port == 3133) { return "Prism Deploy User Port";}
    if (port == 3134) { return "Extensible Code Protocol";}
    if (port == 3135) { return "PeerBook Port";}
    if (port == 3136) { return "Grub Server Port";}
    if (port == 3137) { return "rtnt-1 data packets";}
    if (port == 3138) { return "rtnt-2 data packets";}
    if (port == 3139) { return "Incognito Rendez-Vous";}
    if (port == 3140) { return "Arilia Multiplexor";}
    if (port == 3141) { return "VMODEM";}
    if (port == 3142) { return "RDC WH EOS";}
    if (port == 3143) { return "Sea View";}
    if (port == 3144) { return "Tarantella";}
    if (port == 3145) { return "CSI-LFAP";}
    if (port == 3146) { return "bears-02";}
    if (port == 3147) { return "RFIO";}
    if (port == 3148) { return "NetMike Game Administrator";}
    if (port == 3149) { return "NetMike Game Server";}
    if (port == 3150) { return "NetMike Assessor Administrator";}
    if (port == 3151) { return "NetMike Assessor";}
    if (port == 3152) { return "FeiTian Port";}
    if (port == 3153) { return "S8Cargo Client Port";}
    if (port == 3154) { return "ON RMI Registry";}
    if (port == 3155) { return "JpegMpeg Port";}
    if (port == 3156) { return "Indura Collector";}
    if (port == 3157) { return "CCC Listener Port";}
    if (port == 3158) { return "SmashTV Protocol";}
    if (port == 3159) { return "NavegaWeb Tarification";}
    if (port == 3160) { return "TIP Application Server";}
    if (port == 3161) { return "DOC1 License Manager";}
    if (port == 3162) { return "SFLM";}
    if (port == 3163) { return "RES-SAP";}
    if (port == 3164) { return "IMPRS";}
    if (port == 3165) { return "Newgenpay Engine Service";}
    if (port == 3166) { return "Quest Spotlight Out-Of-Process Collector";}
    if (port == 3167) { return "Now Contact Public Server";}
    if (port == 3168) { return "Now Up-to-Date Public Server";}
    if (port == 3169) { return "SERVERVIEW-AS";}
    if (port == 3170) { return "SERVERVIEW-ASN";}
    if (port == 3171) { return "SERVERVIEW-GF";}
    if (port == 3172) { return "SERVERVIEW-RM";}
    if (port == 3173) { return "SERVERVIEW-ICC";}
    if (port == 3174) { return "ARMI Server";}
    if (port == 3175) { return "T1_E1_Over_IP";}
    if (port == 3176) { return "ARS Master";}
    if (port == 3177) { return "Phonex Protocol";}
    if (port == 3178) { return "Radiance UltraEdge Port";}
    if (port == 3179) { return "H2GF W2m Handover prot";}
    if (port == 3180) { return "Millicent Broker Server";}
    if (port == 3181) { return "BMC Patrol Agent";}
    if (port == 3182) { return "BMC Patrol Rendezvous";}
    if (port == 3183) { return "COPS/TLS";}
    if (port == 3184) { return "ApogeeX Port";}
    if (port == 3185) { return "SuSE Meta PPPD";}
    if (port == 3186) { return "IIW Monitor User Port";}
    if (port == 3187) { return "Open Design Listen Port";}
    if (port == 3188) { return "Broadcom Port";}
    if (port == 3189) { return "Pinnacle Sys InfEx Port";}
    if (port == 3190) { return "ConServR Proxy";}
    if (port == 3191) { return "ConServR SSL Proxy";}
    if (port == 3192) { return "FireMon Revision Control";}
    if (port == 3193) { return "SpanDataPort";}
    if (port == 3194) { return "Rockstorm MAG protocol";}
    if (port == 3195) { return "Network Control Unit";}
    if (port == 3196) { return "Network Control Unit";}
    if (port == 3197) { return "Embrace Device Protocol Server";}
    if (port == 3198) { return "Embrace Device Protocol Client";}
    if (port == 3199) { return "DMOD WorkSpace";}
    if (port == 3200) { return "Press-sense Tick Port";}
    if (port == 3201) { return "CPQ-TaskSmart";}
    if (port == 3202) { return "IntraIntra";}
    if (port == 3203) { return "Network Watcher Monitor";}
    if (port == 3204) { return "Network Watcher DB Access";}
    if (port == 3205) { return "iSNS Server Port";}
    if (port == 3206) { return "IronMail POP Proxy";}
    if (port == 3207) { return "Veritas Authentication Port";}
    if (port == 3208) { return "PFU PR Callback";}
    if (port == 3209) { return "HP OpenView Network Path Engine Server";}
    if (port == 3210) { return "Flamenco Networks Proxy";}
    if (port == 3211) { return "Avocent Secure Management";}
    if (port == 3212) { return "Survey Instrument";}
    if (port == 3213) { return "NEON 24X7 Mission Control";}
    if (port == 3214) { return "JMQ Daemon Port 1";}
    if (port == 3215) { return "JMQ Daemon Port 2";}
    if (port == 3216) { return "Ferrari electronic FOAM";}
    if (port == 3217) { return "Unified IP & Telecom Environment";}
    if (port == 3218) { return "EMC SmartPackets";}
    if (port == 3219) { return "WMS Messenger";}
    if (port == 3220) { return "XML NM over SSL";}
    if (port == 3221) { return "XML NM over TCP";}
    if (port == 3222) { return "Gateway Load Balancing Pr";}
    if (port == 3223) { return "DIGIVOTE  R Vote-Server";}
    if (port == 3224) { return "AES Discovery Port";}
    if (port == 3225) { return "FCIP";}
    if (port == 3226) { return "ISI Industry Software IRP";}
    if (port == 3227) { return "DiamondWave NMS Server";}
    if (port == 3228) { return "DiamondWave MSG Server";}
    if (port == 3229) { return "Global CD Port";}
    if (port == 3230) { return "Software Distributor Port";}
    if (port == 3231) { return "VidiGo communication  previous was) { Delta Solutions Direct";}
    if (port == 3232) { return "MDT port";}
    if (port == 3233) { return "WhiskerControl main port";}
    if (port == 3234) { return "Alchemy Server";}
    if (port == 3235) { return "MDAP port";}
    if (port == 3236) { return "appareNet Test Server";}
    if (port == 3237) { return "appareNet Test Packet Sequencer";}
    if (port == 3238) { return "appareNet Analysis Server";}
    if (port == 3239) { return "appareNet User Interface";}
    if (port == 3240) { return "Trio Motion Control Port";}
    if (port == 3241) { return "SysOrb Monitoring Server";}
    if (port == 3242) { return "Session Description ID";}
    if (port == 3243) { return "Timelot Port";}
    if (port == 3244) { return "OneSAF";}
    if (port == 3245) { return "VIEO Fabric Executive";}
    if (port == 3246) { return "DVT SYSTEM PORT";}
    if (port == 3247) { return "DVT DATA LINK";}
    if (port == 3248) { return "PROCOS LM";}
    if (port == 3249) { return "State Sync Protocol";}
    if (port == 3250) { return "HMS hicp port";}
    if (port == 3251) { return "Sys Scanner";}
    if (port == 3252) { return "DHE port";}
    if (port == 3253) { return "PDA Data";}
    if (port == 3254) { return "PDA System";}
    if (port == 3255) { return "Semaphore Connection Port";}
    if (port == 3256) { return "Compaq RPM Agent Port";}
    if (port == 3257) { return "Compaq RPM Server Port";}
    if (port == 3258) { return "Ivecon Server Port";}
    if (port == 3259) { return "Epson Network Common Devi";}
    if (port == 3260) { return "iSCSI port";}
    if (port == 3261) { return "winShadow";}
    if (port == 3262) { return "NECP";}
    if (port == 3263) { return "E-Color Enterprise Imager";}
    if (port == 3264) { return "cc) {mail/lotus";}
    if (port == 3265) { return "Altav Tunnel";}
    if (port == 3266) { return "NS CFG Server";}
    if (port == 3267) { return "IBM Dial Out";}
    if (port == 3268) { return "Microsoft Global Catalog";}
    if (port == 3269) { return "Microsoft Global Catalog with LDAP/SSL";}
    if (port == 3270) { return "Verismart";}
    if (port == 3271) { return "CSoft Prev Port";}
    if (port == 3272) { return "Fujitsu User Manager";}
    if (port == 3273) { return "Simple Extensible Multiplexed Protocol";}
    if (port == 3274) { return "Ordinox Server";}
    if (port == 3275) { return "SAMD";}
    if (port == 3276) { return "Maxim ASICs";}
    if (port == 3277) { return "AWG Proxy";}
    if (port == 3278) { return "LKCM Server";}
    if (port == 3279) { return "admind";}
    if (port == 3280) { return "VS Server";}
    if (port == 3281) { return "SYSOPT";}
    if (port == 3282) { return "Datusorb";}
    if (port == 3283) { return "Net Assistant";}
    if (port == 3284) { return "4Talk";}
    if (port == 3285) { return "Plato";}
    if (port == 3286) { return "E-Net";}
    if (port == 3287) { return "DIRECTVDATA";}
    if (port == 3288) { return "COPS";}
    if (port == 3289) { return "ENPC";}
    if (port == 3290) { return "CAPS LOGISTICS TOOLKIT - LM";}
    if (port == 3291) { return "S A Holditch & Associates - LM";}
    if (port == 3292) { return "Cart O Rama";}
    if (port == 3293) { return "fg-fps";}
    if (port == 3294) { return "fg-gip";}
    if (port == 3295) { return "Dynamic IP Lookup";}
    if (port == 3296) { return "Rib License Manager";}
    if (port == 3297) { return "Cytel License Manager";}
    if (port == 3298) { return "DeskView";}
    if (port == 3299) { return "pdrncs";}
    if (port == 3300) { return "Ceph monitor";}
    if (port == 3302) { return "MCS Fastmail";}
    if (port == 3303) { return "OP Session Client";}
    if (port == 3304) { return "OP Session Server";}
    if (port == 3305) { return "ODETTE-FTP";}
    if (port == 3306) { return "MySQL";}
    if (port == 3307) { return "OP Session Proxy";}
    if (port == 3308) { return "TNS Server";}
    if (port == 3309) { return "TNS ADV";}
    if (port == 3310) { return "Dyna Access";}
    if (port == 3311) { return "MCNS Tel Ret";}
    if (port == 3312) { return "Application Management Server";}
    if (port == 3313) { return "Unify Object Broker";}
    if (port == 3314) { return "Unify Object Host";}
    if (port == 3315) { return "CDID";}
    if (port == 3316) { return "AICC/CMI";}
    if (port == 3317) { return "VSAI PORT";}
    if (port == 3318) { return "Swith to Swith Routing Information Protocol";}
    if (port == 3319) { return "SDT License Manager";}
    if (port == 3320) { return "Office Link 2000";}
    if (port == 3321) { return "VNSSTR";}
    if (port == 3326) { return "SFTU";}
    if (port == 3327) { return "BBARS";}
    if (port == 3328) { return "Eaglepoint License Manager";}
    if (port == 3329) { return "HP Device Disc";}
    if (port == 3330) { return "MCS Calypso ICF";}
    if (port == 3331) { return "MCS Messaging";}
    if (port == 3332) { return "MCS Mail Server";}
    if (port == 3333) { return "DEC Notes";}
    if (port == 3334) { return "Direct TV Webcasting";}
    if (port == 3335) { return "Direct TV Software Updates";}
    if (port == 3336) { return "Direct TV Tickers";}
    if (port == 3337) { return "Direct TV Data Catalog";}
    if (port == 3338) { return "OMF data b";}
    if (port == 3339) { return "OMF data l";}
    if (port == 3340) { return "OMF data m";}
    if (port == 3341) { return "OMF data h";}
    if (port == 3342) { return "WebTIE";}
    if (port == 3343) { return "MS Cluster Net";}
    if (port == 3344) { return "BNT Manager";}
    if (port == 3345) { return "Influence";}
    if (port == 3346) { return "Trnsprnt Proxy";}
    if (port == 3347) { return "Phoenix RPC";}
    if (port == 3348) { return "Pangolin Laser";}
    if (port == 3349) { return "Chevin Services";}
    if (port == 3350) { return "FINDVIATV";}
    if (port == 3351) { return "Btrieve port";}
    if (port == 3352) { return "Scalable SQL";}
    if (port == 3353) { return "FATPIPE";}
    if (port == 3354) { return "SUITJD";}
    if (port == 3355) { return "Ordinox Dbase";}
    if (port == 3356) { return "UPNOTIFYPS";}
    if (port == 3357) { return "Adtech Test IP";}
    if (port == 3358) { return "Mp Sys Rmsvr";}
    if (port == 3359) { return "WG NetForce";}
    if (port == 3360) { return "KV Server";}
    if (port == 3361) { return "KV Agent";}
    if (port == 3362) { return "DJ ILM";}
    if (port == 3363) { return "NATI Vi Server";}
    if (port == 3364) { return "Creative Server";}
    if (port == 3365) { return "Content Server";}
    if (port == 3366) { return "Creative Partner";}
    if (port == 3372) { return "TIP 2";}
    if (port == 3373) { return "Lavenir License Manager";}
    if (port == 3374) { return "Cluster Disc";}
    if (port == 3375) { return "VSNM Agent";}
    if (port == 3376) { return "CD Broker";}
    if (port == 3377) { return "Cogsys Network License Manager";}
    if (port == 3378) { return "WSICOPY";}
    if (port == 3379) { return "SOCORFS";}
    if (port == 3380) { return "SNS Channels";}
    if (port == 3381) { return "Geneous";}
    if (port == 3382) { return "Fujitsu Network Enhanced Antitheft function";}
    if (port == 3383) { return "Enterprise Software Products License Manager";}
    if (port == 3384) { return "Cluster Management Services";}
    if (port == 3385) { return "qnxnetman";}
    if (port == 3386) { return "GPRS Data";}
    if (port == 3387) { return "Back Room Net";}
    if (port == 3388) { return "CB Server";}
    if (port == 3389) { return "MS WBT Server";}
    if (port == 3390) { return "Distributed Service Coordinator";}
    if (port == 3391) { return "SAVANT";}
    if (port == 3392) { return "EFI License Management";}
    if (port == 3393) { return "D2K Tapestry Client to Server";}
    if (port == 3394) { return "D2K Tapestry Server to Server";}
    if (port == 3395) { return "Dyna License Manager  Elam";}
    if (port == 3396) { return "Printer Agent";}
    if (port == 3397) { return "Cloanto License Manager";}
    if (port == 3398) { return "Mercantile";}
    if (port == 3399) { return "CSMS";}
    if (port == 3400) { return "CSMS2";}
    if (port == 3401) { return "filecast";}
    if (port == 3402) { return "FXa Engine Network Port";}
    if (port == 3405) { return "Nokia Announcement ch 1";}
    if (port == 3406) { return "Nokia Announcement ch 2";}
    if (port == 3407) { return "LDAP admin server port";}
    if (port == 3408) { return "BES Api Port";}
    if (port == 3409) { return "NetworkLens Event Port";}
    if (port == 3410) { return "NetworkLens SSL Event";}
    if (port == 3411) { return "BioLink Authenteon server";}
    if (port == 3412) { return "xmlBlaster";}
    if (port == 3413) { return "SpecView Networking";}
    if (port == 3414) { return "BroadCloud WIP Port";}
    if (port == 3415) { return "BCI Name Service";}
    if (port == 3416) { return "AirMobile IS Command Port";}
    if (port == 3417) { return "ConServR file translation";}
    if (port == 3418) { return "Remote nmap";}
    if (port == 3419) { return "Isogon SoftAudit";}
    if (port == 3420) { return "iFCP User Port";}
    if (port == 3421) { return "Bull Apprise portmapper";}
    if (port == 3422) { return "Remote USB System Port";}
    if (port == 3423) { return "xTrade Reliable Messaging";}
    if (port == 3424) { return "xTrade over TLS/SSL";}
    if (port == 3425) { return "AGPS Access Port";}
    if (port == 3426) { return "Arkivio Storage Protocol";}
    if (port == 3427) { return "WebSphere SNMP";}
    if (port == 3428) { return "2Wire CSS";}
    if (port == 3429) { return "GCSP user port";}
    if (port == 3430) { return "Scott Studios Dispatch";}
    if (port == 3431) { return "Active License Server Port";}
    if (port == 3432) { return "Secure Device Protocol";}
    if (port == 3433) { return "OPNET Service Management Platform";}
    if (port == 3434) { return "OpenCM Server";}
    if (port == 3435) { return "Pacom Security User Port";}
    if (port == 3436) { return "GuardControl Exchange Protocol";}
    if (port == 3437) { return "Autocue Directory Service";}
    if (port == 3438) { return "Spiralcraft Admin";}
    if (port == 3439) { return "HRI Interface Port";}
    if (port == 3440) { return "Net Steward Mgmt Console";}
    if (port == 3441) { return "OC Connect Client";}
    if (port == 3442) { return "OC Connect Server";}
    if (port == 3443) { return "OpenView Network Node Manager WEB Server";}
    if (port == 3444) { return "Denali Server";}
    if (port == 3445) { return "Media Object Network";}
    if (port == 3446) { return "3Com FAX RPC port";}
    if (port == 3447) { return "DirectNet IM System";}
    if (port == 3448) { return "Discovery and Net Config";}
    if (port == 3449) { return "HotU Chat";}
    if (port == 3450) { return "CAStorProxy";}
    if (port == 3451) { return "ASAM Services";}
    if (port == 3452) { return "SABP-Signalling Protocol";}
    if (port == 3453) { return "PSC Update";}
    if (port == 3454) { return "Apple Remote Access Protocol";}
    if (port == 3455) { return "RSVP Port";}
    if (port == 3456) { return "VAT default data";}
    if (port == 3457) { return "VAT default control";}
    if (port == 3458) { return "D3WinOSFI";}
    if (port == 3459) { return "TIP Integral";}
    if (port == 3460) { return "EDM Manger";}
    if (port == 3461) { return "EDM Stager";}
    if (port == 3462) { return "EDM STD Notify";}
    if (port == 3463) { return "EDM ADM Notify";}
    if (port == 3464) { return "EDM MGR Sync";}
    if (port == 3465) { return "EDM MGR Cntrl";}
    if (port == 3466) { return "WORKFLOW";}
    if (port == 3467) { return "RCST";}
    if (port == 3468) { return "TTCM Remote Controll";}
    if (port == 3469) { return "Pluribus";}
    if (port == 3470) { return "jt400";}
    if (port == 3471) { return "jt400-ssl";}
    if (port == 3472) { return "JAUGS N-G Remotec 1";}
    if (port == 3473) { return "JAUGS N-G Remotec 2";}
    if (port == 3474) { return "TSP Automation";}
    if (port == 3475) { return "Genisar Comm Port";}
    if (port == 3476) { return "NVIDIA Mgmt Protocol";}
    if (port == 3477) { return "eComm link port";}
    if (port == 3478) { return "Session Traversal Utilities for NAT  STUN port";}
    if (port == 3479) { return "2Wire RPC";}
    if (port == 3480) { return "Secure Virtual Workspace";}
    if (port == 3481) { return "CleanerLive remote ctrl";}
    if (port == 3482) { return "Vulture Monitoring System";}
    if (port == 3483) { return "Slim Devices Protocol";}
    if (port == 3484) { return "GBS SnapTalk Protocol";}
    if (port == 3485) { return "CelaTalk";}
    if (port == 3486) { return "IFSF Heartbeat Port";}
    if (port == 3487) { return "LISA TCP Transfer Channel";}
    if (port == 3488) { return "FS Remote Host Server";}
    if (port == 3489) { return "DTP/DIA";}
    if (port == 3490) { return "Colubris Management Port";}
    if (port == 3491) { return "SWR Port";}
    if (port == 3492) { return "TVDUM Tray Port";}
    if (port == 3493) { return "Network UPS Tools";}
    if (port == 3494) { return "IBM 3494";}
    if (port == 3495) { return "securitylayer over tcp";}
    if (port == 3496) { return "securitylayer over tls";}
    if (port == 3497) { return "ipEther232Port";}
    if (port == 3498) { return "DASHPAS user port";}
    if (port == 3499) { return "SccIP Media";}
    if (port == 3500) { return "RTMP Port";}
    if (port == 3501) { return "iSoft-P2P";}
    if (port == 3502) { return "Avocent Install Discovery";}
    if (port == 3503) { return "MPLS LSP-echo Port";}
    if (port == 3504) { return "IronStorm game server";}
    if (port == 3505) { return "CCM communications port";}
    if (port == 3506) { return "APC 3506";}
    if (port == 3507) { return "Nesh Broker Port";}
    if (port == 3508) { return "Interaction Web";}
    if (port == 3509) { return "Virtual Token SSL Port";}
    if (port == 3510) { return "XSS Port";}
    if (port == 3511) { return "WebMail/2";}
    if (port == 3512) { return "Aztec Distribution Port";}
    if (port == 3513) { return "Adaptec Remote Protocol";}
    if (port == 3514) { return "MUST Peer to Peer";}
    if (port == 3515) { return "MUST Backplane";}
    if (port == 3516) { return "Smartcard Port";}
    if (port == 3517) { return "IEEE 80211 WLANs WG IAPP";}
    if (port == 3518) { return "Artifact Message Server";}
    if (port == 3519) { return "Netvion Messenger Port";}
    if (port == 3520) { return "Netvion Galileo Log Port";}
    if (port == 3521) { return "Telequip Labs MC3SS";}
    if (port == 3522) { return "DO over NSSocketPort";}
    if (port == 3523) { return "Odeum Serverlink";}
    if (port == 3524) { return "ECM Server port";}
    if (port == 3525) { return "EIS Server port";}
    if (port == 3526) { return "starQuiz Port";}
    if (port == 3527) { return "VERITAS Backup Exec Server";}
    if (port == 3528) { return "JBoss IIOP";}
    if (port == 3529) { return "JBoss IIOP/SSL";}
    if (port == 3530) { return "Grid Friendly";}
    if (port == 3531) { return "Joltid";}
    if (port == 3532) { return "Raven Remote Management Control";}
    if (port == 3533) { return "Raven Remote Management Data";}
    if (port == 3534) { return "URL Daemon Port";}
    if (port == 3535) { return "MS-LA";}
    if (port == 3536) { return "SNAC";}
    if (port == 3537) { return "Remote NI-VISA port";}
    if (port == 3538) { return "IBM Directory Server";}
    if (port == 3539) { return "IBM Directory Server SSL";}
    if (port == 3540) { return "PNRP User Port";}
    if (port == 3541) { return "VoiSpeed Port";}
    if (port == 3542) { return "HA cluster monitor";}
    if (port == 3543) { return "qftest Lookup Port";}
    if (port == 3544) { return "Teredo Port";}
    if (port == 3545) { return "CAMAC equipment";}
    if (port == 3547) { return "Symantec SIM";}
    if (port == 3548) { return "Interworld";}
    if (port == 3549) { return "Tellumat MDR NMS";}
    if (port == 3550) { return "Secure SMPP";}
    if (port == 3551) { return "Apcupsd Information Port";}
    if (port == 3552) { return "TeamAgenda Server Port";}
    if (port == 3553) { return "Red Box Recorder ADP";}
    if (port == 3554) { return "Quest Notification Server";}
    if (port == 3555) { return "Vipul's Razor";}
    if (port == 3556) { return "Sky Transport Protocol";}
    if (port == 3557) { return "PersonalOS Comm Port";}
    if (port == 3558) { return "MCP user port";}
    if (port == 3559) { return "CCTV control port";}
    if (port == 3560) { return "INIServe port";}
    if (port == 3561) { return "BMC-OneKey";}
    if (port == 3562) { return "SDBProxy";}
    if (port == 3563) { return "Watcom Debug";}
    if (port == 3564) { return "Electromed SIM port";}
    if (port == 3565) { return "M2PA";}
    if (port == 3566) { return "Quest Data Hub";}
    if (port == 3567) { return "DOF Protocol Stack";}
    if (port == 3568) { return "DOF Secure Tunnel";}
    if (port == 3569) { return "Meinberg Control Service";}
    if (port == 3570) { return "MCC Web Server Port";}
    if (port == 3571) { return "MegaRAID Server Port";}
    if (port == 3572) { return "Registration Server Port";}
    if (port == 3573) { return "Advantage Group UPS Suite";}
    if (port == 3574) { return "DMAF Server";}
    if (port == 3575) { return "Coalsere CCM Port";}
    if (port == 3576) { return "Coalsere CMC Port";}
    if (port == 3577) { return "Configuration Port";}
    if (port == 3578) { return "Data Port";}
    if (port == 3579) { return "Tarantella Load Balancing";}
    if (port == 3580) { return "NATI-ServiceLocator";}
    if (port == 3581) { return "Ascent Capture Licensing";}
    if (port == 3582) { return "PEG PRESS Server";}
    if (port == 3583) { return "CANEX Watch System";}
    if (port == 3584) { return "U-DBase Access Protocol";}
    if (port == 3585) { return "Emprise License Server";}
    if (port == 3586) { return "License Server Console";}
    if (port == 3587) { return "Peer to Peer Grouping";}
    if (port == 3588) { return "Sentinel Server";}
    if (port == 3589) { return "isomair";}
    if (port == 3590) { return "WV CSP SMS Binding";}
    if (port == 3591) { return "LOCANIS G-TRACK Server";}
    if (port == 3592) { return "LOCANIS G-TRACK NE Port";}
    if (port == 3593) { return "BP Model Debugger";}
    if (port == 3594) { return "MediaSpace";}
    if (port == 3595) { return "ShareApp";}
    if (port == 3596) { return "Illusion Wireless MMOG";}
    if (port == 3597) { return "A14  AN-to-SC/MM";}
    if (port == 3598) { return "A15  AN-to-AN";}
    if (port == 3599) { return "Quasar Accounting Server";}
    if (port == 3600) { return "text relay-answer";}
    if (port == 3601) { return "Visinet Gui";}
    if (port == 3602) { return "InfiniSwitch Mgr Client";}
    if (port == 3603) { return "Integrated Rcvr Control";}
    if (port == 3604) { return "BMC JMX Port";}
    if (port == 3605) { return "ComCam IO Port";}
    if (port == 3606) { return "Splitlock Server";}
    if (port == 3607) { return "Precise I3";}
    if (port == 3608) { return "Trendchip control protocol";}
    if (port == 3609) { return "CPDI PIDAS Connection Mon";}
    if (port == 3610) { return "ECHONET";}
    if (port == 3611) { return "Six Degrees Port";}
    if (port == 3612) { return "HP Data Protector";}
    if (port == 3613) { return "Alaris Device Discovery";}
    if (port == 3614) { return "Satchwell Sigma";}
    if (port == 3615) { return "Start Messaging Network";}
    if (port == 3616) { return "cd3o Control Protocol";}
    if (port == 3617) { return "ATI SHARP Logic Engine";}
    if (port == 3618) { return "AAIR-Network 1";}
    if (port == 3619) { return "AAIR-Network 2";}
    if (port == 3620) { return "EPSON Projector Control Port";}
    if (port == 3621) { return "EPSON Network Screen Port";}
    if (port == 3622) { return "FF LAN Redundancy Port";}
    if (port == 3623) { return "HAIPIS Dynamic Discovery";}
    if (port == 3624) { return "Distributed Upgrade Port";}
    if (port == 3625) { return "Volley";}
    if (port == 3626) { return "bvControl Daemon";}
    if (port == 3627) { return "Jam Server Port";}
    if (port == 3628) { return "EPT Machine Interface";}
    if (port == 3629) { return "ESC/VPnet";}
    if (port == 3630) { return "C&S Remote Database Port";}
    if (port == 3631) { return "C&S Web Services Port";}
    if (port == 3632) { return "distributed compiler";}
    if (port == 3633) { return "Wyrnix AIS port";}
    if (port == 3634) { return "hNTSP Library Manager";}
    if (port == 3635) { return "Simple Distributed Objects";}
    if (port == 3636) { return "SerVistaITSM";}
    if (port == 3637) { return "Customer Service Port";}
    if (port == 3638) { return "EHP Backup Protocol";}
    if (port == 3639) { return "Extensible Automation";}
    if (port == 3640) { return "Netplay Port 1";}
    if (port == 3641) { return "Netplay Port 2";}
    if (port == 3642) { return "Juxml Replication port";}
    if (port == 3643) { return "AudioJuggler";}
    if (port == 3644) { return "ssowatch";}
    if (port == 3645) { return "Cyc";}
    if (port == 3646) { return "XSS Server Port";}
    if (port == 3647) { return "Splitlock Gateway";}
    if (port == 3648) { return "Fujitsu Cooperation Port";}
    if (port == 3649) { return "Nishioka Miyuki Msg Protocol";}
    if (port == 3650) { return "PRISMIQ VOD plug-in";}
    if (port == 3651) { return "XRPC Registry";}
    if (port == 3652) { return "VxCR NBU Default Port";}
    if (port == 3653) { return "Tunnel Setup Protocol";}
    if (port == 3654) { return "VAP RealTime Messenger";}
    if (port == 3655) { return "ActiveBatch Exec Agent";}
    if (port == 3656) { return "ActiveBatch Job Scheduler";}
    if (port == 3657) { return "ImmediaNet Beacon";}
    if (port == 3658) { return "PlayStation AMS  Secure";}
    if (port == 3659) { return "Apple SASL";}
    if (port == 3660) { return "IBM Tivoli Directory Service using SSL";}
    if (port == 3661) { return "IBM Tivoli Directory Service using SSL";}
    if (port == 3662) { return "pserver";}
    if (port == 3663) { return "DIRECWAY Tunnel Protocol";}
    if (port == 3664) { return "UPS Engine Port";}
    if (port == 3665) { return "Enterprise Engine Port";}
    if (port == 3666) { return "IBM eServer PAP";}
    if (port == 3667) { return "IBM Information Exchange";}
    if (port == 3668) { return "Dell Remote Management";}
    if (port == 3669) { return "CA SAN Switch Management";}
    if (port == 3670) { return "SMILE TCP/UDP Interface";}
    if (port == 3671) { return "e Field Control  EIBnet";}
    if (port == 3672) { return "LispWorks ORB";}
    if (port == 3673) { return "Openview Media Vault GUI";}
    if (port == 3674) { return "WinINSTALL IPC Port";}
    if (port == 3675) { return "CallTrax Data Port";}
    if (port == 3676) { return "VisualAge Pacbase server";}
    if (port == 3677) { return "RoverLog IPC";}
    if (port == 3678) { return "DataGuardianLT";}
    if (port == 3679) { return "Newton Dock";}
    if (port == 3680) { return "NPDS Tracker";}
    if (port == 3681) { return "BTS X73 Port";}
    if (port == 3682) { return "EMC SmartPackets-MAPI";}
    if (port == 3683) { return "BMC EDV/EA";}
    if (port == 3684) { return "FAXstfX";}
    if (port == 3685) { return "DS Expert Agent";}
    if (port == 3686) { return "Trivial Network Management";}
    if (port == 3687) { return "simple-push";}
    if (port == 3688) { return "simple-push Secure";}
    if (port == 3689) { return "Digital Audio Access Protocol  iTunes";}
    if (port == 3690) { return "Subversion";}
    if (port == 3691) { return "Magaya Network Port";}
    if (port == 3692) { return "Brimstone IntelSync";}
    if (port == 3693) { return "Emergency Automatic Structure Lockdown System";}
    if (port == 3695) { return "BMC Data Collection";}
    if (port == 3696) { return "Telnet Com Port Control";}
    if (port == 3697) { return "NavisWorks License System";}
    if (port == 3698) { return "SAGECTLPANEL";}
    if (port == 3699) { return "Internet Call Waiting";}
    if (port == 3700) { return "LRS NetPage";}
    if (port == 3701) { return "NetCelera";}
    if (port == 3702) { return "Web Service Discovery";}
    if (port == 3703) { return "Adobe Server 3";}
    if (port == 3704) { return "Adobe Server 4";}
    if (port == 3705) { return "Adobe Server 5";}
    if (port == 3706) { return "Real-Time Event Port";}
    if (port == 3707) { return "Real-Time Event Secure Port";}
    if (port == 3708) { return "Sun App Svr - Naming";}
    if (port == 3709) { return "CA-IDMS Server";}
    if (port == 3710) { return "PortGate Authentication";}
    if (port == 3711) { return "EBD Server 2";}
    if (port == 3712) { return "Sentinel Enterprise";}
    if (port == 3713) { return "TFTP over TLS";}
    if (port == 3714) { return "DELOS Direct Messaging";}
    if (port == 3715) { return "Anoto Rendezvous Port";}
    if (port == 3716) { return "WV CSP SMS CIR Channel";}
    if (port == 3717) { return "WV CSP UDP/IP CIR Channel";}
    if (port == 3718) { return "OPUS Server Port";}
    if (port == 3719) { return "iTel Server Port";}
    if (port == 3720) { return "UF Astro Instr Services";}
    if (port == 3721) { return "Xsync";}
    if (port == 3722) { return "Xserve RAID";}
    if (port == 3723) { return "Sychron Service Daemon";}
    if (port == 3724) { return "World of Warcraft";}
    if (port == 3725) { return "Netia NA-ER Port";}
    if (port == 3726) { return "Xyratex Array Manager";}
    if (port == 3727) { return "Ericsson Mobile Data Unit";}
    if (port == 3728) { return "Ericsson Web on Air";}
    if (port == 3729) { return "Fireking Audit Port";}
    if (port == 3730) { return "Client Control";}
    if (port == 3731) { return "Service Manager";}
    if (port == 3732) { return "Mobile Wnn";}
    if (port == 3733) { return "Multipuesto Msg Port";}
    if (port == 3734) { return "Synel Data Collection Port";}
    if (port == 3735) { return "Password Distribution";}
    if (port == 3736) { return "RealSpace RMI";}
    if (port == 3737) { return "XPanel Daemon";}
    if (port == 3738) { return "versaTalk Server Port";}
    if (port == 3739) { return "Launchbird LicenseManager";}
    if (port == 3740) { return "Heartbeat Protocol";}
    if (port == 3741) { return "WysDM Agent";}
    if (port == 3742) { return "CST - Configuration & Service Tracker";}
    if (port == 3743) { return "IP Control Systems Ltd";}
    if (port == 3744) { return "SASG";}
    if (port == 3745) { return "GWRTC Call Port";}
    if (port == 3746) { return "LXPROCOM LinkTest";}
    if (port == 3747) { return "LXPROCOM LinkTest SSL";}
    if (port == 3748) { return "webData";}
    if (port == 3749) { return "CimTrak";}
    if (port == 3750) { return "CBOS/IP ncapsalation port";}
    if (port == 3751) { return "CommLinx GPRS Cube";}
    if (port == 3752) { return "Vigil-IP RemoteAgent";}
    if (port == 3753) { return "NattyServer Port";}
    if (port == 3754) { return "TimesTen Broker Port";}
    if (port == 3755) { return "SAS Remote Help Server";}
    if (port == 3756) { return "Canon CAPT Port";}
    if (port == 3757) { return "GRF Server Port";}
    if (port == 3758) { return "apw RMI registry";}
    if (port == 3759) { return "Exapt License Manager";}
    if (port == 3760) { return "adTempus Client";}
    if (port == 3761) { return "gsakmp port";}
    if (port == 3762) { return "GBS SnapMail Protocol";}
    if (port == 3763) { return "XO Wave Control Port";}
    if (port == 3764) { return "MNI Protected Routing";}
    if (port == 3765) { return "Remote Traceroute";}
    if (port == 3766) { return "SSL e-watch sitewatch server";}
    if (port == 3767) { return "ListMGR Port";}
    if (port == 3768) { return "rblcheckd server daemon";}
    if (port == 3769) { return "HAIPE Network Keying";}
    if (port == 3770) { return "Cinderella Collaboration";}
    if (port == 3771) { return "RTP Paging Port";}
    if (port == 3772) { return "Chantry Tunnel Protocol";}
    if (port == 3773) { return "ctdhercules";}
    if (port == 3774) { return "ZICOM";}
    if (port == 3775) { return "ISPM Manager Port";}
    if (port == 3776) { return "Device Provisioning Port";}
    if (port == 3777) { return "Jibe EdgeBurst";}
    if (port == 3778) { return "Cutler-Hammer IT Port";}
    if (port == 3779) { return "Cognima Replication";}
    if (port == 3780) { return "Nuzzler Network Protocol";}
    if (port == 3781) { return "ABCvoice server port";}
    if (port == 3782) { return "Secure ISO TP0 port";}
    if (port == 3783) { return "Impact Mgr/PEM Gateway";}
    if (port == 3784) { return "BFD Control Protocol";}
    if (port == 3785) { return "BFD Echo Protocol";}
    if (port == 3786) { return "VSW Upstrigger port";}
    if (port == 3787) { return "Fintrx";}
    if (port == 3788) { return "SPACEWAY Routing port";}
    if (port == 3789) { return "RemoteDeploy Administration Port [July 2003]";}
    if (port == 3790) { return "QuickBooks RDS";}
    if (port == 3791) { return "TV NetworkVideo Data port";}
    if (port == 3792) { return "e-Watch Corporation SiteWatch";}
    if (port == 3793) { return "DataCore Software";}
    if (port == 3794) { return "JAUS Robots";}
    if (port == 3795) { return "myBLAST Mekentosj port";}
    if (port == 3796) { return "Spaceway Dialer";}
    if (port == 3797) { return "idps";}
    if (port == 3798) { return "Minilock";}
    if (port == 3799) { return "RADIUS Dynamic Authorization";}
    if (port == 3800) { return "Print Services Interface";}
    if (port == 3801) { return "ibm manager service";}
    if (port == 3802) { return "VHD";}
    if (port == 3803) { return "SoniqSync";}
    if (port == 3804) { return "Harman IQNet Port";}
    if (port == 3805) { return "ThorGuard Server Port";}
    if (port == 3806) { return "Remote System Manager";}
    if (port == 3807) { return "SpuGNA Communication Port";}
    if (port == 3808) { return "Sun App Svr-IIOPClntAuth";}
    if (port == 3809) { return "Java Desktop System Configuration Agent";}
    if (port == 3810) { return "WLAN AS server";}
    if (port == 3811) { return "AMP";}
    if (port == 3812) { return "netO WOL Server";}
    if (port == 3813) { return "Rhapsody Interface Protocol";}
    if (port == 3814) { return "netO DCS";}
    if (port == 3815) { return "LANsurveyor XML";}
    if (port == 3816) { return "Sun Local Patch Server";}
    if (port == 3817) { return "Yosemite Tech Tapeware";}
    if (port == 3818) { return "Crinis Heartbeat";}
    if (port == 3819) { return "EPL Sequ Layer Protocol";}
    if (port == 3820) { return "Siemens AuD SCP";}
    if (port == 3821) { return "ATSC PMCP Standard";}
    if (port == 3822) { return "Compute Pool Discovery";}
    if (port == 3823) { return "Compute Pool Conduit";}
    if (port == 3824) { return "Compute Pool Policy";}
    if (port == 3825) { return "Antera FlowFusion Process Simulation";}
    if (port == 3826) { return "WarMUX game server";}
    if (port == 3827) { return "Netadmin Systems MPI service";}
    if (port == 3828) { return "Netadmin Systems Event Handler";}
    if (port == 3829) { return "Netadmin Systems Event Handler External";}
    if (port == 3830) { return "Cerner System Management Agent";}
    if (port == 3831) { return "Docsvault Application Service";}
    if (port == 3832) { return "xxNETserver";}
    if (port == 3833) { return "AIPN LS Authentication";}
    if (port == 3834) { return "Spectar Data Stream Service";}
    if (port == 3835) { return "Spectar Database Rights Service";}
    if (port == 3836) { return "MARKEM NEXTGEN DCP";}
    if (port == 3837) { return "MARKEM Auto-Discovery";}
    if (port == 3838) { return "Scito Object Server";}
    if (port == 3839) { return "AMX Resource Management Suite";}
    if (port == 3840) { return "wwwFlirtMitMirde";}
    if (port == 3841) { return "ShipRush Database Server";}
    if (port == 3842) { return "NHCI status port";}
    if (port == 3843) { return "Quest Common Agent";}
    if (port == 3844) { return "RNM";}
    if (port == 3845) { return "V-ONE Single Port Proxy";}
    if (port == 3846) { return "Astare Network PCP";}
    if (port == 3847) { return "MS Firewall Control";}
    if (port == 3848) { return "IT Environmental Monitor";}
    if (port == 3849) { return "SPACEWAY DNS Preload";}
    if (port == 3850) { return "QTMS Bootstrap Protocol";}
    if (port == 3851) { return "SpectraTalk Port";}
    if (port == 3852) { return "SSE App Configuration";}
    if (port == 3853) { return "SONY scanning protocol";}
    if (port == 3854) { return "Stryker Comm Port";}
    if (port == 3855) { return "OpenTRAC";}
    if (port == 3856) { return "INFORMER";}
    if (port == 3857) { return "Trap Port";}
    if (port == 3858) { return "Trap Port MOM";}
    if (port == 3859) { return "Navini Port";}
    if (port == 3860) { return "Server/Application State Protocol  SASP";}
    if (port == 3861) { return "winShadow Host Discovery";}
    if (port == 3862) { return "GIGA-POCKET";}
    if (port == 3863) { return "asap tcp port";}
    if (port == 3864) { return "asap/tls tcp port";}
    if (port == 3865) { return "xpl automation protocol";}
    if (port == 3866) { return "Sun SDViz DZDAEMON Port";}
    if (port == 3867) { return "Sun SDViz DZOGLSERVER Port";}
    if (port == 3868) { return "DIAMETER";}
    if (port == 3869) { return "hp OVSAM MgmtServer Disco";}
    if (port == 3870) { return "hp OVSAM HostAgent Disco";}
    if (port == 3871) { return "Avocent DS Authorization";}
    if (port == 3872) { return "OEM Agent";}
    if (port == 3873) { return "fagordnc";}
    if (port == 3874) { return "SixXS Configuration";}
    if (port == 3875) { return "PNBSCADA";}
    if (port == 3876) { return "DirectoryLockdown Agent";}
    if (port == 3877) { return "XMPCR Interface Port";}
    if (port == 3878) { return "FotoG CAD interface";}
    if (port == 3879) { return "appss license manager";}
    if (port == 3880) { return "IGRS";}
    if (port == 3881) { return "Data Acquisition and Control";}
    if (port == 3882) { return "DTS Service Port";}
    if (port == 3883) { return "VR Peripheral Network";}
    if (port == 3884) { return "SofTrack Metering";}
    if (port == 3885) { return "TopFlow SSL";}
    if (port == 3886) { return "NEI management port";}
    if (port == 3887) { return "Ciphire Data Transport";}
    if (port == 3888) { return "Ciphire Services";}
    if (port == 3889) { return "D and V Tester Control Port";}
    if (port == 3890) { return "Niche Data Server Connect";}
    if (port == 3891) { return "Oracle RTC-PM port";}
    if (port == 3892) { return "PCC-image-port";}
    if (port == 3893) { return "CGI StarAPI Server";}
    if (port == 3894) { return "SyAM Agent Port";}
    if (port == 3895) { return "SyAm SMC Service Port";}
    if (port == 3896) { return "Simple Distributed Objects over TLS";}
    if (port == 3897) { return "Simple Distributed Objects over SSH";}
    if (port == 3898) { return "IAS, Inc SmartEye NET Internet Protocol";}
    if (port == 3899) { return "ITV Port";}
    if (port == 3900) { return "Unidata UDT OS";}
    if (port == 3901) { return "NIM Service Handler";}
    if (port == 3902) { return "NIMsh Auxiliary Port";}
    if (port == 3903) { return "CharsetMGR";}
    if (port == 3904) { return "Arnet Omnilink Port";}
    if (port == 3905) { return "Mailbox Update  MUPDATE protocol";}
    if (port == 3906) { return "TopoVista elevation data";}
    if (port == 3907) { return "Imoguia Port";}
    if (port == 3908) { return "HP Procurve NetManagement";}
    if (port == 3909) { return "SurfControl CPA";}
    if (port == 3910) { return "Printer Request Port";}
    if (port == 3911) { return "Printer Status Port";}
    if (port == 3912) { return "Global Maintech Stars";}
    if (port == 3913) { return "ListCREATOR Port";}
    if (port == 3914) { return "ListCREATOR Port 2";}
    if (port == 3915) { return "Auto-Graphics Cataloging";}
    if (port == 3916) { return "WysDM Controller";}
    if (port == 3917) { return "AFT multiplex port";}
    if (port == 3918) { return "PacketCableMultimediaCOPS";}
    if (port == 3919) { return "HyperIP";}
    if (port == 3920) { return "Exasoft IP Port";}
    if (port == 3921) { return "Herodotus Net";}
    if (port == 3922) { return "Soronti Update Port";}
    if (port == 3923) { return "Symbian Service Broker";}
    if (port == 3924) { return "MPL_GPRS_PORT";}
    if (port == 3925) { return "Zoran Media Port";}
    if (port == 3926) { return "WINPort";}
    if (port == 3927) { return "ScsTsr";}
    if (port == 3928) { return "PXE NetBoot Manager";}
    if (port == 3929) { return "AMS Port";}
    if (port == 3930) { return "Syam Web Server Port";}
    if (port == 3931) { return "MSR Plugin Port";}
    if (port == 3932) { return "Dynamic Site System";}
    if (port == 3933) { return "PL/B App Server User Port";}
    if (port == 3934) { return "PL/B File Manager Port";}
    if (port == 3935) { return "SDP Port Mapper Protocol";}
    if (port == 3936) { return "Mailprox";}
    if (port == 3937) { return "DVB Service Discovery";}
    if (port == 3938) { return "Oracle dbControl Agent po";}
    if (port == 3939) { return "Anti-virus Application Management Port";}
    if (port == 3940) { return "XeCP Node Service";}
    if (port == 3941) { return "Home Portal Web Server";}
    if (port == 3942) { return "satellite distribution";}
    if (port == 3943) { return "TetraNode Ip Gateway";}
    if (port == 3944) { return "S-Ops Management";}
    if (port == 3945) { return "EMCADS Server Port";}
    if (port == 3946) { return "BackupEDGE Server";}
    if (port == 3947) { return "Connect and Control Protocol for Consumer, Commercial, and Industrial Electronic Devices";}
    if (port == 3948) { return "Anton Paar Device Administration Protocol";}
    if (port == 3949) { return "Dynamic Routing Information Protocol";}
    if (port == 3950) { return "Name Munging";}
    if (port == 3951) { return "PWG IPP Facsimile";}
    if (port == 3952) { return "I3 Session Manager";}
    if (port == 3953) { return "Eydeas XMLink Connect";}
    if (port == 3954) { return "AD Replication RPC";}
    if (port == 3955) { return "p2pCommunity";}
    if (port == 3956) { return "GigE Vision Control";}
    if (port == 3957) { return "MQEnterprise Broker";}
    if (port == 3958) { return "MQEnterprise Agent";}
    if (port == 3959) { return "Tree Hopper Networking";}
    if (port == 3960) { return "Bess Peer Assessment";}
    if (port == 3961) { return "ProAxess Server";}
    if (port == 3962) { return "SBI Agent Protocol";}
    if (port == 3963) { return "Teran Hybrid Routing Protocol";}
    if (port == 3964) { return "SASG GPRS";}
    if (port == 3965) { return "Avanti IP to NCPE API";}
    if (port == 3966) { return "BuildForge Lock Manager";}
    if (port == 3967) { return "PPS Message Service";}
    if (port == 3968) { return "iAnywhere DBNS";}
    if (port == 3969) { return "Landmark Messages";}
    if (port == 3970) { return "LANrev Agent";}
    if (port == 3971) { return "LANrev Server";}
    if (port == 3972) { return "ict-control Protocol";}
    if (port == 3973) { return "ConnectShip Progistics";}
    if (port == 3974) { return "Remote Applicant Tracking Service";}
    if (port == 3975) { return "Air Shot";}
    if (port == 3976) { return "Server Automation Agent";}
    if (port == 3977) { return "Opsware Manager";}
    if (port == 3978) { return "Secured Configuration Server";}
    if (port == 3979) { return "Smith Micro Wide Area Network Service";}
    if (port == 3980) { return "Aircraft Cabin Management System";}
    if (port == 3981) { return "Starfish System Admin";}
    if (port == 3982) { return "ESRI Image Server";}
    if (port == 3983) { return "ESRI Image Service";}
    if (port == 3984) { return "MAPPER network node manager";}
    if (port == 3985) { return "MAPPER TCP/IP server";}
    if (port == 3986) { return "MAPPER workstation server";}
    if (port == 3987) { return "Centerline";}
    if (port == 3988) { return "DCS Configuration Port";}
    if (port == 3989) { return "BindView-Query Engine";}
    if (port == 3990) { return "BindView-IS";}
    if (port == 3991) { return "BindView-SMCServer";}
    if (port == 3992) { return "BindView-DirectoryServer";}
    if (port == 3993) { return "BindView-Agent";}
    if (port == 3995) { return "ISS Management Svcs SSL";}
    if (port == 3996) { return "abcsoftware-01";}
    if (port == 3997) { return "aes_db";}
    if (port == 3998) { return "Distributed Nagios Executor Service";}
    if (port == 3999) { return "Norman distributes scanning service";}
    if (port == 4000) { return "Terabase";}
    if (port == 4001) { return "NewOak";}
    if (port == 4002) { return "pxc-spvr-ft";}
    if (port == 4003) { return "pxc-splr-ft";}
    if (port == 4004) { return "pxc-roid";}
    if (port == 4005) { return "pxc-pin";}
    if (port == 4006) { return "pxc-spvr";}
    if (port == 4007) { return "pxc-splr";}
    if (port == 4008) { return "NetCheque accounting";}
    if (port == 4009) { return "Chimera HWM";}
    if (port == 4010) { return "Samsung Unidex";}
    if (port == 4011) { return "Alternate Service Boot";}
    if (port == 4012) { return "PDA Gate";}
    if (port == 4013) { return "ACL Manager";}
    if (port == 4014) { return "TAICLOCK";}
    if (port == 4015) { return "Talarian Mcast";}
    if (port == 4016) { return "Talarian Mcast";}
    if (port == 4017) { return "Talarian Mcast";}
    if (port == 4018) { return "Talarian Mcast";}
    if (port == 4019) { return "Talarian Mcast";}
    if (port == 4020) { return "TRAP Port";}
    if (port == 4021) { return "Nexus Portal";}
    if (port == 4022) { return "DNOX";}
    if (port == 4023) { return "ESNM Zoning Port";}
    if (port == 4024) { return "TNP1 User Port";}
    if (port == 4025) { return "Partition Image Port";}
    if (port == 4026) { return "Graphical Debug Server";}
    if (port == 4027) { return "bitxpress";}
    if (port == 4028) { return "DTServer Port";}
    if (port == 4029) { return "IP Q signaling protocol";}
    if (port == 4030) { return "Accell/JSP Daemon Port";}
    if (port == 4031) { return "UUCP over SSL";}
    if (port == 4032) { return "VERITAS Authorization Service";}
    if (port == 4033) { return "SANavigator Peer Port";}
    if (port == 4034) { return "Ubiquinox Daemon";}
    if (port == 4035) { return "WAP Push OTA-HTTP port";}
    if (port == 4036) { return "WAP Push OTA-HTTP secure";}
    if (port == 4037) { return "RaveHD network control";}
    if (port == 4038) { return "Fazzt Point-To-Point";}
    if (port == 4039) { return "Fazzt Administration";}
    if (port == 4040) { return "Yonet main service";}
    if (port == 4041) { return "Rocketeer-Houston";}
    if (port == 4042) { return "LDXP";}
    if (port == 4043) { return "Neighbour Identity Resolution";}
    if (port == 4044) { return "Location Tracking Protocol";}
    if (port == 4045) { return "Network Paging Protocol";}
    if (port == 4046) { return "Accounting Protocol";}
    if (port == 4047) { return "Context Transfer Protocol";}
    if (port == 4049) { return "Wide Area File Services";}
    if (port == 4050) { return "Wide Area File Services";}
    if (port == 4051) { return "Cisco Peer to Peer Distribution Protocol";}
    if (port == 4052) { return "VoiceConnect Interact";}
    if (port == 4053) { return "CosmoCall Universe Communications Port 1";}
    if (port == 4054) { return "CosmoCall Universe Communications Port 2";}
    if (port == 4055) { return "CosmoCall Universe Communications Port 3";}
    if (port == 4056) { return "Location Message Service";}
    if (port == 4057) { return "Servigistics WFM server";}
    if (port == 4058) { return "Kingfisher protocol";}
    if (port == 4059) { return "DLMS/COSEM";}
    if (port == 4060) { return "DSMETER Inter-Agent Transfer Channel";}
    if (port == 4061) { return "Ice Location Service  TCP";}
    if (port == 4062) { return "Ice Location Service  SSL";}
    if (port == 4063) { return "Ice Firewall Traversal Service  TCP";}
    if (port == 4064) { return "Ice Firewall Traversal Service  SSL";}
    if (port == 4065) { return "Avanti Common Data";}
    if (port == 4066) { return "Performance Measurement and Analysis";}
    if (port == 4067) { return "Information Distribution Protocol";}
    if (port == 4068) { return "IP Fleet Broadcast";}
    if (port == 4069) { return "Minger Email Address Validation Service";}
    if (port == 4070) { return "Trivial IP Encryption  TrIPE";}
    if (port == 4071) { return "Automatically Incremental Backup";}
    if (port == 4072) { return "Zieto Socket Communications";}
    if (port == 4073) { return "Interactive Remote Application Pairing Protocol";}
    if (port == 4074) { return "Cequint City ID UI trigger";}
    if (port == 4075) { return "ISC Alarm Message Service";}
    if (port == 4076) { return "Seraph DCS";}
    if (port == 4078) { return "Coordinated Security Service Protocol";}
    if (port == 4079) { return "SANtools Diagnostic Server";}
    if (port == 4080) { return "Lorica inside facing";}
    if (port == 4081) { return "Lorica inside facing  SSL";}
    if (port == 4082) { return "Lorica outside facing";}
    if (port == 4083) { return "Lorica outside facing  SSL";}
    if (port == 4085) { return "EZNews Newsroom Message Service";}
    if (port == 4087) { return "APplus Service";}
    if (port == 4088) { return "Noah Printing Service Protocol";}
    if (port == 4089) { return "OpenCORE Remote Control Service";}
    if (port == 4090) { return "OMA BCAST Service Guide";}
    if (port == 4091) { return "EminentWare Installer";}
    if (port == 4092) { return "EminentWare DGS";}
    if (port == 4093) { return "Pvx Plus CS Host";}
    if (port == 4094) { return "sysrq daemon";}
    if (port == 4095) { return "xtgui information service";}
    if (port == 4096) { return "BRE  Bridge Relay Element";}
    if (port == 4097) { return "Patrol View";}
    if (port == 4098) { return "drmsfsd";}
    if (port == 4099) { return "DPCP";}
    if (port == 4100) { return "IGo Incognito Data Port";}
    if (port == 4101) { return "Braille protocol";}
    if (port == 4102) { return "Braille protocol";}
    if (port == 4103) { return "Braille protocol";}
    if (port == 4104) { return "Braille protocol";}
    if (port == 4105) { return "Shofar";}
    if (port == 4106) { return "Synchronite";}
    if (port == 4107) { return "JDL Accounting LAN Service";}
    if (port == 4108) { return "ACCEL";}
    if (port == 4109) { return "Instantiated Zero-control Messaging";}
    if (port == 4110) { return "G2 RFID Tag Telemetry Data";}
    if (port == 4111) { return "Xgrid";}
    if (port == 4112) { return "Apple VPN Server Reporting Protocol";}
    if (port == 4113) { return "AIPN LS Registration";}
    if (port == 4114) { return "JomaMQMonitor";}
    if (port == 4115) { return "CDS Transfer Agent";}
    if (port == 4116) { return "smartcard-TLS";}
    if (port == 4117) { return "Hillr Connection Manager";}
    if (port == 4118) { return "Netadmin Systems NETscript service";}
    if (port == 4119) { return "Assuria Log Manager";}
    if (port == 4120) { return "MiniRem Remote Telemetry and Control";}
    if (port == 4121) { return "e-Builder Application Communication";}
    if (port == 4122) { return "Fiber Patrol Alarm Service";}
    if (port == 4123) { return "Z-Wave Protocol";}
    if (port == 4124) { return "Rohill TetraNode Ip Gateway v2";}
    if (port == 4125) { return "Opsview Envoy";}
    if (port == 4126) { return "Data Domain Replication Service";}
    if (port == 4127) { return "NetUniKeyServer";}
    if (port == 4128) { return "NuFW decision delegation protocol";}
    if (port == 4129) { return "NuFW authentication protocol";}
    if (port == 4130) { return "FRONET message protocol";}
    if (port == 4131) { return "Global Maintech Stars";}
    if (port == 4132) { return "NUTS Daemon";}
    if (port == 4133) { return "NUTS Bootp Server";}
    if (port == 4134) { return "NIFTY-Serve HMI protocol";}
    if (port == 4135) { return "Classic Line Database Server Attach";}
    if (port == 4136) { return "Classic Line Database Server Request";}
    if (port == 4137) { return "Classic Line Database Server Remote";}
    if (port == 4138) { return "nettest";}
    if (port == 4139) { return "Imperfect Networks Server";}
    if (port == 4140) { return "Cedros Fraud Detection System";}
    if (port == 4141) { return "Workflow Server";}
    if (port == 4142) { return "Document Server";}
    if (port == 4143) { return "Document Replication";}
    if (port == 4145) { return "VVR Control";}
    if (port == 4146) { return "TGCConnect Beacon";}
    if (port == 4147) { return "Multum Service Manager";}
    if (port == 4148) { return "HHB Handheld Client";}
    if (port == 4149) { return "A10 GSLB Service";}
    if (port == 4150) { return "PowerAlert Network Shutdown Agent";}
    if (port == 4151) { return "Men & Mice Remote Control";}
    if (port == 4152) { return "iDigTech Multiplex";}
    if (port == 4153) { return "MBL Remote Battery Monitoring";}
    if (port == 4154) { return "atlinks device discovery";}
    if (port == 4155) { return "Bazaar version control system";}
    if (port == 4156) { return "STAT Results";}
    if (port == 4157) { return "STAT Scanner Control";}
    if (port == 4158) { return "STAT Command Center";}
    if (port == 4159) { return "Network Security Service";}
    if (port == 4160) { return "Jini Discovery";}
    if (port == 4161) { return "OMS Contact";}
    if (port == 4162) { return "OMS Topology";}
    if (port == 4163) { return "Silver Peak Peer Protocol";}
    if (port == 4164) { return "Silver Peak Communication Protocol";}
    if (port == 4165) { return "ArcLink over Ethernet";}
    if (port == 4166) { return "Joost Peer to Peer Protocol";}
    if (port == 4167) { return "DeskDirect Global Network";}
    if (port == 4168) { return "PrintSoft License Server";}
    if (port == 4169) { return "Automation Drive Interface Transport";}
    if (port == 4170) { return "SMPTE Content Synchonization Protocol";}
    if (port == 4171) { return "Maxlogic Supervisor Communication";}
    if (port == 4172) { return "PC over IP";}
    if (port == 4174) { return "StorMagic Cluster Services";}
    if (port == 4175) { return "Brocade Cluster Communication Protocol";}
    if (port == 4176) { return "Translattice Cluster IPC Proxy";}
    if (port == 4177) { return "Wello P2P pubsub service";}
    if (port == 4178) { return "StorMan";}
    if (port == 4179) { return "Maxum Services";}
    if (port == 4180) { return "HTTPX";}
    if (port == 4181) { return "MacBak";}
    if (port == 4182) { return "Production Company Pro TCP Service";}
    if (port == 4183) { return "CyborgNet communications protocol";}
    if (port == 4184) { return "UNIVERSE SUITE MESSAGE SERVICE";}
    if (port == 4185) { return "Woven Control Plane Protocol";}
    if (port == 4186) { return "Box Backup Store Service";}
    if (port == 4187) { return "Cascade Proxy";}
    if (port == 4188) { return "Vatata Peer to Peer Protocol";}
    if (port == 4189) { return "Path Computation Element Communication Protocol";}
    if (port == 4190) { return "ManageSieve Protocol";}
    if (port == 4192) { return "Azeti Agent Service";}
    if (port == 4193) { return "PxPlus remote file srvr";}
    if (port == 4197) { return "Harman HControl Protocol";}
    if (port == 4199) { return "EIMS ADMIN";}
    if (port == 4300) { return "Corel CCam";}
    if (port == 4301) { return "Diagnostic Data";}
    if (port == 4302) { return "Diagnostic Data Control";}
    if (port == 4303) { return "Simple Railroad Command Protocol";}
    if (port == 4304) { return "One-Wire Filesystem Server";}
    if (port == 4305) { return "better approach to mobile ad-hoc networking";}
    if (port == 4306) { return "Hellgate London";}
    if (port == 4307) { return "TrueConf Videoconference Service";}
    if (port == 4308) { return "CompX-LockView";}
    if (port == 4309) { return "Exsequi Appliance Discovery";}
    if (port == 4310) { return "Mir-RT exchange service";}
    if (port == 4311) { return "P6R Secure Server Management Console";}
    if (port == 4312) { return "Parascale Membership Manager";}
    if (port == 4313) { return "PERRLA User Services";}
    if (port == 4314) { return "ChoiceView Agent";}
    if (port == 4316) { return "ChoiceView Client";}
    if (port == 4320) { return "FDT Remote Categorization Protocol";}
    if (port == 4321) { return "Remote Who Is";}
    if (port == 4322) { return "TRIM Event Service";}
    if (port == 4323) { return "TRIM ICE Service";}
    if (port == 4325) { return "Cadcorp GeognoSIS Manager Service";}
    if (port == 4326) { return "Cadcorp GeognoSIS Service";}
    if (port == 4327) { return "Jaxer Web Protocol";}
    if (port == 4328) { return "Jaxer Manager Command Protocol";}
    if (port == 4329) { return "PubliQare Distributed Environment Synchronisation Engine";}
    if (port == 4330) { return "DEY Storage Administration REST API";}
    if (port == 4331) { return "ktickets REST API for event management and ticketing systems  embedded POS devices";}
    if (port == 4333) { return "ArrowHead Service Protocol  AHSP";}
    if (port == 4334) { return "NETCONF Call Home  SSH";}
    if (port == 4335) { return "NETCONF Call Home  TLS";}
    if (port == 4336) { return "RESTCONF Call Home  TLS";}
    if (port == 4340) { return "Gaia Connector Protocol";}
    if (port == 4341) { return "LISP Data Packets";}
    if (port == 4342) { return "LISP-CONS Control";}
    if (port == 4343) { return "UNICALL";}
    if (port == 4344) { return "VinaInstall";}
    if (port == 4345) { return "Macro 4 Network AS";}
    if (port == 4346) { return "ELAN LM";}
    if (port == 4347) { return "LAN Surveyor";}
    if (port == 4348) { return "ITOSE";}
    if (port == 4349) { return "File System Port Map";}
    if (port == 4350) { return "Net Device";}
    if (port == 4351) { return "PLCY Net Services";}
    if (port == 4352) { return "Projector Link";}
    if (port == 4353) { return "F5 iQuery";}
    if (port == 4354) { return "QSNet Transmitter";}
    if (port == 4355) { return "QSNet Workstation";}
    if (port == 4356) { return "QSNet Assistant";}
    if (port == 4357) { return "QSNet Conductor";}
    if (port == 4358) { return "QSNet Nucleus";}
    if (port == 4359) { return "OMA BCAST Long-Term Key Messages";}
    if (port == 4360) { return "Matrix VNet Communication Protocol";}
    if (port == 4368) { return "WeatherBrief Direct";}
    if (port == 4369) { return "Erlang Port Mapper Daemon";}
    if (port == 4370) { return "ELPRO V2 Protocol Tunnel";}
    if (port == 4371) { return "LAN2CAN Control";}
    if (port == 4372) { return "LAN2CAN Data";}
    if (port == 4373) { return "Remote Authenticated Command Service";}
    if (port == 4374) { return "PSI Push-to-Talk Protocol";}
    if (port == 4375) { return "Toltec EasyShare";}
    if (port == 4376) { return "BioAPI Interworking";}
    if (port == 4377) { return "Cambridge Pixel SPx Server";}
    if (port == 4378) { return "Cambridge Pixel SPx Display";}
    if (port == 4379) { return "CTDB";}
    if (port == 4389) { return "Xandros Community Management Service";}
    if (port == 4390) { return "Physical Access Control";}
    if (port == 4391) { return "American Printware IMServer Protocol";}
    if (port == 4392) { return "American Printware RXServer Protocol";}
    if (port == 4393) { return "American Printware RXSpooler Protocol";}
    if (port == 4395) { return "OmniVision communication for Virtual environments";}
    if (port == 4396) { return "Fly Object Space";}
    if (port == 4400) { return "ASIGRA Services";}
    if (port == 4401) { return "ASIGRA Televaulting DS-System Service";}
    if (port == 4402) { return "ASIGRA Televaulting DS-Client Service";}
    if (port == 4403) { return "ASIGRA Televaulting DS-Client Monitoring/Management";}
    if (port == 4404) { return "ASIGRA Televaulting DS-System Monitoring/Management";}
    if (port == 4405) { return "ASIGRA Televaulting Message Level Restore service";}
    if (port == 4406) { return "ASIGRA Televaulting DS-Sleeper Service";}
    if (port == 4407) { return "Network Access Control Agent";}
    if (port == 4408) { return "SLS Technology Control Centre";}
    if (port == 4409) { return "Net-Cabinet comunication";}
    if (port == 4410) { return "RIB iTWO Application Server";}
    if (port == 4411) { return "Found Messaging Protocol";}
    if (port == 4413) { return "AVI Systems NMS";}
    if (port == 4414) { return "Updog Monitoring and Status Framework";}
    if (port == 4415) { return "Brocade Virtual Router Request";}
    if (port == 4416) { return "PJJ Media Player";}
    if (port == 4417) { return "Workflow Director Communication";}
    if (port == 4419) { return "Colnod Binary Protocol";}
    if (port == 4420) { return "NVM Express over Fabrics storage access";}
    if (port == 4421) { return "Multi-Platform Remote Management for Cloud Infrastructure";}
    if (port == 4422) { return "TSEP Installation Service Protocol";}
    if (port == 4423) { return "thingkit secure mesh";}
    if (port == 4425) { return "NetROCKEY6 SMART Plus Service";}
    if (port == 4426) { return "SMARTS Beacon Port";}
    if (port == 4427) { return "Drizzle database server";}
    if (port == 4428) { return "OMV-Investigation Server-Client";}
    if (port == 4429) { return "OMV Investigation Agent-Server";}
    if (port == 4430) { return "REAL SQL Server";}
    if (port == 4431) { return "adWISE Pipe";}
    if (port == 4432) { return "L-ACOUSTICS management";}
    if (port == 4433) { return "Versile Object Protocol";}
    if (port == 4442) { return "Saris";}
    if (port == 4443) { return "Pharos";}
    if (port == 4444) { return "KRB524/NV Video default";}
    if (port == 4445) { return "UPNOTIFYP";}
    if (port == 4446) { return "N1-FWP";}
    if (port == 4447) { return "N1-RMGMT";}
    if (port == 4448) { return "ASC Licence Manager";}
    if (port == 4449) { return "PrivateWire";}
    if (port == 4450) { return "Common ASCII Messaging Protocol";}
    if (port == 4451) { return "CTI System Msg";}
    if (port == 4452) { return "CTI Program Load";}
    if (port == 4453) { return "NSS Alert Manager";}
    if (port == 4454) { return "NSS Agent Manager";}
    if (port == 4455) { return "PR Chat User";}
    if (port == 4456) { return "PR Chat Server";}
    if (port == 4457) { return "PR Register";}
    if (port == 4458) { return "Matrix Configuration Protocol";}
    if (port == 4484) { return "hpssmgmt service";}
    if (port == 4485) { return "Assyst Data Repository Service";}
    if (port == 4486) { return "Integrated Client Message Service";}
    if (port == 4487) { return "Protocol for Remote Execution over TCP";}
    if (port == 4488) { return "Apple Wide Area Connectivity Service ICE Bootstrap";}
    if (port == 4500) { return "IPsec NAT-Traversal";}
    if (port == 4535) { return "Event Heap Server";}
    if (port == 4536) { return "Event Heap Server SSL";}
    if (port == 4537) { return "WSS Security Service";}
    if (port == 4538) { return "Software Data Exchange Gateway";}
    if (port == 4545) { return "WorldScores";}
    if (port == 4546) { return "SF License Manager  Sentinel";}
    if (port == 4547) { return "Lanner License Manager";}
    if (port == 4548) { return "Synchromesh";}
    if (port == 4549) { return "Aegate PMR Service";}
    if (port == 4550) { return "Perman I Interbase Server";}
    if (port == 4551) { return "MIH Services";}
    if (port == 4552) { return "Men and Mice Monitoring";}
    if (port == 4553) { return "ICS host services";}
    if (port == 4554) { return "MS FRS Replication";}
    if (port == 4555) { return "RSIP Port";}
    if (port == 4556) { return "DTN Bundle TCP CL Protocol";}
    if (port == 4559) { return "HylaFAX";}
    if (port == 4563) { return "Amahi Anywhere";}
    if (port == 4566) { return "Kids Watch Time Control Service";}
    if (port == 4567) { return "TRAM";}
    if (port == 4568) { return "BMC Reporting";}
    if (port == 4569) { return "Inter-Asterisk eXchange";}
    if (port == 4570) { return "Service to distribute and update within a site deployment information for Oracle Communications Suite";}
    if (port == 4573) { return "A port for communication between a server and client for a custom backup system";}
    if (port == 4590) { return "RID over HTTP/TLS";}
    if (port == 4591) { return "HRPD L3T  AT-AN";}
    if (port == 4593) { return "IPT  ANRI-ANRI";}
    if (port == 4594) { return "IAS-Session  ANRI-ANRI";}
    if (port == 4595) { return "IAS-Paging  ANRI-ANRI";}
    if (port == 4596) { return "IAS-Neighbor  ANRI-ANRI";}
    if (port == 4597) { return "A21  AN-1xBS";}
    if (port == 4598) { return "A16  AN-AN";}
    if (port == 4599) { return "A17  AN-AN";}
    if (port == 4600) { return "Piranha1";}
    if (port == 4601) { return "Piranha2";}
    if (port == 4602) { return "EAX MTS Server";}
    if (port == 4603) { return "Men & Mice Upgrade Agent";}
    if (port == 4604) { return "Identity Registration Protocol";}
    if (port == 4605) { return "Direct End to End Secure Chat Protocol";}
    if (port == 4658) { return "PlayStation2 App Port";}
    if (port == 4659) { return "PlayStation2 Lobby Port";}
    if (port == 4660) { return "smaclmgr";}
    if (port == 4661) { return "Kar2ouche Peer location service";}
    if (port == 4662) { return "OrbitNet Message Service";}
    if (port == 4663) { return "Note It! Message Service";}
    if (port == 4664) { return "Rimage Messaging Server";}
    if (port == 4665) { return "Container Client Message Service";}
    if (port == 4666) { return "E-Port Message Service";}
    if (port == 4667) { return "MMA Comm Services";}
    if (port == 4668) { return "MMA EDS Service";}
    if (port == 4669) { return "E-Port Data Service";}
    if (port == 4670) { return "Light packets transfer protocol";}
    if (port == 4671) { return "Bull RSF action server";}
    if (port == 4672) { return "remote file access server";}
    if (port == 4673) { return "CXWS Operations";}
    if (port == 4674) { return "AppIQ Agent Management";}
    if (port == 4675) { return "BIAP Device Status";}
    if (port == 4676) { return "BIAP Generic Alert";}
    if (port == 4677) { return "Business Continuity Servi";}
    if (port == 4678) { return "boundary traversal";}
    if (port == 4679) { return "MGE UPS Supervision";}
    if (port == 4680) { return "MGE UPS Management";}
    if (port == 4681) { return "Parliant Telephony System";}
    if (port == 4682) { return "finisar";}
    if (port == 4683) { return "Spike Clipboard Service";}
    if (port == 4684) { return "RFID Reader Protocol 10";}
    if (port == 4685) { return "Autopac Protocol";}
    if (port == 4686) { return "Manina Service Protocol";}
    if (port == 4687) { return "Network Scanner Tool FTP";}
    if (port == 4688) { return "Mobile P2P Service";}
    if (port == 4689) { return "Altova DatabaseCentral";}
    if (port == 4690) { return "Prelude IDS message proto";}
    if (port == 4691) { return "monotone Netsync Protocol";}
    if (port == 4692) { return "Conspiracy messaging";}
    if (port == 4700) { return "NetXMS Agent";}
    if (port == 4701) { return "NetXMS Management";}
    if (port == 4702) { return "NetXMS Server Synchronization";}
    if (port == 4703) { return "Network Performance Quality Evaluation System Test Service";}
    if (port == 4704) { return "Assuria Insider";}
    if (port == 4711) { return "Trinity Trust Network Node Communication";}
    if (port == 4725) { return "TruckStar Service";}
    if (port == 4727) { return "F-Link Client Information Service";}
    if (port == 4728) { return "CA Port Multiplexer";}
    if (port == 4730) { return "Gearman Job Queue System";}
    if (port == 4731) { return "Remote Capture Protocol";}
    if (port == 4733) { return "RES Orchestration Catalog Services";}
    if (port == 4737) { return "IPDR/SP";}
    if (port == 4738) { return "SoleraTec Locator";}
    if (port == 4739) { return "IP Flow Info Export";}
    if (port == 4740) { return "ipfix protocol over TLS";}
    if (port == 4741) { return "Luminizer Manager";}
    if (port == 4742) { return "SICCT";}
    if (port == 4743) { return "openhpi HPI service";}
    if (port == 4744) { return "Internet File Synchronization Protocol";}
    if (port == 4745) { return "Funambol Mobile Push";}
    if (port == 4749) { return "Profile for Mac";}
    if (port == 4750) { return "Simple Service Auto Discovery";}
    if (port == 4751) { return "Simple Policy Control Protocol";}
    if (port == 4752) { return "Simple Network Audio Protocol";}
    if (port == 4753) { return "Simple Invocation of Methods Over Network  SIMON";}
    if (port == 4756) { return "Reticle Decision Center";}
    if (port == 4774) { return "Converge RPC";}
    if (port == 4784) { return "BFD Multihop Control";}
    if (port == 4786) { return "Smart Install Service";}
    if (port == 4787) { return "Service Insertion Architecture  SIA Control-Plane";}
    if (port == 4788) { return "eXtensible Messaging Client Protocol";}
    if (port == 4800) { return "Icona Instant Messenging System";}
    if (port == 4801) { return "Icona Web Embedded Chat";}
    if (port == 4802) { return "Icona License System Server";}
    if (port == 4803) { return "Notateit Messaging";}
    if (port == 4827) { return "HTCP";}
    if (port == 4837) { return "Varadero-0";}
    if (port == 4838) { return "Varadero-1";}
    if (port == 4839) { return "Varadero-2";}
    if (port == 4840) { return "OPC UA Connection Protocol";}
    if (port == 4841) { return "QUOSA Virtual Library Service";}
    if (port == 4842) { return "nCode ICE-flow Library AppServer";}
    if (port == 4843) { return "OPC UA TCP Protocol over TLS/SSL";}
    if (port == 4844) { return "nCode ICE-flow Library LogServer";}
    if (port == 4845) { return "WordCruncher Remote Library Service";}
    if (port == 4846) { return "Contamac ICM Service";}
    if (port == 4847) { return "Web Fresh Communication";}
    if (port == 4848) { return "App Server - Admin HTTP";}
    if (port == 4849) { return "App Server - Admin HTTPS";}
    if (port == 4850) { return "Sun App Server - NA";}
    if (port == 4851) { return "Apache Derby Replication";}
    if (port == 4867) { return "Unify Debugger";}
    if (port == 4868) { return "Photon Relay";}
    if (port == 4869) { return "Photon Relay Debug";}
    if (port == 4870) { return "Citcom Tracking Service";}
    if (port == 4871) { return "Wired";}
    if (port == 4876) { return "Tritium CAN Bus Bridge Service";}
    if (port == 4877) { return "Lighting Management Control System";}
    if (port == 4879) { return "WSDL Event Receiver";}
    if (port == 4880) { return "IVI High-Speed LAN Instrument Protocol";}
    if (port == 4883) { return "Meier-Phelps License Server";}
    if (port == 4884) { return "HiveStor Distributed File System";}
    if (port == 4885) { return "ABBS";}
    if (port == 4894) { return "LysKOM Protocol A";}
    if (port == 4899) { return "RAdmin Port";}
    if (port == 4900) { return "HFSQL Client/Server Database Engine";}
    if (port == 4901) { return "FileLocator Remote Search Agent";}
    if (port == 4902) { return "magicCONROL RF and Data Interface";}
    if (port == 4912) { return "Technicolor LUT Access Protocol";}
    if (port == 4913) { return "LUTher Control Protocol";}
    if (port == 4914) { return "Bones Remote Control";}
    if (port == 4915) { return "Fibics Remote Control Service";}
    if (port == 4940) { return "Equitrac Office";}
    if (port == 4941) { return "Equitrac Office";}
    if (port == 4942) { return "Equitrac Office";}
    if (port == 4949) { return "Munin Graphing Framework";}
    if (port == 4950) { return "Sybase Server Monitor";}
    if (port == 4951) { return "PWG WIMS";}
    if (port == 4952) { return "SAG Directory Server";}
    if (port == 4953) { return "Synchronization Arbiter";}
    if (port == 4969) { return "CCSS QMessageMonitor";}
    if (port == 4970) { return "CCSS QSystemMonitor";}
    if (port == 4971) { return "BackUp and Restore Program";}
    if (port == 4984) { return "WebYast";}
    if (port == 4985) { return "GER HC Standard";}
    if (port == 4986) { return "Model Railway Interface Program";}
    if (port == 4987) { return "SMAR Ethernet Port 1";}
    if (port == 4988) { return "SMAR Ethernet Port 2";}
    if (port == 4989) { return "Parallel for GAUSS  tm";}
    if (port == 4990) { return "BusySync Calendar Synch Protocol";}
    if (port == 4991) { return "VITA Radio Transport";}
    if (port == 4999) { return "HFSQL Client/Server Database Engine Manager";}
    if (port == 5002) { return "radio free ethernet";}
    if (port == 5003) { return "FileMaker, Inc - Proprietary transport";}
    if (port == 5004) { return "RTP media data";}
    if (port == 5005) { return "RTP control protocol";}
    if (port == 5006) { return "wsm server";}
    if (port == 5007) { return "wsm server ssl";}
    if (port == 5008) { return "Synapsis EDGE";}
    if (port == 5009) { return "Microsoft Windows Filesystem";}
    if (port == 5010) { return "TelepathStart";}
    if (port == 5011) { return "TelepathAttack";}
    if (port == 5012) { return "NetOnTap Service";}
    if (port == 5013) { return "FileMaker, Inc - Proprietary transport";}
    if (port == 5015) { return "FileMaker, Inc - Web publishing";}
    if (port == 5020) { return "zenginkyo-1";}
    if (port == 5021) { return "zenginkyo-2";}
    if (port == 5022) { return "mice server";}
    if (port == 5023) { return "Htuil Server for PLD2";}
    if (port == 5024) { return "SCPI-TELNET";}
    if (port == 5025) { return "SCPI-RAW";}
    if (port == 5026) { return "Storix I/O daemon  data";}
    if (port == 5027) { return "Storix I/O daemon  stat";}
    if (port == 5028) { return "Quiqum Virtual Relais";}
    if (port == 5029) { return "Infobright Database Server";}
    if (port == 5030) { return "SurfPass";}
    if (port == 5032) { return "SignaCert Enterprise Trust Server Agent";}
    if (port == 5033) { return "Janstor Secure Data";}
    if (port == 5034) { return "Janstor Status";}
    if (port == 5042) { return "asnaacceler8db";}
    if (port == 5043) { return "ShopWorX Administration";}
    if (port == 5044) { return "LXI Event Service";}
    if (port == 5045) { return "Open Settlement Protocol";}
    if (port == 5048) { return "Texai Message Service";}
    if (port == 5049) { return "iVocalize Web Conference";}
    if (port == 5050) { return "multimedia conference control tool";}
    if (port == 5051) { return "ITA Agent";}
    if (port == 5052) { return "ITA Manager";}
    if (port == 5053) { return "RLM License Server";}
    if (port == 5054) { return "RLM administrative interface";}
    if (port == 5055) { return "UNOT";}
    if (port == 5056) { return "Intecom Pointspan 1";}
    if (port == 5057) { return "Intecom Pointspan 2";}
    if (port == 5059) { return "SIP Directory Services";}
    if (port == 5060) { return "SIP";}
    if (port == 5061) { return "SIP-TLS";}
    if (port == 5062) { return "Localisation access";}
    if (port == 5063) { return "centrify secure RPC";}
    if (port == 5064) { return "Channel Access 1";}
    if (port == 5065) { return "Channel Access 2";}
    if (port == 5066) { return "STANAG-5066-SUBNET-INTF";}
    if (port == 5067) { return "Authentx Service";}
    if (port == 5068) { return "Bitforest Data Service";}
    if (port == 5069) { return "I/Net 2000-NPR";}
    if (port == 5070) { return "VersaTrans Server Agent Service";}
    if (port == 5071) { return "PowerSchool";}
    if (port == 5072) { return "Anything In Anything";}
    if (port == 5073) { return "Advantage Group Port Mgr";}
    if (port == 5074) { return "ALES Query";}
    if (port == 5075) { return "Experimental Physics and Industrial Control System";}
    if (port == 5080) { return "OnScreen Data Collection Service";}
    if (port == 5081) { return "SDL - Ent Trans Server";}
    if (port == 5082) { return "Qpur Communication Protocol";}
    if (port == 5083) { return "Qpur File Protocol";}
    if (port == 5084) { return "EPCglobal Low-Level Reader Protocol";}
    if (port == 5085) { return "EPCglobal Encrypted LLRP";}
    if (port == 5086) { return "Aprigo Collection Service";}
    if (port == 5087) { return "BIOTIC - Binary Internet of Things Interoperable Communication";}
    if (port == 5093) { return "Sentinel LM";}
    if (port == 5094) { return "HART-IP";}
    if (port == 5099) { return "SentLM Srv2Srv";}
    if (port == 5100) { return "Socalia service mux";}
    if (port == 5101) { return "Talarian_TCP";}
    if (port == 5102) { return "Oracle OMS non-secure";}
    if (port == 5103) { return "Actifio C2C";}
    if (port == 5106) { return "Actifio UDS Agent";}
    if (port == 5107) { return "Disk to Disk replication between Actifio Clusters";}
    if (port == 5111) { return "TAEP AS service";}
    if (port == 5112) { return "PeerMe Msg Cmd Service";}
    if (port == 5114) { return "Enterprise Vault Services";}
    if (port == 5115) { return "Symantec Autobuild Service";}
    if (port == 5117) { return "GradeCam Image Processing";}
    if (port == 5120) { return "Barracuda Backup Protocol";}
    if (port == 5133) { return "Policy Commander";}
    if (port == 5134) { return "PP ActivationServer";}
    if (port == 5135) { return "ERP-Scale";}
    if (port == 5137) { return "MyCTS server port";}
    if (port == 5145) { return "RMONITOR SECURE";}
    if (port == 5146) { return "Social Alarm Service";}
    if (port == 5150) { return "Ascend Tunnel Management Protocol";}
    if (port == 5151) { return "ESRI SDE Instance";}
    if (port == 5152) { return "ESRI SDE Instance Discovery";}
    if (port == 5154) { return "BZFlag game server";}
    if (port == 5155) { return "Oracle asControl Agent";}
    if (port == 5156) { return "Russian Online Game";}
    if (port == 5157) { return "Mediat Remote Object Exchange";}
    if (port == 5161) { return "SNMP over SSH Transport Model";}
    if (port == 5162) { return "SNMP Notification over SSH Transport Model";}
    if (port == 5163) { return "Shadow Backup";}
    if (port == 5164) { return "Virtual Protocol Adapter";}
    if (port == 5165) { return "ife_1corp";}
    if (port == 5166) { return "WinPCS Service Connection";}
    if (port == 5167) { return "SCTE104 Connection";}
    if (port == 5168) { return "SCTE30 Connection";}
    if (port == 5172) { return "PC over IP Endpoint Management";}
    if (port == 5190) { return "America-Online";}
    if (port == 5191) { return "AmericaOnline1";}
    if (port == 5192) { return "AmericaOnline2";}
    if (port == 5193) { return "AmericaOnline3";}
    if (port == 5194) { return "CipherPoint Config Service";}
    if (port == 5195) { return "The protocol is used by a license server and client programs to control use of program licenses that float to networked machines";}
    if (port == 5197) { return "Tunstall Lone worker device interface";}
    if (port == 5200) { return "TARGUS GetData";}
    if (port == 5201) { return "TARGUS GetData 1";}
    if (port == 5202) { return "TARGUS GetData 2";}
    if (port == 5203) { return "TARGUS GetData 3";}
    if (port == 5209) { return "Nomad Device Video Transfer";}
    if (port == 5215) { return "NOTEZA Data Safety Service";}
    if (port == 5221) { return "3eTI Extensible Management Protocol for OAMP";}
    if (port == 5222) { return "XMPP Client Connection";}
    if (port == 5223) { return "HP Virtual Machine Group Management";}
    if (port == 5224) { return "HP Virtual Machine Console Operations";}
    if (port == 5225) { return "HP Server";}
    if (port == 5226) { return "HP Status";}
    if (port == 5227) { return "HP System Performance Metric Service";}
    if (port == 5228) { return "HP Virtual Room Service";}
    if (port == 5229) { return "Netflow/IPFIX/sFlow Collector and Forwarder Management";}
    if (port == 5230) { return "JaxMP RealFlow application and protocol data";}
    if (port == 5231) { return "Remote Control of Scan Software for Cruse Scanners";}
    if (port == 5232) { return "Cruse Scanning System Service";}
    if (port == 5233) { return "Etinnae Network File Service";}
    if (port == 5234) { return "EEnet communications";}
    if (port == 5235) { return "Galaxy Network Service";}
    if (port == 5237) { return "m-net discovery";}
    if (port == 5245) { return "DownTools Control Protocol";}
    if (port == 5248) { return "CA Access Control Web Service";}
    if (port == 5249) { return "CA AC Lang Service";}
    if (port == 5250) { return "soaGateway";}
    if (port == 5251) { return "CA eTrust VM Service";}
    if (port == 5252) { return "Movaz SSC";}
    if (port == 5253) { return "Kohler Power Device Protocol";}
    if (port == 5254) { return "LogCabin storage service";}
    if (port == 5264) { return "3Com Network Jack Port 1";}
    if (port == 5265) { return "3Com Network Jack Port 2";}
    if (port == 5269) { return "XMPP Server Connection";}
    if (port == 5270) { return "Cartographer XMP";}
    if (port == 5271) { return "StageSoft CueLink messaging";}
    if (port == 5272) { return "PK";}
    if (port == 5280) { return "Bidirectional-streams Over Synchronous HTTP  BOSH";}
    if (port == 5281) { return "Undo License Manager";}
    if (port == 5282) { return "Marimba Transmitter Port";}
    if (port == 5298) { return "XMPP Link-Local Messaging";}
    if (port == 5299) { return "NLG Data Service";}
    if (port == 5300) { return "HA cluster heartbeat";}
    if (port == 5301) { return "HA cluster general services";}
    if (port == 5302) { return "HA cluster configuration";}
    if (port == 5303) { return "HA cluster probing";}
    if (port == 5304) { return "HA Cluster Commands";}
    if (port == 5305) { return "HA Cluster Test";}
    if (port == 5306) { return "Sun MC Group";}
    if (port == 5307) { return "SCO AIP";}
    if (port == 5308) { return "CFengine";}
    if (port == 5309) { return "J Printer";}
    if (port == 5310) { return "Outlaws";}
    if (port == 5312) { return "Permabit Client-Server";}
    if (port == 5313) { return "Real-time & Reliable Data";}
    if (port == 5314) { return "opalis-rbt-ipc";}
    if (port == 5315) { return "HA Cluster UDP Polling";}
    if (port == 5316) { return "HPBladeSystem Monitor Service";}
    if (port == 5317) { return "HP Device Monitor Service";}
    if (port == 5318) { return "PKIX Certificate Management using CMS  CMC";}
    if (port == 5320) { return "Webservices-based Zn interface of BSF";}
    if (port == 5321) { return "Webservices-based Zn interface of BSF over SSL";}
    if (port == 5343) { return "Sculptor Database Server";}
    if (port == 5344) { return "xkoto DRCP";}
    if (port == 5349) { return "STUN over TLS/TURN over TLS/STUN Behavior Discovery over TLS";}
    if (port == 5352) { return "DNS Long-Lived Queries";}
    if (port == 5353) { return "Multicast DNS";}
    if (port == 5354) { return "Multicast DNS Responder IPC";}
    if (port == 5355) { return "LLMNR";}
    if (port == 5356) { return "Microsoft Small Business";}
    if (port == 5357) { return "Web Services for Devices";}
    if (port == 5358) { return "WS for Devices Secured";}
    if (port == 5359) { return "Microsoft Alerter";}
    if (port == 5360) { return "Protocol for Windows SideShow";}
    if (port == 5361) { return "Secure Protocol for Windows SideShow";}
    if (port == 5362) { return "Microsoft Windows Server WSD2 Service";}
    if (port == 5363) { return "Windows Network Projection";}
    if (port == 5397) { return "StressTester tm Injector";}
    if (port == 5398) { return "Elektron Administration";}
    if (port == 5399) { return "SecurityChase";}
    if (port == 5400) { return "Excerpt Search";}
    if (port == 5401) { return "Excerpt Search Secure";}
    if (port == 5402) { return "OmniCast MFTP";}
    if (port == 5403) { return "HPOMS-CI-LSTN";}
    if (port == 5404) { return "HPOMS-DPS-LSTN";}
    if (port == 5405) { return "NetSupport";}
    if (port == 5406) { return "Systemics Sox";}
    if (port == 5407) { return "Foresyte-Clear";}
    if (port == 5408) { return "Foresyte-Sec";}
    if (port == 5409) { return "Salient Data Server";}
    if (port == 5410) { return "Salient User Manager";}
    if (port == 5411) { return "ActNet";}
    if (port == 5412) { return "Continuus";}
    if (port == 5413) { return "WWIOTALK";}
    if (port == 5414) { return "StatusD";}
    if (port == 5415) { return "NS Server";}
    if (port == 5416) { return "SNS Gateway";}
    if (port == 5417) { return "SNS Agent";}
    if (port == 5418) { return "MCNTP";}
    if (port == 5419) { return "DJ-ICE";}
    if (port == 5420) { return "Cylink-C";}
    if (port == 5421) { return "Net Support 2";}
    if (port == 5422) { return "Salient MUX";}
    if (port == 5423) { return "VIRTUALUSER";}
    if (port == 5424) { return "Beyond Remote";}
    if (port == 5425) { return "Beyond Remote Command Channel";}
    if (port == 5426) { return "DEVBASIC";}
    if (port == 5427) { return "SCO-PEER-TTA";}
    if (port == 5428) { return "TELACONSOLE";}
    if (port == 5429) { return "Billing and Accounting System Exchange";}
    if (port == 5430) { return "RADEC CORP";}
    if (port == 5431) { return "PARK AGENT";}
    if (port == 5432) { return "PostgreSQL Database";}
    if (port == 5433) { return "Pyrrho DBMS";}
    if (port == 5434) { return "SGI Array Services Daemon";}
    if (port == 5435) { return "SCEANICS situation and action notification";}
    if (port == 5443) { return "Pearson HTTPS";}
    if (port == 5445) { return "Server Message Block over Remote Direct Memory Access";}
    if (port == 5450) { return "TiePie engineering data acquisition";}
    if (port == 5453) { return "SureBox";}
    if (port == 5454) { return "APC 5454";}
    if (port == 5455) { return "APC 5455";}
    if (port == 5456) { return "APC 5456";}
    if (port == 5461) { return "SILKMETER";}
    if (port == 5462) { return "TTL Publisher";}
    if (port == 5463) { return "TTL Price Proxy";}
    if (port == 5464) { return "Quail Networks Object Broker";}
    if (port == 5465) { return "NETOPS-BROKER";}
    if (port == 5470) { return "The Apsolab company's data collection protocol  native api";}
    if (port == 5471) { return "The Apsolab company's secure data collection protocol  native api";}
    if (port == 5472) { return "The Apsolab company's dynamic tag protocol";}
    if (port == 5473) { return "The Apsolab company's secure dynamic tag protocol";}
    if (port == 5475) { return "The Apsolab company's data retrieval protocol";}
    if (port == 5500) { return "fcp-addr-srvr1";}
    if (port == 5501) { return "fcp-addr-srvr2";}
    if (port == 5502) { return "fcp-srvr-inst1";}
    if (port == 5503) { return "fcp-srvr-inst2";}
    if (port == 5504) { return "fcp-cics-gw1";}
    if (port == 5505) { return "Checkout Database";}
    if (port == 5506) { return "Amcom Mobile Connect";}
    if (port == 5507) { return "PowerSysLab Electrical Management";}
    if (port == 5550) { return "Model Railway control using the CBUS message protocol";}
    if (port == 5553) { return "SGI Eventmond Port";}
    if (port == 5554) { return "SGI ESP HTTP";}
    if (port == 5555) { return "Personal Agent";}
    if (port == 5556) { return "Freeciv gameplay";}
    if (port == 5557) { return "Sandlab FARENET";}
    if (port == 5565) { return "HPE Advanced BURA";}
    if (port == 5566) { return "Westec Connect";}
    if (port == 5567) { return "DOF Protocol Stack Multicast/Secure Transport";}
    if (port == 5568) { return "Session Data Transport Multicast";}
    if (port == 5569) { return "PLASA E133, Remote Device Management  RDM controller status notifications";}
    if (port == 5573) { return "SAS Domain Management Messaging Protocol";}
    if (port == 5574) { return "SAS IO Forwarding";}
    if (port == 5575) { return "Oracle Access Protocol";}
    if (port == 5579) { return "FleetDisplay Tracking Service";}
    if (port == 5580) { return "T-Mobile SMS Protocol Message 0";}
    if (port == 5581) { return "T-Mobile SMS Protocol Message 1";}
    if (port == 5582) { return "T-Mobile SMS Protocol Message 3";}
    if (port == 5583) { return "T-Mobile SMS Protocol Message 2";}
    if (port == 5584) { return "BeInSync-Web";}
    if (port == 5585) { return "BeInSync-sync";}
    if (port == 5586) { return "Planning to send mobile terminated SMS to the specific port so that the SMS is not visible to the client";}
    if (port == 5597) { return "inin secure messaging";}
    if (port == 5598) { return "MCT Market Data Feed";}
    if (port == 5599) { return "Enterprise Security Remote Install";}
    if (port == 5600) { return "Enterprise Security Manager";}
    if (port == 5601) { return "Enterprise Security Agent";}
    if (port == 5602) { return "A1-MSC";}
    if (port == 5603) { return "A1-BS";}
    if (port == 5604) { return "A3-SDUNode";}
    if (port == 5605) { return "A4-SDUNode";}
    if (port == 5618) { return "Fiscal Registering Protocol";}
    if (port == 5627) { return "Node Initiated Network Association Forma";}
    if (port == 5628) { return "HTrust API";}
    if (port == 5629) { return "Symantec Storage Foundation for Database";}
    if (port == 5630) { return "PreciseCommunication";}
    if (port == 5631) { return "pcANYWHEREdata";}
    if (port == 5632) { return "pcANYWHEREstat";}
    if (port == 5633) { return "BE Operations Request Listener";}
    if (port == 5634) { return "SF Message Service";}
    if (port == 5635) { return "SFM Authentication Subsystem";}
    if (port == 5636) { return "SFMdb - SFM DB server";}
    if (port == 5637) { return "Symantec CSSC";}
    if (port == 5638) { return "Symantec Fingerprint Lookup and Container Reference Service";}
    if (port == 5639) { return "Symantec Integrity Checking Service";}
    if (port == 5646) { return "Ventureforth Mobile";}
    if (port == 5666) { return "Nagios Remote Plugin Executor";}
    if (port == 5670) { return "ZeroMQ file publish-subscribe protocol";}
    if (port == 5671) { return "amqp protocol over TLS/SSL";}
    if (port == 5672) { return "AMQP";}
    if (port == 5673) { return "JACL Message Server";}
    if (port == 5674) { return "HyperSCSI Port";}
    if (port == 5675) { return "V5UA application port";}
    if (port == 5676) { return "RA Administration";}
    if (port == 5677) { return "Quest Central DB2 Launchr";}
    if (port == 5678) { return "Remote Replication Agent Connection";}
    if (port == 5679) { return "Direct Cable Connect Manager";}
    if (port == 5680) { return "Auriga Router Service";}
    if (port == 5681) { return "Net-coneX Control Protocol";}
    if (port == 5683) { return "Constrained Application Protocol  CoAP";}
    if (port == 5684) { return "Constrained Application Protocol  CoAP";}
    if (port == 5688) { return "GGZ Gaming Zone";}
    if (port == 5689) { return "QM video network management protocol";}
    if (port == 5693) { return "Robert Bosch Data Transfer";}
    if (port == 5696) { return "Key Management Interoperability Protocol";}
    if (port == 5700) { return "Dell SupportAssist data center management";}
    if (port == 5705) { return "StorageOS REST API";}
    if (port == 5713) { return "proshare conf audio";}
    if (port == 5714) { return "proshare conf video";}
    if (port == 5715) { return "proshare conf data";}
    if (port == 5716) { return "proshare conf request";}
    if (port == 5717) { return "proshare conf notify";}
    if (port == 5718) { return "DPM Communication Server";}
    if (port == 5719) { return "DPM Agent Coordinator";}
    if (port == 5720) { return "MS-Licensing";}
    if (port == 5721) { return "Desktop Passthru Service";}
    if (port == 5722) { return "Microsoft DFS Replication Service";}
    if (port == 5723) { return "Operations Manager - Health Service";}
    if (port == 5724) { return "Operations Manager - SDK Service";}
    if (port == 5725) { return "Microsoft Identity Lifecycle Manager";}
    if (port == 5726) { return "Microsoft Lifecycle Manager Secure Token Service";}
    if (port == 5727) { return "ASG Event Notification Framework";}
    if (port == 5728) { return "Dist I/O Comm Service Data and Control";}
    if (port == 5729) { return "Openmail User Agent Layer";}
    if (port == 5730) { return "Steltor's calendar access";}
    if (port == 5741) { return "IDA Discover Port 1";}
    if (port == 5742) { return "IDA Discover Port 2";}
    if (port == 5743) { return "Watchdoc NetPOD Protocol";}
    if (port == 5744) { return "Watchdoc Server";}
    if (port == 5745) { return "fcopy-server";}
    if (port == 5746) { return "fcopys-server";}
    if (port == 5747) { return "Wildbits Tunatic";}
    if (port == 5748) { return "Wildbits Tunalyzer";}
    if (port == 5750) { return "Bladelogic Agent Service";}
    if (port == 5755) { return "OpenMail Desk Gateway server";}
    if (port == 5757) { return "OpenMail X500 Directory Server";}
    if (port == 5766) { return "OpenMail NewMail Server";}
    if (port == 5767) { return "OpenMail Suer Agent Layer  Secure";}
    if (port == 5768) { return "OpenMail CMTS Server";}
    if (port == 5769) { return "x509solutions Internal CA";}
    if (port == 5770) { return "x509solutions Secure Data";}
    if (port == 5771) { return "NetAgent";}
    if (port == 5777) { return "DALI Port";}
    if (port == 5780) { return "Visual Tag System RPC";}
    if (port == 5781) { return "3PAR Event Reporting Service";}
    if (port == 5782) { return "3PAR Management Service";}
    if (port == 5783) { return "3PAR Management Service with SSL";}
    if (port == 5785) { return "3PAR Inform Remote Copy";}
    if (port == 5793) { return "XtreamX Supervised Peer message";}
    if (port == 5813) { return "ICMPD";}
    if (port == 5814) { return "Support Automation";}
    if (port == 5841) { return "Z-firm ShipRush interface for web access and bidirectional data";}
    if (port == 5842) { return "Reversion Backup/Restore";}
    if (port == 5859) { return "WHEREHOO";}
    if (port == 5863) { return "PlanetPress Suite Messeng";}
    if (port == 5868) { return "Diameter over TLS/TCP";}
    if (port == 5883) { return "Javascript Unit Test Environment";}
    if (port == 5900) { return "Remote Framebuffer";}
    if (port == 5910) { return "Context Management";}
    if (port == 5911) { return "Controller Pilot Data Link Communication";}
    if (port == 5912) { return "Flight Information Services";}
    if (port == 5913) { return "Automatic Dependent Surveillance";}
    if (port == 5963) { return "Indy Application Server";}
    if (port == 5968) { return "mppolicy-v5";}
    if (port == 5969) { return "mppolicy-mgr";}
    if (port == 5984) { return "CouchDB";}
    if (port == 5985) { return "WBEM WS-Management HTTP";}
    if (port == 5986) { return "WBEM WS-Management HTTP over TLS/SSL";}
    if (port == 5987) { return "WBEM RMI";}
    if (port == 5988) { return "WBEM CIM-XML  HTTP";}
    if (port == 5989) { return "WBEM CIM-XML  HTTPS";}
    if (port == 5990) { return "WBEM Export HTTPS";}
    if (port == 5991) { return "NUXSL";}
    if (port == 5992) { return "Consul InSight Security";}
    if (port == 5993) { return "DMTF WBEM CIM REST";}
    if (port == 5999) { return "CVSup";}
    if (port == 6000) { return "X Window System";}
    if (port == 6001) { return "X Window System";}
    if (port == 6002) { return "X Window System";}
    if (port == 6003) { return "X Window System";}
    if (port == 6004) { return "X Window System";}
    if (port == 6005) { return "X Window System";}
    if (port == 6006) { return "X Window System";}
    if (port == 6007) { return "X Window System";}
    if (port == 6008) { return "X Window System";}
    if (port == 6009) { return "X Window System";}
    if (port == 6010) { return "X Window System";}
    if (port == 6011) { return "X Window System";}
    if (port == 6012) { return "X Window System";}
    if (port == 6013) { return "X Window System";}
    if (port == 6014) { return "X Window System";}
    if (port == 6015) { return "X Window System";}
    if (port == 6016) { return "X Window System";}
    if (port == 6017) { return "X Window System";}
    if (port == 6018) { return "X Window System";}
    if (port == 6019) { return "X Window System";}
    if (port == 6020) { return "X Window System";}
    if (port == 6021) { return "X Window System";}
    if (port == 6022) { return "X Window System";}
    if (port == 6023) { return "X Window System";}
    if (port == 6024) { return "X Window System";}
    if (port == 6025) { return "X Window System";}
    if (port == 6026) { return "X Window System";}
    if (port == 6027) { return "X Window System";}
    if (port == 6028) { return "X Window System";}
    if (port == 6029) { return "X Window System";}
    if (port == 6030) { return "X Window System";}
    if (port == 6031) { return "X Window System";}
    if (port == 6032) { return "X Window System";}
    if (port == 6033) { return "X Window System";}
    if (port == 6034) { return "X Window System";}
    if (port == 6035) { return "X Window System";}
    if (port == 6036) { return "X Window System";}
    if (port == 6037) { return "X Window System";}
    if (port == 6038) { return "X Window System";}
    if (port == 6039) { return "X Window System";}
    if (port == 6040) { return "X Window System";}
    if (port == 6041) { return "X Window System";}
    if (port == 6042) { return "X Window System";}
    if (port == 6043) { return "X Window System";}
    if (port == 6044) { return "X Window System";}
    if (port == 6045) { return "X Window System";}
    if (port == 6046) { return "X Window System";}
    if (port == 6047) { return "X Window System";}
    if (port == 6048) { return "X Window System";}
    if (port == 6049) { return "X Window System";}
    if (port == 6050) { return "X Window System";}
    if (port == 6051) { return "X Window System";}
    if (port == 6052) { return "X Window System";}
    if (port == 6053) { return "X Window System";}
    if (port == 6054) { return "X Window System";}
    if (port == 6055) { return "X Window System";}
    if (port == 6056) { return "X Window System";}
    if (port == 6057) { return "X Window System";}
    if (port == 6058) { return "X Window System";}
    if (port == 6059) { return "X Window System";}
    if (port == 6060) { return "X Window System";}
    if (port == 6061) { return "X Window System";}
    if (port == 6062) { return "X Window System";}
    if (port == 6063) { return "X Window System";}
    if (port == 6064) { return "NDL-AHP-SVC";}
    if (port == 6065) { return "WinPharaoh";}
    if (port == 6066) { return "EWCTSP";}
    if (port == 6068) { return "GSMP/ANCP";}
    if (port == 6069) { return "TRIP";}
    if (port == 6070) { return "Messageasap";}
    if (port == 6071) { return "SSDTP";}
    if (port == 6072) { return "DIAGNOSE-PROC";}
    if (port == 6073) { return "DirectPlay8";}
    if (port == 6074) { return "Microsoft Max";}
    if (port == 6075) { return "Microsoft DPM Access Control Manager";}
    if (port == 6076) { return "Microsoft DPM WCF Certificates";}
    if (port == 6077) { return "iConstruct Server";}
    if (port == 6084) { return "Peer to Peer Infrastructure Configuration";}
    if (port == 6085) { return "konspire2b p2p network";}
    if (port == 6086) { return "PDTP P2P";}
    if (port == 6087) { return "Local Download Sharing Service";}
    if (port == 6088) { return "SuperDog License Manager";}
    if (port == 6099) { return "RAXA Management";}
    if (port == 6100) { return "SynchroNet-db";}
    if (port == 6101) { return "SynchroNet-rtc";}
    if (port == 6102) { return "SynchroNet-upd";}
    if (port == 6103) { return "RETS";}
    if (port == 6104) { return "DBDB";}
    if (port == 6105) { return "Prima Server";}
    if (port == 6106) { return "MPS Server";}
    if (port == 6107) { return "ETC Control";}
    if (port == 6108) { return "Sercomm-SCAdmin";}
    if (port == 6109) { return "GLOBECAST-ID";}
    if (port == 6110) { return "HP SoftBench CM";}
    if (port == 6111) { return "HP SoftBench Sub-Process Control";}
    if (port == 6112) { return "Desk-Top Sub-Process Control Daemon";}
    if (port == 6113) { return "Daylite Server";}
    if (port == 6114) { return "WRspice IPC Service";}
    if (port == 6115) { return "Xic IPC Service";}
    if (port == 6116) { return "XicTools License Manager Service";}
    if (port == 6117) { return "Daylite Touch Sync";}
    if (port == 6121) { return "SPDY for a faster web";}
    if (port == 6122) { return "Backup Express Web Server";}
    if (port == 6123) { return "Backup Express";}
    if (port == 6124) { return "Phlexible Network Backup Service";}
    if (port == 6130) { return "The DameWare Mobile Gateway Service";}
    if (port == 6133) { return "New Boundary Tech WOL";}
    if (port == 6140) { return "Pulsonix Network License Service";}
    if (port == 6141) { return "Meta Corporation License Manager";}
    if (port == 6142) { return "Aspen Technology License Manager";}
    if (port == 6143) { return "Watershed License Manager";}
    if (port == 6144) { return "StatSci License Manager - 1";}
    if (port == 6145) { return "StatSci License Manager - 2";}
    if (port == 6146) { return "Lone Wolf Systems License Manager";}
    if (port == 6147) { return "Montage License Manager";}
    if (port == 6148) { return "Ricardo North America License Manager";}
    if (port == 6149) { return "tal-pod";}
    if (port == 6159) { return "EFB Application Control Interface";}
    if (port == 6160) { return "Emerson Extensible Control and Management Protocol";}
    if (port == 6161) { return "PATROL Internet Srv Mgr";}
    if (port == 6162) { return "PATROL Collector";}
    if (port == 6163) { return "Precision Scribe Cnx Port";}
    if (port == 6200) { return "LM-X License Manager by X-Formation";}
    if (port == 6209) { return "QMTP over TLS";}
    if (port == 6222) { return "Radmind Access Protocol";}
    if (port == 6241) { return "JEOL Network Services Data Transport Protocol 1";}
    if (port == 6242) { return "JEOL Network Services Data Transport Protocol 2";}
    if (port == 6243) { return "JEOL Network Services Data Transport Protocol 3";}
    if (port == 6244) { return "JEOL Network Services Data Transport Protocol 4";}
    if (port == 6251) { return "TL1 Raw Over SSL/TLS";}
    if (port == 6252) { return "TL1 over SSH";}
    if (port == 6253) { return "CRIP";}
    if (port == 6267) { return "GridLAB-D User Interface";}
    if (port == 6268) { return "Grid Authentication";}
    if (port == 6269) { return "Grid Authentication Alt";}
    if (port == 6300) { return "BMC GRX";}
    if (port == 6301) { return "BMC CONTROL-D LDAP SERVER";}
    if (port == 6306) { return "Unified Fabric Management Protocol";}
    if (port == 6315) { return "Sensor Control Unit Protocol";}
    if (port == 6316) { return "Ethernet Sensor Communications Protocol";}
    if (port == 6317) { return "Navtech Radar Sensor Data Command";}
    if (port == 6320) { return "Double-Take Replication Service";}
    if (port == 6321) { return "Empress Software Connectivity Server 1";}
    if (port == 6322) { return "Empress Software Connectivity Server 2";}
    if (port == 6324) { return "HR Device Network Configuration Service";}
    if (port == 6325) { return "Double-Take Management Service";}
    if (port == 6326) { return "Double-Take Virtual Recovery Assistant";}
    if (port == 6343) { return "sFlow traffic monitoring";}
    if (port == 6344) { return "Argus-Spectr security and fire-prevention systems service";}
    if (port == 6346) { return "gnutella-svc";}
    if (port == 6347) { return "gnutella-rtr";}
    if (port == 6350) { return "App Discovery and Access Protocol";}
    if (port == 6355) { return "PMCS applications";}
    if (port == 6360) { return "MetaEdit+ Multi-User";}
    if (port == 6370) { return "MetaEdit+ Server Administration";}
    if (port == 6379) { return "An advanced key-value cache and store";}
    if (port == 6382) { return "Metatude Dialogue Server";}
    if (port == 6389) { return "clariion-evr01";}
    if (port == 6390) { return "MetaEdit+ WebService API";}
    if (port == 6417) { return "Faxcom Message Service";}
    if (port == 6418) { return "SYserver remote commands";}
    if (port == 6419) { return "Simple VDR Protocol";}
    if (port == 6420) { return "NIM_VDRShell";}
    if (port == 6421) { return "NIM_WAN";}
    if (port == 6432) { return "PgBouncer";}
    if (port == 6442) { return "Transitory Application Request Protocol";}
    if (port == 6443) { return "Service Registry Default HTTPS Domain";}
    if (port == 6444) { return "Grid Engine Qmaster Service";}
    if (port == 6445) { return "Grid Engine Execution Service";}
    if (port == 6446) { return "MySQL Proxy";}
    if (port == 6455) { return "SKIP Certificate Receive";}
    if (port == 6456) { return "SKIP Certificate Send";}
    if (port == 6464) { return "Port assignment for medical device communication in accordance to IEEE 11073-20701";}
    if (port == 6471) { return "LVision License Manager";}
    if (port == 6480) { return "Service Registry Default HTTP Domain";}
    if (port == 6481) { return "Service Tags";}
    if (port == 6482) { return "Logical Domains Management Interface";}
    if (port == 6483) { return "SunVTS RMI";}
    if (port == 6484) { return "Service Registry Default JMS Domain";}
    if (port == 6485) { return "Service Registry Default IIOP Domain";}
    if (port == 6486) { return "Service Registry Default IIOPS Domain";}
    if (port == 6487) { return "Service Registry Default IIOPAuth Domain";}
    if (port == 6488) { return "Service Registry Default JMX Domain";}
    if (port == 6489) { return "Service Registry Default Admin Domain";}
    if (port == 6500) { return "BoKS Master";}
    if (port == 6501) { return "BoKS Servc";}
    if (port == 6502) { return "BoKS Servm";}
    if (port == 6503) { return "BoKS Clntd";}
    if (port == 6505) { return "BoKS Admin Private Port";}
    if (port == 6506) { return "BoKS Admin Public Port";}
    if (port == 6507) { return "BoKS Dir Server, Private Port";}
    if (port == 6508) { return "BoKS Dir Server, Public Port";}
    if (port == 6509) { return "MGCS-MFP Port";}
    if (port == 6510) { return "MCER Port";}
    if (port == 6513) { return "NETCONF over TLS";}
    if (port == 6514) { return "Syslog over TLS";}
    if (port == 6515) { return "Elipse RPC Protocol";}
    if (port == 6543) { return "lds_distrib";}
    if (port == 6544) { return "LDS Dump Service";}
    if (port == 6547) { return "APC 6547";}
    if (port == 6548) { return "APC 6548";}
    if (port == 6549) { return "APC 6549";}
    if (port == 6550) { return "fg-sysupdate";}
    if (port == 6551) { return "Software Update Manager";}
    if (port == 6566) { return "SANE Control Port";}
    if (port == 6568) { return "CanIt Storage Manager";}
    if (port == 6579) { return "Affiliate";}
    if (port == 6580) { return "Parsec Masterserver";}
    if (port == 6581) { return "Parsec Peer-to-Peer";}
    if (port == 6582) { return "Parsec Gameserver";}
    if (port == 6583) { return "JOA Jewel Suite";}
    if (port == 6600) { return "Microsoft Hyper-V Live Migration";}
    if (port == 6601) { return "Microsoft Threat Management Gateway SSTP";}
    if (port == 6602) { return "Windows WSS Communication Framework";}
    if (port == 6619) { return "ODETTE-FTP over TLS/SSL";}
    if (port == 6620) { return "Kerberos V5 FTP Data";}
    if (port == 6621) { return "Kerberos V5 FTP Control";}
    if (port == 6622) { return "Multicast FTP";}
    if (port == 6623) { return "Kerberos V5 Telnet";}
    if (port == 6624) { return "DataScaler database";}
    if (port == 6625) { return "DataScaler control";}
    if (port == 6626) { return "WAGO Service and Update";}
    if (port == 6627) { return "Allied Electronics NeXGen";}
    if (port == 6628) { return "AFE Stock Channel M/C";}
    if (port == 6629) { return "Secondary,  non ANDI multi-protocol multi-function interface to the Allied ANDI-based family of forecourt controllers";}
    if (port == 6632) { return "eGenix mxODBC Connect";}
    if (port == 6640) { return "Open vSwitch Database protocol";}
    if (port == 6653) { return "OpenFlow";}
    if (port == 6655) { return "PC SOFT - Software factory UI/manager";}
    if (port == 6656) { return "Emergency Message Control Service";}
    if (port == 6665) { return "IRCU";}
    if (port == 6666) { return "IRCU";}
    if (port == 6667) { return "IRCU";}
    if (port == 6668) { return "IRCU";}
    if (port == 6669) { return "IRCU";}
    if (port == 6670) { return "Vocaltec Global Online Directory";}
    if (port == 6671) { return "P4P Portal Service";}
    if (port == 6672) { return "vision_server";}
    if (port == 6673) { return "vision_elmd";}
    if (port == 6678) { return "Viscount Freedom Bridge Protocol";}
    if (port == 6679) { return "Osorno Automation";}
    if (port == 6687) { return "CleverView for cTrace Message Service";}
    if (port == 6688) { return "CleverView for TCP/IP Message Service";}
    if (port == 6689) { return "Tofino Security Appliance";}
    if (port == 6690) { return "CLEVERDetect Message Service";}
    if (port == 6697) { return "Internet Relay Chat via TLS/SSL";}
    if (port == 6701) { return "KTI/ICAD Nameserver";}
    if (port == 6702) { return "e-Design network";}
    if (port == 6703) { return "e-Design web";}
    if (port == 6714) { return "Internet Backplane Protocol";}
    if (port == 6715) { return "Fibotrader Communications";}
    if (port == 6716) { return "Princity Agent";}
    if (port == 6767) { return "BMC PERFORM AGENT";}
    if (port == 6768) { return "BMC PERFORM MGRD";}
    if (port == 6769) { return "ADInstruments GxP Server";}
    if (port == 6770) { return "PolyServe http";}
    if (port == 6771) { return "PolyServe https";}
    if (port == 6777) { return "netTsunami Tracker";}
    if (port == 6778) { return "netTsunami p2p storage system";}
    if (port == 6785) { return "DGPF Individual Exchange";}
    if (port == 6786) { return "Sun Java Web Console JMX";}
    if (port == 6787) { return "Sun Web Console Admin";}
    if (port == 6788) { return "SMC-HTTP";}
    if (port == 6789) { return "GSS-API for the Oracle Remote Administration Daemon";}
    if (port == 6790) { return "HNMP";}
    if (port == 6791) { return "Halcyon Network Manager";}
    if (port == 6801) { return "ACNET Control System Protocol";}
    if (port == 6817) { return "PenTBox Secure IM Protocol";}
    if (port == 6831) { return "ambit-lm";}
    if (port == 6841) { return "Netmo Default";}
    if (port == 6842) { return "Netmo HTTP";}
    if (port == 6850) { return "ICCRUSHMORE";}
    if (port == 6868) { return "Acctopus Command Channel";}
    if (port == 6888) { return "MUSE";}
    if (port == 6900) { return "R*TIME Viewer Data Interface";}
    if (port == 6901) { return "Novell Jetstream messaging protocol";}
    if (port == 6935) { return "EthoScan Service";}
    if (port == 6936) { return "XenSource Management Service";}
    if (port == 6946) { return "Biometrics Server";}
    if (port == 6951) { return "OTLP";}
    if (port == 6961) { return "JMACT3";}
    if (port == 6962) { return "jmevt2";}
    if (port == 6963) { return "swismgr1";}
    if (port == 6964) { return "swismgr2";}
    if (port == 6965) { return "swistrap";}
    if (port == 6966) { return "swispol";}
    if (port == 6969) { return "acmsoda";}
    if (port == 6970) { return "Conductor test coordination protocol";}
    if (port == 6997) { return "Mobility XE Protocol";}
    if (port == 6998) { return "IATP-highPri";}
    if (port == 6999) { return "IATP-normalPri";}
    if (port == 7000) { return "file server itself";}
    if (port == 7001) { return "callbacks to cache managers";}
    if (port == 7002) { return "users & groups database";}
    if (port == 7003) { return "volume location database";}
    if (port == 7004) { return "AFS/Kerberos authentication service";}
    if (port == 7005) { return "volume managment server";}
    if (port == 7006) { return "error interpretation service";}
    if (port == 7007) { return "basic overseer process";}
    if (port == 7008) { return "server-to-server updater";}
    if (port == 7009) { return "remote cache manager service";}
    if (port == 7010) { return "onlinet uninterruptable power supplies";}
    if (port == 7011) { return "Talon Discovery Port";}
    if (port == 7012) { return "Talon Engine";}
    if (port == 7013) { return "Microtalon Discovery";}
    if (port == 7014) { return "Microtalon Communications";}
    if (port == 7015) { return "Talon Webserver";}
    if (port == 7016) { return "SPG Controls Carrier";}
    if (port == 7017) { return "GeneRic Autonomic Signaling Protocol";}
    if (port == 7018) { return "FISA Service";}
    if (port == 7019) { return "doceri drawing service control";}
    if (port == 7020) { return "DP Serve";}
    if (port == 7021) { return "DP Serve Admin";}
    if (port == 7022) { return "CT Discovery Protocol";}
    if (port == 7023) { return "Comtech T2 NMCS";}
    if (port == 7024) { return "Vormetric service";}
    if (port == 7025) { return "Vormetric Service II";}
    if (port == 7026) { return "Loreji Webhosting Panel";}
    if (port == 7030) { return "ObjectPlanet probe";}
    if (port == 7031) { return "IPOSPLANET retailing multi devices protocol";}
    if (port == 7070) { return "ARCP";}
    if (port == 7071) { return "IWGADTS Aircraft Housekeeping Message";}
    if (port == 7072) { return "iba Device Configuration Protocol";}
    if (port == 7073) { return "MarTalk protocol";}
    if (port == 7080) { return "EmpowerID Communication";}
    if (port == 7099) { return "lazy-ptop";}
    if (port == 7100) { return "X Font Service";}
    if (port == 7101) { return "Embedded Light Control Network";}
    if (port == 7117) { return "Encrypted chat and file transfer service";}
    if (port == 7121) { return "Virtual Prototypes License Manager";}
    if (port == 7128) { return "intelligent data manager";}
    if (port == 7129) { return "Catalog Content Search";}
    if (port == 7161) { return "CA BSM Comm";}
    if (port == 7162) { return "CA Storage Manager";}
    if (port == 7163) { return "CA Connection Broker";}
    if (port == 7164) { return "File System Repository Agent";}
    if (port == 7165) { return "Document WCF Server";}
    if (port == 7166) { return "Aruba eDiscovery Server";}
    if (port == 7167) { return "CA SRM Agent";}
    if (port == 7168) { return "cncKadServer DB & Inventory Services";}
    if (port == 7169) { return "Consequor Consulting Process Integration Bridge";}
    if (port == 7170) { return "Adaptive Name/Service Resolution";}
    if (port == 7171) { return "Discovery and Retention Mgt Production";}
    if (port == 7172) { return "Port used for MetalBend programmable interface";}
    if (port == 7173) { return "zSecure Server";}
    if (port == 7174) { return "Clutild";}
    if (port == 7200) { return "FODMS FLIP";}
    if (port == 7201) { return "DLIP";}
    if (port == 7202) { return "Inter-Channel Termination Protocol  ICTP for multi-wavelength PON Passive Optical Network systems";}
    if (port == 7215) { return "Communication ports for PaperStream Server services";}
    if (port == 7216) { return "PaperStream Capture Professional";}
    if (port == 7227) { return "Registry A & M Protocol";}
    if (port == 7228) { return "Citrix Universal Printing Port";}
    if (port == 7229) { return "Citrix UPP Gateway";}
    if (port == 7236) { return "Wi-Fi Alliance Wi-Fi Display Protocol";}
    if (port == 7237) { return "PADS  Public Area Display System Server";}
    if (port == 7244) { return "FrontRow Calypso Human Interface Control Protocol";}
    if (port == 7262) { return "Calypso Network Access Protocol";}
    if (port == 7272) { return "WatchMe Monitoring 7272";}
    if (port == 7273) { return "OMA Roaming Location";}
    if (port == 7274) { return "OMA Roaming Location SEC";}
    if (port == 7275) { return "OMA UserPlane Location";}
    if (port == 7276) { return "OMA Internal Location Protocol";}
    if (port == 7277) { return "OMA Internal Location Secure Protocol";}
    if (port == 7278) { return "OMA Dynamic Content Delivery over CBS";}
    if (port == 7279) { return "Citrix Licensing";}
    if (port == 7280) { return "ITACTIONSERVER 1";}
    if (port == 7281) { return "ITACTIONSERVER 2";}
    if (port == 7282) { return "eventACTION/ussACTION  MZCA server";}
    if (port == 7283) { return "General Statistics Rendezvous Protocol";}
    if (port == 7365) { return "LifeKeeper Communications";}
    if (port == 7391) { return "mind-file system server";}
    if (port == 7392) { return "mrss-rendezvous server";}
    if (port == 7393) { return "nFoldMan Remote Publish";}
    if (port == 7394) { return "File system export of backup images";}
    if (port == 7395) { return "winqedit";}
    if (port == 7397) { return "Hexarc Command Language";}
    if (port == 7400) { return "RTPS Discovery";}
    if (port == 7401) { return "RTPS Data-Distribution User-Traffic";}
    if (port == 7402) { return "RTPS Data-Distribution Meta-Traffic";}
    if (port == 7410) { return "Ionix Network Monitor";}
    if (port == 7411) { return "Streaming of measurement data";}
    if (port == 7421) { return "Matisse Port Monitor";}
    if (port == 7426) { return "OpenView DM Postmaster Manager";}
    if (port == 7427) { return "OpenView DM Event Agent Manager";}
    if (port == 7428) { return "OpenView DM Log Agent Manager";}
    if (port == 7429) { return "OpenView DM rqt communication";}
    if (port == 7430) { return "OpenView DM xmpv7 api pipe";}
    if (port == 7431) { return "OpenView DM ovc/xmpv3 api pipe";}
    if (port == 7437) { return "Faximum";}
    if (port == 7443) { return "Oracle Application Server HTTPS";}
    if (port == 7471) { return "Stateless Transport Tunneling Protocol";}
    if (port == 7473) { return "Rise) { The Vieneo Province";}
    if (port == 7474) { return "Neo4j Graph Database";}
    if (port == 7478) { return "IT Asset Management";}
    if (port == 7491) { return "telops-lmd";}
    if (port == 7500) { return "Silhouette User";}
    if (port == 7501) { return "HP OpenView Bus Daemon";}
    if (port == 7508) { return "Automation Device Configuration Protocol";}
    if (port == 7509) { return "ACPLT - process automation service";}
    if (port == 7510) { return "HP OpenView Application Server";}
    if (port == 7511) { return "pafec-lm";}
    if (port == 7542) { return "Saratoga Transfer Protocol";}
    if (port == 7543) { return "atul server";}
    if (port == 7544) { return "FlowAnalyzer DisplayServer";}
    if (port == 7545) { return "FlowAnalyzer UtilityServer";}
    if (port == 7546) { return "Cisco Fabric service";}
    if (port == 7547) { return "DSL Forum CWMP";}
    if (port == 7548) { return "Threat Information Distribution Protocol";}
    if (port == 7549) { return "Network Layer Signaling Transport Layer";}
    if (port == 7551) { return "ControlONE Console signaling";}
    if (port == 7560) { return "Sniffer Command Protocol";}
    if (port == 7563) { return "Control Framework";}
    if (port == 7566) { return "VSI Omega";}
    if (port == 7569) { return "Dell EqualLogic Host Group Management";}
    if (port == 7570) { return "Aries Kfinder";}
    if (port == 7574) { return "Oracle Coherence Cluster Service";}
    if (port == 7588) { return "Sun License Manager";}
    if (port == 7606) { return "MIPI Alliance Debug";}
    if (port == 7624) { return "Instrument Neutral Distributed Interface";}
    if (port == 7626) { return "SImple Middlebox COnfiguration  SIMCO Server";}
    if (port == 7627) { return "SOAP Service Port";}
    if (port == 7628) { return "Primary Agent Work Notification";}
    if (port == 7629) { return "OpenXDAS Wire Protocol";}
    if (port == 7630) { return "HA Web Konsole";}
    if (port == 7631) { return "TESLA System Messaging";}
    if (port == 7633) { return "PMDF Management";}
    if (port == 7648) { return "bonjour-cuseeme";}
    if (port == 7663) { return "Proprietary immutable distributed data storage";}
    if (port == 7672) { return "iMQ STOMP Server";}
    if (port == 7673) { return "iMQ STOMP Server over SSL";}
    if (port == 7674) { return "iMQ SSL tunnel";}
    if (port == 7675) { return "iMQ Tunnel";}
    if (port == 7676) { return "iMQ Broker Rendezvous";}
    if (port == 7677) { return "Sun App Server - HTTPS";}
    if (port == 7680) { return "Pando Media Public Distribution";}
    if (port == 7683) { return "Cleondris DMT";}
    if (port == 7687) { return "Bolt database connection";}
    if (port == 7689) { return "Collaber Network Service";}
    if (port == 7697) { return "KLIO communications";}
    if (port == 7700) { return "EM7 Secure Communications";}
    if (port == 7707) { return "EM7 Dynamic Updates";}
    if (port == 7708) { return "scientianet";}
    if (port == 7720) { return "MedImage Portal";}
    if (port == 7724) { return "Novell Snap-in Deep Freeze Control";}
    if (port == 7725) { return "Nitrogen Service";}
    if (port == 7726) { return "FreezeX Console Service";}
    if (port == 7727) { return "Trident Systems Data";}
    if (port == 7728) { return "Open-Source Virtual Reality";}
    if (port == 7734) { return "Smith Protocol over IP";}
    if (port == 7738) { return "HP Enterprise Discovery Agent";}
    if (port == 7741) { return "ScriptView Network";}
    if (port == 7742) { return "Mugginsoft Script Server Service";}
    if (port == 7743) { return "Sakura Script Transfer Protocol";}
    if (port == 7744) { return "RAQMON PDU";}
    if (port == 7747) { return "Put/Run/Get Protocol";}
    if (port == 7775) { return "A File System using TLS over a wide area network";}
    if (port == 7777) { return "cbt";}
    if (port == 7778) { return "Interwise";}
    if (port == 7779) { return "VSTAT";}
    if (port == 7781) { return "accu-lmgr";}
    if (port == 7786) { return "MINIVEND";}
    if (port == 7787) { return "Popup Reminders Receive";}
    if (port == 7789) { return "Office Tools Pro Receive";}
    if (port == 7794) { return "Q3ADE Cluster Service";}
    if (port == 7797) { return "Propel Connector port";}
    if (port == 7798) { return "Propel Encoder port";}
    if (port == 7799) { return "Alternate BSDP Service";}
    if (port == 7800) { return "Apple Software Restore";}
    if (port == 7801) { return "Secure Server Protocol - client";}
    if (port == 7810) { return "Riverbed WAN Optimization Protocol";}
    if (port == 7845) { return "APC 7845";}
    if (port == 7846) { return "APC 7846";}
    if (port == 7847) { return "A product key authentication protocol made by CSO";}
    if (port == 7869) { return "MobileAnalyzer& MobileMonitor";}
    if (port == 7870) { return "Riverbed Steelhead Mobile Service";}
    if (port == 7871) { return "Mobile Device Management";}
    if (port == 7878) { return "Opswise Message Service";}
    if (port == 7880) { return "Pearson";}
    if (port == 7887) { return "Universal Broker";}
    if (port == 7900) { return "Multicast Event";}
    if (port == 7901) { return "TNOS Service Protocol";}
    if (port == 7902) { return "TNOS shell Protocol";}
    if (port == 7903) { return "TNOS Secure DiaguardProtocol";}
    if (port == 7913) { return "QuickObjects secure port";}
    if (port == 7932) { return "Tier 2 Data Resource Manager";}
    if (port == 7933) { return "Tier 2 Business Rules Manager";}
    if (port == 7962) { return "Encrypted, extendable, general-purpose synchronization protocol";}
    if (port == 7967) { return "Supercell";}
    if (port == 7979) { return "Micromuse-ncps";}
    if (port == 7980) { return "Quest Vista";}
    if (port == 7981) { return "Spotlight on SQL Server Desktop Collect";}
    if (port == 7982) { return "Spotlight on SQL Server Desktop Agent";}
    if (port == 7997) { return "PUSH Notification Service";}
    if (port == 7999) { return "iRDMI2";}
    if (port == 8000) { return "iRDMI";}
    if (port == 8001) { return "VCOM Tunnel";}
    if (port == 8002) { return "Teradata ORDBMS";}
    if (port == 8003) { return "Mulberry Connect Reporting Service";}
    if (port == 8004) { return "Opensource Evolv Enterprise Platform P2P Network Node Connection Protocol";}
    if (port == 8005) { return "MXI Generation II for z/OS";}
    if (port == 8006) { return "World Programming analytics";}
    if (port == 8007) { return "I/O oriented cluster computing software";}
    if (port == 8008) { return "HTTP Alternate";}
    if (port == 8009) { return "NVMe over Fabrics Discovery Service";}
    if (port == 8019) { return "QB DB Dynamic Port";}
    if (port == 8020) { return "Intuit Entitlement Service and Discovery";}
    if (port == 8021) { return "Intuit Entitlement Client";}
    if (port == 8022) { return "oa-system";}
    if (port == 8025) { return "CA Audit Distribution Agent";}
    if (port == 8026) { return "CA Audit Distribution Server";}
    if (port == 8032) { return "ProEd";}
    if (port == 8033) { return "MindPrint";}
    if (port == 8034) { return "vantronix Management";}
    if (port == 8040) { return "Ampify Messaging Protocol";}
    if (port == 8041) { return "Xcorpeon ASIC Carrier Ethernet Transport";}
    if (port == 8042) { return "FireScope Agent";}
    if (port == 8043) { return "FireScope Server";}
    if (port == 8044) { return "FireScope Management Interface";}
    if (port == 8051) { return "Rocrail Client Service";}
    if (port == 8052) { return "Senomix Timesheets Server";}
    if (port == 8053) { return "Senomix Timesheets Client [1 year assignment]";}
    if (port == 8054) { return "Senomix Timesheets Server [1 year assignment]";}
    if (port == 8055) { return "Senomix Timesheets Server [1 year assignment]";}
    if (port == 8056) { return "Senomix Timesheets Server [1 year assignment]";}
    if (port == 8057) { return "Senomix Timesheets Client [1 year assignment]";}
    if (port == 8058) { return "Senomix Timesheets Client [1 year assignment]";}
    if (port == 8059) { return "Senomix Timesheets Client [1 year assignment]";}
    if (port == 8066) { return "Toad BI Application Server";}
    if (port == 8067) { return "Infinidat async replication";}
    if (port == 8070) { return "Oracle Unified Communication Suite's Indexed Search Converter";}
    if (port == 8074) { return "Gadu-Gadu";}
    if (port == 8077) { return "Mles";}
    if (port == 8080) { return "HTTP Alternate  see port 80";}
    if (port == 8081) { return "Sun Proxy Admin Service";}
    if (port == 8082) { return "Utilistor  Client";}
    if (port == 8083) { return "Utilistor  Server";}
    if (port == 8086) { return "Distributed SCADA Networking Rendezvous Port";}
    if (port == 8087) { return "Simplify Media SPP Protocol";}
    if (port == 8088) { return "Radan HTTP";}
    if (port == 8090) { return "Vehicle to station messaging";}
    if (port == 8091) { return "Jam Link Framework";}
    if (port == 8097) { return "SAC Port Id";}
    if (port == 8100) { return "Xprint Server";}
    if (port == 8101) { return "Logical Domains Migration";}
    if (port == 8102) { return "Oracle Kernel zones migration server";}
    if (port == 8115) { return "MTL8000 Matrix";}
    if (port == 8116) { return "Check Point Clustering";}
    if (port == 8117) { return "Purity replication clustering and remote management";}
    if (port == 8118) { return "Privoxy HTTP proxy";}
    if (port == 8121) { return "Apollo Data Port";}
    if (port == 8122) { return "Apollo Admin Port";}
    if (port == 8128) { return "PayCash Online Protocol";}
    if (port == 8129) { return "PayCash Wallet-Browser";}
    if (port == 8130) { return "INDIGO-VRMI";}
    if (port == 8131) { return "INDIGO-VBCP";}
    if (port == 8132) { return "dbabble";}
    if (port == 8140) { return "The Puppet master service";}
    if (port == 8148) { return "i-SDD file transfer";}
    if (port == 8153) { return "QuantaStor Management Interface";}
    if (port == 8160) { return "Patrol";}
    if (port == 8161) { return "Patrol SNMP";}
    if (port == 8162) { return "LPAR2RRD client server communication";}
    if (port == 8181) { return "Intermapper network management system";}
    if (port == 8182) { return "VMware Fault Domain Manager";}
    if (port == 8183) { return "ProRemote";}
    if (port == 8184) { return "Remote iTach Connection";}
    if (port == 8190) { return "Generic control plane for RPHY";}
    if (port == 8191) { return "Limner Pressure";}
    if (port == 8192) { return "SpyTech Phone Service";}
    if (port == 8194) { return "Bloomberg data API";}
    if (port == 8195) { return "Bloomberg feed";}
    if (port == 8199) { return "VVR DATA";}
    if (port == 8200) { return "TRIVNET";}
    if (port == 8201) { return "TRIVNET";}
    if (port == 8204) { return "LM Perfworks";}
    if (port == 8205) { return "LM Instmgr";}
    if (port == 8206) { return "LM Dta";}
    if (port == 8207) { return "LM SServer";}
    if (port == 8208) { return "LM Webwatcher";}
    if (port == 8230) { return "RexecJ Server";}
    if (port == 8243) { return "Synapse Non Blocking HTTPS";}
    if (port == 8270) { return "Robot Framework Remote Library Interface";}
    if (port == 8276) { return "Pando Media Controlled Distribution";}
    if (port == 8280) { return "Synapse Non Blocking HTTP";}
    if (port == 8282) { return "Libelle EnterpriseBus";}
    if (port == 8292) { return "Bloomberg professional";}
    if (port == 8293) { return "Hiperscan Identification Service";}
    if (port == 8294) { return "Bloomberg intelligent client";}
    if (port == 8300) { return "Transport Management Interface";}
    if (port == 8301) { return "Amberon PPC/PPS";}
    if (port == 8313) { return "Hub Open Network";}
    if (port == 8320) { return "Thin ium Network Protocol";}
    if (port == 8321) { return "Thin ium Network Protocol";}
    if (port == 8322) { return "Garmin Marine";}
    if (port == 8351) { return "Server Find";}
    if (port == 8376) { return "Cruise ENUM";}
    if (port == 8377) { return "Cruise SWROUTE";}
    if (port == 8378) { return "Cruise CONFIG";}
    if (port == 8379) { return "Cruise DIAGS";}
    if (port == 8380) { return "Cruise UPDATE";}
    if (port == 8383) { return "M2m Services";}
    if (port == 8400) { return "cvd";}
    if (port == 8401) { return "sabarsd";}
    if (port == 8402) { return "abarsd";}
    if (port == 8403) { return "admind";}
    if (port == 8404) { return "SuperVault Cloud";}
    if (port == 8405) { return "SuperVault Backup";}
    if (port == 8415) { return "Delphix Session Protocol";}
    if (port == 8416) { return "eSpeech Session Protocol";}
    if (port == 8417) { return "eSpeech RTP Protocol";}
    if (port == 8423) { return "Aristech text-to-speech server";}
    if (port == 8442) { return "CyBro A-bus Protocol";}
    if (port == 8443) { return "PCsync HTTPS";}
    if (port == 8444) { return "PCsync HTTP";}
    if (port == 8445) { return "Port for copy peer sync feature";}
    if (port == 8450) { return "npmp";}
    if (port == 8457) { return "Nexenta Management GUI";}
    if (port == 8470) { return "Cisco Address Validation Protocol";}
    if (port == 8471) { return "PIM over Reliable Transport";}
    if (port == 8472) { return "Overlay Transport Virtualization  OTV";}
    if (port == 8473) { return "Virtual Point to Point";}
    if (port == 8474) { return "AquaMinds NoteShare";}
    if (port == 8500) { return "Flight Message Transfer Protocol";}
    if (port == 8501) { return "CYTEL Message Transfer Management";}
    if (port == 8502) { return "FTN Message Transfer Protocol";}
    if (port == 8554) { return "RTSP Alternate  see port 554";}
    if (port == 8555) { return "SYMAX D-FENCE";}
    if (port == 8567) { return "DOF Tunneling Protocol";}
    if (port == 8600) { return "Surveillance Data";}
    if (port == 8610) { return "Canon MFNP Service";}
    if (port == 8611) { return "Canon BJNP Port 1";}
    if (port == 8612) { return "Canon BJNP Port 2";}
    if (port == 8613) { return "Canon BJNP Port 3";}
    if (port == 8614) { return "Canon BJNP Port 4";}
    if (port == 8615) { return "Imink Service Control";}
    if (port == 8665) { return "Monetra";}
    if (port == 8666) { return "Monetra Administrative Access";}
    if (port == 8675) { return "Motorola Solutions Customer Programming Software for Radio Management";}
    if (port == 8686) { return "Sun App Server - JMX/RMI";}
    if (port == 8688) { return "OpenRemote Controller HTTP/REST";}
    if (port == 8699) { return "VNYX Primary Port";}
    if (port == 8711) { return "Nuance Voice Control";}
    if (port == 8733) { return "iBus";}
    if (port == 8750) { return "DEY Storage Key Negotiation";}
    if (port == 8763) { return "MC-APPSERVER";}
    if (port == 8764) { return "OPENQUEUE";}
    if (port == 8765) { return "Ultraseek HTTP";}
    if (port == 8766) { return "Agilent Connectivity Service";}
    if (port == 8770) { return "Digital Photo Access Protocol  iPhoto";}
    if (port == 8778) { return "Stonebranch Universal Enterprise Controller";}
    if (port == 8786) { return "Message Client";}
    if (port == 8787) { return "Message Server";}
    if (port == 8793) { return "Accedian Performance Measurement";}
    if (port == 8800) { return "Sun Web Server Admin Service";}
    if (port == 8804) { return "truecm";}
    if (port == 8873) { return "dxspider linking protocol";}
    if (port == 8880) { return "CDDBP";}
    if (port == 8881) { return "Galaxy4D Online Game Engine";}
    if (port == 8883) { return "Secure MQTT";}
    if (port == 8888) { return "NewsEDGE server TCP  TCP 1";}
    if (port == 8889) { return "Desktop Data TCP 1";}
    if (port == 8890) { return "Desktop Data TCP 2";}
    if (port == 8891) { return "Desktop Data TCP 3) { NESS application";}
    if (port == 8892) { return "Desktop Data TCP 4) { FARM product";}
    if (port == 8893) { return "Desktop Data TCP 5) { NewsEDGE/Web application";}
    if (port == 8894) { return "Desktop Data TCP 6) { COAL application";}
    if (port == 8899) { return "ospf-lite";}
    if (port == 8900) { return "JMB-CDS 1";}
    if (port == 8901) { return "JMB-CDS 2";}
    if (port == 8910) { return "manyone-http";}
    if (port == 8911) { return "manyone-xml";}
    if (port == 8912) { return "Windows Client Backup";}
    if (port == 8913) { return "Dragonfly System Service";}
    if (port == 8937) { return "Transaction Warehouse Data Service";}
    if (port == 8953) { return "unbound dns nameserver control";}
    if (port == 8954) { return "Cumulus Admin Port";}
    if (port == 8980) { return "Network of Devices Provider";}
    if (port == 8989) { return "Sun Web Server SSL Admin Service";}
    if (port == 8990) { return "webmail HTTP service";}
    if (port == 8991) { return "webmail HTTPS service";}
    if (port == 8997) { return "Oracle Messaging Server Event Notification Service";}
    if (port == 8998) { return "Canto RoboFlow Control";}
    if (port == 8999) { return "Brodos Crypto Trade Protocol";}
    if (port == 9000) { return "CSlistener";}
    if (port == 9001) { return "ETL Service Manager";}
    if (port == 9002) { return "DynamID authentication";}
    if (port == 9005) { return "Golem Inter-System RPC";}
    if (port == 9008) { return "Open Grid Services Server";}
    if (port == 9009) { return "Pichat Server";}
    if (port == 9010) { return "Secure Data Replicator Protocol";}
    if (port == 9020) { return "TAMBORA";}
    if (port == 9021) { return "Pangolin Identification";}
    if (port == 9022) { return "PrivateArk Remote Agent";}
    if (port == 9023) { return "Secure Web Access - 1";}
    if (port == 9024) { return "Secure Web Access - 2";}
    if (port == 9025) { return "Secure Web Access - 3";}
    if (port == 9026) { return "Secure Web Access - 4";}
    if (port == 9050) { return "Versiera Agent Listener";}
    if (port == 9051) { return "Fusion-io Central Manager Service";}
    if (port == 9060) { return "CardWeb request-response I/O exchange";}
    if (port == 9080) { return "Groove GLRPC";}
    if (port == 9083) { return "EMC PowerPath Mgmt Service";}
    if (port == 9084) { return "IBM AURORA Performance Visualizer";}
    if (port == 9085) { return "IBM Remote System Console";}
    if (port == 9086) { return "Vesa Net2Display";}
    if (port == 9087) { return "Classic Data Server";}
    if (port == 9088) { return "IBM Informix SQL Interface";}
    if (port == 9089) { return "IBM Informix SQL Interface - Encrypted";}
    if (port == 9090) { return "WebSM";}
    if (port == 9091) { return "xmltec-xmlmail";}
    if (port == 9092) { return "Xml-Ipc Server Reg";}
    if (port == 9093) { return "Copycat database replication service";}
    if (port == 9100) { return "PDL Data Streaming Port";}
    if (port == 9101) { return "Bacula Director";}
    if (port == 9102) { return "Bacula File Daemon";}
    if (port == 9103) { return "Bacula Storage Daemon";}
    if (port == 9104) { return "PeerWire";}
    if (port == 9105) { return "Xadmin Control Service";}
    if (port == 9106) { return "Astergate Control Service";}
    if (port == 9107) { return "AstergateFax Control Service";}
    if (port == 9119) { return "MXit Instant Messaging";}
    if (port == 9122) { return "Global Relay compliant mobile instant messaging protocol";}
    if (port == 9123) { return "Global Relay compliant instant messaging protocol";}
    if (port == 9131) { return "Dynamic Device Discovery";}
    if (port == 9160) { return "apani1";}
    if (port == 9161) { return "apani2";}
    if (port == 9162) { return "apani3";}
    if (port == 9163) { return "apani4";}
    if (port == 9164) { return "apani5";}
    if (port == 9191) { return "Sun AppSvr JPDA";}
    if (port == 9200) { return "WAP connectionless session service";}
    if (port == 9201) { return "WAP session service";}
    if (port == 9202) { return "WAP secure connectionless session service";}
    if (port == 9203) { return "WAP secure session service";}
    if (port == 9204) { return "WAP vCard";}
    if (port == 9205) { return "WAP vCal";}
    if (port == 9206) { return "WAP vCard Secure";}
    if (port == 9207) { return "WAP vCal Secure";}
    if (port == 9208) { return "rjcdb vCard";}
    if (port == 9209) { return "ALMobile System Service";}
    if (port == 9210) { return "OMA Mobile Location Protocol";}
    if (port == 9211) { return "OMA Mobile Location Protocol Secure";}
    if (port == 9212) { return "Server View dbms access";}
    if (port == 9213) { return "ServerStart RemoteControl";}
    if (port == 9214) { return "IPDC ESG BootstrapService";}
    if (port == 9215) { return "Integrated Setup and Install Service";}
    if (port == 9216) { return "Aionex Communication Management Engine";}
    if (port == 9217) { return "FSC Communication Port";}
    if (port == 9222) { return "QSC Team Coherence";}
    if (port == 9255) { return "Manager On Network";}
    if (port == 9278) { return "Pegasus GPS Platform";}
    if (port == 9279) { return "Pegaus GPS System Control Interface";}
    if (port == 9280) { return "Predicted GPS";}
    if (port == 9281) { return "SofaWare transport port 1";}
    if (port == 9282) { return "SofaWare transport port 2";}
    if (port == 9283) { return "CallWaveIAM";}
    if (port == 9284) { return "VERITAS Information Serve";}
    if (port == 9285) { return "N2H2 Filter Service Port";}
    if (port == 9287) { return "Cumulus";}
    if (port == 9292) { return "ArmTech Daemon";}
    if (port == 9293) { return "StorView Client";}
    if (port == 9294) { return "ARMCenter http Service";}
    if (port == 9295) { return "ARMCenter https Service";}
    if (port == 9300) { return "Virtual Racing Service";}
    if (port == 9306) { return "Sphinx search server  MySQL listener";}
    if (port == 9312) { return "Sphinx search server";}
    if (port == 9318) { return "PKIX TimeStamp over TLS";}
    if (port == 9321) { return "guibase";}
    if (port == 9343) { return "MpIdcMgr";}
    if (port == 9344) { return "Mphlpdmc";}
    if (port == 9345) { return "Rancher Agent";}
    if (port == 9346) { return "C Tech Licensing";}
    if (port == 9374) { return "fjdmimgr";}
    if (port == 9380) { return "Brivs! Open Extensible Protocol";}
    if (port == 9387) { return "D2D Configuration Service";}
    if (port == 9388) { return "D2D Data Transfer Service";}
    if (port == 9389) { return "Active Directory Web Services";}
    if (port == 9390) { return "OpenVAS Transfer Protocol";}
    if (port == 9396) { return "fjinvmgr";}
    if (port == 9397) { return "MpIdcAgt";}
    if (port == 9400) { return "Samsung Twain for Network Server";}
    if (port == 9401) { return "Samsung Twain for Network Client";}
    if (port == 9402) { return "Samsung PC2FAX for Network Server";}
    if (port == 9418) { return "git pack transfer service";}
    if (port == 9443) { return "WSO2 Tungsten HTTPS";}
    if (port == 9444) { return "WSO2 ESB Administration Console HTTPS";}
    if (port == 9445) { return "MindArray Systems Console Agent";}
    if (port == 9450) { return "Sentinel Keys Server";}
    if (port == 9500) { return "ismserver";}
    if (port == 9535) { return "Management Suite Remote Control";}
    if (port == 9536) { return "Surveillance buffering function";}
    if (port == 9555) { return "Trispen Secure Remote Access";}
    if (port == 9592) { return "LANDesk Gateway";}
    if (port == 9593) { return "LANDesk Management Agent  cba8";}
    if (port == 9594) { return "Message System";}
    if (port == 9595) { return "Ping Discovery Service";}
    if (port == 9596) { return "Mercury Discovery";}
    if (port == 9597) { return "PD Administration";}
    if (port == 9598) { return "Very Simple Ctrl Protocol";}
    if (port == 9599) { return "Robix";}
    if (port == 9600) { return "MICROMUSE-NCPW";}
    if (port == 9612) { return "StreamComm User Directory";}
    if (port == 9614) { return "iADT Protocol over TLS";}
    if (port == 9616) { return "eRunbook Agent";}
    if (port == 9617) { return "eRunbook Server";}
    if (port == 9618) { return "Condor Collector Service";}
    if (port == 9628) { return "ODBC Pathway Service";}
    if (port == 9629) { return "UniPort SSO Controller";}
    if (port == 9630) { return "Peovica Controller";}
    if (port == 9631) { return "Peovica Collector";}
    if (port == 9640) { return "ProQueSys Flows Service";}
    if (port == 9666) { return "Zoom Control Panel Game Server Management";}
    if (port == 9667) { return "Cross-platform Music Multiplexing System";}
    if (port == 9668) { return "tec5 Spectral Device Control Protocol";}
    if (port == 9694) { return "T-Mobile Client Wakeup Message";}
    if (port == 9695) { return "Content Centric Networking";}
    if (port == 9700) { return "Board MIT Service";}
    if (port == 9747) { return "L5NAS Parallel Channel";}
    if (port == 9750) { return "Board MIT Synchronous Collaboration";}
    if (port == 9753) { return "rasadv";}
    if (port == 9762) { return "WSO2 Tungsten HTTP";}
    if (port == 9800) { return "WebDav Source Port";}
    if (port == 9801) { return "Sakura Script Transfer Protocol-2";}
    if (port == 9802) { return "WebDAV Source TLS/SSL";}
    if (port == 9875) { return "Session Announcement v1";}
    if (port == 9876) { return "Session Director";}
    if (port == 9888) { return "CYBORG Systems";}
    if (port == 9889) { return "Port for Cable network related data proxy or repeater";}
    if (port == 9898) { return "MonkeyCom";}
    if (port == 9900) { return "IUA";}
    if (port == 9909) { return "domaintime";}
    if (port == 9911) { return "SYPECom Transport Protocol";}
    if (port == 9925) { return "XYBRID Cloud";}
    if (port == 9950) { return "APC 9950";}
    if (port == 9951) { return "APC 9951";}
    if (port == 9952) { return "APC 9952";}
    if (port == 9953) { return "9953";}
    if (port == 9954) { return "HaloteC Instrument Network Protocol";}
    if (port == 9955) { return "Contact Port for AllJoyn standard messaging";}
    if (port == 9966) { return "OKI Data Network Setting Protocol";}
    if (port == 9978) { return "XYBRID RT Server";}
    if (port == 9979) { return "Valley Information Systems Weather station data";}
    if (port == 9981) { return "Event sourcing database engine with a built-in programming language";}
    if (port == 9987) { return "DSM/SCM Target Interface";}
    if (port == 9988) { return "Software Essentials Secure HTTP server";}
    if (port == 9990) { return "OSM Applet Server";}
    if (port == 9991) { return "OSM Event Server";}
    if (port == 9992) { return "OnLive-1";}
    if (port == 9993) { return "OnLive-2";}
    if (port == 9994) { return "OnLive-3";}
    if (port == 9995) { return "Palace-4";}
    if (port == 9996) { return "Palace-5";}
    if (port == 9997) { return "Palace-6";}
    if (port == 9998) { return "Distinct32";}
    if (port == 9999) { return "distinct";}
    if (port == 10000) { return "Network Data Management Protocol";}
    if (port == 10001) { return "SCP Configuration";}
    if (port == 10002) { return "EMC-Documentum Content Server Product";}
    if (port == 10003) { return "EMC-Documentum Content Server Product";}
    if (port == 10004) { return "EMC Replication Manager Client";}
    if (port == 10005) { return "EMC Replication Manager Server";}
    if (port == 10006) { return "Sync replication protocol among different NetApp platforms";}
    if (port == 10007) { return "MVS Capacity";}
    if (port == 10008) { return "Octopus Multiplexer";}
    if (port == 10009) { return "Systemwalker Desktop Patrol";}
    if (port == 10010) { return "ooRexx rxapi services";}
    if (port == 10020) { return "Hardware configuration and maintenance";}
    if (port == 10050) { return "Zabbix Agent";}
    if (port == 10051) { return "Zabbix Trapper";}
    if (port == 10055) { return "Quantapoint FLEXlm Licensing Service";}
    if (port == 10080) { return "Amanda";}
    if (port == 10081) { return "FAM Archive Server";}
    if (port == 10100) { return "VERITAS ITAP DDTP";}
    if (port == 10101) { return "eZmeeting";}
    if (port == 10102) { return "eZproxy";}
    if (port == 10103) { return "eZrelay";}
    if (port == 10104) { return "Systemwalker Desktop Patrol";}
    if (port == 10107) { return "VERITAS BCTP, server";}
    if (port == 10110) { return "NMEA-0183 Navigational Data";}
    if (port == 10113) { return "NetIQ Endpoint";}
    if (port == 10114) { return "NetIQ Qcheck";}
    if (port == 10115) { return "NetIQ Endpoint";}
    if (port == 10116) { return "NetIQ VoIP Assessor";}
    if (port == 10117) { return "NetIQ IQCResource Managament Svc";}
    if (port == 10125) { return "HotLink CIMple REST API";}
    if (port == 10128) { return "BMC-PERFORM-SERVICE DAEMON";}
    if (port == 10129) { return "BMC General Manager Server";}
    if (port == 10160) { return "QB Database Server";}
    if (port == 10161) { return "SNMP-TLS";}
    if (port == 10162) { return "SNMP-Trap-TLS";}
    if (port == 10200) { return "Trigence AE Soap Service";}
    if (port == 10201) { return "Remote Server Management Service";}
    if (port == 10252) { return "Apollo Relay Port";}
    if (port == 10260) { return "Axis WIMP Port";}
    if (port == 10261) { return "Tile remote machine learning";}
    if (port == 10288) { return "Blocks";}
    if (port == 10321) { return "Computer Op System Information Report";}
    if (port == 10540) { return "MOS Media Object Metadata Port";}
    if (port == 10541) { return "MOS Running Order Port";}
    if (port == 10542) { return "MOS Low Priority Port";}
    if (port == 10543) { return "MOS SOAP Default Port";}
    if (port == 10544) { return "MOS SOAP Optional Port";}
    if (port == 10548) { return "Apple Document Sharing Service";}
    if (port == 10631) { return "Printopia Serve";}
    if (port == 10800) { return "Gestor de Acaparamiento para Pocket PCs";}
    if (port == 10805) { return "LUCIA Pareja Data Group";}
    if (port == 10809) { return "Linux Network Block Device";}
    if (port == 10860) { return "Helix Client/Server";}
    if (port == 10880) { return "BVEssentials HTTP API";}
    if (port == 10933) { return "Listen port used by the Octopus Deploy Tentacle deployment agent";}
    if (port == 10990) { return "Auxiliary RMI Port";}
    if (port == 11000) { return "IRISA";}
    if (port == 11001) { return "Metasys";}
    if (port == 11095) { return "Nest device-to-device and device-to-service application protocol";}
    if (port == 11103) { return "OrigoDB Server Sync Interface";}
    if (port == 11104) { return "NetApp Intercluster Management";}
    if (port == 11105) { return "NetApp Intercluster Data";}
    if (port == 11106) { return "SGI LK Licensing service";}
    if (port == 11109) { return "Data migration facility Manager  DMF is a browser based interface to DMF";}
    if (port == 11110) { return "Data migration facility  DMF SOAP is a web server protocol to support remote access to DMF";}
    if (port == 11111) { return "Viral Computing Environment  VCE";}
    if (port == 11112) { return "DICOM";}
    if (port == 11161) { return "sun cacao snmp access point";}
    if (port == 11162) { return "sun cacao JMX-remoting access point";}
    if (port == 11163) { return "sun cacao rmi registry access point";}
    if (port == 11164) { return "sun cacao command-streaming access point";}
    if (port == 11165) { return "sun cacao web service access point";}
    if (port == 11172) { return "OEM cacao JMX-remoting access point";}
    if (port == 11173) { return "Straton Runtime Programing";}
    if (port == 11174) { return "OEM cacao rmi registry access point";}
    if (port == 11175) { return "OEM cacao web service access point";}
    if (port == 11201) { return "smsqp";}
    if (port == 11202) { return "DCSL Network Backup Services";}
    if (port == 11208) { return "WiFree Service";}
    if (port == 11211) { return "Memory cache service";}
    if (port == 11319) { return "IMIP";}
    if (port == 11320) { return "IMIP Channels Port";}
    if (port == 11321) { return "Arena Server Listen";}
    if (port == 11367) { return "ATM UHAS";}
    if (port == 11371) { return "OpenPGP HTTP Keyserver";}
    if (port == 11489) { return "ASG Cypress Secure Only";}
    if (port == 11600) { return "Tempest Protocol Port";}
    if (port == 11623) { return "EMC XtremSW distributed config";}
    if (port == 11720) { return "H323 Call Control Signalling Alternate";}
    if (port == 11723) { return "EMC XtremSW distributed cache";}
    if (port == 11751) { return "Intrepid SSL";}
    if (port == 11796) { return "LanSchool";}
    if (port == 11876) { return "X2E Xoraya Multichannel protocol";}
    if (port == 11967) { return "SysInfo Service Protocol";}
    if (port == 12000) { return "IBM Enterprise Extender SNA XID Exchange";}
    if (port == 12001) { return "IBM Enterprise Extender SNA COS Network Priority";}
    if (port == 12002) { return "IBM Enterprise Extender SNA COS High Priority";}
    if (port == 12003) { return "IBM Enterprise Extender SNA COS Medium Priority";}
    if (port == 12004) { return "IBM Enterprise Extender SNA COS Low Priority";}
    if (port == 12005) { return "DBISAM Database Server - Regular";}
    if (port == 12006) { return "DBISAM Database Server - Admin";}
    if (port == 12007) { return "Accuracer Database System Server";}
    if (port == 12008) { return "Accuracer Database System Admin";}
    if (port == 12010) { return "ElevateDB Server";}
    if (port == 12012) { return "Vipera Messaging Service";}
    if (port == 12013) { return "Vipera Messaging Service over SSL Communication";}
    if (port == 12109) { return "RETS over SSL";}
    if (port == 12121) { return "NuPaper Session Service";}
    if (port == 12168) { return "CA Web Access Service";}
    if (port == 12172) { return "HiveP";}
    if (port == 12300) { return "LinoGrid Engine";}
    if (port == 12302) { return "Remote Administration Daemon  RAD is a system service that offers secure, remote, programmatic access to Solaris system configuration and run-time state";}
    if (port == 12321) { return "Warehouse Monitoring Syst SSS";}
    if (port == 12322) { return "Warehouse Monitoring Syst";}
    if (port == 12345) { return "Italk Chat System";}
    if (port == 12753) { return "tsaf port";}
    if (port == 12865) { return "control port for the netperf benchmark";}
    if (port == 13160) { return "I-ZIPQD";}
    if (port == 13216) { return "Black Crow Software application logging";}
    if (port == 13217) { return "R&S Proxy Installation Assistant Service";}
    if (port == 13218) { return "EMC Virtual CAS Service";}
    if (port == 13223) { return "PowWow Client";}
    if (port == 13224) { return "PowWow Server";}
    if (port == 13400) { return "DoIP Data";}
    if (port == 13720) { return "BPRD Protocol  VERITAS NetBackup";}
    if (port == 13721) { return "BPDBM Protocol  VERITAS NetBackup";}
    if (port == 13722) { return "BP Java MSVC Protocol";}
    if (port == 13724) { return "Veritas Network Utility";}
    if (port == 13782) { return "VERITAS NetBackup";}
    if (port == 13783) { return "VOPIED Protocol";}
    if (port == 13785) { return "NetBackup Database";}
    if (port == 13786) { return "Veritas-nomdb";}
    if (port == 13818) { return "DSMCC Config";}
    if (port == 13819) { return "DSMCC Session Messages";}
    if (port == 13820) { return "DSMCC Pass-Thru Messages";}
    if (port == 13821) { return "DSMCC Download Protocol";}
    if (port == 13822) { return "DSMCC Channel Change Protocol";}
    if (port == 13823) { return "Blackmagic Design Streaming Server";}
    if (port == 13894) { return "Ultimate Control communication protocol";}
    if (port == 13929) { return "D-TA SYSTEMS";}
    if (port == 13930) { return "MedEvolve Port Requester";}
    if (port == 14000) { return "SCOTTY High-Speed Filetransfer";}
    if (port == 14001) { return "SUA";}
    if (port == 14033) { return "sage Best! Config Server 1";}
    if (port == 14034) { return "sage Best! Config Server 2";}
    if (port == 14141) { return "VCS Application";}
    if (port == 14142) { return "IceWall Cert Protocol";}
    if (port == 14143) { return "IceWall Cert Protocol over TLS";}
    if (port == 14145) { return "GCM Application";}
    if (port == 14149) { return "Veritas Traffic Director";}
    if (port == 14150) { return "Veritas Cluster Server Command Server";}
    if (port == 14154) { return "Veritas Application Director";}
    if (port == 14250) { return "Fencing Server";}
    if (port == 14414) { return "CA eTrust Web Update Service";}
    if (port == 14500) { return "xpra network protocol";}
    if (port == 14936) { return "hde-lcesrvr-1";}
    if (port == 14937) { return "hde-lcesrvr-2";}
    if (port == 15000) { return "Hypack Data Aquisition";}
    if (port == 15002) { return "Open Network Environment TLS";}
    if (port == 15345) { return "XPilot Contact Port";}
    if (port == 15363) { return "3Link Negotiation";}
    if (port == 15555) { return "Cisco Stateful NAT";}
    if (port == 15660) { return "Backup Express Restore Server";}
    if (port == 15740) { return "Picture Transfer Protocol";}
    if (port == 15999) { return "ProGrammar Enterprise";}
    if (port == 16000) { return "Administration Server Access";}
    if (port == 16001) { return "Administration Server Connector";}
    if (port == 16002) { return "GoodSync Mediation Service";}
    if (port == 16020) { return "Filemaker Java Web Publishing Core";}
    if (port == 16021) { return "Filemaker Java Web Publishing Core Binary";}
    if (port == 16161) { return "Solaris SEA Port";}
    if (port == 16162) { return "Solaris Audit - secure remote audit log";}
    if (port == 16309) { return "etb4j";}
    if (port == 16310) { return "Policy Distribute, Update Notification";}
    if (port == 16311) { return "Policy definition and update management";}
    if (port == 16360) { return "Network Serial Extension Ports One";}
    if (port == 16361) { return "Network Serial Extension Ports Two";}
    if (port == 16367) { return "Network Serial Extension Ports Three";}
    if (port == 16368) { return "Network Serial Extension Ports Four";}
    if (port == 16384) { return "Connected Corp";}
    if (port == 16385) { return "Reliable Datagram Sockets";}
    if (port == 16619) { return "X509 Objects Management Service";}
    if (port == 16665) { return "Reliable multipath data transport for high latencies";}
    if (port == 16789) { return "This server provides callable services to mainframe External Security Managers from any TCP/IP platform";}
    if (port == 16900) { return "Newbay Mobile Client Update Service";}
    if (port == 16950) { return "Simple Generic Client Interface Protocol";}
    if (port == 16991) { return "INTEL-RCI-MP";}
    if (port == 16992) { return "Intel R AMT SOAP/HTTP";}
    if (port == 16993) { return "Intel R AMT SOAP/HTTPS";}
    if (port == 16994) { return "Intel R AMT Redirection/TCP";}
    if (port == 16995) { return "Intel R AMT Redirection/TLS";}
    if (port == 17184) { return "Vestas Data Layer Protocol";}
    if (port == 17185) { return "Sounds Virtual";}
    if (port == 17219) { return "Chipper";}
    if (port == 17220) { return "IEEE 1722 Transport Protocol for Time Sensitive Applications";}
    if (port == 17221) { return "IEEE 17221 AVB Discovery, Enumeration, Connection management, and Control";}
    if (port == 17223) { return "ISA100 GCI is a service utilizing a common interface between an ISA100 Wireless gateway and a client application";}
    if (port == 17225) { return "Train Realtime Data Protocol  TRDP Message Data";}
    if (port == 17234) { return "Integrius Secure Tunnel Protocol";}
    if (port == 17235) { return "SSH Tectia Manager";}
    if (port == 17500) { return "Dropbox LanSync Protocol";}
    if (port == 17555) { return "Ailith management of routers";}
    if (port == 17729) { return "Eclipse Aviation";}
    if (port == 17754) { return "Encap ZigBee Packets";}
    if (port == 17755) { return "ZigBee IP Transport Service";}
    if (port == 17756) { return "ZigBee IP Transport Secure Service";}
    if (port == 17777) { return "SolarWinds Orion";}
    if (port == 18000) { return "Beckman Instruments, Inc";}
    if (port == 18104) { return "RAD PDF Service";}
    if (port == 18136) { return "z/OS Resource Access Control Facility";}
    if (port == 18181) { return "OPSEC CVP";}
    if (port == 18182) { return "OPSEC UFP";}
    if (port == 18183) { return "OPSEC SAM";}
    if (port == 18184) { return "OPSEC LEA";}
    if (port == 18185) { return "OPSEC OMI";}
    if (port == 18186) { return "Occupational Health SC";}
    if (port == 18187) { return "OPSEC ELA";}
    if (port == 18241) { return "Check Point RTM";}
    if (port == 18242) { return "Checkpoint router monitoring";}
    if (port == 18243) { return "Checkpoint router state backup";}
    if (port == 18262) { return "GV NetConfig Service";}
    if (port == 18463) { return "AC Cluster";}
    if (port == 18634) { return "Reliable Datagram Service";}
    if (port == 18635) { return "Reliable Datagram Service over IP";}
    if (port == 18668) { return "Manufacturing Execution Systems Mesh Communication";}
    if (port == 18769) { return "IQue Protocol";}
    if (port == 18881) { return "Infotos";}
    if (port == 18888) { return "APCNECMP";}
    if (port == 19000) { return "iGrid Server";}
    if (port == 19007) { return "Scintilla protocol for device services";}
    if (port == 19020) { return "J-Link TCP/IP Protocol";}
    if (port == 19191) { return "OPSEC UAA";}
    if (port == 19194) { return "UserAuthority SecureAgent";}
    if (port == 19220) { return "Client Connection Management and Data Exchange Service";}
    if (port == 19283) { return "Key Server for SASSAFRAS";}
    if (port == 19315) { return "Key Shadow for SASSAFRAS";}
    if (port == 19398) { return "mtrgtrans";}
    if (port == 19410) { return "hp-sco";}
    if (port == 19411) { return "hp-sca";}
    if (port == 19412) { return "HP-SESSMON";}
    if (port == 19539) { return "FXUPTP";}
    if (port == 19540) { return "SXUPTP";}
    if (port == 19541) { return "JCP Client";}
    if (port == 19998) { return "IEC 60870-5-104 process control - secure";}
    if (port == 19999) { return "Distributed Network Protocol - Secure";}
    if (port == 20000) { return "DNP";}
    if (port == 20001) { return "MicroSAN";}
    if (port == 20002) { return "Commtact HTTP";}
    if (port == 20003) { return "Commtact HTTPS";}
    if (port == 20005) { return "OpenWebNet protocol for electric network";}
    if (port == 20013) { return "Samsung Interdevice Interaction";}
    if (port == 20014) { return "OpenDeploy Listener";}
    if (port == 20034) { return "NetBurner ID Port";}
    if (port == 20046) { return "TMOP HL7 Message Transfer Service";}
    if (port == 20048) { return "NFS mount protocol";}
    if (port == 20049) { return "Network File System  NFS over RDMA";}
    if (port == 20057) { return "AvesTerra Hypergraph Transfer Protocol  HGTP";}
    if (port == 20167) { return "TOLfab Data Change";}
    if (port == 20202) { return "IPD Tunneling Port";}
    if (port == 20222) { return "iPulse-ICS";}
    if (port == 20480) { return "emWave Message Service";}
    if (port == 20670) { return "Track";}
    if (port == 20999) { return "At Hand MMP";}
    if (port == 21000) { return "IRTrans Control";}
    if (port == 21010) { return "NotezillaLan Server";}
    if (port == 21212) { return "Distributed artificial intelligence";}
    if (port == 21221) { return "Services for Air Server";}
    if (port == 21553) { return "Raima RDM TFS";}
    if (port == 21554) { return "MineScape Design File Server";}
    if (port == 21590) { return "VoFR Gateway";}
    if (port == 21800) { return "TVNC Pro Multiplexing";}
    if (port == 21845) { return "webphone";}
    if (port == 21846) { return "NetSpeak Corp Directory Services";}
    if (port == 21847) { return "NetSpeak Corp Connection Services";}
    if (port == 21848) { return "NetSpeak Corp Automatic Call Distribution";}
    if (port == 21849) { return "NetSpeak Corp Credit Processing System";}
    if (port == 22000) { return "SNAPenetIO";}
    if (port == 22001) { return "OptoControl";}
    if (port == 22002) { return "Opto Host Port 2";}
    if (port == 22003) { return "Opto Host Port 3";}
    if (port == 22004) { return "Opto Host Port 4";}
    if (port == 22005) { return "Opto Host Port 5";}
    if (port == 22125) { return "dCache Access Protocol";}
    if (port == 22128) { return "GSI dCache Access Protocol";}
    if (port == 22222) { return "EasyEngine is CLI tool to manage WordPress Sites on Nginx server";}
    if (port == 22273) { return "wnn6";}
    if (port == 22305) { return "CompactIS Tunnel";}
    if (port == 22335) { return "Initium Labs Security and Automation Control";}
    if (port == 22343) { return "CompactIS Secure Tunnel";}
    if (port == 22347) { return "WibuKey Standard WkLan";}
    if (port == 22350) { return "CodeMeter Standard";}
    if (port == 22351) { return "TPC/IP requests of copy protection software to a server";}
    if (port == 22537) { return "CaldSoft Backup server file transfer";}
    if (port == 22555) { return "Vocaltec Web Conference";}
    if (port == 22763) { return "Talika Main Server";}
    if (port == 22800) { return "Telerate Information Platform LAN";}
    if (port == 22951) { return "Telerate Information Platform WAN";}
    if (port == 23000) { return "Inova LightLink Server Type 1";}
    if (port == 23001) { return "Inova LightLink Server Type 2";}
    if (port == 23002) { return "Inova LightLink Server Type 3";}
    if (port == 23003) { return "Inova LightLink Server Type 4";}
    if (port == 23004) { return "Inova LightLink Server Type 5";}
    if (port == 23005) { return "Inova LightLink Server Type 6";}
    if (port == 23053) { return "Generic Notification Transport Protocol";}
    if (port == 23294) { return "5AFE SDN Directory";}
    if (port == 23333) { return "Emulex HBAnyware Remote Management";}
    if (port == 23400) { return "Novar Data";}
    if (port == 23401) { return "Novar Alarm";}
    if (port == 23402) { return "Novar Global";}
    if (port == 23456) { return "Aequus Service";}
    if (port == 23457) { return "Aequus Service Mgmt";}
    if (port == 23546) { return "AreaGuard Neo - WebServer";}
    if (port == 24000) { return "med-ltp";}
    if (port == 24001) { return "med-fsp-rx";}
    if (port == 24002) { return "med-fsp-tx";}
    if (port == 24003) { return "med-supp";}
    if (port == 24004) { return "med-ovw";}
    if (port == 24005) { return "med-ci";}
    if (port == 24006) { return "med-net-svc";}
    if (port == 24242) { return "fileSphere";}
    if (port == 24249) { return "Vista 4GL";}
    if (port == 24321) { return "Isolv Local Directory";}
    if (port == 24386) { return "Intel RCI";}
    if (port == 24465) { return "Tonido Domain Server";}
    if (port == 24554) { return "BINKP";}
    if (port == 24577) { return "bilobit Service";}
    if (port == 24666) { return "Service used by SmarDTV to communicate between a CAM and a second screen application";}
    if (port == 24676) { return "Canditv Message Service";}
    if (port == 24677) { return "FlashFiler";}
    if (port == 24678) { return "Turbopower Proactivate";}
    if (port == 24680) { return "TCC User HTTP Service";}
    if (port == 24754) { return "Citrix StorageLink Gateway";}
    if (port == 24922) { return "Find Identification of Network Devices";}
    if (port == 25000) { return "icl-twobase1";}
    if (port == 25001) { return "icl-twobase2";}
    if (port == 25002) { return "icl-twobase3";}
    if (port == 25003) { return "icl-twobase4";}
    if (port == 25004) { return "icl-twobase5";}
    if (port == 25005) { return "icl-twobase6";}
    if (port == 25006) { return "icl-twobase7";}
    if (port == 25007) { return "icl-twobase8";}
    if (port == 25008) { return "icl-twobase9";}
    if (port == 25009) { return "icl-twobase10";}
    if (port == 25576) { return "Sauter Dongle";}
    if (port == 25604) { return "Identifier Tracing Protocol";}
    if (port == 25793) { return "Vocaltec Address Server";}
    if (port == 25900) { return "TASP Network Comm";}
    if (port == 25901) { return "NIObserver";}
    if (port == 25902) { return "NILinkAnalyst";}
    if (port == 25903) { return "NIProbe";}
    if (port == 26000) { return "quake";}
    if (port == 26133) { return "Symbolic Computation Software Composability Protocol";}
    if (port == 26208) { return "wnn6-ds";}
    if (port == 26257) { return "CockroachDB";}
    if (port == 26260) { return "eZproxy";}
    if (port == 26261) { return "eZmeeting";}
    if (port == 26262) { return "K3 Software-Server";}
    if (port == 26263) { return "K3 Software-Client";}
    if (port == 26486) { return "EXOline-TCP";}
    if (port == 26487) { return "EXOconfig";}
    if (port == 26489) { return "EXOnet";}
    if (port == 27345) { return "ImagePump";}
    if (port == 27442) { return "Job controller service";}
    if (port == 27504) { return "Kopek HTTP Head Port";}
    if (port == 27782) { return "ARS VISTA Application";}
    if (port == 27876) { return "Astrolink Protocol";}
    if (port == 27999) { return "TW Authentication/Key Distribution and";}
    if (port == 28000) { return "NX License Manager";}
    if (port == 28001) { return "PQ Service";}
    if (port == 28200) { return "VoxelStorm game server";}
    if (port == 28240) { return "Siemens GSM";}
    if (port == 28589) { return "Building operating system services wide area verified exchange";}
    if (port == 29167) { return "ObTools Message Protocol";}
    if (port == 29999) { return "data exchange protocol for IEC61850 in wind power plants";}
    if (port == 30000) { return "Secure Network Data Management Protocol";}
    if (port == 30001) { return "Pago Services 1";}
    if (port == 30002) { return "Pago Services 2";}
    if (port == 30003) { return "Amicon FPSU-IP Remote Administration";}
    if (port == 30100) { return "Remote Window Protocol";}
    if (port == 30260) { return "Kingdoms Online  CraigAvenue";}
    if (port == 30400) { return "GroundStar RealTime System";}
    if (port == 30999) { return "OpenView Service Desk Client";}
    if (port == 31016) { return "Kollective Agent Secure Distributed Delivery Protocol";}
    if (port == 31020) { return "Autotrac ACP 245";}
    if (port == 31400) { return "PACE license server";}
    if (port == 31416) { return "XQoS network monitor";}
    if (port == 31457) { return "TetriNET Protocol";}
    if (port == 31620) { return "lm mon";}
    if (port == 31685) { return "DS Expert Monitor";}
    if (port == 31765) { return "GameSmith Port";}
    if (port == 31948) { return "Embedded Device Configuration Protocol TX";}
    if (port == 31949) { return "Embedded Device Configuration Protocol RX";}
    if (port == 32034) { return "iRacing helper service";}
    if (port == 32249) { return "T1 Distributed Processor";}
    if (port == 32400) { return "Plex multimedia";}
    if (port == 32483) { return "Access Point Manager Link";}
    if (port == 32635) { return "SecureNotebook-CLNT";}
    if (port == 32636) { return "DMExpress";}
    if (port == 32767) { return "FileNet BPM WS-ReliableMessaging Client";}
    if (port == 32768) { return "Filenet TMS";}
    if (port == 32769) { return "Filenet RPC";}
    if (port == 32770) { return "Filenet NCH";}
    if (port == 32771) { return "FileNET RMI";}
    if (port == 32772) { return "FileNET Process Analyzer";}
    if (port == 32773) { return "FileNET Component Manager";}
    if (port == 32774) { return "FileNET Rules Engine";}
    if (port == 32775) { return "Performance Clearinghouse";}
    if (port == 32776) { return "FileNET BPM IOR";}
    if (port == 32777) { return "FileNet BPM CORBA";}
    if (port == 32801) { return "Multiple Listing Service Network";}
    if (port == 32811) { return "Real Estate Transport Protocol";}
    if (port == 32896) { return "Attachmate ID Manager";}
    if (port == 33060) { return "MySQL Database Extended Interface";}
    if (port == 33123) { return "Aurora  Balaena Ltd";}
    if (port == 33331) { return "DiamondCentral Interface";}
    if (port == 33333) { return "Digital Gaslight Service";}
    if (port == 33334) { return "SpeedTrace TraceAgent";}
    if (port == 33434) { return "traceroute use";}
    if (port == 33656) { return "SNIP Slave";}
    if (port == 34249) { return "TurboNote Relay Server Default Port";}
    if (port == 34378) { return "P-Net on IP local";}
    if (port == 34379) { return "P-Net on IP remote";}
    if (port == 34567) { return "dhanalakshmiorg EDI Service";}
    if (port == 34962) { return "PROFInet RT Unicast";}
    if (port == 34963) { return "PROFInet RT Multicast";}
    if (port == 34964) { return "PROFInet Context Manager";}
    if (port == 34980) { return "EtherCAT Port";}
    if (port == 35000) { return "HeathView";}
    if (port == 35001) { return "ReadyTech Viewer";}
    if (port == 35002) { return "ReadyTech Sound Server";}
    if (port == 35003) { return "ReadyTech DeviceMapper Server";}
    if (port == 35004) { return "ReadyTech ClassManager";}
    if (port == 35005) { return "ReadyTech LabTracker";}
    if (port == 35006) { return "ReadyTech Helper Service";}
    if (port == 35100) { return "Axiomatic discovery protocol";}
    if (port == 35354) { return "KIT Messenger";}
    if (port == 35355) { return "Altova License Management";}
    if (port == 35356) { return "Gutters Note Exchange";}
    if (port == 35357) { return "OpenStack ID Service";}
    if (port == 36001) { return "AllPeers Network";}
    if (port == 36524) { return "Febooti Automation Workshop";}
    if (port == 36602) { return "Observium statistics collection agent";}
    if (port == 36700) { return "MapX communication";}
    if (port == 36865) { return "KastenX Pipe";}
    if (port == 37475) { return "science + computing's Venus Administration Port";}
    if (port == 37483) { return "Google Drive Sync";}
    if (port == 37601) { return "Epipole File Transfer Protocol";}
    if (port == 37654) { return "Unisys ClearPath ePortal";}
    if (port == 38000) { return "InfoVista Server Database";}
    if (port == 38001) { return "InfoVista Server Insertion";}
    if (port == 38002) { return "Cresco Controller";}
    if (port == 38201) { return "Galaxy7 Data Tunnel";}
    if (port == 38202) { return "Fairview Message Service";}
    if (port == 38203) { return "AppGate Policy Server";}
    if (port == 38800) { return "Sruth";}
    if (port == 38865) { return "Security approval process for use of the secRMM SafeCopy program";}
    if (port == 39681) { return "TurboNote Default Port";}
    if (port == 40000) { return "SafetyNET p";}
    if (port == 40404) { return "Simplify Printing TX";}
    if (port == 40841) { return "CSCP";}
    if (port == 40842) { return "CSCCREDIR";}
    if (port == 40843) { return "CSCCFIREWALL";}
    if (port == 41111) { return "Foursticks QoS Protocol";}
    if (port == 41121) { return "Tentacle Server";}
    if (port == 41230) { return "Z-Wave Protocol over SSL/TLS";}
    if (port == 41794) { return "Crestron Control Port";}
    if (port == 41795) { return "Crestron Terminal Port";}
    if (port == 41796) { return "Crestron Secure Control Port";}
    if (port == 41797) { return "Crestron Secure Terminal Port";}
    if (port == 42508) { return "Computer Associates network discovery protocol";}
    if (port == 42509) { return "CA discovery response";}
    if (port == 42510) { return "CA eTrust RPC";}
    if (port == 43000) { return "Receiver Remote Control";}
    if (port == 43188) { return "REACHOUT";}
    if (port == 43189) { return "NDM-AGENT-PORT";}
    if (port == 43190) { return "IP-PROVISION";}
    if (port == 43191) { return "Reconnoiter Agent Data Transport";}
    if (port == 43210) { return "Shaper Automation Server Management";}
    if (port == 43439) { return "EQ3 firmware update";}
    if (port == 43440) { return "Cisco EnergyWise Management";}
    if (port == 43441) { return "Cisco NetMgmt DB Ports";}
    if (port == 44123) { return "Z-Wave Secure Tunnel";}
    if (port == 44321) { return "PCP server  pmcd";}
    if (port == 44322) { return "PCP server  pmcd proxy";}
    if (port == 44323) { return "HTTP binding for Performance Co-Pilot client API";}
    if (port == 44444) { return "Cognex DataMan Management Protocol";}
    if (port == 44553) { return "REALbasic Remote Debug";}
    if (port == 44818) { return "EtherNet/IP messaging";}
    if (port == 44900) { return "M3DA is used for efficient machine-to-machine communications";}
    if (port == 45000) { return "Nuance AutoStore Status Monitoring Protocol  data transfer";}
    if (port == 45001) { return "Nuance AutoStore Status Monitoring Protocol  secure data transfer";}
    if (port == 45002) { return "Redspeed Status Monitor";}
    if (port == 45045) { return "Remote application control protocol";}
    if (port == 45054) { return "InVision AG";}
    if (port == 45514) { return "ASSIA CloudCheck WiFi Management System";}
    if (port == 45678) { return "EBA PRISE";}
    if (port == 45824) { return "Server for the DAI family of client-server products";}
    if (port == 45825) { return "Qpuncture Data Access Service";}
    if (port == 45966) { return "SSRServerMgr";}
    if (port == 46336) { return "Listen port used for Inedo agent communication";}
    if (port == 46998) { return "Connection between a desktop computer or server and a signature tablet to capture handwritten signatures";}
    if (port == 46999) { return "MediaBox Server";}
    if (port == 47000) { return "Message Bus";}
    if (port == 47001) { return "Windows Remote Management Service";}
    if (port == 47557) { return "Databeam Corporation";}
    if (port == 47624) { return "Direct Play Server";}
    if (port == 47806) { return "ALC Protocol";}
    if (port == 47808) { return "Building Automation and Control Networks";}
    if (port == 48000) { return "Nimbus Controller";}
    if (port == 48001) { return "Nimbus Spooler";}
    if (port == 48002) { return "Nimbus Hub";}
    if (port == 48003) { return "Nimbus Gateway";}
    if (port == 48004) { return "NimbusDB Connector";}
    if (port == 48005) { return "NimbusDB Control";}
    if (port == 48048) { return "Juliar Programming Language Protocol";}
    if (port == 48049) { return "3GPP Cell Broadcast Service Protocol";}
    if (port == 48050) { return "WeFi Access Network Discovery and Selection Function";}
    if (port == 48128) { return "Image Systems Network Services";}
    if (port == 48129) { return "Bloomberg locator";}
    if (port == 48556) { return "com-bardac-dw";}
    if (port == 48619) { return "iqobject";}
    if (port == 48653) { return "Robot Raconteur transport";}
    if (port == 49000) { return "Matahari Broker";}
    if (port == 49001) { return "Nuance Unity Service Request Protocol";}
    if (port == 49150) {
        return "InSpider System";
    }

    return "Unknown service";
}

#endif // PORTSERVICE_H
