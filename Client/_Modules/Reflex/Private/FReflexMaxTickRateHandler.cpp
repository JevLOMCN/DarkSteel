// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Reflex
// Functions: 9

// ~FReflexMaxTickRateHandler @ 14accf700

void __thiscall
FReflexMaxTickRateHandler::~FReflexMaxTickRateHandler(FReflexMaxTickRateHandler *this)

{
  this->_padding_ = (longlong)&_vftable__for__IMaxTickRateHandlerModule__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  return;
}

// Exec_Runtime @ 14accfc80

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
FReflexMaxTickRateHandler::Exec_Runtime
          (FReflexMaxTickRateHandler *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  TObjectPtr<UPlayer> *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  APlayerController *pAVar6;
  UClass *pUVar7;
  FStaticBasicLogRecord *pFVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  UPlayer *pUVar11;
  wchar_t *local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar10 = false;
  pUVar11 = (UPlayer *)0x0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_res18[0] = param_2;
  if (((param_1 != (UWorld *)0x0) &&
      (pAVar6 = UGameplayStatics::GetPlayerController((UObject *)param_1,0),
      pAVar6 != (APlayerController *)0x0)) &&
     (this_00 = &pAVar6->Player, (this_00->field0_0x0).DebugPtr != (UPlayer *)0x0)) {
    pUVar7 = Z_Construct_UClass_ULocalPlayer_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar7);
    if (bVar3) {
      pUVar11 = (this_00->field0_0x0).DebugPtr;
    }
  }
  bVar3 = FParse::Value(local_res18[0],L"ReflexMode=",&local_38,true,(wchar_t **)0x0);
  if (bVar3) {
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar9.Data = local_38.Data.AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,"0");
    if (iVar5 == 0) {
      (**(code **)(*(longlong *)&this[-1].LastCustomFlags + 8))(&this[-1].LastCustomFlags,0);
      if (((pUVar11 != (UPlayer *)0x0) &&
          (pAVar6 = pUVar11[1].PlayerController.field0_0x0.DebugPtr,
          pAVar6 != (APlayerController *)0x0)) &&
         (plVar1 = (longlong *)pAVar6->_padding_, plVar1 != (longlong *)0x0)) {
        pcVar2 = *(code **)(*plVar1 + 0x2d0);
        ::FString::FString(&local_28,"Reflex Low Latency mode: Off");
        (*pcVar2)(plVar1,&local_28);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      if (4 < (byte)LogMaxTickRateHandler._0_1_) {
        pFVar8 = &::LOG_Static;
        goto LAB_14accffe7;
      }
    }
    else {
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar9.Data = local_38.Data.AllocatorInstance.Data;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,"1");
      if (iVar5 == 0) {
        (**(code **)(*(longlong *)&this[-1].LastCustomFlags + 8))(&this[-1].LastCustomFlags,1);
        (**(code **)(*(longlong *)&this[-1].LastCustomFlags + 0x20))(&this[-1].LastCustomFlags,1);
        if (((pUVar11 != (UPlayer *)0x0) &&
            (pAVar6 = pUVar11[1].PlayerController.field0_0x0.DebugPtr,
            pAVar6 != (APlayerController *)0x0)) &&
           (plVar1 = (longlong *)pAVar6->_padding_, plVar1 != (longlong *)0x0)) {
          pcVar2 = *(code **)(*plVar1 + 0x2d0);
          ::FString::FString(&local_28,"Reflex Low Latency mode: On");
          (*pcVar2)(plVar1,&local_28);
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
        }
        if (4 < (byte)LogMaxTickRateHandler._0_1_) {
          pFVar8 = &::LOG_Static;
          goto LAB_14accffe7;
        }
      }
      else {
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_38.Data.ArrayNum != 0) {
          FVar9.Data = local_38.Data.AllocatorInstance.Data;
        }
        iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,"2");
        if (iVar5 == 0) {
          (**(code **)(*(longlong *)&this[-1].LastCustomFlags + 8))(&this[-1].LastCustomFlags,1);
          (**(code **)(*(longlong *)&this[-1].LastCustomFlags + 0x20))(&this[-1].LastCustomFlags,3);
          if (((pUVar11 != (UPlayer *)0x0) &&
              (pAVar6 = pUVar11[1].PlayerController.field0_0x0.DebugPtr,
              pAVar6 != (APlayerController *)0x0)) &&
             (plVar1 = (longlong *)pAVar6->_padding_, plVar1 != (longlong *)0x0)) {
            pcVar2 = *(code **)(*plVar1 + 0x2d0);
            ::FString::FString(&local_28,"Reflex Low Latency mode: On+Boost");
            (*pcVar2)(plVar1,&local_28);
            if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.Data.AllocatorInstance.Data);
            }
          }
          if (4 < (byte)LogMaxTickRateHandler._0_1_) {
            pFVar8 = &::LOG_Static;
            goto LAB_14accffe7;
          }
        }
      }
    }
    goto LAB_14accfff3;
  }
  bVar3 = FParse::Command(local_res18,L"ReflexModeToggle",true);
  if (!bVar3) goto LAB_14accfff5;
  cVar4 = (**(code **)(*(longlong *)&this[-1].LastCustomFlags + 0x10))(&this[-1].LastCustomFlags);
  pcVar2 = *(code **)(*(longlong *)&this[-1].LastCustomFlags + 8);
  if (cVar4 == '\0') {
    (*pcVar2)(&this[-1].LastCustomFlags,1);
    (**(code **)(*(longlong *)&this[-1].LastCustomFlags + 0x20))(&this[-1].LastCustomFlags,1);
    if (((pUVar11 != (UPlayer *)0x0) &&
        (pAVar6 = pUVar11[1].PlayerController.field0_0x0.DebugPtr,
        pAVar6 != (APlayerController *)0x0)) &&
       (plVar1 = (longlong *)pAVar6->_padding_, plVar1 != (longlong *)0x0)) {
      pcVar2 = *(code **)(*plVar1 + 0x2d0);
      ::FString::FString(&local_28,"Reflex Low Latency mode: On");
      (*pcVar2)(plVar1,&local_28);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if (4 < (byte)LogMaxTickRateHandler._0_1_) {
      pFVar8 = &::LOG_Static;
      goto LAB_14accffe7;
    }
  }
  else {
    (*pcVar2)(&this[-1].LastCustomFlags,0);
    if (((pUVar11 != (UPlayer *)0x0) &&
        (pAVar6 = pUVar11[1].PlayerController.field0_0x0.DebugPtr,
        pAVar6 != (APlayerController *)0x0)) &&
       (plVar1 = (longlong *)pAVar6->_padding_, plVar1 != (longlong *)0x0)) {
      pcVar2 = *(code **)(*plVar1 + 0x2d0);
      ::FString::FString(&local_28,"Reflex Low Latency mode: Off");
      (*pcVar2)(plVar1,&local_28);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if (4 < (byte)LogMaxTickRateHandler._0_1_) {
      pFVar8 = &::LOG_Static;
LAB_14accffe7:
      UE::Logging::Private::BasicLog<5>(pFVar8,(FLogCategoryBase *)&LogMaxTickRateHandler);
    }
  }
LAB_14accfff3:
  bVar10 = true;
LAB_14accfff5:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar10;
}

// GetAvailable @ 14acd0040

bool __thiscall FReflexMaxTickRateHandler::GetAvailable(FReflexMaxTickRateHandler *this)

{
  bool bVar1;
  
  if ((DisableCustomTickRateHandler != 1) && (this->bProperDriverVersion != false)) {
    bVar1 = IsRHIDeviceNVIDIA();
    if (bVar1) {
      return this->bFeatureSupport != false;
    }
  }
  return false;
}

// GetEnabled @ 14acd00f0

bool __thiscall FReflexMaxTickRateHandler::GetEnabled(FReflexMaxTickRateHandler *this)

{
  bool bVar1;
  
  if ((DisableCustomTickRateHandler != 1) && (this->bProperDriverVersion != false)) {
    bVar1 = IsRHIDeviceNVIDIA();
    if ((bVar1) && (this->bFeatureSupport != false)) {
      return this->bEnabled;
    }
  }
  return false;
}

// GetFlags @ 14acd0140

uint __thiscall FReflexMaxTickRateHandler::GetFlags(FReflexMaxTickRateHandler *this)

{
  return this->CustomFlags;
}

// HandleMaxTickRate @ 14acd0c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FReflexMaxTickRateHandler::HandleMaxTickRate(FReflexMaxTickRateHandler *this,float param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  float fVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  FScopeIdle local_70;
  LARGE_INTEGER local_68;
  code *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((((DisableCustomTickRateHandler == 0) && (this->bProperDriverVersion != false)) &&
      (bVar2 = IsRHIDeviceNVIDIA(), bVar2)) && (this->bFeatureSupport != false)) {
    if (this->bEnabled != false) {
      fVar7 = 0.0;
      if (0.0 < param_1) {
        fVar7 = __real_49742400 / param_1;
      }
      if ((fVar7 != this->MinimumInterval) || (this->LastCustomFlags != this->CustomFlags)) {
        this->MinimumInterval = fVar7;
        local_30 = 0;
        local_28 = 0;
        uVar1._0_1_ = this->bLowLatencyMode;
        uVar1._1_1_ = this->bBoost;
        local_50 = CONCAT44((uint)uVar1,0x1002c);
        local_40 = 0;
        uStack_38 = 0;
        uStack_48 = (ulonglong)CONCAT14(DisableLatencyMarkerOptimize == 0,(int)(longlong)fVar7);
        uVar4 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
        iVar3 = NvAPI_D3D_SetSleepMode(uVar4);
        if ((this->bLowLatencyMode != false) && (iVar3 != 0)) {
          if (2 < (byte)LogMaxTickRateHandler._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogMaxTickRateHandler);
          }
          this->CustomFlags = this->CustomFlags & 0xfffffffe;
          this->bLowLatencyMode = false;
        }
        this->LastCustomFlags = this->CustomFlags;
        this->bWasEnabled = true;
      }
      uVar4 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
      UE::Stats::FThreadIdleStats::FScopeIdle::FScopeIdle(&local_70,false);
      NvAPI_D3D_Sleep(uVar4);
      if (local_70.bIgnore == false) {
        puVar5 = TThreadSingleton<UE::Stats::FThreadIdleStats>::GetTlsSlot();
        local_58 = local_78;
        local_60 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                   ::Call;
        pFVar6 = FThreadSingletonInitializer::Get
                           ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_60,puVar5);
        QueryPerformanceCounter(&local_68);
        *(DWORD *)(pFVar6 + 2) = *(int *)(pFVar6 + 2) + (local_68.s.LowPart - local_70.Start);
        if (0 < *(int *)(pFVar6 + 3)) {
          *(DWORD *)&pFVar6[2].field_0x4 =
               *(int *)&pFVar6[2].field_0x4 + (local_68.s.LowPart - local_70.Start);
        }
        pFVar6[3].field_0x4 = 0;
      }
      if (local_70.TraceEventScope.bEnabled != false) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    if (this->bWasEnabled != false) {
      local_30 = 0;
      local_28 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_50 = 0x1002c;
      uStack_48 = 0;
      uVar4 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
      NvAPI_D3D_SetSleepMode(uVar4,&local_50);
      if (4 < (byte)LogMaxTickRateHandler._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMaxTickRateHandler);
      }
      this->MinimumInterval = -1.0;
      this->LastCustomFlags = 0;
      this->bWasEnabled = false;
      this->bLowLatencyMode = true;
      this->bBoost = false;
    }
  }
  return false;
}

