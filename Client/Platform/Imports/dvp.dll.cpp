// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 71

// dvpBegin @ 14fc2f983

/* enum DVPStatus __cdecl dvpBegin(void) */

DVPStatus __cdecl dvpBegin(void)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2f983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpBegin();
  return DVar1;
}

// __tailMerge_dvp_dll @ 14fc2f989

void __tailMerge_dvp_dll(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  _func___cdecl_long64 **in_RAX;
  _func___cdecl_long64 *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = __delayLoadHelper2((ImgDelayDescr *)&ImgDelayDescr_154b6075c,in_RAX);
                    /* WARNING: Could not recover jumptable at 0x00014fc2fa00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}

// DelayLoad_?dvpBegin@@YA?AW4DVPStatus@@XZ @ 14fc2fa08

void DelayLoad__dvpBegin__YA_AW4DVPStatus__XZ(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpEnd @ 14fc2fa1a

/* enum DVPStatus __cdecl dvpEnd(void) */

DVPStatus __cdecl dvpEnd(void)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fa1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpEnd();
  return DVar1;
}

// DelayLoad_?dvpEnd@@YA?AW4DVPStatus@@XZ @ 14fc2fa26

void DelayLoad__dvpEnd__YA_AW4DVPStatus__XZ(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpCreateBuffer @ 14fc2fa38

/* enum DVPStatus __cdecl dvpCreateBuffer(struct DVPSysmemBufferDescRec * __ptr64,unsigned __int64 *
   __ptr64) */

DVPStatus __cdecl dvpCreateBuffer(DVPSysmemBufferDescRec *param_1,__uint64 *param_2)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fa38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpCreateBuffer(param_1,param_2);
  return DVar1;
}

// DelayLoad_?dvpCreateBuffer@@YA?AW4DVPStatus@@PEAUDVPSysmemBufferDescRec@@PEA_K@Z @ 14fc2fa44

void DelayLoad__dvpCreateBuffer__YA_AW4DVPStatus__PEAUDVPSysmemBufferDescRec__PEA_K_Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpDestroyBuffer @ 14fc2fa56

/* enum DVPStatus __cdecl dvpDestroyBuffer(unsigned __int64) */

DVPStatus __cdecl dvpDestroyBuffer(__uint64 param_1)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fa56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpDestroyBuffer(param_1);
  return DVar1;
}

// DelayLoad_?dvpDestroyBuffer@@YA?AW4DVPStatus@@_K@Z @ 14fc2fa62

void DelayLoad__dvpDestroyBuffer__YA_AW4DVPStatus___K_Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpFreeBuffer @ 14fc2fa74

/* enum DVPStatus __cdecl dvpFreeBuffer(unsigned __int64) */

DVPStatus __cdecl dvpFreeBuffer(__uint64 param_1)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpFreeBuffer(param_1);
  return DVar1;
}

// DelayLoad_?dvpFreeBuffer@@YA?AW4DVPStatus@@_K@Z @ 14fc2fa80

void DelayLoad__dvpFreeBuffer__YA_AW4DVPStatus___K_Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpMemcpy2D @ 14fc2fa92

/* enum DVPStatus __cdecl dvpMemcpy2D(unsigned __int64,unsigned __int64,unsigned int,unsigned
   __int64,unsigned __int64,unsigned __int64,unsigned int,unsigned int,unsigned int,unsigned
   int,unsigned int) */

DVPStatus __cdecl
dvpMemcpy2D(__uint64 param_1,__uint64 param_2,uint param_3,__uint64 param_4,__uint64 param_5,
           __uint64 param_6,uint param_7,uint param_8,uint param_9,uint param_10,uint param_11)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fa92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpMemcpy2D(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11);
  return DVar1;
}

// DelayLoad_?dvpMemcpy2D@@YA?AW4DVPStatus@@_K0I000IIIII@Z @ 14fc2fa9e

void DelayLoad__dvpMemcpy2D__YA_AW4DVPStatus___K0I000IIIII_Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpMapBufferEndAPI @ 14fc2fab0

/* enum DVPStatus __cdecl dvpMapBufferEndAPI(unsigned __int64) */

