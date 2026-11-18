// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b51c370

UClass * __cdecl UDS_M_ItemImplNpcGiftBasketSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplNpcGiftBasketSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplNpcGiftBasketSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplNpcGiftBasketSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplNpcGiftBasketSlot,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemImplNpcGiftBasketSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplNpcGiftBasketSlot>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplNpcGiftBasketSlot.InnerSingleton;
}

// UDS_M_ItemImplNpcGiftBasketSlot @ 14b521370

UDS_M_ItemImplNpcGiftBasketSlot * __thiscall
UDS_M_ItemImplNpcGiftBasketSlot::UDS_M_ItemImplNpcGiftBasketSlot
          (UDS_M_ItemImplNpcGiftBasketSlot *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  (this->NpcFunctionGift).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->NpcFunctionGift).WeakPtr,(FObjectPtr)local_res8);
  this->BasketSlotIndex = -1;
  return this;
}

// UDS_M_ItemImplNpcGiftBasketSlot @ 14b521400

UDS_M_ItemImplNpcGiftBasketSlot * __thiscall
UDS_M_ItemImplNpcGiftBasketSlot::UDS_M_ItemImplNpcGiftBasketSlot
          (UDS_M_ItemImplNpcGiftBasketSlot *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  (this->NpcFunctionGift).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->NpcFunctionGift).WeakPtr,(FObjectPtr)local_res8);
  this->BasketSlotIndex = -1;
  return this;
}

// GetPrivateStaticClass @ 14b525aa0

UClass * __cdecl UDS_M_ItemImplNpcGiftBasketSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplNpcGiftBasketSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplNpcGiftBasketSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplNpcGiftBasketSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplNpcGiftBasketSlot,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemImplNpcGiftBasketSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplNpcGiftBasketSlot>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplNpcGiftBasketSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemImplNpcGiftBasketSlot @ 14b527470

void __cdecl
UDS_M_ItemImplNpcGiftBasketSlot::StaticRegisterNativesUDS_M_ItemImplNpcGiftBasketSlot(void)

{
  return;
}

// ~UDS_M_ItemImplNpcGiftBasketSlot @ 14bd43d90

void __thiscall
UDS_M_ItemImplNpcGiftBasketSlot::~UDS_M_ItemImplNpcGiftBasketSlot
          (UDS_M_ItemImplNpcGiftBasketSlot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  UDS_M_ItemImplBase::~UDS_M_ItemImplBase((UDS_M_ItemImplBase *)this);
  return;
}

// GetQuantity @ 14bd5f900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_M_ItemImplNpcGiftBasketSlot::GetQuantity(UDS_M_ItemImplNpcGiftBasketSlot *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NpcFunctionGift *this_00;
  FWeakObjectPtr *pFVar3;
  FDS_NPCGiftItemInfo *pFVar4;
  int iVar5;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = FWeakObjectPtr::IsValid(&(this->NpcFunctionGift).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_NpcFunctionGift *)FWeakObjectPtr::Get(&(this->NpcFunctionGift).WeakPtr);
    pFVar3 = (FWeakObjectPtr *)(**(code **)(this->_padding_ + 0x3a0))(this,local_148);
    pFVar4 = UDS_NpcFunctionGift::GetNPCGiftItemInfoByItemData
                       (this_00,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*pFVar3);
    if (pFVar4 != (FDS_NPCGiftItemInfo *)0x0) {
      iVar5 = pFVar4->GiftCount_UnTradable + pFVar4->GiftCount_Tradable;
      UDS_M_ItemImplBase::SetQuantity((UDS_M_ItemImplBase *)this,iVar5);
      return iVar5;
    }
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_M_ItemImplNpcGiftBasketSlot::GetQuantity",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x31,L"NpcFunctionGift is Invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return 0;
      }
    }
  }
  return 0;
}

// InitItemImplMap @ 14bd68190

void __thiscall
UDS_M_ItemImplNpcGiftBasketSlot::InitItemImplMap(UDS_M_ItemImplNpcGiftBasketSlot *this)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UClass *local_res20;
  undefined1 *local_18;
  UClass **local_10;
  
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplNpcGiftBasketSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = 0x27;
  if (UDS_M_ItemImplBase::ItemImplMap._8_4_ != UDS_M_ItemImplBase::ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (UDS_M_ItemImplBase::ItemImplMap._64_8_ != 0) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(UDS_M_ItemImplBase::ItemImplMap._72_4_ - 1 & 0x27) * 4);
    while (iVar1 != -1) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '\'') {
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
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)
             &DAT_00000027,(bool *)&local_18);
  return;
}

// OnDeInit @ 14bd76a10

void __thiscall UDS_M_ItemImplNpcGiftBasketSlot::OnDeInit(UDS_M_ItemImplNpcGiftBasketSlot *this)

