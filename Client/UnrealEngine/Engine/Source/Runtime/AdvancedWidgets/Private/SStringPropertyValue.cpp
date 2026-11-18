// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 4

// Construct @ 14d851520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::PropertyViewer::SStringPropertyValue::Construct(SStringPropertyValue *this,FArguments *param_1)

{
  longlong *this_00;
  uint uVar1;
  SWidget *pSVar2;
  SEditableText *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FProperty *pFVar8;
  FArguments *pFVar9;
  undefined8 *puVar10;
  TSharedRef<SWidget_const_,1> *pTVar11;
  ulong64 uVar12;
  TSharedRef<SWidget,1> *pTVar13;
  TSharedRef<SEditableText,1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  undefined4 local_res8;
  undefined4 uStackX_c;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  longlong lStack_720;
  undefined1 local_710 [8];
  ForAnyElementType FStack_708;
  ulonglong local_700;
  FDestructionSentinel local_6f8;
  FDestructionSentinel local_6e0;
  undefined1 *local_6c8;
  TSharedRef<SEditableText,1> local_6c0;
  FArguments local_6b0;
  
  local_res8 = 0;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  FPropertyPath::operator=(&this->Path,&param_1->_Path);
  this->NotifyHook = param_1->_NotifyHook;
  pFVar8 = FPropertyPath::GetLastProperty(&this->Path);
  if ((((pFVar8 != (FProperty *)0x0) && ((*(uint *)(pFVar8->_padding_ + 0x18) >> 0xe & 1) != 0)) ||
      ((pFVar8 != (FProperty *)0x0 &&
       ((uVar1 = *(uint *)(pFVar8->_padding_ + 0x18), (uVar1 >> 0x1e & 1) != 0 ||
        ((uVar1 >> 0xd & 1) != 0)))))) && (pFVar8->ArrayDim == 1)) {
    pFVar9 = SEditableText::FArguments::FArguments(&local_6b0);
    local_700 = 0;
    local_710 = (undefined1  [8])0x0;
    FStack_708.Data = (FScriptContainerElement *)0x0;
    (pFVar9->_SelectAllTextWhenFocused).Value = true;
    (pFVar9->_SelectAllTextWhenFocused).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(pFVar9->_SelectAllTextWhenFocused).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_710);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_710,
               (FWriteAccessScope *)&local_6f8);
    if (((int)local_700 != 0) && (FStack_708.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_708.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_708,0,0,0x10);
      local_700 = local_700 & 0xffffffff00000000;
    }
    if (local_6f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6f8.Accessor,&local_6f8);
    }
    if (FStack_708.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_708.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_710);
    (pFVar9->_Text).bIsSet = true;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_Text).Getter,
               (FWriteAccessScope *)&local_6e0);
    local_6c8 = &(pFVar9->_Text).Getter.field_0x8;
    puVar10 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_6c8);
    if (puVar10 == (undefined8 *)0x0) {
      pTVar15 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    }
    else {
      lStack_720 = (ulonglong)local_6c0.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
      pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                           (TSharedRef<SWidget_const_,1> *)&local_6f8);
      pTVar15 = (pTVar11->SharedReferenceCount).ReferenceController;
      pSVar2 = pTVar11->Object;
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar12;
      *puVar10 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBVSStringPropertyValue_PropertyViewer_UE___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar10[3] = pSVar2;
      puVar10[4] = pTVar15;
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
        UNLOCK();
      }
      bVar7 = true;
      bVar6 = true;
      bVar5 = true;
      puVar10[5] = GetText;
      puVar10[6] = lStack_720;
    }
    if (bVar5) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    }
    if (bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    }
    if (bVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_6f8.Accessor);
    }
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    if (local_6e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6e0.Accessor,&local_6e0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnTextCommitted,
               (FWriteAccessScope *)&local_6e0);
    local_6c8 = &(pFVar9->_OnTextCommitted).field_0x8;
    puVar10 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_6c8);
    if (puVar10 == (undefined8 *)0x0) {
      pTVar15 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    }
    else {
      lStack_720 = (ulonglong)local_6c0.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
      pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                           (TSharedRef<SWidget,1> *)&local_6f8);
      pTVar15 = (pTVar13->SharedReferenceCount).ReferenceController;
      pSVar2 = pTVar13->Object;
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar7 = true;
      bVar6 = true;
      bVar5 = true;
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar12;
      *puVar10 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSStringPropertyValue_PropertyViewer_UE___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar10[3] = pSVar2;
      puVar10[4] = pTVar15;
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar10[5] = OnTextCommitted;
      puVar10[6] = lStack_720;
    }
    if (bVar5) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    }
    if (bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    }
    if (bVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_6f8.Accessor);
    }
    if (local_6e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6e0.Accessor,&local_6e0);
    }
    FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_res20,&local_res18,true);
    TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>
              ((TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs> *)&local_6f8,"SEditableText",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SStringPropertyValue.cpp"
               ,0x25,(T0RequiredArgs *)&local_res8);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
    pTVar14 = TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::operator<<=
                        ((TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs> *)&local_6f8,
                         &local_6c0,pFVar9);
    this_00 = &this->_padding_;
    pTVar15 = (pTVar14->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar14->Object;
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
      FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    }
    else {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
      FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = (longlong)pSVar3;
    this->_padding_ = (longlong)pTVar15;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_6c0.SharedReferenceCount.ReferenceController._4_4_,
                        local_6c0.SharedReferenceCount.ReferenceController._0_4_));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_6f8.Accessor);
    SEditableText::FArguments::~FArguments(&local_6b0);
  }
  return;
}

