// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 32

// StaticClass @ 14b547f40

UClass * __cdecl UDS_NPCShopData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCShopData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCShopData",
               &Z_Registration_Info_UClass_UDS_NPCShopData.InnerSingleton,
               StaticRegisterNativesUDS_NPCShopData,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_NPCShopData>,InternalVTableHelperCtorCaller<UDS_NPCShopData>,
               local_res8,UDS_NPCDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCShopData.InnerSingleton;
}

// UDS_NPCShopData @ 14b54a900

UDS_NPCShopData * __thiscall
UDS_NPCShopData::UDS_NPCShopData(UDS_NPCShopData *this,FVTableHelper *param_1)

{
  UDS_NPCDataBase::UDS_NPCDataBase((UDS_NPCDataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCShopData__6B_;
  *(undefined8 *)&this->NPCShopGoodsInfoMap = 0;
  *(undefined8 *)&(this->NPCShopGoodsInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->NPCShopGoodsInfoMap).field_0x20 = 0;
  this->NpcID = 0;
  this->NpcFunctionTypeValue = 0;
  this->NpcShopID = 0;
  this->ShopGroupID = 0;
  *(undefined4 *)&(this->NPCShopGoodsInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->NPCShopGoodsInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NPCShopGoodsInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->NPCShopGoodsInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NPCShopGoodsInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->NPCShopGoodsInfoMap).field_0x48 = 0;
  (this->NPCShopBasket).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NPCShopBasket).ArrayNum = 0;
  (this->NPCShopBasket).ArrayMax = 0;
  (this->PurchasedNPCShopBasket).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PurchasedNPCShopBasket).ArrayNum = 0;
  (this->PurchasedNPCShopBasket).ArrayMax = 0;
  this->bBuyBasket_AbleCost = false;
  this->bBuyBasket_AbleInvenSlot = false;
  this->BuyBasket_TotalCost = 0;
  this->BuyBasket_CostID = 0;
  this->BuyBasket_CostIconID = 0;
  this->BuyBasket_SlotMax = 0;
  return this;
}

// ~UDS_NPCShopData @ 14b54b550

void __thiscall UDS_NPCShopData::~UDS_NPCShopData(UDS_NPCShopData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_NPCShopData__6B_;
  pFVar1 = (this->PurchasedNPCShopBasket).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NPCShopBasket).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->NPCShopGoodsInfoMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NPCShopGoodsInfoMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_NPCShopGoodsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_NPCShopGoodsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_NPCShopGoodsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NPCShopGoodsInfoMap);
  UDS_NPCDataBase::~UDS_NPCDataBase((UDS_NPCDataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b54cc80

UClass * __cdecl UDS_NPCShopData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCShopData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCShopData",
               &Z_Registration_Info_UClass_UDS_NPCShopData.InnerSingleton,
               StaticRegisterNativesUDS_NPCShopData,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_NPCShopData>,InternalVTableHelperCtorCaller<UDS_NPCShopData>,
               local_res8,UDS_NPCDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCShopData.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCShopData @ 14b54d7a0

void __cdecl UDS_NPCShopData::StaticRegisterNativesUDS_NPCShopData(void)

{
  return;
}

// UDS_NPCShopData @ 14ba91e30

UDS_NPCShopData * __thiscall
UDS_NPCShopData::UDS_NPCShopData(UDS_NPCShopData *this,FObjectInitializer *param_1)

{
  UDS_NPCDataBase::UDS_NPCDataBase((UDS_NPCDataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCShopData__6B_;
  *(undefined8 *)&this->NPCShopGoodsInfoMap = 0;
  *(undefined8 *)&(this->NPCShopGoodsInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->NPCShopGoodsInfoMap).field_0x20 = 0;
  this->NpcID = 0;
  this->NpcFunctionTypeValue = 0;
  this->NpcShopID = 0;
  this->ShopGroupID = 0;
  *(undefined4 *)&(this->NPCShopGoodsInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->NPCShopGoodsInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NPCShopGoodsInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->NPCShopGoodsInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NPCShopGoodsInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->NPCShopGoodsInfoMap).field_0x48 = 0;
  (this->NPCShopBasket).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NPCShopBasket).ArrayNum = 0;
  (this->NPCShopBasket).ArrayMax = 0;
  (this->PurchasedNPCShopBasket).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PurchasedNPCShopBasket).ArrayNum = 0;
  (this->PurchasedNPCShopBasket).ArrayMax = 0;
  this->bBuyBasket_AbleCost = false;
  this->bBuyBasket_AbleInvenSlot = false;
  this->BuyBasket_TotalCost = 0;
  this->BuyBasket_CostID = 0;
  this->BuyBasket_CostIconID = 0;
  this->BuyBasket_SlotMax = 0;
  return this;
}

// AddNPCShopBasketGoodsInfo @ 14ba94380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NPCShopData::AddNPCShopBasketGoodsInfo(UDS_NPCShopData *this,int param_1,int param_2)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  code *pcVar3;
  FWeakObjectPtr FVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long64 lVar10;
  undefined1 uVar11;
  undefined3 uVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  EDS_NPCShopResult EVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  UDS_LogManager *pUVar23;
  FDS_NPCShopGoodsInfo *pFVar24;
  longlong lVar25;
  UDS_NPCShopEvent *pUVar26;
  undefined1 *puVar27;
  FScriptContainerElement *pFVar28;
  int iVar29;
  undefined1 auStackY_218 [32];
  undefined8 local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  undefined4 uVar12;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if (*(int *)&(this->NPCShopGoodsInfoMap).field_0x8 !=
      *(int *)&(this->NPCShopGoodsInfoMap).field_0x34) {
    puVar27 = *(undefined1 **)&(this->NPCShopGoodsInfoMap).field_0x40;
    if (puVar27 == (undefined1 *)0x0) {
      puVar27 = &(this->NPCShopGoodsInfoMap).field_0x38;
    }
    iVar22 = *(int *)(puVar27 +
                     (ulonglong)(*(int *)&(this->NPCShopGoodsInfoMap).field_0x48 - 1U & param_1) * 4
                     );
    if (iVar22 != -1) {
      do {
        if (*(int *)((longlong)iVar22 * 0x60 + *(longlong *)&this->NPCShopGoodsInfoMap) == param_1)
        {
          pFVar24 = TMapBase<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>
                    ::FindChecked((TMapBase<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>
                                   *)&this->NPCShopGoodsInfoMap,param_1);
          if (pFVar24 != (FDS_NPCShopGoodsInfo *)0x0) {
            EVar18 = CheckAddNPCShopBasket(this,param_1,param_2);
            if (EVar18 != Succes) {
              FDS_ItemShopService::OnNPCShopResult(EVar18);
              return;
            }
            iVar22 = pFVar24->SelectMaxCnt;
            if (pFVar24->IsBuyLimitAble == true) {
              iVar22 = pFVar24->Quantity;
            }
            uVar19 = GetNPCShopBasketSlotIndex(this,param_1);
            if ((-1 < (int)uVar19) && ((int)uVar19 < (this->NPCShopBasket).ArrayNum)) {
              uVar20 = 0;
              if ((int)uVar19 < (this->NPCShopBasket).ArrayNum) {
                uVar20 = ~uVar19 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar28 = (this->NPCShopBasket).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x50;
              if (pFVar28 != (FScriptContainerElement *)0x0) {
                if (*(int *)(pFVar28 + 0x40) + param_2 < iVar22) {
                  iVar22 = *(int *)(pFVar28 + 0x40) + param_2;
                }
                iVar21 = 1;
                if (1 < iVar22) {
                  iVar21 = iVar22;
                }
                *(int *)(pFVar28 + 0x40) = iVar21;
                goto LAB_14ba9466f;
              }
            }
            iVar21 = (this->NPCShopBasket).ArrayNum;
            if (this->BuyBasket_SlotMax <= iVar21) {
              FDS_ItemShopService::OnNPCShopResult(NotEnoughBasket);
              return;
            }
            FVar4 = (pFVar24->NPCShopData).WeakPtr;
            iVar15 = pFVar24->ShopListTID;
            iVar16 = pFVar24->ShopGroupId;
            piVar1 = &(this->NPCShopBasket).ArrayMax;
            if (param_2 < iVar22) {
              iVar22 = param_2;
            }
            uVar5 = *(undefined8 *)&pFVar24->ListOrder;
            uVar6 = *(undefined8 *)&pFVar24->ItemValue;
            uVar7 = *(undefined8 *)&pFVar24->BuyTemplateType;
            uVar8 = *(undefined8 *)&pFVar24->BuyPrice;
            uVar9 = *(undefined8 *)&pFVar24->BuyLimitResetTimeId;
            lVar10 = (pFVar24->NextDateTime).Ticks;
            uVar11 = pFVar24->BuyLimitContentsType;
            uVar13 = *(undefined3 *)&pFVar24->field_0x45;
            uVar12 = CONCAT31(uVar13,uVar11);
            uVar14 = *(undefined8 *)&pFVar24->BuyLimitContentsValue;
            iVar29 = 1;
            if (1 < iVar22) {
              iVar29 = iVar22;
            }
            local_168 = CONCAT44(uVar12,iVar29);
            if (iVar21 == *piVar1) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x850,&(this->NPCShopBasket).AllocatorInstance,piVar1);
              (this->NPCShopBasket).ArrayNum = iVar21;
            }
            (this->NPCShopBasket).ArrayNum = iVar21 + 1;
            lVar25 = (longlong)iVar21;
            pFVar28 = (this->NPCShopBasket).AllocatorInstance.Data;
            pFVar2 = (FWeakObjectPtr *)(pFVar28 + lVar25 * 0x50);
            *pFVar2 = FVar4;
            pFVar2[1].ObjectIndex = iVar15;
            pFVar2[1].ObjectSerialNumber = iVar16;
            *(undefined8 *)(pFVar28 + lVar25 * 0x50 + 0x10) = uVar5;
            *(undefined8 *)(pFVar28 + lVar25 * 0x50 + 0x10 + 8) = uVar6;
            *(undefined8 *)(pFVar28 + lVar25 * 0x50 + 0x20) = uVar7;
            *(undefined8 *)(pFVar28 + lVar25 * 0x50 + 0x20 + 8) = uVar8;
            *(undefined8 *)(pFVar28 + lVar25 * 0x50 + 0x30) = uVar9;
            *(long64 *)(pFVar28 + lVar25 * 0x50 + 0x30 + 8) = lVar10;
            *(undefined8 *)(pFVar28 + lVar25 * 0x50 + 0x40) = local_168;
            *(undefined8 *)(pFVar28 + lVar25 * 0x50 + 0x40 + 8) = uVar14;
LAB_14ba9466f:
            UpdateBuyBasketCondition(this);
            UpdateNPCShopGoodsInfoCondition(this);
            pUVar26 = UDS_NPCShopEvent::GetEvent();
            if (pUVar26 == (UDS_NPCShopEvent *)0x0) {
              return;
            }
            iVar22 = GetNPCShopBasketSlotIndex(this,param_1);
            bVar17 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                               ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                                &pUVar26->OnUpdatedBasketSlot);
            if (bVar17) {
              TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                        (&(pUVar26->OnUpdatedBasketSlot).Delegate,iVar22);
            }
            bVar17 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                               ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                                &pUVar26->OnSelectShopItemSlot);
            if (!bVar17) {
              return;
            }
            TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                      (&(pUVar26->OnSelectShopItemSlot).Delegate,param_1);
            return;
          }
          break;
        }
        iVar22 = *(int *)((longlong)iVar22 * 0x60 + 0x58 + *(longlong *)&this->NPCShopGoodsInfoMap);
      } while (iVar22 != -1);
    }
  }
  pUVar23 = UDS_LogManager::GetInst();
  if (pUVar23 != (UDS_LogManager *)0x0) {
    pUVar23 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_NPCShopData::AddNPCShopBasketGoodsInfo",0x2a,Yes);
    UDS_LogManager::PrintLog(pUVar23,1,Warning,local_158.Ptr,0x152,L"npcShopGoodsInfo is nullptr.");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  FDS_ItemShopService::OnNPCShopResult(InvalidData);
  return;
}

