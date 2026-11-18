// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 74

// AddExtraStructReferencedObjects @ 1499d3520

void __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>::
AddExtraStructReferencedObjects
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>
           *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->TrackedObjectArray).AllocatorInstance.Data,
             (this->TrackedObjectArray).ArrayNum,0,0);
  return;
}

// DataIsPreparedForExecution @ 1499dd750

bool __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>::
DataIsPreparedForExecution
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>
           *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if (((this->ExecutionStateResult != Uninitialized) &&
      (this->ExecutionStateResult != AbortExecution)) &&
     (this->bPerIterationStateIsInitialized != false)) {
    pFVar3 = (this->PerIterationStateResultArray).AllocatorInstance.Data;
    iVar2 = (this->PerIterationStateResultArray).ArrayNum;
    pFVar1 = pFVar3 + iVar2;
    while( true ) {
      if ((this->PerIterationStateResultArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_EPCGTimeSliceInitResult_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) {
        return true;
      }
      if ((*pFVar3 == (FScriptContainerElement)0x0) || (*pFVar3 == (FScriptContainerElement)0x3))
      break;
      pFVar3 = pFVar3 + 1;
    }
  }
  return false;
}

// InitializePerExecutionState @ 1499fe5f0

EPCGTimeSliceInitResult __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>::
InitializePerExecutionState
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>
           *this,TFunctionRef<EPCGTimeSliceInitResult___cdecl(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>_*,PCGTimeSlice::FEmptyStruct_&)>
                 *param_1)

{
  EPCGTimeSliceInitResult EVar1;
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>
  *local_res8 [4];
  
  EVar1 = this->ExecutionStateResult;
  if (EVar1 == Uninitialized) {
    local_res8[0] = this;
    EVar1 = (**(code **)param_1)
                      (*(undefined8 *)&param_1->field_0x8,local_res8,&this->PerExecutionStateData);
    this->ExecutionStateResult = EVar1;
  }
  return EVar1;
}

// InitializePerIterationStates @ 1499fe640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> * __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>::
InitializePerIterationStates
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>
           *this,int param_1,
          TFunctionRef<EPCGTimeSliceInitResult___cdecl(PCGMetadataOps::FOperationData_&,PCGTimeSlice::FEmptyStruct_const_&,unsigned_int)>
          *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<PCGMetadataOps::FOperationData,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement FVar6;
  int iVar7;
  TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FOperationData *this_00;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint local_58 [6];
  
  pTVar8 = &this->PerIterationStateResultArray;
  if (this->bPerIterationStateIsInitialized == false) {
    iVar7 = (this->PerIterationStateResultArray).ArrayNum;
    this->bPerIterationStateIsInitialized = true;
    if (((iVar7 != 0) || ((this->PerIterationStateArray).ArrayNum != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PerIterationStateResultArray.IsEmpty() && PerIterationStateArray.IsEmpty()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                           ,0xc6,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
    if (0 < param_1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_1,&pTVar8->AllocatorInstance,
                 &(this->PerIterationStateResultArray).ArrayNum,
                 &(this->PerIterationStateResultArray).ArrayMax);
      pTVar3 = &this->PerIterationStateArray;
      piVar1 = &(this->PerIterationStateArray).ArrayMax;
      if ((this->PerIterationStateArray).ArrayMax < param_1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x78,8,param_1,&pTVar3->AllocatorInstance,(this->PerIterationStateArray).ArrayNum
                   ,piVar1);
      }
      uVar13 = 0;
      uVar14 = uVar13;
      do {
        iVar7 = (this->PerIterationStateArray).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,&pTVar3->AllocatorInstance,piVar1);
          (this->PerIterationStateArray).ArrayNum = iVar7;
        }
        uVar12 = (uint)uVar13;
        (this->PerIterationStateArray).ArrayNum = iVar7 + 1;
        pFVar10 = (pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 0x78;
        *(undefined4 *)(pFVar10 + 4) = 0xff;
        *(undefined8 *)(pFVar10 + 0x10) = 0;
        *(undefined8 *)(pFVar10 + 8) = 0;
        *(undefined8 *)(pFVar10 + 0x18) = 0;
        *(undefined8 *)(pFVar10 + 0x28) = 0;
        *(undefined8 *)(pFVar10 + 0x38) = 0;
        *(undefined8 *)(pFVar10 + 0x48) = 0;
        *(undefined8 *)(pFVar10 + 0x58) = 0;
        *(undefined4 *)(pFVar10 + 0x60) = 0;
        *(undefined4 *)(pFVar10 + 0x6c) = 0;
        *(undefined8 *)(pFVar10 + 100) = 0;
        *(undefined8 *)(pFVar10 + 0x70) = 4;
        *(undefined4 *)pFVar10 = 0xffffffff;
        *(undefined8 *)(pFVar10 + 0x20) = 0;
        *(undefined8 *)(pFVar10 + 0x30) = 0;
        *(undefined8 *)(pFVar10 + 0x40) = 0;
        *(undefined8 *)(pFVar10 + 0x50) = 0;
        local_58[0] = uVar12;
        FVar6 = (FScriptContainerElement)
                (**(code **)param_2)
                          (*(undefined8 *)&param_2->field_0x8,pFVar10,&this->PerExecutionStateData,
                           local_58);
        uVar9 = 0;
        if ((int)uVar12 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        (pTVar8->AllocatorInstance).Data[uVar14] = FVar6;
        uVar9 = 0;
        if ((int)uVar12 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        if ((pTVar8->AllocatorInstance).Data[uVar14] == (FScriptContainerElement)0x3) {
          iVar7 = (this->PerIterationStateArray).ArrayNum;
          uVar11 = iVar7 - 1;
          uVar9 = 0;
          if ((int)uVar11 < iVar7) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
          this_00 = (FOperationData *)
                    ((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x78);
          PCGMetadataOps::FOperationData::~FOperationData(this_00);
          iVar7 = (this->PerIterationStateArray).ArrayNum + ~uVar11;
          if (iVar7 != 0) {
            memmove(this_00,this_00 + 1,(longlong)iVar7 * 0x78);
          }
          piVar2 = &(this->PerIterationStateArray).ArrayNum;
          *piVar2 = *piVar2 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x78,8,&pTVar3->AllocatorInstance,(this->PerIterationStateArray).ArrayNum,
                     piVar1);
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar14 = uVar14 + 1;
      } while ((int)(uVar12 + 1) < param_1);
    }
  }
  return pTVar8;
}

// TimeSliceIsEnabled @ 149a102d0

bool __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>::
TimeSliceIsEnabled(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>
                   *this)

{
  return this->bTimeSliceIsEnabled;
}

// TrackObject @ 149a10350

void __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>::
TrackObject(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>
            *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  TObjectPtr<UObject_const_>_u_0 local_res8;
  
  if ((param_1 == (UObject *)0x0) || ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object && IsValid(Object)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                       ,0xe3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TObjectPtr<UObject_const_>_>
            (&this->TrackedObjectArray,(TObjectPtr<UObject_const_> *)&local_res8.ObjectPtr);
  return;
}

// AddExtraStructReferencedObjects @ 149af4800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
::AddExtraStructReferencedObjects
          (TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
           *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->TrackedObjectArray).AllocatorInstance.Data,
             (this->TrackedObjectArray).ArrayNum,0,0);
  return;
}

// AddExtraStructReferencedObjects @ 149af4840

void __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>::
AddExtraStructReferencedObjects
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext> *this,
          FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->TrackedObjectArray).AllocatorInstance.Data,
             (this->TrackedObjectArray).ArrayNum,0,0);
  return;
}

// AddExtraStructReferencedObjects @ 149af4880

void __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
::AddExtraStructReferencedObjects
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
           *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->TrackedObjectArray).AllocatorInstance.Data,
             (this->TrackedObjectArray).ArrayNum,0,0);
  return;
}

// AddExtraStructReferencedObjects @ 149af48c0

void __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>::
AddExtraStructReferencedObjects
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
           *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->TrackedObjectArray).AllocatorInstance.Data,
             (this->TrackedObjectArray).ArrayNum,0,0);
  return;
}

// AddExtraStructReferencedObjects @ 149af4900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>::
AddExtraStructReferencedObjects
          (TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
           *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->TrackedObjectArray).AllocatorInstance.Data,
             (this->TrackedObjectArray).ArrayNum,0,0);
  return;
}

// AddExtraStructReferencedObjects @ 149af4940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
::AddExtraStructReferencedObjects
          (TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
           *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->TrackedObjectArray).AllocatorInstance.Data,
             (this->TrackedObjectArray).ArrayNum,0,0);
  return;
}

