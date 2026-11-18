// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 42

// CreateContext @ 1499daec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>::
CreateContext(TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>
              *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x2a0);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x2a0);
    FPCGContext::FPCGContext(this_00);
    *(undefined2 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 1;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TPCGTimeSlicedContext_UFEmptyStruct_PCGTimeSlice__UFOperationData_PCGMetadataOps__UFPCGContext____6B_
    ;
    this_00[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this_00[1].InputData.TaggedData.AllocatorInstance.Data + 2) = 0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    this_00[1].InputData.InactiveOutputPinBitmask = 0;
    this_00[1].OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].OutputData.TaggedData.ArrayNum = 0;
    this_00[1].OutputData.TaggedData.ArrayMax = 0;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// ExecuteSlice @ 1499f1480

bool __thiscall
TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>::
ExecuteSlice(TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>
             *this,TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>
                   *param_1,
            TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>_*,PCGTimeSlice::FEmptyStruct_const_&,PCGMetadataOps::FOperationData_&,unsigned_int)>
            *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined1 local_res10 [16];
  uint local_res20 [2];
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>
  *local_28 [2];
  
  param_1->ExecutionCount = param_1->ExecutionCount + 1;
  bVar3 = TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>
          ::DataIsPreparedForExecution(param_1);
  if (((!bVar3) &&
      (local_res10[0] = bVar3,
      bVar3 = `TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>
              ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), !bVar3)) ||
     ((param_1->PerIterationStateArray).ArrayNum == 0)) {
    return true;
  }
  do {
    uVar1 = param_1->IterationIndex;
    uVar6 = 0;
    if ((int)uVar1 < (param_1->PerIterationStateArray).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_res20[0] = uVar1;
    local_28[0] = param_1;
    cVar5 = (**(code **)param_2)
                      (*(undefined8 *)&param_2->field_0x8,local_28,&param_1->PerExecutionStateData,
                       (param_1->PerIterationStateArray).AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 0x78,local_res20);
    if (cVar5 == '\0') {
      return false;
    }
    param_1->IterationIndex = param_1->IterationIndex + 1;
  } while ((param_1->IterationIndex < (param_1->PerIterationStateArray).ArrayNum) &&
          (bVar3 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_), !bVar3));
  return param_1->IterationIndex == (param_1->PerIterationStateArray).ArrayNum;
}

// CreateContext @ 149afb690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
TPCGTimeSlicedElementBase<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
::CreateContext(TPCGTimeSlicedElementBase<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
                *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x2e8);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x2e8);
    FPCGContext::FPCGContext(this_00);
    *(undefined2 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 1;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TPCGTimeSlicedContext_UFCollapsePointsSettings_PCGCollapsePoints__UFCollapsePointsState_2_UFPCGContext____6B_
    ;
    this_00[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this_00[1].InputData.TaggedData.AllocatorInstance.Data + 2) = 0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    this_00[1].InputData.InactiveOutputPinBitmask = 0;
    this_00[1].OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].OutputData.TaggedData.ArrayNum = 0;
    this_00[1].OutputData.TaggedData.ArrayMax = 0;
    this_00[1].OutputData.bCancelExecutionOnEmpty = false;
    this_00[1].OutputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].OutputData.field_0x12 = 0;
    this_00[1].OutputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].OutputData.DataCrcs.ArrayNum = 0;
    this_00[1].OutputData.DataCrcs.ArrayMax = 0;
    this_00[1].OutputData.InactiveOutputPinBitmask = 0;
    this_00[1].ExecutionSource.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this_00[1].ExecutionSource.InterfaceInstance = (IPCGGraphExecutionSource *)0x0;
    this_00[1].SourceComponent.WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined8 *)&this_00[1].bInputDataModified = 0;
    this_00[1].AsyncState.EndTime = 0.0;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 149afb770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>::CreateContext
          (TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext> *this
          )

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x2a0);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x2a0);
    FPCGContext::FPCGContext(this_00);
    *(undefined2 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 1;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TPCGTimeSlicedContext_UFEmptyStruct_PCGTimeSlice__UFPCGBlurIterState__UFPCGContext____6B_
    ;
    this_00[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this_00[1].InputData.TaggedData.AllocatorInstance.Data + 2) = 0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    this_00[1].InputData.InactiveOutputPinBitmask = 0;
    this_00[1].OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].OutputData.TaggedData.ArrayNum = 0;
    this_00[1].OutputData.TaggedData.ArrayMax = 0;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 149afb810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
::CreateContext(TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
                *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x2a0);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x2a0);
    FPCGContext::FPCGContext(this_00);
    *(undefined2 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 1;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TPCGTimeSlicedContext_UFEmptyStruct_PCGTimeSlice__UIterationState_PCGApplyHierarchyElement__UFPCGContext____6B_
    ;
    this_00[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this_00[1].InputData.TaggedData.AllocatorInstance.Data + 2) = 0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    this_00[1].InputData.InactiveOutputPinBitmask = 0;
    this_00[1].OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].OutputData.TaggedData.ArrayNum = 0;
    this_00[1].OutputData.TaggedData.ArrayMax = 0;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 149afb8b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
::CreateContext(TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
                *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x2a0);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x2a0);
    FPCGContext::FPCGContext(this_00);
    *(undefined2 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 1;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TPCGTimeSlicedContext_UFEmptyStruct_PCGTimeSlice__UIterationState_PCGPointOperation__UFPCGContext____6B_
    ;
    this_00[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this_00[1].InputData.TaggedData.AllocatorInstance.Data + 2) = 0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    this_00[1].InputData.InactiveOutputPinBitmask = 0;
    this_00[1].OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].OutputData.TaggedData.ArrayNum = 0;
    this_00[1].OutputData.TaggedData.ArrayMax = 0;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 149afb950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
TPCGTimeSlicedElementBase<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
::CreateContext(TPCGTimeSlicedElementBase<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
                *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x2a0);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x2a0);
    FPCGContext::FPCGContext(this_00);
    *(undefined2 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 1;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TPCGTimeSlicedContext_UFExecState_PCGAttractElement__UFAttractState_2_UFPCGContext____6B_
    ;
    this_00[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this_00[1].InputData.TaggedData.AllocatorInstance.Data + 2) = 0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    this_00[1].InputData.InactiveOutputPinBitmask = 0;
    this_00[1].OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].OutputData.TaggedData.ArrayNum = 0;
    this_00[1].OutputData.TaggedData.ArrayMax = 0;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 149afb9f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
TPCGTimeSlicedElementBase<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
::CreateContext(TPCGTimeSlicedElementBase<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
                *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x2b8);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x2b8);
    FPCGContext::FPCGContext(this_00);
    *(undefined2 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 1;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TPCGTimeSlicedContext_UFExecState_PCGClusterElement__UFClusteringData_2_UFPCGContext____6B_
    ;
    this_00[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this_00[1].InputData.TaggedData.AllocatorInstance.Data + 2) = 0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.InactiveOutputPinBitmask = 0;
    this_00[1].OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].OutputData.TaggedData.ArrayNum = 0;
    this_00[1].OutputData.TaggedData.ArrayMax = 0;
    this_00[1].OutputData.bCancelExecutionOnEmpty = false;
    this_00[1].OutputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].OutputData.field_0x12 = 0;
    this_00[1].OutputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].OutputData.DataCrcs.ArrayNum = 0;
    this_00[1].OutputData.DataCrcs.ArrayMax = 0;
    *(undefined1 *)&this_00[1].InputData.DataCrcs.ArrayNum = 1;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// ExecuteSlice @ 149b11440

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
TPCGTimeSlicedElementBase<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
::ExecuteSlice(TPCGTimeSlicedElementBase<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
               *this,TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
                     *param_1,
              TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>_*,PCGCollapsePoints::FCollapsePointsSettings_const_&,PCGCollapsePoints::FCollapsePointsState_&,unsigned_int)>
              *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined1 local_res10 [16];
  uint local_res20 [2];
  TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
  *local_28 [2];
  
  param_1->ExecutionCount = param_1->ExecutionCount + 1;
  bVar3 = TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
          ::DataIsPreparedForExecution(param_1);
  if (((!bVar3) &&
      (local_res10[0] = bVar3,
      bVar3 = `TPCGTimeSlicedElementBase<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
              ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), !bVar3)) ||
     ((param_1->PerIterationStateArray).ArrayNum == 0)) {
    return true;
  }
  do {
    uVar1 = param_1->IterationIndex;
    uVar6 = 0;
    if ((int)uVar1 < (param_1->PerIterationStateArray).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_res20[0] = uVar1;
    local_28[0] = param_1;
    cVar5 = (**(code **)param_2)
                      (*(undefined8 *)&param_2->field_0x8,local_28,&param_1->PerExecutionStateData,
                       (param_1->PerIterationStateArray).AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 0x240,local_res20);
    if (cVar5 == '\0') {
      return false;
    }
    param_1->IterationIndex = param_1->IterationIndex + 1;
  } while ((param_1->IterationIndex < (param_1->PerIterationStateArray).ArrayNum) &&
          (bVar3 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_), !bVar3));
  return param_1->IterationIndex == (param_1->PerIterationStateArray).ArrayNum;
}

