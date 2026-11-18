// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// CanExecuteOnlyOnMainThread @ 149b67c20

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
FPCGExecuteBlueprintElement::CanExecuteOnlyOnMainThread
          (FPCGExecuteBlueprintElement *this,FPCGContext *param_1)

{
  UPCGBlueprintBaseElement *pUVar1;
  UPCGBlueprintSettings *pUVar2;
  
  if ((param_1 != (FPCGContext *)0x0) &&
     ((param_1->CurrentPhase != PostExecute || (param_1[1]._padding_ == 0)))) {
    pUVar2 = FPCGContext::GetInputSettings<UPCGBlueprintSettings>(param_1);
    if ((pUVar2 != (UPCGBlueprintSettings *)0x0) &&
       (pUVar1 = (pUVar2->BlueprintElementInstance).field0_0x0.DebugPtr,
       pUVar1 != (UPCGBlueprintBaseElement *)0x0)) {
      return pUVar1->bRequiresGameThread;
    }
    return false;
  }
  return true;
}

// ExecuteInternal @ 149b7fb10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGExecuteBlueprintElement::ExecuteInternal(FPCGExecuteBlueprintElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  UClass *pUVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  FPCGContext *this_00;
  UPCGBlueprintElement *this_01;
  UPCGBlueprintElement *pUVar13;
  uint uVar14;
  undefined4 local_res10 [2];
  FObjectPtr_u_0 local_res18;
  longlong local_res20;
  FName local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FText local_c0;
  FText local_b0;
  FTextFormat local_a0;
  FPCGContextBlueprintScope local_90;
  FPCGContextBlueprintScope local_68;
  
  this_01 = (UPCGBlueprintElement *)0x0;
  local_res10[0] = 0;
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGExecuteBlueprint.cpp"
                         ,0x1ca,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (param_1[1]._padding_ == 0) {
    FPCGDataCollection::operator=(&param_1->OutputData,&param_1->InputData);
  }
  else {
    lVar12 = *(longlong *)(param_1[1]._padding_ + 0x10);
    pUVar13 = this_01;
    if (lVar12 != 0) {
      local_108 = *(FName *)(lVar12 + 0x18);
      pFVar7 = ::FName::ToString(&local_108,&local_f0);
      if ((pFVar7->Data).ArrayNum == 0) {
        pUVar13 = (UPCGBlueprintElement *)&DAT_00000001;
      }
      else {
        pUVar13 = (UPCGBlueprintElement *)&DAT_00000001;
      }
    }
    ::FString::PrintfImpl(&local_100,L"FPCGExecuteBlueprintElement::Execute (%s)");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_100.Data.ArrayNum != 0) {
      FVar11.Data = local_100.Data.AllocatorInstance.Data;
    }
    bVar2 = -1 < CpuChannel->Enabled;
    if (bVar2) {
      FCpuProfilerTrace::OutputBeginDynamicEvent
                ((wchar_t *)FVar11.Data,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGExecuteBlueprint.cpp"
                 ,0x1d1);
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if ((pUVar13 != (UPCGBlueprintElement *)0x0) &&
       (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (0 < (param_1->InputData).TaggedData.ArrayNum) {
      local_res20 = 0;
      pUVar13 = this_01;
      do {
        lVar12 = local_res20;
        uVar14 = (uint)pUVar13;
        uVar5 = 0;
        if ((int)uVar14 < (param_1->InputData).TaggedData.ArrayNum) {
          uVar5 = ~uVar14 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        local_res18 = (FObjectPtr_u_0)
                      ((FObjectPtr_u_0 *)
                      ((param_1->InputData).TaggedData.AllocatorInstance.Data + lVar12))->Handle;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b7fcd6:
          if (local_res18.Handle != (UObject *)0x0) {
            pUVar8 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
            bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_res18,pUVar8);
            if (((bVar4) && (local_res18.Handle != (UObject *)0x0)) && (5 < (byte)LogPCG._0_1_)) {
              iVar6 = (**(code **)(*(longlong *)local_res18.Handle + 0x488))();
              pFVar9 = FText::AsLocalizable_Advanced_LocText
                                 (&local_b0,L"PCGExecuteBlueprint",L"InputPointInfo",
                                  L"Input {0} has {1} points");
              pFVar10 = FTextFormat::FTextFormat(&local_a0,pFVar9,Default);
              pFVar9 = FText::Format<int,int>(&local_c0,pFVar10,uVar14,iVar6);
              FText::ToString(pFVar9);
              FPCGContext::GetTaskName(param_1,&local_d0);
              FPCGContext::GetExecutionSourceName(param_1,&local_e0);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e0.Data.AllocatorInstance.Data);
              }
              if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d0.Data.AllocatorInstance.Data);
              }
              if (local_c0.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
              }
              lVar12 = local_res20;
              if (local_b0.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
                lVar12 = local_res20;
              }
            }
          }
        }
        else if (local_res18.Handle != (UObject *)0x0) {
          UE::GC::MarkAsReachable(local_res18.Handle);
          goto LAB_149b7fcd6;
        }
        local_res20 = lVar12 + 0x78;
        pUVar13 = (UPCGBlueprintElement *)(ulonglong)(uVar14 + 1);
      } while ((int)(uVar14 + 1) < (param_1->InputData).TaggedData.ArrayNum);
    }
    this_00 = param_1 + 1;
    UPCGBlueprintBaseElement::SetCurrentContext
              ((UPCGBlueprintBaseElement *)this_00->_padding_,param_1);
    if (this_00->_padding_ != 0) {
      pUVar8 = Z_Construct_UClass_UPCGBlueprintElement_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar8);
      if (bVar4) {
        this_01 = (UPCGBlueprintElement *)this_00->_padding_;
      }
    }
    bVar4 = IsInGameThread();
    if (bVar4) {
      if (this_01 == (UPCGBlueprintElement *)0x0) {
        UPCGBlueprintBaseElement::Execute
                  ((UPCGBlueprintBaseElement *)param_1[1]._padding_,&param_1->InputData,
                   &param_1->OutputData);
      }
      else {
        FPCGContextBlueprintScope::FPCGContextBlueprintScope(&local_68,param_1);
        UPCGBlueprintElement::ExecuteWithContext
                  (this_01,param_1,&param_1->InputData,&param_1->OutputData);
        FPCGContextBlueprintScope::~FPCGContextBlueprintScope(&local_68);
      }
    }
    else {
      if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3046246228028293621>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGExecuteBlueprint.cpp"
                             ,0x1f5,"!Context->AsyncState.bIsRunningOnMainThread"), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_res10);
      if (this_01 == (UPCGBlueprintElement *)0x0) {
        UPCGBlueprintBaseElement::Execute
                  ((UPCGBlueprintBaseElement *)this_00->_padding_,&param_1->InputData,
                   &param_1->OutputData);
        FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_res10);
      }
      else {
        FPCGContextBlueprintScope::FPCGContextBlueprintScope(&local_90,param_1);
        UPCGBlueprintElement::ExecuteWithContext
                  (this_01,param_1,&param_1->InputData,&param_1->OutputData);
        FPCGContextBlueprintScope::~FPCGContextBlueprintScope(&local_90);
        FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_res10);
      }
    }
    UPCGBlueprintBaseElement::SetCurrentContext
              ((UPCGBlueprintBaseElement *)param_1[1]._padding_,(FPCGContext *)0x0);
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
      return true;
    }
  }
  return true;
}

