// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b644df0

UClass * __cdecl UDS_VM_GameOptionCategory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GameOptionCategory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GameOptionCategory",
               &Z_Registration_Info_UClass_UDS_VM_GameOptionCategory.InnerSingleton,
               StaticRegisterNativesUDS_VM_GameOptionCategory,0x100,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_GameOptionCategory>,
               InternalVTableHelperCtorCaller<UDS_VM_GameOptionCategory>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GameOptionCategory.InnerSingleton;
}

// UDS_VM_GameOptionCategory @ 14b648420

UDS_VM_GameOptionCategory * __thiscall
UDS_VM_GameOptionCategory::UDS_VM_GameOptionCategory
          (UDS_VM_GameOptionCategory *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GameOptionCategory__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->CategoryName).StringTableType = None;
  (this->CategoryName).StringTableID = 0;
  (this->CategoryName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CategoryName).StringEnumTableNameID.Number = 0;
  (this->CategoryName).DateTime.Ticks = 0;
  (this->CategoryName).TimeSpan.Ticks = 0;
  (this->CategoryName).TimeExpressionType = None;
  (this->CategoryName).IsExpression = false;
  (this->CategoryName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryName).UniqueString.Data.ArrayNum = 0;
  (this->CategoryName).UniqueString.Data.ArrayMax = 0;
  (this->CategoryName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryName).FormatArgs.ArrayNum = 0;
  (this->CategoryName).FormatArgs.ArrayMax = 0;
  return this;
}

// UDS_VM_GameOptionCategory @ 14b6484c0

UDS_VM_GameOptionCategory * __thiscall
UDS_VM_GameOptionCategory::UDS_VM_GameOptionCategory
          (UDS_VM_GameOptionCategory *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GameOptionCategory__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->CategoryName).StringTableType = None;
  (this->CategoryName).StringTableID = 0;
  (this->CategoryName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CategoryName).StringEnumTableNameID.Number = 0;
  (this->CategoryName).DateTime.Ticks = 0;
  (this->CategoryName).TimeSpan.Ticks = 0;
  (this->CategoryName).TimeExpressionType = None;
  (this->CategoryName).IsExpression = false;
  (this->CategoryName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryName).UniqueString.Data.ArrayNum = 0;
  (this->CategoryName).UniqueString.Data.ArrayMax = 0;
  (this->CategoryName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryName).FormatArgs.ArrayNum = 0;
  (this->CategoryName).FormatArgs.ArrayMax = 0;
  return this;
}

// ~UDS_VM_GameOptionCategory @ 14b649670