// ExecuteSlice @ 149b11580

bool __thiscall
TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>::ExecuteSlice
          (TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext> *this
          ,TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext> *param_1,
          TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>_*,PCGTimeSlice::FEmptyStruct_const_&,FPCGBlurIterState_&,unsigned_int)>
          *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined1 local_res10 [16];
  uint local_res20 [2];
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext> *local_28 [2];
  
  param_1->ExecutionCount = param_1->ExecutionCount + 1;
  bVar3 = TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>::
          DataIsPreparedForExecution(param_1);
  if (((!bVar3) &&
      (local_res10[0] = bVar3,
      bVar3 = `TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>::
              ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), !bVar3)) ||
     ((param_1->PerIterationStateArray).ArrayNum == 0)) {
    return true;
  }
  do {
    uVar1 = param_1->IterationIndex;
    uVar6 = 0;
    if ((int)uVar1 < (param_1->PerIterationStateArray).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_res20[0] = uVar1;
    local_28[0] = param_1;
    cVar5 = (**(code **)param_2)
                      (*(undefined8 *)&param_2->field_0x8,local_28,&param_1->PerExecutionStateData,
                       (param_1->PerIterationStateArray).AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 0x58,local_res20);
    if (cVar5 == '\0') {
      return false;
    }
    param_1->IterationIndex = param_1->IterationIndex + 1;
  } while ((param_1->IterationIndex < (param_1->PerIterationStateArray).ArrayNum) &&
          (bVar3 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_), !bVar3));
  return param_1->IterationIndex == (param_1->PerIterationStateArray).ArrayNum;
}

// ExecuteSlice @ 149b116c0

bool __thiscall
TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
::ExecuteSlice(TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
               *this,TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
                     *param_1,
              TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>_*,PCGTimeSlice::FEmptyStruct_const_&,PCGApplyHierarchyElement::IterationState_&,unsigned_int)>
              *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined1 local_res10 [16];
  uint local_res20 [2];
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
  *local_28 [2];
  
  param_1->ExecutionCount = param_1->ExecutionCount + 1;
  bVar3 = TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
          ::DataIsPreparedForExecution(param_1);
  if (((!bVar3) &&
      (local_res10[0] = bVar3,
      bVar3 = `TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
              ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), !bVar3)) ||
     ((param_1->PerIterationStateArray).ArrayNum == 0)) {
    return true;
  }
  do {
    uVar1 = param_1->IterationIndex;
    uVar6 = 0;
    if ((int)uVar1 < (param_1->PerIterationStateArray).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_res20[0] = uVar1;
    local_28[0] = param_1;
    cVar5 = (**(code **)param_2)
                      (*(undefined8 *)&param_2->field_0x8,local_28,&param_1->PerExecutionStateData,
                       (param_1->PerIterationStateArray).AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 0x128,local_res20);
    if (cVar5 == '\0') {
      return false;
    }
    param_1->IterationIndex = param_1->IterationIndex + 1;
  } while ((param_1->IterationIndex < (param_1->PerIterationStateArray).ArrayNum) &&
          (bVar3 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_), !bVar3));
  return param_1->IterationIndex == (param_1->PerIterationStateArray).ArrayNum;
}