// CheckAddNPCShopBasket @ 14ba95e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EDS_NPCShopResult __thiscall
UDS_NPCShopData::CheckAddNPCShopBasket(UDS_NPCShopData *this,int param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  FDS_NPCShopGoodsInfo *pFVar5;
  FDS_NPCShopGoodsInfo *pFVar6;
  long64 lVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  UDS_NPCShopData *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*(int *)&(this->NPCShopGoodsInfoMap).field_0x8 !=
      *(int *)&(this->NPCShopGoodsInfoMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->NPCShopGoodsInfoMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->NPCShopGoodsInfoMap).field_0x38;
    }
    iVar3 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->NPCShopGoodsInfoMap).field_0x48 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        if (*(int *)((longlong)iVar3 * 0x60 + *(longlong *)&this->NPCShopGoodsInfoMap) == param_1) {
          pFVar5 = TMapBase<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>
                   ::FindChecked((TMapBase<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>
                                  *)&this->NPCShopGoodsInfoMap,param_1);
          if (pFVar5 != (FDS_NPCShopGoodsInfo *)0x0) {
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UDS_NPCShopData *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            iVar3 = 0;
            local_158.ObjectIndex = 0;
            local_158.ObjectSerialNumber = 0;
            local_150 = this;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UDS_NPCShopData *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=(&local_158,(FObjectPtr)&local_150);
            bVar2 = FDS_ItemShopService::IsShopGoodsBuyLimitCotentsCheck
                              ((TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr>)local_158,param_1);
            if (bVar2) {
              return LimitLevel;
            }
            pFVar6 = GetNPCShopBasketGoodsInfo(this,param_1);
            if (pFVar6 != (FDS_NPCShopGoodsInfo *)0x0) {
              iVar3 = pFVar6->Quantity;
            }
            iVar8 = pFVar5->SelectMaxCnt;
            if ((pFVar5->IsBuyLimitAble == true) && (pFVar5->Quantity < iVar8)) {
              iVar8 = pFVar5->Quantity;
            }
            if (iVar8 < iVar3 + param_2) {
              return NotEnoughQuantity;
            }
            iVar3 = pFVar5->BuyPrice;
            lVar1 = this->BuyBasket_TotalCost;
            lVar7 = GetHaveCost(pFVar5->BuyTemplateType,pFVar5->BuyTemplateValue);
            if (lVar1 + param_2 * iVar3 <= lVar7) {
              return Succes;
            }
            return NotEnoughCost;
          }
          break;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x60 + 0x58 + *(longlong *)&this->NPCShopGoodsInfoMap);
      } while (iVar3 != -1);
    }
  }
  pUVar4 = UDS_LogManager::GetInst();
  if (pUVar4 != (UDS_LogManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_NPCShopData::CheckAddNPCShopBasket",0x26,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x233,L"npcShopGoodsInfo is nullptr.");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  return InvalidData;
}

// CheckPurchasedNPCShopGoodsInfo @ 14ba96b20

bool __thiscall UDS_NPCShopData::CheckPurchasedNPCShopGoodsInfo(UDS_NPCShopData *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PurchasedNPCShopBasket).ArrayNum;
  pFVar2 = (this->PurchasedNPCShopBasket).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((this->PurchasedNPCShopBasket).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_NPCShopGoodsInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(int *)(pFVar2 + 0x14) == param_1) {
      return true;
    }
    pFVar2 = pFVar2 + 0x50;
  }
  return false;
}