// DataIsPreparedForExecution @ 149afd4d0

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
TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
::DataIsPreparedForExecution
          (TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
           *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if (((this->ExecutionStateResult != Uninitialized) &&
      (this->ExecutionStateResult != AbortExecution)) &&
     (this->bPerIterationStateIsInitialized != false)) {
    pFVar3 = (this->PerIterationStateResultArray).AllocatorInstance.Data;
    iVar2 = (this->PerIterationStateResultArray).ArrayNum;
    pFVar1 = pFVar3 + iVar2;
    while( true ) {
      if ((this->PerIterationStateResultArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_EPCGTimeSliceInitResult_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) {
        return true;
      }
      if ((*pFVar3 == (FScriptContainerElement)0x0) || (*pFVar3 == (FScriptContainerElement)0x3))
      break;
      pFVar3 = pFVar3 + 1;
    }
  }
  return false;
}

// DataIsPreparedForExecution @ 149afd560

bool __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>::
DataIsPreparedForExecution
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext> *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if (((this->ExecutionStateResult != Uninitialized) &&
      (this->ExecutionStateResult != AbortExecution)) &&
     (this->bPerIterationStateIsInitialized != false)) {
    pFVar3 = (this->PerIterationStateResultArray).AllocatorInstance.Data;
    iVar2 = (this->PerIterationStateResultArray).ArrayNum;
    pFVar1 = pFVar3 + iVar2;
    while( true ) {
      if ((this->PerIterationStateResultArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_EPCGTimeSliceInitResult_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) {
        return true;
      }
      if ((*pFVar3 == (FScriptContainerElement)0x0) || (*pFVar3 == (FScriptContainerElement)0x3))
      break;
      pFVar3 = pFVar3 + 1;
    }
  }
  return false;
}

// DataIsPreparedForExecution @ 149afd5f0

bool __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
::DataIsPreparedForExecution
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
           *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if (((this->ExecutionStateResult != Uninitialized) &&
      (this->ExecutionStateResult != AbortExecution)) &&
     (this->bPerIterationStateIsInitialized != false)) {
    pFVar3 = (this->PerIterationStateResultArray).AllocatorInstance.Data;
    iVar2 = (this->PerIterationStateResultArray).ArrayNum;
    pFVar1 = pFVar3 + iVar2;
    while( true ) {
      if ((this->PerIterationStateResultArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_EPCGTimeSliceInitResult_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) {
        return true;
      }
      if ((*pFVar3 == (FScriptContainerElement)0x0) || (*pFVar3 == (FScriptContainerElement)0x3))
      break;
      pFVar3 = pFVar3 + 1;
    }
  }
  return false;
}

// DataIsPreparedForExecution @ 149afd680

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
TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>::
DataIsPreparedForExecution
          (TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
           *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if (((this->ExecutionStateResult != Uninitialized) &&
      (this->ExecutionStateResult != AbortExecution)) &&
     (this->bPerIterationStateIsInitialized != false)) {
    pFVar3 = (this->PerIterationStateResultArray).AllocatorInstance.Data;
    iVar2 = (this->PerIterationStateResultArray).ArrayNum;
    pFVar1 = pFVar3 + iVar2;
    while( true ) {
      if ((this->PerIterationStateResultArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_EPCGTimeSliceInitResult_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) {
        return true;
      }
      if ((*pFVar3 == (FScriptContainerElement)0x0) || (*pFVar3 == (FScriptContainerElement)0x3))
      break;
      pFVar3 = pFVar3 + 1;
    }
  }
  return false;
}

// DataIsPreparedForExecution @ 149afd710

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
TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
::DataIsPreparedForExecution
          (TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
           *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if (((this->ExecutionStateResult != Uninitialized) &&
      (this->ExecutionStateResult != AbortExecution)) &&
     (this->bPerIterationStateIsInitialized != false)) {
    pFVar3 = (this->PerIterationStateResultArray).AllocatorInstance.Data;
    iVar2 = (this->PerIterationStateResultArray).ArrayNum;
    pFVar1 = pFVar3 + iVar2;
    while( true ) {
      if ((this->PerIterationStateResultArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_EPCGTimeSliceInitResult_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) {
        return true;
      }
      if ((*pFVar3 == (FScriptContainerElement)0x0) || (*pFVar3 == (FScriptContainerElement)0x3))
      break;
      pFVar3 = pFVar3 + 1;
    }
  }
  return false;
}

// InitializePerExecutionState @ 149b1a990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
::InitializePerExecutionState
          (TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
           *this,TFunctionRef<EPCGTimeSliceInitResult___cdecl(TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>_*,PCGCollapsePoints::FCollapsePointsSettings_&)>
                 *param_1)

{
  EPCGTimeSliceInitResult EVar1;
  TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
  *local_res8 [4];
  
  EVar1 = this->ExecutionStateResult;
  if (EVar1 == Uninitialized) {
    local_res8[0] = this;
    EVar1 = (**(code **)param_1)
                      (*(undefined8 *)&param_1->field_0x8,local_res8,&this->PerExecutionStateData);
    this->ExecutionStateResult = EVar1;
  }
  return EVar1;
}

// InitializePerExecutionState @ 149b1a9e0

EPCGTimeSliceInitResult __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>::
InitializePerExecutionState
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext> *this,
          TFunctionRef<EPCGTimeSliceInitResult___cdecl(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>_*,PCGTimeSlice::FEmptyStruct_&)>
          *param_1)

{
  EPCGTimeSliceInitResult EVar1;
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext> *local_res8 [4];
  
  EVar1 = this->ExecutionStateResult;
  if (EVar1 == Uninitialized) {
    local_res8[0] = this;
    EVar1 = (**(code **)param_1)
                      (*(undefined8 *)&param_1->field_0x8,local_res8,&this->PerExecutionStateData);
    this->ExecutionStateResult = EVar1;
  }
  return EVar1;
}

// InitializePerExecutionState @ 149b1aa30

EPCGTimeSliceInitResult __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
::InitializePerExecutionState
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
           *this,TFunctionRef<EPCGTimeSliceInitResult___cdecl(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>_*,PCGTimeSlice::FEmptyStruct_&)>
                 *param_1)

{
  EPCGTimeSliceInitResult EVar1;
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
  *local_res8 [4];
  
  EVar1 = this->ExecutionStateResult;
  if (EVar1 == Uninitialized) {
    local_res8[0] = this;
    EVar1 = (**(code **)param_1)
                      (*(undefined8 *)&param_1->field_0x8,local_res8,&this->PerExecutionStateData);
    this->ExecutionStateResult = EVar1;
  }
  return EVar1;
}

// InitializePerExecutionState @ 149b1aa80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>::
InitializePerExecutionState
          (TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
           *this,TFunctionRef<EPCGTimeSliceInitResult___cdecl(TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>_*,PCGAttractElement::FExecState_&)>
                 *param_1)

{
  EPCGTimeSliceInitResult EVar1;
  TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
  *local_res8 [4];
  
  EVar1 = this->ExecutionStateResult;
  if (EVar1 == Uninitialized) {
    local_res8[0] = this;
    EVar1 = (**(code **)param_1)
                      (*(undefined8 *)&param_1->field_0x8,local_res8,&this->PerExecutionStateData);
    this->ExecutionStateResult = EVar1;
  }
  return EVar1;
}

// InitializePerExecutionState @ 149b1aad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
::InitializePerExecutionState
          (TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
           *this,TFunctionRef<EPCGTimeSliceInitResult___cdecl(TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>_*,PCGClusterElement::FExecState_&)>
                 *param_1)

{
  EPCGTimeSliceInitResult EVar1;
  TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
  *local_res8 [4];
  
  EVar1 = this->ExecutionStateResult;
  if (EVar1 == Uninitialized) {
    local_res8[0] = this;
    EVar1 = (**(code **)param_1)
                      (*(undefined8 *)&param_1->field_0x8,local_res8,&this->PerExecutionStateData);
    this->ExecutionStateResult = EVar1;
  }
  return EVar1;
}

// InitializePerIterationStates @ 149b1ab20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> * __thiscall
TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
::InitializePerIterationStates
          (TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
           *this,int param_1,
          TFunctionRef<EPCGTimeSliceInitResult___cdecl(PCGCollapsePoints::FCollapsePointsState_&,PCGCollapsePoints::FCollapsePointsSettings_const_&,unsigned_int)>
          *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<PCGCollapsePoints::FCollapsePointsState,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement FVar6;
  int iVar7;
  TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FCollapsePointsState *pFVar12;
  longlong lVar13;
  uint local_58 [6];
  
  pTVar8 = &this->PerIterationStateResultArray;
  if (this->bPerIterationStateIsInitialized == false) {
    iVar7 = (this->PerIterationStateResultArray).ArrayNum;
    this->bPerIterationStateIsInitialized = true;
    if (((iVar7 != 0) || ((this->PerIterationStateArray).ArrayNum != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PerIterationStateResultArray.IsEmpty() && PerIterationStateArray.IsEmpty()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                           ,0xc6,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
    if (0 < param_1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_1,&pTVar8->AllocatorInstance,
                 &(this->PerIterationStateResultArray).ArrayNum,
                 &(this->PerIterationStateResultArray).ArrayMax);
      pTVar3 = &this->PerIterationStateArray;
      piVar1 = &(this->PerIterationStateArray).ArrayMax;
      if ((this->PerIterationStateArray).ArrayMax < param_1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x240,0x10,param_1,&pTVar3->AllocatorInstance,
                   (this->PerIterationStateArray).ArrayNum,piVar1);
      }
      uVar10 = 0;
      lVar13 = 0;
      do {
        iVar7 = (this->PerIterationStateArray).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x240,0x10,&pTVar3->AllocatorInstance,piVar1);
          (this->PerIterationStateArray).ArrayNum = iVar7;
        }
        (this->PerIterationStateArray).ArrayNum = iVar7 + 1;
        pFVar12 = (FCollapsePointsState *)
                  ((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 0x240);
        memset(pFVar12,0,0x240);
        pFVar12 = PCGCollapsePoints::FCollapsePointsState::FCollapsePointsState(pFVar12);
        local_58[0] = uVar10;
        FVar6 = (FScriptContainerElement)
                (**(code **)param_2)
                          (*(undefined8 *)&param_2->field_0x8,pFVar12,&this->PerExecutionStateData,
                           local_58);
        uVar9 = 0;
        if ((int)uVar10 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        (pTVar8->AllocatorInstance).Data[lVar13] = FVar6;
        uVar9 = 0;
        if ((int)uVar10 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        if ((pTVar8->AllocatorInstance).Data[lVar13] == (FScriptContainerElement)0x3) {
          iVar7 = (this->PerIterationStateArray).ArrayNum;
          uVar11 = iVar7 - 1;
          uVar9 = 0;
          if ((int)uVar11 < iVar7) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
          pFVar12 = (FCollapsePointsState *)
                    ((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x240);
          PCGCollapsePoints::FCollapsePointsState::~FCollapsePointsState(pFVar12);
          iVar7 = (this->PerIterationStateArray).ArrayNum + ~uVar11;
          if (iVar7 != 0) {
            memmove(pFVar12,pFVar12 + 1,(longlong)iVar7 * 0x240);
          }
          piVar2 = &(this->PerIterationStateArray).ArrayNum;
          *piVar2 = *piVar2 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x240,0x10,&pTVar3->AllocatorInstance,(this->PerIterationStateArray).ArrayNum,
                     piVar1);
        }
        uVar10 = uVar10 + 1;
        lVar13 = lVar13 + 1;
      } while ((int)uVar10 < param_1);
    }
  }
  return pTVar8;
}

// InitializePerIterationStates @ 149b1ae30

TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> * __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>::
InitializePerIterationStates
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext> *this,
          int param_1,
          TFunctionRef<EPCGTimeSliceInitResult___cdecl(FPCGBlurIterState_&,PCGTimeSlice::FEmptyStruct_const_&,unsigned_int)>
          *param_2)

{
  TArray<FPCGBlurIterState,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement FVar6;
  int iVar7;
  TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FPCGBlurIterState *this_00;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint local_58 [6];
  
  pTVar8 = &this->PerIterationStateResultArray;
  if (this->bPerIterationStateIsInitialized == false) {
    iVar7 = (this->PerIterationStateResultArray).ArrayNum;
    this->bPerIterationStateIsInitialized = true;
    if (((iVar7 != 0) || ((this->PerIterationStateArray).ArrayNum != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PerIterationStateResultArray.IsEmpty() && PerIterationStateArray.IsEmpty()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                           ,0xc6,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
    if (0 < param_1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_1,&pTVar8->AllocatorInstance,
                 &(this->PerIterationStateResultArray).ArrayNum,
                 &(this->PerIterationStateResultArray).ArrayMax);
      pTVar1 = &this->PerIterationStateArray;
      piVar2 = &(this->PerIterationStateArray).ArrayMax;
      if ((this->PerIterationStateArray).ArrayMax < param_1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,param_1,&pTVar1->AllocatorInstance,(this->PerIterationStateArray).ArrayNum
                   ,piVar2);
      }
      uVar13 = 0;
      uVar14 = uVar13;
      do {
        iVar7 = (this->PerIterationStateArray).ArrayNum;
        if (iVar7 == *piVar2) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x858,&pTVar1->AllocatorInstance,piVar2);
          (this->PerIterationStateArray).ArrayNum = iVar7;
        }
        uVar12 = (uint)uVar13;
        (this->PerIterationStateArray).ArrayNum = iVar7 + 1;
        pFVar10 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x58;
        *(undefined8 *)pFVar10 = 0;
        *(undefined8 *)(pFVar10 + 8) = 0;
        *(undefined8 *)(pFVar10 + 0x10) = 0;
        *(undefined8 *)(pFVar10 + 0x18) = 0;
        *(undefined8 *)(pFVar10 + 0x20) = 0;
        *(undefined8 *)(pFVar10 + 0x28) = 0;
        *(undefined8 *)(pFVar10 + 0x30) = 0;
        *(undefined8 *)(pFVar10 + 0x40) = 0;
        *(undefined8 *)(pFVar10 + 0x50) = 0;
        *(undefined8 *)(pFVar10 + 0x38) = 0;
        *(undefined8 *)(pFVar10 + 0x48) = 0;
        local_58[0] = uVar12;
        FVar6 = (FScriptContainerElement)
                (**(code **)param_2)
                          (*(undefined8 *)&param_2->field_0x8,pFVar10,&this->PerExecutionStateData,
                           local_58);
        uVar9 = 0;
        if ((int)uVar12 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        (pTVar8->AllocatorInstance).Data[uVar14] = FVar6;
        uVar9 = 0;
        if ((int)uVar12 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        if ((pTVar8->AllocatorInstance).Data[uVar14] == (FScriptContainerElement)0x3) {
          iVar7 = (this->PerIterationStateArray).ArrayNum;
          uVar11 = iVar7 - 1;
          uVar9 = 0;
          if ((int)uVar11 < iVar7) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
          this_00 = (FPCGBlurIterState *)
                    ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x58);
          FPCGBlurIterState::~FPCGBlurIterState(this_00);
          iVar7 = (this->PerIterationStateArray).ArrayNum + ~uVar11;
          if (iVar7 != 0) {
            memmove(this_00,this_00 + 1,(longlong)iVar7 * 0x58);
          }
          piVar3 = &(this->PerIterationStateArray).ArrayNum;
          *piVar3 = *piVar3 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,&pTVar1->AllocatorInstance,(this->PerIterationStateArray).ArrayNum,
                     piVar2);
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar14 = uVar14 + 1;
      } while ((int)(uVar12 + 1) < param_1);
    }
  }
  return pTVar8;
}

// InitializePerIterationStates @ 149b1b140

TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> * __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
::InitializePerIterationStates
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
           *this,int param_1,
          TFunctionRef<EPCGTimeSliceInitResult___cdecl(PCGApplyHierarchyElement::IterationState_&,PCGTimeSlice::FEmptyStruct_const_&,unsigned_int)>
          *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<PCGApplyHierarchyElement::IterationState,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement FVar6;
  int iVar7;
  TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  IterationState *pIVar12;
  longlong lVar13;
  uint local_58 [6];
  
  pTVar8 = &this->PerIterationStateResultArray;
  if (this->bPerIterationStateIsInitialized == false) {
    iVar7 = (this->PerIterationStateResultArray).ArrayNum;
    this->bPerIterationStateIsInitialized = true;
    if (((iVar7 != 0) || ((this->PerIterationStateArray).ArrayNum != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PerIterationStateResultArray.IsEmpty() && PerIterationStateArray.IsEmpty()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                           ,0xc6,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
    if (0 < param_1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_1,&pTVar8->AllocatorInstance,
                 &(this->PerIterationStateResultArray).ArrayNum,
                 &(this->PerIterationStateResultArray).ArrayMax);
      pTVar3 = &this->PerIterationStateArray;
      piVar1 = &(this->PerIterationStateArray).ArrayMax;
      if ((this->PerIterationStateArray).ArrayMax < param_1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x128,8,param_1,&pTVar3->AllocatorInstance,
                   (this->PerIterationStateArray).ArrayNum,piVar1);
      }
      uVar10 = 0;
      lVar13 = 0;
      do {
        iVar7 = (this->PerIterationStateArray).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x128,8,&pTVar3->AllocatorInstance,piVar1);
          (this->PerIterationStateArray).ArrayNum = iVar7;
        }
        (this->PerIterationStateArray).ArrayNum = iVar7 + 1;
        pIVar12 = (IterationState *)((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 0x128);
        memset(pIVar12,0,0x128);
        pIVar12 = PCGApplyHierarchyElement::IterationState::IterationState(pIVar12);
        local_58[0] = uVar10;
        FVar6 = (FScriptContainerElement)
                (**(code **)param_2)
                          (*(undefined8 *)&param_2->field_0x8,pIVar12,&this->PerExecutionStateData,
                           local_58);
        uVar9 = 0;
        if ((int)uVar10 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        (pTVar8->AllocatorInstance).Data[lVar13] = FVar6;
        uVar9 = 0;
        if ((int)uVar10 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        if ((pTVar8->AllocatorInstance).Data[lVar13] == (FScriptContainerElement)0x3) {
          iVar7 = (this->PerIterationStateArray).ArrayNum;
          uVar11 = iVar7 - 1;
          uVar9 = 0;
          if ((int)uVar11 < iVar7) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
          pIVar12 = (IterationState *)
                    ((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x128);
          PCGApplyHierarchyElement::IterationState::~IterationState(pIVar12);
          iVar7 = (this->PerIterationStateArray).ArrayNum + ~uVar11;
          if (iVar7 != 0) {
            memmove(pIVar12,pIVar12 + 1,(longlong)iVar7 * 0x128);
          }
          piVar2 = &(this->PerIterationStateArray).ArrayNum;
          *piVar2 = *piVar2 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x128,8,&pTVar3->AllocatorInstance,(this->PerIterationStateArray).ArrayNum,
                     piVar1);
        }
        uVar10 = uVar10 + 1;
        lVar13 = lVar13 + 1;
      } while ((int)uVar10 < param_1);
    }
  }
  return pTVar8;
}

// InitializePerIterationStates @ 149b1b450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> * __thiscall
TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>::
InitializePerIterationStates
          (TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
           *this,int param_1,
          TFunctionRef<EPCGTimeSliceInitResult___cdecl(PCGAttractElement::FAttractState_&,PCGAttractElement::FExecState_const_&,unsigned_int)>
          *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<PCGAttractElement::FAttractState,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement FVar6;
  int iVar7;
  TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FAttractState *this_00;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint local_58 [6];
  
  pTVar8 = &this->PerIterationStateResultArray;
  if (this->bPerIterationStateIsInitialized == false) {
    iVar7 = (this->PerIterationStateResultArray).ArrayNum;
    this->bPerIterationStateIsInitialized = true;
    if (((iVar7 != 0) || ((this->PerIterationStateArray).ArrayNum != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PerIterationStateResultArray.IsEmpty() && PerIterationStateArray.IsEmpty()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                           ,0xc6,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
    if (0 < param_1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_1,&pTVar8->AllocatorInstance,
                 &(this->PerIterationStateResultArray).ArrayNum,
                 &(this->PerIterationStateResultArray).ArrayMax);
      pTVar3 = &this->PerIterationStateArray;
      piVar1 = &(this->PerIterationStateArray).ArrayMax;
      if ((this->PerIterationStateArray).ArrayMax < param_1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa0,8,param_1,&pTVar3->AllocatorInstance,(this->PerIterationStateArray).ArrayNum
                   ,piVar1);
      }
      uVar13 = 0;
      uVar14 = uVar13;
      do {
        iVar7 = (this->PerIterationStateArray).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x8a0,&pTVar3->AllocatorInstance,piVar1);
          (this->PerIterationStateArray).ArrayNum = iVar7;
        }
        uVar12 = (uint)uVar13;
        (this->PerIterationStateArray).ArrayNum = iVar7 + 1;
        pFVar10 = (pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 0xa0;
        *(undefined8 *)pFVar10 = 0;
        *(undefined8 *)(pFVar10 + 8) = 0;
        *(undefined8 *)(pFVar10 + 0x10) = 0;
        *(undefined8 *)(pFVar10 + 0x18) = 0;
        *(undefined8 *)(pFVar10 + 0x20) = 0;
        *(undefined8 *)(pFVar10 + 0x28) = 0;
        *(undefined8 *)(pFVar10 + 0x30) = 0;
        *(undefined8 *)(pFVar10 + 0x40) = 0;
        *(undefined8 *)(pFVar10 + 0x50) = 0;
        *(undefined8 *)(pFVar10 + 0x58) = 0;
        *(undefined8 *)(pFVar10 + 0x60) = 0;
        *(undefined8 *)(pFVar10 + 0x70) = 0;
        *(undefined8 *)(pFVar10 + 0x80) = 0;
        *(undefined4 *)(pFVar10 + 0x94) = 0;
        *(undefined8 *)(pFVar10 + 0x98) = 0;
        *(undefined8 *)(pFVar10 + 0x38) = 0;
        *(undefined8 *)(pFVar10 + 0x48) = 0;
        *(undefined8 *)(pFVar10 + 0x68) = 0;
        *(undefined8 *)(pFVar10 + 0x78) = 0;
        *(undefined8 *)(pFVar10 + 0x88) = 0;
        *(undefined4 *)(pFVar10 + 0x90) = 0xffffffff;
        local_58[0] = uVar12;
        FVar6 = (FScriptContainerElement)
                (**(code **)param_2)
                          (*(undefined8 *)&param_2->field_0x8,pFVar10,&this->PerExecutionStateData,
                           local_58);
        uVar9 = 0;
        if ((int)uVar12 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        (pTVar8->AllocatorInstance).Data[uVar14] = FVar6;
        uVar9 = 0;
        if ((int)uVar12 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        if ((pTVar8->AllocatorInstance).Data[uVar14] == (FScriptContainerElement)0x3) {
          iVar7 = (this->PerIterationStateArray).ArrayNum;
          uVar11 = iVar7 - 1;
          uVar9 = 0;
          if ((int)uVar11 < iVar7) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
          this_00 = (FAttractState *)
                    ((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar11 * 0xa0);
          PCGAttractElement::FAttractState::~FAttractState(this_00);
          iVar7 = (this->PerIterationStateArray).ArrayNum + ~uVar11;
          if (iVar7 != 0) {
            memmove(this_00,this_00 + 1,(longlong)iVar7 * 0xa0);
          }
          piVar2 = &(this->PerIterationStateArray).ArrayNum;
          *piVar2 = *piVar2 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xa0,8,&pTVar3->AllocatorInstance,(this->PerIterationStateArray).ArrayNum,
                     piVar1);
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar14 = uVar14 + 1;
      } while ((int)(uVar12 + 1) < param_1);
    }
  }
  return pTVar8;
}

// InitializePerIterationStates @ 149b1b7b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> * __thiscall
TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
::InitializePerIterationStates
          (TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
           *this,int param_1,
          TFunctionRef<EPCGTimeSliceInitResult___cdecl(PCGClusterElement::FClusteringData_&,PCGClusterElement::FExecState_const_&,unsigned_int)>
          *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<PCGClusterElement::FClusteringData,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement FVar6;
  int iVar7;
  TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FClusteringData *pFVar12;
  longlong lVar13;
  uint local_58 [6];
  
  pTVar8 = &this->PerIterationStateResultArray;
  if (this->bPerIterationStateIsInitialized == false) {
    iVar7 = (this->PerIterationStateResultArray).ArrayNum;
    this->bPerIterationStateIsInitialized = true;
    if (((iVar7 != 0) || ((this->PerIterationStateArray).ArrayNum != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PerIterationStateResultArray.IsEmpty() && PerIterationStateArray.IsEmpty()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                           ,0xc6,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
    if (0 < param_1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_1,&pTVar8->AllocatorInstance,
                 &(this->PerIterationStateResultArray).ArrayNum,
                 &(this->PerIterationStateResultArray).ArrayMax);
      pTVar3 = &this->PerIterationStateArray;
      piVar1 = &(this->PerIterationStateArray).ArrayMax;
      if ((this->PerIterationStateArray).ArrayMax < param_1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x3640,0x10,param_1,&pTVar3->AllocatorInstance,
                   (this->PerIterationStateArray).ArrayNum,piVar1);
      }
      uVar10 = 0;
      lVar13 = 0;
      do {
        iVar7 = (this->PerIterationStateArray).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x3640,0x10,&pTVar3->AllocatorInstance,piVar1);
          (this->PerIterationStateArray).ArrayNum = iVar7;
        }
        (this->PerIterationStateArray).ArrayNum = iVar7 + 1;
        pFVar12 = (FClusteringData *)((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 0x3640);
        memset(pFVar12,0,0x3640);
        pFVar12 = PCGClusterElement::FClusteringData::FClusteringData(pFVar12);
        local_58[0] = uVar10;
        FVar6 = (FScriptContainerElement)
                (**(code **)param_2)
                          (*(undefined8 *)&param_2->field_0x8,pFVar12,&this->PerExecutionStateData,
                           local_58);
        uVar9 = 0;
        if ((int)uVar10 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        (pTVar8->AllocatorInstance).Data[lVar13] = FVar6;
        uVar9 = 0;
        if ((int)uVar10 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        if ((pTVar8->AllocatorInstance).Data[lVar13] == (FScriptContainerElement)0x3) {
          iVar7 = (this->PerIterationStateArray).ArrayNum;
          uVar11 = iVar7 - 1;
          uVar9 = 0;
          if ((int)uVar11 < iVar7) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
          pFVar12 = (FClusteringData *)
                    ((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x3640);
          PCGClusterElement::FClusteringData::~FClusteringData(pFVar12);
          iVar7 = (this->PerIterationStateArray).ArrayNum + ~uVar11;
          if (iVar7 != 0) {
            memmove(pFVar12,pFVar12 + 1,(longlong)iVar7 * 0x3640);
          }
          piVar2 = &(this->PerIterationStateArray).ArrayNum;
          *piVar2 = *piVar2 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x3640,0x10,&pTVar3->AllocatorInstance,(this->PerIterationStateArray).ArrayNum,
                     piVar1);
        }
        uVar10 = uVar10 + 1;
        lVar13 = lVar13 + 1;
      } while ((int)uVar10 < param_1);
    }
  }
  return pTVar8;
}

// TimeSliceIsEnabled @ 149b2d230

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
TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
::TimeSliceIsEnabled
          (TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
           *this)

{
  return this->bTimeSliceIsEnabled;
}

// TimeSliceIsEnabled @ 149b2d240

bool __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>::TimeSliceIsEnabled
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext> *this)

{
  return this->bTimeSliceIsEnabled;
}

// TimeSliceIsEnabled @ 149b2d250

bool __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
::TimeSliceIsEnabled
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
           *this)

{
  return this->bTimeSliceIsEnabled;
}

// TimeSliceIsEnabled @ 149b2d260

bool __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>::
TimeSliceIsEnabled(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
                   *this)

{
  return this->bTimeSliceIsEnabled;
}

// TimeSliceIsEnabled @ 149b2d270

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
TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>::
TimeSliceIsEnabled(TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
                   *this)

{
  return this->bTimeSliceIsEnabled;
}

// TimeSliceIsEnabled @ 149b2d280

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
TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
::TimeSliceIsEnabled
          (TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
           *this)

{
  return this->bTimeSliceIsEnabled;
}

// AddExtraStructReferencedObjects @ 149bfeea0

void __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
::AddExtraStructReferencedObjects
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
           *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->TrackedObjectArray).AllocatorInstance.Data,
             (this->TrackedObjectArray).ArrayNum,0,0);
  return;
}

// AddExtraStructReferencedObjects @ 149bfeee0

void __thiscall
TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
::AddExtraStructReferencedObjects
          (TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
           *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->TrackedObjectArray).AllocatorInstance.Data,
             (this->TrackedObjectArray).ArrayNum,0,0);
  return;
}

// AddExtraStructReferencedObjects @ 149bfef20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
::AddExtraStructReferencedObjects
          (TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
           *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->TrackedObjectArray).AllocatorInstance.Data,
             (this->TrackedObjectArray).ArrayNum,0,0);
  return;
}

