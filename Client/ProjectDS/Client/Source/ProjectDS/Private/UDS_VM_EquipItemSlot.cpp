// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b642420

UClass * __cdecl UDS_VM_EquipItemSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_EquipItemSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_EquipItemSlot",
               &Z_Registration_Info_UClass_UDS_VM_EquipItemSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_EquipItemSlot,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_EquipItemSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_EquipItemSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_EquipItemSlot.InnerSingleton;
}

// UDS_VM_EquipItemSlot @ 14b647f60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_EquipItemSlot * __thiscall
UDS_VM_EquipItemSlot::UDS_VM_EquipItemSlot(UDS_VM_EquipItemSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_EquipItemSlot__6B_;
  (this->VM_EquipItem).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->EquipItemSlotModel).field0_0x0.DebugPtr = (UDS_M_ItemImplEquipSlot *)0x0;
  *(undefined8 *)&this->OnUpdateEquipItemModel = 0;
  *(undefined8 *)&(this->OnUpdateEquipItemModel).field_0x8 = 0;
  *(undefined4 *)&(this->OnUpdateEquipItemModel).field_0x10 = 0;
  this->CharEntityID = 0;
  this->EquipSlotType = None;
  return this;
}

// UDS_VM_EquipItemSlot @ 14b647fd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_EquipItemSlot * __thiscall
UDS_VM_EquipItemSlot::UDS_VM_EquipItemSlot(UDS_VM_EquipItemSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_EquipItemSlot__6B_;
  (this->VM_EquipItem).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->EquipItemSlotModel).field0_0x0.DebugPtr = (UDS_M_ItemImplEquipSlot *)0x0;
  *(undefined8 *)&this->OnUpdateEquipItemModel = 0;
  *(undefined8 *)&(this->OnUpdateEquipItemModel).field_0x8 = 0;
  *(undefined4 *)&(this->OnUpdateEquipItemModel).field_0x10 = 0;
  this->CharEntityID = 0;
  this->EquipSlotType = None;
  return this;
}

