// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// StaticClass @ 14b51a140

UClass * __cdecl UDS_M_ItemImplShopBagItemSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplShopBagItemSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplShopBagItemSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplShopBagItemSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplShopBagItemSlot,0x1f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemImplShopBagItemSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplShopBagItemSlot>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplShopBagItemSlot.InnerSingleton;
}

// UDS_M_ItemImplShopBagItemSlot @ 14b521ab0

UDS_M_ItemImplShopBagItemSlot * __thiscall
UDS_M_ItemImplShopBagItemSlot::UDS_M_ItemImplShopBagItemSlot
          (UDS_M_ItemImplShopBagItemSlot *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined8 *)&this->field_0x1b0 = 0;
  this->field_0x1b8 = 0;
  *(undefined8 *)&this->field_0x1c0 = 0;
  *(undefined8 *)&this->field_0x1c8 = 0;
  *(undefined4 *)&this->field_0x1d0 = 0;
  *(undefined8 *)&this->field_0x1e0 = 0;
  *(undefined8 *)&this->field_0x1e8 = 0;
  *(undefined ***)this = &_vftable__for__UDS_ModelBase__;
  *(undefined ***)&this->field_0x1a8 = &_vftable__for__IDS_ObjectPoolItem__;
  return this;
}

// UDS_M_ItemImplShopBagItemSlot @ 14b521b20

UDS_M_ItemImplShopBagItemSlot * __thiscall
UDS_M_ItemImplShopBagItemSlot::UDS_M_ItemImplShopBagItemSlot
          (UDS_M_ItemImplShopBagItemSlot *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined8 *)&this->field_0x1b0 = 0;
  this->field_0x1b8 = 0;
  *(undefined8 *)&this->field_0x1c0 = 0;
  *(undefined8 *)&this->field_0x1c8 = 0;
  *(undefined4 *)&this->field_0x1d0 = 0;
  *(undefined8 *)&this->field_0x1e0 = 0;
  *(undefined8 *)&this->field_0x1e8 = 0;
  *(undefined ***)this = &_vftable__for__UDS_ModelBase__;
  *(undefined ***)&this->field_0x1a8 = &_vftable__for__IDS_ObjectPoolItem__;
  return this;
}

// ~UDS_M_ItemImplShopBagItemSlot @ 14b5232c0

void __thiscall
UDS_M_ItemImplShopBagItemSlot::~UDS_M_ItemImplShopBagItemSlot(UDS_M_ItemImplShopBagItemSlot *this)

