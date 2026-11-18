// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b6888c0

UClass * __cdecl UDS_VM_ItemCraft_Crafting_Info::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft_Crafting_Info",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft_Crafting_Info,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ItemCraft_Crafting_Info>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemCraft_Crafting_Info>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info.InnerSingleton;
}

// UDS_VM_ItemCraft_Crafting_Info @ 14b68c960

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_ItemCraft_Crafting_Info * __thiscall
UDS_VM_ItemCraft_Crafting_Info::UDS_VM_ItemCraft_Crafting_Info
          (UDS_VM_ItemCraft_Crafting_Info *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Crafting_Info__6B_;
  (this->VM_ItemCraft_Info_Slot).field0_0x0.DebugPtr = (UDS_VM_ItemCraft_Crafting_Info_Slot *)0x0;
  (this->VM_Item).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->VM_ItemCraft_Info_Material).field0_0x0.DebugPtr =
       (UDS_VM_ItemCraft_Crafting_Info_Material *)0x0;
  (this->VM_ItemCraft_Info_Time).field0_0x0.DebugPtr = (UDS_VM_ItemCraft_Crafting_Info_Time *)0x0;
  (this->VM_ItemCraft_Info_Quantity).field0_0x0.DebugPtr =
       (UDS_VM_ItemCraft_Crafting_Info_Quantity *)0x0;
  return this;
}

// UDS_VM_ItemCraft_Crafting_Info @ 14b68c9d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_ItemCraft_Crafting_Info * __thiscall
UDS_VM_ItemCraft_Crafting_Info::UDS_VM_ItemCraft_Crafting_Info
          (UDS_VM_ItemCraft_Crafting_Info *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Crafting_Info__6B_;
  (this->VM_ItemCraft_Info_Slot).field0_0x0.DebugPtr = (UDS_VM_ItemCraft_Crafting_Info_Slot *)0x0;
  (this->VM_Item).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->VM_ItemCraft_Info_Material).field0_0x0.DebugPtr =
       (UDS_VM_ItemCraft_Crafting_Info_Material *)0x0;
  (this->VM_ItemCraft_Info_Time).field0_0x0.DebugPtr = (UDS_VM_ItemCraft_Crafting_Info_Time *)0x0;
  (this->VM_ItemCraft_Info_Quantity).field0_0x0.DebugPtr =
       (UDS_VM_ItemCraft_Crafting_Info_Quantity *)0x0;
  return this;
}

// ~UDS_VM_ItemCraft_Crafting_Info @ 14b68dd70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft_Crafting_Info::~UDS_VM_ItemCraft_Crafting_Info
          (UDS_VM_ItemCraft_Crafting_Info *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Crafting_Info__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b68fc50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_ItemCraft_Crafting_Info::GetFieldNotificationDescriptor(UDS_VM_ItemCraft_Crafting_Info *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemCraft_Crafting_Info::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b690460

UClass * __cdecl UDS_VM_ItemCraft_Crafting_Info::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft_Crafting_Info",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft_Crafting_Info,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ItemCraft_Crafting_Info>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemCraft_Crafting_Info>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemCraft_Crafting_Info @ 14b690ff0

void __cdecl
UDS_VM_ItemCraft_Crafting_Info::StaticRegisterNativesUDS_VM_ItemCraft_Crafting_Info(void)

{
  return;
}

// BindModel @ 14be76f60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft_Crafting_Info::BindModel(UDS_VM_ItemCraft_Crafting_Info *this)

{
  UDS_ItemCraftEvent *pUVar1;
  
  pUVar1 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeCraftManager_ItemCraftListTID,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft_Crafting_Info>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeCraftManager_ItemCraftListTID,
               (UDS_VM_ItemCraft_Crafting_Info *)&stack0x00000010,(pmf_3998a7b0 *)this);
  }
  return;
}

// InitViewModel @ 14be8d1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft_Crafting_Info::InitViewModel(UDS_VM_ItemCraft_Crafting_Info *this)

