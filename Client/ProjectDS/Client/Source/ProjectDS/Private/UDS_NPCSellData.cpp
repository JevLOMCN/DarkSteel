// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 27

// StaticClass @ 14b546fb0

UClass * __cdecl UDS_NPCSellData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCSellData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCSellData",
               &Z_Registration_Info_UClass_UDS_NPCSellData.InnerSingleton,
               StaticRegisterNativesUDS_NPCSellData,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_NPCSellData>,InternalVTableHelperCtorCaller<UDS_NPCSellData>,
               local_res8,UDS_NPCDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCSellData.InnerSingleton;
}

// UDS_NPCSellData @ 14b54a8b0

UDS_NPCSellData * __thiscall
UDS_NPCSellData::UDS_NPCSellData(UDS_NPCSellData *this,FVTableHelper *param_1)

{
  UDS_NPCDataBase::UDS_NPCDataBase((UDS_NPCDataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCSellData__6B_;
  this->NpcID = 0;
  this->NpcFunctionTypeIndex = 0;
  this->NpcFunctionTypeValue = 0;
  (this->NPCSellBasket).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NPCSellBasket).ArrayNum = 0;
  (this->NPCSellBasket).ArrayMax = 0;
  this->bSellBasket_AbleGarbage = false;
  this->SellBasket_TotalCost = 0;
  this->SellBasket_CostID = 0;
  this->SellBasket_CostIconID = 0;
  this->SellBasket_SlotMax = 0;
  return this;
}

// ~UDS_NPCSellData @ 14b54b510

void __thiscall UDS_NPCSellData::~UDS_NPCSellData(UDS_NPCSellData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_NPCSellData__6B_;
  pFVar1 = (this->NPCSellBasket).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_NPCDataBase::~UDS_NPCDataBase((UDS_NPCDataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b54cbc0

UClass * __cdecl UDS_NPCSellData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCSellData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCSellData",
               &Z_Registration_Info_UClass_UDS_NPCSellData.InnerSingleton,
               StaticRegisterNativesUDS_NPCSellData,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_NPCSellData>,InternalVTableHelperCtorCaller<UDS_NPCSellData>,
               local_res8,UDS_NPCDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCSellData.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCSellData @ 14b54d790

void __cdecl UDS_NPCSellData::StaticRegisterNativesUDS_NPCSellData(void)

{
  return;
}

// UDS_NPCSellData @ 14ba91de0

UDS_NPCSellData * __thiscall
UDS_NPCSellData::UDS_NPCSellData(UDS_NPCSellData *this,FObjectInitializer *param_1)

{
  UDS_NPCDataBase::UDS_NPCDataBase((UDS_NPCDataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCSellData__6B_;
  this->NpcID = 0;
  this->NpcFunctionTypeIndex = 0;
  this->NpcFunctionTypeValue = 0;
  (this->NPCSellBasket).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NPCSellBasket).ArrayNum = 0;
  (this->NPCSellBasket).ArrayMax = 0;
  this->bSellBasket_AbleGarbage = false;
  this->SellBasket_TotalCost = 0;
  this->SellBasket_CostID = 0;
  this->SellBasket_CostIconID = 0;
  this->SellBasket_SlotMax = 0;
  return this;
}

// AddNPCSellBasketGoodsInfo @ 14ba93d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NPCSellData::AddNPCSellBasketGoodsInfo(UDS_NPCSellData *this,FDS_NPCSellGoodsInfo *param_1)

{
  int *piVar1;
  FWeakObjectPtr FVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UDS_ItemData *pUVar7;
  TWeakObjectPtr<UDS_QuickSlotDeckDataSet,FWeakObjectPtr> this_00;
  UDS_QuickSlotDeckDataSet *this_01;
  UDS_QuickSlotDeckData *this_02;
  UObject *pUVar8;
  FDS_NPCSellGoodsInfo *pFVar9;
  EDS_NPCShopResult EVar10;
  FWeakObjectPtr *pFVar11;
  undefined1 auStackY_1b8 [32];
  EDS_InventoryType local_188 [8];
  FWeakObjectPtr local_180;
  FWeakObjectPtr local_178;
  TSharedPtr<FDS_QuickSlotData,1> local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar3 = FWeakObjectPtr::IsValid(&(param_1->ItemData).WeakPtr);
  if (!bVar3) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_NPCSellData::AddNPCSellBasketGoodsInfo",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_158.Ptr,0xb3,L"InInfo.ItemData.IsValid() == false");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    FDS_ItemShopService::OnNPCShopResult(InvalidData);
    return;
  }
  local_180 = (param_1->ItemData).WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_180);
  if (!bVar3) {
    EVar10 = InvalidData;
    goto LAB_14ba94087;
  }
  pUVar7 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_180);
  bVar3 = UDS_ItemData::IsEquipped(pUVar7);
  if (bVar3) {
    EVar10 = Equipped;
    goto LAB_14ba94087;
  }
  pUVar7 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_180);
  bVar3 = UDS_ItemData::IsEquipped(pUVar7);
  this_00 = TDS_DataSetGetter<UDS_QuickSlotDeckDataSet>::Get((ulong64)&local_170);
  this_01 = (UDS_QuickSlotDeckDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (this_01 == (UDS_QuickSlotDeckDataSet *)0x0) {
LAB_14ba93ec6:
    bVar4 = false;
  }
  else {
    UDS_QuickSlotDeckDataSet::GetCurrentQuickSlotDeckData(this_01);
    bVar4 = TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr> *)&local_178,
                       (void *)0x0);
    if (bVar4) goto LAB_14ba93ec6;
    this_02 = (UDS_QuickSlotDeckData *)FWeakObjectPtr::Get(&local_178);
    UDS_QuickSlotDeckData::GetQuickSlotDataByUID(this_02,&local_170,pUVar7->ItemUID);
    if (local_170.Object == (FDS_QuickSlotData *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.SharedReferenceCount.ReferenceController);
      goto LAB_14ba93ec6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_170.SharedReferenceCount.ReferenceController);
    bVar4 = true;
  }
  if (((((pUVar7->ItemBaseTable).IsSellAble != true) || ((pUVar7->ItemBaseTable).SellPrice < 1)) ||
      (bVar3)) ||
     ((bVar4 || (pUVar8 = FWeakObjectPtr::Get(&local_180), pUVar8[0x11].field_0x9 == '\x01')))) {
    EVar10 = NotSellable;
  }
  else {
    if (((this->NPCSellBasket).ArrayNum < this->SellBasket_SlotMax) ||
       ((pFVar9 = GetNPCSellBasketGoodsInfoByItemData
                            (this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_180),
        pFVar9 != (FDS_NPCSellGoodsInfo *)0x0 &&
        (pUVar8 = FWeakObjectPtr::Get(&local_180), pUVar8[0x13].field_0x1c == '\0')))) {
      local_188[0] = PlayerNormal;
      pUVar8 = FWeakObjectPtr::Get(&(param_1->ItemData).WeakPtr);
      TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
      ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(&pUVar8[10].field_0x18,1,local_188);
      pUVar7 = (UDS_ItemData *)FWeakObjectPtr::Get(&(param_1->ItemData).WeakPtr);
      UDS_ItemData::GetStackCount_UnTradable(pUVar7,PlayerNormal);
      pFVar9 = GetNPCSellBasketGoodsInfoByItemData
                         (this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)
                               (param_1->ItemData).WeakPtr);
      if (pFVar9 != (FDS_NPCSellGoodsInfo *)0x0) {
        pFVar9->SellCount_Tradable = pFVar9->SellCount_Tradable + param_1->SellCount_Tradable;
        pFVar9->SellCount_UnTradable = pFVar9->SellCount_UnTradable + param_1->SellCount_UnTradable;
        FDS_NPCSellGoodsInfo::AdjustSellCount(pFVar9);
        UpdateSellBasketCondition(this);
        return;
      }
      if ((this->NPCSellBasket).ArrayNum < this->SellBasket_SlotMax) {
        FDS_NPCSellGoodsInfo::AdjustSellCount(param_1);
        iVar5 = (this->NPCSellBasket).ArrayNum;
        piVar1 = &(this->NPCSellBasket).ArrayMax;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x41c,&(this->NPCSellBasket).AllocatorInstance,piVar1);
        }
        (this->NPCSellBasket).ArrayNum = iVar5 + 1;
        FVar2 = (param_1->ItemData).WeakPtr;
        pFVar11 = (FWeakObjectPtr *)
                  ((this->NPCSellBasket).AllocatorInstance.Data + (longlong)iVar5 * 0x1c);
        *pFVar11 = (param_1->NPCSellData).WeakPtr;
        pFVar11[1] = FVar2;
        iVar5 = param_1->SellCount_UnTradable;
        pFVar11[2].ObjectIndex = param_1->SellCount_Tradable;
        pFVar11[2].ObjectSerialNumber = iVar5;
        pFVar11[3].ObjectIndex = param_1->SellCostValue;
        UpdateSellBasketCondition(this);
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_NPCSellData::AddNPCSellBasketGoodsInfo",0x2a,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0xcc,L"NPCSellBasket is full.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    EVar10 = NotEnoughBasket;
  }
