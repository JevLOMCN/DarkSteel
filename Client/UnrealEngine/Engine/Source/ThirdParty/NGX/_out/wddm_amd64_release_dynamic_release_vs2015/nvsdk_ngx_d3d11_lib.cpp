// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGX
// Functions: 32

// `dynamic_initializer_for_'g_sdkLibMutexD3D11'' @ 14145a790

void __cdecl _dynamic_initializer_for__g_sdkLibMutexD3D11__(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&g_sdkLibMutexD3D11);
  atexit(_dynamic_atexit_destructor_for__g_sdkLibMutexD3D11__);
  return;
}

// EvaluateFeature<enum_NVSDK_NGX_Result_(__cdecl*)(ID3D11DeviceContext_*___ptr64,NVSDK_NGX_Handle_const_*___ptr64,NVSDK_NGX_Parameter_const_*___ptr64,void_(__cdecl*)(float,bool_&___ptr64)),ID3D11DeviceContext_*___ptr64> @ 14ff3b8b0

NVSDK_NGX_Result __cdecl
NGXProgressCallbackHelper::
EvaluateFeature<enum_NVSDK_NGX_Result_(__cdecl*)(ID3D11DeviceContext_*___ptr64,NVSDK_NGX_Handle_const_*___ptr64,NVSDK_NGX_Parameter_const_*___ptr64,void_(__cdecl*)(float,bool_&___ptr64)),ID3D11DeviceContext_*___ptr64>
          (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
           *param_1,ID3D11DeviceContext *param_2,NVSDK_NGX_Handle *param_3,
          NVSDK_NGX_Parameter *param_4,_func___cdecl_void_float_bool_ptr *param_5)

{
  NVSDK_NGX_Result NVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  pcVar2 = (_func___cdecl_void_float_bool_ptr *)0x0;
  puVar3 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d40)
  ;
  if (param_5 != (_func___cdecl_void_float_bool_ptr *)0x0) {
    pcVar2 = s_ReplacementCallback;
  }
  *puVar3 = param_5;
  (*__guard_check_icall_fptr)(param_1);
  NVar1 = (*param_1)(param_2,param_3,param_4,pcVar2);
  *puVar3 = 0;
  return NVar1;
}

// NGXLock @ 14ff3b950

NGXLock * __thiscall NGXLock::NGXLock(NGXLock *this,NGXMutex *param_1)

{
  this->m_mutex = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  return this;
}

// NGXMutex @ 14ff3b980

NGXMutex * __thiscall NGXMutex::NGXMutex(NGXMutex *this)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)this);
  return this;
}

// NGX_API_D3D11_Lib @ 14ff3b9a0

NGX_API_D3D11_Lib * __thiscall NGX_API_D3D11_Lib::NGX_API_D3D11_Lib(NGX_API_D3D11_Lib *this)

{
  this->Init = (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version
                *)0x0;
  this->Init_Ext =
       (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
        *)0x0;
  this->Init_ProjectID =
       (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
        *)0x0;
  this->Shutdown = (_func___cdecl_NVSDK_NGX_Result *)0x0;
  this->Shutdown1 = (_func___cdecl_NVSDK_NGX_Result_ID3D11Device_ptr_ulong_ptr *)0x0;
  this->GetScratchBufferSize =
       (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr *)0x0;
  this->GetParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
  this->CreateFeature =
       (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
        *)0x0;
  this->EvaluateFeature =
       (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
        *)0x0;
  this->ReleaseFeature = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0;
  this->GetFeatureRequirements =
       (_func___cdecl_NVSDK_NGX_Result_IDXGIAdapter_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
        *)0x0;
  this->AllocateParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
  this->GetCapabilityParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
  this->DestroyParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr *)0x0;
  return this;
}

// NGX_Context_D3D11_Lib @ 14ff3b9f0

NGX_Context_D3D11_Lib * __thiscall
NGX_Context_D3D11_Lib::NGX_Context_D3D11_Lib(NGX_Context_D3D11_Lib *this)

{
  (this->API).Init =
       (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version *)0x0;
  (this->API).Init_Ext =
       (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
        *)0x0;
  (this->API).Init_ProjectID =
       (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
        *)0x0;
  (this->API).Shutdown = (_func___cdecl_NVSDK_NGX_Result *)0x0;
  (this->API).Shutdown1 = (_func___cdecl_NVSDK_NGX_Result_ID3D11Device_ptr_ulong_ptr *)0x0;
  (this->API).GetScratchBufferSize =
       (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr *)0x0;
  (this->API).GetParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
  (this->API).CreateFeature =
       (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
        *)0x0;
  (this->API).EvaluateFeature =
       (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
        *)0x0;
  (this->API).ReleaseFeature = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0;
  (this->API).GetFeatureRequirements =
       (_func___cdecl_NVSDK_NGX_Result_IDXGIAdapter_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
        *)0x0;
  (this->API).AllocateParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0
  ;
  (this->API).GetCapabilityParameters =
       (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
  (this->API).DestroyParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr *)0x0;
  return this;
}

// ~NGXLock @ 14ff3ba40

void __thiscall NGXLock::~NGXLock(NGXLock *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ff3ba43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this->m_mutex);
  return;
}

// ~NGXMutex @ 14ff3ba50

void __stdcall NGXMutex::~NGXMutex(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00014ff3ba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}

