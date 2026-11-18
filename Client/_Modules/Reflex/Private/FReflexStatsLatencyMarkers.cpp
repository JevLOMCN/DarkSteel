// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Reflex
// Functions: 31

// ~FReflexStatsLatencyMarkers @ 14accf730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FReflexStatsLatencyMarkers::~FReflexStatsLatencyMarkers(FReflexStatsLatencyMarkers *this)

{
  ulong64 RegHandle;
  undefined1 auStackY_78 [32];
  EVENT_DESCRIPTOR local_40;
  _EVENT_DATA_DESCRIPTOR local_30;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_78;
  this->_padding_ = (longlong)&_vftable__for__ILatencyMarkerModule__;
  this->_padding_ = (longlong)&_vftable__for__IWindowsMessageHandler__;
  if (this->bReflexStatsEnabled != false) {
    if (g_ReflexStatsPingThread != (void *)0x0) {
      if (g_ReflexStatsQuitEvent != (void *)0x0) {
        SetEvent(g_ReflexStatsQuitEvent);
      }
      WaitForSingleObject(g_ReflexStatsPingThread,1000);
      g_ReflexStatsPingThread = (void *)0x0;
    }
    if (5 < _Tlgg_hReflexStatsComponentProviderProv.LevelPlus1) {
      local_40._4_4_ = ZEXT24((ushort)_tlgEvent._2_2_);
      local_30.Ptr = (ULONGLONG)_Tlgg_hReflexStatsComponentProviderProv.ProviderMetadataPtr;
      local_40.Id = 0;
      local_40.Version = '\0';
      local_40.Channel = '\v';
      local_40.Keyword = 0;
      local_30.Size = (ULONG)*_Tlgg_hReflexStatsComponentProviderProv.ProviderMetadataPtr;
      local_20 = 0x153836623;
      local_30.Reserved = 2;
      local_18 = 0x17;
      local_14 = 1;
      EventWriteTransfer(_Tlgg_hReflexStatsComponentProviderProv.RegHandle,&local_40,(LPCGUID)0x0,
                         (LPCGUID)0x0,2,&local_30);
    }
    RegHandle = _Tlgg_hReflexStatsComponentProviderProv.RegHandle;
    _Tlgg_hReflexStatsComponentProviderProv.RegHandle = 0;
    _Tlgg_hReflexStatsComponentProviderProv.LevelPlus1 = 0;
    EventUnregister(RegHandle);
    if (g_ReflexStatsQuitEvent != (void *)0x0) {
      CloseHandle(g_ReflexStatsQuitEvent);
      g_ReflexStatsQuitEvent = (void *)0x0;
    }
  }
  return;
}

// GetAvailable @ 14acd0080

bool __thiscall FReflexStatsLatencyMarkers::GetAvailable(FReflexStatsLatencyMarkers *this)

{
  return true;
}

// GetDriverLatencyInMs @ 14acd00a0

float __thiscall FReflexStatsLatencyMarkers::GetDriverLatencyInMs(FReflexStatsLatencyMarkers *this)

{
  return 0.0;
}

// GetDriverOffsetFromFrameStartInMs @ 14acd00c0

float __thiscall
FReflexStatsLatencyMarkers::GetDriverOffsetFromFrameStartInMs(FReflexStatsLatencyMarkers *this)

{
  return 0.0;
}

// GetEnabled @ 14acd0130

bool __thiscall FReflexStatsLatencyMarkers::GetEnabled(FReflexStatsLatencyMarkers *this)

{
  return this->bReflexStatsEnabled;
}

// GetFlashIndicatorEnabled @ 14acd0180

bool __thiscall
FReflexStatsLatencyMarkers::GetFlashIndicatorEnabled(FReflexStatsLatencyMarkers *this)

{
  return this->bFlashIndicatorEnabled;
}

// GetGPURenderLatencyInMs @ 14acd0260

float __thiscall
FReflexStatsLatencyMarkers::GetGPURenderLatencyInMs(FReflexStatsLatencyMarkers *this)