LAB_14ba94087:
  FDS_ItemShopService::OnNPCShopResult(EVar10);
  return;
}

// AddNPCSellBasketGoodsInfo @ 14ba940c0

void __thiscall
UDS_NPCSellData::AddNPCSellBasketGoodsInfo
          (UDS_NPCSellData *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,int param_2)

{
  FWeakObjectPtr FVar1;
  bool bVar2;
  UObject *pUVar3;
  FDS_ItemBaseTableRow *pFVar4;
  EDS_NPCShopResult EVar5;
  int iVar6;
  int iVar7;
  FWeakObjectPtr local_res10 [2];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_58;
  UDS_NPCSellData *local_50;
  FDS_NPCSellGoodsInfo local_48;
  
  local_res10[0] = param_1.WeakPtr;
  bVar2 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (bVar2) {
    FDS_ItemShopService::OnNPCShopResult(InvalidData);
    return;
  }
  local_58 = local_res10[0];
  iVar6 = 0;
  if (param_2 < 0) {
    iVar6 = param_2;
  }
  iVar7 = 0;
  if (0 < param_2) {
    iVar7 = param_2;
  }
  bVar2 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_58,(void *)0x0);
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_NPCSellData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_50 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_NPCSellData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_50);
    FVar1 = local_res20;
    local_48.NPCSellData.WeakPtr.ObjectIndex = 0;
    local_48.NPCSellData.WeakPtr.ObjectSerialNumber = 0;
    local_50 = (UDS_NPCSellData *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_48,(FObjectPtr)&local_50);
    local_48.ItemData.WeakPtr.ObjectIndex = 0;
    local_48.ItemData.WeakPtr.ObjectSerialNumber = 0;
    local_50 = (UDS_NPCSellData *)0x0;
    FWeakObjectPtr::operator=(&local_48.ItemData.WeakPtr,(FObjectPtr)&local_50);
    local_48.ItemData.WeakPtr = local_58;
    local_48.SellCostValue = 0;
    local_48.NPCSellData.WeakPtr = FVar1;
    local_48.SellCount_Tradable = iVar6;
    local_48.SellCount_UnTradable = iVar7;
    pUVar3 = FWeakObjectPtr::Get(&local_58);
    pFVar4 = FDS_ItemBaseTableRow::Get((longlong)*(int *)&pUVar3[8].field_0x10,true);
    if (pFVar4 != (FDS_ItemBaseTableRow *)0x0) {
      if (pFVar4->IsSellAble != false) {
        local_48.SellCostValue = pFVar4->SellPrice;
        AddNPCSellBasketGoodsInfo(this,&local_48);
        return;
      }
      EVar5 = NotSellable;
      goto LAB_14ba94201;
    }
  }
  EVar5 = InvalidData;
