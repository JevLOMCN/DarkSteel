// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b561690

UClass * __cdecl UDS_PlayerIconSlotImplChangeable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerIconSlotImplChangeable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerIconSlotImplChangeable",
               &Z_Registration_Info_UClass_UDS_PlayerIconSlotImplChangeable.InnerSingleton,
               StaticRegisterNativesUDS_PlayerIconSlotImplChangeable,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PlayerIconSlotImplChangeable>,
               InternalVTableHelperCtorCaller<UDS_PlayerIconSlotImplChangeable>,local_res8,
               UDS_PlayerIconSlotImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerIconSlotImplChangeable.InnerSingleton;
}

// UDS_PlayerIconSlotImplChangeable @ 14b564260

UDS_PlayerIconSlotImplChangeable * __thiscall
UDS_PlayerIconSlotImplChangeable::UDS_PlayerIconSlotImplChangeable
          (UDS_PlayerIconSlotImplChangeable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->IsShowChange = false;
  this->_padding_ = (longlong)&___7UDS_PlayerIconSlotImplChangeable__6B_;
  return this;
}

// UDS_PlayerIconSlotImplChangeable @ 14b564290

UDS_PlayerIconSlotImplChangeable * __thiscall
UDS_PlayerIconSlotImplChangeable::UDS_PlayerIconSlotImplChangeable
          (UDS_PlayerIconSlotImplChangeable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->IsShowChange = false;
  this->_padding_ = (longlong)&___7UDS_PlayerIconSlotImplChangeable__6B_;
  return this;
}

// ~UDS_PlayerIconSlotImplChangeable @ 14b565140

void __thiscall
UDS_PlayerIconSlotImplChangeable::~UDS_PlayerIconSlotImplChangeable
          (UDS_PlayerIconSlotImplChangeable *this)

{
  this->_padding_ = (longlong)&___7UDS_PlayerIconSlotImplBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5673e0

UClass * __cdecl UDS_PlayerIconSlotImplChangeable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerIconSlotImplChangeable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerIconSlotImplChangeable",
               &Z_Registration_Info_UClass_UDS_PlayerIconSlotImplChangeable.InnerSingleton,
               StaticRegisterNativesUDS_PlayerIconSlotImplChangeable,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PlayerIconSlotImplChangeable>,
               InternalVTableHelperCtorCaller<UDS_PlayerIconSlotImplChangeable>,local_res8,
               UDS_PlayerIconSlotImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerIconSlotImplChangeable.InnerSingleton;
}

// StaticRegisterNativesUDS_PlayerIconSlotImplChangeable @ 14b568080

