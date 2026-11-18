// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 23

// FIASHostGroup @ 1445a3650

FIASHostGroup * __thiscall
UE::IoStore::FIASHostGroup::FIASHostGroup
          (FIASHostGroup *this,TSharedPtr<UE::IoStore::FIASHostGroup::FImpl,1> *param_1)

{
  (this->Impl).Object = param_1->Object;
  (this->Impl).SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FImpl *)0x0;
  return this;
}

// FIASHostGroup @ 1445a3680

FIASHostGroup * __thiscall
UE::IoStore::FIASHostGroup::FIASHostGroup
          (FIASHostGroup *this,FName param_1,FOnDemandHostGroup *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FIASHostGroup *pFVar5;
  
  pTVar4 = ::operator_new(0x68);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    (this->Impl).Object = (FImpl *)0x10;
    (this->Impl).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFImpl_FIASHostGroup_IoStore_UE___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = (longlong)(param_2->Impl).Object;
    pTVar1 = (param_2->Impl).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)&pTVar4[1].SharedReferenceCount = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4[3]._padding_ = 0;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined8 *)&pTVar4[3].WeakReferenceCount = 0x80;
    *(undefined4 *)((longlong)&pTVar4[4]._padding_ + 4) = 0;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[5]._padding_ = 0;
    pTVar4[5].SharedReferenceCount = (atomic<int>)param_1.ComparisonIndex.Value;
    pTVar4[5].WeakReferenceCount = (atomic<int>)param_1.Number;
    *(undefined1 *)&pTVar4[6]._padding_ = 1;
    if ((FImpl *)(pTVar4 + 1) == (FImpl *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FIASHostGroup *)(*pcVar2)();
        return pFVar5;
      }
    }
    (this->Impl).Object = (FImpl *)(pTVar4 + 1);
    (this->Impl).SharedReferenceCount.ReferenceController = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return this;
}

// FIASHostGroup @ 1445a3780

FIASHostGroup * __thiscall
UE::IoStore::FIASHostGroup::FIASHostGroup
          (FIASHostGroup *this,FName param_1,TStringView<char> *param_2)

{
  atomic<int> *paVar1;
  undefined8 uVar2;
  char *pcVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FAnsiString *pFVar7;
  FIASHostGroup *pFVar8;
  FAnsiString local_38;
  char *local_28;
  undefined8 uStack_20;
  
  pTVar6 = ::operator_new(0x68);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    (this->Impl).Object = (FImpl *)0x10;
    (this->Impl).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFImpl_FIASHostGroup_IoStore_UE___00_SharedPointerInternals__6B_
    ;
    FOnDemandHostGroup::FOnDemandHostGroup((FOnDemandHostGroup *)(pTVar6 + 1));
    local_28 = param_2->DataPtr;
    uStack_20 = *(undefined8 *)&param_2->Size;
    uVar2 = *(undefined8 *)&param_2->Size;
    paVar1 = &pTVar6[4].SharedReferenceCount;
    pcVar3 = param_2->DataPtr;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined8 *)&pTVar6[3].WeakReferenceCount = 0x80;
    *(undefined4 *)((longlong)&pTVar6[4]._padding_ + 4) = 0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5]._padding_ = 0;
    pFVar7 = FAnsiString::ConstructFromPtrSize(&local_38,pcVar3,(int)uVar2);
    if (paVar1 != (atomic<int> *)pFVar7) {
      if (*(void **)paVar1 != (void *)0x0) {
        FMemory::Free(*(void **)paVar1);
      }
      *(FScriptContainerElement **)paVar1 = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)&pTVar6[5]._padding_ = (pFVar7->Data).ArrayNum;
      *(int *)((longlong)&pTVar6[5]._padding_ + 4) = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pTVar6[5].SharedReferenceCount = (atomic<int>)param_1.ComparisonIndex.Value;
    pTVar6[5].WeakReferenceCount = (atomic<int>)param_1.Number;
    *(undefined1 *)&pTVar6[6]._padding_ = 1;
    if ((FImpl *)(pTVar6 + 1) == (FImpl *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FIASHostGroup *)(*pcVar4)();
        return pFVar8;
      }
    }
    (this->Impl).Object = (FImpl *)(pTVar6 + 1);
    (this->Impl).SharedReferenceCount.ReferenceController = pTVar6;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return this;
}

