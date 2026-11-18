// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 28

// BindDelegate<1> @ 14d4aa1c0

bool __thiscall
TStateTreeStrongExecutionContext<1>::BindDelegate<1>
          (TStateTreeStrongExecutionContext<1> *this,FStateTreeDelegateListener *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  FStateTreeIndex16 FVar1;
  FActiveStateID FVar2;
  FActiveFrameID FVar3;
  FStateTreeInstanceStorage *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FActivePathInfo local_48;
  TDelegateBase<FNotThreadSafeDelegateMode> local_30;
  
  if (((((param_1->Dispatcher).ID.D == 0 && (param_1->Dispatcher).ID.C == 0) &&
       (param_1->Dispatcher).ID.B == 0) && (param_1->Dispatcher).ID.A == 0) || (param_1->ID == 0)) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    return true;
  }
  GetActivePathInfo(this,&local_48);
  if (local_48.Frame != (FStateTreeExecutionFrame *)0x0) {
    if (((this->Storage).Object == (FStateTreeInstanceStorage *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar4 = (this->Storage).Object;
    if (((local_48.Frame)->StateTree).field0_0x0.DebugPtr != (UStateTree *)0x0) {
      FVar1.Value = (this->NodeIndex).Value;
      FVar2.Value = (this->StateID).Value;
      FVar3.Value = (this->FrameID).Value;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_30,(TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
      FStateTreeDelegateActiveListeners::Add
                (&(pFVar4->ExecutionState).DelegateActiveListeners,param_1,
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_30,FVar3,FVar2,
                 FVar1);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
      return true;
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3439706330883948689>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeAsyncExecutionContext.cpp"
                       ,0x91,"ActivePath.Frame->StateTree");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return false;
}

// BroadcastDelegate<1> @ 14d4aa300

bool __thiscall
TStateTreeStrongExecutionContext<1>::BroadcastDelegate<1>
          (TStateTreeStrongExecutionContext<1> *this,FStateTreeDelegateDispatcher *param_1)

{
  FStateTreeInstanceStorage *pFVar1;
  TNotNull<UStateTree_const_*> TVar2;
  TNotNull<UObject_*> TVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FGuid local_38;
  FActivePathInfo local_28;
  
  if ((((param_1->ID).D != 0 || (param_1->ID).C != 0) || (param_1->ID).B != 0) ||
      (param_1->ID).A != 0) {
    GetActivePathInfo(this,&local_28);
    if (local_28.Frame == (FStateTreeExecutionFrame *)0x0) {
      return false;
    }
    if ((this->Storage).Object == (FStateTreeInstanceStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    pFVar1 = (this->Storage).Object;
    FStateTreeDelegateActiveListeners::BroadcastDelegate
              (&(pFVar1->ExecutionState).DelegateActiveListeners,param_1,&pFVar1->ExecutionState);
    if ((this->Storage).Object == (FStateTreeInstanceStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    local_38.A = (param_1->ID).A;
    local_38.B = (param_1->ID).B;
    local_38.C = (param_1->ID).C;
    local_38.D = (param_1->ID).D;
    bVar5 = UE::StateTree::ExecutionContext::MarkDelegateAsBroadcasted
                      ((FStateTreeDelegateDispatcher *)&local_38,local_28.Frame,
                       (this->Storage).Object);
    if (bVar5) {
      if ((this->Storage).Object == (FStateTreeInstanceStorage *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      TVar2.Val = (UStateTree *)(this->StateTree).Object;
      if ((TVar2.Val == (UStateTree *)0x0) ||
         (TVar3.Val = (this->Owner).Object, TVar3.Val == (UObject *)0x0)) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      ScheduleNextTick<1>(TVar3,TVar2,(this->Storage).Object,Delegate);
    }
  }
  return true;
}

// FinishTask<1> @ 14d4ac990

/* WARNING: Enum "EStateTreeStateSelectionBehavior": Some values do not have unique names */

bool __thiscall
TStateTreeStrongExecutionContext<1>::FinishTask<1>
          (TStateTreeStrongExecutionContext<1> *this,EStateTreeFinishTaskType param_1)

{
  ushort uVar1;
  TNotNull<UStateTree_const_*> TVar2;
  TNotNull<UObject_*> TVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ETaskCompletionStatus EVar7;
  uint uVar8;
  FStateTreeInstanceStorage *pFVar9;
  atomic<unsigned_char> *paVar10;
  FCompactStateTreeState *pFVar11;
  int iVar12;
  char *pcVar13;
  FActivePathInfo local_98;
  TTasksCompletionStatus<unsigned_int> local_80;
  TTasksCompletionStatus<unsigned_int> local_60;
  
  GetActivePathInfo(this,&local_98);
  if (local_98.Frame == (FStateTreeExecutionFrame *)0x0) {
    return false;
  }
  if (((this->Storage).Object == (FStateTreeInstanceStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  TVar2.Val = ((local_98.Frame)->StateTree).field0_0x0.DebugPtr;
  pFVar9 = (this->Storage).Object;
  if (TVar2.Val == (UStateTree *)0x0) {
    iVar12 = 0xc0;
    pcVar13 = "FrameStateTree";
    paVar10 = &bGEnsureHasExecuted<3439706330883948736>;
LAB_14d4aca2b:
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar10,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeAsyncExecutionContext.cpp"
                       ,iVar12,pcVar13);
    if (!bVar5) {
      return false;
    }
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar8 = 0xffffffff;
  if (local_98.NodeIndex.Value != 0xffff) {
    uVar8 = (uint)local_98.NodeIndex.Value;
  }
  uVar1 = (TVar2.Val)->GlobalTasksBegin;
  if (((int)uVar8 < (int)(uint)uVar1) ||
     ((int)((uint)(TVar2.Val)->GlobalTasksNum + (uint)uVar1) <= (int)uVar8)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  EVar7 = UE::StateTree::ExecutionContext::CastToTaskStatus(param_1);
  if (((local_98.Frame)->bIsGlobalFrame == 0) || (!bVar5)) {
    if (local_98.StateHandle.Index == 0xffff) {
      iVar12 = 0xd4;
      pcVar13 = "ActivePath.StateHandle.IsValid()";
      paVar10 = &bGEnsureHasExecuted<3439706330883948756>;
      goto LAB_14d4aca2b;
    }
    if ((((TVar2.Val)->States).ArrayNum <= (int)(uint)local_98.StateHandle.Index) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar11 = (FCompactStateTreeState *)
              (((TVar2.Val)->States).AllocatorInstance.Data +
              (ulonglong)local_98.StateHandle.Index * 0x78);
    uVar1 = pFVar11->TasksBegin;
    if ((int)uVar8 < (int)(uint)uVar1) {
      return false;
    }
    if ((int)((uint)pFVar11->TasksNum + (uint)uVar1) <= (int)uVar8) {
      return false;
    }
    FStateTreeTasksCompletionStatus::GetStatus
              (&(local_98.Frame)->ActiveTasksStatus,&local_60,pFVar11);
    UE::StateTree::TTasksCompletionStatus<unsigned_int>::SetStatusWithPriority
              (&local_60,uVar8 - uVar1,EVar7);
    if (local_60.TaskControl != All) {
      local_80.CompletionMask =
           local_60.CompletionMask &
           (*local_60.SecondCompletionBits | *local_60.FirstCompletionBits);
      goto LAB_14d4acc28;
    }
    uVar8 = *local_60.FirstCompletionBits;
    local_80.SecondCompletionBits = local_60.SecondCompletionBits;
    local_80.CompletionMask = local_60.CompletionMask;
  }
  else {
    if ((local_98.StateHandle.Index != 0xffff) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ActivePath.StateHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeAsyncExecutionContext.cpp"
                           ,0xcd,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    FStateTreeTasksCompletionStatus::GetStatus(&(local_98.Frame)->ActiveTasksStatus,&local_80,TVar2)
    ;
    UE::StateTree::TTasksCompletionStatus<unsigned_int>::SetStatusWithPriority
              (&local_80,uVar8 - uVar1,EVar7);
    if (local_80.TaskControl != All) {
      local_80.CompletionMask =
           local_80.CompletionMask &
           (*local_80.SecondCompletionBits | *local_80.FirstCompletionBits);
LAB_14d4acc28:
      bVar5 = local_80.CompletionMask != 0;
      goto LAB_14d4acc2b;
    }
    uVar8 = *local_80.FirstCompletionBits;
  }
  if (((local_80.CompletionMask & *local_80.SecondCompletionBits & uVar8) == 0) &&
     (((*local_80.SecondCompletionBits | uVar8) & local_80.CompletionMask) !=
      local_80.CompletionMask)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
LAB_14d4acc2b:
  if (!bVar5) {
    return true;
  }
  (pFVar9->ExecutionState).bHasPendingCompletedState = true;
  pFVar9 = TSharedPtr<FStateTreeInstanceStorage,1>::operator*<FStateTreeInstanceStorage>
                     (&this->Storage);
  TVar2.Val = (UStateTree *)(this->StateTree).Object;
  if ((TVar2.Val != (UStateTree *)0x0) &&
     (TVar3.Val = (this->Owner).Object, TVar3.Val != (UObject *)0x0)) {
    ScheduleNextTick<1>(TVar3,TVar2,pFVar9,CompletedState);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RequestTransition<1> @ 14d4b01f0

bool __thiscall
TStateTreeStrongExecutionContext<1>::RequestTransition<1>
          (TStateTreeStrongExecutionContext<1> *this,FStateTreeStateHandle param_1,
          EStateTreeTransitionPriority param_2,EStateTreeSelectionFallback param_3)

{
  TNotNull<UStateTree_const_*> TVar1;
  TNotNull<UObject_*> TVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FStateTreeTransitionRequest local_38;
  FActivePathInfo local_28;
  
  GetActivePathInfo(this,&local_28);
  if (local_28.Frame == (FStateTreeExecutionFrame *)0x0) {
    bVar4 = false;
  }
  else {
    local_38.SourceFrameID.Value = (this->FrameID).Value;
    local_38.SourceStateID.Value = (this->StateID).Value;
    local_38.TargetState.Index = param_1.Index;
    local_38.Priority = param_2;
    local_38.Fallback = param_3;
    if ((this->Storage).Object == (FStateTreeInstanceStorage *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    FStateTreeInstanceStorage::AddTransitionRequest
              ((this->Storage).Object,(this->Owner).Object,&local_38);
    if ((this->Storage).Object == (FStateTreeInstanceStorage *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    TVar1.Val = (UStateTree *)(this->StateTree).Object;
    if ((TVar1.Val == (UStateTree *)0x0) ||
       (TVar2.Val = (this->Owner).Object, TVar2.Val == (UObject *)0x0)) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    ScheduleNextTick<1>(TVar2,TVar1,(this->Storage).Object,TransitionRequest);
    bVar4 = true;
  }
  return bVar4;
}

// ScheduleNextTick<1> @ 14d4b0300

void __cdecl
TStateTreeStrongExecutionContext<1>::ScheduleNextTick<1>
          (TNotNull<UObject_*> param_1,TNotNull<UStateTree_const_*> param_2,
          FStateTreeInstanceStorage *param_3,ETickReason param_4)

{
  int iVar1;
  longlong *plVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  FNextTickArguments *pFVar7;
  FNextTickArguments local_res10 [8];
  UObject *local_38;
  UStateTree *local_30;
  FStateTreeInstanceStorage *local_28;
  
  if ((param_2.Val)->bScheduledTickAllowed == '\0') {
    return;
  }
  plVar2 = (longlong *)(param_3->ExecutionState).ExecutionExtension.InstancedStruct.StructMemory;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  pUVar3 = (param_3->ExecutionState).ExecutionExtension.InstancedStruct.ScriptStruct.field0_0x0.
           DebugPtr;
  if (pUVar3 == (UScriptStruct *)0x0) {
    return;
  }
  pUVar6 = FStateTreeExecutionExtension::StaticStruct();
  if (pUVar6 != (UScriptStruct *)0x0) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_14d4b039f;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14d4b039f:
  pcVar4 = *(code **)(*plVar2 + 0x18);
  pFVar7 = FStateTreeExecutionExtension::FNextTickArguments::FNextTickArguments(local_res10,param_4)
  ;
  local_38 = param_1.Val;
  local_30 = param_2.Val;
  local_28 = param_3;
  (*pcVar4)(plVar2,&local_38,pFVar7);
  return;
}

// SendEvent<1> @ 14d4b03f0

bool __thiscall
TStateTreeStrongExecutionContext<1>::SendEvent<1>
          (TStateTreeStrongExecutionContext<1> *this,FGameplayTag param_1,FConstStructView *param_2,
          FName param_3)

{
  TNotNull<UStateTree_const_*> TVar1;
  TNotNull<UObject_*> TVar2;
  bool bVar3;
  FActivePathInfo *pFVar4;
  FActivePathInfo local_78;
  FStateTreeMinimalExecutionContext local_58;
  
  if ((((this->Owner).Object == (UObject *)0x0) || ((this->StateTree).Object == (UObject *)0x0)) ||
     ((this->Storage).Object == (FStateTreeInstanceStorage *)0x0)) {
LAB_14d4b0488:
    bVar3 = false;
  }
  else {
    if ((this->FrameID).Value != 0) {
      pFVar4 = GetActivePathInfo(this,&local_78);
      if (pFVar4->Frame == (FStateTreeExecutionFrame *)0x0) goto LAB_14d4b0488;
    }
    TVar1.Val = (UStateTree *)(this->StateTree).Object;
    if ((TVar1.Val == (UStateTree *)0x0) ||
       (TVar2.Val = (this->Owner).Object, TVar2.Val == (UObject *)0x0)) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    FStateTreeMinimalExecutionContext::FStateTreeMinimalExecutionContext
              (&local_58,TVar2,TVar1,(this->Storage).Object);
    local_78.Frame = (FStateTreeExecutionFrame *)param_2->ScriptStruct;
    local_78.ParentFrame = (FStateTreeExecutionFrame *)param_2->StructMemory;
    FStateTreeMinimalExecutionContext::SendEvent
              (&local_58,param_1,(FConstStructView *)&local_78,param_3);
    FStateTreeMinimalExecutionContext::~FStateTreeMinimalExecutionContext(&local_58);
    bVar3 = true;
  }
  return bVar3;
}

// UnbindDelegate<1> @ 14d4b0770

bool __thiscall
TStateTreeStrongExecutionContext<1>::UnbindDelegate<1>
          (TStateTreeStrongExecutionContext<1> *this,FStateTreeDelegateListener *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FActivePathInfo *pFVar4;
  FActivePathInfo local_28;
  
  if (((((param_1->Dispatcher).ID.D != 0 || (param_1->Dispatcher).ID.C != 0) ||
       (param_1->Dispatcher).ID.B != 0) || (param_1->Dispatcher).ID.A != 0) && (param_1->ID != 0)) {
    if (((this->Owner).Object == (UObject *)0x0) ||
       (((this->StateTree).Object == (UObject *)0x0 ||
        ((this->Storage).Object == (FStateTreeInstanceStorage *)0x0)))) {
      return false;
    }
    if (((this->FrameID).Value != 0) &&
       (pFVar4 = GetActivePathInfo(this,&local_28), pFVar4->Frame == (FStateTreeExecutionFrame *)0x0
       )) {
      return false;
    }
    if (((this->Storage).Object == (FStateTreeInstanceStorage *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    FStateTreeDelegateActiveListeners::Remove
              (&(((this->Storage).Object)->ExecutionState).DelegateActiveListeners,param_1);
  }
  return true;
}

// UpdateScheduledTickRequest<1> @ 14d4b0820

bool __thiscall
TStateTreeStrongExecutionContext<1>::UpdateScheduledTickRequest<1>
          (TStateTreeStrongExecutionContext<1> *this,FScheduledTickHandle param_1,
          FStateTreeScheduledTick param_2)

{
  TNotNull<UStateTree_const_*> TVar1;
  TNotNull<UObject_*> TVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FActivePathInfo *pFVar6;
  FActivePathInfo local_28;
  
  if ((((this->Owner).Object == (UObject *)0x0) || ((this->StateTree).Object == (UObject *)0x0)) ||
     ((this->Storage).Object == (FStateTreeInstanceStorage *)0x0)) {
    return false;
  }
  if (((this->FrameID).Value != 0) &&
     (pFVar6 = GetActivePathInfo(this,&local_28), pFVar6->Frame == (FStateTreeExecutionFrame *)0x0))
  {
    return false;
  }
  if (((this->Storage).Object == (FStateTreeInstanceStorage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar4 = FStateTreeExecutionState::UpdateScheduledTickRequest
                    (&((this->Storage).Object)->ExecutionState,param_1,param_2);
  if (bVar4) {
    if (((this->Storage).Object == (FStateTreeInstanceStorage *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    TVar1.Val = (UStateTree *)(this->StateTree).Object;
    if ((TVar1.Val == (UStateTree *)0x0) ||
       (TVar2.Val = (this->Owner).Object, TVar2.Val == (UObject *)0x0)) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    ScheduleNextTick<1>(TVar2,TVar1,(this->Storage).Object,ScheduledTickRequest);
  }
  return true;
}

// TStateTreeStrongExecutionContext<1> @ 14d4b0c40

TStateTreeStrongExecutionContext<1> * __thiscall
TStateTreeStrongExecutionContext<1>::TStateTreeStrongExecutionContext<1>
          (TStateTreeStrongExecutionContext<1> *this,FStateTreeWeakExecutionContext *param_1)

{
  byte bVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
  FStateTreeInstanceStorage *this_00;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar7;
  bool bVar8;
  UObject *local_res8;
  
  (this->Owner).Object = (UObject *)0x0;
  TVar7 = FWeakObjectPtr::Pin((FWeakObjectPtr *)param_1);
                    /* WARNING: Load size is inaccurate */
  pUVar2 = *TVar7.Object;
  *(undefined8 *)TVar7.Object = 0;
  pUVar3 = (this->Owner).Object;
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  (this->Owner).Object = pUVar2;
  if (local_res8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
  }
  (this->StateTree).Object = (UObject *)0x0;
  TVar7 = FWeakObjectPtr::Pin(&(param_1->StateTree).WeakPtr);
                    /* WARNING: Load size is inaccurate */
  pUVar2 = *TVar7.Object;
  *(undefined8 *)TVar7.Object = 0;
  pUVar3 = (this->StateTree).Object;
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  (this->StateTree).Object = pUVar2;
  if (local_res8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
  }
  (this->Storage).Object = (FStateTreeInstanceStorage *)0x0;
  pTVar4 = (param_1->Storage).WeakReferenceCount.ReferenceController;
  (this->Storage).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar4->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        (this->Storage).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar6 = pTVar4->SharedReferenceCount;
      bVar8 = aVar5 == aVar6;
      if (bVar8) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar8);
  }
  if ((this->Storage).SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    (this->Storage).Object = (param_1->Storage).Object;
  }
  (this->TemporaryStorage).Object = (ITemporaryStorage *)0x0;
  pTVar4 = (param_1->TemporaryStorage).WeakReferenceCount.ReferenceController;
  (this->TemporaryStorage).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar4->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        (this->TemporaryStorage).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar6 = pTVar4->SharedReferenceCount;
      bVar8 = aVar5 == aVar6;
      if (bVar8) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar8);
  }
  if ((this->TemporaryStorage).SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    (this->TemporaryStorage).Object = (param_1->TemporaryStorage).Object;
  }
  (this->FrameID).Value = (param_1->FrameID).Value;
  (this->StateID).Value = (param_1->StateID).Value;
  (this->NodeIndex).Value = (param_1->NodeIndex).Value;
  bVar1 = this->field_0x3a;
  this->bAccessAcquired = '\0';
  if ((((this->Owner).Object != (UObject *)0x0) && ((this->StateTree).Object != (UObject *)0x0)) &&
     (this_00 = (this->Storage).Object, this_00 != (FStateTreeInstanceStorage *)0x0)) {
    this->field_0x3a = bVar1 & 0xfe | 1;
    FStateTreeInstanceStorage::AcquireWriteAccess(this_00);
  }
  return this;
}

// TStateTreeStrongExecutionContext<0> @ 14d4b0da0

TStateTreeStrongExecutionContext<0> * __thiscall
TStateTreeStrongExecutionContext<0>::TStateTreeStrongExecutionContext<0>
          (TStateTreeStrongExecutionContext<0> *this,FStateTreeWeakExecutionContext *param_1)

{
  byte bVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
  FStateTreeInstanceStorage *this_00;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar7;
  bool bVar8;
  UObject *local_res8;
  
  (this->Owner).Object = (UObject *)0x0;
  TVar7 = FWeakObjectPtr::Pin((FWeakObjectPtr *)param_1);
                    /* WARNING: Load size is inaccurate */
  pUVar2 = *TVar7.Object;
  *(undefined8 *)TVar7.Object = 0;
  pUVar3 = (this->Owner).Object;
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  (this->Owner).Object = pUVar2;
  if (local_res8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
  }
  (this->StateTree).Object = (UObject *)0x0;
  TVar7 = FWeakObjectPtr::Pin(&(param_1->StateTree).WeakPtr);
                    /* WARNING: Load size is inaccurate */
  pUVar2 = *TVar7.Object;
  *(undefined8 *)TVar7.Object = 0;
  pUVar3 = (this->StateTree).Object;
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  (this->StateTree).Object = pUVar2;
  if (local_res8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
  }
  (this->Storage).Object = (FStateTreeInstanceStorage *)0x0;
  pTVar4 = (param_1->Storage).WeakReferenceCount.ReferenceController;
  (this->Storage).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar4->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        (this->Storage).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar6 = pTVar4->SharedReferenceCount;
      bVar8 = aVar5 == aVar6;
      if (bVar8) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar8);
  }
  if ((this->Storage).SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    (this->Storage).Object = (param_1->Storage).Object;
  }
  (this->TemporaryStorage).Object = (ITemporaryStorage *)0x0;
  pTVar4 = (param_1->TemporaryStorage).WeakReferenceCount.ReferenceController;
  (this->TemporaryStorage).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar4->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        (this->TemporaryStorage).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar6 = pTVar4->SharedReferenceCount;
      bVar8 = aVar5 == aVar6;
      if (bVar8) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar8);
  }
  if ((this->TemporaryStorage).SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    (this->TemporaryStorage).Object = (param_1->TemporaryStorage).Object;
  }
  (this->FrameID).Value = (param_1->FrameID).Value;
  (this->StateID).Value = (param_1->StateID).Value;
  (this->NodeIndex).Value = (param_1->NodeIndex).Value;
  bVar1 = this->field_0x3a;
  this->bAccessAcquired = '\0';
  if ((((this->Owner).Object != (UObject *)0x0) && ((this->StateTree).Object != (UObject *)0x0)) &&
     (this_00 = (this->Storage).Object, this_00 != (FStateTreeInstanceStorage *)0x0)) {
    this->field_0x3a = bVar1 & 0xfe | 1;
    FStateTreeInstanceStorage::AcquireReadAccess(this_00);
  }
  return this;
}

// ~TStateTreeStrongExecutionContext<1> @ 14d4b3320

void __thiscall
TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>
          (TStateTreeStrongExecutionContext<1> *this)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->bAccessAcquired != 0) {
    if ((((this->Owner).Object == (UObject *)0x0) || ((this->StateTree).Object == (UObject *)0x0))
       || ((this->Storage).Object == (FStateTreeInstanceStorage *)0x0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidInstanceStorage()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeAsyncExecutionContext.cpp"
                         ,0x2d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((this->Storage).Object == (FStateTreeInstanceStorage *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FStateTreeInstanceStorage::ReleaseWriteAccess((this->Storage).Object);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TemporaryStorage).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Storage).SharedReferenceCount.ReferenceController);
  pUVar1 = (this->StateTree).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->StateTree).Object = (UObject *)0x0;
  }
  pUVar1 = (this->Owner).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->Owner).Object = (UObject *)0x0;
  }
  return;
}

// ~TStateTreeStrongExecutionContext<0> @ 14d4b33f0

void __thiscall
TStateTreeStrongExecutionContext<0>::~TStateTreeStrongExecutionContext<0>
          (TStateTreeStrongExecutionContext<0> *this)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->bAccessAcquired != 0) {
    if ((((this->Owner).Object == (UObject *)0x0) || ((this->StateTree).Object == (UObject *)0x0))
       || ((this->Storage).Object == (FStateTreeInstanceStorage *)0x0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidInstanceStorage()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeAsyncExecutionContext.cpp"
                         ,0x2d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((this->Storage).Object == (FStateTreeInstanceStorage *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FStateTreeInstanceStorage::ReleaseReadAccess((this->Storage).Object);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TemporaryStorage).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Storage).SharedReferenceCount.ReferenceController);
  pUVar1 = (this->StateTree).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->StateTree).Object = (UObject *)0x0;
  }
  pUVar1 = (this->Owner).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->Owner).Object = (UObject *)0x0;
  }
  return;
}

// GetActivePathInfo @ 14d4bccd0

/* WARNING: Type propagation algorithm not settling */

FActivePathInfo * __thiscall
TStateTreeStrongExecutionContext<1>::GetActivePathInfo
          (TStateTreeStrongExecutionContext<1> *this,FActivePathInfo *__return_storage_ptr__)

{
  byte bVar1;
  ushort uVar2;
  FStateTreeInstanceStorage *pFVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  uint uVar7;
  FActivePathInfo *pFVar8;
  ITemporaryStorage *pIVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  undefined1 local_78 [16];
  FStateTreeExecutionFrame *local_68;
  FActiveFrameID local_60;
  FStateTreeExecutionFrame *local_58 [2];
  FStateTreeExecutionFrame *local_48;
  FStateTreeExecutionFrame *pFStack_40;
  ushort local_38;
  ushort uStack_36;
  undefined4 uStack_34;
  
  if ((((this->Owner).Object == (UObject *)0x0) || ((this->StateTree).Object == (UObject *)0x0)) ||
     ((this->Storage).Object == (FStateTreeInstanceStorage *)0x0)) {
    __return_storage_ptr__->Frame = (FStateTreeExecutionFrame *)0x0;
    __return_storage_ptr__->ParentFrame = (FStateTreeExecutionFrame *)0x0;
    __return_storage_ptr__->StateHandle = 0xffff;
    __return_storage_ptr__->NodeIndex = 0xffff;
    return __return_storage_ptr__;
  }
  pFVar3 = (this->Storage).Object;
  local_48 = (FStateTreeExecutionFrame *)0x0;
  pFStack_40 = (FStateTreeExecutionFrame *)0x0;
  local_38 = 0xffff;
  uVar7 = FStateTreeExecutionState::IndexOfActiveFrame
                    (&pFVar3->ExecutionState,(FActiveFrameID)(this->FrameID).Value);
  if (uVar7 == 0xffffffff) {
    if ((this->TemporaryStorage).Object == (ITemporaryStorage *)0x0) goto LAB_14d4bcfe2;
    pIVar9 = TSharedPtr<UE::StateTree::ExecutionContext::ITemporaryStorage,1>::operator->
                       (&this->TemporaryStorage);
    (**(code **)((longlong)*pIVar9 + 8))(pIVar9,&local_68,(this->FrameID).Value);
    local_48 = local_68;
    if (local_60.Value == 0) goto LAB_14d4bce01;
    uVar7 = FStateTreeExecutionState::IndexOfActiveFrame(&pFVar3->ExecutionState,local_60);
    if (uVar7 == 0xffffffff) {
      pIVar9 = TSharedPtr<UE::StateTree::ExecutionContext::ITemporaryStorage,1>::operator->
                         (&this->TemporaryStorage);
      (**(code **)((longlong)*pIVar9 + 8))(pIVar9,local_58,local_60.Value);
      pFStack_40 = local_58[0];
    }
    else {
      uVar11 = 0;
      if ((int)uVar7 < (pFVar3->ExecutionState).ActiveFrames.ArrayNum) {
        uVar11 = ~uVar7 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FActivePathInfo *)(*pcVar4)();
        return pFVar8;
      }
      pFStack_40 = (FStateTreeExecutionFrame *)
                   ((pFVar3->ExecutionState).ActiveFrames.AllocatorInstance.Data +
                   (longlong)(int)uVar7 * 0x70);
    }
    if (local_68 == (FStateTreeExecutionFrame *)0x0) {
      `TStateTreeStrongExecutionContext<1>::GetActivePathInfo'::__l15::<lambda_1>::operator()
                (local_res8);
      goto LAB_14d4bcfe2;
    }
  }
  else {
    uVar11 = 0;
    if ((int)uVar7 < (pFVar3->ExecutionState).ActiveFrames.ArrayNum) {
      uVar11 = ~uVar7 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FActivePathInfo *)(*pcVar4)();
      return pFVar8;
    }
    local_68 = (FStateTreeExecutionFrame *)
               ((pFVar3->ExecutionState).ActiveFrames.AllocatorInstance.Data +
               (longlong)(int)uVar7 * 0x70);
    local_48 = local_68;
    if (uVar7 != 0) {
      uVar7 = uVar7 - 1;
      uVar11 = 0;
      if ((int)uVar7 < (pFVar3->ExecutionState).ActiveFrames.ArrayNum) {
        uVar11 = ~uVar7 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FActivePathInfo *)(*pcVar4)();
        return pFVar8;
      }
      pFStack_40 = (FStateTreeExecutionFrame *)
                   ((pFVar3->ExecutionState).ActiveFrames.AllocatorInstance.Data +
                   (longlong)(int)uVar7 * 0x70);
    }
LAB_14d4bce01:
    if (local_68 == (FStateTreeExecutionFrame *)0x0) goto LAB_14d4bcfe2;
  }
  uStack_36 = (this->NodeIndex).Value;
  uVar11 = 0xffffffff;
  uVar7 = 0xffffffff;
  if (uStack_36 != 0xffff) {
    uVar7 = (uint)uStack_36;
  }
  uVar2 = (local_68->ActiveNodeIndex).Value;
  if (uVar2 != 0xffff) {
    uVar11 = (uint)uVar2;
  }
  if ((int)uVar11 < (int)uVar7) {
LAB_14d4bcfe2:
    __return_storage_ptr__->Frame = (FStateTreeExecutionFrame *)0x0;
    __return_storage_ptr__->ParentFrame = (FStateTreeExecutionFrame *)0x0;
    __return_storage_ptr__->StateHandle = 0xffff;
    __return_storage_ptr__->NodeIndex = 0xffff;
    return __return_storage_ptr__;
  }
  uVar7 = (this->StateID).Value;
  if (uVar7 != 0) {
    bVar1 = (local_68->ActiveStates).NumStates;
    uVar11 = (uint)bVar1;
    uVar5 = (ulonglong)bVar1;
    do {
      local_38 = FStateTreeStateHandle::Invalid.Index;
      if ((longlong)(uVar5 - 1) < 0) goto LAB_14d4bce69;
      uVar11 = uVar11 - 1;
      lVar10 = uVar5 - 1;
      uVar5 = uVar5 - 1;
    } while ((local_68->ActiveStates).StateIDs[lVar10].Value != uVar7);
    local_38 = (local_68->ActiveStates).States[(int)uVar11].Index;
LAB_14d4bce69:
    if (local_38 == 0xffff) {
      if ((this->TemporaryStorage).Object != (ITemporaryStorage *)0x0) {
        pIVar9 = TSharedPtr<UE::StateTree::ExecutionContext::ITemporaryStorage,1>::operator->
                           (&this->TemporaryStorage);
        lVar10 = (**(code **)((longlong)*pIVar9 + 0x10))(pIVar9,local_78,(this->StateID).Value);
        local_38 = *(ushort *)(lVar10 + 8);
      }
      if (local_38 == 0xffff) goto LAB_14d4bcfe2;
    }
  }
  __return_storage_ptr__->Frame = local_48;
  __return_storage_ptr__->ParentFrame = pFStack_40;
  __return_storage_ptr__->StateHandle = (FStateTreeStateHandle)local_38;
  __return_storage_ptr__->NodeIndex = (FStateTreeIndex16)uStack_36;
  *(undefined4 *)&__return_storage_ptr__->field_0x14 = uStack_34;
  return __return_storage_ptr__;
}

// GetActivePathInfo @ 14d4bd030

/* WARNING: Type propagation algorithm not settling */

FActivePathInfo * __thiscall
TStateTreeStrongExecutionContext<0>::GetActivePathInfo
          (TStateTreeStrongExecutionContext<0> *this,FActivePathInfo *__return_storage_ptr__)

{
  byte bVar1;
  ushort uVar2;
  FStateTreeInstanceStorage *pFVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  uint uVar7;
  FActivePathInfo *pFVar8;
  ITemporaryStorage *pIVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  undefined1 local_78 [16];
  FStateTreeExecutionFrame *local_68;
  FActiveFrameID local_60;
  FStateTreeExecutionFrame *local_58 [2];
  FStateTreeExecutionFrame *local_48;
  FStateTreeExecutionFrame *pFStack_40;
  ushort local_38;
  ushort uStack_36;
  undefined4 uStack_34;
  
  if ((((this->Owner).Object == (UObject *)0x0) || ((this->StateTree).Object == (UObject *)0x0)) ||
     ((this->Storage).Object == (FStateTreeInstanceStorage *)0x0)) {
    __return_storage_ptr__->Frame = (FStateTreeExecutionFrame *)0x0;
    __return_storage_ptr__->ParentFrame = (FStateTreeExecutionFrame *)0x0;
    __return_storage_ptr__->StateHandle = 0xffff;
    __return_storage_ptr__->NodeIndex = 0xffff;
    return __return_storage_ptr__;
  }
  pFVar3 = (this->Storage).Object;
  local_48 = (FStateTreeExecutionFrame *)0x0;
  pFStack_40 = (FStateTreeExecutionFrame *)0x0;
  local_38 = 0xffff;
  uVar7 = FStateTreeExecutionState::IndexOfActiveFrame
                    (&pFVar3->ExecutionState,(FActiveFrameID)(this->FrameID).Value);
  if (uVar7 == 0xffffffff) {
    if ((this->TemporaryStorage).Object == (ITemporaryStorage *)0x0) goto LAB_14d4bd342;
    pIVar9 = TSharedPtr<UE::StateTree::ExecutionContext::ITemporaryStorage,1>::operator->
                       (&this->TemporaryStorage);
    (**(code **)((longlong)*pIVar9 + 8))(pIVar9,&local_68,(this->FrameID).Value);
    local_48 = local_68;
    if (local_60.Value == 0) goto LAB_14d4bd161;
    uVar7 = FStateTreeExecutionState::IndexOfActiveFrame(&pFVar3->ExecutionState,local_60);
    if (uVar7 == 0xffffffff) {
      pIVar9 = TSharedPtr<UE::StateTree::ExecutionContext::ITemporaryStorage,1>::operator->
                         (&this->TemporaryStorage);
      (**(code **)((longlong)*pIVar9 + 8))(pIVar9,local_58,local_60.Value);
      pFStack_40 = local_58[0];
    }
    else {
      uVar11 = 0;
      if ((int)uVar7 < (pFVar3->ExecutionState).ActiveFrames.ArrayNum) {
        uVar11 = ~uVar7 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FActivePathInfo *)(*pcVar4)();
        return pFVar8;
      }
      pFStack_40 = (FStateTreeExecutionFrame *)
                   ((pFVar3->ExecutionState).ActiveFrames.AllocatorInstance.Data +
                   (longlong)(int)uVar7 * 0x70);
    }
    if (local_68 == (FStateTreeExecutionFrame *)0x0) {
      `TStateTreeStrongExecutionContext<0>::GetActivePathInfo'::__l15::<lambda_1>::operator()
                (local_res8);
      goto LAB_14d4bd342;
    }
  }
  else {
    uVar11 = 0;
    if ((int)uVar7 < (pFVar3->ExecutionState).ActiveFrames.ArrayNum) {
      uVar11 = ~uVar7 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FActivePathInfo *)(*pcVar4)();
      return pFVar8;
    }
    local_68 = (FStateTreeExecutionFrame *)
               ((pFVar3->ExecutionState).ActiveFrames.AllocatorInstance.Data +
               (longlong)(int)uVar7 * 0x70);
    local_48 = local_68;
    if (uVar7 != 0) {
      uVar7 = uVar7 - 1;
      uVar11 = 0;
      if ((int)uVar7 < (pFVar3->ExecutionState).ActiveFrames.ArrayNum) {
        uVar11 = ~uVar7 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FActivePathInfo *)(*pcVar4)();
        return pFVar8;
      }
      pFStack_40 = (FStateTreeExecutionFrame *)
                   ((pFVar3->ExecutionState).ActiveFrames.AllocatorInstance.Data +
                   (longlong)(int)uVar7 * 0x70);
    }
LAB_14d4bd161:
    if (local_68 == (FStateTreeExecutionFrame *)0x0) goto LAB_14d4bd342;
  }
  uStack_36 = (this->NodeIndex).Value;
  uVar11 = 0xffffffff;
  uVar7 = 0xffffffff;
  if (uStack_36 != 0xffff) {
    uVar7 = (uint)uStack_36;
  }
  uVar2 = (local_68->ActiveNodeIndex).Value;
  if (uVar2 != 0xffff) {
    uVar11 = (uint)uVar2;
  }
  if ((int)uVar11 < (int)uVar7) {
LAB_14d4bd342:
    __return_storage_ptr__->Frame = (FStateTreeExecutionFrame *)0x0;
    __return_storage_ptr__->ParentFrame = (FStateTreeExecutionFrame *)0x0;
    __return_storage_ptr__->StateHandle = 0xffff;
    __return_storage_ptr__->NodeIndex = 0xffff;
    return __return_storage_ptr__;
  }
  uVar7 = (this->StateID).Value;
  if (uVar7 != 0) {
    bVar1 = (local_68->ActiveStates).NumStates;
    uVar11 = (uint)bVar1;
    uVar5 = (ulonglong)bVar1;
    do {
      local_38 = FStateTreeStateHandle::Invalid.Index;
      if ((longlong)(uVar5 - 1) < 0) goto LAB_14d4bd1c9;
      uVar11 = uVar11 - 1;
      lVar10 = uVar5 - 1;
      uVar5 = uVar5 - 1;
    } while ((local_68->ActiveStates).StateIDs[lVar10].Value != uVar7);
    local_38 = (local_68->ActiveStates).States[(int)uVar11].Index;
LAB_14d4bd1c9:
    if (local_38 == 0xffff) {
      if ((this->TemporaryStorage).Object != (ITemporaryStorage *)0x0) {
        pIVar9 = TSharedPtr<UE::StateTree::ExecutionContext::ITemporaryStorage,1>::operator->
                           (&this->TemporaryStorage);
        lVar10 = (**(code **)((longlong)*pIVar9 + 0x10))(pIVar9,local_78,(this->StateID).Value);
        local_38 = *(ushort *)(lVar10 + 8);
      }
      if (local_38 == 0xffff) goto LAB_14d4bd342;
    }
  }
  __return_storage_ptr__->Frame = local_48;
  __return_storage_ptr__->ParentFrame = pFStack_40;
  __return_storage_ptr__->StateHandle = (FStateTreeStateHandle)local_38;
  __return_storage_ptr__->NodeIndex = (FStateTreeIndex16)uStack_36;
  *(undefined4 *)&__return_storage_ptr__->field_0x14 = uStack_34;
  return __return_storage_ptr__;
}

// GetInstanceDataPtrInternal @ 14d4bd8d0

FStateTreeDataView * __thiscall
TStateTreeStrongExecutionContext<1>::GetInstanceDataPtrInternal
          (TStateTreeStrongExecutionContext<1> *this,FStateTreeDataView *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FStateTreeDataView *pFVar3;
  FConstStructView *pFVar4;
  FStateTreeNodeBase *pFVar5;
  uint uVar6;
  uint uVar7;
  FStateTreeDataView local_68;
  FConstStructView local_58;
  FConstStructView local_48;
  FActivePathInfo local_38;
  
  GetActivePathInfo(this,&local_38);
  if (local_38.Frame == (FStateTreeExecutionFrame *)0x0) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    return __return_storage_ptr__;
  }
  if ((((local_38.Frame == (FStateTreeExecutionFrame *)0x0) ||
       (((local_38.Frame)->StateTree).field0_0x0.DebugPtr == (UStateTree *)0x0)) ||
      (local_38.NodeIndex.Value == 0xffff)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid() && Frame->StateTree && NodeIndex.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeAsyncExecutionContext.cpp"
                         ,10,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FStateTreeDataView *)(*pcVar1)();
    return pFVar3;
  }
  uVar6 = 0xffffffff;
  uVar7 = 0xffffffff;
  if (local_38.NodeIndex.Value != 0xffff) {
    uVar7 = (uint)local_38.NodeIndex.Value;
  }
  pFVar4 = UStateTree::GetNode(((local_38.Frame)->StateTree).field0_0x0.DebugPtr,&local_58,uVar7);
  FConstStructView::GetPtr<FStateTreeNodeBase_const_>(pFVar4);
  if (((((local_38.Frame)->StateTree).field0_0x0.DebugPtr == (UStateTree *)0x0) ||
      (local_38.NodeIndex.Value == 0xffff)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid() && Frame->StateTree && NodeIndex.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeAsyncExecutionContext.cpp"
                         ,10,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FStateTreeDataView *)(*pcVar1)();
    return pFVar3;
  }
  if (local_38.NodeIndex.Value != 0xffff) {
    uVar6 = (uint)local_38.NodeIndex.Value;
  }
  pFVar4 = UStateTree::GetNode(((local_38.Frame)->StateTree).field0_0x0.DebugPtr,&local_48,uVar6);
  pFVar5 = FConstStructView::GetPtr<FStateTreeNodeBase_const_>(pFVar4);
  if (((this->Storage).Object == (FStateTreeInstanceStorage *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FStateTreeDataView *)(*pcVar1)();
    return pFVar3;
  }
  UE::StateTree::InstanceData::GetDataViewOrTemporary
            (&local_68,(this->Storage).Object,(FStateTreeInstanceStorage *)0x0,local_38.ParentFrame,
             local_38.Frame,&pFVar5->InstanceDataHandle);
  *(undefined8 *)__return_storage_ptr__ = local_68._0_8_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = local_68._8_8_;
  return __return_storage_ptr__;
}

// GetInstanceDataPtrInternal @ 14d4bda90

FStateTreeDataView * __thiscall
TStateTreeStrongExecutionContext<0>::GetInstanceDataPtrInternal
          (TStateTreeStrongExecutionContext<0> *this,FStateTreeDataView *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FStateTreeDataView *pFVar3;
  FConstStructView *pFVar4;
  FStateTreeNodeBase *pFVar5;
  uint uVar6;
  uint uVar7;
  FStateTreeDataView local_68;
  FConstStructView local_58;
  FConstStructView local_48;
  FActivePathInfo local_38;
  
  GetActivePathInfo(this,&local_38);
  if (local_38.Frame == (FStateTreeExecutionFrame *)0x0) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    return __return_storage_ptr__;
  }
  if ((((local_38.Frame == (FStateTreeExecutionFrame *)0x0) ||
       (((local_38.Frame)->StateTree).field0_0x0.DebugPtr == (UStateTree *)0x0)) ||
      (local_38.NodeIndex.Value == 0xffff)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid() && Frame->StateTree && NodeIndex.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeAsyncExecutionContext.cpp"
                         ,10,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FStateTreeDataView *)(*pcVar1)();
    return pFVar3;
  }
  uVar6 = 0xffffffff;
  uVar7 = 0xffffffff;
  if (local_38.NodeIndex.Value != 0xffff) {
    uVar7 = (uint)local_38.NodeIndex.Value;
  }
  pFVar4 = UStateTree::GetNode(((local_38.Frame)->StateTree).field0_0x0.DebugPtr,&local_58,uVar7);
  FConstStructView::GetPtr<FStateTreeNodeBase_const_>(pFVar4);
  if (((((local_38.Frame)->StateTree).field0_0x0.DebugPtr == (UStateTree *)0x0) ||
      (local_38.NodeIndex.Value == 0xffff)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid() && Frame->StateTree && NodeIndex.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeAsyncExecutionContext.cpp"
                         ,10,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FStateTreeDataView *)(*pcVar1)();
    return pFVar3;
  }
  if (local_38.NodeIndex.Value != 0xffff) {
    uVar6 = (uint)local_38.NodeIndex.Value;
  }
  pFVar4 = UStateTree::GetNode(((local_38.Frame)->StateTree).field0_0x0.DebugPtr,&local_48,uVar6);
  pFVar5 = FConstStructView::GetPtr<FStateTreeNodeBase_const_>(pFVar4);
  if (((this->Storage).Object == (FStateTreeInstanceStorage *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FStateTreeDataView *)(*pcVar1)();
    return pFVar3;
  }
  UE::StateTree::InstanceData::GetDataViewOrTemporary
            (&local_68,(this->Storage).Object,(FStateTreeInstanceStorage *)0x0,local_38.ParentFrame,
             local_38.Frame,&pFVar5->InstanceDataHandle);
  *(undefined8 *)__return_storage_ptr__ = local_68._0_8_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = local_68._8_8_;
  return __return_storage_ptr__;
}

// GetOwner @ 14d4bed80

TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
 __thiscall TStateTreeStrongExecutionContext<1>::GetOwner(TStateTreeStrongExecutionContext<1> *this)

{
  UObjectBase *this_00;
  UObject *in_RDX;
  
  this_00 = (UObjectBase *)(this->Owner).Object;
  *(undefined8 *)in_RDX = 0;
  if (this_00 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this_00);
    *(UObjectBase **)in_RDX = this_00;
  }
  return (TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          )in_RDX;
}

// GetOwner @ 14d4bedc0

TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
 __thiscall TStateTreeStrongExecutionContext<0>::GetOwner(TStateTreeStrongExecutionContext<0> *this)

{
  UObjectBase *this_00;
  UObject *in_RDX;
  
  this_00 = (UObjectBase *)(this->Owner).Object;
  *(undefined8 *)in_RDX = 0;
  if (this_00 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this_00);
    *(UObjectBase **)in_RDX = this_00;
  }
  return (TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          )in_RDX;
}

// GetStateTree @ 14d4c0060

TStrongObjectPtr<UStateTree_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
 __thiscall
TStateTreeStrongExecutionContext<1>::GetStateTree(TStateTreeStrongExecutionContext<1> *this)

{
  UObjectBase *this_00;
  UObject *in_RDX;
  
  this_00 = (UObjectBase *)(this->StateTree).Object;
  *(undefined8 *)in_RDX = 0;
  if (this_00 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this_00);
    *(UObjectBase **)in_RDX = this_00;
  }
  return (TStrongObjectPtr<UStateTree_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          )in_RDX;
}

// GetStateTree @ 14d4c00a0

TStrongObjectPtr<UStateTree_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
 __thiscall
TStateTreeStrongExecutionContext<0>::GetStateTree(TStateTreeStrongExecutionContext<0> *this)

{
  UObjectBase *this_00;
  UObject *in_RDX;
  
  this_00 = (UObjectBase *)(this->StateTree).Object;
  *(undefined8 *)in_RDX = 0;
  if (this_00 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this_00);
    *(UObjectBase **)in_RDX = this_00;
  }
  return (TStrongObjectPtr<UStateTree_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          )in_RDX;
}

// GetStorage @ 14d4c00e0

TSharedPtr<FStateTreeInstanceStorage_const_,1> * __thiscall
TStateTreeStrongExecutionContext<1>::GetStorage
          (TStateTreeStrongExecutionContext<1> *this,
          TSharedPtr<FStateTreeInstanceStorage_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Storage).Object;
  pTVar1 = (this->Storage).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetStorage @ 14d4c0110

TSharedPtr<FStateTreeInstanceStorage_const_,1> * __thiscall
TStateTreeStrongExecutionContext<0>::GetStorage
          (TStateTreeStrongExecutionContext<0> *this,
          TSharedPtr<FStateTreeInstanceStorage_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Storage).Object;
  pTVar1 = (this->Storage).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// IsValid @ 14d4c40f0

bool __thiscall
TStateTreeStrongExecutionContext<1>::IsValid(TStateTreeStrongExecutionContext<1> *this)

{
  FActivePathInfo *pFVar1;
  FActivePathInfo local_28;
  
  if ((((this->Owner).Object != (UObject *)0x0) && ((this->StateTree).Object != (UObject *)0x0)) &&
     ((this->Storage).Object != (FStateTreeInstanceStorage *)0x0)) {
    if (((this->FrameID).Value != 0) &&
       (pFVar1 = GetActivePathInfo(this,&local_28), pFVar1->Frame == (FStateTreeExecutionFrame *)0x0
       )) {
      return false;
    }
    return true;
  }
  return false;
}

// IsValid @ 14d4c4140

bool __thiscall
TStateTreeStrongExecutionContext<0>::IsValid(TStateTreeStrongExecutionContext<0> *this)

{
  FActivePathInfo *pFVar1;
  FActivePathInfo local_28;
  
  if ((((this->Owner).Object != (UObject *)0x0) && ((this->StateTree).Object != (UObject *)0x0)) &&
     ((this->Storage).Object != (FStateTreeInstanceStorage *)0x0)) {
    if (((this->FrameID).Value != 0) &&
       (pFVar1 = GetActivePathInfo(this,&local_28), pFVar1->Frame == (FStateTreeExecutionFrame *)0x0
       )) {
      return false;
    }
    return true;
  }
  return false;
}

// IsValidInstanceStorage @ 14d4c41e0

bool __thiscall
TStateTreeStrongExecutionContext<1>::IsValidInstanceStorage
          (TStateTreeStrongExecutionContext<1> *this)

{
  if ((((this->Owner).Object != (UObject *)0x0) && ((this->StateTree).Object != (UObject *)0x0)) &&
     ((this->Storage).Object != (FStateTreeInstanceStorage *)0x0)) {
    return true;
  }
  return false;
}

// IsValidInstanceStorage @ 14d4c4200

bool __thiscall
TStateTreeStrongExecutionContext<0>::IsValidInstanceStorage
          (TStateTreeStrongExecutionContext<0> *this)

{
  if ((((this->Owner).Object != (UObject *)0x0) && ((this->StateTree).Object != (UObject *)0x0)) &&
     ((this->Storage).Object != (FStateTreeInstanceStorage *)0x0)) {
    return true;
  }
  return false;
}

// operator() @ 15057e290

bool __thiscall
`TStateTreeStrongExecutionContext<1>::GetActivePathInfo'::__l15::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3439706330883948835>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3439706330883948835>,
                       &`public:___cdecl_`public:_struct_UE::StateTree::Async::FActivePathInfo___cdecl_TStateTreeStrongExecutionContext<1>::GetActivePathInfo(void)const___ptr64'::`15'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15057e2d0

bool __thiscall
`TStateTreeStrongExecutionContext<0>::GetActivePathInfo'::__l15::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3439706330883948835>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3439706330883948835>,
                       &`public:___cdecl_`public:_struct_UE::StateTree::Async::FActivePathInfo___cdecl_TStateTreeStrongExecutionContext<0>::GetActivePathInfo(void)const___ptr64'::`15'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

