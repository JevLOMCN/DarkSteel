// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b6a0160

UClass * __cdecl UDS_VM_MountEquipItemList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MountEquipItemList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MountEquipItemList",
               &Z_Registration_Info_UClass_UDS_VM_MountEquipItemList.InnerSingleton,
               StaticRegisterNativesUDS_VM_MountEquipItemList,0x100,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_MountEquipItemList>,
               InternalVTableHelperCtorCaller<UDS_VM_MountEquipItemList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MountEquipItemList.InnerSingleton;
}

// UDS_VM_MountEquipItemList @ 14b6a5730

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_MountEquipItemList * __thiscall
UDS_VM_MountEquipItemList::UDS_VM_MountEquipItemList
          (UDS_VM_MountEquipItemList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MountEquipItemList__6B_;
  (this->VM_MountGearTypeA).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->VM_MountGearTypeB).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->VM_MountGearTypeC).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->Model_VM_MountGearTypeA).field0_0x0.DebugPtr = (UDS_M_ItemImplBase *)0x0;
  (this->Model_VM_MountGearTypeB).field0_0x0.DebugPtr = (UDS_M_ItemImplBase *)0x0;
  (this->Model_VM_MountGearTypeC).field0_0x0.DebugPtr = (UDS_M_ItemImplBase *)0x0;
  this->PlayerEntityID = 0;
  this->MountUID = 0;
  this->NpcEntityID = 0;
  *(undefined8 *)&this->OnUpdateEquipItemModel = 0;
  *(undefined8 *)&(this->OnUpdateEquipItemModel).field_0x8 = 0;
  *(undefined4 *)&(this->OnUpdateEquipItemModel).field_0x10 = 0;
  return this;
}

// UDS_VM_MountEquipItemList @ 14b6a57d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_MountEquipItemList * __thiscall
UDS_VM_MountEquipItemList::UDS_VM_MountEquipItemList
          (UDS_VM_MountEquipItemList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MountEquipItemList__6B_;
  (this->VM_MountGearTypeA).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->VM_MountGearTypeB).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->VM_MountGearTypeC).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->Model_VM_MountGearTypeA).field0_0x0.DebugPtr = (UDS_M_ItemImplBase *)0x0;
  (this->Model_VM_MountGearTypeB).field0_0x0.DebugPtr = (UDS_M_ItemImplBase *)0x0;
  (this->Model_VM_MountGearTypeC).field0_0x0.DebugPtr = (UDS_M_ItemImplBase *)0x0;
  this->PlayerEntityID = 0;
  this->MountUID = 0;
  this->NpcEntityID = 0;
  *(undefined8 *)&this->OnUpdateEquipItemModel = 0;
  *(undefined8 *)&(this->OnUpdateEquipItemModel).field_0x8 = 0;
  *(undefined4 *)&(this->OnUpdateEquipItemModel).field_0x10 = 0;
  return this;
}