{
  return 0.0;
}

// GetGPURenderOffsetFromFrameStartInMs @ 14acd0280

float __thiscall
FReflexStatsLatencyMarkers::GetGPURenderOffsetFromFrameStartInMs(FReflexStatsLatencyMarkers *this)

{
  return 0.0;
}

// GetGameLatencyInMs @ 14acd02a0

float __thiscall FReflexStatsLatencyMarkers::GetGameLatencyInMs(FReflexStatsLatencyMarkers *this)

{
  return 0.0;
}

// GetOSRenderQueueLatencyInMs @ 14acd0500

float __thiscall
FReflexStatsLatencyMarkers::GetOSRenderQueueLatencyInMs(FReflexStatsLatencyMarkers *this)

{
  return 0.0;
}

// GetOSRenderQueueOffsetFromFrameStartInMs @ 14acd0520

float __thiscall
FReflexStatsLatencyMarkers::GetOSRenderQueueOffsetFromFrameStartInMs
          (FReflexStatsLatencyMarkers *this)

{
  return 0.0;
}

// GetPresentLatencyInMs @ 14acd0540

float __thiscall FReflexStatsLatencyMarkers::GetPresentLatencyInMs(FReflexStatsLatencyMarkers *this)

{
  return 0.0;
}

// GetPresentOffsetFromFrameStartInMs @ 14acd0560

float __thiscall
FReflexStatsLatencyMarkers::GetPresentOffsetFromFrameStartInMs(FReflexStatsLatencyMarkers *this)

{
  return 0.0;
}

// GetRenderLatencyInMs @ 14acd08f0

float __thiscall FReflexStatsLatencyMarkers::GetRenderLatencyInMs(FReflexStatsLatencyMarkers *this)

{
  return 0.0;
}

// GetRenderSubmitLatencyInMs @ 14acd0a30

float __thiscall
FReflexStatsLatencyMarkers::GetRenderSubmitLatencyInMs(FReflexStatsLatencyMarkers *this)

{
  return 0.0;
}

// GetRenderSubmitOffsetFromFrameStartInMs @ 14acd0a50

float __thiscall
FReflexStatsLatencyMarkers::GetRenderSubmitOffsetFromFrameStartInMs
          (FReflexStatsLatencyMarkers *this)

{
  return 0.0;
}

// GetSimulationLatencyInMs @ 14acd0a70

float __thiscall
FReflexStatsLatencyMarkers::GetSimulationLatencyInMs(FReflexStatsLatencyMarkers *this)

{
  return 0.0;
}

// GetTotalLatencyInMs @ 14acd0c00

float __thiscall FReflexStatsLatencyMarkers::GetTotalLatencyInMs(FReflexStatsLatencyMarkers *this)

{
  return 0.0;
}

// Initialize @ 14acd1050

void __thiscall FReflexStatsLatencyMarkers::Initialize(FReflexStatsLatencyMarkers *this)

{
  return;
}

// ProcessMessage @ 14acd10d0

bool __thiscall
FReflexStatsLatencyMarkers::ProcessMessage
          (FReflexStatsLatencyMarkers *this,HWND__ *param_1,uint param_2,ulong64 param_3,
          long64 param_4,int *param_5)

{
  if ((param_2 != g_ReflexStatsWindowMessage) &&
     ((param_2 != 0x100 || (param_3 != g_ReflexStatsVirtualKey)))) {
    return false;
  }
  (**(code **)(*(longlong *)&this[-1].bReflexStatsEnabled + 0x70))
            (&this[-1].bReflexStatsEnabled,8,GFrameCounter);
  return true;
}

// SetCustomLatencyMarker @ 14acd1590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FReflexStatsLatencyMarkers::SetCustomLatencyMarker
          (FReflexStatsLatencyMarkers *this,uint param_1,ulong64 param_2)