LAB_14ba94201:
  FDS_ItemShopService::OnNPCShopResult(EVar5);
  return;
}

// AddNPCSellBasketGoodsInfo @ 14ba94230

void __thiscall
UDS_NPCSellData::AddNPCSellBasketGoodsInfo
          (UDS_NPCSellData *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,int param_2,
          int param_3)

{
  FWeakObjectPtr FVar1;
  bool bVar2;
  UObject *pUVar3;
  FDS_ItemBaseTableRow *pFVar4;
  EDS_NPCShopResult EVar5;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_48;
  UDS_NPCSellData *local_40;
  FDS_NPCSellGoodsInfo local_38;
  
  local_res10 = param_1.WeakPtr;
  bVar2 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_NPCSellData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    local_40 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_NPCSellData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_40);
    FVar1 = local_48;
    local_38.NPCSellData.WeakPtr.ObjectIndex = 0;
    local_38.NPCSellData.WeakPtr.ObjectSerialNumber = 0;
    local_40 = (UDS_NPCSellData *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_38,(FObjectPtr)&local_40);
    local_38.ItemData.WeakPtr.ObjectIndex = 0;
    local_38.ItemData.WeakPtr.ObjectSerialNumber = 0;
    local_40 = (UDS_NPCSellData *)0x0;
    FWeakObjectPtr::operator=(&local_38.ItemData.WeakPtr,(FObjectPtr)&local_40);
    local_38.ItemData.WeakPtr = local_res10;
    local_38.SellCostValue = 0;
    local_38.NPCSellData.WeakPtr = FVar1;
    local_38.SellCount_Tradable = param_2;
    local_38.SellCount_UnTradable = param_3;
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    pFVar4 = FDS_ItemBaseTableRow::Get((longlong)*(int *)&pUVar3[8].field_0x10,true);
    if (pFVar4 != (FDS_ItemBaseTableRow *)0x0) {
      if (pFVar4->IsSellAble != false) {
        local_38.SellCostValue = pFVar4->SellPrice;
        AddNPCSellBasketGoodsInfo(this,&local_38);
        return;
      }
      EVar5 = NotSellable;
      goto LAB_14ba94359;
    }
  }
  EVar5 = InvalidData;
LAB_14ba94359:
  FDS_ItemShopService::OnNPCShopResult(EVar5);
  return;
}