{
  UDS_NPCShopEvent *pUVar1;
  
  UDS_M_ItemImplBase::OnDeInit((UDS_M_ItemImplBase *)this);
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedBasketSlot,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnRemovedBasketSlot,
               this);
    FDS_FilteredEventDelegate<enum_EDS_ItemBasketType_const_,int_const_>::
    Remove<UDS_M_ItemImplNpcGiftBasketSlot>(&pUVar1->OnSelectedBasketSlot,this);
  }
  return;
}

// OnEventMouseButtonUp @ 14bd77360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplNpcGiftBasketSlot::OnEventMouseButtonUp
          (UDS_M_ItemImplNpcGiftBasketSlot *this,FDS_WidgetPointerEventField *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  bool bVar5;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
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
    bVar5 = FWeakObjectPtr::IsValid(&(this->NpcFunctionGift).WeakPtr);
    if (bVar5) {
      (**(code **)(this->_padding_ + 0x3a0))(this,local_148);
      bVar5 = FWeakObjectPtr::IsValid(local_148);
      if ((bVar5) && (-1 < this->BasketSlotIndex)) {
        pUVar4 = FWeakObjectPtr::Get(&(this->NpcFunctionGift).WeakPtr);
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
                  (&local_138,"UDS_M_ItemImplNpcGiftBasketSlot::OnEventMouseButtonUp",0x35,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0x5c,L"NpcFunctionGift.IsValid() == false");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return;
}

// OnEventMouseEnter @ 14bd78140

void __thiscall
UDS_M_ItemImplNpcGiftBasketSlot::OnEventMouseEnter
          (UDS_M_ItemImplNpcGiftBasketSlot *this,FDS_WidgetPointerEventField *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  
  (**(code **)(this->_padding_ + 0x3a0))(this,&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    UDS_M_ItemImplBase::OnEventMouseEnter((UDS_M_ItemImplBase *)this,param_1);
  }
  return;
}

// OnEventOnDragCanceled @ 14bd784e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplNpcGiftBasketSlot::OnEventOnDragCanceled
          (UDS_M_ItemImplNpcGiftBasketSlot *this,FDS_DragDropEventField *param_1)

{
  UDS_M_ItemImplBase::OnEventOnDragCanceled((UDS_M_ItemImplBase *)this,param_1);
  RemoveBasketSlot(this);
  return;
}

// OnInit @ 14bd79190

void __thiscall UDS_M_ItemImplNpcGiftBasketSlot::OnInit(UDS_M_ItemImplNpcGiftBasketSlot *this)

{
  TMap<EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  UDS_NPCShopEvent *pUVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined4 *local_res20;
  
  UDS_M_ItemImplBase::OnInit((UDS_M_ItemImplBase *)this);
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedBasketSlot,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_M_ItemImplNpcGiftBasketSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdatedBasketSlot,(UDS_M_ItemImplNpcGiftBasketSlot *)local_res10,
               (pmf_180db5d9 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnRemovedBasketSlot,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_M_ItemImplNpcGiftBasketSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnRemovedBasketSlot,(UDS_M_ItemImplNpcGiftBasketSlot *)local_res10,
               (pmf_180db5d9 *)this);
    local_res10[0] = 3;
    this_00 = &(pUVar1->OnSelectedBasketSlot).Subscriptions;
    if (*(int *)&(pUVar1->OnSelectedBasketSlot).Subscriptions.field_0x8 !=
        *(int *)&(pUVar1->OnSelectedBasketSlot).Subscriptions.field_0x34) {
      puVar3 = *(undefined1 **)&(pUVar1->OnSelectedBasketSlot).Subscriptions.field_0x40;
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &(pUVar1->OnSelectedBasketSlot).Subscriptions.field_0x38;
      }
      iVar4 = *(int *)(puVar3 + (ulonglong)
                                (*(int *)&(pUVar1->OnSelectedBasketSlot).Subscriptions.field_0x48 -
                                 1U & 3) * 4);
      if (iVar4 != -1) {
        do {
          piVar2 = (int *)((longlong)iVar4 * 0x50 + *(longlong *)this_00);
          if (*piVar2 == 3) {
            if (piVar2 != (int *)0x0) goto LAB_14bd792f9;
            break;
          }
          iVar4 = piVar2[0x12];
        } while (iVar4 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_ItemBasketType_const_&>_>
              (this_00,(uint)local_res18,
               (TKeyInitializer<EDS_ItemBasketType_const_&> *)&DAT_00000003,(bool *)&local_res20);
    piVar2 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_00);
LAB_14bd792f9:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar2 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_M_ItemImplNpcGiftBasketSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy> *)
               (piVar2 + 2),(UDS_M_ItemImplNpcGiftBasketSlot *)local_res18,(pmf_180db5d9 *)this);
  }
  return;
}