{
  char cVar1;
  undefined1 auStackY_a8 [32];
  uint local_78 [2];
  ulong64 local_70;
  EVENT_DESCRIPTOR local_68;
  _EVENT_DATA_DESCRIPTOR local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  uint *local_38;
  undefined8 local_30;
  ulong64 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  cVar1 = (**(code **)(this->_padding_ + 0x10))();
  if ((cVar1 != '\0') && (5 < _Tlgg_hReflexStatsComponentProviderProv.LevelPlus1)) {
    local_68.Keyword = 0;
    local_28 = &local_70;
    local_38 = local_78;
    local_68._4_4_ = ZEXT24((ushort)_tlgEvent._2_2_);
    local_58.Ptr = (ULONGLONG)_Tlgg_hReflexStatsComponentProviderProv.ProviderMetadataPtr;
    local_20 = 8;
    local_30 = 4;
    local_68.Id = 0;
    local_68.Version = '\0';
    local_68.Channel = '\v';
    local_58.Size = (ULONG)*_Tlgg_hReflexStatsComponentProviderProv.ProviderMetadataPtr;
    local_48 = 0x153836688;
    local_58.Reserved = 2;
    local_40 = 0x25;
    local_3c = 1;
    local_78[1] = 0x140;
    local_78[0] = param_1;
    local_70 = param_2;
    EventWriteTransfer(_Tlgg_hReflexStatsComponentProviderProv.RegHandle,&local_68,(LPCGUID)0x0,
                       (LPCGUID)0x0,4,&local_58);
  }
  return;
}

// SetEnabled @ 14acd1700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FReflexStatsLatencyMarkers::SetEnabled(FReflexStatsLatencyMarkers *this,bool param_1)

