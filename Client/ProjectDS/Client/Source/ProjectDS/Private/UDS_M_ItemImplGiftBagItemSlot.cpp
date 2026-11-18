// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// StaticClass @ 14b51bf50

UClass * __cdecl UDS_M_ItemImplGiftBagItemSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplGiftBagItemSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplGiftBagItemSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplGiftBagItemSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplGiftBagItemSlot,0x1f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemImplGiftBagItemSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplGiftBagItemSlot>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplGiftBagItemSlot.InnerSingleton;
}

// UDS_M_ItemImplGiftBagItemSlot @ 14b5210d0

UDS_M_ItemImplGiftBagItemSlot * __thiscall
UDS_M_ItemImplGiftBagItemSlot::UDS_M_ItemImplGiftBagItemSlot
          (UDS_M_ItemImplGiftBagItemSlot *this,FVTableHelper *param_1)

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

// UDS_M_ItemImplGiftBagItemSlot @ 14b521140

UDS_M_ItemImplGiftBagItemSlot * __thiscall
UDS_M_ItemImplGiftBagItemSlot::UDS_M_ItemImplGiftBagItemSlot
          (UDS_M_ItemImplGiftBagItemSlot *this,FObjectInitializer *param_1)

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

// GetPrivateStaticClass @ 14b525860

UClass * __cdecl UDS_M_ItemImplGiftBagItemSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplGiftBagItemSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplGiftBagItemSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplGiftBagItemSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplGiftBagItemSlot,0x1f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemImplGiftBagItemSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplGiftBagItemSlot>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplGiftBagItemSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemImplGiftBagItemSlot @ 14b527440

void __cdecl UDS_M_ItemImplGiftBagItemSlot::StaticRegisterNativesUDS_M_ItemImplGiftBagItemSlot(void)

{
  return;
}

// ~UDS_M_ItemImplGiftBagItemSlot @ 14bd43d00

void __thiscall
UDS_M_ItemImplGiftBagItemSlot::~UDS_M_ItemImplGiftBagItemSlot(UDS_M_ItemImplGiftBagItemSlot *this)

{
  *(undefined ***)this = &_vftable__for__UDS_ModelBase__;
  *(undefined ***)&this->field_0x1a8 = &_vftable__for__IDS_ObjectPoolItem__;
  UDS_M_ItemImplBase::~UDS_M_ItemImplBase((UDS_M_ItemImplBase *)this);
  return;
}

// GetNpcFunctionGift @ 14bd5dac0

TWeakObjectPtr<UDS_NpcFunctionGift,FWeakObjectPtr> __thiscall
UDS_M_ItemImplGiftBagItemSlot::GetNpcFunctionGift(UDS_M_ItemImplGiftBagItemSlot *this)

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
    return (TWeakObjectPtr<UDS_NpcFunctionGift,FWeakObjectPtr>)in_RDX;
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
    pUVar5 = Z_Construct_UClass_UDS_NpcFunctionGift_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14bd5db91;
  }
  pUVar4 = (UObject *)0x0;
LAB_14bd5db91:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  *(undefined8 *)in_RDX = 0;
  local_res20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_NpcFunctionGift,FWeakObjectPtr>)in_RDX;
}

// GetQuantity @ 14bd5f780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_M_ItemImplGiftBagItemSlot::GetQuantity(UDS_M_ItemImplGiftBagItemSlot *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NpcFunctionGift *this_00;
  FDS_NPCGiftItemInfo *pFVar3;
  undefined1 auStackY_178 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  GetNpcFunctionGift(this);
  bVar1 = FWeakObjectPtr::IsValid(&local_148);
  if (bVar1) {
    (**(code **)(*(longlong *)this + 0x3a0))(this,&local_140);
    bVar1 = FWeakObjectPtr::IsValid(&local_140);
    if (bVar1) {
      this_00 = (UDS_NpcFunctionGift *)FWeakObjectPtr::Get(&local_148);
      pFVar3 = UDS_NpcFunctionGift::GetNPCGiftItemInfoByItemData
                         (this_00,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_140);
      if (pFVar3 == (FDS_NPCGiftItemInfo *)0x0) {
        return 0;
      }
      return pFVar3->GiftCount_UnTradable + pFVar3->GiftCount_Tradable;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return 0;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_M_ItemImplGiftBagItemSlot::GetQuantity",0x2a,Yes);
    pwVar5 = L"itemDataBase.IsValid() == false";
    uVar4 = 0x44;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return 0;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_M_ItemImplGiftBagItemSlot::GetQuantity",0x2a,Yes);
    pwVar5 = L"npcFunctionGift.IsValid() == false";
    uVar4 = 0x3d;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ == (void *)0x0) {
    return 0;
  }
  FMemory::Free((void *)local_138._padding_);
  return 0;
}

