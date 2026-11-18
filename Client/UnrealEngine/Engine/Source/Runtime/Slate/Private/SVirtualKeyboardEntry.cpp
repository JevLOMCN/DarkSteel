// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 24

// SVirtualKeyboardEntry @ 1428bb090

SVirtualKeyboardEntry * __thiscall
SVirtualKeyboardEntry::SVirtualKeyboardEntry(SVirtualKeyboardEntry *this)

{
  SLeafWidget::SLeafWidget((SLeafWidget *)this);
  this->_padding_ = (longlong)&_vftable__for__SLeafWidget__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IVirtualKeyboardEntry__;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  FText::FText(&(this->Text).Value);
  (this->Text).bIsSet = false;
  *(undefined8 *)&(this->Text).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Text).Getter = 0;
  *(undefined8 *)&(this->Text).Getter.field_0x8 = 0;
  FText::FText(&(this->HintText).Value);
  (this->HintText).bIsSet = false;
  *(undefined8 *)&(this->HintText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->HintText).Getter = 0;
  *(undefined8 *)&(this->HintText).Getter.field_0x8 = 0;
  FSlateFontInfo::FSlateFontInfo(&(this->Font).Value);
  (this->Font).bIsSet = false;
  *(undefined8 *)&(this->Font).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Font).Getter = 0;
  *(undefined8 *)&(this->Font).Getter.field_0x8 = 0;
  (this->ColorAndOpacity).Value.ColorUseRule = UseColor_Specified;
  (this->ColorAndOpacity).bIsSet = false;
  *(undefined8 *)&(this->ColorAndOpacity).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->ColorAndOpacity).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ColorAndOpacity).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ColorAndOpacity).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->ColorAndOpacity).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ColorAndOpacity).Getter = 0;
  (this->IsReadOnly).Value = false;
  (this->IsReadOnly).bIsSet = false;
  *(undefined8 *)&(this->IsReadOnly).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->IsReadOnly).Getter = 0;
  *(undefined8 *)&(this->IsReadOnly).Getter.field_0x8 = 0;
  (this->ClearKeyboardFocusOnCommit).Value = false;
  (this->ClearKeyboardFocusOnCommit).bIsSet = false;
  *(undefined8 *)&(this->ClearKeyboardFocusOnCommit).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ClearKeyboardFocusOnCommit).Getter = 0;
  *(undefined8 *)&(this->ClearKeyboardFocusOnCommit).Getter.field_0x8 = 0;
  *(undefined8 *)&this->OnTextChanged = 0;
  *(undefined8 *)&(this->OnTextChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnTextChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnTextCommitted = 0;
  *(undefined8 *)&(this->OnTextCommitted).field_0x8 = 0;
  *(undefined4 *)&(this->OnTextCommitted).field_0x10 = 0;
  FText::FText(&this->EditedText);
  FText::FText(&this->OriginalText);
  this->bWasFocusedByLastMouseDown = false;
  this->bIsChangingText = false;
  (this->MinDesiredWidth).Value = 0.0;
  (this->MinDesiredWidth).bIsSet = false;
  (this->ScrollHelper).Position.field0_0x0._s_0.X = 0.0;
  (this->ScrollHelper).Position.field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&(this->MinDesiredWidth).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MinDesiredWidth).Getter = 0;
  *(undefined8 *)&(this->MinDesiredWidth).Getter.field_0x8 = 0;
  (this->KeyboardType).Value = Keyboard_Default;
  (this->KeyboardType).bIsSet = false;
  *(undefined8 *)&(this->KeyboardType).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->KeyboardType).Getter = 0;
  *(undefined8 *)&(this->KeyboardType).Getter.field_0x8 = 0;
  (this->bEnableIntegratedKeyboard).Value = false;
  (this->bEnableIntegratedKeyboard).bIsSet = false;
  *(undefined8 *)&(this->bEnableIntegratedKeyboard).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bEnableIntegratedKeyboard).Getter = 0;
  *(undefined8 *)&(this->bEnableIntegratedKeyboard).Getter.field_0x8 = 0;
  (this->VirtualKeyboardOptions).bEnableAutocorrect = false;
  return this;
}

// ~SVirtualKeyboardEntry @ 1428c1be0

