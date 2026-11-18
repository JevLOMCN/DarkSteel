// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 48

// GetText_WrapperImpl @ 14696b1c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMultiLineEditableTextBox::GetText_WrapperImpl(void *param_1,void *param_2)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = GetText(param_1,&local_18);
  FText::operator=(param_2,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetText_WrapperImpl @ 14696b200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMultiLineEditableTextBox::SetText_WrapperImpl(void *param_1,void *param_2)

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

// GetHintText_WrapperImpl @ 14696b250

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMultiLineEditableTextBox::GetHintText_WrapperImpl(void *param_1,void *param_2)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = GetHintText(param_1,&local_18);
  FText::operator=(param_2,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetHintText_WrapperImpl @ 14696b290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMultiLineEditableTextBox::SetHintText_WrapperImpl(void *param_1,void *param_2)

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

// GetbIsReadOnly_WrapperImpl @ 14696b2e0

void __cdecl UMultiLineEditableTextBox::GetbIsReadOnly_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xe90);
  return;
}

// SetbIsReadOnly_WrapperImpl @ 14696b330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMultiLineEditableTextBox::SetbIsReadOnly_WrapperImpl(void *param_1,void *param_2)

{
  SetIsReadOnly(param_1,*(bool *)param_2);
  return;
}

// StaticClass @ 14696b380

UClass * __cdecl UMultiLineEditableTextBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiLineEditableTextBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MultiLineEditableTextBox",
               &Z_Registration_Info_UClass_UMultiLineEditableTextBox.InnerSingleton,
               StaticRegisterNativesUMultiLineEditableTextBox,0xee0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMultiLineEditableTextBox>,
               InternalVTableHelperCtorCaller<UMultiLineEditableTextBox>,local_res8,
               UTextLayoutWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiLineEditableTextBox.InnerSingleton;
}

