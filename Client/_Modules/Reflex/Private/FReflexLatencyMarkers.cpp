// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Reflex
// Functions: 37

// FReflexLatencyMarkers @ 14accf5b0

FReflexLatencyMarkers * __thiscall
FReflexLatencyMarkers::FReflexLatencyMarkers(FReflexLatencyMarkers *this)

{
  this->_padding_ = (longlong)&___7ILatencyMarkerModule__6B_;
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__ILatencyMarkerModule__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  this->AverageTotalLatencyMs = 0.0;
  this->AverageGameLatencyMs = 0.0;
  this->AverageRenderLatencyMs = 0.0;
  this->AverageSimulationLatencyMs = 0.0;
  this->AverageRenderSubmitLatencyMs = 0.0;
  this->AveragePresentLatencyMs = 0.0;
  this->AverageDriverLatencyMs = 0.0;
  this->AverageOSRenderQueueLatencyMs = 0.0;
  this->AverageGPURenderLatencyMs = 0.0;
  this->RenderSubmitOffsetMs = 0.0;
  this->PresentOffsetMs = 0.0;
  this->DriverOffsetMs = 0.0;
  this->OSRenderQueueOffsetMs = 0.0;
  this->GPURenderOffsetMs = 0.0;
  this->bEnabled = false;
  this->bFlashIndicatorEnabled = false;
  this->bFlashIndicatorDriverControlled = false;
  this->bFeatureSupport = false;
  return this;
}

// ~FReflexLatencyMarkers @ 14accf6b0

void __thiscall FReflexLatencyMarkers::~FReflexLatencyMarkers(FReflexLatencyMarkers *this)

{
  this->_padding_ = (longlong)&_vftable__for__ILatencyMarkerModule__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  return;
}

// Exec_Runtime @ 14accfa80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FReflexLatencyMarkers::Exec_Runtime
          (FReflexLatencyMarkers *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  TObjectPtr<UPlayer> *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  APlayerController *pAVar5;
  UClass *pUVar6;
  ForAnyElementType FVar7;
  FStaticBasicLogRecord *pFVar8;
  UPlayer *pUVar9;
  bool bVar10;
  FString local_28;
  FString local_18;
  
  bVar10 = false;
  pUVar9 = (UPlayer *)0x0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  if (((param_1 != (UWorld *)0x0) &&
      (pAVar5 = UGameplayStatics::GetPlayerController((UObject *)param_1,0),
      pAVar5 != (APlayerController *)0x0)) &&
     (this_00 = &pAVar5->Player, (this_00->field0_0x0).DebugPtr != (UPlayer *)0x0)) {
    pUVar6 = Z_Construct_UClass_ULocalPlayer_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar6);
    if (bVar3) {
      pUVar9 = (this_00->field0_0x0).DebugPtr;
    }
  }
  bVar3 = FParse::Value(param_2,L"ReflexLatencyMarkers=",&local_28,true,(wchar_t **)0x0);
  if (!bVar3) goto LAB_14accfc48;
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar7.Data = local_28.Data.AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,"0");
  if (iVar4 == 0) {
    (**(code **)(*(longlong *)&this[-1].DriverOffsetMs + 8))(&this[-1].DriverOffsetMs,0);
    if (((pUVar9 != (UPlayer *)0x0) &&
        (pAVar5 = pUVar9[1].PlayerController.field0_0x0.DebugPtr, pAVar5 != (APlayerController *)0x0
        )) && (plVar1 = (longlong *)pAVar5->_padding_, plVar1 != (longlong *)0x0)) {
      pcVar2 = *(code **)(*plVar1 + 0x2d0);
      ::FString::FString(&local_18,"Reflex Latency Markers: Off");
      (*pcVar2)(plVar1,&local_18);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (4 < (byte)LogLatencyMarkers._0_1_) {
      pFVar8 = &::LOG_Static;
LAB_14accfc39:
      UE::Logging::Private::BasicLog<5>(pFVar8,(FLogCategoryBase *)&LogLatencyMarkers);
    }
  }
  else {
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar7.Data = local_28.Data.AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,"1");
    if (iVar4 == 0) {
      (**(code **)(*(longlong *)&this[-1].DriverOffsetMs + 8))(&this[-1].DriverOffsetMs,1);
      if (((pUVar9 != (UPlayer *)0x0) &&
          (pAVar5 = pUVar9[1].PlayerController.field0_0x0.DebugPtr,
          pAVar5 != (APlayerController *)0x0)) &&
         (plVar1 = (longlong *)pAVar5->_padding_, plVar1 != (longlong *)0x0)) {
        pcVar2 = *(code **)(*plVar1 + 0x2d0);
        ::FString::FString(&local_18,"Reflex Latency Markers: On");
        (*pcVar2)(plVar1,&local_18);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      if (4 < (byte)LogLatencyMarkers._0_1_) {
        pFVar8 = &::LOG_Static;
        goto LAB_14accfc39;
      }
    }
  }
  bVar10 = true;
LAB_14accfc48:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar10;
}