// OnItemSubtractionButtonClick @ 14bd7a950

void __thiscall
UDS_M_ItemImplNpcGiftBasketSlot::OnItemSubtractionButtonClick
          (UDS_M_ItemImplNpcGiftBasketSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_M_ItemImplBase::OnItemSubtractionButtonClick((UDS_M_ItemImplBase *)this,param_1);
  RemoveBasketSlot(this);
  return;
}

// OnRemovedBasketSlot @ 14bd7c930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplNpcGiftBasketSlot::OnRemovedBasketSlot
          (UDS_M_ItemImplNpcGiftBasketSlot *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_NpcFunctionGift *this_00;
  FDS_NPCGiftItemInfo *pFVar4;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr FStack_158;
  FWeakObjectPtr FStack_150;
  undefined8 auStack_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  if (this->BasketSlotIndex < param_1) {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar2 = FWeakObjectPtr::IsValid(&(this->NpcFunctionGift).WeakPtr);
  if (bVar2) {
    FStack_158.ObjectIndex = 0;
    FStack_158.ObjectSerialNumber = 0;
    FStack_150.ObjectIndex = 0;
    FStack_150.ObjectSerialNumber = 0;
    FWeakObjectPtr::operator=(&FStack_158,(FObjectPtr)&FStack_150);
    this_00 = (UDS_NpcFunctionGift *)FWeakObjectPtr::Get(&(this->NpcFunctionGift).WeakPtr);
    pFVar4 = UDS_NpcFunctionGift::GetNPCGiftItemInfoByBasketSlotIndex(this_00,this->BasketSlotIndex)
    ;
    if (pFVar4 != (FDS_NPCGiftItemInfo *)0x0) {
      FStack_158 = (pFVar4->ItemData).WeakPtr;
    }
    bVar2 = FWeakObjectPtr::IsValid(&FStack_158);
    (**(code **)(this->_padding_ + 0x338))(this,0x24,FStack_158);
    FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
              ((FDS_DataContainer *)&this->_padding_,Subtract,bVar2);
    UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
    FStack_150.ObjectIndex = 0;
    FStack_150.ObjectSerialNumber = 0;
    auStack_148[0] = 0;
    pcVar1 = *(code **)(this->_padding_ + 0x2e0);
    FWeakObjectPtr::operator=(&FStack_150,(FObjectPtr)auStack_148);
    (*pcVar1)(this,FStack_150,0);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_M_ItemImplNpcGiftBasketSlot::UpdateBasketSlot",0x31,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_138.Ptr,0xa3,L"NpcFunctionGift is Invalid.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  return;
}

// OnSelectedBasketSlot @ 14bd7cf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplNpcGiftBasketSlot::OnSelectedBasketSlot
          (UDS_M_ItemImplNpcGiftBasketSlot *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_NPCShopEvent *pUVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  undefined8 local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
            ((FDS_DataContainer *)&this->_padding_,Selected,this->BasketSlotIndex == param_1);
  UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
  local_158.ObjectIndex = 0;
  local_158.ObjectSerialNumber = 0;
  local_150 = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2e0);
  FWeakObjectPtr::operator=(&local_158,(FObjectPtr)&local_150);
  (*pcVar1)(this,local_158,0);
  if (this->BasketSlotIndex == param_1) {
    pUVar3 = UDS_NPCShopEvent::GetEvent();
    if (pUVar3 != (UDS_NPCShopEvent *)0x0) {
      (**(code **)(this->_padding_ + 0x3a0))(this,&local_158);
      bVar2 = FWeakObjectPtr::IsValid(&local_158);
      if (bVar2) {
        pUVar5 = FWeakObjectPtr::Get(&local_158);
        FDS_EventDelegate<__int64_const_>::Broadcast
                  (&pUVar3->OnSelectBagSlot,*(long64 *)&pUVar5[8].field_0x8);
      }
      else {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_M_ItemImplNpcGiftBasketSlot::OnSelectedBasketSlot",0x35,Yes);
          UDS_LogManager::PrintLog
                    (pUVar4,1,Warning,local_148.Ptr,0x95,L"itemDataBase.IsValid() == false");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
    }
  }
  return;
}

// OnUpdatedBasketSlot @ 14bd83cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplNpcGiftBasketSlot::OnUpdatedBasketSlot
          (UDS_M_ItemImplNpcGiftBasketSlot *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_NpcFunctionGift *this_00;
  FDS_NPCGiftItemInfo *pFVar4;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr FStack_158;
  FWeakObjectPtr FStack_150;
  undefined8 auStack_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  if (param_1 != this->BasketSlotIndex) {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar2 = FWeakObjectPtr::IsValid(&(this->NpcFunctionGift).WeakPtr);
  if (bVar2) {
    FStack_158.ObjectIndex = 0;
    FStack_158.ObjectSerialNumber = 0;
    FStack_150.ObjectIndex = 0;
    FStack_150.ObjectSerialNumber = 0;
    FWeakObjectPtr::operator=(&FStack_158,(FObjectPtr)&FStack_150);
    this_00 = (UDS_NpcFunctionGift *)FWeakObjectPtr::Get(&(this->NpcFunctionGift).WeakPtr);
    pFVar4 = UDS_NpcFunctionGift::GetNPCGiftItemInfoByBasketSlotIndex(this_00,this->BasketSlotIndex)
    ;
    if (pFVar4 != (FDS_NPCGiftItemInfo *)0x0) {
      FStack_158 = (pFVar4->ItemData).WeakPtr;
    }
    bVar2 = FWeakObjectPtr::IsValid(&FStack_158);
    (**(code **)(this->_padding_ + 0x338))(this,0x24,FStack_158);
    FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
              ((FDS_DataContainer *)&this->_padding_,Subtract,bVar2);
    UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
    FStack_150.ObjectIndex = 0;
    FStack_150.ObjectSerialNumber = 0;
    auStack_148[0] = 0;
    pcVar1 = *(code **)(this->_padding_ + 0x2e0);
    FWeakObjectPtr::operator=(&FStack_150,(FObjectPtr)auStack_148);
    (*pcVar1)(this,FStack_150,0);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_M_ItemImplNpcGiftBasketSlot::UpdateBasketSlot",0x31,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_138.Ptr,0xa3,L"NpcFunctionGift is Invalid.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  return;
}

// RemoveBasketSlot @ 14bd86410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplNpcGiftBasketSlot::RemoveBasketSlot(UDS_M_ItemImplNpcGiftBasketSlot *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NpcFunctionGift *this_00;
  undefined1 auStackY_178 [32];
  uint uVar3;
  wchar_t *pwVar4;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = FWeakObjectPtr::IsValid(&(this->NpcFunctionGift).WeakPtr);
  if (bVar1) {
    (**(code **)(this->_padding_ + 0x3a0))(this,local_148);
    bVar1 = FWeakObjectPtr::IsValid(local_148);
    if (bVar1) {
      (**(code **)(this->_padding_ + 0x6c0))(this);
      this_00 = (UDS_NpcFunctionGift *)FWeakObjectPtr::Get(&(this->NpcFunctionGift).WeakPtr);
      UDS_NpcFunctionGift::Request_RemoveBagItemFromBasket
                (this_00,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_148[0]);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_M_ItemImplNpcGiftBasketSlot::RemoveBasketSlot",0x31,Yes);
    pwVar4 = L"itemDataBase.IsValid() == false";
    uVar3 = 0xc9;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_M_ItemImplNpcGiftBasketSlot::RemoveBasketSlot",0x31,Yes);
    pwVar4 = L"NpcFunctionGift.IsValid() == false";
    uVar3 = 0xc2;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// UpdateBasketSlot @ 14bd8cb40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplNpcGiftBasketSlot::UpdateBasketSlot(UDS_M_ItemImplNpcGiftBasketSlot *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_NpcFunctionGift *this_00;
  FDS_NPCGiftItemInfo *pFVar4;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  undefined8 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar2 = FWeakObjectPtr::IsValid(&(this->NpcFunctionGift).WeakPtr);
  if (bVar2) {
    local_158.ObjectIndex = 0;
    local_158.ObjectSerialNumber = 0;
    local_150.ObjectIndex = 0;
    local_150.ObjectSerialNumber = 0;
    FWeakObjectPtr::operator=(&local_158,(FObjectPtr)&local_150);
    this_00 = (UDS_NpcFunctionGift *)FWeakObjectPtr::Get(&(this->NpcFunctionGift).WeakPtr);
    pFVar4 = UDS_NpcFunctionGift::GetNPCGiftItemInfoByBasketSlotIndex(this_00,this->BasketSlotIndex)
    ;
    if (pFVar4 != (FDS_NPCGiftItemInfo *)0x0) {
      local_158 = (pFVar4->ItemData).WeakPtr;
    }
    bVar2 = FWeakObjectPtr::IsValid(&local_158);
    (**(code **)(this->_padding_ + 0x338))(this,0x24,local_158);
    FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
              ((FDS_DataContainer *)&this->_padding_,Subtract,bVar2);
    UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
    local_150.ObjectIndex = 0;
    local_150.ObjectSerialNumber = 0;
    local_148[0] = 0;
    pcVar1 = *(code **)(this->_padding_ + 0x2e0);
    FWeakObjectPtr::operator=(&local_150,(FObjectPtr)local_148);
    (*pcVar1)(this,local_150,0);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_M_ItemImplNpcGiftBasketSlot::UpdateBasketSlot",0x31,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0xa3,L"NpcFunctionGift is Invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