// CheckAddNPCSellBasket @ 14ba95ca0

EDS_NPCShopResult __thiscall
UDS_NPCSellData::CheckAddNPCSellBasket
          (UDS_NPCSellData *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  UDS_ItemData *pUVar3;
  TWeakObjectPtr<UDS_QuickSlotDeckDataSet,FWeakObjectPtr> this_00;
  UDS_QuickSlotDeckDataSet *this_01;
  UDS_QuickSlotDeckData *this_02;
  UObject *pUVar4;
  FDS_NPCSellGoodsInfo *pFVar5;
  EDS_NPCShopResult EVar6;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res20;
  TSharedPtr<FDS_QuickSlotData,1> local_18;
  
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar1) {
    return InvalidData;
  }
  pUVar3 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res10);
  bVar1 = UDS_ItemData::IsEquipped(pUVar3);
  if (bVar1) {
    return Equipped;
  }
  pUVar3 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res10);
  bVar1 = UDS_ItemData::IsEquipped(pUVar3);
  this_00 = TDS_DataSetGetter<UDS_QuickSlotDeckDataSet>::Get((ulong64)&local_18);
  this_01 = (UDS_QuickSlotDeckDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (this_01 != (UDS_QuickSlotDeckDataSet *)0x0) {
    UDS_QuickSlotDeckDataSet::GetCurrentQuickSlotDeckData(this_01);
    bVar2 = TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr> *)&local_res20,
                       (void *)0x0);
    if (!bVar2) {
      this_02 = (UDS_QuickSlotDeckData *)FWeakObjectPtr::Get(&local_res20);
      UDS_QuickSlotDeckData::GetQuickSlotDataByUID(this_02,&local_18,pUVar3->ItemUID);
      if (local_18.Object != (FDS_QuickSlotData *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        bVar2 = true;
        goto LAB_14ba95d7f;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  bVar2 = false;
LAB_14ba95d7f:
  if (((((pUVar3->ItemBaseTable).IsSellAble == true) && (0 < (pUVar3->ItemBaseTable).SellPrice)) &&
      (!bVar1)) && (!bVar2)) {
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    if (pUVar4[0x11].field_0x9 != '\x01') {
      if ((this->NPCSellBasket).ArrayNum < this->SellBasket_SlotMax) {
        return Succes;
      }
      pFVar5 = GetNPCSellBasketGoodsInfoByItemData
                         (this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res10);
      if (pFVar5 != (FDS_NPCSellGoodsInfo *)0x0) {
        pUVar4 = FWeakObjectPtr::Get(&local_res10);
        EVar6 = Succes;
        if (pUVar4[0x13].field_0x1c != '\0') {
          EVar6 = NotEnoughBasket;
        }
        return EVar6;
      }
      return NotEnoughBasket;
    }
  }
  return NotSellable;
}

// ClearNPCSellBasket @ 14ba98260

void __thiscall UDS_NPCSellData::ClearNPCSellBasket(UDS_NPCSellData *this)

{
  UDS_NPCShopEvent *pUVar1;
  
  (this->NPCSellBasket).ArrayNum = 0;
  if ((this->NPCSellBasket).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,&(this->NPCSellBasket).AllocatorInstance,0,&(this->NPCSellBasket).ArrayMax);
  }
  UpdateSellBasketCondition(this);
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_ItemBasketType_const_>::Broadcast
              (&pUVar1->OnClearedBasket,SellBasket);
    return;
  }
  return;
}

// Created @ 14ba9db60

void __thiscall UDS_NPCSellData::Created(UDS_NPCSellData *this)

{
  return;
}

// Deleted @ 14ba9dcf0

void __thiscall UDS_NPCSellData::Deleted(UDS_NPCSellData *this)

{
  return;
}

// GarbageNPCSellBasket @ 14baa1150

void __thiscall UDS_NPCSellData::GarbageNPCSellBasket(UDS_NPCSellData *this)