// ~UDS_VM_MountEquipItemList @ 14b6a7380

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_MountEquipItemList::~UDS_VM_MountEquipItemList(UDS_VM_MountEquipItemList *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MountEquipItemList__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUpdateEquipItemModel);
  pvVar1 = *(void **)&(this->OnUpdateEquipItemModel).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateEquipItemModel);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6a9940

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_MountEquipItemList::GetFieldNotificationDescriptor(UDS_VM_MountEquipItemList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_MountEquipItemList::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6aa400

UClass * __cdecl UDS_VM_MountEquipItemList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MountEquipItemList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MountEquipItemList",
               &Z_Registration_Info_UClass_UDS_VM_MountEquipItemList.InnerSingleton,
               StaticRegisterNativesUDS_VM_MountEquipItemList,0x100,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_MountEquipItemList>,
               InternalVTableHelperCtorCaller<UDS_VM_MountEquipItemList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MountEquipItemList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_MountEquipItemList @ 14b6aad10

void __cdecl UDS_VM_MountEquipItemList::StaticRegisterNativesUDS_VM_MountEquipItemList(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_MountEquipItemList_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedMountEquip @ 14b6ac010

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_MountEquipItemList::execOnChangedMountEquip(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnChangedMountEquip((UDS_VM_MountEquipItemList *)param_1,local_res10);
  return;
}

// operator() @ 14be0f660

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UDS_VM_MountEquipItemList::UpdateByMountList'::__l2::<lambda_1>::operator()
          (void *this,TObjectPtr<UDS_VM_Item> *param_1,TObjectPtr<UDS_M_ItemImplBase> *param_2,
          int param_3)

{
  longlong lVar1;
  UDS_M_ItemImplBase *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TObjectPtr<UDS_M_ItemImplBase> TVar7;
  undefined8 *puVar8;
  UClass *pUVar9;
  ulonglong uVar10;
  TSharedPtr<FDS_ViewModelContext,1> *pTVar11;
  TObjectPtr<UDS_VM_Item>_u_0 TVar12;
  TObjectPtr<UDS_VM_Item>_u_0 local_res8;
  FWeakObjectPtr local_res10;
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  TReferenceControllerBase<1> *local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  if ((param_3 < 0) || (lVar1 = *(longlong *)this, *(int *)(lVar1 + 0x38) <= param_3)) {
    uVar10 = 0;
  }
  else {
    uVar6 = 0;
    if (param_3 < *(int *)(lVar1 + 0x38)) {
      uVar6 = (uint)~param_3 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar10 = (ulonglong)*(uint *)(*(longlong *)(lVar1 + 0x30) + (longlong)param_3 * 4);
  }
  if ((param_1->field0_0x0).DebugPtr == (UDS_VM_Item *)0x0) {
    TVar7 = DS_ItemDataUtil::CreateItemModel
                      ((EDS_ItemSlotStateType)local_50,(int)CONCAT71((int7)(uVar10 >> 8),0x2f));
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)TVar7.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)TVar7.field0_0x0);
    }
    pUVar2 = *(UDS_M_ItemImplBase **)TVar7.field0_0x0;
    (param_2->field0_0x0).DebugPtr = pUVar2;
    if (pUVar2 != (UDS_M_ItemImplBase *)0x0) {
      UDS_ModelBase::AddUpdateModelDelegate
                ((UDS_ModelBase *)pUVar2,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)(*(longlong *)((longlong)this + 8) + 0xe8));
      puVar8 = (undefined8 *)
               (**(code **)(((param_2->field0_0x0).DebugPtr)->_padding_ + 0x310))
                         ((param_2->field0_0x0).DebugPtr,local_38);
      pTVar3 = (TReferenceControllerBase<1> *)puVar8[1];
      local_48 = *puVar8;
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        pTVar11 = *(TSharedPtr<FDS_ViewModelContext,1> **)((longlong)this + 8);
      }
      else {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        pTVar11 = *(TSharedPtr<FDS_ViewModelContext,1> **)((longlong)this + 8);
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_40 = pTVar3;
      DS_ViewModelTemplateUtil::CreateViewModel((UObject *)&local_res8.ObjectPtr,pTVar11);
      TVar12.DebugPtr = (UDS_VM_Item *)0x0;
      if (local_res8.DebugPtr != (UDS_VM_Item *)0x0) {
        pUVar9 = Z_Construct_UClass_UDS_VM_Item_NoRegister();
        bVar5 = FObjectPtr::IsA(&local_res8.ObjectPtr,pUVar9);
        if (bVar5) {
          TVar12 = local_res8;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar12.DebugPtr != (UDS_VM_Item *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar12.DebugPtr);
      }
      (param_1->field0_0x0).DebugPtr = (UDS_VM_Item *)TVar12;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    }
  }
  else {
    pUVar2 = (param_2->field0_0x0).DebugPtr;
    if (pUVar2 != (UDS_M_ItemImplBase *)0x0) {
      (**(code **)(pUVar2->_padding_ + 0x348))(pUVar2,uVar10);
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      local_58 = 0;
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      pcVar4 = *(code **)(pUVar2->_padding_ + 0x2e0);
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_58);
      (*pcVar4)(pUVar2,local_res10,0);
    }
  }
  return;
}