void __cdecl
UDS_PlayerIconSlotImplChangeable::StaticRegisterNativesUDS_PlayerIconSlotImplChangeable(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_PlayerIconSlotImplChangeable_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnUpdatePlayerData @ 14b5697d0

void __cdecl
UDS_PlayerIconSlotImplChangeable::execOnUpdatePlayerData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataBase *local_res10;
  
  local_res10 = (UDS_DataBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnUpdatePlayerData((UDS_PlayerIconSlotImplChangeable *)param_1,local_res10);
  return;
}

// BindModel @ 14bd46640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_PlayerIconSlotImplChangeable::BindModel(UDS_PlayerIconSlotImplChangeable *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  char *pcVar5;
  UObject *this_00;
  UFunction *pUVar6;
  char *pcVar7;
  undefined1 auStackY_218 [32];
  <lambda_1> local_1e8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1e0;
  FWeakObjectPtr local_1d8;
  FName local_1d0;
  FWeakObjectPtr local_1c8;
  FName local_1c0;
  FName local_1b8;
  UDS_PlayerIconSlotImplChangeable *local_1b0;
  FName *local_1a8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_1a0;
  FDestructionSentinel local_190;
  FReadAccessScope local_178;
  FReadAccessScope local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_218;
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = FWeakObjectPtr::IsValid(&local_1c8);
  if (!bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_PlayerIconSlotImplChangeable::BindModel",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x18,L"mainPlayerData is Invalid.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9193611645820076007>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\PlayerIconSlot\\DS_PlayerIconSlotImplChangeable.cpp"
                       ,0x19,"false");
    if (!bVar2) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_1c8);
  pcVar5 = strstr("&UDS_PlayerIconSlotImplChangeable::OnUpdatePlayerData","::");
  if (pcVar5 == (char *)0x0) {
LAB_14bd4679b:
    pcVar7 = &DAT_00000002;
LAB_14bd467a0:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar7 = pcVar5;
      pcVar5 = strstr(pcVar7 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14bd4679b;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14bd467a0;
  }
  ::FName::FName(&local_1b8,pcVar7);
  if ((this == (UDS_PlayerIconSlotImplChangeable *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_1c0 = local_1b8;
  local_1e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_1d8.ObjectIndex = 0;
  local_1d8.ObjectSerialNumber = 0;
  local_1d0.ComparisonIndex.Value = 0;
  local_1d0.Number = 0;
  if ((this == (UDS_PlayerIconSlotImplChangeable *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_1b0 = this;
  if (this == (UDS_PlayerIconSlotImplChangeable *)0x0) {
    local_1b0 = (UDS_PlayerIconSlotImplChangeable *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_1b0 != (UDS_PlayerIconSlotImplChangeable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1b0);
  }
  FWeakObjectPtr::operator=(&local_1d8,(FObjectPtr)&local_1b0);
  local_1d0 = local_1c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_1e0,&local_178);
  if ((local_1d0 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_1d8), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_178);
  }
  else {
    pUVar6 = UObject::FindFunction(this_00,local_1d0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_178);
    if (pUVar6 != (UFunction *)0x0) goto LAB_14bd468f0;
  }
  local_1a8 = &local_1c0;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_PlayerIconSlotImplChangeable>'::__l2::<lambda_1>::operator()
            (&local_1a8);
LAB_14bd468f0:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_1e0,&local_160);
  local_1a0.Object = local_1d8;
  local_1a0.FunctionName = local_1d0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_160);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),
             (FWriteAccessScope *)&local_190);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar4[1].field_0x8,local_1e8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),&local_1a0);
  if (local_190.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1e0.AccessDetector);
  return;
}

// IsShowChangePanel @ 14bd6cb40

bool __thiscall
UDS_PlayerIconSlotImplChangeable::IsShowChangePanel(UDS_PlayerIconSlotImplChangeable *this)

{
  return this->IsShowChange;
}

// OnEventMouseButtonUp @ 14bd77d00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_PlayerIconSlotImplChangeable::OnEventMouseButtonUp(UDS_PlayerIconSlotImplChangeable *this)

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar3;
  UDS_PlayerIconSlotImplChangeable *local_res10;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_PlayerIconSlotImplChangeable____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_PlayerIconSlotImplChangeable *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_PlayerIconSlotImplChangeable *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
      puVar1[4] = OnOpenPlayerIconPopup;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    pTVar3 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_40,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_58);
    UDS_WindowManager::OpenWindow(this_00,PlayerIconPopup,pTVar3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  return;
}

// OnEventMouseEnter @ 14bd78200

void __thiscall
UDS_PlayerIconSlotImplChangeable::OnEventMouseEnter(UDS_PlayerIconSlotImplChangeable *this)

{
  this->IsShowChange = true;
  return;
}

// OnEventMouseLeave @ 14bd78410

void __thiscall
UDS_PlayerIconSlotImplChangeable::OnEventMouseLeave(UDS_PlayerIconSlotImplChangeable *this)

{
  this->IsShowChange = false;
  return;
}

// OnOpenPlayerIconPopup @ 14bd7b1a0

