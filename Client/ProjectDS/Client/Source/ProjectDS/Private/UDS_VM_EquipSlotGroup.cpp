// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b642830

UClass * __cdecl UDS_VM_EquipSlotGroup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_EquipSlotGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_EquipSlotGroup",
               &Z_Registration_Info_UClass_UDS_VM_EquipSlotGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_EquipSlotGroup,0x118,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_EquipSlotGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_EquipSlotGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_EquipSlotGroup.InnerSingleton;
}

// UDS_VM_EquipSlotGroup @ 14b648040

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_EquipSlotGroup * __thiscall
UDS_VM_EquipSlotGroup::UDS_VM_EquipSlotGroup(UDS_VM_EquipSlotGroup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->HaveCharVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_EquipSlotGroup__6B_;
  (this->VM_EquipSlot_Weapon).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  (this->VM_EquipSlot_ArmorHelmet).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  (this->VM_EquipSlot_ArmorChest).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  (this->VM_EquipSlot_ArmorPants).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  (this->VM_EquipSlot_ArmorGloves).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  (this->VM_EquipSlot_ArmorShoes).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  (this->VM_EquipSlot_Accessory1).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  (this->VM_EquipSlot_Accessory2).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  (this->VM_EquipSlot_Accessory3).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  (this->VM_EquipSlot_Emblem).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  *(undefined8 *)&this->OnUpdateEquipItemModel = 0;
  *(undefined8 *)&(this->OnUpdateEquipItemModel).field_0x8 = 0;
  *(undefined4 *)&(this->OnUpdateEquipItemModel).field_0x10 = 0;
  this->CharEntityID = 0;
  return this;
}

// UDS_VM_EquipSlotGroup @ 14b6480f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_EquipSlotGroup * __thiscall
UDS_VM_EquipSlotGroup::UDS_VM_EquipSlotGroup
          (UDS_VM_EquipSlotGroup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->HaveCharVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_EquipSlotGroup__6B_;
  (this->VM_EquipSlot_Weapon).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  (this->VM_EquipSlot_ArmorHelmet).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  (this->VM_EquipSlot_ArmorChest).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  (this->VM_EquipSlot_ArmorPants).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  (this->VM_EquipSlot_ArmorGloves).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  (this->VM_EquipSlot_ArmorShoes).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  (this->VM_EquipSlot_Accessory1).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  (this->VM_EquipSlot_Accessory2).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  (this->VM_EquipSlot_Accessory3).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  (this->VM_EquipSlot_Emblem).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  *(undefined8 *)&this->OnUpdateEquipItemModel = 0;
  *(undefined8 *)&(this->OnUpdateEquipItemModel).field_0x8 = 0;
  *(undefined4 *)&(this->OnUpdateEquipItemModel).field_0x10 = 0;
  this->CharEntityID = 0;
  return this;
}

// ~UDS_VM_EquipSlotGroup @ 14b6494f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_EquipSlotGroup::~UDS_VM_EquipSlotGroup(UDS_VM_EquipSlotGroup *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_EquipSlotGroup__6B_;
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

