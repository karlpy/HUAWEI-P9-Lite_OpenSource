

#ifndef __CMMCAPROCMEASRESEL_H__
#define __CMMCAPROCMEASRESEL_H__

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "vos.h"
#include "CmmcaParseCmd.h"
#include "LRrcCmmcaInterface.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

#if (FEATURE_ON == FEATURE_CL_INTERWORK)
/*****************************************************************************
  2 �궨��
*****************************************************************************/

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/


/*****************************************************************************
  4 ȫ�ֱ�������
*****************************************************************************/

/*****************************************************************************
  5 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  6 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  7 STRUCT����
*****************************************************************************/
typedef struct
{
    CMMCA_MMC_RAT_CMD_ID_ENUM_UINT16    enCmdId;
    LRRC_CMMCA_MSG_TYPE_ENUM_UINT32     enMsgId;
}CMMCA_CMDID_ERRC_MSGID_MAP_STRU;


/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/

VOS_VOID CMMCA_RcvCmmcMeasReselReq(VOS_VOID *pMsg);

VOS_VOID CMMCA_RcvCmmcSystemChgRsp(VOS_VOID *pMsg);

VOS_UINT32 CMMCA_GetCmdIdFromErrcMsgId(
    LRRC_CMMCA_MSG_TYPE_ENUM_UINT32     enMsgId,
    CMMCA_MMC_RAT_CMD_ID_ENUM_UINT16   *penCmdId
);


VOS_VOID CMMCA_RcvCmmcOtherRatInfoInd(VOS_VOID *pMsg);

VOS_VOID CMMCA_RcvCdmaConnStateInfoInd(VOS_VOID *pMsg);
VOS_VOID CMMCA_RcvCdmaMeasurementInfoInd(VOS_VOID *pMsg);
VOS_VOID CMMCA_RcvCdmaEventInfoInd(VOS_VOID *pMsg);
#endif


#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of CmmcaProcMeasResel.h */