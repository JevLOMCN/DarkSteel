// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 1

// ExecuteInternal @ 14da84550

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
FPVRemoveBranchesElement::ExecuteInternal(FPVRemoveBranchesElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  FObjectPtr_u_0 *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UClass *pUVar9;
  UPCGSettings *pUVar10;
  TObjectPtr<UPCGSettings>_u_0 TVar11;
  FPCGTaggedData *pFVar12;
  UObject *pUVar13;
  UPVGrowthData *pUVar14;
  ulonglong uVar15;
  FObjectPtr_u_0 FVar16;
  FPCGDataPtrWrapper *this_01;
  ForAnyElementType FVar17;
  bool bVar18;
  undefined1 auStackY_998 [32];
  <lambda_1> local_968;
  undefined1 local_967 [7];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_960;
  float local_950 [2];
  uint local_948;
  TObjectPtr<UPCGSettings>_u_0 local_940;
  FObjectPtr_u_0 local_938;
  TArray<int,TSizedDefaultAllocator<32>_> local_930;
  TArray<float,TSizedDefaultAllocator<32>_> local_920;
  TObjectPtr<UObject> local_910;
  UPVGrowthData *local_908;
  FObjectPtr_u_0 *local_900;
  FBranchFacade local_8f8;
  FPlantFacade local_608;
  FPointFacade local_518;
  FManagedArrayCollection local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_998;
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId45,"FPVRemoveBranchesElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVRemoveBranchesSettings.cpp"
               ,0x2d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId45);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVRemoveBranchesSettings.cpp"
                         ,0x2f,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar10 = UPCGNode::GetSettings(this_00), pUVar10 == (UPCGSettings *)0x0)) {
      pFVar12 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPVRemoveBranchesSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_968);
      if (pFVar12 != (FPCGTaggedData *)0x0) {
        local_940.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar12->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_940.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_940.DebugPtr);
        }
        if (local_940.DebugPtr != (UPCGSettings *)0x0) {
          pUVar9 = UPVRemoveBranchesSettings::StaticClass();
          bVar6 = FObjectPtr::IsA(&local_940.ObjectPtr,pUVar9);
          TVar11 = local_940;
          if (bVar6) goto LAB_14da846fa;
        }
      }
    }
    else {
      pUVar10 = UPCGNode::GetSettings(this_00);
      TVar11.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar10);
      if (TVar11.DebugPtr != (UPCGSettings *)0x0) {
        pUVar9 = UPVRemoveBranchesSettings::StaticClass();
        iVar8 = (int)pUVar9->_padding_;
        if ((iVar8 <= *(int *)((TVar11.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar11.DebugPtr)->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
            &pUVar9->_padding_)) goto LAB_14da846fa;
      }
    }
    TVar11.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar9 = UPVRemoveBranchesSettings::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar9);
    TVar11.DebugPtr = (UPCGSettings *)0x0;
    if (bVar6) {
      TVar11.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
  }
LAB_14da846fa:
  if ((TVar11.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVRemoveBranchesSettings.cpp"
                         ,0x32,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_960,&PCGPinConstants::DefaultInputLabel);
  uVar15 = (ulonglong)local_960.ArrayNum;
  local_948 = local_960.ArrayNum;
  local_900 = (FObjectPtr_u_0 *)(local_960.AllocatorInstance.Data + uVar15 * 0x78);
  FVar17.Data = local_960.AllocatorInstance.Data;
  do {
    pFVar5 = local_900;
    if (local_960.ArrayNum != (uint)uVar15) {
      local_967[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_967);
    }
    if ((FObjectPtr_u_0 *)FVar17.Data == pFVar5) goto LAB_14da84ac6;
    local_938 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar17.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14da8479b:
      if (local_938.Handle == (UObject *)0x0) goto LAB_14da847bb;
      pUVar9 = UPVGrowthData::StaticClass();
      bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_938,pUVar9);
      FVar16 = local_938;
      if (!bVar6) goto LAB_14da847bb;
    }
    else {
      if (local_938.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_938.Handle);
        goto LAB_14da8479b;
      }