// InitItemImplMap @ 14bd67980

void __thiscall UDS_M_ItemImplGiftBagItemSlot::InitItemImplMap(UDS_M_ItemImplGiftBagItemSlot *this)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UClass *local_res20;
  undefined1 *local_18;
  UClass **local_10;
  
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplGiftBagItemSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = 0x26;
  if (UDS_M_ItemImplBase::ItemImplMap._8_4_ != UDS_M_ItemImplBase::ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (UDS_M_ItemImplBase::ItemImplMap._64_8_ != 0) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(UDS_M_ItemImplBase::ItemImplMap._72_4_ - 1 & 0x26) * 4);
    while (iVar1 != -1) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '&') {
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
             &DAT_00000026,(bool *)&local_18);
  return;
}

// IsDimmed @ 14bd6b2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_M_ItemImplGiftBagItemSlot::IsDimmed(UDS_M_ItemImplGiftBagItemSlot *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  FDS_NpcRelationBaseTableRow *this_00;
  FDS_NpcRelationItemTableRow *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  (**(code **)(*(longlong *)this + 0x3a0))(this,&local_140);
  bVar2 = FWeakObjectPtr::IsValid(&local_140);
  if (bVar2) {
    GetNpcFunctionGift(this);
    bVar2 = FWeakObjectPtr::IsValid(&local_148);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&local_148);
      if (*(int *)&pUVar4[1].field_0x20 < 1) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_M_ItemImplGiftBagItemSlot::IsDimmed",0x27,Yes);
          UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x6f,L"npcTID <= 0.");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
        bVar2 = UDS_M_ItemImplBase::IsDimmed((UDS_M_ItemImplBase *)this);
      }
      else {
        this_00 = FDS_NpcRelationBaseTableRow::GetRef((longlong)*(int *)&pUVar4[1].field_0x20,true);
        bVar2 = FDS_NpcRelationBaseTableRow::IsValid(this_00);
        if (bVar2) {
          pFVar5 = FDS_NpcRelationBaseTableRow::ID_NpcRealtionItemTable(this_00);
          pUVar4 = FWeakObjectPtr::Get(&local_140);
          pFVar6 = (pFVar5->GiftItemType).AllocatorInstance.Data;
          pFVar1 = pFVar6 + (longlong)(pFVar5->GiftItemType).ArrayNum * 4;
          for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 4) {
            if (*(int *)pFVar6 == *(int *)&pUVar4[0x13].field_0x20) goto LAB_14bd6b4c9;
          }
          bVar2 = true;
        }
        else {
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 != (UDS_LogManager *)0x0) {
            pUVar3 = UDS_LogManager::GetInst();
            local_138._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_138,"UDS_M_ItemImplGiftBagItemSlot::IsDimmed",0x27,Yes);
            UDS_LogManager::PrintLog
                      (pUVar3,1,Warning,local_138.Ptr,0x76,L"npcRelationBaseTableRow is Invalid.");
            if ((void *)local_138._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_138._padding_);
            }
          }