// GetLUIDFromD3D11Device @ 14ff3ba60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl GetLUIDFromD3D11Device(ID3D11Device *param_1,_LUID *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_188 [32];
  longlong *local_168;
  longlong *local_160;
  undefined1 local_158 [296];
  _LUID local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  pcVar1 = *(code **)*param_1;
  (*__guard_check_icall_fptr)(pcVar1);
  iVar3 = (*pcVar1)(param_1,&_GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,&local_168);
  plVar2 = local_168;
  if (iVar3 < 0) {
    ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_d3d11_lib.cpp"
                   ,0x5e,"GetLUIDFromD3D11Device","error: unable to query DXGI Device");
  }
  else {
    pcVar1 = *(code **)(*local_168 + 0x38);
    (*__guard_check_icall_fptr)(pcVar1);
    iVar3 = (*pcVar1)(plVar2,&local_160);
    plVar2 = local_160;
    if (iVar3 < 0) {
      pcVar1 = *(code **)(*local_168 + 0x10);
      (*__guard_check_icall_fptr)(pcVar1);
      (*pcVar1)(local_168);
      ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_d3d11_lib.cpp"
                     ,0x67,"GetLUIDFromD3D11Device","error: unable to get DXGI adapter");
    }
    else {
      pcVar1 = *(code **)(*local_160 + 0x40);
      (*__guard_check_icall_fptr)(pcVar1);
      iVar3 = (*pcVar1)(plVar2,local_158);
      if (iVar3 < 0) {
        pcVar1 = *(code **)(*local_160 + 0x10);
        (*__guard_check_icall_fptr)(pcVar1);
        (*pcVar1)(local_160);
        pcVar1 = *(code **)(*local_168 + 0x10);
        (*__guard_check_icall_fptr)(pcVar1);
        (*pcVar1)(local_168);
        ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_d3d11_lib.cpp"
                       ,0x71,"GetLUIDFromD3D11Device",
                       "error: unable to get descriptor for DXGI Adapter");
      }
      else {
        *param_2 = local_30;
        pcVar1 = *(code **)(*local_160 + 0x10);
        (*__guard_check_icall_fptr)(pcVar1);
        (*pcVar1)(local_160);
        pcVar1 = *(code **)(*local_168 + 0x10);
        (*__guard_check_icall_fptr)(pcVar1);
        (*pcVar1)(local_168);
        iVar3 = 0;
      }
    }
  }
  return iVar3;
}

// InitializeLocalFeatureCommonInfoAndReplacePointers @ 14ff3bc20

void __cdecl
InitializeLocalFeatureCommonInfoAndReplacePointers
          (NVSDK_NGX_FeatureCommonInfo **param_1,NVSDK_NGX_FeatureCommonInfo *param_2,
          NVSDK_NGX_FeatureCommonInfo_Internal *param_3,bool param_4,bool param_5)

{
  NVSDK_NGX_FeatureCommonInfo *pNVar1;
  _func___cdecl_void_char_ptr_NVSDK_NGX_Logging_Level_NVSDK_NGX_Feature *p_Var2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined3 uVar6;
  
  param_3->LoadGenericFeatures = param_5;
  param_3->UWP = param_4;
  pNVar1 = *param_1;
  if (pNVar1 != (NVSDK_NGX_FeatureCommonInfo *)0x0) {
    uVar3 = (pNVar1->PathListInfo).Length;
    uVar4 = *(undefined4 *)&(pNVar1->PathListInfo).field_0xc;
    (param_2->PathListInfo).Path = (pNVar1->PathListInfo).Path;
    (param_2->PathListInfo).Length = uVar3;
    *(undefined4 *)&(param_2->PathListInfo).field_0xc = uVar4;
    p_Var2 = (pNVar1->LoggingInfo).LoggingCallback;
    param_2->InternalData = pNVar1->InternalData;
    (param_2->LoggingInfo).LoggingCallback = p_Var2;
    bVar5 = (pNVar1->LoggingInfo).DisableOtherLoggingSinks;
    uVar6 = *(undefined3 *)&(pNVar1->LoggingInfo).field_0xd;
    (param_2->LoggingInfo).MinimumLoggingLevel = (pNVar1->LoggingInfo).MinimumLoggingLevel;
    (param_2->LoggingInfo).DisableOtherLoggingSinks = bVar5;
    *(undefined3 *)&(param_2->LoggingInfo).field_0xd = uVar6;
    param_2->InternalData = param_3;
    *param_1 = param_2;
    return;
  }
  (param_2->PathListInfo).Path = (wchar_t **)0x0;
  (param_2->PathListInfo).Length = 0;
  (param_2->LoggingInfo).DisableOtherLoggingSinks = false;
  (param_2->LoggingInfo).LoggingCallback =
       (_func___cdecl_void_char_ptr_NVSDK_NGX_Logging_Level_NVSDK_NGX_Feature *)0x0;
  (param_2->LoggingInfo).MinimumLoggingLevel = NVSDK_NGX_LOGGING_LEVEL_OFF;
  param_2->InternalData = param_3;
  *param_1 = param_2;
  return;
}

// NVSDK_NGX_D3D11_Init_Common @ 14ff3bc80

NVSDK_NGX_Result __cdecl
NVSDK_NGX_D3D11_Init_Common
          (wchar_t *param_1,ID3D11Device *param_2,NVSDK_NGX_FeatureCommonInfo *param_3,
          NVSDK_NGX_Version param_4)