// GetFieldNotificationDescriptor @ 14b64b080

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_EquipSlotGroup::GetFieldNotificationDescriptor(UDS_VM_EquipSlotGroup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_EquipSlotGroup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b64b8d0

UClass * __cdecl UDS_VM_EquipSlotGroup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_EquipSlotGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_EquipSlotGroup",
               &Z_Registration_Info_UClass_UDS_VM_EquipSlotGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_EquipSlotGroup,0x118,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_EquipSlotGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_EquipSlotGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_EquipSlotGroup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_EquipSlotGroup @ 14b64bf40

void __cdecl UDS_VM_EquipSlotGroup::StaticRegisterNativesUDS_VM_EquipSlotGroup(void)

{
  return;
}

// OnSetViewModel @ 14bddbd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_EquipSlotGroup::OnSetViewModel
          (UDS_VM_EquipSlotGroup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  undefined1 auStackY_318 [32];
  TSharedPtr<FDS_ViewModelContext_EquipSlotGroup,1> local_2d8;
  FWeakObjectPtr local_2c8;
  UDS_VM_EquipSlotGroup *local_2c0;
  FName local_2b8;
  int local_2b0;
  code *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  TSharedPtr<FDS_ViewModelContext,1> local_298;
  FDestructionSentinel local_288;
  undefined1 *local_270;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_318;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_298.Object = param_1->Object;
  local_298.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_298.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_EquipSlotGroup>(&local_2d8,&local_298);
  if (local_2d8.Object == (FDS_ViewModelContext_EquipSlotGroup *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"UDS_VM_EquipSlotGroup::OnSetViewModel",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_268.Ptr,0x17,L"context is Invalid.");
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d8.SharedReferenceCount.ReferenceController);
  }
  else {
    if (local_2d8.Object == (FDS_ViewModelContext_EquipSlotGroup *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar8 = (local_2d8.Object)->CharEntityID;
    this->CharEntityID = uVar8;
    UDS_PlayerData::GetData((ulong64)&local_2c8,uVar8,false);
    bVar5 = FWeakObjectPtr::IsValid(&local_2c8);
    iVar4 = FFieldNotificationClassDescriptor::HaveCharVisibility.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::HaveCharVisibility.FieldName;
    if (bVar5) {
      if (this->HaveCharVisibility != SelfHitTestInvisible) {
        this->HaveCharVisibility = SelfHitTestInvisible;
        local_2b0 = iVar4;
        local_2b8 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2b8);
      }
      uStack_2a0 = 0;
      local_2a8 = OnUpdateModel;
      uStack_29c = local_298.SharedReferenceCount.ReferenceController._4_4_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnUpdateEquipItemModel,(FWriteAccessScope *)&local_288);
      local_270 = &(this->OnUpdateEquipItemModel).field_0x8;
      puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_270);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_EquipSlotGroup____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar7[3] = 0;
        local_2c0 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_2c0);
        puVar7[4] = local_2a8;
        puVar7[5] = CONCAT44(uStack_29c,uStack_2a0);
      }
      if (local_288.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
      }
      UpdateEquipItemSlotList(this);
    }
    else {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_EquipSlotGroup::OnSetViewModel",0x25,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_148.Ptr,0x1f,
                   L"playerData is Invalid. PlayerEntityID : %llu");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d8.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateModel @ 14bde06f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_EquipSlotGroup::OnUpdateModel
          (UDS_VM_EquipSlotGroup *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  EDS_EquipSlotType EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_CharacterUIEvent *pUVar8;
  FDS_DragDropEventField *pFVar9;
  UDS_W_DragDropOperation *pUVar10;
  FDS_ItemSlotInfo *pFVar11;
  UDS_M_ItemImplBase *pUVar12;
  UObject *pUVar13;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_518 [32];
  FWeakObjectPtr local_4e8;
  FWeakObjectPtr local_4e0;
  FWeakObjectPtr local_4d8;
  FWeakObjectPtr local_4d0;
  FWeakObjectPtr local_4c8;
  FWeakObjectPtr local_4c0;
  UObject *local_4b8;
  UObject *local_4b0;
  UObject *local_4a8;
  UObject *local_4a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_498;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_518;
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_498._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_498,"UDS_VM_EquipSlotGroup::OnUpdateModel",0x24,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_498.Ptr,0x61,L"ModelEvent is Invalid.");
    if ((void *)local_498._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_498._padding_);
    return;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res10);
  pUVar13 = (UObject *)0x0;
  if (pUVar6 == (UObject *)0x0) {
LAB_14bde07f0:
    pUVar6 = pUVar13;
  }
  else {
    pUVar7 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    iVar4 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar7->_padding_)) goto LAB_14bde07f0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_4e8.ObjectIndex = 0;
  local_4e8.ObjectSerialNumber = 0;
  local_4b8 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_4e8,(FObjectPtr)&local_4b8);
  bVar3 = FWeakObjectPtr::IsValid(&local_4e8);
  if (!bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_378._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_378,"UDS_VM_EquipSlotGroup::OnUpdateModel",0x24,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_378.Ptr,0x68,L"ModelEventItemBase is Invalid.");
    if ((void *)local_378._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_378._padding_);
    return;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_4e8);
  iVar4 = *(int *)&pUVar6[5].field_0x8;
  if (iVar4 != 2) {
    if (iVar4 == 3) {
      pUVar6 = FWeakObjectPtr::Get(&local_4e8);
      if (*(longlong *)(pUVar6 + 0xc) == 0) {
        return;
      }
      pUVar6 = FWeakObjectPtr::Get(&local_4e8);
      pFVar9 = TSharedPtr<FDS_DragDropEventField,1>::operator->
                         ((TSharedPtr<FDS_DragDropEventField,1> *)(pUVar6 + 0xc));
      pUVar10 = Cast<UDS_W_DragDropOperation,UDragDropOperation>(&pFVar9->DragDropOperation);
      if (pUVar10 == (UDS_W_DragDropOperation *)0x0) {
        return;
      }
      if (((uint)pUVar10->_padding_ >> 0x1e & 1) != 0) {
        return;
      }
      pFVar11 = FDS_SlotInfo::GetSlotInfo<FDS_ItemSlotInfo>(&pUVar10->SlotInfo);
      if (pFVar11 == (FDS_ItemSlotInfo *)0x0) {
        return;
      }
      if (pFVar11->SlotType != Character) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_EquipSlotGroup::OnUpdateModel",0x24,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x92,L"ItemSlotType is Invalid.");
        if ((void *)local_138._padding_ == (void *)0x0) {
          return;
        }
        FMemory::Free((void *)local_138._padding_);
        return;
      }
      if (pFVar11->ItemUID < 1) {
        return;
      }
      DS_ItemDataUtil::GetItemDataByUID((long64)&local_4c0);
      bVar3 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_4c0,(void *)0x0);
      if (bVar3) {
        return;
      }
      pUVar6 = FWeakObjectPtr::Get(&local_res10);
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar6 + 1));
      if (pUVar6 == (UObject *)0x0) {
LAB_14bde0bc5:
        pUVar6 = pUVar13;
      }
      else {
        pUVar7 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
        iVar4 = (int)pUVar7->_padding_;
        if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar4) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
            &pUVar7->_padding_)) goto LAB_14bde0bc5;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      local_4d0.ObjectIndex = 0;
      local_4d0.ObjectSerialNumber = 0;
      local_4a8 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      FWeakObjectPtr::operator=(&local_4d0,(FObjectPtr)&local_4a8);
      bVar3 = FWeakObjectPtr::IsValid(&local_4d0);
      if (!bVar3) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6911552645073207434>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_EquipSlotGroup.cpp"
                           ,0x8a,"false");
        if (!bVar3) {
          return;
        }
        goto code_r0x00014bde0d35;
      }
      pUVar12 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_4d0);
      iVar4 = UDS_M_ItemImplBase::GetCharID(pUVar12);
      local_4c8 = local_4c0;
      goto LAB_14bde0d8a;
    }
    if (iVar4 == 6) {
      pUVar6 = FWeakObjectPtr::Get(&local_res10);
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar6 + 1));
      if (pUVar6 != (UObject *)0x0) {
        pUVar7 = Z_Construct_UClass_UDS_M_ItemImplEquipSlot_NoRegister();
        iVar4 = (int)pUVar7->_padding_;
        if ((iVar4 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
            &pUVar7->_padding_)) goto LAB_14bde09cd;
      }
      pUVar6 = pUVar13;