// UMultiLineEditableTextBox @ 14698beb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UMultiLineEditableTextBox * __thiscall
UMultiLineEditableTextBox::UMultiLineEditableTextBox
          (UMultiLineEditableTextBox *this,FVTableHelper *param_1)

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
  FEditableTextBoxStyle::FEditableTextBoxStyle(&this->WidgetStyle);
  (this->VirtualKeyboardOptions).bEnableAutocorrect = false;
  *(undefined8 *)&this->OnTextChanged = 0;
  *(undefined8 *)&(this->OnTextChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnTextChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnTextCommitted = 0;
  *(undefined8 *)&(this->OnTextCommitted).field_0x8 = 0;
  *(undefined8 *)&(this->OnTextCommitted).field_0x10 = 0;
  (this->MyEditableTextBlock).Object = (SMultiLineEditableTextBox *)0x0;
  (this->MyEditableTextBlock).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UMultiLineEditableTextBox @ 14698bf90

/* WARNING: Enum "Type": Some values do not have unique names */

UMultiLineEditableTextBox * __thiscall
UMultiLineEditableTextBox::UMultiLineEditableTextBox
          (UMultiLineEditableTextBox *this,FObjectInitializer *param_1)

{
  void *pvVar1;
  FSharedReferencer<1> FVar2;
  FDefaultStyleCache *pFVar3;
  FName *pFVar4;
  wchar_t *pwVar5;
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
  FEditableTextBoxStyle::FEditableTextBoxStyle(&this->WidgetStyle);
  (this->VirtualKeyboardOptions).bEnableAutocorrect = false;
  *(undefined8 *)&this->OnTextChanged = 0;
  *(undefined8 *)&(this->OnTextChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnTextChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnTextCommitted = 0;
  *(undefined8 *)&(this->OnTextCommitted).field_0x8 = 0;
  *(undefined8 *)&(this->OnTextCommitted).field_0x10 = 0;
  (this->MyEditableTextBlock).Object = (SMultiLineEditableTextBox *)0x0;
  (this->MyEditableTextBlock).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar3 = UE::Slate::Private::FDefaultStyleCache::Get();
  FEditableTextBoxStyle::operator=(&this->WidgetStyle,&(pFVar3->Runtime).EditableTextBoxStyle);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString((FString *)&local_88,L"/Engine/EngineFonts/Roboto");
      FConfigCacheIni::GetString
                (GConfig,L"SlateStyle",L"DefaultFontName",(FString *)&local_88,&GEngineIni);
      pwVar5 = L"";
      if (local_88.OutlineMaterial.field0_0x0._0_4_ != 0) {
        pwVar5 = (wchar_t *)
                 CONCAT17(local_88._padding_,
                          CONCAT16(local_88.bApplyOutlineToDropShadows,
                                   CONCAT24(local_88._4_2_,local_88.OutlineSize)));
      }
      ConstructorHelpers::FObjectFinder<UFont>::FObjectFinder<UFont>(&DefaultFontObj,pwVar5,0);
      pvVar1 = (void *)CONCAT17(local_88._padding_,
                                CONCAT16(local_88.bApplyOutlineToDropShadows,
                                         CONCAT24(local_88._4_2_,local_88.OutlineSize)));
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      atexit(`UMultiLineEditableTextBox::UMultiLineEditableTextBox'::__l5::
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
  pFVar4 = ::FName::FName(&local_res8,"Regular");
  FSlateFontInfo::FSlateFontInfo
            (&local_68,(UObject *)DefaultFontObj.Object.field0_0x0,__real_41c00000,pFVar4,&local_88)
  ;
  FVar2.ReferenceController = local_68.CompositeFont.SharedReferenceCount.ReferenceController;
  local_68.CompositeFont.SharedReferenceCount.ReferenceController =
       (this->WidgetStyle).TextStyle.Font.CompositeFont.SharedReferenceCount.ReferenceController;
  local_68.CompositeFont.Object = (this->WidgetStyle).TextStyle.Font.CompositeFont.Object;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  this->field_0x1b5 = this->field_0x1b5 | 1;
  this->VirtualKeyboardDismissAction = TextChangeOnDismiss;
  this->bIsReadOnly = false;
  this->AllowContextMenu = true;
  return this;
}

// ~UMultiLineEditableTextBox @ 146993960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UMultiLineEditableTextBox::~UMultiLineEditableTextBox(UMultiLineEditableTextBox *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyEditableTextBlock).SharedReferenceCount.ReferenceController);
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
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&this->WidgetStyle);
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

// FOnMultiLineEditableTextBoxChangedEvent_DelegateWrapper @ 1469c7e20

void __cdecl
UMultiLineEditableTextBox::FOnMultiLineEditableTextBoxChangedEvent_DelegateWrapper
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

// FOnMultiLineEditableTextBoxCommittedEvent_DelegateWrapper @ 1469c7eb0

void __cdecl
UMultiLineEditableTextBox::FOnMultiLineEditableTextBoxCommittedEvent_DelegateWrapper
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

// GetFieldNotificationDescriptor @ 1469d0710

/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UMultiLineEditableTextBox::GetFieldNotificationDescriptor(UMultiLineEditableTextBox *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UMultiLineEditableTextBox::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetHintText @ 1469d11a0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
UMultiLineEditableTextBox::GetHintText
          (UMultiLineEditableTextBox *this,FText *__return_storage_ptr__)

{
  SMultiLineEditableTextBox *pSVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  
  pSVar1 = (this->MyEditableTextBlock).Object;
  if (pSVar1 == (SMultiLineEditableTextBox *)0x0) {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = (this->HintText).TextData.Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    __return_storage_ptr__->Flags = (this->HintText).Flags;
    return __return_storage_ptr__;
  }
  if ((pSVar1->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar3)();
      return pFVar5;
    }
  }
  SMultiLineEditableText::GetHintText((pSVar1->EditableText).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetIsReadOnly @ 1469d16f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMultiLineEditableTextBox::GetIsReadOnly(UMultiLineEditableTextBox *this)

{
  return this->bIsReadOnly;
}

// GetPrivateStaticClass @ 1469d49f0

UClass * __cdecl UMultiLineEditableTextBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiLineEditableTextBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MultiLineEditableTextBox",
               &Z_Registration_Info_UClass_UMultiLineEditableTextBox.InnerSingleton,
               StaticRegisterNativesUMultiLineEditableTextBox,0xee0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMultiLineEditableTextBox>,
               InternalVTableHelperCtorCaller<UMultiLineEditableTextBox>,local_res8,
               UTextLayoutWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiLineEditableTextBox.InnerSingleton;
}

// GetText @ 1469d8c50

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
UMultiLineEditableTextBox::GetText(UMultiLineEditableTextBox *this,FText *__return_storage_ptr__)

{
  SMultiLineEditableTextBox *pSVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  
  pSVar1 = (this->MyEditableTextBlock).Object;
  if (pSVar1 == (SMultiLineEditableTextBox *)0x0) {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = (this->Text).TextData.Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    __return_storage_ptr__->Flags = (this->Text).Flags;
    return __return_storage_ptr__;
  }
  if ((pSVar1->EditableText).Object == (SMultiLineEditableText *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar3)();
      return pFVar5;
    }
  }
  SMultiLineEditableText::GetText((pSVar1->EditableText).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HandleOnTextChanged @ 1469dd310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UMultiLineEditableTextBox::HandleOnTextChanged(UMultiLineEditableTextBox *this,FText *param_1)

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

// HandleOnTextCommitted @ 1469dd640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UMultiLineEditableTextBox::HandleOnTextCommitted
          (UMultiLineEditableTextBox *this,FText *param_1,Type param_2)

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

// OnApplyLineHeightToBottomLineChanged @ 1469e51b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableTextBox::OnApplyLineHeightToBottomLineChanged
          (UMultiLineEditableTextBox *this,bool param_1)

{
  SMultiLineEditableTextBox *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SMultiLineEditableTextBox *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SMultiLineEditableTextBox::SetApplyLineHeightToBottomLine(this_00,(TAttribute<bool> *)local_30);
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

// OnAutoWrapTextChanged @ 1469e5450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableTextBox::OnAutoWrapTextChanged(UMultiLineEditableTextBox *this,bool param_1)

{
  SMultiLineEditableTextBox *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SMultiLineEditableTextBox *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SMultiLineEditableTextBox::SetAutoWrapText(this_00,(TAttribute<bool> *)local_30);
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

// OnJustificationChanged @ 1469e9510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableTextBox::OnJustificationChanged(UMultiLineEditableTextBox *this,Type param_1)

{
  SMultiLineEditableTextBox *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SMultiLineEditableTextBox *)0x0) {
    local_18 = 0;
    local_30[4] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30._0_4_ = param_1;
    SMultiLineEditableTextBox::SetJustification(this_00,(TAttribute<ETextJustify::Type> *)local_30);
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

// OnLineHeightPercentageChanged @ 1469eb6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableTextBox::OnLineHeightPercentageChanged
          (UMultiLineEditableTextBox *this,float param_1)

{
  SMultiLineEditableTextBox *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SMultiLineEditableTextBox *)0x0) {
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[4] = true;
    local_30._0_4_ = param_1;
    SMultiLineEditableTextBox::SetLineHeightPercentage(this_00,(TAttribute<float> *)local_30);
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

// OnMarginChanged @ 1469ebae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableTextBox::OnMarginChanged(UMultiLineEditableTextBox *this,FMargin *param_1)

{
  SMultiLineEditableTextBox *this_00;
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SMultiLineEditableTextBox *)0x0) {
    local_40._0_4_ = param_1->Left;
    local_40._4_4_ = param_1->Top;
    local_40._8_4_ = param_1->Right;
    local_40._12_4_ = param_1->Bottom;
    local_40[0x10] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SMultiLineEditableTextBox::SetMargin(this_00,(TAttribute<FMargin> *)local_40);
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

// OnShapedTextOptionsChanged @ 1469f04a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableTextBox::OnShapedTextOptionsChanged
          (UMultiLineEditableTextBox *this,FShapedTextOptions param_1)

{
  SMultiLineEditableTextBox *pSVar1;
  undefined5 in_register_00000013;
  
  pSVar1 = (this->MyEditableTextBlock).Object;
  if (pSVar1 != (SMultiLineEditableTextBox *)0x0) {
    FShapedTextOptions::SynchronizeShapedTextProperties<SMultiLineEditableTextBox>
              ((FShapedTextOptions *)CONCAT53(in_register_00000013,param_1),pSVar1);
  }
  return;
}

// OnWrapTextAtChanged @ 1469f2920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableTextBox::OnWrapTextAtChanged(UMultiLineEditableTextBox *this,float param_1)

{
  SMultiLineEditableTextBox *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SMultiLineEditableTextBox *)0x0) {
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[4] = true;
    local_30._0_4_ = param_1;
    SMultiLineEditableTextBox::SetWrapTextAt(this_00,(TAttribute<float> *)local_30);
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

// OnWrappingPolicyChanged @ 1469f2bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableTextBox::OnWrappingPolicyChanged
          (UMultiLineEditableTextBox *this,ETextWrappingPolicy param_1)

{
  SMultiLineEditableTextBox *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SMultiLineEditableTextBox *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SMultiLineEditableTextBox::SetWrappingPolicy
              (this_00,(TAttribute<ETextWrappingPolicy> *)local_30);
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

// RebuildWidget @ 146a01dd0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UMultiLineEditableTextBox::RebuildWidget
          (UMultiLineEditableTextBox *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SMultiLineEditableTextBox *pSVar3;
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
  UMultiLineEditableTextBox *local_res18;
  UMultiLineEditableTextBox *local_res20;
  FMemScope local_a28;
  undefined4 uStack_a20;
  undefined4 uStack_a1c;
  undefined1 local_a18 [8];
  FDelegateAllocation local_a10;
  undefined1 local_a00 [8];
  FDelegateAllocation local_9f8;
  undefined1 local_9e8;
  undefined1 local_9e7;
  undefined1 local_9e0 [8];
  ForAnyElementType FStack_9d8;
  ulonglong local_9d0;
  undefined1 local_9c8;
  undefined1 local_9c7;
  undefined1 local_9c0 [8];
  ForAnyElementType FStack_9b8;
  ulonglong local_9b0;
  EVirtualKeyboardDismissAction local_9a8;
  undefined1 local_9a7;
  undefined1 local_9a0 [8];
  ForAnyElementType FStack_998;
  ulonglong local_990;
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs> local_988;
  SMultiLineEditableTextBox *local_970;
  FSharedReferencer<1> local_968;
  FName local_960;
  FDestructionSentinel local_958;
  FDestructionSentinel local_940;
  FDestructionSentinel local_928;
  FDestructionSentinel local_910;
  FDestructionSentinel local_8f8;
  FDestructionSentinel local_8e0;
  FDelegateAllocation *local_8c8;
  FDestructionSentinel local_8c0;
  FDelegateAllocation *local_8a8;
  FArguments local_8a0;
  
  pFVar9 = SMultiLineEditableTextBox::FArguments::FArguments(&local_8a0);
  pFVar9->_Style = &this->WidgetStyle;
  local_9e8 = this->AllowContextMenu;
  local_9e7 = 1;
  local_9d0 = 0;
  local_9e0 = (undefined1  [8])0x0;
  FStack_9d8.Data = (FScriptContainerElement *)0x0;
  (pFVar9->_AllowContextMenu).Value = (bool)local_9e8;
  (pFVar9->_AllowContextMenu).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_AllowContextMenu).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9e0,
             (FWriteAccessScope *)&local_958);
  if (((int)local_9d0 != 0) && (FStack_9d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9d8,0,0,0x10);
    local_9d0 = local_9d0 & 0xffffffff00000000;
  }
  if (local_958.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_958.Accessor,&local_958);
  }
  if (FStack_9d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9e0);
  local_9c8 = this->bIsReadOnly;
  local_9c7 = 1;
  local_9b0 = 0;
  local_9c0 = (undefined1  [8])0x0;
  FStack_9b8.Data = (FScriptContainerElement *)0x0;
  (pFVar9->_IsReadOnly).Value = (bool)local_9c8;
  (pFVar9->_IsReadOnly).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_IsReadOnly).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9c0,
             (FWriteAccessScope *)&local_940);
  if (((int)local_9b0 != 0) && (FStack_9b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9b8,0,0,0x10);
    local_9b0 = local_9b0 & 0xffffffff00000000;
  }
  if (local_940.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_940.Accessor,&local_940);
  }
  if (FStack_9b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9c0);
  (pFVar9->_VirtualKeyboardOptions).bEnableAutocorrect =
       (this->VirtualKeyboardOptions).bEnableAutocorrect;
  local_9a8 = this->VirtualKeyboardDismissAction;
  local_9a7 = 1;
  local_9a0 = (undefined1  [8])0x0;
  FStack_998.Data = (FScriptContainerElement *)0x0;
  local_990 = 0;
  (pFVar9->_VirtualKeyboardDismissAction).Value = local_9a8;
  (pFVar9->_VirtualKeyboardDismissAction).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar9->_VirtualKeyboardDismissAction).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9a0,
             (FWriteAccessScope *)&local_928);
  if (((int)local_990 != 0) && (FStack_998.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_998.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_998,0,0,0x10);
    local_990 = local_990 & 0xffffffff00000000;
  }
  if (local_928.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_928.Accessor,&local_928);
  }
  if (FStack_998.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_998.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9a0);
  uStack_a20 = 0;
  local_a28 = (FMemScope)HandleOnTextChanged;
  local_a00 = (undefined1  [8])0x0;
  local_9f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_9f8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a00,
             (FWriteAccessScope *)&local_8e0);
  local_8c8 = &local_9f8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_9f8);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUMultiLineEditableTextBox____A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
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
    *(FMemScope *)(puVar10 + 4) = local_a28;
    puVar10[5] = CONCAT44(uStack_a1c,uStack_a20);
  }
  if (local_8e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8e0.Accessor,&local_8e0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnTextChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a00);
  uStack_a20 = 0;
  local_a28 = (FMemScope)HandleOnTextCommitted;
  local_a18 = (undefined1  [8])0x0;
  local_a10.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a10.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a18,
             (FWriteAccessScope *)&local_8c0);
  local_8a8 = &local_a10;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_a10);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUMultiLineEditableTextBox____A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
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
    *(FMemScope *)(puVar10 + 4) = local_a28;
    puVar10[5] = CONCAT44(uStack_a1c,uStack_a20);
  }
  if (local_8c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8c0.Accessor,&local_8c0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnTextCommitted,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a18);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_960 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_a28,&local_960,true);
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>
            (&local_988,"SMultiLineEditableTextBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\MultiLineEditableTextBox.cpp"
             ,0x4f,local_res8);
  FMemScope::~FMemScope(&local_a28);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_988._Widget.Object;
  if (local_988._Widget.Object == (SMultiLineEditableTextBox *)0x0) {
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
  SWidget::SWidgetConstruct((SWidget *)local_988._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  SMultiLineEditableTextBox::Construct(local_988._Widget.Object,pFVar9);
  if (local_988._Widget.Object == (SMultiLineEditableTextBox *)0x0) {
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
  if (((local_988._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_988._Widget.Object)->_padding_ + 0x228))(local_988._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_146a02302;
  }
  bVar8 = 0x20;
LAB_146a02302:
  *(byte *)&(local_988._Widget.Object)->_padding_ =
       (byte)(local_988._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_988._Widget.Object)->_padding_ =
       (byte)(local_988._Widget.Object)->_padding_ | bVar8;
  if (local_988._Widget.Object == (SMultiLineEditableTextBox *)0x0) {
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
  pbVar1 = (byte *)((longlong)&(local_988._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_988._Widget.Object == (SMultiLineEditableTextBox *)0x0) {
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
  FVar5.ReferenceController = local_988._Widget.SharedReferenceCount.ReferenceController;
  local_988._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_988._Widget.Object = (SMultiLineEditableTextBox *)0x0;
  if (pSVar3 == (SMultiLineEditableTextBox *)0x0) {
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
  local_970 = pSVar3;
  local_968.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyEditableTextBlock != (TSharedPtr<SMultiLineEditableTextBox,1> *)&local_970) {
    (this->MyEditableTextBlock).Object = pSVar3;
    local_970 = (SMultiLineEditableTextBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyEditableTextBlock).SharedReferenceCount,&local_968);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_968.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a18,
             (FWriteAccessScope *)&local_910);
  if ((local_a10.DelegateSize != 0) &&
     (local_a10.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a10.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a10,0,0,0x10);
    local_a10.DelegateSize = 0;
  }
  if (local_910.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_910.Accessor,&local_910);
  }
  if (local_a10.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a10.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a18);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a00,
             (FWriteAccessScope *)&local_8f8);
  if ((local_9f8.DelegateSize != 0) &&
     (local_9f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_9f8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_9f8,0,0,0x10);
    local_9f8.DelegateSize = 0;
  }
  if (local_8f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8f8.Accessor,&local_8f8);
  }
  if (local_9f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_9f8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a00);
  SMultiLineEditableTextBox::FArguments::~FArguments(&local_8a0);
  if ((this->MyEditableTextBlock).Object == (SMultiLineEditableTextBox *)0x0) {
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
  pTVar2 = (this->MyEditableTextBlock).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->MyEditableTextBlock).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SMultiLineEditableTextBox *)0x0) {
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

// ReleaseSlateResources @ 146a0aa20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableTextBox::ReleaseSlateResources(UMultiLineEditableTextBox *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyEditableTextBlock != (TSharedPtr<SMultiLineEditableTextBox,1> *)&local_18) {
    (this->MyEditableTextBlock).Object = (SMultiLineEditableTextBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyEditableTextBlock).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// Serialize @ 146a109d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableTextBox::Serialize(UMultiLineEditableTextBox *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  return;
}

// Serialize @ 146a10a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableTextBox::Serialize
          (UMultiLineEditableTextBox *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FUE5ReleaseStreamObjectVersion::GUID);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// SetError @ 146a13d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMultiLineEditableTextBox::SetError(UMultiLineEditableTextBox *this,FText *param_1)

{
  SMultiLineEditableTextBox *this_00;
  ITextData *pIVar1;
  
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SMultiLineEditableTextBox *)0x0) {
    SMultiLineEditableTextBox::SetError(this_00,param_1);
  }
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a13d4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

// SetForegroundColor @ 146a144f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableTextBox::SetForegroundColor(UMultiLineEditableTextBox *this,FLinearColor *param_1)

{
  SMultiLineEditableTextBox *pSVar1;
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined1 local_30;
  undefined1 local_2c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  pSVar1 = (this->MyEditableTextBlock).Object;
  if (pSVar1 != (SMultiLineEditableTextBox *)0x0) {
    local_40._0_8_ = *(undefined8 *)&param_1->field0_0x0;
    local_40._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    local_30 = 0;
    local_18 = 0;
    local_2c = 1;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar1->_padding_,(SWidget *)pSVar1,(TAttribute<FSlateColor> *)&local_40._s_0,None)
    ;
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

// SetHintText @ 146a14de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableTextBox::SetHintText(UMultiLineEditableTextBox *this,FText *param_1)

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
  if ((this->MyEditableTextBlock).Object != (SMultiLineEditableTextBox *)0x0) {
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
    if ((this->MyEditableTextBlock).Object == (SMultiLineEditableTextBox *)0x0) {
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
    SMultiLineEditableTextBox::SetHintText
              ((this->MyEditableTextBlock).Object,(TAttribute<FText> *)local_b0);
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

// SetIsReadOnly @ 146a160e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableTextBox::SetIsReadOnly(UMultiLineEditableTextBox *this,bool param_1)

{
  SMultiLineEditableTextBox *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->bIsReadOnly = param_1;
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SMultiLineEditableTextBox *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SMultiLineEditableTextBox::SetIsReadOnly(this_00,(TAttribute<bool> *)local_30);
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

// SetText @ 146a1c000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UMultiLineEditableTextBox::SetText(UMultiLineEditableTextBox *this,FText *param_1)

{
  SMultiLineEditableTextBox *this_00;
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
    this_00 = (this->MyEditableTextBlock).Object;
    if (this_00 != (SMultiLineEditableTextBox *)0x0) {
      local_38._0_8_ = (this->Text).TextData.Reference;
      if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 8))(local_38._0_8_,local_res10);
      }
      local_38._8_4_ = (this->Text).Flags;
      local_38[0x10] = true;
      local_10 = 0;
      local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_18.Data = (FScriptContainerElement *)0x0;
      SMultiLineEditableTextBox::SetText(this_00,(TAttribute<FText> *)local_38);
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
                    /* WARNING: Could not recover jumptable at 0x000146a1c148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

// SetTextInternal @ 146a1c590

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMultiLineEditableTextBox::SetTextInternal(UMultiLineEditableTextBox *this,FText *param_1)

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

// SetTextStyle @ 146a1c730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMultiLineEditableTextBox::SetTextStyle(UMultiLineEditableTextBox *this,FTextBlockStyle *param_1)

{
  SMultiLineEditableTextBox *this_00;
  
  FTextBlockStyle::operator=(&(this->WidgetStyle).TextStyle,param_1);
  this_00 = (this->MyEditableTextBlock).Object;
  if (this_00 != (SMultiLineEditableTextBox *)0x0) {
    SMultiLineEditableTextBox::SetTextStyle(this_00,param_1);
  }
  return;
}

// StaticRegisterNativesUMultiLineEditableTextBox @ 146a1eb30

void __cdecl UMultiLineEditableTextBox::StaticRegisterNativesUMultiLineEditableTextBox(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UMultiLineEditableTextBox_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a23250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UMultiLineEditableTextBox::SynchronizeProperties(UMultiLineEditableTextBox *this)

{
  SMultiLineEditableTextBox *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  UObject *pUVar4;
  TAttribute<FText> *pTVar5;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  FName local_res18 [2];
  undefined1 local_1c8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1c0;
  ForAnyElementType FStack_1b8;
  ulonglong local_1b0;
  undefined1 local_1a8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a0;
  ForAnyElementType FStack_198;
  ulonglong local_190;
  undefined1 local_188 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_170;
  ForAnyElementType FStack_168;
  ulonglong local_160;
  undefined1 local_158 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_140;
  ForAnyElementType FStack_138;
  ulonglong local_130;
  TAttribute<EVirtualKeyboardDismissAction> local_128;
  FDestructionSentinel local_108;
  FDestructionSentinel local_f0;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  FReadAccessScope local_48;
  
  local_res8[0] = 0;
  UWidget::SynchronizeProperties((UWidget *)this);
  if ((this->MyEditableTextBlock).Object != (SMultiLineEditableTextBox *)0x0) {
    bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->HintTextDelegate);
    if (bVar3) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->HintTextDelegate,
                 &local_48);
      local_res18[0].ComparisonIndex.Value = *(uint *)&(this->HintTextDelegate).field_0x10;
      local_res18[0].Number = *(uint *)&(this->HintTextDelegate).field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      pUVar4 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->HintTextDelegate);
      pTVar5 = TAttribute<FText>::Create<UObject>((TAttribute<FText> *)local_78,pUVar4,local_res18);
      bVar2 = true;
      bVar3 = false;
    }
    else {
      local_188._0_8_ = (this->HintText).TextData.Reference;
      if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_188._0_8_ + 8))(local_188._0_8_,local_res8);
      }
      local_188._8_4_ = (this->HintText).Flags;
      pTVar5 = (TAttribute<FText> *)local_188;
      local_188[0x10] = true;
      bVar2 = false;
      bVar3 = true;
      local_160 = 0;
      local_170.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_168.Data = (FScriptContainerElement *)0x0;
    }
    FText::FText((FText *)local_a8,&pTVar5->Value);
    local_a8[0x10] = pTVar5->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_90,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar5->Getter);
    if (bVar3) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_170,(FWriteAccessScope *)&local_108);
      if (((int)local_160 != 0) && (FStack_168.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_168.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_168,0,0,0x10);
        local_160 = local_160 & 0xffffffff00000000;
      }
      if (local_108.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
      }
      if (FStack_168.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_168.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_170.AccessDetector);
      if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_188._0_8_ + 0x10))();
      }
    }
    if (bVar2) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
      if ((void *)local_60._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_60._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_60);
      if ((ITextData *)local_78._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_78._0_8_ + 0x10))();
      }
    }
    if ((this->MyEditableTextBlock).Object == (SMultiLineEditableTextBox *)0x0) {
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
    SMultiLineEditableTextBox::SetStyle((this->MyEditableTextBlock).Object,&this->WidgetStyle);
    if ((this->MyEditableTextBlock).Object == (SMultiLineEditableTextBox *)0x0) {
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
    local_158._0_8_ = (this->Text).TextData.Reference;
    this_00 = (this->MyEditableTextBlock).Object;
    if ((ITextData *)local_158._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_158._0_8_ + 8))(local_158._0_8_,local_res10);
    }
    local_158._8_4_ = (this->Text).Flags;
    local_158[0x10] = true;
    local_130 = 0;
    local_140.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_138.Data = (FScriptContainerElement *)0x0;
    SMultiLineEditableTextBox::SetText(this_00,(TAttribute<FText> *)local_158);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_140,(FWriteAccessScope *)&local_f0);
    if (((int)local_130 != 0) && (FStack_138.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_138.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_138,0,0,0x10);
      local_130 = local_130 & 0xffffffff00000000;
    }
    if (local_f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
    }
    if (FStack_138.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_138.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_140.AccessDetector);
    if ((ITextData *)local_158._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_158._0_8_ + 0x10))();
    }
    if ((this->MyEditableTextBlock).Object == (SMultiLineEditableTextBox *)0x0) {
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
    SMultiLineEditableTextBox::SetHintText
              ((this->MyEditableTextBlock).Object,(TAttribute<FText> *)local_a8);
    if ((this->MyEditableTextBlock).Object == (SMultiLineEditableTextBox *)0x0) {
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
    local_1c8[0] = this->AllowContextMenu;
    local_1b0 = 0;
    local_1c8[1] = true;
    local_1c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_1b8.Data = (FScriptContainerElement *)0x0;
    SMultiLineEditableTextBox::SetAllowContextMenu
              ((this->MyEditableTextBlock).Object,(TAttribute<bool> *)local_1c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1c0,(FWriteAccessScope *)&local_d8);
    if (((int)local_1b0 != 0) && (FStack_1b8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1b8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1b8,0,0,0x10);
      local_1b0 = local_1b0 & 0xffffffff00000000;
    }
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    if (FStack_1b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1b8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1c0.AccessDetector);
    if ((this->MyEditableTextBlock).Object == (SMultiLineEditableTextBox *)0x0) {
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
    local_1a8[0] = this->bIsReadOnly;
    local_190 = 0;
    local_1a8[1] = true;
    local_1a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_198.Data = (FScriptContainerElement *)0x0;
    SMultiLineEditableTextBox::SetIsReadOnly
              ((this->MyEditableTextBlock).Object,(TAttribute<bool> *)local_1a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1a0,(FWriteAccessScope *)&local_c0);
    if (((int)local_190 != 0) && (FStack_198.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_198.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_198,0,0,0x10);
      local_190 = local_190 & 0xffffffff00000000;
    }
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
    if (FStack_198.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_198.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a0.AccessDetector);
    if ((this->MyEditableTextBlock).Object == (SMultiLineEditableTextBox *)0x0) {
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
    local_128.Value = this->VirtualKeyboardDismissAction;
    local_128.Getter._16_8_ = 0;
    local_128.bIsSet = true;
    local_128.Getter._0_8_ = 0;
    local_128.Getter._8_8_ = 0;
    SMultiLineEditableTextBox::SetVirtualKeyboardDismissAction
              ((this->MyEditableTextBlock).Object,&local_128);
    if ((this->MyEditableTextBlock).Object == (SMultiLineEditableTextBox *)0x0) {
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
    UTextLayoutWidget::SynchronizeTextLayoutProperties<SMultiLineEditableTextBox>
              ((UTextLayoutWidget *)this,(this->MyEditableTextBlock).Object);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    if ((void *)local_90._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_90._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_90);
    if ((ITextData *)local_a8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_a8._0_8_ + 0x10))();
    }
  }
  return;
}

// execGetHintText @ 146a35430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMultiLineEditableTextBox::execGetHintText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetHintText((UMultiLineEditableTextBox *)param_1,&local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execGetText @ 146a36400

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMultiLineEditableTextBox::execGetText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetText((UMultiLineEditableTextBox *)param_1,&local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execSetError @ 146a3c4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMultiLineEditableTextBox::execSetError(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
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
              (local_28.TextData.Reference,local_res8);
  }
  local_18.Flags = local_28.Flags;
  if (*(SMultiLineEditableTextBox **)&param_1[0x5e].field_0x18 != (SMultiLineEditableTextBox *)0x0)
  {
    SMultiLineEditableTextBox::SetError
              (*(SMultiLineEditableTextBox **)&param_1[0x5e].field_0x18,&local_18);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))(local_18.TextData.Reference);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execSetForegroundColor @ 146a3d100

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UMultiLineEditableTextBox::execSetForegroundColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SWidget *pSVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined1 local_30;
  undefined1 local_2c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pSVar2 = *(SWidget **)&param_1[0x5e].field_0x18;
  if (pSVar2 != (SWidget *)0x0) {
    local_30 = 0;
    local_2c = 1;
    local_18 = 0;
    local_40._0_8_ = local_68;
    local_40._8_8_ = uStack_60;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar2[1].PersistentState.InitialClipState.TypedValue.ScissorRect.TypedValue.
                 BottomRight,pSVar2,(TAttribute<FSlateColor> *)&local_40._s_0,None);
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

// execSetHintText @ 146a3d5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMultiLineEditableTextBox::execSetHintText(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetHintText((UMultiLineEditableTextBox *)param_1,&local_18);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execSetIsReadOnly @ 146a3e640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMultiLineEditableTextBox::execSetIsReadOnly(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetIsReadOnly((UMultiLineEditableTextBox *)param_1,local_res10[0] != 0);
  return;
}

// execSetText @ 146a433e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMultiLineEditableTextBox::execSetText(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetText((UMultiLineEditableTextBox *)param_1,&local_18);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execSetTextStyle @ 146a43960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMultiLineEditableTextBox::execSetTextStyle(UObject *param_1,FFrame *param_2,void *param_3)

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
  FTextBlockStyle::operator=((FTextBlockStyle *)&param_1[0x1f].field_0x18,pFVar2);
  if (*(SMultiLineEditableTextBox **)&param_1[0x5e].field_0x18 != (SMultiLineEditableTextBox *)0x0)
  {
    SMultiLineEditableTextBox::SetTextStyle
              (*(SMultiLineEditableTextBox **)&param_1[0x5e].field_0x18,pFVar2);
  }
  FTextBlockStyle::~FTextBlockStyle(&local_2e8);
  return;
}