LAB_14bd6b4c9:
          bVar2 = UDS_M_ItemImplBase::IsDimmed((UDS_M_ItemImplBase *)this);
        }
      }
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_M_ItemImplGiftBagItemSlot::IsDimmed",0x27,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x68,L"npcFunctionGift is Invalid.")
        ;
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      bVar2 = UDS_M_ItemImplBase::IsDimmed((UDS_M_ItemImplBase *)this);
    }
  }
  else {
    bVar2 = UDS_M_ItemImplBase::IsDimmed((UDS_M_ItemImplBase *)this);
  }
  return bVar2;
}

// IsItemRemoveIcons @ 14bd6b9f0

bool __thiscall
UDS_M_ItemImplGiftBagItemSlot::IsItemRemoveIcons(UDS_M_ItemImplGiftBagItemSlot *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)this + 0x378))();
  return 0 < iVar1;
}

// IsQuantityCenter @ 14bd6bd10

bool __thiscall UDS_M_ItemImplGiftBagItemSlot::IsQuantityCenter(UDS_M_ItemImplGiftBagItemSlot *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)this + 0x378))();
  return 0 < iVar1;
}

// OnDeInit @ 14bd769a0

void __thiscall UDS_M_ItemImplGiftBagItemSlot::OnDeInit(UDS_M_ItemImplGiftBagItemSlot *this)

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
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectBagSlot,this);
  }
  return;
}

