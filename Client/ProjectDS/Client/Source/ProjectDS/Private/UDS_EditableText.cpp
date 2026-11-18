// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetDSHintText_WrapperImpl @ 14b4868b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_EditableText::SetDSHintText_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 auStackX_8 [8];
  FText FStack_28;
  FText FStack_18;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x4f0),param_2);
  FDS_Text::GetText((FDS_Text *)((longlong)param_1 + 0x4f0),&FStack_28);
  FStack_18.TextData.Reference = FStack_28.TextData.Reference;
  if (FStack_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_28.TextData.Reference + 8))
              (FStack_28.TextData.Reference,auStackX_8);
  }
  FStack_18.Flags = FStack_28.Flags;
  UEditableText::SetHintText(param_1,&FStack_18);
  if (FStack_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_28.TextData.Reference + 0x10))();
  }
  return;
}

// SetWidgetFocusEvent_WrapperImpl @ 14b4868c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_EditableText::SetWidgetFocusEvent_WrapperImpl(void *param_1,void *param_2)

{
  ESlateVisibility EVar1;
  
  EVar1 = UWidget::GetVisibility(param_1);
  if (EVar1 == Visible) {
    UWidget::SetFocus(param_1);
    return;
  }
  return;
}

// SetTextCursorEvent_WrapperImpl @ 14b4868d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_EditableText::SetTextCursorEvent_WrapperImpl(void *param_1,void *param_2)

{
  SEditableText *this;
  FTextLocation aFStackX_8 [4];
  
  this = *(SEditableText **)((longlong)param_1 + 0x4d8);
  if (this != (SEditableText *)0x0) {
    aFStackX_8[0].Offset = *(int *)((longlong)param_2 + 8);
    if (aFStackX_8[0].Offset == -1) {
      SEditableText::GoTo(this,EndOfDocument);
      return;
    }
    aFStackX_8[0].LineIndex = *(int *)((longlong)param_2 + 4);
    SEditableText::GoTo(this,aFStackX_8);
  }
  return;
}

// StaticClass @ 14b4868e0

UClass * __cdecl UDS_EditableText::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EditableText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EditableText",
               &Z_Registration_Info_UClass_UDS_EditableText.InnerSingleton,
               StaticRegisterNativesUDS_EditableText,0x590,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_EditableText>,
               InternalVTableHelperCtorCaller<UDS_EditableText>,local_res8,
               UEditableText::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EditableText.InnerSingleton;
}

// UDS_EditableText @ 14b48b3c0

/* WARNING: Enum "Type": Some values do not have unique names */

UDS_EditableText * __thiscall
UDS_EditableText::UDS_EditableText(UDS_EditableText *this,FVTableHelper *param_1)

