// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// TOptionalScopedGraphMessage<UE::Anim::FActiveStateMachineScope><FAnimationUpdateContext_const_&,FAnimNode_StateMachine_*,int_&> @ 1474a2520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptionalScopedGraphMessage<UE::Anim::FActiveStateMachineScope> * __thiscall
UE::Anim::TOptionalScopedGraphMessage<UE::Anim::FActiveStateMachineScope>::
TOptionalScopedGraphMessage<UE::Anim::FActiveStateMachineScope><FAnimationUpdateContext_const_&,FAnimNode_StateMachine_*,int_&>
          (TOptionalScopedGraphMessage<UE::Anim::FActiveStateMachineScope> *this,bool param_1,
          FAnimationBaseContext *param_2,FAnimationUpdateContext *param_3,
          FAnimNode_StateMachine **param_4,int *param_5)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TOptionalScopedGraphMessage<UE::Anim::FActiveStateMachineScope> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FName FVar6;
  TSharedRef<UE::Anim::IGraphMessage,1> local_18;
  
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)param_2->SharedContext;
  this->_padding_ = 0;
  this->bCondition = param_1;
  if (param_1) {
    pTVar3 = ::operator_new(0x48);
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      local_18.Object = (IGraphMessage *)___xmm_00000000000000000000000000000010;
      local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
      FVar6 = FActiveStateMachineScope::TypeName;
    }
    else {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFActiveStateMachineScope_Anim_UE___00_SharedPointerInternals__6B_
      ;
      FActiveStateMachineScope::FActiveStateMachineScope
                ((FActiveStateMachineScope *)(pTVar3 + 1),(FAnimationBaseContext *)param_3,*param_4,
                 *param_5);
      local_18.Object = (IGraphMessage *)(pTVar3 + 1);
      if ((TReferenceControllerBase<1> *)local_18.Object == (TReferenceControllerBase<1> *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TOptionalScopedGraphMessage<UE::Anim::FActiveStateMachineScope> *)(*pcVar1)();
          return pTVar4;
        }
      }
      FVar6 = FActiveStateMachineScope::TypeName;
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      pTVar5 = pTVar3;
      local_18.SharedReferenceCount.ReferenceController = pTVar3;
    }
    FScopedGraphMessage::PushMessage((FScopedGraphMessage *)this,param_2,&local_18,FVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return this;
}