// OnEventMouseButtonUp @ 14bd770a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplGiftBagItemSlot::OnEventMouseButtonUp
          (UDS_M_ItemImplGiftBagItemSlot *this,FDS_WidgetPointerEventField *param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  longlong lVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  FDS_NpcRelationBaseTableRow *this_00;
  FDS_NpcRelationItemTableRow *pFVar7;
  UDS_NpcFunctionGift *this_01;
  UDS_NPCShopEvent *pUVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined1 auStackY_1a8 [32];
  uint uVar11;
  wchar_t *pwVar12;
  FWeakObjectPtr local_178;
  FWeakObjectPtr local_170;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  UDS_M_ItemImplBase::OnEventMouseButtonUp((UDS_M_ItemImplBase *)this,param_1);
  pTVar2 = (param_1->PointerEvent).EffectingButton.KeyDetails.SharedReferenceCount.
           ReferenceController;
  FVar3 = (param_1->PointerEvent).EffectingButton.KeyName;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar10 = FVar3 != EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar10) {
    return;
  }
  GetNpcFunctionGift(this);
  bVar10 = FWeakObjectPtr::IsValid(&local_170);
  if (bVar10) {
    (**(code **)(*(longlong *)this + 0x3a0))(this,&local_178);
    bVar10 = FWeakObjectPtr::IsValid(&local_178);
    if (bVar10) {
      pUVar6 = FWeakObjectPtr::Get(&local_170);
      this_00 = FDS_NpcRelationBaseTableRow::GetRef((longlong)*(int *)&pUVar6[1].field_0x20,true);
      bVar10 = FDS_NpcRelationBaseTableRow::IsValid(this_00);
      if (bVar10) {
        pFVar7 = FDS_NpcRelationBaseTableRow::ID_NpcRealtionItemTable(this_00);
        pUVar6 = FWeakObjectPtr::Get(&local_178);
        pFVar9 = (pFVar7->GiftItemType).AllocatorInstance.Data;
        pFVar1 = pFVar9 + (longlong)(pFVar7->GiftItemType).ArrayNum * 4;
        while( true ) {
          if (pFVar9 == pFVar1) {
            local_168._0_8_ = 0;
            local_168._8_8_ = 0;
            local_168._16_4_ = 0;
            UDS_UIMessageManager::OpenMsgByStringUi(0x4e26c,Alert_None_01,&local_168);
            return;
          }
          if (*(int *)pFVar9 == *(int *)&pUVar6[0x13].field_0x20) break;
          pFVar9 = pFVar9 + 4;
        }
        lVar4 = (param_1->PointerEvent)._padding_;
        this_01 = (UDS_NpcFunctionGift *)FWeakObjectPtr::Get(&local_170);
        UDS_NpcFunctionGift::Request_AddBagItemToBasket
                  (this_01,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_178,(lVar4 & 3) != 0);
        pUVar8 = UDS_NPCShopEvent::GetEvent();
        if (pUVar8 == (UDS_NPCShopEvent *)0x0) {
          return;
        }
        pUVar6 = FWeakObjectPtr::Get(&local_178);
        FDS_EventDelegate<__int64_const_>::Broadcast
                  (&pUVar8->OnSelectBagSlot,*(long64 *)&pUVar6[8].field_0x8);
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_M_ItemImplGiftBagItemSlot::OnEventMouseButtonUp",0x33,Yes);
      pwVar12 = L"npcRelationBaseTableRow is Invalid.";
      uVar11 = 0xa0;
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_M_ItemImplGiftBagItemSlot::OnEventMouseButtonUp",0x33,Yes);
      pwVar12 = L"itemDataBase.IsValid() == false";
      uVar11 = 0x96;
    }
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_M_ItemImplGiftBagItemSlot::OnEventMouseButtonUp",0x33,Yes);
    pwVar12 = L"npcFunctionGift.IsValid() == false";
    uVar11 = 0x8f;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,uVar11,pwVar12);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// OnInit @ 14bd79030

void __thiscall UDS_M_ItemImplGiftBagItemSlot::OnInit(UDS_M_ItemImplGiftBagItemSlot *this)

{
  UDS_NPCShopEvent *pUVar1;
  
  UDS_M_ItemImplBase::OnInit((UDS_M_ItemImplBase *)this);
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedBasket,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_M_ItemImplGiftBagItemSlot>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdatedBasket,(UDS_M_ItemImplGiftBagItemSlot *)&stack0x00000010,
               (pmf_581571b5 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedBasketSlot,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_M_ItemImplGiftBagItemSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdatedBasketSlot,(UDS_M_ItemImplGiftBagItemSlot *)&stack0x00000010,
               (pmf_4ffdbc1d *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnRemovedBasketSlot,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_M_ItemImplGiftBagItemSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnRemovedBasketSlot,(UDS_M_ItemImplGiftBagItemSlot *)&stack0x00000010,
               (pmf_4ffdbc1d *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectBagSlot,this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_M_ItemImplGiftBagItemSlot>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectBagSlot,(UDS_M_ItemImplGiftBagItemSlot *)&stack0x00000010,
               (pmf_112fa848 *)this);
  }
  return;
}

// OnItemSubtractionButtonClick @ 14bd7a7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplGiftBagItemSlot::OnItemSubtractionButtonClick
          (UDS_M_ItemImplGiftBagItemSlot *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NpcFunctionGift *this_00;
  undefined1 auStackY_178 [32];
  uint uVar3;
  wchar_t *pwVar4;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  GetNpcFunctionGift(this);
  bVar1 = FWeakObjectPtr::IsValid(&local_148);
  if (bVar1) {
    (**(code **)(*(longlong *)this + 0x3a0))(this,&local_140);
    bVar1 = FWeakObjectPtr::IsValid(&local_140);
    if (bVar1) {
      this_00 = (UDS_NpcFunctionGift *)FWeakObjectPtr::Get(&local_148);
      UDS_NpcFunctionGift::Request_RemoveBagItemFromBasket
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
              (&local_138,"UDS_M_ItemImplGiftBagItemSlot::OnItemSubtractionButtonClick",0x3b,Yes);
    pwVar4 = L"itemDataBase.IsValid() == false";
    uVar3 = 0xc2;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_M_ItemImplGiftBagItemSlot::OnItemSubtractionButtonClick",0x3b,Yes);
    pwVar4 = L"npcFunctionGift.IsValid() == false";
    uVar3 = 0xbb;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnRemovedBasketSlot @ 14bd7c920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplGiftBagItemSlot::OnRemovedBasketSlot(UDS_M_ItemImplGiftBagItemSlot *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr FStack_158;
  FWeakObjectPtr FStack_150;
  undefined8 auStack_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (**(code **)(*(longlong *)this + 0x3a0))(this,&FStack_150);
  bVar2 = FWeakObjectPtr::IsValid(&FStack_150);
  if (bVar2) {
    UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
    pcVar1 = *(code **)(*(longlong *)this + 0x2e0);
    FStack_158.ObjectIndex = 0;
    FStack_158.ObjectSerialNumber = 0;
    auStack_148[0] = 0;
    FWeakObjectPtr::operator=(&FStack_158,(FObjectPtr)auStack_148);
    (*pcVar1)(this,FStack_158,0);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_M_ItemImplGiftBagItemSlot::UpdatedShopBagItemSlot",0x35,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,TStack_138.Ptr,0xce,L"itemDataBase.IsValid() == false");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  return;
}

// OnSelectBagSlot @ 14bd7cd90

void __thiscall
UDS_M_ItemImplGiftBagItemSlot::OnSelectBagSlot(UDS_M_ItemImplGiftBagItemSlot *this,long64 param_1)

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

// OnUpdatedBasketSlot @ 14bd83cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplGiftBagItemSlot::OnUpdatedBasketSlot(UDS_M_ItemImplGiftBagItemSlot *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr FStack_158;
  FWeakObjectPtr FStack_150;
  undefined8 auStack_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (**(code **)(*(longlong *)this + 0x3a0))(this,&FStack_150);
  bVar2 = FWeakObjectPtr::IsValid(&FStack_150);
  if (bVar2) {
    UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
    pcVar1 = *(code **)(*(longlong *)this + 0x2e0);
    FStack_158.ObjectIndex = 0;
    FStack_158.ObjectSerialNumber = 0;
    auStack_148[0] = 0;
    FWeakObjectPtr::operator=(&FStack_158,(FObjectPtr)auStack_148);
    (*pcVar1)(this,FStack_158,0);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_M_ItemImplGiftBagItemSlot::UpdatedShopBagItemSlot",0x35,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,TStack_138.Ptr,0xce,L"itemDataBase.IsValid() == false");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  return;
}

// OnUpdatedSellBasket @ 14bd83e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplGiftBagItemSlot::OnUpdatedSellBasket(UDS_M_ItemImplGiftBagItemSlot *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr FStack_158;
  FWeakObjectPtr FStack_150;
  undefined8 auStack_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (**(code **)(*(longlong *)this + 0x3a0))(this,&FStack_150);
  bVar2 = FWeakObjectPtr::IsValid(&FStack_150);
  if (bVar2) {
    UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
    pcVar1 = *(code **)(*(longlong *)this + 0x2e0);
    FStack_158.ObjectIndex = 0;
    FStack_158.ObjectSerialNumber = 0;
    auStack_148[0] = 0;
    FWeakObjectPtr::operator=(&FStack_158,(FObjectPtr)auStack_148);
    (*pcVar1)(this,FStack_158,0);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_M_ItemImplGiftBagItemSlot::UpdatedShopBagItemSlot",0x35,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,TStack_138.Ptr,0xce,L"itemDataBase.IsValid() == false");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  return;
}

// UpdateSlotInfo @ 14bd93570

void __thiscall UDS_M_ItemImplGiftBagItemSlot::UpdateSlotInfo(UDS_M_ItemImplGiftBagItemSlot *this)

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

// UpdatedShopBagItemSlot @ 14bd93f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplGiftBagItemSlot::UpdatedShopBagItemSlot(UDS_M_ItemImplGiftBagItemSlot *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  undefined8 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (**(code **)(*(longlong *)this + 0x3a0))(this,&local_150);
  bVar2 = FWeakObjectPtr::IsValid(&local_150);
  if (bVar2) {
    UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
    pcVar1 = *(code **)(*(longlong *)this + 0x2e0);
    local_158.ObjectIndex = 0;
    local_158.ObjectSerialNumber = 0;
    local_148[0] = 0;
    FWeakObjectPtr::operator=(&local_158,(FObjectPtr)local_148);
    (*pcVar1)(this,local_158,0);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_M_ItemImplGiftBagItemSlot::UpdatedShopBagItemSlot",0x35,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0xce,L"itemDataBase.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

