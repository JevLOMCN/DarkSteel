// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// FCurrentlyProcessedFrameScope @ 14d4e9b90

FCurrentlyProcessedFrameScope * __thiscall
FStateTreeExecutionContext::FCurrentlyProcessedFrameScope::FCurrentlyProcessedFrameScope
          (FCurrentlyProcessedFrameScope *this,FStateTreeExecutionContext *param_1,
          FStateTreeExecutionFrame *param_2,FStateTreeExecutionFrame *param_3)

{
  FStateTreeInstanceStorage *pFVar1;
  FStateTreeExecutionContext *pFVar2;
  TNotNull<FStateTreeReadOnlyExecutionContext_const_*> TVar3;
  code *pcVar4;
  bool bVar5;
  FCurrentlyProcessedFrameScope *pFVar6;
  TSharedPtr<FStateTreeInstanceData,1> *pTVar7;
  TSharedPtr<FStateTreeInstanceData,1> local_18;
  
  this->Context = param_1;
  this->SavedFrameIndex = 0;
  this->SavedSharedInstanceDataStorage = (FStateTreeInstanceStorage *)0x0;
  this->SavedFrame = (FStateTreeExecutionFrame *)0x0;
  this->SavedParentFrame = (FStateTreeExecutionFrame *)0x0;
  if ((param_3->StateTree).field0_0x0.DebugPtr == (UStateTree *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentFrame.StateTree",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionContext.cpp"
                       ,0x3d9,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FCurrentlyProcessedFrameScope *)(*pcVar4)();
      return pFVar6;
    }
  }
  pTVar7 = UStateTree::GetSharedInstanceData((param_3->StateTree).field0_0x0.DebugPtr,&local_18);
  if (pTVar7->Object == (FStateTreeInstanceData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FCurrentlyProcessedFrameScope *)(*pcVar4)();
      return pFVar6;
    }
  }
  pFVar1 = (pTVar7->Object->InstanceStorage).Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  pFVar2 = this->Context;
  this->SavedFrame = pFVar2->CurrentlyProcessedFrame;
  this->SavedParentFrame = pFVar2->CurrentlyProcessedParentFrame;
  this->SavedSharedInstanceDataStorage = pFVar2->CurrentlyProcessedSharedInstanceStorage;
  pFVar2->CurrentlyProcessedFrame = param_3;
  this->Context->CurrentlyProcessedParentFrame = param_2;
  this->Context->CurrentlyProcessedSharedInstanceStorage = pFVar1;
  TVar3.Val = (FStateTreeReadOnlyExecutionContext *)this->Context;
  if (TVar3.Val != (FStateTreeReadOnlyExecutionContext *)0x0) {
    UE::StateTreeTrace::OutputInstanceFrameEvent
              (TVar3,(FStateTreeExecutionFrame *)
                     TVar3.Val[4].NodeCustomDebugTraceData.TraceDebuggerString.Data.
                     AllocatorInstance.Data);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ~FCurrentlyProcessedFrameScope @ 14d4ec420

void __thiscall
FStateTreeExecutionContext::FCurrentlyProcessedFrameScope::~FCurrentlyProcessedFrameScope
          (FCurrentlyProcessedFrameScope *this)

{
  TNotNull<FStateTreeReadOnlyExecutionContext_const_*> TVar1;
  FStateTreeExecutionFrame *pFVar2;
  
  this->Context->CurrentlyProcessedFrame = this->SavedFrame;
  this->Context->CurrentlyProcessedParentFrame = this->SavedParentFrame;
  this->Context->CurrentlyProcessedSharedInstanceStorage = this->SavedSharedInstanceDataStorage;
  TVar1.Val = (FStateTreeReadOnlyExecutionContext *)this->Context;
  pFVar2 = (FStateTreeExecutionFrame *)
           TVar1.Val[4].NodeCustomDebugTraceData.TraceDebuggerString.Data.AllocatorInstance.Data;
  if (pFVar2 == (FStateTreeExecutionFrame *)0x0) {
    return;
  }
  if (TVar1.Val != (FStateTreeReadOnlyExecutionContext *)0x0) {
    UE::StateTreeTrace::OutputInstanceFrameEvent(TVar1,pFVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

