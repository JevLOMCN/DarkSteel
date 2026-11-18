// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// SetWidgetFocusEvent_WrapperImpl @ 14b4fc600

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_MultiLineEditableText::SetWidgetFocusEvent_WrapperImpl(void *param_1,void *param_2)

{
  ESlateVisibility EVar1;
  
  EVar1 = UWidget::GetVisibility(param_1);
  if (EVar1 == Visible) {
    UWidget::SetFocus(param_1);
    return;
  }
  return;
}

// SetTextCursorEvent_WrapperImpl @ 14b4fc610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_MultiLineEditableText::SetTextCursorEvent_WrapperImpl(void *param_1,void *param_2)

{
  SMultiLineEditableText *this;
  FTextLocation aFStackX_8 [4];
  
  this = *(SMultiLineEditableText **)((longlong)param_1 + 0x528);
  if (this != (SMultiLineEditableText *)0x0) {
    aFStackX_8[0].Offset = *(int *)((longlong)param_2 + 8);
    if (aFStackX_8[0].Offset == -1) {
      SMultiLineEditableText::GoTo(this,EndOfDocument);
      return;
    }
    aFStackX_8[0].LineIndex = *(int *)((longlong)param_2 + 4);
    SMultiLineEditableText::GoTo(this,aFStackX_8);
  }
  return;
}

// SetDSHintText_WrapperImpl @ 14b4fc620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_MultiLineEditableText::SetDSHintText_WrapperImpl(void *param_1,void *param_2)

{
  FText *pFVar1;
  FText FStack_28;
  FText FStack_18;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x580),param_2);
  FDS_Text::GetText((FDS_Text *)((longlong)param_1 + 0x580),&FStack_28);
  pFVar1 = FDS_Text::GetText((FDS_Text *)((longlong)param_1 + 0x580),&FStack_18);
  UMultiLineEditableText::SetHintText(param_1,pFVar1);
  if (FStack_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_28.TextData.Reference + 0x10))();
  }
  return;
}

// SetOverrideColor_WrapperImpl @ 14b4fc630

void __cdecl UDS_MultiLineEditableText::SetOverrideColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_18;
  
  *(undefined1 *)((longlong)param_1 + 0x5d0) = 1;
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)((longlong)param_2 + 8);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_18 = uStack_18 & 0xffffff00;
  *(undefined4 *)((longlong)param_1 + 0x5d4) = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 0x5d8) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x5dc) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x5e0) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)((longlong)param_2 + 8);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x278) = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 0x27c) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x280) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x284) = uVar3;
  *(uint *)((longlong)param_1 + 0x288) = uStack_18;
                    /* WARNING: Could not recover jumptable at 0x00014bcc7ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2e8))();
  return;
}

// StaticClass @ 14b4fc640

UClass * __cdecl UDS_MultiLineEditableText::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MultiLineEditableText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MultiLineEditableText",
               &Z_Registration_Info_UClass_UDS_MultiLineEditableText.InnerSingleton,
               StaticRegisterNativesUDS_MultiLineEditableText,0x5f0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MultiLineEditableText>,
               InternalVTableHelperCtorCaller<UDS_MultiLineEditableText>,local_res8,
               UMultiLineEditableText::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MultiLineEditableText.InnerSingleton;
}

// UDS_MultiLineEditableText @ 14b501d20

/* WARNING: Enum "Type": Some values do not have unique names */

