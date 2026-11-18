// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// SetTalkText_WrapperImpl @ 14b667340

void __cdecl UDS_VM_HUD_BubbleTalk::SetTalkText_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xa0),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::TalkText.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::TalkText.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b667350

UClass * __cdecl UDS_VM_HUD_BubbleTalk::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_BubbleTalk.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_BubbleTalk",
               &Z_Registration_Info_UClass_UDS_VM_HUD_BubbleTalk.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_BubbleTalk,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_BubbleTalk>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_BubbleTalk>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_BubbleTalk.InnerSingleton;
}

// UDS_VM_HUD_BubbleTalk @ 14b66d420

UDS_VM_HUD_BubbleTalk * __thiscall
UDS_VM_HUD_BubbleTalk::UDS_VM_HUD_BubbleTalk(UDS_VM_HUD_BubbleTalk *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_BubbleTalk__6B_;
  (this->TalkText).StringTableID = 0;
  (this->TalkText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TalkText).StringEnumTableNameID.Number = 0;
  (this->TalkText).DateTime.Ticks = 0;
  (this->TalkText).TimeSpan.Ticks = 0;
  (this->TalkText).TimeExpressionType = None;
  (this->TalkText).IsExpression = false;
  (this->TalkText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TalkText).UniqueString.Data.ArrayNum = 0;
  (this->TalkText).UniqueString.Data.ArrayMax = 0;
  (this->TalkText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TalkText).FormatArgs.ArrayNum = 0;
  (this->TalkText).FormatArgs.ArrayMax = 0;
  (this->BubbleTalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->TalkText).StringTableType = None;
  return this;
}

// UDS_VM_HUD_BubbleTalk @ 14b66d4c0

UDS_VM_HUD_BubbleTalk * __thiscall
UDS_VM_HUD_BubbleTalk::UDS_VM_HUD_BubbleTalk
          (UDS_VM_HUD_BubbleTalk *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_BubbleTalk__6B_;
  (this->TalkText).StringTableID = 0;
  (this->TalkText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TalkText).StringEnumTableNameID.Number = 0;
  (this->TalkText).DateTime.Ticks = 0;
  (this->TalkText).TimeSpan.Ticks = 0;
  (this->TalkText).TimeExpressionType = None;
  (this->TalkText).IsExpression = false;
  (this->TalkText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TalkText).UniqueString.Data.ArrayNum = 0;
  (this->TalkText).UniqueString.Data.ArrayMax = 0;
  (this->TalkText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TalkText).FormatArgs.ArrayNum = 0;
  (this->TalkText).FormatArgs.ArrayMax = 0;
  (this->BubbleTalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->TalkText).StringTableType = None;
  return this;
}

// ~UDS_VM_HUD_BubbleTalk @ 14b66efe0

