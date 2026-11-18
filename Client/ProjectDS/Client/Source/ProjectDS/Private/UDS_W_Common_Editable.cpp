// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// SetWidgetFocusEvent_WrapperImpl @ 14b77d7c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_W_Common_Editable::SetWidgetFocusEvent_WrapperImpl(void *param_1,void *param_2)

{
  ESlateVisibility EVar1;
  
  if (*(UWidget **)((longlong)param_1 + 0x8c8) != (UWidget *)0x0) {
    EVar1 = UWidget::GetVisibility(*(UWidget **)((longlong)param_1 + 0x8c8));
    if (EVar1 == Visible) {
      UWidget::SetFocus(*(UWidget **)((longlong)param_1 + 0x8c8));
      return;
    }
  }
  return;
}

// SetText_WrapperImpl @ 14b77d7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_W_Common_Editable::SetText_WrapperImpl(void *param_1,void *param_2)

{
  UEditableText *this;
  undefined1 auStackX_8 [8];
  FText FStack_18;
  
  this = *(UEditableText **)((longlong)param_1 + 0x8c8);
  if (this != (UEditableText *)0x0) {
    FStack_18.TextData.Reference = *(ITextData **)param_2;
    if (FStack_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_18.TextData.Reference + 8))
                (FStack_18.TextData.Reference,auStackX_8);
    }
    FStack_18.Flags = *(uint *)((longlong)param_2 + 8);
    UEditableText::SetText(this,&FStack_18);
  }
  return;
}

// SetIsPasswordText_WrapperImpl @ 14b77d7e0

void __cdecl UDS_W_Common_Editable::SetIsPasswordText_WrapperImpl(void *param_1,void *param_2)

{
  SetIsPasswordText(param_1,*(bool *)param_2);
  return;
}

// SetIsNumericText_WrapperImpl @ 14b77d7f0

void __cdecl UDS_W_Common_Editable::SetIsNumericText_WrapperImpl(void *param_1,void *param_2)

{
  SetIsNumericText(param_1,*(bool *)param_2);
  return;
}

// SetMaxLength_WrapperImpl @ 14b77d800

void __cdecl UDS_W_Common_Editable::SetMaxLength_WrapperImpl(void *param_1,void *param_2)

{
  SetMaxLength(param_1,*(int *)param_2);
  return;
}

// StaticClass @ 14b77d810

UClass * __cdecl UDS_W_Common_Editable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_Common_Editable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_Common_Editable",
               &Z_Registration_Info_UClass_UDS_W_Common_Editable.InnerSingleton,
               StaticRegisterNativesUDS_W_Common_Editable,0x8d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_Common_Editable>,
               InternalVTableHelperCtorCaller<UDS_W_Common_Editable>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_Common_Editable.InnerSingleton;
}

// UDS_W_Common_Editable @ 14b781520

UDS_W_Common_Editable * __thiscall
UDS_W_Common_Editable::UDS_W_Common_Editable(UDS_W_Common_Editable *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  FText::FText(&(this->TextCommittedEvent).NewText);
  FText::FText(&(this->TextChangedEvent).NewText);
  FText::FText(&this->Text);
  this->IsPasswordText = false;
  this->IsNumericText = false;
  this->MaxLength = 0;
  (this->EditableText).field0_0x0.DebugPtr = (UDS_EditableText *)0x0;
  return this;
}

// UDS_W_Common_Editable @ 14b7815b0

UDS_W_Common_Editable * __thiscall
UDS_W_Common_Editable::UDS_W_Common_Editable
          (UDS_W_Common_Editable *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  FText::FText(&(this->TextCommittedEvent).NewText);
  FText::FText(&(this->TextChangedEvent).NewText);
  FText::FText(&this->Text);
  this->IsPasswordText = false;
  this->IsNumericText = false;
  this->MaxLength = 0;
  (this->EditableText).field0_0x0.DebugPtr = (UDS_EditableText *)0x0;
  return this;
}

// ~UDS_W_Common_Editable @ 14b782e90

void __thiscall UDS_W_Common_Editable::~UDS_W_Common_Editable(UDS_W_Common_Editable *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  pIVar1 = (this->Text).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->TextChangedEvent).NewText.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->TextCommittedEvent).NewText.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7851a0

IClassDescriptor * __thiscall
UDS_W_Common_Editable::GetFieldNotificationDescriptor(UDS_W_Common_Editable *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_W_Common_Editable::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b785a20

UClass * __cdecl UDS_W_Common_Editable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_Common_Editable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_Common_Editable",
               &Z_Registration_Info_UClass_UDS_W_Common_Editable.InnerSingleton,
               StaticRegisterNativesUDS_W_Common_Editable,0x8d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_Common_Editable>,
               InternalVTableHelperCtorCaller<UDS_W_Common_Editable>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_Common_Editable.InnerSingleton;
}