// GetAvailable @ 14acd0020

bool __thiscall FReflexLatencyMarkers::GetAvailable(FReflexLatencyMarkers *this)

{
  if (DisableLatencyMarkers != 1) {
    return this->bFeatureSupport != false;
  }
  return false;
}

// GetDriverLatencyInMs @ 14acd0090

float __thiscall FReflexLatencyMarkers::GetDriverLatencyInMs(FReflexLatencyMarkers *this)

{
  return this->AverageDriverLatencyMs;
}

// GetDriverOffsetFromFrameStartInMs @ 14acd00b0

float __thiscall
FReflexLatencyMarkers::GetDriverOffsetFromFrameStartInMs(FReflexLatencyMarkers *this)

{
  return this->DriverOffsetMs;
}

// GetEnabled @ 14acd00d0

bool __thiscall FReflexLatencyMarkers::GetEnabled(FReflexLatencyMarkers *this)

{
  if ((DisableLatencyMarkers != 1) && (this->bFeatureSupport != false)) {
    return this->bEnabled;
  }
  return false;
}

// GetFlashIndicatorEnabled @ 14acd0150

bool __thiscall FReflexLatencyMarkers::GetFlashIndicatorEnabled(FReflexLatencyMarkers *this)

{
  if (((DisableLatencyMarkers != 1) && (this->bFeatureSupport != false)) &&
     ((this->bFlashIndicatorEnabled != false || (this->bFlashIndicatorDriverControlled != false))))
  {
    return true;
  }
  return false;
}

// GetGPURenderLatencyInMs @ 14acd0250

float __thiscall FReflexLatencyMarkers::GetGPURenderLatencyInMs(FReflexLatencyMarkers *this)

{
  return this->AverageGPURenderLatencyMs;
}

// GetGPURenderOffsetFromFrameStartInMs @ 14acd0270

float __thiscall
FReflexLatencyMarkers::GetGPURenderOffsetFromFrameStartInMs(FReflexLatencyMarkers *this)

{
  return this->GPURenderOffsetMs;
}

// GetGameLatencyInMs @ 14acd0290

float __thiscall FReflexLatencyMarkers::GetGameLatencyInMs(FReflexLatencyMarkers *this)

{
  return this->AverageGameLatencyMs;
}

// GetOSRenderQueueLatencyInMs @ 14acd04f0

float __thiscall FReflexLatencyMarkers::GetOSRenderQueueLatencyInMs(FReflexLatencyMarkers *this)

{
  return this->AverageOSRenderQueueLatencyMs;
}

// GetOSRenderQueueOffsetFromFrameStartInMs @ 14acd0510

float __thiscall
FReflexLatencyMarkers::GetOSRenderQueueOffsetFromFrameStartInMs(FReflexLatencyMarkers *this)

{
  return this->OSRenderQueueOffsetMs;
}