LAB_14bde09cd:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      local_4d8.ObjectIndex = 0;
      local_4d8.ObjectSerialNumber = 0;
      local_4b0 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      FWeakObjectPtr::operator=(&local_4d8,(FObjectPtr)&local_4b0);
      bVar3 = FWeakObjectPtr::IsValid(&local_4d8);
      if (!bVar3) {
        return;
      }
      pUVar8 = UDS_CharacterUIEvent::GetEvent();
      if (pUVar8 == (UDS_CharacterUIEvent *)0x0) {
        return;
      }
      pUVar6 = FWeakObjectPtr::Get(&local_4d8);
      EVar1 = *(EDS_EquipSlotType *)&pUVar6[0xc].field_0x10;
      bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar8->OnClickEmptyEquipSlot);
      if (!bVar3) {
        return;
      }
      TMulticastDelegate<void___cdecl(enum_EDS_EquipSlotType),FDefaultDelegateUserPolicy>::Broadcast
                (&pUVar8->OnClickEmptyEquipSlot,EVar1);
      return;
    }
    if (iVar4 != 10) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_VM_EquipSlotGroup::OnUpdateModel",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_258.Ptr,0xbb,L"ModelEventType is Invalid.");
      if ((void *)local_258._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_258._padding_);
      return;
    }
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res10);
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar6 + 1));
  if (pUVar6 == (UObject *)0x0) {
LAB_14bde0caf:
    pUVar6 = pUVar13;
  }
  else {
    pUVar7 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar4 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar7->_padding_)) goto LAB_14bde0caf;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_4e0.ObjectIndex = 0;
  local_4e0.ObjectSerialNumber = 0;
  local_4a0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_4e0,(FObjectPtr)&local_4a0);
  bVar3 = FWeakObjectPtr::IsValid(&local_4e0);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6911552645073207455>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_EquipSlotGroup.cpp"
                       ,0x9f,"false");
    if (!bVar3) {
      return;
    }