{
  FObjectPtr_u_0 *pFVar1;
  code *pcVar2;
  FWeakObjectPtr FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  int *piVar12;
  FDS_ItemBaseTableRow *pFVar13;
  uint *puVar14;
  uint uVar15;
  FObjectPtr_u_0 *this_00;
  uint uVar16;
  longlong lVar17;
  undefined1 local_res8 [8];
  EDS_InventoryType local_res10 [8];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  FDS_NPCSellGoodsInfo local_98;
  FWeakObjectPtr local_78;
  FWeakObjectPtr local_70;
  UObject *local_68;
  UDS_NPCSellData *local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  
  if (this->bSellBasket_AbleGarbage != false) {
    TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_70);
    bVar4 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&local_70,(void *)0x0);
    if (!bVar4) {
      pUVar8 = FWeakObjectPtr::Get(&local_70);
      pUVar11 = (UObject *)0x0;
      local_a8.Data = (FScriptContainerElement *)0x0;
      local_a0 = 0;
      this_00 = *(FObjectPtr_u_0 **)&pUVar8[3].field_0x18;
      iVar7 = *(int *)&pUVar8[3].field_0x20;
      pFVar1 = this_00 + iVar7;
      while( true ) {
        if (*(int *)&pUVar8[3].field_0x20 != iVar7) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (this_00 == pFVar1) break;
        pUVar10 = pUVar11;
        if (this_00->Handle != (UObject *)0x0) {
          pUVar9 = Z_Construct_UClass_UDS_ItemData_NoRegister();
          bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar9);
          if (bVar4) {
            pUVar10 = this_00->Handle;
          }
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar10);
        }
        local_res18.ObjectIndex = 0;
        local_res18.ObjectSerialNumber = 0;
        local_68 = pUVar10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar10);
        }
        FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_68);
        bVar4 = FWeakObjectPtr::IsValid(&local_res18);
        if ((bVar4) &&
           (pUVar10 = FWeakObjectPtr::Get(&local_res18), *(int *)&pUVar10[0x13].field_0x20 == 0x26ad
           )) {
          iVar5 = (int)local_a0;
          if ((int)local_a0 == local_a0._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_a8,(int *)((longlong)&local_a0 + 4));
          }
          local_a0 = CONCAT44(local_a0._4_4_,iVar5 + 1);
          *(FWeakObjectPtr *)(local_a8.Data + (longlong)iVar5 * 8) = local_res18;
        }
        this_00 = this_00 + 1;
      }
      lVar17 = (longlong)(int)local_a0;
      uVar16 = 0;
      pUVar8 = pUVar11;
      if (0 < lVar17) {
        do {
          uVar15 = (uint)pUVar11;
          uVar6 = uVar16;
          if ((int)uVar15 < (int)local_a0) {
            uVar6 = ~uVar15 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_res20 = *(FWeakObjectPtr *)(local_a8.Data + (longlong)pUVar8 * 8);
          bVar4 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_res20,(void *)0x0
                            );
          if (!bVar4) {
            if (this->SellBasket_SlotMax <= (int)uVar15) break;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            local_78.ObjectIndex = 0;
            local_78.ObjectSerialNumber = 0;
            local_60 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_60);
            FVar3 = local_78;
            local_98.NPCSellData.WeakPtr.ObjectIndex = 0;
            local_98.NPCSellData.WeakPtr.ObjectSerialNumber = 0;
            local_58 = 0;
            FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_98,(FObjectPtr)&local_58);
            local_98.ItemData.WeakPtr.ObjectIndex = 0;
            local_98.ItemData.WeakPtr.ObjectSerialNumber = 0;
            local_50[0] = 0;
            FWeakObjectPtr::operator=(&local_98.ItemData.WeakPtr,(FObjectPtr)local_50);
            local_98.ItemData.WeakPtr = local_res20;
            local_98.SellCount_Tradable = 0;
            local_98.SellCount_UnTradable = 0;
            local_98.SellCostValue = 0;
            local_98.NPCSellData.WeakPtr = FVar3;
            local_res10[0] = PlayerNormal;
            pUVar11 = FWeakObjectPtr::Get(&local_res20);
            piVar12 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                      ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                (&pUVar11[10].field_0x18,1,local_res10);
            local_98.SellCount_Tradable = *piVar12;
            pUVar11 = FWeakObjectPtr::Get(&local_res20);
            uVar6 = uVar16;
            if (*(int *)&pUVar11[8].field_0x20 != *(int *)&pUVar11[9].field_0x24) {
              pUVar10 = pUVar11 + 10;
              if (*(UObject **)&pUVar11[10].field_0x8 != (UObject *)0x0) {
                pUVar10 = *(UObject **)&pUVar11[10].field_0x8;
              }
              iVar7 = *(int *)(&pUVar10->field_0x0 +
                              (ulonglong)(*(int *)&pUVar11[10].field_0x10 - 1U & 1) * 4);
              if (iVar7 != -1) {
                do {
                  if (*(char *)(*(longlong *)&pUVar11[8].field_0x18 + (longlong)iVar7 * 0x10) ==
                      '\x01') {
                    puVar14 = (uint *)TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                                      ::FindChecked(&pUVar11[8].field_0x18,PlayerNormal);
                    uVar6 = *puVar14;
                    break;
                  }
                  iVar7 = *(int *)(*(longlong *)&pUVar11[8].field_0x18 + 8 + (longlong)iVar7 * 0x10)
                  ;
                } while (iVar7 != -1);
              }
            }
            local_98.SellCount_UnTradable = uVar6;
            pUVar11 = FWeakObjectPtr::Get(&local_res20);
            pFVar13 = FDS_ItemBaseTableRow::Get((longlong)*(int *)&pUVar11[8].field_0x10,true);
            if (pFVar13 != (FDS_ItemBaseTableRow *)0x0) {
              local_98.SellCostValue = pFVar13->SellPrice;
            }
            AddNPCSellBasketGoodsInfo(this,&local_98);
          }
          pUVar11 = (UObject *)(ulonglong)(uVar15 + 1);
          pUVar8 = (UObject *)&pUVar8->field_0x1;
        } while ((longlong)pUVar8 < lVar17);
      }
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
    }
  }
  return;
}

