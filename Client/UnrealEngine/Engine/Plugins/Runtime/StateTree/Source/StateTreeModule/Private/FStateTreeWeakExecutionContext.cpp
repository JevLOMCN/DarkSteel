// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 12

// FStateTreeWeakExecutionContext @ 14d4b1f90

FStateTreeWeakExecutionContext * __thiscall
FStateTreeWeakExecutionContext::FStateTreeWeakExecutionContext
          (FStateTreeWeakExecutionContext *this,FStateTreeExecutionContext *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  byte bVar3;
  UObject *pUVar4;
  FStateTreeExecutionFrame *pFVar5;
  FRequestTransitionResult *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  FStateTreeWeakExecutionContext *pFVar14;
  FActiveStateID FVar15;
  FStateTreeStateHandle *pFVar16;
  uint uVar17;
  TReferenceControllerBase<1> *pTVar18;
  FSelectStateResult *pFVar19;
  UObject *local_res8;
  UObject *local_res10;
  TReferenceControllerBase<1> *local_60;
  TReferenceControllerBase<1> *local_50;
  TReferenceControllerBase<1> *local_40;
  TReferenceControllerBase<1> *local_30;
  
  local_res8 = (UObject *)((ulonglong)local_res8 & 0xffffffff00000000);
  pUVar4 = (UObject *)param_1->_padding_;
  if (pUVar4 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    (this->Owner).WeakPtr = (FWeakObjectPtr)0x0;
    local_res8 = pUVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
    local_res10 = (UObject *)param_1->_padding_;
    if (local_res10 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_res10);
      }
      (this->StateTree).WeakPtr = (FWeakObjectPtr)0x0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_res10);
      }
      FWeakObjectPtr::operator=(&(this->StateTree).WeakPtr,(FObjectPtr)&local_res10);
      FStateTreeInstanceData::GetWeakMutableStorage(param_1->InstanceData,&this->Storage);
      (this->TemporaryStorage).Object = (ITemporaryStorage *)0x0;
      (this->NodeIndex).Value = 0xffff;
      (this->TemporaryStorage).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      this->FrameID = 0;
      this->StateID = 0;
      pFVar5 = param_1->CurrentlyProcessedFrame;
      if (pFVar5 != (FStateTreeExecutionFrame *)0x0) {
        (this->FrameID).Value = (pFVar5->FrameID).Value;
        bVar3 = (pFVar5->ActiveStates).NumStates;
        uVar17 = (uint)bVar3;
        lVar13 = (ulonglong)bVar3 - 1;
        FVar15 = UE::StateTree::FActiveStateID::Invalid;
        if (-1 < lVar13) {
          pFVar16 = (pFVar5->ActiveStates).States + ((ulonglong)bVar3 - 1);
          do {
            uVar17 = uVar17 - 1;
            if (pFVar16->Index == (param_1->CurrentlyProcessedState).Index) {
              FVar15.Value = (pFVar5->ActiveStates).StateIDs[(int)uVar17].Value;
              break;
            }
            pFVar16 = pFVar16 + -1;
            lVar13 = lVar13 + -1;
          } while (-1 < lVar13);
        }
        (this->StateID).Value = FVar15.Value;
        uVar17 = param_1->CurrentNodeIndex;
        if (((uVar17 != 0xffffffff) && (0xfffe < uVar17)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InIndex == INDEX_NONE || IsValidIndex(InIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeIndexTypes.h"
                                ,0x2e,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          pFVar14 = (FStateTreeWeakExecutionContext *)(*pcVar8)();
          return pFVar14;
        }
        if (uVar17 == 0xffffffff) {
          uVar17 = 0xffff;
        }
        (this->NodeIndex).Value = (ushort)uVar17;
      }
      pFVar19 = (param_1->CurrentlyProcessedTemporaryStorage).Object;
      if (pFVar19 == (FSelectStateResult *)0x0) {
        pFVar6 = (param_1->RequestedTransition).Ptr;
        if (pFVar6 == (FRequestTransitionResult *)0x0) {
          pFVar19 = (FSelectStateResult *)0x0;
          local_50 = (TReferenceControllerBase<1> *)0x0;
          bVar10 = false;
          bVar12 = true;
          local_40 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          local_60 = (pFVar6->Selection).SharedReferenceCount.ReferenceController;
          pFVar19 = (pFVar6->Selection).Object;
          if (local_60 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
            UNLOCK();
          }
          bVar10 = true;
          bVar12 = false;
          local_40 = local_60;
          if (local_60 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        bVar11 = false;
        bVar9 = true;
        pTVar18 = local_40;
      }
      else {
        local_30 = (param_1->CurrentlyProcessedTemporaryStorage).SharedReferenceCount.
                   ReferenceController;
        if (local_30 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar11 = true;
        bVar10 = false;
        bVar12 = false;
        bVar9 = false;
        pTVar18 = local_30;
      }
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (bVar9) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40);
      }
      if (bVar12) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
      }
      if (bVar10) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60);
      }
      if (bVar11) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_30);
      }
      (this->TemporaryStorage).Object = (ITemporaryStorage *)pFVar19;
      if (pTVar18 != (this->TemporaryStorage).WeakReferenceCount.ReferenceController) {
        if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar18->WeakReferenceCount = (atomic<int>)((int)pTVar18->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar7 = (this->TemporaryStorage).WeakReferenceCount.ReferenceController;
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar7->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
          }
        }
        (this->TemporaryStorage).WeakReferenceCount.ReferenceController = pTVar18;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
      return this;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// operator= @ 14d4b4490

