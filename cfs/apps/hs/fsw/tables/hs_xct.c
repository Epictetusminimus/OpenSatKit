/************************************************************************
** File:
**   $Id: hs_xct.c 1.1 2015/11/12 14:29:06EST wmoleski Exp  $
**
**   Copyright � 2007-2014 United States Government as represented by the 
**   Administrator of the National Aeronautics and Space Administration. 
**   All Other Rights Reserved.  
**
**   This software was created at NASA's Goddard Space Flight Center.
**   This software is governed by the NASA Open Source Agreement and may be 
**   used, distributed and modified only pursuant to the terms of that 
**   agreement.
**
** Purpose:
**  The CFS Health and Safety (HS) Execution Counters Table Definition
**
** Notes:
**
** $Log: hs_xct.c  $
** Revision 1.1 2015/11/12 14:29:06EST wmoleski 
** Initial revision
** Member added to project /CFS-APPs-PROJECT/hs/fsw/tables/project.pj
** Revision 1.1 2015/05/01 14:54:33EDT lwalling 
** Initial revision
** Member added to project c:/MKSDATA/MKS-REPOSITORY/CFS-REPOSITORY/hs/fsw/tables/project.pj
** Revision 1.5 2015/04/27 14:33:47EDT lwalling 
** Add attribute unused to default table definitions
** Revision 1.4 2015/03/03 12:16:33EST sstrege 
** Added copyright information
** Revision 1.3 2011/08/15 15:43:01EDT aschoeni 
** Updated so application name is configurable
** Revision 1.2 2010/05/25 15:20:32EDT aschoeni 
** Added end of comment to comment that didn't have one
** Revision 1.1 2009/05/04 11:50:11EDT aschoeni 
** Initial revision
** Member added to project c:/MKSDATA/MKS-REPOSITORY/CFS-REPOSITORY/hs/fsw/project.pj
**
*************************************************************************/


/************************************************************************
** Includes
*************************************************************************/
#include "cfe.h"
#include "hs_tbl.h"
#include "hs_tbldefs.h"
#include "cfe_tbl_filedef.h"


static CFE_TBL_FileDef_t CFE_TBL_FileDef __attribute__((__used__)) =
{
    "HS_Default_ExeCount_Tbl", HS_APP_NAME ".ExeCount_Tbl", "HS ExeCount Table",
    "hs_xct.tbl", (sizeof(HS_XCTEntry_t) * HS_MAX_EXEC_CNT_SLOTS)
};



HS_XCTEntry_t      HS_Default_ExeCount_Tbl[HS_MAX_EXEC_CNT_SLOTS] =
{
/*          ResourceName               NullTerm ResourceType              */

/*   0 */ { "CFE_ES",                  0,       HS_XCT_TYPE_APP_MAIN       },
/*   1 */ { "CFE_EVS",                 0,       HS_XCT_TYPE_APP_MAIN       },
/*   2 */ { "CFE_TIME",                0,       HS_XCT_TYPE_APP_MAIN       },
/*   3 */ { "CFE_TBL",                 0,       HS_XCT_TYPE_APP_MAIN       },
/*   4 */ { "CFE_SB",                  0,       HS_XCT_TYPE_APP_MAIN       },
/*   5 */ { "F42",                     0,       HS_XCT_TYPE_APP_MAIN       }, //osk
/*   6 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*   7 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*   8 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*   9 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  10 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  11 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  12 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  13 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  14 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  15 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  16 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  17 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  18 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  19 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  20 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  21 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  22 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  23 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  24 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  25 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  26 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  27 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  28 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  29 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  30 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },
/*  31 */ { "",                        0,       HS_XCT_TYPE_NOTYPE         },

};

/************************/
/*  End of File Comment */
/************************/