{
  UClass *pUVar1;
  UClass *pUVar2;
  UDS_VM_ItemCraft_Crafting_Info_Slot *pUVar3;
  UDS_VM_Item *pUVar4;
  UDS_VM_ItemCraft_Crafting_Info_Material *pUVar5;
  UDS_VM_ItemCraft_Crafting_Info_Time *pUVar6;
  UDS_VM_ItemCraft_Crafting_Info_Quantity *pUVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((this->VM_ItemCraft_Info_Slot).field0_0x0.DebugPtr ==
      (UDS_VM_ItemCraft_Crafting_Info_Slot *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_ItemCraft_Crafting_Info_Slot_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_ItemCraft_Crafting_Info_Slot_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar3 = (UDS_VM_ItemCraft_Crafting_Info_Slot *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar3 != (UDS_VM_ItemCraft_Crafting_Info_Slot *)0x0) {
      *(undefined1 *)((longlong)&pUVar3->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_ItemCraft_Crafting_Info_Slot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->VM_ItemCraft_Info_Slot).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->VM_Item).field0_0x0.DebugPtr == (UDS_VM_Item *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Item>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_Item *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_Item).field0_0x0.DebugPtr = pUVar4;
  }
  if ((this->VM_ItemCraft_Info_Material).field0_0x0.DebugPtr ==
      (UDS_VM_ItemCraft_Crafting_Info_Material *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_ItemCraft_Crafting_Info_Material_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_ItemCraft_Crafting_Info_Material_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar5 = (UDS_VM_ItemCraft_Crafting_Info_Material *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_ItemCraft_Crafting_Info_Material *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_ItemCraft_Crafting_Info_Material *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_ItemCraft_Info_Material).field0_0x0.DebugPtr = pUVar5;
  }
  if ((this->VM_ItemCraft_Info_Time).field0_0x0.DebugPtr ==
      (UDS_VM_ItemCraft_Crafting_Info_Time *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_ItemCraft_Crafting_Info_Time_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_ItemCraft_Crafting_Info_Time_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar6 = (UDS_VM_ItemCraft_Crafting_Info_Time *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar6 != (UDS_VM_ItemCraft_Crafting_Info_Time *)0x0) {
      *(undefined1 *)((longlong)&pUVar6->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UDS_VM_ItemCraft_Crafting_Info_Time *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->VM_ItemCraft_Info_Time).field0_0x0.DebugPtr = pUVar6;
  }
  if ((this->VM_ItemCraft_Info_Quantity).field0_0x0.DebugPtr ==
      (UDS_VM_ItemCraft_Crafting_Info_Quantity *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_ItemCraft_Crafting_Info_Quantity_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_ItemCraft_Crafting_Info_Quantity_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar7 = (UDS_VM_ItemCraft_Crafting_Info_Quantity *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar7 != (UDS_VM_ItemCraft_Crafting_Info_Quantity *)0x0) {
      *(undefined1 *)((longlong)&pUVar7->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UDS_VM_ItemCraft_Crafting_Info_Quantity *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->VM_ItemCraft_Info_Quantity).field0_0x0.DebugPtr = pUVar7;
  }
  return;
}

// OnChangeCraftManager_ItemCraftListTID @ 14be90600

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft_Crafting_Info::OnChangeCraftManager_ItemCraftListTID
          (UDS_VM_ItemCraft_Crafting_Info *this)

{
  UDS_VM_Item *this_00;
  UDS_M_ItemImplBase *this_01;
  int iVar1;
  UDS_CraftManager *this_02;
  undefined8 *puVar2;
  undefined8 in_RDX;
  UDS_M_ItemImplBase *local_res10;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  this_02 = UDS_CraftManager::GetInst();
  if (this_02 != (UDS_CraftManager *)0x0) {
    UDS_CraftManager::GetSelectedItemBaseTID(this_02);
    DS_ItemDataUtil::CreateItemModel
              ((EDS_ItemSlotStateType)&local_res10,
               (int)CONCAT71((int7)((ulonglong)in_RDX >> 8),0x12));
    this_01 = local_res10;
    if (local_res10 != (UDS_M_ItemImplBase *)0x0) {
      iVar1 = UDS_CraftManager::GetSelectedItemCount(this_02);
      UDS_M_ItemImplBase::SetQuantity(this_01,iVar1);
      this_00 = (this->VM_Item).field0_0x0.DebugPtr;
      if (this_00 != (UDS_VM_Item *)0x0) {
        puVar2 = (undefined8 *)(**(code **)(local_res10->_padding_ + 0x310))(local_res10,local_18);
        local_28.Object = (FDS_ViewModelContext *)*puVar2;
        local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar2[1]
        ;
        if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_28);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_10);
      }
    }
  }
  return;
}

// OnSetViewModel @ 14bea3650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft_Crafting_Info::OnSetViewModel
          (UDS_VM_ItemCraft_Crafting_Info *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_ItemCraft_Crafting_Info_Slot *this_00;
  UDS_VM_ItemCraft_Crafting_Info_Material *this_01;
  UDS_VM_ItemCraft_Crafting_Info_Time *this_02;
  UDS_VM_ItemCraft_Crafting_Info_Quantity *this_03;
  code *pcVar2;
  UDS_M_ItemImplBase *this_04;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UDS_CraftManager *this_05;
  undefined8 *puVar6;
  UClass *pUVar7;
  TSharedPtr<FDS_ViewModelContext,1> *pTVar8;
  TObjectPtr<UDS_VM_Item>_u_0 TVar9;
  undefined1 auStackY_248 [32];
  TObjectPtr<UDS_VM_Item>_u_0 local_218;
  UDS_M_ItemImplBase *local_210;
  TSharedPtr<FDS_ViewModelContext,1> local_208;
  undefined8 local_1f8;
  TReferenceControllerBase<1> *local_1f0;
  TSharedPtr<FDS_ViewModelContext,1> local_1e8;
  TSharedPtr<FDS_ViewModelContext,1> local_1d8;
  TSharedPtr<FDS_ViewModelContext,1> local_1c8;
  TSharedPtr<FDS_ViewModelContext_ItemCrafting_Info,1> local_1b8;
  TSharedPtr<FDS_ViewModelContext,1> local_1a8;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  undefined1 local_188 [8];
  TReferenceControllerBase<1> *local_180;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_1a8.Object = param_1->Object;
  local_1a8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = &local_1a8;
  SafeCast<FDS_ViewModelContext_ItemCrafting_Info>(&local_1b8,pTVar8);
  if (local_1b8.Object == (FDS_ViewModelContext_ItemCrafting_Info *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_ItemCraft_Crafting_Info::OnSetViewModel",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_148.Ptr,0x3c,
                 L"FDS_ViewModelContext_ItemCrafting_Info is nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    if ((this->VM_ItemCraft_Info_Slot).field0_0x0.DebugPtr !=
        (UDS_VM_ItemCraft_Crafting_Info_Slot *)0x0) {
      MakeContext<FDS_ViewModelContext>(&local_208);
      if ((local_208.Object == (FDS_ViewModelContext *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (local_208.Object)->ViewModelTemplateKey = ItemCraft_Crafting_Info_Slot;
      this_00 = (this->VM_ItemCraft_Info_Slot).field0_0x0.DebugPtr;
      local_198.Object = local_208.Object;
      local_198.SharedReferenceCount.ReferenceController =
           local_208.SharedReferenceCount.ReferenceController;
      if (local_208.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar8 = &local_198;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,pTVar8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_208.SharedReferenceCount.ReferenceController);
    }
    if (((this->VM_Item).field0_0x0.DebugPtr != (UDS_VM_Item *)0x0) &&
       (this_05 = UDS_CraftManager::GetInst(), this_05 != (UDS_CraftManager *)0x0)) {
      UDS_CraftManager::GetSelectedItemBaseTID(this_05);
      DS_ItemDataUtil::CreateItemModel
                ((EDS_ItemSlotStateType)&local_210,
                 (int)CONCAT71((int7)((ulonglong)pTVar8 >> 8),0x12));
      this_04 = local_210;
      if (local_210 != (UDS_M_ItemImplBase *)0x0) {
        iVar4 = UDS_CraftManager::GetSelectedItemCount(this_05);
        UDS_M_ItemImplBase::SetQuantity(this_04,iVar4);
        puVar6 = (undefined8 *)(**(code **)(local_210->_padding_ + 0x310))(local_210,local_188);
        pTVar1 = (TReferenceControllerBase<1> *)puVar6[1];
        local_1f8 = *puVar6;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1f0 = pTVar1;
        DS_ViewModelTemplateUtil::CreateViewModel
                  ((UObject *)&local_218.ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)this);
        if (local_218.DebugPtr == (UDS_VM_Item *)0x0) {
          TVar9.DebugPtr = (UDS_VM_Item *)0x0;
        }
        else {
          pUVar7 = Z_Construct_UClass_UDS_VM_Item_NoRegister();
          bVar3 = FObjectPtr::IsA(&local_218.ObjectPtr,pUVar7);
          TVar9.DebugPtr = (UDS_VM_Item *)0x0;
          if (bVar3) {
            TVar9 = local_218;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar9.DebugPtr != (UDS_VM_Item *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar9.DebugPtr);
        }
        (this->VM_Item).field0_0x0.DebugPtr = (UDS_VM_Item *)TVar9;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_180);
      }
    }
    if ((this->VM_ItemCraft_Info_Material).field0_0x0.DebugPtr !=
        (UDS_VM_ItemCraft_Crafting_Info_Material *)0x0) {
      MakeContext<FDS_ViewModelContext>(&local_1e8);
      if ((local_1e8.Object == (FDS_ViewModelContext *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (local_1e8.Object)->ViewModelTemplateKey = ItemCraft_Crafting_Info_Material;
      this_01 = (this->VM_ItemCraft_Info_Material).field0_0x0.DebugPtr;
      local_178.Object = local_1e8.Object;
      local_178.SharedReferenceCount.ReferenceController =
           local_1e8.SharedReferenceCount.ReferenceController;
      if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_178);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8.SharedReferenceCount.ReferenceController);
    }
    if ((this->VM_ItemCraft_Info_Time).field0_0x0.DebugPtr !=
        (UDS_VM_ItemCraft_Crafting_Info_Time *)0x0) {
      MakeContext<FDS_ViewModelContext>(&local_1d8);
      if ((local_1d8.Object == (FDS_ViewModelContext *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (local_1d8.Object)->ViewModelTemplateKey = ItemCraft_Crafting_Info_Time;
      this_02 = (this->VM_ItemCraft_Info_Time).field0_0x0.DebugPtr;
      local_168.Object = local_1d8.Object;
      local_168.SharedReferenceCount.ReferenceController =
           local_1d8.SharedReferenceCount.ReferenceController;
      if (local_1d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_02,&local_168);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1d8.SharedReferenceCount.ReferenceController);
    }
    if ((this->VM_ItemCraft_Info_Quantity).field0_0x0.DebugPtr !=
        (UDS_VM_ItemCraft_Crafting_Info_Quantity *)0x0) {
      MakeContext<FDS_ViewModelContext>(&local_1c8);
      if ((local_1c8.Object == (FDS_ViewModelContext *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (local_1c8.Object)->ViewModelTemplateKey = ItemCraft_Crafting_Info_Quantity;
      this_03 = (this->VM_ItemCraft_Info_Quantity).field0_0x0.DebugPtr;
      local_158.Object = local_1c8.Object;
      local_158.SharedReferenceCount.ReferenceController =
           local_1c8.SharedReferenceCount.ReferenceController;
      if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_03,&local_158);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c8.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bebc780

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft_Crafting_Info::UnbindModel(UDS_VM_ItemCraft_Crafting_Info *this)

{
  UDS_ItemCraftEvent *pUVar1;
  
  pUVar1 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeCraftManager_ItemCraftListTID,this);
    return;
  }
  return;
}