// DataIsPreparedForExecution @ 149c069a0

bool __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
::DataIsPreparedForExecution
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
           *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if (((this->ExecutionStateResult != Uninitialized) &&
      (this->ExecutionStateResult != AbortExecution)) &&
     (this->bPerIterationStateIsInitialized != false)) {
    pFVar3 = (this->PerIterationStateResultArray).AllocatorInstance.Data;
    iVar2 = (this->PerIterationStateResultArray).ArrayNum;
    pFVar1 = pFVar3 + iVar2;
    while( true ) {
      if ((this->PerIterationStateResultArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_EPCGTimeSliceInitResult_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) {
        return true;
      }
      if ((*pFVar3 == (FScriptContainerElement)0x0) || (*pFVar3 == (FScriptContainerElement)0x3))
      break;
      pFVar3 = pFVar3 + 1;
    }
  }
  return false;
}

// DataIsPreparedForExecution @ 149c06a30

bool __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>::
DataIsPreparedForExecution
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
           *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if (((this->ExecutionStateResult != Uninitialized) &&
      (this->ExecutionStateResult != AbortExecution)) &&
     (this->bPerIterationStateIsInitialized != false)) {
    pFVar3 = (this->PerIterationStateResultArray).AllocatorInstance.Data;
    iVar2 = (this->PerIterationStateResultArray).ArrayNum;
    pFVar1 = pFVar3 + iVar2;
    while( true ) {
      if ((this->PerIterationStateResultArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_EPCGTimeSliceInitResult_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) {
        return true;
      }
      if ((*pFVar3 == (FScriptContainerElement)0x0) || (*pFVar3 == (FScriptContainerElement)0x3))
      break;
      pFVar3 = pFVar3 + 1;
    }
  }
  return false;
}