{
  UEditableText::UEditableText((UEditableText *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->DSHintText).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->DSHintText).StringTableID = 0;
  (this->DSHintText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DSHintText).StringEnumTableNameID.Number = 0;
  (this->DSHintText).DateTime.Ticks = 0;
  (this->DSHintText).TimeSpan.Ticks = 0;
  (this->DSHintText).TimeExpressionType = None;
  (this->DSHintText).IsExpression = false;
  (this->DSHintText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSHintText).UniqueString.Data.ArrayNum = 0;
  (this->DSHintText).UniqueString.Data.ArrayMax = 0;
  (this->DSHintText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSHintText).FormatArgs.ArrayNum = 0;
  (this->DSHintText).FormatArgs.ArrayMax = 0;
  (this->DefaultTextStyleOverrideClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  FText::FText(&(this->TextCommittedEvent).NewText);
  FText::FText(&(this->TextChangedEvent).NewText);
  *(undefined1 *)&(this->TextCursorEvent)._padding_ = 0;
  (this->TextCursorEvent).TextLine = 0;
  (this->TextCursorEvent).TextOffset = 0;
  this->MaxTextLength = 0;
  return this;
}

// ~UDS_EditableText @ 14b48be00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_EditableText::~UDS_EditableText(UDS_EditableText *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  pIVar1 = (this->TextChangedEvent).NewText.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->TextCommittedEvent).NewText.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DSHintText).FormatArgs.AllocatorInstance.Data,
             (this->DSHintText).FormatArgs.ArrayNum);
  pFVar2 = (this->DSHintText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DSHintText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UEditableText::~UEditableText((UEditableText *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b48cc20

IClassDescriptor * __thiscall
UDS_EditableText::GetFieldNotificationDescriptor(UDS_EditableText *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_EditableText::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b48d490

UClass * __cdecl UDS_EditableText::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EditableText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EditableText",
               &Z_Registration_Info_UClass_UDS_EditableText.InnerSingleton,
               StaticRegisterNativesUDS_EditableText,0x590,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_EditableText>,
               InternalVTableHelperCtorCaller<UDS_EditableText>,local_res8,
               UEditableText::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EditableText.InnerSingleton;
}

// StaticRegisterNativesUDS_EditableText @ 14b48d8b0

void __cdecl UDS_EditableText::StaticRegisterNativesUDS_EditableText(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_EditableText_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execTextChanged @ 14b48ea50

void __cdecl UDS_EditableText::execTextChanged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar2 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TextChanged((UDS_EditableText *)param_1,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execTextCommitted @ 14b48eb00

void __cdecl UDS_EditableText::execTextCommitted(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  byte local_res10 [8];
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  pFVar2 = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar2 = (FText *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TextCommitted((UDS_EditableText *)param_1,pFVar2,(uint)local_res10[0]);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// UDS_EditableText @ 14bc83d00

/* WARNING: Enum "Type": Some values do not have unique names */

UDS_EditableText * __thiscall
UDS_EditableText::UDS_EditableText(UDS_EditableText *this,FObjectInitializer *param_1)

{
  UEditableText::UEditableText((UEditableText *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->DSHintText).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->DSHintText).StringTableID = 0;
  (this->DSHintText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DSHintText).StringEnumTableNameID.Number = 0;
  (this->DSHintText).DateTime.Ticks = 0;
  (this->DSHintText).TimeSpan.Ticks = 0;
  (this->DSHintText).TimeExpressionType = None;
  (this->DSHintText).IsExpression = false;
  (this->DSHintText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSHintText).UniqueString.Data.ArrayNum = 0;
  (this->DSHintText).UniqueString.Data.ArrayMax = 0;
  (this->DSHintText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSHintText).FormatArgs.ArrayNum = 0;
  (this->DSHintText).FormatArgs.ArrayMax = 0;
  (this->DefaultTextStyleOverrideClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  FText::FText(&(this->TextCommittedEvent).NewText);
  FText::FText(&(this->TextChangedEvent).NewText);
  *(undefined1 *)&(this->TextCursorEvent)._padding_ = 0;
  (this->TextCursorEvent).TextLine = 0;
  (this->TextCursorEvent).TextOffset = 0;
  this->MaxTextLength = 0;
  return this;
}

// HandleKeyDown @ 14bca2b90

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UDS_EditableText::HandleKeyDown
          (UDS_EditableText *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  if ((param_2->_padding_ & 3) != 0) {
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTextCursorEvent @ 14bcbb910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_EditableText::OnTextCursorEvent(UDS_EditableText *this,FDS_TextCursorEventField *param_1)

{
  SEditableText *this_00;
  FTextLocation local_res8 [4];
  
  this_00 = (SEditableText *)this->_padding_;
  if (this_00 != (SEditableText *)0x0) {
    local_res8[0].Offset = param_1->TextOffset;
    if (local_res8[0].Offset == -1) {
      SEditableText::GoTo(this_00,EndOfDocument);
      return;
    }
    local_res8[0].LineIndex = param_1->TextLine;
    SEditableText::GoTo(this_00,local_res8);
  }
  return;
}

// RebuildWidget @ 14bcc0d30

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UDS_EditableText::RebuildWidget
          (UDS_EditableText *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_EditableText *local_res8;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  UEditableText::RebuildWidget((UEditableText *)this,__return_storage_ptr__);
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    local_88 = HandleKeyDown;
    uStack_80 = 0;
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_EditableText____A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
      puVar2[4] = local_88;
      puVar2[5] = CONCAT44(uStack_7c,uStack_80);
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
    operator=((TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
               *)(lVar1 + 0x530),
              (TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
               *)local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_88);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_78 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
                 (FDestructionSentinel *)&local_88);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
  }
  return __return_storage_ptr__;
}

// SetDSHintText @ 14bcc59b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_EditableText::SetDSHintText(UDS_EditableText *this,FDS_Text *param_1)

{
  undefined1 local_res8 [8];
  FText local_28;
  FText local_18;
  
  FDS_Text::operator=(&this->DSHintText,param_1);
  FDS_Text::GetText(&this->DSHintText,&local_28);
  local_18.TextData.Reference = local_28.TextData.Reference;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res8);
  }
  local_18.Flags = local_28.Flags;
  UEditableText::SetHintText((UEditableText *)this,&local_18);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// SetDefaultTextStyle @ 14bcc5ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_EditableText::SetDefaultTextStyle(UDS_EditableText *this)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UCommonTextStyle *pUVar5;
  FSlateFontInfo *pFVar6;
  UClass *pUVar7;
  uint local_78;
  FSlateFontInfo local_70;
  
  pUVar7 = (this->DefaultTextStyleOverrideClass).Class.field0_0x0.DebugPtr;
  if (pUVar7 == (UClass *)0x0) {
    return;
  }
  pUVar4 = Z_Construct_UClass_UCommonTextStyle_NoRegister();
  if (pUVar4 == (UClass *)0x0) {
    return;
  }
  iVar1 = (int)pUVar4->_padding_;
  if (((int)pUVar7->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  pUVar7 = (this->DefaultTextStyleOverrideClass).Class.field0_0x0.DebugPtr;
  if (pUVar7 == (UClass *)0x0) {
    return;
  }
  pUVar4 = Z_Construct_UClass_UCommonTextStyle_NoRegister();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar7 = (this->DefaultTextStyleOverrideClass).Class.field0_0x0.DebugPtr;
      goto LAB_14bcc5d3b;
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_14bcc5d3b:
  pUVar5 = GetDefault<UCommonTextStyle>(pUVar7);
  if (pUVar5 != (UCommonTextStyle *)0x0) {
    lVar2 = *(longlong *)((longlong)&(pUVar5->Color).field0_0x0 + 8);
    local_78 = local_78 & 0xffffff00;
    this->_padding_ = *(longlong *)&(pUVar5->Color).field0_0x0;
    this->_padding_ = lVar2;
    *(uint *)&this->_padding_ = local_78;
    pFVar6 = FSlateFontInfo::FSlateFontInfo(&local_70,&pUVar5->Font);
    UEditableText::SetFont((UEditableText *)this,pFVar6);
  }
  return;
}

// SetWidgetFocusEvent @ 14bcc9b10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_EditableText::SetWidgetFocusEvent(UDS_EditableText *this,FWidgetEventField *param_1)

{
  ESlateVisibility EVar1;
  
  EVar1 = UWidget::GetVisibility((UWidget *)this);
  if (EVar1 == Visible) {
    UWidget::SetFocus((UWidget *)this);
    return;
  }
  return;
}

// SynchronizeProperties @ 14bccaf00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_EditableText::SynchronizeProperties(UDS_EditableText *this)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  char *pcVar6;
  UObject *pUVar7;
  UFunction *pUVar8;
  UClass *pUVar9;
  UCommonTextStyle *pUVar10;
  FSlateFontInfo *pFVar11;
  char *pcVar12;
  UClass *pUVar13;
  char *pcVar14;
  <lambda_1> local_res8 [8];
  <lambda_1> local_res10 [8];
  FName local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1b8;
  FWeakObjectPtr local_1b0;
  FName local_1a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a0;
  FWeakObjectPtr local_198;
  FName local_190;
  FName local_188;
  UDS_EditableText *local_180;
  FName *local_178;
  FName local_170;
  UDS_EditableText *local_168;
  FName *local_160;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_158;
  uint local_148;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_140;
  FDestructionSentinel local_130;
  FDestructionSentinel local_118;
  FReadAccessScope local_100;
  FReadAccessScope local_e8;
  FReadAccessScope local_d0;
  FReadAccessScope local_b8;
  FSlateFontInfo local_a0;
  
  UEditableText::SynchronizeProperties((UEditableText *)this);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (UObject *)this);
  pcVar6 = strstr("&UDS_EditableText::TextCommitted","::");
  pcVar14 = &DAT_00000002;
  if (pcVar6 == (char *)0x0) {
LAB_14bccaf7c:
    pcVar12 = &DAT_00000002;
LAB_14bccaf7f:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar12 = pcVar6;
      pcVar6 = strstr(pcVar12 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if (pcVar12 == (char *)0x0) goto LAB_14bccaf7c;
    pcVar12 = pcVar12 + 2;
    if (*pcVar12 == '0') goto LAB_14bccaf7f;
  }
  ::FName::FName(&local_188,pcVar12);
  if ((this == (UDS_EditableText *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar13 = (UClass *)0x0;
  local_res18 = local_188;
  local_1b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_1b0.ObjectIndex = 0;
  local_1b0.ObjectSerialNumber = 0;
  local_1a8.ComparisonIndex.Value = 0;
  local_1a8.Number = 0;
  if ((this == (UDS_EditableText *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_180 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_EditableText *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_1b0,(FObjectPtr)&local_180);
  local_1a8 = local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_1b8,&local_100);
  if ((local_1a8 == (FName)0x0) ||
     (pUVar7 = FWeakObjectPtr::Get(&local_1b0), pUVar7 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_100);
LAB_14bccb0b0:
    local_178 = &local_res18;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FText_const_&,enum_ETextCommit::Type>::
    __Internal_BindDynamic<UDS_EditableText>'::__l2::<lambda_1>::operator()(&local_178);
  }
  else {
    pUVar8 = UObject::FindFunction(pUVar7,local_1a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_100);
    if (pUVar8 == (UFunction *)0x0) goto LAB_14bccb0b0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_1b8,&local_d0);
  local_140.Object = local_1b0;
  local_140.FunctionName = local_1a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FWriteAccessScope *)&local_130);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->_padding_,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_140);
  if (local_130.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1b8.AccessDetector);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (UObject *)this);
  pcVar6 = strstr("&UDS_EditableText::TextChanged","::");
  if (pcVar6 == (char *)0x0) {
LAB_14bccb19a:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar12 = pcVar6;
      pcVar6 = strstr(pcVar12 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if ((pcVar12 == (char *)0x0) || (pcVar14 = pcVar12 + 2, pcVar12[2] == '0')) goto LAB_14bccb19a;
  }
  ::FName::FName(&local_170,pcVar14);
  if ((this == (UDS_EditableText *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_1a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_198.ObjectIndex = 0;
  local_198.ObjectSerialNumber = 0;
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  local_res20 = local_170;
  if ((this == (UDS_EditableText *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_168 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_EditableText *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_198,(FObjectPtr)&local_168);
  local_190 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_1a0,&local_e8);
  if ((local_190 == (FName)0x0) ||
     (pUVar7 = FWeakObjectPtr::Get(&local_198), pUVar7 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e8);
  }
  else {
    pUVar8 = UObject::FindFunction(pUVar7,local_190);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e8);
    if (pUVar8 != (UFunction *)0x0) goto LAB_14bccb2db;
  }
  local_160 = &local_res20;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FText_const_&>::
  __Internal_BindDynamic<UDS_EditableText>'::__l2::<lambda_1>::operator()(&local_160);
LAB_14bccb2db:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_1a0,&local_b8);
  local_158.Object = local_198;
  local_158.FunctionName = local_190;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FWriteAccessScope *)&local_118);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->_padding_,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_158);
  if (local_118.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a0.AccessDetector);
  pUVar2 = (this->DefaultTextStyleOverrideClass).Class.field0_0x0.DebugPtr;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar9 = Z_Construct_UClass_UCommonTextStyle_NoRegister(), pUVar9 != (UClass *)0x0)) {
    iVar1 = (int)pUVar9->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar9->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) &&
       (pUVar2 = (this->DefaultTextStyleOverrideClass).Class.field0_0x0.DebugPtr,
       pUVar2 != (UClass *)0x0)) {
      pUVar9 = Z_Construct_UClass_UCommonTextStyle_NoRegister();
      if (pUVar9 != (UClass *)0x0) {
        iVar1 = (int)pUVar9->_padding_;
        if (((int)pUVar2->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar9->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          pUVar13 = (this->DefaultTextStyleOverrideClass).Class.field0_0x0.DebugPtr;
        }
      }
      pUVar10 = GetDefault<UCommonTextStyle>(pUVar13);
      if (pUVar10 != (UCommonTextStyle *)0x0) {
        lVar4 = *(longlong *)((longlong)&(pUVar10->Color).field0_0x0 + 8);
        local_148 = local_148 & 0xffffff00;
        this->_padding_ = *(longlong *)&(pUVar10->Color).field0_0x0;
        this->_padding_ = lVar4;
        *(uint *)&this->_padding_ = local_148;
        pFVar11 = FSlateFontInfo::FSlateFontInfo(&local_a0,&pUVar10->Font);
        UEditableText::SetFont((UEditableText *)this,pFVar11);
      }
    }
  }
  return;
}

// TextChanged @ 14bccbc00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_EditableText::TextChanged(UDS_EditableText *this,FText *param_1)

{
  int iVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FScriptContainerElement *_Src;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  FName FVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  FFieldId local_58;
  int local_4c;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (this->MaxTextLength < 1) {
    pIVar2 = (param_1->TextData).Reference;
    pIVar3 = (this->TextChangedEvent).NewText.TextData.Reference;
    if (pIVar3 != pIVar2) {
      (this->TextChangedEvent).NewText.TextData.Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
      }
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      }
    }
    (this->TextChangedEvent).NewText.Flags = param_1->Flags;
    local_58.FieldName = FFieldNotificationClassDescriptor::TextChangedEvent.FieldName;
    local_58.BitNumber = FFieldNotificationClassDescriptor::TextChangedEvent.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_58);
  }
  else {
    pFVar6 = FText::ToString(param_1);
    local_58.FieldName.ComparisonIndex.Value = 0;
    local_58.FieldName.Number = 0;
    local_58.BitNumber = (pFVar6->Data).ArrayNum;
    lVar8 = (longlong)local_58.BitNumber;
    _Src = (pFVar6->Data).AllocatorInstance.Data;
    if (local_58.BitNumber == 0) {
      local_4c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.BitNumber,0,(ForAnyElementType *)&local_58,local_58.BitNumber,
                 &local_4c);
      memcpy((void *)local_58.FieldName,_Src,lVar8 * 2);
    }
    iVar1 = this->MaxTextLength;
    iVar5 = local_58.BitNumber + -1;
    if (local_58.BitNumber == 0) {
      iVar5 = 0;
    }
    if (iVar1 < iVar5) {
      iVar5 = 0;
      if (0 < iVar1) {
        iVar5 = iVar1;
      }
      FVar7 = (FName)L"";
      if (local_58.BitNumber != 0) {
        FVar7 = local_58.FieldName;
      }
      ::FString::ConstructFromPtrSize((FString *)&local_38,(wchar_t *)FVar7,iVar5);
      FText::FromString(&local_48,(FString *)&local_38);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_38.TextData.Reference);
      }
    }
    else {
      local_48.TextData.Reference = (param_1->TextData).Reference;
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 8))
                  (local_48.TextData.Reference,local_res8);
      }
      local_48.Flags = param_1->Flags;
    }
    if (local_58.FieldName != (FName)0x0) {
      FMemory::Free((void *)local_58.FieldName);
    }
    UEditableText::GetText((UEditableText *)this,&local_28);
    bVar4 = FText::EqualTo(&local_48,&local_28,Default);
    if (!bVar4) {
      local_38.TextData.Reference = local_48.TextData.Reference;
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 8))
                  (local_48.TextData.Reference,local_res8);
      }
      local_38.Flags = local_48.Flags;
      UEditableText::SetText((UEditableText *)this,&local_38);
    }
    pIVar2 = (this->TextChangedEvent).NewText.TextData.Reference;
    if (pIVar2 != local_48.TextData.Reference) {
      (this->TextChangedEvent).NewText.TextData.Reference = local_48.TextData.Reference;
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 8))
                  (local_48.TextData.Reference,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->TextChangedEvent).NewText.Flags = local_48.Flags;
    local_58.FieldName = FFieldNotificationClassDescriptor::TextChangedEvent.FieldName;
    local_58.BitNumber = FFieldNotificationClassDescriptor::TextChangedEvent.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_58);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  return;
}

