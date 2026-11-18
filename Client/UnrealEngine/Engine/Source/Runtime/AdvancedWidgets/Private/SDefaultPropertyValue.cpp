// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 3

// Construct @ 14d84b110

void __thiscall
UE::PropertyViewer::SDefaultPropertyValue::Construct
          (SDefaultPropertyValue *this,FArguments *param_1)

{
  longlong *this_00;
  SWidget *pSVar1;
  STextBlock *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FArguments *pFVar7;
  undefined8 *puVar8;
  TSharedRef<SWidget_const_,1> *pTVar9;
  ulong64 uVar10;
  TSharedRef<STextBlock,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined4 local_res8;
  undefined4 uStackX_c;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  longlong lStack_5e0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5d8;
  TSharedRef<STextBlock,1> local_5c0;
  FDestructionSentinel local_5b0;
  undefined1 *local_598;
  FArguments local_590;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  local_res8 = 0;
  FPropertyPath::operator=(&this->Path,&param_1->_Path);
  FPropertyPath::GetLastProperty(&this->Path);
  pFVar7 = STextBlock::FArguments::FArguments(&local_590);
  (pFVar7->_Text).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_Text).Getter,
             (FWriteAccessScope *)&local_5b0);
  local_598 = &(pFVar7->_Text).Getter.field_0x8;
  puVar8 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_598);
  if (puVar8 == (undefined8 *)0x0) {
    pTVar12 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    lStack_5e0 = (ulonglong)local_5c0.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget_const_,1> *)&local_5d8);
    pTVar12 = (pTVar9->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar9->Object;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSDefaultPropertyValue_PropertyViewer_UE___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar8[3] = pSVar1;
    puVar8[4] = pTVar12;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar8[5] = GetText;
    puVar8[6] = lStack_5e0;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5d8._Widget.SharedReferenceCount.ReferenceController);
  }
  if (local_5b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5b0.Accessor,&local_5b0);
  }
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_5d8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SDefaultPropertyValue.cpp"
             ,0x1e,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar11 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_5d8,&local_5c0,pFVar7);
  this_00 = &this->_padding_;
  pTVar12 = (pTVar11->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar11->Object;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar2;
  this->_padding_ = (longlong)pTVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_5c0.SharedReferenceCount.ReferenceController._4_4_,
                      local_5c0.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5d8._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_590);
  return;
}

// CreateInstance @ 14d859dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<SWidget,1> * __cdecl
UE::PropertyViewer::SDefaultPropertyValue::CreateInstance
          (TSharedPtr<SWidget,1> *__return_storage_ptr__,FGenerateArgs *param_1)

{
  byte *pbVar1;
  ForElementType<FProperty_const_*> FVar2;
  code *pcVar3;
  SDefaultPropertyValue *pSVar4;
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
  TSlateDecl<UE::PropertyViewer::SDefaultPropertyValue,RequiredArgs::T0RequiredArgs> local_2d0;
  FName local_2b8;
  FMemScope local_2b0;
  FDestructionSentinel local_2a8;
  FPropertyPath local_290;
  FArguments local_260;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_328;
  pFVar9 = FArguments::FArguments(&local_260);
  pFVar10 = FPropertyPath::FPropertyPath(&local_290,&param_1->Path);
  FPropertyPath::operator=(&pFVar9->_Path,pFVar10);
  FVar2 = (pFVar10->Properties).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)FVar2);
  }
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
  TSlateDecl<UE::PropertyViewer::SDefaultPropertyValue,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UE::PropertyViewer::SDefaultPropertyValue,RequiredArgs::T0RequiredArgs>
            (&local_2d0,"SDefaultPropertyValue",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SDefaultPropertyValue.cpp"
             ,0x11,local_2f8);
  FMemScope::~FMemScope(&local_2b0);
  FLLMScope::~FLLMScope(&local_2f4);
  pSVar4 = local_2d0._Widget.Object;
  if (local_2d0._Widget.Object == (SDefaultPropertyValue *)0x0) {
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
  if (local_2d0._Widget.Object == (SDefaultPropertyValue *)0x0) {
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
    if (cVar7 == '\0') goto LAB_14d859fed;
  }
  bVar8 = 0x20;
LAB_14d859fed:
  *(byte *)&(local_2d0._Widget.Object)->_padding_ =
       (byte)(local_2d0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2d0._Widget.Object)->_padding_ =
       (byte)(local_2d0._Widget.Object)->_padding_ | bVar8;
  if (local_2d0._Widget.Object == (SDefaultPropertyValue *)0x0) {
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
  if (local_2d0._Widget.Object == (SDefaultPropertyValue *)0x0) {
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
  local_2d0._Widget.Object = (SDefaultPropertyValue *)0x0;
  if (pSVar4 == (SDefaultPropertyValue *)0x0) {
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

// GetText @ 14d86cf70

FText * __thiscall
UE::PropertyViewer::SDefaultPropertyValue::GetText
          (SDefaultPropertyValue *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  void *pvVar2;
  FProperty *pFVar3;
  FText *pFVar4;
  undefined1 local_res8 [8];
  FString local_18;
  
  pvVar2 = FPropertyPath::GetContainerPtr(&this->Path);
  if ((pvVar2 != (void *)0x0) &&
     (pFVar3 = FPropertyPath::GetLastProperty(&this->Path), pFVar3 != (FProperty *)0x0)) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    (**(code **)(pFVar3->_padding_ + 0xe0))(pFVar3,&local_18,pvVar2,1,0,0,0x2000,0);
    FText::FromString(__return_storage_ptr__,&local_18);
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
  pFVar4 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar4->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar4->Flags;
  return __return_storage_ptr__;
}