// FIASHostGroup @ 1445a38e0

FIASHostGroup * __thiscall UE::IoStore::FIASHostGroup::FIASHostGroup(FIASHostGroup *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FIASHostGroup *pFVar4;
  
  pTVar3 = ::operator_new(0x68);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Impl).Object = (FImpl *)0x10;
    (this->Impl).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFImpl_FIASHostGroup_IoStore_UE___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    FOnDemandHostGroup::FOnDemandHostGroup((FOnDemandHostGroup *)(pTVar3 + 1));
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined8 *)&pTVar3[3].WeakReferenceCount = 0x80;
    *(undefined4 *)((longlong)&pTVar3[4]._padding_ + 4) = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar3[6]._padding_ = 1;
    if ((FImpl *)(pTVar3 + 1) == (FImpl *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FIASHostGroup *)(*pcVar1)();
        return pFVar4;
      }
    }
    (this->Impl).Object = (FImpl *)(pTVar3 + 1);
    (this->Impl).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 1445a9cb0

FIASHostGroup * __thiscall
UE::IoStore::FIASHostGroup::operator=(FIASHostGroup *this,FIASHostGroup *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FImpl *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->Impl).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->Impl).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->Impl).SharedReferenceCount.ReferenceController;
  (this->Impl).Object = pFVar2;
  (this->Impl).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// AttemptReconnection @ 1445b4130

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

EReconnectionResult __thiscall
UE::IoStore::FIASHostGroup::AttemptReconnection
          (FIASHostGroup *this,uint param_1,atomic<bool> *param_2)