// DataIsPreparedForExecution @ 149c06ac0

bool __thiscall
TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
::DataIsPreparedForExecution
          (TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
           *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if (((this->ExecutionStateResult != Uninitialized) &&
      (this->ExecutionStateResult != AbortExecution)) &&
     (this->bPerIterationStateIsInitialized != false)) {
    pFVar3 = (this->PerIterationStateResultArray).AllocatorInstance.Data;
    iVar2 = (this->PerIterationStateResultArray).ArrayNum;
    pFVar1 = pFVar3 + iVar2;
    while( true ) {
      if ((this->PerIterationStateResultArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_EPCGTimeSliceInitResult_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) {
        return true;
      }
      if ((*pFVar3 == (FScriptContainerElement)0x0) || (*pFVar3 == (FScriptContainerElement)0x3))
      break;
      pFVar3 = pFVar3 + 1;
    }
  }
  return false;
}

// DataIsPreparedForExecution @ 149c06b50

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
TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
::DataIsPreparedForExecution
          (TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
           *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if (((this->ExecutionStateResult != Uninitialized) &&
      (this->ExecutionStateResult != AbortExecution)) &&
     (this->bPerIterationStateIsInitialized != false)) {
    pFVar3 = (this->PerIterationStateResultArray).AllocatorInstance.Data;
    iVar2 = (this->PerIterationStateResultArray).ArrayNum;
    pFVar1 = pFVar3 + iVar2;
    while( true ) {
      if ((this->PerIterationStateResultArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_EPCGTimeSliceInitResult_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) {
        return true;
      }
      if ((*pFVar3 == (FScriptContainerElement)0x0) || (*pFVar3 == (FScriptContainerElement)0x3))
      break;
      pFVar3 = pFVar3 + 1;
    }
  }
  return false;
}

// GetIterationStateResult @ 149c24060

EPCGTimeSliceInitResult __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>::
GetIterationStateResult
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EPCGTimeSliceInitResult EVar3;
  uint uVar4;
  
  if ((param_1 < 0) || ((this->PerIterationStateResultArray).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < PerIterationStateResultArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                       ,0x48,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->PerIterationStateResultArray).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return (EPCGTimeSliceInitResult)
         (this->PerIterationStateResultArray).AllocatorInstance.Data[param_1];
}

// InitializePerExecutionState @ 149c2ac50

EPCGTimeSliceInitResult __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
::InitializePerExecutionState
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
           *this,TFunctionRef<EPCGTimeSliceInitResult___cdecl(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>_*,PCGTimeSlice::FEmptyStruct_&)>
                 *param_1)

{
  EPCGTimeSliceInitResult EVar1;
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
  *local_res8 [4];
  
  EVar1 = this->ExecutionStateResult;
  if (EVar1 == Uninitialized) {
    local_res8[0] = this;
    EVar1 = (**(code **)param_1)
                      (*(undefined8 *)&param_1->field_0x8,local_res8,&this->PerExecutionStateData);
    this->ExecutionStateResult = EVar1;
  }
  return EVar1;
}

// InitializePerExecutionState @ 149c2aca0

EPCGTimeSliceInitResult __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>::
InitializePerExecutionState
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
           *this,TFunctionRef<EPCGTimeSliceInitResult___cdecl(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>_*,PCGTimeSlice::FEmptyStruct_&)>
                 *param_1)

{
  EPCGTimeSliceInitResult EVar1;
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
  *local_res8 [4];
  
  EVar1 = this->ExecutionStateResult;
  if (EVar1 == Uninitialized) {
    local_res8[0] = this;
    EVar1 = (**(code **)param_1)
                      (*(undefined8 *)&param_1->field_0x8,local_res8,&this->PerExecutionStateData);
    this->ExecutionStateResult = EVar1;
  }
  return EVar1;
}

// InitializePerExecutionState @ 149c2acf0

EPCGTimeSliceInitResult __thiscall
TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
::InitializePerExecutionState
          (TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
           *this,TFunctionRef<EPCGTimeSliceInitResult___cdecl(TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>_*,PCGPathfindingElement::FExecutionState_&)>
                 *param_1)

{
  EPCGTimeSliceInitResult EVar1;
  TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
  *local_res8 [4];
  
  EVar1 = this->ExecutionStateResult;
  if (EVar1 == Uninitialized) {
    local_res8[0] = this;
    EVar1 = (**(code **)param_1)
                      (*(undefined8 *)&param_1->field_0x8,local_res8,&this->PerExecutionStateData);
    this->ExecutionStateResult = EVar1;
  }
  return EVar1;
}

// InitializePerExecutionState @ 149c2ad40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
::InitializePerExecutionState
          (TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
           *this,TFunctionRef<EPCGTimeSliceInitResult___cdecl(TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>_*,FPCGMatchAndSetAttributesExecutionState_&)>
                 *param_1)

{
  EPCGTimeSliceInitResult EVar1;
  TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
  *local_res8 [4];
  
  EVar1 = this->ExecutionStateResult;
  if (EVar1 == Uninitialized) {
    local_res8[0] = this;
    EVar1 = (**(code **)param_1)
                      (*(undefined8 *)&param_1->field_0x8,local_res8,&this->PerExecutionStateData);
    this->ExecutionStateResult = EVar1;
  }
  return EVar1;
}

// InitializePerIterationStates @ 149c2ad90

TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> * __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
::InitializePerIterationStates
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
           *this,int param_1,
          TFunctionRef<EPCGTimeSliceInitResult___cdecl(PCGSelfPruningElement::FIterationState_&,PCGTimeSlice::FEmptyStruct_const_&,unsigned_int)>
          *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<PCGSelfPruningElement::FIterationState,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement FVar6;
  int iVar7;
  TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FIterationState *this_00;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint local_58 [6];
  
  pTVar8 = &this->PerIterationStateResultArray;
  if (this->bPerIterationStateIsInitialized == false) {
    iVar7 = (this->PerIterationStateResultArray).ArrayNum;
    this->bPerIterationStateIsInitialized = true;
    if (((iVar7 != 0) || ((this->PerIterationStateArray).ArrayNum != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PerIterationStateResultArray.IsEmpty() && PerIterationStateArray.IsEmpty()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                           ,0xc6,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
    if (0 < param_1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_1,&pTVar8->AllocatorInstance,
                 &(this->PerIterationStateResultArray).ArrayNum,
                 &(this->PerIterationStateResultArray).ArrayMax);
      pTVar3 = &this->PerIterationStateArray;
      piVar1 = &(this->PerIterationStateArray).ArrayMax;
      if ((this->PerIterationStateArray).ArrayMax < param_1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xe0,8,param_1,&pTVar3->AllocatorInstance,(this->PerIterationStateArray).ArrayNum
                   ,piVar1);
      }
      uVar13 = 0;
      uVar14 = uVar13;
      do {
        iVar7 = (this->PerIterationStateArray).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x8e0,&pTVar3->AllocatorInstance,piVar1);
          (this->PerIterationStateArray).ArrayNum = iVar7;
        }
        uVar12 = (uint)uVar13;
        (this->PerIterationStateArray).ArrayNum = iVar7 + 1;
        pFVar10 = (pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 0xe0;
        *(undefined2 *)(pFVar10 + 0x45) = 0;
        pFVar10[0x47] = (FScriptContainerElement)0x0;
        *(undefined4 *)(pFVar10 + 0x69) = 0;
        *(undefined2 *)(pFVar10 + 0x6d) = 0;
        pFVar10[0x6f] = (FScriptContainerElement)0x0;
        *(undefined8 *)(pFVar10 + 0x80) = 0;
        *(undefined8 *)(pFVar10 + 0x88) = 0;
        *(undefined8 *)(pFVar10 + 0xa8) = 0;
        *(undefined8 *)(pFVar10 + 0xb8) = 0;
        *(undefined8 *)(pFVar10 + 0x10) = 0;
        *(undefined8 *)(pFVar10 + 0x20) = 0;
        *(undefined8 *)(pFVar10 + 0x30) = 0;
        *(undefined8 *)(pFVar10 + 0x48) = 0;
        *(undefined8 *)(pFVar10 + 0x58) = 0;
        *(undefined8 *)(pFVar10 + 0x70) = 0;
        *(undefined8 *)(pFVar10 + 0x90) = 0;
        *(undefined8 *)(pFVar10 + 0x18) = 0;
        *(undefined8 *)(pFVar10 + 0x28) = 0;
        *(undefined8 *)(pFVar10 + 0x38) = 0;
        *(undefined8 *)(pFVar10 + 0x50) = 0;
        *(undefined8 *)(pFVar10 + 0x60) = 0;
        pFVar10[0x68] = (FScriptContainerElement)0x0;
        *(undefined8 *)(pFVar10 + 0x78) = 0;
        *(undefined8 *)pFVar10 = 0;
        *(undefined8 *)(pFVar10 + 8) = 0;
        *(undefined4 *)(pFVar10 + 0x40) = 0;
        pFVar10[0x44] = (FScriptContainerElement)0x0;
        *(undefined4 *)(pFVar10 + 0x98) = 0;
        *(undefined4 *)(pFVar10 + 0x9c) = 0x80;
        *(undefined4 *)(pFVar10 + 0xa4) = 0;
        *(undefined4 *)(pFVar10 + 0xa0) = 0xffffffff;
        *(undefined8 *)(pFVar10 + 0xb0) = 0;
        *(undefined8 *)(pFVar10 + 0xc0) = 0;
        *(undefined8 *)(pFVar10 + 0xd0) = 0;
        *(undefined8 *)(pFVar10 + 0xd8) = 0;
        *(undefined8 *)(pFVar10 + 200) = 0;
        local_58[0] = uVar12;
        FVar6 = (FScriptContainerElement)
                (**(code **)param_2)
                          (*(undefined8 *)&param_2->field_0x8,pFVar10,&this->PerExecutionStateData,
                           local_58);
        uVar9 = 0;
        if ((int)uVar12 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        (pTVar8->AllocatorInstance).Data[uVar14] = FVar6;
        uVar9 = 0;
        if ((int)uVar12 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        if ((pTVar8->AllocatorInstance).Data[uVar14] == (FScriptContainerElement)0x3) {
          iVar7 = (this->PerIterationStateArray).ArrayNum;
          uVar11 = iVar7 - 1;
          uVar9 = 0;
          if ((int)uVar11 < iVar7) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
          this_00 = (FIterationState *)
                    ((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar11 * 0xe0);
          PCGSelfPruningElement::FIterationState::~FIterationState(this_00);
          iVar7 = (this->PerIterationStateArray).ArrayNum + ~uVar11;
          if (iVar7 != 0) {
            memmove(this_00,this_00 + 1,(longlong)iVar7 * 0xe0);
          }
          piVar2 = &(this->PerIterationStateArray).ArrayNum;
          *piVar2 = *piVar2 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xe0,8,&pTVar3->AllocatorInstance,(this->PerIterationStateArray).ArrayNum,
                     piVar1);
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar14 = uVar14 + 1;
      } while ((int)(uVar12 + 1) < param_1);
    }
  }
  return pTVar8;
}

// InitializePerIterationStates @ 149c2b140

TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> * __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>::
InitializePerIterationStates
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
           *this,int param_1,
          TFunctionRef<EPCGTimeSliceInitResult___cdecl(PCGPointOperation::IterationState_&,PCGTimeSlice::FEmptyStruct_const_&,unsigned_int)>
          *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<PCGPointOperation::IterationState,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement FVar7;
  int iVar8;
  TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint local_58 [6];
  
  pTVar9 = &this->PerIterationStateResultArray;
  if (this->bPerIterationStateIsInitialized == false) {
    iVar8 = (this->PerIterationStateResultArray).ArrayNum;
    this->bPerIterationStateIsInitialized = true;
    if (((iVar8 != 0) || ((this->PerIterationStateArray).ArrayNum != 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PerIterationStateResultArray.IsEmpty() && PerIterationStateArray.IsEmpty()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                           ,0xc6,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    if (0 < param_1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_1,&pTVar9->AllocatorInstance,
                 &(this->PerIterationStateResultArray).ArrayNum,
                 &(this->PerIterationStateResultArray).ArrayMax);
      pTVar3 = &this->PerIterationStateArray;
      piVar1 = &(this->PerIterationStateArray).ArrayMax;
      if ((this->PerIterationStateArray).ArrayMax < param_1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,param_1,&pTVar3->AllocatorInstance,(this->PerIterationStateArray).ArrayNum
                   ,piVar1);
      }
      uVar14 = 0;
      uVar15 = uVar14;
      do {
        iVar8 = (this->PerIterationStateArray).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&pTVar3->AllocatorInstance,piVar1);
          (this->PerIterationStateArray).ArrayNum = iVar8;
        }
        uVar13 = (uint)uVar14;
        (this->PerIterationStateArray).ArrayNum = iVar8 + 1;
        lVar10 = (longlong)iVar8;
        pFVar4 = (pTVar3->AllocatorInstance).Data;
        *(undefined8 *)(pFVar4 + lVar10 * 0x28) = 0;
        *(undefined8 *)(pFVar4 + lVar10 * 0x28 + 8) = 0;
        *(undefined8 *)(pFVar4 + lVar10 * 0x28 + 0x10) = 0;
        pFVar4 = pFVar4 + lVar10 * 0x28;
        *(undefined8 *)(pFVar4 + 0x18) = 0;
        *(undefined8 *)(pFVar4 + 0x20) = 0;
        local_58[0] = uVar13;
        FVar7 = (FScriptContainerElement)
                (**(code **)param_2)
                          (*(undefined8 *)&param_2->field_0x8,pFVar4,&this->PerExecutionStateData,
                           local_58);
        uVar11 = 0;
        if ((int)uVar13 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
        (pTVar9->AllocatorInstance).Data[uVar15] = FVar7;
        uVar11 = 0;
        if ((int)uVar13 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
        if ((pTVar9->AllocatorInstance).Data[uVar15] == (FScriptContainerElement)0x3) {
          iVar8 = (this->PerIterationStateArray).ArrayNum;
          uVar12 = iVar8 - 1;
          uVar11 = 0;
          if ((int)uVar12 < iVar8) {
            uVar11 = ~uVar12 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar9;
          }
          pFVar4 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x28;
          iVar8 = (this->PerIterationStateArray).ArrayNum + ~uVar12;
          if (iVar8 != 0) {
            memmove(pFVar4,pFVar4 + 0x28,(longlong)iVar8 * 0x28);
          }
          piVar2 = &(this->PerIterationStateArray).ArrayNum;
          *piVar2 = *piVar2 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,&pTVar3->AllocatorInstance,(this->PerIterationStateArray).ArrayNum,
                     piVar1);
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar15 = uVar15 + 1;
      } while ((int)(uVar13 + 1) < param_1);
    }
  }
  return pTVar9;
}

// InitializePerIterationStates @ 149c2b440

TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> * __thiscall
TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
::InitializePerIterationStates
          (TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
           *this,int param_1,
          TFunctionRef<EPCGTimeSliceInitResult___cdecl(PCGPathfindingElement::FIterationState_&,PCGPathfindingElement::FExecutionState_const_&,unsigned_int)>
          *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<PCGPathfindingElement::FIterationState,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement FVar6;
  int iVar7;
  TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FIterationState *pFVar12;
  FScriptContainerElement *_Dst;
  longlong lVar13;
  uint local_58 [6];
  
  pTVar8 = &this->PerIterationStateResultArray;
  if (this->bPerIterationStateIsInitialized == false) {
    iVar7 = (this->PerIterationStateResultArray).ArrayNum;
    this->bPerIterationStateIsInitialized = true;
    if (((iVar7 != 0) || ((this->PerIterationStateArray).ArrayNum != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PerIterationStateResultArray.IsEmpty() && PerIterationStateArray.IsEmpty()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                           ,0xc6,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
    if (0 < param_1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_1,&pTVar8->AllocatorInstance,
                 &(this->PerIterationStateResultArray).ArrayNum,
                 &(this->PerIterationStateResultArray).ArrayMax);
      pTVar3 = &this->PerIterationStateArray;
      piVar1 = &(this->PerIterationStateArray).ArrayMax;
      if ((this->PerIterationStateArray).ArrayMax < param_1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa100,0x10,param_1,&pTVar3->AllocatorInstance,
                   (this->PerIterationStateArray).ArrayNum,piVar1);
      }
      uVar10 = 0;
      lVar13 = 0;
      do {
        iVar7 = (this->PerIterationStateArray).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xa100,0x10,&pTVar3->AllocatorInstance,piVar1);
          (this->PerIterationStateArray).ArrayNum = iVar7;
        }
        (this->PerIterationStateArray).ArrayNum = iVar7 + 1;
        pFVar12 = (FIterationState *)((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 0xa100);
        memset(pFVar12,0,0xa100);
        pFVar12 = PCGPathfindingElement::FIterationState::FIterationState(pFVar12);
        local_58[0] = uVar10;
        FVar6 = (FScriptContainerElement)
                (**(code **)param_2)
                          (*(undefined8 *)&param_2->field_0x8,pFVar12,&this->PerExecutionStateData,
                           local_58);
        uVar9 = 0;
        if ((int)uVar10 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        (pTVar8->AllocatorInstance).Data[lVar13] = FVar6;
        uVar9 = 0;
        if ((int)uVar10 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        if ((pTVar8->AllocatorInstance).Data[lVar13] == (FScriptContainerElement)0x3) {
          iVar7 = (this->PerIterationStateArray).ArrayNum;
          uVar11 = iVar7 - 1;
          uVar9 = 0;
          if ((int)uVar11 < iVar7) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
          _Dst = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar11 * 0xa100;
          PCGSpatialAlgo::AStar::FSearchState::~FSearchState((FSearchState *)(_Dst + 0x10));
          iVar7 = (this->PerIterationStateArray).ArrayNum + ~uVar11;
          if (iVar7 != 0) {
            memmove(_Dst,_Dst + 0xa100,(longlong)iVar7 * 0xa100);
          }
          piVar2 = &(this->PerIterationStateArray).ArrayNum;
          *piVar2 = *piVar2 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xa100,0x10,&pTVar3->AllocatorInstance,(this->PerIterationStateArray).ArrayNum,
                     piVar1);
        }
        uVar10 = uVar10 + 1;
        lVar13 = lVar13 + 1;
      } while ((int)uVar10 < param_1);
    }
  }
  return pTVar8;
}

// InitializePerIterationStates @ 149c2b750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> * __thiscall
TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
::InitializePerIterationStates
          (TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
           *this,int param_1,
          TFunctionRef<EPCGTimeSliceInitResult___cdecl(FPCGMatchAndSetAttributesIterationState_&,FPCGMatchAndSetAttributesExecutionState_const_&,unsigned_int)>
          *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<FPCGMatchAndSetAttributesIterationState,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  FScriptContainerElement FVar8;
  int iVar9;
  TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint local_res20 [2];
  
  pTVar10 = &this->PerIterationStateResultArray;
  if (this->bPerIterationStateIsInitialized == false) {
    iVar9 = (this->PerIterationStateResultArray).ArrayNum;
    this->bPerIterationStateIsInitialized = true;
    if (((iVar9 != 0) || ((this->PerIterationStateArray).ArrayNum != 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PerIterationStateResultArray.IsEmpty() && PerIterationStateArray.IsEmpty()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                           ,0xc6,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar10;
    }
    if (0 < param_1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_1,&pTVar10->AllocatorInstance,
                 &(this->PerIterationStateResultArray).ArrayNum,
                 &(this->PerIterationStateResultArray).ArrayMax);
      pTVar3 = &this->PerIterationStateArray;
      piVar1 = &(this->PerIterationStateArray).ArrayMax;
      if ((this->PerIterationStateArray).ArrayMax < param_1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,param_1,&pTVar3->AllocatorInstance,(this->PerIterationStateArray).ArrayNum
                   ,piVar1);
      }
      uVar15 = 0;
      uVar16 = uVar15;
      do {
        iVar9 = (this->PerIterationStateArray).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&pTVar3->AllocatorInstance,piVar1);
          (this->PerIterationStateArray).ArrayNum = iVar9;
        }
        lVar11 = (longlong)iVar9;
        (this->PerIterationStateArray).ArrayNum = iVar9 + 1;
        pFVar4 = (pTVar3->AllocatorInstance).Data;
        *(undefined8 *)(pFVar4 + lVar11 * 0x28) = 0;
        *(undefined4 *)(pFVar4 + lVar11 * 0x28 + 0x21) = 0;
        *(undefined2 *)(pFVar4 + lVar11 * 0x28 + 0x25) = 0;
        pFVar4 = pFVar4 + lVar11 * 0x28;
        pFVar4[0x27] = (FScriptContainerElement)0x0;
        *(undefined8 *)(pFVar4 + 8) = 0;
        *(undefined8 *)(pFVar4 + 0x10) = 0;
        *(undefined8 *)(pFVar4 + 0x18) = 0;
        pFVar4[0x20] = (FScriptContainerElement)0x0;
        uVar14 = (uint)uVar15;
        local_res20[0] = uVar14;
        FVar8 = (FScriptContainerElement)
                (**(code **)param_2)
                          (*(undefined8 *)&param_2->field_0x8,pFVar4,&this->PerExecutionStateData,
                           local_res20);
        uVar12 = 0;
        if ((int)uVar14 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar10;
        }
        (pTVar10->AllocatorInstance).Data[uVar16] = FVar8;
        uVar12 = 0;
        if ((int)uVar14 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar10;
        }
        if ((pTVar10->AllocatorInstance).Data[uVar16] == (FScriptContainerElement)0x3) {
          iVar9 = (this->PerIterationStateArray).ArrayNum;
          uVar13 = iVar9 - 1;
          uVar12 = 0;
          if ((int)uVar13 < iVar9) {
            uVar12 = ~uVar13 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            pTVar10 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar10;
          }
          pFVar5 = (pTVar3->AllocatorInstance).Data;
          pFVar4 = pFVar5 + (longlong)(int)uVar13 * 0x28;
          if ((pFVar5[(longlong)(int)uVar13 * 0x28 + 0x20] != (FScriptContainerElement)0x0) &&
             (*(FPCGMatchAndSetPartition **)(pFVar4 + 0x18) != (FPCGMatchAndSetPartition *)0x0)) {
            FPCGMatchAndSetPartition::_scalar_deleting_destructor_
                      (*(FPCGMatchAndSetPartition **)(pFVar4 + 0x18),1);
          }
          iVar9 = (this->PerIterationStateArray).ArrayNum + ~uVar13;
          if (iVar9 != 0) {
            memmove(pFVar4,pFVar4 + 0x28,(longlong)iVar9 * 0x28);
          }
          piVar2 = &(this->PerIterationStateArray).ArrayNum;
          *piVar2 = *piVar2 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,&pTVar3->AllocatorInstance,(this->PerIterationStateArray).ArrayNum,
                     piVar1);
        }
        uVar15 = (ulonglong)(uVar14 + 1);
        uVar16 = uVar16 + 1;
      } while ((int)(uVar14 + 1) < param_1);
    }
  }
  return pTVar10;
}