void __thiscall UDS_VM_HUD_BubbleTalk::~UDS_VM_HUD_BubbleTalk(UDS_VM_HUD_BubbleTalk *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_BubbleTalk__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TalkText).FormatArgs.AllocatorInstance.Data,
             (this->TalkText).FormatArgs.ArrayNum);
  pFVar1 = (this->TalkText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TalkText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b671810

IClassDescriptor * __thiscall
UDS_VM_HUD_BubbleTalk::GetFieldNotificationDescriptor(UDS_VM_HUD_BubbleTalk *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_BubbleTalk::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b672220

UClass * __cdecl UDS_VM_HUD_BubbleTalk::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_BubbleTalk.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_BubbleTalk",
               &Z_Registration_Info_UClass_UDS_VM_HUD_BubbleTalk.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_BubbleTalk,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_BubbleTalk>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_BubbleTalk>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_BubbleTalk.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_HUD_BubbleTalk @ 14b672b40

void __cdecl UDS_VM_HUD_BubbleTalk::StaticRegisterNativesUDS_VM_HUD_BubbleTalk(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_HUD_BubbleTalk_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execTriggeredBubbleTalk @ 14b674460

void __cdecl
UDS_VM_HUD_BubbleTalk::execTriggeredBubbleTalk(UObject *param_1,FFrame *param_2,void *param_3)

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
  TriggeredBubbleTalk((UDS_VM_HUD_BubbleTalk *)param_1,local_res10[0] != 0);
  return;
}

// CloseBubbleTalk @ 14bf444f0

void __thiscall UDS_VM_HUD_BubbleTalk::CloseBubbleTalk(UDS_VM_HUD_BubbleTalk *this)

{
  ForAnyElementType FVar1;
  FName FStack_68;
  int iStack_60;
  FDS_Text FStack_58;
  
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  FStack_58.StringTableType = None;
  FStack_58.StringTableID = 0;
  FStack_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
  FStack_58.StringEnumTableNameID.Number = 0;
  FStack_58.TimeExpressionType = None;
  FStack_58.DateTime.Ticks = 0;
  FStack_58.TimeSpan.Ticks = 0;
  FStack_58.IsExpression = false;
  FStack_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_58.UniqueString.Data.ArrayNum = 0;
  FStack_58.UniqueString.Data.ArrayMax = 0;
  FStack_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_58.FormatArgs.ArrayNum = 0;
  FStack_58.FormatArgs.ArrayMax = 0;
  FDS_Text::operator=(&this->TalkText,&FStack_58);
  iStack_60 = FFieldNotificationClassDescriptor::TalkText.BitNumber;
  FStack_68 = FFieldNotificationClassDescriptor::TalkText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_68);
  FVar1.Data = FStack_58.FormatArgs.AllocatorInstance.Data;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)FStack_58.FormatArgs.AllocatorInstance.Data,
             FStack_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)FVar1.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  if (FStack_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// InitViewModel @ 14bf59d10

void __thiscall UDS_VM_HUD_BubbleTalk::InitViewModel(UDS_VM_HUD_BubbleTalk *this)

{
  ForAnyElementType FVar1;
  FName FStack_68;
  int iStack_60;
  FDS_Text FStack_58;
  
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  FStack_58.StringTableType = None;
  FStack_58.StringTableID = 0;
  FStack_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
  FStack_58.StringEnumTableNameID.Number = 0;
  FStack_58.TimeExpressionType = None;
  FStack_58.DateTime.Ticks = 0;
  FStack_58.TimeSpan.Ticks = 0;
  FStack_58.IsExpression = false;
  FStack_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_58.UniqueString.Data.ArrayNum = 0;
  FStack_58.UniqueString.Data.ArrayMax = 0;
  FStack_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_58.FormatArgs.ArrayNum = 0;
  FStack_58.FormatArgs.ArrayMax = 0;
  FDS_Text::operator=(&this->TalkText,&FStack_58);
  iStack_60 = FFieldNotificationClassDescriptor::TalkText.BitNumber;
  FStack_68 = FFieldNotificationClassDescriptor::TalkText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_68);
  FVar1.Data = FStack_58.FormatArgs.AllocatorInstance.Data;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)FStack_58.FormatArgs.AllocatorInstance.Data,
             FStack_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)FVar1.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  if (FStack_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// OnSetViewModel @ 14bf680e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_BubbleTalk::OnSetViewModel
          (UDS_VM_HUD_BubbleTalk *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr> TVar5;
  UObject *pUVar6;
  char *pcVar7;
  UObject *this_00;
  UFunction *pUVar8;
  char *pcVar9;
  undefined1 auStackY_378 [32];
  <lambda_1> local_337 [7];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_330;
  FWeakObjectPtr local_328;
  FName local_320;
  FName local_318;
  TSharedPtr<FDS_ViewModelContext_Entity,1> local_310;
  FName local_300;
  UDS_VM_HUD_BubbleTalk *local_2f8;
  FName *local_2f0;
  TSharedPtr<FDS_ViewModelContext,1> local_2e8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_2d8;
  FDestructionSentinel local_2c8;
  ulong64 local_2b0;
  FReadAccessScope local_2a8;
  FReadAccessScope local_290;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_378;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_2e8.Object = param_1->Object;
  local_2e8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_2e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Entity>(&local_310,&local_2e8);
  if (local_310.Object == (FDS_ViewModelContext_Entity *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_VM_HUD_BubbleTalk::OnSetViewModel",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_278.Ptr,0x18,L"context is nullptr.");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
    goto LAB_14bf684f3;
  }
  TVar5 = UDS_AbilityDataSet::GetAbilityData<UDS_NPCBubbleTalkAbilityData>
                    (&local_2b0,(EDS_AbilityTagType *)&(local_310.Object)->EntityID);
                    /* WARNING: Load size is inaccurate */
  (this->BubbleTalkAbilityData).WeakPtr = *TVar5.WeakPtr;
  bVar3 = TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->BubbleTalkAbilityData,(void *)0x0);
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_HUD_BubbleTalk::OnSetViewModel",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_158.Ptr,0x1f,L"BubbleTalkAbilityData is nullptr. (%d)");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    goto LAB_14bf684f3;
  }
  pUVar6 = FWeakObjectPtr::Get(&(this->BubbleTalkAbilityData).WeakPtr);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar6[2].field_0x8,
             (UObject *)this);
  pUVar6 = FWeakObjectPtr::Get(&(this->BubbleTalkAbilityData).WeakPtr);
  pcVar7 = strstr("&UDS_VM_HUD_BubbleTalk::TriggeredBubbleTalk","::");
  if (pcVar7 == (char *)0x0) {
LAB_14bf6832b:
    pcVar9 = &DAT_00000002;
LAB_14bf68330:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    do {
      pcVar9 = pcVar7;
      pcVar7 = strstr(pcVar9 + 1,"::");
    } while (pcVar7 != (char *)0x0);
    if (pcVar9 == (char *)0x0) goto LAB_14bf6832b;
    pcVar9 = pcVar9 + 2;
    if (*pcVar9 == '0') goto LAB_14bf68330;
  }
  ::FName::FName(&local_300,pcVar9);
  if ((this == (UDS_VM_HUD_BubbleTalk *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_318 = local_300;
  local_330.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_328.ObjectIndex = 0;
  local_328.ObjectSerialNumber = 0;
  local_320.ComparisonIndex.Value = 0;
  local_320.Number = 0;
  if ((this == (UDS_VM_HUD_BubbleTalk *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_2f8 = this;
  if (this == (UDS_VM_HUD_BubbleTalk *)0x0) {
    local_2f8 = (UDS_VM_HUD_BubbleTalk *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_2f8 != (UDS_VM_HUD_BubbleTalk *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_2f8);
  }
  FWeakObjectPtr::operator=(&local_328,(FObjectPtr)&local_2f8);
  local_320 = local_318;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_330,&local_2a8);
  if ((local_320 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_328), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2a8);
LAB_14bf6846a:
    local_2f0 = &local_318;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,bool_const_>::
    __Internal_BindDynamic<UDS_VM_HUD_BubbleTalk>'::__l2::<lambda_1>::operator()(&local_2f0);
  }
  else {
    pUVar8 = UObject::FindFunction(this_00,local_320);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2a8);
    if (pUVar8 == (UFunction *)0x0) goto LAB_14bf6846a;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_330,&local_290);
  local_2d8.Object = local_328;
  local_2d8.FunctionName = local_320;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_290);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar6[2].field_0x8,
             (FWriteAccessScope *)&local_2c8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar6[2].field_0x10,local_337,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar6[2].field_0x8,&local_2d8
            );
  if (local_2c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c8.Accessor,&local_2c8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_330.AccessDetector);
LAB_14bf684f3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_310.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OpenBubbleTalk @ 14bf734a0

void __thiscall UDS_VM_HUD_BubbleTalk::OpenBubbleTalk(UDS_VM_HUD_BubbleTalk *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_68;
  int local_60;
  FDS_Text local_58;
  
  bVar1 = TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->BubbleTalkAbilityData,(void *)0x0);
  if (bVar1) {
    ResetBubbleTalk(this);
    return;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->BubbleTalkAbilityData).WeakPtr);
  local_58.StringTableID = 0;
  local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_58.StringEnumTableNameID.Number = 0;
  local_58.TimeExpressionType = None;
  local_58.IsExpression = false;
  local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.UniqueString.Data.ArrayNum = 0;
  local_58.UniqueString.Data.ArrayMax = 0;
  local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.FormatArgs.ArrayNum = 0;
  local_58.FormatArgs.ArrayMax = 0;
  local_58.StringTableType = None;
  local_58.DateTime.Ticks = 0;
  local_58.TimeSpan.Ticks = 0;
  FDS_Text::SetTextFromStringTable(&local_58,StringDialogue,(longlong)*(int *)&pUVar2[5].field_0x8);
  FDS_Text::operator=(&this->TalkText,&local_58);
  local_60 = FFieldNotificationClassDescriptor::TalkText.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::TalkText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
  return;
}

