// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 4

// Construct @ 14d846510

void __thiscall
UE::PropertyViewer::SBoolPropertyValue::Construct(SBoolPropertyValue *this,FArguments *param_1)

{
  longlong *this_00;
  SWidget *pSVar1;
  SCheckBox *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FProperty *pFVar7;
  FArguments *pFVar8;
  undefined8 *puVar9;
  TSharedRef<SWidget_const_,1> *pTVar10;
  ulong64 uVar11;
  TSharedRef<SWidget,1> *pTVar12;
  TSharedRef<SCheckBox,1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  undefined4 local_res8;
  undefined4 uStackX_c;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  longlong lStack_480;
  FDestructionSentinel local_478;
  undefined1 *local_460;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_458;
  TSharedRef<SCheckBox,1> local_440;
  FArguments local_430;
  
  local_res8 = 0;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  FPropertyPath::operator=(&this->Path,&param_1->_Path);
  this->NotifyHook = param_1->_NotifyHook;
  pFVar7 = FPropertyPath::GetLastProperty(&this->Path);
  if (((pFVar7 != (FProperty *)0x0) && ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x11 & 1) != 0)) &&
     (pFVar7->ArrayDim == 1)) {
    pFVar8 = SCheckBox::FArguments::FArguments(&local_430);
    (pFVar8->_IsChecked).bIsSet = true;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(pFVar8->_IsChecked).Getter,(FWriteAccessScope *)&local_478);
    local_460 = &(pFVar8->_IsChecked).Getter.field_0x8;
    puVar9 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_460);
    if (puVar9 == (undefined8 *)0x0) {
      pTVar14 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    }
    else {
      lStack_480 = (ulonglong)local_440.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
      pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                           (TSharedRef<SWidget_const_,1> *)&local_458);
      pTVar14 = (pTVar10->SharedReferenceCount).ReferenceController;
      pSVar1 = pTVar10->Object;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar11;
      *puVar9 = &
                ___7__TBaseSPMethodDelegateInstance__00__CBVSBoolPropertyValue_PropertyViewer_UE___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar9[3] = pSVar1;
      puVar9[4] = pTVar14;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
        UNLOCK();
      }
      bVar6 = true;
      bVar5 = true;
      bVar4 = true;
      puVar9[5] = HandleIsChecked;
      puVar9[6] = lStack_480;
    }
    if (bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
    if (bVar5) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
    if (bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_458._Widget.SharedReferenceCount.ReferenceController);
    }
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    if (local_478.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_478.Accessor,&local_478);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar8->_OnCheckStateChanged,(FWriteAccessScope *)&local_478);
    local_460 = &(pFVar8->_OnCheckStateChanged).field_0x8;
    puVar9 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_460);
    if (puVar9 == (undefined8 *)0x0) {
      pTVar14 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    }
    else {
      lStack_480 = (ulonglong)local_440.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
      pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                           (TSharedRef<SWidget,1> *)&local_458);
      pTVar14 = (pTVar12->SharedReferenceCount).ReferenceController;
      pSVar1 = pTVar12->Object;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar6 = true;
      bVar5 = true;
      bVar4 = true;
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar11;
      *puVar9 = &
                ___7__TBaseSPMethodDelegateInstance__0A_VSBoolPropertyValue_PropertyViewer_UE___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar9[3] = pSVar1;
      puVar9[4] = pTVar14;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar9[5] = HandleCheckStateChanged;
      puVar9[6] = lStack_480;
    }
    if (bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
    if (bVar5) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
    if (bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_458._Widget.SharedReferenceCount.ReferenceController);
    }
    if (local_478.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_478.Accessor,&local_478);
    }
    FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_res20,&local_res18,true);
    TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
              (&local_458,"SCheckBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SBoolPropertyValue.cpp"
               ,0x23,(T0RequiredArgs *)&local_res8);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
    pTVar13 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_458,&local_440,pFVar8);
    this_00 = &this->_padding_;
    pTVar14 = (pTVar13->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar13->Object;
    if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
      FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    }
    else {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
      FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = (longlong)pSVar2;
    this->_padding_ = (longlong)pTVar14;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_440.SharedReferenceCount.ReferenceController._4_4_,
                        local_440.SharedReferenceCount.ReferenceController._0_4_));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_458._Widget.SharedReferenceCount.ReferenceController);
    SCheckBox::FArguments::~FArguments(&local_430);
  }
  return;
}

