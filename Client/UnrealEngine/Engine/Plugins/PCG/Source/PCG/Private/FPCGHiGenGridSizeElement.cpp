// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// ExecuteInternal @ 149c0f070

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
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
FPCGHiGenGridSizeElement::ExecuteInternal(FPCGHiGenGridSizeElement *this,FPCGContext *param_1)

{
  int *piVar1;
  EPCGHiGenGrid EVar2;
  UPCGNode *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  EPCGHiGenGrid EVar7;
  int iVar8;
  UClass *pUVar9;
  UPCGSettings *pUVar10;
  TObjectPtr<UPCGSettings>_u_0 this_01;
  FPCGTaggedData *pFVar11;
  UPCGGraph *pUVar12;
  FText *this_02;
  UObject *pUVar13;
  UPCGVolumeData *this_03;
  longlong *plVar14;
  TBox<double> *pTVar15;
  FScriptContainerElement *pFVar16;
  FPCGDataPtrWrapper *this_04;
  bool bVar17;
  undefined1 auStackY_e8 [32];
  <lambda_1> local_b8;
  undefined1 local_b7 [3];
  undefined1 local_b4 [4];
  TObjectPtr<UPCGSettings>_u_0 local_b0;
  UPCGVolumeData *local_a8;
  FString local_a0;
  FString local_90;
  FText local_80;
  undefined1 local_70 [56];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId222,"FPCGHiGenGridSizeElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGHiGenGridSize.cpp"
               ,0xde);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId222);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGHiGenGridSize.cpp"
                         ,0xdf,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
     (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar5)) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    goto LAB_149c0f5e7;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar10 = UPCGNode::GetSettings(this_00), pUVar10 == (UPCGSettings *)0x0)) {
      pFVar11 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGHiGenGridSizeSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_b8);
      if (pFVar11 != (FPCGTaggedData *)0x0) {
        local_b0.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar11->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if ((UPCGHiGenGridSizeSettings *)local_b0.DebugPtr == (UPCGHiGenGridSizeSettings *)0x0)
          goto LAB_149c0f224;
          UE::GC::MarkAsReachable((UObject *)local_b0.DebugPtr);
        }
        if ((UPCGHiGenGridSizeSettings *)local_b0.DebugPtr != (UPCGHiGenGridSizeSettings *)0x0) {
          pUVar9 = UPCGHiGenGridSizeSettings::StaticClass();
          bVar5 = FObjectPtr::IsA(&local_b0.ObjectPtr,pUVar9);
          this_01 = local_b0;
          if (bVar5) goto LAB_149c0f227;
        }
      }
    }
    else {
      pUVar10 = UPCGNode::GetSettings(this_00);
      this_01.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar10);
      if ((UPCGHiGenGridSizeSettings *)this_01.DebugPtr != (UPCGHiGenGridSizeSettings *)0x0) {
        pUVar9 = UPCGHiGenGridSizeSettings::StaticClass();
        iVar8 = (int)pUVar9->_padding_;
        if ((iVar8 <= *(int *)((this_01.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((this_01.DebugPtr)->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
            &pUVar9->_padding_)) goto LAB_149c0f227;
      }
    }
LAB_149c0f224:
    this_01.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar9 = UPCGHiGenGridSizeSettings::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar9);
    if (!bVar5) goto LAB_149c0f224;
    this_01.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
  }