FStateTreeWeakExecutionContext * __thiscall
FStateTreeWeakExecutionContext::operator=
          (FStateTreeWeakExecutionContext *this,FStateTreeWeakExecutionContext *param_1)

{
  atomic<int> *paVar1;
  TWeakPtr<UE::StateTree::ExecutionContext::ITemporaryStorage,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TWeakPtr<FStateTreeInstanceStorage,1> *pTVar6;
  
  (this->Owner).WeakPtr = (param_1->Owner).WeakPtr;
  pTVar6 = &param_1->Storage;
  (this->StateTree).WeakPtr = (param_1->StateTree).WeakPtr;
  if (&this->Storage != pTVar6) {
    (this->Storage).Object = pTVar6->Object;
    pTVar4 = (param_1->Storage).WeakReferenceCount.ReferenceController;
    pTVar6->Object = (FStateTreeInstanceStorage *)0x0;
    pTVar5 = (this->Storage).WeakReferenceCount.ReferenceController;
    (this->Storage).WeakReferenceCount.ReferenceController = pTVar4;
    (param_1->Storage).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  pTVar2 = &param_1->TemporaryStorage;
  if (&this->TemporaryStorage != pTVar2) {
    (this->TemporaryStorage).Object = pTVar2->Object;
    pTVar4 = (param_1->TemporaryStorage).WeakReferenceCount.ReferenceController;
    pTVar2->Object = (ITemporaryStorage *)0x0;
    pTVar5 = (this->TemporaryStorage).WeakReferenceCount.ReferenceController;
    (this->TemporaryStorage).WeakReferenceCount.ReferenceController = pTVar4;
    (param_1->TemporaryStorage).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  (this->FrameID).Value = (param_1->FrameID).Value;
  (this->StateID).Value = (param_1->StateID).Value;
  (this->NodeIndex).Value = (param_1->NodeIndex).Value;
  return this;
}

// BindDelegate @ 14d4b6bf0

bool __thiscall
FStateTreeWeakExecutionContext::BindDelegate
          (FStateTreeWeakExecutionContext *this,FStateTreeDelegateListener *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FActivePathInfo local_98;
  TStateTreeStrongExecutionContext<1> local_80;
  TDelegateBase<FNotThreadSafeDelegateMode> local_40;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  TStateTreeStrongExecutionContext<1>::TStateTreeStrongExecutionContext<1>(&local_80,this);
  this_00 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&local_28,param_2);
  if (((((param_1->Dispatcher).ID.D == 0 && (param_1->Dispatcher).ID.C == 0) &&
       (param_1->Dispatcher).ID.B == 0) && (param_1->Dispatcher).ID.A == 0) || (param_1->ID == 0)) {
LAB_14d4b6d16:
    bVar2 = true;
  }
  else {
    TStateTreeStrongExecutionContext<1>::GetActivePathInfo(&local_80,&local_98);
    if (local_98.Frame != (FStateTreeExecutionFrame *)0x0) {
      if (local_80.Storage.Object == (FStateTreeInstanceStorage *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (((local_98.Frame)->StateTree).field0_0x0.DebugPtr != (UStateTree *)0x0) {
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  (&local_40,(TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
        FStateTreeDelegateActiveListeners::Add
                  (&((local_80.Storage.Object)->ExecutionState).DelegateActiveListeners,param_1,
                   (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_40,
                   local_80.FrameID,local_80.StateID,local_80.NodeIndex);
        goto LAB_14d4b6d16;
      }
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3439706330883948689>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeAsyncExecutionContext.cpp"
                         ,0x91,"ActivePath.Frame->StateTree");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = false;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>(&local_80);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return bVar2;
}

// BindDelegate @ 14d4b6d60

bool __thiscall
FStateTreeWeakExecutionContext::BindDelegate
          (FStateTreeWeakExecutionContext *this,FStateTreeWeakTaskRef *param_1,
          FStateTreeDelegateListener *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  bool bVar1;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar2;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  pTVar2 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&local_28,param_3);
  bVar1 = BindDelegate(this,param_2,pTVar2);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  return bVar1;
}

// BroadcastDelegate @ 14d4b7410

bool __thiscall
FStateTreeWeakExecutionContext::BroadcastDelegate
          (FStateTreeWeakExecutionContext *this,FStateTreeDelegateDispatcher *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FGuid local_78;
  FActivePathInfo local_68;
  TStateTreeStrongExecutionContext<1> local_50;
  
  TStateTreeStrongExecutionContext<1>::TStateTreeStrongExecutionContext<1>(&local_50,this);
  if ((((param_1->ID).D != 0 || (param_1->ID).C != 0) || (param_1->ID).B != 0) ||
      (param_1->ID).A != 0) {
    TStateTreeStrongExecutionContext<1>::GetActivePathInfo(&local_50,&local_68);
    if (local_68.Frame == (FStateTreeExecutionFrame *)0x0) {
      bVar2 = false;
      goto LAB_14d4b7548;
    }
    if (local_50.Storage.Object == (FStateTreeInstanceStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    FStateTreeDelegateActiveListeners::BroadcastDelegate
              (&((local_50.Storage.Object)->ExecutionState).DelegateActiveListeners,param_1,
               &(local_50.Storage.Object)->ExecutionState);
    if (local_50.Storage.Object == (FStateTreeInstanceStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    local_78.A = (param_1->ID).A;
    local_78.B = (param_1->ID).B;
    local_78.C = (param_1->ID).C;
    local_78.D = (param_1->ID).D;
    bVar2 = UE::StateTree::ExecutionContext::MarkDelegateAsBroadcasted
                      ((FStateTreeDelegateDispatcher *)&local_78,local_68.Frame,
                       local_50.Storage.Object);
    if (bVar2) {
      if (local_50.Storage.Object == (FStateTreeInstanceStorage *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (((UStateTree *)local_50.StateTree.Object == (UStateTree *)0x0) ||
         (local_50.Owner.Object == (UObject *)0x0)) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      TStateTreeStrongExecutionContext<1>::ScheduleNextTick<1>
                ((TNotNull<UObject_*>)local_50.Owner.Object,
                 (TNotNull<UStateTree_const_*>)local_50.StateTree.Object,local_50.Storage.Object,
                 Delegate);
      bVar2 = true;
      goto LAB_14d4b7548;
    }
  }
  bVar2 = true;
LAB_14d4b7548:
  TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>(&local_50);
  return bVar2;
}

// FinishTask @ 14d4bcac0

bool __thiscall
FStateTreeWeakExecutionContext::FinishTask
          (FStateTreeWeakExecutionContext *this,FStateTreeWeakTaskRef *param_1,
          EStateTreeFinishTaskType param_2)

{
  bool bVar1;
  TStateTreeStrongExecutionContext<1> local_48;
  
  TStateTreeStrongExecutionContext<1>::TStateTreeStrongExecutionContext<1>(&local_48,this);
  bVar1 = TStateTreeStrongExecutionContext<1>::FinishTask<1>(&local_48,param_2);
  TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>(&local_48);
  return bVar1;
}

// FinishTask @ 14d4bcb00

bool __thiscall
FStateTreeWeakExecutionContext::FinishTask
          (FStateTreeWeakExecutionContext *this,EStateTreeFinishTaskType param_1)

{
  bool bVar1;
  TStateTreeStrongExecutionContext<1> local_48;
  
  TStateTreeStrongExecutionContext<1>::TStateTreeStrongExecutionContext<1>(&local_48,this);
  bVar1 = TStateTreeStrongExecutionContext<1>::FinishTask<1>(&local_48,param_1);
  TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>(&local_48);
  return bVar1;
}

// RemoveDelegateListener @ 14d4ce370

bool __thiscall
FStateTreeWeakExecutionContext::RemoveDelegateListener
          (FStateTreeWeakExecutionContext *this,FStateTreeDelegateListener *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FActivePathInfo *pFVar4;
  FActivePathInfo FStack_68;
  TStateTreeStrongExecutionContext<1> TStack_50;
  
  TStateTreeStrongExecutionContext<1>::TStateTreeStrongExecutionContext<1>(&TStack_50,this);
  if (((((param_1->Dispatcher).ID.D != 0 || (param_1->Dispatcher).ID.C != 0) ||
       (param_1->Dispatcher).ID.B != 0) || (param_1->Dispatcher).ID.A != 0) && (param_1->ID != 0)) {
    if (((TStack_50.Owner.Object == (UObject *)0x0) ||
        ((TStack_50.StateTree.Object == (UObject *)0x0 ||
         (TStack_50.Storage.Object == (FStateTreeInstanceStorage *)0x0)))) ||
       ((TStack_50.FrameID.Value != 0 &&
        (pFVar4 = TStateTreeStrongExecutionContext<1>::GetActivePathInfo(&TStack_50,&FStack_68),
        pFVar4->Frame == (FStateTreeExecutionFrame *)0x0)))) {
      bVar2 = false;
      goto LAB_14d4d36c5;
    }
    if ((TStack_50.Storage.Object == (FStateTreeInstanceStorage *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    FStateTreeDelegateActiveListeners::Remove
              (&((TStack_50.Storage.Object)->ExecutionState).DelegateActiveListeners,param_1);
  }
  bVar2 = true;
LAB_14d4d36c5:
  TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>(&TStack_50);
  return bVar2;
}

// RequestTransition @ 14d4ce7f0

bool __thiscall
FStateTreeWeakExecutionContext::RequestTransition
          (FStateTreeWeakExecutionContext *this,FStateTreeStateHandle param_1,
          EStateTreeTransitionPriority param_2,EStateTreeSelectionFallback param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FStateTreeTransitionRequest local_78;
  FActivePathInfo local_68;
  TStateTreeStrongExecutionContext<1> local_50;
  
  TStateTreeStrongExecutionContext<1>::TStateTreeStrongExecutionContext<1>(&local_50,this);
  TStateTreeStrongExecutionContext<1>::GetActivePathInfo(&local_50,&local_68);
  if (local_68.Frame == (FStateTreeExecutionFrame *)0x0) {
    bVar2 = false;
  }
  else {
    local_78.SourceFrameID.Value = local_50.FrameID.Value;
    local_78.SourceStateID.Value = local_50.StateID.Value;
    local_78.TargetState.Index = param_1.Index;
    local_78.Priority = param_2;
    local_78.Fallback = param_3;
    if (local_50.Storage.Object == (FStateTreeInstanceStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    FStateTreeInstanceStorage::AddTransitionRequest
              (local_50.Storage.Object,local_50.Owner.Object,&local_78);
    if (local_50.Storage.Object == (FStateTreeInstanceStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (((UStateTree *)local_50.StateTree.Object == (UStateTree *)0x0) ||
       (local_50.Owner.Object == (UObject *)0x0)) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    TStateTreeStrongExecutionContext<1>::ScheduleNextTick<1>
              ((TNotNull<UObject_*>)local_50.Owner.Object,
               (TNotNull<UStateTree_const_*>)local_50.StateTree.Object,local_50.Storage.Object,
               TransitionRequest);
    bVar2 = true;
  }
  TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>(&local_50);
  return bVar2;
}

// SendEvent @ 14d4ceee0

bool __thiscall
FStateTreeWeakExecutionContext::SendEvent
          (FStateTreeWeakExecutionContext *this,FGameplayTag param_1,FConstStructView *param_2,
          FName param_3)

{
  FActivePathInfo *pFVar1;
  bool bVar2;
  TStateTreeStrongExecutionContext<1> local_b8;
  FActivePathInfo local_78;
  FStateTreeMinimalExecutionContext local_58;
  
  TStateTreeStrongExecutionContext<1>::TStateTreeStrongExecutionContext<1>(&local_b8,this);
  if ((((local_b8.Owner.Object == (UObject *)0x0) ||
       ((UStateTree *)local_b8.StateTree.Object == (UStateTree *)0x0)) ||
      (local_b8.Storage.Object == (FStateTreeInstanceStorage *)0x0)) ||
     ((local_b8.FrameID.Value != 0 &&
      (pFVar1 = TStateTreeStrongExecutionContext<1>::GetActivePathInfo(&local_b8,&local_78),
      pFVar1->Frame == (FStateTreeExecutionFrame *)0x0)))) {
    bVar2 = false;
  }
  else {
    if (((UStateTree *)local_b8.StateTree.Object == (UStateTree *)0x0) ||
       (local_b8.Owner.Object == (UObject *)0x0)) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    FStateTreeMinimalExecutionContext::FStateTreeMinimalExecutionContext
              (&local_58,(TNotNull<UObject_*>)local_b8.Owner.Object,
               (TNotNull<UStateTree_const_*>)local_b8.StateTree.Object,local_b8.Storage.Object);
    local_78.Frame = (FStateTreeExecutionFrame *)param_2->ScriptStruct;
    local_78.ParentFrame = (FStateTreeExecutionFrame *)param_2->StructMemory;
    FStateTreeMinimalExecutionContext::SendEvent
              (&local_58,param_1,(FConstStructView *)&local_78,param_3);
    FStateTreeMinimalExecutionContext::~FStateTreeMinimalExecutionContext(&local_58);
    bVar2 = true;
  }
  TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>(&local_b8);
  return bVar2;
}

// UnbindDelegate @ 14d4d3610

bool __thiscall
FStateTreeWeakExecutionContext::UnbindDelegate
          (FStateTreeWeakExecutionContext *this,FStateTreeDelegateListener *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FActivePathInfo *pFVar4;
  FActivePathInfo local_68;
  TStateTreeStrongExecutionContext<1> local_50;
  
  TStateTreeStrongExecutionContext<1>::TStateTreeStrongExecutionContext<1>(&local_50,this);
  if (((((param_1->Dispatcher).ID.D != 0 || (param_1->Dispatcher).ID.C != 0) ||
       (param_1->Dispatcher).ID.B != 0) || (param_1->Dispatcher).ID.A != 0) && (param_1->ID != 0)) {
    if (((local_50.Owner.Object == (UObject *)0x0) ||
        ((local_50.StateTree.Object == (UObject *)0x0 ||
         (local_50.Storage.Object == (FStateTreeInstanceStorage *)0x0)))) ||
       ((local_50.FrameID.Value != 0 &&
        (pFVar4 = TStateTreeStrongExecutionContext<1>::GetActivePathInfo(&local_50,&local_68),
        pFVar4->Frame == (FStateTreeExecutionFrame *)0x0)))) {
      bVar2 = false;
      goto LAB_14d4d36c5;
    }
    if ((local_50.Storage.Object == (FStateTreeInstanceStorage *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    FStateTreeDelegateActiveListeners::Remove
              (&((local_50.Storage.Object)->ExecutionState).DelegateActiveListeners,param_1);
  }
  bVar2 = true;
LAB_14d4d36c5:
  TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>(&local_50);
  return bVar2;
}

// UpdateScheduledTickRequest @ 14d4d4d70

bool __thiscall
FStateTreeWeakExecutionContext::UpdateScheduledTickRequest
          (FStateTreeWeakExecutionContext *this,FScheduledTickHandle param_1,
          FStateTreeScheduledTick param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FActivePathInfo *pFVar4;
  FStateTreeInstanceStorage *pFVar5;
  FActivePathInfo local_68;
  TStateTreeStrongExecutionContext<1> local_50;
  
  TStateTreeStrongExecutionContext<1>::TStateTreeStrongExecutionContext<1>(&local_50,this);
  if ((((local_50.Owner.Object == (UObject *)0x0) ||
       ((UStateTree *)local_50.StateTree.Object == (UStateTree *)0x0)) ||
      (local_50.Storage.Object == (FStateTreeInstanceStorage *)0x0)) ||
     ((pFVar5 = local_50.Storage.Object, local_50.FrameID.Value != 0 &&
      (pFVar4 = TStateTreeStrongExecutionContext<1>::GetActivePathInfo(&local_50,&local_68),
      pFVar5 = local_50.Storage.Object, pFVar4->Frame == (FStateTreeExecutionFrame *)0x0)))) {
    bVar2 = false;
  }
  else {
    if ((pFVar5 == (FStateTreeInstanceStorage *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = FStateTreeExecutionState::UpdateScheduledTickRequest
                      (&pFVar5->ExecutionState,param_1,param_2);
    if (bVar2) {
      if ((pFVar5 == (FStateTreeInstanceStorage *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (((UStateTree *)local_50.StateTree.Object == (UStateTree *)0x0) ||
         (local_50.Owner.Object == (UObject *)0x0)) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      TStateTreeStrongExecutionContext<1>::ScheduleNextTick<1>
                ((TNotNull<UObject_*>)local_50.Owner.Object,
                 (TNotNull<UStateTree_const_*>)local_50.StateTree.Object,pFVar5,ScheduledTickRequest
                );
    }
    bVar2 = true;
  }
  TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>(&local_50);
  return bVar2;
}

