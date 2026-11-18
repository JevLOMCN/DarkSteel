// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// FAsyncTaskNotification @ 141814c40

FAsyncTaskNotification * __thiscall
FAsyncTaskNotification::FAsyncTaskNotification
          (FAsyncTaskNotification *this,FAsyncTaskNotification *param_1)

{
  FSharedReferencer<1> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FAsyncTaskNotification local_18;
  
  (this->NotificationImpl).Object = (param_1->NotificationImpl).Object;
  this_00 = &(param_1->NotificationImpl).SharedReferenceCount;
  pTVar1 = this_00->ReferenceController;
  (this->NotificationImpl).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.NotificationImpl.Object = (IAsyncTaskNotificationImpl *)0x0;
  local_18.NotificationImpl.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (param_1 != &local_18) {
    (param_1->NotificationImpl).Object = (IAsyncTaskNotificationImpl *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (this_00,&local_18.NotificationImpl.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.NotificationImpl.SharedReferenceCount.ReferenceController);
  return this;
}

// FAsyncTaskNotification @ 141814ca0

/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncTaskNotification * __thiscall
FAsyncTaskNotification::FAsyncTaskNotification
          (FAsyncTaskNotification *this,FAsyncTaskNotificationConfig *param_1)

{
  IAsyncTaskNotificationImpl *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAsyncTaskNotificationFactory *this_00;
  FAsyncTaskNotification *pFVar4;
  
  this_00 = FAsyncTaskNotificationFactory::Get();
  FAsyncTaskNotificationFactory::InvokeFactory(this_00,&this->NotificationImpl);
  if ((this->NotificationImpl).Object == (IAsyncTaskNotificationImpl *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NotificationImpl",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AsyncTaskNotification.cpp"
                       ,0xb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAsyncTaskNotification *)(*pcVar2)();
      return pFVar4;
    }
    if ((this->NotificationImpl).Object == (IAsyncTaskNotificationImpl *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FAsyncTaskNotification *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  pIVar1 = (this->NotificationImpl).Object;
  (**(code **)((longlong)*pIVar1 + 8))(pIVar1,param_1);
  return this;
}

// ~FAsyncTaskNotification @ 141816380

void __thiscall FAsyncTaskNotification::~FAsyncTaskNotification(FAsyncTaskNotification *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NotificationImpl).SharedReferenceCount.ReferenceController);
  return;
}

// operator= @ 141817020

FAsyncTaskNotification * __thiscall
FAsyncTaskNotification::operator=(FAsyncTaskNotification *this,FAsyncTaskNotification *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IAsyncTaskNotificationImpl *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  FAsyncTaskNotification local_28;
  FAsyncTaskNotification local_18;
  
  if (this != param_1) {
    local_28.NotificationImpl.Object = (IAsyncTaskNotificationImpl *)0x0;
    local_28.NotificationImpl.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (this != &local_28) {
      (this->NotificationImpl).Object = (IAsyncTaskNotificationImpl *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->NotificationImpl).SharedReferenceCount,
                 &local_28.NotificationImpl.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.NotificationImpl.SharedReferenceCount.ReferenceController);
    pTVar1 = (param_1->NotificationImpl).SharedReferenceCount.ReferenceController;
    pIVar2 = (param_1->NotificationImpl).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->NotificationImpl).SharedReferenceCount.ReferenceController;
    (this->NotificationImpl).Object = pIVar2;
    (this->NotificationImpl).SharedReferenceCount.ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    local_18.NotificationImpl.Object = (IAsyncTaskNotificationImpl *)0x0;
    local_18.NotificationImpl.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (param_1 != &local_18) {
      (param_1->NotificationImpl).Object = (IAsyncTaskNotificationImpl *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->NotificationImpl).SharedReferenceCount,
                 &local_18.NotificationImpl.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.NotificationImpl.SharedReferenceCount.ReferenceController);
  }
  return this;
}

// GetPromptAction @ 141826ea0

EAsyncTaskNotificationPromptAction __thiscall
FAsyncTaskNotification::GetPromptAction(FAsyncTaskNotification *this)

{
  code *pcVar1;
  bool bVar2;
  EAsyncTaskNotificationPromptAction EVar3;
  
  if ((this->NotificationImpl).Object == (IAsyncTaskNotificationImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141826ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)((longlong)*(this->NotificationImpl).Object + 0x60))();
  return EVar3;
}

// SetCanCancel @ 141832630

void __thiscall
FAsyncTaskNotification::SetCanCancel(FAsyncTaskNotification *this,TAttribute<bool> *param_1)

{
  IAsyncTaskNotificationImpl *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->NotificationImpl).Object == (IAsyncTaskNotificationImpl *)0x0) {
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
  pIVar1 = (this->NotificationImpl).Object;
                    /* WARNING: Could not recover jumptable at 0x00014183267f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x48))(pIVar1,param_1);
  return;
}

// SetComplete @ 141832690

void __thiscall
FAsyncTaskNotification::SetComplete
          (FAsyncTaskNotification *this,FText *param_1,FText *param_2,bool param_3)

{
  IAsyncTaskNotificationImpl *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->NotificationImpl).Object == (IAsyncTaskNotificationImpl *)0x0) {
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
  pIVar1 = (this->NotificationImpl).Object;
                    /* WARNING: Could not recover jumptable at 0x000141832701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,param_1,param_2,param_3);
  return;
}

// SetComplete @ 141832710

void __thiscall FAsyncTaskNotification::SetComplete(FAsyncTaskNotification *this,bool param_1)

{
  IAsyncTaskNotificationImpl *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->NotificationImpl).Object == (IAsyncTaskNotificationImpl *)0x0) {
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
  pIVar1 = (this->NotificationImpl).Object;
                    /* WARNING: Could not recover jumptable at 0x000141832760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,param_1);
  return;
}

// SetHyperlink @ 141832940

void __thiscall
FAsyncTaskNotification::SetHyperlink
          (FAsyncTaskNotification *this,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1,FText *param_2)

{
  IAsyncTaskNotificationImpl *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->NotificationImpl).Object == (IAsyncTaskNotificationImpl *)0x0) {
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
  pIVar1 = (this->NotificationImpl).Object;
                    /* WARNING: Could not recover jumptable at 0x00014183299f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,param_1,param_2);
  return;
}

// SetKeepOpenOnFailure @ 1418329b0

void __thiscall
FAsyncTaskNotification::SetKeepOpenOnFailure(FAsyncTaskNotification *this,TAttribute<bool> *param_1)

{
  IAsyncTaskNotificationImpl *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->NotificationImpl).Object == (IAsyncTaskNotificationImpl *)0x0) {
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
  pIVar1 = (this->NotificationImpl).Object;
                    /* WARNING: Could not recover jumptable at 0x0001418329ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x58))(pIVar1,param_1);
  return;
}

// SetKeepOpenOnSuccess @ 141832a10

void __thiscall
FAsyncTaskNotification::SetKeepOpenOnSuccess(FAsyncTaskNotification *this,TAttribute<bool> *param_1)

{
  IAsyncTaskNotificationImpl *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->NotificationImpl).Object == (IAsyncTaskNotificationImpl *)0x0) {
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
  pIVar1 = (this->NotificationImpl).Object;
                    /* WARNING: Could not recover jumptable at 0x000141832a5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1,param_1);
  return;
}

// SetNotificationState @ 141832a70

void __thiscall
FAsyncTaskNotification::SetNotificationState
          (FAsyncTaskNotification *this,FAsyncNotificationStateData *param_1)

{
  IAsyncTaskNotificationImpl *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->NotificationImpl).Object == (IAsyncTaskNotificationImpl *)0x0) {
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
  pIVar1 = (this->NotificationImpl).Object;
                    /* WARNING: Could not recover jumptable at 0x000141832abf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,param_1);
  return;
}

// SetProgressText @ 141832b80

void __thiscall FAsyncTaskNotification::SetProgressText(FAsyncTaskNotification *this,FText *param_1)

{
  IAsyncTaskNotificationImpl *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->NotificationImpl).Object == (IAsyncTaskNotificationImpl *)0x0) {
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
  pIVar1 = (this->NotificationImpl).Object;
                    /* WARNING: Could not recover jumptable at 0x000141832bcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,param_1);
  return;
}

// SetPromptText @ 141832be0

void __thiscall FAsyncTaskNotification::SetPromptText(FAsyncTaskNotification *this,FText *param_1)

{
  IAsyncTaskNotificationImpl *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->NotificationImpl).Object == (IAsyncTaskNotificationImpl *)0x0) {
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
  pIVar1 = (this->NotificationImpl).Object;
                    /* WARNING: Could not recover jumptable at 0x000141832c2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,param_1);
  return;
}

// SetTitleText @ 141832c60

void __thiscall
FAsyncTaskNotification::SetTitleText(FAsyncTaskNotification *this,FText *param_1,bool param_2)

{
  IAsyncTaskNotificationImpl *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->NotificationImpl).Object == (IAsyncTaskNotificationImpl *)0x0) {
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
  pIVar1 = (this->NotificationImpl).Object;
                    /* WARNING: Could not recover jumptable at 0x000141832cc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,param_1,param_2);
  return;
}

