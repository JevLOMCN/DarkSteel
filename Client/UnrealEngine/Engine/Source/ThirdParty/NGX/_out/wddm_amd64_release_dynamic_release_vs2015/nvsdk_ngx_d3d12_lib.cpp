// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGX
// Functions: 23

// `dynamic_initializer_for_'g_sdkLibMutexD3D12'' @ 14145a7c0

void __cdecl _dynamic_initializer_for__g_sdkLibMutexD3D12__(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&g_sdkLibMutexD3D12);
  atexit(_dynamic_atexit_destructor_for__g_sdkLibMutexD3D12__);
  return;
}

// EvaluateFeature<enum_NVSDK_NGX_Result_(__cdecl*)(ID3D12GraphicsCommandList_*___ptr64,NVSDK_NGX_Handle_const_*___ptr64,NVSDK_NGX_Parameter_const_*___ptr64,void_(__cdecl*)(float,bool_&___ptr64)),ID3D12GraphicsCommandList_*___ptr64> @ 14ff3cc90

NVSDK_NGX_Result __cdecl
NGXProgressCallbackHelper::
EvaluateFeature<enum_NVSDK_NGX_Result_(__cdecl*)(ID3D12GraphicsCommandList_*___ptr64,NVSDK_NGX_Handle_const_*___ptr64,NVSDK_NGX_Parameter_const_*___ptr64,void_(__cdecl*)(float,bool_&___ptr64)),ID3D12GraphicsCommandList_*___ptr64>
          (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
           *param_1,ID3D12GraphicsCommandList *param_2,NVSDK_NGX_Handle *param_3,
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

// NGX_API_D3D12_Lib @ 14ff3cd30

NGX_API_D3D12_Lib * __thiscall NGX_API_D3D12_Lib::NGX_API_D3D12_Lib(NGX_API_D3D12_Lib *this)

{
  this->Init = (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version
                *)0x0;
  this->Init_Ext =
       (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
        *)0x0;
  this->Init_ProjectID =
       (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
        *)0x0;
  this->Shutdown = (_func___cdecl_NVSDK_NGX_Result *)0x0;
  this->Shutdown1 = (_func___cdecl_NVSDK_NGX_Result_ID3D12Device_ptr_ulong_ptr *)0x0;
  this->GetScratchBufferSize =
       (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr *)0x0;
  this->GetParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
  this->CreateFeature =
       (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
        *)0x0;
  this->EvaluateFeature =
       (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
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

// NGX_Context_D3D12_Lib @ 14ff3cd80

NGX_Context_D3D12_Lib * __thiscall
NGX_Context_D3D12_Lib::NGX_Context_D3D12_Lib(NGX_Context_D3D12_Lib *this)

{
  (this->API).Init =
       (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version *)0x0;
  (this->API).Init_Ext =
       (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
        *)0x0;
  (this->API).Init_ProjectID =
       (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
        *)0x0;
  (this->API).Shutdown = (_func___cdecl_NVSDK_NGX_Result *)0x0;
  (this->API).Shutdown1 = (_func___cdecl_NVSDK_NGX_Result_ID3D12Device_ptr_ulong_ptr *)0x0;
  (this->API).GetScratchBufferSize =
       (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr *)0x0;
  (this->API).GetParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
  (this->API).CreateFeature =
       (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
        *)0x0;
  (this->API).EvaluateFeature =
       (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
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

// NVSDK_NGX_D3D12_Init_Common @ 14ff3cdd0

NVSDK_NGX_Result __cdecl
NVSDK_NGX_D3D12_Init_Common
          (wchar_t *param_1,ID3D12Device *param_2,NVSDK_NGX_FeatureCommonInfo *param_3,
          NVSDK_NGX_Version param_4)

{
  code *pcVar1;
  bool bVar2;
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
  local_20 = &g_sdkLibMutexD3D12;
  EnterCriticalSection((LPCRITICAL_SECTION)&g_sdkLibMutexD3D12);
  if ((param_3 == (NVSDK_NGX_FeatureCommonInfo *)0x0) || ((int)param_4 < 0x14)) {
    bVar2 = false;
    p_Var5 = (_func___cdecl_void_char_ptr_NVSDK_NGX_Logging_Level_NVSDK_NGX_Feature *)0x0;
    NVar4 = NVSDK_NGX_LOGGING_LEVEL_OFF;
  }
  else {
    bVar2 = (param_3->LoggingInfo).DisableOtherLoggingSinks;
    if (((bVar2 != false) &&
        ((param_3->LoggingInfo).LoggingCallback ==
         (_func___cdecl_void_char_ptr_NVSDK_NGX_Logging_Level_NVSDK_NGX_Feature *)0x0)) ||
       (NVar4 = (param_3->LoggingInfo).MinimumLoggingLevel, NVSDK_NGX_LOGGING_LEVEL_VERBOSE < NVar4)
       ) {
      NVar3 = NVSDK_NGX_Result_FAIL_InvalidParameter;
      goto LAB_14ff3d209;
    }
    p_Var5 = (param_3->LoggingInfo).LoggingCallback;
  }
  bVar2 = NGXSafeInitializeLog(param_1,L"/nvsdk_ngx.log",NVar4,p_Var5,bVar2);
  if (!bVar2) {
    NVar3 = NVSDK_NGX_Result_FAIL_UnableToWriteToAppDataPath;
    goto LAB_14ff3d209;
  }
  if (((((GContext.API.Init ==
          (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version *)
          0x0) && (GContext.API.Init_Ext ==
                   (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
                    *)0x0)) ||
       ((GContext.API.Shutdown == (_func___cdecl_NVSDK_NGX_Result *)0x0 &&
        (GContext.API.Shutdown1 == (_func___cdecl_NVSDK_NGX_Result_ID3D12Device_ptr_ulong_ptr *)0x0)
        ))) || ((GContext.API.GetParameters ==
                 (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0 &&
                (GContext.API.GetCapabilityParameters ==
                 (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0)))) ||
     ((GContext.API.CreateFeature ==
       (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
        *)0x0 ||
      ((GContext.API.EvaluateFeature ==
        (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
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
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version *)
         0x0;
    GContext.API.Init_Ext =
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
          *)0x0;
    GContext.API.Init_ProjectID =
         (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
          *)0x0;
    GContext.API.Shutdown = (_func___cdecl_NVSDK_NGX_Result *)0x0;
    GContext.API.Shutdown1 = (_func___cdecl_NVSDK_NGX_Result_ID3D12Device_ptr_ulong_ptr *)0x0;
    GContext.API.GetScratchBufferSize =
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr *)0x0
    ;
    GContext.API.GetParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
    GContext.API.CreateFeature =
         (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
          *)0x0;
    GContext.API.EvaluateFeature =
         (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
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
    pcVar1 = *(code **)((longlong)*param_2 + 0x158);
    (*__guard_check_icall_fptr)(pcVar1);
    (*pcVar1)(param_2);
    if (GLib == (HINSTANCE__ *)0x0) {
      GLib = NGXLoadCoreLibrary(local_res18);
      if (GLib != (HINSTANCE__ *)0x0) goto LAB_14ff3cfb3;
    }
    else {
LAB_14ff3cfb3:
      GContext.API.Init =
           (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version *)
           NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D12_Init");
      GContext.API.Init_Ext =
           (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
            *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D12_Init_Ext");
      GContext.API.Init_ProjectID =
           (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
            *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D12_Init_ProjectID");
      GContext.API.Shutdown =
           (_func___cdecl_NVSDK_NGX_Result *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D12_Shutdown");
      GContext.API.Shutdown1 =
           (_func___cdecl_NVSDK_NGX_Result_ID3D12Device_ptr_ulong_ptr *)
           NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D12_Shutdown1");
      GContext.API.GetParameters =
           (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)
           NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D12_GetParameters");
      GContext.API.GetScratchBufferSize =
           (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr *)
           NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D12_GetScratchBufferSize");
      GContext.API.CreateFeature =
           (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
            *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D12_CreateFeature");
      GContext.API.EvaluateFeature =
           (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
            *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D12_EvaluateFeature");
      GContext.API.ReleaseFeature =
           (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)
           NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D12_ReleaseFeature");
      GContext.API.GetFeatureRequirements =
           (_func___cdecl_NVSDK_NGX_Result_IDXGIAdapter_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
            *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D12_GetFeatureRequirements");
      GContext.API.AllocateParameters =
           (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)
           NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D12_AllocateParameters");
      GContext.API.GetCapabilityParameters =
           (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)
           NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D12_GetCapabilityParameters");
      GContext.API.DestroyParameters =
           (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr *)
           NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D12_DestroyParameters");
    }
    if ((((GContext.API.Init ==
           (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version *)
           0x0) && (GContext.API.Init_Ext ==
                    (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
                     *)0x0)) ||
        ((GContext.API.Shutdown == (_func___cdecl_NVSDK_NGX_Result *)0x0 &&
         (GContext.API.Shutdown1 == (_func___cdecl_NVSDK_NGX_Result_ID3D12Device_ptr_ulong_ptr *)0x0
         )))) || ((((GContext.API.GetParameters ==
                     (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0 &&
                    (GContext.API.GetCapabilityParameters ==
                     (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0)) ||
                   (GContext.API.CreateFeature ==
                    (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
                     *)0x0)) ||
                  ((GContext.API.EvaluateFeature ==
                    (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
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
           (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version *)
           0x0;
      GContext.API.Init_Ext =
           (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
            *)0x0;
      GContext.API.Init_ProjectID =
           (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
            *)0x0;
      GContext.API.Shutdown = (_func___cdecl_NVSDK_NGX_Result *)0x0;
      GContext.API.Shutdown1 = (_func___cdecl_NVSDK_NGX_Result_ID3D12Device_ptr_ulong_ptr *)0x0;
      GContext.API.GetScratchBufferSize =
           (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr *)
           0x0;
      GContext.API.GetParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0
      ;
      GContext.API.CreateFeature =
           (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
            *)0x0;
      GContext.API.EvaluateFeature =
           (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
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
      goto LAB_14ff3d209;
    }
  }
  NVar3 = NVSDK_NGX_Result_Success;
LAB_14ff3d209:
  LeaveCriticalSection((LPCRITICAL_SECTION)&g_sdkLibMutexD3D12);
  return NVar3;
}

// NVSDK_NGX_Parameter_Populate_Unspecified_Defaults @ 14ff3d240

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

// isInited @ 14ff3d4d0

bool __thiscall NGX_API_D3D12_Lib::isInited(NGX_API_D3D12_Lib *this)

{
  if ((((this->Init !=
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version *)
         0x0) || (this->Init_Ext !=
                  (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
                   *)0x0)) &&
      ((this->Shutdown != (_func___cdecl_NVSDK_NGX_Result *)0x0 ||
       (this->Shutdown1 != (_func___cdecl_NVSDK_NGX_Result_ID3D12Device_ptr_ulong_ptr *)0x0)))) &&
     ((((this->GetParameters != (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0 ||
        (this->GetCapabilityParameters !=
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0)) &&
       (this->CreateFeature !=
        (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
         *)0x0)) &&
      ((this->EvaluateFeature !=
        (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
         *)0x0 &&
       (this->ReleaseFeature != (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0)))))) {
    return true;
  }
  return false;
}

// NVSDK_NGX_D3D12_AllocateParameters @ 14ff3d520

NVSDK_NGX_Result __cdecl NVSDK_NGX_D3D12_AllocateParameters(NVSDK_NGX_Parameter **param_1)

{
  _func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = GContext.API.AllocateParameters;
  if (GContext.API.Init ==
      (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version *)0x0)
  {
    return NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  if (GContext.API.AllocateParameters ==
      (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0) {
    return NVSDK_NGX_Result_FAIL_OutOfDate;
  }
  (*__guard_check_icall_fptr)(GContext.API.AllocateParameters);
                    /* WARNING: Could not recover jumptable at 0x00014ff3d578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return NVar1;
}

// NVSDK_NGX_D3D12_CreateFeature @ 14ff3d590

NVSDK_NGX_Result __cdecl
NVSDK_NGX_D3D12_CreateFeature
          (ID3D12GraphicsCommandList *param_1,NVSDK_NGX_Feature param_2,NVSDK_NGX_Parameter *param_3
          ,NVSDK_NGX_Handle **param_4)

{
  _func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
  *p_Var1;
  NVSDK_NGX_Result NVar2;
  
  if (GContext.API.CreateFeature ==
      (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
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

// NVSDK_NGX_D3D12_DestroyParameters @ 14ff3d610

NVSDK_NGX_Result __cdecl NVSDK_NGX_D3D12_DestroyParameters(NVSDK_NGX_Parameter *param_1)

{
  _func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = GContext.API.DestroyParameters;
  if (GContext.API.Init ==
      (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version *)0x0)
  {
    return NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  if (GContext.API.DestroyParameters ==
      (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr *)0x0) {
    return NVSDK_NGX_Result_FAIL_OutOfDate;
  }
  (*__guard_check_icall_fptr)(GContext.API.DestroyParameters);
                    /* WARNING: Could not recover jumptable at 0x00014ff3d668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return NVar1;
}

// NVSDK_NGX_D3D12_EvaluateFeature @ 14ff3d680

NVSDK_NGX_Result __cdecl
NVSDK_NGX_D3D12_EvaluateFeature
          (ID3D12GraphicsCommandList *param_1,NVSDK_NGX_Handle *param_2,NVSDK_NGX_Parameter *param_3
          ,_func___cdecl_void_float_bool_ptr *param_4)

{
  _func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
  *p_Var1;
  NVSDK_NGX_Result NVar2;
  
  p_Var1 = GContext.API.EvaluateFeature;
  if (GContext.API.EvaluateFeature ==
      (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
       *)0x0) {
    NVar2 = NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  else {
    (*__guard_check_icall_fptr)(GContext.API.EvaluateFeature);
    NVar2 = (*p_Var1)(param_1,param_2,param_3,param_4);
  }
  return NVar2;
}

// NVSDK_NGX_D3D12_EvaluateFeature_C @ 14ff3d700

NVSDK_NGX_Result __cdecl
NVSDK_NGX_D3D12_EvaluateFeature_C
          (ID3D12GraphicsCommandList *param_1,NVSDK_NGX_Handle *param_2,NVSDK_NGX_Parameter *param_3
          ,_func___cdecl_void_float_bool_ptr *param_4)

{
  NVSDK_NGX_Result NVar1;
  
  if (GContext.API.EvaluateFeature ==
      (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
       *)0x0) {
    return NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  NVar1 = NGXProgressCallbackHelper::
          EvaluateFeature<enum_NVSDK_NGX_Result_(__cdecl*)(ID3D12GraphicsCommandList_*___ptr64,NVSDK_NGX_Handle_const_*___ptr64,NVSDK_NGX_Parameter_const_*___ptr64,void_(__cdecl*)(float,bool_&___ptr64)),ID3D12GraphicsCommandList_*___ptr64>
                    (GContext.API.EvaluateFeature,param_1,param_2,param_3,param_4);
  return NVar1;
}

// NVSDK_NGX_D3D12_GetCapabilityParameters @ 14ff3d740

NVSDK_NGX_Result __cdecl NVSDK_NGX_D3D12_GetCapabilityParameters(NVSDK_NGX_Parameter **param_1)

{
  _func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = GContext.API.GetCapabilityParameters;
  if ((((GContext.API.Init !=
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version *)
         0x0) || (GContext.API.Init_Ext !=
                  (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
                   *)0x0)) &&
      ((GContext.API.Shutdown != (_func___cdecl_NVSDK_NGX_Result *)0x0 ||
       (GContext.API.Shutdown1 != (_func___cdecl_NVSDK_NGX_Result_ID3D12Device_ptr_ulong_ptr *)0x0))
      )) && ((((GContext.API.GetParameters !=
                (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0 ||
               (GContext.API.GetCapabilityParameters !=
                (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0)) &&
              (GContext.API.CreateFeature !=
               (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
                *)0x0)) &&
             ((GContext.API.EvaluateFeature !=
               (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
                *)0x0 &&
              (GContext.API.ReleaseFeature !=
               (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0)))))) {
    if (GContext.API.GetCapabilityParameters ==
        (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0) {
      return NVSDK_NGX_Result_FAIL_OutOfDate;
    }
    (*__guard_check_icall_fptr)(GContext.API.GetCapabilityParameters);
                    /* WARNING: Could not recover jumptable at 0x00014ff3d7d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
    return NVar1;
  }
  return NVSDK_NGX_Result_FAIL_NotInitialized;
}

// NVSDK_NGX_D3D12_GetFeatureRequirements @ 14ff3d7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

NVSDK_NGX_Result __cdecl
NVSDK_NGX_D3D12_GetFeatureRequirements
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
  if (g_forceDLSSFallback_Dx12) {
    NVar3 = NVSDK_NGX_Result_FAIL_NotImplemented;
  }
  else {
    p_Var4 = GContext.API.GetFeatureRequirements;
    if (GLib == (HINSTANCE__ *)0x0) {
      pcVar1 = *(code **)((longlong)*param_1 + 0x40);
      (*__guard_check_icall_fptr)(pcVar1);
      iVar2 = (*pcVar1)(param_1,local_158);
      if ((iVar2 != 0) || (GLib = NGXLoadCoreLibrary(local_30), GLib == (HINSTANCE__ *)0x0)) {
        return NVSDK_NGX_Result_FAIL_PlatformError;
      }
      p_Var4 = (_func___cdecl_NVSDK_NGX_Result_IDXGIAdapter_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
                *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_D3D12_GetFeatureRequirements");
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
  }
  return NVar3;
}

// NVSDK_NGX_D3D12_GetParameters @ 14ff3d8f0

NVSDK_NGX_Result __cdecl NVSDK_NGX_D3D12_GetParameters(NVSDK_NGX_Parameter **param_1)

{
  _func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = GContext.API.GetParameters;
  if (GContext.API.GetParameters ==
      (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0) {
    return NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  (*__guard_check_icall_fptr)(GContext.API.GetParameters);
                    /* WARNING: Could not recover jumptable at 0x00014ff3d932. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return NVar1;
}

// NVSDK_NGX_D3D12_GetScratchBufferSize @ 14ff3d940

NVSDK_NGX_Result __cdecl
NVSDK_NGX_D3D12_GetScratchBufferSize
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

// NVSDK_NGX_D3D12_Init @ 14ff3d9a0

NVSDK_NGX_Result __cdecl
NVSDK_NGX_D3D12_Init
          (ulong64 param_1,wchar_t *param_2,ID3D12Device *param_3,
          NVSDK_NGX_FeatureCommonInfo *param_4,NVSDK_NGX_Version param_5)

{
  _func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version *p_Var1;
  _func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
  *p_Var2;
  NVSDK_NGX_Result NVar3;
  NVSDK_NGX_FeatureCommonInfo_Internal local_38 [4];
  NVSDK_NGX_FeatureCommonInfo local_30;
  
  NVar3 = NVSDK_NGX_D3D12_Init_Common(param_2,param_3,param_4,param_5);
  p_Var2 = GContext.API.Init_Ext;
  p_Var1 = GContext.API.Init;
  if (NVar3 == NVSDK_NGX_Result_Success) {
    if (GContext.API.Init_Ext ==
        (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
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

// NVSDK_NGX_D3D12_Init_with_ProjectID @ 14ff3dad0

NVSDK_NGX_Result __cdecl
NVSDK_NGX_D3D12_Init_with_ProjectID
          (char *param_1,NVSDK_NGX_EngineType param_2,char *param_3,wchar_t *param_4,
          ID3D12Device *param_5,NVSDK_NGX_FeatureCommonInfo *param_6,NVSDK_NGX_Version param_7)

{
  _func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
  *p_Var1;
  NVSDK_NGX_Result NVar2;
  NVSDK_NGX_FeatureCommonInfo_Internal local_58 [4];
  NVSDK_NGX_FeatureCommonInfo local_50;
  
  NVar2 = NVSDK_NGX_D3D12_Init_Common(param_4,param_5,param_6,param_7);
  p_Var1 = GContext.API.Init_ProjectID;
  if (NVar2 == NVSDK_NGX_Result_Success) {
    if (GContext.API.Init_ProjectID ==
        (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
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

// NVSDK_NGX_D3D12_ReleaseFeature @ 14ff3dbe0

NVSDK_NGX_Result __cdecl NVSDK_NGX_D3D12_ReleaseFeature(NVSDK_NGX_Handle *param_1)

{
  _func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = GContext.API.ReleaseFeature;
  if (GContext.API.ReleaseFeature == (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0) {
    return NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  (*__guard_check_icall_fptr)(GContext.API.ReleaseFeature);
                    /* WARNING: Could not recover jumptable at 0x00014ff3dc22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return NVar1;
}

// NVSDK_NGX_D3D12_Shutdown @ 14ff3dc30

NVSDK_NGX_Result __cdecl NVSDK_NGX_D3D12_Shutdown(void)

{
  NVSDK_NGX_Result NVar1;
  
  NVar1 = NVSDK_NGX_D3D12_Shutdown1((ID3D12Device *)0x0);
  return NVar1;
}

// NVSDK_NGX_D3D12_Shutdown1 @ 14ff3dc40

NVSDK_NGX_Result __cdecl NVSDK_NGX_D3D12_Shutdown1(ID3D12Device *param_1)

{
  _func___cdecl_NVSDK_NGX_Result *p_Var1;
  _func___cdecl_NVSDK_NGX_Result_ID3D12Device_ptr_ulong_ptr *p_Var2;
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
  
  EnterCriticalSection((LPCRITICAL_SECTION)&g_sdkLibMutexD3D12);
  p_Var2 = GContext.API.Shutdown1;
  p_Var1 = GContext.API.Shutdown;
  local_res8[0] = 0;
  if (param_1 == (ID3D12Device *)0x0) {
    if (GContext.API.Shutdown == (_func___cdecl_NVSDK_NGX_Result *)0x0) {
      if (GContext.API.Shutdown1 == (_func___cdecl_NVSDK_NGX_Result_ID3D12Device_ptr_ulong_ptr *)0x0
         ) goto LAB_14ff3dd7d;
      (*__guard_check_icall_fptr)();
      param_1 = (ID3D12Device *)0x0;
      goto LAB_14ff3dcc8;
    }
    (*__guard_check_icall_fptr)(GContext.API.Shutdown);
    NVar3 = (*p_Var1)();
  }
  else {
    if (GContext.API.Shutdown1 == (_func___cdecl_NVSDK_NGX_Result_ID3D12Device_ptr_ulong_ptr *)0x0)
    {
LAB_14ff3dd7d:
      NVar3 = NVSDK_NGX_Result_FAIL_NotInitialized;
      goto LAB_14ff3dd82;
    }
    (*__guard_check_icall_fptr)(GContext.API.Shutdown1);
LAB_14ff3dcc8:
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
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version *)
         0x0;
    GContext.API.Init_Ext =
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
          *)0x0;
    GContext.API.Init_ProjectID =
         (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_ID3D12Device_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
          *)0x0;
    GContext.API.Shutdown = (_func___cdecl_NVSDK_NGX_Result *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    GContext.API.Shutdown1 = (_func___cdecl_NVSDK_NGX_Result_ID3D12Device_ptr_ulong_ptr *)0x0;
    GContext.API.GetScratchBufferSize =
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr *)0x0
    ;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    GContext.API.EvaluateFeature =
         (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
          *)0x0;
    GContext.API.ReleaseFeature = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0;
    local_18 = 0;
    uStack_10 = 0;
    GContext.API.GetParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
    GContext.API.CreateFeature =
         (_func___cdecl_NVSDK_NGX_Result_ID3D12GraphicsCommandList_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
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
LAB_14ff3dd82:
  LeaveCriticalSection((LPCRITICAL_SECTION)&g_sdkLibMutexD3D12);
  return NVar3;
}

// dtor$0 @ 150325d50

void `NVSDK_NGX_D3D12_Init_Common'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  NGXLock::~NGXLock((NGXLock *)(param_2 + 0xa8));
  return;
}

// `dynamic_atexit_destructor_for_'g_sdkLibMutexD3D12'' @ 1504766b0

void __cdecl _dynamic_atexit_destructor_for__g_sdkLibMutexD3D12__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504766b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&g_sdkLibMutexD3D12);
  return;
}