{
  *(undefined ***)this = &_vftable__for__UDS_ModelBase__;
  *(undefined ***)&this->field_0x1a8 = &_vftable__for__IDS_ObjectPoolItem__;
  UDS_M_ItemImplBase::~UDS_M_ItemImplBase((UDS_M_ItemImplBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b525fe0

UClass * __cdecl UDS_M_ItemImplShopBagItemSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplShopBagItemSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplShopBagItemSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplShopBagItemSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplShopBagItemSlot,0x1f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemImplShopBagItemSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplShopBagItemSlot>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplShopBagItemSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemImplShopBagItemSlot @ 14b5274e0

void __cdecl UDS_M_ItemImplShopBagItemSlot::StaticRegisterNativesUDS_M_ItemImplShopBagItemSlot(void)

{
  return;
}

// BindModel @ 14bd46580

void __thiscall UDS_M_ItemImplShopBagItemSlot::BindModel(UDS_M_ItemImplShopBagItemSlot *this)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  FName *pFVar6;
  wchar_t *pwVar7;
  FName local_res8;
  
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotData>
                    ((FDS_DataContainer *)&this->field_0x40,(EDS_ItemSlotData)&local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->field_0x40,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  bVar2 = FToBoolHelper::FromCStringWide(pwVar7);
  if (bVar2) {
    pFVar6 = ::FName::FName(&local_res8,"Ani_Shop_Use");
    UDS_M_ItemImplBase::PlayAnimationEvent((UDS_M_ItemImplBase *)this,*pFVar6,PlayForward);
    FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
              ((FDS_DataContainer *)&this->field_0x40,Purchased,false);
  }
  return;
}

// GetNpcFunctionShop @ 14bd5dc20

TWeakObjectPtr<UDS_NpcFunctionShop,FWeakObjectPtr> __thiscall
UDS_M_ItemImplShopBagItemSlot::GetNpcFunctionShop(UDS_M_ItemImplShopBagItemSlot *this)

{
  int iVar1;
  char cVar2;
  UDS_NpcFunctionEvent *pUVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  FWeakObjectPtr in_RDX;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  FReadAccessScope local_28;
  
  pUVar3 = UDS_NpcFunctionEvent::GetEvent();
  if (pUVar3 == (UDS_NpcFunctionEvent *)0x0) {
    *(undefined8 *)in_RDX = 0;
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res18);
    return (TWeakObjectPtr<UDS_NpcFunctionShop,FWeakObjectPtr>)in_RDX;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3->OnQueryNpcFunction,
             &local_28);
  if (((*(int *)&(pUVar3->OnQueryNpcFunction).Delegate.field_0x10 == 0) ||
      (plVar6 = *(longlong **)&(pUVar3->OnQueryNpcFunction).Delegate.field_0x8,
      plVar6 == (longlong *)0x0)) || (cVar2 = (**(code **)(*plVar6 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3->OnQueryNpcFunction
               ,&local_28);
    plVar6 = (longlong *)0x0;
    if (*(int *)&(pUVar3->OnQueryNpcFunction).Delegate.field_0x10 != 0) {
      plVar6 = *(longlong **)&(pUVar3->OnQueryNpcFunction).Delegate.field_0x8;
    }
    (**(code **)(*plVar6 + 0x60))(plVar6,&local_res18);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res18);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_NpcFunctionShop_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14bd5dcf1;
  }
  pUVar4 = (UObject *)0x0;
LAB_14bd5dcf1:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  *(undefined8 *)in_RDX = 0;
  local_res20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_NpcFunctionShop,FWeakObjectPtr>)in_RDX;
}

// GetNpcSellData @ 14bd5dd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr> __thiscall
UDS_M_ItemImplShopBagItemSlot::GetNpcSellData(UDS_M_ItemImplShopBagItemSlot *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NpcFunctionShop *this_00;
  FWeakObjectPtr in_RDX;
  undefined1 auStackY_188 [32];
  uint uVar3;
  wchar_t *pwVar4;
  undefined8 local_158;
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  GetNpcFunctionShop(this);
  bVar1 = FWeakObjectPtr::IsValid(&local_150);
  if (bVar1) {
    this_00 = (UDS_NpcFunctionShop *)FWeakObjectPtr::Get(&local_150);
    UDS_NpcFunctionShop::GetNPCSellData(this_00);
    bVar1 = FWeakObjectPtr::IsValid(local_148);
    if (bVar1) {
      *(FWeakObjectPtr *)in_RDX = local_148[0];
      return (TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr>)in_RDX;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14bd5de3d;
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_M_ItemImplShopBagItemSlot::GetNpcSellData",0x2d,Yes);
    pwVar4 = L"npcSellData.IsValid() == false";
    uVar3 = 0xfb;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14bd5de3d;
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_M_ItemImplShopBagItemSlot::GetNpcSellData",0x2d,Yes);
    pwVar4 = L"npcFunctionShop.IsValid() == false";
    uVar3 = 0xf4;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14bd5de3d:
  *(undefined8 *)in_RDX = 0;
  local_158 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_158);
  return (TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr>)in_RDX;
}

// GetQuantity @ 14bd5fde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_M_ItemImplShopBagItemSlot::GetQuantity(UDS_M_ItemImplShopBagItemSlot *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NPCSellData *this_00;
  FDS_NPCSellGoodsInfo *pFVar3;
  undefined1 auStackY_178 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  (**(code **)(*(longlong *)this + 0x3a0))(this,&local_140);
  bVar1 = FWeakObjectPtr::IsValid(&local_140);
  if (bVar1) {
    GetNpcSellData(this);
    bVar1 = FWeakObjectPtr::IsValid(&local_148);
    if (bVar1) {
      this_00 = (UDS_NPCSellData *)FWeakObjectPtr::Get(&local_148);
      pFVar3 = UDS_NPCSellData::GetNPCSellBasketGoodsInfoByItemData
                         (this_00,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_140);
      if (pFVar3 == (FDS_NPCSellGoodsInfo *)0x0) {
        return 0;
      }
      return pFVar3->SellCount_UnTradable + pFVar3->SellCount_Tradable;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return 0;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_M_ItemImplShopBagItemSlot::GetQuantity",0x2a,Yes);
    pwVar5 = L"npcSellData.IsValid() == false";
    uVar4 = 0x4f;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return 0;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_M_ItemImplShopBagItemSlot::GetQuantity",0x2a,Yes);
    pwVar5 = L"itemDataBase.IsValid() == false";
    uVar4 = 0x48;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ == (void *)0x0) {
    return 0;
  }
  FMemory::Free((void *)local_138._padding_);
  return 0;
}

// InitItemImplMap @ 14bd68910

void __thiscall UDS_M_ItemImplShopBagItemSlot::InitItemImplMap(UDS_M_ItemImplShopBagItemSlot *this)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UClass *local_res20;
  undefined1 *local_18;
  UClass **local_10;
  
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplShopBagItemSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = 0x25;
  if (UDS_M_ItemImplBase::ItemImplMap._8_4_ != UDS_M_ItemImplBase::ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (UDS_M_ItemImplBase::ItemImplMap._64_8_ != 0) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(UDS_M_ItemImplBase::ItemImplMap._72_4_ - 1 & 0x25) * 4);
    while (iVar1 != -1) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '%') {
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
             &DAT_00000025,(bool *)&local_18);
  return;
}

// InitModel @ 14bd68ee0

void __thiscall
UDS_M_ItemImplShopBagItemSlot::InitModel
          (UDS_M_ItemImplShopBagItemSlot *this,EDS_ItemSlotStateType param_1,
          TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_2)

{
  UDS_M_ItemImplBase::SetItemSlotType((UDS_M_ItemImplBase *)this,param_1);
  UDS_M_ItemImplBase::SetItemData((UDS_M_ItemImplBase *)this,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014bd68f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x330))(this);
  return;
}