LAB_149c0f227:
  if (((UPCGHiGenGridSizeSettings *)this_01.DebugPtr == (UPCGHiGenGridSizeSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGHiGenGridSize.cpp"
                         ,0xe8,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((((param_1->Node != (UPCGNode *)0x0) &&
       (pUVar12 = UPCGNode::GetGraph(param_1->Node), pUVar12 != (UPCGGraph *)0x0)) &&
      (pUVar12->bUseHierarchicalGeneration != false)) &&
     ((EVar2 = pUVar12->HiGenGridSize,
      EVar7 = UPCGHiGenGridSizeSettings::GetGrid((UPCGHiGenGridSizeSettings *)this_01.DebugPtr),
      EVar2 < EVar7 && (2 < (byte)LogPCG._0_1_)))) {
    this_02 = FText::AsLocalizable_Advanced_LocText
                        (&local_80,L"PCGHiGenGridSizeElement",L"GridSizeLargerThanGraphGridSize",
                         L"Grid size is larger than graph default grid size and will be automatically clamped."
                        );
    FText::ToString(this_02);
    FPCGContext::GetTaskName(param_1,&local_90);
    FPCGContext::GetExecutionSourceName(param_1,&local_a0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (local_80.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
    }
  }
  FPCGDataCollection::operator=(&param_1->OutputData,&param_1->InputData);
  pFVar3 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
  iVar8 = (param_1->OutputData).TaggedData.ArrayNum;
  pFVar16 = pFVar3 + 0x69;
  while( true ) {
    if ((param_1->OutputData).TaggedData.ArrayNum != iVar8) {
      local_b7[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_b7);
    }
    if (pFVar16 + -0x69 == pFVar3 + (longlong)iVar8 * 0x78) break;
    *(FName *)(pFVar16 + -9) = PCGPinConstants::DefaultOutputLabel;
    *pFVar16 = (FScriptContainerElement)0x1;
    pFVar16 = pFVar16 + 0x78;
  }
  bVar5 = IsInGameThread();
  if (bVar5) {
    pUVar13 = GetTransientPackageAsObject();
    this_03 = NewObject<UPCGVolumeData>(pUVar13);
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
    FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)&local_b8);
    pUVar13 = GetTransientPackageAsObject();
    this_03 = NewObject<UPCGVolumeData>(pUVar13);
    FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)&local_b8);
    if ((this_03 == (UPCGVolumeData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x12a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    local_a8 = this_03;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_03 != (UPCGVolumeData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this_03);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>
              (&param_1->AsyncObjects,(TObjectPtr<UObject> *)local_b4,(bool *)&local_a8);
  }
  if ((this_03 == (UPCGVolumeData *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("VolumeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGHiGenGridSize.cpp"
                         ,0xfa,L""), bVar5)) {
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
  plVar14 = (longlong *)
            (**(code **)((longlong)*(param_1->ExecutionSource).InterfaceInstance + 0x18))();
  pTVar15 = (TBox<double> *)(**(code **)(*plVar14 + 0x40))(plVar14,local_70);
  UPCGVolumeData::Initialize(this_03,pTVar15);
  iVar8 = (param_1->OutputData).TaggedData.ArrayNum;
  piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
  }
  (param_1->OutputData).TaggedData.ArrayNum = iVar8 + 1;
  this_04 = (FPCGDataPtrWrapper *)
            ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar8 * 0x78);
  this_04[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_04[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_04[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_04[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_04[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_04->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_04->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_04[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_04[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_04[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_04[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_04[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_04[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_04[4].Data.field0_0x0 + 4) = 0;
  this_04[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_04[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_04[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_04[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(this_04,(UPCGData *)this_03);
  this_04[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGHiGenGridSizeConstants::CellVolumeOutputLabel;
LAB_149c0f5e7:
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// GetDependenciesCrc @ 149c23d10

void __thiscall
FPCGHiGenGridSizeElement::GetDependenciesCrc
          (FPCGHiGenGridSizeElement *this,FPCGGetDependenciesCrcParams *param_1,FPCGCrc *param_2)

{
  longlong *plVar1;
  UPCGData *this_00;
  FPCGCrc FVar2;
  FPCGCrc local_res10;
  undefined1 local_res18 [16];
  
  local_res10.Value = 0;
  local_res10._4_4_ = local_res10._4_4_ & 0xffffff00;
  IPCGElement::GetDependenciesCrc((IPCGElement *)this,param_1,&local_res10);
  if (param_1->ExecutionSource != (IPCGGraphExecutionSource *)0x0) {
    plVar1 = (longlong *)(**(code **)((longlong)*param_1->ExecutionSource + 0x18))();
    this_00 = (UPCGData *)(**(code **)(*plVar1 + 8))(plVar1);
    if (this_00 != (UPCGData *)0x0) {
      FVar2 = UPCGData::GetOrComputeCrc(this_00,SUB81(local_res18,0));
      local_res10.Value =
           local_res10.Value ^
           *(int *)FVar2 + local_res10.Value * 0x40 + (local_res10.Value >> 2) + -0x61c88647;
    }
  }
  FVar2.bValid = local_res10.bValid;
  FVar2._5_3_ = local_res10._5_3_;
  FVar2.Value = local_res10.Value;
  *param_2 = FVar2;
  return;
}

// SupportsBasePointDataInputs @ 149c35730

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
FPCGHiGenGridSizeElement::SupportsBasePointDataInputs
          (FPCGHiGenGridSizeElement *this,FPCGContext *param_1)

{
  return true;
}

// SupportsGPUResidentData @ 149c35910

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
FPCGHiGenGridSizeElement::SupportsGPUResidentData
          (FPCGHiGenGridSizeElement *this,FPCGContext *param_1)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  
  pTVar1 = PCGSystemSwitches::CVarPassGPUDataThroughGridLinks.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