// GetPresentLatencyInMs @ 14acd0530

float __thiscall FReflexLatencyMarkers::GetPresentLatencyInMs(FReflexLatencyMarkers *this)

{
  return this->AveragePresentLatencyMs;
}

// GetPresentOffsetFromFrameStartInMs @ 14acd0550

float __thiscall
FReflexLatencyMarkers::GetPresentOffsetFromFrameStartInMs(FReflexLatencyMarkers *this)

{
  return this->PresentOffsetMs;
}

// GetRenderLatencyInMs @ 14acd08e0

float __thiscall FReflexLatencyMarkers::GetRenderLatencyInMs(FReflexLatencyMarkers *this)

{
  return this->AverageRenderLatencyMs;
}

// GetRenderSubmitLatencyInMs @ 14acd0a20

float __thiscall FReflexLatencyMarkers::GetRenderSubmitLatencyInMs(FReflexLatencyMarkers *this)

{
  return this->AverageRenderSubmitLatencyMs;
}

// GetRenderSubmitOffsetFromFrameStartInMs @ 14acd0a40

float __thiscall
FReflexLatencyMarkers::GetRenderSubmitOffsetFromFrameStartInMs(FReflexLatencyMarkers *this)

{
  return this->RenderSubmitOffsetMs;
}

// GetSimulationLatencyInMs @ 14acd0a60

float __thiscall FReflexLatencyMarkers::GetSimulationLatencyInMs(FReflexLatencyMarkers *this)

{
  return this->AverageSimulationLatencyMs;
}

// GetStatId @ 14acd0a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FReflexLatencyMarkers::GetStatId(FReflexLatencyMarkers *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TStatId___cdecl_FReflexLatencyMarkers::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TStatId___cdecl_FReflexLatencyMarkers::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TStatId___cdecl_FReflexLatencyMarkers::GetStatId(void)const___ptr64'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FLatencyMarkers = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"FLatencyMarkers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_struct_TStatId___cdecl_FReflexLatencyMarkers::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FLatencyMarkers,*pFVar1,L"FLatencyMarkers","STATGROUP_Tickables",
               "STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_struct_TStatId___cdecl_FReflexLatencyMarkers::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_FLatencyMarkers;
  if (_StatPtr_FLatencyMarkers == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FLatencyMarkers");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`public:_virtual_struct_TStatId___cdecl_FReflexLatencyMarkers::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_FLatencyMarkers,*pFVar1,L"FLatencyMarkers",
                       "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true
                       ,false,MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

// GetTotalLatencyInMs @ 14acd0bf0

float __thiscall FReflexLatencyMarkers::GetTotalLatencyInMs(FReflexLatencyMarkers *this)

{
  return this->AverageTotalLatencyMs;
}

// Initialize @ 14acd0e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FReflexLatencyMarkers::Initialize(FReflexLatencyMarkers *this)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  uint local_68 [4];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  this->bFeatureSupport = false;
  bVar1 = IsRHIDeviceNVIDIA();
  if (bVar1) {
    iVar2 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
    if ((iVar2 != 2) && (iVar2 = (**(code **)(GDynamicRHI->_padding_ + 0x28))(), iVar2 != 3)) {
      return;
    }
    this->bFeatureSupport = true;
    this->bFlashIndicatorDriverControlled = false;
    local_68[0] = 0;
    NvAPI_SYS_GetDriverAndBranchVersion(local_68,local_58);
    if (0xc7b2 < local_68[0]) {
      this->bFlashIndicatorDriverControlled = true;
    }
  }
  return;
}

// IsTickable @ 14acd10a0

bool __thiscall FReflexLatencyMarkers::IsTickable(FReflexLatencyMarkers *this)

{
  return true;
}

// IsTickableInEditor @ 14acd10b0

bool __thiscall FReflexLatencyMarkers::IsTickableInEditor(FReflexLatencyMarkers *this)

{
  return true;
}

// IsTickableWhenPaused @ 14acd10c0