// ClearNPCShopBasket @ 14ba982d0

void __thiscall UDS_NPCShopData::ClearNPCShopBasket(UDS_NPCShopData *this)

{
  int *piVar1;
  TArray<FDS_NPCShopGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FDS_NPCShopGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  UDS_NPCShopEvent *pUVar6;
  
  pTVar2 = &this->NPCShopBasket;
  pTVar3 = &this->PurchasedNPCShopBasket;
  if (pTVar3 != pTVar2) {
    iVar4 = (this->PurchasedNPCShopBasket).ArrayMax;
    piVar1 = &(this->PurchasedNPCShopBasket).ArrayMax;
    iVar5 = (this->NPCShopBasket).ArrayNum;
    _Src = (pTVar2->AllocatorInstance).Data;
    (this->PurchasedNPCShopBasket).ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar5,iVar4,&pTVar3->AllocatorInstance,iVar5,piVar1);
      if (iVar5 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar5 * 0x50);
      }
    }
  }
  (this->NPCShopBasket).ArrayNum = 0;
  if ((this->NPCShopBasket).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&pTVar2->AllocatorInstance,0,&(this->NPCShopBasket).ArrayMax);
  }
  UpdateBuyBasketCondition(this);
  UpdateNPCShopGoodsInfoCondition(this);
  pUVar6 = UDS_NPCShopEvent::GetEvent();
  if (pUVar6 == (UDS_NPCShopEvent *)0x0) {
    return;
  }
  FDS_EventDelegate<enum_EDS_ItemBasketType_const_>::Broadcast(&pUVar6->OnClearedBasket,BuyBasket);
  return;
}

// ClearPurchasedNPCShopBasket @ 14ba98680

void __thiscall UDS_NPCShopData::ClearPurchasedNPCShopBasket(UDS_NPCShopData *this)

{
  (this->PurchasedNPCShopBasket).ArrayNum = 0;
  if ((this->PurchasedNPCShopBasket).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&(this->PurchasedNPCShopBasket).AllocatorInstance,0,
               &(this->PurchasedNPCShopBasket).ArrayMax);
  }
  return;
}

// Created @ 14ba9db70

void __thiscall UDS_NPCShopData::Created(UDS_NPCShopData *this)

{
  return;
}

// Deleted @ 14ba9dd00

void __thiscall UDS_NPCShopData::Deleted(UDS_NPCShopData *this)

{
  UDS_ShopManager *pUVar1;
  
  pUVar1 = UDS_ShopManager::GetInst();
  if (pUVar1 != (UDS_ShopManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->NpcShopBuyLimitChangedDelegate,this);
    return;
  }
  return;
}

// GetAvailableBuyQuantity @ 14baa4a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_NPCShopData::GetAvailableBuyQuantity(UDS_NPCShopData *this,int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  FDS_NPCShopGoodsInfo *pFVar4;
  FDS_NPCShopGoodsInfo *pFVar5;
  long64 lVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStackY_188 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*(int *)&(this->NPCShopGoodsInfoMap).field_0x8 !=
      *(int *)&(this->NPCShopGoodsInfoMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->NPCShopGoodsInfoMap).field_0x40;
    puVar1 = &(this->NPCShopGoodsInfoMap).field_0x38;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = puVar1;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->NPCShopGoodsInfoMap).field_0x48 - 1U & param_1) * 4);
    if (iVar8 != -1) {
      do {
        if (*(int *)((longlong)iVar8 * 0x60 + *(longlong *)&this->NPCShopGoodsInfoMap) == param_1) {
          pFVar4 = TMapBase<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>
                   ::FindChecked((TMapBase<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>
                                  *)&this->NPCShopGoodsInfoMap,param_1);
          if (pFVar4 != (FDS_NPCShopGoodsInfo *)0x0) {
            iVar8 = 0;
            if (*(int *)&(this->NPCShopGoodsInfoMap).field_0x8 ==
                *(int *)&(this->NPCShopGoodsInfoMap).field_0x34) goto LAB_14baa4bec;
            puVar7 = *(undefined1 **)&(this->NPCShopGoodsInfoMap).field_0x40;
            if (puVar7 == (undefined1 *)0x0) {
              puVar7 = puVar1;
            }
            iVar2 = *(int *)(puVar7 + (ulonglong)
                                      (*(int *)&(this->NPCShopGoodsInfoMap).field_0x48 - 1U &
                                      param_1) * 4);
            if (iVar2 == -1) goto LAB_14baa4bec;
            goto LAB_14baa4bd0;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x60 + 0x58 + *(longlong *)&this->NPCShopGoodsInfoMap);
      } while (iVar8 != -1);
    }
  }
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 != (UDS_LogManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_NPCShopData::GetAvailableBuyQuantity",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,0x264,L"npcShopGoodsInfo is nullptr.");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  return 0;
  while (iVar2 = *(int *)((longlong)iVar2 * 0x60 + 0x58 + *(longlong *)&this->NPCShopGoodsInfoMap),
        iVar2 != -1) {
LAB_14baa4bd0:
    if (*(int *)((longlong)iVar2 * 0x60 + *(longlong *)&this->NPCShopGoodsInfoMap) == param_1) {
      pFVar5 = TMapBase<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>
               ::FindChecked((TMapBase<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>
                              *)&this->NPCShopGoodsInfoMap,param_1);
      if (pFVar5 != (FDS_NPCShopGoodsInfo *)0x0) {
        iVar8 = pFVar5->SelectMaxCnt;
        if ((pFVar5->IsBuyLimitAble == true) && (pFVar5->Quantity < iVar8)) {
          iVar8 = pFVar5->Quantity;
        }
        goto LAB_14baa4c66;
      }
      break;
    }
  }
LAB_14baa4bec:
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 != (UDS_LogManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_NPCShopData::GetBuyLimtQuantity",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,0x286,L"npcShopGoodsInfo is nullptr.");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
LAB_14baa4c66:
  iVar2 = 0;
  pFVar5 = GetNPCShopBasketGoodsInfo(this,param_1);
  if (pFVar5 != (FDS_NPCShopGoodsInfo *)0x0) {
    iVar2 = pFVar5->Quantity;
  }
  lVar6 = GetHaveCost(pFVar4->BuyTemplateType,pFVar4->BuyTemplateValue);
  lVar9 = (longlong)((iVar8 - iVar2) * pFVar4->BuyPrice) + this->BuyBasket_TotalCost;
  if (lVar6 < lVar9) {
    fVar10 = (float)(lVar9 - lVar6);
    iVar8 = iVar8 + ((int)ROUND(__real_bf000000 - (fVar10 + fVar10) / (float)pFVar4->BuyPrice) >> 1)
    ;
  }
  iVar2 = 0;
  if (-1 < iVar8) {
    iVar2 = iVar8;
  }
  return iVar2;
}

// GetBuyLimtQuantity @ 14baa4ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_NPCShopData::GetBuyLimtQuantity(UDS_NPCShopData *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  FDS_NPCShopGoodsInfo *pFVar4;
  undefined1 *puVar5;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (*(int *)&(this->NPCShopGoodsInfoMap).field_0x8 !=
      *(int *)&(this->NPCShopGoodsInfoMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->NPCShopGoodsInfoMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->NPCShopGoodsInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->NPCShopGoodsInfoMap).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->NPCShopGoodsInfoMap;
      do {
        if (*(int *)((longlong)iVar2 * 0x60 + lVar1) == param_1) {
          pFVar4 = TMapBase<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>
                   ::FindChecked((TMapBase<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>
                                  *)&this->NPCShopGoodsInfoMap,param_1);
          if (pFVar4 != (FDS_NPCShopGoodsInfo *)0x0) {
            iVar2 = pFVar4->SelectMaxCnt;
            if (pFVar4->IsBuyLimitAble != true) {
              return iVar2;
            }
            if (pFVar4->Quantity < iVar2) {
              iVar2 = pFVar4->Quantity;
            }
            return iVar2;
          }
          break;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x60 + 0x58 + lVar1);
      } while (iVar2 != -1);
    }
  }
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 != (UDS_LogManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NPCShopData::GetBuyLimtQuantity",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x286,L"npcShopGoodsInfo is nullptr.");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return 0;
}

