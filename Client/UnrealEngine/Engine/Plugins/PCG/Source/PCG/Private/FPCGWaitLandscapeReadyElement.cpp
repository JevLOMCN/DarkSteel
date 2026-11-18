// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// <lambda_invoker_cdecl> @ 1499046b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
`FPCGWaitLandscapeReadyElement::ExecuteInternal'::__l19::<lambda_1>::<lambda_invoker_cdecl>
          (AActor *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 149904720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
`FPCGWaitLandscapeReadyElement::ExecuteInternal'::__l19::<lambda_2>::<lambda_invoker_cdecl>
          (AActor *param_1)

{
  return true;
}

// CanExecuteOnlyOnMainThread @ 1499da430

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
FPCGWaitLandscapeReadyElement::CanExecuteOnlyOnMainThread
          (FPCGWaitLandscapeReadyElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 1499eff80

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

bool __thiscall
FPCGWaitLandscapeReadyElement::ExecuteInternal
          (FPCGWaitLandscapeReadyElement *this,FPCGContext *param_1)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  FWeakObjectPtr *pFVar3;
  atomic<int> aVar4;
  int iVar5;
  int iVar6;
  UPCGNode *this_00;
  IPCGGraphExecutionSource *pIVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  UClass *pUVar12;
  UPCGSettings *pUVar13;
  TObjectPtr<UPCGSettings>_u_0 TVar14;
  FPCGTaggedData *pFVar15;
  TObjectPtr<UClass>_u_0 TVar16;
  UPCGComponent *pUVar17;
  UObject *pUVar18;
  ALandscape *this_01;
  TWeakPtr<FPCGContextHandle,1> *pTVar19;
  FPCGScheduleGenericParams *pFVar20;
  undefined ***pppuVar21;
  longlong *plVar22;
  UPCGComponent *pUVar23;
  ForAnyElementType FVar24;
  FWeakObjectPtr *this_02;
  bool bVar25;
  undefined1 auStackY_2f8 [32];
  <lambda_1> local_2b7;
  undefined1 local_2b6 [6];
  TObjectPtr<UPCGSettings>_u_0 local_2b0;
  FWeakObjectPtr local_2a8 [2];
  TArrayView<AActor_*,int> local_298;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_288;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_278;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_268;
  undefined1 local_258 [72];
  int local_210;
  undefined4 local_200;
  undefined4 local_1fc;
  ForAnyElementType local_1f8;
  undefined8 local_1f0;
  undefined2 local_1e8;
  UObject *local_1d8;
  TWeakPtr<FPCGContextHandle,1> local_1d0;
  TWeakPtr<FPCGContextHandle,1> local_1c0;
  code *local_1a8 [2];
  undefined **local_198;
  FPCGContextHandle *local_190;
  TReferenceControllerBase<1> *local_188;
  undefined8 local_180;
  code *local_178 [2];
  undefined **local_168;
  FPCGContextHandle *local_160;
  TReferenceControllerBase<1> *local_158;
  undefined8 local_150;
  uint local_13c;
  code *local_138 [2];
  undefined **local_128;
  code *local_120;
  undefined ***local_110;
  code *local_108 [2];
  undefined **local_f8;
  code *local_f0;
  undefined ***local_e0;
  undefined1 local_d8 [64];
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  ForAnyElementType local_68;
  ForAnyElementType local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId37,"FPCGWaitLandscapeReadyElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Landscape\\PCGWaitLandscapeReady.cpp"
               ,0x25);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId37);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Landscape\\PCGWaitLandscapeReady.cpp"
                         ,0x26,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar13 = UPCGNode::GetSettings(this_00), pUVar13 == (UPCGSettings *)0x0)) {
      pFVar15 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGWaitLandscapeReadySettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_2b7);
      if (pFVar15 != (FPCGTaggedData *)0x0) {
        local_2b0.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar15->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_2b0.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_2b0.DebugPtr);
        }
        if (local_2b0.DebugPtr != (UPCGSettings *)0x0) {
          pUVar12 = UPCGWaitLandscapeReadySettings::StaticClass();
          bVar9 = FObjectPtr::IsA(&local_2b0.ObjectPtr,pUVar12);
          TVar14 = local_2b0;
          if (bVar9) goto LAB_1499f0120;
        }
      }
    }
    else {
      pUVar13 = UPCGNode::GetSettings(this_00);
      TVar14.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar13);
      if (TVar14.DebugPtr != (UPCGSettings *)0x0) {
        pUVar12 = UPCGWaitLandscapeReadySettings::StaticClass();
        iVar6 = (int)pUVar12->_padding_;
        if ((iVar6 <= *(int *)((TVar14.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar14.DebugPtr)->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
            &pUVar12->_padding_)) goto LAB_1499f0120;
      }
    }