// TimeSliceIsEnabled @ 149c35980

bool __thiscall
TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
::TimeSliceIsEnabled
          (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
           *this)

{
  return this->bTimeSliceIsEnabled;
}

// TimeSliceIsEnabled @ 149c35990

bool __thiscall
TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
::TimeSliceIsEnabled
          (TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
           *this)

{
  return this->bTimeSliceIsEnabled;
}

// TimeSliceIsEnabled @ 149c359a0

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
TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
::TimeSliceIsEnabled
          (TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
           *this)

{
  return this->bTimeSliceIsEnabled;
}

// AddExtraStructReferencedObjects @ 149c5c5b0

void __thiscall
TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
::AddExtraStructReferencedObjects
          (TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
           *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->TrackedObjectArray).AllocatorInstance.Data,
             (this->TrackedObjectArray).ArrayNum,0,0);
  return;
}

// AddExtraStructReferencedObjects @ 149c5c5f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
::AddExtraStructReferencedObjects
          (TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
           *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->TrackedObjectArray).AllocatorInstance.Data,
             (this->TrackedObjectArray).ArrayNum,0,0);
  return;
}

// AddExtraStructReferencedObjects @ 149c5c630

void __thiscall
TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
::AddExtraStructReferencedObjects
          (TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
           *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->TrackedObjectArray).AllocatorInstance.Data,
             (this->TrackedObjectArray).ArrayNum,0,0);
  return;
}

// AddExtraStructReferencedObjects @ 149c5c670

void __thiscall
TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
::AddExtraStructReferencedObjects
          (TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
           *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->TrackedObjectArray).AllocatorInstance.Data,
             (this->TrackedObjectArray).ArrayNum,0,0);
  return;
}

// DataIsPreparedForExecution @ 149c610e0