// StaticRegisterNativesUDS_W_Common_Editable @ 14b786500

void __cdecl UDS_W_Common_Editable::StaticRegisterNativesUDS_W_Common_Editable(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_W_Common_Editable_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execTextChanged @ 14b787d20

void __cdecl UDS_W_Common_Editable::execTextChanged(UObject *param_1,FFrame *param_2,void *param_3)

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
  TextChanged((UDS_W_Common_Editable *)param_1,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execTextCommitted @ 14b787dd0

void __cdecl
UDS_W_Common_Editable::execTextCommitted(UObject *param_1,FFrame *param_2,void *param_3)

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
  TextCommitted((UDS_W_Common_Editable *)param_1,pFVar2,(uint)local_res10[0]);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// GetText @ 14bcfe8b0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
UDS_W_Common_Editable::GetText(UDS_W_Common_Editable *this,FText *__return_storage_ptr__)

{
  UDS_EditableText *this_00;
  
  this_00 = (this->EditableText).field0_0x0.DebugPtr;
  if (this_00 == (UDS_EditableText *)0x0) {
    FText::FText(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  UEditableText::GetText((UEditableText *)this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// NativeConstruct @ 14bd06f70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_W_Common_Editable::NativeConstruct(UDS_W_Common_Editable *this)

{
  TObjectPtr<UDS_EditableText> *pTVar1;
  UDS_EditableText *pUVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  FName *pFVar6;
  char *pcVar7;
  UObject *pUVar8;
  UFunction *pUVar9;
  char *pcVar10;
  char *pcVar11;
  <lambda_1> local_res8 [8];
  <lambda_1> local_res10 [8];
  FName local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_198;
  FWeakObjectPtr local_190;
  FName local_188;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_180;
  FWeakObjectPtr local_178;
  FName local_170;
  FName local_168;
  UDS_W_Common_Editable *local_160;
  FName *local_158;
  FName local_150;
  UDS_W_Common_Editable *local_148;
  FName *local_140;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_138;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_128;
  FDestructionSentinel local_118;
  FDestructionSentinel local_100;
  FName local_e8;
  FReadAccessScope local_e0;
  FReadAccessScope local_c8;
  FReadAccessScope local_b0;
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  
  UDS_UserWidget::NativeConstruct((UDS_UserWidget *)this);
  pFVar6 = ::FName::FName(&local_e8,"ET_Text");
  pTVar1 = &this->EditableText;
  UDS_UserWidget::BindWidget<UDS_EditableText>((UDS_UserWidget *)this,pTVar1,*pFVar6);
  pUVar2 = (pTVar1->field0_0x0).DebugPtr;
  if (pUVar2 == (UDS_EditableText *)0x0) {
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar2->_padding_,&local_b0)
  ;
  lVar4 = pUVar2->_padding_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_b0);
  if (0 < (int)lVar4) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &((pTVar1->field0_0x0).DebugPtr)->_padding_,(UObject *)this);
  }
  pUVar2 = (pTVar1->field0_0x0).DebugPtr;
  pcVar7 = strstr("&UDS_W_Common_Editable::TextCommitted","::");
  pcVar11 = &DAT_00000002;
  if (pcVar7 == (char *)0x0) {
LAB_14bd0706a:
    pcVar10 = &DAT_00000002;
LAB_14bd0706d:
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
      pcVar10 = pcVar7;
      pcVar7 = strstr(pcVar10 + 1,"::");
    } while (pcVar7 != (char *)0x0);
    if (pcVar10 == (char *)0x0) goto LAB_14bd0706a;
    pcVar10 = pcVar10 + 2;
    if (*pcVar10 == '0') goto LAB_14bd0706d;
  }
  ::FName::FName(&local_168,pcVar10);
  local_res18 = local_168;
  local_198.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_190.ObjectIndex = 0;
  local_190.ObjectSerialNumber = 0;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  local_160 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_W_Common_Editable *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_190,(FObjectPtr)&local_160);
  local_188 = local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_198,&local_e0);
  if ((local_188 == (FName)0x0) ||
     (pUVar8 = FWeakObjectPtr::Get(&local_190), pUVar8 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e0);
LAB_14bd07149:
    local_158 = &local_res18;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FText_const_&,enum_ETextCommit::Type>::
    __Internal_BindDynamic<UDS_W_Common_Editable>'::__l2::<lambda_1>::operator()(&local_158);
  }
  else {
    pUVar9 = UObject::FindFunction(pUVar8,local_188);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e0);
    if (pUVar9 == (UFunction *)0x0) goto LAB_14bd07149;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_198,&local_98);
  local_138.Object = local_190;
  local_138.FunctionName = local_188;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_98);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar2->_padding_,
             (FWriteAccessScope *)&local_118);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar2->_padding_,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar2->_padding_,&local_138);
  if (local_118.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_198.AccessDetector);
  pUVar2 = (pTVar1->field0_0x0).DebugPtr;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar2->_padding_,&local_80)
  ;
  lVar4 = pUVar2->_padding_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  if (0 < (int)lVar4) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &((pTVar1->field0_0x0).DebugPtr)->_padding_,(UObject *)this);
  }
  pUVar2 = (pTVar1->field0_0x0).DebugPtr;
  pcVar7 = strstr("&UDS_W_Common_Editable::TextChanged","::");
  if (pcVar7 == (char *)0x0) {
LAB_14bd0726a:
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
      pcVar10 = pcVar7;
      pcVar7 = strstr(pcVar10 + 1,"::");
    } while (pcVar7 != (char *)0x0);
    if ((pcVar10 == (char *)0x0) || (pcVar11 = pcVar10 + 2, pcVar10[2] == '0')) goto LAB_14bd0726a;
  }
  ::FName::FName(&local_150,pcVar11);
  local_180.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_178.ObjectIndex = 0;
  local_178.ObjectSerialNumber = 0;
  local_170.ComparisonIndex.Value = 0;
  local_170.Number = 0;
  local_res20 = local_150;
  local_148 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_W_Common_Editable *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_178,(FObjectPtr)&local_148);
  local_170 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_180,&local_c8);
  if ((local_170 == (FName)0x0) ||
     (pUVar8 = FWeakObjectPtr::Get(&local_178), pUVar8 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_c8);
  }
  else {
    pUVar9 = UObject::FindFunction(pUVar8,local_170);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_c8);
    if (pUVar9 != (UFunction *)0x0) goto LAB_14bd0736e;
  }
  local_140 = &local_res20;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FText_const_&>::
  __Internal_BindDynamic<UDS_W_Common_Editable>'::__l2::<lambda_1>::operator()(&local_140);