LAB_1499f011d:
    TVar14.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar12 = UPCGWaitLandscapeReadySettings::StaticClass();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar12);
    if (!bVar9) goto LAB_1499f011d;
    TVar14.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
  }
LAB_1499f0120:
  pUVar23 = (UPCGComponent *)0x0;
  if ((TVar14.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Landscape\\PCGWaitLandscapeReady.cpp"
                         ,0x29,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  if ((char)param_1[1]._padding_ != '\0') goto LAB_1499f04a8;
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId45,"FPCGWaitLandscapeReadyElement::Execute::LandscapeQuery",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Landscape\\PCGWaitLandscapeReady.cpp"
               ,0x2d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId45);
  }
  if ((param_1[1].InputData.TaggedData.ArrayNum != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context->Landscapes.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Landscape\\PCGWaitLandscapeReady.cpp"
                          ,0x2e,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  *(undefined1 *)&param_1[1]._padding_ = 1;
  local_258[0] = Self;
  local_258[1] = false;
  local_258[2] = false;
  local_258[3] = false;
  local_258[4] = ByTag;
  local_258._8_4_ = 0;
  local_258._12_4_ = 0;
  local_258._16_8_ = (UClass *)0x0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)(local_258 + 0x18));
  local_200._0_1_ = false;
  local_200._1_1_ = false;
  local_200._2_1_ = true;
  local_200._3_1_ = true;
  local_1fc._0_1_ = true;
  local_1fc._1_1_ = true;
  local_1fc._2_1_ = true;
  local_1fc._3_1_ = true;
  local_1f8.Data = (FScriptContainerElement *)0x0;
  local_1f0._0_4_ = 0;
  local_1f0._4_4_ = 0;
  local_1e8._0_1_ = false;
  local_1e8._1_1_ = false;
  local_258[0] = AllWorldActors;
  local_258[4] = ByClass;
  TVar16.DebugPtr = Z_Construct_UClass_ALandscapeProxy_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar16.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar16.DebugPtr);
  }
  local_200._0_1_ = true;
  local_258._16_8_ = TVar16.DebugPtr;
  if (((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
       (bVar11 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar11)) ||
      (pIVar7 = (param_1->ExecutionSource).InterfaceInstance,
      pIVar7 == (IPCGGraphExecutionSource *)0x0)) ||
     (pUVar17 = (UPCGComponent *)(**(code **)((longlong)*pIVar7 + 8))(),
     pUVar17 == (UPCGComponent *)0x0)) {
LAB_1499f02a4:
    pUVar17 = pUVar23;
  }
  else {
    pUVar12 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar6 = (int)pUVar12->_padding_;
    if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar6 * 8)
        != &pUVar12->_padding_)) goto LAB_1499f02a4;
  }
  local_120 = `FPCGWaitLandscapeReadyElement::ExecuteInternal'::__l19::<lambda_2>::
              <lambda_invoker_cdecl>;
  local_298._8_8_ = (ulonglong)local_13c << 0x20;
  local_f0 = `FPCGWaitLandscapeReadyElement::ExecuteInternal'::__l19::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_128 = &___7__TFunction_OwnedObject_P6A_NPEBVAActor___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_138[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<bool_(__cdecl*)(AActor_const_*),bool,AActor_const_*>::Call;
  local_f8 = &___7__TFunction_OwnedObject_P6A_NPEBVAActor___Z_0A__0A__Function_Private_Core_UE__6B_;
  local_108[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<bool_(__cdecl*)(AActor_const_*),bool,AActor_const_*>::Call;
  local_110 = (undefined ***)0x0;
  local_e0 = (undefined ***)0x0;
  local_298.DataPtr = (AActor **)0x0;
  PCGActorSelector::FindActors
            (&local_288,(FPCGActorSelectorSettings *)local_258,pUVar17,
             (TFunction<bool___cdecl(AActor_const_*)> *)local_108,
             (TFunction<bool___cdecl(AActor_const_*)> *)local_138,&local_298);
  if (local_108[0] != (code *)0x0) {
    pppuVar21 = &local_f8;
    if (local_e0 != (undefined ***)0x0) {
      pppuVar21 = local_e0;
    }
    (*(code *)(*pppuVar21)[2])();
  }
  if (local_138[0] != (code *)0x0) {
    pppuVar21 = &local_128;
    if (local_110 != (undefined ***)0x0) {
      pppuVar21 = local_110;
    }
    (*(code *)(*pppuVar21)[2])();
  }
  iVar6 = local_288.ArrayNum;
  pFVar2 = local_288.AllocatorInstance.Data + (longlong)local_288.ArrayNum * 8;
  FVar24.Data = local_288.AllocatorInstance.Data;
  while( true ) {
    if (local_288.ArrayNum != iVar6) {
      local_2b7 = (<lambda_1>)0x0;
      `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_2b7);
    }
    if (FVar24.Data == pFVar2) break;
    plVar22 = *(longlong **)FVar24.Data;
    if (plVar22 != (longlong *)0x0) {
      pUVar12 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
      iVar5 = (int)pUVar12->_padding_;
      if ((iVar5 <= *(int *)(plVar22[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar22[2] + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar12->_padding_)) {
        pUVar18 = (UObject *)(**(code **)(*plVar22 + 0x778))(plVar22);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar18);
        }
        local_2a8[0].ObjectIndex = 0;
        local_2a8[0].ObjectSerialNumber = 0;
        local_1d8 = pUVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar18);
        }
        FWeakObjectPtr::operator=(local_2a8,(FObjectPtr)&local_1d8);
        TArray<TWeakObjectPtr<ALandscape,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TWeakObjectPtr<ALandscape,FWeakObjectPtr>_const_&>
                  ((TArray<TWeakObjectPtr<ALandscape,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
                   &param_1[1].InputData,(TWeakObjectPtr<ALandscape,FWeakObjectPtr> *)local_2a8);
      }
    }
    FVar24.Data = FVar24.Data + 8;
  }
  if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.AllocatorInstance.Data);
  }
  if (local_1f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data);
  }
  DestructItems<FString,int>((FString *)local_258._64_8_,local_210);
  if ((FString *)local_258._64_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_258._64_8_);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_1499f04a8:
  if (*(char *)((longlong)&param_1[1]._padding_ + 1) == '\0') {
    bVar9 = -1 < CpuChannel->Enabled;
    if (bVar9) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId74,
                 "FPCGWaitLandscapeReadyElement::Execute::CheckingIfLandscapeAreReady",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Landscape\\PCGWaitLandscapeReady.cpp"
                 ,0x4a);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId74);
    }
    if (((char)param_1[1]._padding_ == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Context->bLandscapeQueryDone",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Landscape\\PCGWaitLandscapeReady.cpp"
                            ,0x4b,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
    this_02 = (FWeakObjectPtr *)param_1[1].InputData.TaggedData.AllocatorInstance.Data;
    iVar6 = param_1[1].InputData.TaggedData.ArrayNum;
    pFVar3 = this_02 + iVar6;
    while( true ) {
      if (param_1[1].InputData.TaggedData.ArrayNum != iVar6) {
        `TCheckedPointerIterator<TWeakObjectPtr<ALandscape,FWeakObjectPtr>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_2b6);
      }
      if (this_02 == pFVar3) break;
      bVar11 = FWeakObjectPtr::IsValid(this_02);
      if (bVar11) {
        this_01 = (ALandscape *)FWeakObjectPtr::Get(this_02);
        bVar11 = ALandscape::IsUpToDate(this_01);
        if (!bVar11) goto LAB_1499f057d;
      }
      this_02 = this_02 + 1;
    }
    *(undefined1 *)((longlong)&param_1[1]._padding_ + 1) = 1;