// Initialize @ 149b91b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FPCGContext * __thiscall
FPCGExecuteBlueprintElement::Initialize
          (FPCGExecuteBlueprintElement *this,FPCGInitializeElementParams *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  FPCGContext *this_00;
  UPCGBlueprintSettings *pUVar4;
  UPackage *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  IPCGGraphExecutionSource *pIVar8;
  longlong *plVar9;
  undefined8 uVar10;
  FString *pFVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  bool bVar14;
  FString local_28;
  FString local_18;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId646,"FPCGExecuteBlueprintElement::Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGExecuteBlueprint.cpp"
               ,0x286);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId646);
  }
  this_00 = ::operator_new(0x260);
  if (this_00 == (FPCGContext *)0x0) {
    this_00 = (FPCGContext *)0x0;
  }
  else {
    memset(this_00,0,0x260);
    FPCGContext::FPCGContext(this_00);
    this_00->_padding_ = (longlong)&___7FPCGBlueprintExecutionContext__6B_;
    this_00[1]._padding_ = 0;
  }
  FPCGContext::InitFromParams(this_00,param_1);
  pUVar4 = FPCGContext::GetInputSettings<UPCGBlueprintSettings>(this_00);
  if ((pUVar4 == (UPCGBlueprintSettings *)0x0) ||
     ((pUVar4->BlueprintElementInstance).field0_0x0.DebugPtr == (UPCGBlueprintBaseElement *)0x0)) {
    this_00[1]._padding_ = 0;
  }
  else {
    pUVar5 = GetTransientPackage();
    pUVar6 = StaticDuplicateObject
                       ((UObject *)(pUVar4->BlueprintElementInstance).field0_0x0.DebugPtr,
                        (UObject *)pUVar5,(FName)0x0,
                        RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                        RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                        RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                        RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                        RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                        RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                        RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                        RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                        RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|
                        RF_Public,(UClass *)0x0,Normal,
                        PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                        ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                        AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                        ReachabilityFlag0);
    if (pUVar6 == (UObject *)0x0) {
      pFVar11 = GetTypeName<UPCGBlueprintBaseElement>(&local_28);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar12);
    }
    pUVar7 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      pFVar11 = GetTypeName<UPCGBlueprintBaseElement>(&local_28);
      pwVar12 = L"";
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      pFVar11 = GetFullNameForCastLogError<UObject>(&local_18,pUVar6);
      if ((pFVar11->Data).ArrayNum != 0) {
        pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar12,pwVar13);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    this_00[1]._padding_ = (longlong)pUVar6;
    if (((this_00->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
       (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this_00->ExecutionSource), bVar3)) {
      lVar2 = this_00[1]._padding_;
      pIVar8 = TWeakInterfacePtr<IPCGGraphExecutionSource>::operator->(&this_00->ExecutionSource);
      plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x18))(pIVar8);
      uVar10 = (**(code **)(*plVar9 + 0x20))(plVar9);
      *(undefined8 *)(lVar2 + 0x58) = uVar10;
    }
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return this_00;
}

