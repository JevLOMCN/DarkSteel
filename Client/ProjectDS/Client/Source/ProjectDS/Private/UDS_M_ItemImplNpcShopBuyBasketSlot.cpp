// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b51c940

UClass * __cdecl UDS_M_ItemImplNpcShopBuyBasketSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplNpcShopBuyBasketSlot.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplNpcShopBuyBasketSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplNpcShopBuyBasketSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplNpcShopBuyBasketSlot,0x208,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemImplNpcShopBuyBasketSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplNpcShopBuyBasketSlot>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplNpcShopBuyBasketSlot.InnerSingleton;
}

// UDS_M_ItemImplNpcShopBuyBasketSlot @ 14b521490

UDS_M_ItemImplNpcShopBuyBasketSlot * __thiscall
UDS_M_ItemImplNpcShopBuyBasketSlot::UDS_M_ItemImplNpcShopBuyBasketSlot
          (UDS_M_ItemImplNpcShopBuyBasketSlot *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->NpcFunctionShop).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->NpcFunctionShop).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->NPCShopData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NPCShopData).WeakPtr,(FObjectPtr)&local_res8);
  this->BasketSlotIndex = -1;
  this->ShopListTableID = 0;
  return this;
}

// UDS_M_ItemImplNpcShopBuyBasketSlot @ 14b521550

UDS_M_ItemImplNpcShopBuyBasketSlot * __thiscall
UDS_M_ItemImplNpcShopBuyBasketSlot::UDS_M_ItemImplNpcShopBuyBasketSlot
          (UDS_M_ItemImplNpcShopBuyBasketSlot *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->NpcFunctionShop).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->NpcFunctionShop).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->NPCShopData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NPCShopData).WeakPtr,(FObjectPtr)&local_res8);
  this->BasketSlotIndex = -1;
  this->ShopListTableID = 0;
  return this;
}

// GetPrivateStaticClass @ 14b525b60

UClass * __cdecl UDS_M_ItemImplNpcShopBuyBasketSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplNpcShopBuyBasketSlot.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplNpcShopBuyBasketSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplNpcShopBuyBasketSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplNpcShopBuyBasketSlot,0x208,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemImplNpcShopBuyBasketSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplNpcShopBuyBasketSlot>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplNpcShopBuyBasketSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemImplNpcShopBuyBasketSlot @ 14b527480

void __cdecl
UDS_M_ItemImplNpcShopBuyBasketSlot::StaticRegisterNativesUDS_M_ItemImplNpcShopBuyBasketSlot(void)

{
  return;
}

// ~UDS_M_ItemImplNpcShopBuyBasketSlot @ 14bd43dc0

void __thiscall
UDS_M_ItemImplNpcShopBuyBasketSlot::~UDS_M_ItemImplNpcShopBuyBasketSlot
          (UDS_M_ItemImplNpcShopBuyBasketSlot *this)

{
  UDS_NPCShopEvent *pUVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedBasketSlot,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnRemovedBasketSlot,
               this);
    FDS_FilteredEventDelegate<enum_EDS_ItemBasketType_const_,int_const_>::
    Remove<UDS_M_ItemImplNpcShopBuyBasketSlot>(&pUVar1->OnSelectedBasketSlot,this);
  }
  UDS_M_ItemImplBase::~UDS_M_ItemImplBase((UDS_M_ItemImplBase *)this);
  return;
}

// GetQuantity @ 14bd5fa30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UDS_M_ItemImplNpcShopBuyBasketSlot::GetQuantity(UDS_M_ItemImplNpcShopBuyBasketSlot *this)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_NPCShopData *this_00;
  FDS_NPCShopGoodsInfo *pFVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar2 = TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr>::UEOpEquals(&this->NPCShopData,(void *)0x0)
  ;
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_M_ItemImplNpcShopBuyBasketSlot::GetQuantity",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x2a,L"NPCShopData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return 0;
      }
    }
  }
  else {
    this_00 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
    pFVar4 = UDS_NPCShopData::GetNPCShopBasketGoodsInfoByBasketSlotIndex
                       (this_00,this->BasketSlotIndex);
    if (pFVar4 != (FDS_NPCShopGoodsInfo *)0x0) {
      iVar1 = pFVar4->Quantity;
      UDS_M_ItemImplBase::SetQuantity((UDS_M_ItemImplBase *)this,iVar1);
      return iVar1;
    }
  }
  return 0;
}

