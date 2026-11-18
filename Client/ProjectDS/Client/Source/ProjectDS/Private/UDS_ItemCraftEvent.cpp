// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b4d0fd0

UClass * __cdecl UDS_ItemCraftEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ItemCraftEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ItemCraftEvent",
               &Z_Registration_Info_UClass_UDS_ItemCraftEvent.InnerSingleton,
               StaticRegisterNativesUDS_ItemCraftEvent,0x188,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ItemCraftEvent>,
               InternalVTableHelperCtorCaller<UDS_ItemCraftEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ItemCraftEvent.InnerSingleton;
}

// UDS_ItemCraftEvent @ 14b4d34e0

UDS_ItemCraftEvent * __thiscall
UDS_ItemCraftEvent::UDS_ItemCraftEvent(UDS_ItemCraftEvent *this,FVTableHelper *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ItemCraftEvent__6B_;
  *(undefined8 *)&(this->OnSelectCraftSlotEvent).Delegate = 0;
  *(undefined8 *)&(this->OnSelectCraftSlotEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectCraftSlotEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectCraftCategoryEvent).Delegate = 0;
  *(undefined8 *)&(this->OnSelectCraftCategoryEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectCraftCategoryEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeCraftQuantityEvent).Delegate = 0;
  *(undefined8 *)&(this->OnChangeCraftQuantityEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeCraftQuantityEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftListTID).Delegate = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftListTID).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftListTID).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftCategoryType).Delegate = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftCategoryType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftCategoryType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftListTID_Complete).Delegate = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftListTID_Complete).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftListTID_Complete).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftQuantity).Delegate = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftQuantity).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftQuantity).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftQuantity_Complete).Delegate = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftQuantity_Complete).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftQuantity_Complete).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_MaterialState).Delegate = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_MaterialState).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_MaterialState).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_MoneyState).Delegate = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_MoneyState).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_MoneyState).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectCraftTabEvent).Delegate = 0;
  *(undefined8 *)&(this->OnSelectCraftTabEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectCraftTabEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectCraftSlotEvent).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectCraftCategoryEvent).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeCraftQuantityEvent).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftListTID).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftCategoryType).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftListTID_Complete).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftQuantity).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftQuantity_Complete).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeCraftManager_MaterialState).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeCraftManager_MoneyState).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectCraftTabEvent).Delegate.field_0x18 = 2;
  return this;
}

// UDS_ItemCraftEvent @ 14b4d3650

UDS_ItemCraftEvent * __thiscall
UDS_ItemCraftEvent::UDS_ItemCraftEvent(UDS_ItemCraftEvent *this,FObjectInitializer *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ItemCraftEvent__6B_;
  *(undefined8 *)&(this->OnSelectCraftSlotEvent).Delegate = 0;
  *(undefined8 *)&(this->OnSelectCraftSlotEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectCraftSlotEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectCraftCategoryEvent).Delegate = 0;
  *(undefined8 *)&(this->OnSelectCraftCategoryEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectCraftCategoryEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeCraftQuantityEvent).Delegate = 0;
  *(undefined8 *)&(this->OnChangeCraftQuantityEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeCraftQuantityEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftListTID).Delegate = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftListTID).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftListTID).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftCategoryType).Delegate = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftCategoryType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftCategoryType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftListTID_Complete).Delegate = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftListTID_Complete).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftListTID_Complete).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftQuantity).Delegate = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftQuantity).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftQuantity).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftQuantity_Complete).Delegate = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftQuantity_Complete).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftQuantity_Complete).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_MaterialState).Delegate = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_MaterialState).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_MaterialState).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_MoneyState).Delegate = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_MoneyState).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeCraftManager_MoneyState).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectCraftTabEvent).Delegate = 0;
  *(undefined8 *)&(this->OnSelectCraftTabEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectCraftTabEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectCraftSlotEvent).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectCraftCategoryEvent).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeCraftQuantityEvent).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftListTID).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftCategoryType).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftListTID_Complete).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftQuantity).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeCraftManager_ItemCraftQuantity_Complete).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeCraftManager_MaterialState).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeCraftManager_MoneyState).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectCraftTabEvent).Delegate.field_0x18 = 2;
  return this;
}

// ~UDS_ItemCraftEvent @ 14b4d4330