// IsItemRemoveIcons @ 14bd6ba10

bool __thiscall
UDS_M_ItemImplShopBagItemSlot::IsItemRemoveIcons(UDS_M_ItemImplShopBagItemSlot *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)this + 0x378))();
  return 0 < iVar1;
}

// IsQuantityCenter @ 14bd6bd30

bool __thiscall UDS_M_ItemImplShopBagItemSlot::IsQuantityCenter(UDS_M_ItemImplShopBagItemSlot *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)this + 0x378))();
  return 0 < iVar1;
}

// OnDeInit @ 14bd76a70

void __thiscall UDS_M_ItemImplShopBagItemSlot::OnDeInit(UDS_M_ItemImplShopBagItemSlot *this)

{
  UDS_NPCShopEvent *pUVar1;
  
  UDS_M_ItemImplBase::OnDeInit((UDS_M_ItemImplBase *)this);
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedBasket,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedBasketSlot,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnRemovedBasketSlot,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedBagSlot,this)
    ;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectBagSlot,this);
  }
  return;
}

// OnEventMouseButtonUp @ 14bd77b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplShopBagItemSlot::OnEventMouseButtonUp
          (UDS_M_ItemImplShopBagItemSlot *this,FDS_WidgetPointerEventField *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  longlong lVar3;
  UDS_LogManager *pUVar4;
  UDS_NpcFunctionShop *this_00;
  UDS_NPCShopEvent *pUVar5;
  UObject *pUVar6;
  bool bVar7;
  undefined1 auStackY_178 [32];
  uint uVar8;
  wchar_t *pwVar9;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
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
  bVar7 = FVar2 != EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar7) {
    return;
  }
  GetNpcFunctionShop(this);
  bVar7 = FWeakObjectPtr::IsValid(&local_140);
  if (bVar7) {
    (**(code **)(*(longlong *)this + 0x3a0))(this,&local_148);
    bVar7 = FWeakObjectPtr::IsValid(&local_148);
    if (bVar7) {
      lVar3 = (param_1->PointerEvent)._padding_;
      this_00 = (UDS_NpcFunctionShop *)FWeakObjectPtr::Get(&local_140);
      UDS_NpcFunctionShop::Request_AddBagItemToBasket
                (this_00,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_148,(lVar3 & 3) != 0);
      pUVar5 = UDS_NPCShopEvent::GetEvent();
      if (pUVar5 == (UDS_NPCShopEvent *)0x0) {
        return;
      }
      pUVar6 = FWeakObjectPtr::Get(&local_148);
      FDS_EventDelegate<__int64_const_>::Broadcast
                (&pUVar5->OnSelectBagSlot,*(long64 *)&pUVar6[8].field_0x8);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_M_ItemImplShopBagItemSlot::OnEventMouseButtonUp",0x33,Yes);
    pwVar9 = L"itemDataBase.IsValid() == false";
    uVar8 = 0x79;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_M_ItemImplShopBagItemSlot::OnEventMouseButtonUp",0x33,Yes);
    pwVar9 = L"npcFunctionShop.IsValid() == false";
    uVar8 = 0x72;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,uVar8,pwVar9);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnInit @ 14bd79380

void __thiscall UDS_M_ItemImplShopBagItemSlot::OnInit(UDS_M_ItemImplShopBagItemSlot *this)

{
  UDS_NPCShopEvent *pUVar1;
  
  UDS_M_ItemImplBase::OnInit((UDS_M_ItemImplBase *)this);
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedBasket,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_M_ItemImplShopBagItemSlot>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdatedBasket,(UDS_M_ItemImplShopBagItemSlot *)&stack0x00000010,
               (pmf_aa9266ef *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedBasketSlot,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_M_ItemImplShopBagItemSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdatedBasketSlot,(UDS_M_ItemImplShopBagItemSlot *)&stack0x00000010,
               (pmf_d46931ef *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnRemovedBasketSlot,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_M_ItemImplShopBagItemSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnRemovedBasketSlot,(UDS_M_ItemImplShopBagItemSlot *)&stack0x00000010,
               (pmf_d46931ef *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedBagSlot,this)
    ;
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_M_ItemImplShopBagItemSlot>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdatedBagSlot,(UDS_M_ItemImplShopBagItemSlot *)&stack0x00000010,
               (pmf_2f61b682 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectBagSlot,this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_M_ItemImplShopBagItemSlot>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectBagSlot,(UDS_M_ItemImplShopBagItemSlot *)&stack0x00000010,
               (pmf_2f61b682 *)this);
  }
  return;
}

// OnItemSubtractionButtonClick @ 14bd7a9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplShopBagItemSlot::OnItemSubtractionButtonClick
          (UDS_M_ItemImplShopBagItemSlot *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NpcFunctionShop *this_00;
  undefined1 auStackY_178 [32];
  uint uVar3;
  wchar_t *pwVar4;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  (**(code **)(*(longlong *)this + 0x3a0))(this,&local_140);
  bVar1 = FWeakObjectPtr::IsValid(&local_140);
  if (bVar1) {
    GetNpcFunctionShop(this);
    bVar1 = FWeakObjectPtr::IsValid(&local_148);
    if (bVar1) {
      this_00 = (UDS_NpcFunctionShop *)FWeakObjectPtr::Get(&local_148);
      UDS_NpcFunctionShop::Request_RemoveBagItemFromBasket
                (this_00,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_140);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_M_ItemImplShopBagItemSlot::OnItemSubtractionButtonClick",0x3b,Yes);
    pwVar4 = L"npcFunctionShop.IsValid() == false";
    uVar3 = 0x93;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_M_ItemImplShopBagItemSlot::OnItemSubtractionButtonClick",0x3b,Yes);
    pwVar4 = L"itemDataBase.IsValid() == false";
    uVar3 = 0x8c;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnRemovedBasketSlot @ 14bd7c990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplShopBagItemSlot::OnRemovedBasketSlot(UDS_M_ItemImplShopBagItemSlot *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FWeakObjectPtr FStack_158;
  FWeakObjectPtr FStack_150;
  FWeakObjectPtr FStack_148;
  undefined8 uStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (**(code **)(*(longlong *)this + 0x3a0))(this,&FStack_150);
  bVar2 = FWeakObjectPtr::IsValid(&FStack_150);
  if (bVar2) {
    GetNpcFunctionShop(this);
    bVar2 = FWeakObjectPtr::IsValid(&FStack_148);
    if (bVar2) {
      UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
      pcVar1 = *(code **)(*(longlong *)this + 0x2e0);
      FStack_158.ObjectIndex = 0;
      FStack_158.ObjectSerialNumber = 0;
      uStack_140 = 0;
      FWeakObjectPtr::operator=(&FStack_158,(FObjectPtr)&uStack_140);
      (*pcVar1)(this,FStack_158,0);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_M_ItemImplShopBagItemSlot::UpdatedShopBagItemSlot",0x35,Yes);
    pwVar5 = L"npcFunctionShop.IsValid() == false";
    uVar4 = 0xa6;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_M_ItemImplShopBagItemSlot::UpdatedShopBagItemSlot",0x35,Yes);
    pwVar5 = L"itemDataBase.IsValid() == false";
    uVar4 = 0x9f;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_138.Ptr,uVar4,pwVar5);
  if ((void *)TStack_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_138._padding_);
  }
  return;
}

// OnSelectBagSlot @ 14bd7ce10

void __thiscall
UDS_M_ItemImplShopBagItemSlot::OnSelectBagSlot(UDS_M_ItemImplShopBagItemSlot *this,long64 param_1)

{
  code *pcVar1;
  longlong lVar2;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  lVar2 = (**(code **)(*(longlong *)this + 0x388))();
  FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
            ((FDS_DataContainer *)&this->field_0x40,Selected,lVar2 == param_1);
  UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
  pcVar1 = *(code **)(*(longlong *)this + 0x2e0);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (*pcVar1)(this,local_res8,0);
  return;
}

// OnUpdatedBagSlot @ 14bd83b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplShopBagItemSlot::OnUpdatedBagSlot(UDS_M_ItemImplShopBagItemSlot *this,long64 param_1)

{
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  UDS_NpcFunctionShop *this_00;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  GetNpcFunctionShop(this);
  bVar1 = FWeakObjectPtr::IsValid(local_148);
  if (bVar1) {
    this_00 = (UDS_NpcFunctionShop *)FWeakObjectPtr::Get(local_148);
    iVar2 = (**(code **)(*(longlong *)this + 0x380))(this);
    bVar1 = UDS_NpcFunctionShop::CheckPurchasedNPCShopGoodsInfo(this_00,iVar2);
    if (bVar1) {
      FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
                ((FDS_DataContainer *)&this->field_0x40,Purchased,true);
    }
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_M_ItemImplShopBagItemSlot::OnUpdatedBagSlot",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0xd4,L"npcFunctionShop.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnUpdatedBasketSlot @ 14bd83d90

void __thiscall
UDS_M_ItemImplShopBagItemSlot::OnUpdatedBasketSlot(UDS_M_ItemImplShopBagItemSlot *this,int param_1)

{
  bool bVar1;
  int iVar2;
  UDS_NPCSellData *this_00;
  FName *pFVar3;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FName local_18 [2];
  
  UpdatedShopBagItemSlot(this);
  if (-1 < param_1) {
    GetNpcSellData(this);
    bVar1 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar1) {
      (**(code **)(*(longlong *)this + 0x3a0))(this,&local_res20);
      bVar1 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar1) {
        this_00 = (UDS_NPCSellData *)FWeakObjectPtr::Get(&local_res18);
        iVar2 = UDS_NPCSellData::GetNPCSellBasketSlotIndex
                          (this_00,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res20);
        if (iVar2 == param_1) {
          pFVar3 = ::FName::FName(local_18,"Ani_Shop_Use");
          UDS_M_ItemImplBase::PlayAnimationEvent((UDS_M_ItemImplBase *)this,*pFVar3,PlayForward);
          FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
                    ((FDS_DataContainer *)&this->field_0x40,Purchased,false);
        }
      }
    }
  }
  return;
}

// OnUpdatedSellBasket @ 14bd83e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplShopBagItemSlot::OnUpdatedSellBasket(UDS_M_ItemImplShopBagItemSlot *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FWeakObjectPtr FStack_158;
  FWeakObjectPtr FStack_150;
  FWeakObjectPtr FStack_148;
  undefined8 uStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (**(code **)(*(longlong *)this + 0x3a0))(this,&FStack_150);
  bVar2 = FWeakObjectPtr::IsValid(&FStack_150);
  if (bVar2) {
    GetNpcFunctionShop(this);
    bVar2 = FWeakObjectPtr::IsValid(&FStack_148);
    if (bVar2) {
      UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
      pcVar1 = *(code **)(*(longlong *)this + 0x2e0);
      FStack_158.ObjectIndex = 0;
      FStack_158.ObjectSerialNumber = 0;
      uStack_140 = 0;
      FWeakObjectPtr::operator=(&FStack_158,(FObjectPtr)&uStack_140);
      (*pcVar1)(this,FStack_158,0);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_M_ItemImplShopBagItemSlot::UpdatedShopBagItemSlot",0x35,Yes);
    pwVar5 = L"npcFunctionShop.IsValid() == false";
    uVar4 = 0xa6;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_M_ItemImplShopBagItemSlot::UpdatedShopBagItemSlot",0x35,Yes);
    pwVar5 = L"itemDataBase.IsValid() == false";
    uVar4 = 0x9f;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_138.Ptr,uVar4,pwVar5);
  if ((void *)TStack_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_138._padding_);
  }
  return;
}

// UpdateSlotInfo @ 14bd936e0

void __thiscall UDS_M_ItemImplShopBagItemSlot::UpdateSlotInfo(UDS_M_ItemImplShopBagItemSlot *this)

{
  code *pcVar1;
  bool bVar2;
  EDS_ItemSlotStateType EVar3;
  int iVar4;
  undefined4 uVar5;
  FDS_ItemSlotInfo *pFVar6;
  long64 lVar7;
  
  pFVar6 = FDS_SlotInfo::GetSlotInfo<FDS_ItemSlotInfo>((FDS_SlotInfo *)&this->field_0x1e0);
  if (pFVar6 == (FDS_ItemSlotInfo *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3571834003243663265>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                       ,0x5f,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    (**(code **)(pFVar6->_padding_ + 0x10))(pFVar6);
    EVar3 = UDS_M_ItemImplBase::GetItemSlotType((UDS_M_ItemImplBase *)this);
    pFVar6->SlotType = EVar3;
    if (*(longlong *)&this->field_0x1d8 != 0) {
      iVar4 = (**(code **)(*(longlong *)this + 0x380))(this);
      pFVar6->ItemTID = (longlong)iVar4;
      lVar7 = (**(code **)(*(longlong *)this + 0x388))(this);
      pFVar6->ItemUID = lVar7;
      uVar5 = (**(code **)(*(longlong *)this + 0x390))(this);
      *(undefined4 *)((longlong)&pFVar6->_padding_ + 4) = uVar5;
      uVar5 = (**(code **)(*(longlong *)this + 0x3e0))(this);
      *(undefined4 *)&pFVar6->_padding_ = uVar5;
      *(undefined1 *)&pFVar6->_padding_ = 1;
    }
  }
  return;
}

// UpdatedShopBagItemSlot @ 14bd940b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplShopBagItemSlot::UpdatedShopBagItemSlot(UDS_M_ItemImplShopBagItemSlot *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148;
  undefined8 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (**(code **)(*(longlong *)this + 0x3a0))(this,&local_150);
  bVar2 = FWeakObjectPtr::IsValid(&local_150);
  if (bVar2) {
    GetNpcFunctionShop(this);
    bVar2 = FWeakObjectPtr::IsValid(&local_148);
    if (bVar2) {
      UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
      pcVar1 = *(code **)(*(longlong *)this + 0x2e0);
      local_158.ObjectIndex = 0;
      local_158.ObjectSerialNumber = 0;
      local_140 = 0;
      FWeakObjectPtr::operator=(&local_158,(FObjectPtr)&local_140);
      (*pcVar1)(this,local_158,0);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_M_ItemImplShopBagItemSlot::UpdatedShopBagItemSlot",0x35,Yes);
    pwVar5 = L"npcFunctionShop.IsValid() == false";
    uVar4 = 0xa6;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_M_ItemImplShopBagItemSlot::UpdatedShopBagItemSlot",0x35,Yes);
    pwVar5 = L"itemDataBase.IsValid() == false";
    uVar4 = 0x9f;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