// InitItemImplMap @ 14bd68270

void __thiscall
UDS_M_ItemImplNpcShopBuyBasketSlot::InitItemImplMap(UDS_M_ItemImplNpcShopBuyBasketSlot *this)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UClass *local_res20;
  undefined1 *local_18;
  UClass **local_10;
  
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplNpcShopBuyBasketSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = 0x23;
  if (UDS_M_ItemImplBase::ItemImplMap._8_4_ != UDS_M_ItemImplBase::ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (UDS_M_ItemImplBase::ItemImplMap._64_8_ != 0) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(UDS_M_ItemImplBase::ItemImplMap._72_4_ - 1 & 0x23) * 4);
    while (iVar1 != -1) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '#') {
        if (lVar2 != 0) {
          return;
        }
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  local_18 = local_res10;
  local_10 = &local_res20;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&>_>
            (&UDS_M_ItemImplBase::ItemImplMap,(uint)local_res18,
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)0x23,
             (bool *)&local_18);
  return;
}

// InitModel @ 14bd68b40

void __thiscall
UDS_M_ItemImplNpcShopBuyBasketSlot::InitModel
          (UDS_M_ItemImplNpcShopBuyBasketSlot *this,EDS_ItemSlotStateType param_1,int param_2)

{
  TMap<EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  UDS_NPCShopEvent *pUVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 local_res8 [2];
  int local_res20 [2];
  undefined4 *local_38 [2];
  code *local_28;
  undefined8 uStack_20;
  
  UDS_M_ItemImplBase::SetItemSlotType((UDS_M_ItemImplBase *)this,param_1);
  (**(code **)(this->_padding_ + 0x348))(this,param_2);
  (**(code **)(this->_padding_ + 0x330))(this);
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    local_28 = OnUpdatedBasketSlot;
    uStack_20._0_4_ = 0;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedBasketSlot,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_M_ItemImplNpcShopBuyBasketSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdatedBasketSlot,(UDS_M_ItemImplNpcShopBuyBasketSlot *)local_res8,
               (pmf_ccbd614b *)this);
    uStack_20._0_4_ = 0;
    local_28 = OnRemovedBasketSlot;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnRemovedBasketSlot,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_M_ItemImplNpcShopBuyBasketSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnRemovedBasketSlot,(UDS_M_ItemImplNpcShopBuyBasketSlot *)local_res8,
               (pmf_ccbd614b *)this);
    local_res8[0] = 1;
    local_28 = OnSelectedBasketSlot;
    this_00 = &(pUVar1->OnSelectedBasketSlot).Subscriptions;
    uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
    if (*(int *)&(pUVar1->OnSelectedBasketSlot).Subscriptions.field_0x8 !=
        *(int *)&(pUVar1->OnSelectedBasketSlot).Subscriptions.field_0x34) {
      puVar3 = *(undefined1 **)&(pUVar1->OnSelectedBasketSlot).Subscriptions.field_0x40;
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &(pUVar1->OnSelectedBasketSlot).Subscriptions.field_0x38;
      }
      iVar4 = *(int *)(puVar3 + (ulonglong)
                                (*(int *)&(pUVar1->OnSelectedBasketSlot).Subscriptions.field_0x48 -
                                 1U & 1) * 4);
      if (iVar4 != -1) {
        do {
          piVar2 = (int *)((longlong)iVar4 * 0x50 + *(longlong *)this_00);
          if (*piVar2 == 1) {
            if (piVar2 != (int *)0x0) goto LAB_14bd68cbf;
            break;
          }
          iVar4 = piVar2[0x12];
        } while (iVar4 != -1);
      }
    }
    local_38[0] = local_res8;
    TSet<TTuple<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_ItemBasketType_const_&>_>
              (this_00,(uint)local_res20,
               (TKeyInitializer<EDS_ItemBasketType_const_&> *)&DAT_00000001,(bool *)local_38);
    piVar2 = (int *)((longlong)local_res20[0] * 0x50 + *(longlong *)this_00);
