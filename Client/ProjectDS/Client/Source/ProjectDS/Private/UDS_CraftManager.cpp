// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// StaticClass @ 14b47b9b0

UClass * __cdecl UDS_CraftManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CraftManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CraftManager",
               &Z_Registration_Info_UClass_UDS_CraftManager.InnerSingleton,
               StaticRegisterNativesUDS_CraftManager,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_CraftManager>,
               InternalVTableHelperCtorCaller<UDS_CraftManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CraftManager.InnerSingleton;
}

// UDS_CraftManager @ 14b47d450

UDS_CraftManager * __thiscall
UDS_CraftManager::UDS_CraftManager(UDS_CraftManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->CraftQuantity = 1;
  this->_padding_ = (longlong)&___7UDS_CraftManager__6B_;
  return this;
}

// UDS_CraftManager @ 14b47d480

UDS_CraftManager * __thiscall
UDS_CraftManager::UDS_CraftManager(UDS_CraftManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->CraftQuantity = 1;
  this->_padding_ = (longlong)&___7UDS_CraftManager__6B_;
  return this;
}

// ~UDS_CraftManager @ 14b47dd40

void __thiscall UDS_CraftManager::~UDS_CraftManager(UDS_CraftManager *this)

{
  this->_padding_ = (longlong)&___7UDS_CraftManager__6B_;
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b47ee70

UClass * __cdecl UDS_CraftManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CraftManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CraftManager",
               &Z_Registration_Info_UClass_UDS_CraftManager.InnerSingleton,
               StaticRegisterNativesUDS_CraftManager,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_CraftManager>,
               InternalVTableHelperCtorCaller<UDS_CraftManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CraftManager.InnerSingleton;
}

// StaticRegisterNativesUDS_CraftManager @ 14b47f590

void __cdecl UDS_CraftManager::StaticRegisterNativesUDS_CraftManager(void)

{
  return;
}

// Created @ 14ba9d480

void __thiscall UDS_CraftManager::Created(UDS_CraftManager *this)

{
  UDS_ItemCraftEvent *pUVar1;
  
  *(undefined1 *)&this->_padding_ = 0;
  pUVar1 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectCraftSlotEvent
               ,this);
    TMulticastDelegateRegistration<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_CraftManager>
              ((TMulticastDelegateRegistration<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnSelectCraftSlotEvent,(UDS_CraftManager *)&stack0x00000008,
               (pmf_b21bc65c)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectCraftCategoryEvent,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_CraftCategoryType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_CraftManager>
              (&pUVar1->OnSelectCraftCategoryEvent,(UDS_CraftManager *)&stack0x00000008,
               (pmf_3645081f)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeCraftQuantityEvent,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_CraftManager>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeCraftQuantityEvent,(UDS_CraftManager *)&stack0x00000008,
               (pmf_3ef97290)this);
  }
  return;
}

// GetInst @ 14baab5b0

UDS_CraftManager * __cdecl UDS_CraftManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_CraftManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_CraftManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_CraftManager_NoRegister();
  pUVar3 = (UDS_CraftManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_CraftManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_CraftManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_CraftManager *)0x0;
}

// GetSelectedCraftMaxValue @ 14baaf8b0

int __thiscall UDS_CraftManager::GetSelectedCraftMaxValue(UDS_CraftManager *this)

{
  FDS_ItemCraftListTableRow *pFVar1;
  
  pFVar1 = FDS_ItemCraftListTableRow::Get((longlong)this->SelectedCraftListTID,true);
  if (pFVar1 != (FDS_ItemCraftListTableRow *)0x0) {
    return pFVar1->CraftMaxValue;
  }
  return 0;
}

// GetSelectedCraftTime @ 14baaf8e0

double __thiscall UDS_CraftManager::GetSelectedCraftTime(UDS_CraftManager *this)

{
  FDS_ItemCraftListTableRow *pFVar1;
  
  pFVar1 = FDS_ItemCraftListTableRow::Get((longlong)this->SelectedCraftListTID,true);
  if (pFVar1 != (FDS_ItemCraftListTableRow *)0x0) {
    return pFVar1->CraftTime;
  }
  return 0.0;
}

// GetSelectedItemBaseTID @ 14baaf910

int __thiscall UDS_CraftManager::GetSelectedItemBaseTID(UDS_CraftManager *this)