// ResetBubbleTalk @ 14bf79220

void __thiscall UDS_VM_HUD_BubbleTalk::ResetBubbleTalk(UDS_VM_HUD_BubbleTalk *this)

{
  ForAnyElementType FVar1;
  FName local_68;
  int local_60;
  FDS_Text local_58;
  
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  local_58.StringTableType = None;
  local_58.StringTableID = 0;
  local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_58.StringEnumTableNameID.Number = 0;
  local_58.TimeExpressionType = None;
  local_58.DateTime.Ticks = 0;
  local_58.TimeSpan.Ticks = 0;
  local_58.IsExpression = false;
  local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.UniqueString.Data.ArrayNum = 0;
  local_58.UniqueString.Data.ArrayMax = 0;
  local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.FormatArgs.ArrayNum = 0;
  local_58.FormatArgs.ArrayMax = 0;
  FDS_Text::operator=(&this->TalkText,&local_58);
  local_60 = FFieldNotificationClassDescriptor::TalkText.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::TalkText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  FVar1.Data = local_58.FormatArgs.AllocatorInstance.Data;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)FVar1.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// SetTalkText @ 14bf7e7f0

void __thiscall UDS_VM_HUD_BubbleTalk::SetTalkText(UDS_VM_HUD_BubbleTalk *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->TalkText,param_1);
  local_10 = FFieldNotificationClassDescriptor::TalkText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TalkText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// TriggeredBubbleTalk @ 14bf83a40