LAB_14bd68cbf:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar2 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_M_ItemImplNpcShopBuyBasketSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy> *)
               (piVar2 + 2),(UDS_M_ItemImplNpcShopBuyBasketSlot *)local_res20,(pmf_ccbd614b *)this);
  }
  return;
}

// OnEventMouseButtonUp @ 14bd774c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplNpcShopBuyBasketSlot::OnEventMouseButtonUp
          (UDS_M_ItemImplNpcShopBuyBasketSlot *this,FDS_WidgetPointerEventField *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  bool bVar5;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  UDS_M_ItemImplBase::OnEventMouseButtonUp((UDS_M_ItemImplBase *)this,param_1);
  pTVar1 = (param_1->PointerEvent).EffectingButton.KeyDetails.SharedReferenceCount.
           ReferenceController;
  FVar2 = (param_1->PointerEvent).EffectingButton.KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar5 = FVar2 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar5) {
    bVar5 = FWeakObjectPtr::IsValid(&(this->NpcFunctionShop).WeakPtr);
    if (bVar5) {
      if ((0 < this->ShopListTableID) && (-1 < this->BasketSlotIndex)) {
        pUVar4 = FWeakObjectPtr::Get(&(this->NpcFunctionShop).WeakPtr);
        (**(code **)(*(longlong *)&pUVar4[1].field_0x10 + 0x98))
                  (&pUVar4[1].field_0x10,this->BasketSlotIndex);
      }
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_M_ItemImplNpcShopBuyBasketSlot::OnEventMouseButtonUp",0x38,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0x5c,L"NpcFunctionShop.IsValid() == false");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return;
}

// OnEventMouseEnter @ 14bd78190

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplNpcShopBuyBasketSlot::OnEventMouseEnter
          (UDS_M_ItemImplNpcShopBuyBasketSlot *this,FDS_WidgetPointerEventField *param_1)

{
  UDS_UserWidget *pUVar1;
  code *pcVar2;
  EDS_ItemSlotStateType EVar3;
  bool bVar4;
  FDS_ItemSlotStateTableRow *pFVar5;
  FName *pFVar6;
  TObjectPtr<UDS_ModelEventItemBase> TVar7;
  UObject *pUVar8;
  FWeakObjectPtr FStackX_18;
  FWeakObjectPtr FStackX_20;
  UDS_UserWidget *pUStack_38;
  UObject *pUStack_30;
  FName aFStack_28 [2];
  
  if (this->ShopListTableID < 1) {
    return;
  }
  EVar3 = UDS_M_ItemImplBase::GetItemSlotType((UDS_M_ItemImplBase *)this);
  pFVar5 = FDS_ItemSlotStateTableRow::Get((ulonglong)EVar3,true);
  if (pFVar5 == (FDS_ItemSlotStateTableRow *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3571834003243662473>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                       ,0x377,"false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
              ((FDS_DataContainer *)&this->_padding_,Hovered,true);
    pFVar6 = ::FName::FName(aFStack_28,L"Ani_Hover");
    UDS_M_ItemImplBase::PlayAnimationEvent((UDS_M_ItemImplBase *)this,*pFVar6,PlayForward);
    if (pFVar5->IsDetailTooltip != false) {
      pUVar1 = param_1->TargetWidget;
      pcVar2 = *(code **)(this->_padding_ + 0x6b8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_UserWidget *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      FStackX_20.ObjectIndex = 0;
      FStackX_20.ObjectSerialNumber = 0;
      pUStack_38 = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_UserWidget *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      FWeakObjectPtr::operator=(&FStackX_20,(FObjectPtr)&pUStack_38);
      (*pcVar2)(this,FStackX_20);
      return;
    }
    TVar7 = UDS_ModelBase::CreateEvent<UDS_ModelEventItemBase>((UDS_ModelBase *)this);
    pUStack_30 = *(UObject **)TVar7.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStack_30 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUStack_30);
    }
    FStackX_18.ObjectIndex = 0;
    FStackX_18.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStack_30 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUStack_30);
    }
    FWeakObjectPtr::operator=(&FStackX_18,(FObjectPtr)&pUStack_30);
    pUVar8 = FWeakObjectPtr::Get(&FStackX_18);
    *(undefined4 *)&pUVar8[5].field_0x8 = 4;
    UDS_ModelBase::UpdateModel
              ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)FStackX_18);
  }
  return;
}