{
  FDS_ItemCraftListTableRow *pFVar1;
  
  pFVar1 = FDS_ItemCraftListTableRow::Get((longlong)this->SelectedCraftListTID,true);
  if (pFVar1 != (FDS_ItemCraftListTableRow *)0x0) {
    return pFVar1->ID_CraftItem;
  }
  return 0;
}

// GetSelectedItemCount @ 14baaf940

int __thiscall UDS_CraftManager::GetSelectedItemCount(UDS_CraftManager *this)

{
  FDS_ItemCraftListTableRow *pFVar1;
  
  pFVar1 = FDS_ItemCraftListTableRow::Get((longlong)this->SelectedCraftListTID,true);
  if (pFVar1 != (FDS_ItemCraftListTableRow *)0x0) {
    return pFVar1->CraftItemCount;
  }
  return 0;
}

// GetSelectedItemName @ 14baaf970

FText * __thiscall
UDS_CraftManager::GetSelectedItemName(UDS_CraftManager *this,FText *__return_storage_ptr__)

{
  FDS_ItemCraftListTableRow *this_00;
  FDS_ItemBaseTableRow *pFVar1;
  FString *pFVar2;
  
  this_00 = FDS_ItemCraftListTableRow::Get((longlong)this->SelectedCraftListTID,true);
  if (this_00 != (FDS_ItemCraftListTableRow *)0x0) {
    pFVar1 = FDS_ItemCraftListTableRow::ID_CraftItemTable(this_00);
    pFVar2 = (FString *)(**(code **)((pFVar1->ID_Name)._padding_ + 8))(&pFVar1->ID_Name);
    FText::FromString(__return_storage_ptr__,pFVar2);
    return __return_storage_ptr__;
  }
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSelectedMaterialItemCounts @ 14baaf9d0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_CraftManager::GetSelectedMaterialItemCounts
          (UDS_CraftManager *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FDS_ItemCraftListTableRow *pFVar3;
  
  pFVar3 = FDS_ItemCraftListTableRow::Get((longlong)this->SelectedCraftListTID,true);
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  if (pFVar3 == (FDS_ItemCraftListTableRow *)0x0) {
    __return_storage_ptr__->ArrayNum = 0;
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  _Src = (pFVar3->IngredientItemValue).AllocatorInstance.Data;
  iVar2 = (pFVar3->IngredientItemValue).ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,piVar1);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  return __return_storage_ptr__;
}

// GetSelectedMaterialItemTIDs @ 14baafa80

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_CraftManager::GetSelectedMaterialItemTIDs
          (UDS_CraftManager *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FDS_ItemCraftListTableRow *pFVar3;
  
  pFVar3 = FDS_ItemCraftListTableRow::Get((longlong)this->SelectedCraftListTID,true);
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  if (pFVar3 == (FDS_ItemCraftListTableRow *)0x0) {
    __return_storage_ptr__->ArrayNum = 0;
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  _Src = (pFVar3->ID_IngredientItem).AllocatorInstance.Data;
  iVar2 = (pFVar3->ID_IngredientItem).ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,piVar1);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  return __return_storage_ptr__;
}

// GetSelectedMoneyTypes @ 14baafb30

TArray<EDS_MoneyType,TSizedDefaultAllocator<32>_> * __thiscall
UDS_CraftManager::GetSelectedMoneyTypes
          (UDS_CraftManager *this,
          TArray<EDS_MoneyType,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FDS_ItemCraftListTableRow *pFVar3;
  
  pFVar3 = FDS_ItemCraftListTableRow::Get((longlong)this->SelectedCraftListTID,true);
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  if (pFVar3 == (FDS_ItemCraftListTableRow *)0x0) {
    __return_storage_ptr__->ArrayNum = 0;
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  _Src = (pFVar3->MoneyType).AllocatorInstance.Data;
  iVar2 = (pFVar3->MoneyType).ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,piVar1);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar2);
  return __return_storage_ptr__;
}

// GetSelectedMoneyValues @ 14baafbe0

TArray<__int64,TSizedDefaultAllocator<32>_> * __thiscall
UDS_CraftManager::GetSelectedMoneyValues
          (UDS_CraftManager *this,
          TArray<__int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FDS_ItemCraftListTableRow *pFVar3;
  
  pFVar3 = FDS_ItemCraftListTableRow::Get((longlong)this->SelectedCraftListTID,true);
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  if (pFVar3 == (FDS_ItemCraftListTableRow *)0x0) {
    __return_storage_ptr__->ArrayNum = 0;
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  _Src = (pFVar3->MoneyValue).AllocatorInstance.Data;
  iVar2 = (pFVar3->MoneyValue).ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,piVar1);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  return __return_storage_ptr__;
}