void __thiscall SVirtualKeyboardEntry::~SVirtualKeyboardEntry(SVirtualKeyboardEntry *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bEnableIntegratedKeyboard).Getter)
  ;
  pvVar1 = *(void **)&(this->bEnableIntegratedKeyboard).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bEnableIntegratedKeyboard).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->KeyboardType).Getter);
  pvVar1 = *(void **)&(this->KeyboardType).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->KeyboardType).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MinDesiredWidth).Getter);
  pvVar1 = *(void **)&(this->MinDesiredWidth).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MinDesiredWidth).Getter);
  pIVar2 = (this->OriginalText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->EditedText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTextCommitted);
  pvVar1 = *(void **)&(this->OnTextCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTextCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTextChanged);
  pvVar1 = *(void **)&(this->OnTextChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTextChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClearKeyboardFocusOnCommit).Getter
            );
  pvVar1 = *(void **)&(this->ClearKeyboardFocusOnCommit).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClearKeyboardFocusOnCommit).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->IsReadOnly).Getter);
  pvVar1 = *(void **)&(this->IsReadOnly).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->IsReadOnly).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ColorAndOpacity).Getter);
  pvVar1 = *(void **)&(this->ColorAndOpacity).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ColorAndOpacity).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Font).Getter);
  pvVar1 = *(void **)&(this->Font).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Font).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Font).Value.CompositeFont.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->HintText).Getter);
  pvVar1 = *(void **)&(this->HintText).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->HintText).Getter);
  pIVar2 = (this->HintText).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Text).Getter);
  pvVar1 = *(void **)&(this->Text).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Text).Getter);
  pIVar2 = (this->Text).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IVirtualKeyboardEntry__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  return;
}