// OnEventMouseLeave @ 14bd783f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplNpcShopBuyBasketSlot::OnEventMouseLeave
          (UDS_M_ItemImplNpcShopBuyBasketSlot *this,FDS_WidgetPointerEventField *param_1)

{
  code *pcVar1;
  EDS_ItemSlotStateType EVar2;
  bool bVar3;
  FDS_ItemSlotStateTableRow *pFVar4;
  TObjectPtr<UDS_ModelEventItemBase> TVar5;
  UObject *pUVar6;
  FWeakObjectPtr FStackX_18;
  UObject *pUStackX_20;
  
  EVar2 = UDS_M_ItemImplBase::GetItemSlotType((UDS_M_ItemImplBase *)this);
  pFVar4 = FDS_ItemSlotStateTableRow::Get((ulonglong)EVar2,true);
  if (pFVar4 == (FDS_ItemSlotStateTableRow *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3571834003243662451>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                       ,0x38d,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
              ((FDS_DataContainer *)&this->_padding_,Hovered,false);
    FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
              ((FDS_DataContainer *)&this->_padding_,Pressed,false);
    if (pFVar4->IsDetailTooltip != false) {
      (**(code **)(this->_padding_ + 0x6c0))();
      return;
    }
    TVar5 = UDS_ModelBase::CreateEvent<UDS_ModelEventItemBase>((UDS_ModelBase *)this);
    pUStackX_20 = *(UObject **)TVar5.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStackX_20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUStackX_20);
    }
    FStackX_18.ObjectIndex = 0;
    FStackX_18.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStackX_20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUStackX_20);
    }
    FWeakObjectPtr::operator=(&FStackX_18,(FObjectPtr)&pUStackX_20);
    pUVar6 = FWeakObjectPtr::Get(&FStackX_18);
    *(undefined4 *)&pUVar6[5].field_0x8 = 5;
    UDS_ModelBase::UpdateModel
              ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)FStackX_18);
  }
  return;
}

// OnEventOnDragCanceled @ 14bd78510

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplNpcShopBuyBasketSlot::OnEventOnDragCanceled
          (UDS_M_ItemImplNpcShopBuyBasketSlot *this,FDS_DragDropEventField *param_1)

{
  UDS_M_ItemImplBase::OnEventOnDragCanceled((UDS_M_ItemImplBase *)this,param_1);
  RemoveBasketSlot(this);
  return;
}

// OnItemSubtractionButtonClick @ 14bd7a980

void __thiscall
UDS_M_ItemImplNpcShopBuyBasketSlot::OnItemSubtractionButtonClick
          (UDS_M_ItemImplNpcShopBuyBasketSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_M_ItemImplBase::OnItemSubtractionButtonClick((UDS_M_ItemImplBase *)this,param_1);
  RemoveBasketSlot(this);
  return;
}

