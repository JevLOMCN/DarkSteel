// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 5

// operator= @ 14d4b4320

FStateTreeTransitionResult * __thiscall
FStateTreeTransitionResult::operator=
          (FStateTreeTransitionResult *this,FStateTreeTransitionResult *param_1)

{
  TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FStateTreeFrameStateSelectionEvents,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FStateTreeExecutionFrame *pFVar5;
  FScriptContainerElement *pFVar6;
  UStateTree *pUVar7;
  
  (this->SourceFrameID).Value = (param_1->SourceFrameID).Value;
  (this->SourceStateID).Value = (param_1->SourceStateID).Value;
  (this->TargetState).Index = (param_1->TargetState).Index;
  (this->CurrentState).Index = (param_1->CurrentState).Index;
  this->CurrentRunStatus = param_1->CurrentRunStatus;
  pTVar1 = &this->NextActiveFrames;
  this->ChangeType = param_1->ChangeType;
  this->Priority = param_1->Priority;
  if (pTVar1 != &param_1->NextActiveFrames) {
    DestructItems<FStateTreeExecutionFrame,int>
              ((FStateTreeExecutionFrame *)(pTVar1->AllocatorInstance).Data,
               (this->NextActiveFrames).ArrayNum);
    iVar4 = (param_1->NextActiveFrames).ArrayNum;
    piVar2 = &(this->NextActiveFrames).ArrayMax;
    pFVar5 = (FStateTreeExecutionFrame *)(param_1->NextActiveFrames).AllocatorInstance.Data;
    (this->NextActiveFrames).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      ConstructItems<FStateTreeExecutionFrame,FStateTreeExecutionFrame,int>
                ((pTVar1->AllocatorInstance).Data,pFVar5,iVar4);
    }
  }
  pTVar3 = &this->NextActiveFrameEvents;
  if (pTVar3 != &param_1->NextActiveFrameEvents) {
    DestructItems<FStateTreeFrameStateSelectionEvents,int>
              ((FStateTreeFrameStateSelectionEvents *)(pTVar3->AllocatorInstance).Data,
               (this->NextActiveFrameEvents).ArrayNum);
    iVar4 = (param_1->NextActiveFrameEvents).ArrayNum;
    piVar2 = &(this->NextActiveFrameEvents).ArrayMax;
    pFVar6 = (param_1->NextActiveFrameEvents).AllocatorInstance.Data;
    (this->NextActiveFrameEvents).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,8,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
      ConstructItems<FStateTreeFrameStateSelectionEvents,FStateTreeFrameStateSelectionEvents,int>
                ((pTVar3->AllocatorInstance).Data,(FStateTreeFrameStateSelectionEvents *)pFVar6,
                 iVar4);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 = (param_1->SourceStateTree).field0_0x0.DebugPtr, pUVar7 != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->SourceStateTree).field0_0x0 = (param_1->SourceStateTree).field0_0x0;
  (this->SourceRootState).Index = (param_1->SourceRootState).Index;
  (this->SourceState).Index = (param_1->SourceState).Index;
  return this;
}

// StaticStruct @ 14d4d8dd0

UScriptStruct * __cdecl FStateTreeTransitionResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeTransitionResult.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeTransitionResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTransitionResult,(UObject *)pUVar1,
                         L"StateTreeTransitionResult");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeTransitionResult.OuterSingleton;
}

// FStateTreeTransitionResult @ 14d4ebfc0

FStateTreeTransitionResult * __thiscall
FStateTreeTransitionResult::FStateTreeTransitionResult
          (FStateTreeTransitionResult *this,FStateTreeTransitionResult *param_1)

{
  TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FStateTreeFrameStateSelectionEvents,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FStateTreeExecutionFrame *pFVar5;
  FScriptContainerElement *pFVar6;
  UStateTree *pUVar7;
  
  pTVar1 = &this->NextActiveFrames;
  (this->SourceFrameID).Value = (param_1->SourceFrameID).Value;
  (this->SourceStateID).Value = (param_1->SourceStateID).Value;
  (this->TargetState).Index = (param_1->TargetState).Index;
  (this->CurrentState).Index = (param_1->CurrentState).Index;
  this->CurrentRunStatus = param_1->CurrentRunStatus;
  this->ChangeType = param_1->ChangeType;
  this->Priority = param_1->Priority;
  piVar2 = &(this->NextActiveFrames).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->NextActiveFrames).ArrayNum;
  pFVar5 = (FStateTreeExecutionFrame *)(param_1->NextActiveFrames).AllocatorInstance.Data;
  (this->NextActiveFrames).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FStateTreeExecutionFrame,FStateTreeExecutionFrame,int>
              ((pTVar1->AllocatorInstance).Data,pFVar5,iVar4);
  }
  pTVar3 = &this->NextActiveFrameEvents;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->NextActiveFrameEvents).ArrayMax;
  iVar4 = (param_1->NextActiveFrameEvents).ArrayNum;
  pFVar6 = (param_1->NextActiveFrameEvents).AllocatorInstance.Data;
  (this->NextActiveFrameEvents).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FStateTreeFrameStateSelectionEvents,FStateTreeFrameStateSelectionEvents,int>
              ((pTVar3->AllocatorInstance).Data,(FStateTreeFrameStateSelectionEvents *)pFVar6,iVar4)
    ;
  }
  pUVar7 = (param_1->SourceStateTree).field0_0x0.DebugPtr;
  (this->SourceStateTree).field0_0x0.DebugPtr = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->SourceRootState).Index = (param_1->SourceRootState).Index;
  (this->SourceState).Index = (param_1->SourceState).Index;
  return this;
}

// FStateTreeTransitionResult @ 14d4ec100

FStateTreeTransitionResult * __thiscall
FStateTreeTransitionResult::FStateTreeTransitionResult
          (FStateTreeTransitionResult *this,FRecordedStateTreeTransitionResult *param_1)

{
  this->SourceFrameID = 0;
  this->SourceStateID = 0;
  (this->TargetState).Index = FStateTreeStateHandle::Invalid.Index;
  (this->CurrentState).Index = FStateTreeStateHandle::Invalid.Index;
  (this->NextActiveFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NextActiveFrames).ArrayNum = 0;
  (this->NextActiveFrames).ArrayMax = 0;
  (this->NextActiveFrameEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NextActiveFrameEvents).ArrayNum = 0;
  (this->NextActiveFrameEvents).ArrayMax = 0;
  (this->SourceStateTree).field0_0x0.DebugPtr = (UStateTree *)0x0;
  this->CurrentRunStatus = Unset;
  this->ChangeType = Changed;
  this->Priority = None;
  (this->SourceRootState).Index = FStateTreeStateHandle::Invalid.Index;
  (this->SourceState).Index = FStateTreeStateHandle::Invalid.Index;
  return this;
}

// ~FStateTreeTransitionResult @ 14d4eca20

void __thiscall
FStateTreeTransitionResult::~FStateTreeTransitionResult(FStateTreeTransitionResult *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FStateTreeFrameStateSelectionEvents,int>
            ((FStateTreeFrameStateSelectionEvents *)
             (this->NextActiveFrameEvents).AllocatorInstance.Data,
             (this->NextActiveFrameEvents).ArrayNum);
  pFVar1 = (this->NextActiveFrameEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FStateTreeExecutionFrame,int>
            ((FStateTreeExecutionFrame *)(this->NextActiveFrames).AllocatorInstance.Data,
             (this->NextActiveFrames).ArrayNum);
  pFVar1 = (this->NextActiveFrames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