// GetData @ 14baa7900

TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr> __cdecl UDS_NPCSellData::GetData(ulong64 param_1)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *this;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_00;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  undefined1 local_18 [16];
  
  TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_res18);
  bVar2 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (bVar2) {
    *(undefined8 *)param_1 = 0;
    local_res20 = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
    return (TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_NPCSellData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14baa79a6;
  }
  pUVar3 = (UObject *)0x0;
LAB_14baa79a6:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetNPCSellBasket @ 14baadf20

TArray<FDS_NPCSellGoodsInfo,TSizedDefaultAllocator<32>_> * __thiscall
UDS_NPCSellData::GetNPCSellBasket(UDS_NPCSellData *this)

{
  return &this->NPCSellBasket;
}

// GetNPCSellBasketGoodsInfoByBasketSlotIndex @ 14baadf30

FDS_NPCSellGoodsInfo * __thiscall
UDS_NPCSellData::GetNPCSellBasketGoodsInfoByBasketSlotIndex(UDS_NPCSellData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FDS_NPCSellGoodsInfo *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->NPCSellBasket).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->NPCSellBasket).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FDS_NPCSellGoodsInfo *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FDS_NPCSellGoodsInfo *)
           ((this->NPCSellBasket).AllocatorInstance.Data + (longlong)param_1 * 0x1c);
  }
  return (FDS_NPCSellGoodsInfo *)0x0;
}

// GetNPCSellBasketGoodsInfoByItemData @ 14baadfc0

FDS_NPCSellGoodsInfo * __thiscall
UDS_NPCSellData::GetNPCSellBasketGoodsInfoByItemData
          (UDS_NPCSellData *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr *this_00;
  FDS_NPCSellGoodsInfo *pFVar5;
  FDS_NPCSellGoodsInfo *pFVar6;
  FWeakObjectPtr local_res10;
  undefined1 local_res18 [16];
  
  local_res10 = param_1.WeakPtr;
  bVar2 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar2) {
    pFVar5 = (FDS_NPCSellGoodsInfo *)(this->NPCSellBasket).AllocatorInstance.Data;
    iVar1 = (this->NPCSellBasket).ArrayNum;
    this_00 = &(pFVar5->ItemData).WeakPtr;
    pFVar6 = pFVar5 + iVar1;
    while( true ) {
      if ((this->NPCSellBasket).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FDS_NPCSellGoodsInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar5 == pFVar6) break;
      bVar2 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)this_00,(void *)0x0);
      if (!bVar2) {
        pUVar3 = FWeakObjectPtr::Get(this_00);
        pUVar4 = FWeakObjectPtr::Get(&local_res10);
        if (*(longlong *)&pUVar3[8].field_0x8 == *(longlong *)&pUVar4[8].field_0x8) {
          return pFVar5;
        }
      }
      pFVar5 = pFVar5 + 1;
      this_00 = (FWeakObjectPtr *)&this_00[3].ObjectSerialNumber;
    }
  }
  return (FDS_NPCSellGoodsInfo *)0x0;
}

// GetNPCSellBasketSlotIndex @ 14baae080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UDS_NPCSellData::GetNPCSellBasketSlotIndex
          (UDS_NPCSellData *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  uint uVar9;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    uVar9 = 0;
    iVar5 = (this->NPCSellBasket).ArrayNum;
    if (0 < iVar5) {
      do {
        uVar4 = 0;
        if ((int)uVar9 < (this->NPCSellBasket).ArrayNum) {
          uVar4 = ~uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        pFVar1 = (this->NPCSellBasket).AllocatorInstance.Data;
        bVar3 = FWeakObjectPtr::IsValid
                          ((FWeakObjectPtr *)(pFVar1 + (longlong)(int)uVar9 * 0x1c + 8));
        if (bVar3) {
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar1 + (longlong)(int)uVar9 * 0x1c + 8))
          ;
          pUVar8 = FWeakObjectPtr::Get(&local_res10);
          if (*(longlong *)&pUVar7[8].field_0x8 == *(longlong *)&pUVar8[8].field_0x8) {
            return uVar9;
          }
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < iVar5);
    }
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_NPCSellData::GetNPCSellBasketSlotIndex",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_148.Ptr,0x165,L"InItemData.IsValid() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return -1;
}

