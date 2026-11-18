// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// BindSP<FTabManager> @ 1426e9b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<FTabManager>
          (TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          FTabManager *param_1,pmf_3f82431b *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  undefined8 *puVar6;
  TReferenceControllerBase<1> *pTVar7;
  ulong64 uVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  uint uStackX_c;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_48);
  local_30 = &this->field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_30);
  if (puVar6 == (undefined8 *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar7 = (TReferenceControllerBase<1> *)param_1->_padding_;
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    pTVar11 = pTVar10;
    pTVar9 = pTVar7;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar7->SharedReferenceCount;
      do {
        pTVar9 = pTVar10;
        if (aVar4 == (atomic<int>)0x0) goto LAB_1426e9c16;
        LOCK();
        aVar5 = pTVar7->SharedReferenceCount;
        bVar12 = aVar4 == aVar5;
        if (bVar12) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar5 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar5;
      } while (!bVar12);
      pTVar11 = (TReferenceControllerBase<1> *)param_1->_padding_;
      pTVar9 = pTVar7;
    }
LAB_1426e9c16:
    pTVar7 = (TReferenceControllerBase<1> *)&pTVar11->SharedReferenceCount;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = pTVar10;
    }
    if ((pTVar7 != (TReferenceControllerBase<1> *)&param_1->_padding_) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedThis.Get() == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x69a,L""), bVar12)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVFTabManager___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = pTVar11;
    puVar6[4] = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000007;
    puVar6[5] = uVar2;
    puVar6[6] = uVar3;
  }
  if (((ulonglong)pTVar10 & 4) != 0) {
    pTVar10 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar10 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  if (((ulonglong)pTVar10 & 2) != 0) {
    pTVar10 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar10 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  if (((ulonglong)pTVar10 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// BindSP<STabSidebar> @ 1426e9d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TDelegateRegistration<void___cdecl(TSharedRef<STabDrawer,1>),FDefaultDelegateUserPolicy>::
BindSP<STabSidebar>(TDelegateRegistration<void___cdecl(TSharedRef<STabDrawer,1>),FDefaultDelegateUserPolicy>
                    *this,STabSidebar *param_1,pmf_0d76e53d *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedRef_VSTabDrawer___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSTabSidebar___00__A6AXV__TSharedRef_VSTabDrawer___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// BindSP<SMenuEntryBlock> @ 1427998a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SMenuEntryBlock>
          (TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy> *this,
          SMenuEntryBlock *param_1,pmf_f4a74f51 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  TSharedRef<SWidget,1> *pTVar4;
  ulong64 uVar5;
  TStatId *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TStatId *pTVar8;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  pTVar6 = (TStatId *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar3 == (undefined8 *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)&param_2->field_0x8;
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar7 = (pTVar4->SharedReferenceCount).ReferenceController;
    pTVar8 = &pTVar4->Object[-1].StatID;
    if (pTVar4->Object == (SWidget *)0x0) {
      pTVar8 = pTVar6;
    }
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar5;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMenuEntryBlock___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = pTVar8;
    puVar3[4] = pTVar7;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (TStatId *)0x3;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if (((ulonglong)pTVar6 & 2) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if (((ulonglong)pTVar6 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// BindSP<SMenuEntryBlock,TAttribute<FText>_&> @ 1427999f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy>::
BindSP<SMenuEntryBlock,TAttribute<FText>_&>
          (TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy> *this,
          SMenuEntryBlock *param_1,pmf_f12da25b *param_2,TAttribute<FText> *param_3)

{
  ITextData *pIVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  TSharedRef<SWidget_const_,1> *pTVar5;
  ulong64 uVar6;
  TStatId *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TStatId *pTVar9;
  undefined4 local_res8;
  undefined4 uStackX_c;
  TSharedRef<SWidget_const_,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  pTVar7 = (TStatId *)0x0;
  local_res8 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_48);
  local_30 = &this->field_0x8;
  puVar4 = UE::Core::Private::DelegateAllocate(0x60,(FDelegateAllocation *)local_30);
  if (puVar4 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
    pTVar8 = (pTVar5->SharedReferenceCount).ReferenceController;
    pTVar9 = &pTVar5->Object[-1].StatID;
    if (pTVar5->Object == (SWidget *)0x0) {
      pTVar9 = pTVar7;
    }
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V__TAttribute_VFText______6B_
    ;
    puVar4[1] = 0;
    pIVar1 = (param_3->Value).TextData.Reference;
    puVar4[1] = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_res8);
    }
    *(uint *)(puVar4 + 2) = (param_3->Value).Flags;
    *(bool *)(puVar4 + 3) = param_3->bIsSet;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined4 *)(puVar4 + 6) = 0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar4 + 4),
               &param_3->Getter);
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar4[7] = uVar6;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMenuEntryBlock___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy__V__TAttribute_VFText______6B_
    ;
    puVar4[8] = pTVar9;
    puVar4[9] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (TStatId *)0x3;
    puVar4[10] = uVar2;
    puVar4[0xb] = uVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar7 & 2) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar7 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// BindSP<SToolBarComboButtonBlock> @ 142799ba0

void __thiscall
TDelegateRegistration<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
BindSP<SToolBarComboButtonBlock>
          (TDelegateRegistration<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,SToolBarComboButtonBlock *param_1,pmf_1bafcc5b *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  TSharedRef<SWidget,1> *pTVar4;
  ulong64 uVar5;
  TStatId *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TStatId *pTVar8;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  pTVar6 = (TStatId *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar3 == (undefined8 *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)&param_2->field_0x8;
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar7 = (pTVar4->SharedReferenceCount).ReferenceController;
    pTVar8 = &pTVar4->Object[-1].StatID;
    if (pTVar4->Object == (SWidget *)0x0) {
      pTVar8 = pTVar6;
    }
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar5;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSToolBarComboButtonBlock___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = pTVar8;
    puVar3[4] = pTVar7;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (TStatId *)0x3;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if (((ulonglong)pTVar6 & 2) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if (((ulonglong)pTVar6 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// BindSP<SInlineEditableTextBlock> @ 1429b2b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TDelegateRegistration<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
BindSP<SInlineEditableTextBlock>
          (TDelegateRegistration<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> *this,
          SInlineEditableTextBlock *param_1,pmf_9d548fec *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSInlineEditableTextBlock___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// BindSP<SInlineEditableTextBlock> @ 1429b2c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TDelegateRegistration<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::BindSP<SInlineEditableTextBlock>
          (void *this,SInlineEditableTextBlock *param_1,pmf_d5b7e6b0 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_38);
  local_20 = (FDelegateAllocation *)((longlong)this + 8);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSInlineEditableTextBlock___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