void __thiscall
UDS_VM_GameOptionCategory::~UDS_VM_GameOptionCategory(UDS_VM_GameOptionCategory *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GameOptionCategory__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CategoryName).FormatArgs.AllocatorInstance.Data,
             (this->CategoryName).FormatArgs.ArrayNum);
  pFVar1 = (this->CategoryName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CategoryName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b64b240

IClassDescriptor * __thiscall
UDS_VM_GameOptionCategory::GetFieldNotificationDescriptor(UDS_VM_GameOptionCategory *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GameOptionCategory::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b64bbd0

UClass * __cdecl UDS_VM_GameOptionCategory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GameOptionCategory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GameOptionCategory",
               &Z_Registration_Info_UClass_UDS_VM_GameOptionCategory.InnerSingleton,
               StaticRegisterNativesUDS_VM_GameOptionCategory,0x100,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_GameOptionCategory>,
               InternalVTableHelperCtorCaller<UDS_VM_GameOptionCategory>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GameOptionCategory.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GameOptionCategory @ 14b64bfb0

void __cdecl UDS_VM_GameOptionCategory::StaticRegisterNativesUDS_VM_GameOptionCategory(void)

{
  return;
}

// BindModel @ 14bdb1c30

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GameOptionCategory::BindModel(UDS_VM_GameOptionCategory *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < (int)this->_padding_) &&
     (pUVar1 = UDS_LanguageManager::GetInst(), pUVar1 != (UDS_LanguageManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ViewModelBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLanguageChanged,(UDS_ViewModelBase *)&stack0x00000008,(pmf_620f4446 *)this
              );
  }
  return;
}

// InitViewModel @ 14bdc7310

void __thiscall UDS_VM_GameOptionCategory::InitViewModel(UDS_VM_GameOptionCategory *this)

{
  FDS_Text local_58;
  
  local_58.StringTableType = None;
  local_58.StringTableID = 0;
  local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_58.StringEnumTableNameID.Number = 0;
  local_58.DateTime.Ticks = 0;
  local_58.TimeSpan.Ticks = 0;
  local_58.TimeExpressionType = None;
  local_58.IsExpression = false;
  local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.UniqueString.Data.ArrayNum = 0;
  local_58.UniqueString.Data.ArrayMax = 0;
  local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.FormatArgs.ArrayNum = 0;
  local_58.FormatArgs.ArrayMax = 0;
  FDS_Text::operator=(&this->CategoryName,&local_58);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  return;
}

// OnSetViewModel @ 14bddc240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GameOptionCategory::OnSetViewModel
          (UDS_VM_GameOptionCategory *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_GameOptionBaseTableRow *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  UDS_UserObjectListItem *pUVar8;
  FDS_StringBaseTableRow *pFVar9;
  FDS_ViewModelContext *pFVar10;
  FDS_ViewModelContext *pFVar11;
  UScriptStruct *pUVar12;
  UDS_ViewModelContextManager *this_01;
  ulonglong uVar13;
  FDS_ViewModelContext *pFVar14;
  FScriptContainerElement *pFVar15;
  atomic<int> *paVar16;
  undefined1 auStackY_218 [32];
  undefined1 local_1e8 [4];
  uint local_1e4;
  TSharedPtr<FDS_ViewModelContext,1> *local_1e0;
  TSharedPtr<FDS_ViewModelContext_OptionCategory,1> local_1d8;
  UDS_VM_GameOptionCategory *local_1c8;
  FDS_ViewModelContext_OptionCategory *local_1c0;
  UDS_UserObjectListItem *local_1b8;
  FScriptContainerElement *local_1b0;
  FName local_1a8;
  int local_1a0;
  FName local_198;
  int local_190;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1e0 = param_1;
  local_1c8 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_178.Object = param_1->Object;
  local_178.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_OptionCategory>(&local_1d8,&local_178);
  local_1c0 = local_1d8.Object;
  if (local_1d8.Object == (FDS_ViewModelContext_OptionCategory *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_GameOptionCategory::OnSetViewModel",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_168.Ptr,0x14,L"optionCategorycontext is Invalid.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d8.SharedReferenceCount.ReferenceController);
  }
  else {
    (**(code **)(this->_padding_ + 0x2e8))(this);
    if ((local_1d8.Object == (FDS_ViewModelContext_OptionCategory *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_1e4 = ((local_1d8.Object)->ListGameOption).ArrayNum;
    uVar13 = (ulonglong)(int)local_1e4;
    pFVar15 = ((local_1d8.Object)->ListGameOption).AllocatorInstance.Data;
    local_1b0 = pFVar15 + uVar13 * 8;
    while( true ) {
      pFVar3 = local_1b0;
      if (((local_1d8.Object)->ListGameOption).ArrayNum != (int)uVar13) {
        local_1e8[0] = 0;
        `TCheckedPointerIterator<FDS_GameOptionBaseTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1e8);
      }
      if (pFVar15 == pFVar3) break;
      this_00 = *(FDS_GameOptionBaseTableRow **)pFVar15;
      if (this_00 == (FDS_GameOptionBaseTableRow *)0x0) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3929164042341449756>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_GameOptionCategory.cpp"
                           ,0x1c,"false");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        goto LAB_14bddc67d;
      }
      pUVar8 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar8 == (UDS_UserObjectListItem *)0x0) goto LAB_14bddc5ce;
      }
      else {
        if (pUVar8 == (UDS_UserObjectListItem *)0x0) {
LAB_14bddc5ce:
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3929164042341449759>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_GameOptionCategory.cpp"
                             ,0x1f,"false");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          goto LAB_14bddc67d;
        }
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      pFVar9 = FDS_GameOptionBaseTableRow::ID_CategoryNameTable(this_00);
      FDS_Text::SetTextFromStringTable(&this->CategoryName,pFVar9);
      pFVar10 = ::operator_new(0x28);
      pFVar14 = (FDS_ViewModelContext *)0x0;
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar10->field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar10[1]._padding_ + 4) = 0;
        *(undefined8 *)&pFVar10->DerivedStaticStruct = 0;
        (pFVar10->ViewModelName).ComparisonIndex = 0;
        (pFVar10->ViewModelName).Number = 0;
        pFVar10->ViewModelTemplateKey = None;
        pFVar10->_padding_ = (longlong)&___7FDS_ViewModelContext_OptionComponent__6B_;
        pFVar14 = pFVar10;
      }
      pFVar11 = ::operator_new(0x20);
      pFVar10 = (FDS_ViewModelContext *)0x0;
      if (pFVar11 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar11->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar11->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar11->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_OptionComponent__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar11->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar11->ViewModelTemplateKey = pFVar14;
        pFVar10 = pFVar11;
      }
      if ((pFVar14 == (FDS_ViewModelContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar12 = FDS_ViewModelContext_OptionComponent::StaticStruct();
      *(UScriptStruct **)&pFVar14->DerivedStaticStruct = pUVar12;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar10 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar10->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_188.Object = pFVar14;
        local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_188);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_188.SharedReferenceCount.ReferenceController);
      }
      pFVar14->ViewModelTemplateKey = W_GameOptionComponent;
      pFVar14[1]._padding_ = (longlong)this_00;
      if (pFVar10 == (FDS_ViewModelContext *)0x0) {
        paVar16 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar16 = (atomic<int> *)&pFVar10->DerivedStaticStruct;
        LOCK();
        *paVar16 = (atomic<int>)((int)*paVar16 + 1);
        UNLOCK();
      }
      iVar6 = (pUVar8->ViewModelContextArray).ArrayNum;
      piVar1 = &(pUVar8->ViewModelContextArray).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(pUVar8->ViewModelContextArray).AllocatorInstance,piVar1);
      }
      (pUVar8->ViewModelContextArray).ArrayNum = iVar6 + 1;
      pFVar3 = (pUVar8->ViewModelContextArray).AllocatorInstance.Data;
      *(FDS_ViewModelContext **)(pFVar3 + (longlong)iVar6 * 0x10) = pFVar14;
      *(FDS_ViewModelContext **)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = pFVar10;
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *paVar16 = (atomic<int>)((int)*paVar16 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar10);
      this = local_1c8;
      local_1b8 = pUVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_1b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar10);
      uVar13 = (ulonglong)local_1e4;
      pFVar15 = pFVar15 + 8;
      local_1d8.Object = local_1c0;
    }
    local_1a0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
    local_1a8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
    local_190 = FFieldNotificationClassDescriptor::CategoryName.BitNumber;
    local_198 = FFieldNotificationClassDescriptor::CategoryName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
LAB_14bddc67d:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d8.SharedReferenceCount.ReferenceController);
    param_1 = local_1e0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bdecdd0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GameOptionCategory::UnbindModel(UDS_VM_GameOptionCategory *this)

{
  UDS_LanguageManager *pUVar1;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  return;
}