DVPStatus __cdecl dvpMapBufferEndAPI(__uint64 param_1)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpMapBufferEndAPI(param_1);
  return DVar1;
}

// DelayLoad_?dvpMapBufferEndAPI@@YA?AW4DVPStatus@@_K@Z @ 14fc2fabc

void DelayLoad__dvpMapBufferEndAPI__YA_AW4DVPStatus___K_Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpMapBufferEndDVP @ 14fc2face

/* enum DVPStatus __cdecl dvpMapBufferEndDVP(unsigned __int64) */

DVPStatus __cdecl dvpMapBufferEndDVP(__uint64 param_1)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2face. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpMapBufferEndDVP(param_1);
  return DVar1;
}

// DelayLoad_?dvpMapBufferEndDVP@@YA?AW4DVPStatus@@_K@Z @ 14fc2fada

void DelayLoad__dvpMapBufferEndDVP__YA_AW4DVPStatus___K_Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpMapBufferWaitAPI @ 14fc2faec

/* enum DVPStatus __cdecl dvpMapBufferWaitAPI(unsigned __int64) */

DVPStatus __cdecl dvpMapBufferWaitAPI(__uint64 param_1)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2faec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpMapBufferWaitAPI(param_1);
  return DVar1;
}

// DelayLoad_?dvpMapBufferWaitAPI@@YA?AW4DVPStatus@@_K@Z @ 14fc2faf8

void DelayLoad__dvpMapBufferWaitAPI__YA_AW4DVPStatus___K_Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpMapBufferWaitDVP @ 14fc2fb0a

/* enum DVPStatus __cdecl dvpMapBufferWaitDVP(unsigned __int64) */

DVPStatus __cdecl dvpMapBufferWaitDVP(__uint64 param_1)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fb0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpMapBufferWaitDVP(param_1);
  return DVar1;
}

// DelayLoad_?dvpMapBufferWaitDVP@@YA?AW4DVPStatus@@_K@Z @ 14fc2fb16

void DelayLoad__dvpMapBufferWaitDVP__YA_AW4DVPStatus___K_Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpImportSyncObject @ 14fc2fb28

/* enum DVPStatus __cdecl dvpImportSyncObject(struct DVPSyncObjectDescRec * __ptr64,unsigned __int64
   * __ptr64) */

DVPStatus __cdecl dvpImportSyncObject(DVPSyncObjectDescRec *param_1,__uint64 *param_2)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpImportSyncObject(param_1,param_2);
  return DVar1;
}

// DelayLoad_?dvpImportSyncObject@@YA?AW4DVPStatus@@PEAUDVPSyncObjectDescRec@@PEA_K@Z @ 14fc2fb34

void DelayLoad__dvpImportSyncObject__YA_AW4DVPStatus__PEAUDVPSyncObjectDescRec__PEA_K_Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpFreeSyncObject @ 14fc2fb46

/* enum DVPStatus __cdecl dvpFreeSyncObject(unsigned __int64) */

DVPStatus __cdecl dvpFreeSyncObject(__uint64 param_1)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fb46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpFreeSyncObject(param_1);
  return DVar1;
}

// DelayLoad_?dvpFreeSyncObject@@YA?AW4DVPStatus@@_K@Z @ 14fc2fb52

void DelayLoad__dvpFreeSyncObject__YA_AW4DVPStatus___K_Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpSyncObjClientWaitPartial @ 14fc2fb64

/* enum DVPStatus __cdecl dvpSyncObjClientWaitPartial(unsigned __int64,unsigned int,unsigned
   __int64) */

DVPStatus __cdecl dvpSyncObjClientWaitPartial(__uint64 param_1,uint param_2,__uint64 param_3)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fb64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpSyncObjClientWaitPartial(param_1,param_2,param_3);
  return DVar1;
}

// DelayLoad_?dvpSyncObjClientWaitPartial@@YA?AW4DVPStatus@@_KI0@Z @ 14fc2fb70

void DelayLoad__dvpSyncObjClientWaitPartial__YA_AW4DVPStatus___KI0_Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpInitD3D11Device @ 14fc2fb82

/* enum DVPStatus __cdecl dvpInitD3D11Device(struct ID3D11Device * __ptr64,unsigned int) */