code_r0x00014bde0d35:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_4e0);
  (**(code **)(*(longlong *)pUVar6 + 0x3a0))(pUVar6);
  bVar3 = FWeakObjectPtr::IsValid(&local_4c8);
  if (!bVar3) {
    return;
  }
  bVar3 = FWeakObjectPtr::IsValid(&local_4c8);
  if (!bVar3) {
    return;
  }
  pUVar12 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_4e0);
  iVar4 = UDS_M_ItemImplBase::GetCharID(pUVar12);
LAB_14bde0d8a:
  DS_ItemDataUtil::Use((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_4c8,0,iVar4,0);
  return;
}

// SetEquipSlotViewModel @ 14bde5ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_EquipSlotGroup::SetEquipSlotViewModel
          (UDS_VM_EquipSlotGroup *this,EDS_EquipSlotType param_1,
          TObjectPtr<UDS_VM_EquipItemSlot> *param_2)

{
  UDS_VM_EquipItemSlot *this_00;
  code *pcVar1;
  bool bVar2;
  TObjectPtr<UDS_VM_EquipItemSlot>_u_0 TVar3;
  TObjectPtr<UDS_VM_EquipItemSlot>_u_0 TVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_01;
  UClass *pUVar6;
  UDS_LogManager *pUVar7;
  TObjectPtr<UDS_VM_EquipItemSlot>_u_0 TVar8;
  TObjectPtr<UDS_VM_EquipItemSlot>_u_0 TVar9;
  undefined1 auStackY_1d8 [32];
  TObjectPtr<UDS_VM_EquipItemSlot>_u_0 local_198;
  TObjectPtr<UDS_VM_EquipItemSlot>_u_0 local_190;
  TObjectPtr<UDS_VM_EquipItemSlot>_u_0 local_188;
  TObjectPtr<UDS_VM_EquipItemSlot>_u_0 local_180;
  TObjectPtr<UDS_VM_EquipItemSlot>_u_0 local_178;
  TObjectPtr<UDS_VM_EquipItemSlot>_u_0 local_170;
  TObjectPtr<UDS_VM_EquipItemSlot>_u_0 local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (param_1 < Max) {
    TVar3.DebugPtr = ::operator_new(0x30);
    TVar8.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
    TVar9.DebugPtr = TVar8.DebugPtr;
    if (TVar3.DebugPtr != (UDS_VM_EquipItemSlot *)0x0) {
      (TVar3.DebugPtr)->_padding_ = 0;
      (TVar3.DebugPtr)->_padding_ = 0;
      *(undefined8 *)&(TVar3.DebugPtr)->_padding_ = 0;
      (TVar3.DebugPtr)->_padding_ = 0;
      (TVar3.DebugPtr)->_padding_ = (longlong)&___7FDS_ViewModelContext_EquipItemSlot__6B_;
      (TVar3.DebugPtr)->_padding_ = 0;
      TVar9.DebugPtr = TVar3.DebugPtr;
    }
    TVar4.DebugPtr = ::operator_new(0x20);
    TVar3.DebugPtr = TVar8.DebugPtr;
    if (TVar4.DebugPtr != (UDS_VM_EquipItemSlot *)0x0) {
      *(atomic<int> *)&(TVar4.DebugPtr)->_padding_ = (atomic<int>)0x1;
      (TVar4.DebugPtr)->_padding_ = (longlong)ViewModelContextDeleter;
      (TVar4.DebugPtr)->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_EquipItemSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&(TVar4.DebugPtr)->_padding_)[1] = (atomic<int>)0x1;
      (TVar4.DebugPtr)->_padding_ = (longlong)TVar9;
      TVar3.DebugPtr = TVar4.DebugPtr;
    }
    if ((TVar9.DebugPtr == (UDS_VM_EquipItemSlot *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar5 = FDS_ViewModelContext_EquipItemSlot::StaticStruct();
    *(UScriptStruct **)&(TVar9.DebugPtr)->_padding_ = pUVar5;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (TVar3.DebugPtr != (UDS_VM_EquipItemSlot *)0x0) {
        LOCK();
        *(atomic<int> *)&(TVar3.DebugPtr)->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&(TVar3.DebugPtr)->_padding_ + 1);
        UNLOCK();
      }
      local_180 = TVar9;
      local_178 = TVar3;
      UDS_ViewModelContextManager::RegisterContext
                (this_01,(TSharedPtr<FDS_ViewModelContext,1> *)&local_180.ObjectPtr);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_178.DebugPtr);
    }
    *(undefined4 *)&(TVar9.DebugPtr)->_padding_ = 0x17c;
    (TVar9.DebugPtr)->_padding_ = this->CharEntityID;
    *(EDS_EquipSlotType *)&(TVar9.DebugPtr)->_padding_ = param_1;
    this_00 = (param_2->field0_0x0).DebugPtr;
    if (this_00 == (UDS_VM_EquipItemSlot *)0x0) {
      if (TVar3.DebugPtr != (UDS_VM_EquipItemSlot *)0x0) {
        LOCK();
        *(atomic<int> *)&(TVar3.DebugPtr)->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&(TVar3.DebugPtr)->_padding_ + 1);
        UNLOCK();
        LOCK();
        *(atomic<int> *)&(TVar3.DebugPtr)->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&(TVar3.DebugPtr)->_padding_ + 1);
        UNLOCK();
      }
      local_190 = TVar9;
      local_188 = TVar3;
      DS_ViewModelTemplateUtil::CreateViewModel
                ((UObject *)&local_198.ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)this);
      if (local_198.DebugPtr != (UDS_VM_EquipItemSlot *)0x0) {
        pUVar6 = Z_Construct_UClass_UDS_VM_EquipItemSlot_NoRegister();
        bVar2 = FObjectPtr::IsA(&local_198.ObjectPtr,pUVar6);
        if (bVar2) {
          TVar8 = local_198;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)TVar3.DebugPtr);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar8.DebugPtr != (UDS_VM_EquipItemSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
      }
      (param_2->field0_0x0).DebugPtr = (UDS_VM_EquipItemSlot *)TVar8;
    }
    else {
      if (TVar3.DebugPtr != (UDS_VM_EquipItemSlot *)0x0) {
        LOCK();
        *(atomic<int> *)&(TVar3.DebugPtr)->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&(TVar3.DebugPtr)->_padding_ + 1);
        UNLOCK();
      }
      local_170 = TVar9;
      local_168 = TVar3;
      UDS_ViewModelBase::SetContext
                ((UDS_ViewModelBase *)this_00,
                 (TSharedPtr<FDS_ViewModelContext,1> *)&local_170.ObjectPtr);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar3.DebugPtr);
  }
  else {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_EquipSlotGroup::SetEquipSlotViewModel",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_158.Ptr,0x48,L"InEquipSlotNum is invalid.(%d)");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  return;
}