// OnChangedCraftQuantityEvent @ 14babe670

void __thiscall UDS_CraftManager::OnChangedCraftQuantityEvent(UDS_CraftManager *this,int param_1)

{
  bool bVar1;
  UDS_ItemCraftEvent *pUVar2;
  
  if (this->CraftQuantity != param_1) {
    this->CraftQuantity = param_1;
    pUVar2 = UDS_ItemCraftEvent::GetEvent();
    if (pUVar2 != (UDS_ItemCraftEvent *)0x0) {
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar2->OnChangeCraftManager_ItemCraftQuantity);
      if (bVar1) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar2->OnChangeCraftManager_ItemCraftQuantity).Delegate);
      }
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar2->OnChangeCraftManager_ItemCraftQuantity_Complete);
      if (bVar1) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar2->OnChangeCraftManager_ItemCraftQuantity_Complete).Delegate);
        return;
      }
    }
  }
  return;
}

// OnSelectedCraftCategoryEvent @ 14bac2810

void __thiscall
UDS_CraftManager::OnSelectedCraftCategoryEvent
          (UDS_CraftManager *this,EDS_CraftCategoryType *param_1)

{
  bool bVar1;
  UDS_ItemCraftEvent *pUVar2;
  
  this->SelectedCraftCategoryType = *param_1;
  pUVar2 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar2 != (UDS_ItemCraftEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnChangeCraftManager_ItemCraftCategoryType);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnChangeCraftManager_ItemCraftCategoryType).Delegate);
      return;
    }
  }
  return;
}

// OnSelectedCraftItemEvent @ 14bac2860

void __thiscall UDS_CraftManager::OnSelectedCraftItemEvent(UDS_CraftManager *this,int *param_1)

{
  bool bVar1;
  UDS_ItemCraftEvent *pUVar2;
  
  if (this->SelectedCraftListTID != *param_1) {
    this->CraftQuantity = 1;
    this->SelectedCraftListTID = *param_1;
    pUVar2 = UDS_ItemCraftEvent::GetEvent();
    if (pUVar2 != (UDS_ItemCraftEvent *)0x0) {
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar2->OnChangeCraftManager_ItemCraftListTID);
      if (bVar1) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar2->OnChangeCraftManager_ItemCraftListTID).Delegate);
      }
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar2->OnChangeCraftManager_ItemCraftListTID_Complete);
      if (bVar1) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar2->OnChangeCraftManager_ItemCraftListTID_Complete).Delegate);
        return;
      }
    }
  }
  return;
}

// SetEngoughMaterial @ 14bacc420

void __thiscall UDS_CraftManager::SetEngoughMaterial(UDS_CraftManager *this,bool *param_1)

{
  bool bVar1;
  UDS_ItemCraftEvent *pUVar2;
  
  if ((this->IsEnoughMaterial == None) || (this->IsEnoughMaterial == Enough)) {
    this->IsEnoughMaterial = (*param_1 == false) + Enough;
    pUVar2 = UDS_ItemCraftEvent::GetEvent();
    if (pUVar2 != (UDS_ItemCraftEvent *)0x0) {
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar2->OnChangeCraftManager_MaterialState);
      if (bVar1) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar2->OnChangeCraftManager_MaterialState).Delegate);
        return;
      }
    }
  }
  return;
}

// SetEngoughMoney @ 14bacc480

void __thiscall UDS_CraftManager::SetEngoughMoney(UDS_CraftManager *this,bool *param_1)

{
  bool bVar1;
  UDS_ItemCraftEvent *pUVar2;
  
  if ((this->IsEnoughMoney == None) || (this->IsEnoughMoney == Enough)) {
    this->IsEnoughMoney = (*param_1 == false) + Enough;
    pUVar2 = UDS_ItemCraftEvent::GetEvent();
    if (pUVar2 != (UDS_ItemCraftEvent *)0x0) {
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar2->OnChangeCraftManager_MoneyState);
      if (bVar1) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar2->OnChangeCraftManager_MoneyState).Delegate);
        return;
      }
    }
  }
  return;
}