DVPStatus __cdecl dvpInitD3D11Device(ID3D11Device *param_1,uint param_2)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fb82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpInitD3D11Device(param_1,param_2);
  return DVar1;
}

// DelayLoad_?dvpInitD3D11Device@@YA?AW4DVPStatus@@PEAUID3D11Device@@I@Z @ 14fc2fb8e

void DelayLoad__dvpInitD3D11Device__YA_AW4DVPStatus__PEAUID3D11Device__I_Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpCloseD3D11Device @ 14fc2fba0

/* enum DVPStatus __cdecl dvpCloseD3D11Device(struct ID3D11Device * __ptr64) */

DVPStatus __cdecl dvpCloseD3D11Device(ID3D11Device *param_1)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpCloseD3D11Device(param_1);
  return DVar1;
}

// DelayLoad_?dvpCloseD3D11Device@@YA?AW4DVPStatus@@PEAUID3D11Device@@@Z @ 14fc2fbac

void DelayLoad__dvpCloseD3D11Device__YA_AW4DVPStatus__PEAUID3D11Device___Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpBindToD3D11Device @ 14fc2fbbe

/* enum DVPStatus __cdecl dvpBindToD3D11Device(unsigned __int64,struct ID3D11Device * __ptr64) */

DVPStatus __cdecl dvpBindToD3D11Device(__uint64 param_1,ID3D11Device *param_2)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fbbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpBindToD3D11Device(param_1,param_2);
  return DVar1;
}

// DelayLoad_?dvpBindToD3D11Device@@YA?AW4DVPStatus@@_KPEAUID3D11Device@@@Z @ 14fc2fbca

void DelayLoad__dvpBindToD3D11Device__YA_AW4DVPStatus___KPEAUID3D11Device___Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpUnbindFromD3D11Device @ 14fc2fbdc

/* enum DVPStatus __cdecl dvpUnbindFromD3D11Device(unsigned __int64,struct ID3D11Device * __ptr64)
    */

DVPStatus __cdecl dvpUnbindFromD3D11Device(__uint64 param_1,ID3D11Device *param_2)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fbdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpUnbindFromD3D11Device(param_1,param_2);
  return DVar1;
}

// DelayLoad_?dvpUnbindFromD3D11Device@@YA?AW4DVPStatus@@_KPEAUID3D11Device@@@Z @ 14fc2fbe8

void DelayLoad__dvpUnbindFromD3D11Device__YA_AW4DVPStatus___KPEAUID3D11Device___Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpCreateGPUD3D11Resource @ 14fc2fbfa

/* enum DVPStatus __cdecl dvpCreateGPUD3D11Resource(struct ID3D11Resource * __ptr64,unsigned __int64
   * __ptr64) */

DVPStatus __cdecl dvpCreateGPUD3D11Resource(ID3D11Resource *param_1,__uint64 *param_2)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fbfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpCreateGPUD3D11Resource(param_1,param_2);
  return DVar1;
}

// DelayLoad_?dvpCreateGPUD3D11Resource@@YA?AW4DVPStatus@@PEAUID3D11Resource@@PEA_K@Z @ 14fc2fc06

void DelayLoad__dvpCreateGPUD3D11Resource__YA_AW4DVPStatus__PEAUID3D11Resource__PEA_K_Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpGetRequiredConstantsD3D11Device @ 14fc2fc18

/* enum DVPStatus __cdecl dvpGetRequiredConstantsD3D11Device(unsigned int * __ptr64,unsigned int *
   __ptr64,unsigned int * __ptr64,unsigned int * __ptr64,unsigned int * __ptr64,unsigned int *
   __ptr64,struct ID3D11Device * __ptr64) */

DVPStatus __cdecl
dvpGetRequiredConstantsD3D11Device
          (uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
          ID3D11Device *param_7)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpGetRequiredConstantsD3D11Device
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return DVar1;
}

// DelayLoad_?dvpGetRequiredConstantsD3D11Device@@YA?AW4DVPStatus@@PEAI00000PEAUID3D11Device@@@Z @ 14fc2fc24

