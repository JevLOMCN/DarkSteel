// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationWorker
// Functions: 3

// MakeMessage<FAutomationWorkerRunTestsReply> @ 148bfe160

FAutomationWorkerRunTestsReply * __cdecl
FMessageEndpoint::MakeMessage<FAutomationWorkerRunTestsReply>(void)

{
  FAutomationWorkerRunTestsReply *pFVar1;
  
  pFVar1 = FMemory::Malloc(0x48,0);
  *(undefined4 *)&pFVar1->field_0x41 = 0;
  *(undefined2 *)&pFVar1->field_0x45 = 0;
  pFVar1->field_0x47 = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (pFVar1->TestName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->TestName).Data.ArrayNum = 0;
  (pFVar1->TestName).Data.ArrayMax = 0;
  (pFVar1->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Entries).ArrayNum = 0;
  (pFVar1->Entries).ArrayMax = 0;
  pFVar1->WarningTotal = 0;
  pFVar1->ErrorTotal = 0;
  pFVar1->Duration = 0.0;
  pFVar1->ExecutionCount = 0;
  pFVar1->State = NotRun;
  return pFVar1;
}

// ProcessInbox @ 148c07a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMessageEndpoint::ProcessInbox(FMessageEndpoint *this)

{
  TSharedPtr<IMessageContext,1> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TNode *pTVar2;
  TNode *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  IMessageContext *pIVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  FWeakObjectPtr *this_00;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  IMessageContext *local_48;
  FSharedReferencer<1> FStack_40;
  IMessageContext *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_48 = (IMessageContext *)0x0;
  while( true ) {
    pTVar2 = ((this->Inbox).Tail)->NextNode;
    if (pTVar2 == (TNode *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_40.ReferenceController);
      return;
    }
    pTVar1 = &pTVar2->Item;
    if ((TSharedPtr<IMessageContext,1> *)&local_48 != pTVar1) {
      local_48 = pTVar1->Object;
      pTVar1->Object = (IMessageContext *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_40,&(pTVar2->Item).SharedReferenceCount);
    }
    pTVar3 = (this->Inbox).Tail;
    (this->Inbox).Tail = pTVar2;
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<IMessageContext,1> *)&local_28) {
      pTVar1->Object = (IMessageContext *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pTVar2->Item).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    if (pTVar3 != (TNode *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar3->Item).SharedReferenceCount.ReferenceController);
      ::operator_delete(pTVar3,0x18);
    }
    if ((local_48 == (IMessageContext *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar7)) break;
    local_38 = local_48;
    pTStack_30 = FStack_40.ReferenceController;
    if (FStack_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_48 == (IMessageContext *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar6 = local_38;
    lVar9 = (**(code **)((longlong)*local_38 + 0x18))(local_38);
    if (lVar9 != 0) {
      this_00 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar6 + 0x20))(pIVar6);
      bVar7 = FWeakObjectPtr::IsValid(this_00,false,true);
      if (bVar7) {
        lpCriticalSection = &this->HandlersCS;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        uVar11 = 0;
        uVar12 = 0;
        if (0 < (this->Handlers).ArrayNum) {
          do {
            uVar10 = (uint)uVar11;
            uVar8 = 0;
            if ((int)uVar10 < (this->Handlers).ArrayNum) {
              uVar8 = ~uVar10 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (this->Handlers).AllocatorInstance.Data;
            if ((*(longlong *)(pFVar4 + uVar12) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            (**(code **)**(undefined8 **)(pFVar4 + uVar12))();
            uVar11 = (ulonglong)(uVar10 + 1);
            uVar12 = uVar12 + 0x10;
          } while ((int)(uVar10 + 1) < (this->Handlers).ArrayNum);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// ProcessMessage @ 148c07d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageEndpoint::ProcessMessage(FMessageEndpoint *this,TSharedRef<IMessageContext,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IMessageContext *pIVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  FWeakObjectPtr *this_00;
  uint uVar8;
  
  pIVar1 = param_1->Object;
  lVar7 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar7 != 0) {
    this_00 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar5 = FWeakObjectPtr::IsValid(this_00,false,true);
    if (bVar5) {
      lpCriticalSection = &this->HandlersCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      uVar8 = 0;
      if (0 < (this->Handlers).ArrayNum) {
        lVar7 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar8 < (this->Handlers).ArrayNum) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar2 = (this->Handlers).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar2 + lVar7) == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar3 = *(undefined8 **)(pFVar2 + lVar7);
          (**(code **)*puVar3)(puVar3,param_1);
          uVar8 = uVar8 + 1;
          lVar7 = lVar7 + 0x10;
        } while ((int)uVar8 < (this->Handlers).ArrayNum);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