void __thiscall UDS_ItemCraftEvent::~UDS_ItemCraftEvent(UDS_ItemCraftEvent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ItemCraftEvent__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectCraftTabEvent).Delegate.field_0x8,
             *(int *)&(this->OnSelectCraftTabEvent).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectCraftTabEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectCraftTabEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeCraftManager_MoneyState).Delegate.field_0x8,
             *(int *)&(this->OnChangeCraftManager_MoneyState).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangeCraftManager_MoneyState).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeCraftManager_MoneyState);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeCraftManager_MaterialState).Delegate.field_0x8,
             *(int *)&(this->OnChangeCraftManager_MaterialState).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangeCraftManager_MaterialState).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeCraftManager_MaterialState);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeCraftManager_ItemCraftQuantity_Complete).Delegate.field_0x8,
             *(int *)&(this->OnChangeCraftManager_ItemCraftQuantity_Complete).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangeCraftManager_ItemCraftQuantity_Complete).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeCraftManager_ItemCraftQuantity_Complete)
  ;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeCraftManager_ItemCraftQuantity).Delegate.field_0x8,
             *(int *)&(this->OnChangeCraftManager_ItemCraftQuantity).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangeCraftManager_ItemCraftQuantity).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeCraftManager_ItemCraftQuantity);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeCraftManager_ItemCraftListTID_Complete).Delegate.field_0x8,
             *(int *)&(this->OnChangeCraftManager_ItemCraftListTID_Complete).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangeCraftManager_ItemCraftListTID_Complete).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeCraftManager_ItemCraftListTID_Complete);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeCraftManager_ItemCraftCategoryType).Delegate.field_0x8,
             *(int *)&(this->OnChangeCraftManager_ItemCraftCategoryType).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangeCraftManager_ItemCraftCategoryType).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeCraftManager_ItemCraftCategoryType);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeCraftManager_ItemCraftListTID).Delegate.field_0x8,
             *(int *)&(this->OnChangeCraftManager_ItemCraftListTID).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangeCraftManager_ItemCraftListTID).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeCraftManager_ItemCraftListTID);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeCraftQuantityEvent).Delegate.field_0x8,
             *(int *)&(this->OnChangeCraftQuantityEvent).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangeCraftQuantityEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeCraftQuantityEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectCraftCategoryEvent).Delegate.field_0x8,
             *(int *)&(this->OnSelectCraftCategoryEvent).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectCraftCategoryEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectCraftCategoryEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectCraftSlotEvent).Delegate.field_0x8,
             *(int *)&(this->OnSelectCraftSlotEvent).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectCraftSlotEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectCraftSlotEvent);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4d5140

UClass * __cdecl UDS_ItemCraftEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ItemCraftEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ItemCraftEvent",
               &Z_Registration_Info_UClass_UDS_ItemCraftEvent.InnerSingleton,
               StaticRegisterNativesUDS_ItemCraftEvent,0x188,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ItemCraftEvent>,
               InternalVTableHelperCtorCaller<UDS_ItemCraftEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ItemCraftEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_ItemCraftEvent @ 14b4d5510

void __cdecl UDS_ItemCraftEvent::StaticRegisterNativesUDS_ItemCraftEvent(void)

{
  return;
}

// __VTableCtorCaller @ 14b4d6240

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_ItemCraftEvent::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UDS_EventBase::UDS_EventBase((UDS_EventBase *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDS_ItemCraftEvent__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 2;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 2;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 2;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 2;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 2;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 2;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 2;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 2;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 8) = 2;
    *(undefined8 *)&pUVar1[8].field_0x8 = 0;
    *(undefined8 *)&pUVar1[8].field_0x10 = 0;
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined8 *)&pUVar1[8].field_0x20 = 2;
    *(undefined8 *)(pUVar1 + 9) = 0;
    *(undefined8 *)&pUVar1[9].field_0x8 = 0;
    *(undefined8 *)&pUVar1[9].field_0x10 = 0;
    *(undefined8 *)&pUVar1[9].field_0x18 = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// GetEvent @ 14baaa0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_ItemCraftEvent * __cdecl UDS_ItemCraftEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_ItemCraftEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_ItemCraftEvent>(this);
      return pUVar2;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x31,
                 L"Cannot access event during UDS_EventManager destruction.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return (UDS_ItemCraftEvent *)0x0;
}