{
  FImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  EReconnectionResult EVar4;
  int iVar5;
  FStaticLogRecord *pFVar6;
  FName *pFVar7;
  TStringView<char> *pTVar8;
  FName local_res8;
  FName local_res20;
  FName local_f8;
  FName local_f0;
  FName local_e8 [2];
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TArrayView<FAnsiString_const_,int> local_c8;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FAnsiString *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TArrayView<FAnsiString_const_,int> local_98;
  TStringView<char> local_88;
  TArrayView<FAnsiString_const_,int> local_78;
  TStringView<char> local_68;
  TStringView<char> local_58;
  TArrayView<FAnsiString_const_,int> local_48;
  TStringView<char> local_38;
  TStringView<char> local_28;
  
  if (((this->Impl).Object == (FImpl *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  iVar5 = FOnDemandHostGroup::PrimaryHostIndex(&((this->Impl).Object)->HostGroup);
  if (iVar5 == -1) {
    if (4 < (byte)LogIas._0_1_) {
      if (((this->Impl).Object == (FImpl *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      local_res8 = ((this->Impl).Object)->Name;
      Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,FName>
                ((FLogCategoryBase *)&LogIas,&::LOG_Static,&local_res8);
    }
    if (((this->Impl).Object == (FImpl *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    pFVar1 = (this->Impl).Object;
    local_d8 = (pFVar1->TestPath).Data.AllocatorInstance.Data;
    iVar5 = (pFVar1->TestPath).Data.ArrayNum;
    iStack_d0 = iVar5 + -1;
    if (iVar5 == 0) {
      iStack_d0 = 0;
    }
    if ((pFVar1 == (FImpl *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    FOnDemandHostGroup::Hosts(&((this->Impl).Object)->HostGroup,&local_98);
    local_88._12_4_ = uStack_cc;
    local_88.Size = iStack_d0;
    local_88.DataPtr = (char *)local_d8;
    local_78.DataPtr = local_98.DataPtr;
    local_78.ArrayNum = local_98.ArrayNum;
    local_78._12_4_ = local_98._12_4_;
    iVar5 = ConnectionTest(&local_78,&local_88,param_1,param_2);
    if (iVar5 == -1) {
      return FailedToConnect;
    }
    if (((this->Impl).Object == (FImpl *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    ((this->Impl).Object)->bHttpEnabled = true;
    if (((this->Impl).Object == (FImpl *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    pFVar1 = (this->Impl).Object;
    FBitWindow::Reset(&pFVar1->HttpErrorHistory,(pFVar1->HttpErrorHistory).Bits.NumBits);
    if (((this->Impl).Object == (FImpl *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    FOnDemandHostGroup::SetPrimaryHost(&((this->Impl).Object)->HostGroup,iVar5);
    if (4 < (byte)LogIas._0_1_) {
      if (((this->Impl).Object == (FImpl *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      FOnDemandHostGroup::PrimaryHost(&((this->Impl).Object)->HostGroup,&local_68);
      if (((this->Impl).Object == (FImpl *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      local_res20 = ((this->Impl).Object)->Name;
      Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,FName,TStringView<char>_>
                ((FLogCategoryBase *)&LogIas,&::LOG_Static,&local_res20,&local_68);
    }
    return Reconnected;
  }
  if (((this->Impl).Object == (FImpl *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  iVar5 = FOnDemandHostGroup::PrimaryHostIndex(&((this->Impl).Object)->HostGroup);
  if (iVar5 != 0) {
    if (4 < (byte)LogIas._0_1_) {
      if (((this->Impl).Object == (FImpl *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      local_f8 = ((this->Impl).Object)->Name;
      Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,FName>
                ((FLogCategoryBase *)&LogIas,&::LOG_Static,&local_f8);
    }
    if (((this->Impl).Object == (FImpl *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    pFVar1 = (this->Impl).Object;
    local_b8 = (pFVar1->TestPath).Data.AllocatorInstance.Data;
    iVar5 = (pFVar1->TestPath).Data.ArrayNum;
    iStack_b0 = iVar5 + -1;
    if (iVar5 == 0) {
      iStack_b0 = 0;
    }
    if ((pFVar1 == (FImpl *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    FOnDemandHostGroup::Hosts(&((this->Impl).Object)->HostGroup,&local_c8);
    if (1 < local_c8.ArrayNum) {
      local_c8.ArrayNum = 1;
    }
    local_a8 = local_c8.DataPtr;
    iStack_a0 = 0;
    if (0 < local_c8.ArrayNum) {
      iStack_a0 = local_c8.ArrayNum;
    }
    if ((iStack_a0 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    local_58._12_4_ = uStack_ac;
    local_58.Size = iStack_b0;
    local_48._12_4_ = uStack_9c;
    local_48.ArrayNum = iStack_a0;
    local_58.DataPtr = (char *)local_b8;
    local_48.DataPtr = local_a8;
    iVar5 = ConnectionTest(&local_48,&local_58,param_1,param_2);
    if (iVar5 == -1) {
      if ((byte)LogIas._0_1_ < 5) {
        return AlreadyConnected;
      }
      if (((this->Impl).Object == (FImpl *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      FOnDemandHostGroup::PrimaryHost(&((this->Impl).Object)->HostGroup,&local_28);
      if (((this->Impl).Object == (FImpl *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      pTVar8 = &local_28;
      pFVar7 = local_e8;
      pFVar6 = &::LOG_Static;
      local_e8[0] = ((this->Impl).Object)->Name;
    }
    else {
      SetPrimaryHost(this,iVar5);
      if ((byte)LogIas._0_1_ < 5) {
        return AlreadyConnected;
      }
      if (((this->Impl).Object == (FImpl *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      FOnDemandHostGroup::PrimaryHost(&((this->Impl).Object)->HostGroup,&local_38);
      if (((this->Impl).Object == (FImpl *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      pTVar8 = &local_38;
      pFVar7 = &local_f0;
      pFVar6 = &::LOG_Static;
      local_f0 = ((this->Impl).Object)->Name;
    }
    Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,FName,TStringView<char>_>
              ((FLogCategoryBase *)&LogIas,pFVar6,pFVar7,pTVar8);
  }
  return AlreadyConnected;
}

// Connect @ 1445bd4a0

void __thiscall UE::IoStore::FIASHostGroup::Connect(FIASHostGroup *this,int param_1)

{
  FImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->Impl).Object == (FImpl *)0x0) {
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
  ((this->Impl).Object)->bHttpEnabled = true;
  if ((this->Impl).Object == (FImpl *)0x0) {
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
  pFVar1 = (this->Impl).Object;
  FBitWindow::Reset(&pFVar1->HttpErrorHistory,(pFVar1->HttpErrorHistory).Bits.NumBits);
  if ((this->Impl).Object == (FImpl *)0x0) {
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
  FOnDemandHostGroup::SetPrimaryHost(&((this->Impl).Object)->HostGroup,param_1);
  return;
}

// Create @ 1445be6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001445be750) */

TIoStatusOr<UE::IoStore::FIASHostGroup> * __cdecl
UE::IoStore::FIASHostGroup::Create
          (TIoStatusOr<UE::IoStore::FIASHostGroup> *__return_storage_ptr__,FName param_1,
          TArrayView<FAnsiString_const_,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TIoStatusOr<UE::IoStore::FIASHostGroup> *pTVar3;
  undefined1 auStack_98 [32];
  FIoStatus local_78;
  FOnDemandHostGroup local_68;
  FIASHostGroup local_58;
  TArrayView<FAnsiString_const_,int> local_48;
  undefined1 local_38 [16];
  FOnDemandHostGroup local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_48.DataPtr = param_2->DataPtr;
  local_48.ArrayNum = param_2->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FOnDemandHostGroup::Create((TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *)local_38,&local_48);
  if (local_38._8_4_ == Ok) {
    FIoStatus::operator=((FIoStatus *)local_38,&FIoStatus::Unknown);
    local_68.Impl.Object = local_28.Impl.Object;
    local_68.Impl.SharedReferenceCount.ReferenceController =
         local_28.Impl.SharedReferenceCount.ReferenceController;
    if (local_28.Impl.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
       ) {
      LOCK();
      (local_28.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
      ;
      UNLOCK();
    }
    FIASHostGroup(&local_58,param_1,&local_68);
    FOnDemandHostGroup::~FOnDemandHostGroup(&local_68);
    if ((local_58.Impl.Object == (FImpl *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIoStatusOr<UE::IoStore::FIASHostGroup> *)(*pcVar1)();
      return pTVar3;
    }
    FBitWindow::Reset(&(local_58.Impl.Object)->HttpErrorHistory,GIasHttpErrorSampleCount);
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
    *(FImpl **)(__return_storage_ptr__->Value).Pad = local_58.Impl.Object;
    *(TReferenceControllerBase<1> **)((__return_storage_ptr__->Value).Pad + 8) =
         local_58.Impl.SharedReferenceCount.ReferenceController;
    if (local_58.Impl.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
       ) {
      LOCK();
      (local_58.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
      ;
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.Impl.SharedReferenceCount.ReferenceController);
  }
  else {
    local_78.ErrorMessage.Chars = (wchar_t *)local_38._0_8_;
    if ((wchar_t *)local_38._0_8_ != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_38._0_8_ + -8) = *(int *)(local_38._0_8_ + -8) + 1;
      UNLOCK();
    }
    local_78.ErrorCode = local_38._8_4_;
    local_78.SystemErrorCode = local_38._12_4_;
    TIoStatusOr<UE::IoStore::FIASHostGroup>::TIoStatusOr<UE::IoStore::FIASHostGroup>
              (__return_storage_ptr__,&local_78);
  }
  FIoStatus::operator=((FIoStatus *)local_38,Unknown);
  if (local_38._8_4_ == Ok) {
    FOnDemandHostGroup::~FOnDemandHostGroup(&local_28);
  }
  FIoStatus::~FIoStatus((FIoStatus *)local_38);
  return __return_storage_ptr__;
}

// Create @ 1445be860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001445be8e0) */

TIoStatusOr<UE::IoStore::FIASHostGroup> * __cdecl
UE::IoStore::FIASHostGroup::Create
          (TIoStatusOr<UE::IoStore::FIASHostGroup> *__return_storage_ptr__,FName param_1,
          TArrayView<FString_const_,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TIoStatusOr<UE::IoStore::FIASHostGroup> *pTVar3;
  undefined1 auStack_98 [32];
  FIoStatus local_78;
  FOnDemandHostGroup local_68;
  FIASHostGroup local_58;
  TArrayView<FString_const_,int> local_48;
  undefined1 local_38 [16];
  FOnDemandHostGroup local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_48.DataPtr = param_2->DataPtr;
  local_48.ArrayNum = param_2->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FOnDemandHostGroup::Create((TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *)local_38,&local_48);
  if (local_38._8_4_ == Ok) {
    FIoStatus::operator=((FIoStatus *)local_38,&FIoStatus::Unknown);
    local_68.Impl.Object = local_28.Impl.Object;
    local_68.Impl.SharedReferenceCount.ReferenceController =
         local_28.Impl.SharedReferenceCount.ReferenceController;
    if (local_28.Impl.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
       ) {
      LOCK();
      (local_28.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
      ;
      UNLOCK();
    }
    FIASHostGroup(&local_58,param_1,&local_68);
    FOnDemandHostGroup::~FOnDemandHostGroup(&local_68);
    if ((local_58.Impl.Object == (FImpl *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIoStatusOr<UE::IoStore::FIASHostGroup> *)(*pcVar1)();
      return pTVar3;
    }
    FBitWindow::Reset(&(local_58.Impl.Object)->HttpErrorHistory,GIasHttpErrorSampleCount);
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
    *(FImpl **)(__return_storage_ptr__->Value).Pad = local_58.Impl.Object;
    *(TReferenceControllerBase<1> **)((__return_storage_ptr__->Value).Pad + 8) =
         local_58.Impl.SharedReferenceCount.ReferenceController;
    if (local_58.Impl.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
       ) {
      LOCK();
      (local_58.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
      ;
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.Impl.SharedReferenceCount.ReferenceController);
  }
  else {
    local_78.ErrorMessage.Chars = (wchar_t *)local_38._0_8_;
    if ((wchar_t *)local_38._0_8_ != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_38._0_8_ + -8) = *(int *)(local_38._0_8_ + -8) + 1;
      UNLOCK();
    }
    local_78.ErrorCode = local_38._8_4_;
    local_78.SystemErrorCode = local_38._12_4_;
    TIoStatusOr<UE::IoStore::FIASHostGroup>::TIoStatusOr<UE::IoStore::FIASHostGroup>
              (__return_storage_ptr__,&local_78);
  }
  FIoStatus::operator=((FIoStatus *)local_38,Unknown);
  if (local_38._8_4_ == Ok) {
    FOnDemandHostGroup::~FOnDemandHostGroup(&local_28);
  }
  FIoStatus::~FIoStatus((FIoStatus *)local_38);
  return __return_storage_ptr__;
}

// Disconnect @ 1445c87e0

void __thiscall UE::IoStore::FIASHostGroup::Disconnect(FIASHostGroup *this)

{
  FImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  FHostGroupManager *pFVar4;
  
  if ((this->Impl).Object == (FImpl *)0x0) {
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
  ((this->Impl).Object)->bHttpEnabled = false;
  if ((this->Impl).Object == (FImpl *)0x0) {
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
  pFVar1 = (this->Impl).Object;
  FBitWindow::Reset(&pFVar1->HttpErrorHistory,(pFVar1->HttpErrorHistory).Bits.NumBits);
  if ((this->Impl).Object == (FImpl *)0x0) {
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
  FOnDemandHostGroup::SetPrimaryHost(&((this->Impl).Object)->HostGroup,-1);
  pFVar4 = FHostGroupManager::Get();
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
            (&pFVar4->HostGroupDisconnectedDelegate);
  return;
}

// GetHostUrls @ 1445d5070

TArrayView<FAnsiString_const_,int> * __thiscall
UE::IoStore::FIASHostGroup::GetHostUrls
          (FIASHostGroup *this,TArrayView<FAnsiString_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FAnsiString_const_,int> *pTVar3;
  
  if ((this->Impl).Object == (FImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<FAnsiString_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FOnDemandHostGroup::Hosts(&((this->Impl).Object)->HostGroup,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetName @ 1445d6670

FName __thiscall UE::IoStore::FIASHostGroup::GetName(FIASHostGroup *this)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FName in_RDX;
  
  if ((this->Impl).Object == (FImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  *(FName *)in_RDX = ((this->Impl).Object)->Name;
  return in_RDX;
}

// GetPrimaryHostIndex @ 1445d6de0

int __thiscall UE::IoStore::FIASHostGroup::GetPrimaryHostIndex(FIASHostGroup *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->Impl).Object == (FImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FOnDemandHostGroup::PrimaryHostIndex(&((this->Impl).Object)->HostGroup);
  return iVar3;
}

// GetPrimaryHostUrl @ 1445d6e30

TStringView<char> * __thiscall
UE::IoStore::FIASHostGroup::GetPrimaryHostUrl
          (FIASHostGroup *this,TStringView<char> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TStringView<char> *pTVar3;
  
  if ((this->Impl).Object == (FImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStringView<char> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FOnDemandHostGroup::PrimaryHost(&((this->Impl).Object)->HostGroup,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTestPath @ 1445d8b60

FAnsiString * __thiscall UE::IoStore::FIASHostGroup::GetTestPath(FIASHostGroup *this)

{
  code *pcVar1;
  bool bVar2;
  FAnsiString *pFVar3;
  
  if ((this->Impl).Object == (FImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAnsiString *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &((this->Impl).Object)->TestPath;
}

// GetUnderlyingHostGroup @ 1445d9050

FOnDemandHostGroup * __thiscall
UE::IoStore::FIASHostGroup::GetUnderlyingHostGroup(FIASHostGroup *this)

{
  code *pcVar1;
  bool bVar2;
  FOnDemandHostGroup *pFVar3;
  
  if ((this->Impl).Object != (FImpl *)0x0) {
    return &((this->Impl).Object)->HostGroup;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FOnDemandHostGroup *)(*pcVar1)();
    return pFVar3;
  }
  return &((this->Impl).Object)->HostGroup;
}

// IsConnected @ 1445ddc80

bool __thiscall UE::IoStore::FIASHostGroup::IsConnected(FIASHostGroup *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  if ((this->Impl).Object == (FImpl *)0x0) {
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
  iVar4 = FOnDemandHostGroup::PrimaryHostIndex(&((this->Impl).Object)->HostGroup);
  return iVar4 != -1;
}

// IsResolved @ 1445de070

bool __thiscall UE::IoStore::FIASHostGroup::IsResolved(FIASHostGroup *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Impl).Object == (FImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FOnDemandHostGroup::IsEmpty(&((this->Impl).Object)->HostGroup);
  return !bVar2;
}

// OnFailedResponse @ 1445e40b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UE::IoStore::FIASHostGroup::OnFailedResponse(FIASHostGroup *this)

{
  uint *puVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  FImpl *pFVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  FString local_48;
  FString local_38 [3];
  
  if (((this->Impl).Object == (FImpl *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pFVar8 = (this->Impl).Object;
  uVar9 = (pFVar8->HttpErrorHistory).Counter;
  (pFVar8->HttpErrorHistory).Counter = uVar9 + 1;
  uVar9 = uVar9 & (pFVar8->HttpErrorHistory).Mask;
  if ((((int)uVar9 < 0) || ((pFVar8->HttpErrorHistory).Bits.NumBits <= (int)uVar9)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  FVar10 = (pFVar8->HttpErrorHistory).Bits.AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<unsigned_int>)0x0) {
    FVar10 = (ForElementType<unsigned_int>)&pFVar8->HttpErrorHistory;
  }
  puVar1 = (uint *)((longlong)FVar10 +
                   (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
  if (((this->Impl).Object == (FImpl *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pFVar8 = (this->Impl).Object;
  iVar6 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits(&(pFVar8->HttpErrorHistory).Bits,0,-1);
  fVar3 = GIasHttpErrorHighWater;
  iVar7 = (pFVar8->HttpErrorHistory).Bits.NumBits;
  if (5 < (byte)LogIas._0_1_) {
    if ((pFVar8 == (FImpl *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    ::FName::ToString(&((this->Impl).Object)->Name,&local_48);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (fVar3 < (float)iVar6 / (float)iVar7) {
    if (((this->Impl).Object == (FImpl *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    iVar7 = FOnDemandHostGroup::PrimaryHostIndex(&((this->Impl).Object)->HostGroup);
    if (iVar7 != -1) {
      Disconnect(this);
      if (2 < (byte)LogIas._0_1_) {
        pFVar8 = TSharedPtr<UE::IoStore::FIASHostGroup::FImpl,1>::operator->(&this->Impl);
        ::FName::ToString(&pFVar8->Name,local_38);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
        if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
        }
      }
      return true;
    }
  }
  return false;
}

// OnSuccessfulResponse @ 1445e6e20

/* WARNING: Type propagation algorithm not settling */

void __thiscall UE::IoStore::FIASHostGroup::OnSuccessfulResponse(FIASHostGroup *this)

{
  uint *puVar1;
  FImpl *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<unsigned_int> FVar6;
  
  if ((this->Impl).Object == (FImpl *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Impl).Object;
  uVar5 = (pFVar2->HttpErrorHistory).Counter;
  (pFVar2->HttpErrorHistory).Counter = uVar5 + 1;
  uVar5 = uVar5 & (pFVar2->HttpErrorHistory).Mask;
  if (((int)uVar5 < 0) || ((pFVar2->HttpErrorHistory).Bits.NumBits <= (int)uVar5)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar6 = (pFVar2->HttpErrorHistory).Bits.AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<unsigned_int>)0x0) {
    FVar6 = (ForElementType<unsigned_int>)&pFVar2->HttpErrorHistory;
  }
  puVar1 = (uint *)((longlong)FVar6 +
                   (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << ((byte)uVar5 & 0x1f));
  return;
}

// Resolve @ 1445f9200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIoStatus * __thiscall
UE::IoStore::FIASHostGroup::Resolve
          (FIASHostGroup *this,FIoStatus *__return_storage_ptr__,
          TArrayView<FAnsiString_const_,int> *param_1)

{
  FImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  FIoStatus *pFVar4;
  undefined1 auStack_a8 [32];
  FOnDemandHostGroup local_88;
  TStringView<wchar_t> local_78;
  TArrayView<FAnsiString_const_,int> local_68;
  FImpl *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  undefined1 local_48 [16];
  FOnDemandHostGroup local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (((this->Impl).Object == (FImpl *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FIoStatus *)(*pcVar2)();
    return pFVar4;
  }
  bVar3 = FOnDemandHostGroup::IsEmpty(&((this->Impl).Object)->HostGroup);
  if (bVar3) {
    local_68.DataPtr = param_1->DataPtr;
    local_68.ArrayNum = param_1->ArrayNum;
    local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FOnDemandHostGroup::Create((TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *)local_48,&local_68);
    if (local_48._8_4_ == Ok) {
      if (((this->Impl).Object == (FImpl *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FIoStatus *)(*pcVar2)();
        return pFVar4;
      }
      pFVar1 = (this->Impl).Object;
      if (local_48._8_4_ != Ok) {
        StatusOrCrash((FIoStatus *)local_48);
      }
      FIoStatus::operator=((FIoStatus *)local_48,&FIoStatus::Unknown);
      local_88.Impl.Object = local_38.Impl.Object;
      local_88.Impl.SharedReferenceCount.ReferenceController =
           local_38.Impl.SharedReferenceCount.ReferenceController;
      if (local_38.Impl.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
             1);
        UNLOCK();
        if (local_38.Impl.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_38.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               + 1);
          UNLOCK();
        }
      }
      local_58 = (pFVar1->HostGroup).Impl.Object;
      pTStack_50 = (pFVar1->HostGroup).Impl.SharedReferenceCount.ReferenceController;
      (pFVar1->HostGroup).Impl.Object = local_38.Impl.Object;
      (pFVar1->HostGroup).Impl.SharedReferenceCount.ReferenceController =
           local_38.Impl.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_50);
      FBitWindow::Reset(&pFVar1->HttpErrorHistory,GIasHttpErrorSampleCount);
      pFVar1->bHttpEnabled = true;
      FOnDemandHostGroup::~FOnDemandHostGroup(&local_88);
      FIoStatus::FIoStatus(__return_storage_ptr__,Ok);
    }
    else {
      (__return_storage_ptr__->ErrorMessage).Chars = (wchar_t *)local_48._0_8_;
      if ((wchar_t *)local_48._0_8_ != (wchar_t *)0x0) {
        LOCK();
        *(int *)(local_48._0_8_ + -8) = *(int *)(local_48._0_8_ + -8) + 1;
        UNLOCK();
      }
      __return_storage_ptr__->SystemErrorCode = local_48._12_4_;
      __return_storage_ptr__->ErrorCode = local_48._8_4_;
    }
    FIoStatus::operator=((FIoStatus *)local_48,Unknown);
    if (local_48._8_4_ == Ok) {
      FOnDemandHostGroup::~FOnDemandHostGroup(&local_38);
    }
    FIoStatus::~FIoStatus((FIoStatus *)local_48);
  }
  else {
    local_78.Size = 0x1e;
    local_78.DataPtr = L"Host group is already resolved";
    FIoStatus::FIoStatus(__return_storage_ptr__,InvalidCode,&local_78);
  }
  return __return_storage_ptr__;
}

// Resolve @ 1445f93d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIoStatus * __thiscall
UE::IoStore::FIASHostGroup::Resolve
          (FIASHostGroup *this,FIoStatus *__return_storage_ptr__,
          TArrayView<FString_const_,int> *param_1)

{
  FImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  FIoStatus *pFVar4;
  undefined1 auStack_a8 [32];
  FOnDemandHostGroup local_88;
  TStringView<wchar_t> local_78;
  TArrayView<FString_const_,int> local_68;
  FImpl *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  undefined1 local_48 [16];
  FOnDemandHostGroup local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (((this->Impl).Object == (FImpl *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FIoStatus *)(*pcVar2)();
    return pFVar4;
  }
  bVar3 = FOnDemandHostGroup::IsEmpty(&((this->Impl).Object)->HostGroup);
  if (bVar3) {
    local_68.DataPtr = param_1->DataPtr;
    local_68.ArrayNum = param_1->ArrayNum;
    local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FOnDemandHostGroup::Create((TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *)local_48,&local_68);
    if (local_48._8_4_ == Ok) {
      if (((this->Impl).Object == (FImpl *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FIoStatus *)(*pcVar2)();
        return pFVar4;
      }
      pFVar1 = (this->Impl).Object;
      if (local_48._8_4_ != Ok) {
        StatusOrCrash((FIoStatus *)local_48);
      }
      FIoStatus::operator=((FIoStatus *)local_48,&FIoStatus::Unknown);
      local_88.Impl.Object = local_38.Impl.Object;
      local_88.Impl.SharedReferenceCount.ReferenceController =
           local_38.Impl.SharedReferenceCount.ReferenceController;
      if (local_38.Impl.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
             1);
        UNLOCK();
        if (local_38.Impl.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_38.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               + 1);
          UNLOCK();
        }
      }
      local_58 = (pFVar1->HostGroup).Impl.Object;
      pTStack_50 = (pFVar1->HostGroup).Impl.SharedReferenceCount.ReferenceController;
      (pFVar1->HostGroup).Impl.Object = local_38.Impl.Object;
      (pFVar1->HostGroup).Impl.SharedReferenceCount.ReferenceController =
           local_38.Impl.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_50);
      FBitWindow::Reset(&pFVar1->HttpErrorHistory,GIasHttpErrorSampleCount);
      pFVar1->bHttpEnabled = true;
      FOnDemandHostGroup::~FOnDemandHostGroup(&local_88);
      FIoStatus::FIoStatus(__return_storage_ptr__,Ok);
    }
    else {
      (__return_storage_ptr__->ErrorMessage).Chars = (wchar_t *)local_48._0_8_;
      if ((wchar_t *)local_48._0_8_ != (wchar_t *)0x0) {
        LOCK();
        *(int *)(local_48._0_8_ + -8) = *(int *)(local_48._0_8_ + -8) + 1;
        UNLOCK();
      }
      __return_storage_ptr__->SystemErrorCode = local_48._12_4_;
      __return_storage_ptr__->ErrorCode = local_48._8_4_;
    }
    FIoStatus::operator=((FIoStatus *)local_48,Unknown);
    if (local_48._8_4_ == Ok) {
      FOnDemandHostGroup::~FOnDemandHostGroup(&local_38);
    }
    FIoStatus::~FIoStatus((FIoStatus *)local_48);
  }
  else {
    local_78.Size = 0x1e;
    local_78.DataPtr = L"Host group is already resolved";
    FIoStatus::FIoStatus(__return_storage_ptr__,InvalidCode,&local_78);
  }
  return __return_storage_ptr__;
}

// SetPrimaryHost @ 1445ff410

void __thiscall UE::IoStore::FIASHostGroup::SetPrimaryHost(FIASHostGroup *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Impl).Object == (FImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FOnDemandHostGroup::SetPrimaryHost(&((this->Impl).Object)->HostGroup,param_1);
  return;
}