bool __thiscall FReflexLatencyMarkers::IsTickableWhenPaused(FReflexLatencyMarkers *this)

{
  return true;
}

// SetCustomLatencyMarker @ 14acd14f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FReflexLatencyMarkers::SetCustomLatencyMarker
          (FReflexLatencyMarkers *this,uint param_1,ulong64 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  ulong64 uStack_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (((DisableLatencyMarkers == 0) && (this->bEnabled != false)) &&
     (this->bFeatureSupport != false)) {
    local_78 = 0x10058;
    uStack_60 = 0;
    local_28 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_68 = (ulonglong)param_1;
    local_38 = 0;
    uStack_30 = 0;
    uStack_70 = param_2;
    uVar1 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
    NvAPI_D3D_SetLatencyMarker(uVar1,&local_78);
  }
  return;
}

// SetEnabled @ 14acd16c0

void __thiscall FReflexLatencyMarkers::SetEnabled(FReflexLatencyMarkers *this,bool param_1)

{
  this->bEnabled = param_1;
  if (!param_1) {
    this->AverageTotalLatencyMs = 0.0;
    this->AverageGameLatencyMs = 0.0;
    this->AverageRenderLatencyMs = 0.0;
    this->AverageSimulationLatencyMs = 0.0;
    this->AverageRenderSubmitLatencyMs = 0.0;
    this->AveragePresentLatencyMs = 0.0;
    this->AverageDriverLatencyMs = 0.0;
    this->AverageOSRenderQueueLatencyMs = 0.0;
    this->AverageGPURenderLatencyMs = 0.0;
    this->RenderSubmitOffsetMs = 0.0;
    this->PresentOffsetMs = 0.0;
    this->DriverOffsetMs = 0.0;
    this->OSRenderQueueOffsetMs = 0.0;
    this->GPURenderOffsetMs = 0.0;
    this->bFlashIndicatorEnabled = false;
  }
  return;
}

// SetFlashIndicatorEnabled @ 14acd1b30

void __thiscall
FReflexLatencyMarkers::SetFlashIndicatorEnabled(FReflexLatencyMarkers *this,bool param_1)

{
  this->bFlashIndicatorEnabled = param_1;
  return;
}

// SetFlashIndicatorLatencyMarker @ 14acd1c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FReflexLatencyMarkers::SetFlashIndicatorLatencyMarker(FReflexLatencyMarkers *this,ulong64 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  ulong64 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (((DisableLatencyMarkers == 0) && (this->bEnabled != false)) &&
     (this->bFeatureSupport != false)) {
    cVar1 = (**(code **)(this->_padding_ + 0x28))();
    if (cVar1 != '\0') {
      local_78 = 0x10058;
      uStack_60 = 0;
      local_28 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_68 = 7;
      local_38 = 0;
      uStack_30 = 0;
      uStack_70 = param_1;
      uVar2 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
      NvAPI_D3D_SetLatencyMarker(uVar2,&local_78);
    }
  }
  return;
}

// SetInputSampleLatencyMarker @ 14acd1d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FReflexLatencyMarkers::SetInputSampleLatencyMarker(FReflexLatencyMarkers *this,ulong64 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  ulong64 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (((DisableLatencyMarkers == 0) && (this->bEnabled != false)) &&
     (this->bFeatureSupport != false)) {
    local_78 = 0x10058;
    uStack_60 = 0;
    local_28 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_68 = 6;
    local_38 = 0;
    uStack_30 = 0;
    uStack_70 = param_1;
    uVar1 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
    NvAPI_D3D_SetLatencyMarker(uVar1,&local_78);
  }
  return;
}

// SetPresentLatencyMarkerEnd @ 14acd1e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FReflexLatencyMarkers::SetPresentLatencyMarkerEnd(FReflexLatencyMarkers *this,ulong64 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  ulong64 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (((DisableLatencyMarkers == 0) && (this->bEnabled != false)) &&
     (this->bFeatureSupport != false)) {
    local_78 = 0x10058;
    uStack_60 = 0;
    local_28 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_68 = 5;
    local_38 = 0;
    uStack_30 = 0;
    uStack_70 = param_1;
    uVar1 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
    NvAPI_D3D_SetLatencyMarker(uVar1,&local_78);
  }
  return;
}

