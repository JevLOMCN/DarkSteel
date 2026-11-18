// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 14

// CreateContext @ 1499dad10

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
IPCGElementWithCustomContext<FPCGLoadDataAssetContext,void>::CreateContext
          (IPCGElementWithCustomContext<FPCGLoadDataAssetContext,void> *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x2c0);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x2c0);
    FPCGContext::FPCGContext(this_00);
    *(undefined1 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00->_padding_ = (longlong)&FPCGLoadDataAssetContext::_vftable__for__FPCGContext__;
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
    *(undefined2 *)&this_00[1].OutputData.InactiveOutputPinBitmask = 0;
    this_00[1]._padding_ =
         (longlong)&FPCGLoadDataAssetContext::_vftable__for__IPCGAsyncLoadingContext__;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 1499dadd0

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
IPCGElementWithCustomContext<FPCGWaitContext,void>::CreateContext
          (IPCGElementWithCustomContext<FPCGWaitContext,void> *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x278);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x278);
    FPCGContext::FPCGContext(this_00);
    this_00[1].InputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00->_padding_ = (longlong)&___7FPCGWaitContext__6B_;
    this_00[1]._padding_ = -0x4010000000000000;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 1499dae50

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
IPCGElementWithCustomContext<FPCGWaitLandscapeReadyElementContext,void>::CreateContext
          (IPCGElementWithCustomContext<FPCGWaitLandscapeReadyElementContext,void> *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x270);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x270);
    FPCGContext::FPCGContext(this_00);
    *(undefined2 *)&this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7FPCGWaitLandscapeReadyElementContext__6B_;
    this_00[1].InputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 149afb360

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
IPCGElementWithCustomContext<FPCGAddComponentContext,void>::CreateContext
          (IPCGElementWithCustomContext<FPCGAddComponentContext,void> *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x260);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x260);
    FPCGContext::FPCGContext(this_00);
    *(undefined4 *)&this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7FPCGAddComponentContext__6B_;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 149afb3c0

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
IPCGElementWithCustomContext<FPCGAttributeNoiseContext,void>::CreateContext
          (IPCGElementWithCustomContext<FPCGAttributeNoiseContext,void> *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x350);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x350);
    FPCGContext::FPCGContext(this_00);
    this_00->_padding_ = (longlong)&___7FPCGAttributeNoiseContext__6B_;
    *(undefined4 *)&this_00[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this_00[1]._padding_ + 4) = 0;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this_00[1].InputData);
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this_00[1].OutputData.bCancelExecutionOnEmpty)
    ;
    FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
              ((FPCGAttributePropertyOutputSelector *)&this_00[1].AsyncState);
    *(undefined8 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x8 = 0;
    *(undefined8 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x10 = 0;
    *(undefined8 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x18 = 0;
    *(undefined8 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x20 = 0;
    *(undefined8 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x28 = 0;
    *(undefined8 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x30 = 0;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 149afb490

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
IPCGElementWithCustomContext<FPCGBoundsFromMeshContext,void>::CreateContext
          (IPCGElementWithCustomContext<FPCGBoundsFromMeshContext,void> *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x328);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x328);
    FPCGContext::FPCGContext(this_00);
    *(undefined1 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 0;
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
    *(undefined8 *)&this_00[1].bInputDataModified = 0;
    this_00->_padding_ = (longlong)&FPCGBoundsFromMeshContext::_vftable__for__FPCGContext__;
    this_00[1]._padding_ =
         (longlong)&FPCGBoundsFromMeshContext::_vftable__for__IPCGAsyncLoadingContext__;
    *(undefined4 *)&this_00[1].AsyncState.EndTime = 0;
    *(undefined4 *)((longlong)&this_00[1].AsyncState.EndTime + 4) = 0x80;
    this_00[1].AsyncState.AsyncCurrentReadIndex = 0;
    this_00[1].AsyncState.NumAvailableTasks = -1;
    this_00[1].AsyncState.TasksChunksStartEnd.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this_00[1].AsyncState.TasksChunksStartEnd.ArrayNum = 0;
    this_00[1].AsyncState.bStarted = false;
    *(undefined3 *)&this_00[1].AsyncState.field_0x29 = 0;
    this_00[1].AsyncState.InitialNumIterations = 0;
    this_00[1].AsyncState.CurrentChunkToCollapse = 0;
    this_00[1].AsyncState._padding_ = 0;
    *(undefined2 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap = 0;
    *(undefined8 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x4 = 0;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 149afb5a0

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
IPCGElementWithCustomContext<FPCGCollapseContext,void>::CreateContext
          (IPCGElementWithCustomContext<FPCGCollapseContext,void> *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x260);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x260);
    FPCGContext::FPCGContext(this_00);
    *(undefined1 *)&this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7FPCGCollapseContext__6B_;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 149afb600

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
IPCGElementWithCustomContext<FPCGLoadObjectsFromPathContext,void>::CreateContext
          (IPCGElementWithCustomContext<FPCGLoadObjectsFromPathContext,void> *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x298);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x298);
    FPCGContext::FPCGContext(this_00);
    *(undefined1 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00->_padding_ = (longlong)&FPCGLoadObjectsFromPathContext::_vftable__for__FPCGContext__;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    this_00[1].InputData.InactiveOutputPinBitmask = 0;
    this_00[1].OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1]._padding_ =
         (longlong)&FPCGLoadObjectsFromPathContext::_vftable__for__IPCGAsyncLoadingContext__;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 149b69be0

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
IPCGElementWithCustomContext<FPCGCreateCollisionContext,void>::CreateContext
          (IPCGElementWithCustomContext<FPCGCreateCollisionContext,void> *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x298);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x298);
    FPCGContext::FPCGContext(this_00);
    *(undefined1 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00->_padding_ = (longlong)&FPCGCreateCollisionContext::_vftable__for__FPCGContext__;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    this_00[1].InputData.InactiveOutputPinBitmask = 0;
    this_00[1].OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1]._padding_ =
         (longlong)&FPCGCreateCollisionContext::_vftable__for__IPCGAsyncLoadingContext__;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 149b69c70

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
IPCGElementWithCustomContext<FPCGDataFromActorContext,void>::CreateContext
          (IPCGElementWithCustomContext<FPCGDataFromActorContext,void> *this)

{
  FPCGLoadObjectsFromPathContext *this_00;
  
  this_00 = ::operator_new(0x2f8);
  if (this_00 != (FPCGLoadObjectsFromPathContext *)0x0) {
    memset(this_00,0,0x2f8);
    FPCGLoadObjectsFromPathContext::FPCGLoadObjectsFromPathContext(this_00);
    this_00->_padding_ = (longlong)&FPCGDataFromActorContext::_vftable__for__FPCGContext__;
    this_00->_padding_ =
         (longlong)&FPCGDataFromActorContext::_vftable__for__IPCGAsyncLoadingContext__;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *(undefined1 *)&this_00[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this_00[1]._padding_ + 4) = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *(undefined2 *)&this_00[1]._padding_ = 0;
    *(undefined2 *)&this_00[1]._padding_ = 0;
    *(undefined2 *)&this_00[1]._padding_ = 0x101;
    return (FPCGContext *)this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 149b69d30

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
IPCGElementWithCustomContext<FPCGDataTableRowToParamDataContext,void>::CreateContext
          (IPCGElementWithCustomContext<FPCGDataTableRowToParamDataContext,void> *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x288);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x288);
    FPCGContext::FPCGContext(this_00);
    *(undefined1 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    this_00->_padding_ = (longlong)&FPCGDataTableRowToParamDataContext::_vftable__for__FPCGContext__
    ;
    this_00[1]._padding_ =
         (longlong)&FPCGDataTableRowToParamDataContext::_vftable__for__IPCGAsyncLoadingContext__;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 149c03ff0

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
IPCGElementWithCustomContext<FPCGPointFromMeshContext,void>::CreateContext
          (IPCGElementWithCustomContext<FPCGPointFromMeshContext,void> *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x288);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x288);
    FPCGContext::FPCGContext(this_00);
    *(undefined1 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    this_00->_padding_ = (longlong)&FPCGPointFromMeshContext::_vftable__for__FPCGContext__;
    this_00[1]._padding_ =
         (longlong)&FPCGPointFromMeshContext::_vftable__for__IPCGAsyncLoadingContext__;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 149c04080

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
IPCGElementWithCustomContext<FPCGSaveTextureToAssetContext,void>::CreateContext
          (IPCGElementWithCustomContext<FPCGSaveTextureToAssetContext,void> *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x280);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x280);
    FPCGContext::FPCGContext(this_00);
    this_00[1].InputData.bCancelExecutionOnEmpty = true;
    this_00[1].InputData.bCancelExecution = true;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0xffffffffffff;
    this_00->_padding_ = (longlong)&___7FPCGSaveTextureToAssetContext__6B_;
    this_00[1]._padding_ = 0;
    this_00[1].InputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    *(undefined2 *)&this_00[1].InputData.DataCrcs.AllocatorInstance.Data = 0;
    *(undefined1 *)((longlong)&this_00[1].InputData.DataCrcs.AllocatorInstance.Data + 2) = 0;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// CreateContext @ 149c04100

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
IPCGElementWithCustomContext<FPCGSceneCaptureContext,void>::CreateContext
          (IPCGElementWithCustomContext<FPCGSceneCaptureContext,void> *this)

{
  double dVar1;
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x2e0);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x2e0);
    FPCGContext::FPCGContext(this_00);
    this_00->_padding_ = (longlong)&___7FPCGSceneCaptureContext__6B_;
    this_00[1]._padding_ = 0;
    this_00[1].InputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(double (*) [2])&this_00[1].InputData.bCancelExecutionOnEmpty =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *(double (*) [2])&this_00[1].InputData.DataCrcs.ArrayNum =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    this_00[1].OutputData.TaggedData =
         (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>)
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *(double (*) [2])&this_00[1].OutputData.bCancelExecutionOnEmpty =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *(double (*) [2])&this_00[1].OutputData.DataCrcs.ArrayNum =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    this_00[1].ExecutionSource.ObjectInstance =
         (TWeakObjectPtr<UObject,FWeakObjectPtr>)
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    this_00[1].ExecutionSource.InterfaceInstance = (IPCGGraphExecutionSource *)dVar1;
    *(undefined1 *)&this_00[1].SourceComponent.WeakPtr.ObjectIndex = 0;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

