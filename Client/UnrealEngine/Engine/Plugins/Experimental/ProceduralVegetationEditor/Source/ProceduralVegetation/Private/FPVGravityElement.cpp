// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 1

// ExecuteInternal @ 14da82180

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

bool __thiscall FPVGravityElement::ExecuteInternal(FPVGravityElement *this,FPCGContext *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UPCGNode *this_00;
  code *pcVar3;
  FObjectPtr_u_0 *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UClass *pUVar8;
  UPCGSettings *pUVar9;
  TObjectPtr<UPCGSettings>_u_0 TVar10;
  FPCGTaggedData *pFVar11;
  UObject *pUVar12;
  UPVGrowthData *pUVar13;
  ulonglong uVar14;
  FObjectPtr_u_0 FVar15;
  ForAnyElementType FVar16;
  FPCGDataPtrWrapper *this_01;
  TObjectPtr<UPCGSettings>_u_0 TVar17;
  bool bVar18;
  undefined1 auStackY_a08 [32];
  <lambda_1> local_9c8 [8];
  TObjectPtr<UPCGSettings>_u_0 local_9c0;
  undefined1 local_9b8;
  FGCScopeGuard local_9b7 [7];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_9b0;
  uint local_9a0;
  TObjectPtr<UPCGSettings>_u_0 local_998;
  FObjectPtr_u_0 local_990;
  FObjectPtr_u_0 *local_988;
  FPCGContext *local_980;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_978;
  TArray<int,TSizedDefaultAllocator<32>_> local_968;
  TObjectPtr<UObject> local_958;
  UPVGrowthData *local_950;
  FObjectPtr_u_0 *local_948;
  TVector<float>_u_0 local_938;
  TVector<float>_u_0 local_928;
  TQuat<float> local_918;
  FPlantFacade local_908;
  FBranchFacade local_818;
  FPointFacade local_528;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_a08;
  bVar18 = -1 < CpuChannel->Enabled;
  local_980 = param_1;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId50,"FPVGravityElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVGravitySettings.cpp"
               ,0x32);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId50);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVGravitySettings.cpp"
                         ,0x34,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar9 = UPCGNode::GetSettings(this_00), pUVar9 == (UPCGSettings *)0x0)) {
      pFVar11 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPVGravitySettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_9c8[0]);
      if (pFVar11 != (FPCGTaggedData *)0x0) {
        local_998.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar11->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_998.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_998.DebugPtr);
        }
        if (local_998.DebugPtr != (UPCGSettings *)0x0) {
          pUVar8 = UPVGravitySettings::StaticClass();
          bVar5 = FObjectPtr::IsA(&local_998.ObjectPtr,pUVar8);
          if (bVar5) {
            local_9c0.DebugPtr = local_998.DebugPtr;
            TVar10 = local_998;
            goto LAB_14da82351;
          }
        }
      }
    }
    else {
      pUVar9 = UPCGNode::GetSettings(this_00);
      TVar10.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar9);
      if (TVar10.DebugPtr != (UPCGSettings *)0x0) {
        local_9c0.DebugPtr = TVar10.DebugPtr;
        pUVar8 = UPVGravitySettings::StaticClass();
        iVar7 = (int)pUVar8->_padding_;
        if ((iVar7 <= *(int *)((TVar10.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar10.DebugPtr)->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
            &pUVar8->_padding_)) goto LAB_14da82351;
      }
    }
    local_9c0.DebugPtr = (UPCGSettings *)0x0;
    TVar10.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar8 = UPVGravitySettings::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar8);
    if (bVar5) {
      local_9c0 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar10 = local_9c0;
    }
    else {
      local_9c0.DebugPtr = (UPCGSettings *)0x0;
      TVar10.DebugPtr = (UPCGSettings *)0x0;
    }
  }
LAB_14da82351:
  if ((TVar10.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVGravitySettings.cpp"
                         ,0x37,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_9b0,&PCGPinConstants::DefaultInputLabel);
  uVar14 = (ulonglong)local_9b0.ArrayNum;
  local_9a0 = local_9b0.ArrayNum;
  local_948 = (FObjectPtr_u_0 *)(local_9b0.AllocatorInstance.Data + uVar14 * 0x78);
  FVar16.Data = local_9b0.AllocatorInstance.Data;
  do {
    pFVar4 = local_948;
    local_988 = (FObjectPtr_u_0 *)FVar16.Data;
    if (local_9b0.ArrayNum != (uint)uVar14) {
      local_9b8 = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_9b8);
    }
    if ((FObjectPtr_u_0 *)FVar16.Data == pFVar4) goto LAB_14da827ca;
    local_990 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar16.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14da823f8:
      if (local_990.Handle == (UObject *)0x0) goto LAB_14da82418;
      pUVar8 = UPVGrowthData::StaticClass();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_990,pUVar8);
      FVar15 = local_990;
      if (!bVar5) goto LAB_14da82418;
    }
    else {
      if (local_990.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_990.Handle);
        goto LAB_14da823f8;
      }