LAB_1499f057d:
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if ((*(char *)((longlong)&param_1[1]._padding_ + 1) == '\0') &&
     ((param_1->OutputData).bCancelExecution == false)) {
    param_1->bIsPaused = true;
    local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.ArrayNum = 0;
    local_268.ArrayMax = 0;
    local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.ArrayNum = 0;
    local_278.ArrayMax = 0;
    if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
       (bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar9)) {
      pUVar23 = (UPCGComponent *)(param_1->ExecutionSource).InterfaceInstance;
    }
    pTVar19 = FPCGContext::GetOrCreateHandle(param_1,&local_1c0);
    local_190 = pTVar19->Object;
    local_188 = (pTVar19->WeakReferenceCount).ReferenceController;
    (pTVar19->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar19->Object = (FPCGContextHandle *)0x0;
    local_198 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FPCGWaitLandscapeReadyElement::ExecuteInternal'::`2'::<lambda_4>,0,0>
                 ::_vftable_;
    local_1a8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FPCGWaitLandscapeReadyElement::ExecuteInternal'::__l2::<lambda_4>,void,FPCGContext_*>
                   ::Call;
    local_180 = 0;
    pTVar19 = FPCGContext::GetOrCreateHandle(param_1,&local_1d0);
    local_160 = pTVar19->Object;
    local_158 = (pTVar19->WeakReferenceCount).ReferenceController;
    (pTVar19->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar19->Object = (FPCGContextHandle *)0x0;
    local_168 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FPCGWaitLandscapeReadyElement::ExecuteInternal'::`2'::<lambda_3>,0,0>
                 ::_vftable_;
    local_178[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FPCGWaitLandscapeReadyElement::ExecuteInternal'::__l2::<lambda_3>,bool,FPCGContext_*>
                   ::Call;
    local_150 = 0;
    pFVar20 = FPCGScheduleGenericParams::FPCGScheduleGenericParams
                        ((FPCGScheduleGenericParams *)local_d8,
                         (TFunction<bool___cdecl(FPCGContext_*)> *)local_178,
                         (TFunction<void___cdecl(FPCGContext_*)> *)local_1a8,
                         (IPCGGraphExecutionSource *)pUVar23,&local_278,&local_268,false);
    FPCGContext::ScheduleGeneric(param_1,pFVar20);
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    if (local_98 != 0) {
      plVar22 = local_88;
      if (local_70 != (longlong *)0x0) {
        plVar22 = local_70;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if (local_d8._0_8_ != 0) {
      plVar22 = (longlong *)(local_d8 + 0x10);
      if ((longlong *)local_d8._40_8_ != (longlong *)0x0) {
        plVar22 = (longlong *)local_d8._40_8_;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if (local_1d0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1d0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar4 == (atomic<int>)0x1) &&
         (local_1d0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)((local_1d0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_1d0.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_1c0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1c0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar4 == (atomic<int>)0x1) &&
         (local_1c0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)((local_1c0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_1c0.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.AllocatorInstance.Data);
    }
    if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.AllocatorInstance.Data);
    }
    bVar9 = false;
  }
  else {
    if (CpuChannel->Enabled < 0) {
      FPCGDataCollection::operator=(&param_1->OutputData,&param_1->InputData);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId96,
                 "FPCGWaitLandscapeReadyElement::Execute::FinalizeExecution",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Landscape\\PCGWaitLandscapeReady.cpp"
                 ,0x60);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId96);
      FPCGDataCollection::operator=(&param_1->OutputData,&param_1->InputData);
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar9 = true;
  }
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar9;
}

// IsCacheable @ 149a003d0

bool __thiscall
FPCGWaitLandscapeReadyElement::IsCacheable
          (FPCGWaitLandscapeReadyElement *this,UPCGSettings *param_1)

{
  return false;
}