void __thiscall
UDS_PlayerIconSlotImplChangeable::OnOpenPlayerIconPopup
          (UDS_PlayerIconSlotImplChangeable *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar5;
  FWeakObjectPtr local_res10;
  UDS_UserWidget *local_res18;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    pFVar3 = ::operator_new(0x20);
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar5 = (FDS_ViewModelContext *)local_28.SharedReferenceCount.ReferenceController;
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(undefined4 *)&pFVar3->field_0x1c = 0;
      pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
      *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      pFVar3->ViewModelTemplateKey = None;
      pFVar5 = pFVar3;
    }
    local_28.Object = pFVar5;
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar3->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext__P6AXPEAU1__Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar5;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar3;
    }
    if ((local_28.Object == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar5 = local_28.Object;
    pUVar4 = FDS_ViewModelContext::StaticStruct();
    *(UScriptStruct **)&pFVar5->DerivedStaticStruct = pUVar4;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_28);
    }
    if ((local_28.Object == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (local_28.Object)->ViewModelTemplateKey = PlayerIcon_Popup;
    local_18.Object = local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    if ((FDS_ViewModelContext *)local_28.SharedReferenceCount.ReferenceController !=
        (FDS_ViewModelContext *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_18,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnUpdatePlayerData @ 14bd83680

void __thiscall
UDS_PlayerIconSlotImplChangeable::OnUpdatePlayerData
          (UDS_PlayerIconSlotImplChangeable *this,UDS_DataBase *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_00;
  UObject *pUVar6;
  UDS_PlayerEvent *pUVar7;
  FDS_ViewModelContext *pFVar8;
  FDS_ViewModelContext *pFVar9;
  FWeakObjectPtr local_res18;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  FDS_ViewModelContext *local_18;
  FDS_ViewModelContext *local_10;
  
  UDS_PlayerData::GetMainPlayerData();
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar3) {
    pFVar4 = ::operator_new(0x30);
    pFVar9 = (FDS_ViewModelContext *)0x0;
    pFVar8 = pFVar9;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar4->ViewModelTemplateKey = 0;
      *(undefined4 *)((longlong)&pFVar4[1]._padding_ + 4) = 0;
      ((atomic<int> *)&pFVar4[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
      *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
      (pFVar4->ViewModelName).ComparisonIndex = 0;
      (pFVar4->ViewModelName).Number = 0;
      pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_PlayerIconSlot__6B_;
      *(undefined4 *)&pFVar4[1]._padding_ = 0;
      *(atomic<int> *)&pFVar4[1].DerivedStaticStruct = (atomic<int>)0x0;
      pFVar8 = pFVar4;
    }
    pFVar4 = ::operator_new(0x20);
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar4->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PlayerIconSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar8;
      pFVar9 = pFVar4;
    }
    if ((pFVar8 == (FDS_ViewModelContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar5 = FDS_ViewModelContext_PlayerIconSlot::StaticStruct();
    *(UScriptStruct **)&pFVar8->DerivedStaticStruct = pUVar5;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar9 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar9->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar9->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_28.Object = pFVar8;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    pFVar8->ViewModelTemplateKey = Player_IconSlot;
    pUVar6 = FWeakObjectPtr::Get(&local_res18);
    *(undefined4 *)&pFVar8[1]._padding_ = *(undefined4 *)&pUVar6[8].field_0x1c;
    lVar1 = this->_padding_;
    if (pFVar9 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar9->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar9->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_18 = pFVar8;
    local_10 = pFVar9;
    (**(code **)(lVar1 + 0x2b0))(this,&local_18);
    pUVar7 = UDS_PlayerEvent::GetEvent();
    if (pUVar7 != (UDS_PlayerEvent *)0x0) {
      FDS_EventDelegate<enum_EDS_PlayerIconSlotType_const_>::Broadcast
                (&pUVar7->OnPlayerIconUpdate,Changeable);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar9);
  }
  return;
}

// SetContext @ 14bd87da0

void __thiscall
UDS_PlayerIconSlotImplChangeable::SetContext
          (UDS_PlayerIconSlotImplChangeable *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FDS_PlayerIconTableRow *pFVar5;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1> local_18;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  local_28.Object = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.SharedReferenceCount.ReferenceController = pTVar2;
  SafeCast<FDS_ViewModelContext_PlayerIconSlot>(&local_18,&local_28);
  if (local_18.Object != (FDS_ViewModelContext_PlayerIconSlot *)0x0) {
    if (local_18.Object == (FDS_ViewModelContext_PlayerIconSlot *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar1 = (local_18.Object)->PlayerIconID;
    *(int *)&this->_padding_ = iVar1;
    pFVar5 = FDS_PlayerIconTableRow::GetRef((longlong)iVar1,true);
    *(int *)((longlong)&this->_padding_ + 4) = pFVar5->ID_PlayerIcon;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnBindModel @ 14bd8b9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_PlayerIconSlotImplChangeable::UnBindModel(UDS_PlayerIconSlotImplChangeable *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = FWeakObjectPtr::IsValid(local_148);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(local_148);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),(UObject *)this)
    ;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PlayerIconSlotImplChangeable::UnBindModel",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x25,L"mainPlayerData is Invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9193611645820075994>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\PlayerIconSlot\\DS_PlayerIconSlotImplChangeable.cpp"
                       ,0x26,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