{
  bool bVar1;
  int iVar2;
  NVSDK_NGX_Result NVar3;
  NVSDK_NGX_Logging_Level NVar4;
  _func___cdecl_void_char_ptr_NVSDK_NGX_Logging_Level_NVSDK_NGX_Feature *p_Var5;
  _LUID local_res18;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  NGXMutex *local_20;
  
  local_28 = 0xfffffffffffffffe;
  local_20 = &g_sdkLibMutexD3D11;
  EnterCriticalSection((LPCRITICAL_SECTION)&g_sdkLibMutexD3D11);
  if ((param_3 == (NVSDK_NGX_FeatureCommonInfo *)0x0) || ((int)param_4 < 0x14)) {
    bVar1 = false;
    p_Var5 = (_func___cdecl_void_char_ptr_NVSDK_NGX_Logging_Level_NVSDK_NGX_Feature *)0x0;
    NVar4 = NVSDK_NGX_LOGGING_LEVEL_OFF;
  }
  else {
    bVar1 = (param_3->LoggingInfo).DisableOtherLoggingSinks;
    if (((bVar1 != false) &&
        ((param_3->LoggingInfo).LoggingCallback ==
         (_func___cdecl_void_char_ptr_NVSDK_NGX_Logging_Level_NVSDK_NGX_Feature *)0x0)) ||
       (NVar4 = (param_3->LoggingInfo).MinimumLoggingLevel, NVSDK_NGX_LOGGING_LEVEL_VERBOSE < NVar4)
       ) {
      NVar3 = NVSDK_NGX_Result_FAIL_InvalidParameter;
      goto LAB_14ff3c0b6;
    }
    p_Var5 = (param_3->LoggingInfo).LoggingCallback;
  }
  bVar1 = NGXSafeInitializeLog(param_1,L"/nvsdk_ngx.log",NVar4,p_Var5,bVar1);
  if (!bVar1) {
    NVar3 = NVSDK_NGX_Result_FAIL_UnableToWriteToAppDataPath;
    goto LAB_14ff3c0b6;
  }
  if (((((GContext.API.Init ==
          (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version *)
          0x0) && (GContext.API.Init_Ext ==
                   (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
                    *)0x0)) ||
       ((GContext.API.Shutdown == (_func___cdecl_NVSDK_NGX_Result *)0x0 &&
        (GContext.API.Shutdown1 == (_func___cdecl_NVSDK_NGX_Result_ID3D11Device_ptr_ulong_ptr *)0x0)
        ))) || ((GContext.API.GetParameters ==
                 (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0 &&
                (GContext.API.GetCapabilityParameters ==
                 (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0)))) ||
     ((GContext.API.CreateFeature ==
       (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
        *)0x0 ||
      ((GContext.API.EvaluateFeature ==
        (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
         *)0x0 ||
       (GContext.API.ReleaseFeature == (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0)))
      ))) {
    memset(&local_98,0,0x70);
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    GContext.API.Init =
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version *)
         0x0;
    GContext.API.Init_Ext =
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
          *)0x0;
    GContext.API.Init_ProjectID =
         (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
          *)0x0;
    GContext.API.Shutdown = (_func___cdecl_NVSDK_NGX_Result *)0x0;
    GContext.API.Shutdown1 = (_func___cdecl_NVSDK_NGX_Result_ID3D11Device_ptr_ulong_ptr *)0x0;
    GContext.API.GetScratchBufferSize =
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr *)0x0
    ;
    GContext.API.GetParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
    GContext.API.CreateFeature =
         (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
          *)0x0;
    GContext.API.EvaluateFeature =
         (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
          *)0x0;
    GContext.API.ReleaseFeature = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0;
    GContext.API.GetFeatureRequirements =
         (_func___cdecl_NVSDK_NGX_Result_IDXGIAdapter_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
          *)0x0;
    GContext.API.AllocateParameters =
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
    GContext.API.GetCapabilityParameters =
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
    GContext.API.DestroyParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr *)0x0;
    iVar2 = GetLUIDFromD3D11Device(param_2,&local_res18);
    if (iVar2 < 0) {
      NVar3 = NVSDK_NGX_Result_FAIL_PlatformError;
      goto LAB_14ff3c0b6;
    }
    if (GLib == (HINSTANCE__ *)0x0) {
      GLib = NGXLoadCoreLibrary(local_res18);
      if (GLib != (HINSTANCE__ *)0x0) goto LAB_14ff3be60;
    }
    else {
LAB_14ff3be60:
      GContext.API.Init =
           (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version *)
           NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D11_Init");
      GContext.API.Init_Ext =
           (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
            *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D11_Init_Ext");
      GContext.API.Init_ProjectID =
           (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
            *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D11_Init_ProjectID");
      GContext.API.Shutdown =
           (_func___cdecl_NVSDK_NGX_Result *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D11_Shutdown");
      GContext.API.Shutdown1 =
           (_func___cdecl_NVSDK_NGX_Result_ID3D11Device_ptr_ulong_ptr *)
           NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D11_Shutdown1");
      GContext.API.GetParameters =
           (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)
           NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D11_GetParameters");
      GContext.API.GetScratchBufferSize =
           (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr *)
           NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D11_GetScratchBufferSize");
      GContext.API.CreateFeature =
           (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
            *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D11_CreateFeature");
      GContext.API.EvaluateFeature =
           (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
            *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D11_EvaluateFeature");
      GContext.API.ReleaseFeature =
           (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)
           NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D11_ReleaseFeature");
      GContext.API.GetFeatureRequirements =
           (_func___cdecl_NVSDK_NGX_Result_IDXGIAdapter_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
            *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D11_GetFeatureRequirements");
      GContext.API.AllocateParameters =
           (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)
           NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D11_AllocateParameters");
      GContext.API.GetCapabilityParameters =
           (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)
           NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D11_GetCapabilityParameters");
      GContext.API.DestroyParameters =
           (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr *)
           NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D11_DestroyParameters");
    }
    if ((((GContext.API.Init ==
           (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version *)
           0x0) && (GContext.API.Init_Ext ==
                    (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
                     *)0x0)) ||
        ((GContext.API.Shutdown == (_func___cdecl_NVSDK_NGX_Result *)0x0 &&
         (GContext.API.Shutdown1 == (_func___cdecl_NVSDK_NGX_Result_ID3D11Device_ptr_ulong_ptr *)0x0
         )))) || ((((GContext.API.GetParameters ==
                     (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0 &&
                    (GContext.API.GetCapabilityParameters ==
                     (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0)) ||
                   (GContext.API.CreateFeature ==
                    (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
                     *)0x0)) ||
                  ((GContext.API.EvaluateFeature ==
                    (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
                     *)0x0 ||
                   (GContext.API.ReleaseFeature ==
                    (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0)))))) {
      memset(&local_98,0,0x70);
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      GContext.API.Init =
           (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version *)
           0x0;
      GContext.API.Init_Ext =
           (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
            *)0x0;
      GContext.API.Init_ProjectID =
           (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
            *)0x0;
      GContext.API.Shutdown = (_func___cdecl_NVSDK_NGX_Result *)0x0;
      GContext.API.Shutdown1 = (_func___cdecl_NVSDK_NGX_Result_ID3D11Device_ptr_ulong_ptr *)0x0;
      GContext.API.GetScratchBufferSize =
           (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr *)
           0x0;
      GContext.API.GetParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0
      ;
      GContext.API.CreateFeature =
           (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
            *)0x0;
      GContext.API.EvaluateFeature =
           (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
            *)0x0;
      GContext.API.ReleaseFeature = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0;
      GContext.API.GetFeatureRequirements =
           (_func___cdecl_NVSDK_NGX_Result_IDXGIAdapter_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
            *)0x0;
      GContext.API.AllocateParameters =
           (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
      GContext.API.GetCapabilityParameters =
           (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
      GContext.API.DestroyParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr *)0x0
      ;
      NVar3 = NVSDK_NGX_Result_FAIL_FeatureNotSupported;
      goto LAB_14ff3c0b6;
    }
  }
  NVar3 = NVSDK_NGX_Result_Success;
LAB_14ff3c0b6:
  LeaveCriticalSection((LPCRITICAL_SECTION)&g_sdkLibMutexD3D11);
  return NVar3;
}

// NVSDK_NGX_Parameter_Populate_Unspecified_Defaults @ 14ff3c0f0

void __cdecl NVSDK_NGX_Parameter_Populate_Unspecified_Defaults(NVSDK_NGX_Parameter *param_1)

{
  NVSDK_NGX_Result NVar1;
  uint local_res10 [6];
  
  local_res10[0] = 0;
  NVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.DLAA",local_res10);
  if ((NVar1 != NVSDK_NGX_Result_Success) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.DLAA",0x8000000b);
  }
  NVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.Quality",local_res10);
  if ((NVar1 != NVSDK_NGX_Result_Success) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.Quality",0x8000000b);
  }
  NVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.Balanced",local_res10);
  if ((NVar1 != NVSDK_NGX_Result_Success) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.Balanced",0x8000000b);
  }
  NVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.Performance",local_res10);
  if ((NVar1 != NVSDK_NGX_Result_Success) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.Performance",0x8000000b);
  }
  NVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.UltraQuality",local_res10);
  if ((NVar1 != NVSDK_NGX_Result_Success) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.UltraQuality",0x80000006);
  }
  NVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.UltraPerformance",local_res10);
  if ((NVar1 != NVSDK_NGX_Result_Success) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.UltraPerformance",0x8000000b);
  }
  NVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"RayReconstruction.Hint.Render.Preset.DLAA",local_res10)
  ;
  if ((NVar1 != NVSDK_NGX_Result_Success) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"RayReconstruction.Hint.Render.Preset.DLAA",0x80000004);
  }
  NVar1 = NVSDK_NGX_Parameter_GetUI
                    (param_1,"RayReconstruction.Hint.Render.Preset.Quality",local_res10);
  if ((NVar1 != NVSDK_NGX_Result_Success) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"RayReconstruction.Hint.Render.Preset.Quality",0x80000004);
  }
  NVar1 = NVSDK_NGX_Parameter_GetUI
                    (param_1,"RayReconstruction.Hint.Render.Preset.Balanced",local_res10);
  if ((NVar1 != NVSDK_NGX_Result_Success) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"RayReconstruction.Hint.Render.Preset.Balanced",0x80000004);
  }
  NVar1 = NVSDK_NGX_Parameter_GetUI
                    (param_1,"RayReconstruction.Hint.Render.Preset.Performance",local_res10);
  if ((NVar1 != NVSDK_NGX_Result_Success) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"RayReconstruction.Hint.Render.Preset.Performance",0x80000004)
    ;
  }
  NVar1 = NVSDK_NGX_Parameter_GetUI
                    (param_1,"RayReconstruction.Hint.Render.Preset.UltraQuality",local_res10);
  if ((NVar1 != NVSDK_NGX_Result_Success) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI
              (param_1,"RayReconstruction.Hint.Render.Preset.UltraQuality",0x80000004);
  }
  NVar1 = NVSDK_NGX_Parameter_GetUI
                    (param_1,"RayReconstruction.Hint.Render.Preset.UltraPerformance",local_res10);
  if ((NVar1 != NVSDK_NGX_Result_Success) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI
              (param_1,"RayReconstruction.Hint.Render.Preset.UltraPerformance",0x80000004);
  }
  return;
}

// isInited @ 14ff3c380

bool __thiscall NGX_API_D3D11_Lib::isInited(NGX_API_D3D11_Lib *this)

{
  if ((((this->Init !=
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version *)
         0x0) || (this->Init_Ext !=
                  (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
                   *)0x0)) &&
      ((this->Shutdown != (_func___cdecl_NVSDK_NGX_Result *)0x0 ||
       (this->Shutdown1 != (_func___cdecl_NVSDK_NGX_Result_ID3D11Device_ptr_ulong_ptr *)0x0)))) &&
     ((((this->GetParameters != (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0 ||
        (this->GetCapabilityParameters !=
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0)) &&
       (this->CreateFeature !=
        (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
         *)0x0)) &&
      ((this->EvaluateFeature !=
        (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
         *)0x0 &&
       (this->ReleaseFeature != (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0)))))) {
    return true;
  }
  return false;
}

// lock @ 14ff3c3d0

void __stdcall NGXMutex::lock(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00014ff3c3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}

// s_ReplacementCallback @ 14ff3c3e0

void __cdecl NGXProgressCallbackHelper::s_ReplacementCallback(float param_1,bool *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d40);
  if (pcVar1 != (code *)0x0) {
    (*__guard_check_icall_fptr)(pcVar1);
    (*pcVar1)(param_1,param_2);
  }
  return;
}

// unlock @ 14ff3c440

void __stdcall NGXMutex::unlock(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00014ff3c440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// NVSDK_NGX_D3D11_AllocateParameters @ 14ff3c450

NVSDK_NGX_Result __cdecl NVSDK_NGX_D3D11_AllocateParameters(NVSDK_NGX_Parameter **param_1)

{
  _func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = GContext.API.AllocateParameters;
  if (GContext.API.Init ==
      (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version *)0x0)
  {
    return NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  if (GContext.API.AllocateParameters ==
      (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0) {
    return NVSDK_NGX_Result_FAIL_OutOfDate;
  }
  (*__guard_check_icall_fptr)(GContext.API.AllocateParameters);
                    /* WARNING: Could not recover jumptable at 0x00014ff3c4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return NVar1;
}

// NVSDK_NGX_D3D11_CreateFeature @ 14ff3c4c0

NVSDK_NGX_Result __cdecl
NVSDK_NGX_D3D11_CreateFeature
          (ID3D11DeviceContext *param_1,NVSDK_NGX_Feature param_2,NVSDK_NGX_Parameter *param_3,
          NVSDK_NGX_Handle **param_4)

{
  _func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
  *p_Var1;
  NVSDK_NGX_Result NVar2;
  
  if (GContext.API.CreateFeature ==
      (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
       *)0x0) {
    NVar2 = NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  else {
    NVSDK_NGX_Parameter_Populate_Unspecified_Defaults(param_3);
    p_Var1 = GContext.API.CreateFeature;
    (*__guard_check_icall_fptr)(GContext.API.CreateFeature);
    NVar2 = (*p_Var1)(param_1,param_2,param_3,param_4);
  }
  return NVar2;
}

// NVSDK_NGX_D3D11_DestroyParameters @ 14ff3c540

NVSDK_NGX_Result __cdecl NVSDK_NGX_D3D11_DestroyParameters(NVSDK_NGX_Parameter *param_1)

{
  _func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = GContext.API.DestroyParameters;
  if (GContext.API.Init ==
      (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version *)0x0)
  {
    return NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  if (GContext.API.DestroyParameters ==
      (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr *)0x0) {
    return NVSDK_NGX_Result_FAIL_OutOfDate;
  }
  (*__guard_check_icall_fptr)(GContext.API.DestroyParameters);
                    /* WARNING: Could not recover jumptable at 0x00014ff3c598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return NVar1;
}

// NVSDK_NGX_D3D11_EvaluateFeature @ 14ff3c5b0

NVSDK_NGX_Result __cdecl
NVSDK_NGX_D3D11_EvaluateFeature
          (ID3D11DeviceContext *param_1,NVSDK_NGX_Handle *param_2,NVSDK_NGX_Parameter *param_3,
          _func___cdecl_void_float_bool_ptr *param_4)

{
  _func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
  *p_Var1;
  NVSDK_NGX_Result NVar2;
  
  p_Var1 = GContext.API.EvaluateFeature;
  if (GContext.API.EvaluateFeature ==
      (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
       *)0x0) {
    NVar2 = NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  else {
    (*__guard_check_icall_fptr)(GContext.API.EvaluateFeature);
    NVar2 = (*p_Var1)(param_1,param_2,param_3,param_4);
  }
  return NVar2;
}

// NVSDK_NGX_D3D11_EvaluateFeature_C @ 14ff3c630

NVSDK_NGX_Result __cdecl
NVSDK_NGX_D3D11_EvaluateFeature_C
          (ID3D11DeviceContext *param_1,NVSDK_NGX_Handle *param_2,NVSDK_NGX_Parameter *param_3,
          _func___cdecl_void_float_bool_ptr *param_4)

{
  NVSDK_NGX_Result NVar1;
  
  if (GContext.API.EvaluateFeature ==
      (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
       *)0x0) {
    return NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  NVar1 = NGXProgressCallbackHelper::
          EvaluateFeature<enum_NVSDK_NGX_Result_(__cdecl*)(ID3D11DeviceContext_*___ptr64,NVSDK_NGX_Handle_const_*___ptr64,NVSDK_NGX_Parameter_const_*___ptr64,void_(__cdecl*)(float,bool_&___ptr64)),ID3D11DeviceContext_*___ptr64>
                    (GContext.API.EvaluateFeature,param_1,param_2,param_3,param_4);
  return NVar1;
}

// NVSDK_NGX_D3D11_GetCapabilityParameters @ 14ff3c670

NVSDK_NGX_Result __cdecl NVSDK_NGX_D3D11_GetCapabilityParameters(NVSDK_NGX_Parameter **param_1)

{
  _func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = GContext.API.GetCapabilityParameters;
  if (GContext.API.Init ==
      (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version *)0x0)
  {
    return NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  if (GContext.API.GetCapabilityParameters ==
      (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0) {
    return NVSDK_NGX_Result_FAIL_OutOfDate;
  }
  (*__guard_check_icall_fptr)(GContext.API.GetCapabilityParameters);
                    /* WARNING: Could not recover jumptable at 0x00014ff3c6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return NVar1;
}

// NVSDK_NGX_D3D11_GetFeatureRequirements @ 14ff3c6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

NVSDK_NGX_Result __cdecl
NVSDK_NGX_D3D11_GetFeatureRequirements
          (IDXGIAdapter *param_1,NVSDK_NGX_FeatureDiscoveryInfo *param_2,
          NVSDK_NGX_FeatureRequirement *param_3)

{
  code *pcVar1;
  int iVar2;
  NVSDK_NGX_Result NVar3;
  _func___cdecl_NVSDK_NGX_Result_IDXGIAdapter_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
  *p_Var4;
  undefined1 auStack_178 [32];
  undefined1 local_158 [296];
  _LUID local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  p_Var4 = GContext.API.GetFeatureRequirements;
  if (GLib == (HINSTANCE__ *)0x0) {
    pcVar1 = *(code **)((longlong)*param_1 + 0x40);
    (*__guard_check_icall_fptr)(pcVar1);
    iVar2 = (*pcVar1)(param_1,local_158);
    if ((iVar2 != 0) || (GLib = NGXLoadCoreLibrary(local_30), GLib == (HINSTANCE__ *)0x0)) {
      return NVSDK_NGX_Result_FAIL_PlatformError;
    }
    p_Var4 = (_func___cdecl_NVSDK_NGX_Result_IDXGIAdapter_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
              *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D11_GetFeatureRequirements");
  }
  if (p_Var4 == (_func___cdecl_NVSDK_NGX_Result_IDXGIAdapter_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
                 *)0x0) {
    NVar3 = NVSDK_NGX_Result_FAIL_NotImplemented;
  }
  else {
    GContext.API.GetFeatureRequirements = p_Var4;
    (*__guard_check_icall_fptr)(p_Var4);
    NVar3 = (*p_Var4)(param_1,param_2,param_3);
  }
  return NVar3;
}

// NVSDK_NGX_D3D11_GetParameters @ 14ff3c7d0

NVSDK_NGX_Result __cdecl NVSDK_NGX_D3D11_GetParameters(NVSDK_NGX_Parameter **param_1)

{
  _func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = GContext.API.GetParameters;
  if (GContext.API.GetParameters ==
      (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0) {
    return NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  (*__guard_check_icall_fptr)(GContext.API.GetParameters);
                    /* WARNING: Could not recover jumptable at 0x00014ff3c812. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return NVar1;
}

// NVSDK_NGX_D3D11_GetScratchBufferSize @ 14ff3c820

NVSDK_NGX_Result __cdecl
NVSDK_NGX_D3D11_GetScratchBufferSize
          (NVSDK_NGX_Feature param_1,NVSDK_NGX_Parameter *param_2,ulong64 *param_3)

{
  _func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr *p_Var1;
  NVSDK_NGX_Result NVar2;
  
  p_Var1 = GContext.API.GetScratchBufferSize;
  if (GContext.API.GetScratchBufferSize ==
      (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr *)0x0) {
    NVar2 = NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  else {
    (*__guard_check_icall_fptr)(GContext.API.GetScratchBufferSize);
    NVar2 = (*p_Var1)(param_1,param_2,param_3);
  }
  return NVar2;
}

// NVSDK_NGX_D3D11_Init @ 14ff3c880

NVSDK_NGX_Result __cdecl
NVSDK_NGX_D3D11_Init
          (ulong64 param_1,wchar_t *param_2,ID3D11Device *param_3,
          NVSDK_NGX_FeatureCommonInfo *param_4,NVSDK_NGX_Version param_5)

{
  _func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version *p_Var1;
  _func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
  *p_Var2;
  NVSDK_NGX_Result NVar3;
  NVSDK_NGX_FeatureCommonInfo_Internal local_38 [4];
  NVSDK_NGX_FeatureCommonInfo local_30;
  
  NVar3 = NVSDK_NGX_D3D11_Init_Common(param_2,param_3,param_4,param_5);
  p_Var2 = GContext.API.Init_Ext;
  p_Var1 = GContext.API.Init;
  if (NVar3 == NVSDK_NGX_Result_Success) {
    if (GContext.API.Init_Ext ==
        (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
         *)0x0) {
      if (((param_4 == (NVSDK_NGX_FeatureCommonInfo *)0x0) ||
          ((param_4->PathListInfo).Path == (wchar_t **)0x0)) ||
         ((param_4->PathListInfo).Length == 0)) {
        (*__guard_check_icall_fptr)(GContext.API.Init);
        NVar3 = (*p_Var1)(param_1,param_2,param_3,param_5);
      }
      else {
        NVar3 = NVSDK_NGX_Result_FAIL_OutOfDate;
      }
    }
    else {
      local_38[0].UWP = false;
      local_38[0].LoadGenericFeatures = false;
      if (param_4 == (NVSDK_NGX_FeatureCommonInfo *)0x0) {
        local_30.PathListInfo.Path = (wchar_t **)0x0;
        local_30.PathListInfo._8_8_ = (ulonglong)(uint)local_30.PathListInfo._12_4_ << 0x20;
        local_30.LoggingInfo.LoggingCallback =
             (_func___cdecl_void_char_ptr_NVSDK_NGX_Logging_Level_NVSDK_NGX_Feature *)0x0;
        local_30.LoggingInfo._8_8_ = local_30.LoggingInfo._8_8_ & 0xffffff0000000000;
      }
      else {
        local_30.PathListInfo.Path = (param_4->PathListInfo).Path;
        local_30.PathListInfo._8_8_ = *(undefined8 *)&(param_4->PathListInfo).Length;
        local_30.LoggingInfo.LoggingCallback = (param_4->LoggingInfo).LoggingCallback;
        local_30.LoggingInfo.MinimumLoggingLevel = (param_4->LoggingInfo).MinimumLoggingLevel;
        local_30.LoggingInfo.DisableOtherLoggingSinks =
             (param_4->LoggingInfo).DisableOtherLoggingSinks;
        local_30.LoggingInfo._13_3_ = *(undefined3 *)&(param_4->LoggingInfo).field_0xd;
      }
      local_30.InternalData = local_38;
      (*__guard_check_icall_fptr)(GContext.API.Init_Ext);
      NVar3 = (*p_Var2)(param_1,param_2,param_3,param_5,&local_30);
    }
  }
  return NVar3;
}

// NVSDK_NGX_D3D11_Init_with_ProjectID @ 14ff3c9b0

NVSDK_NGX_Result __cdecl
NVSDK_NGX_D3D11_Init_with_ProjectID
          (char *param_1,NVSDK_NGX_EngineType param_2,char *param_3,wchar_t *param_4,
          ID3D11Device *param_5,NVSDK_NGX_FeatureCommonInfo *param_6,NVSDK_NGX_Version param_7)

{
  _func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
  *p_Var1;
  NVSDK_NGX_Result NVar2;
  NVSDK_NGX_FeatureCommonInfo_Internal local_58 [4];
  NVSDK_NGX_FeatureCommonInfo local_50;
  
  NVar2 = NVSDK_NGX_D3D11_Init_Common(param_4,param_5,param_6,param_7);
  p_Var1 = GContext.API.Init_ProjectID;
  if (NVar2 == NVSDK_NGX_Result_Success) {
    if (GContext.API.Init_ProjectID ==
        (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
         *)0x0) {
      NVar2 = NVSDK_NGX_Result_FAIL_OutOfDate;
    }
    else {
      local_58[0].UWP = false;
      local_58[0].LoadGenericFeatures = false;
      if (param_6 == (NVSDK_NGX_FeatureCommonInfo *)0x0) {
        local_50.PathListInfo.Path = (wchar_t **)0x0;
        local_50.PathListInfo._8_8_ = (ulonglong)(uint)local_50.PathListInfo._12_4_ << 0x20;
        local_50.LoggingInfo.LoggingCallback =
             (_func___cdecl_void_char_ptr_NVSDK_NGX_Logging_Level_NVSDK_NGX_Feature *)0x0;
        local_50.LoggingInfo._8_8_ = local_50.LoggingInfo._8_8_ & 0xffffff0000000000;
      }
      else {
        local_50.PathListInfo.Path = (param_6->PathListInfo).Path;
        local_50.PathListInfo._8_8_ = *(undefined8 *)&(param_6->PathListInfo).Length;
        local_50.LoggingInfo.LoggingCallback = (param_6->LoggingInfo).LoggingCallback;
        local_50.LoggingInfo.MinimumLoggingLevel = (param_6->LoggingInfo).MinimumLoggingLevel;
        local_50.LoggingInfo.DisableOtherLoggingSinks =
             (param_6->LoggingInfo).DisableOtherLoggingSinks;
        local_50.LoggingInfo._13_3_ = *(undefined3 *)&(param_6->LoggingInfo).field_0xd;
      }
      local_50.InternalData = local_58;
      (*__guard_check_icall_fptr)(GContext.API.Init_ProjectID);
      NVar2 = (*p_Var1)(param_1,param_2,param_3,param_4,param_5,param_7,&local_50);
    }
  }
  return NVar2;
}

// NVSDK_NGX_D3D11_ReleaseFeature @ 14ff3cac0

NVSDK_NGX_Result __cdecl NVSDK_NGX_D3D11_ReleaseFeature(NVSDK_NGX_Handle *param_1)

{
  _func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = GContext.API.ReleaseFeature;
  if (GContext.API.ReleaseFeature == (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0) {
    return NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  (*__guard_check_icall_fptr)(GContext.API.ReleaseFeature);
                    /* WARNING: Could not recover jumptable at 0x00014ff3cb02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return NVar1;
}

// NVSDK_NGX_D3D11_Shutdown @ 14ff3cb10

NVSDK_NGX_Result __cdecl NVSDK_NGX_D3D11_Shutdown(void)

{
  NVSDK_NGX_Result NVar1;
  
  NVar1 = NVSDK_NGX_D3D11_Shutdown1((ID3D11Device *)0x0);
  return NVar1;
}

// NVSDK_NGX_D3D11_Shutdown1 @ 14ff3cb20

NVSDK_NGX_Result __cdecl NVSDK_NGX_D3D11_Shutdown1(ID3D11Device *param_1)

{
  _func___cdecl_NVSDK_NGX_Result *p_Var1;
  _func___cdecl_NVSDK_NGX_Result_ID3D11Device_ptr_ulong_ptr *p_Var2;
  NVSDK_NGX_Result NVar3;
  ulong local_res8 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&g_sdkLibMutexD3D11);
  p_Var2 = GContext.API.Shutdown1;
  p_Var1 = GContext.API.Shutdown;
  local_res8[0] = 0;
  if (param_1 == (ID3D11Device *)0x0) {
    if (GContext.API.Shutdown == (_func___cdecl_NVSDK_NGX_Result *)0x0) {
      if (GContext.API.Shutdown1 == (_func___cdecl_NVSDK_NGX_Result_ID3D11Device_ptr_ulong_ptr *)0x0
         ) goto LAB_14ff3cc5d;
      (*__guard_check_icall_fptr)();
      param_1 = (ID3D11Device *)0x0;
      goto LAB_14ff3cba8;
    }
    (*__guard_check_icall_fptr)(GContext.API.Shutdown);
    NVar3 = (*p_Var1)();
  }
  else {
    if (GContext.API.Shutdown1 == (_func___cdecl_NVSDK_NGX_Result_ID3D11Device_ptr_ulong_ptr *)0x0)
    {
LAB_14ff3cc5d:
      NVar3 = NVSDK_NGX_Result_FAIL_NotInitialized;
      goto LAB_14ff3cc62;
    }
    (*__guard_check_icall_fptr)(GContext.API.Shutdown1);
LAB_14ff3cba8:
    NVar3 = (*p_Var2)(param_1,local_res8);
  }
  if ((NVar3 == NVSDK_NGX_Result_Success) && (local_res8[0] == 0)) {
    ngx::util::drsShutdown();
    memset(&local_78,0,0x70);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    GContext.API.Init =
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version *)
         0x0;
    GContext.API.Init_Ext =
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
          *)0x0;
    GContext.API.Init_ProjectID =
         (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_ID3D11Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
          *)0x0;
    GContext.API.Shutdown = (_func___cdecl_NVSDK_NGX_Result *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    GContext.API.Shutdown1 = (_func___cdecl_NVSDK_NGX_Result_ID3D11Device_ptr_ulong_ptr *)0x0;
    GContext.API.GetScratchBufferSize =
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr *)0x0
    ;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    GContext.API.EvaluateFeature =
         (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
          *)0x0;
    GContext.API.ReleaseFeature = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0;
    local_18 = 0;
    uStack_10 = 0;
    GContext.API.GetParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
    GContext.API.CreateFeature =
         (_func___cdecl_NVSDK_NGX_Result_ID3D11DeviceContext_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
          *)0x0;
    GContext.API.GetCapabilityParameters =
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
    GContext.API.DestroyParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr *)0x0;
    GContext.API.GetFeatureRequirements =
         (_func___cdecl_NVSDK_NGX_Result_IDXGIAdapter_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
          *)0x0;
    GContext.API.AllocateParameters =
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
  }
LAB_14ff3cc62:
  LeaveCriticalSection((LPCRITICAL_SECTION)&g_sdkLibMutexD3D11);
  return NVar3;
}

// dtor$0 @ 150325d30

void `NVSDK_NGX_D3D11_Init_Common'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  NGXLock::~NGXLock((NGXLock *)(param_2 + 0xa8));
  return;
}

// `dynamic_atexit_destructor_for_'g_sdkLibMutexD3D11'' @ 150476690

void __cdecl _dynamic_atexit_destructor_for__g_sdkLibMutexD3D11__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150476697. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&g_sdkLibMutexD3D11);
  return;
}