LAB_14da847bb:
      FVar16.Handle = (UObject *)0x0;
    }
    if (FVar16.Handle == (UObject *)0x0) {
      PCGLog::InputOutput::LogInvalidInputDataError(param_1);
LAB_14da84ac6:
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_960.AllocatorInstance.Data,local_960.ArrayNum);
      if ((FPCGTaggedData *)local_960.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_960.AllocatorInstance.Data);
      }
      if (bVar18) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    FManagedArrayCollection::FManagedArrayCollection
              (&local_e8,(FManagedArrayCollection *)&FVar16.Handle[3].field_0x20);
    bVar6 = IsInGameThread();
    if (bVar6) {
      pUVar13 = GetTransientPackageAsObject();
      pUVar14 = NewObject<UPVGrowthData>(pUVar13);
    }
    else {
      if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4331830188552749348>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)&local_968);
      pUVar13 = GetTransientPackageAsObject();
      pUVar14 = NewObject<UPVGrowthData>(pUVar13);
      FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)&local_968);
      if ((pUVar14 == (UPVGrowthData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0x12a,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      local_908 = pUVar14;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UPVGrowthData *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_910,(bool *)&local_908);
    }
    local_950[0] = *(float *)((longlong)&TVar11.DebugPtr[1]._padding_ + 4);
    lVar4 = TVar11.DebugPtr[1]._padding_;
    PV::Facades::FBranchFacade::FBranchFacade(&local_8f8,&local_e8);
    PV::Facades::FPointFacade::FPointFacade(&local_518,&local_e8);
    PV::Facades::FPlantFacade::FPlantFacade(&local_608,&local_e8);
    bVar6 = PV::Facades::FPointFacade::IsValid(&local_518);
    if ((((((bVar6) &&
           (local_8f8.Parents.ConstAttributeArray !=
            (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
          (local_8f8.Children.ConstAttributeArray !=
           (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
         ((local_8f8.BranchPoints.ConstAttributeArray !=
           (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0 &&
          (local_8f8.BranchNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)))) &&
        ((local_8f8.BranchSourceBudNumber.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
         ((local_8f8.BranchHierarchyNumber.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
          (local_8f8.BranchParentNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)))))) &&
       (local_8f8.PlantNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)) {
      local_920.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_920.ArrayNum = 0;
      local_920.ArrayMax = 0;
      PV::Facades::GatherBranchRemovalData
                (&local_8f8,&local_518,&local_608,(ERemoveBranchesBasis)lVar4,&local_920);
      local_930.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_930.ArrayNum = 0;
      local_930.ArrayMax = 0;
      PV::Facades::FindBranchesToRemove(&local_8f8,&local_920,local_950,&local_930);
      PV::Facades::FTreeFacade::RemoveBranches(&local_8f8,&local_930,&local_e8);
      if (local_930.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_930.AllocatorInstance.Data);
      }
      if (local_920.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_920.AllocatorInstance.Data);
      }
    }
    FManagedArrayCollection::operator=((FManagedArrayCollection *)&pUVar14->field_0x98,&local_e8);
    iVar8 = (param_1->OutputData).TaggedData.ArrayNum;
    piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
    }
    pFVar2 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
    (param_1->OutputData).TaggedData.ArrayNum = iVar8 + 1;
    this_01 = (FPCGDataPtrWrapper *)(pFVar2 + (longlong)iVar8 * 0x78);
    FPCGDataPtrWrapper::FPCGDataPtrWrapper(this_01,(UPCGData *)pUVar14);
    this_01[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_01[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_01[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_01[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_01[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_01[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_01[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_01[3].WeakData.WeakPtr.ObjectIndex = 0;
    this_01[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
    *(undefined4 *)&this_01[4].Data.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this_01[4].Data.field0_0x0 + 4) = 0;
    this_01[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_01[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    *(undefined2 *)&this_01[6].WeakData.WeakPtr.ObjectIndex = 0x100;
    *(undefined8 *)&this_01[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
    *(undefined4 *)((longlong)&this_01[7].Data.field0_0x0 + 4) = 0xffffffff;
    FManagedArrayCollection::~FManagedArrayCollection(&local_e8);
    uVar15 = (ulonglong)local_948;
    FVar17.Data = FVar17.Data + 0x78;
  } while( true );
}

