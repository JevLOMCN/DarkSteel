// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGX
// Functions: 31

// `dynamic_initializer_for_'g_sdkLibMutexVk'' @ 14145a7f0

void __cdecl _dynamic_initializer_for__g_sdkLibMutexVk__(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&g_sdkLibMutexVk);
  atexit(_dynamic_atexit_destructor_for__g_sdkLibMutexVk__);
  return;
}

// EvaluateFeature<enum_NVSDK_NGX_Result_(__cdecl*)(VkCommandBuffer_T_*___ptr64,NVSDK_NGX_Handle_const_*___ptr64,NVSDK_NGX_Parameter_const_*___ptr64,void_(__cdecl*)(float,bool_&___ptr64)),VkCommandBuffer_T_*___ptr64> @ 14ff3ddb0

NVSDK_NGX_Result __cdecl
NGXProgressCallbackHelper::
EvaluateFeature<enum_NVSDK_NGX_Result_(__cdecl*)(VkCommandBuffer_T_*___ptr64,NVSDK_NGX_Handle_const_*___ptr64,NVSDK_NGX_Parameter_const_*___ptr64,void_(__cdecl*)(float,bool_&___ptr64)),VkCommandBuffer_T_*___ptr64>
          (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
           *param_1,VkCommandBuffer_T *param_2,NVSDK_NGX_Handle *param_3,
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

// NGX_API_VULKAN_Lib @ 14ff3de50

NGX_API_VULKAN_Lib * __thiscall NGX_API_VULKAN_Lib::NGX_API_VULKAN_Lib(NGX_API_VULKAN_Lib *this)

{
  this->Init = (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version
                *)0x0;
  this->Init_Ext =
       (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
        *)0x0;
  this->Init_Ext2 =
       (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr__func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr_ptr__func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
        *)0x0;
  this->Init_ProjectID =
       (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
        *)0x0;
  this->Init_ProjectID_Ext =
       (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr__func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr_ptr__func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
        *)0x0;
  this->Shutdown = (_func___cdecl_NVSDK_NGX_Result *)0x0;
  this->Shutdown1 = (_func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_ulong_ptr *)0x0;
  this->GetScratchBufferSize =
       (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr *)0x0;
  this->GetParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
  this->CreateFeature =
       (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
        *)0x0;
  this->CreateFeature1 =
       (_func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_VkCommandBuffer_T_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
        *)0x0;
  this->EvaluateFeature =
       (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
        *)0x0;
  this->ReleaseFeature = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0;
  this->GetFeatureRequirements =
       (_func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
        *)0x0;
  this->GetFeatureInstanceExtensionRequirements =
       (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
        *)0x0;
  this->GetFeatureDeviceExtensionRequirements =
       (_func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
        *)0x0;
  this->AllocateParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
  this->GetCapabilityParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
  this->DestroyParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr *)0x0;
  return this;
}

// NGX_Context_VULKAN_Lib @ 14ff3deb0

NGX_Context_VULKAN_Lib * __thiscall
NGX_Context_VULKAN_Lib::NGX_Context_VULKAN_Lib(NGX_Context_VULKAN_Lib *this)

{
  (this->API).Init =
       (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version
        *)0x0;
  (this->API).Init_Ext =
       (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
        *)0x0;
  (this->API).Init_Ext2 =
       (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr__func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr_ptr__func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
        *)0x0;
  (this->API).Init_ProjectID =
       (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
        *)0x0;
  (this->API).Init_ProjectID_Ext =
       (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr__func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr_ptr__func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
        *)0x0;
  (this->API).Shutdown = (_func___cdecl_NVSDK_NGX_Result *)0x0;
  (this->API).Shutdown1 = (_func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_ulong_ptr *)0x0;
  (this->API).GetScratchBufferSize =
       (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr *)0x0;
  (this->API).GetParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
  (this->API).CreateFeature =
       (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
        *)0x0;
  (this->API).CreateFeature1 =
       (_func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_VkCommandBuffer_T_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
        *)0x0;
  (this->API).EvaluateFeature =
       (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
        *)0x0;
  (this->API).ReleaseFeature = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0;
  (this->API).GetFeatureRequirements =
       (_func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
        *)0x0;
  (this->API).GetFeatureInstanceExtensionRequirements =
       (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
        *)0x0;
  (this->API).GetFeatureDeviceExtensionRequirements =
       (_func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
        *)0x0;
  (this->API).AllocateParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0
  ;
  (this->API).GetCapabilityParameters =
       (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
  (this->API).DestroyParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr *)0x0;
  this->hVulkanLib = (HINSTANCE__ *)0x0;
  this->vkGetInstanceProcAddr =
       (_func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr *)0x0;
  return this;
}

// GetLUIDFromVkPhysicalDevice @ 14ff3df20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Exceeded maximum restarts with more pending */

bool __cdecl
GetLUIDFromVkPhysicalDevice(VkInstance_T *param_1,VkPhysicalDevice_T *param_2,_LUID *param_3)

{
  _func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr *p_Var1;
  bool bVar2;
  _func___cdecl_void *p_Var3;
  undefined1 auStack_3d8 [32];
  undefined4 local_3b8 [2];
  undefined4 *local_3b0;
  undefined1 local_3a8 [832];
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  _LUID local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  p_Var1 = GContext.vkGetInstanceProcAddr;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_3d8;
  (*__guard_check_icall_fptr)(GContext.vkGetInstanceProcAddr);
  p_Var3 = (*p_Var1)(param_1,"vkGetPhysicalDeviceProperties2");
  if (p_Var3 == (_func___cdecl_void *)0x0) {
    ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_vulkan_lib.cpp"
                   ,0x77,"GetLUIDFromVkPhysicalDevice",
                   "error: vkGetPhysicalDeviceProperties2 entrypoint does not exist for this Vulkan driver"
                  );
    bVar2 = false;
  }
  else {
    local_68[0] = 0x3b9bdf5c;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38.LowPart = 0;
    local_38.HighPart = 0;
    local_30 = 0;
    local_3b0 = local_68;
    local_3b8[0] = 0x3b9bb079;
    memset(local_3a8,0,0x338);
    (*__guard_check_icall_fptr)(p_Var3);
    (*p_Var3)(param_2,local_3b8);
    if (local_30._4_4_ == 0) {
      ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_vulkan_lib.cpp"
                     ,0x82,"GetLUIDFromVkPhysicalDevice",
                     "error: unable to fetch LUID for Vulkan device");
      bVar2 = false;
    }
    else {
      *param_3 = local_38;
      bVar2 = true;
    }
  }
  return bVar2;
}

