// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 64

// GetText_WrapperImpl @ 146959bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMultiLineEditableText::GetText_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  if (*(SMultiLineEditableText **)((longlong)param_1 + 0x528) == (SMultiLineEditableText *)0x0) {
    local_18.TextData.Reference = *(ITextData **)((longlong)param_1 + 0x1d0);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = *(uint *)((longlong)param_1 + 0x1d8);
  }
  else {
    SMultiLineEditableText::GetText
              (*(SMultiLineEditableText **)((longlong)param_1 + 0x528),&local_18);
  }
  FText::operator=(param_2,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetText_WrapperImpl @ 146959c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMultiLineEditableText::SetText_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  local_18.TextData.Reference = *(ITextData **)param_2;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = *(uint *)((longlong)param_2 + 8);
  SetText(param_1,&local_18);
  return;
}

// GetHintText_WrapperImpl @ 146959c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMultiLineEditableText::GetHintText_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  if (*(SMultiLineEditableText **)((longlong)param_1 + 0x528) == (SMultiLineEditableText *)0x0) {
    local_18.TextData.Reference = *(ITextData **)((longlong)param_1 + 0x1e0);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = *(uint *)((longlong)param_1 + 0x1e8);
  }
  else {
    SMultiLineEditableText::GetHintText
              (*(SMultiLineEditableText **)((longlong)param_1 + 0x528),&local_18);
  }
  FText::operator=(param_2,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetHintText_WrapperImpl @ 146959d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMultiLineEditableText::SetHintText_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  local_18.TextData.Reference = *(ITextData **)param_2;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = *(uint *)((longlong)param_2 + 8);
  SetHintText(param_1,&local_18);
  return;
}

// GetbIsReadOnly_WrapperImpl @ 146959d60

void __cdecl UMultiLineEditableText::GetbIsReadOnly_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x4f0);
  return;
}

// SetbIsReadOnly_WrapperImpl @ 146959d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMultiLineEditableText::SetbIsReadOnly_WrapperImpl(void *param_1,void *param_2)

{
  SetIsReadOnly(param_1,*(bool *)param_2);
  return;
}

// GetSelectAllTextWhenFocused_WrapperImpl @ 146959d90

void __cdecl
UMultiLineEditableText::GetSelectAllTextWhenFocused_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x4f1);
  return;
}

// SetSelectAllTextWhenFocused_WrapperImpl @ 146959ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMultiLineEditableText::SetSelectAllTextWhenFocused_WrapperImpl(void *param_1,void *param_2)

{
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30[0] = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x4f1) = local_30[0];
  if (*(SMultiLineEditableText **)((longlong)param_1 + 0x528) != (SMultiLineEditableText *)0x0) {
    local_30[1] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SMultiLineEditableText::SetSelectAllTextWhenFocused
              (*(SMultiLineEditableText **)((longlong)param_1 + 0x528),(TAttribute<bool> *)local_30)
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// GetRevertTextOnEscape_WrapperImpl @ 146959f70

void __cdecl UMultiLineEditableText::GetRevertTextOnEscape_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x4f3);
  return;
}

// SetRevertTextOnEscape_WrapperImpl @ 146959fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMultiLineEditableText::SetRevertTextOnEscape_WrapperImpl(void *param_1,void *param_2)

{
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30[0] = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x4f3) = local_30[0];
  if (*(SMultiLineEditableText **)((longlong)param_1 + 0x528) != (SMultiLineEditableText *)0x0) {
    local_30[1] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SMultiLineEditableText::SetRevertTextOnEscape
              (*(SMultiLineEditableText **)((longlong)param_1 + 0x528),(TAttribute<bool> *)local_30)
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// GetClearKeyboardFocusOnCommit_WrapperImpl @ 14695a0d0

void __cdecl
UMultiLineEditableText::GetClearKeyboardFocusOnCommit_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x4f4);
  return;
}

// SetClearKeyboardFocusOnCommit_WrapperImpl @ 14695a0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMultiLineEditableText::SetClearKeyboardFocusOnCommit_WrapperImpl(void *param_1,void *param_2)

{
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30[0] = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x4f4) = local_30[0];
  if (*(SMultiLineEditableText **)((longlong)param_1 + 0x528) != (SMultiLineEditableText *)0x0) {
    local_30[1] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SMultiLineEditableText::SetClearKeyboardFocusOnCommit
              (*(SMultiLineEditableText **)((longlong)param_1 + 0x528),(TAttribute<bool> *)local_30)
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// StaticClass @ 14695a1b0

UClass * __cdecl UMultiLineEditableText::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiLineEditableText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MultiLineEditableText",
               &Z_Registration_Info_UClass_UMultiLineEditableText.InnerSingleton,
               StaticRegisterNativesUMultiLineEditableText,0x540,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMultiLineEditableText>,
               InternalVTableHelperCtorCaller<UMultiLineEditableText>,local_res8,
               UTextLayoutWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiLineEditableText.InnerSingleton;
}

