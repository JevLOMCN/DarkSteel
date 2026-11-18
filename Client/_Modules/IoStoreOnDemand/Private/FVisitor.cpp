// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 2

// operator() @ 1445b00e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
`UE::IoStore::FOnDemandContentInstaller::ExecuteRequest'::__l2::FVisitor::operator()
          (void *this,FFlushLastAccess *param_1)

{
  FScriptContainerElement *pFVar1;
  FRequest *pFVar2;
  FOnDemandContentInstaller *this_00;
  FOnDemandIoStore *pFVar3;
  IOnDemandInstallCache *pIVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  TOptional<UE::UnifiedError::FError> *pTVar9;
  ulonglong uVar10;
  undefined8 local_28;
  longlong *local_20;
  char local_18;
  
  pFVar2 = *(FRequest **)((longlong)this + 8);
  this_00 = *(FOnDemandContentInstaller **)this;
  uVar10 = (ulonglong)(pFVar2->Variant).TypeIndex;
  if ((5 < uVar10) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(char *)((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess,FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar10) == '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Request.IsFlushLastAccess()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                         ,0x44c,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this_00->RunningRequests).ArrayNum == 1) {
    pFVar8 = (this_00->RunningRequests).AllocatorInstance.Data;
    pFVar1 = pFVar8 + 8;
    for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 8) {
      if (*(FRequest **)pFVar8 == pFVar2) goto LAB_1445b01a4;
    }
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("RunningRequests.Num() == 1 && RunningRequests.Contains(&Request)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                     ,0x44d,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1445b01a4:
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  if (pFVar2->bCancelled == false) {
    pFVar3 = this_00->IoStore;
    if (((pFVar3->InstallCache).Object == (IOnDemandInstallCache *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar4 = (pFVar3->InstallCache).Object;
    pTVar9 = (TOptional<UE::UnifiedError::FError> *)
             (**(code **)((longlong)*pIVar4 + 0xa8))(pIVar4,&local_28);
    TOptional<UE::UnifiedError::FError>::operator=(&(pFVar2->Result).Error,pTVar9);
    plVar6 = local_20;
    if ((local_18 != '\0') && (local_28 = 0, local_20 != (longlong *)0x0)) {
      local_20 = (longlong *)0x0;
      (**(code **)(*plVar6 + 0x10))();
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + 0x10))();
      }
    }
  }
  UE::IoStore::FOnDemandContentInstaller::CompleteFlushLastAccessRequest(this_00,pFVar2);
  return;
}

// operator() @ 1445b0270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
`UE::IoStore::FOnDemandContentInstaller::ExecuteRequest'::__l2::FVisitor::operator()
          (void *this,FVerify *param_1)

{
  FScriptContainerElement *pFVar1;
  FRequest *pFVar2;
  FOnDemandContentInstaller *this_00;
  FOnDemandIoStore *pFVar3;
  IOnDemandInstallCache *pIVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  TOptional<UE::UnifiedError::FError> *pTVar9;
  ulonglong uVar10;
  undefined8 local_28;
  longlong *local_20;
  char local_18;
  
  pFVar2 = *(FRequest **)((longlong)this + 8);
  this_00 = *(FOnDemandContentInstaller **)this;
  uVar10 = (ulonglong)(pFVar2->Variant).TypeIndex;
  if ((5 < uVar10) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(char *)((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar10) == '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Request.IsVerify()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                         ,0x43d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this_00->RunningRequests).ArrayNum == 1) {
    pFVar8 = (this_00->RunningRequests).AllocatorInstance.Data;
    pFVar1 = pFVar8 + 8;
    for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 8) {
      if (*(FRequest **)pFVar8 == pFVar2) goto LAB_1445b0334;
    }
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("RunningRequests.Num() == 1 && RunningRequests.Contains(&Request)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                     ,0x43e,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1445b0334:
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  if (pFVar2->bCancelled == false) {
    pFVar3 = this_00->IoStore;
    if (((pFVar3->InstallCache).Object == (IOnDemandInstallCache *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar4 = (pFVar3->InstallCache).Object;
    pTVar9 = (TOptional<UE::UnifiedError::FError> *)
             (**(code **)((longlong)*pIVar4 + 0x98))(pIVar4,&local_28);
    TOptional<UE::UnifiedError::FError>::operator=(&(pFVar2->Result).Error,pTVar9);
    plVar6 = local_20;
    if ((local_18 != '\0') && (local_28 = 0, local_20 != (longlong *)0x0)) {
      local_20 = (longlong *)0x0;
      (**(code **)(*plVar6 + 0x10))();
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + 0x10))();
      }
    }
  }
  UE::IoStore::FOnDemandContentInstaller::CompleteVerifyRequest(this_00,pFVar2);
  return;
}

