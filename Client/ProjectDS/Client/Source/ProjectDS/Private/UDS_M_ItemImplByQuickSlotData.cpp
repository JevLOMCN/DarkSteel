// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b51ae50

UClass * __cdecl UDS_M_ItemImplByQuickSlotData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplByQuickSlotData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplByQuickSlotData",
               &Z_Registration_Info_UClass_UDS_M_ItemImplByQuickSlotData.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplByQuickSlotData,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemImplByQuickSlotData>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplByQuickSlotData>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplByQuickSlotData.InnerSingleton;
}

// UDS_M_ItemImplByQuickSlotData @ 14b520910

UDS_M_ItemImplByQuickSlotData * __thiscall
UDS_M_ItemImplByQuickSlotData::UDS_M_ItemImplByQuickSlotData
          (UDS_M_ItemImplByQuickSlotData *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->QuickSlotData).Object = (FDS_QuickSlotData *)0x0;
  (this->QuickSlotData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UDS_M_ItemImplByQuickSlotData @ 14b520990

UDS_M_ItemImplByQuickSlotData * __thiscall
UDS_M_ItemImplByQuickSlotData::UDS_M_ItemImplByQuickSlotData
          (UDS_M_ItemImplByQuickSlotData *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->QuickSlotData).Object = (FDS_QuickSlotData *)0x0;
  (this->QuickSlotData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// GetPrivateStaticClass @ 14b525260

UClass * __cdecl UDS_M_ItemImplByQuickSlotData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplByQuickSlotData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplByQuickSlotData",
               &Z_Registration_Info_UClass_UDS_M_ItemImplByQuickSlotData.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplByQuickSlotData,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemImplByQuickSlotData>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplByQuickSlotData>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplByQuickSlotData.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemImplByQuickSlotData @ 14b527390

void __cdecl UDS_M_ItemImplByQuickSlotData::StaticRegisterNativesUDS_M_ItemImplByQuickSlotData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_M_ItemImplByQuickSlotData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnUpdateQuickSlotData @ 14b529ce0

void __cdecl
UDS_M_ItemImplByQuickSlotData::execOnUpdateQuickSlotData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataSetBase *local_res10;
  
  local_res10 = (UDS_DataSetBase *)0x0;
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
  OnUpdateQuickSlotData((UDS_M_ItemImplByQuickSlotData *)param_1,local_res10);
  return;
}

// ~UDS_M_ItemImplByQuickSlotData @ 14bd43c00

void __thiscall
UDS_M_ItemImplByQuickSlotData::~UDS_M_ItemImplByQuickSlotData(UDS_M_ItemImplByQuickSlotData *this)

{
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->QuickSlotData).SharedReferenceCount.ReferenceController);
  UDS_M_ItemImplBase::~UDS_M_ItemImplBase((UDS_M_ItemImplBase *)this);
  return;
}