// OnRemovedBasketSlot @ 14bd7c950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplNpcShopBuyBasketSlot::OnRemovedBasketSlot
          (UDS_M_ItemImplNpcShopBuyBasketSlot *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UDS_NPCShopData *this_00;
  FDS_NPCShopGoodsInfo *pFVar6;
  UObject *pUVar7;
  int iVar8;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr FStack_168;
  undefined8 uStack_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  if (this->BasketSlotIndex < param_1) {
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar2 = TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr>::UEOpEquals(&this->NPCShopData,(void *)0x0)
  ;
  if (bVar2) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      TStack_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_158,"UDS_M_ItemImplNpcShopBuyBasketSlot::UpdateBasketSlot",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_158.Ptr,0x97,L"NPCShopData is nullptr.");
      if ((void *)TStack_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_158._padding_);
      }
    }
  }
  else {
    iVar8 = 0;
    this_00 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
    pFVar6 = UDS_NPCShopData::GetNPCShopBasketGoodsInfoByBasketSlotIndex
                       (this_00,this->BasketSlotIndex);
    if (pFVar6 == (FDS_NPCShopGoodsInfo *)0x0) {
      this->ShopListTableID = 0;
    }
    else {
      this->ShopListTableID = pFVar6->ShopListTID;
      iVar8 = pFVar6->ItemTID;
    }
    bVar3 = FWeakObjectPtr::IsValid(&(this->NpcFunctionShop).WeakPtr);
    bVar2 = false;
    if (bVar3) {
      pUVar7 = FWeakObjectPtr::Get(&(this->NpcFunctionShop).WeakPtr);
      iVar4 = (**(code **)(*(longlong *)&pUVar7[1].field_0x10 + 0x20))(&pUVar7[1].field_0x10);
      bVar2 = false;
      if (this->BasketSlotIndex == iVar4) {
        bVar2 = true;
      }
    }
    (**(code **)(this->_padding_ + 0x340))(this,0x23,iVar8);
    FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
              ((FDS_DataContainer *)&this->_padding_,Selected,bVar2);
    UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
    FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
              ((FDS_DataContainer *)&this->_padding_,Subtract,pFVar6 != (FDS_NPCShopGoodsInfo *)0x0)
    ;
    UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
    FStack_168.ObjectIndex = 0;
    FStack_168.ObjectSerialNumber = 0;
    uStack_160 = 0;
    pcVar1 = *(code **)(this->_padding_ + 0x2e0);
    FWeakObjectPtr::operator=(&FStack_168,(FObjectPtr)&uStack_160);
    (*pcVar1)(this,FStack_168,0);
  }
  return;
}

// OnSelectedBasketSlot @ 14bd7d0a0

void __thiscall
UDS_M_ItemImplNpcShopBuyBasketSlot::OnSelectedBasketSlot
          (UDS_M_ItemImplNpcShopBuyBasketSlot *this,int param_1)

{
  code *pcVar1;
  UDS_NPCShopEvent *pUVar2;
  FWeakObjectPtr local_res8;
  undefined8 local_res18;
  
  FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
            ((FDS_DataContainer *)&this->_padding_,Selected,this->BasketSlotIndex == param_1);
  UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
  pcVar1 = *(code **)(this->_padding_ + 0x2e0);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  (*pcVar1)(this,local_res8,0);
  if ((this->BasketSlotIndex == param_1) && (0 < this->ShopListTableID)) {
    pUVar2 = UDS_NPCShopEvent::GetEvent();
    if (pUVar2 != (UDS_NPCShopEvent *)0x0) {
      FDS_EventDelegate<int_const_>::Broadcast(&pUVar2->OnSelectShopItemSlot,this->ShopListTableID);
    }
  }
  return;
}

// OnUpdatedBasketSlot @ 14bd83cf0