// LoadGLibSimple @ 14ff3e080

NVSDK_NGX_Result __cdecl LoadGLibSimple(VkInstance_T *param_1,VkPhysicalDevice_T *param_2)

{
  bool bVar1;
  HINSTANCE__ *pHVar2;
  _LUID local_res18 [2];
  
  if (GLib != (HINSTANCE__ *)0x0) {
    return NVSDK_NGX_Result_Success;
  }
  pHVar2 = NGXLoadLibrary(L"vulkan-1.dll",2);
  if (pHVar2 != (HINSTANCE__ *)0x0) {
    GContext.vkGetInstanceProcAddr =
         (_func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr *)
         NGXGetLibrarySymbol(pHVar2,"vkGetInstanceProcAddr");
    bVar1 = GetLUIDFromVkPhysicalDevice(param_1,param_2,local_res18);
    if ((bVar1) && (GLib = NGXLoadCoreLibrary(local_res18[0]), GLib != (HINSTANCE__ *)0x0)) {
      GContext.API.GetFeatureRequirements =
           (_func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
            *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_VULKAN_GetFeatureRequirements");
      GContext.API.GetFeatureInstanceExtensionRequirements =
           (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
            *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_VULKAN_GetFeatureInstanceExtensionRequirements");
      GContext.API.GetFeatureDeviceExtensionRequirements =
           (_func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
            *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_VULKAN_GetFeatureDeviceExtensionRequirements");
      if ((GContext.API.GetFeatureRequirements !=
           (_func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
            *)0x0) &&
         ((GContext.API.GetFeatureInstanceExtensionRequirements !=
           (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
            *)0x0 &&
          (GContext.API.GetFeatureDeviceExtensionRequirements !=
           (_func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
            *)0x0)))) {
        return NVSDK_NGX_Result_Success;
      }
      return NVSDK_NGX_Result_FAIL_NotImplemented;
    }
  }
  return NVSDK_NGX_Result_FAIL_PlatformError;
}

// NVSDK_NGX_Parameter_Populate_Unspecified_Defaults @ 14ff3e190

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

// NVSDK_NGX_VULKAN_Init_Common @ 14ff3e420

NVSDK_NGX_Result __cdecl
NVSDK_NGX_VULKAN_Init_Common
          (wchar_t *param_1,VkInstance_T *param_2,VkPhysicalDevice_T *param_3,VkDevice_T *param_4,
          _func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr *param_5,
          _func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr *param_6,
          NVSDK_NGX_FeatureCommonInfo *param_7,NVSDK_NGX_Version param_8)

{
  bool bVar1;
  NVSDK_NGX_Result NVar2;
  NVSDK_NGX_Logging_Level NVar3;
  _func___cdecl_void_char_ptr_NVSDK_NGX_Logging_Level_NVSDK_NGX_Feature *p_Var4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&g_sdkLibMutexVk);
  if ((param_7 == (NVSDK_NGX_FeatureCommonInfo *)0x0) || ((int)param_8 < 0x14)) {
    bVar1 = false;
    p_Var4 = (_func___cdecl_void_char_ptr_NVSDK_NGX_Logging_Level_NVSDK_NGX_Feature *)0x0;
    NVar3 = NVSDK_NGX_LOGGING_LEVEL_OFF;
  }
  else {
    bVar1 = (param_7->LoggingInfo).DisableOtherLoggingSinks;
    if (((bVar1 != false) &&
        ((param_7->LoggingInfo).LoggingCallback ==
         (_func___cdecl_void_char_ptr_NVSDK_NGX_Logging_Level_NVSDK_NGX_Feature *)0x0)) ||
       (NVar3 = (param_7->LoggingInfo).MinimumLoggingLevel, NVSDK_NGX_LOGGING_LEVEL_VERBOSE < NVar3)
       ) {
      NVar2 = NVSDK_NGX_Result_FAIL_InvalidParameter;
      goto LAB_14ff3e9c0;
    }
    p_Var4 = (param_7->LoggingInfo).LoggingCallback;
  }
  bVar1 = NGXSafeInitializeLog(param_1,L"/nvsdk_ngx.log",NVar3,p_Var4,bVar1);
  if (!bVar1) {
    NVar2 = NVSDK_NGX_Result_FAIL_UnableToWriteToAppDataPath;
    goto LAB_14ff3e9c0;
  }
  if ((((GContext.API.Init ==
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version
          *)0x0) || (GContext.API.Shutdown == (_func___cdecl_NVSDK_NGX_Result *)0x0)) ||
      ((GContext.API.GetParameters ==
        (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0 ||
       ((GContext.API.GetScratchBufferSize ==
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr *)0x0
        || (GContext.API.CreateFeature ==
            (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
             *)0x0)))))) ||
     ((GContext.API.EvaluateFeature ==
       (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
        *)0x0 ||
      (GContext.API.ReleaseFeature == (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0))))
  {
    GContext.API.Init =
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version
          *)0x0;
    GContext.API.Init_Ext =
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
          *)0x0;
    GContext.API.Init_Ext2 =
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr__func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr_ptr__func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
          *)0x0;
    GContext.API.Init_ProjectID =
         (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
          *)0x0;
    GContext.API.Init_ProjectID_Ext =
         (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr__func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr_ptr__func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
          *)0x0;
    GContext.API.Shutdown = (_func___cdecl_NVSDK_NGX_Result *)0x0;
    GContext.API.Shutdown1 = (_func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_ulong_ptr *)0x0;
    GContext.API.GetScratchBufferSize =
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr *)0x0
    ;
    GContext.API.GetParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
    GContext.API.CreateFeature =
         (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
          *)0x0;
    GContext.API.CreateFeature1 =
         (_func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_VkCommandBuffer_T_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
          *)0x0;
    GContext.API.EvaluateFeature =
         (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
          *)0x0;
    GContext.API.ReleaseFeature = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0;
    GContext.API.GetFeatureRequirements =
         (_func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
          *)0x0;
    GContext.API.GetFeatureInstanceExtensionRequirements =
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
          *)0x0;
    GContext.API.GetFeatureDeviceExtensionRequirements =
         (_func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
          *)0x0;
    GContext.API.AllocateParameters =
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
    GContext.API.GetCapabilityParameters =
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
    GContext.API.DestroyParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr *)0x0;
    GContext.hVulkanLib = (HINSTANCE__ *)0x0;
    GContext.vkGetInstanceProcAddr = param_5;
    if (param_5 == (_func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr *)0x0) {
      GContext.hVulkanLib = NGXLoadLibrary(L"vulkan-1.dll",2);
      if (GContext.hVulkanLib == (HINSTANCE__ *)0x0) {
        ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_vulkan_lib.cpp"
                       ,0xd5,"NVSDK_NGX_VULKAN_Init_Common","error: %ls could not be loaded");
        NVar2 = NVSDK_NGX_Result_FAIL_PlatformError;
        goto LAB_14ff3e9c0;
      }
      GContext.vkGetInstanceProcAddr =
           (_func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr *)
           NGXGetLibrarySymbol(GContext.hVulkanLib,"vkGetInstanceProcAddr");
      if (GContext.vkGetInstanceProcAddr !=
          (_func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr *)0x0) goto LAB_14ff3e691;
      ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_vulkan_lib.cpp"
                     ,0xdc,"NVSDK_NGX_VULKAN_Init_Common",
                     "error: vkGetInstanceProcAddr not a valid entrypoint");
    }
    else {
LAB_14ff3e691:
      bVar1 = GetLUIDFromVkPhysicalDevice(param_2,param_3,(_LUID *)&param_7);
      if (bVar1) {
        if (GLib == (HINSTANCE__ *)0x0) {
          GLib = NGXLoadCoreLibrary((_LUID)param_7);
          if (GLib != (HINSTANCE__ *)0x0) goto LAB_14ff3e6c9;
        }
        else {
LAB_14ff3e6c9:
          GContext.API.Init =
               (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version
                *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_VULKAN_Init");
          GContext.API.Init_Ext =
               (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
                *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_VULKAN_Init_Ext");
          GContext.API.Init_Ext2 =
               (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr__func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr_ptr__func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
                *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_VULKAN_Init_Ext2");
          GContext.API.Init_ProjectID =
               (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
                *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_VULKAN_Init_ProjectID");
          GContext.API.Init_ProjectID_Ext =
               (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr__func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr_ptr__func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
                *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_VULKAN_Init_ProjectID_Ext");
          GContext.API.Shutdown =
               (_func___cdecl_NVSDK_NGX_Result *)
               NGXGetLibrarySymbol(GLib,"NVSDK_NGX_VULKAN_Shutdown");
          GContext.API.Shutdown1 =
               (_func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_ulong_ptr *)
               NGXGetLibrarySymbol(GLib,"NVSDK_NGX_VULKAN_Shutdown1");
          GContext.API.GetParameters =
               (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)
               NGXGetLibrarySymbol(GLib,"NVSDK_NGX_VULKAN_GetParameters");
          GContext.API.GetScratchBufferSize =
               (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr
                *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_VULKAN_GetScratchBufferSize");
          GContext.API.CreateFeature =
               (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
                *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_VULKAN_CreateFeature");
          GContext.API.CreateFeature1 =
               (_func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_VkCommandBuffer_T_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
                *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_VULKAN_CreateFeature1");
          GContext.API.EvaluateFeature =
               (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
                *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_VULKAN_EvaluateFeature");
          GContext.API.ReleaseFeature =
               (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)
               NGXGetLibrarySymbol(GLib,"NVSDK_NGX_VULKAN_ReleaseFeature");
          GContext.API.GetFeatureRequirements =
               (_func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
                *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_VULKAN_GetFeatureRequirements");
          GContext.API.GetFeatureInstanceExtensionRequirements =
               (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
                *)NGXGetLibrarySymbol(GLib,
                                      "NVSDK_NGX_VULKAN_GetFeatureInstanceExtensionRequirements");
          GContext.API.GetFeatureDeviceExtensionRequirements =
               (_func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
                *)NGXGetLibrarySymbol(GLib,"NVSDK_NGX_VULKAN_GetFeatureDeviceExtensionRequirements")
          ;
          GContext.API.AllocateParameters =
               (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)
               NGXGetLibrarySymbol(GLib,"NVSDK_NGX_VULKAN_AllocateParameters");
          GContext.API.GetCapabilityParameters =
               (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)
               NGXGetLibrarySymbol(GLib,"NVSDK_NGX_VULKAN_GetCapabilityParameters");
          GContext.API.DestroyParameters =
               (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr *)
               NGXGetLibrarySymbol(GLib,"NVSDK_NGX_VULKAN_DestroyParameters");
        }
        if (((((GContext.API.Init ==
                (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version
                 *)0x0) || (GContext.API.Shutdown == (_func___cdecl_NVSDK_NGX_Result *)0x0)) ||
             (GContext.API.GetParameters ==
              (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0)) ||
            ((GContext.API.GetScratchBufferSize ==
              (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr
               *)0x0 ||
             (GContext.API.CreateFeature ==
              (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
               *)0x0)))) ||
           ((GContext.API.EvaluateFeature ==
             (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
              *)0x0 ||
            (GContext.API.ReleaseFeature ==
             (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0)))) {
          GContext.API.Init =
               (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version
                *)0x0;
          GContext.API.Init_Ext =
               (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
                *)0x0;
          GContext.API.Init_Ext2 =
               (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr__func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr_ptr__func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
                *)0x0;
          GContext.API.Init_ProjectID =
               (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
                *)0x0;
          GContext.API.Init_ProjectID_Ext =
               (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr__func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr_ptr__func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
                *)0x0;
          GContext.API.Shutdown = (_func___cdecl_NVSDK_NGX_Result *)0x0;
          GContext.API.Shutdown1 = (_func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_ulong_ptr *)0x0;
          GContext.API.GetScratchBufferSize =
               (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr
                *)0x0;
          GContext.API.GetParameters =
               (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
          GContext.API.CreateFeature =
               (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
                *)0x0;
          GContext.API.CreateFeature1 =
               (_func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_VkCommandBuffer_T_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
                *)0x0;
          GContext.API.EvaluateFeature =
               (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
                *)0x0;
          GContext.API.ReleaseFeature = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0;
          GContext.API.GetFeatureRequirements =
               (_func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
                *)0x0;
          GContext.API.GetFeatureInstanceExtensionRequirements =
               (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
                *)0x0;
          GContext.API.GetFeatureDeviceExtensionRequirements =
               (_func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
                *)0x0;
          GContext.API.AllocateParameters =
               (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
          GContext.API.GetCapabilityParameters =
               (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
          GContext.API.DestroyParameters =
               (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr *)0x0;
          GContext.hVulkanLib = (HINSTANCE__ *)0x0;
          GContext.vkGetInstanceProcAddr =
               (_func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr *)0x0;
          NVar2 = NVSDK_NGX_Result_FAIL_FeatureNotSupported;
          goto LAB_14ff3e9c0;
        }
        goto LAB_14ff3e514;
      }
    }
    NVar2 = NVSDK_NGX_Result_FAIL_PlatformError;
  }
  else {
LAB_14ff3e514:
    NVar2 = NVSDK_NGX_Result_Success;
  }
LAB_14ff3e9c0:
  LeaveCriticalSection((LPCRITICAL_SECTION)&g_sdkLibMutexVk);
  return NVar2;
}

// NVSDK_NGX_VULKAN_ShutdownCommon @ 14ff3ea00

NVSDK_NGX_Result __cdecl NVSDK_NGX_VULKAN_ShutdownCommon(VkDevice_T *param_1)

{
  _func___cdecl_NVSDK_NGX_Result *p_Var1;
  _func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_ulong_ptr *p_Var2;
  NVSDK_NGX_Result NVar3;
  ulong local_res8 [2];
  NGXMutex *local_res10;
  
  local_res10 = &g_sdkLibMutexVk;
  EnterCriticalSection((LPCRITICAL_SECTION)&g_sdkLibMutexVk);
  p_Var2 = GContext.API.Shutdown1;
  p_Var1 = GContext.API.Shutdown;
  local_res8[0] = 0;
  if (param_1 == (VkDevice_T *)0x0) {
    if (GContext.API.Shutdown == (_func___cdecl_NVSDK_NGX_Result *)0x0) {
      if (GContext.API.Shutdown1 == (_func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_ulong_ptr *)0x0)
      goto LAB_14ff3eb8f;
      (*__guard_check_icall_fptr)();
      param_1 = (VkDevice_T *)0x0;
      goto LAB_14ff3ea96;
    }
    (*__guard_check_icall_fptr)(GContext.API.Shutdown);
    NVar3 = (*p_Var1)();
  }
  else {
    if (GContext.API.Shutdown1 == (_func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_ulong_ptr *)0x0) {
LAB_14ff3eb8f:
      NVar3 = NVSDK_NGX_Result_FAIL_NotInitialized;
      goto LAB_14ff3eb94;
    }
    (*__guard_check_icall_fptr)(GContext.API.Shutdown1);
LAB_14ff3ea96:
    NVar3 = (*p_Var2)(param_1,local_res8);
  }
  if ((NVar3 == NVSDK_NGX_Result_Success) && (local_res8[0] == 0)) {
    ngx::util::drsShutdown();
    if (GContext.hVulkanLib != (HINSTANCE__ *)0x0) {
      NGXCloseLibrary(GContext.hVulkanLib);
    }
    GContext.API.Init =
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version
          *)0x0;
    GContext.API.Init_Ext =
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
          *)0x0;
    GContext.API.Init_Ext2 =
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr__func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr_ptr__func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
          *)0x0;
    GContext.API.Init_ProjectID =
         (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
          *)0x0;
    GContext.API.Init_ProjectID_Ext =
         (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr__func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr_ptr__func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
          *)0x0;
    GContext.API.Shutdown = (_func___cdecl_NVSDK_NGX_Result *)0x0;
    GContext.API.Shutdown1 = (_func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_ulong_ptr *)0x0;
    GContext.API.GetScratchBufferSize =
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr *)0x0
    ;
    GContext.API.GetParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
    GContext.API.CreateFeature =
         (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
          *)0x0;
    GContext.API.CreateFeature1 =
         (_func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_VkCommandBuffer_T_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
          *)0x0;
    GContext.API.EvaluateFeature =
         (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
          *)0x0;
    GContext.API.ReleaseFeature = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0;
    GContext.API.GetFeatureRequirements =
         (_func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
          *)0x0;
    GContext.API.GetFeatureInstanceExtensionRequirements =
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
          *)0x0;
    GContext.API.GetFeatureDeviceExtensionRequirements =
         (_func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
          *)0x0;
    GContext.API.AllocateParameters =
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
    GContext.API.GetCapabilityParameters =
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
    GContext.API.DestroyParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr *)0x0;
    GContext.hVulkanLib = (HINSTANCE__ *)0x0;
    GContext.vkGetInstanceProcAddr =
         (_func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr *)0x0;
  }
LAB_14ff3eb94:
  LeaveCriticalSection((LPCRITICAL_SECTION)&g_sdkLibMutexVk);
  return NVar3;
}

// isInited @ 14ff3ebc0

bool __thiscall NGX_API_VULKAN_Lib::isInited(NGX_API_VULKAN_Lib *this)

{
  if ((((this->Init !=
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version
          *)0x0) && (this->Shutdown != (_func___cdecl_NVSDK_NGX_Result *)0x0)) &&
      (this->GetParameters != (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0)) &&
     (((this->GetScratchBufferSize !=
        (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr *)0x0
       && (this->CreateFeature !=
           (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
            *)0x0)) &&
      ((this->EvaluateFeature !=
        (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
         *)0x0 &&
       (this->ReleaseFeature != (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0)))))) {
    return true;
  }
  return false;
}

// NVSDK_NGX_VULKAN_AllocateParameters @ 14ff3ec00

NVSDK_NGX_Result __cdecl NVSDK_NGX_VULKAN_AllocateParameters(NVSDK_NGX_Parameter **param_1)

{
  _func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = GContext.API.AllocateParameters;
  if (GContext.API.Init ==
      (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version
       *)0x0) {
    return NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  if (GContext.API.AllocateParameters ==
      (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0) {
    return NVSDK_NGX_Result_FAIL_OutOfDate;
  }
  (*__guard_check_icall_fptr)(GContext.API.AllocateParameters);
                    /* WARNING: Could not recover jumptable at 0x00014ff3ec58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return NVar1;
}

// NVSDK_NGX_VULKAN_CreateFeature @ 14ff3ec70

NVSDK_NGX_Result __cdecl
NVSDK_NGX_VULKAN_CreateFeature
          (VkCommandBuffer_T *param_1,NVSDK_NGX_Feature param_2,NVSDK_NGX_Parameter *param_3,
          NVSDK_NGX_Handle **param_4)

{
  _func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
  *p_Var1;
  NVSDK_NGX_Result NVar2;
  
  if (GContext.API.CreateFeature ==
      (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
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

// NVSDK_NGX_VULKAN_CreateFeature1 @ 14ff3ecf0

NVSDK_NGX_Result __cdecl
NVSDK_NGX_VULKAN_CreateFeature1
          (VkDevice_T *param_1,VkCommandBuffer_T *param_2,NVSDK_NGX_Feature param_3,
          NVSDK_NGX_Parameter *param_4,NVSDK_NGX_Handle **param_5)

{
  _func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_VkCommandBuffer_T_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
  *p_Var1;
  NVSDK_NGX_Result NVar2;
  
  if (GContext.API.CreateFeature1 ==
      (_func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_VkCommandBuffer_T_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
       *)0x0) {
    NVar2 = NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  else {
    NVSDK_NGX_Parameter_Populate_Unspecified_Defaults(param_4);
    p_Var1 = GContext.API.CreateFeature1;
    (*__guard_check_icall_fptr)(GContext.API.CreateFeature1);
    NVar2 = (*p_Var1)(param_1,param_2,param_3,param_4,param_5);
  }
  return NVar2;
}

// NVSDK_NGX_VULKAN_DestroyParameters @ 14ff3ed80

NVSDK_NGX_Result __cdecl NVSDK_NGX_VULKAN_DestroyParameters(NVSDK_NGX_Parameter *param_1)

{
  _func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = GContext.API.DestroyParameters;
  if (GContext.API.Init ==
      (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version
       *)0x0) {
    return NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  if (GContext.API.DestroyParameters ==
      (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr *)0x0) {
    return NVSDK_NGX_Result_FAIL_OutOfDate;
  }
  (*__guard_check_icall_fptr)(GContext.API.DestroyParameters);
                    /* WARNING: Could not recover jumptable at 0x00014ff3edd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return NVar1;
}

// NVSDK_NGX_VULKAN_EvaluateFeature @ 14ff3edf0

NVSDK_NGX_Result __cdecl
NVSDK_NGX_VULKAN_EvaluateFeature
          (VkCommandBuffer_T *param_1,NVSDK_NGX_Handle *param_2,NVSDK_NGX_Parameter *param_3,
          _func___cdecl_void_float_bool_ptr *param_4)

{
  _func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
  *p_Var1;
  NVSDK_NGX_Result NVar2;
  
  p_Var1 = GContext.API.EvaluateFeature;
  if (GContext.API.EvaluateFeature ==
      (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
       *)0x0) {
    NVar2 = NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  else {
    (*__guard_check_icall_fptr)(GContext.API.EvaluateFeature);
    NVar2 = (*p_Var1)(param_1,param_2,param_3,param_4);
  }
  return NVar2;
}

// NVSDK_NGX_VULKAN_EvaluateFeature_C @ 14ff3ee70

NVSDK_NGX_Result __cdecl
NVSDK_NGX_VULKAN_EvaluateFeature_C
          (VkCommandBuffer_T *param_1,NVSDK_NGX_Handle *param_2,NVSDK_NGX_Parameter *param_3,
          _func___cdecl_void_float_bool_ptr *param_4)

{
  NVSDK_NGX_Result NVar1;
  
  if (GContext.API.EvaluateFeature ==
      (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
       *)0x0) {
    return NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  NVar1 = NGXProgressCallbackHelper::
          EvaluateFeature<enum_NVSDK_NGX_Result_(__cdecl*)(VkCommandBuffer_T_*___ptr64,NVSDK_NGX_Handle_const_*___ptr64,NVSDK_NGX_Parameter_const_*___ptr64,void_(__cdecl*)(float,bool_&___ptr64)),VkCommandBuffer_T_*___ptr64>
                    (GContext.API.EvaluateFeature,param_1,param_2,param_3,param_4);
  return NVar1;
}

// NVSDK_NGX_VULKAN_GetCapabilityParameters @ 14ff3eeb0

NVSDK_NGX_Result __cdecl NVSDK_NGX_VULKAN_GetCapabilityParameters(NVSDK_NGX_Parameter **param_1)

{
  _func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = GContext.API.GetCapabilityParameters;
  if (GContext.API.Init ==
      (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version
       *)0x0) {
    return NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  if (GContext.API.GetCapabilityParameters ==
      (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0) {
    return NVSDK_NGX_Result_FAIL_OutOfDate;
  }
  (*__guard_check_icall_fptr)(GContext.API.GetCapabilityParameters);
                    /* WARNING: Could not recover jumptable at 0x00014ff3ef08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return NVar1;
}

// NVSDK_NGX_VULKAN_GetFeatureDeviceExtensionRequirements @ 14ff3ef20

NVSDK_NGX_Result __cdecl
NVSDK_NGX_VULKAN_GetFeatureDeviceExtensionRequirements
          (VkInstance_T *param_1,VkPhysicalDevice_T *param_2,NVSDK_NGX_FeatureDiscoveryInfo *param_3
          ,uint *param_4,VkExtensionProperties **param_5)

{
  _func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
  *p_Var1;
  NVSDK_NGX_Result NVar2;
  
  if (((GLib != (HINSTANCE__ *)0x0) || (LoadGLibSimple(param_1,param_2), GLib != (HINSTANCE__ *)0x0)
      ) && (p_Var1 = GContext.API.GetFeatureDeviceExtensionRequirements,
           GContext.API.GetFeatureDeviceExtensionRequirements !=
           (_func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
            *)0x0)) {
    (*__guard_check_icall_fptr)(GContext.API.GetFeatureDeviceExtensionRequirements);
    NVar2 = (*p_Var1)(param_1,param_2,param_3,param_4,param_5);
    if (NVar2 != NVSDK_NGX_Result_FAIL_NotImplemented) {
      return NVar2;
    }
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = 4;
  }
  if (param_5 != (VkExtensionProperties **)0x0) {
    *param_5 = deviceExts2;
  }
  return NVSDK_NGX_Result_Success;
}

// NVSDK_NGX_VULKAN_GetFeatureInstanceExtensionRequirements @ 14ff3efd0

NVSDK_NGX_Result __cdecl
NVSDK_NGX_VULKAN_GetFeatureInstanceExtensionRequirements
          (NVSDK_NGX_FeatureDiscoveryInfo *param_1,uint *param_2,VkExtensionProperties **param_3)

{
  _func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
  *p_Var1;
  NVSDK_NGX_Result NVar2;
  
  p_Var1 = GContext.API.GetFeatureInstanceExtensionRequirements;
  if ((GLib != (HINSTANCE__ *)0x0) &&
     (GContext.API.GetFeatureInstanceExtensionRequirements !=
      (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
       *)0x0)) {
    (*__guard_check_icall_fptr)(GContext.API.GetFeatureInstanceExtensionRequirements);
    NVar2 = (*p_Var1)(param_1,param_2,param_3);
    if (NVar2 != NVSDK_NGX_Result_FAIL_NotImplemented) {
      return NVar2;
    }
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = 1;
  }
  if (param_3 != (VkExtensionProperties **)0x0) {
    *param_3 = instanceExts2;
  }
  return NVSDK_NGX_Result_Success;
}

// NVSDK_NGX_VULKAN_GetFeatureRequirements @ 14ff3f060

NVSDK_NGX_Result __cdecl
NVSDK_NGX_VULKAN_GetFeatureRequirements
          (VkInstance_T *param_1,VkPhysicalDevice_T *param_2,NVSDK_NGX_FeatureDiscoveryInfo *param_3
          ,NVSDK_NGX_FeatureRequirement *param_4)

{
  _func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
  *p_Var1;
  NVSDK_NGX_Result NVar2;
  
  if (GLib == (HINSTANCE__ *)0x0) {
    LoadGLibSimple(param_1,param_2);
  }
  p_Var1 = GContext.API.GetFeatureRequirements;
  if (GContext.API.GetFeatureRequirements ==
      (_func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
       *)0x0) {
    NVar2 = NVSDK_NGX_Result_FAIL_NotImplemented;
  }
  else {
    (*__guard_check_icall_fptr)(GContext.API.GetFeatureRequirements);
    NVar2 = (*p_Var1)(param_1,param_2,param_3,param_4);
  }
  return NVar2;
}

// NVSDK_NGX_VULKAN_GetParameters @ 14ff3f0e0

NVSDK_NGX_Result __cdecl NVSDK_NGX_VULKAN_GetParameters(NVSDK_NGX_Parameter **param_1)

{
  _func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = GContext.API.GetParameters;
  if (GContext.API.GetParameters ==
      (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0) {
    return NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  (*__guard_check_icall_fptr)(GContext.API.GetParameters);
                    /* WARNING: Could not recover jumptable at 0x00014ff3f122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return NVar1;
}

// NVSDK_NGX_VULKAN_GetScratchBufferSize @ 14ff3f130

NVSDK_NGX_Result __cdecl
NVSDK_NGX_VULKAN_GetScratchBufferSize
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

// NVSDK_NGX_VULKAN_Init @ 14ff3f190

NVSDK_NGX_Result __cdecl
NVSDK_NGX_VULKAN_Init
          (ulong64 param_1,wchar_t *param_2,VkInstance_T *param_3,VkPhysicalDevice_T *param_4,
          VkDevice_T *param_5,
          _func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr *param_6,
          _func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr *param_7,
          NVSDK_NGX_FeatureCommonInfo *param_8,NVSDK_NGX_Version param_9)

{
  _func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version
  *p_Var1;
  _func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
  *p_Var2;
  _func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr__func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr_ptr__func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
  *p_Var3;
  NVSDK_NGX_Result NVar4;
  int iVar5;
  char *pcVar6;
  
  NVar4 = NVSDK_NGX_VULKAN_Init_Common
                    (param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  p_Var3 = GContext.API.Init_Ext2;
  p_Var2 = GContext.API.Init_Ext;
  p_Var1 = GContext.API.Init;
  if (NVar4 == NVSDK_NGX_Result_Success) {
    if (GContext.API.Init_Ext2 ==
        (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr__func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr_ptr__func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
         *)0x0) {
      if ((param_7 == (_func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr *)0x0) ||
         (param_6 == (_func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr *)0x0)) {
        if (GContext.API.Init_Ext !=
            (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
             *)0x0) {
          (*__guard_check_icall_fptr)(GContext.API.Init_Ext);
          NVar4 = (*p_Var2)(param_1,param_2,param_3,param_4,param_5,param_9,param_8);
          return NVar4;
        }
        if (((param_8 == (NVSDK_NGX_FeatureCommonInfo *)0x0) ||
            ((param_8->PathListInfo).Path == (wchar_t **)0x0)) ||
           ((param_8->PathListInfo).Length == 0)) {
          (*__guard_check_icall_fptr)(GContext.API.Init);
          NVar4 = (*p_Var1)(param_1,param_2,param_3,param_4,param_5,param_9);
          return NVar4;
        }
        pcVar6 = 
        "error: app passed non-empty list of extra paths but NGX Core driver does not support the proper Init entrypoint... Please update your driver."
        ;
        iVar5 = 300;
      }
      else {
        pcVar6 = 
        "error: app passed vkGetInstance/DeviceProcAddr but NGX Core driver does not support the proper Init entrypoint... Please update your driver."
        ;
        iVar5 = 0x11e;
      }
      ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_vulkan_lib.cpp"
                     ,iVar5,"NVSDK_NGX_VULKAN_Init",pcVar6);
      NVar4 = NVSDK_NGX_Result_FAIL_OutOfDate;
    }
    else {
      (*__guard_check_icall_fptr)(GContext.API.Init_Ext2);
      NVar4 = (*p_Var3)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_9,param_8);
    }
  }
  return NVar4;
}

// NVSDK_NGX_VULKAN_Init_with_ProjectID @ 14ff3f350

NVSDK_NGX_Result __cdecl
NVSDK_NGX_VULKAN_Init_with_ProjectID
          (char *param_1,NVSDK_NGX_EngineType param_2,char *param_3,wchar_t *param_4,
          VkInstance_T *param_5,VkPhysicalDevice_T *param_6,VkDevice_T *param_7,
          _func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr *param_8,
          _func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr *param_9,
          NVSDK_NGX_FeatureCommonInfo *param_10,NVSDK_NGX_Version param_11)

{
  _func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
  *p_Var1;
  _func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr__func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr_ptr__func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
  *p_Var2;
  NVSDK_NGX_Result NVar3;
  int iVar4;
  char *pcVar5;
  
  NVar3 = NVSDK_NGX_VULKAN_Init_Common
                    (param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  p_Var2 = GContext.API.Init_ProjectID_Ext;
  p_Var1 = GContext.API.Init_ProjectID;
  if (NVar3 == NVSDK_NGX_Result_Success) {
    if (GContext.API.Init_ProjectID_Ext ==
        (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr__func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr_ptr__func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
         *)0x0) {
      if ((param_9 == (_func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr *)0x0) ||
         (param_8 == (_func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr *)0x0)) {
        if (GContext.API.Init_ProjectID !=
            (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
             *)0x0) {
          (*__guard_check_icall_fptr)(GContext.API.Init_ProjectID);
          NVar3 = (*p_Var1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_11,
                            param_10);
          return NVar3;
        }
        pcVar5 = 
        "error: app called Init with ProjectID but NGX Core driver does not support the proper Init entrypoint... Please update your driver."
        ;
        iVar4 = 0x151;
      }
      else {
        pcVar5 = 
        "error: app passed vkGetInstance/DeviceProcAddr but NGX Core driver does not support the proper Init entrypoint... Please update your driver."
        ;
        iVar4 = 0x146;
      }
      ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_vulkan_lib.cpp"
                     ,iVar4,"NVSDK_NGX_VULKAN_Init_with_ProjectID",pcVar5);
      NVar3 = NVSDK_NGX_Result_FAIL_OutOfDate;
    }
    else {
      (*__guard_check_icall_fptr)(GContext.API.Init_ProjectID_Ext);
      NVar3 = (*p_Var2)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_11,param_10);
    }
  }
  return NVar3;
}

// NVSDK_NGX_VULKAN_ReleaseFeature @ 14ff3f4f0

NVSDK_NGX_Result __cdecl NVSDK_NGX_VULKAN_ReleaseFeature(NVSDK_NGX_Handle *param_1)

{
  _func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = GContext.API.ReleaseFeature;
  if (GContext.API.ReleaseFeature == (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0) {
    return NVSDK_NGX_Result_FAIL_NotInitialized;
  }
  (*__guard_check_icall_fptr)(GContext.API.ReleaseFeature);
                    /* WARNING: Could not recover jumptable at 0x00014ff3f532. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return NVar1;
}

// NVSDK_NGX_VULKAN_RequiredExtensions @ 14ff3f540

NVSDK_NGX_Result __cdecl
NVSDK_NGX_VULKAN_RequiredExtensions(uint *param_1,char ***param_2,uint *param_3,char ***param_4)

{
  ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_vulkan_lib.cpp"
                 ,0x92,"NVSDK_NGX_VULKAN_RequiredExtensions",
                 "warning: NVSDK_NGX_VULKAN_RequiredExtensions will be deprecated in future SDK release. Use NVSDK_NGX_VULKAN_GetFeatureInstanceExtensionRequirements() and NVSDK_NGX_VULKAN_GetFeatureRequirements() instead"
                );
  *param_1 = 1;
  *param_2 = instanceExts;
  *param_3 = 4;
  *param_4 = deviceExts;
  return NVSDK_NGX_Result_Success;
}

// NVSDK_NGX_VULKAN_Shutdown @ 14ff3f5d0

NVSDK_NGX_Result __cdecl NVSDK_NGX_VULKAN_Shutdown(void)

{
  NVSDK_NGX_Result NVar1;
  
  NVar1 = NVSDK_NGX_VULKAN_ShutdownCommon((VkDevice_T *)0x0);
  return NVar1;
}

// NVSDK_NGX_VULKAN_Shutdown1 @ 14ff3f5e0

NVSDK_NGX_Result __cdecl NVSDK_NGX_VULKAN_Shutdown1(VkDevice_T *param_1)

{
  _func___cdecl_NVSDK_NGX_Result *p_Var1;
  _func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_ulong_ptr *p_Var2;
  NVSDK_NGX_Result NVar3;
  ulong auStackX_8 [2];
  NGXMutex *pNStackX_10;
  
  pNStackX_10 = &g_sdkLibMutexVk;
  EnterCriticalSection((LPCRITICAL_SECTION)&g_sdkLibMutexVk);
  p_Var2 = GContext.API.Shutdown1;
  p_Var1 = GContext.API.Shutdown;
  auStackX_8[0] = 0;
  if (param_1 == (VkDevice_T *)0x0) {
    if (GContext.API.Shutdown == (_func___cdecl_NVSDK_NGX_Result *)0x0) {
      if (GContext.API.Shutdown1 == (_func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_ulong_ptr *)0x0)
      goto LAB_14ff3eb8f;
      (*__guard_check_icall_fptr)();
      param_1 = (VkDevice_T *)0x0;
      goto LAB_14ff3ea96;
    }
    (*__guard_check_icall_fptr)(GContext.API.Shutdown);
    NVar3 = (*p_Var1)();
  }
  else {
    if (GContext.API.Shutdown1 == (_func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_ulong_ptr *)0x0) {
LAB_14ff3eb8f:
      NVar3 = NVSDK_NGX_Result_FAIL_NotInitialized;
      goto LAB_14ff3eb94;
    }
    (*__guard_check_icall_fptr)(GContext.API.Shutdown1);
LAB_14ff3ea96:
    NVar3 = (*p_Var2)(param_1,auStackX_8);
  }
  if ((NVar3 == NVSDK_NGX_Result_Success) && (auStackX_8[0] == 0)) {
    ngx::util::drsShutdown();
    if (GContext.hVulkanLib != (HINSTANCE__ *)0x0) {
      NGXCloseLibrary(GContext.hVulkanLib);
    }
    GContext.API.Init =
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version
          *)0x0;
    GContext.API.Init_Ext =
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
          *)0x0;
    GContext.API.Init_Ext2 =
         (_func___cdecl_NVSDK_NGX_Result_ulong64_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr__func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr_ptr__func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
          *)0x0;
    GContext.API.Init_ProjectID =
         (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
          *)0x0;
    GContext.API.Init_ProjectID_Ext =
         (_func___cdecl_NVSDK_NGX_Result_char_ptr_NVSDK_NGX_EngineType_char_ptr_wchar_t_ptr_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_VkDevice_T_ptr__func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr_ptr__func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr_ptr_NVSDK_NGX_Version_NVSDK_NGX_FeatureCommonInfo_ptr
          *)0x0;
    GContext.API.Shutdown = (_func___cdecl_NVSDK_NGX_Result *)0x0;
    GContext.API.Shutdown1 = (_func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_ulong_ptr *)0x0;
    GContext.API.GetScratchBufferSize =
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_ulong64_ptr *)0x0
    ;
    GContext.API.GetParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
    GContext.API.CreateFeature =
         (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
          *)0x0;
    GContext.API.CreateFeature1 =
         (_func___cdecl_NVSDK_NGX_Result_VkDevice_T_ptr_VkCommandBuffer_T_ptr_NVSDK_NGX_Feature_NVSDK_NGX_Parameter_ptr_NVSDK_NGX_Handle_ptr_ptr
          *)0x0;
    GContext.API.EvaluateFeature =
         (_func___cdecl_NVSDK_NGX_Result_VkCommandBuffer_T_ptr_NVSDK_NGX_Handle_ptr_NVSDK_NGX_Parameter_ptr__func___cdecl_void_float_bool_ptr_ptr
          *)0x0;
    GContext.API.ReleaseFeature = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Handle_ptr *)0x0;
    GContext.API.GetFeatureRequirements =
         (_func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_NVSDK_NGX_FeatureRequirement_ptr
          *)0x0;
    GContext.API.GetFeatureInstanceExtensionRequirements =
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
          *)0x0;
    GContext.API.GetFeatureDeviceExtensionRequirements =
         (_func___cdecl_NVSDK_NGX_Result_VkInstance_T_ptr_VkPhysicalDevice_T_ptr_NVSDK_NGX_FeatureDiscoveryInfo_ptr_uint_ptr_VkExtensionProperties_ptr_ptr
          *)0x0;
    GContext.API.AllocateParameters =
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
    GContext.API.GetCapabilityParameters =
         (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr_ptr *)0x0;
    GContext.API.DestroyParameters = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Parameter_ptr *)0x0;
    GContext.hVulkanLib = (HINSTANCE__ *)0x0;
    GContext.vkGetInstanceProcAddr =
         (_func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr *)0x0;
  }
LAB_14ff3eb94:
  LeaveCriticalSection((LPCRITICAL_SECTION)&g_sdkLibMutexVk);
  return NVar3;
}

// dtor$0 @ 150325d70

void `NVSDK_NGX_VULKAN_Init_Common'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  NGXLock::~NGXLock((NGXLock *)(param_2 + 0xe0));
  return;
}

// dtor$0 @ 150325d90

void `NVSDK_NGX_VULKAN_ShutdownCommon'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  NGXLock::~NGXLock((NGXLock *)(param_2 + 0xf8));
  return;
}

// `dynamic_atexit_destructor_for_'g_sdkLibMutexVk'' @ 1504766d0

void __cdecl _dynamic_atexit_destructor_for__g_sdkLibMutexVk__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504766d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&g_sdkLibMutexVk);
  return;
}