// GetNumOfNPCSellBasket @ 14baae760

int __thiscall UDS_NPCSellData::GetNumOfNPCSellBasket(UDS_NPCSellData *this)

{
  return (this->NPCSellBasket).ArrayNum;
}

// InitByEntityInfo @ 14bab4330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NPCSellData::InitByEntityInfo(UDS_NPCSellData *this)

{
  int iVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  uint uVar3;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  (**(code **)(this->_padding_ + 0x2c8))();
  iVar1 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  this->NpcID = iVar1;
  if (iVar1 < 1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NPCSellData::InitByEntityInfo",0x21,Yes);
    uVar3 = 0x71;
  }
  else {
    iVar1 = DS_CommonDataHelper::ShopBasketDefaultSlotCount();
    this->SellBasket_SlotMax = iVar1;
    if (0 < this->NpcID) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NPCSellData::InitByEntityInfo",0x21,Yes);
    uVar3 = 0x78;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,L"Invalid NpcID. (%d)");
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnItemSellResponse @ 14babfa10

void __thiscall UDS_NPCSellData::OnItemSellResponse(UDS_NPCSellData *this,ItemSellResponse *param_1)

{
  bool bVar1;
  UDS_NPCShopEvent *pUVar2;
  
  pUVar2 = UDS_NPCShopEvent::GetEvent();
  if (pUVar2 != (UDS_NPCShopEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnBasketSellCompleted);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnBasketSellCompleted).Delegate);
      return;
    }
  }
  return;
}

// RemoveNPCSellBasketGoodsInfo @ 14bac7f20

int __thiscall UDS_NPCSellData::RemoveNPCSellBasketGoodsInfo(UDS_NPCSellData *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UDS_NPCShopEvent *pUVar6;
  FScriptContainerElement *_Dst;
  
  if ((-1 < param_1) && (param_1 < (this->NPCSellBasket).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->NPCSellBasket).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    _Dst = (this->NPCSellBasket).AllocatorInstance.Data + (longlong)param_1 * 0x1c;
    iVar5 = (this->NPCSellBasket).ArrayNum + ~param_1;
    if (iVar5 != 0) {
      memmove(_Dst,_Dst + 0x1c,(longlong)iVar5 * 0x1c);
    }
    piVar1 = &(this->NPCSellBasket).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,&(this->NPCSellBasket).AllocatorInstance,(this->NPCSellBasket).ArrayNum,
               &(this->NPCSellBasket).ArrayMax);
    UpdateSellBasketCondition(this);
    pUVar6 = UDS_NPCShopEvent::GetEvent();
    if (pUVar6 != (UDS_NPCShopEvent *)0x0) {
      bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar6->OnRemovedBasketSlot);
      if (bVar3) {
        TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar6->OnRemovedBasketSlot).Delegate,param_1);
      }
    }
    return param_1;
  }
  return -1;
}

// RemoveNPCSellBasketGoodsInfo @ 14bac8040

int __thiscall
UDS_NPCSellData::RemoveNPCSellBasketGoodsInfo
          (UDS_NPCSellData *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  TArray<FDS_NPCSellGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  UDS_NPCShopEvent *pUVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  FWeakObjectPtr local_res10;
  longlong local_res18;
  
  local_res10 = param_1.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar4) {
    return -1;
  }
  uVar12 = 0;
  iVar6 = (this->NPCSellBasket).ArrayNum;
  if (0 < iVar6) {
    pTVar1 = &this->NPCSellBasket;
    do {
      uVar13 = ~uVar12 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar12 < (this->NPCSellBasket).ArrayNum) {
        uVar5 = uVar13;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      pFVar11 = (pTVar1->AllocatorInstance).Data;
      lVar10 = (longlong)(int)uVar12 * 0x1c;
      local_res18 = lVar10;
      bVar4 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)(pFVar11 + lVar10 + 8),
                         (void *)0x0);
      if (!bVar4) {
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar11 + lVar10 + 8));
        pUVar8 = FWeakObjectPtr::Get(&local_res10);
        if (*(longlong *)&pUVar7[8].field_0x8 == *(longlong *)&pUVar8[8].field_0x8) {
          if ((int)uVar12 < 0) {
            return -1;
          }
          if ((this->NPCSellBasket).ArrayNum <= (int)uVar12) {
            return -1;
          }
          uVar5 = 0;
          if ((int)uVar12 < (this->NPCSellBasket).ArrayNum) {
            uVar5 = uVar13;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          pFVar11 = (pTVar1->AllocatorInstance).Data + local_res18;
          iVar6 = (this->NPCSellBasket).ArrayNum + ~uVar12;
          if (iVar6 != 0) {
            memmove(pFVar11,pFVar11 + 0x1c,(longlong)iVar6 * 0x1c);
          }
          piVar2 = &(this->NPCSellBasket).ArrayNum;
          *piVar2 = *piVar2 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,&pTVar1->AllocatorInstance,(this->NPCSellBasket).ArrayNum,
                     &(this->NPCSellBasket).ArrayMax);
          UpdateSellBasketCondition(this);
          pUVar9 = UDS_NPCShopEvent::GetEvent();
          if (pUVar9 != (UDS_NPCShopEvent *)0x0) {
            bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &pUVar9->OnRemovedBasketSlot);
            if (bVar4) {
              TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                        (&(pUVar9->OnRemovedBasketSlot).Delegate,uVar12);
              return uVar12;
            }
            return uVar12;
          }
          return uVar12;
        }
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < iVar6);
  }
  return -1;
}