{
  code *pcVar1;
  ulong64 RegHandle;
  GenericApplication *pGVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  ULONG UVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStackY_d8 [8];
  undefined1 auStackY_d0 [24];
  EVENT_DESCRIPTOR local_a0;
  EVENT_DESCRIPTOR local_90;
  GUID local_80;
  _EVENT_DATA_DESCRIPTOR local_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ushort *local_50;
  uint local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  puVar6 = auStackY_d8;
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentApplication.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                       ,0x141,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = IsInSlateThread();
    if (!bVar4) {
      bVar4 = (*IsInAsyncLoadingThread)();
      if (!bVar4) {
        bVar4 = IsInParallelLoadingThread();
        if (!bVar4) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                             ,0x142,L"");
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
    }
  }
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar3.ReferenceController =
       FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController;
  pGVar2 = FSlateApplicationBase::PlatformApplication.Object;
  if (FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController)
               ->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  if (pGVar2 == (GenericApplication *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("WindowsApplication",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Nvidia\\Reflex\\Source\\Private\\ReflexStatsLatencyMarkers.cpp"
                       ,0x20,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bReflexStatsEnabled != false) {
    if (g_ReflexStatsPingThread != (void *)0x0) {
      if (g_ReflexStatsQuitEvent != (void *)0x0) {
        SetEvent(g_ReflexStatsQuitEvent);
      }
      WaitForSingleObject(g_ReflexStatsPingThread,1000);
      g_ReflexStatsPingThread = (void *)0x0;
    }
    if (5 < _Tlgg_hReflexStatsComponentProviderProv.LevelPlus1) {
      local_a0._4_4_ = ZEXT24((ushort)_tlgEvent._2_2_);
      local_70.Ptr = (ULONGLONG)_Tlgg_hReflexStatsComponentProviderProv.ProviderMetadataPtr;
      local_a0.Id = 0;
      local_a0.Version = '\0';
      local_a0.Channel = '\v';
      local_a0.Keyword = 0;
      local_70.Size = (ULONG)*_Tlgg_hReflexStatsComponentProviderProv.ProviderMetadataPtr;
      local_60 = 0x153836646;
      local_70.Reserved = 2;
      local_58 = 0x17;
      local_54 = 1;
      EventWriteTransfer(_Tlgg_hReflexStatsComponentProviderProv.RegHandle,&local_a0,(LPCGUID)0x0,
                         (LPCGUID)0x0,2,&local_70);
    }
    RegHandle = _Tlgg_hReflexStatsComponentProviderProv.RegHandle;
    _Tlgg_hReflexStatsComponentProviderProv.RegHandle = 0;
    _Tlgg_hReflexStatsComponentProviderProv.LevelPlus1 = 0;
    EventUnregister(RegHandle);
    if (g_ReflexStatsQuitEvent != (void *)0x0) {
      CloseHandle(g_ReflexStatsQuitEvent);
      g_ReflexStatsQuitEvent = (void *)0x0;
    }
    (**(code **)(pGVar2->_padding_ + 0x128))(pGVar2,&this->_padding_);
    this->bReflexStatsEnabled = false;
  }
  puVar7 = auStackY_d8;
  if (!param_1) goto LAB_14acd1ad5;
  if (g_ReflexStatsWindowMessage == 0) {
    g_ReflexStatsWindowMessage = RegisterWindowMessageW(L"NVIDIA_Reflex_PC_Latency_Ping");
  }
  g_ReflexStatsVirtualKey = 0;
  g_ReflexStatsFlags = 0;
  if (g_ReflexStatsQuitEvent == (void *)0x0) {
    g_ReflexStatsQuitEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (g_ReflexStatsQuitEvent != (HANDLE)0x0) goto LAB_14acd19a2;
  }
  else {
LAB_14acd19a2:
    local_80.Data1 = *(ulong *)(_Tlgg_hReflexStatsComponentProviderProv.ProviderMetadataPtr + -8);
    local_80.Data2 = _Tlgg_hReflexStatsComponentProviderProv.ProviderMetadataPtr[-6];
    local_80.Data3 = _Tlgg_hReflexStatsComponentProviderProv.ProviderMetadataPtr[-5];
    local_80.Data4._0_4_ =
         *(undefined4 *)(_Tlgg_hReflexStatsComponentProviderProv.ProviderMetadataPtr + -4);
    local_80.Data4._4_4_ =
         *(undefined4 *)(_Tlgg_hReflexStatsComponentProviderProv.ProviderMetadataPtr + -2);
    puVar6 = auStackY_d8;
    if (_Tlgg_hReflexStatsComponentProviderProv.RegHandle != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar6 = auStackY_d0;
    }
    _Tlgg_hReflexStatsComponentProviderProv.CallbackContext = (void *)0x0;
    _Tlgg_hReflexStatsComponentProviderProv.EnableCallback = ReflexStatsComponentProviderCb;
    *(undefined8 *)(puVar6 + -8) = 0x14acd19f5;
    UVar5 = EventRegister(&local_80,_tlgEnableCallback,&_Tlgg_hReflexStatsComponentProviderProv,
                          &_Tlgg_hReflexStatsComponentProviderProv.RegHandle);
    if (UVar5 == 0) {
      *(undefined8 *)(puVar6 + -8) = 0x14acd1a16;
      EventSetInformation();
    }
    if (5 < _Tlgg_hReflexStatsComponentProviderProv.LevelPlus1) {
      local_90._4_4_ = ZEXT24((ushort)_tlgEvent._2_2_);
      local_50 = _Tlgg_hReflexStatsComponentProviderProv.ProviderMetadataPtr;
      local_90.Id = 0;
      local_90.Version = '\0';
      local_90.Channel = '\v';
      local_90.Keyword = 0;
      local_48 = (uint)*_Tlgg_hReflexStatsComponentProviderProv.ProviderMetadataPtr;
      local_40 = 0x153836669;
      *(ushort ***)(puVar6 + 0x28) = &local_50;
      local_44 = 2;
      local_38 = 0x13;
      local_34 = 1;
      *(undefined4 *)(puVar6 + 0x20) = 2;
      *(undefined8 *)(puVar6 + -8) = 0x14acd1a93;
      EventWriteTransfer(_Tlgg_hReflexStatsComponentProviderProv.RegHandle,&local_90,(LPCGUID)0x0,
                         (LPCGUID)0x0,*(ULONG *)(puVar6 + 0x20),
                         *(PEVENT_DATA_DESCRIPTOR *)(puVar6 + 0x28));
    }
    if (g_ReflexStatsPingThread == (void *)0x0) {
      *(undefined8 *)(puVar6 + 0x28) = 0;
      *(undefined4 *)(puVar6 + 0x20) = 0;
      *(undefined8 *)(puVar6 + -8) = 0x14acd1aba;
      g_ReflexStatsPingThread =
           CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,ReflexStatsPingThreadProc,(LPVOID)0x0,
                        *(DWORD *)(puVar6 + 0x20),*(LPDWORD *)(puVar6 + 0x28));
    }
  }
  pcVar1 = *(code **)(pGVar2->_padding_ + 0x120);
  *(undefined8 *)(puVar6 + -8) = 0x14acd1ad1;
  (*pcVar1)(pGVar2,&this->_padding_);
  this->bReflexStatsEnabled = true;
  puVar7 = puVar6;
LAB_14acd1ad5:
  *(undefined8 *)(puVar7 + -8) = 0x14acd1ae1;
  return;
}