LAB_14bd0736e:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_180,&local_68);
  local_128.Object = local_178;
  local_128.FunctionName = local_170;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar2->_padding_,
             (FWriteAccessScope *)&local_100);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar2->_padding_,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar2->_padding_,&local_128);
  if (local_100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_180.AccessDetector);
  return;
}

// SetIsNumericText @ 14bd1fd30

void __thiscall UDS_W_Common_Editable::SetIsNumericText(UDS_W_Common_Editable *this,bool param_1)

{
  if ((this->EditableText).field0_0x0.DebugPtr != (UDS_EditableText *)0x0) {
    this->IsNumericText = param_1;
  }
  return;
}

// SetIsPasswordText @ 14bd1fd50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_Common_Editable::SetIsPasswordText(UDS_W_Common_Editable *this,bool param_1)

{
  UDS_EditableText *this_00;
  
  this_00 = (this->EditableText).field0_0x0.DebugPtr;
  if (this_00 != (UDS_EditableText *)0x0) {
    this->IsPasswordText = param_1;
    UEditableText::SetIsPassword((UEditableText *)this_00,param_1);
    return;
  }
  return;
}

// SetMaxLength @ 14bd20270

void __thiscall UDS_W_Common_Editable::SetMaxLength(UDS_W_Common_Editable *this,int param_1)

{
  if ((this->EditableText).field0_0x0.DebugPtr != (UDS_EditableText *)0x0) {
    this->MaxLength = param_1;
  }
  return;
}

// SetText @ 14bd22510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_Common_Editable::SetText(UDS_W_Common_Editable *this,FText *param_1)

{
  UDS_EditableText *this_00;
  undefined1 local_res8 [8];
  FText local_18;
  
  this_00 = (this->EditableText).field0_0x0.DebugPtr;
  if (this_00 != (UDS_EditableText *)0x0) {
    local_18.TextData.Reference = (param_1->TextData).Reference;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = param_1->Flags;
    UEditableText::SetText((UEditableText *)this_00,&local_18);
  }
  return;
}

// SetWidgetFocusEvent @ 14bd22f20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_Common_Editable::SetWidgetFocusEvent(UDS_W_Common_Editable *this,FWidgetEventField *param_1)

{
  UDS_EditableText *this_00;
  ESlateVisibility EVar1;
  
  this_00 = (this->EditableText).field0_0x0.DebugPtr;
  if (this_00 != (UDS_EditableText *)0x0) {
    EVar1 = UWidget::GetVisibility((UWidget *)this_00);
    if (EVar1 == Visible) {
      UWidget::SetFocus((UWidget *)(this->EditableText).field0_0x0.DebugPtr);
      return;
    }
  }
  return;
}