// ComputeDesiredSize @ 1428e1e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TVector2<double> * __thiscall
SVirtualKeyboardEntry::ComputeDesiredSize
          (SVirtualKeyboardEntry *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  FSlateFontInfo *pFVar8;
  FSlateApplication *pFVar9;
  TVector2<double> *pTVar10;
  FString *pFVar11;
  EKeyboardType *pEVar12;
  FText *pFVar13;
  FDeprecateSlateVector2D FVar14;
  float *pfVar15;
  int iVar16;
  TObjectPtr<UObject_const_>_u_0 *pTVar17;
  float fVar18;
  double dVar19;
  float in_XMM3_Da;
  TStringView<wchar_t> local_res8;
  FString local_b8;
  TSharedRef<FSlateFontMeasure,1> local_a8;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TObjectPtr<UObject_const_>_u_0 local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TObjectPtr<UObject_const_>_u_0 local_78;
  undefined8 uStack_70;
  TObjectPtr<UObject_const_>_u_0 local_68;
  undefined8 uStack_60;
  
  pFVar8 = TAttribute<FSlateFontInfo>::Get(&this->Font);
  pFVar9 = FSlateApplication::Get();
  lVar4 = *(longlong *)&pFVar9->field_0x60;
  if ((*(longlong *)(lVar4 + 8) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TVector2<double> *)(*pcVar5)();
    return pTVar10;
  }
  FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar4 + 8),&local_a8);
  fVar18 = FTextEditHelper::GetFontHeight(pFVar8);
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  cVar7 = (**(code **)(this->_padding_ + 0x1a0))(this);
  if (cVar7 == '\0') {
    pFVar13 = TAttribute<FText>::Get(&this->Text);
  }
  else {
    pFVar13 = &this->EditedText;
  }
  pFVar11 = FText::ToString(pFVar13);
  if (&local_b8 != pFVar11) {
    iVar16 = (pFVar11->Data).ArrayNum;
    _Src = (pFVar11->Data).AllocatorInstance.Data;
    local_b8.Data.ArrayNum = iVar16;
    if (((iVar16 != 0) || (local_b8.Data.ArrayMax != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar16,local_b8.Data.ArrayMax,(ForAnyElementType *)&local_b8,iVar16,
                   &local_b8.Data.ArrayMax), iVar16 != 0)) {
      memcpy(local_b8.Data.AllocatorInstance.Data,_Src,(longlong)iVar16 * 2);
    }
  }
  pEVar12 = TAttribute<enum_EKeyboardType>::Get(&this->KeyboardType);
  if (*pEVar12 == Keyboard_Password) {
    iVar16 = local_b8.Data.ArrayNum + -1;
    if (local_b8.Data.ArrayNum == 0) {
      iVar16 = 0;
    }
    ::FString::Empty(&local_b8);
    for (; iVar16 != 0; iVar16 = iVar16 + -1) {
      ::FString::AppendChar(&local_b8,L'●');
    }
  }
  if (local_b8.Data.ArrayNum < 2) {
    pFVar13 = TAttribute<FText>::Get(&this->HintText);
    pFVar11 = FText::ToString(pFVar13);
    pTVar17 = &local_68;
    iVar16 = (pFVar11->Data).ArrayNum;
    local_88.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar11->Data).AllocatorInstance.Data;
    iStack_80 = iVar16 + -1;
    if (iVar16 == 0) {
      iStack_80 = 0;
    }
    register0x00000020 = (BADSPACEBASE *)&local_res8;
    uStack_60 = CONCAT44(uStack_7c,iStack_80);
    local_68.ObjectPtr.field0_0x0 = local_88.ObjectPtr.field0_0x0;
  }
  else {
    pTVar17 = &local_78;
    local_98 = local_b8.Data.AllocatorInstance.Data;
    iStack_90 = local_b8.Data.ArrayNum + -1;
    if (local_b8.Data.ArrayNum == 0) {
      iStack_90 = 0;
    }
    uStack_70 = CONCAT44(uStack_8c,iStack_90);
    local_78.DebugPtr = (UObject *)local_b8.Data.AllocatorInstance.Data;
  }
  FVar14 = FSlateFontMeasure::Measure
                     (local_a8.Object,
                      (TStringView<wchar_t> *)&((TStringView<wchar_t> *)register0x00000020)->Size,
                      (FSlateFontInfo *)&pTVar17->ObjectPtr,in_XMM3_Da);
  fVar1 = *(float *)((longlong)FVar14 + 4);
  fVar2 = *(float *)FVar14;
  pfVar15 = TAttribute<float>::Get(&this->MinDesiredWidth);
  fVar3 = *pfVar15;
  dVar19 = (double)fVar18;
  if ((double)fVar18 <= (double)fVar1) {
    dVar19 = (double)fVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar19;
  dVar19 = (double)fVar3;
  if ((double)fVar3 <= (double)fVar2) {
    dVar19 = (double)fVar2;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar19;
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Construct @ 14290c1a0

void __thiscall SVirtualKeyboardEntry::Construct(SVirtualKeyboardEntry *this,FArguments *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  FDestructionSentinel local_48;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  TAttribute<FText>::operator=(&this->Text,&param_1->_Text);
  TAttribute<FText>::operator=(&this->HintText,&param_1->_HintText);
  FSlateFontInfo::operator=(&(this->Font).Value,&(param_1->_Font).Value);
  (this->Font).bIsSet = (param_1->_Font).bIsSet;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->Font).Getter,&(param_1->_Font).Getter);
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ColorAndOpacity).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->_ColorAndOpacity).Value.ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->_ColorAndOpacity).Value.field_0x12;
  (this->ColorAndOpacity).Value.ColorUseRule = (param_1->_ColorAndOpacity).Value.ColorUseRule;
  (this->ColorAndOpacity).Value.ColorTableId = EVar2;
  *(undefined2 *)&(this->ColorAndOpacity).Value.field_0x12 = uVar3;
  (this->ColorAndOpacity).bIsSet = (param_1->_ColorAndOpacity).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ColorAndOpacity).Getter,&(param_1->_ColorAndOpacity).Getter);
  (this->IsReadOnly).Value = (param_1->_IsReadOnly).Value;
  (this->IsReadOnly).bIsSet = (param_1->_IsReadOnly).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->IsReadOnly).Getter,&(param_1->_IsReadOnly).Getter);
  (this->ClearKeyboardFocusOnCommit).Value = (param_1->_ClearKeyboardFocusOnCommit).Value;
  (this->ClearKeyboardFocusOnCommit).bIsSet = (param_1->_ClearKeyboardFocusOnCommit).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ClearKeyboardFocusOnCommit).Getter,
             &(param_1->_ClearKeyboardFocusOnCommit).Getter);
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnTextChanged,&param_1->_OnTextChanged);
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  operator=(&this->OnTextCommitted,&param_1->_OnTextCommitted);
  (this->MinDesiredWidth).Value = (param_1->_MinDesiredWidth).Value;
  (this->MinDesiredWidth).bIsSet = (param_1->_MinDesiredWidth).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MinDesiredWidth).Getter,&(param_1->_MinDesiredWidth).Getter);
  (this->KeyboardType).Value = (param_1->_KeyboardType).Value;
  (this->KeyboardType).bIsSet = (param_1->_KeyboardType).bIsSet;
  TDelegate<enum_EKeyboardType___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->KeyboardType).Getter,&(param_1->_KeyboardType).Getter);
  (this->VirtualKeyboardOptions).bEnableAutocorrect =
       (param_1->_VirtualKeyboardOptions).bEnableAutocorrect;
  local_30 = param_1->_EnableIntegratedKeyboard;
  (this->bEnableIntegratedKeyboard).Value = (bool)local_30;
  local_2f = 1;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  (this->bEnableIntegratedKeyboard).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bEnableIntegratedKeyboard).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return;
}