// GetData @ 14baa7a00

TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr> __cdecl UDS_NPCShopData::GetData(ulong64 param_1)

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
    return (TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_NPCShopData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14baa7aa3;
  }
  pUVar3 = (UObject *)0x0;
LAB_14baa7aa3:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetHaveCost @ 14baab1f0

long64 __cdecl UDS_NPCShopData::GetHaveCost(EDS_Template param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  UDS_MoneyData *this;
  long64 lVar3;
  UDS_ItemData *this_00;
  FWeakObjectPtr local_res18 [2];
  
  if (param_1 == MoneyBase) {
    UDS_MoneyData::GetData((ulong64)local_res18,UDS_PlayerData::MainPlayerEntityID,SUB41(param_2,0))
    ;
    bVar1 = TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr> *)local_res18,(void *)0x0);
    if (!bVar1) {
      this = (UDS_MoneyData *)FWeakObjectPtr::Get(local_res18);
      lVar3 = UDS_MoneyData::GetTotalQuantity(this);
      return lVar3;
    }
  }
  else if (param_1 == ItemBase) {
    DS_ItemDataUtil::GetItemDataByTID((int)local_res18);
    bVar1 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)local_res18,(void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(local_res18);
      iVar2 = UDS_ItemData::GetStackCount_Total(this_00,PlayerNormal);
      return (longlong)iVar2;
    }
  }
  return 0;
}

// GetNPCShopBasket @ 14baae230

TArray<FDS_NPCShopGoodsInfo,TSizedDefaultAllocator<32>_> * __thiscall
UDS_NPCShopData::GetNPCShopBasket(UDS_NPCShopData *this)

{
  return &this->NPCShopBasket;
}

// GetNPCShopBasketGoodsInfo @ 14baae240

FDS_NPCShopGoodsInfo * __thiscall
UDS_NPCShopData::GetNPCShopBasketGoodsInfo(UDS_NPCShopData *this,int param_1)

{
  int iVar1;
  FDS_NPCShopGoodsInfo *pFVar2;
  FDS_NPCShopGoodsInfo *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->NPCShopBasket).ArrayNum;
  pFVar2 = (FDS_NPCShopGoodsInfo *)(this->NPCShopBasket).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->NPCShopBasket).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_NPCShopGoodsInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2->ShopListTID == param_1) {
      return pFVar2;
    }
    pFVar2 = pFVar2 + 1;
  }
  return (FDS_NPCShopGoodsInfo *)0x0;
}

// GetNPCShopBasketGoodsInfoByBasketSlotIndex @ 14baae2c0

FDS_NPCShopGoodsInfo * __thiscall
UDS_NPCShopData::GetNPCShopBasketGoodsInfoByBasketSlotIndex(UDS_NPCShopData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FDS_NPCShopGoodsInfo *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->NPCShopBasket).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->NPCShopBasket).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FDS_NPCShopGoodsInfo *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FDS_NPCShopGoodsInfo *)
           ((this->NPCShopBasket).AllocatorInstance.Data + (longlong)param_1 * 0x50);
  }
  return (FDS_NPCShopGoodsInfo *)0x0;
}

// GetNPCShopBasketSlotIndex @ 14baae360

int __thiscall UDS_NPCShopData::GetNPCShopBasketSlotIndex(UDS_NPCShopData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar8 = (longlong)(this->NPCShopBasket).ArrayNum;
  uVar5 = 0;
  uVar4 = 0xffffffff;
  if (0 < lVar8) {
    lVar6 = 0;
    uVar7 = 0xffffffff;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->NPCShopBasket).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      uVar4 = uVar5;
      if (*(int *)((this->NPCShopBasket).AllocatorInstance.Data + lVar6 + 8) != param_1) {
        uVar4 = uVar7;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x50;
      lVar8 = lVar8 + -1;
      uVar7 = uVar4;
    } while (lVar8 != 0);
  }
  return uVar4;
}

// GetNPCShopGoodsInfo @ 14baae430

FDS_NPCShopGoodsInfo * __thiscall
UDS_NPCShopData::GetNPCShopGoodsInfo(UDS_NPCShopData *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  FDS_NPCShopGoodsInfo *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->NPCShopGoodsInfoMap).field_0x8 !=
      *(int *)&(this->NPCShopGoodsInfoMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->NPCShopGoodsInfoMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->NPCShopGoodsInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->NPCShopGoodsInfoMap).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->NPCShopGoodsInfoMap;
      do {
        if (*(int *)((longlong)iVar2 * 0x60 + lVar1) == param_1) {
          pFVar3 = TMapBase<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>
                   ::FindChecked((TMapBase<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>
                                  *)&this->NPCShopGoodsInfoMap,param_1);
          return pFVar3;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x60 + 0x58 + lVar1);
      } while (iVar2 != -1);
    }
  }
  return (FDS_NPCShopGoodsInfo *)0x0;
}

// GetNPCShopGoodsInfoMap @ 14baae4a0

TMap<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>
* __thiscall UDS_NPCShopData::GetNPCShopGoodsInfoMap(UDS_NPCShopData *this)

{
  return &this->NPCShopGoodsInfoMap;
}

// GetNeedBuyCost @ 14baae4b0

long64 __cdecl UDS_NPCShopData::GetNeedBuyCost(int param_1,int param_2)

{
  FDS_ShopListTableRow *pFVar1;
  
  pFVar1 = FDS_ShopListTableRow::GetRef((longlong)param_1,true);
  return (longlong)(param_2 * pFVar1->BuyPrice);
}

// GetNumOfNPCShopBasket @ 14baae770

int __thiscall UDS_NPCShopData::GetNumOfNPCShopBasket(UDS_NPCShopData *this)

{
  return (this->NPCShopBasket).ArrayNum;
}

