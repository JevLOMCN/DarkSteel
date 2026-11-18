// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 3

// TSharedRef<IAutomationLatentCommand,1><FAutomationSpecBase::FAsyncUntilDoneLatentCommand> @ 14eb26b90

TSharedRef<IAutomationLatentCommand,1> * __thiscall
TSharedRef<IAutomationLatentCommand,1>::
TSharedRef<IAutomationLatentCommand,1><FAutomationSpecBase::FAsyncUntilDoneLatentCommand>
          (TSharedRef<IAutomationLatentCommand,1> *this,
          TRawPtrProxy<FAutomationSpecBase::FAsyncUntilDoneLatentCommand> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FAsyncUntilDoneLatentCommand *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<IAutomationLatentCommand,1> *pTVar9;
  
  this->Object = (IAutomationLatentCommand *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFAsyncUntilDoneLatentCommand_FAutomationSpecBase__U__DefaultDeleter_VFAsyncUntilDoneLatentCommand_FAutomationSpecBase___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FAsyncUntilDoneLatentCommand *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<IAutomationLatentCommand,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FAsyncUntilDoneLatentCommand *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<IAutomationLatentCommand,1><FAutomationSpecBase::FUntilDoneLatentCommand> @ 14eb26e60

TSharedRef<IAutomationLatentCommand,1> * __thiscall
TSharedRef<IAutomationLatentCommand,1>::
TSharedRef<IAutomationLatentCommand,1><FAutomationSpecBase::FUntilDoneLatentCommand>
          (TSharedRef<IAutomationLatentCommand,1> *this,
          TRawPtrProxy<FAutomationSpecBase::FUntilDoneLatentCommand> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FUntilDoneLatentCommand *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<IAutomationLatentCommand,1> *pTVar9;
  
  this->Object = (IAutomationLatentCommand *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFUntilDoneLatentCommand_FAutomationSpecBase__U__DefaultDeleter_VFUntilDoneLatentCommand_FAutomationSpecBase___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FUntilDoneLatentCommand *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<IAutomationLatentCommand,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FUntilDoneLatentCommand *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FOnlineLeaderboardRead,1> @ 14eb303d0

TSharedRef<FOnlineLeaderboardRead,1> * __thiscall
TSharedRef<FOnlineLeaderboardRead,1>::TSharedRef<FOnlineLeaderboardRead,1>
          (TSharedRef<FOnlineLeaderboardRead,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FOnlineLeaderboardRead *pFVar3;
  FOnlineLeaderboardRead *pFVar4;
  TSharedRef<FOnlineLeaderboardRead,1> *pTVar5;
  FOnlineLeaderboardRead *pFVar6;
  
  pFVar3 = ::operator_new(0x48);
  pFVar4 = (FOnlineLeaderboardRead *)0x0;
  pFVar6 = pFVar4;
  if (pFVar3 != (FOnlineLeaderboardRead *)0x0) {
    *(undefined8 *)&pFVar3->LeaderboardName = 0;
    *(undefined8 *)&(pFVar3->LeaderboardName).field_0x8 = 0;
    *(undefined8 *)&(pFVar3->SortedColumn).field_0x0 = 0;
    *(undefined8 *)&(pFVar3->SortedColumn).field_0x8 = 0;
    (pFVar3->ColumnMetadata).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->ColumnMetadata).ArrayNum = 0;
    (pFVar3->ColumnMetadata).ArrayMax = 0;
    (pFVar3->Rows).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Rows).ArrayNum = 0;
    (pFVar3->Rows).ArrayMax = 0;
    pFVar3->ReadState = NotStarted;
    pFVar6 = pFVar3;
  }
  this->Object = pFVar6;
  pFVar3 = ::operator_new(0x18);
  if (pFVar3 != (FOnlineLeaderboardRead *)0x0) {
    *(undefined4 *)&(pFVar3->LeaderboardName).field_0x8 = 1;
    *(undefined ***)&pFVar3->LeaderboardName =
         &
         ___7__TReferenceControllerWithDeleter_VFOnlineLeaderboardRead__U__DefaultDeleter_VFOnlineLeaderboardRead___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)&(pFVar3->LeaderboardName).field_0xc = 1;
    *(FOnlineLeaderboardRead **)&(pFVar3->SortedColumn).field_0x0 = pFVar6;
    pFVar4 = pFVar3;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)pFVar4;
  EnsureRetrievingVTablePtrDuringCtor(L"TSharedRef()");
  if ((this->Object == (FOnlineLeaderboardRead *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FOnlineLeaderboardRead,1> *)(*pcVar1)();
    return pTVar5;
  }
  return this;
}