void DelayLoad__dvpGetRequiredConstantsD3D11Device__YA_AW4DVPStatus__PEAI00000PEAUID3D11Device___Z
               (void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpInitD3D12Device @ 14fc2fc36

/* enum DVPStatus __cdecl dvpInitD3D12Device(struct ID3D12Device * __ptr64,unsigned int) */

DVPStatus __cdecl dvpInitD3D12Device(ID3D12Device *param_1,uint param_2)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fc36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpInitD3D12Device(param_1,param_2);
  return DVar1;
}

// DelayLoad_?dvpInitD3D12Device@@YA?AW4DVPStatus@@PEAUID3D12Device@@I@Z @ 14fc2fc42

void DelayLoad__dvpInitD3D12Device__YA_AW4DVPStatus__PEAUID3D12Device__I_Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpCloseD3D12Device @ 14fc2fc54

/* enum DVPStatus __cdecl dvpCloseD3D12Device(struct ID3D12Device * __ptr64) */

DVPStatus __cdecl dvpCloseD3D12Device(ID3D12Device *param_1)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fc54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpCloseD3D12Device(param_1);
  return DVar1;
}

// DelayLoad_?dvpCloseD3D12Device@@YA?AW4DVPStatus@@PEAUID3D12Device@@@Z @ 14fc2fc60

void DelayLoad__dvpCloseD3D12Device__YA_AW4DVPStatus__PEAUID3D12Device___Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpBindToD3D12Device @ 14fc2fc72

/* enum DVPStatus __cdecl dvpBindToD3D12Device(unsigned __int64,struct ID3D12Device * __ptr64) */

DVPStatus __cdecl dvpBindToD3D12Device(__uint64 param_1,ID3D12Device *param_2)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fc72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpBindToD3D12Device(param_1,param_2);
  return DVar1;
}

// DelayLoad_?dvpBindToD3D12Device@@YA?AW4DVPStatus@@_KPEAUID3D12Device@@@Z @ 14fc2fc7e

void DelayLoad__dvpBindToD3D12Device__YA_AW4DVPStatus___KPEAUID3D12Device___Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpUnbindFromD3D12Device @ 14fc2fc90

/* enum DVPStatus __cdecl dvpUnbindFromD3D12Device(unsigned __int64,struct ID3D12Device * __ptr64)
    */

DVPStatus __cdecl dvpUnbindFromD3D12Device(__uint64 param_1,ID3D12Device *param_2)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpUnbindFromD3D12Device(param_1,param_2);
  return DVar1;
}

// DelayLoad_?dvpUnbindFromD3D12Device@@YA?AW4DVPStatus@@_KPEAUID3D12Device@@@Z @ 14fc2fc9c

void DelayLoad__dvpUnbindFromD3D12Device__YA_AW4DVPStatus___KPEAUID3D12Device___Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpCreateGPUExternalResourceD3D12Device @ 14fc2fcae

/* enum DVPStatus __cdecl dvpCreateGPUExternalResourceD3D12Device(struct ID3D12Device *
   __ptr64,struct DVPGpuExternaResourceDescRec * __ptr64,unsigned __int64 * __ptr64) */

DVPStatus __cdecl
dvpCreateGPUExternalResourceD3D12Device
          (ID3D12Device *param_1,DVPGpuExternaResourceDescRec *param_2,__uint64 *param_3)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fcae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpCreateGPUExternalResourceD3D12Device(param_1,param_2,param_3);
  return DVar1;
}

// DelayLoad_?dvpCreateGPUExternalResourceD3D12Device@@YA?AW4DVPStatus@@PEAUID3D12Device@@PEAUDVPGpuExternaResourceDescRec@@PEA_K@Z @ 14fc2fcba

void DelayLoad__dvpCreateGPUExternalResourceD3D12Device__YA_AW4DVPStatus__PEAUID3D12Device__PEAUDVPGpuExternaResourceDescRec__PEA_K_Z
               (void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpGetRequiredConstantsD3D12Device @ 14fc2fccc

/* enum DVPStatus __cdecl dvpGetRequiredConstantsD3D12Device(unsigned int * __ptr64,unsigned int *
   __ptr64,unsigned int * __ptr64,unsigned int * __ptr64,unsigned int * __ptr64,unsigned int *
   __ptr64,struct ID3D12Device * __ptr64) */

DVPStatus __cdecl
dvpGetRequiredConstantsD3D12Device
          (uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
          ID3D12Device *param_7)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpGetRequiredConstantsD3D12Device
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return DVar1;
}