bool __thiscall
TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
::DataIsPreparedForExecution
          (TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
           *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if (((this->ExecutionStateResult != Uninitialized) &&
      (this->ExecutionStateResult != AbortExecution)) &&
     (this->bPerIterationStateIsInitialized != false)) {
    pFVar3 = (this->PerIterationStateResultArray).AllocatorInstance.Data;
    iVar2 = (this->PerIterationStateResultArray).ArrayNum;
    pFVar1 = pFVar3 + iVar2;
    while( true ) {
      if ((this->PerIterationStateResultArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_EPCGTimeSliceInitResult_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) {
        return true;
      }
      if ((*pFVar3 == (FScriptContainerElement)0x0) || (*pFVar3 == (FScriptContainerElement)0x3))
      break;
      pFVar3 = pFVar3 + 1;
    }
  }
  return false;
}

// DataIsPreparedForExecution @ 149c61170

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
::DataIsPreparedForExecution
          (TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
           *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if (((this->ExecutionStateResult != Uninitialized) &&
      (this->ExecutionStateResult != AbortExecution)) &&
     (this->bPerIterationStateIsInitialized != false)) {
    pFVar3 = (this->PerIterationStateResultArray).AllocatorInstance.Data;
    iVar2 = (this->PerIterationStateResultArray).ArrayNum;
    pFVar1 = pFVar3 + iVar2;
    while( true ) {
      if ((this->PerIterationStateResultArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_EPCGTimeSliceInitResult_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) {
        return true;
      }
      if ((*pFVar3 == (FScriptContainerElement)0x0) || (*pFVar3 == (FScriptContainerElement)0x3))
      break;
      pFVar3 = pFVar3 + 1;
    }
  }
  return false;
}

// DataIsPreparedForExecution @ 149c61200

bool __thiscall
TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
::DataIsPreparedForExecution
          (TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
           *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if (((this->ExecutionStateResult != Uninitialized) &&
      (this->ExecutionStateResult != AbortExecution)) &&
     (this->bPerIterationStateIsInitialized != false)) {
    pFVar3 = (this->PerIterationStateResultArray).AllocatorInstance.Data;
    iVar2 = (this->PerIterationStateResultArray).ArrayNum;
    pFVar1 = pFVar3 + iVar2;
    while( true ) {
      if ((this->PerIterationStateResultArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_EPCGTimeSliceInitResult_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) {
        return true;
      }
      if ((*pFVar3 == (FScriptContainerElement)0x0) || (*pFVar3 == (FScriptContainerElement)0x3))
      break;
      pFVar3 = pFVar3 + 1;
    }
  }
  return false;
}

// DataIsPreparedForExecution @ 149c61290

bool __thiscall
TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
::DataIsPreparedForExecution
          (TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
           *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if (((this->ExecutionStateResult != Uninitialized) &&
      (this->ExecutionStateResult != AbortExecution)) &&
     (this->bPerIterationStateIsInitialized != false)) {
    pFVar3 = (this->PerIterationStateResultArray).AllocatorInstance.Data;
    iVar2 = (this->PerIterationStateResultArray).ArrayNum;
    pFVar1 = pFVar3 + iVar2;
    while( true ) {
      if ((this->PerIterationStateResultArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_EPCGTimeSliceInitResult_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) {
        return true;
      }
      if ((*pFVar3 == (FScriptContainerElement)0x0) || (*pFVar3 == (FScriptContainerElement)0x3))
      break;
      pFVar3 = pFVar3 + 1;
    }
  }
  return false;
}

// InitializePerExecutionState @ 149c7e8c0

EPCGTimeSliceInitResult __thiscall
TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
::InitializePerExecutionState
          (TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
           *this,TFunctionRef<EPCGTimeSliceInitResult___cdecl(TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>_*,FPCGWorldRaycast::FExecutionState_&)>
                 *param_1)

{
  EPCGTimeSliceInitResult EVar1;
  TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
  *local_res8 [4];
  
  EVar1 = this->ExecutionStateResult;
  if (EVar1 == Uninitialized) {
    local_res8[0] = this;
    EVar1 = (**(code **)param_1)
                      (*(undefined8 *)&param_1->field_0x8,local_res8,&this->PerExecutionStateData);
    this->ExecutionStateResult = EVar1;
  }
  return EVar1;
}

// InitializePerExecutionState @ 149c7e910

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
::InitializePerExecutionState
          (TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
           *this,TFunctionRef<EPCGTimeSliceInitResult___cdecl(TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>_*,FPCGSpawnSplineMeshPerExecutionState_&)>
                 *param_1)

{
  EPCGTimeSliceInitResult EVar1;
  TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
  *local_res8 [4];
  
  EVar1 = this->ExecutionStateResult;
  if (EVar1 == Uninitialized) {
    local_res8[0] = this;
    EVar1 = (**(code **)param_1)
                      (*(undefined8 *)&param_1->field_0x8,local_res8,&this->PerExecutionStateData);
    this->ExecutionStateResult = EVar1;
  }
  return EVar1;
}

// InitializePerExecutionState @ 149c7e960

EPCGTimeSliceInitResult __thiscall
TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
::InitializePerExecutionState
          (TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
           *this,TFunctionRef<EPCGTimeSliceInitResult___cdecl(TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>_*,PCGSurfaceSampler::FSurfaceSamplerExecutionState_&)>
                 *param_1)

{
  EPCGTimeSliceInitResult EVar1;
  TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
  *local_res8 [4];
  
  EVar1 = this->ExecutionStateResult;
  if (EVar1 == Uninitialized) {
    local_res8[0] = this;
    EVar1 = (**(code **)param_1)
                      (*(undefined8 *)&param_1->field_0x8,local_res8,&this->PerExecutionStateData);
    this->ExecutionStateResult = EVar1;
  }
  return EVar1;
}

// InitializePerExecutionState @ 149c7e9b0

EPCGTimeSliceInitResult __thiscall
TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
::InitializePerExecutionState
          (TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
           *this,TFunctionRef<EPCGTimeSliceInitResult___cdecl(TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>_*,PCGVolumeSampler::FVolumeSamplerExecutionState_&)>
                 *param_1)

{
  EPCGTimeSliceInitResult EVar1;
  TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
  *local_res8 [4];
  
  EVar1 = this->ExecutionStateResult;
  if (EVar1 == Uninitialized) {
    local_res8[0] = this;
    EVar1 = (**(code **)param_1)
                      (*(undefined8 *)&param_1->field_0x8,local_res8,&this->PerExecutionStateData);
    this->ExecutionStateResult = EVar1;
  }
  return EVar1;
}

// InitializePerIterationStates @ 149c7ea00

TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> * __thiscall
TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
::InitializePerIterationStates
          (TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
           *this,int param_1,
          TFunctionRef<EPCGTimeSliceInitResult___cdecl(FPCGWorldRaycast::FIterationState_&,FPCGWorldRaycast::FExecutionState_const_&,unsigned_int)>
          *param_2)

{
  TArray<FPCGWorldRaycast::FIterationState,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement FVar4;
  int iVar5;
  TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  int *piVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint local_res20 [2];
  
  pTVar6 = &this->PerIterationStateResultArray;
  if (this->bPerIterationStateIsInitialized == false) {
    iVar5 = (this->PerIterationStateResultArray).ArrayNum;
    this->bPerIterationStateIsInitialized = true;
    if (((iVar5 != 0) || ((this->PerIterationStateArray).ArrayNum != 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PerIterationStateResultArray.IsEmpty() && PerIterationStateArray.IsEmpty()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                           ,0xc6,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
    if (0 < param_1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_1,&pTVar6->AllocatorInstance,
                 &(this->PerIterationStateResultArray).ArrayNum,
                 &(this->PerIterationStateResultArray).ArrayMax);
      pTVar1 = &this->PerIterationStateArray;
      if ((this->PerIterationStateArray).ArrayMax < param_1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,8,param_1,&pTVar1->AllocatorInstance,(this->PerIterationStateArray).ArrayNum
                   ,&(this->PerIterationStateArray).ArrayMax);
      }
      uVar12 = 0;
      uVar13 = uVar12;
      do {
        piVar8 = &(this->PerIterationStateArray).ArrayMax;
        iVar5 = (this->PerIterationStateArray).ArrayNum;
        if (iVar5 == *piVar8) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x880,&pTVar1->AllocatorInstance,piVar8);
          (this->PerIterationStateArray).ArrayNum = iVar5;
        }
        (this->PerIterationStateArray).ArrayNum = iVar5 + 1;
        pFVar9 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x80;
        uVar11 = (uint)uVar12;
        *(undefined8 *)(pFVar9 + 0x40) = 0;
        *(undefined8 *)(pFVar9 + 0x48) = 0;
        *(undefined8 *)(pFVar9 + 0x68) = 0;
        *(undefined8 *)(pFVar9 + 0x78) = 0;
        *(undefined8 *)pFVar9 = 0;
        *(undefined8 *)(pFVar9 + 0x10) = 0;
        *(undefined8 *)(pFVar9 + 0x20) = 0;
        *(undefined8 *)(pFVar9 + 0x30) = 0;
        *(undefined8 *)(pFVar9 + 0x50) = 0;
        *(undefined8 *)(pFVar9 + 8) = 0;
        *(undefined8 *)(pFVar9 + 0x18) = 0;
        *(undefined8 *)(pFVar9 + 0x28) = 0;
        *(undefined8 *)(pFVar9 + 0x38) = 0;
        *(undefined4 *)(pFVar9 + 0x58) = 0;
        *(undefined4 *)(pFVar9 + 0x5c) = 0x80;
        *(undefined4 *)(pFVar9 + 100) = 0;
        *(undefined4 *)(pFVar9 + 0x60) = 0xffffffff;
        *(undefined8 *)(pFVar9 + 0x70) = 0;
        local_res20[0] = uVar11;
        FVar4 = (FScriptContainerElement)
                (**(code **)param_2)
                          (*(undefined8 *)&param_2->field_0x8,pFVar9,&this->PerExecutionStateData,
                           local_res20);
        uVar7 = 0;
        if ((int)uVar11 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar6;
        }
        (pTVar6->AllocatorInstance).Data[uVar13] = FVar4;
        uVar7 = 0;
        if ((int)uVar11 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar6;
        }
        if ((pTVar6->AllocatorInstance).Data[uVar13] == (FScriptContainerElement)0x3) {
          iVar5 = (this->PerIterationStateArray).ArrayNum;
          uVar10 = iVar5 - 1;
          uVar7 = 0;
          if ((int)uVar10 < iVar5) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar6;
          }
          pFVar9 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x80;
          *(undefined4 *)(pFVar9 + 0x78) = 0;
          if (*(void **)(pFVar9 + 0x70) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar9 + 0x70));
          }
          TSparseArray<TSparseSetElement<TObjectKey<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TObjectKey<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TObjectKey<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(pFVar9 + 0x30));
          if (*(void **)(pFVar9 + 0x20) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar9 + 0x20));
          }
          if (*(void **)(pFVar9 + 0x10) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar9 + 0x10));
          }
          if (*(void **)pFVar9 != (void *)0x0) {
            FMemory::Free(*(void **)pFVar9);
          }
          iVar5 = (this->PerIterationStateArray).ArrayNum + ~uVar10;
          if (iVar5 != 0) {
            memmove(pFVar9,pFVar9 + 0x80,(longlong)iVar5 << 7);
          }
          piVar8 = &(this->PerIterationStateArray).ArrayNum;
          *piVar8 = *piVar8 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,8,&pTVar1->AllocatorInstance,(this->PerIterationStateArray).ArrayNum,
                     &(this->PerIterationStateArray).ArrayMax);
        }
        uVar12 = (ulonglong)(uVar11 + 1);
        uVar13 = uVar13 + 1;
      } while ((int)(uVar11 + 1) < param_1);
    }
  }
  return pTVar6;
}