// ExecuteSlice @ 149b11800

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
TPCGTimeSlicedElementBase<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
::ExecuteSlice(TPCGTimeSlicedElementBase<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
               *this,TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
                     *param_1,
              TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>_*,PCGAttractElement::FExecState_const_&,PCGAttractElement::FAttractState_&,unsigned_int)>
              *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined1 local_res10 [16];
  uint local_res20 [2];
  TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
  *local_28 [2];
  
  param_1->ExecutionCount = param_1->ExecutionCount + 1;
  bVar3 = TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
          ::DataIsPreparedForExecution(param_1);
  if (((!bVar3) &&
      (local_res10[0] = bVar3,
      bVar3 = `TPCGTimeSlicedElementBase<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
              ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), !bVar3)) ||
     ((param_1->PerIterationStateArray).ArrayNum == 0)) {
    return true;
  }
  do {
    uVar1 = param_1->IterationIndex;
    uVar6 = 0;
    if ((int)uVar1 < (param_1->PerIterationStateArray).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_res20[0] = uVar1;
    local_28[0] = param_1;
    cVar5 = (**(code **)param_2)
                      (*(undefined8 *)&param_2->field_0x8,local_28,&param_1->PerExecutionStateData,
                       (param_1->PerIterationStateArray).AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 0xa0,local_res20);
    if (cVar5 == '\0') {
      return false;
    }
    param_1->IterationIndex = param_1->IterationIndex + 1;
  } while ((param_1->IterationIndex < (param_1->PerIterationStateArray).ArrayNum) &&
          (bVar3 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_), !bVar3));
  return param_1->IterationIndex == (param_1->PerIterationStateArray).ArrayNum;
}

// ExecuteSlice @ 149b11940

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
TPCGTimeSlicedElementBase<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
::ExecuteSlice(TPCGTimeSlicedElementBase<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
               *this,TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
                     *param_1,
              TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>_*,PCGClusterElement::FExecState_const_&,PCGClusterElement::FClusteringData_&,unsigned_int)>
              *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined1 local_res10 [16];
  uint local_res20 [2];
  TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
  *local_28 [2];
  
  param_1->ExecutionCount = param_1->ExecutionCount + 1;
  bVar3 = TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
          ::DataIsPreparedForExecution(param_1);
  if (((!bVar3) &&
      (local_res10[0] = bVar3,
      bVar3 = `TPCGTimeSlicedElementBase<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
              ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), !bVar3)) ||
     ((param_1->PerIterationStateArray).ArrayNum == 0)) {
    return true;
  }
  do {
    uVar1 = param_1->IterationIndex;
    uVar6 = 0;
    if ((int)uVar1 < (param_1->PerIterationStateArray).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_res20[0] = uVar1;
    local_28[0] = param_1;
    cVar5 = (**(code **)param_2)
                      (*(undefined8 *)&param_2->field_0x8,local_28,&param_1->PerExecutionStateData,
                       (param_1->PerIterationStateArray).AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 0x3640,local_res20);
    if (cVar5 == '\0') {
      return false;
    }
    param_1->IterationIndex = param_1->IterationIndex + 1;
  } while ((param_1->IterationIndex < (param_1->PerIterationStateArray).ArrayNum) &&
          (bVar3 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_), !bVar3));
  return param_1->IterationIndex == (param_1->PerIterationStateArray).ArrayNum;
}

// CreateContext @ 149c041d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
::CreateContext(TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
                *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x2a0);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x2a0);
    FPCGContext::FPCGContext(this_00);
    *(undefined2 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 1;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TPCGTimeSlicedContext_UFEmptyStruct_PCGTimeSlice__UFIterationState_PCGSelfPruningElement__UFPCGContext____6B_
    ;
    this_00[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this_00[1].InputData.TaggedData.AllocatorInstance.Data + 2) = 0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    this_00[1].InputData.InactiveOutputPinBitmask = 0;
    this_00[1].OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].OutputData.TaggedData.ArrayNum = 0;
    this_00[1].OutputData.TaggedData.ArrayMax = 0;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 149c04270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
TPCGTimeSlicedElementBase<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
::CreateContext(TPCGTimeSlicedElementBase<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
                *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x2d8);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x2d8);
    FPCGContext::FPCGContext(this_00);
    *(undefined2 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 1;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TPCGTimeSlicedContext_UFExecutionState_PCGPathfindingElement__UFIterationState_2_UFPCGContext____6B_
    ;
    this_00[1].OutputData.bCancelExecutionOnEmpty = false;
    this_00[1].OutputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].OutputData.field_0x12 = 0x408f40000000;
    this_00[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this_00[1].InputData.TaggedData.AllocatorInstance.Data + 2) = 0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    this_00[1].InputData.InactiveOutputPinBitmask = 0;
    this_00[1].OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].OutputData.TaggedData.ArrayNum = 0;
    this_00[1].OutputData.InactiveOutputPinBitmask = 0;
    this_00[1].ExecutionSource.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this_00[1].ExecutionSource.InterfaceInstance = (IPCGGraphExecutionSource *)0x0;
    this_00[1].SourceComponent.WeakPtr = (FWeakObjectPtr)0x0;
    this_00[1].OutputData.DataCrcs.AllocatorInstance.Data =
         (FScriptContainerElement *)0x3ff0000000000000;
    *(undefined2 *)&this_00[1].OutputData.DataCrcs.ArrayNum = 1;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 149c04360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