// IsCacheable @ 149b931f0

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
FPCGExecuteBlueprintElement::IsCacheable(FPCGExecuteBlueprintElement *this,UPCGSettings *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if (param_1 != (UPCGSettings *)0x0) {
    pUVar3 = UPCGBlueprintSettings::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar3->_padding_)) &&
       ((UPCGBlueprintBaseElement *)param_1[1]._padding_ != (UPCGBlueprintBaseElement *)0x0)) {
      bVar2 = UPCGBlueprintBaseElement::IsCacheableOverride
                        ((UPCGBlueprintBaseElement *)param_1[1]._padding_);
      return bVar2;
    }
  }
  return false;
}

// PostExecuteInternal @ 149b95110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FPCGExecuteBlueprintElement::PostExecuteInternal
          (FPCGExecuteBlueprintElement *this,FPCGContext *param_1)

{
  TObjectPtr<UPCGData_const_>_u_0 TVar1;
  UPCGMetadata *pUVar2;
  longlong *plVar3;
  code *pcVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  UClass *pUVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  FUObjectItem *pFVar12;
  UPackage *pUVar13;
  longlong lVar14;
  UPCGData *pUVar15;
  FObjectPtr_u_0 FVar16;
  uint uVar17;
  ForElementType<FSetElementId> FVar18;
  UPCGData *pUVar19;
  longlong *plVar20;
  longlong lVar21;
  TObjectPtr<UPCGMetadata_const_>_u_0 *pTVar22;
  FPCGDataPtrWrapper *pFVar23;
  FPCGDataPtrWrapper *pFVar24;
  undefined1 auStackY_1b8 [32];
  uint local_188;
  undefined1 local_184;
  undefined1 local_183 [3];
  longlong local_180;
  FObjectPtr_u_0 local_178;
  FObjectPtr_u_0 local_170;
  TObjectPtr<UObject_const_> local_168;
  TObjectPtr<UPCGData_const_>_u_0 local_160;
  TObjectPtr<UPCGData_const_>_u_0 local_158;
  FPCGExecuteBlueprintElement *local_150;
  TObjectPtr<UPCGData_const_>_u_0 local_148 [2];
  code *local_138;
  undefined1 *local_130;
  code *local_128;
  code **local_120;
  FString local_118;
  FString local_108;
  FText local_f8;
  FText local_e8;
  FTextFormat local_d8;
  TSet<TObjectPtr<UObject_const_>,DefaultKeyFuncs<TObjectPtr<UObject_const_>,0>,FDefaultSetAllocator>
  local_c8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_150 = this;
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGExecuteBlueprint.cpp"
                         ,0x21d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_1[1]._padding_ != 0) {
    bVar6 = IsInGameThread();
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGExecuteBlueprint.cpp"
                           ,0x222,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (param_1->InputData).TaggedData.ArrayNum;
    pFVar24 = (FPCGDataPtrWrapper *)(param_1->InputData).TaggedData.AllocatorInstance.Data;
    local_c8.Elements._0_8_ = 0;
    pFVar23 = (FPCGDataPtrWrapper *)((longlong)pFVar24 + (longlong)iVar8 * 0x78);
    local_c8.Elements._8_8_ = 0;
    local_c8.Elements._32_8_ = 0;
    local_c8.Elements._40_4_ = 0;
    local_c8.Elements._44_4_ = 0x80;
    local_c8.Elements._48_4_ = 0xffffffff;
    local_c8.Elements._52_4_ = 0;
    local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_c8.HashSize = 0;
    while( true ) {
      if ((param_1->InputData).TaggedData.ArrayNum != iVar8) {
        local_184 = 0;
        `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_184);
      }
      if (pFVar24 == pFVar23) break;
      if ((pFVar24->Data).field0_0x0.DebugPtr != (UPCGData *)0x0) {
        FPCGDataPtrWrapper::FPCGDataPtrWrapper
                  ((FPCGDataPtrWrapper *)&local_148[0].ObjectPtr,pFVar24);
        local_160.DebugPtr = local_148[0].DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_148[0].DebugPtr != (UPCGData *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_148[0].DebugPtr);
        }
        TSet<TObjectPtr<UObject_const_>,DefaultKeyFuncs<TObjectPtr<UObject_const_>,0>,FDefaultSetAllocator>
        ::Emplace<TObjectPtr<UObject_const_>_>(&local_c8,&local_168,(bool *)&local_160);
        FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_148[0].ObjectPtr);
      }
      pFVar24 = (FPCGDataPtrWrapper *)&pFVar24[7].WeakData;
    }
    local_188 = 0;
    if (0 < (param_1->OutputData).TaggedData.ArrayNum) {
      local_180 = 0;
      do {
        lVar21 = local_180;
        uVar17 = 0;
        if ((int)local_188 < (param_1->OutputData).TaggedData.ArrayNum) {
          uVar17 = ~local_188 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar24 = (FPCGDataPtrWrapper *)
                  ((param_1->OutputData).TaggedData.AllocatorInstance.Data + lVar21);
        local_178.Handle = (UObject *)(pFVar24->Data).field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b9530a:
          if ((UPCGData *)local_178.Handle != (UPCGData *)0x0) {
            pUVar9 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
            bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_178,pUVar9);
            if (((bVar6) && ((UPCGData *)local_178.Handle != (UPCGData *)0x0)) &&
               (5 < (byte)LogPCG._0_1_)) {
              iVar8 = (**(code **)(*(longlong *)local_178.Handle + 0x488))();
              pFVar10 = FText::AsLocalizable_Advanced_LocText
                                  (&local_e8,L"PCGExecuteBlueprint",L"OutputPointInfo",
                                   L"Output {0} has {1} points");
              pFVar11 = FTextFormat::FTextFormat(&local_d8,pFVar10,Default);
              pFVar10 = FText::Format<int,int>(&local_f8,pFVar11,local_188,iVar8);
              FText::ToString(pFVar10);
              FPCGContext::GetTaskName(param_1,&local_108);
              FPCGContext::GetExecutionSourceName(param_1,&local_118);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_118.Data.AllocatorInstance.Data);
              }
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
              if (local_f8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
              }
              lVar21 = local_180;
              if (local_e8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
                lVar21 = local_180;
              }
            }
          }
        }
        else if ((UPCGData *)local_178.Handle != (UPCGData *)0x0) {
          UE::GC::MarkAsReachable(local_178.Handle);
          goto LAB_149b9530a;
        }
        pUVar15 = (pFVar24->Data).field0_0x0.DebugPtr;
        if (pUVar15 != (UPCGData *)0x0) {
          pFVar12 = FUObjectArray::IndexToObject
                              (&GUObjectArray,*(int *)((longlong)&pUVar15->_padding_ + 4));
          if (((ulonglong)((pFVar12->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1a & 1) != 0) {
            TVar1 = (TObjectPtr<UPCGData_const_>_u_0)(pFVar24->Data).field0_0x0.DebugPtr;
            local_158 = TVar1;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (TVar1.DebugPtr != (UPCGData *)0x0) {
                UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (TVar1.DebugPtr != (UPCGData *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
              }
            }
            uVar17 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
                     (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
            uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
            iVar8 = TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<TObjectPtr<UObject_const_>_>
                              (&param_1->AsyncObjects,uVar17 >> 0x10 ^ uVar17,
                               (TObjectPtr<UObject_const_> *)&local_158.ObjectPtr);
            if (iVar8 == -1) {
              pUVar15 = (pFVar24->Data).field0_0x0.DebugPtr;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                if (pUVar15 != (UPCGData *)0x0) {
                  UE::GC::MarkAsReachable((UObject *)pUVar15);
                }
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar15 != (UPCGData *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar15);
                }
              }
              uVar17 = ((uint)((ulonglong)pUVar15 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)pUVar15 >> 4)) * -0x7a143595;
              uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
              if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
                FVar18 = (ForElementType<FSetElementId>)&local_c8.Hash;
                if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar18 = local_c8.Hash.SecondaryData;
                }
                for (iVar8 = *(int *)((longlong)FVar18 +
                                     (ulonglong)(local_c8.HashSize - 1U & (uVar17 >> 0x10 ^ uVar17))
                                     * 4); iVar8 != -1;
                    iVar8 = *(int *)(local_c8.Elements._0_8_ + 8 + (longlong)iVar8 * 0x10)) {
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar15 != (UPCGData *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)pUVar15);
                  }
                  pUVar19 = *(UPCGData **)(local_c8.Elements._0_8_ + (longlong)iVar8 * 0x10);
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar19 != (UPCGData *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)pUVar19);
                  }
                  if (pUVar19 == pUVar15) {
                    if (iVar8 != -1) goto LAB_149b95648;
                    break;
                  }
                }
              }
              pFVar12 = FUObjectArray::IndexToObject
                                  (&GUObjectArray,
                                   *(int *)((longlong)
                                            &((pFVar24->Data).field0_0x0.DebugPtr)->_padding_ + 4));
              FUObjectItem::ClearRootFlags(pFVar12,Async);
              local_138 = UE::Core::Private::Function::
                          TFunctionRefCaller<`FPCGExecuteBlueprintElement::PostExecuteInternal'::__l48::<lambda_3>,void,UObject_*>
                          ::Call;
              local_130 = local_183;
              local_120 = &local_138;
              local_128 = UE::Core::Private::Function::
                          TFunctionRefCaller<`ForEachObjectWithOuter'::__l2::<lambda_1>,bool,UObject_*>
                          ::Call;
              ForEachObjectWithOuterBreakable
                        ((UObjectBase *)(pFVar24->Data).field0_0x0.DebugPtr,
                         (TFunctionRef<bool___cdecl(UObject_*)> *)&local_128,true,RF_NoFlags,
                         Borrowed);
            }
          }
LAB_149b95648:
          pUVar15 = (pFVar24->Data).field0_0x0.DebugPtr;
          bVar6 = false;
          pUVar19 = pUVar15;
          if (pUVar15 != (UPCGData *)0x0) {
            do {
              if (bVar6) goto LAB_149b9568b;
              pUVar19 = (UPCGData *)pUVar19->_padding_;
              if ((UPCGData *)param_1[1]._padding_ == (UPCGData *)0x0) {
                bVar6 = pUVar19 == (UPCGData *)0x0;
              }
              else {
                bVar6 = (UPCGData *)param_1[1]._padding_ == pUVar19;
              }
            } while (pUVar19 != (UPCGData *)0x0);
            if (bVar6) {
LAB_149b9568b:
              pcVar4 = *(code **)(pUVar15->_padding_ + 0x170);
              pUVar13 = GetTransientPackage();
              (*pcVar4)(pUVar15,0,pUVar13);
            }
            pUVar9 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
            iVar8 = (int)pUVar9->_padding_;
            if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar8) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
                &pUVar9->_padding_)) {
              pUVar9 = Z_Construct_UClass_UPCGParamData_NoRegister();
              iVar8 = (int)pUVar9->_padding_;
              if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar8) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar8 * 8)
                  != &pUVar9->_padding_)) goto LAB_149b95779;
            }
            pUVar2 = (pUVar15->Metadata).field0_0x0.DebugPtr;
            if (pUVar2 != (UPCGMetadata *)0x0) {
              pTVar22 = &(pUVar2->Parent).field0_0x0;
              pUVar2 = (pUVar2->Parent).field0_0x0.DebugPtr;
              while (pUVar2 != (UPCGMetadata *)0x0) {
                plVar3 = (longlong *)pUVar2->_padding_;
                bVar6 = false;
                plVar20 = plVar3;
                if (plVar3 != (longlong *)0x0) {
                  do {
                    if (bVar6) goto LAB_149b9574b;
                    plVar20 = (longlong *)plVar20[4];
                    if ((longlong *)param_1[1]._padding_ == (longlong *)0x0) {
                      bVar6 = plVar20 == (longlong *)0x0;
                    }
                    else {
                      bVar6 = (longlong *)param_1[1]._padding_ == plVar20;
                    }
                  } while (plVar20 != (longlong *)0x0);
                  if (bVar6) {
LAB_149b9574b:
                    pcVar4 = *(code **)(*plVar3 + 0x170);
                    pUVar13 = GetTransientPackage();
                    (*pcVar4)(plVar3,0,pUVar13);
                  }
                }
                pTVar22 = (TObjectPtr<UPCGMetadata_const_>_u_0 *)
                          ((longlong)pTVar22->DebugPtr + 0x28);
                pUVar2 = pTVar22->DebugPtr;
              }
            }
          }
LAB_149b95779:
          pTVar5 = CVarPCGEnablePointArrayData.Ref;
          bVar6 = IsInParallelGameThread();
          if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
            lVar14 = 0;
          }
          else {
            lVar14 = 1;
          }
          lVar21 = local_180;
          if ((pTVar5->ShadowedValue[lVar14] != false) &&
             (cVar7 = (**(code **)((longlong)*local_150 + 0xb0))(local_150,param_1),
             lVar21 = local_180, cVar7 == '\0')) {
            local_170.Handle = (UObject *)(pFVar24->Data).field0_0x0.DebugPtr;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b957e5:
              if ((UPCGData *)local_170.Handle == (UPCGData *)0x0) goto LAB_149b95807;
              pUVar9 = Z_Construct_UClass_UPCGPointData_NoRegister();
              bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_170,pUVar9);
              FVar16 = local_170;
              if (!bVar6) goto LAB_149b95807;
            }
            else {
              if ((UPCGData *)local_170.Handle != (UPCGData *)0x0) {
                UE::GC::MarkAsReachable(local_170.Handle);
                goto LAB_149b957e5;
              }
LAB_149b95807:
              FVar16.Handle = (UObject *)0x0;
            }
            lVar21 = local_180;
            if ((UPCGData *)FVar16.Handle != (UPCGData *)0x0) {
              local_48 = 0;
              local_47 = 0;
              local_43 = 0;
              local_41 = 0;
              local_78 = 0;
              uStack_70 = 0;
              local_68 = 0;
              uStack_60 = 0;
              local_58 = 0;
              uStack_50 = 0;
              pUVar15 = (UPCGData *)
                        (**(code **)(*(longlong *)FVar16.Handle + 0x3b8))(0,param_1,&local_78);
              FPCGDataPtrWrapper::operator=(pFVar24,pUVar15);
              lVar21 = local_180;
            }
          }
        }
        local_188 = local_188 + 1;
        local_180 = lVar21 + 0x78;
      } while ((int)local_188 < (param_1->OutputData).TaggedData.ArrayNum);
    }
    local_c8.HashSize = 0;
    if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_c8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TObjectPtr<UObject_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TObjectPtr<UObject_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_c8.Elements);
  }
  return;
}

// ShouldComputeFullOutputDataCrc @ 149b980e0

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
FPCGExecuteBlueprintElement::ShouldComputeFullOutputDataCrc
          (FPCGExecuteBlueprintElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  UPCGBlueprintSettings *pUVar5;
  
  if (param_1 == (FPCGContext *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGExecuteBlueprint.cpp"
                       ,0x2ad,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar5 = FPCGContext::GetInputSettings<UPCGBlueprintSettings>(param_1);
  if ((pUVar5 != (UPCGBlueprintSettings *)0x0) &&
     ((pUVar5->BlueprintElementInstance).field0_0x0.DebugPtr != (UPCGBlueprintBaseElement *)0x0)) {
    cVar4 = (**(code **)((longlong)*this + 0x20))(this,pUVar5);
    if ((cVar4 == '\0') &&
       (((pUVar5->BlueprintElementInstance).field0_0x0.DebugPtr)->bComputeFullDataCrc != false)) {
      return true;
    }
  }
  return false;
}

// ShouldVerifyIfOutputsAreUsedMultipleTimes @ 149b98250

bool __thiscall
FPCGExecuteBlueprintElement::ShouldVerifyIfOutputsAreUsedMultipleTimes
          (FPCGExecuteBlueprintElement *this,UPCGSettings *param_1)

{
  return true;
}

// SupportsBasePointDataInputs @ 149b989a0

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
FPCGExecuteBlueprintElement::SupportsBasePointDataInputs
          (FPCGExecuteBlueprintElement *this,FPCGContext *param_1)

{
  int iVar1;
  bool bVar2;
  UPCGBlueprintSettings *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  
  if (param_1 == (FPCGContext *)0x0) {
    return true;
  }
  pUVar3 = FPCGContext::GetInputSettings<UPCGBlueprintSettings>(param_1);
  pUVar6 = (UClass *)0x0;
  pUVar5 = (pUVar3->BlueprintElementType).Class.field0_0x0.DebugPtr;
  pUVar7 = pUVar6;
  if ((pUVar5 != (UClass *)0x0) &&
     (pUVar4 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pUVar7 = (pUVar3->BlueprintElementType).Class.field0_0x0.DebugPtr;
    }
  }
  pUVar5 = Z_Construct_UClass_UPCGBlueprintElement_NoRegister();
  if (pUVar5 != (UClass *)0x0) {
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= (int)pUVar7->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) == &pUVar5->_padding_)
       ) goto LAB_149b98a40;
  }
  pUVar6 = (UClass *)0x1;
LAB_149b98a40:
  return SUB81(pUVar6,0);
}