// InitializePerIterationStates @ 149c7ed90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> * __thiscall
TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
::InitializePerIterationStates
          (TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
           *this,int param_1,
          TFunctionRef<EPCGTimeSliceInitResult___cdecl(FPCGSpawnSplineMeshPerIterationState_&,FPCGSpawnSplineMeshPerExecutionState_const_&,unsigned_int)>
          *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<FPCGSpawnSplineMeshPerIterationState,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement FVar6;
  int iVar7;
  TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FPCGSpawnSplineMeshPerIterationState *pFVar12;
  longlong lVar13;
  uint local_58 [6];
  
  pTVar8 = &this->PerIterationStateResultArray;
  if (this->bPerIterationStateIsInitialized == false) {
    iVar7 = (this->PerIterationStateResultArray).ArrayNum;
    this->bPerIterationStateIsInitialized = true;
    if (((iVar7 != 0) || ((this->PerIterationStateArray).ArrayNum != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PerIterationStateResultArray.IsEmpty() && PerIterationStateArray.IsEmpty()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                           ,0xc6,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
    if (0 < param_1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_1,&pTVar8->AllocatorInstance,
                 &(this->PerIterationStateResultArray).ArrayNum,
                 &(this->PerIterationStateResultArray).ArrayMax);
      pTVar3 = &this->PerIterationStateArray;
      piVar1 = &(this->PerIterationStateArray).ArrayMax;
      if ((this->PerIterationStateArray).ArrayMax < param_1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x3d0,8,param_1,&pTVar3->AllocatorInstance,
                   (this->PerIterationStateArray).ArrayNum,piVar1);
      }
      uVar10 = 0;
      lVar13 = 0;
      do {
        iVar7 = (this->PerIterationStateArray).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x3d0,8,&pTVar3->AllocatorInstance,piVar1);
          (this->PerIterationStateArray).ArrayNum = iVar7;
        }
        (this->PerIterationStateArray).ArrayNum = iVar7 + 1;
        pFVar12 = (FPCGSpawnSplineMeshPerIterationState *)
                  ((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 0x3d0);
        memset(pFVar12,0,0x3d0);
        pFVar12 = FPCGSpawnSplineMeshPerIterationState::FPCGSpawnSplineMeshPerIterationState
                            (pFVar12);
        local_58[0] = uVar10;
        FVar6 = (FScriptContainerElement)
                (**(code **)param_2)
                          (*(undefined8 *)&param_2->field_0x8,pFVar12,&this->PerExecutionStateData,
                           local_58);
        uVar9 = 0;
        if ((int)uVar10 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        (pTVar8->AllocatorInstance).Data[lVar13] = FVar6;
        uVar9 = 0;
        if ((int)uVar10 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        if ((pTVar8->AllocatorInstance).Data[lVar13] == (FScriptContainerElement)0x3) {
          iVar7 = (this->PerIterationStateArray).ArrayNum;
          uVar11 = iVar7 - 1;
          uVar9 = 0;
          if ((int)uVar11 < iVar7) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
          pFVar12 = (FPCGSpawnSplineMeshPerIterationState *)
                    ((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x3d0);
          FPCGSpawnSplineMeshPerIterationState::~FPCGSpawnSplineMeshPerIterationState(pFVar12);
          iVar7 = (this->PerIterationStateArray).ArrayNum + ~uVar11;
          if (iVar7 != 0) {
            memmove(pFVar12,pFVar12 + 1,(longlong)iVar7 * 0x3d0);
          }
          piVar2 = &(this->PerIterationStateArray).ArrayNum;
          *piVar2 = *piVar2 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x3d0,8,&pTVar3->AllocatorInstance,(this->PerIterationStateArray).ArrayNum,
                     piVar1);
        }
        uVar10 = uVar10 + 1;
        lVar13 = lVar13 + 1;
      } while ((int)uVar10 < param_1);
    }
  }
  return pTVar8;
}

// InitializePerIterationStates @ 149c7f0a0

TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> * __thiscall
TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
::InitializePerIterationStates
          (TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
           *this,int param_1,
          TFunctionRef<EPCGTimeSliceInitResult___cdecl(PCGSurfaceSampler::FSurfaceSamplerIterationState_&,PCGSurfaceSampler::FSurfaceSamplerExecutionState_const_&,unsigned_int)>
          *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<PCGSurfaceSampler::FSurfaceSamplerIterationState,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement FVar6;
  int iVar7;
  TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  FScriptContainerElement *_Dst;
  uint uVar10;
  uint uVar11;
  FSurfaceSamplerData *this_00;
  longlong lVar12;
  uint local_58 [6];
  
  pTVar8 = &this->PerIterationStateResultArray;
  if (this->bPerIterationStateIsInitialized == false) {
    iVar7 = (this->PerIterationStateResultArray).ArrayNum;
    this->bPerIterationStateIsInitialized = true;
    if (((iVar7 != 0) || ((this->PerIterationStateArray).ArrayNum != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PerIterationStateResultArray.IsEmpty() && PerIterationStateArray.IsEmpty()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                           ,0xc6,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
    if (0 < param_1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_1,&pTVar8->AllocatorInstance,
                 &(this->PerIterationStateResultArray).ArrayNum,
                 &(this->PerIterationStateResultArray).ArrayMax);
      pTVar3 = &this->PerIterationStateArray;
      piVar1 = &(this->PerIterationStateArray).ArrayMax;
      if ((this->PerIterationStateArray).ArrayMax < param_1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x150,0x10,param_1,&pTVar3->AllocatorInstance,
                   (this->PerIterationStateArray).ArrayNum,piVar1);
      }
      uVar10 = 0;
      lVar12 = 0;
      do {
        iVar7 = (this->PerIterationStateArray).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x150,0x10,&pTVar3->AllocatorInstance,piVar1);
          (this->PerIterationStateArray).ArrayNum = iVar7;
        }
        (this->PerIterationStateArray).ArrayNum = iVar7 + 1;
        this_00 = (FSurfaceSamplerData *)
                  ((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 0x150);
        memset(this_00,0,0x150);
        PCGSurfaceSampler::FSurfaceSamplerData::FSurfaceSamplerData(this_00);
        this_00[1].Params.bUseLegacyGridCreationMethod = false;
        *(undefined3 *)&this_00[1].Params.field_0x1 = 0;
        this_00[1].Params.PointsPerSquaredMeter = 0.0;
        this_00[1].Params.PointExtents.field0_0x0._s_0.X = 0.0;
        local_58[0] = uVar10;
        FVar6 = (FScriptContainerElement)
                (**(code **)param_2)
                          (*(undefined8 *)&param_2->field_0x8,this_00,&this->PerExecutionStateData,
                           local_58);
        uVar9 = 0;
        if ((int)uVar10 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        (pTVar8->AllocatorInstance).Data[lVar12] = FVar6;
        uVar9 = 0;
        if ((int)uVar10 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        if ((pTVar8->AllocatorInstance).Data[lVar12] == (FScriptContainerElement)0x3) {
          iVar7 = (this->PerIterationStateArray).ArrayNum;
          uVar11 = iVar7 - 1;
          uVar9 = 0;
          if ((int)uVar11 < iVar7) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
          _Dst = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x150;
          iVar7 = (this->PerIterationStateArray).ArrayNum + ~uVar11;
          if (iVar7 != 0) {
            memmove(_Dst,_Dst + 0x150,(longlong)iVar7 * 0x150);
          }
          piVar2 = &(this->PerIterationStateArray).ArrayNum;
          *piVar2 = *piVar2 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x150,0x10,&pTVar3->AllocatorInstance,(this->PerIterationStateArray).ArrayNum,
                     piVar1);
        }
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 1;
      } while ((int)uVar10 < param_1);
    }
  }
  return pTVar8;
}

// InitializePerIterationStates @ 149c7f3b0

TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> * __thiscall
TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
::InitializePerIterationStates
          (TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
           *this,int param_1,
          TFunctionRef<EPCGTimeSliceInitResult___cdecl(PCGVolumeSampler::FVolumeSamplerIterationState_&,PCGVolumeSampler::FVolumeSamplerExecutionState_const_&,unsigned_int)>
          *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<PCGVolumeSampler::FVolumeSamplerIterationState,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  bool bVar9;
  FScriptContainerElement FVar10;
  int iVar11;
  TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint local_58 [6];
  
  pTVar12 = &this->PerIterationStateResultArray;
  if (this->bPerIterationStateIsInitialized == false) {
    iVar11 = (this->PerIterationStateResultArray).ArrayNum;
    this->bPerIterationStateIsInitialized = true;
    if (((iVar11 != 0) || ((this->PerIterationStateArray).ArrayNum != 0)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("PerIterationStateResultArray.IsEmpty() && PerIterationStateArray.IsEmpty()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                           ,0xc6,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar12;
    }
    if (0 < param_1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_1,&pTVar12->AllocatorInstance,
                 &(this->PerIterationStateResultArray).ArrayNum,
                 &(this->PerIterationStateResultArray).ArrayMax);
      pTVar3 = &this->PerIterationStateArray;
      piVar1 = &(this->PerIterationStateArray).ArrayMax;
      if ((this->PerIterationStateArray).ArrayMax < param_1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x70,8,param_1,&pTVar3->AllocatorInstance,(this->PerIterationStateArray).ArrayNum
                   ,piVar1);
      }
      uVar17 = 0;
      uVar18 = uVar17;
      do {
        iVar11 = (this->PerIterationStateArray).ArrayNum;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x870,&pTVar3->AllocatorInstance,piVar1);
          (this->PerIterationStateArray).ArrayNum = iVar11;
        }
        uVar16 = (uint)uVar17;
        (this->PerIterationStateArray).ArrayNum = iVar11 + 1;
        pFVar14 = (pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 0x70;
        *(undefined8 *)pFVar14 = 0;
        *(undefined8 *)(pFVar14 + 8) = 0;
        *(undefined8 *)(pFVar14 + 0x10) = 0;
        *(undefined8 *)(pFVar14 + 0x18) = 0;
        *(undefined8 *)(pFVar14 + 0x20) = 0;
        *(undefined8 *)(pFVar14 + 0x28) = 0;
        *(undefined8 *)(pFVar14 + 0x30) = 0;
        *(undefined8 *)(pFVar14 + 0x38) = 0;
        *(undefined8 *)(pFVar14 + 0x40) = 0;
        *(undefined8 *)(pFVar14 + 0x48) = 0;
        *(undefined8 *)(pFVar14 + 0x50) = 0;
        *(undefined8 *)(pFVar14 + 0x58) = 0;
        *(undefined8 *)(pFVar14 + 0x60) = 0;
        *(undefined8 *)(pFVar14 + 0x68) = 0;
        uVar7 = PCGVolumeSampler::DefaultVoxelSize.field0_0x0._12_4_;
        uVar6 = PCGVolumeSampler::DefaultVoxelSize.field0_0x0._8_4_;
        uVar5 = PCGVolumeSampler::DefaultVoxelSize.field0_0x0._4_4_;
        *(undefined4 *)pFVar14 = PCGVolumeSampler::DefaultVoxelSize.field0_0x0._0_4_;
        *(undefined4 *)(pFVar14 + 4) = uVar5;
        *(undefined4 *)(pFVar14 + 8) = uVar6;
        *(undefined4 *)(pFVar14 + 0xc) = uVar7;
        uVar8 = PCGVolumeSampler::DefaultVoxelSize.field0_0x0._s_0.Z;
        *(undefined4 *)(pFVar14 + 0x18) = 0;
        *(undefined8 *)(pFVar14 + 0x10) = uVar8;
        *(undefined8 *)(pFVar14 + 0x20) = 0;
        *(undefined8 *)(pFVar14 + 0x28) = 0;
        *(undefined8 *)(pFVar14 + 0x30) = 0;
        *(undefined8 *)(pFVar14 + 0x38) = 0;
        *(undefined8 *)(pFVar14 + 0x40) = 0;
        *(undefined8 *)(pFVar14 + 0x48) = 0;
        local_58[0] = uVar16;
        FVar10 = (FScriptContainerElement)
                 (**(code **)param_2)
                           (*(undefined8 *)&param_2->field_0x8,pFVar14,&this->PerExecutionStateData,
                            local_58);
        uVar13 = 0;
        if ((int)uVar16 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar12 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar12;
        }
        (pTVar12->AllocatorInstance).Data[uVar18] = FVar10;
        uVar13 = 0;
        if ((int)uVar16 < (this->PerIterationStateResultArray).ArrayNum) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar12 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar12;
        }
        if ((pTVar12->AllocatorInstance).Data[uVar18] == (FScriptContainerElement)0x3) {
          iVar11 = (this->PerIterationStateArray).ArrayNum;
          uVar15 = iVar11 - 1;
          uVar13 = 0;
          if ((int)uVar15 < iVar11) {
            uVar13 = ~uVar15 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            pTVar12 = (TArray<EPCGTimeSliceInitResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar12;
          }
          pFVar14 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x70;
          iVar11 = (this->PerIterationStateArray).ArrayNum + ~uVar15;
          if (iVar11 != 0) {
            memmove(pFVar14,pFVar14 + 0x70,(longlong)iVar11 * 0x70);
          }
          piVar2 = &(this->PerIterationStateArray).ArrayNum;
          *piVar2 = *piVar2 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x70,8,&pTVar3->AllocatorInstance,(this->PerIterationStateArray).ArrayNum,
                     piVar1);
        }
        uVar17 = (ulonglong)(uVar16 + 1);
        uVar18 = uVar18 + 1;
      } while ((int)(uVar16 + 1) < param_1);
    }
  }
  return pTVar12;
}

// TimeSliceIsEnabled @ 149c92990

bool __thiscall
TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
::TimeSliceIsEnabled
          (TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
           *this)

{
  return this->bTimeSliceIsEnabled;
}

// TimeSliceIsEnabled @ 149c929a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
::TimeSliceIsEnabled
          (TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
           *this)

{
  return this->bTimeSliceIsEnabled;
}

// TimeSliceIsEnabled @ 149c929b0

bool __thiscall
TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
::TimeSliceIsEnabled
          (TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
           *this)

{
  return this->bTimeSliceIsEnabled;
}

// TimeSliceIsEnabled @ 149c929c0

bool __thiscall
TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
::TimeSliceIsEnabled
          (TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
           *this)

{
  return this->bTimeSliceIsEnabled;
}

// TrackObject @ 149c929d0

void __thiscall
TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
::TrackObject(TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
              *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  TObjectPtr<UObject_const_>_u_0 local_res8;
  
  if ((param_1 == (UObject *)0x0) || ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object && IsValid(Object)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                       ,0xe3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TObjectPtr<UObject_const_>_>
            (&this->TrackedObjectArray,(TObjectPtr<UObject_const_> *)&local_res8.ObjectPtr);
  return;
}

// TrackObject @ 149c92a60

void __thiscall
TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
::TrackObject(TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
              *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  TObjectPtr<UObject_const_>_u_0 local_res8;
  
  if ((param_1 == (UObject *)0x0) || ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object && IsValid(Object)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                       ,0xe3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TObjectPtr<UObject_const_>_>
            (&this->TrackedObjectArray,(TObjectPtr<UObject_const_> *)&local_res8.ObjectPtr);
  return;
}

