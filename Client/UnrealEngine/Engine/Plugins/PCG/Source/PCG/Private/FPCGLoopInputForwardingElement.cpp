// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// FPCGLoopInputForwardingElement @ 149be5cd0

FPCGLoopInputForwardingElement * __thiscall
FPCGLoopInputForwardingElement::FPCGLoopInputForwardingElement
          (FPCGLoopInputForwardingElement *this,FPCGDataCollection *param_1,ulong64 param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  FPCGInputForwardingElement::FPCGInputForwardingElement((FPCGInputForwardingElement *)this,param_1)
  ;
  pTVar1 = &this->FeedbackPinNames;
  this->PreviousIterationTaskId = param_2;
  this->_padding_ = (longlong)&___7FPCGLoopInputForwardingElement__6B_;
  piVar2 = &(this->FeedbackPinNames).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_3->ArrayNum;
  _Src = (param_3->AllocatorInstance).Data;
  (this->FeedbackPinNames).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  return this;
}

// ExecuteInternal @ 149c113b0

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
FPCGLoopInputForwardingElement::ExecuteInternal
          (FPCGLoopInputForwardingElement *this,FPCGContext *param_1)

{
  FPCGDataCollection *pFVar1;
  int *piVar2;
  FName *pFVar3;
  FPCGTaggedData *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FName *pFVar10;
  ForAnyElementType FVar11;
  FPCGTaggedData *pFVar12;
  undefined1 local_res8 [8];
  FPCGDataCollection local_48;
  
  do {
    bVar7 = FPCGInputForwardingElement::ExecuteInternal((FPCGInputForwardingElement *)this,param_1);
  } while (!bVar7);
  if ((this->PreviousIterationTaskId != 0xffffffffffffffff) &&
     ((this->FeedbackPinNames).ArrayNum != 0)) {
    if (((param_1 == (FPCGContext *)0x0) ||
        (((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0 ||
         (bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar7))))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Context && Context->ExecutionSource.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGLoopElement.cpp"
                              ,0x1af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    local_48.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.TaggedData.ArrayNum = 0;
    local_48.TaggedData.ArrayMax = 0;
    local_48.bCancelExecutionOnEmpty = false;
    local_48.bCancelExecution = false;
    local_48.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.DataCrcs.ArrayNum = 0;
    local_48.DataCrcs.ArrayMax = 0;
    local_48.InactiveOutputPinBitmask = 0;
    bVar7 = FPCGContext::GetOutputData(param_1,this->PreviousIterationTaskId,&local_48);
    if (bVar7) {
      pFVar1 = &param_1->OutputData;
      iVar6 = local_48.TaggedData.ArrayNum;
      pFVar12 = (FPCGTaggedData *)
                (local_48.TaggedData.AllocatorInstance.Data +
                (longlong)local_48.TaggedData.ArrayNum * 0x78);
      FVar11.Data = local_48.TaggedData.AllocatorInstance.Data;
      while( true ) {
        if (local_48.TaggedData.ArrayNum != iVar6) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if ((FPCGTaggedData *)FVar11.Data == pFVar12) break;
        pFVar10 = (FName *)(this->FeedbackPinNames).AllocatorInstance.Data;
        pFVar3 = pFVar10 + (this->FeedbackPinNames).ArrayNum;
        if (pFVar10 == pFVar3) {
LAB_149c11573:
          FVar11.Data = FVar11.Data + 0x78;
        }
        else {
          do {
            if (*pFVar10 == ((FPCGTaggedData *)FVar11.Data)->Pin) {
              pFVar4 = (FPCGTaggedData *)(pFVar1->TaggedData).AllocatorInstance.Data;
              if (((pFVar4 <= FVar11.Data) &&
                  (FVar11.Data < pFVar4 + (param_1->OutputData).TaggedData.ArrayMax)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar5 = (code *)swi(3);
                uVar8 = (*pcVar5)();
                return (bool)uVar8;
              }
              iVar9 = (param_1->OutputData).TaggedData.ArrayNum;
              piVar2 = &(param_1->OutputData).TaggedData.ArrayMax;
              if (iVar9 == *piVar2) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x878,(ForAnyElementType *)pFVar1,piVar2);
              }
              (param_1->OutputData).TaggedData.ArrayNum = iVar9 + 1;
              FPCGTaggedData::FPCGTaggedData
                        ((FPCGTaggedData *)
                         ((pFVar1->TaggedData).AllocatorInstance.Data + (longlong)iVar9 * 0x78),
                         (FPCGTaggedData *)FVar11.Data);
              goto LAB_149c11573;
            }
            pFVar10 = pFVar10 + 1;
          } while (pFVar10 != pFVar3);
          FVar11.Data = FVar11.Data + 0x78;
        }
      }
    }
    if (local_48.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DataCrcs.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_48.TaggedData.AllocatorInstance.Data,
               local_48.TaggedData.ArrayNum);
    if ((FPCGTaggedData *)local_48.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_48.TaggedData.AllocatorInstance.Data);
    }
  }
  return true;
}