// UMultiLineEditableText @ 14698bb40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UMultiLineEditableText * __thiscall
UMultiLineEditableText::UMultiLineEditableText(UMultiLineEditableText *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->field_0x1b0 = this->field_0x1b0 & 0xfc;
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined2 *)&this->field_0x1b1 = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->field_0x1bc = 0;
  *(undefined8 *)&this->field_0x1c4 = 0;
  FText::FText(&this->Text);
  FText::FText(&this->HintText);
  *(undefined8 *)&this->HintTextDelegate = 0;
  *(undefined8 *)&(this->HintTextDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HintTextDelegate).field_0x10 = 0;
  FTextBlockStyle::FTextBlockStyle(&this->WidgetStyle);
  (this->VirtualKeyboardOptions).bEnableAutocorrect = false;
  *(undefined8 *)&this->OnTextChanged = 0;
  *(undefined8 *)&(this->OnTextChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnTextChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnTextCommitted = 0;
  *(undefined8 *)&(this->OnTextCommitted).field_0x8 = 0;
  *(undefined8 *)&(this->OnTextCommitted).field_0x10 = 0;
  (this->MyMultiLineEditableText).Object = (SMultiLineEditableText *)0x0;
  (this->MyMultiLineEditableText).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UMultiLineEditableText @ 14698bc20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UMultiLineEditableText * __thiscall
UMultiLineEditableText::UMultiLineEditableText
          (UMultiLineEditableText *this,FObjectInitializer *param_1)

{
  void *pvVar1;
  FSharedReferencer<1> FVar2;
  FDefaultStyleCache *pFVar3;
  FName *pFVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  FName local_res8;
  FFontOutlineSettings local_88;
  FSlateFontInfo local_68;
  
  UTextLayoutWidget::UTextLayoutWidget((UTextLayoutWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  FText::FText(&this->Text);
  FText::FText(&this->HintText);
  *(undefined8 *)&this->HintTextDelegate = 0;
  *(undefined8 *)&(this->HintTextDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HintTextDelegate).field_0x10 = 0;
  FTextBlockStyle::FTextBlockStyle(&this->WidgetStyle);
  (this->VirtualKeyboardOptions).bEnableAutocorrect = false;
  *(undefined8 *)&this->OnTextChanged = 0;
  *(undefined8 *)&(this->OnTextChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnTextChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnTextCommitted = 0;
  *(undefined8 *)&(this->OnTextCommitted).field_0x8 = 0;
  *(undefined8 *)&(this->OnTextCommitted).field_0x10 = 0;
  (this->MyMultiLineEditableText).Object = (SMultiLineEditableText *)0x0;
  (this->MyMultiLineEditableText).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar3 = UE::Slate::Private::FDefaultStyleCache::Get();
  FTextBlockStyle::operator=(&this->WidgetStyle,&(pFVar3->Runtime).TextBlockStyle);
  this->bIsReadOnly = false;
  this->SelectAllTextWhenFocused = false;
  this->ClearTextSelectionOnFocusLoss = true;
  this->RevertTextOnEscape = false;
  this->ClearKeyboardFocusOnCommit = true;
  this->AllowContextMenu = true;
  UWidget::SetClipping((UWidget *)this,ClipToBounds);
  this->field_0x1b5 = this->field_0x1b5 | 1;
  pvVar1 = ThreadLocalStoragePointer;
  uVar5 = (ulonglong)_tls_index;
  this->VirtualKeyboardDismissAction = TextChangeOnDismiss;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar5 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString((FString *)&local_88,L"/Engine/EngineFonts/Roboto");
      FConfigCacheIni::GetString
                (GConfig,L"SlateStyle",L"DefaultFontName",(FString *)&local_88,&GEngineIni);
      pwVar6 = L"";
      if (local_88.OutlineMaterial.field0_0x0._0_4_ != 0) {
        pwVar6 = (wchar_t *)
                 CONCAT17(local_88._padding_,
                          CONCAT16(local_88.bApplyOutlineToDropShadows,
                                   CONCAT24(local_88._4_2_,local_88.OutlineSize)));
      }
      ConstructorHelpers::FObjectFinder<UFont>::FObjectFinder<UFont>(&DefaultFontObj,pwVar6,0);
      pvVar1 = (void *)CONCAT17(local_88._padding_,
                                CONCAT16(local_88.bApplyOutlineToDropShadows,
                                         CONCAT24(local_88._4_2_,local_88.OutlineSize)));
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      atexit(`UMultiLineEditableText::UMultiLineEditableText'::__l5::
             _dynamic_atexit_destructor_for__DefaultFontObj__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_88.OutlineSize = 0;
  local_88.bMiteredCorners = false;
  local_88.bSeparateFillAlpha = false;
  local_88.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_88.bApplyOutlineToDropShadows = false;
  local_88.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar4 = ::FName::FName(&local_res8,"Bold");
  FSlateFontInfo::FSlateFontInfo
            (&local_68,(UObject *)DefaultFontObj.Object.field0_0x0,__real_41400000,pFVar4,&local_88)
  ;
  FVar2.ReferenceController = local_68.CompositeFont.SharedReferenceCount.ReferenceController;
  local_68.CompositeFont.SharedReferenceCount.ReferenceController =
       (this->WidgetStyle).Font.CompositeFont.SharedReferenceCount.ReferenceController;
  local_68.CompositeFont.Object = (this->WidgetStyle).Font.CompositeFont.Object;
  if (local_68.CompositeFont.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.CompositeFont.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.CompositeFont.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  FSlateFontInfo::operator=(&(this->WidgetStyle).Font,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// ~UMultiLineEditableText @ 146993880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UMultiLineEditableText::~UMultiLineEditableText(UMultiLineEditableText *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyMultiLineEditableText).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnTextCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTextCommitted);
  pvVar1 = *(void **)&(this->OnTextChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTextChanged);
  FTextBlockStyle::~FTextBlockStyle(&this->WidgetStyle);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HintTextDelegate);
  pIVar2 = (this->HintText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->Text).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  *(undefined ***)this = &UTextLayoutWidget::_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &UTextLayoutWidget::_vftable__for__INotifyFieldValueChanged__;
  UWidget::~UWidget((UWidget *)this);
  return;
}

// FOnMultiLineEditableTextChangedEvent_DelegateWrapper @ 1469c7f50

void __cdecl
UMultiLineEditableText::FOnMultiLineEditableTextChangedEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FText *param_2)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  undefined1 local_res10 [8];
  FText local_18;
  
  FText::FText(&local_18);
  TVar2.Reference = local_18.TextData.Reference;
  pIVar1 = (param_2->TextData).Reference;
  if (local_18.TextData.Reference != pIVar1) {
    local_18.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
    }
  }
  local_18.Flags = param_2->Flags;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// FOnMultiLineEditableTextCommittedEvent_DelegateWrapper @ 1469c7fe0

void __cdecl
UMultiLineEditableText::FOnMultiLineEditableTextCommittedEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FText *param_2,Type param_3
          )

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  undefined1 local_res18 [8];
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_28);
  TVar2.Reference = local_28.TextData.Reference;
  pIVar1 = (param_2->TextData).Reference;
  if (local_28.TextData.Reference != pIVar1) {
    local_28.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
    }
  }
  local_28.Flags = param_2->Flags;
  local_18 = (undefined1)param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// GetClearKeyboardFocusOnCommit @ 1469ce4c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMultiLineEditableText::GetClearKeyboardFocusOnCommit(UMultiLineEditableText *this)

{
  return this->ClearKeyboardFocusOnCommit;
}

// GetClearTextSelectionOnFocusLoss @ 1469ce4e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMultiLineEditableText::GetClearTextSelectionOnFocusLoss(UMultiLineEditableText *this)

{
  return this->ClearTextSelectionOnFocusLoss;
}

// GetFieldNotificationDescriptor @ 1469d06a0

/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UMultiLineEditableText::GetFieldNotificationDescriptor(UMultiLineEditableText *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UMultiLineEditableText::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetFont @ 1469d0920

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateFontInfo * __thiscall UMultiLineEditableText::GetFont(UMultiLineEditableText *this)

{
  return &(this->WidgetStyle).Font;
}

// GetHintText @ 1469d1130

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
UMultiLineEditableText::GetHintText(UMultiLineEditableText *this,FText *__return_storage_ptr__)

{
  SMultiLineEditableText *this_00;
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  this_00 = (this->MyMultiLineEditableText).Object;
  if (this_00 != (SMultiLineEditableText *)0x0) {
    SMultiLineEditableText::GetHintText(this_00,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->HintText).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->HintText).Flags;
  return __return_storage_ptr__;
}

// GetIsReadOnly @ 1469d16e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMultiLineEditableText::GetIsReadOnly(UMultiLineEditableText *this)

{
  return this->bIsReadOnly;
}

// GetPrivateStaticClass @ 1469d4930

UClass * __cdecl UMultiLineEditableText::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiLineEditableText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MultiLineEditableText",
               &Z_Registration_Info_UClass_UMultiLineEditableText.InnerSingleton,
               StaticRegisterNativesUMultiLineEditableText,0x540,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMultiLineEditableText>,
               InternalVTableHelperCtorCaller<UMultiLineEditableText>,local_res8,
               UTextLayoutWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiLineEditableText.InnerSingleton;
}

// GetRevertTextOnEscape @ 1469d6f80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMultiLineEditableText::GetRevertTextOnEscape(UMultiLineEditableText *this)

{
  return this->RevertTextOnEscape;
}

// GetSelectAllTextWhenFocused @ 1469d71c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMultiLineEditableText::GetSelectAllTextWhenFocused(UMultiLineEditableText *this)

{
  return this->SelectAllTextWhenFocused;
}

// GetText @ 1469d8be0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
UMultiLineEditableText::GetText(UMultiLineEditableText *this,FText *__return_storage_ptr__)

{
  SMultiLineEditableText *this_00;
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  this_00 = (this->MyMultiLineEditableText).Object;
  if (this_00 != (SMultiLineEditableText *)0x0) {
    SMultiLineEditableText::GetText(this_00,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->Text).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->Text).Flags;
  return __return_storage_ptr__;
}

// HandleOnTextChanged @ 1469dd250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UMultiLineEditableText::HandleOnTextChanged(UMultiLineEditableText *this,FText *param_1)

{
  FName FVar1;
  TRefCountPtr<ITextData> TVar2;
  bool bVar3;
  undefined1 local_res18 [16];
  FText local_18;
  
  bVar3 = SetTextInternal(this,param_1);
  if (bVar3) {
    local_18.TextData.Reference = (ITextData *)FFieldNotificationClassDescriptor::Text.FieldName;
    local_18.Flags = FFieldNotificationClassDescriptor::Text.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->field_0x28,(FFieldId *)&local_18);
    FText::FText(&local_18);
    TVar2.Reference = local_18.TextData.Reference;
    FVar1 = (FName)(param_1->TextData).Reference;
    if ((FName)local_18.TextData.Reference != FVar1) {
      local_18.TextData.Reference = (ITextData *)FVar1;
      if (FVar1 != (FName)0x0) {
        (**(code **)(*(longlong *)FVar1 + 8))(FVar1,local_res18);
      }
      if ((FName)TVar2.Reference != (FName)0x0) {
        (**(code **)(*(longlong *)TVar2.Reference + 0x10))(TVar2.Reference);
      }
    }
    local_18.Flags = param_1->Flags;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnTextChanged,
               &local_18);
    if ((FName)local_18.TextData.Reference != (FName)0x0) {
      (**(code **)(*(longlong *)local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// HandleOnTextCommitted @ 1469dd570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UMultiLineEditableText::HandleOnTextCommitted
          (UMultiLineEditableText *this,FText *param_1,Type param_2)

{
  FName FVar1;
  TRefCountPtr<ITextData> TVar2;
  bool bVar3;
  undefined1 local_res18 [8];
  FText local_28;
  undefined1 local_18;
  
  bVar3 = SetTextInternal(this,param_1);
  if (bVar3) {
    local_28.TextData.Reference = (ITextData *)FFieldNotificationClassDescriptor::Text.FieldName;
    local_28.Flags = FFieldNotificationClassDescriptor::Text.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->field_0x28,(FFieldId *)&local_28);
  }
  FText::FText(&local_28);
  TVar2.Reference = local_28.TextData.Reference;
  FVar1 = (FName)(param_1->TextData).Reference;
  if ((FName)local_28.TextData.Reference != FVar1) {
    local_28.TextData.Reference = (ITextData *)FVar1;
    if (FVar1 != (FName)0x0) {
      (**(code **)(*(longlong *)FVar1 + 8))(FVar1,local_res18);
    }
    if ((FName)TVar2.Reference != (FName)0x0) {
      (**(code **)(*(longlong *)TVar2.Reference + 0x10))(TVar2.Reference);
    }
  }
  local_28.Flags = param_1->Flags;
  local_18 = (undefined1)param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnTextCommitted,
             &local_28);
  if ((FName)local_28.TextData.Reference != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.TextData.Reference + 0x10))();
  }
  return;
}

// OnApplyLineHeightToBottomLineChanged @ 1469e50f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableText::OnApplyLineHeightToBottomLineChanged
          (UMultiLineEditableText *this,bool param_1)

{
  SMultiLineEditableText *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->MyMultiLineEditableText).Object;
  if (this_00 != (SMultiLineEditableText *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SMultiLineEditableText::SetApplyLineHeightToBottomLine(this_00,(TAttribute<bool> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// OnAutoWrapTextChanged @ 1469e5390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableText::OnAutoWrapTextChanged(UMultiLineEditableText *this,bool param_1)

{
  SMultiLineEditableText *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->MyMultiLineEditableText).Object;
  if (this_00 != (SMultiLineEditableText *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SMultiLineEditableText::SetAutoWrapText(this_00,(TAttribute<bool> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// OnJustificationChanged @ 1469e9450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableText::OnJustificationChanged(UMultiLineEditableText *this,Type param_1)

{
  SMultiLineEditableText *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->MyMultiLineEditableText).Object;
  if (this_00 != (SMultiLineEditableText *)0x0) {
    local_18 = 0;
    local_30[4] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30._0_4_ = param_1;
    SMultiLineEditableText::SetJustification(this_00,(TAttribute<ETextJustify::Type> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// OnLineHeightPercentageChanged @ 1469eb600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableText::OnLineHeightPercentageChanged(UMultiLineEditableText *this,float param_1)

{
  SMultiLineEditableText *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->MyMultiLineEditableText).Object;
  if (this_00 != (SMultiLineEditableText *)0x0) {
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[4] = true;
    local_30._0_4_ = param_1;
    SMultiLineEditableText::SetLineHeightPercentage(this_00,(TAttribute<float> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// OnMarginChanged @ 1469eba10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableText::OnMarginChanged(UMultiLineEditableText *this,FMargin *param_1)

{
  SMultiLineEditableText *this_00;
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->MyMultiLineEditableText).Object;
  if (this_00 != (SMultiLineEditableText *)0x0) {
    local_40._0_4_ = param_1->Left;
    local_40._4_4_ = param_1->Top;
    local_40._8_4_ = param_1->Right;
    local_40._12_4_ = param_1->Bottom;
    local_40[0x10] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SMultiLineEditableText::SetMargin(this_00,(TAttribute<FMargin> *)local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_58);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// OnShapedTextOptionsChanged @ 1469f0470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableText::OnShapedTextOptionsChanged
          (UMultiLineEditableText *this,FShapedTextOptions param_1)

{
  SMultiLineEditableText *pSVar1;
  undefined5 in_register_00000013;
  
  pSVar1 = (this->MyMultiLineEditableText).Object;
  if (pSVar1 != (SMultiLineEditableText *)0x0) {
    FShapedTextOptions::SynchronizeShapedTextProperties<SMultiLineEditableText>
              ((FShapedTextOptions *)CONCAT53(in_register_00000013,param_1),pSVar1);
  }
  return;
}

// OnWrapTextAtChanged @ 1469f2860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableText::OnWrapTextAtChanged(UMultiLineEditableText *this,float param_1)

{
  SMultiLineEditableText *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->MyMultiLineEditableText).Object;
  if (this_00 != (SMultiLineEditableText *)0x0) {
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[4] = true;
    local_30._0_4_ = param_1;
    SMultiLineEditableText::SetWrapTextAt(this_00,(TAttribute<float> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// OnWrappingPolicyChanged @ 1469f2b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableText::OnWrappingPolicyChanged
          (UMultiLineEditableText *this,ETextWrappingPolicy param_1)

{
  SMultiLineEditableText *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->MyMultiLineEditableText).Object;
  if (this_00 != (SMultiLineEditableText *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SMultiLineEditableText::SetWrappingPolicy(this_00,(TAttribute<ETextWrappingPolicy> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// RebuildWidget @ 146a012f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UMultiLineEditableText::RebuildWidget
          (UMultiLineEditableText *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SMultiLineEditableText *pSVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  TSharedRef<SWidget,1> *pTVar12;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  UMultiLineEditableText *local_res18;
  UMultiLineEditableText *local_res20;
  FMemScope local_948;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  undefined1 local_938 [8];
  FDelegateAllocation local_930;
  undefined1 local_920 [8];
  FDelegateAllocation local_918;
  undefined1 local_908;
  undefined1 local_907;
  undefined1 local_900 [8];
  ForAnyElementType FStack_8f8;
  ulonglong local_8f0;
  undefined1 local_8e8;
  undefined1 local_8e7;
  undefined1 local_8e0 [8];
  ForAnyElementType FStack_8d8;
  ulonglong local_8d0;
  undefined1 local_8c8;
  undefined1 local_8c7;
  undefined1 local_8c0 [8];
  ForAnyElementType FStack_8b8;
  ulonglong local_8b0;
  undefined1 local_8a8;
  undefined1 local_8a7;
  undefined1 local_8a0 [8];
  ForAnyElementType FStack_898;
  ulonglong local_890;
  undefined1 local_888;
  undefined1 local_887;
  undefined1 local_880 [8];
  ForAnyElementType FStack_878;
  ulonglong local_870;
  undefined1 local_868;
  undefined1 local_867;
  undefined1 local_860 [8];
  ForAnyElementType FStack_858;
  ulonglong local_850;
  EVirtualKeyboardDismissAction local_848;
  undefined1 local_847;
  undefined1 local_840 [8];
  ForAnyElementType FStack_838;
  ulonglong local_830;
  TSlateDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs> local_828;
  SMultiLineEditableText *local_810;
  FSharedReferencer<1> local_808;
  FName local_800;
  FDestructionSentinel local_7f8;
  FDestructionSentinel local_7e0;
  FDestructionSentinel local_7c8;
  FDestructionSentinel local_7b0;
  FDestructionSentinel local_798;
  FDestructionSentinel local_780;
  FDestructionSentinel local_768;
  FDestructionSentinel local_750;
  FDestructionSentinel local_738;
  FDestructionSentinel local_720;
  FDelegateAllocation *local_708;
  FDestructionSentinel local_700;
  FDelegateAllocation *local_6e8;
  FArguments local_6e0;
  
  pFVar9 = SMultiLineEditableText::FArguments::FArguments(&local_6e0);
  pFVar9->_TextStyle = &this->WidgetStyle;
  local_908 = this->AllowContextMenu;
  local_907 = 1;
  local_8f0 = 0;
  local_900 = (undefined1  [8])0x0;
  FStack_8f8.Data = (FScriptContainerElement *)0x0;
  (pFVar9->_AllowContextMenu).Value = (bool)local_908;
  (pFVar9->_AllowContextMenu).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_AllowContextMenu).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_900);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_900,
             (FWriteAccessScope *)&local_7f8);
  if (((int)local_8f0 != 0) && (FStack_8f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_8f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8f8,0,0,0x10);
    local_8f0 = local_8f0 & 0xffffffff00000000;
  }
  if (local_7f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7f8.Accessor,&local_7f8);
  }
  if (FStack_8f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_8f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_900);
  local_8e8 = this->bIsReadOnly;
  local_8e7 = 1;
  local_8d0 = 0;
  local_8e0 = (undefined1  [8])0x0;
  FStack_8d8.Data = (FScriptContainerElement *)0x0;
  (pFVar9->_IsReadOnly).Value = (bool)local_8e8;
  (pFVar9->_IsReadOnly).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_IsReadOnly).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8e0,
             (FWriteAccessScope *)&local_7e0);
  if (((int)local_8d0 != 0) && (FStack_8d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_8d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8d8,0,0,0x10);
    local_8d0 = local_8d0 & 0xffffffff00000000;
  }
  if (local_7e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7e0.Accessor,&local_7e0);
  }
  if (FStack_8d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_8d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8e0);
  local_8c8 = this->SelectAllTextWhenFocused;
  local_8c7 = 1;
  local_8b0 = 0;
  local_8c0 = (undefined1  [8])0x0;
  FStack_8b8.Data = (FScriptContainerElement *)0x0;
  (pFVar9->_SelectAllTextWhenFocused).Value = (bool)local_8c8;
  (pFVar9->_SelectAllTextWhenFocused).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar9->_SelectAllTextWhenFocused).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8c0,
             (FWriteAccessScope *)&local_7c8);
  if (((int)local_8b0 != 0) && (FStack_8b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_8b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8b8,0,0,0x10);
    local_8b0 = local_8b0 & 0xffffffff00000000;
  }
  if (local_7c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7c8.Accessor,&local_7c8);
  }
  if (FStack_8b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_8b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8c0);
  local_8a8 = this->ClearTextSelectionOnFocusLoss;
  local_8a7 = 1;
  local_890 = 0;
  local_8a0 = (undefined1  [8])0x0;
  FStack_898.Data = (FScriptContainerElement *)0x0;
  (pFVar9->_ClearTextSelectionOnFocusLoss).Value = (bool)local_8a8;
  (pFVar9->_ClearTextSelectionOnFocusLoss).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar9->_ClearTextSelectionOnFocusLoss).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8a0,
             (FWriteAccessScope *)&local_7b0);
  if (((int)local_890 != 0) && (FStack_898.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_898.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_898,0,0,0x10);
    local_890 = local_890 & 0xffffffff00000000;
  }
  if (local_7b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7b0.Accessor,&local_7b0);
  }
  if (FStack_898.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_898.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8a0);
  local_888 = this->RevertTextOnEscape;
  local_887 = 1;
  local_870 = 0;
  local_880 = (undefined1  [8])0x0;
  FStack_878.Data = (FScriptContainerElement *)0x0;
  (pFVar9->_RevertTextOnEscape).Value = (bool)local_888;
  (pFVar9->_RevertTextOnEscape).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_RevertTextOnEscape).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_880);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_880,
             (FWriteAccessScope *)&local_798);
  if (((int)local_870 != 0) && (FStack_878.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_878.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_878,0,0,0x10);
    local_870 = local_870 & 0xffffffff00000000;
  }
  if (local_798.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_798.Accessor,&local_798);
  }
  if (FStack_878.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_878.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_880);
  local_868 = this->ClearKeyboardFocusOnCommit;
  local_867 = 1;
  local_850 = 0;
  local_860 = (undefined1  [8])0x0;
  FStack_858.Data = (FScriptContainerElement *)0x0;
  (pFVar9->_ClearKeyboardFocusOnCommit).Value = (bool)local_868;
  (pFVar9->_ClearKeyboardFocusOnCommit).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar9->_ClearKeyboardFocusOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_860);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_860,
             (FWriteAccessScope *)&local_780);
  if (((int)local_850 != 0) && (FStack_858.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_858.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_858,0,0,0x10);
    local_850 = local_850 & 0xffffffff00000000;
  }
  if (local_780.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_780.Accessor,&local_780);
  }
  if (FStack_858.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_858.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_860);
  (pFVar9->_VirtualKeyboardOptions).bEnableAutocorrect =
       (this->VirtualKeyboardOptions).bEnableAutocorrect;
  local_848 = this->VirtualKeyboardDismissAction;
  local_847 = 1;
  local_840 = (undefined1  [8])0x0;
  FStack_838.Data = (FScriptContainerElement *)0x0;
  local_830 = 0;
  (pFVar9->_VirtualKeyboardDismissAction).Value = local_848;
  (pFVar9->_VirtualKeyboardDismissAction).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar9->_VirtualKeyboardDismissAction).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_840);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_840,
             (FWriteAccessScope *)&local_768);
  if (((int)local_830 != 0) && (FStack_838.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_838.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_838,0,0,0x10);
    local_830 = local_830 & 0xffffffff00000000;
  }
  if (local_768.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_768.Accessor,&local_768);
  }
  if (FStack_838.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_838.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_840);
  uStack_940 = 0;
  local_948 = (FMemScope)HandleOnTextChanged;
  local_920 = (undefined1  [8])0x0;
  local_918.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_918.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_920,
             (FWriteAccessScope *)&local_720);
  local_708 = &local_918;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_918);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUMultiLineEditableText____A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_res18 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res18);
    *(FMemScope *)(puVar10 + 4) = local_948;
    puVar10[5] = CONCAT44(uStack_93c,uStack_940);
  }
  if (local_720.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_720.Accessor,&local_720);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnTextChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_920);
  uStack_940 = 0;
  local_948 = (FMemScope)HandleOnTextCommitted;
  local_938 = (undefined1  [8])0x0;
  local_930.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_930.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_938,
             (FWriteAccessScope *)&local_700);
  local_6e8 = &local_930;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_930);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUMultiLineEditableText____A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res20);
    *(FMemScope *)(puVar10 + 4) = local_948;
    puVar10[5] = CONCAT44(uStack_93c,uStack_940);
  }
  if (local_700.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_700.Accessor,&local_700);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnTextCommitted,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_938);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_800 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_948,&local_800,true);
  TSlateDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs>
            (&local_828,"SMultiLineEditableText",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\MultiLineEditableText.cpp"
             ,0x3e,local_res8);
  FMemScope::~FMemScope(&local_948);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_828._Widget.Object;
  if (local_828._Widget.Object == (SMultiLineEditableText *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_828._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  SMultiLineEditableText::Construct(local_828._Widget.Object,pFVar9);
  if (local_828._Widget.Object == (SMultiLineEditableText *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
    }
  }
  if (((local_828._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_828._Widget.Object)->_padding_ + 0x228))(local_828._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_146a01b20;
  }
  bVar8 = 0x20;
LAB_146a01b20:
  *(byte *)&(local_828._Widget.Object)->_padding_ =
       (byte)(local_828._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_828._Widget.Object)->_padding_ =
       (byte)(local_828._Widget.Object)->_padding_ | bVar8;
  if (local_828._Widget.Object == (SMultiLineEditableText *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_828._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_828._Widget.Object == (SMultiLineEditableText *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
    }
  }
  FVar5.ReferenceController = local_828._Widget.SharedReferenceCount.ReferenceController;
  local_828._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_828._Widget.Object = (SMultiLineEditableText *)0x0;
  if (pSVar3 == (SMultiLineEditableText *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
    }
  }
  local_810 = pSVar3;
  local_808.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyMultiLineEditableText != (TSharedPtr<SMultiLineEditableText,1> *)&local_810) {
    (this->MyMultiLineEditableText).Object = pSVar3;
    local_810 = (SMultiLineEditableText *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyMultiLineEditableText).SharedReferenceCount,&local_808);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_808.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_938,
             (FWriteAccessScope *)&local_750);
  if ((local_930.DelegateSize != 0) &&
     (local_930.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_930.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_930,0,0,0x10);
    local_930.DelegateSize = 0;
  }
  if (local_750.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_750.Accessor,&local_750);
  }
  if (local_930.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_930.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_938);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_920,
             (FWriteAccessScope *)&local_738);
  if ((local_918.DelegateSize != 0) &&
     (local_918.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_918.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_918,0,0,0x10);
    local_918.DelegateSize = 0;
  }
  if (local_738.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_738.Accessor,&local_738);
  }
  if (local_918.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_918.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_920);
  SMultiLineEditableText::FArguments::~FArguments(&local_6e0);
  if ((this->MyMultiLineEditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
    }
  }
  pTVar2 = (this->MyMultiLineEditableText).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->MyMultiLineEditableText).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SMultiLineEditableText *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0a9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableText::ReleaseSlateResources(UMultiLineEditableText *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyMultiLineEditableText != (TSharedPtr<SMultiLineEditableText,1> *)&local_18) {
    (this->MyMultiLineEditableText).Object = (SMultiLineEditableText *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyMultiLineEditableText).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// SetClearKeyboardFocusOnCommit @ 146a121a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableText::SetClearKeyboardFocusOnCommit(UMultiLineEditableText *this,bool param_1)

{
  SMultiLineEditableText *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->ClearKeyboardFocusOnCommit = param_1;
  this_00 = (this->MyMultiLineEditableText).Object;
  if (this_00 != (SMultiLineEditableText *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SMultiLineEditableText::SetClearKeyboardFocusOnCommit(this_00,(TAttribute<bool> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetClearTextSelectionOnFocusLoss @ 146a12290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableText::SetClearTextSelectionOnFocusLoss(UMultiLineEditableText *this,bool param_1)

{
  SMultiLineEditableText *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->ClearTextSelectionOnFocusLoss = param_1;
  this_00 = (this->MyMultiLineEditableText).Object;
  if (this_00 != (SMultiLineEditableText *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SMultiLineEditableText::SetClearTextSelectionOnFocusLoss(this_00,(TAttribute<bool> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetFont @ 146a14030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableText::SetFont(UMultiLineEditableText *this,FSlateFontInfo *param_1)

{
  SMultiLineEditableText *this_00;
  
  FSlateFontInfo::operator=(&(this->WidgetStyle).Font,param_1);
  this_00 = (this->MyMultiLineEditableText).Object;
  if (this_00 != (SMultiLineEditableText *)0x0) {
    SMultiLineEditableText::SetTextStyle(this_00,&this->WidgetStyle);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->CompositeFont).SharedReferenceCount.ReferenceController);
  return;
}

// SetFontMaterial @ 146a14200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableText::SetFontMaterial(UMultiLineEditableText *this,UMaterialInterface *param_1)

{
  SMultiLineEditableText *this_00;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->WidgetStyle).Font.FontMaterial.field0_0x0.DebugPtr = (UObject *)param_1;
  this_00 = (this->MyMultiLineEditableText).Object;
  if (this_00 != (SMultiLineEditableText *)0x0) {
    SMultiLineEditableText::SetTextStyle(this_00,&this->WidgetStyle);
  }
  return;
}

// SetFontOutlineMaterial @ 146a14330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableText::SetFontOutlineMaterial
          (UMultiLineEditableText *this,UMaterialInterface *param_1)

{
  SMultiLineEditableText *this_00;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->WidgetStyle).Font.OutlineSettings.OutlineMaterial.field0_0x0.DebugPtr = (UObject *)param_1;
  this_00 = (this->MyMultiLineEditableText).Object;
  if (this_00 != (SMultiLineEditableText *)0x0) {
    SMultiLineEditableText::SetTextStyle(this_00,&this->WidgetStyle);
  }
  return;
}

// SetHintText @ 146a14ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMultiLineEditableText::SetHintText(UMultiLineEditableText *this,FText *param_1)

{
  FGetText *this_00;
  ITextData *pIVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  UObject *pUVar6;
  TAttribute<FText> *pTVar7;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_118 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_100;
  ForAnyElementType FStack_f8;
  ulonglong local_f0;
  FName local_e8;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  FReadAccessScope local_50;
  
  local_res8[0] = 0;
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->HintText).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->HintText).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  this_00 = &this->HintTextDelegate;
  (this->HintText).Flags = param_1->Flags;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_e0);
  local_res20 = 0;
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&(this->HintTextDelegate).field_0x8,(FObjectPtr)&local_res20);
  local_res18 = 0;
  *(undefined8 *)&(this->HintTextDelegate).field_0x10 = 0;
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  if ((this->MyMultiLineEditableText).Object != (SMultiLineEditableText *)0x0) {
    bVar5 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)this_00);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_50);
      local_e8.ComparisonIndex.Value = *(uint *)&(this->HintTextDelegate).field_0x10;
      local_e8.Number = *(uint *)&(this->HintTextDelegate).field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_50);
      pUVar6 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)this_00);
      pTVar7 = TAttribute<FText>::Create<UObject>((TAttribute<FText> *)local_80,pUVar6,&local_e8);
      bVar4 = true;
      bVar5 = false;
    }
    else {
      local_118._0_8_ = (this->HintText).TextData.Reference;
      if ((ITextData *)local_118._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_118._0_8_ + 8))(local_118._0_8_,local_res10);
      }
      local_118._8_4_ = (this->HintText).Flags;
      pTVar7 = (TAttribute<FText> *)local_118;
      local_118[0x10] = true;
      bVar4 = false;
      bVar5 = true;
      local_f0 = 0;
      local_100.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_f8.Data = (FScriptContainerElement *)0x0;
    }
    FText::FText((FText *)local_b0,&pTVar7->Value);
    local_b0[0x10] = pTVar7->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar7->Getter);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_100,(FWriteAccessScope *)&local_c8);
      if (((int)local_f0 != 0) && (FStack_f8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_f8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f8,0,0,0x10);
        local_f0 = local_f0 & 0xffffffff00000000;
      }
      if (local_c8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
      }
      if (FStack_f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_f8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_100.AccessDetector);
      if ((ITextData *)local_118._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_118._0_8_ + 0x10))();
      }
    }
    if (bVar4) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
      if ((ITextData *)local_80._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_80._0_8_ + 0x10))();
      }
    }
    if ((this->MyMultiLineEditableText).Object == (SMultiLineEditableText *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    SMultiLineEditableText::SetHintText
              ((this->MyMultiLineEditableText).Object,(TAttribute<FText> *)local_b0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
    if ((void *)local_98._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_98._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_98);
    if ((ITextData *)local_b0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_b0._0_8_ + 0x10))();
    }
  }
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// SetIsReadOnly @ 146a16010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMultiLineEditableText::SetIsReadOnly(UMultiLineEditableText *this,bool param_1)

{
  SMultiLineEditableText *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->bIsReadOnly = param_1;
  this_00 = (this->MyMultiLineEditableText).Object;
  if (this_00 != (SMultiLineEditableText *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SMultiLineEditableText::SetIsReadOnly(this_00,(TAttribute<bool> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetRevertTextOnEscape @ 146a19880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableText::SetRevertTextOnEscape(UMultiLineEditableText *this,bool param_1)

{
  SMultiLineEditableText *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->RevertTextOnEscape = param_1;
  this_00 = (this->MyMultiLineEditableText).Object;
  if (this_00 != (SMultiLineEditableText *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SMultiLineEditableText::SetRevertTextOnEscape(this_00,(TAttribute<bool> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetSelectAllTextWhenFocused @ 146a1a350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableText::SetSelectAllTextWhenFocused(UMultiLineEditableText *this,bool param_1)

{
  SMultiLineEditableText *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->SelectAllTextWhenFocused = param_1;
  this_00 = (this->MyMultiLineEditableText).Object;
  if (this_00 != (SMultiLineEditableText *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SMultiLineEditableText::SetSelectAllTextWhenFocused(this_00,(TAttribute<bool> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetText @ 146a1bea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UMultiLineEditableText::SetText(UMultiLineEditableText *this,FText *param_1)

{
  SMultiLineEditableText *this_00;
  ITextData *pIVar1;
  bool bVar2;
  undefined1 local_res10 [8];
  FDestructionSentinel local_58;
  undefined1 local_38 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  bVar2 = SetTextInternal(this,param_1);
  if (bVar2) {
    this_00 = (this->MyMultiLineEditableText).Object;
    if (this_00 != (SMultiLineEditableText *)0x0) {
      local_38._0_8_ = (this->Text).TextData.Reference;
      if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 8))(local_38._0_8_,local_res10);
      }
      local_38._8_4_ = (this->Text).Flags;
      local_38[0x10] = true;
      local_10 = 0;
      local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_18.Data = (FScriptContainerElement *)0x0;
      SMultiLineEditableText::SetText(this_00,(TAttribute<FText> *)local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_20,(FWriteAccessScope *)&local_58);
      if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_18.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
        local_10 = local_10 & 0xffffffff00000000;
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)
                   CONCAT44(local_58.Accessor._4_4_,(int)local_58.Accessor),&local_58);
      }
      if (FStack_18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
      if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
      }
    }
    local_58.AccessType = FFieldNotificationClassDescriptor::Text.FieldName.ComparisonIndex.Value;
    local_58._4_4_ = FFieldNotificationClassDescriptor::Text.FieldName.Number;
    local_58.Accessor._0_4_ = FFieldNotificationClassDescriptor::Text.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->field_0x28,(FFieldId *)&local_58);
  }
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a1bfe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

// SetTextInternal @ 146a1c510

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMultiLineEditableText::SetTextInternal(UMultiLineEditableText *this,FText *param_1)

{
  FText *this_00;
  ITextData *pIVar1;
  ITextData *pIVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  
  this_00 = &this->Text;
  bVar3 = FText::IdenticalTo(this_00,param_1,LexicalCompareInvariants|DeepCompare);
  if (!bVar3) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this_00->TextData).Reference;
    if (pIVar2 != pIVar1) {
      (this_00->TextData).Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Text).Flags = param_1->Flags;
    return true;
  }
  return false;
}

// SetWidgetStyle @ 146a1ddf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableText::SetWidgetStyle(UMultiLineEditableText *this,FTextBlockStyle *param_1)

{
  SMultiLineEditableText *this_00;
  
  FTextBlockStyle::operator=(&this->WidgetStyle,param_1);
  this_00 = (this->MyMultiLineEditableText).Object;
  if (this_00 != (SMultiLineEditableText *)0x0) {
    SMultiLineEditableText::SetTextStyle(this_00,&this->WidgetStyle);
  }
  return;
}

// StaticRegisterNativesUMultiLineEditableText @ 146a1eaf0

void __cdecl UMultiLineEditableText::StaticRegisterNativesUMultiLineEditableText(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UMultiLineEditableText_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a22920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UMultiLineEditableText::SynchronizeProperties(UMultiLineEditableText *this)

{
  SMultiLineEditableText *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  UObject *pUVar4;
  TAttribute<FText> *pTVar5;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  FName local_res18 [2];
  undefined1 local_288 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_280;
  ForAnyElementType FStack_278;
  ulonglong local_270;
  undefined1 local_268 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_260;
  ForAnyElementType FStack_258;
  ulonglong local_250;
  undefined1 local_248 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_240;
  ForAnyElementType FStack_238;
  ulonglong local_230;
  undefined1 local_228 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_220;
  ForAnyElementType FStack_218;
  ulonglong local_210;
  undefined1 local_208 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_200;
  ForAnyElementType FStack_1f8;
  ulonglong local_1f0;
  undefined1 local_1e8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1d0;
  ForAnyElementType FStack_1c8;
  ulonglong local_1c0;
  undefined1 local_1b8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a0;
  ForAnyElementType FStack_198;
  ulonglong local_190;
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  void *pvStack_178;
  undefined8 local_170;
  TAttribute<EVirtualKeyboardDismissAction> local_168;
  FDestructionSentinel local_148;
  FDestructionSentinel local_130;
  FDestructionSentinel local_118;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  FReadAccessScope local_40;
  
  local_res8[0] = 0;
  UWidget::SynchronizeProperties((UWidget *)this);
  if ((this->MyMultiLineEditableText).Object != (SMultiLineEditableText *)0x0) {
    bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->HintTextDelegate);
    if (bVar3) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->HintTextDelegate,
                 &local_40);
      local_res18[0].ComparisonIndex.Value = *(uint *)&(this->HintTextDelegate).field_0x10;
      local_res18[0].Number = *(uint *)&(this->HintTextDelegate).field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_40);
      pUVar4 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->HintTextDelegate);
      pTVar5 = TAttribute<FText>::Create<UObject>((TAttribute<FText> *)local_70,pUVar4,local_res18);
      bVar2 = true;
      bVar3 = false;
    }
    else {
      local_1e8._0_8_ = (this->HintText).TextData.Reference;
      if ((ITextData *)local_1e8._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_1e8._0_8_ + 8))(local_1e8._0_8_,local_res8);
      }
      local_1e8._8_4_ = (this->HintText).Flags;
      pTVar5 = (TAttribute<FText> *)local_1e8;
      local_1e8[0x10] = true;
      bVar2 = false;
      bVar3 = true;
      local_1c0 = 0;
      local_1d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_1c8.Data = (FScriptContainerElement *)0x0;
    }
    FText::FText((FText *)local_a0,&pTVar5->Value);
    local_a0[0x10] = pTVar5->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_88,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar5->Getter);
    if (bVar3) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_1d0,(FWriteAccessScope *)&local_148);
      if (((int)local_1c0 != 0) && (FStack_1c8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_1c8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1c8,0,0,0x10);
        local_1c0 = local_1c0 & 0xffffffff00000000;
      }
      if (local_148.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
      }
      if (FStack_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1c8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1d0.AccessDetector);
      if ((ITextData *)local_1e8._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_1e8._0_8_ + 0x10))();
      }
    }
    if (bVar2) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
      if ((void *)local_58._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_58._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_58);
      if ((ITextData *)local_70._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_70._0_8_ + 0x10))();
      }
    }
    if ((this->MyMultiLineEditableText).Object == (SMultiLineEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SMultiLineEditableText::SetTextStyle((this->MyMultiLineEditableText).Object,&this->WidgetStyle);
    if ((this->MyMultiLineEditableText).Object == (SMultiLineEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_1b8._0_8_ = (this->Text).TextData.Reference;
    this_00 = (this->MyMultiLineEditableText).Object;
    if ((ITextData *)local_1b8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1b8._0_8_ + 8))(local_1b8._0_8_,local_res10);
    }
    local_1b8._8_4_ = (this->Text).Flags;
    local_1b8[0x10] = true;
    local_190 = 0;
    local_1a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_198.Data = (FScriptContainerElement *)0x0;
    SMultiLineEditableText::SetText(this_00,(TAttribute<FText> *)local_1b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1a0,(FWriteAccessScope *)&local_130);
    if (((int)local_190 != 0) && (FStack_198.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_198.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_198,0,0,0x10);
      local_190 = local_190 & 0xffffffff00000000;
    }
    if (local_130.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
    }
    if (FStack_198.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_198.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a0.AccessDetector);
    if ((ITextData *)local_1b8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1b8._0_8_ + 0x10))();
    }
    if ((this->MyMultiLineEditableText).Object == (SMultiLineEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SMultiLineEditableText::SetHintText
              ((this->MyMultiLineEditableText).Object,(TAttribute<FText> *)local_a0);
    if ((this->MyMultiLineEditableText).Object == (SMultiLineEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_288[0] = this->AllowContextMenu;
    local_270 = 0;
    local_288[1] = true;
    local_280.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_278.Data = (FScriptContainerElement *)0x0;
    SMultiLineEditableText::SetAllowContextMenu
              ((this->MyMultiLineEditableText).Object,(TAttribute<bool> *)local_288);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_280,(FWriteAccessScope *)&local_118);
    if (((int)local_270 != 0) && (FStack_278.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_278.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_278,0,0,0x10);
      local_270 = local_270 & 0xffffffff00000000;
    }
    if (local_118.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
    }
    if (FStack_278.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_278.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_280.AccessDetector);
    if ((this->MyMultiLineEditableText).Object == (SMultiLineEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_268[0] = this->bIsReadOnly;
    local_250 = 0;
    local_268[1] = true;
    local_260.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_258.Data = (FScriptContainerElement *)0x0;
    SMultiLineEditableText::SetIsReadOnly
              ((this->MyMultiLineEditableText).Object,(TAttribute<bool> *)local_268);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_260,(FWriteAccessScope *)&local_100);
    if (((int)local_250 != 0) && (FStack_258.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_258.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_258,0,0,0x10);
      local_250 = local_250 & 0xffffffff00000000;
    }
    if (local_100.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
    }
    if (FStack_258.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_258.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_260.AccessDetector);
    if ((this->MyMultiLineEditableText).Object == (SMultiLineEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_168.Value = this->VirtualKeyboardDismissAction;
    local_168.Getter._16_8_ = 0;
    local_168.bIsSet = true;
    local_168.Getter._0_8_ = 0;
    local_168.Getter._8_8_ = 0;
    SMultiLineEditableText::SetVirtualKeyboardDismissAction
              ((this->MyMultiLineEditableText).Object,&local_168);
    if ((this->MyMultiLineEditableText).Object == (SMultiLineEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_248[0] = this->SelectAllTextWhenFocused;
    local_230 = 0;
    local_248[1] = true;
    local_240.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_238.Data = (FScriptContainerElement *)0x0;
    SMultiLineEditableText::SetSelectAllTextWhenFocused
              ((this->MyMultiLineEditableText).Object,(TAttribute<bool> *)local_248);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_240,(FWriteAccessScope *)&local_e8);
    if (((int)local_230 != 0) && (FStack_238.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_238.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_238,0,0,0x10);
      local_230 = local_230 & 0xffffffff00000000;
    }
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    if (FStack_238.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_238.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_240.AccessDetector);
    if ((this->MyMultiLineEditableText).Object == (SMultiLineEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_228[0] = this->ClearTextSelectionOnFocusLoss;
    local_210 = 0;
    local_228[1] = true;
    local_220.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_218.Data = (FScriptContainerElement *)0x0;
    SMultiLineEditableText::SetClearTextSelectionOnFocusLoss
              ((this->MyMultiLineEditableText).Object,(TAttribute<bool> *)local_228);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_220,(FWriteAccessScope *)&local_d0);
    if (((int)local_210 != 0) && (FStack_218.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_218.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_218,0,0,0x10);
      local_210 = local_210 & 0xffffffff00000000;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (FStack_218.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_218.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_220.AccessDetector);
    if ((this->MyMultiLineEditableText).Object == (SMultiLineEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_188[0] = this->RevertTextOnEscape;
    local_170 = 0;
    local_188[1] = true;
    local_180 = (undefined1  [8])0x0;
    pvStack_178 = (void *)0x0;
    SMultiLineEditableText::SetRevertTextOnEscape
              ((this->MyMultiLineEditableText).Object,(TAttribute<bool> *)local_188);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_180);
    if (pvStack_178 != (void *)0x0) {
      FMemory::Free(pvStack_178);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_180);
    if ((this->MyMultiLineEditableText).Object == (SMultiLineEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_208[0] = this->ClearKeyboardFocusOnCommit;
    local_1f0 = 0;
    local_208[1] = true;
    local_200.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_1f8.Data = (FScriptContainerElement *)0x0;
    SMultiLineEditableText::SetClearKeyboardFocusOnCommit
              ((this->MyMultiLineEditableText).Object,(TAttribute<bool> *)local_208);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_200,(FWriteAccessScope *)&local_b8);
    if (((int)local_1f0 != 0) && (FStack_1f8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1f8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f8,0,0,0x10);
      local_1f0 = local_1f0 & 0xffffffff00000000;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    if (FStack_1f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1f8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_200.AccessDetector);
    if ((this->MyMultiLineEditableText).Object == (SMultiLineEditableText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    UTextLayoutWidget::SynchronizeTextLayoutProperties<SMultiLineEditableText>
              ((UTextLayoutWidget *)this,(this->MyMultiLineEditableText).Object);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_88);
    if ((void *)local_88._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_88._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_88);
    if ((ITextData *)local_a0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_a0._0_8_ + 0x10))();
    }
  }
  return;
}

// execGetFont @ 146a35270

void __cdecl UMultiLineEditableText::execGetFont(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSlateFontInfo::operator=(param_3,(FSlateFontInfo *)&param_1[0xd].field_0x10);
  return;
}

// execGetHintText @ 146a35390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMultiLineEditableText::execGetHintText(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SMultiLineEditableText **)(param_1 + 0x21) == (SMultiLineEditableText *)0x0) {
    local_18.TextData.Reference = *(ITextData **)(param_1 + 0xc);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = *(uint *)&param_1[0xc].field_0x8;
  }
  else {
    SMultiLineEditableText::GetHintText(*(SMultiLineEditableText **)(param_1 + 0x21),&local_18);
  }
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execGetText @ 146a36360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMultiLineEditableText::execGetText(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SMultiLineEditableText **)(param_1 + 0x21) == (SMultiLineEditableText *)0x0) {
    local_18.TextData.Reference = *(ITextData **)&param_1[0xb].field_0x18;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = *(uint *)&param_1[0xb].field_0x20;
  }
  else {
    SMultiLineEditableText::GetText(*(SMultiLineEditableText **)(param_1 + 0x21),&local_18);
  }
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execSetFont @ 146a3c980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMultiLineEditableText::execSetFont(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateFontInfo *pFVar2;
  FSlateFontInfo local_c8;
  FSlateFontInfo local_68;
  
  FSlateFontInfo::FSlateFontInfo(&local_c8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FSlateFontInfo::FSlateFontInfo(&local_68,&local_c8);
  FSlateFontInfo::operator=((FSlateFontInfo *)&param_1[0xd].field_0x10,pFVar2);
  if (*(SMultiLineEditableText **)(param_1 + 0x21) != (SMultiLineEditableText *)0x0) {
    SMultiLineEditableText::SetTextStyle
              (*(SMultiLineEditableText **)(param_1 + 0x21),
               (FTextBlockStyle *)&param_1[0xd].field_0x8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar2->CompositeFont).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// execSetFontMaterial @ 146a3cbd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMultiLineEditableText::execSetFontMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[0xd].field_0x18 = pUVar2;
  if (*(SMultiLineEditableText **)(param_1 + 0x21) != (SMultiLineEditableText *)0x0) {
    SMultiLineEditableText::SetTextStyle
              (*(SMultiLineEditableText **)(param_1 + 0x21),
               (FTextBlockStyle *)&param_1[0xd].field_0x8);
  }
  return;
}

// execSetFontOutlineMaterial @ 146a3ce20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMultiLineEditableText::execSetFontOutlineMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)(param_1 + 0xe) = pUVar2;
  if (*(SMultiLineEditableText **)(param_1 + 0x21) != (SMultiLineEditableText *)0x0) {
    SMultiLineEditableText::SetTextStyle
              (*(SMultiLineEditableText **)(param_1 + 0x21),
               (FTextBlockStyle *)&param_1[0xd].field_0x8);
  }
  return;
}

// execSetHintText @ 146a3d530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMultiLineEditableText::execSetHintText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [24];
  FText local_28;
  FText local_18;
  
  FText::FText(&local_28);
  FTextProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18.TextData.Reference = local_28.TextData.Reference;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res10);
  }
  local_18.Flags = local_28.Flags;
  SetHintText((UMultiLineEditableText *)param_1,&local_18);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execSetIsReadOnly @ 146a3e5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMultiLineEditableText::execSetIsReadOnly(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetIsReadOnly((UMultiLineEditableText *)param_1,local_res10[0] != 0);
  return;
}

// execSetText @ 146a43320

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMultiLineEditableText::execSetText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [24];
  FText local_28;
  FText local_18;
  
  FText::FText(&local_28);
  FTextProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18.TextData.Reference = local_28.TextData.Reference;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res10);
  }
  local_18.Flags = local_28.Flags;
  SetText((UMultiLineEditableText *)param_1,&local_18);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execSetWidgetStyle @ 146a44aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMultiLineEditableText::execSetWidgetStyle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FTextBlockStyle *pFVar2;
  FTextBlockStyle local_2e8;
  
  FTextBlockStyle::FTextBlockStyle(&local_2e8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2e8);
  }
  pFVar2 = &local_2e8;
  if ((FTextBlockStyle *)param_2->MostRecentPropertyAddress != (FTextBlockStyle *)0x0) {
    pFVar2 = (FTextBlockStyle *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FTextBlockStyle::operator=((FTextBlockStyle *)&param_1[0xd].field_0x8,pFVar2);
  if (*(SMultiLineEditableText **)(param_1 + 0x21) != (SMultiLineEditableText *)0x0) {
    SMultiLineEditableText::SetTextStyle
              (*(SMultiLineEditableText **)(param_1 + 0x21),
               (FTextBlockStyle *)&param_1[0xd].field_0x8);
  }
  FTextBlockStyle::~FTextBlockStyle(&local_2e8);
  return;
}

