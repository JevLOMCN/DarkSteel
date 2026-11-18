// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b51ac10

UClass * __cdecl UDS_M_MoneyDisplay::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_MoneyDisplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_MoneyDisplay",
               &Z_Registration_Info_UClass_UDS_M_MoneyDisplay.InnerSingleton,
               StaticRegisterNativesUDS_M_MoneyDisplay,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_MoneyDisplay>,
               InternalVTableHelperCtorCaller<UDS_M_MoneyDisplay>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_MoneyDisplay.InnerSingleton;
}

// UDS_M_MoneyDisplay @ 14b522190

UDS_M_MoneyDisplay * __thiscall
UDS_M_MoneyDisplay::UDS_M_MoneyDisplay(UDS_M_MoneyDisplay *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_MoneyDisplay__6B_;
  (this->MoneyData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->MoneyData).WeakPtr,(FObjectPtr)&local_res8);
  this->MoneyDisplayType = None;
  this->MoneyType = None;
  this->MoneyValue = 0;
  this->IsMoneyEnough = true;
  return this;
}

// UDS_M_MoneyDisplay @ 14b5221f0

UDS_M_MoneyDisplay * __thiscall
UDS_M_MoneyDisplay::UDS_M_MoneyDisplay(UDS_M_MoneyDisplay *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_MoneyDisplay__6B_;
  (this->MoneyData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->MoneyData).WeakPtr,(FObjectPtr)&local_res8);
  this->MoneyDisplayType = None;
  this->MoneyType = None;
  this->MoneyValue = 0;
  this->IsMoneyEnough = true;
  return this;
}

// ~UDS_M_MoneyDisplay @ 14b523570

void __thiscall UDS_M_MoneyDisplay::~UDS_M_MoneyDisplay(UDS_M_MoneyDisplay *this)

{
  this->_padding_ = (longlong)&___7UDS_M_MoneyDisplay__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5262e0

UClass * __cdecl UDS_M_MoneyDisplay::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_MoneyDisplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_MoneyDisplay",
               &Z_Registration_Info_UClass_UDS_M_MoneyDisplay.InnerSingleton,
               StaticRegisterNativesUDS_M_MoneyDisplay,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_MoneyDisplay>,
               InternalVTableHelperCtorCaller<UDS_M_MoneyDisplay>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_MoneyDisplay.InnerSingleton;
}

// StaticRegisterNativesUDS_M_MoneyDisplay @ 14b527520

void __cdecl UDS_M_MoneyDisplay::StaticRegisterNativesUDS_M_MoneyDisplay(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_M_MoneyDisplay_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnUpdateMoneyData @ 14b529c50

void __cdecl
UDS_M_MoneyDisplay::execOnUpdateMoneyData(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnUpdateMoneyData((UDS_M_MoneyDisplay *)param_1,local_res10);
  return;
}

// BeginDestroy @ 14bce8c40

void __thiscall UDS_M_MoneyDisplay::BeginDestroy(UDS_M_MoneyDisplay *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  if ((this->_padding_ & 0x10) == 0) {
    (**(code **)(this->_padding_ + 0x2c0))();
  }
  UObject::BeginDestroy((UObject *)this);
  bVar1 = FWeakObjectPtr::IsValid(&(this->MoneyData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MoneyData).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  return;
}

// BindMoneyData @ 14bce9290

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_M_MoneyDisplay::BindMoneyData(UDS_M_MoneyDisplay *this)

{
  code *pcVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr> TVar3;
  UObject *pUVar4;
  char *pcVar5;
  UObject *this_00;
  UFunction *pUVar6;
  char *pcVar7;
  <lambda_1> local_res8 [8];
  FName local_res10;
  FName local_res18;
  UDS_M_MoneyDisplay *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  FName *local_a0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_98;
  FDestructionSentinel local_88;
  undefined1 local_70 [8];
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  if (this->MoneyType == None) {
    return;
  }
  TVar3 = UDS_MoneyData::GetData((EDS_MoneyType)local_70);
                    /* WARNING: Load size is inaccurate */
  (this->MoneyData).WeakPtr = *TVar3.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&(this->MoneyData).WeakPtr);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7248021869100531844>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_MoneyDisplay.cpp"
                       ,0x84,"MoneyData.IsValid()");
    if (!bVar2) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&(this->MoneyData).WeakPtr);
  pcVar5 = strstr("&UDS_M_MoneyDisplay::OnUpdateMoneyData","::");
  if (pcVar5 == (char *)0x0) {
LAB_14bce938d:
    pcVar7 = &DAT_00000002;
LAB_14bce9392:
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
    if (pcVar7 == (char *)0x0) goto LAB_14bce938d;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14bce9392;
  }
  ::FName::FName(&local_res18,pcVar7);
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_res10 = local_res18;
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_M_MoneyDisplay *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_res20);
  local_a8 = local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_68);
  if ((local_a8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_b0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
  }
  else {
    pUVar6 = UObject::FindFunction(this_00,local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    if (pUVar6 != (UFunction *)0x0) goto LAB_14bce947b;
  }
  local_a0 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_M_MoneyDisplay>'::__l2::<lambda_1>::operator()(&local_a0);
LAB_14bce947b:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_50);
  local_98.Object = local_b0;
  local_98.FunctionName = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),
             (FWriteAccessScope *)&local_88);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar4[1].field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),&local_98);
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// GetStyleTableID @ 14bcfd150