// DelayLoad_?dvpGetRequiredConstantsD3D12Device@@YA?AW4DVPStatus@@PEAI00000PEAUID3D12Device@@@Z @ 14fc2fcd8

void DelayLoad__dvpGetRequiredConstantsD3D12Device__YA_AW4DVPStatus__PEAI00000PEAUID3D12Device___Z
               (void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpMapBufferWaitD3D12 @ 14fc2fcea

/* enum DVPStatus __cdecl dvpMapBufferWaitD3D12(unsigned __int64,struct ID3D12CommandQueue *
   __ptr64) */

DVPStatus __cdecl dvpMapBufferWaitD3D12(__uint64 param_1,ID3D12CommandQueue *param_2)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fcea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpMapBufferWaitD3D12(param_1,param_2);
  return DVar1;
}

// DelayLoad_?dvpMapBufferWaitD3D12@@YA?AW4DVPStatus@@_KPEAUID3D12CommandQueue@@@Z @ 14fc2fcf6

void DelayLoad__dvpMapBufferWaitD3D12__YA_AW4DVPStatus___KPEAUID3D12CommandQueue___Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpMapBufferEndD3D12 @ 14fc2fd08

/* enum DVPStatus __cdecl dvpMapBufferEndD3D12(unsigned __int64,struct ID3D12CommandQueue * __ptr64)
    */

DVPStatus __cdecl dvpMapBufferEndD3D12(__uint64 param_1,ID3D12CommandQueue *param_2)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpMapBufferEndD3D12(param_1,param_2);
  return DVar1;
}

// DelayLoad_?dvpMapBufferEndD3D12@@YA?AW4DVPStatus@@_KPEAUID3D12CommandQueue@@@Z @ 14fc2fd14

void DelayLoad__dvpMapBufferEndD3D12__YA_AW4DVPStatus___KPEAUID3D12CommandQueue___Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpInitVkDevice @ 14fc2fd26

/* enum DVPStatus __cdecl dvpInitVkDevice(struct VkDevice_T * __ptr64,unsigned int,void * __ptr64)
    */

DVPStatus __cdecl dvpInitVkDevice(VkDevice_T *param_1,uint param_2,void *param_3)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fd26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpInitVkDevice(param_1,param_2,param_3);
  return DVar1;
}

// DelayLoad_?dvpInitVkDevice@@YA?AW4DVPStatus@@PEAUVkDevice_T@@IPEAX@Z @ 14fc2fd32

void DelayLoad__dvpInitVkDevice__YA_AW4DVPStatus__PEAUVkDevice_T__IPEAX_Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpCloseVkDevice @ 14fc2fd44

/* enum DVPStatus __cdecl dvpCloseVkDevice(struct VkDevice_T * __ptr64) */

DVPStatus __cdecl dvpCloseVkDevice(VkDevice_T *param_1)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fd44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpCloseVkDevice(param_1);
  return DVar1;
}

// DelayLoad_?dvpCloseVkDevice@@YA?AW4DVPStatus@@PEAUVkDevice_T@@@Z @ 14fc2fd50

void DelayLoad__dvpCloseVkDevice__YA_AW4DVPStatus__PEAUVkDevice_T___Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpBindToVkDevice @ 14fc2fd62

/* enum DVPStatus __cdecl dvpBindToVkDevice(unsigned __int64,struct VkDevice_T * __ptr64) */

DVPStatus __cdecl dvpBindToVkDevice(__uint64 param_1,VkDevice_T *param_2)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fd62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpBindToVkDevice(param_1,param_2);
  return DVar1;
}

// DelayLoad_?dvpBindToVkDevice@@YA?AW4DVPStatus@@_KPEAUVkDevice_T@@@Z @ 14fc2fd6e

void DelayLoad__dvpBindToVkDevice__YA_AW4DVPStatus___KPEAUVkDevice_T___Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpUnbindFromVkDevice @ 14fc2fd80