// GetHintText @ 1429412e0

FText * __thiscall
SVirtualKeyboardEntry::GetHintText(SVirtualKeyboardEntry *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  undefined1 local_res8 [8];
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SVirtualKeyboardEntry.h"
                       ,0x81,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar4 = TAttribute<FText>::Get((TAttribute<FText> *)&this->_padding_);
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar4->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar4->Flags;
  return __return_storage_ptr__;
}

// GetIsReadOnly @ 142941570

bool __thiscall SVirtualKeyboardEntry::GetIsReadOnly(SVirtualKeyboardEntry *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get(&this->IsReadOnly);
  return *pbVar1;
}

// GetSelection @ 142948c00

bool __thiscall
SVirtualKeyboardEntry::GetSelection(SVirtualKeyboardEntry *this,int *param_1,int *param_2)

{
  return false;
}

// GetStringToRender @ 142949a30

FString * __thiscall
SVirtualKeyboardEntry::GetStringToRender
          (SVirtualKeyboardEntry *this,FString *__return_storage_ptr__)

{
  int iVar1;
  char cVar2;
  FText *this_00;
  FString *pFVar3;
  EKeyboardType *pEVar4;
  int iVar5;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  cVar2 = (**(code **)(this->_padding_ + 0x1a0))();
  if (cVar2 == '\0') {
    this_00 = TAttribute<FText>::Get(&this->Text);
  }
  else {
    this_00 = &this->EditedText;
  }
  pFVar3 = FText::ToString(this_00);
  ::FString::operator=(__return_storage_ptr__,pFVar3);
  pEVar4 = TAttribute<enum_EKeyboardType>::Get(&this->KeyboardType);
  if (*pEVar4 == Keyboard_Password) {
    iVar1 = (__return_storage_ptr__->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    ::FString::Empty(__return_storage_ptr__);
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      ::FString::AppendChar(__return_storage_ptr__,L'●');
    }
  }
  return __return_storage_ptr__;
}

// GetText @ 142949c80

FText * __thiscall
SVirtualKeyboardEntry::GetText(SVirtualKeyboardEntry *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  undefined1 local_res8 [8];
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SVirtualKeyboardEntry.h"
                       ,0x7a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar4 = TAttribute<FText>::Get((TAttribute<FText> *)&this->_padding_);
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar4->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar4->Flags;
  return __return_storage_ptr__;
}

// GetVirtualKeyboardOptions @ 14294c4d0

FVirtualKeyboardOptions __thiscall
SVirtualKeyboardEntry::GetVirtualKeyboardOptions(SVirtualKeyboardEntry *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *in_RDX;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SVirtualKeyboardEntry.h"
                       ,0x8f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FVirtualKeyboardOptions)(bool)uVar3;
    }
  }
  *in_RDX = *(undefined1 *)&(this->Text).Value.TextData.Reference;
  return (FVirtualKeyboardOptions)SUB81(in_RDX,0);
}

// GetVirtualKeyboardType @ 14294c530

EKeyboardType __thiscall SVirtualKeyboardEntry::GetVirtualKeyboardType(SVirtualKeyboardEntry *this)

{
  code *pcVar1;
  bool bVar2;
  EKeyboardType EVar3;
  EKeyboardType *pEVar4;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SVirtualKeyboardEntry.h"
                       ,0x88,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  pEVar4 = TAttribute<enum_EKeyboardType>::Get(&this->_padding_);
  return *pEVar4;
}

