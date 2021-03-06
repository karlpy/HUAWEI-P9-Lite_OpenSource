

/*****************************************************************************
  1 头文件包含
*****************************************************************************/
#include "TafFsm.h"
#include "TafXpdsCtx.h"
#include "TafXpdsFsmPdeProc.h"
#include "TafXpdsFsmPdeProcComm.h"
#include "TafXpdsSndInternalMsg.h"
#include "TafXpdsFsmPdeProcTbl.h"


#ifdef  __cplusplus
#if  __cplusplus
extern "C"{
#endif
#endif

#define THIS_FILE_ID                    PS_FILE_ID_TAF_XPDS_FSM_PDE_PROC_TBL_C

#if ((FEATURE_ON == FEATURE_UE_MODE_CDMA) && (FEATURE_ON == FEATURE_AGPS))

/*****************************************************************************
  2 全局变量定义
*****************************************************************************/

/* XPDS l2 PDE状态机状态全局变量 */
TAF_FSM_DESC_STRU                       g_stTafXpdsL2PdeProcFsmDesc;

/* XPDS L2 PDE状态机 STA_INIT 状态下的事件处理表 */
TAF_ACT_STRU    g_astTafXpdsL2PdeProcInitActTbl[] =
{

    /* 收到ID_TAF_XPDS_XPDS_PDE_PROC_START_REQ命令的处理 */
    TAF_ACT_TBL_ITEM( UEPS_PID_XPDS,
                      ID_TAF_XPDS_XPDS_PDE_PROC_START_REQ,
                      TAF_XPDS_RcvXpdsPdeProcStartReq_L2Pde_Init),

};

/* XPDS L2 PDE状态机 STA_MSA_WAIT_PDE_ASSIST_INFO 状态下的事件处理表 */
TAF_ACT_STRU    g_astTafXpdsL2PdeProcStaMsaWaitPdeAssistInfoActTble[] =
{
    /* 收到ID_TAF_XPDS_XPDS_RECEIVE_PDE_DATA_IND命令的处理 */
    TAF_ACT_TBL_ITEM( UEPS_PID_XPDS,
                      ID_TAF_XPDS_XPDS_FORWARD_PDE_DATA_IND,
                      TAF_XPDS_RcvXpdsForwardPdeDataInd_L2Pde_MsaWaitPdeAssistInfo),


    TAF_ACT_TBL_ITEM( VOS_PID_TIMER,
                      TI_TAF_XPDS_WAIT_PDE_ASSIST_DATA_CNF,
                      TAF_XPDS_RcvTiXpdsForwardPdeDataIndExpired_L2Pde_MsaWaitPdeAssistInfo),

    TAF_ACT_TBL_ITEM( UEPS_PID_XPDS,
                      ID_TAF_XPDS_XPDS_INT_ABNORMAL_ABORT_AGPS_SESSION_IND,
                      TAF_XPDS_RcvXpdsAbnormalAbortSessionInd_L2Pde),
};

/* XPDS L2 PDE状态机 STA_MSA_WAIT_GPS_PSEUDO_INFO 状态下的事件处理表 */
TAF_ACT_STRU    g_astTafXpdsL2PdeProcStaMsaWaitGpsPseudoInfoActTbl[] =
{
    TAF_ACT_TBL_ITEM( UEPS_PID_XPDS,
                      ID_TAF_XPDS_XPDS_FORWARD_PDE_DATA_IND,
                      TAF_XPDS_RcvXpdsForwardPdeDataInd_L2Pde_MsaWaitGpsPseudoInfo),

    /* 收到ID_AT_XPDS_PRM_INFO_RSP命令的处理 */
    TAF_ACT_TBL_ITEM( WUEPS_PID_AT,
                      ID_AT_XPDS_GPS_PRM_INFO_RSP,
                      TAF_XPDS_RcvAtGpsPrmInfoRsp_L2Pde_MsaWaitGpsPseudoInfo),

    /* Quality定时器超时处理 */
    TAF_ACT_TBL_ITEM( VOS_PID_TIMER,
                      TI_TAF_XPDS_WAIT_RSP_PDE_PSEUDORANGE_REQ_QUALITY,
                      TAF_XPDS_RcvTiPrmInfoRspExpired_L2Pde_MsaWaitGpsPseudoInfo),

    /* 用于精度测试定时器 */
    TAF_ACT_TBL_ITEM( VOS_PID_TIMER,
                      TI_TAF_XPDS_WAIT_GPS_PRECISION_PSEUDORANGE_INFO,
                      TAF_XPDS_RcvTiWaitGpsPrecisionPseudoRangeExpired_L2Pde_MsaWaitGpsPseudoInfo),

    /* 等候GPS伪距保护定时器 */
    TAF_ACT_TBL_ITEM( VOS_PID_TIMER,
                      TI_TAF_XPDS_WAIT_GPS_PSEUDORANGE_CNF,
                      TAF_XPDS_RcvTiWaitGpsPseudoRangeCnfExpired_L2Pde_MsaWaitGpsPseudoInfo),

   TAF_ACT_TBL_ITEM( UEPS_PID_XPDS,
                      ID_TAF_XPDS_XPDS_INT_ABNORMAL_ABORT_AGPS_SESSION_IND,
                      TAF_XPDS_RcvXpdsAbnormalAbortSessionInd_L2Pde),
};

/* XPDS L2 PDE状态机 STA_MSA_WAIT_PDE_LOC_RSP 状态下的事件处理表 */
TAF_ACT_STRU    g_astTafXpdsL2PdeProcStaMsaWaitPdeLocRspActTbl[] =
{
    /* 收到XX命令的处理 */
    TAF_ACT_TBL_ITEM( UEPS_PID_XPDS,
                      ID_TAF_XPDS_XPDS_FORWARD_PDE_DATA_IND,
                      TAF_XPDS_RcvXpdsForwardPdeDataInd_L2Pde_MsaWaitPdeLocRespInfo),

    TAF_ACT_TBL_ITEM( VOS_PID_TIMER,
                      TI_TAF_XPDS_WAIT_PDE_LOCATION_INFO_CNF,
                      TAF_XPDS_RcvTiXpdsForwardPdeDataIndExpired_L2Pde_MsaWaitPdeLocRespInfo),

    TAF_ACT_TBL_ITEM( UEPS_PID_XPDS,
                      ID_TAF_XPDS_XPDS_INT_ABNORMAL_ABORT_AGPS_SESSION_IND,
                      TAF_XPDS_RcvXpdsAbnormalAbortSessionInd_L2Pde),
};

/* XPDS L2 PDE状态机 STA_MSB_WAIT_PDE_DATA 状态下的事件处理表 */
TAF_ACT_STRU    g_astTafXpdsL2PdeProcStaMsbWaitPdeDataActTbl[] =
{
    TAF_ACT_TBL_ITEM( UEPS_PID_XPDS,
                      ID_TAF_XPDS_XPDS_FORWARD_PDE_DATA_IND,
                      TAF_XPDS_RcvXpdsForwardPdeDataInd_L2Pde_MsbWaitPdeData),

    TAF_ACT_TBL_ITEM( VOS_PID_TIMER,
                      TI_TAF_XPDS_WAIT_PDE_MSB_DATA,
                      TAF_XPDS_RcvTiWaitPdeMsbDataExpired_L2Pde_MsbWaitPdeData),

    TAF_ACT_TBL_ITEM( UEPS_PID_XPDS,
                      ID_TAF_XPDS_XPDS_INT_ABNORMAL_ABORT_AGPS_SESSION_IND,
                      TAF_XPDS_RcvXpdsAbnormalAbortSessionInd_L2Pde),
};


/* XPDS L2 PDE状态机状态处理表 */
TAF_STA_STRU    g_astTafXpdsL2PdeProcStaTbl[] =
{
    /*****************定义MPC INIT状态转移表**********************/
    TAF_STA_TBL_ITEM( TAF_XPDS_L2_PDE_PROC_STA_INIT,
                      g_astTafXpdsL2PdeProcInitActTbl ),

    /*****************定义MPC WAIT RESP状态转移表**********************/
    TAF_STA_TBL_ITEM( TAF_XPDS_L2_PDE_PROC_STA_MSA_WAIT_PDE_ASSIST_INFO,
                      g_astTafXpdsL2PdeProcStaMsaWaitPdeAssistInfoActTble ),

    TAF_STA_TBL_ITEM( TAF_XPDS_L2_PDE_PROC_STA_MSA_WAIT_GPS_PSEUDO_INFO,
                      g_astTafXpdsL2PdeProcStaMsaWaitGpsPseudoInfoActTbl ),

    TAF_STA_TBL_ITEM( TAF_XPDS_L2_PDE_PROC_STA_MSA_WAIT_PDE_LOC_RSP,
                      g_astTafXpdsL2PdeProcStaMsaWaitPdeLocRspActTbl ),

    TAF_STA_TBL_ITEM( TAF_XPDS_L2_PDE_PROC_STA_MSB_WAIT_PDE_DATA,
                      g_astTafXpdsL2PdeProcStaMsbWaitPdeDataActTbl ),
};

/*****************************************************************************
  3 函数定义
*****************************************************************************/

VOS_UINT32 TAF_XPDS_GetL2PdeProcStaTblSize( VOS_VOID )
{
    return (sizeof(g_astTafXpdsL2PdeProcStaTbl)/sizeof(TAF_STA_STRU));
}


TAF_STA_STRU* TAF_XPDS_GetL2PdeProcStaTblAddr( VOS_VOID )
{
    return (g_astTafXpdsL2PdeProcStaTbl);
}


TAF_FSM_DESC_STRU* TAF_XPDS_GetL2PdeProcFsmDescAddr( VOS_VOID )
{
    return (&g_stTafXpdsL2PdeProcFsmDesc);
}

#endif

#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cpluscplus */
#endif /* __cpluscplus */