// UpdateEquipItemSlotList @ 14bdf01d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_EquipSlotGroup::UpdateEquipItemSlotList(UDS_VM_EquipSlotGroup *this)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  SetEquipSlotViewModel(this,Weapon,&this->VM_EquipSlot_Weapon);
  SetEquipSlotViewModel(this,ArmorChest,&this->VM_EquipSlot_ArmorChest);
  SetEquipSlotViewModel(this,ArmorPants,&this->VM_EquipSlot_ArmorPants);
  SetEquipSlotViewModel(this,ArmorGloves,&this->VM_EquipSlot_ArmorGloves);
  SetEquipSlotViewModel(this,ArmorShoes,&this->VM_EquipSlot_ArmorShoes);
  SetEquipSlotViewModel(this,ArmorHelmet,&this->VM_EquipSlot_ArmorHelmet);
  SetEquipSlotViewModel(this,Accessory1,&this->VM_EquipSlot_Accessory1);
  SetEquipSlotViewModel(this,Accessory2,&this->VM_EquipSlot_Accessory2);
  SetEquipSlotViewModel(this,Accessory3,&this->VM_EquipSlot_Accessory3);
  SetEquipSlotViewModel(this,Emblem,&this->VM_EquipSlot_Emblem);
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::VM_EquipSlot_Weapon.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VM_EquipSlot_Weapon.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VM_EquipSlot_ArmorChest.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VM_EquipSlot_ArmorChest.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VM_EquipSlot_ArmorPants.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VM_EquipSlot_ArmorPants.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VM_EquipSlot_ArmorGloves.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VM_EquipSlot_ArmorGloves.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VM_EquipSlot_ArmorShoes.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VM_EquipSlot_ArmorShoes.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VM_EquipSlot_ArmorHelmet.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VM_EquipSlot_ArmorHelmet.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VM_EquipSlot_Accessory1.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VM_EquipSlot_Accessory1.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VM_EquipSlot_Accessory2.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VM_EquipSlot_Accessory2.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VM_EquipSlot_Accessory3.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VM_EquipSlot_Accessory3.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VM_EquipSlot_Emblem.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VM_EquipSlot_Emblem.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

