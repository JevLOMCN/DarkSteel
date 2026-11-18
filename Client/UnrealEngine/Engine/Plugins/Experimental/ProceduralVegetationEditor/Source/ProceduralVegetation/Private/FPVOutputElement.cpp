// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 2

// CanExecuteOnlyOnMainThread @ 14da706d0

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
FPVOutputElement::CanExecuteOnlyOnMainThread(FPVOutputElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 14da83920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPVOutputElement::ExecuteInternal(FPVOutputElement *this,FPCGContext *param_1)

{
  FPCGDataCollection *pFVar1;
  int *piVar2;
  TArray<FPCGCrc,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FPCGCrc,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  int iVar6;
  UPCGNode *this_00;
  code *pcVar7;
  FObjectPtr_u_0 *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  UClass *pUVar11;
  UPCGSettings *pUVar12;
  TObjectPtr<UPCGSettings>_u_0 TVar13;
  FPCGTaggedData *pFVar14;
  FText *pFVar15;
  ulonglong uVar16;
  FPCGDataCollection *this_01;
  ForAnyElementType FVar17;
  <lambda_1> local_res10;
  FScriptContainerElement *local_res18;
  uint local_res20;
  TObjectPtr<UPCGSettings>_u_0 local_88;
  FObjectPtr_u_0 local_80;
  FObjectPtr_u_0 *local_78;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_70;
  FString local_60;
  FText local_50;
  
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar12 = UPCGNode::GetSettings(this_00), pUVar12 == (UPCGSettings *)0x0)) {
      local_res10 = SUB81(param_1,0);
      pFVar14 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPVOutputSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10);
      if (pFVar14 != (FPCGTaggedData *)0x0) {
        local_88.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar14->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_88.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_88.DebugPtr);
        }
        if (local_88.DebugPtr != (UPCGSettings *)0x0) {
          pUVar11 = UPVOutputSettings::StaticClass();
          bVar9 = FObjectPtr::IsA(&local_88.ObjectPtr,pUVar11);
          TVar13 = local_88;
          if (bVar9) goto LAB_14da83a36;
        }
      }
    }
    else {
      pUVar12 = UPCGNode::GetSettings(this_00);
      TVar13.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar12);
      if (TVar13.DebugPtr != (UPCGSettings *)0x0) {
        pUVar11 = UPVOutputSettings::StaticClass();
        iVar5 = (int)pUVar11->_padding_;
        if ((iVar5 <= *(int *)((TVar13.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar13.DebugPtr)->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
            &pUVar11->_padding_)) goto LAB_14da83a36;
      }
    }
    TVar13.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar11 = UPVOutputSettings::StaticClass();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar11);
    TVar13.DebugPtr = (UPCGSettings *)0x0;
    if (bVar9) {
      TVar13.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
  }
LAB_14da83a36:
  this_01 = &param_1->InputData;
  if ((TVar13.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVOutputSettings.cpp"
                         ,0x6d,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  FPCGDataCollection::GetInputsByPin(this_01,&local_70,&PCGPinConstants::DefaultInputLabel);
  uVar16 = (ulonglong)local_70.ArrayNum;
  local_res20 = local_70.ArrayNum;
  local_78 = (FObjectPtr_u_0 *)(local_70.AllocatorInstance.Data + uVar16 * 0x78);
  FVar17.Data = local_70.AllocatorInstance.Data;
  while( true ) {
    pFVar8 = local_78;
    if (local_70.ArrayNum != (uint)uVar16) {
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res18);
    }
    if ((FObjectPtr_u_0 *)FVar17.Data == pFVar8) goto LAB_14da83c64;
    local_80 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar17.Data;
    if (UE::GC::GIsIncrementalReachabilityPending != false) break;
LAB_14da83acf:
    if (local_80.Handle == (UObject *)0x0) goto LAB_14da83c5c;
    pUVar11 = UPVData::StaticClass();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)&local_80,pUVar11);
    if ((!bVar9) || (local_80.Handle == (UObject *)0x0)) goto LAB_14da83c5c;
    local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.Data.ArrayNum = 0;
    local_60.Data.ArrayMax = 0;
    bVar9 = FPVExportParams::Validate((FPVExportParams *)(TVar13.DebugPtr + 1),&local_60);
    if (!bVar9) {
      pFVar15 = FText::FromString(&local_50,&local_60);
      PCGLog::LogErrorOnGraph(pFVar15,param_1);
      if (local_50.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
LAB_14da83c64:
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_70.AllocatorInstance.Data,local_70.ArrayNum);
      if ((FPCGTaggedData *)local_70.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
      return true;
    }
    pFVar1 = &param_1->OutputData;
    if (pFVar1 != this_01) {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)(pFVar1->TaggedData).AllocatorInstance.Data,
                 (param_1->OutputData).TaggedData.ArrayNum);
      iVar5 = (param_1->InputData).TaggedData.ArrayNum;
      piVar2 = &(param_1->OutputData).TaggedData.ArrayMax;
      pFVar14 = (FPCGTaggedData *)(this_01->TaggedData).AllocatorInstance.Data;
      iVar6 = *piVar2;
      (param_1->OutputData).TaggedData.ArrayNum = iVar5;
      if ((iVar5 == 0) && (iVar6 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x78,8,iVar5,iVar6,(ForAnyElementType *)pFVar1,iVar5,piVar2);
        ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                  ((pFVar1->TaggedData).AllocatorInstance.Data,pFVar14,iVar5);
      }
    }
    pTVar3 = &(param_1->OutputData).DataCrcs;
    (param_1->OutputData).bCancelExecutionOnEmpty = (param_1->InputData).bCancelExecutionOnEmpty;
    (param_1->OutputData).bCancelExecution = (param_1->InputData).bCancelExecution;
    pTVar4 = &(param_1->InputData).DataCrcs;
    if (pTVar3 != pTVar4) {
      iVar5 = (param_1->InputData).DataCrcs.ArrayNum;
      piVar2 = &(param_1->OutputData).DataCrcs.ArrayMax;
      local_res18 = (pTVar4->AllocatorInstance).Data;
      iVar6 = *piVar2;
      (param_1->OutputData).DataCrcs.ArrayNum = iVar5;
      if ((iVar5 == 0) && (iVar6 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar5,iVar6,&pTVar3->AllocatorInstance,iVar5,piVar2);
        if (iVar5 != 0) {
          memcpy((pTVar3->AllocatorInstance).Data,local_res18,(longlong)iVar5 << 3);
        }
      }
    }
    (param_1->OutputData).InactiveOutputPinBitmask = (param_1->InputData).InactiveOutputPinBitmask;
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    FVar17.Data = FVar17.Data + 0x78;
    uVar16 = (ulonglong)local_res20;
  }
  if (local_80.Handle != (UObject *)0x0) {
    UE::GC::MarkAsReachable(local_80.Handle);
    goto LAB_14da83acf;
  }
LAB_14da83c5c:
  PCGLog::InputOutput::LogInvalidInputDataError(param_1);
  goto LAB_14da83c64;
}

