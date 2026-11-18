// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// CanExecuteOnlyOnMainThread @ 149cb0b90

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
FPCGFetchInputElement::CanExecuteOnlyOnMainThread(FPCGFetchInputElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149cbfff0

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
FPCGFetchInputElement::ExecuteInternal(FPCGFetchInputElement *this,FPCGContext *param_1)

{
  int *piVar1;
  IPCGGraphExecutionSource *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  UPCGComponent *this_00;
  UClass *pUVar9;
  UPCGGraph *pUVar10;
  UPCGData *pUVar11;
  FPCGDataPtrWrapper *pFVar12;
  
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xb5d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  FPCGDataCollection::operator=(&param_1->OutputData,&param_1->InputData);
  if (((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
     (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (((((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
       (bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar7)) &&
      (pIVar2 = (param_1->ExecutionSource).InterfaceInstance,
      pIVar2 != (IPCGGraphExecutionSource *)0x0)) &&
     (this_00 = (UPCGComponent *)(**(code **)((longlong)*pIVar2 + 8))(),
     this_00 != (UPCGComponent *)0x0)) {
    pUVar9 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar8 = (int)pUVar9->_padding_;
    if ((iVar8 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar8 * 8)
        == &pUVar9->_padding_)) {
      if ((param_1->Node == (UPCGNode *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Context->Node",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                             ,0xb71,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pUVar10 = UPCGNode::GetGraph(param_1->Node);
      if ((pUVar10 != (UPCGGraph *)0x0) && (pUVar10->bHasDefaultConstructedInputs == false)) {
        return true;
      }
      bVar5 = UPCGNode::IsOutputPinConnected(param_1->Node,&PCGPinConstants::DefaultInputLabel);
      if ((bVar5) && (pUVar11 = UPCGComponent::GetPCGData(this_00), pUVar11 != (UPCGData *)0x0)) {
        iVar8 = (param_1->OutputData).TaggedData.ArrayNum;
        piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
        }
        pFVar3 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
        (param_1->OutputData).TaggedData.ArrayNum = iVar8 + 1;
        pFVar12 = (FPCGDataPtrWrapper *)(pFVar3 + (longlong)iVar8 * 0x78);
        pFVar12[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar12[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[6].WeakData.WeakPtr.ObjectIndex = 0x100;
        (pFVar12->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
        (pFVar12->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar12[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar12[3].WeakData.WeakPtr.ObjectIndex = 0;
        pFVar12[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)&pFVar12[4].Data.field0_0x0 = 0xffffffff;
        *(undefined4 *)((longlong)&pFVar12[4].Data.field0_0x0 + 4) = 0;
        pFVar12[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar12[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        *(undefined8 *)&pFVar12[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined4 *)((longlong)&pFVar12[7].Data.field0_0x0 + 4) = 0xffffffff;
        FPCGDataPtrWrapper::operator=(pFVar12,pUVar11);
        pFVar12[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
             (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
      }
      bVar5 = UPCGNode::IsOutputPinConnected
                        (param_1->Node,&PCGInputOutputConstants::DefaultInputLabel);
      if ((bVar5) && (pUVar11 = UPCGComponent::GetInputPCGData(this_00), pUVar11 != (UPCGData *)0x0)
         ) {
        iVar8 = (param_1->OutputData).TaggedData.ArrayNum;
        piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
        }
        pFVar3 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
        (param_1->OutputData).TaggedData.ArrayNum = iVar8 + 1;
        pFVar12 = (FPCGDataPtrWrapper *)(pFVar3 + (longlong)iVar8 * 0x78);
        pFVar12[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar12[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[6].WeakData.WeakPtr.ObjectIndex = 0x100;
        (pFVar12->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
        (pFVar12->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar12[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar12[3].WeakData.WeakPtr.ObjectIndex = 0;
        pFVar12[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)&pFVar12[4].Data.field0_0x0 = 0xffffffff;
        *(undefined4 *)((longlong)&pFVar12[4].Data.field0_0x0 + 4) = 0;
        pFVar12[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar12[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        *(undefined8 *)&pFVar12[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined4 *)((longlong)&pFVar12[7].Data.field0_0x0 + 4) = 0xffffffff;
        FPCGDataPtrWrapper::operator=(pFVar12,pUVar11);
        pFVar12[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
             (FObjectPtr_u_0)PCGInputOutputConstants::DefaultInputLabel;
      }
      bVar5 = UPCGNode::IsOutputPinConnected
                        (param_1->Node,&PCGInputOutputConstants::DefaultActorLabel);
      if ((bVar5) && (pUVar11 = UPCGComponent::GetActorPCGData(this_00), pUVar11 != (UPCGData *)0x0)
         ) {
        iVar8 = (param_1->OutputData).TaggedData.ArrayNum;
        piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
        }
        pFVar3 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
        (param_1->OutputData).TaggedData.ArrayNum = iVar8 + 1;
        pFVar12 = (FPCGDataPtrWrapper *)(pFVar3 + (longlong)iVar8 * 0x78);
        pFVar12[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar12[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[6].WeakData.WeakPtr.ObjectIndex = 0x100;
        (pFVar12->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
        (pFVar12->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar12[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar12[3].WeakData.WeakPtr.ObjectIndex = 0;
        pFVar12[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)&pFVar12[4].Data.field0_0x0 = 0xffffffff;
        *(undefined4 *)((longlong)&pFVar12[4].Data.field0_0x0 + 4) = 0;
        pFVar12[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar12[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        *(undefined8 *)&pFVar12[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined4 *)((longlong)&pFVar12[7].Data.field0_0x0 + 4) = 0xffffffff;
        FPCGDataPtrWrapper::operator=(pFVar12,pUVar11);
        pFVar12[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
             (FObjectPtr_u_0)PCGInputOutputConstants::DefaultActorLabel;
      }
      bVar5 = UPCGNode::IsOutputPinConnected
                        (param_1->Node,&PCGInputOutputConstants::DefaultLandscapeLabel);
      if ((bVar5) &&
         (pUVar11 = UPCGComponent::GetLandscapePCGData(this_00), pUVar11 != (UPCGData *)0x0)) {
        iVar8 = (param_1->OutputData).TaggedData.ArrayNum;
        piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
        }
        pFVar3 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
        (param_1->OutputData).TaggedData.ArrayNum = iVar8 + 1;
        pFVar12 = (FPCGDataPtrWrapper *)(pFVar3 + (longlong)iVar8 * 0x78);
        pFVar12[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar12[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[6].WeakData.WeakPtr.ObjectIndex = 0x100;
        (pFVar12->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
        (pFVar12->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar12[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar12[3].WeakData.WeakPtr.ObjectIndex = 0;
        pFVar12[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)&pFVar12[4].Data.field0_0x0 = 0xffffffff;
        *(undefined4 *)((longlong)&pFVar12[4].Data.field0_0x0 + 4) = 0;
        pFVar12[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar12[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        *(undefined8 *)&pFVar12[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined4 *)((longlong)&pFVar12[7].Data.field0_0x0 + 4) = 0xffffffff;
        FPCGDataPtrWrapper::operator=(pFVar12,pUVar11);
        pFVar12[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
             (FObjectPtr_u_0)PCGInputOutputConstants::DefaultLandscapeLabel;
      }
      bVar5 = UPCGNode::IsOutputPinConnected
                        (param_1->Node,&PCGInputOutputConstants::DefaultLandscapeHeightLabel);
      if ((bVar5) &&
         (pUVar11 = UPCGComponent::GetLandscapeHeightPCGData(this_00), pUVar11 != (UPCGData *)0x0))
      {
        iVar8 = (param_1->OutputData).TaggedData.ArrayNum;
        piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
        }
        pFVar3 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
        (param_1->OutputData).TaggedData.ArrayNum = iVar8 + 1;
        pFVar12 = (FPCGDataPtrWrapper *)(pFVar3 + (longlong)iVar8 * 0x78);
        pFVar12[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar12[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[6].WeakData.WeakPtr.ObjectIndex = 0x100;
        (pFVar12->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
        (pFVar12->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar12[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar12[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar12[3].WeakData.WeakPtr.ObjectIndex = 0;
        pFVar12[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)&pFVar12[4].Data.field0_0x0 = 0xffffffff;
        *(undefined4 *)((longlong)&pFVar12[4].Data.field0_0x0 + 4) = 0;
        pFVar12[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar12[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        *(undefined8 *)&pFVar12[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined4 *)((longlong)&pFVar12[7].Data.field0_0x0 + 4) = 0xffffffff;
        FPCGDataPtrWrapper::operator=(pFVar12,pUVar11);
        pFVar12[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
             (FObjectPtr_u_0)PCGInputOutputConstants::DefaultLandscapeHeightLabel;
      }
      bVar5 = UPCGNode::IsOutputPinConnected
                        (param_1->Node,&PCGInputOutputConstants::DefaultOriginalActorLabel);
      if (!bVar5) {
        return true;
      }
      pUVar11 = UPCGComponent::GetOriginalActorPCGData(this_00);
      if (pUVar11 == (UPCGData *)0x0) {
        return true;
      }
      iVar8 = (param_1->OutputData).TaggedData.ArrayNum;
      piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
      }
      (param_1->OutputData).TaggedData.ArrayNum = iVar8 + 1;
      pFVar12 = (FPCGDataPtrWrapper *)
                ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar8 * 0x78);
      pFVar12[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      pFVar12[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      pFVar12[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      pFVar12[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      pFVar12[6].WeakData.WeakPtr.ObjectIndex = 0x100;
      (pFVar12->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
      (pFVar12->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
      pFVar12[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      pFVar12[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      pFVar12[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      pFVar12[3].WeakData.WeakPtr.ObjectIndex = 0;
      pFVar12[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
      *(undefined4 *)&pFVar12[4].Data.field0_0x0 = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar12[4].Data.field0_0x0 + 4) = 0;
      pFVar12[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      pFVar12[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      *(undefined8 *)&pFVar12[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
      *(undefined4 *)((longlong)&pFVar12[7].Data.field0_0x0 + 4) = 0xffffffff;
      FPCGDataPtrWrapper::operator=(pFVar12,pUVar11);
      pFVar12[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
           (FObjectPtr_u_0)PCGInputOutputConstants::DefaultOriginalActorLabel;
      return true;
    }
  }
  (param_1->OutputData).bCancelExecution = bVar5;
  return true;
}

// IsCacheable @ 149ccd4a0

bool __thiscall
FPCGFetchInputElement::IsCacheable(FPCGFetchInputElement *this,UPCGSettings *param_1)

{
  return false;
}

// IsPassthrough @ 149ccd650

bool __thiscall
FPCGFetchInputElement::IsPassthrough(FPCGFetchInputElement *this,UPCGSettings *param_1)

{
  return true;
}

// SupportsBasePointDataInputs @ 149cdda30

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
FPCGFetchInputElement::SupportsBasePointDataInputs(FPCGFetchInputElement *this,FPCGContext *param_1)

{
  return true;
}

