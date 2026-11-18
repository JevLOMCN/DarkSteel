// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 1

// ExecuteInternal @ 14da806a0

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
FPVBoneReductionElement::ExecuteInternal(FPVBoneReductionElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  FScriptContainerElement *pFVar2;
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
  UPVMeshData *pUVar13;
  FText *pFVar14;
  ulonglong uVar15;
  FObjectPtr_u_0 FVar16;
  FPCGDataPtrWrapper *this_01;
  ForAnyElementType FVar17;
  bool bVar18;
  undefined1 auStackY_5d8 [32];
  <lambda_1> local_5a8;
  undefined1 local_5a7 [7];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_5a0;
  uint local_590;
  TObjectPtr<UPCGSettings>_u_0 local_588;
  FObjectPtr_u_0 local_580;
  TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> local_578;
  TObjectPtr<UObject> local_568;
  UPVMeshData *local_560;
  FObjectPtr_u_0 *local_558;
  TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> local_550;
  TArray<FName,TSizedDefaultAllocator<32>_> local_540;
  FText local_530;
  FBoneFacade local_518;
  FBoneFacade local_358;
  FManagedArrayCollection local_198;
  FManagedArrayCollection local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId46,"FPVBoneReductionElement::ExecuteInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVBoneReductionSettings.cpp"
               ,0x2e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId46);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVBoneReductionSettings.cpp"
                         ,0x30,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar9 = UPCGNode::GetSettings(this_00), pUVar9 == (UPCGSettings *)0x0)) {
      pFVar11 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPVBoneReductionSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_5a8);
      if (pFVar11 != (FPCGTaggedData *)0x0) {
        local_588.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar11->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_588.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_588.DebugPtr);
        }
        if (local_588.DebugPtr != (UPCGSettings *)0x0) {
          pUVar8 = UPVBoneReductionSettings::StaticClass();
          bVar5 = FObjectPtr::IsA(&local_588.ObjectPtr,pUVar8);
          TVar10 = local_588;
          if (bVar5) goto LAB_14da8084a;
        }
      }
    }
    else {
      pUVar9 = UPCGNode::GetSettings(this_00);
      TVar10.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar9);
      if (TVar10.DebugPtr != (UPCGSettings *)0x0) {
        pUVar8 = UPVBoneReductionSettings::StaticClass();
        iVar7 = (int)pUVar8->_padding_;
        if ((iVar7 <= *(int *)((TVar10.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar10.DebugPtr)->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
            &pUVar8->_padding_)) goto LAB_14da8084a;
      }
    }
    TVar10.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar8 = UPVBoneReductionSettings::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar8);
    TVar10.DebugPtr = (UPCGSettings *)0x0;
    if (bVar5) {
      TVar10.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
  }
LAB_14da8084a:
  if ((TVar10.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputSettings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVBoneReductionSettings.cpp"
                         ,0x33,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_5a0,&PCGPinConstants::DefaultInputLabel);
  uVar15 = (ulonglong)local_5a0.ArrayNum;
  local_590 = local_5a0.ArrayNum;
  local_558 = (FObjectPtr_u_0 *)(local_5a0.AllocatorInstance.Data + uVar15 * 0x78);
  FVar17.Data = local_5a0.AllocatorInstance.Data;
  do {
    pFVar4 = local_558;
    if (local_5a0.ArrayNum != (uint)uVar15) {
      local_5a7[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_5a7);
    }
    if ((FObjectPtr_u_0 *)FVar17.Data == pFVar4) goto LAB_14da80bf8;
    local_580 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar17.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14da808eb:
      if (local_580.Handle == (UObject *)0x0) goto LAB_14da8090b;
      pUVar8 = UPVMeshData::StaticClass();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_580,pUVar8);
      FVar16 = local_580;
      if (!bVar5) goto LAB_14da8090b;
    }
    else {
      if (local_580.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_580.Handle);
        goto LAB_14da808eb;
      }
LAB_14da8090b:
      FVar16.Handle = (UObject *)0x0;
    }
    if (FVar16.Handle == (UObject *)0x0) {
      PCGLog::InputOutput::LogInvalidInputDataError(param_1);
      goto LAB_14da80bf8;
    }
    FManagedArrayCollection::FManagedArrayCollection
              (&local_e8,(FManagedArrayCollection *)&FVar16.Handle[3].field_0x20);
    PV::Facades::FBoneFacade::FBoneFacade(&local_358,&local_e8);
    if (local_358.VertexPointIds.ConstAttributeArray == (TManagedArray<int> *)0x0) {
      pFVar14 = FText::FromString(&local_530,L"Can not reduce bones. Mesh data not available.");
      PCGLog::LogErrorOnGraph(pFVar14,param_1);
      if (local_530.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_530.TextData.Reference + 0x10))();
      }
      FManagedArrayCollection::~FManagedArrayCollection(&local_e8);
      goto LAB_14da80bf8;
    }
    FManagedArrayCollection::FManagedArrayCollection(&local_198);
    local_550.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_550.ArrayNum = 0;
    local_550.ArrayMax = 0;
    local_540.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_540.ArrayNum = 0;
    local_540.ArrayMax = 0;
    FManagedArrayCollection::CopyTo(&local_e8,&local_198,&local_540,&local_550);
    PV::Facades::FBoneFacade::FBoneFacade(&local_518,&local_198);
    bVar5 = IsInGameThread();
    if (bVar5) {
      pUVar12 = GetTransientPackageAsObject();
      pUVar13 = NewObject<UPVMeshData>(pUVar12);
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
      FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)&local_5a8);
      pUVar12 = GetTransientPackageAsObject();
      pUVar13 = NewObject<UPVMeshData>(pUVar12);
      FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)&local_5a8);
      if ((pUVar13 == (UPVMeshData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0x12a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      local_560 = pUVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UPVMeshData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_568,(bool *)&local_560);
    }
    local_578.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_578.ArrayNum = 0;
    local_578.ArrayMax = 0;
    bVar5 = PV::Facades::FBoneFacade::CreateBoneData
                      (&local_518,&local_578,*(float *)&TVar10.DebugPtr[1]._padding_,true);
    if (!bVar5) {
      PCGLog::InputOutput::LogInvalidInputDataError(param_1);
      if (local_578.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_578.AllocatorInstance.Data);
      }
      FManagedArrayCollection::~FManagedArrayCollection(&local_198);
      FManagedArrayCollection::~FManagedArrayCollection(&local_e8);
LAB_14da80bf8:
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_5a0.AllocatorInstance.Data,local_5a0.ArrayNum);
      if ((FPCGTaggedData *)local_5a0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_5a0.AllocatorInstance.Data);
      }
      if (bVar18) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    PV::Facades::FBoneFacade::SetBoneDataToCollection(&local_518,&local_578);
    FManagedArrayCollection::operator=((FManagedArrayCollection *)&pUVar13->field_0x98,&local_198);
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
    if (local_578.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.AllocatorInstance.Data);
    }
    FManagedArrayCollection::~FManagedArrayCollection(&local_198);
    FManagedArrayCollection::~FManagedArrayCollection(&local_e8);
    uVar15 = (ulonglong)local_590;
    FVar17.Data = FVar17.Data + 0x78;
  } while( true );
}