// InitByEntityInfo @ 14bab4490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NPCShopData::InitByEntityInfo(UDS_NPCShopData *this)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  UDS_NPCDataSet *pUVar8;
  UDS_InteractionDataSet *this_00;
  UObject *pUVar9;
  FDS_NpcShopTableRow *pFVar10;
  UDS_ShopManager *pUVar11;
  longlong *plVar12;
  undefined1 auStackY_248 [32];
  uint uVar13;
  wchar_t *pwVar14;
  undefined1 local_208 [8];
  undefined1 local_200 [48];
  int local_1d0;
  FWeakObjectPtr local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined1 local_1a8;
  int local_1a4;
  int local_1a0;
  char local_19c;
  undefined1 local_198 [40];
  FDS_NPCShopGoodsInfo *local_170;
  FWeakObjectPtr *local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  (**(code **)(this->_padding_ + 0x2c8))();
  iVar6 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  this->NpcID = iVar6;
  if (iVar6 < 1) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_NPCShopData::InitByEntityInfo",0x21,Yes);
    pwVar14 = L"Invalid NpcID. (%d)";
    uVar13 = 0x88;
  }
  else {
    iVar6 = DS_CommonDataHelper::ShopBasketDefaultSlotCount();
    this->BuyBasket_SlotMax = iVar6;
    if (this->NpcID < 1) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar7 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_NPCShopData::InitByEntityInfo",0x21,Yes);
      pwVar14 = L"Invalid NpcID. (%d)";
      uVar13 = 0x90;
    }
    else {
      UDS_DataBase::GetEntityID((UDS_DataBase *)this);
      TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)(local_200 + 8));
      bVar5 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)(local_200 + 8),
                         (void *)0x0);
      if (bVar5) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar7 = UDS_LogManager::GetInst();
        UDS_DataBase::GetEntityID((UDS_DataBase *)this);
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_NPCShopData::InitByEntityInfo",0x21,Yes);
        pwVar14 = L"npcDataSet is nullptr. (%llu)";
        uVar13 = 0x97;
      }
      else {
        pUVar8 = (UDS_NPCDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_200 + 8));
        bVar5 = UDS_NPCDataSet::HasInteractionFunctionType(pUVar8,Shop);
        if (bVar5) {
          UDS_DataBase::GetEntityID((UDS_DataBase *)this);
          TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)(local_200 + 0x18));
          bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_200 + 0x18));
          if (bVar5) {
            this_00 = (UDS_InteractionDataSet *)
                      FWeakObjectPtr::Get((FWeakObjectPtr *)(local_200 + 0x18));
            UDS_InteractionDataSet::GetInteractionDataByType(this_00,(char)local_200 + Max);
            bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_200 + 0x20));
            if (bVar5) {
              pUVar8 = (UDS_NPCDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_200 + 8));
              pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_200 + 0x20));
              iVar6 = UDS_NPCDataSet::GetInteractionFunctionValue
                                (pUVar8,*(int *)&pUVar9[2].field_0x8,Shop);
              this->NpcFunctionTypeValue = iVar6;
              pFVar10 = FDS_NpcShopTableRow::Get((longlong)iVar6,true);
              if (pFVar10 == (FDS_NpcShopTableRow *)0x0) {
                pUVar7 = UDS_LogManager::GetInst();
                if (pUVar7 == (UDS_LogManager *)0x0) {
                  return;
                }
                pUVar7 = UDS_LogManager::GetInst();
                local_158._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_158,"UDS_NPCShopData::InitByEntityInfo",0x21,Yes);
                pwVar14 = L"npcShopTableRow is nullptr. (%d)";
                uVar13 = 0xb8;
              }
              else {
                this->NpcShopID = pFVar10->ID;
                iVar6 = pFVar10->ID_ShopGroup;
                this->ShopGroupID = iVar6;
                if (0 < iVar6) {
                  FDS_ShopListTableRow::GetAll
                            ((TArray<FDS_ShopListTableRow_const_*,TSizedDefaultAllocator<32>_> *)
                             (local_200 + 0x28));
                  iVar6 = local_1d0;
                  plVar1 = (longlong *)(local_200._40_8_ + (longlong)local_1d0 * 8);
                  plVar12 = (longlong *)local_200._40_8_;
                  while( true ) {
                    if (local_1d0 != iVar6) {
                      `TCheckedPointerIterator<FDS_ShopListTableRow_const_*,int,0>::operator!='::
                      __l2::<lambda_1>::operator()(local_208);
                    }
                    if (plVar12 == plVar1) break;
                    lVar2 = *plVar12;
                    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == this->ShopGroupID)) {
                      if (UE::GC::GIsIncrementalReachabilityPending != false) {
                        UE::GC::MarkAsReachable((UObject *)this);
                      }
                      local_200._16_4_ = 0;
                      local_200._20_4_ = 0;
                      local_200._0_8_ = this;
                      if (UE::GC::GIsIncrementalReachabilityPending != false) {
                        UE::GC::MarkAsReachable((UObject *)this);
                      }
                      FWeakObjectPtr::operator=
                                ((FWeakObjectPtr *)(local_200 + 0x10),(FObjectPtr)local_200);
                      uVar3 = local_200._16_8_;
                      local_1c8.ObjectIndex = 0;
                      local_1c8.ObjectSerialNumber = 0;
                      local_200._0_8_ = (<lambda_1> *)0x0;
                      FWeakObjectPtr::operator=(&local_1c8,(FObjectPtr)local_200);
                      uVar4 = local_200._16_8_;
                      local_1c0 = *(undefined4 *)(lVar2 + 8);
                      local_170 = (FDS_NPCShopGoodsInfo *)(lVar2 + 8);
                      local_19c = *(char *)(lVar2 + 0x2c);
                      local_198._4_4_ = *(undefined4 *)(lVar2 + 0x34);
                      local_1bc = *(undefined4 *)(lVar2 + 0x10);
                      local_1b8 = *(undefined4 *)(lVar2 + 0x14);
                      local_1b4 = *(undefined4 *)(lVar2 + 0x18);
                      local_1b0 = *(undefined4 *)(lVar2 + 0x1c);
                      local_1ac = *(undefined4 *)(lVar2 + 0x40);
                      local_1a8 = *(undefined1 *)(lVar2 + 0x20);
                      local_1a4 = *(int *)(lVar2 + 0x24);
                      local_1a0 = *(int *)(lVar2 + 0x28);
                      local_198._0_4_ = *(undefined4 *)(lVar2 + 0x30);
                      local_198[0x14] = *(undefined1 *)(lVar2 + 0x38);
                      local_198._24_4_ = *(undefined4 *)(lVar2 + 0x3c);
                      local_198._16_4_ = 0;
                      if (local_19c == '\x01') {
                        local_198._16_4_ = local_198._4_4_;
                      }
                      local_168 = &local_1c8;
                      local_198._8_8_ = 0;
                      local_200._16_4_ = (undefined4)uVar3;
                      local_200._20_4_ = SUB84(uVar3,4);
                      local_1c8.ObjectIndex = local_200._16_4_;
                      local_1c8.ObjectSerialNumber = local_200._20_4_;
                      local_200._16_8_ = uVar4;
                      TSet<TTuple<int,FDS_NPCShopGoodsInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>,FDefaultSetAllocator>
                      ::Emplace<TPairInitializer<int_const_&,FDS_NPCShopGoodsInfo_&>_>
                                ((TSet<TTuple<int,FDS_NPCShopGoodsInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>,FDefaultSetAllocator>
                                  *)&this->NPCShopGoodsInfoMap,
                                 (TPairInitializer<int_const_&,FDS_NPCShopGoodsInfo_&> *)
                                 (local_198 + 0x20),(bool *)&local_170);
                    }
                    plVar12 = plVar12 + 1;
                  }
                  local_200._0_8_ = local_208;
                  TSet<TTuple<int,FDS_NPCShopGoodsInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>,FDefaultSetAllocator>
                  ::
                  Sort<TSortableMapBase<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>::FValueComparisonClass<_UDS_NPCShopData::InitByEntityInfo_::__l2::<lambda_1>_>_>
                            ((TSet<TTuple<int,FDS_NPCShopGoodsInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>,FDefaultSetAllocator>
                              *)&this->NPCShopGoodsInfoMap,
                             (FValueComparisonClass<_public:_virtual_void___cdecl_UDS_NPCShopData::InitByEntityInfo(void)_::_2_::<lambda_1>_>
                              *)local_200);
                  pUVar11 = UDS_ShopManager::GetInst();
                  if (pUVar11 != (UDS_ShopManager *)0x0) {
                    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &pUVar11->NpcShopBuyLimitChangedDelegate,this);
                    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
                    AddUObject<UDS_NPCShopData>
                              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                                *)&pUVar11->NpcShopBuyLimitChangedDelegate,
                               (UDS_NPCShopData *)local_200,(pmf_d836a6d8)this);
                    UpdateNPCShopGoodsInfoCondition(this);
                  }
                  goto LAB_14bab4aac;
                }
                pUVar7 = UDS_LogManager::GetInst();
                if (pUVar7 == (UDS_LogManager *)0x0) {
                  return;
                }
                pUVar7 = UDS_LogManager::GetInst();
                local_158._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_158,"UDS_NPCShopData::InitByEntityInfo",0x21,Yes);
                pwVar14 = L"Invalid ShopGroupID. (%d)";
                uVar13 = 0xc0;
              }
            }
            else {
              pUVar7 = UDS_LogManager::GetInst();
              if (pUVar7 == (UDS_LogManager *)0x0) {
                return;
              }
              pUVar7 = UDS_LogManager::GetInst();
              UDS_DataBase::GetEntityID((UDS_DataBase *)this);
              local_158._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_158,"UDS_NPCShopData::InitByEntityInfo",0x21,Yes);
              pwVar14 = L"interactionData is nullptr. (%llu)";
              uVar13 = 0xad;
            }
          }
          else {
            pUVar7 = UDS_LogManager::GetInst();
            if (pUVar7 == (UDS_LogManager *)0x0) {
              return;
            }
            pUVar7 = UDS_LogManager::GetInst();
            UDS_DataBase::GetEntityID((UDS_DataBase *)this);
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_NPCShopData::InitByEntityInfo",0x21,Yes);
            pwVar14 = L"interactionDataSet is nullptr. (%llu)";
            uVar13 = 0xa6;
          }
        }
        else {
          pUVar7 = UDS_LogManager::GetInst();
          if (pUVar7 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar7 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_NPCShopData::InitByEntityInfo",0x21,Yes);
          pwVar14 = L"Not HasInteractionFunctionType Shop. (%d)";
          uVar13 = 0x9d;
        }
      }
    }
  }
  UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,uVar13,pwVar14);
  local_200._40_8_ = local_158._padding_;
LAB_14bab4aac:
  if ((longlong *)local_200._40_8_ != (longlong *)0x0) {
    FMemory::Free((void *)local_200._40_8_);
  }
  return;
}

// OnItemBuyResponse @ 14babf8c0

void __thiscall UDS_NPCShopData::OnItemBuyResponse(UDS_NPCShopData *this,ItemBuyResponse *param_1)

{
  bool bVar1;
  UDS_NPCShopEvent *pUVar2;
  
  pUVar2 = UDS_NPCShopEvent::GetEvent();
  if (pUVar2 != (UDS_NPCShopEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnBasketPurchaseCompleted);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnBasketPurchaseCompleted).Delegate);
      return;
    }
  }
  return;
}

// PurchaseNPCShopBasket @ 14bac35e0

void __thiscall UDS_NPCShopData::PurchaseNPCShopBasket(UDS_NPCShopData *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UDS_NPCShopData *local_res20;
  
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res18);
    iVar1 = *(int *)&pUVar3[9].field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_NPCShopData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res20 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_NPCShopData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
    FDS_ItemShopService::RequestItemBuy
              ((TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr>)local_res10,iVar1);
  }
  return;
}

// RemoveNPCShopBasketGoodsInfo @ 14bac8270

int __thiscall UDS_NPCShopData::RemoveNPCShopBasketGoodsInfo(UDS_NPCShopData *this,int param_1)

{
  int *piVar1;
  TArray<FDS_NPCShopGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UDS_NPCShopEvent *pUVar7;
  FScriptContainerElement *_Dst;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  
  lVar11 = (longlong)(this->NPCShopBasket).ArrayNum;
  uVar8 = 0;
  if (lVar11 < 1) {
    return -1;
  }
  lVar9 = 0;
  lVar10 = 0;
  pTVar2 = &this->NPCShopBasket;
  while( true ) {
    uVar12 = ~uVar8 >> 0x1f;
    uVar5 = 0;
    if ((int)uVar8 < (this->NPCShopBasket).ArrayNum) {
      uVar5 = uVar12;
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
    if (*(int *)((pTVar2->AllocatorInstance).Data + lVar9 + 8) == param_1) break;
    uVar8 = uVar8 + 1;
    lVar10 = lVar10 + 1;
    lVar9 = lVar9 + 0x50;
    if (lVar11 <= lVar10) {
      return -1;
    }
  }
  uVar5 = 0;
  if ((int)uVar8 < (this->NPCShopBasket).ArrayNum) {
    uVar5 = uVar12;
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
  _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x50;
  iVar6 = (this->NPCShopBasket).ArrayNum + ~uVar8;
  if (iVar6 != 0) {
    memmove(_Dst,_Dst + 0x50,(longlong)iVar6 * 0x50);
  }
  piVar1 = &(this->NPCShopBasket).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x50,8,&pTVar2->AllocatorInstance,(this->NPCShopBasket).ArrayNum,
             &(this->NPCShopBasket).ArrayMax);
  UpdateBuyBasketCondition(this);
  UpdateNPCShopGoodsInfoCondition(this);
  pUVar7 = UDS_NPCShopEvent::GetEvent();
  if (pUVar7 == (UDS_NPCShopEvent *)0x0) {
    return uVar8;
  }
  bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &pUVar7->OnRemovedBasketSlot);
  if (!bVar4) {
    return uVar8;
  }
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
            (&(pUVar7->OnRemovedBasketSlot).Delegate,uVar8);
  return uVar8;
}

// ResetData @ 14bac9c00

void __thiscall UDS_NPCShopData::ResetData(UDS_NPCShopData *this)

{
  this->NpcID = 0;
  this->NpcFunctionTypeValue = 0;
  this->ShopGroupID = 0;
  TSet<TTuple<int,FDS_NPCShopGoodsInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FDS_NPCShopGoodsInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>,FDefaultSetAllocator>
           *)&this->NPCShopGoodsInfoMap);
  (this->NPCShopBasket).ArrayNum = 0;
  if ((this->NPCShopBasket).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&(this->NPCShopBasket).AllocatorInstance,0,&(this->NPCShopBasket).ArrayMax);
  }
  this->bBuyBasket_AbleCost = false;
  this->bBuyBasket_AbleInvenSlot = false;
  this->BuyBasket_TotalCost = 0;
  this->BuyBasket_CostID = 0;
  this->BuyBasket_CostIconID = 0;
  return;
}

// UpdateBuyBasketCondition @ 14bad5c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NPCShopData::UpdateBuyBasketCondition(UDS_NPCShopData *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FDS_ItemBaseTableRow *pFVar7;
  UDS_LogManager *pUVar8;
  long64 lVar9;
  ForElementType<FSetElementId> FVar10;
  uint *puVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_248 [32];
  undefined1 local_218;
  FScriptContainerElement local_217;
  int local_214;
  TPairInitializer<int_&,int_&> local_210;
  FScriptContainerElement *local_200;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_1f8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this->BuyBasket_TotalCost = 0;
  this->BuyBasket_CostID = 0;
  this->BuyBasket_CostIconID = 0;
  this->bBuyBasket_AbleCost = false;
  this->bBuyBasket_AbleInvenSlot = false;
  iVar12 = 0;
  if ((this->NPCShopBasket).ArrayNum < 1) {
    return;
  }
  this->BuyBasket_CostID = *(int *)((this->NPCShopBasket).AllocatorInstance.Data + 0x24);
  if (((this->NPCShopBasket).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar13 = (this->NPCShopBasket).AllocatorInstance.Data;
  if (pFVar13[0x20] == (FScriptContainerElement)0x1f) {
    pFVar7 = (FDS_ItemBaseTableRow *)
             FDS_MoneyBaseTableRow::GetRef((longlong)*(int *)(pFVar13 + 0x24),true);
    bVar5 = FDS_MoneyBaseTableRow::IsValid((FDS_MoneyBaseTableRow *)pFVar7);
  }
  else {
    if (pFVar13[0x20] != (FScriptContainerElement)0x29) goto LAB_14bad5d0a;
    pFVar7 = FDS_ItemBaseTableRow::GetRef((longlong)*(int *)(pFVar13 + 0x24),true);
    bVar5 = FDS_ItemBaseTableRow::IsValid(pFVar7);
  }
  if (bVar5 != false) {
    iVar12 = pFVar7->ID_Icon;
  }
LAB_14bad5d0a:
  this->BuyBasket_CostIconID = iVar12;
  if (((this->NPCShopBasket).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_217 = (this->NPCShopBasket).AllocatorInstance.Data[0x20];
  if (((this->NPCShopBasket).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar13 = (this->NPCShopBasket).AllocatorInstance.Data;
  iVar12 = (this->NPCShopBasket).ArrayNum;
  local_214 = *(int *)(pFVar13 + 0x24);
  pFVar14 = pFVar13 + (longlong)iVar12 * 0x50;
  local_1a8.Elements._0_8_ = 0;
  local_1a8.Elements._8_8_ = 0;
  local_1a8.Elements._32_8_ = 0;
  local_1a8.Elements._40_4_ = 0;
  local_1a8.Elements._44_4_ = 0x80;
  local_1a8.Elements._48_4_ = 0xffffffff;
  local_1a8.Elements._52_4_ = 0;
  local_1a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1a8.HashSize = 0;
LAB_14bad5de6:
  if ((this->NPCShopBasket).ArrayNum != iVar12) {
    local_218 = 0;
    `TCheckedPointerIterator<FDS_NPCShopGoodsInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
              (&local_218);
  }
  iVar6 = 0;
  if (pFVar13 == pFVar14) {
    lVar9 = GetHaveCost((EDS_Template)local_217,local_214);
    local_1f8.Elements._48_8_ = _UNK_150631d98;
    local_1f8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_1f8.Elements._0_8_ = 0;
    this->bBuyBasket_AbleCost = this->BuyBasket_TotalCost <= lVar9;
    local_1f8.Elements._8_8_ = 0;
    local_1f8.Elements._32_8_ = 0;
    local_1f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_1f8.HashSize = 0;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
              (&local_1f8,&local_1a8);
    bVar5 = DS_ItemDataUtil::HasAvailableInventorySlots
                      (PlayerNormal,
                       (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *
                       )&local_1f8);
    this->bBuyBasket_AbleInvenSlot = bVar5;
    local_1a8.HashSize = 0;
    if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1a8.Elements);
    return;
  }
  if (pFVar13[0x20] == (FScriptContainerElement)0x1f) {
    pFVar7 = (FDS_ItemBaseTableRow *)
             FDS_MoneyBaseTableRow::GetRef((longlong)*(int *)(pFVar13 + 0x24),true);
    bVar5 = FDS_MoneyBaseTableRow::IsValid((FDS_MoneyBaseTableRow *)pFVar7);
LAB_14bad5e46:
    if (bVar5 != false) {
      iVar6 = pFVar7->ID_Icon;
    }
  }
  else if (pFVar13[0x20] == (FScriptContainerElement)0x29) {
    pFVar7 = FDS_ItemBaseTableRow::GetRef((longlong)*(int *)(pFVar13 + 0x24),true);
    bVar5 = FDS_ItemBaseTableRow::IsValid(pFVar7);
    goto LAB_14bad5e46;
  }
  if (this->BuyBasket_CostIconID == iVar6) {
    pFVar1 = pFVar13 + 0x40;
    pFVar2 = pFVar13 + 0x14;
    this->BuyBasket_TotalCost =
         this->BuyBasket_TotalCost + (longlong)(*(int *)(pFVar13 + 0x28) * *(int *)pFVar1);
    if (local_1a8.Elements._8_4_ != local_1a8.Elements._52_4_) {
      FVar10 = (ForElementType<FSetElementId>)&local_1a8.Hash;
      if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar10 = local_1a8.Hash.SecondaryData;
      }
      for (iVar6 = *(int *)((longlong)FVar10 +
                           (ulonglong)(local_1a8.HashSize - 1U & *(uint *)pFVar2) * 4); iVar6 != -1;
          iVar6 = *(int *)(local_1a8.Elements._0_8_ + 8 + (longlong)iVar6 * 0x10)) {
        if (*(uint *)(local_1a8.Elements._0_8_ + (longlong)iVar6 * 0x10) == *(uint *)pFVar2) {
          if (iVar6 != -1) {
            iVar6 = *(int *)pFVar1;
            FVar10 = (ForElementType<FSetElementId>)&local_1a8.Hash;
            if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar10 = local_1a8.Hash.SecondaryData;
            }
            uVar3 = *(uint *)((longlong)FVar10 +
                             (ulonglong)(local_1a8.HashSize - 1U & *(uint *)pFVar2) * 4);
            goto joined_r0x00014bad5fbd;
          }
          break;
        }
      }
    }
    local_210.Value = (int *)pFVar2;
    local_200 = pFVar1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&,int_&>_>(&local_1a8,&local_210,(bool *)&local_210.Value);
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7870858750553226738>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\NPC\\DS_NPCShopData.cpp"
                       ,0x20e,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_NPCShopData::UpdateBuyBasketCondition",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_158.Ptr,0x20f,L"BuyBasket_CostIconID is different.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
        pFVar13 = pFVar13 + 0x50;
        goto LAB_14bad5de6;
      }
    }
  }
  pFVar13 = pFVar13 + 0x50;
  goto LAB_14bad5de6;