// ResetData @ 14bac9ba0

void __thiscall UDS_NPCSellData::ResetData(UDS_NPCSellData *this)

{
  int *piVar1;
  
  this->NpcID = 0;
  this->NpcFunctionTypeIndex = 0;
  this->NpcFunctionTypeValue = 0;
  piVar1 = &(this->NPCSellBasket).ArrayMax;
  (this->NPCSellBasket).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,&(this->NPCSellBasket).AllocatorInstance,0,piVar1);
  }
  this->SellBasket_TotalCost = 0;
  this->SellBasket_CostID = 0;
  this->SellBasket_CostIconID = 0;
  this->SellBasket_SlotMax = 0;
  return;
}

// SellNPCSellBasket @ 14baca8b0

void __thiscall UDS_NPCSellData::SellNPCSellBasket(UDS_NPCSellData *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UDS_NPCSellData *local_res20;
  
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res18);
    iVar1 = *(int *)&pUVar3[9].field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_NPCSellData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res20 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_NPCSellData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
    FDS_ItemShopService::RequestItemSell
              ((TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr>)local_res10,iVar1);
  }
  return;
}

// UpdateSellBasketCondition @ 14bad9e20

void __thiscall UDS_NPCSellData::UpdateSellBasketCondition(UDS_NPCSellData *this)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FDS_MoneyBaseTableRow *pFVar7;
  FScriptContainerElement *pFVar8;
  FObjectPtr_u_0 *this_00;
  FScriptContainerElement *pFVar9;
  UObject *local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  this->bSellBasket_AbleGarbage = false;
  this->SellBasket_TotalCost = 0;
  this->SellBasket_CostID = 0;
  this->SellBasket_CostIconID = 0;
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)local_res18);
  bVar3 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)local_res18,(void *)0x0);
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get(local_res18);
    this_00 = *(FObjectPtr_u_0 **)&pUVar4[3].field_0x18;
    iVar2 = *(int *)&pUVar4[3].field_0x20;
    pFVar1 = this_00 + iVar2;
    while( true ) {
      if (*(int *)&pUVar4[3].field_0x20 != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (this_00 == pFVar1) {
        bVar3 = false;
        goto LAB_14bad9f59;
      }
      pUVar6 = (UObject *)0x0;
      if (this_00->Handle != (UObject *)0x0) {
        pUVar5 = Z_Construct_UClass_UDS_ItemData_NoRegister();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
        if (bVar3) {
          pUVar6 = this_00->Handle;
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res8 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
      bVar3 = FWeakObjectPtr::IsValid(&local_res10);
      if ((bVar3) &&
         (pUVar6 = FWeakObjectPtr::Get(&local_res10), *(int *)&pUVar6[0x13].field_0x20 == 0x26ad))
      break;
      this_00 = this_00 + 1;
    }
    bVar3 = true;
LAB_14bad9f59:
    this->bSellBasket_AbleGarbage = bVar3;
    iVar2 = (this->NPCSellBasket).ArrayNum;
    pFVar8 = (this->NPCSellBasket).AllocatorInstance.Data;
    pFVar9 = pFVar8 + (longlong)iVar2 * 0x1c;
    while( true ) {
      if ((this->NPCSellBasket).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FDS_NPCSellGoodsInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar8 == pFVar9) break;
      this->SellBasket_TotalCost =
           this->SellBasket_TotalCost +
           (*(int *)(pFVar8 + 0x14) + *(int *)(pFVar8 + 0x10)) * *(int *)(pFVar8 + 0x18);
      pFVar8 = pFVar8 + 0x1c;
    }
    this->SellBasket_CostID = 1;
    pFVar7 = FDS_MoneyBaseTableRow::Get(1,true);
    if (pFVar7 != (FDS_MoneyBaseTableRow *)0x0) {
      this->SellBasket_CostIconID = pFVar7->ID_MoneyIcon;
    }
  }
  return;
}