// BindModel @ 14be124c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_MountEquipItemList::BindModel(UDS_VM_MountEquipItemList *this)

{
  FDS_EventDelegate<__int64_const_> *this_00;
  UDS_MountEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_MountEvent::GetEvent();
  if (pUVar1 != (UDS_MountEvent *)0x0) {
    this_00 = &pUVar1->MountDataSlotSelectedChangeDel;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_MountEquipItemList>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               this_00,(UDS_VM_MountEquipItemList *)&stack0x00000010,(pmf_b9529854 *)this);
  }
  return;
}

// OnChangeSelectedMount @ 14be29430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_VM_MountEquipItemList::OnChangeSelectedMount(UDS_VM_MountEquipItemList *this,long64 param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_LogManager *pUVar5;
  char *pcVar6;
  UObject *this_00;
  UFunction *pUVar7;
  char *pcVar8;
  undefined1 auStackY_238 [32];
  <lambda_1> local_1f8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1f0;
  FWeakObjectPtr local_1e8;
  FName local_1e0;
  FWeakObjectPtr local_1d8;
  FWeakObjectPtr local_1d0;
  FName local_1c8;
  FName local_1c0;
  UDS_VM_MountEquipItemList *local_1b8;
  FName *local_1b0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_1a8;
  FDestructionSentinel local_198;
  FReadAccessScope local_180;
  FReadAccessScope local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_238;
  if (param_1 < 1) {
LAB_14be2957c:
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    return;
  }
  lVar1 = this->MountUID;
  if (lVar1 == param_1) {
    return;
  }
  if (0 < lVar1) {
    UDS_MountData::GetData((ulong64)&local_1d0,this->PlayerEntityID,SUB81(lVar1,0));
    bVar3 = FWeakObjectPtr::IsValid(&local_1d0);
    if (bVar3) {
      pUVar4 = FWeakObjectPtr::Get(&local_1d0);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),
                 (UObject *)this);
    }
  }
  this->MountUID = param_1;
  UDS_MountData::GetData((ulong64)&local_1d8,this->PlayerEntityID,SUB81(param_1,0));
  bVar3 = FWeakObjectPtr::IsValid(&local_1d8);
  if (!bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_MountEquipItemList::OnChangeSelectedMount",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_148.Ptr,0x58,
                 L"mountData is Invalid. PlayerEntityID : %llu, MountUID : %lld");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    goto LAB_14be2957c;
  }
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
  pUVar4 = FWeakObjectPtr::Get(&local_1d8);
  UpdateByMountList(this,(FDS_MountList *)&pUVar4[2].field_0x8);
  pUVar4 = FWeakObjectPtr::Get(&local_1d8);
  pcVar6 = strstr("&UDS_VM_MountEquipItemList::OnChangedMountEquip","::");
  if (pcVar6 == (char *)0x0) {
LAB_14be2962b:
    pcVar8 = &DAT_00000002;
LAB_14be29630:
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
      pcVar8 = pcVar6;
      pcVar6 = strstr(pcVar8 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if (pcVar8 == (char *)0x0) goto LAB_14be2962b;
    pcVar8 = pcVar8 + 2;
    if (*pcVar8 == '0') goto LAB_14be29630;
  }
  ::FName::FName(&local_1c0,pcVar8);
  local_1f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_1b8 = this;
  if (this == (UDS_VM_MountEquipItemList *)0x0) {
    local_1b8 = (UDS_VM_MountEquipItemList *)0x0;
  }
  local_1e8.ObjectIndex = 0;
  local_1e8.ObjectSerialNumber = 0;
  local_1e0.ComparisonIndex.Value = 0;
  local_1e0.Number = 0;
  local_1c8 = local_1c0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_1b8 != (UDS_VM_MountEquipItemList *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1b8);
  }
  FWeakObjectPtr::operator=(&local_1e8,(FObjectPtr)&local_1b8);
  local_1e0 = local_1c8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_1f0,&local_180);
  if ((local_1e0 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_1e8), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_180);
  }
  else {
    pUVar7 = UObject::FindFunction(this_00,local_1e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_180);
    if (pUVar7 != (UFunction *)0x0) goto LAB_14be29726;
  }
  local_1b0 = &local_1c8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_VM_MountEquipItemList>'::__l2::<lambda_1>::operator()(&local_1b0);