TPCGTimeSlicedElementBase<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
::CreateContext(TPCGTimeSlicedElementBase<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
                *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x2a0);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x2a0);
    FPCGContext::FPCGContext(this_00);
    *(undefined2 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 1;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TPCGTimeSlicedContext_UFPCGMatchAndSetAttributesExecutionState__UFPCGMatchAndSetAttributesIterationState__UFPCGContext____6B_
    ;
    this_00[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this_00[1].InputData.TaggedData.AllocatorInstance.Data + 2) = 0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    this_00[1].InputData.InactiveOutputPinBitmask = 0;
    this_00[1].OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].OutputData.TaggedData.ArrayNum = 0;
    this_00[1].OutputData.TaggedData.ArrayMax = 0;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// ExecuteSlice @ 149c21100

bool __thiscall
TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
::ExecuteSlice(TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
               *this,TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
                     *param_1,
              TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>_*,PCGTimeSlice::FEmptyStruct_const_&,PCGSelfPruningElement::FIterationState_&,unsigned_int)>
              *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined1 local_res10 [16];
  uint local_res20 [2];
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
  *local_28 [2];
  
  param_1->ExecutionCount = param_1->ExecutionCount + 1;
  bVar3 = TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
          ::DataIsPreparedForExecution(param_1);
  if (((!bVar3) &&
      (local_res10[0] = bVar3,
      bVar3 = `TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
              ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), !bVar3)) ||
     ((param_1->PerIterationStateArray).ArrayNum == 0)) {
    return true;
  }
  do {
    uVar1 = param_1->IterationIndex;
    uVar6 = 0;
    if ((int)uVar1 < (param_1->PerIterationStateArray).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_res20[0] = uVar1;
    local_28[0] = param_1;
    cVar5 = (**(code **)param_2)
                      (*(undefined8 *)&param_2->field_0x8,local_28,&param_1->PerExecutionStateData,
                       (param_1->PerIterationStateArray).AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 0xe0,local_res20);
    if (cVar5 == '\0') {
      return false;
    }
    param_1->IterationIndex = param_1->IterationIndex + 1;
  } while ((param_1->IterationIndex < (param_1->PerIterationStateArray).ArrayNum) &&
          (bVar3 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_), !bVar3));
  return param_1->IterationIndex == (param_1->PerIterationStateArray).ArrayNum;
}

// ExecuteSlice @ 149c21240

bool __thiscall
TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
::ExecuteSlice(TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
               *this,TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
                     *param_1,
              TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>_*,PCGTimeSlice::FEmptyStruct_const_&,PCGPointOperation::IterationState_&,unsigned_int)>
              *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined1 local_res10 [16];
  uint local_res20 [2];
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
  *local_28 [2];
  
  param_1->ExecutionCount = param_1->ExecutionCount + 1;
  bVar3 = TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
          ::DataIsPreparedForExecution(param_1);
  if (((!bVar3) &&
      (local_res10[0] = bVar3,
      bVar3 = `TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
              ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), !bVar3)) ||
     ((param_1->PerIterationStateArray).ArrayNum == 0)) {
    return true;
  }
  do {
    uVar1 = param_1->IterationIndex;
    uVar6 = 0;
    if ((int)uVar1 < (param_1->PerIterationStateArray).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_res20[0] = uVar1;
    local_28[0] = param_1;
    cVar5 = (**(code **)param_2)
                      (*(undefined8 *)&param_2->field_0x8,local_28,&param_1->PerExecutionStateData,
                       (param_1->PerIterationStateArray).AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 0x28,local_res20);
    if (cVar5 == '\0') {
      return false;
    }
    param_1->IterationIndex = param_1->IterationIndex + 1;
  } while ((param_1->IterationIndex < (param_1->PerIterationStateArray).ArrayNum) &&
          (bVar3 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_), !bVar3));
  return param_1->IterationIndex == (param_1->PerIterationStateArray).ArrayNum;
}

// ExecuteSlice @ 149c21380

