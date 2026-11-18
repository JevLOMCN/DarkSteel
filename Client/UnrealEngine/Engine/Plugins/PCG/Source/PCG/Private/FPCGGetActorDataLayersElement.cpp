// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// CanExecuteOnlyOnMainThread @ 149b67c90

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
FPCGGetActorDataLayersElement::CanExecuteOnlyOnMainThread
          (FPCGGetActorDataLayersElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149b871e0

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
FPCGGetActorDataLayersElement::ExecuteInternal
          (FPCGGetActorDataLayersElement *this,FPCGContext *param_1)

{
  int *piVar1;
  int iVar2;
  UPCGNode *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *pUVar7;
  UPCGSettings *pUVar8;
  TObjectPtr<UPCGSettings>_u_0 TVar9;
  UObject *pUVar10;
  UPCGParamData *pUVar11;
  FText *pFVar12;
  ForAnyElementType FVar13;
  FPCGDataPtrWrapper *this_01;
  FPCGTaggedData *pFVar14;
  <lambda_1> local_res10 [8];
  FGCScopeGuard local_res18 [8];
  TObjectPtr<UObject> local_res20;
  TObjectPtr<UPCGSettings>_u_0 local_68;
  UPCGParamData *local_60;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_58;
  FText local_48;
  
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar8 = UPCGNode::GetSettings(this_00), pUVar8 == (UPCGSettings *)0x0)) {
      pFVar14 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetActorDataLayersSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10[0]);
      if (pFVar14 != (FPCGTaggedData *)0x0) {
        local_68.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar14->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_68.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_68.DebugPtr);
        }
        if (local_68.DebugPtr != (UPCGSettings *)0x0) {
          pUVar7 = UPCGGetActorDataLayersSettings::StaticClass();
          bVar4 = FObjectPtr::IsA(&local_68.ObjectPtr,pUVar7);
          TVar9 = local_68;
          if (bVar4) goto LAB_149b87311;
        }
      }
    }
    else {
      pUVar8 = UPCGNode::GetSettings(this_00);
      TVar9.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar8);
      if (TVar9.DebugPtr != (UPCGSettings *)0x0) {
        pUVar7 = UPCGGetActorDataLayersSettings::StaticClass();
        iVar2 = (int)pUVar7->_padding_;
        if ((iVar2 <= *(int *)((TVar9.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar9.DebugPtr)->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar7->_padding_)) goto LAB_149b87311;
      }
    }
    TVar9.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar7 = UPCGGetActorDataLayersSettings::StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar7);
    TVar9.DebugPtr = (UPCGSettings *)0x0;
    if (bVar4) {
      TVar9.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
  }
LAB_149b87311:
  if ((TVar9.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetActorDataLayers.cpp"
                         ,0x33,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_58,&PCGPinConstants::DefaultInputLabel);
  iVar2 = local_58.ArrayNum;
  pFVar14 = (FPCGTaggedData *)(local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 0x78)
  ;
  FVar13.Data = local_58.AllocatorInstance.Data;
  do {
    if (local_58.ArrayNum != iVar2) {
      local_res10[0] = (<lambda_1>)0x0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if ((FPCGTaggedData *)FVar13.Data == pFVar14) {
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_48,L"PCGGetActorDataLayers",L"GetActorDataLayersUnsupported",
                           L"Get Actor Data Layers is unsupported at runtime");
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
    if ((((FPCGTaggedData *)FVar13.Data)->Data).Data.field0_0x0.DebugPtr != (UPCGData *)0x0) {
      iVar6 = (param_1->OutputData).TaggedData.ArrayNum;
      piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
      }
      (param_1->OutputData).TaggedData.ArrayNum = iVar6 + 1;
      this_01 = (FPCGDataPtrWrapper *)
                ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar6 * 0x78);
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
      bVar4 = IsInGameThread();
      if (bVar4) {
        pUVar10 = GetTransientPackageAsObject();
        pUVar11 = NewObject<UPCGParamData>(pUVar10);
      }
      else {
        if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4331830188552749348>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                               ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FGCScopeGuard::FGCScopeGuard(local_res18);
        pUVar10 = GetTransientPackageAsObject();
        pUVar11 = NewObject<UPCGParamData>(pUVar10);
        FGCScopeGuard::~FGCScopeGuard(local_res18);
        if ((pUVar11 == (UPCGParamData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                               ,0x12a,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        local_60 = pUVar11;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar11 != (UPCGParamData *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar11);
        }
        TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
        Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res20,(bool *)&local_60);
      }
      this_01[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
           (FObjectPtr_u_0)PCGPinConstants::DefaultOutputLabel;
      FPCGDataPtrWrapper::operator=(this_01,(UPCGData *)pUVar11);
    }
    FVar13.Data = FVar13.Data + 0x78;
  } while( true );
}

// IsCacheable @ 149b93250

bool __thiscall
FPCGGetActorDataLayersElement::IsCacheable
          (FPCGGetActorDataLayersElement *this,UPCGSettings *param_1)

{
  return false;
}

// SupportsBasePointDataInputs @ 149b98ad0

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
FPCGGetActorDataLayersElement::SupportsBasePointDataInputs
          (FPCGGetActorDataLayersElement *this,FPCGContext *param_1)

{
  return true;
}