// TextCommitted @ 14bccc3a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_EditableText::TextCommitted(UDS_EditableText *this,FText *param_1,Type param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res18 [8];
  FFieldId local_18;
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->TextCommittedEvent).NewText.TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->TextCommittedEvent).NewText.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->TextCommittedEvent).NewText.Flags = param_1->Flags;
  (this->TextCommittedEvent).CommitType = param_2;
  local_18.FieldName = FFieldNotificationClassDescriptor::TextCommittedEvent.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::TextCommittedEvent.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

// TrimToMaxLength @ 14bccd1d0

FText * __thiscall
UDS_EditableText::TrimToMaxLength
          (UDS_EditableText *this,FText *__return_storage_ptr__,FText *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  ITextData *pIVar2;
  int iVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  FString local_28;
  
  pFVar4 = FText::ToString(param_1);
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = (pFVar4->Data).ArrayNum;
  lVar6 = (longlong)local_30;
  _Src = (pFVar4->Data).AllocatorInstance.Data;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,_Src,lVar6 * 2);
  }
  iVar1 = this->MaxTextLength;
  iVar3 = local_30 + -1;
  if (local_30 == 0) {
    iVar3 = 0;
  }
  if (iVar1 < iVar3) {
    iVar3 = 0;
    if (0 < iVar1) {
      iVar3 = iVar1;
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_30 != 0) {
      FVar5.Data = local_38.Data;
    }
    ::FString::ConstructFromPtrSize(&local_28,(wchar_t *)FVar5.Data,iVar3);
    FText::FromString(__return_storage_ptr__,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = (param_1->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    __return_storage_ptr__->Flags = param_1->Flags;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return __return_storage_ptr__;
}