bool __thiscall
TPCGTimeSlicedElementBase<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
::ExecuteSlice(TPCGTimeSlicedElementBase<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
               *this,TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
                     *param_1,
              TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>_*,PCGPathfindingElement::FExecutionState_const_&,PCGPathfindingElement::FIterationState_&,unsigned_int)>
              *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined1 local_res10 [16];
  uint local_res20 [2];
  TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
  *local_28 [2];
  
  param_1->ExecutionCount = param_1->ExecutionCount + 1;
  bVar3 = TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
          ::DataIsPreparedForExecution(param_1);
  if (((!bVar3) &&
      (local_res10[0] = bVar3,
      bVar3 = `TPCGTimeSlicedElementBase<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
              ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), !bVar3)) ||
     ((param_1->PerIterationStateArray).ArrayNum == 0)) {
    return true;
  }
  do {
    uVar1 = param_1->IterationIndex;
    uVar6 = 0;
    if ((int)uVar1 < (param_1->PerIterationStateArray).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_res20[0] = uVar1;
    local_28[0] = param_1;
    cVar5 = (**(code **)param_2)
                      (*(undefined8 *)&param_2->field_0x8,local_28,&param_1->PerExecutionStateData,
                       (param_1->PerIterationStateArray).AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 0xa100,local_res20);
    if (cVar5 == '\0') {
      return false;
    }
    param_1->IterationIndex = param_1->IterationIndex + 1;
  } while ((param_1->IterationIndex < (param_1->PerIterationStateArray).ArrayNum) &&
          (bVar3 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_), !bVar3));
  return param_1->IterationIndex == (param_1->PerIterationStateArray).ArrayNum;
}

// ExecuteSlice @ 149c214c0

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
TPCGTimeSlicedElementBase<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
::ExecuteSlice(TPCGTimeSlicedElementBase<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
               *this,TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
                     *param_1,
              TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>_*,FPCGMatchAndSetAttributesExecutionState_const_&,FPCGMatchAndSetAttributesIterationState_&,unsigned_int)>
              *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined1 local_res10 [16];
  uint local_res20 [2];
  TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
  *local_28 [2];
  
  param_1->ExecutionCount = param_1->ExecutionCount + 1;
  bVar3 = TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
          ::DataIsPreparedForExecution(param_1);
  if (((!bVar3) &&
      (local_res10[0] = bVar3,
      bVar3 = `TPCGTimeSlicedElementBase<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
              ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), !bVar3)) ||
     ((param_1->PerIterationStateArray).ArrayNum == 0)) {
    return true;
  }
  do {
    uVar1 = param_1->IterationIndex;
    uVar6 = 0;
    if ((int)uVar1 < (param_1->PerIterationStateArray).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_res20[0] = uVar1;
    local_28[0] = param_1;
    cVar5 = (**(code **)param_2)
                      (*(undefined8 *)&param_2->field_0x8,local_28,&param_1->PerExecutionStateData,
                       (param_1->PerIterationStateArray).AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 0x28,local_res20);
    if (cVar5 == '\0') {
      return false;
    }
    param_1->IterationIndex = param_1->IterationIndex + 1;
  } while ((param_1->IterationIndex < (param_1->PerIterationStateArray).ArrayNum) &&
          (bVar3 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_), !bVar3));
  return param_1->IterationIndex == (param_1->PerIterationStateArray).ArrayNum;
}