UDS_MultiLineEditableText * __thiscall
UDS_MultiLineEditableText::UDS_MultiLineEditableText
          (UDS_MultiLineEditableText *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  
  UMultiLineEditableText::UMultiLineEditableText((UMultiLineEditableText *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->DefaultTextStyleOverrideClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FText::FText(&(this->TextCommittedEvent).NewText);
  FText::FText(&(this->TextChangedEvent).NewText);
  *(undefined1 *)&(this->TextCursorEvent)._padding_ = 0;
  (this->TextCursorEvent).TextLine = 0;
  (this->TextCursorEvent).TextOffset = 0;
  (this->DSHintText).StringTableType = None;
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
  this->IsOverrideColor = false;
  FVar1 = FLinearColor::White;
  this->MaxTextLength = 0;
  this->MaxTextLine = 0;
  (this->OverrideColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return this;
}

// ~UDS_MultiLineEditableText @ 14b5029e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MultiLineEditableText::~UDS_MultiLineEditableText(UDS_MultiLineEditableText *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DSHintText).FormatArgs.AllocatorInstance.Data,
             (this->DSHintText).FormatArgs.ArrayNum);
  pFVar1 = (this->DSHintText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DSHintText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->TextChangedEvent).NewText.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->TextCommittedEvent).NewText.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UMultiLineEditableText::~UMultiLineEditableText((UMultiLineEditableText *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b504360

IClassDescriptor * __thiscall
UDS_MultiLineEditableText::GetFieldNotificationDescriptor(UDS_MultiLineEditableText *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_MultiLineEditableText::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b505010

UClass * __cdecl UDS_MultiLineEditableText::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MultiLineEditableText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MultiLineEditableText",
               &Z_Registration_Info_UClass_UDS_MultiLineEditableText.InnerSingleton,
               StaticRegisterNativesUDS_MultiLineEditableText,0x5f0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MultiLineEditableText>,
               InternalVTableHelperCtorCaller<UDS_MultiLineEditableText>,local_res8,
               UMultiLineEditableText::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MultiLineEditableText.InnerSingleton;
}

// StaticRegisterNativesUDS_MultiLineEditableText @ 14b505bf0

void __cdecl UDS_MultiLineEditableText::StaticRegisterNativesUDS_MultiLineEditableText(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_MultiLineEditableText_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execTextChanged @ 14b508c30

void __cdecl
UDS_MultiLineEditableText::execTextChanged(UObject *param_1,FFrame *param_2,void *param_3)

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
  TextChanged((UDS_MultiLineEditableText *)param_1,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execTextCommitted @ 14b508ce0

void __cdecl
UDS_MultiLineEditableText::execTextCommitted(UObject *param_1,FFrame *param_2,void *param_3)

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
  TextCommitted((UDS_MultiLineEditableText *)param_1,pFVar2,(uint)local_res10[0]);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// UDS_MultiLineEditableText @ 14bc83f50

/* WARNING: Enum "Type": Some values do not have unique names */

UDS_MultiLineEditableText * __thiscall
UDS_MultiLineEditableText::UDS_MultiLineEditableText
          (UDS_MultiLineEditableText *this,FObjectInitializer *param_1)

{
  FLinearColor FVar1;
  
  UMultiLineEditableText::UMultiLineEditableText((UMultiLineEditableText *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->DefaultTextStyleOverrideClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FText::FText(&(this->TextCommittedEvent).NewText);
  FText::FText(&(this->TextChangedEvent).NewText);
  *(undefined1 *)&(this->TextCursorEvent)._padding_ = 0;
  (this->TextCursorEvent).TextLine = 0;
  (this->TextCursorEvent).TextOffset = 0;
  (this->DSHintText).StringTableType = None;
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
  this->IsOverrideColor = false;
  FVar1 = FLinearColor::White;
  this->MaxTextLength = 0;
  this->MaxTextLine = 0;
  (this->OverrideColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return this;
}

// HandleKeyDown @ 14bca2bd0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UDS_MultiLineEditableText::HandleKeyDown
          (UDS_MultiLineEditableText *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  if ((param_2->_padding_ & 3) != 0) {
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTextCursorEvent @ 14bcbb960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MultiLineEditableText::OnTextCursorEvent
          (UDS_MultiLineEditableText *this,FDS_TextCursorEventField *param_1)

{
  SMultiLineEditableText *this_00;
  FTextLocation local_res8 [4];
  
  this_00 = (SMultiLineEditableText *)this->_padding_;
  if (this_00 != (SMultiLineEditableText *)0x0) {
    local_res8[0].Offset = param_1->TextOffset;
    if (local_res8[0].Offset == -1) {
      SMultiLineEditableText::GoTo(this_00,EndOfDocument);
      return;
    }
    local_res8[0].LineIndex = param_1->TextLine;
    SMultiLineEditableText::GoTo(this_00,local_res8);
  }
  return;
}

// RebuildWidget @ 14bcc0ee0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UDS_MultiLineEditableText::RebuildWidget
          (UDS_MultiLineEditableText *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_MultiLineEditableText *local_res8;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  UMultiLineEditableText::RebuildWidget((UMultiLineEditableText *)this,__return_storage_ptr__);
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_MultiLineEditableText____A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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
               *)(lVar1 + 0x458),
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

// SetDSHintText @ 14bcc5a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MultiLineEditableText::SetDSHintText(UDS_MultiLineEditableText *this,FDS_Text *param_1)

{
  FText *pFVar1;
  FText local_28;
  FText local_18;
  
  FDS_Text::operator=(&this->DSHintText,param_1);
  FDS_Text::GetText(&this->DSHintText,&local_28);
  pFVar1 = FDS_Text::GetText(&this->DSHintText,&local_18);
  UMultiLineEditableText::SetHintText((UMultiLineEditableText *)this,pFVar1);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// SetDefaultTextStyle @ 14bcc5da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_MultiLineEditableText::SetDefaultTextStyle(UDS_MultiLineEditableText *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UCommonTextStyle *pUVar4;
  SMultiLineEditableText *this_00;
  UClass *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint local_18;
  
  pUVar5 = (this->DefaultTextStyleOverrideClass).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return;
  }
  pUVar3 = Z_Construct_UClass_UCommonTextStyle_NoRegister();
  if (pUVar3 == (UClass *)0x0) {
    return;
  }
  iVar1 = (int)pUVar3->_padding_;
  if (((int)pUVar5->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  pUVar5 = (this->DefaultTextStyleOverrideClass).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return;
  }
  pUVar3 = Z_Construct_UClass_UCommonTextStyle_NoRegister();
  if (pUVar3 != (UClass *)0x0) {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pUVar5 = (this->DefaultTextStyleOverrideClass).Class.field0_0x0.DebugPtr;
      goto LAB_14bcc5e41;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14bcc5e41:
  pUVar4 = GetDefault<UCommonTextStyle>(pUVar5);
  if ((pUVar4 != (UCommonTextStyle *)0x0) && (this->_padding_ != 0)) {
    FSlateFontInfo::operator=((FSlateFontInfo *)&this->_padding_,&pUVar4->Font);
    local_18 = local_18 & 0xffffff00;
    if (this->IsOverrideColor == true) {
      fVar6 = (this->OverrideColor).field0_0x0._s_0.R;
      fVar7 = (this->OverrideColor).field0_0x0._s_0.G;
      fVar8 = (this->OverrideColor).field0_0x0._s_0.B;
      fVar9 = (this->OverrideColor).field0_0x0._s_0.A;
    }
    else {
      fVar6 = (pUVar4->Color).field0_0x0._s_0.R;
      fVar7 = (pUVar4->Color).field0_0x0._s_0.G;
      fVar8 = (pUVar4->Color).field0_0x0._s_0.B;
      fVar9 = (pUVar4->Color).field0_0x0._s_0.A;
    }
    *(float *)&this->_padding_ = fVar6;
    *(float *)((longlong)&this->_padding_ + 4) = fVar7;
    *(float *)&this->_padding_ = fVar8;
    *(float *)((longlong)&this->_padding_ + 4) = fVar9;
    *(uint *)&this->_padding_ = local_18;
    this_00 = TSharedPtr<SMultiLineEditableText,1>::operator->
                        ((TSharedPtr<SMultiLineEditableText,1> *)&this->_padding_);
    SMultiLineEditableText::SetTextStyle(this_00,(FTextBlockStyle *)&this->_padding_);
  }
  return;
}

// SetOverrideColor @ 14bcc7ec0

void __thiscall
UDS_MultiLineEditableText::SetOverrideColor(UDS_MultiLineEditableText *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint local_18;
  
  this->IsOverrideColor = true;
  fVar1 = (param_1->field0_0x0)._s_0.G;
  fVar2 = (param_1->field0_0x0)._s_0.B;
  fVar3 = (param_1->field0_0x0)._s_0.A;
  local_18 = local_18 & 0xffffff00;
  (this->OverrideColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
  (this->OverrideColor).field0_0x0._s_0.G = fVar1;
  (this->OverrideColor).field0_0x0._s_0.B = fVar2;
  (this->OverrideColor).field0_0x0._s_0.A = fVar3;
  fVar1 = (param_1->field0_0x0)._s_0.G;
  fVar2 = (param_1->field0_0x0)._s_0.B;
  fVar3 = (param_1->field0_0x0)._s_0.A;
  *(float *)&this->_padding_ = (param_1->field0_0x0)._s_0.R;
  *(float *)((longlong)&this->_padding_ + 4) = fVar1;
  *(float *)&this->_padding_ = fVar2;
  *(float *)((longlong)&this->_padding_ + 4) = fVar3;
  *(uint *)&this->_padding_ = local_18;
                    /* WARNING: Could not recover jumptable at 0x00014bcc7ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e8))();
  return;
}

// SetWidgetFocusEvent @ 14bcc9b40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MultiLineEditableText::SetWidgetFocusEvent
          (UDS_MultiLineEditableText *this,FWidgetEventField *param_1)

{
  ESlateVisibility EVar1;
  
  EVar1 = UWidget::GetVisibility((UWidget *)this);
  if (EVar1 == Visible) {
    UWidget::SetFocus((UWidget *)this);
    return;
  }
  return;
}

// SynchronizeProperties @ 14bccb590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_MultiLineEditableText::SynchronizeProperties(UDS_MultiLineEditableText *this)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UCommonTextStyle *pUVar6;
  SMultiLineEditableText *this_00;
  char *pcVar7;
  UObject *pUVar8;
  UFunction *pUVar9;
  UClass *pUVar10;
  char *pcVar11;
  char *pcVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  <lambda_1> local_res8 [8];
  <lambda_1> local_res10 [8];
  FName local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_168;
  FWeakObjectPtr local_160;
  FName local_158;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_150;
  FWeakObjectPtr local_148;
  FName local_140;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_138;
  uint local_128;
  FName local_120;
  UDS_MultiLineEditableText *local_118;
  FName *local_110;
  FName local_108;
  UDS_MultiLineEditableText *local_100;
  FName *local_f8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_f0;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  FReadAccessScope local_b0;
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  
  pUVar2 = (this->DefaultTextStyleOverrideClass).Class.field0_0x0.DebugPtr;
  pUVar10 = (UClass *)0x0;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar5 = Z_Construct_UClass_UCommonTextStyle_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) &&
       (pUVar2 = (this->DefaultTextStyleOverrideClass).Class.field0_0x0.DebugPtr,
       pUVar2 != (UClass *)0x0)) {
      pUVar5 = Z_Construct_UClass_UCommonTextStyle_NoRegister();
      if (pUVar5 != (UClass *)0x0) {
        iVar1 = (int)pUVar5->_padding_;
        if (((int)pUVar2->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar10 = (this->DefaultTextStyleOverrideClass).Class.field0_0x0.DebugPtr;
        }
      }
      pUVar6 = GetDefault<UCommonTextStyle>(pUVar10);
      if ((pUVar6 != (UCommonTextStyle *)0x0) && (this->_padding_ != 0)) {
        FSlateFontInfo::operator=((FSlateFontInfo *)&this->_padding_,&pUVar6->Font);
        local_128 = local_128 & 0xffffff00;
        if (this->IsOverrideColor == true) {
          fVar13 = (this->OverrideColor).field0_0x0._s_0.R;
          fVar14 = (this->OverrideColor).field0_0x0._s_0.G;
          fVar15 = (this->OverrideColor).field0_0x0._s_0.B;
          fVar16 = (this->OverrideColor).field0_0x0._s_0.A;
        }
        else {
          fVar13 = (pUVar6->Color).field0_0x0._s_0.R;
          fVar14 = (pUVar6->Color).field0_0x0._s_0.G;
          fVar15 = (pUVar6->Color).field0_0x0._s_0.B;
          fVar16 = (pUVar6->Color).field0_0x0._s_0.A;
        }
        *(float *)&this->_padding_ = fVar13;
        *(float *)((longlong)&this->_padding_ + 4) = fVar14;
        *(float *)&this->_padding_ = fVar15;
        *(float *)((longlong)&this->_padding_ + 4) = fVar16;
        *(uint *)&this->_padding_ = local_128;
        this_00 = TSharedPtr<SMultiLineEditableText,1>::operator->
                            ((TSharedPtr<SMultiLineEditableText,1> *)&this->_padding_);
        SMultiLineEditableText::SetTextStyle(this_00,(FTextBlockStyle *)&this->_padding_);
      }
    }
  }
  UMultiLineEditableText::SynchronizeProperties((UMultiLineEditableText *)this);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (UObject *)this);
  pcVar7 = strstr("&UDS_MultiLineEditableText::TextCommitted","::");
  pcVar12 = &DAT_00000002;
  if (pcVar7 == (char *)0x0) {
LAB_14bccb70b:
    pcVar11 = &DAT_00000002;
LAB_14bccb70e:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar11 = pcVar7;
      pcVar7 = strstr(pcVar11 + 1,"::");
    } while (pcVar7 != (char *)0x0);
    if (pcVar11 == (char *)0x0) goto LAB_14bccb70b;
    pcVar11 = pcVar11 + 2;
    if (*pcVar11 == '0') goto LAB_14bccb70e;
  }
  ::FName::FName(&local_120,pcVar11);
  if ((this == (UDS_MultiLineEditableText *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_168.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_160.ObjectIndex = 0;
  local_160.ObjectSerialNumber = 0;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  local_res18 = local_120;
  if ((this == (UDS_MultiLineEditableText *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_118 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_MultiLineEditableText *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_160,(FObjectPtr)&local_118);
  local_158 = local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_168,&local_b0);
  if ((local_158 == (FName)0x0) ||
     (pUVar8 = FWeakObjectPtr::Get(&local_160), pUVar8 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b0);
LAB_14bccb83b:
    local_110 = &local_res18;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FText_const_&,enum_ETextCommit::Type>::
    __Internal_BindDynamic<UDS_MultiLineEditableText>'::__l2::<lambda_1>::operator()(&local_110);
  }
  else {
    pUVar9 = UObject::FindFunction(pUVar8,local_158);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b0);
    if (pUVar9 == (UFunction *)0x0) goto LAB_14bccb83b;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_168,&local_80);
  local_f0.Object = local_160;
  local_f0.FunctionName = local_158;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FWriteAccessScope *)&local_e0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->_padding_,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_f0);
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_168.AccessDetector);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (UObject *)this);
  pcVar7 = strstr("&UDS_MultiLineEditableText::TextChanged","::");
  if (pcVar7 == (char *)0x0) {
LAB_14bccb92a:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar11 = pcVar7;
      pcVar7 = strstr(pcVar11 + 1,"::");
    } while (pcVar7 != (char *)0x0);
    if ((pcVar11 == (char *)0x0) || (pcVar12 = pcVar11 + 2, pcVar11[2] == '0')) goto LAB_14bccb92a;
  }
  ::FName::FName(&local_108,pcVar12);
  if ((this == (UDS_MultiLineEditableText *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_150.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  local_140.ComparisonIndex.Value = 0;
  local_140.Number = 0;
  local_res20 = local_108;
  if ((this == (UDS_MultiLineEditableText *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_100 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_MultiLineEditableText *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_100);
  local_140 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_150,&local_98);
  if ((local_140 == (FName)0x0) ||
     (pUVar8 = FWeakObjectPtr::Get(&local_148), pUVar8 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_98);
  }
  else {
    pUVar9 = UObject::FindFunction(pUVar8,local_140);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_98);
    if (pUVar9 != (UFunction *)0x0) goto LAB_14bccba69;
  }
  local_f8 = &local_res20;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FText_const_&>::
  __Internal_BindDynamic<UDS_MultiLineEditableText>'::__l2::<lambda_1>::operator()(&local_f8);
LAB_14bccba69:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_150,&local_68);
  local_138.Object = local_148;
  local_138.FunctionName = local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FWriteAccessScope *)&local_c8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->_padding_,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_138);
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_150.AccessDetector);
  return;
}

// TextChanged @ 14bccbe80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_MultiLineEditableText::TextChanged(UDS_MultiLineEditableText *this,FText *param_1)

{
  uint uVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  FText *pFVar7;
  ulonglong uVar8;
  int iVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_108;
  FText local_f8;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  FText local_d8;
  FString local_c8;
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  undefined1 local_b0 [8];
  FFieldId local_a8;
  FFieldId local_98;
  FText local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  
  local_f8.TextData.Reference = (param_1->TextData).Reference;
  if (local_f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f8.TextData.Reference + 8))
              (local_f8.TextData.Reference,local_res10);
  }
  local_f8.Flags = param_1->Flags;
  if (this->MaxTextLine < 1) goto LAB_14bccc13a;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  pFVar6 = FText::ToString(&local_f8);
  iVar5 = ::FString::ParseIntoArrayLines(pFVar6,&local_108,true);
  uVar1 = this->MaxTextLine;
  if ((int)uVar1 < iVar5) {
    uVar8 = (ulonglong)local_108.ArrayNum;
    if (local_108.ArrayNum < (int)uVar1) {
      iVar9 = uVar1 - local_108.ArrayNum;
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar9,&local_108.AllocatorInstance,&local_108.ArrayNum,
                         &local_108.ArrayMax);
      memset(local_108.AllocatorInstance.Data + (longlong)iVar5 * 0x10,0,(longlong)iVar9 << 4);
LAB_14bccc02f:
      uVar8 = local_108._8_8_ & 0xffffffff;
    }
    else {
      if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
      }
      if ((int)uVar1 < local_108.ArrayNum) {
        uVar12 = local_108.ArrayNum - uVar1;
        if ((int)(uVar1 | uVar12) < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = local_108._8_8_ & 0xffffffff;
        }
        if (uVar12 != 0) {
          pFVar13 = local_108.AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
          DestructItems<FString,int>((FString *)pFVar13,uVar12);
          iVar5 = (local_108.ArrayNum - uVar1) - uVar12;
          if (iVar5 != 0) {
            memmove(pFVar13,pFVar13 + (longlong)(int)uVar12 * 0x10,(longlong)iVar5 << 4);
          }
          iVar5 = local_108.ArrayNum - uVar12;
          local_108.ArrayNum = iVar5;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&local_108.AllocatorInstance,iVar5,&local_108.ArrayMax);
          goto LAB_14bccc02f;
        }
      }
    }
    bVar4 = true;
    iVar5 = (int)uVar8;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar13 = local_108.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    FVar10.Data = local_108.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar8 != iVar5) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar10.Data == pFVar13) break;
      if (bVar4) {
        bVar4 = false;
      }
      else {
        ::FString::AppendChars(&local_c8,L"\n",1);
      }
      iVar9 = *(int *)(FVar10.Data + 8) + -1;
      if (*(int *)(FVar10.Data + 8) == 0) {
        iVar9 = 0;
      }
      ::FString::AppendChars(&local_c8,*(wchar_t **)FVar10.Data,iVar9);
      uVar8 = local_108._8_8_ & 0xffffffff;
      FVar10.Data = FVar10.Data + 0x10;
    }
    pFVar7 = FText::FromString(&local_48,&local_c8);
    FText::operator=(&local_f8,pFVar7);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    local_88.TextData.Reference = local_f8.TextData.Reference;
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 8))
                (local_f8.TextData.Reference,local_res18);
    }
    local_88.Flags = local_f8.Flags;
    UMultiLineEditableText::SetText((UMultiLineEditableText *)this,&local_88);
  }
  DestructItems<FString,int>((FString *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
LAB_14bccc13a:
  if (this->MaxTextLength < 1) {
    pIVar2 = (this->TextChangedEvent).NewText.TextData.Reference;
    if (pIVar2 != local_f8.TextData.Reference) {
      (this->TextChangedEvent).NewText.TextData.Reference = local_f8.TextData.Reference;
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 8))
                  (local_f8.TextData.Reference,local_res20);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->TextChangedEvent).NewText.Flags = local_f8.Flags;
    local_a8.FieldName = FFieldNotificationClassDescriptor::TextChangedEvent.FieldName;
    local_a8.BitNumber = FFieldNotificationClassDescriptor::TextChangedEvent.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_a8);
  }
  else {
    UMultiLineEditableText::GetText((UMultiLineEditableText *)this,&local_58);
    pFVar6 = FText::ToString(&local_f8);
    local_e8.Data = (FScriptContainerElement *)0x0;
    local_e0 = (pFVar6->Data).ArrayNum;
    lVar11 = (longlong)local_e0;
    pFVar13 = (pFVar6->Data).AllocatorInstance.Data;
    if (local_e0 == 0) {
      local_dc = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_e0,0,&local_e8,local_e0,&local_dc);
      memcpy(local_e8.Data,pFVar13,lVar11 * 2);
    }
    iVar5 = this->MaxTextLength;
    iVar9 = local_e0 + -1;
    if (local_e0 == 0) {
      iVar9 = 0;
    }
    if (iVar5 < iVar9) {
      iVar9 = 0;
      if (0 < iVar5) {
        iVar9 = iVar5;
      }
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_e0 != 0) {
        FVar10.Data = local_e8.Data;
      }
      ::FString::ConstructFromPtrSize(&local_78,(wchar_t *)FVar10.Data,iVar9);
      FText::FromString(&local_d8,&local_78);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_d8.TextData.Reference = local_f8.TextData.Reference;
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 8))
                  (local_f8.TextData.Reference,local_b8);
      }
      local_d8.Flags = local_f8.Flags;
    }
    if (local_e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data);
    }
    bVar4 = FText::EqualTo(&local_d8,&local_58,Default);
    if (!bVar4) {
      local_68.TextData.Reference = local_d8.TextData.Reference;
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 8))
                  (local_d8.TextData.Reference,local_b4);
      }
      local_68.Flags = local_d8.Flags;
      UMultiLineEditableText::SetText((UMultiLineEditableText *)this,&local_68);
    }
    pIVar2 = (this->TextChangedEvent).NewText.TextData.Reference;
    if (pIVar2 != local_d8.TextData.Reference) {
      (this->TextChangedEvent).NewText.TextData.Reference = local_d8.TextData.Reference;
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 8))
                  (local_d8.TextData.Reference,local_b0);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->TextChangedEvent).NewText.Flags = local_d8.Flags;
    local_98.FieldName = FFieldNotificationClassDescriptor::TextChangedEvent.FieldName;
    local_98.BitNumber = FFieldNotificationClassDescriptor::TextChangedEvent.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_98);
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  if (local_f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
  }
  return;
}

// TextCommitted @ 14bccc450

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MultiLineEditableText::TextCommitted
          (UDS_MultiLineEditableText *this,FText *param_1,Type param_2)

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

// TrimToMaxLength @ 14bccd310

FText * __thiscall
UDS_MultiLineEditableText::TrimToMaxLength
          (UDS_MultiLineEditableText *this,FText *__return_storage_ptr__,FText *param_1)

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