int __thiscall UDS_M_MoneyDisplay::GetStyleTableID(UDS_M_MoneyDisplay *this)

{
  bool bVar1;
  
  if ((this->MoneyDisplayType == DisplayWithCheck) && (bVar1 = HasEnoughMoney(this), !bVar1)) {
    return 0x84a;
  }
  return 0x836;
}

// GetViewModelContext @ 14bcff9d0

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_MoneyDisplay::GetViewModelContext
          (UDS_M_MoneyDisplay *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  FDS_ViewModelContext *pFVar6;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> *pTVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  FDS_ViewModelContext *local_48;
  FSharedReferencer<1> local_40;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  *(undefined4 *)&this->_padding_ = 0x192;
  if (this->_padding_ == 0) {
    pFVar6 = ::operator_new(0x40);
    pFVar10 = (FDS_ViewModelContext *)0x0;
    pFVar9 = pFVar10;
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
      *(undefined2 *)&pFVar6[1].field_0x1e = 0;
      *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
      (pFVar6->ViewModelName).ComparisonIndex = 0;
      (pFVar6->ViewModelName).Number = 0;
      pFVar6[1]._padding_ = 0;
      pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_MoneyDisplay__6B_;
      *(undefined8 *)&pFVar6[1].DerivedStaticStruct = 0;
      pFVar6[1].ViewModelName.ComparisonIndex = 0;
      pFVar6[1].ViewModelName.Number = 0;
      pFVar6[1].ViewModelTemplateKey = None;
      *(undefined2 *)&pFVar6[1].field_0x1c = 0;
      pFVar9 = pFVar6;
    }
    pFVar6 = ::operator_new(0x20);
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar6->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar6->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar6->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MoneyDisplay__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar6->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar6->ViewModelTemplateKey = pFVar9;
      pFVar10 = pFVar6;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_ModelBase,1> *)(*pcVar2)();
      return pTVar7;
    }
    pUVar8 = FDS_ViewModelContext_MoneyDisplay::StaticStruct();
    *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar8;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar10->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_38.Object = pFVar9;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_48 = pFVar9;
    local_40.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
    if ((FDS_ViewModelContext **)&this->_padding_ != &local_48) {
      this->_padding_ = (longlong)pFVar9;
      local_48 = (FDS_ViewModelContext *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&local_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
  }
  local_18.Object = (FDS_ViewModelContext *)this->_padding_;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)this->_padding_
  ;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_MoneyDisplay>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_MoneyDisplay *)0x0) {
    lVar3 = this->_padding_;
    if ((local_28.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_ModelBase,1> *)(*pcVar2)();
      return pTVar7;
    }
    *(int *)&(local_28.Object)->_padding_ = (int)lVar3;
    (local_28.Object)->MoneyId = (ulonglong)this->MoneyType;
    (local_28.Object)->Quantity = this->MoneyValue;
    iVar5 = (**(code **)(this->_padding_ + 800))(this);
    (local_28.Object)->TextStyleId = iVar5;
    bVar4 = (bool)(**(code **)(this->_padding_ + 0x328))(this);
    (local_28.Object)->IsHideDisplay = bVar4;
  }
  __return_storage_ptr__->Object = (FDS_ViewModelContext_ModelBase *)this->_padding_;
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// HasEnoughMoney @ 14bd00630