// CreateContext @ 149c5f930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
TPCGTimeSlicedElementBase<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
::CreateContext(TPCGTimeSlicedElementBase<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
                *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x360);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x360);
    FPCGContext::FPCGContext(this_00);
    *(undefined2 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 1;
    this_00[1]._padding_ = 0;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TPCGTimeSlicedContext_UFExecutionState_FPCGWorldRaycast__UFIterationState_2_UFPCGContext____6B_
    ;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    *(undefined1 *)((longlong)&this_00[1].InputData.TaggedData.AllocatorInstance.Data + 2) = 0;
    FCollisionQueryParams::FCollisionQueryParams
              ((FCollisionQueryParams *)&this_00[1].InputData.DataCrcs);
    this_00[1].AsyncState.TasksChunksStartEnd.ArrayNum = 0;
    *(undefined1 *)&this_00[1].AsyncState.TasksChunksStartEnd.ArrayMax = 0;
    this_00[1].AsyncState.bStarted = false;
    *(undefined3 *)&this_00[1].AsyncState.field_0x29 = 0;
    this_00[1].AsyncState.InitialNumIterations = 0;
    this_00[1].AsyncState.CurrentChunkToCollapse = 0;
    this_00[1].AsyncState._padding_ = 0;
    *(undefined8 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap = 0;
    *(undefined8 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x8 = 0;
    *(undefined8 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x10 = 0;
    *(undefined8 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x18 = 0;
    this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x20 = 0;
    *(undefined4 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x21 = 0;
    *(undefined2 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x25 = 0;
    this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x27 = 0;
    *(undefined8 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x28 = 0;
    *(undefined8 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x30 = 0;
    *(undefined8 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x38 = 0;
    *(undefined8 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x40 = 0;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 149c5fa50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
TPCGTimeSlicedElementBase<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
::CreateContext(TPCGTimeSlicedElementBase<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
                *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x2d0);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x2d0);
    FPCGContext::FPCGContext(this_00);
    *(undefined1 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00->_padding_ =
         (longlong)
         &TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
          ::_vftable__for__FPCGContext__;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    this_00[1].InputData.InactiveOutputPinBitmask = 0;
    *(undefined1 *)((longlong)&this_00[1].OutputData.TaggedData.AllocatorInstance.Data + 2) = 0;
    this_00[1].OutputData.TaggedData.ArrayNum = 0;
    this_00[1].OutputData.TaggedData.ArrayMax = 0;
    this_00[1].OutputData.bCancelExecutionOnEmpty = false;
    this_00[1].OutputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].OutputData.field_0x12 = 0;
    this_00[1].OutputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].OutputData.DataCrcs.ArrayNum = 0;
    this_00[1].OutputData.DataCrcs.ArrayMax = 0;
    this_00[1].OutputData.InactiveOutputPinBitmask = 0;
    this_00[1].ExecutionSource.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this_00[1].ExecutionSource.InterfaceInstance = (IPCGGraphExecutionSource *)0x0;
    this_00[1]._padding_ =
         (longlong)
         &TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
          ::_vftable__for__IPCGAsyncLoadingContext__;
    *(undefined2 *)&this_00[1].OutputData.TaggedData.AllocatorInstance.Data = 1;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 149c5fb20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
TPCGTimeSlicedElementBase<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
::CreateContext(TPCGTimeSlicedElementBase<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
                *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x2e8);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x2e8);
    FPCGContext::FPCGContext(this_00);
    *(undefined2 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 1;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TPCGTimeSlicedContext_UFSurfaceSamplerExecutionState_PCGSurfaceSampler__UFSurfaceSamplerIterationState_2_UFPCGContext____6B_
    ;
    this_00[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this_00[1].InputData.TaggedData.AllocatorInstance.Data + 2) = 0;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    this_00[1].InputData.InactiveOutputPinBitmask = 0;
    this_00[1].OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].OutputData.TaggedData.ArrayNum = 0;
    this_00[1].OutputData.TaggedData.ArrayMax = 0;
    this_00[1].OutputData.bCancelExecutionOnEmpty = false;
    this_00[1].OutputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].OutputData.field_0x12 = 0;
    this_00[1].OutputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined1 *)&this_00[1].OutputData.DataCrcs.ArrayNum = 0;
    *(undefined4 *)((longlong)&this_00[1].OutputData.DataCrcs.ArrayNum + 1) = 0;
    *(undefined2 *)((longlong)&this_00[1].OutputData.DataCrcs.ArrayMax + 1) = 0;
    *(undefined1 *)((longlong)&this_00[1].OutputData.DataCrcs.ArrayMax + 3) = 0;
    this_00[1].OutputData.InactiveOutputPinBitmask = 0;
    this_00[1].ExecutionSource.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this_00[1].ExecutionSource.InterfaceInstance = (IPCGGraphExecutionSource *)0x0;
    this_00[1].SourceComponent.WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined8 *)&this_00[1].bInputDataModified = 0;
    this_00[1].AsyncState.EndTime = 0.0;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 149c5fc10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
TPCGTimeSlicedElementBase<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
::CreateContext(TPCGTimeSlicedElementBase<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
                *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x2e8);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x2e8);
    FPCGContext::FPCGContext(this_00);
    *(undefined2 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 1;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TPCGTimeSlicedContext_UFVolumeSamplerExecutionState_PCGVolumeSampler__UFVolumeSamplerIterationState_2_UFPCGContext____6B_
    ;
    this_00[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this_00[1].InputData.TaggedData.AllocatorInstance.Data + 2) = 0;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    this_00[1].InputData.InactiveOutputPinBitmask = 0;
    this_00[1].OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].OutputData.TaggedData.ArrayNum = 0;
    this_00[1].OutputData.TaggedData.ArrayMax = 0;
    this_00[1].OutputData.bCancelExecutionOnEmpty = false;
    this_00[1].OutputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].OutputData.field_0x12 = 0;
    this_00[1].OutputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined1 *)&this_00[1].OutputData.DataCrcs.ArrayNum = 0;
    *(undefined4 *)((longlong)&this_00[1].OutputData.DataCrcs.ArrayNum + 1) = 0;
    *(undefined2 *)((longlong)&this_00[1].OutputData.DataCrcs.ArrayMax + 1) = 0;
    *(undefined1 *)((longlong)&this_00[1].OutputData.DataCrcs.ArrayMax + 3) = 0;
    this_00[1].OutputData.InactiveOutputPinBitmask = 0;
    this_00[1].ExecutionSource.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this_00[1].ExecutionSource.InterfaceInstance = (IPCGGraphExecutionSource *)0x0;
    this_00[1].SourceComponent.WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined8 *)&this_00[1].bInputDataModified = 0;
    this_00[1].AsyncState.EndTime = 0.0;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// ExecuteSlice @ 149c755f0

bool __thiscall
TPCGTimeSlicedElementBase<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
::ExecuteSlice(TPCGTimeSlicedElementBase<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
               *this,TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
                     *param_1,
              TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>_*,FPCGWorldRaycast::FExecutionState_const_&,FPCGWorldRaycast::FIterationState_&,unsigned_int)>
              *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined1 local_res10 [16];
  uint local_res20 [2];
  TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
  *local_28 [2];
  
  param_1->ExecutionCount = param_1->ExecutionCount + 1;
  bVar3 = TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
          ::DataIsPreparedForExecution(param_1);
  if (((!bVar3) &&
      (local_res10[0] = bVar3,
      bVar3 = `TPCGTimeSlicedElementBase<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
              ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), !bVar3)) ||
     ((param_1->PerIterationStateArray).ArrayNum == 0)) {
    return true;
  }
  do {
    uVar1 = param_1->IterationIndex;
    uVar6 = 0;
    if ((int)uVar1 < (param_1->PerIterationStateArray).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_res20[0] = uVar1;
    local_28[0] = param_1;
    cVar5 = (**(code **)param_2)
                      (*(undefined8 *)&param_2->field_0x8,local_28,&param_1->PerExecutionStateData,
                       (param_1->PerIterationStateArray).AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 0x80,local_res20);
    if (cVar5 == '\0') {
      return false;
    }
    param_1->IterationIndex = param_1->IterationIndex + 1;
  } while ((param_1->IterationIndex < (param_1->PerIterationStateArray).ArrayNum) &&
          (bVar3 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_), !bVar3));
  return param_1->IterationIndex == (param_1->PerIterationStateArray).ArrayNum;
}

// ExecuteSlice @ 149c75730

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
TPCGTimeSlicedElementBase<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
::ExecuteSlice(TPCGTimeSlicedElementBase<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
               *this,TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
                     *param_1,
              TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>_*,FPCGSpawnSplineMeshPerExecutionState_const_&,FPCGSpawnSplineMeshPerIterationState_&,unsigned_int)>
              *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined1 local_res10 [16];
  uint local_res20 [2];
  TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
  *local_28 [2];
  
  param_1->ExecutionCount = param_1->ExecutionCount + 1;
  bVar3 = TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
          ::DataIsPreparedForExecution(param_1);
  if (((!bVar3) &&
      (local_res10[0] = bVar3,
      bVar3 = `TPCGTimeSlicedElementBase<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
              ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), !bVar3)) ||
     ((param_1->PerIterationStateArray).ArrayNum == 0)) {
    return true;
  }
  do {
    uVar1 = param_1->IterationIndex;
    uVar6 = 0;
    if ((int)uVar1 < (param_1->PerIterationStateArray).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_res20[0] = uVar1;
    local_28[0] = param_1;
    cVar5 = (**(code **)param_2)
                      (*(undefined8 *)&param_2->field_0x8,local_28,&param_1->PerExecutionStateData,
                       (param_1->PerIterationStateArray).AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 0x3d0,local_res20);
    if (cVar5 == '\0') {
      return false;
    }
    param_1->IterationIndex = param_1->IterationIndex + 1;
  } while ((param_1->IterationIndex < (param_1->PerIterationStateArray).ArrayNum) &&
          (bVar3 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_), !bVar3));
  return param_1->IterationIndex == (param_1->PerIterationStateArray).ArrayNum;
}