LAB_14be29726:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_1f0,&local_168);
  local_1a8.Object = local_1e8;
  local_1a8.FunctionName = local_1e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_168);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),
             (FWriteAccessScope *)&local_198);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar4[1].field_0x8,local_1f8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),&local_1a8);
  if (local_198.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1f0.AccessDetector);
  return;
}

// OnChangedMountEquip @ 14be2a3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_MountEquipItemList::OnChangedMountEquip
          (UDS_VM_MountEquipItemList *this,UDS_DataBase *param_1)

{
  int iVar1;
  ulong64 uVar2;
  bool bVar3;
  UClass *pUVar4;
  UDS_LogManager *pUVar5;
  UDS_DataBase *this_00;
  ulong64 uVar6;
  UObject *pUVar7;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  UDS_DataBase *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1 != (UDS_DataBase *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_MountData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_14be2a447;
  }
  param_1 = (UDS_DataBase *)0x0;
LAB_14be2a447:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_DataBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  local_140 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_DataBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
  bVar3 = FWeakObjectPtr::IsValid(&local_148);
  if (bVar3) {
    this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_148);
    uVar2 = this->MountUID;
    uVar6 = UDS_DataBase::GetUniqueKey(this_00);
    if (uVar6 != uVar2) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_MountEquipItemList::OnChangedMountEquip",0x2e,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x73,L"MountUID is Different.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    pUVar7 = FWeakObjectPtr::Get(&local_148);
    UpdateByMountList(this,(FDS_MountList *)&pUVar7[2].field_0x8);
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_MountEquipItemList::OnChangedMountEquip",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x6d,L"mountData is Invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnSetViewModel @ 14be3a7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_MountEquipItemList::OnSetViewModel
          (UDS_VM_MountEquipItemList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  undefined1 auStackY_1e8 [32];
  TSharedPtr<FDS_ViewModelContext_MountEquipItemSlotList,1> local_1b8;
  UDS_VM_MountEquipItemList *local_1a8 [2];
  code *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  FDestructionSentinel local_178;
  undefined1 *local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_188.Object = param_1->Object;
  local_188.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_MountEquipItemSlotList>(&local_1b8,&local_188);
  if (local_1b8.Object == (FDS_ViewModelContext_MountEquipItemSlotList *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = (longlong)local_1b8.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_MountEquipItemList::OnSetViewModel",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_158.Ptr,0x16,
                 L"FDS_ViewModelContext_MountEquipItemSlotList is Invalid.");
      if ((FDS_ViewModelContext_MountEquipItemSlotList *)local_158._padding_ !=
          (FDS_ViewModelContext_MountEquipItemSlotList *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    uStack_190 = 0;
    local_198 = OnUpdateModel;
    uStack_18c = local_188.SharedReferenceCount.ReferenceController._4_4_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUpdateEquipItemModel,(FWriteAccessScope *)&local_178);
    local_160 = &(this->OnUpdateEquipItemModel).field_0x8;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_160);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_MountEquipItemList____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_MountEquipItemList *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar5[3] = 0;
      local_1a8[0] = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_MountEquipItemList *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)local_1a8);
      puVar5[4] = local_198;
      puVar5[5] = CONCAT44(uStack_18c,uStack_190);
    }
    if (local_178.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
    }
    if (local_1b8.Object == (FDS_ViewModelContext_MountEquipItemSlotList *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->PlayerEntityID = (local_1b8.Object)->PlayerEntityID;
    this->NpcEntityID = (local_1b8.Object)->NpcEntityID;
    OnChangeSelectedMount(this,(local_1b8.Object)->MountUID);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateModel @ 14be44a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_MountEquipItemList::OnUpdateModel
          (UDS_VM_MountEquipItemList *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1
          )

{
  int iVar1;
  UDS_M_ItemImplBase *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UDS_M_ItemImplBase *pUVar9;
  UDS_MountEvent *pUVar10;
  UObject *pUVar11;
  undefined8 *puVar12;
  undefined8 **ppuVar13;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_2d8 [32];
  FWeakObjectPtr local_2a8;
  FWeakObjectPtr local_2a0;
  undefined8 *local_298;
  FSharedReferencer<1> FStack_290;
  UObject *local_288 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_res10 = param_1.WeakPtr;
  bVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar5) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"UDS_VM_MountEquipItemList::OnUpdateModel",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_278.Ptr,0xa0,L"ModelEvent is Invalid.");
    if ((void *)local_278._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_278._padding_);
    return;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_res10);
  pUVar11 = (UObject *)0x0;
  if (pUVar7 == (UObject *)0x0) {
LAB_14be44b47:
    pUVar7 = pUVar11;
  }
  else {
    pUVar8 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar8->_padding_)) goto LAB_14be44b47;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_2a8.ObjectIndex = 0;
  local_2a8.ObjectSerialNumber = 0;
  local_288[0] = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&local_2a8,(FObjectPtr)local_288);
  bVar5 = FWeakObjectPtr::IsValid(&local_2a8);
  if (!bVar5) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_MountEquipItemList::OnUpdateModel",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0xa7,L"ModelEventItemBase is Invalid.");
    if ((void *)local_158._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_158._padding_);
    return;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_2a8);
  if (*(int *)&pUVar7[5].field_0x8 != 3) {
    if (*(int *)&pUVar7[5].field_0x8 != 6) {
      return;
    }
    pUVar7 = FWeakObjectPtr::Get(&local_2a8);
    pUVar9 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar7 + 1));
    pUVar2 = (this->Model_VM_MountGearTypeA).field0_0x0.DebugPtr;
    if (pUVar2 == (UDS_M_ItemImplBase *)0x0) {
      bVar5 = pUVar9 == (UDS_M_ItemImplBase *)0x0;
    }
    else {
      bVar5 = pUVar2 == pUVar9;
    }
    if (bVar5) {
      pUVar10 = UDS_MountEvent::GetEvent();
      if (pUVar10 == (UDS_MountEvent *)0x0) {
        return;
      }
      FDS_EventDelegate<enum_EDS_EquipSlotType_const_>::Broadcast
                (&pUVar10->OnEquipSlotSelectDelegate,MountGearTypeA);
      return;
    }
    pUVar7 = FWeakObjectPtr::Get(&local_2a8);
    pUVar9 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar7 + 1));
    pUVar2 = (this->Model_VM_MountGearTypeB).field0_0x0.DebugPtr;
    if (pUVar2 == (UDS_M_ItemImplBase *)0x0) {
      bVar5 = pUVar9 == (UDS_M_ItemImplBase *)0x0;
    }
    else {
      bVar5 = pUVar2 == pUVar9;
    }
    if (bVar5) {
      pUVar10 = UDS_MountEvent::GetEvent();
      if (pUVar10 == (UDS_MountEvent *)0x0) {
        return;
      }
      FDS_EventDelegate<enum_EDS_EquipSlotType_const_>::Broadcast
                (&pUVar10->OnEquipSlotSelectDelegate,MountGearTypeB);
      return;
    }
    pUVar7 = FWeakObjectPtr::Get(&local_2a8);
    pUVar9 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar7 + 1));
    pUVar2 = (this->Model_VM_MountGearTypeC).field0_0x0.DebugPtr;
    if (pUVar2 == (UDS_M_ItemImplBase *)0x0) {
      bVar5 = pUVar9 == (UDS_M_ItemImplBase *)0x0;
    }
    else {
      bVar5 = pUVar2 == pUVar9;
    }
    if (!bVar5) {
      return;
    }
    pUVar10 = UDS_MountEvent::GetEvent();
    if (pUVar10 == (UDS_MountEvent *)0x0) {
      return;
    }
    FDS_EventDelegate<enum_EDS_EquipSlotType_const_>::Broadcast
              (&pUVar10->OnEquipSlotSelectDelegate,MountGearTypeC);
    return;
  }
  if (this->NpcEntityID == 0) {
    return;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_2a8);
  if (*(longlong *)(pUVar7 + 0xc) == 0) {
    return;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_2a8);
  if ((*(longlong *)(pUVar7 + 0xc) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)(pUVar7 + 0xc);
  if (*(longlong *)(lVar3 + 8) == 0) {
    return;
  }
  pUVar8 = Z_Construct_UClass_UDS_W_DragDropOperation_NoRegister();
  bVar5 = FObjectPtr::IsA((FObjectPtr *)(lVar3 + 8),pUVar8);
  if (!bVar5) {
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 8);
  if (lVar3 == 0) {
    return;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
    return;
  }
  ppuVar13 = (undefined8 **)(lVar3 + 0xa8);
  if (*ppuVar13 == (undefined8 *)0x0) {
    FStack_290.ReferenceController = ::operator_new(0x48);
    if ((UObject *)FStack_290.ReferenceController == (UObject *)0x0) {
      local_298 = ___xmm_00000000000000000000000000000010;
      puVar12 = (undefined8 *)&DAT_00000010;
      FStack_290.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
    }
    else {
      *(undefined4 *)&((UObject *)FStack_290.ReferenceController)->field_0x8 = 1;
      puVar12 = (undefined8 *)&((UObject *)FStack_290.ReferenceController)->field_0x10;
      *(undefined4 *)&((UObject *)FStack_290.ReferenceController)->field_0xc = 1;
      *(undefined ***)FStack_290.ReferenceController =
           &___7__TIntrusiveReferenceController_UFDS_ItemSlotInfo___00_SharedPointerInternals__6B_;
      *(undefined ***)&((UObject *)FStack_290.ReferenceController)->field_0x10 =
           &___7FDS_ItemSlotInfo__6B_;
      *(undefined8 *)&((UObject *)FStack_290.ReferenceController)->field_0x1c = 0;
      *(undefined8 *)&((UObject *)FStack_290.ReferenceController)->field_0x24 = 0;
      ((UObject *)((longlong)FStack_290.ReferenceController + 0x28))->field_0x9 = 0;
      *(undefined4 *)&((UObject *)((longlong)FStack_290.ReferenceController + 0x28))->field_0xc = 0;
      *(undefined8 *)&((UObject *)((longlong)FStack_290.ReferenceController + 0x28))->field_0x10 = 0
      ;
      *(undefined8 *)&((UObject *)((longlong)FStack_290.ReferenceController + 0x28))->field_0x18 = 0
      ;
      if ((puVar12 == (undefined8 *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      LOCK();
      *(int *)&((UObject *)FStack_290.ReferenceController)->field_0x8 =
           *(int *)&((UObject *)FStack_290.ReferenceController)->field_0x8 + 1;
      UNLOCK();
      pUVar11 = (UObject *)FStack_290.ReferenceController;
      local_298 = puVar12;
    }
    if (ppuVar13 != &local_298) {
      *ppuVar13 = puVar12;
      local_298 = (undefined8 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(lVar3 + 0xb0),&FStack_290);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_290.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar11);
  }
  if (*ppuVar13 == (undefined8 *)0x0) {
    return;
  }
  if ((longlong)(*ppuVar13)[5] < 1) {
    return;
  }
  DS_ItemDataUtil::GetItemDataByUID((long64)&local_2a0);
  bVar5 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_2a0,(void *)0x0);
  if (bVar5) {
    return;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_2a0);
  if (*(int *)&pUVar7[0x13].field_0x20 == 0x259) {
    pUVar7 = FWeakObjectPtr::Get(&local_2a8);
    pUVar9 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar7 + 1));
    pUVar2 = (this->Model_VM_MountGearTypeA).field0_0x0.DebugPtr;
    if (pUVar2 == (UDS_M_ItemImplBase *)0x0) {
      bVar5 = pUVar9 == (UDS_M_ItemImplBase *)0x0;
    }
    else {
      bVar5 = pUVar2 == pUVar9;
    }
    if (bVar5) goto LAB_14be45013;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_2a0);
  if (*(int *)&pUVar7[0x13].field_0x20 == 0x25a) {
    pUVar7 = FWeakObjectPtr::Get(&local_2a8);
    pUVar9 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar7 + 1));
    pUVar2 = (this->Model_VM_MountGearTypeB).field0_0x0.DebugPtr;
    if (pUVar2 == (UDS_M_ItemImplBase *)0x0) {
      bVar5 = pUVar9 == (UDS_M_ItemImplBase *)0x0;
    }
    else {
      bVar5 = pUVar2 == pUVar9;
    }
    if (bVar5) goto LAB_14be45013;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_2a0);
  if (*(int *)&pUVar7[0x13].field_0x20 != 0x25b) {
    return;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_2a8);
  pUVar9 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar7 + 1));
  pUVar2 = (this->Model_VM_MountGearTypeC).field0_0x0.DebugPtr;
  if (pUVar2 == (UDS_M_ItemImplBase *)0x0) {
    bVar5 = pUVar9 == (UDS_M_ItemImplBase *)0x0;
  }
  else {
    bVar5 = pUVar2 == pUVar9;
  }
  if (!bVar5) {
    return;
  }