/* enum DVPStatus __cdecl dvpUnbindFromVkDevice(unsigned __int64,struct VkDevice_T * __ptr64) */

DVPStatus __cdecl dvpUnbindFromVkDevice(__uint64 param_1,VkDevice_T *param_2)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpUnbindFromVkDevice(param_1,param_2);
  return DVar1;
}

// DelayLoad_?dvpUnbindFromVkDevice@@YA?AW4DVPStatus@@_KPEAUVkDevice_T@@@Z @ 14fc2fd8c

void DelayLoad__dvpUnbindFromVkDevice__YA_AW4DVPStatus___KPEAUVkDevice_T___Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpCreateGPUExternalResourceVkDevice @ 14fc2fd9e

/* enum DVPStatus __cdecl dvpCreateGPUExternalResourceVkDevice(struct VkDevice_T * __ptr64,struct
   DVPGpuExternaResourceDescRec * __ptr64,unsigned __int64 * __ptr64) */

DVPStatus __cdecl
dvpCreateGPUExternalResourceVkDevice
          (VkDevice_T *param_1,DVPGpuExternaResourceDescRec *param_2,__uint64 *param_3)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fd9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpCreateGPUExternalResourceVkDevice(param_1,param_2,param_3);
  return DVar1;
}

// DelayLoad_?dvpCreateGPUExternalResourceVkDevice@@YA?AW4DVPStatus@@PEAUVkDevice_T@@PEAUDVPGpuExternaResourceDescRec@@PEA_K@Z @ 14fc2fdaa

void DelayLoad__dvpCreateGPUExternalResourceVkDevice__YA_AW4DVPStatus__PEAUVkDevice_T__PEAUDVPGpuExternaResourceDescRec__PEA_K_Z
               (void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpGetRequiredConstantsVkDevice @ 14fc2fdbc

/* enum DVPStatus __cdecl dvpGetRequiredConstantsVkDevice(unsigned int * __ptr64,unsigned int *
   __ptr64,unsigned int * __ptr64,unsigned int * __ptr64,unsigned int * __ptr64,unsigned int *
   __ptr64,struct VkDevice_T * __ptr64) */

DVPStatus __cdecl
dvpGetRequiredConstantsVkDevice
          (uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
          VkDevice_T *param_7)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpGetRequiredConstantsVkDevice(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return DVar1;
}

// DelayLoad_?dvpGetRequiredConstantsVkDevice@@YA?AW4DVPStatus@@PEAI00000PEAUVkDevice_T@@@Z @ 14fc2fdc8

void DelayLoad__dvpGetRequiredConstantsVkDevice__YA_AW4DVPStatus__PEAI00000PEAUVkDevice_T___Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpMapBufferWaitVk @ 14fc2fdda

/* enum DVPStatus __cdecl dvpMapBufferWaitVk(unsigned __int64,struct VkQueue_T * __ptr64) */

DVPStatus __cdecl dvpMapBufferWaitVk(__uint64 param_1,VkQueue_T *param_2)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fdda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpMapBufferWaitVk(param_1,param_2);
  return DVar1;
}

// DelayLoad_?dvpMapBufferWaitVk@@YA?AW4DVPStatus@@_KPEAUVkQueue_T@@@Z @ 14fc2fde6

void DelayLoad__dvpMapBufferWaitVk__YA_AW4DVPStatus___KPEAUVkQueue_T___Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

// dvpMapBufferEndVk @ 14fc2fdf8

/* enum DVPStatus __cdecl dvpMapBufferEndVk(unsigned __int64,struct VkQueue_T * __ptr64) */

DVPStatus __cdecl dvpMapBufferEndVk(__uint64 param_1,VkQueue_T *param_2)

{
  DVPStatus DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fc2fdf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = dvpMapBufferEndVk(param_1,param_2);
  return DVar1;
}

// DelayLoad_?dvpMapBufferEndVk@@YA?AW4DVPStatus@@_KPEAUVkQueue_T@@@Z @ 14fc2fe04

void DelayLoad__dvpMapBufferEndVk__YA_AW4DVPStatus___KPEAUVkQueue_T___Z(void)

{
  __tailMerge_dvp_dll();
  return;
}