LAB_14da82418:
      FVar15.Handle = (UObject *)0x0;
    }
    if (FVar15.Handle == (UObject *)0x0) {
      PCGLog::InputOutput::LogInvalidInputDataError(param_1);
LAB_14da827ca:
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_9b0.AllocatorInstance.Data,local_9b0.ArrayNum);
      if ((FPCGTaggedData *)local_9b0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_9b0.AllocatorInstance.Data);
      }
      if (bVar18) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    FManagedArrayCollection::FManagedArrayCollection
              (&local_f8,(FManagedArrayCollection *)&FVar15.Handle[3].field_0x20);
    bVar5 = IsInGameThread();
    if (bVar5) {
      pUVar12 = GetTransientPackageAsObject();
      pUVar13 = NewObject<UPVGrowthData>(pUVar12);
    }
    else {
      if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4331830188552749348>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      FGCScopeGuard::FGCScopeGuard(local_9b7);
      pUVar12 = GetTransientPackageAsObject();
      pUVar13 = NewObject<UPVGrowthData>(pUVar12);
      FGCScopeGuard::~FGCScopeGuard(local_9b7);
      if ((pUVar13 == (UPVGrowthData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0x12a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      local_950 = pUVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UPVGrowthData *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_958,(bool *)&local_950);
    }
    TVar17 = TVar10;
    if (*(float *)((longlong)&TVar10.DebugPtr[1]._padding_ + 4) != 0.0) {
      PV::Facades::FBranchFacade::FBranchFacade(&local_818,&local_f8);
      PV::Facades::FPointFacade::FPointFacade(&local_528,&local_f8);
      PV::Facades::FPlantFacade::FPlantFacade(&local_908,&local_f8);
      bVar5 = PV::Facades::FPointFacade::IsValid(&local_528);
      TVar17 = local_9c0;
      if (((((bVar5) &&
            (local_818.Parents.ConstAttributeArray !=
             (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
           (local_818.Children.ConstAttributeArray !=
            (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
          (((local_818.BranchPoints.ConstAttributeArray !=
             (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0 &&
            (local_818.BranchNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
           ((local_818.BranchSourceBudNumber.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
            ((local_818.BranchHierarchyNumber.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
             (local_818.BranchParentNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0))))))))
         && ((local_818.PlantNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
             ((((local_908.PlantNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
                (local_908.BranchNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
               (local_908.BranchParentNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
              (local_908.BranchHierarchyNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0))))
            )) {
        local_978.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_978.ArrayNum = 0;
        local_978.ArrayMax = 0;
        if ((char)TVar10.DebugPtr[1]._padding_ == '\x01') {
          FPVGravity::GeneratePhototropicData
                    ((FPVGravityParams *)(TVar10.DebugPtr + 1),&local_818,&local_528,&local_978);
        }
        PV::Facades::FPlantFacade::GetTrunkIndices(&local_908,&local_968);
        iVar7 = local_968.ArrayNum;
        uVar14 = (ulonglong)local_968.ArrayNum;
        pFVar2 = local_968.AllocatorInstance.Data + uVar14 * 4;
        FVar16.Data = local_968.AllocatorInstance.Data;
        while( true ) {
          if ((uint)uVar14 != iVar7) {
            local_9c8[0] = (<lambda_1>)0x0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_9c8);
          }
          if (FVar16.Data == pFVar2) break;
          local_938._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_928._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_938._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_928._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_918 = UE::Math::TQuat<float>::Identity;
          FPVGravity::ApplyGravity
                    (*(int *)FVar16.Data,(FPVGravityParams *)(TVar10.DebugPtr + 1),&local_978,
                     &local_f8,&local_918,(TVector<float> *)&local_928._s_0,
                     (TVector<float> *)&local_938._s_0);
          uVar14 = (ulonglong)(uint)local_968.ArrayNum;
          FVar16.Data = FVar16.Data + 4;
        }
        if (local_968.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_968.AllocatorInstance.Data);
        }
        TVar17 = local_9c0;
        FVar16.Data = (FScriptContainerElement *)local_988;
        param_1 = local_980;
        if (local_978.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_978.AllocatorInstance.Data);
          TVar17 = local_9c0;
          FVar16.Data = (FScriptContainerElement *)local_988;
          param_1 = local_980;
        }
      }
    }
    FManagedArrayCollection::operator=((FManagedArrayCollection *)&pUVar13->field_0x98,&local_f8);
    iVar7 = (param_1->OutputData).TaggedData.ArrayNum;
    piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
    }
    pFVar2 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
    (param_1->OutputData).TaggedData.ArrayNum = iVar7 + 1;
    this_01 = (FPCGDataPtrWrapper *)(pFVar2 + (longlong)iVar7 * 0x78);
    FPCGDataPtrWrapper::FPCGDataPtrWrapper(this_01,(UPCGData *)pUVar13);
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
    FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
    uVar14 = (ulonglong)local_9a0;
    FVar16.Data = FVar16.Data + 0x78;
    TVar10 = TVar17;
  } while( true );
}