// SetFlashIndicatorEnabled @ 14acd1b40

void __thiscall
FReflexStatsLatencyMarkers::SetFlashIndicatorEnabled(FReflexStatsLatencyMarkers *this,bool param_1)

{
  this->bFlashIndicatorEnabled = param_1;
  return;
}

// SetFlashIndicatorLatencyMarker @ 14acd1d10

void __thiscall
FReflexStatsLatencyMarkers::SetFlashIndicatorLatencyMarker
          (FReflexStatsLatencyMarkers *this,ulong64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014acd1d1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x70))(this,7,param_1);
  return;
}

// SetInputSampleLatencyMarker @ 14acd1de0

void __thiscall
FReflexStatsLatencyMarkers::SetInputSampleLatencyMarker
          (FReflexStatsLatencyMarkers *this,ulong64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014acd1deb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x70))(this,6,param_1);
  return;
}

// SetPresentLatencyMarkerEnd @ 14acd1eb0

void __thiscall
FReflexStatsLatencyMarkers::SetPresentLatencyMarkerEnd
          (FReflexStatsLatencyMarkers *this,ulong64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014acd1ebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x70))(this,5,param_1);
  return;
}

// SetPresentLatencyMarkerStart @ 14acd1f80

void __thiscall
FReflexStatsLatencyMarkers::SetPresentLatencyMarkerStart
          (FReflexStatsLatencyMarkers *this,ulong64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014acd1f8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x70))(this,4,param_1);
  return;
}

// SetRenderSubmitLatencyMarkerEnd @ 14acd2220

void __thiscall
FReflexStatsLatencyMarkers::SetRenderSubmitLatencyMarkerEnd
          (FReflexStatsLatencyMarkers *this,ulong64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014acd222b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x70))(this,3,param_1);
  return;
}

// SetRenderSubmitLatencyMarkerStart @ 14acd22f0

void __thiscall
FReflexStatsLatencyMarkers::SetRenderSubmitLatencyMarkerStart
          (FReflexStatsLatencyMarkers *this,ulong64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014acd22fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x70))(this,2,param_1);
  return;
}

// SetSimulationLatencyMarkerEnd @ 14acd23c0

void __thiscall
FReflexStatsLatencyMarkers::SetSimulationLatencyMarkerEnd
          (FReflexStatsLatencyMarkers *this,ulong64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014acd23cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x70))(this,1,param_1);
  return;
}

// SetSimulationLatencyMarkerStart @ 14acd2480

void __thiscall
FReflexStatsLatencyMarkers::SetSimulationLatencyMarkerStart
          (FReflexStatsLatencyMarkers *this,ulong64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014acd2488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x70))(this,0,param_1);
  return;
}