// ExecuteSlice @ 149c75870

bool __thiscall
TPCGTimeSlicedElementBase<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
::ExecuteSlice(TPCGTimeSlicedElementBase<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
               *this,TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
                     *param_1,
              TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>_*,PCGSurfaceSampler::FSurfaceSamplerExecutionState_const_&,PCGSurfaceSampler::FSurfaceSamplerIterationState_&,unsigned_int)>
              *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined1 local_res10 [16];
  uint local_res20 [2];
  TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
  *local_28 [2];
  
  param_1->ExecutionCount = param_1->ExecutionCount + 1;
  bVar3 = TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
          ::DataIsPreparedForExecution(param_1);
  if (((!bVar3) &&
      (local_res10[0] = bVar3,
      bVar3 = `TPCGTimeSlicedElementBase<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
              ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), !bVar3)) ||
     ((param_1->PerIterationStateArray).ArrayNum == 0)) {
    return true;
  }
  do {
    uVar1 = param_1->IterationIndex;
    uVar6 = 0;
    if ((int)uVar1 < (param_1->PerIterationStateArray).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_res20[0] = uVar1;
    local_28[0] = param_1;
    cVar5 = (**(code **)param_2)
                      (*(undefined8 *)&param_2->field_0x8,local_28,&param_1->PerExecutionStateData,
                       (param_1->PerIterationStateArray).AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 0x150,local_res20);
    if (cVar5 == '\0') {
      return false;
    }
    param_1->IterationIndex = param_1->IterationIndex + 1;
  } while ((param_1->IterationIndex < (param_1->PerIterationStateArray).ArrayNum) &&
          (bVar3 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_), !bVar3));
  return param_1->IterationIndex == (param_1->PerIterationStateArray).ArrayNum;
}

// ExecuteSlice @ 149c759b0

bool __thiscall
TPCGTimeSlicedElementBase<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
::ExecuteSlice(TPCGTimeSlicedElementBase<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
               *this,TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
                     *param_1,
              TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>_*,PCGVolumeSampler::FVolumeSamplerExecutionState_const_&,PCGVolumeSampler::FVolumeSamplerIterationState_&,unsigned_int)>
              *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined1 local_res10 [16];
  uint local_res20 [2];
  TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
  *local_28 [2];
  
  param_1->ExecutionCount = param_1->ExecutionCount + 1;
  bVar3 = TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
          ::DataIsPreparedForExecution(param_1);
  if (((!bVar3) &&
      (local_res10[0] = bVar3,
      bVar3 = `TPCGTimeSlicedElementBase<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
              ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), !bVar3)) ||
     ((param_1->PerIterationStateArray).ArrayNum == 0)) {
    return true;
  }
  do {
    uVar1 = param_1->IterationIndex;
    uVar6 = 0;
    if ((int)uVar1 < (param_1->PerIterationStateArray).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_res20[0] = uVar1;
    local_28[0] = param_1;
    cVar5 = (**(code **)param_2)
                      (*(undefined8 *)&param_2->field_0x8,local_28,&param_1->PerExecutionStateData,
                       (param_1->PerIterationStateArray).AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 0x70,local_res20);
    if (cVar5 == '\0') {
      return false;
    }
    param_1->IterationIndex = param_1->IterationIndex + 1;
  } while ((param_1->IterationIndex < (param_1->PerIterationStateArray).ArrayNum) &&
          (bVar3 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_), !bVar3));
  return param_1->IterationIndex == (param_1->PerIterationStateArray).ArrayNum;
}

// operator() @ 1505468b0

bool __thiscall
`TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>::
ExecuteSlice'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3186822616455315219>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3186822616455315219>,
                       &`public:___cdecl_`public:_bool___cdecl_TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>::ExecuteSlice(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>*___ptr64,TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGMetadataOps::FOperationData,FPCGContext>*___ptr64,PCGTimeSlice::FEmptyStruct_const&___ptr64,PCGMetadataOps::FOperationData&___ptr64,unsigned_int)>)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150546cb0

bool __thiscall
`TPCGTimeSlicedElementBase<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>
::ExecuteSlice'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3186822616455315219>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3186822616455315219>,
                       &`public:___cdecl_`public:_bool___cdecl_TPCGTimeSlicedElementBase<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>::ExecuteSlice(TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>*___ptr64,TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGCollapsePoints::FCollapsePointsSettings,PCGCollapsePoints::FCollapsePointsState,FPCGContext>*___ptr64,PCGCollapsePoints::FCollapsePointsSettings_const&___ptr64,PCGCollapsePoints::FCollapsePointsState&___ptr64,unsigned_int)>)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150546cf0

