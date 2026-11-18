// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149c74fa0

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
/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

bool __thiscall
FPCGWorldVolumetricQueryElement::ExecuteInternal
          (FPCGWorldVolumetricQueryElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  IPCGGraphExecutionSource *pIVar2;
  UPCGData *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UClass *pUVar8;
  UPCGSettings *pUVar9;
  TObjectPtr<UPCGSettings>_u_0 TVar10;
  FPCGTaggedData *pFVar11;
  longlong *plVar12;
  UWorld *pUVar13;
  UObject *pUVar14;
  UPCGWorldVolumetricData *this_01;
  FPCGDataPtrWrapper *pFVar15;
  FText *pFVar16;
  FPCGDataPtrWrapper *pFVar17;
  bool bVar18;
  undefined1 auStackY_1d8 [32];
  <lambda_1> local_1a8 [4];
  undefined1 local_1a4 [4];
  TObjectPtr<UPCGSettings>_u_0 local_1a0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_198;
  UPCGWorldVolumetricData *local_188;
  TObjectPtr<UPCGSettings>_u_0 local_180;
  FPCGDataPtrWrapper local_178;
  FPCGDataPtrWrapper local_168;
  FText local_158;
  TVector<double>_u_0 local_148;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118;
  undefined4 local_117;
  undefined2 local_113;
  undefined1 local_111;
  undefined1 local_108 [96];
  int local_a8;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_90;
  ForElementType<FSetElementId> local_50;
  int local_48;
  bool local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId88,"FPCGWorldVolumetricQueryElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGWorldQuery.cpp"
               ,0x58);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId88);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar9 = UPCGNode::GetSettings(this_00), pUVar9 == (UPCGSettings *)0x0)) {
      pFVar11 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGWorldQuerySettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_1a8[0]);
      if (pFVar11 != (FPCGTaggedData *)0x0) {
        local_1a0.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar11->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_1a0.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c750fe;
          UE::GC::MarkAsReachable((UObject *)local_1a0.DebugPtr);
        }
        if (local_1a0.DebugPtr != (UPCGSettings *)0x0) {
          pUVar8 = UPCGWorldQuerySettings::StaticClass();
          bVar5 = FObjectPtr::IsA(&local_1a0.ObjectPtr,pUVar8);
          TVar10 = local_1a0;
          if (bVar5) goto LAB_149c75101;
        }
      }
    }
    else {
      pUVar9 = UPCGNode::GetSettings(this_00);
      TVar10.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar9);
      if (TVar10.DebugPtr != (UPCGSettings *)0x0) {
        pUVar8 = UPCGWorldQuerySettings::StaticClass();
        iVar7 = (int)pUVar8->_padding_;
        if ((iVar7 <= *(int *)((TVar10.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar10.DebugPtr)->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
            &pUVar8->_padding_)) goto LAB_149c75101;
      }
    }
LAB_149c750fe:
    TVar10.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar8 = UPCGWorldQuerySettings::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar8);
    if (!bVar5) goto LAB_149c750fe;
    TVar10.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
  }