LAB_14be45013:
  FDS_MountService::TryEquipItemToMount
            (this->MountUID,this->NpcEntityID,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_2a0
            );
  return;
}

// UnbindModel @ 14be55680

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_MountEquipItemList::UnbindModel(UDS_VM_MountEquipItemList *this)

{
  bool bVar1;
  UDS_MountEvent *pUVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8 [4];
  
  pUVar2 = UDS_MountEvent::GetEvent();
  if (pUVar2 != (UDS_MountEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->MountDataSlotSelectedChangeDel,this);
  }
  UDS_MountData::GetData((ulong64)local_res8,this->PlayerEntityID,SUB81(this->MountUID,0));
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(local_res8);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),(UObject *)this)
    ;
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

// UpdateByMountList @ 14be56750

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_MountEquipItemList::UpdateByMountList(UDS_VM_MountEquipItemList *this,FDS_MountList *param_1)

{
  longlong *plVar1;
  FName local_18;
  UDS_VM_MountEquipItemList *local_10;
  
  local_18 = (FName)param_1;
  local_10 = this;
  `UDS_VM_MountEquipItemList::UpdateByMountList'::__l2::<lambda_1>::operator()
            (&local_18,&this->VM_MountGearTypeA,&this->Model_VM_MountGearTypeA,0);
  `UDS_VM_MountEquipItemList::UpdateByMountList'::__l2::<lambda_1>::operator()
            (&local_18,&this->VM_MountGearTypeB,&this->Model_VM_MountGearTypeB,1);
  `UDS_VM_MountEquipItemList::UpdateByMountList'::__l2::<lambda_1>::operator()
            (&local_18,&this->VM_MountGearTypeC,&this->Model_VM_MountGearTypeC,2);
  plVar1 = &this->_padding_;
  local_10._0_4_ = FFieldNotificationClassDescriptor::VM_MountGearTypeA.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VM_MountGearTypeA.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10._0_4_ = FFieldNotificationClassDescriptor::VM_MountGearTypeB.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VM_MountGearTypeB.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = (UDS_VM_MountEquipItemList *)
             CONCAT44(local_10._4_4_,FFieldNotificationClassDescriptor::VM_MountGearTypeC.BitNumber)
  ;
  local_18 = FFieldNotificationClassDescriptor::VM_MountGearTypeC.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