joined_r0x00014bad5fbd:
  if (uVar3 == 0xffffffff) goto LAB_14bad5fd8;
  puVar11 = (uint *)((longlong)(int)uVar3 * 0x10 + local_1a8.Elements._0_8_);
  if (*puVar11 == *(uint *)pFVar2) {
    if (puVar11 == (uint *)0x0) goto LAB_14bad5fda;
    goto LAB_14bad6000;
  }
  uVar3 = puVar11[2];
  goto joined_r0x00014bad5fbd;
LAB_14bad5fd8:
  puVar11 = (uint *)0x0;
LAB_14bad5fda:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14bad6000:
  puVar11[1] = puVar11[1] + iVar6;
  pFVar13 = pFVar13 + 0x50;
  goto LAB_14bad5de6;
}

// UpdateNPCShopGoodsInfoCondition @ 14bad8c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NPCShopData::UpdateNPCShopGoodsInfoCondition(UDS_NPCShopData *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  TMap<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>
  *pTVar7;
  bool bVar8;
  UDS_ShopManager *pUVar9;
  UDS_LogManager *pUVar10;
  FDS_ShopBuyLimitTable *pFVar11;
  UDS_NPCShopEvent *pUVar12;
  longlong lVar13;
  undefined1 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 auStackY_208 [32];
  undefined1 local_1d8 [8];
  TMap<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>
  *local_1d0;
  int iStack_1c8;
  uint uStack_1c4;
  undefined1 *local_1c0;
  undefined4 uStack_1b8;
  int iStack_1b4;
  int local_1b0;
  int iStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  int local_1a0;
  TMap<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>
  *local_198;
  TMap<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>
  *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_188;
  undefined8 uStack_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pUVar9 = UDS_ShopManager::GetInst();
  if (pUVar9 == (UDS_ShopManager *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_NPCShopData::UpdateNPCShopGoodsInfoCondition",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar10,1,Warning,local_158.Ptr,0x1ae,L"shopManager is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    iStack_1a8 = *(int *)&(this->NPCShopGoodsInfoMap).field_0x8;
    iVar15 = *(int *)&(this->NPCShopGoodsInfoMap).field_0x34;
    if (iStack_1a8 != iVar15) {
      local_198 = &this->NPCShopGoodsInfoMap;
      iStack_1c8 = 0;
      puVar1 = &(this->NPCShopGoodsInfoMap).field_0x10;
      iVar3 = *(int *)&(this->NPCShopGoodsInfoMap).field_0x28;
      uStack_1c4 = 1;
      iStack_1b4 = iStack_1c8;
      local_1b0 = iStack_1c8;
      if (iVar3 != 0) {
        puVar19 = *(uint **)&(this->NPCShopGoodsInfoMap).field_0x20;
        if (puVar19 == (uint *)0x0) {
          puVar19 = (uint *)puVar1;
        }
        uVar17 = *puVar19;
        local_1b0 = 0;
        iStack_1c8 = 0;
        while (uVar17 == 0) {
          lVar13 = (longlong)iStack_1c8;
          local_1b0 = local_1b0 + 0x20;
          iStack_1c8 = iStack_1c8 + 1;
          iStack_1b4 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1c8)
          goto LAB_14bad8dc1;
          uVar17 = puVar19[lVar13 + 1];
        }
        uStack_1c4 = -uVar17 & uVar17;
        uVar2 = (ulonglong)uStack_1c4 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_1a0 = (int)lVar13;
        iStack_1b4 = local_1b0 + -1 + local_1a0;
        if (iVar3 < iStack_1b4) {
          iStack_1b4 = iVar3;
        }
      }
LAB_14bad8dc1:
      iStack_1a8 = iStack_1a8 - iVar15;
      uVar17 = *(uint *)&(this->NPCShopGoodsInfoMap).field_0x28;
      local_1d0 = &this->NPCShopGoodsInfoMap;
      uStack_1b8 = 0xffffffff;
      uVar16 = uVar17 & 0xffffffe0;
      TStack_188._padding_ = CONCAT44(uStack_1c4,iStack_1c8);
      TStack_188.CurrentBitIndex = iStack_1b4;
      TStack_188.UnvisitedBitMask = 0xffffffff;
      TStack_188._28_4_ = iStack_1b4;
      TStack_188.BaseBitIndex = local_1b0;
      uStack_168 = CONCAT44(uStack_1a4,iStack_1a8);
      iVar15 = (int)uVar17 >> 5;
      local_1c0 = puVar1;
      iStack_1ac = iStack_1b4;
      local_190 = local_1d0;
      TStack_188.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar4 = *(uint *)&(this->NPCShopGoodsInfoMap).field_0x28;
      if (uVar17 != uVar4) {
        puVar18 = *(undefined1 **)&(this->NPCShopGoodsInfoMap).field_0x20;
        if (puVar18 == (undefined1 *)0x0) {
          puVar18 = puVar1;
        }
        uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
        while (uVar17 == 0) {
          lVar13 = (longlong)iVar15;
          uVar16 = uVar16 + 0x20;
          iVar15 = iVar15 + 1;
          uVar17 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_14bad8ed0;
          uVar17 = *(uint *)(puVar18 + lVar13 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar17 = (int)lVar13 + -1 + uVar16;
        if ((int)uVar4 < (int)uVar17) {
          uVar17 = uVar4;
        }
      }
LAB_14bad8ed0:
      while( true ) {
        pTVar7 = local_190;
        if (*(int *)&local_190->field_0x8 - *(int *)&local_190->field_0x34 != (int)uStack_168) {
          `TSparseArray<TSparseSetElement<TTuple<int,FDS_NPCShopGoodsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1d8);
        }
        if (((TStack_188.CurrentBitIndex == uVar17) &&
            (TStack_188.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar7 == local_198)) break;
        lVar13 = *(longlong *)pTVar7 + (longlong)TStack_188.CurrentBitIndex * 0x60;
        if (*(char *)(lVar13 + 0x34) != '\0') {
          uVar16 = *(uint *)(lVar13 + 0x10);
          if (*(int *)&(pUVar9->NpcShopBuyLimitTable).field_0x8 !=
              *(int *)&(pUVar9->NpcShopBuyLimitTable).field_0x34) {
            puVar18 = *(undefined1 **)&(pUVar9->NpcShopBuyLimitTable).field_0x40;
            puVar14 = &(pUVar9->NpcShopBuyLimitTable).field_0x38;
            if (puVar18 != (undefined1 *)0x0) {
              puVar14 = puVar18;
            }
            iVar15 = *(int *)(puVar14 +
                             (ulonglong)
                             (*(int *)&(pUVar9->NpcShopBuyLimitTable).field_0x48 - 1U & uVar16) * 4)
            ;
            if (iVar15 != -1) {
              lVar5 = *(longlong *)&pUVar9->NpcShopBuyLimitTable;
              do {
                if (*(uint *)(lVar5 + (longlong)iVar15 * 0x30) == uVar16) {
                  if (iVar15 != -1) {
                    pFVar11 = TMapBase<int,FDS_ShopBuyLimitTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>_>
                              ::FindChecked((TMapBase<int,FDS_ShopBuyLimitTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>_>
                                             *)&pUVar9->NpcShopBuyLimitTable,uVar16);
                    *(long64 *)(lVar13 + 0x40) = (pFVar11->NextDateTime).Ticks;
                    iVar15 = *(int *)(lVar13 + 0x3c) - pFVar11->Quantity;
                    goto LAB_14bad8f77;
                  }
                  break;
                }
                iVar15 = *(int *)(lVar5 + 0x28 + (longlong)iVar15 * 0x30);
              } while (iVar15 != -1);
            }
          }
          iVar15 = *(int *)(lVar13 + 0x3c);
          *(undefined8 *)(lVar13 + 0x40) = 0;
LAB_14bad8f77:
          *(int *)(lVar13 + 0x48) = iVar15;
        }
        TStack_188.UnvisitedBitMask = TStack_188.UnvisitedBitMask & ~TStack_188._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_188);
      }
      pUVar12 = UDS_NPCShopEvent::GetEvent();
      if (pUVar12 != (UDS_NPCShopEvent *)0x0) {
        bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &pUVar12->OnUpdatedNPCShopList);
        if (bVar8) {
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    (&(pUVar12->OnUpdatedNPCShopList).Delegate);
        }
      }
    }
  }
  return;
}