bool __thiscall
`TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>::ExecuteSlice'
::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3186822616455315219>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3186822616455315219>,
                       &`public:___cdecl_`public:_bool___cdecl_TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>::ExecuteSlice(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>*___ptr64,TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,FPCGBlurIterState,FPCGContext>*___ptr64,PCGTimeSlice::FEmptyStruct_const&___ptr64,FPCGBlurIterState&___ptr64,unsigned_int)>)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150546d30

bool __thiscall
`TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
::ExecuteSlice'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3186822616455315219>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3186822616455315219>,
                       &`public:___cdecl_`public:_bool___cdecl_TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>::ExecuteSlice(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>*___ptr64,TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>*___ptr64,PCGTimeSlice::FEmptyStruct_const&___ptr64,PCGApplyHierarchyElement::IterationState&___ptr64,unsigned_int)>)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150546d70

bool __thiscall
`TPCGTimeSlicedElementBase<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>
::ExecuteSlice'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3186822616455315219>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3186822616455315219>,
                       &`public:___cdecl_`public:_bool___cdecl_TPCGTimeSlicedElementBase<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>::ExecuteSlice(TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>*___ptr64,TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGAttractElement::FExecState,PCGAttractElement::FAttractState,FPCGContext>*___ptr64,PCGAttractElement::FExecState_const&___ptr64,PCGAttractElement::FAttractState&___ptr64,unsigned_int)>)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150546db0

bool __thiscall
`TPCGTimeSlicedElementBase<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>
::ExecuteSlice'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3186822616455315219>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3186822616455315219>,
                       &`public:___cdecl_`public:_bool___cdecl_TPCGTimeSlicedElementBase<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>::ExecuteSlice(TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>*___ptr64,TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGClusterElement::FExecState,PCGClusterElement::FClusteringData,FPCGContext>*___ptr64,PCGClusterElement::FExecState_const&___ptr64,PCGClusterElement::FClusteringData&___ptr64,unsigned_int)>)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150547470

bool __thiscall
`TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
::ExecuteSlice'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3186822616455315219>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3186822616455315219>,
                       &`public:___cdecl_`public:_bool___cdecl_TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>::ExecuteSlice(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>*___ptr64,TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>*___ptr64,PCGTimeSlice::FEmptyStruct_const&___ptr64,PCGSelfPruningElement::FIterationState&___ptr64,unsigned_int)>)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505474b0

bool __thiscall
`TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
::ExecuteSlice'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3186822616455315219>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3186822616455315219>,
                       &`public:___cdecl_`public:_bool___cdecl_TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>::ExecuteSlice(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>*___ptr64,TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>*___ptr64,PCGTimeSlice::FEmptyStruct_const&___ptr64,PCGPointOperation::IterationState&___ptr64,unsigned_int)>)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505474f0

bool __thiscall
`TPCGTimeSlicedElementBase<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>
::ExecuteSlice'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3186822616455315219>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3186822616455315219>,
                       &`public:___cdecl_`public:_bool___cdecl_TPCGTimeSlicedElementBase<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>::ExecuteSlice(TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>*___ptr64,TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGPathfindingElement::FExecutionState,PCGPathfindingElement::FIterationState,FPCGContext>*___ptr64,PCGPathfindingElement::FExecutionState_const&___ptr64,PCGPathfindingElement::FIterationState&___ptr64,unsigned_int)>)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150547530

bool __thiscall
`TPCGTimeSlicedElementBase<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
::ExecuteSlice'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3186822616455315219>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3186822616455315219>,
                       &`public:___cdecl_`public:_bool___cdecl_TPCGTimeSlicedElementBase<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>::ExecuteSlice(TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>*___ptr64,TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>*___ptr64,FPCGMatchAndSetAttributesExecutionState_const&___ptr64,FPCGMatchAndSetAttributesIterationState&___ptr64,unsigned_int)>)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150547ab0

bool __thiscall
`TPCGTimeSlicedElementBase<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
::ExecuteSlice'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3186822616455315219>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3186822616455315219>,
                       &`public:___cdecl_`public:_bool___cdecl_TPCGTimeSlicedElementBase<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>::ExecuteSlice(TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>*___ptr64,TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>*___ptr64,FPCGWorldRaycast::FExecutionState_const&___ptr64,FPCGWorldRaycast::FIterationState&___ptr64,unsigned_int)>)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150547af0

bool __thiscall
`TPCGTimeSlicedElementBase<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
::ExecuteSlice'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3186822616455315219>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3186822616455315219>,
                       &`public:___cdecl_`public:_bool___cdecl_TPCGTimeSlicedElementBase<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>::ExecuteSlice(TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>*___ptr64,TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>*___ptr64,FPCGSpawnSplineMeshPerExecutionState_const&___ptr64,FPCGSpawnSplineMeshPerIterationState&___ptr64,unsigned_int)>)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150547b30

bool __thiscall
`TPCGTimeSlicedElementBase<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
::ExecuteSlice'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3186822616455315219>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3186822616455315219>,
                       &`public:___cdecl_`public:_bool___cdecl_TPCGTimeSlicedElementBase<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>::ExecuteSlice(TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>*___ptr64,TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>*___ptr64,PCGSurfaceSampler::FSurfaceSamplerExecutionState_const&___ptr64,PCGSurfaceSampler::FSurfaceSamplerIterationState&___ptr64,unsigned_int)>)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150547b70

bool __thiscall
`TPCGTimeSlicedElementBase<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
::ExecuteSlice'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3186822616455315219>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3186822616455315219>,
                       &`public:___cdecl_`public:_bool___cdecl_TPCGTimeSlicedElementBase<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>::ExecuteSlice(TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>*___ptr64,TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>*___ptr64,PCGVolumeSampler::FVolumeSamplerExecutionState_const&___ptr64,PCGVolumeSampler::FVolumeSamplerIterationState&___ptr64,unsigned_int)>)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