// CreateInstance @ 14d859a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<SWidget,1> * __cdecl
UE::PropertyViewer::SBoolPropertyValue::CreateInstance
          (TSharedPtr<SWidget,1> *__return_storage_ptr__,FGenerateArgs *param_1)

{
  byte *pbVar1;
  ForElementType<FProperty_const_*> FVar2;
  code *pcVar3;
  SBoolPropertyValue *pSVar4;
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
  TSlateDecl<UE::PropertyViewer::SBoolPropertyValue,RequiredArgs::T0RequiredArgs> local_2d0;
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
  TSlateDecl<UE::PropertyViewer::SBoolPropertyValue,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UE::PropertyViewer::SBoolPropertyValue,RequiredArgs::T0RequiredArgs>
            (&local_2d0,"SBoolPropertyValue",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SBoolPropertyValue.cpp"
             ,0x12,local_2f8);
  FMemScope::~FMemScope(&local_2b0);
  FLLMScope::~FLLMScope(&local_2f4);
  pSVar4 = local_2d0._Widget.Object;
  if (local_2d0._Widget.Object == (SBoolPropertyValue *)0x0) {
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
  if (local_2d0._Widget.Object == (SBoolPropertyValue *)0x0) {
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
    if (cVar7 == '\0') goto LAB_14d859c98;
  }
  bVar8 = 0x20;
LAB_14d859c98:
  *(byte *)&(local_2d0._Widget.Object)->_padding_ =
       (byte)(local_2d0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2d0._Widget.Object)->_padding_ =
       (byte)(local_2d0._Widget.Object)->_padding_ | bVar8;
  if (local_2d0._Widget.Object == (SBoolPropertyValue *)0x0) {
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
  if (local_2d0._Widget.Object == (SBoolPropertyValue *)0x0) {
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
  local_2d0._Widget.Object = (SBoolPropertyValue *)0x0;
  if (pSVar4 == (SBoolPropertyValue *)0x0) {
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

// HandleCheckStateChanged @ 14d86dab0

void __thiscall
UE::PropertyViewer::SBoolPropertyValue::HandleCheckStateChanged
          (SBoolPropertyValue *this,ECheckBoxState param_1)

{
  INotifyHook *pIVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  FBoolProperty *this_00;
  
  pvVar4 = FPropertyPath::GetContainerPtr(&this->Path);
  if (((pvVar4 != (void *)0x0) &&
      (this_00 = (FBoolProperty *)FPropertyPath::GetLastProperty(&this->Path),
      this_00 != (FBoolProperty *)0x0)) && ((*(uint *)(this_00->_padding_ + 0x18) >> 0x11 & 1) != 0)
     ) {
    pIVar1 = this->NotifyHook;
    if (pIVar1 != (INotifyHook *)0x0) {
      (**(code **)*pIVar1)(pIVar1,&this->Path);
    }
    if (((int)this_00->_padding_ < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3)
       ) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FBoolProperty::SetPropertyValue
              (this_00,(void *)((longlong)*(int *)((longlong)&this_00->_padding_ + 4) +
                               (longlong)pvVar4),param_1 == Checked);
    pIVar1 = this->NotifyHook;
    if (pIVar1 != (INotifyHook *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&this->Path);
    }
  }
  return;
}

// HandleIsChecked @ 14d8700b0

ECheckBoxState __thiscall
UE::PropertyViewer::SBoolPropertyValue::HandleIsChecked(SBoolPropertyValue *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ECheckBoxState EVar4;
  void *pvVar5;
  FProperty *pFVar6;
  
  pvVar5 = FPropertyPath::GetContainerPtr(&this->Path);
  if (pvVar5 != (void *)0x0) {
    pFVar6 = FPropertyPath::GetLastProperty(&this->Path);
    if ((pFVar6 != (FProperty *)0x0) && ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x11 & 1) != 0)) {
      if (pFVar6->ArrayDim < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
      }
      iVar1 = pFVar6->Offset_Internal;
      if ((char)pFVar6[1]._padding_ == '\0') {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldSize != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0xa4b,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
      }
      return (*(byte *)((longlong)&pFVar6[1]._padding_ + 3) &
             *(byte *)((longlong)pvVar5 +
                      (ulonglong)*(byte *)((longlong)&pFVar6[1]._padding_ + 1) + (longlong)iVar1))
             != 0;
    }
  }
  return Undetermined;
}