bool __thiscall UDS_M_MoneyDisplay::HasEnoughMoney(UDS_M_MoneyDisplay *this)

{
  bool bVar1;
  UDS_MoneyData *this_00;
  
  if (this->MoneyType == None) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->MoneyData).WeakPtr);
  if (!bVar1) {
    return false;
  }
  this_00 = (UDS_MoneyData *)FWeakObjectPtr::Get(&(this->MoneyData).WeakPtr);
  bVar1 = UDS_MoneyData::CheckEnoughMoney(this_00,this->MoneyValue);
  return bVar1;
}

// IsHideDisplay @ 14bd05cd0

bool __thiscall UDS_M_MoneyDisplay::IsHideDisplay(UDS_M_MoneyDisplay *this)

{
  if ((this->MoneyDisplayType != DisplayMoneyData) &&
     ((this->MoneyType == None || (this->MoneyValue < 1)))) {
    return true;
  }
  return false;
}

// OnUpdateMoneyData @ 14bd14540

void __thiscall
UDS_M_MoneyDisplay::OnUpdateMoneyData(UDS_M_MoneyDisplay *this,UDS_DataBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_MoneyData *this_00;
  FWeakObjectPtr local_res8;
  undefined8 local_res18;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->MoneyData).WeakPtr);
  if (!bVar2) {
    return;
  }
  if (this->MoneyDisplayType == DisplayMoneyData) {
    pUVar3 = FWeakObjectPtr::Get(&(this->MoneyData).WeakPtr);
    if (this->MoneyValue == *(longlong *)&pUVar3[2].field_0x10) goto LAB_14bd145df;
    pUVar3 = FWeakObjectPtr::Get(&(this->MoneyData).WeakPtr);
    this->MoneyValue = *(long64 *)&pUVar3[2].field_0x10;
  }
  else {
    if (this->MoneyDisplayType != DisplayWithCheck) goto LAB_14bd145df;
    this_00 = (UDS_MoneyData *)FWeakObjectPtr::Get(&(this->MoneyData).WeakPtr);
    bVar2 = UDS_MoneyData::CheckEnoughMoney(this_00,this->MoneyValue);
    if (this->IsMoneyEnough == bVar2) goto LAB_14bd145df;
    this->IsMoneyEnough = this->IsMoneyEnough == false;
  }
  *(undefined1 *)&this->_padding_ = 1;
LAB_14bd145df:
  if ((char)this->_padding_ == '\x01') {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    UDS_ModelBase::UpdateModel
              ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res8);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2e0);
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  (*pcVar1)(this,local_res8,0);
  return;
}

// RefreshData @ 14bd17620

void __thiscall
UDS_M_MoneyDisplay::RefreshData(UDS_M_MoneyDisplay *this,EDS_MoneyType param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr> TVar4;
  FWeakObjectPtr local_res8;
  undefined1 local_res18 [16];
  
  this->MoneyType = param_1;
  this->MoneyValue = param_2;
  if (this->MoneyDisplayType == DisplayMoneyData) {
    UDS_MoneyData::GetData((EDS_MoneyType)&local_res8);
    bVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7248021869100531767>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_MoneyDisplay.cpp"
                         ,0x37,"moneyData.IsValid()");
      if (!bVar2) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    this->MoneyValue = *(long64 *)&pUVar3[2].field_0x10;
  }
  bVar2 = FWeakObjectPtr::IsValid(&(this->MoneyData).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->MoneyData).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),(UObject *)this)
    ;
  }
  TVar4 = UDS_MoneyData::GetData((EDS_MoneyType)local_res18);
                    /* WARNING: Load size is inaccurate */
  (this->MoneyData).WeakPtr = *TVar4.WeakPtr;
  BindMoneyData(this);
  bVar2 = HasEnoughMoney(this);
  this->IsMoneyEnough = bVar2;
  return;
}

// UnbindMoneyData @ 14bd24a70

void __thiscall UDS_M_MoneyDisplay::UnbindMoneyData(UDS_M_MoneyDisplay *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->MoneyData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MoneyData).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  return;
}