// Initialize @ 14acd0f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FReflexMaxTickRateHandler::Initialize(FReflexMaxTickRateHandler *this)

{
  bool bVar1;
  int iVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  undefined1 auStack_128 [32];
  uint local_108 [2];
  FString local_100;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  iVar2 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if ((iVar2 != 2) && (iVar2 = (**(code **)(GDynamicRHI->_padding_ + 0x28))(), iVar2 != 3)) {
    return;
  }
  bVar1 = IsRHIDeviceNVIDIA();
  if (bVar1) {
    pwVar3 = (wchar_t *)(**(code **)(GDynamicRHI->_padding_ + 0x20))();
    ::FString::FString(&local_100,pwVar3);
    bVar1 = ::FString::StartsWith(&local_100,L"Vulkan",6,IgnoreCase);
    if (!bVar1) {
      NvAPI_SYS_GetDriverAndBranchVersion(local_108,local_58);
      if (0xb1bb < local_108[0]) {
        this->bProperDriverVersion = true;
      }
      local_e8 = 0x10088;
      local_e4 = 0;
      uStack_dc = 0;
      local_64 = 0;
      local_d4 = 0;
      uStack_cc = 0;
      local_c4 = 0;
      uStack_bc = 0;
      local_b4 = 0;
      uStack_ac = 0;
      local_a4 = 0;
      uStack_9c = 0;
      local_94 = 0;
      uStack_8c = 0;
      local_84 = 0;
      uStack_7c = 0;
      local_74 = 0;
      uStack_6c = 0;
      uVar4 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
      iVar2 = NvAPI_D3D_GetSleepStatus(uVar4,&local_e8);
      if (iVar2 == 0) {
        this->bFeatureSupport = true;
      }
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetEnabled @ 14acd16f0

void __thiscall FReflexMaxTickRateHandler::SetEnabled(FReflexMaxTickRateHandler *this,bool param_1)

{
  this->bEnabled = param_1;
  return;
}

// SetFlags @ 14acd1b10

void __thiscall FReflexMaxTickRateHandler::SetFlags(FReflexMaxTickRateHandler *this,uint param_1)

{
  this->CustomFlags = param_1;
  this->bLowLatencyMode = (param_1 & 1) != 0;
  this->bBoost = (param_1 & 2) != 0;
  return;
}