// CreateInstance @ 14d85a7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<SWidget,1> * __cdecl
UE::PropertyViewer::SStringPropertyValue::CreateInstance
          (TSharedPtr<SWidget,1> *__return_storage_ptr__,FGenerateArgs *param_1)

{
  byte *pbVar1;
  ForElementType<FProperty_const_*> FVar2;
  code *pcVar3;
  SStringPropertyValue *pSVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  FPropertyPath *pFVar10;
  TSharedPtr<SWidget,1> *pTVar11;
  undefined1 auStackY_328 [32];
  T0RequiredArgs local_2f8 [4];
  FLLMScope local_2f4;
  undefined1 local_2f0;
  undefined1 local_2ef;
  undefined1 local_2e8 [8];
  ForAnyElementType FStack_2e0;
  ulonglong local_2d8;
  TSlateDecl<UE::PropertyViewer::SStringPropertyValue,RequiredArgs::T0RequiredArgs> local_2d0;
  FName local_2b8;
  FMemScope local_2b0;
  FDestructionSentinel local_2a8;
  FPropertyPath local_290;
  FArguments local_260;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_328;
  pFVar9 = FArguments::FArguments(&local_260);
  pFVar10 = FPropertyPath::FPropertyPath(&local_290,&param_1->Path);
  FPropertyPath::operator=(&pFVar9->_Path,pFVar10);
  FVar2 = (pFVar10->Properties).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  pFVar9->_NotifyHook = param_1->NotifyHook;
  local_2f0 = param_1->bCanEditValue;
  local_2ef = 1;
  local_2e8 = (undefined1  [8])0x0;
  FStack_2e0.Data = (FScriptContainerElement *)0x0;
  local_2d8 = 0;
  *(undefined1 *)&pFVar9->_padding_ = local_2f0;
  *(undefined1 *)((longlong)&pFVar9->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2e8,
             (FWriteAccessScope *)&local_2a8);
  if (((int)local_2d8 != 0) && (FStack_2e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e0,0,0,0x10);
    local_2d8 = local_2d8 & 0xffffffff00000000;
  }
  if (local_2a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a8.Accessor,&local_2a8);
  }
  if (FStack_2e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2e8);
  FLLMScope::FLLMScope(&local_2f4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2b0,&local_2b8,true);
  TSlateDecl<UE::PropertyViewer::SStringPropertyValue,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UE::PropertyViewer::SStringPropertyValue,RequiredArgs::T0RequiredArgs>
            (&local_2d0,"SStringPropertyValue",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SStringPropertyValue.cpp"
             ,0x12,local_2f8);
  FMemScope::~FMemScope(&local_2b0);
  FLLMScope::~FLLMScope(&local_2f4);
  pSVar4 = local_2d0._Widget.Object;
  if (local_2d0._Widget.Object == (SStringPropertyValue *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_2d0._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  Construct(local_2d0._Widget.Object,pFVar9);
  if (local_2d0._Widget.Object == (SStringPropertyValue *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  if (((local_2d0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_2d0._Widget.Object)->_padding_ + 0x228))(local_2d0._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_14d85aa08;
  }
  bVar8 = 0x20;
LAB_14d85aa08:
  *(byte *)&(local_2d0._Widget.Object)->_padding_ =
       (byte)(local_2d0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2d0._Widget.Object)->_padding_ =
       (byte)(local_2d0._Widget.Object)->_padding_ | bVar8;
  if (local_2d0._Widget.Object == (SStringPropertyValue *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_2d0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_2d0._Widget.Object == (SStringPropertyValue *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  FVar5.ReferenceController = local_2d0._Widget.SharedReferenceCount.ReferenceController;
  local_2d0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2d0._Widget.Object = (SStringPropertyValue *)0x0;
  if (pSVar4 == (SStringPropertyValue *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar4;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_260._Path.Properties.AllocatorInstance.SecondaryData !=
      (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)local_260._Path.Properties.AllocatorInstance.SecondaryData);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_260);
  FVar2 = (param_1->Path).Properties.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  return __return_storage_ptr__;
}

// GetText @ 14d86d230

FText * __thiscall
UE::PropertyViewer::SStringPropertyValue::GetText
          (SStringPropertyValue *this,FText *__return_storage_ptr__)

{
  FPropertyPath *this_00;
  ITextData *pIVar1;
  void *pvVar2;
  FProperty *pFVar3;
  FText *pFVar4;
  FName local_res8;
  FText local_18;
  
  this_00 = &this->Path;
  pvVar2 = FPropertyPath::GetContainerPtr(this_00);
  if (pvVar2 != (void *)0x0) {
    pFVar3 = FPropertyPath::GetLastProperty(this_00);
    if ((pFVar3 != (FProperty *)0x0) && ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0xe & 1) != 0)) {
      local_18.TextData.Reference = (ITextData *)0x0;
      local_18.Flags = 0;
      local_18._12_4_ = 0;
      FProperty::GetValue_InContainer(pFVar3,pvVar2,&local_18);
      FText::FromString(__return_storage_ptr__,(FString *)&local_18);
      if (local_18.TextData.Reference == (ITextData *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_18.TextData.Reference);
      return __return_storage_ptr__;
    }
    pFVar3 = FPropertyPath::GetLastProperty(this_00);
    if ((pFVar3 != (FProperty *)0x0) && ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0x1e & 1) != 0)) {
      FText::FText(&local_18);
      FProperty::GetValue_InContainer(pFVar3,pvVar2,&local_18);
      FText::FText(__return_storage_ptr__,&local_18);
      if (local_18.TextData.Reference == (ITextData *)0x0) {
        return __return_storage_ptr__;
      }
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
    pFVar3 = FPropertyPath::GetLastProperty(this_00);
    if ((pFVar3 != (FProperty *)0x0) && ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0xd & 1) != 0)) {
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      FProperty::GetValue_InContainer(pFVar3,pvVar2,&local_res8);
      FText::FromName(__return_storage_ptr__,&local_res8);
      return __return_storage_ptr__;
    }
  }
  pFVar4 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar4->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_res8);
  }
  __return_storage_ptr__->Flags = pFVar4->Flags;
  return __return_storage_ptr__;
}