// TextChanged @ 14bd23030

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_W_Common_Editable::TextChanged(UDS_W_Common_Editable *this,FText *param_1)

{
  UDS_EditableText *this_00;
  ITextData *pIVar1;
  ITextData *pIVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  FText *pFVar7;
  wchar_t *pwVar8;
  int iVar9;
  undefined1 local_res8 [8];
  FString local_68;
  FRegexPattern local_58;
  FText local_48;
  FText local_38;
  FRegexMatcher local_28;
  
  if (this->IsNumericText != true) goto LAB_14bd231ef;
  ::FString::FString((FString *)&local_48,L"[0-9]");
  FRegexPattern::FRegexPattern(&local_58,(FString *)&local_48,None);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_48.TextData.Reference);
  }
  pFVar6 = FText::ToString(param_1);
  FRegexMatcher::FRegexMatcher(&local_28,&local_58,pFVar6);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  bVar3 = FRegexMatcher::FindNext(&local_28);
  if (bVar3) {
    do {
      pFVar6 = FRegexMatcher::GetCaptureGroup(&local_28,(FString *)&local_48,0);
      iVar4 = (pFVar6->Data).ArrayNum;
      iVar5 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      ::FString::AppendChars(&local_68,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar5);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_48.TextData.Reference);
      }
      bVar3 = FRegexMatcher::FindNext(&local_28);
    } while (bVar3);
  }
  pFVar6 = FText::ToString(param_1);
  iVar4 = (pFVar6->Data).ArrayNum;
  if (local_68.Data.ArrayNum == iVar4) {
    if (1 < local_68.Data.ArrayNum) {
      iVar4 = wcscmp((wchar_t *)local_68.Data.AllocatorInstance.Data,
                     (wchar_t *)(pFVar6->Data).AllocatorInstance.Data);
      bVar3 = iVar4 == 0;
      goto LAB_14bd23135;
    }
  }
  else {
    bVar3 = local_68.Data.ArrayNum + iVar4 == 1;
LAB_14bd23135:
    if (!bVar3) {
      pFVar7 = FText::FromString(&local_38,&local_68);
      this_00 = (this->EditableText).field0_0x0.DebugPtr;
      if (this_00 != (UDS_EditableText *)0x0) {
        local_48.TextData.Reference = (pFVar7->TextData).Reference;
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 8))
                    (local_48.TextData.Reference,local_res8);
        }
        local_48.Flags = pFVar7->Flags;
        UEditableText::SetText((UEditableText *)this_00,&local_48);
      }
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      if ((FName)local_68.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.Implementation.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.Pattern.Implementation.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.Implementation.SharedReferenceCount.ReferenceController);
      return;
    }
  }
  if ((FName)local_68.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Pattern.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.Implementation.SharedReferenceCount.ReferenceController);
LAB_14bd231ef:
  if (0 < this->MaxLength) {
    pFVar6 = FText::ToString(param_1);
    iVar4 = (pFVar6->Data).ArrayNum;
    iVar5 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    if (this->MaxLength < iVar5) {
      pFVar6 = FText::ToString(param_1);
      iVar4 = (pFVar6->Data).ArrayNum;
      iVar5 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      if (this->MaxLength < iVar5) {
        iVar5 = this->MaxLength;
      }
      iVar9 = 0;
      if (0 < iVar5) {
        iVar9 = iVar5;
      }
      if (iVar4 == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize((FString *)&local_48,pwVar8,iVar9);
      pFVar7 = FText::FromString(&local_38,(FString *)&local_48);
      SetText(this,pFVar7);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      if (local_48.TextData.Reference == (ITextData *)0x0) {
        return;
      }
      FMemory::Free(local_48.TextData.Reference);
      return;
    }
  }
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->TextChangedEvent).NewText.TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->TextChangedEvent).NewText.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->TextChangedEvent).NewText.Flags = param_1->Flags;
  local_68.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::TextChangedEvent.FieldName;
  local_68.Data.ArrayNum = FFieldNotificationClassDescriptor::TextChangedEvent.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)&local_68);
  return;
}

// TextCommitted @ 14bd23310

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_Common_Editable::TextCommitted(UDS_W_Common_Editable *this,FText *param_1,Type param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res18 [16];
  FFieldId local_18;
  
  (this->TextCommittedEvent).CommitType = param_2;
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
  local_18.FieldName = FFieldNotificationClassDescriptor::TextCommittedEvent.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::TextCommittedEvent.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