// HasTextChangedFromOriginal @ 142951d90

bool __thiscall SVirtualKeyboardEntry::HasTextChangedFromOriginal(SVirtualKeyboardEntry *this)

{
  bool bVar1;
  bool *pbVar2;
  
  pbVar2 = TAttribute<bool>::Get(&this->IsReadOnly);
  if (*pbVar2 == false) {
    bVar1 = FText::EqualTo(&this->EditedText,&this->OriginalText,Default);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

// IsIntegratedKeyboardEnabled @ 142954490

bool __thiscall SVirtualKeyboardEntry::IsIntegratedKeyboardEnabled(SVirtualKeyboardEntry *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool *pbVar4;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SVirtualKeyboardEntry.h"
                       ,0x9d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pbVar4 = TAttribute<bool>::Get((TAttribute<bool> *)&this->_padding_);
  return *pbVar4;
}

// IsMultilineEntry @ 1429551c0

bool __thiscall SVirtualKeyboardEntry::IsMultilineEntry(SVirtualKeyboardEntry *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SVirtualKeyboardEntry.h"
                       ,0x96,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// OnFocusLost @ 142964b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SVirtualKeyboardEntry::OnFocusLost(SVirtualKeyboardEntry *this,FFocusEvent *param_1)

{
  EFocusCause EVar1;
  longlong *plVar2;
  FSlateApplication *this_00;
  undefined4 uVar3;
  FReadAccessScope local_28;
  
  EVar1 = param_1->Cause;
  if ((EVar1 == Mouse) || (EVar1 == Navigation)) {
    uVar3 = 2;
  }
  else if (EVar1 == Cleared) {
    uVar3 = 3;
  }
  else {
    uVar3 = 0;
  }
  this_00 = FSlateApplication::Get();
  local_28.DestructionSentinel._0_8_ = (IVirtualKeyboardEntry *)0x0;
  local_28.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  FSlateApplication::ShowVirtualKeyboard
            (this_00,false,param_1->UserIndex,(TSharedPtr<IVirtualKeyboardEntry,1> *)&local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTextCommitted,
             &local_28);
  if ((*(int *)&(this->OnTextCommitted).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnTextCommitted).field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,&this->EditedText,uVar3);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnFocusReceived @ 142965a50

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SVirtualKeyboardEntry::OnFocusReceived
          (SVirtualKeyboardEntry *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  FText *pFVar5;
  FSlateApplication *this_00;
  TSharedRef<SWidget,1> *pTVar6;
  atomic<int> *paVar7;
  undefined1 local_res8 [8];
  TSharedPtr<IVirtualKeyboardEntry,1> local_38;
  TSharedRef<SWidget,1> local_28;
  
  pFVar5 = TAttribute<FText>::Get(&this->Text);
  pIVar1 = (this->EditedText).TextData.Reference;
  pIVar2 = (pFVar5->TextData).Reference;
  if (pIVar1 != pIVar2) {
    (this->EditedText).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (this->EditedText).Flags = pFVar5->Flags;
  FText::ToString(&this->EditedText);
  this_00 = FSlateApplication::Get();
  pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
  pTVar3 = (pTVar6->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar6->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    paVar7 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar7 = &pTVar3->SharedReferenceCount;
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  local_38.Object = (IVirtualKeyboardEntry *)(pSVar4 + 1);
  if (pSVar4 == (SWidget *)0x0) {
    local_38.Object = (IVirtualKeyboardEntry *)(SWidget *)0x0;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  local_38.SharedReferenceCount.ReferenceController = pTVar3;
  FSlateApplication::ShowVirtualKeyboard(this_00,true,param_2->UserIndex,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnPaint @ 142981b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
SVirtualKeyboardEntry::OnPaint
          (SVirtualKeyboardEntry *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  ESlateColorStylingMode EVar2;
  undefined1 uVar3;
  FScriptContainerElement *pFVar4;
  FDeprecateSlateVector2D FVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  FSlateApplication *pFVar10;
  FSlateFontInfo *pFVar11;
  FString *pFVar12;
  EKeyboardType *pEVar13;
  FSlateColor *this_00;
  FText *pFVar14;
  longlong lVar15;
  ESlateDrawEffect EVar16;
  float fVar17;
  undefined1 auStackY_1f8 [32];
  FString local_1b8;
  undefined8 local_1a8;
  undefined8 local_1a0;
  FString local_198;
  FLinearColor_u_0 local_188;
  FLinearColor_u_0 local_178;
  undefined8 local_168;
  TVector2<float>_u_0_s_0 local_15c;
  TVector2<float>_u_0_s_0 local_150;
  TSharedRef<FSlateFontMeasure,1> local_148;
  TTransform2<float> local_138;
  TTransform2<float> local_120;
  TTransform2<float> local_108;
  TTransform2<float> local_f0;
  TVector2<float>_u_0 local_d8;
  float local_d0;
  undefined8 local_cc;
  FDeprecateSlateVector2D local_c4;
  float local_bc [2];
  float afStack_b4 [2];
  TVector2<float>_u_0 local_ac;
  byte local_a4;
  TVector2<float>_u_0 local_a0;
  float local_98;
  undefined8 local_94;
  FDeprecateSlateVector2D local_8c;
  float local_84 [2];
  float afStack_7c [2];
  TVector2<float>_u_0 local_74;
  byte local_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pFVar10 = FSlateApplication::Get();
  lVar15 = *(longlong *)&pFVar10->field_0x60;
  if ((*(longlong *)(lVar15 + 8) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    iVar9 = (*pcVar6)();
    return iVar9;
  }
  FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar15 + 8),&local_148);
  if ((!param_7) || (bVar7 = true, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
    bVar7 = false;
  }
  TAttribute<bool>::Get(&this->IsReadOnly);
  EVar16 = DisabledEffect;
  if (bVar7) {
    EVar16 = None;
  }
  pFVar11 = TAttribute<FSlateFontInfo>::Get(&this->Font);
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Data.ArrayNum = 0;
  local_1b8.Data.ArrayMax = 0;
  cVar8 = (**(code **)(this->_padding_ + 0x1a0))(this);
  if (cVar8 == '\0') {
    pFVar14 = TAttribute<FText>::Get(&this->Text);
  }
  else {
    pFVar14 = &this->EditedText;
  }
  pFVar12 = FText::ToString(pFVar14);
  if (&local_1b8 != pFVar12) {
    iVar9 = (pFVar12->Data).ArrayNum;
    pFVar4 = (pFVar12->Data).AllocatorInstance.Data;
    local_1b8.Data.ArrayNum = iVar9;
    if (((iVar9 != 0) || (local_1b8.Data.ArrayMax != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar9,local_1b8.Data.ArrayMax,(ForAnyElementType *)&local_1b8,iVar9,
                   &local_1b8.Data.ArrayMax), iVar9 != 0)) {
      memcpy(local_1b8.Data.AllocatorInstance.Data,pFVar4,(longlong)iVar9 * 2);
    }
  }
  pEVar13 = TAttribute<enum_EKeyboardType>::Get(&this->KeyboardType);
  if (*pEVar13 == Keyboard_Password) {
    iVar9 = local_1b8.Data.ArrayNum + -1;
    if (local_1b8.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    ::FString::Empty(&local_1b8);
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      ::FString::AppendChar(&local_1b8,L'●');
    }
  }
  this_00 = TAttribute<FSlateColor>::Get(&this->ColorAndOpacity);
  EVar2 = this_00->ColorUseRule;
  if (EVar2 != UseColor_Specified) {
    if (EVar2 == UseColor_ColorTable) {
      this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
    }
    else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
      this_00 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      this_00 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  local_188._s_0.R =
       (this_00->SpecifiedColor).field0_0x0._s_0.R *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
  local_188._s_0.G =
       (this_00->SpecifiedColor).field0_0x0._s_0.G *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
  local_188._s_0.B =
       (this_00->SpecifiedColor).field0_0x0._s_0.B *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
  local_188._s_0.A =
       (this_00->SpecifiedColor).field0_0x0._s_0.A *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
  fVar17 = FTextEditHelper::GetFontHeight(pFVar11);
  pFVar10 = FSlateApplication::Get();
  (**(code **)(*(longlong *)pFVar10 + 0x60))(pFVar10);
  (**(code **)(this->_padding_ + 0x1a0))(this);
  FVar5 = param_2->Size;
  local_168._4_4_ = FVar5._4_4_;
  iVar9 = local_1b8.Data.ArrayNum + -1;
  if (local_1b8.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  fVar17 = local_168._4_4_ * __real_3f000000 - fVar17 * __real_3f000000;
  local_168 = FVar5;
  if (iVar9 == 0) {
    local_178._s_0.R = local_188._s_0.R;
    local_178._s_0.B = local_188._s_0.B;
    local_178._s_0.G = local_188._s_0.G;
    local_178._s_0.A = 0.35;
    pFVar14 = TAttribute<FText>::Get(&this->HintText);
    pFVar12 = FText::ToString(pFVar14);
    local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.Data.ArrayNum = (pFVar12->Data).ArrayNum;
    lVar15 = (longlong)local_198.Data.ArrayNum;
    pFVar4 = (pFVar12->Data).AllocatorInstance.Data;
    if (local_198.Data.ArrayNum == 0) {
      local_198.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_198.Data.ArrayNum,0,(ForAnyElementType *)&local_198,
                 local_198.Data.ArrayNum,&local_198.Data.ArrayMax);
      memcpy(local_198.Data.AllocatorInstance.Data,pFVar4,lVar15 * 2);
    }
    local_15c = (param_2->AbsolutePosition).field0_0x0._s_0;
    fVar1 = param_2->Scale;
    FVar5 = param_2->Size;
    local_1a8 = (TVector2<float>_u_0)((ulonglong)(uint)fVar17 << 0x20);
    local_138.Trans.field0_0x0 = local_1a8;
    local_138.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_138.M.M[0][1] = _UNK_15076b184;
    local_138.M.M[1][0] = _UNK_15076b188;
    local_138.M.M[1][1] = _UNK_15076b18c;
    local_1a0._4_4_ = fVar17 * fVar1 + local_15c.Y;
    local_1a0._0_4_ = fVar1 * 0.0 + local_15c.X;
    Concatenate<TTransform2<float>_>(&local_120,&local_138,&param_2->AccumulatedRenderTransform);
    local_d8 = local_1a0;
    local_a4 = param_2->bHasRenderTransform * '\x02' | local_a4 & 0xfc;
    local_cc = 0;
    local_bc[0] = local_120.M.M[0][0];
    local_bc[1] = local_120.M.M[0][1];
    afStack_b4[0] = local_120.M.M[1][0];
    afStack_b4[1] = local_120.M.M[1][1];
    local_ac = local_120.Trans.field0_0x0;
    local_d0 = fVar1;
    local_c4 = FVar5;
    FSlateDrawElement::MakeText
              (param_4,param_5 + 1,(FPaintGeometry *)&local_d8._s_0,&local_198,pFVar11,EVar16,
               (FLinearColor *)&local_178._s_0);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_150 = (param_2->AbsolutePosition).field0_0x0._s_0;
    fVar1 = param_2->Scale;
    local_1a0 = (TVector2<float>_u_0)((ulonglong)(uint)fVar17 << 0x20);
    local_108.Trans.field0_0x0 = local_1a0;
    local_108.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_108.M.M[0][1] = _UNK_15076b184;
    local_108.M.M[1][0] = _UNK_15076b188;
    local_108.M.M[1][1] = _UNK_15076b18c;
    local_1a8._4_4_ = fVar17 * fVar1 + local_150.Y;
    local_1a8._0_4_ = fVar1 * 0.0 + local_150.X;
    Concatenate<TTransform2<float>_>(&local_f0,&local_108,&param_2->AccumulatedRenderTransform);
    local_a0 = local_1a8;
    local_6c = param_2->bHasRenderTransform * '\x02' | local_6c & 0xfc;
    local_94 = 0;
    local_84[0] = local_f0.M.M[0][0];
    local_84[1] = local_f0.M.M[0][1];
    afStack_7c[0] = local_f0.M.M[1][0];
    afStack_7c[1] = local_f0.M.M[1][1];
    local_74 = local_f0.Trans.field0_0x0;
    local_98 = fVar1;
    local_8c = FVar5;
    FSlateDrawElement::MakeText
              (param_4,param_5 + 1,(FPaintGeometry *)&local_a0._s_0,&local_1b8,pFVar11,EVar16,
               (FLinearColor *)&local_188._s_0);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  return param_5 + 1;
}

// RestoreOriginalText @ 14298b6e0

void __thiscall SVirtualKeyboardEntry::RestoreOriginalText(SVirtualKeyboardEntry *this)

{
  bool bVar1;
  bool *pbVar2;
  
  pbVar2 = TAttribute<bool>::Get(&this->IsReadOnly);
  if (*pbVar2 == false) {
    bVar1 = FText::EqualTo(&this->EditedText,&this->OriginalText,Default);
    if (!bVar1) {
      (**(code **)(this->_padding_ + 8))(&this->_padding_,&this->OriginalText,0);
    }
  }
  return;
}

// SetFont @ 142990a60

void __thiscall
SVirtualKeyboardEntry::SetFont(SVirtualKeyboardEntry *this,TAttribute<FSlateFontInfo> *param_1)

{
  FSlateFontInfo::operator=(&(this->Font).Value,&param_1->Value);
  (this->Font).bIsSet = param_1->bIsSet;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->Font).Getter,&param_1->Getter);
  return;
}

// SetSelectionFromVirtualKeyboard @ 142999790

void __thiscall
SVirtualKeyboardEntry::SetSelectionFromVirtualKeyboard
          (SVirtualKeyboardEntry *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SVirtualKeyboardEntry.cpp"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetText @ 14299ad40

void __thiscall
SVirtualKeyboardEntry::SetText(SVirtualKeyboardEntry *this,TAttribute<FText> *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  longlong *plVar3;
  char cVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  FReadAccessScope local_38;
  
  pFVar5 = TAttribute<FText>::Get(param_1);
  pIVar1 = (this->EditedText).TextData.Reference;
  pIVar2 = (pFVar5->TextData).Reference;
  if (pIVar1 != pIVar2) {
    (this->EditedText).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (this->EditedText).Flags = pFVar5->Flags;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->Text).Getter,
             &local_38);
  if ((*(int *)&(this->Text).Getter.field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Text).Getter.field_0x8, plVar3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*plVar3 + 0x38))();
    if (cVar4 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      goto LAB_14299adfa;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  TAttribute<FText>::Set<FText>(&this->Text,&this->EditedText);
LAB_14299adfa:
  this->bNeedsUpdate = true;
  return;
}

// SetTextFromVirtualKeyboard @ 14299c8f0

void __thiscall
SVirtualKeyboardEntry::SetTextFromVirtualKeyboard
          (SVirtualKeyboardEntry *this,FText *param_1,ETextEntryType param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SVirtualKeyboardEntry.cpp"
                       ,0x38,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28);
  if (((int)this->_padding_ != 0) && ((longlong *)this->_padding_ != (longlong *)0x0)) {
    cVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x38))();
    if (cVar5 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      goto LAB_14299c982;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TAttribute<FText>::Set<FText>((TAttribute<FText> *)&this->_padding_,param_1);
LAB_14299c982:
  bVar4 = FText::EqualTo(param_1,(FText *)&this->_padding_,Default);
  if (!bVar4) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (ITextData *)this->_padding_;
    if (pIVar2 != pIVar1) {
      this->_padding_ = (longlong)pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    *(uint *)&this->_padding_ = param_1->Flags;
    *(undefined1 *)((longlong)&(this->Text).Value.TextData.Reference + 1) = 1;
  }
  return;
}

// SupportsKeyboardFocus @ 1429a6290

bool __thiscall SVirtualKeyboardEntry::SupportsKeyboardFocus(SVirtualKeyboardEntry *this)

{
  return true;
}

// Tick @ 1429ab620

void __thiscall
SVirtualKeyboardEntry::Tick
          (SVirtualKeyboardEntry *this,FGeometry *param_1,double param_2,float param_3)

{
  longlong *plVar1;
  char cVar2;
  FText *pFVar3;
  FReadAccessScope local_28;
  
  if (this->bNeedsUpdate != false) {
    cVar2 = (**(code **)(this->_padding_ + 0x1a0))();
    if (cVar2 == '\0') {
      pFVar3 = TAttribute<FText>::Get(&this->Text);
    }
    else {
      pFVar3 = &this->EditedText;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTextChanged,
               &local_28);
    if ((*(int *)&(this->OnTextChanged).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnTextChanged).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,pFVar3);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    this->bNeedsUpdate = false;
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ab6b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x1a0))(this);
  return;
}

