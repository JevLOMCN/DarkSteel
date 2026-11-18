// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 4

// ~SItemPair @ 142d674b0

void __thiscall CheckBoxList::SItemPair::~SItemPair(SItemPair *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCheckUpdated);
  pvVar1 = *(void **)&(this->OnCheckUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCheckUpdated);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Item).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::
  ~STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>
            ((STableRow<TSharedRef<CheckBoxList::FItemPair,1>_> *)this);
  return;
}

// GenerateWidgetForColumn @ 142da91b0

TSharedRef<SWidget,1> * __thiscall
CheckBoxList::SItemPair::GenerateWidgetForColumn
          (SItemPair *this,TSharedRef<SWidget,1> *__return_storage_ptr__,FName *param_1)

{
  FItemPair *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FArguments *pFVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TSharedRef<SWidget,1> *pTVar10;
  TSharedRef<SCheckBox,1> *pTVar11;
  TStatId *pTVar12;
  TStatId *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  FArguments *local_res20;
  FLLMScope local_8d8;
  FLLMScope local_8d4;
  FMemScope local_8d0;
  undefined4 uStack_8c8;
  undefined4 uStack_8c4;
  FName local_8c0;
  FMemScope local_8b8;
  FName local_8b0;
  TSharedRef<SCheckBox,1> local_8a8;
  FDestructionSentinel local_898;
  undefined1 *local_880;
  FDestructionSentinel local_878;
  undefined1 *local_860;
  TSharedRef<SWidget_const_,1> local_858;
  TSharedRef<SWidget,1> local_848;
  TSharedRef<SCheckBox,1> local_838;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_828;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_810;
  FArguments local_7f8;
  FArguments local_418;
  
  pTVar13 = (TStatId *)0x0;
  local_res18 = 0;
  if (*param_1 == ColumnID_CheckBox) {
    pFVar6 = SCheckBox::FArguments::FArguments(&local_7f8);
    pFVar6->_Style = this->CheckBoxStyle;
    (pFVar6->_IsChecked).bIsSet = true;
    local_res20 = pFVar6;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(pFVar6->_IsChecked).Getter,(FWriteAccessScope *)&local_898);
    local_880 = &(pFVar6->_IsChecked).Getter.field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_880);
    if (puVar7 == (undefined8 *)0x0) {
      pTVar14 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_1c,local_res18);
    }
    else {
      uStack_8c4 = local_8a8.SharedReferenceCount.ReferenceController._4_4_;
      local_8d0 = (FMemScope)GetToggleSelectedState;
      uStack_8c8 = 0;
      pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_858);
      pTVar14 = (pTVar8->SharedReferenceCount).ReferenceController;
      pTVar12 = &pTVar8->Object[-1].StatID;
      if (pTVar8->Object == (SWidget *)0x0) {
        pTVar12 = pTVar13;
      }
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar9;
      *puVar7 = &
                ___7__TBaseSPMethodDelegateInstance__00__CBVSItemPair_CheckBoxList___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[3] = pTVar12;
      puVar7[4] = pTVar14;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar13 = (TStatId *)0x3;
      *(FMemScope *)(puVar7 + 5) = local_8d0;
      puVar7[6] = CONCAT44(uStack_8c4,uStack_8c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
    if (((ulonglong)pTVar13 & 2) != 0) {
      pTVar13 = (TStatId *)(ulonglong)((uint)pTVar13 & 0xfffffffd);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
    if (((ulonglong)pTVar13 & 1) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_858.SharedReferenceCount.ReferenceController);
    }
    bVar4 = false;
    bVar3 = false;
    bVar5 = false;
    if (local_898.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_898.Accessor,&local_898);
    }
    pFVar6 = local_res20;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &local_res20->_OnCheckStateChanged,(FWriteAccessScope *)&local_878);
    local_860 = &(pFVar6->_OnCheckStateChanged).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_860);
    if (puVar7 == (undefined8 *)0x0) {
      pTVar14 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_1c,local_res18);
    }
    else {
      uStack_8c4 = local_8a8.SharedReferenceCount.ReferenceController._4_4_;
      local_8d0 = (FMemScope)OnToggleSelectedCheckBox;
      uStack_8c8 = 0;
      pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_848);
      pTVar13 = &pTVar10->Object[-1].StatID;
      if (pTVar10->Object == (SWidget *)0x0) {
        pTVar13 = (TStatId *)0x0;
      }
      pTVar14 = (pTVar10->SharedReferenceCount).ReferenceController;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar4 = true;
      bVar3 = true;
      bVar5 = true;
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar9;
      *puVar7 = &
                ___7__TBaseSPMethodDelegateInstance__0A_VSItemPair_CheckBoxList___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[3] = pTVar13;
      puVar7[4] = pTVar14;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
        UNLOCK();
      }
      *(FMemScope *)(puVar7 + 5) = local_8d0;
      puVar7[6] = CONCAT44(uStack_8c4,uStack_8c8);
      pFVar6 = local_res20;
    }
    if (bVar5) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
    if (bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
    if (bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_848.SharedReferenceCount.ReferenceController);
    }
    if (local_878.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_878.Accessor,&local_878);
    }
    FLLMScope::FLLMScope(&local_8d8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_8c0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_8b8,&local_8c0,true);
    TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
              (&local_828,"SCheckBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SCheckBoxList.cpp"
               ,0x30,(T0RequiredArgs *)&local_res18);
    FMemScope::~FMemScope(&local_8b8);
    FLLMScope::~FLLMScope(&local_8d8);
    pTVar11 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_828,&local_838,pFVar6);
    __return_storage_ptr__->Object = (SWidget *)pTVar11->Object;
    pTVar14 = (pTVar11->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar14;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_838.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_828._Widget.SharedReferenceCount.ReferenceController);
    pFVar6 = &local_7f8;
  }
  else {
    if (*param_1 == ColumnID_Item) {
      if (((this->Item).Object == (FItemPair *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar2)();
        return pTVar10;
      }
      pFVar1 = (this->Item).Object;
      __return_storage_ptr__->Object = (pFVar1->Widget).Object;
      pTVar14 = (pFVar1->Widget).SharedReferenceCount.ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar14;
      if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
        return __return_storage_ptr__;
      }
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SCheckBoxList.cpp"
                       ,0x39,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar10;
    }
    pFVar6 = SCheckBox::FArguments::FArguments(&local_418);
    FLLMScope::FLLMScope(&local_8d4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_8b0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_8d0,&local_8b0,true);
    TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
              (&local_810,"SCheckBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SCheckBoxList.cpp"
               ,0x3a,(T0RequiredArgs *)&local_res20);
    FMemScope::~FMemScope(&local_8d0);
    FLLMScope::~FLLMScope(&local_8d4);
    pTVar11 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_810,&local_8a8,pFVar6);
    __return_storage_ptr__->Object = (SWidget *)pTVar11->Object;
    pTVar14 = (pTVar11->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar14;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_8a8.SharedReferenceCount.ReferenceController._4_4_,
                        local_8a8.SharedReferenceCount.ReferenceController._0_4_));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_810._Widget.SharedReferenceCount.ReferenceController);
    pFVar6 = &local_418;
  }
  SCheckBox::FArguments::~FArguments(pFVar6);
  return __return_storage_ptr__;
}

// GetToggleSelectedState @ 142db2280

ECheckBoxState __thiscall CheckBoxList::SItemPair::GetToggleSelectedState(SItemPair *this)

{
  code *pcVar1;
  bool bVar2;
  ECheckBoxState EVar3;
  
  if ((this->Item).Object == (FItemPair *)0x0) {
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
  return ((this->Item).Object)->bIsChecked != false;
}

// OnToggleSelectedCheckBox @ 142dca490

void __thiscall
CheckBoxList::SItemPair::OnToggleSelectedCheckBox(SItemPair *this,ECheckBoxState param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FReadAccessScope local_28;
  
  if ((this->Item).Object == (FItemPair *)0x0) {
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
  ((this->Item).Object)->bIsChecked = param_1 == Checked;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCheckUpdated,
             &local_28);
  if ((*(int *)&(this->OnCheckUpdated).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnCheckUpdated).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