// ~UDS_VM_EquipItemSlot @ 14b649480

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_EquipItemSlot::~UDS_VM_EquipItemSlot(UDS_VM_EquipItemSlot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_EquipItemSlot__6B_;
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

// GetFieldNotificationDescriptor @ 14b64b010

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_EquipItemSlot::GetFieldNotificationDescriptor(UDS_VM_EquipItemSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_EquipItemSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b64b810

UClass * __cdecl UDS_VM_EquipItemSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_EquipItemSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_EquipItemSlot",
               &Z_Registration_Info_UClass_UDS_VM_EquipItemSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_EquipItemSlot,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_EquipItemSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_EquipItemSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_EquipItemSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_EquipItemSlot @ 14b64bf00

void __cdecl UDS_VM_EquipItemSlot::StaticRegisterNativesUDS_VM_EquipItemSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_EquipItemSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBaseIconID @ 14b64d020

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_EquipItemSlot::execBaseIconID(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = BaseIconID((UDS_VM_EquipItemSlot *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execIsShowBaseIcon @ 14b64d260

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_EquipItemSlot::execIsShowBaseIcon(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsShowBaseIcon((UDS_VM_EquipItemSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// BaseIconID @ 14bdaee10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_EquipItemSlot::BaseIconID(UDS_VM_EquipItemSlot *this)

{
  FDS_SlotBaseTableRow *pFVar1;
  
  if (this->EquipSlotType != None) {
    pFVar1 = FDS_SlotBaseTableRow::Get((longlong)(int)this->EquipSlotType,true);
    if (pFVar1 != (FDS_SlotBaseTableRow *)0x0) {
      return pFVar1->ID_SlotIcon;
    }
  }
  return 0;
}

// BindModel @ 14bdb1aa0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_EquipItemSlot::BindModel(UDS_VM_EquipItemSlot *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_ItemDataSet *this_00;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_01;
  FWeakObjectPtr local_res8 [2];
  TSharedPtr<FDS_EquipmentItemCharacterData,1> local_28;
  code *local_18;
  ulonglong uStack_10;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)local_res8);
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    this_00 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(local_res8);
    UDS_ItemDataSet::GetEquipmentItemCharacterData(this_00,&local_28);
    if (local_28.Object != (FDS_EquipmentItemCharacterData *)0x0) {
      if ((local_28.Object == (FDS_EquipmentItemCharacterData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_18 = OnChangedEquipItem;
      uStack_10 = uStack_10 & 0xffffffff00000000;
      this_01 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                TMapBase<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>,0>_>
                ::FindOrAddImpl<enum_EDS_EquipSlotType_const_&>
                          (&((local_28.Object)->OnChangedEquipDelegate).Subscriptions,
                           this->EquipSlotType,&this->EquipSlotType);
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_01,this);
      TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::
      AddUObject<UDS_VM_EquipItemSlot>
                ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
                  *)this_01,(UDS_VM_EquipItemSlot *)(local_res8 + 1),(pmf_70dcb237 *)this);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// IsShowBaseIcon @ 14bdc9560

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_EquipItemSlot::IsShowBaseIcon(UDS_VM_EquipItemSlot *this)

{
  if (this->EquipSlotType != None) {
    return this->EquipSlotType != Max;
  }
  return false;
}

// OnChangedEquipItem @ 14bdca6d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_EquipItemSlot::OnChangedEquipItem(UDS_VM_EquipItemSlot *this,long64 param_1)

{
  UDS_M_ItemImplEquipSlot *this_00;
  bool bVar1;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  
  if ((this->EquipItemSlotModel).field0_0x0.DebugPtr != (UDS_M_ItemImplEquipSlot *)0x0) {
    UDS_ItemData::GetData((ulong64)&local_res18,this->CharEntityID,SUB81(param_1,0));
    bVar1 = FWeakObjectPtr::IsValid(&local_res18);
    this_00 = (this->EquipItemSlotModel).field0_0x0.DebugPtr;
    if (!bVar1) {
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res20 = 0;
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      local_res18 = local_res8;
    }
    UDS_M_ItemImplBase::SetItemData
              ((UDS_M_ItemImplBase *)this_00,
               (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res18);
    UDS_VM_Item::Update((this->VM_EquipItem).field0_0x0.DebugPtr,All);
  }
  return;
}

// OnSetViewModel @ 14bddbbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_EquipItemSlot::OnSetViewModel
          (UDS_VM_EquipItemSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_EquipItemSlot,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_EquipItemSlot>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_EquipItemSlot *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_EquipItemSlot::OnSetViewModel",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x20,L"context is Invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_158.Object == (FDS_ViewModelContext_EquipItemSlot *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->CharEntityID = (local_158.Object)->CharEntityID;
    this->EquipSlotType = (local_158.Object)->EquipSlotType;
    SetEquipSlot(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateModel @ 14bddfee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_EquipItemSlot::OnUpdateModel
          (UDS_VM_EquipItemSlot *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  EDS_EquipSlotType EVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  UDS_CharacterUIEvent *pUVar10;
  UDS_EventManager *this_00;
  UDS_PlayerSkillEvent *pUVar11;
  FDS_DragDropEventField *pFVar12;
  UDS_W_DragDropOperation *pUVar13;
  FDS_ItemSlotInfo *pFVar14;
  UDS_M_ItemImplBase *this_01;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  UObject *pUVar17;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_678 [32];
  undefined1 local_648 [8];
  FWeakObjectPtr local_640;
  FWeakObjectPtr local_638;
  FWeakObjectPtr local_630;
  EDS_ItemType local_628;
  EDS_ItemType local_624;
  FWeakObjectPtr local_620;
  FWeakObjectPtr local_618;
  FWeakObjectPtr local_610;
  FWeakObjectPtr local_608;
  TArray<FDS_PlayerSkillBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_600;
  UObject *local_5f0;
  UObject *local_5e8;
  UObject *local_5e0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_678;
  local_res10 = param_1.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar4) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_5d8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_5d8,"UDS_VM_EquipItemSlot::OnUpdateModel",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_5d8.Ptr,0x69,L"ModelEvent is Invalid.");
    if ((void *)local_5d8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_5d8._padding_);
    return;
  }
  pUVar8 = FWeakObjectPtr::Get(&local_res10);
  pUVar17 = (UObject *)0x0;
  if (pUVar8 == (UObject *)0x0) {
LAB_14bddffdc:
    pUVar8 = pUVar17;
  }
  else {
    pUVar9 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    iVar6 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar6) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar9->_padding_)) goto LAB_14bddffdc;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  local_640.ObjectIndex = 0;
  local_640.ObjectSerialNumber = 0;
  local_5f0 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  FWeakObjectPtr::operator=(&local_640,(FObjectPtr)&local_5f0);
  bVar4 = FWeakObjectPtr::IsValid(&local_640);
  if (!bVar4) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_4b8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_4b8,"UDS_VM_EquipItemSlot::OnUpdateModel",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_4b8.Ptr,0x70,L"ModelEventItemBase is Invalid.");
    if ((void *)local_4b8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_4b8._padding_);
    return;
  }
  pUVar8 = FWeakObjectPtr::Get(&local_640);
  iVar6 = *(int *)&pUVar8[5].field_0x8;
  if (iVar6 != 2) {
    if (iVar6 == 3) {
      pUVar8 = FWeakObjectPtr::Get(&local_640);
      if (*(longlong *)(pUVar8 + 0xc) == 0) {
        return;
      }
      pUVar8 = FWeakObjectPtr::Get(&local_640);
      pFVar12 = TSharedPtr<FDS_DragDropEventField,1>::operator->
                          ((TSharedPtr<FDS_DragDropEventField,1> *)(pUVar8 + 0xc));
      pUVar13 = Cast<UDS_W_DragDropOperation,UDragDropOperation>(&pFVar12->DragDropOperation);
      if (pUVar13 == (UDS_W_DragDropOperation *)0x0) {
        return;
      }
      if (((uint)pUVar13->_padding_ >> 0x1e & 1) != 0) {
        return;
      }
      pFVar14 = FDS_SlotInfo::GetSlotInfo<FDS_ItemSlotInfo>(&pUVar13->SlotInfo);
      if (pFVar14 == (FDS_ItemSlotInfo *)0x0) {
        return;
      }
      if (pFVar14->SlotType == Character) {
        if (pFVar14->ItemUID < 1) {
          return;
        }
        DS_ItemDataUtil::GetItemDataByUID((long64)&local_618);
        bVar4 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_618,(void *)0x0);
        if (bVar4) {
          return;
        }
        pUVar8 = FWeakObjectPtr::Get(&local_618);
        local_624 = *(EDS_ItemType *)&pUVar8[0x13].field_0x20;
        EVar5 = FDS_EquipmentItemCharacterData::GetEquipSlotTypeByItemType(&local_624);
        if (this->EquipSlotType != EVar5) {
          return;
        }
        UDS_CharInfoData::GetData((ulong64)&local_608);
        bVar4 = FWeakObjectPtr::IsValid(&local_608);
        if (!bVar4) {
          return;
        }
        EVar5 = this->EquipSlotType;
        pUVar8 = FWeakObjectPtr::Get(&local_608);
        FDS_CharacterService::TryEquipItemToCharacter
                  (*(int *)&pUVar8[8].field_0x8,EVar5,
                   (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_618);
        return;
      }
      if (pFVar14->SlotType != PlayerSkillToolList) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar7 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_VM_EquipItemSlot::OnUpdateModel",0x23,Yes);
        UDS_LogManager::PrintLog(pUVar7,1,Warning,local_278.Ptr,0xcb,L"ItemSlotType is Invalid.");
        if ((void *)local_278._padding_ == (void *)0x0) {
          return;
        }
        FMemory::Free((void *)local_278._padding_);
        return;
      }
      if (pFVar14->ItemUID < 1) {
        return;
      }
      DS_ItemDataUtil::GetItemDataByUID((long64)&local_620);
      bVar4 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_620,(void *)0x0);
      if (bVar4) {
        return;
      }
      pUVar8 = FWeakObjectPtr::Get(&local_620);
      local_628 = *(EDS_ItemType *)&pUVar8[0x13].field_0x20;
      EVar5 = FDS_EquipmentItemCharacterData::GetEquipSlotTypeByItemType(&local_628);
      if (this->EquipSlotType != EVar5) {
        return;
      }
      FDS_PlayerSkillBaseTableRow::GetAll(&local_600);
      iVar6 = local_600.ArrayNum;
      uVar15 = (ulonglong)local_600.ArrayNum;
      pFVar1 = local_600.AllocatorInstance.Data + uVar15 * 8;
      FVar16.Data = local_600.AllocatorInstance.Data;
      while( true ) {
        if ((uint)uVar15 != iVar6) {
          `TCheckedPointerIterator<FDS_PlayerSkillBaseTableRow_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_648);
          uVar15 = (ulonglong)(uint)local_600.ArrayNum;
        }
        if (FVar16.Data == pFVar1) goto LAB_14bde0535;
        if (*(EDS_EquipSlotType *)(*(longlong *)FVar16.Data + 0x60) == this->EquipSlotType) break;
        FVar16.Data = FVar16.Data + 8;
      }
      cVar2 = *(char *)(*(longlong *)FVar16.Data + 8);
      if ((cVar2 == '\0') || (cVar2 == '\r')) {
LAB_14bde0535:
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_VM_EquipItemSlot::OnUpdateModel",0x23,Yes);
          UDS_LogManager::PrintLog
                    (pUVar7,1,Warning,local_158.Ptr,0xc1,L"PlayerSkillType is Invalid.");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
      else {
        FDS_PlayerSkillService::TryEquipItemToPlayerSkill
                  ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_620);
      }
      if (local_600.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_600.AllocatorInstance.Data);
      return;
    }
    if (iVar6 == 6) {
      pUVar8 = FWeakObjectPtr::Get(&local_res10);
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar8 + 1));
      if (pUVar8 != (UObject *)0x0) {
        pUVar9 = Z_Construct_UClass_UDS_M_ItemImplEquipSlot_NoRegister();
        iVar6 = (int)pUVar9->_padding_;
        if ((iVar6 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
            &pUVar9->_padding_)) goto LAB_14bde0206;
      }
      pUVar8 = pUVar17;
LAB_14bde0206:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      local_638.ObjectIndex = 0;
      local_638.ObjectSerialNumber = 0;
      local_5e8 = pUVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      FWeakObjectPtr::operator=(&local_638,(FObjectPtr)&local_5e8);
      bVar4 = FWeakObjectPtr::IsValid(&local_638);
      if (!bVar4) {
        return;
      }
      pUVar10 = UDS_CharacterUIEvent::GetEvent();
      if (pUVar10 != (UDS_CharacterUIEvent *)0x0) {
        pUVar8 = FWeakObjectPtr::Get(&local_638);
        EVar5 = *(EDS_EquipSlotType *)&pUVar8[0xc].field_0x10;
        bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &pUVar10->OnClickEmptyEquipSlot);
        if (bVar4) {
          TMulticastDelegate<void___cdecl(enum_EDS_EquipSlotType),FDefaultDelegateUserPolicy>::
          Broadcast(&pUVar10->OnClickEmptyEquipSlot,EVar5);
        }
      }
      this_00 = UDS_EventManager::GetInst();
      if (this_00 == (UDS_EventManager *)0x0) {
        return;
      }
      if ((char)this_00->_padding_ == '\x01') {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar7 = UDS_LogManager::GetInst();
        local_398._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_398,"UDS_EventManager::GetEvent",0x1a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_398.Ptr,0x31,
                   L"Cannot access event during UDS_EventManager destruction.");
        if ((void *)local_398._padding_ == (void *)0x0) {
          return;
        }
        FMemory::Free((void *)local_398._padding_);
        return;
      }
      pUVar11 = UDS_EventManager::GetEventInternal<UDS_PlayerSkillEvent>(this_00);
      if (pUVar11 == (UDS_PlayerSkillEvent *)0x0) {
        return;
      }
      pUVar8 = FWeakObjectPtr::Get(&local_638);
      EVar5 = *(EDS_EquipSlotType *)&pUVar8[0xc].field_0x10;
      bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar11->OnEquipSlotSelectDelegate);
      if (!bVar4) {
        return;
      }
      TMulticastDelegate<void___cdecl(enum_EDS_EquipSlotType),FDefaultDelegateUserPolicy>::Broadcast
                (&pUVar11->OnEquipSlotSelectDelegate,EVar5);
      return;
    }
    if ((iVar6 != 7) && (iVar6 != 10)) {
      return;
    }
  }
  pUVar8 = FWeakObjectPtr::Get(&local_res10);
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar8 + 1));
  if (pUVar8 != (UObject *)0x0) {
    pUVar9 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar6 = (int)pUVar9->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar9->_padding_)) goto LAB_14bde0134;
  }
  pUVar8 = pUVar17;
LAB_14bde0134:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  local_630.ObjectIndex = 0;
  local_630.ObjectSerialNumber = 0;
  local_5e0 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  FWeakObjectPtr::operator=(&local_630,(FObjectPtr)&local_5e0);
  bVar4 = FWeakObjectPtr::IsValid(&local_630);
  if (bVar4) {
    pUVar8 = FWeakObjectPtr::Get(&local_630);
    (**(code **)(*(longlong *)pUVar8 + 0x3a0))(pUVar8);
    bVar4 = FWeakObjectPtr::IsValid(&local_610);
    if ((bVar4) && (bVar4 = FWeakObjectPtr::IsValid(&local_610), bVar4)) {
      this_01 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_630);
      iVar6 = UDS_M_ItemImplBase::GetCharID(this_01);
      DS_ItemDataUtil::Use((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_610,0,iVar6,0);
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5377448291820633895>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_EquipItemSlot.cpp"
                       ,0xd9,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// SetEquipSlot @ 14bde59e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_EquipItemSlot::SetEquipSlot(UDS_VM_EquipItemSlot *this)

{
  int *piVar1;
  int iVar2;
  UDS_M_ItemImplEquipSlot *pUVar3;
  FScriptContainerElement *_Src;
  UDS_VM_Item *this_00;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> this_01;
  UDS_ItemDataSet *this_02;
  UDS_LogManager *pUVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  TObjectPtr<UDS_M_ItemImplBase> this_03;
  UClass *pUVar10;
  FDS_SlotBaseTableRow *pFVar11;
  longlong lVar12;
  EDS_EquipSlotType *pEVar13;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar14;
  TObjectPtr<UDS_M_ItemImplEquipSlot>_u_0 TVar15;
  TObjectPtr<UDS_M_ItemImplEquipSlot>_u_0 TVar16;
  TArray<EDS_ItemType,TSizedDefaultAllocator<32>_> *pTVar17;
  undefined1 auStackY_358 [32];
  longlong lStack_310;
  TObjectPtr<UDS_M_ItemImplEquipSlot>_u_0 local_308;
  TSharedPtr<FDS_EquipmentItemCharacterData,1> local_300;
  UDS_VM_EquipItemSlot *local_2f0;
  EDS_EquipSlotType local_2e8 [4];
  FName local_2d8;
  int local_2d0;
  TSharedPtr<FDS_ViewModelContext,1> local_2c8;
  undefined1 local_2b8 [8];
  undefined4 local_2b0;
  uint uStack_2ac;
  FDestructionSentinel local_2a8;
  undefined1 *local_290;
  undefined1 local_288 [8];
  undefined1 local_280 [8];
  undefined1 local_278 [8];
  TReferenceControllerBase<1> *local_270;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_358;
  this_01 = TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)local_288);
  this_02 = (UDS_ItemDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
  if (this_02 == (UDS_ItemDataSet *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"UDS_VM_EquipItemSlot::SetEquipSlot",0x22,Yes);
    UDS_LogManager::PrintLog
              (pUVar7,1,Warning,local_268.Ptr,0x117,L"itemDataSet is nullptr. CharEntityID : %llu");
    if ((void *)local_268._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_268._padding_);
    return;
  }
  UDS_ItemDataSet::GetEquipmentItemCharacterData(this_02,&local_300);
  if (local_300.Object == (FDS_EquipmentItemCharacterData *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_EquipItemSlot::SetEquipSlot",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_148.Ptr,0x11e,L"equipmentCharacterData is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    TVar15.DebugPtr = (UDS_M_ItemImplEquipSlot *)0x0;
    lStack_310 = (ulonglong)uStack_2ac << 0x20;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUpdateEquipItemModel,(FWriteAccessScope *)&local_2a8);
    local_290 = &(this->OnUpdateEquipItemModel).field_0x8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_290);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_EquipItemSlot____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[3] = 0;
      local_2f0 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_2f0);
      puVar8[4] = OnUpdateModel;
      puVar8[5] = lStack_310;
    }
    if (local_2a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a8.Accessor,&local_2a8);
    }
    if ((local_300.Object == (FDS_EquipmentItemCharacterData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pEVar13 = local_2e8;
    FDS_EquipmentItemCharacterData::GetEquippedItemData(local_300.Object,pEVar13);
    TVar14.WeakPtr._1_7_ = (undefined7)((ulonglong)pEVar13 >> 8);
    TVar14.WeakPtr.ObjectIndex._0_1_ = 4;
    this_03 = DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)local_280,TVar14);
    TVar16.DebugPtr = TVar15.DebugPtr;
    if (*(longlong *)this_03.field0_0x0 != 0) {
      pUVar10 = Z_Construct_UClass_UDS_M_ItemImplEquipSlot_NoRegister();
      bVar6 = FObjectPtr::IsA((FObjectPtr *)this_03.field0_0x0,pUVar10);
      if (bVar6) {
        TVar16.ObjectPtr.field0_0x0 = (FObjectPtr)(FObjectPtr_u_0)*(FObjectPtr *)this_03.field0_0x0;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       ((UDS_VM_Item *)TVar16.DebugPtr == (UDS_VM_Item *)0x0)) {
      (this->EquipItemSlotModel).field0_0x0.DebugPtr = (UDS_M_ItemImplEquipSlot *)TVar16;
      if ((UDS_VM_Item *)TVar16.DebugPtr == (UDS_VM_Item *)0x0) goto LAB_14bde5e97;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)TVar16.DebugPtr);
      (this->EquipItemSlotModel).field0_0x0.DebugPtr = (UDS_M_ItemImplEquipSlot *)TVar16;
    }
    ((FKeyEvent *)&(TVar16.DebugPtr)->CharEntityID)->_padding_ = this->CharEntityID;
    ((this->EquipItemSlotModel).field0_0x0.DebugPtr)->EquipSlotType = this->EquipSlotType;
    UDS_ModelBase::AddUpdateModelDelegate
              ((UDS_ModelBase *)(this->EquipItemSlotModel).field0_0x0.DebugPtr,
               &this->OnUpdateEquipItemModel);
    if ((this->EquipSlotType != None) &&
       (pFVar11 = FDS_SlotBaseTableRow::Get((longlong)(int)this->EquipSlotType,true),
       pFVar11 != (FDS_SlotBaseTableRow *)0x0)) {
      pUVar3 = (this->EquipItemSlotModel).field0_0x0.DebugPtr;
      pTVar17 = &pUVar3->EquipTypeList;
      if (pTVar17 != &pFVar11->EquipItemType) {
        iVar2 = (pFVar11->EquipItemType).ArrayNum;
        piVar1 = &(pUVar3->EquipTypeList).ArrayMax;
        _Src = (pFVar11->EquipItemType).AllocatorInstance.Data;
        (pUVar3->EquipTypeList).ArrayNum = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar2,*piVar1,&pTVar17->AllocatorInstance,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy((pTVar17->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
          }
        }
      }
    }
    pUVar3 = (this->EquipItemSlotModel).field0_0x0.DebugPtr;
    this_00 = (this->VM_EquipItem).field0_0x0.DebugPtr;
    pcVar5 = *(code **)(pUVar3->_padding_ + 0x310);
    if (this_00 == (UDS_VM_Item *)0x0) {
      lVar12 = (*pcVar5)(pUVar3,local_278);
      pTVar4 = *(TReferenceControllerBase<1> **)(lVar12 + 8);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      DS_ViewModelTemplateUtil::CreateViewModel
                ((UObject *)&local_308.ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)this);
      if ((UDS_VM_Item *)local_308.DebugPtr != (UDS_VM_Item *)0x0) {
        pUVar10 = Z_Construct_UClass_UDS_VM_Item_NoRegister();
        bVar6 = FObjectPtr::IsA(&local_308.ObjectPtr,pUVar10);
        if (bVar6) {
          TVar15 = local_308;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UDS_VM_Item *)TVar15.DebugPtr != (UDS_VM_Item *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar15.DebugPtr);
      }
      (this->VM_EquipItem).field0_0x0.DebugPtr = (UDS_VM_Item *)TVar15;
    }
    else {
      puVar8 = (undefined8 *)(*pcVar5)(pUVar3,local_2b8);
      local_2c8.Object = (FDS_ViewModelContext *)*puVar8;
      local_2c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar8[1];
      if (local_2c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_2c8);
      local_270 = (TReferenceControllerBase<1> *)CONCAT44(uStack_2ac,local_2b0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_270);
    local_2d0 = FFieldNotificationClassDescriptor::VM_EquipItem.BitNumber;
    local_2d8 = FFieldNotificationClassDescriptor::VM_EquipItem.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2d8);
  }
LAB_14bde5e97:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_300.SharedReferenceCount.ReferenceController);
  return;
}

// UnbindModel @ 14bdecc90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_EquipItemSlot::UnbindModel(UDS_VM_EquipItemSlot *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_ItemDataSet *this_00;
  UDS_LanguageManager *pUVar3;
  FWeakObjectPtr local_res8;
  TSharedPtr<FDS_EquipmentItemCharacterData,1> local_18;
  
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_res8);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    this_00 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_res8);
    UDS_ItemDataSet::GetEquipmentItemCharacterData(this_00,&local_18);
    if (local_18.Object != (FDS_EquipmentItemCharacterData *)0x0) {
      if ((local_18.Object == (FDS_EquipmentItemCharacterData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FDS_FilteredEventDelegate<enum_EDS_EquipSlotType_const_,__int64_const_>::
      Remove<UDS_VM_EquipItemSlot>(local_18.Object,this);
    }
    pUVar3 = UDS_LanguageManager::GetInst();
    if (pUVar3 != (UDS_LanguageManager *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnLanguageChanged,
                 this);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