// SetPresentLatencyMarkerStart @ 14acd1ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FReflexLatencyMarkers::SetPresentLatencyMarkerStart(FReflexLatencyMarkers *this,ulong64 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  ulong64 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (((DisableLatencyMarkers == 0) && (this->bEnabled != false)) &&
     (this->bFeatureSupport != false)) {
    local_78 = 0x10058;
    uStack_60 = 0;
    local_28 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_68 = 4;
    local_38 = 0;
    uStack_30 = 0;
    uStack_70 = param_1;
    uVar1 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
    NvAPI_D3D_SetLatencyMarker(uVar1,&local_78);
  }
  return;
}

// SetRenderSubmitLatencyMarkerEnd @ 14acd2170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FReflexLatencyMarkers::SetRenderSubmitLatencyMarkerEnd(FReflexLatencyMarkers *this,ulong64 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  ulong64 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (((DisableLatencyMarkers == 0) && (this->bEnabled != false)) &&
     (this->bFeatureSupport != false)) {
    local_78 = 0x10058;
    uStack_60 = 0;
    local_28 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_68 = 3;
    local_38 = 0;
    uStack_30 = 0;
    uStack_70 = param_1;
    uVar1 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
    NvAPI_D3D_SetLatencyMarker(uVar1,&local_78);
  }
  return;
}

// SetRenderSubmitLatencyMarkerStart @ 14acd2240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FReflexLatencyMarkers::SetRenderSubmitLatencyMarkerStart
          (FReflexLatencyMarkers *this,ulong64 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  ulong64 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (((DisableLatencyMarkers == 0) && (this->bEnabled != false)) &&
     (this->bFeatureSupport != false)) {
    local_78 = 0x10058;
    uStack_60 = 0;
    local_28 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_68 = 2;
    local_38 = 0;
    uStack_30 = 0;
    uStack_70 = param_1;
    uVar1 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
    NvAPI_D3D_SetLatencyMarker(uVar1,&local_78);
  }
  return;
}

// SetSimulationLatencyMarkerEnd @ 14acd2310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FReflexLatencyMarkers::SetSimulationLatencyMarkerEnd(FReflexLatencyMarkers *this,ulong64 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  ulong64 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (((DisableLatencyMarkers == 0) && (this->bEnabled != false)) &&
     (this->bFeatureSupport != false)) {
    local_78 = 0x10058;
    uStack_60 = 0;
    local_28 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_68 = 1;
    local_38 = 0;
    uStack_30 = 0;
    uStack_70 = param_1;
    uVar1 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
    NvAPI_D3D_SetLatencyMarker(uVar1,&local_78);
  }
  return;
}

// SetSimulationLatencyMarkerStart @ 14acd23e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FReflexLatencyMarkers::SetSimulationLatencyMarkerStart(FReflexLatencyMarkers *this,ulong64 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  ulong64 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (((DisableLatencyMarkers == 0) && (this->bEnabled != false)) &&
     (this->bFeatureSupport != false)) {
    local_28 = 0;
    uStack_60 = 0;
    local_78 = 0x10058;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_68 = 0;
    local_38 = 0;
    uStack_30 = 0;
    uStack_70 = param_1;
    uVar1 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
    NvAPI_D3D_SetLatencyMarker(uVar1,&local_78);
  }
  return;
}