void __thiscall UDS_VM_HUD_BubbleTalk::TriggeredBubbleTalk(UDS_VM_HUD_BubbleTalk *this,bool param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_68;
  int local_60;
  FDS_Text local_58;
  
  if (param_1) {
    bVar1 = TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->BubbleTalkAbilityData,(void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&(this->BubbleTalkAbilityData).WeakPtr);
      local_58.StringTableID = 0;
      local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_58.StringEnumTableNameID.Number = 0;
      local_58.TimeExpressionType = None;
      local_58.IsExpression = false;
      local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.UniqueString.Data.ArrayNum = 0;
      local_58.UniqueString.Data.ArrayMax = 0;
      local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.FormatArgs.ArrayNum = 0;
      local_58.FormatArgs.ArrayMax = 0;
      local_58.StringTableType = None;
      local_58.DateTime.Ticks = 0;
      local_58.TimeSpan.Ticks = 0;
      FDS_Text::SetTextFromStringTable
                (&local_58,StringDialogue,(longlong)*(int *)&pUVar2[5].field_0x8);
      FDS_Text::operator=(&this->TalkText,&local_58);
      local_60 = FFieldNotificationClassDescriptor::TalkText.BitNumber;
      local_68 = FFieldNotificationClassDescriptor::TalkText.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
                 local_58.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
      }
      if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
      }
      UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
      return;
    }
  }
  ResetBubbleTalk(this);
  return;
}