void __thiscall
UDS_M_ItemImplNpcShopBuyBasketSlot::OnUpdatedBasketSlot
          (UDS_M_ItemImplNpcShopBuyBasketSlot *this,int param_1)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (param_1 == this->BasketSlotIndex) {
    UpdateBasketSlot(this);
    pFVar1 = ::FName::FName(local_res8,"Ani_Shop_Use");
    UDS_M_ItemImplBase::PlayAnimationEvent((UDS_M_ItemImplBase *)this,*pFVar1,PlayForward);
  }
  return;
}

// RemoveBasketSlot @ 14bd86590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplNpcShopBuyBasketSlot::RemoveBasketSlot(UDS_M_ItemImplNpcShopBuyBasketSlot *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NpcFunctionShop *this_00;
  undefined1 auStackY_168 [32];
  uint uVar3;
  wchar_t *pwVar4;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = FWeakObjectPtr::IsValid(&(this->NpcFunctionShop).WeakPtr);
  if (bVar1) {
    if (0 < this->ShopListTableID) {
      (**(code **)(this->_padding_ + 0x6c0))(this);
      this_00 = (UDS_NpcFunctionShop *)FWeakObjectPtr::Get(&(this->NpcFunctionShop).WeakPtr);
      UDS_NpcFunctionShop::Request_RemoveNpcItemFromBasket(this_00,this->ShopListTableID);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_M_ItemImplNpcShopBuyBasketSlot::RemoveBasketSlot",0x34,Yes);
    pwVar4 = L"ShopListTableID <= 0";
    uVar3 = 0xc4;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_M_ItemImplNpcShopBuyBasketSlot::RemoveBasketSlot",0x34,Yes);
    pwVar4 = L"NpcFunctionShop.IsValid() == false";
    uVar3 = 0xbe;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// UpdateBasketSlot @ 14bd8cce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplNpcShopBuyBasketSlot::UpdateBasketSlot(UDS_M_ItemImplNpcShopBuyBasketSlot *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UDS_NPCShopData *this_00;
  FDS_NPCShopGoodsInfo *pFVar6;
  UObject *pUVar7;
  int iVar8;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_168;
  undefined8 local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar2 = TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr>::UEOpEquals(&this->NPCShopData,(void *)0x0)
  ;
  if (bVar2) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_M_ItemImplNpcShopBuyBasketSlot::UpdateBasketSlot",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x97,L"NPCShopData is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    iVar8 = 0;
    this_00 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
    pFVar6 = UDS_NPCShopData::GetNPCShopBasketGoodsInfoByBasketSlotIndex
                       (this_00,this->BasketSlotIndex);
    if (pFVar6 == (FDS_NPCShopGoodsInfo *)0x0) {
      this->ShopListTableID = 0;
    }
    else {
      this->ShopListTableID = pFVar6->ShopListTID;
      iVar8 = pFVar6->ItemTID;
    }
    bVar3 = FWeakObjectPtr::IsValid(&(this->NpcFunctionShop).WeakPtr);
    bVar2 = false;
    if (bVar3) {
      pUVar7 = FWeakObjectPtr::Get(&(this->NpcFunctionShop).WeakPtr);
      iVar4 = (**(code **)(*(longlong *)&pUVar7[1].field_0x10 + 0x20))(&pUVar7[1].field_0x10);
      bVar2 = false;
      if (this->BasketSlotIndex == iVar4) {
        bVar2 = true;
      }
    }
    (**(code **)(this->_padding_ + 0x340))(this,0x23,iVar8);
    FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
              ((FDS_DataContainer *)&this->_padding_,Selected,bVar2);
    UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
    FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
              ((FDS_DataContainer *)&this->_padding_,Subtract,pFVar6 != (FDS_NPCShopGoodsInfo *)0x0)
    ;
    UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
    local_168.ObjectIndex = 0;
    local_168.ObjectSerialNumber = 0;
    local_160 = 0;
    pcVar1 = *(code **)(this->_padding_ + 0x2e0);
    FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_160);
    (*pcVar1)(this,local_168,0);
  }
  return;
}