// GetViewModelContext @ 14bd64a60

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_ItemImplByQuickSlotData::GetViewModelContext
          (UDS_M_ItemImplByQuickSlotData *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  FName *pFVar1;
  int iVar2;
  FName local_res8;
  FString local_18;
  
  UDS_ModelBase::SetViewModelTemplateKey((UDS_ModelBase *)this,W_Item);
  ::FString::PrintfImpl(&local_18,L"DS_VM_QuickSlot_%d");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  pFVar1 = ::FName::FName(&local_res8,iVar2,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                          FNAME_Add);
  UDS_ModelBase::SetViewModelName((UDS_ModelBase *)this,*pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  UDS_ModelBase::SetViewModelTemplateKey((UDS_ModelBase *)this,W_Item);
  UDS_ModelBase::GetViewModelContext((UDS_ModelBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Init @ 14bd66050

void __thiscall
UDS_M_ItemImplByQuickSlotData::Init
          (UDS_M_ItemImplByQuickSlotData *this,TSharedPtr<FDS_QuickSlotData,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_QuickSlotData *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 in_R9;
  FDS_QuickSlotData *pFVar7;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar7 = (this->QuickSlotData).Object;
  pTVar4 = (this->QuickSlotData).SharedReferenceCount.ReferenceController;
  (this->QuickSlotData).Object = pFVar2;
  (this->QuickSlotData).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pFVar2 = (this->QuickSlotData).Object;
  uVar6 = 0;
  uVar5 = uVar6;
  if (pFVar2 != (FDS_QuickSlotData *)0x0) {
    uVar5 = pFVar2->TargetUID;
  }
  UDS_M_ItemImplBase::SetItemUID((UDS_M_ItemImplBase *)this,uVar5);
  pcVar3 = *(code **)(this->_padding_ + 0x348);
  pFVar2 = (this->QuickSlotData).Object;
  if (pFVar2 != (FDS_QuickSlotData *)0x0) {
    uVar6 = (ulonglong)(uint)pFVar2->TargetTID;
  }
  (*pcVar3)(this,uVar6,pcVar3,in_R9,pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// IsEmpty @ 14bd6b630

bool __thiscall UDS_M_ItemImplByQuickSlotData::IsEmpty(UDS_M_ItemImplByQuickSlotData *this)

{
  FDS_QuickSlotData *pFVar1;
  
  pFVar1 = (this->QuickSlotData).Object;
  if (((pFVar1 != (FDS_QuickSlotData *)0x0) && (pFVar1->TargetUID == 0)) && (pFVar1->TargetTID == 0)
     ) {
    return true;
  }
  return false;
}

// OnDeInit @ 14bd76910

void __thiscall UDS_M_ItemImplByQuickSlotData::OnDeInit(UDS_M_ItemImplByQuickSlotData *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  UDS_M_ItemImplBase::OnDeInit((UDS_M_ItemImplBase *)this);
  TDS_DataSetGetter<UDS_QuickSlotDeckDataSet>::Get((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  return;
}

// OnInit @ 14bd78cf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_M_ItemImplByQuickSlotData::OnInit(UDS_M_ItemImplByQuickSlotData *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  char *pcVar6;
  <lambda_1> local_res10 [8];
  FWeakObjectPtr local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  FName local_a0;
  UDS_M_ItemImplByQuickSlotData *local_98;
  FName *local_90;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_88;
  FDestructionSentinel local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  UDS_M_ItemImplBase::OnInit((UDS_M_ItemImplBase *)this);
  TDS_DataSetGetter<UDS_QuickSlotDeckDataSet>::Get((ulong64)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6925742924961415246>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplByQuickSlotData.cpp"
                       ,0x4e,"false");
    if (!bVar2) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res18);
  pcVar4 = strstr("&UDS_M_ItemImplByQuickSlotData::OnUpdateQuickSlotData","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bd78ddb:
    pcVar6 = &DAT_00000002;
LAB_14bd78de0:
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
      pcVar6 = pcVar4;
      pcVar4 = strstr(pcVar6 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14bd78ddb;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14bd78de0;
  }
  ::FName::FName(&local_a0,pcVar6);
  if ((this == (UDS_M_ItemImplByQuickSlotData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res20 = local_a0;
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  if ((this == (UDS_M_ItemImplByQuickSlotData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_98 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_M_ItemImplByQuickSlotData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_98);
  local_a8 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_60);
  if ((local_a8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_b0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    if (pUVar5 != (UFunction *)0x0) goto LAB_14bd78f21;
  }
  local_90 = &local_res20;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
  __Internal_BindDynamic<UDS_M_ItemImplByQuickSlotData>'::__l2::<lambda_1>::operator()(&local_90);
LAB_14bd78f21:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_48);
  local_88.Object = local_b0;
  local_88.FunctionName = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),
             (FWriteAccessScope *)&local_78);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar3[1].field_0x8,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),&local_88);
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// OnUpdateQuickSlotData @ 14bd83810

void __thiscall
UDS_M_ItemImplByQuickSlotData::OnUpdateQuickSlotData
          (UDS_M_ItemImplByQuickSlotData *this,UDS_DataSetBase *param_1)

{
  TSharedPtr<FDS_QuickSlotData,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_QuickSlotData *pFVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  int iVar6;
  long64 lVar7;
  FWeakObjectPtr local_res8;
  undefined8 local_res18;
  
  pTVar1 = &this->QuickSlotData;
  pTVar2 = (this->QuickSlotData).SharedReferenceCount.ReferenceController;
  pFVar3 = pTVar1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->QuickSlotData).SharedReferenceCount.ReferenceController;
  pTVar1->Object = pFVar3;
  (this->QuickSlotData).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  lVar7 = 0;
  if (pTVar1->Object != (FDS_QuickSlotData *)0x0) {
    lVar7 = pTVar1->Object->TargetUID;
  }
  UDS_M_ItemImplBase::SetItemUID((UDS_M_ItemImplBase *)this,lVar7);
  iVar6 = 0;
  if (pTVar1->Object != (FDS_QuickSlotData *)0x0) {
    iVar6 = pTVar1->Object->TargetTID;
  }
  (**(code **)(this->_padding_ + 0x348))(this,iVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = 0;
  pcVar4 = *(code **)(this->_padding_ + 0x2e0);
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  (*pcVar4)(this,local_res8,0);
  return;
}

// UpdateSlotInfo @ 14bd934a0

void __thiscall UDS_M_ItemImplByQuickSlotData::UpdateSlotInfo(UDS_M_ItemImplByQuickSlotData *this)

{
  code *pcVar1;
  bool bVar2;
  FDS_ItemSlotInfo *pFVar3;
  
  UDS_M_ItemImplBase::UpdateSlotInfo((UDS_M_ItemImplBase *)this);
  if (((this->QuickSlotData).Object != (FDS_QuickSlotData *)0x0) &&
     (pFVar3 = FDS_SlotInfo::GetSlotInfo<FDS_ItemSlotInfo>((FDS_SlotInfo *)&this->_padding_),
     pFVar3 != (FDS_ItemSlotInfo *)0x0)) {
    if (((this->QuickSlotData).Object == (FDS_QuickSlotData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(int *)&pFVar3->_padding_ = ((this->QuickSlotData).Object)->DeckNumber;
    if (((this->QuickSlotData).Object == (FDS_QuickSlotData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(int *)((longlong)&pFVar3->_padding_ + 4) = ((this->QuickSlotData).Object)->SlotNumber;
  }
  return;
}

