// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// CanExecuteOnlyOnMainThread @ 149c018f0

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
FPCGPartitionByActorDataLayersElement::CanExecuteOnlyOnMainThread
          (FPCGPartitionByActorDataLayersElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149c14890

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
FPCGPartitionByActorDataLayersElement::ExecuteInternal
          (FPCGPartitionByActorDataLayersElement *this,FPCGContext *param_1)

{
  UPCGNode *this_00;
  code *pcVar1;
  int *piVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UClass *pUVar6;
  UPCGSettings *pUVar7;
  TObjectPtr<UPCGSettings>_u_0 TVar8;
  FPCGTaggedData *pFVar9;
  UObject *pUVar10;
  UPCGParamData *pUVar11;
  FText *pFVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  FPCGDataCollection *pFVar15;
  int *piVar16;
  FPCGDataPtrWrapper *this_01;
  int *piVar17;
  int *piVar18;
  ForAnyElementType FVar19;
  <lambda_1> local_res10 [8];
  FGCScopeGuard local_res18 [8];
  uint local_res20;
  TObjectPtr<UObject> local_88;
  TObjectPtr<UPCGSettings>_u_0 local_80;
  FPCGTaggedData *local_78;
  UPCGParamData *local_70;
  int *local_68;
  int *local_60;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_58;
  FText local_48;
  
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar7 = UPCGNode::GetSettings(this_00), pUVar7 == (UPCGSettings *)0x0)) {
      pFVar9 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
               FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPartitionByActorDataLayersSettings>_::__l2::<lambda_1>_>
                         (&(param_1->InputData).TaggedData,local_res10[0]);
      if (pFVar9 != (FPCGTaggedData *)0x0) {
        local_80.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar9->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_80.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_80.DebugPtr);
        }
        if (local_80.DebugPtr != (UPCGSettings *)0x0) {
          pUVar6 = UPCGPartitionByActorDataLayersSettings::StaticClass();
          bVar3 = FObjectPtr::IsA(&local_80.ObjectPtr,pUVar6);
          TVar8 = local_80;
          if (bVar3) goto LAB_149c149c1;
        }
      }
    }
    else {
      pUVar7 = UPCGNode::GetSettings(this_00);
      TVar8.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar7);
      if (TVar8.DebugPtr != (UPCGSettings *)0x0) {
        pUVar6 = UPCGPartitionByActorDataLayersSettings::StaticClass();
        iVar5 = (int)pUVar6->_padding_;
        if ((iVar5 <= *(int *)((TVar8.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar8.DebugPtr)->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
            &pUVar6->_padding_)) goto LAB_149c149c1;
      }
    }
    TVar8.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar6 = UPCGPartitionByActorDataLayersSettings::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar6);
    TVar8.DebugPtr = (UPCGSettings *)0x0;
    if (bVar3) {
      TVar8.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
  }
LAB_149c149c1:
  if ((TVar8.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPartitionByActorDataLayers.cpp"
                         ,0x81,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_58,&PCGPinConstants::DefaultInputLabel);
  uVar13 = (ulonglong)local_58.ArrayNum;
  piVar16 = &(param_1->OutputData).TaggedData.ArrayMax;
  piVar17 = &(param_1->OutputData).TaggedData.ArrayNum;
  local_res20 = local_58.ArrayNum;
  local_78 = (FPCGTaggedData *)(local_58.AllocatorInstance.Data + uVar13 * 0x78);
  uVar14 = uVar13;
  piVar18 = piVar17;
  FVar19.Data = local_58.AllocatorInstance.Data;
  local_68 = piVar17;
  local_60 = piVar16;
  do {
    piVar2 = local_60;
    pFVar15 = &param_1->OutputData;
    if ((int)uVar13 != (int)uVar14) {
      local_res10[0] = (<lambda_1>)0x0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
      piVar16 = piVar2;
      piVar18 = piVar17;
    }
    if ((FPCGTaggedData *)FVar19.Data == local_78) {
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_48,L"PCGPartitionByActorDataLayers",
                           L"PartitionByActorDataLayersUnsupported",
                           L"Partition by Actor Data Layers is unsupported at runtime");
      PCGLog::LogErrorOnGraph(pFVar12,param_1);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
      if ((FPCGTaggedData *)local_58.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return true;
    }
    pFVar9 = (FPCGTaggedData *)(pFVar15->TaggedData).AllocatorInstance.Data;
    if (((pFVar9 <= FVar19.Data) && (FVar19.Data < pFVar9 + *piVar16)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    iVar5 = *piVar18;
    if (iVar5 == *piVar16) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,(ForAnyElementType *)pFVar15,piVar16);
    }
    *piVar18 = iVar5 + 1;
    FPCGTaggedData::FPCGTaggedData
              ((FPCGTaggedData *)
               ((pFVar15->TaggedData).AllocatorInstance.Data + (longlong)iVar5 * 0x78),
               (FPCGTaggedData *)FVar19.Data);
    iVar5 = *piVar18;
    if (iVar5 == *piVar16) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,(ForAnyElementType *)pFVar15,piVar16);
    }
    *piVar18 = iVar5 + 1;
    this_01 = (FPCGDataPtrWrapper *)
              ((pFVar15->TaggedData).AllocatorInstance.Data + (longlong)iVar5 * 0x78);
    this_01[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_01[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_01[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_01[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_01[6].WeakData.WeakPtr.ObjectIndex = 0x100;
    (this_01->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
    (this_01->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
    this_01[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_01[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_01[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_01[3].WeakData.WeakPtr.ObjectIndex = 0;
    this_01[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
    *(undefined4 *)&this_01[4].Data.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this_01[4].Data.field0_0x0 + 4) = 0;
    this_01[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_01[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    *(undefined8 *)&this_01[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
    *(undefined4 *)((longlong)&this_01[7].Data.field0_0x0 + 4) = 0xffffffff;
    bVar3 = IsInGameThread();
    if (bVar3) {
      pUVar10 = GetTransientPackageAsObject();
      pUVar11 = NewObject<UPCGParamData>(pUVar10);
    }
    else {
      if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
         (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4331830188552749348>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      FGCScopeGuard::FGCScopeGuard(local_res18);
      pUVar10 = GetTransientPackageAsObject();
      pUVar11 = NewObject<UPCGParamData>(pUVar10);
      FGCScopeGuard::~FGCScopeGuard(local_res18);
      if ((pUVar11 == (UPCGParamData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0x12a,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      local_70 = pUVar11;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UPCGParamData *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_88,(bool *)&local_70);
      piVar17 = local_68;
    }
    this_01[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
         (FObjectPtr_u_0)PCGPartitionByActorDataLayers::Constants::DataLayerPartitionsLabel;
    FPCGDataPtrWrapper::operator=(this_01,(UPCGData *)pUVar11);
    uVar13 = (ulonglong)(uint)local_58.ArrayNum;
    uVar14 = (ulonglong)local_res20;
    FVar19.Data = FVar19.Data + 0x78;
  } while( true );
}

// IsCacheable @ 149c2d430

bool __thiscall
FPCGPartitionByActorDataLayersElement::IsCacheable
          (FPCGPartitionByActorDataLayersElement *this,UPCGSettings *param_1)

{
  return false;
}

// SupportsBasePointDataInputs @ 149c357e0

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
FPCGPartitionByActorDataLayersElement::SupportsBasePointDataInputs
          (FPCGPartitionByActorDataLayersElement *this,FPCGContext *param_1)

{
  return true;
}