LAB_149c75101:
  if ((TVar10.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGWorldQuery.cpp"
                         ,0x5b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams
            ((FPCGWorldCommonQueryParams *)local_108,
             (FPCGWorldCommonQueryParams *)(TVar10.DebugPtr + 1));
  local_40 = SUB81(TVar10.DebugPtr[2]._padding_,0);
  if ((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
      (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context->ExecutionSource.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGWorldQuery.cpp"
                         ,0x61,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
      (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  plVar12 = (longlong *)
            (**(code **)((longlong)*(param_1->ExecutionSource).InterfaceInstance + 0x18))();
  pUVar13 = (UWorld *)(**(code **)(*plVar12 + 0x20))(plVar12);
  bVar5 = IsInGameThread();
  if (bVar5) {
    pUVar14 = GetTransientPackageAsObject();
    this_01 = NewObject<UPCGWorldVolumetricData>(pUVar14);
  }
  else {
    if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749348>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_1a8);
    pUVar14 = GetTransientPackageAsObject();
    this_01 = NewObject<UPCGWorldVolumetricData>(pUVar14);
    FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_1a8);
    if ((this_01 == (UPCGWorldVolumetricData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x12a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    local_188 = this_01;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_01 != (UPCGWorldVolumetricData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>
              (&param_1->AsyncObjects,(TObjectPtr<UObject> *)local_1a4,(bool *)&local_188);
  }
  local_118 = 0;
  local_117 = 0;
  local_113 = 0;
  local_111 = 0;
  local_148._s_0.X = 0.0;
  local_148._s_0.Y = 0.0;
  local_148._s_0.Z = 0.0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  UPCGWorldVolumetricData::Initialize(this_01,pUVar13,(TBox<double> *)&local_148._s_0);
  FPCGWorldCommonQueryParams::operator=
            ((FPCGWorldCommonQueryParams *)&this_01->QueryParams,
             (FPCGWorldCommonQueryParams *)local_108);
  (this_01->QueryParams).bSearchForOverlap = local_40;
  FPCGWorldVolumetricQueryParams::Initialize(&this_01->QueryParams);
  if (((((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
       (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar5)) &&
      (pIVar2 = (param_1->ExecutionSource).InterfaceInstance,
      pIVar2 != (IPCGGraphExecutionSource *)0x0)) &&
     (local_180.DebugPtr = (UPCGSettings *)(**(code **)((longlong)*pIVar2 + 8))(),
     local_180.DebugPtr != (UPCGSettings *)0x0)) {
    pUVar8 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar7 = (int)pUVar8->_padding_;
    if ((iVar7 <= *(int *)((local_180.DebugPtr)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)((local_180.DebugPtr)->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
        &pUVar8->_padding_)) goto LAB_149c75357;
  }
  local_180.DebugPtr = (UPCGSettings *)0x0;
LAB_149c75357:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_180.DebugPtr != (UPCGSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_180.DebugPtr);
  }
  FWeakObjectPtr::operator=(&(this_01->OriginatingComponent).WeakPtr,(FObjectPtr)&local_180);
  if ((this_01 == (UPCGWorldVolumetricData *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorldQueryData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGWorldQuery.cpp"
                         ,0x18,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((char)TVar10.DebugPtr[1]._padding_ != '\0') {
    FPCGDataCollection::GetInputsByPin
              (&param_1->InputData,&local_198,&PCGWorldRayHitConstants::FilterActorPinLabel);
    if (1 < local_198.ArrayNum) {
      PCGLog::InputOutput::LogFirstInputOnlyWarning
                (PCGWorldRayHitConstants::FilterActorPinLabel,param_1);
    }
    if (local_198.ArrayNum == 0) {
      pFVar15 = FPCGDataPtrWrapper::FPCGDataPtrWrapper(&local_178,(UPCGData *)0x0);
      pFVar17 = &local_178;
    }
    else {
      if ((local_198.ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar15 = FPCGDataPtrWrapper::FPCGDataPtrWrapper
                          (&local_168,(FPCGDataPtrWrapper *)local_198.AllocatorInstance.Data);
      pFVar17 = &local_168;
    }
    pUVar3 = (pFVar15->Data).field0_0x0.DebugPtr;
    FPCGDataPtrWrapper::~FPCGDataPtrWrapper(pFVar17);
    if (pUVar3 != (UPCGData *)0x0) {
      (this_01->ActorFilter).CachedFilterActorsDirty = true;
      bVar5 = FPCGWorldCommonQueryParams::ExtractActorFiltersIfNeeded
                        ((FPCGWorldCommonQueryParams *)(TVar10.DebugPtr + 1),pUVar3,
                         &(this_01->ActorFilter).FilterActors,param_1);
      if (!bVar5) {
        pFVar16 = FText::AsLocalizable_Advanced_LocText
                            (&local_158,L"PCGWorldQuery",L"FailExtractActorFilters",
                             L"Failed to extract actor filters.");
        PCGLog::LogWarningOnGraph(pFVar16,(FPCGContext *)0x0);
        if (local_158.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
        }
      }
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_198.AllocatorInstance.Data,local_198.ArrayNum);
    if ((FPCGTaggedData *)local_198.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_198.AllocatorInstance.Data);
    }
  }
  iVar7 = (param_1->OutputData).TaggedData.ArrayNum;
  piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
  }
  (param_1->OutputData).TaggedData.ArrayNum = iVar7 + 1;
  pFVar17 = (FPCGDataPtrWrapper *)
            ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar7 * 0x78);
  pFVar17[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar17[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar17[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar17[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar17[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (pFVar17->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (pFVar17->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  pFVar17[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar17[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar17[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar17[3].WeakData.WeakPtr.ObjectIndex = 0;
  pFVar17[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&pFVar17[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&pFVar17[4].Data.field0_0x0 + 4) = 0;
  pFVar17[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar17[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&pFVar17[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&pFVar17[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(pFVar17,(UPCGData *)this_01);
  local_48 = 0;
  if (local_50 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_50);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_90);
  DestructItems<FString,int>((FString *)local_108._88_8_,local_a8);
  if ((FString *)local_108._88_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_108._88_8_);
  }
  if ((FScriptContainerElement *)local_108._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._8_8_);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// IsCacheable @ 149c806d0

bool __thiscall
FPCGWorldVolumetricQueryElement::IsCacheable
          (FPCGWorldVolumetricQueryElement *this,UPCGSettings *param_1)

{
  return false;
}