// OnTextCommitted @ 14d87cb60

void __thiscall
UE::PropertyViewer::SStringPropertyValue::OnTextCommitted
          (SStringPropertyValue *this,FText *param_1,Type param_2)

{
  FPropertyPath *this_00;
  FScriptContainerElement *_Src;
  INotifyHook *pIVar1;
  void *pvVar2;
  FProperty *pFVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  FName local_res8;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  this_00 = &this->Path;
  pvVar2 = FPropertyPath::GetContainerPtr(this_00);
  if (pvVar2 != (void *)0x0) {
    pFVar3 = FPropertyPath::GetLastProperty(this_00);
    if ((pFVar3 == (FProperty *)0x0) || ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0xe & 1) == 0)) {
      pFVar3 = FPropertyPath::GetLastProperty(this_00);
      if ((pFVar3 == (FProperty *)0x0) || ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0x1e & 1) == 0))
      {
        pFVar3 = FPropertyPath::GetLastProperty(this_00);
        if (pFVar3 == (FProperty *)0x0) {
          return;
        }
        if ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0xd & 1) == 0) {
          return;
        }
        pFVar4 = FText::ToString(param_1);
        if ((pFVar4->Data).ArrayNum == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
        }
        ::FName::FName(&local_res8,pwVar5);
        pIVar1 = this->NotifyHook;
        if (pIVar1 != (INotifyHook *)0x0) {
          (**(code **)*pIVar1)(pIVar1,this_00);
        }
        param_1 = (FText *)&local_res8;
      }
      else {
        pIVar1 = this->NotifyHook;
        if (pIVar1 != (INotifyHook *)0x0) {
          (**(code **)*pIVar1)(pIVar1,this_00);
        }
      }
      FProperty::SetValue_InContainer(pFVar3,pvVar2,param_1);
      pIVar1 = this->NotifyHook;
      if (pIVar1 != (INotifyHook *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,this_00);
      }
    }
    else {
      pFVar4 = FText::ToString(param_1);
      local_28.Data = (FScriptContainerElement *)0x0;
      local_20 = (pFVar4->Data).ArrayNum;
      lVar6 = (longlong)local_20;
      _Src = (pFVar4->Data).AllocatorInstance.Data;
      if (local_20 == 0) {
        local_1c = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_20,0,&local_28,local_20,&local_1c);
        memcpy(local_28.Data,_Src,lVar6 * 2);
      }
      pIVar1 = this->NotifyHook;
      if (pIVar1 != (INotifyHook *)0x0) {
        (**(code **)*pIVar1)(pIVar1,this_00);
      }
      FProperty::SetValue_InContainer(pFVar3,pvVar2,&local_28);
      pIVar1 = this->NotifyHook;
      if (pIVar1 != (INotifyHook *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,this_00);
      }
      if (local_28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data);
      }
    }
  }
  return;
}