// Tick @ 14acd24e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FReflexLatencyMarkers::Tick(FReflexLatencyMarkers *this,float param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_3c68 [32];
  undefined4 local_3c48;
  undefined1 local_3c44 [15140];
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14acd24ec;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_3c68;
  if (((DisableLatencyMarkers == 0) && (*(char *)&this->OSRenderQueueOffsetMs != '\0')) &&
     ((char)this->_padding_ != '\0')) {
    memset(local_3c44,0,0x3c24);
    local_3c48 = 0x13c28;
    uVar4 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
    iVar3 = NvAPI_D3D_GetLatency(uVar4,&local_3c48);
    fVar2 = __real_3983126f;
    fVar1 = __real_3f400000;
    if ((iVar3 == 0) && (local_c8 - local_120 != 0)) {
      *(float *)((longlong)&this->_padding_ + 4) =
           (float)(ulonglong)(local_c8 - local_120) * __real_3983126f +
           *(float *)((longlong)&this->_padding_ + 4) * __real_3f400000;
      *(float *)&this->bFeatureSupport =
           (float)(ulonglong)(local_e8 - local_120) * fVar2 +
           *(float *)&this->bFeatureSupport * fVar1;
      this->AverageTotalLatencyMs =
           (float)(ulonglong)(local_c8 - local_e0) * fVar2 + this->AverageTotalLatencyMs * fVar1;
      this->AverageGameLatencyMs =
           (float)(ulonglong)(local_118 - local_120) * fVar2 + this->AverageGameLatencyMs * fVar1;
      this->AverageRenderLatencyMs =
           (float)(ulonglong)(local_108 - local_110) * fVar2 + this->AverageRenderLatencyMs * fVar1;
      this->AverageSimulationLatencyMs =
           (float)(ulonglong)(local_f8 - local_100) * fVar2 +
           this->AverageSimulationLatencyMs * fVar1;
      this->AverageRenderSubmitLatencyMs =
           (float)(ulonglong)(local_e8 - local_f0) * fVar2 +
           this->AverageRenderSubmitLatencyMs * fVar1;
      this->AveragePresentLatencyMs =
           (float)(ulonglong)(local_d8 - local_e0) * fVar2 + this->AveragePresentLatencyMs * fVar1;
      this->AverageDriverLatencyMs =
           (float)(ulonglong)(local_c8 - local_d0) * fVar2 + this->AverageDriverLatencyMs * fVar1;
      fVar1 = __real_3a83126f;
      this->AverageOSRenderQueueLatencyMs =
           (float)(ulonglong)(local_110 - local_120) * __real_3a83126f;
      this->AverageGPURenderLatencyMs = (float)(ulonglong)(local_100 - local_120) * fVar1;
      this->RenderSubmitOffsetMs = (float)(ulonglong)(local_f0 - local_120) * fVar1;
      this->PresentOffsetMs = (float)(ulonglong)(local_e0 - local_120) * fVar1;
      this->DriverOffsetMs = (float)(ulonglong)(local_d0 - local_120) * fVar1;
      if ((((6 < (byte)LogLatencyMarkers._0_1_) &&
           ((UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogLatencyMarkers)
            , 6 < (byte)LogLatencyMarkers._0_1_ &&
            (UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogLatencyMarkers)
            , 6 < (byte)LogLatencyMarkers._0_1_)))) &&
          (UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogLatencyMarkers),
          6 < (byte)LogLatencyMarkers._0_1_)) &&
         ((((UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogLatencyMarkers)
            , 6 < (byte)LogLatencyMarkers._0_1_ &&
            (UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogLatencyMarkers)
            , 6 < (byte)LogLatencyMarkers._0_1_)) &&
           (UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogLatencyMarkers),
           6 < (byte)LogLatencyMarkers._0_1_)) &&
          ((UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogLatencyMarkers),
           6 < (byte)LogLatencyMarkers._0_1_ &&
           (UE::Logging::Private::BasicLog<7>
                      ((FStaticBasicLogRecord *)&PTR_u_AverageOSRender_1522f7f68,
                       (FLogCategoryBase *)&LogLatencyMarkers), 6 < (byte)LogLatencyMarkers._0_1_)))
          ))) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogLatencyMarkers);
      }
    }
  }
  return;
}

