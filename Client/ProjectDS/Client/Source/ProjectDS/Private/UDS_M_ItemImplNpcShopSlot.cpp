// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b519200

UClass * __cdecl UDS_M_ItemImplNpcShopSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplNpcShopSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplNpcShopSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplNpcShopSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplNpcShopSlot,0x208,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_M_ItemImplNpcShopSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplNpcShopSlot>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplNpcShopSlot.InnerSingleton;
}

// UDS_M_ItemImplNpcShopSlot @ 14b521770

UDS_M_ItemImplNpcShopSlot * __thiscall
UDS_M_ItemImplNpcShopSlot::UDS_M_ItemImplNpcShopSlot
          (UDS_M_ItemImplNpcShopSlot *this,FVTableHelper *param_1)

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
  this->ShopListTableID = 0;
  return this;
}

// UDS_M_ItemImplNpcShopSlot @ 14b521820

UDS_M_ItemImplNpcShopSlot * __thiscall
UDS_M_ItemImplNpcShopSlot::UDS_M_ItemImplNpcShopSlot
          (UDS_M_ItemImplNpcShopSlot *this,FObjectInitializer *param_1)

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
  this->ShopListTableID = 0;
  return this;
}

// ~UDS_M_ItemImplNpcShopSlot @ 14b523260

void __thiscall
UDS_M_ItemImplNpcShopSlot::~UDS_M_ItemImplNpcShopSlot(UDS_M_ItemImplNpcShopSlot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  UDS_M_ItemImplBase::~UDS_M_ItemImplBase((UDS_M_ItemImplBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b525ce0

UClass * __cdecl UDS_M_ItemImplNpcShopSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplNpcShopSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplNpcShopSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplNpcShopSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplNpcShopSlot,0x208,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_M_ItemImplNpcShopSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplNpcShopSlot>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplNpcShopSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemImplNpcShopSlot @ 14b5274a0

void __cdecl UDS_M_ItemImplNpcShopSlot::StaticRegisterNativesUDS_M_ItemImplNpcShopSlot(void)

{
  return;
}

// GetQuantity @ 14bd5fc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_M_ItemImplNpcShopSlot::GetQuantity(UDS_M_ItemImplNpcShopSlot *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NPCShopData *this_00;
  FDS_NPCShopGoodsInfo *pFVar3;
  undefined1 auStackY_168 [32];
  uint uVar4;
  wchar_t *pwVar5;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = FWeakObjectPtr::IsValid(&(this->NPCShopData).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
    pFVar3 = UDS_NPCShopData::GetNPCShopGoodsInfo(this_00,this->ShopListTableID);
    if (pFVar3 != (FDS_NPCShopGoodsInfo *)0x0) {
      return pFVar3->ItemValue;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return 1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_M_ItemImplNpcShopSlot::GetQuantity",0x26,Yes);
    pwVar5 = L"npcShopGoodsInfo == nullptr";
    uVar4 = 0x27;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return 1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_M_ItemImplNpcShopSlot::GetQuantity",0x26,Yes);
    pwVar5 = L"NPCShopData.IsValid() == false";
    uVar4 = 0x20;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return 1;
}

// InitItemImplMap @ 14bd68430

void __thiscall UDS_M_ItemImplNpcShopSlot::InitItemImplMap(UDS_M_ItemImplNpcShopSlot *this)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UClass *local_res20;
  undefined1 *local_18;
  UClass **local_10;
  
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplNpcShopSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = 0x22;
  if (UDS_M_ItemImplBase::ItemImplMap._8_4_ != UDS_M_ItemImplBase::ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (UDS_M_ItemImplBase::ItemImplMap._64_8_ != 0) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(UDS_M_ItemImplBase::ItemImplMap._72_4_ - 1 & 0x22) * 4);
    while (iVar1 != -1) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '\"') {
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
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)0x22,
             (bool *)&local_18);
  return;
}

// OnEventMouseButtonUp @ 14bd77770

void __thiscall
UDS_M_ItemImplNpcShopSlot::OnEventMouseButtonUp
          (UDS_M_ItemImplNpcShopSlot *this,FDS_WidgetPointerEventField *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  FName FVar5;
  FString *pFVar6;
  UDS_NpcFunctionShop *this_00;
  UDS_NPCShopEvent *pUVar7;
  wchar_t *pwVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  bVar10 = false;
  local_res8 = 0;
  FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemSlotData)&local_res8);
  uVar1 = *(undefined8 *)FVar5;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar4 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar5);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  bVar3 = FToBoolHelper::FromCStringWide(pwVar8);
  if (!bVar3) {
    return;
  }
  UDS_M_ItemImplBase::OnEventMouseButtonUp((UDS_M_ItemImplBase *)this,param_1);
  bVar3 = FWeakObjectPtr::IsValid(&(this->NpcFunctionShop).WeakPtr);
  if (bVar3) {
    pTVar9 = (param_1->PointerEvent).EffectingButton.KeyDetails.SharedReferenceCount.
             ReferenceController;
    FVar5 = (param_1->PointerEvent).EffectingButton.KeyName;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar10 = true;
    if (FVar5 == EKeys::LeftMouseButton.KeyName) {
      bVar3 = true;
      goto LAB_14bd77833;
    }
  }
  else {
    pTVar9 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  bVar3 = false;
LAB_14bd77833:
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  if (bVar3) {
    lVar2 = (param_1->PointerEvent)._padding_;
    this_00 = (UDS_NpcFunctionShop *)FWeakObjectPtr::Get(&(this->NpcFunctionShop).WeakPtr);
    UDS_NpcFunctionShop::Request_AddNpcItemToBasket(this_00,this->ShopListTableID,(lVar2 & 3) != 0);
  }
  pUVar7 = UDS_NPCShopEvent::GetEvent();
  if (pUVar7 != (UDS_NPCShopEvent *)0x0) {
    FDS_EventDelegate<int_const_>::Broadcast(&pUVar7->OnSelectShopItemSlot,this->ShopListTableID);
  }
  return;
}

// SetNPCShopInfo @ 14bd8a3f0

void __thiscall
UDS_M_ItemImplNpcShopSlot::SetNPCShopInfo
          (UDS_M_ItemImplNpcShopSlot *this,
          TWeakObjectPtr<UDS_NpcFunctionShop,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr> param_2,int param_3)

{
  (this->NpcFunctionShop).WeakPtr = param_1.WeakPtr;
  (this->NPCShopData).WeakPtr = param_2.WeakPtr;
  this->ShopListTableID = param_3;
  return;
}

// UpdateSlotInfo @ 14bd93580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UDS_M_ItemImplNpcShopSlot::UpdateSlotInfo(UDS_M_ItemImplNpcShopSlot *this)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *local_28;
  FSharedReferencer<1> FStack_20;
  
  plVar1 = &this->_padding_;
  if (*plVar1 == 0) {
    FStack_20.ReferenceController = ::operator_new(0x50);
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    if (FStack_20.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_28 = ___xmm_00000000000000000000000000000010;
      pTVar6 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_20.ReferenceController = _UNK_150651568;
    }
    else {
      (FStack_20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6 = FStack_20.ReferenceController + 1;
      (FStack_20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FStack_20.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFDS_NpcShopItemSlotInfo___00_SharedPointerInternals__6B_
      ;
      FStack_20.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      FStack_20.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      FStack_20.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
      FStack_20.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
      FStack_20.ReferenceController[3]._padding_ = 0;
      FStack_20.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
      FStack_20.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
      FStack_20.ReferenceController[2]._padding_ = 0;
      FStack_20.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
      FStack_20.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
      FStack_20.ReferenceController[4]._padding_ = 0;
      FStack_20.ReferenceController[1]._padding_ = (longlong)&___7FDS_NpcShopItemSlotInfo__6B_;
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      LOCK();
      (FStack_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar5 = FStack_20.ReferenceController;
      local_28 = pTVar6;
    }
    if ((TReferenceControllerBase<1> **)plVar1 != &local_28) {
      *plVar1 = (longlong)pTVar6;
      local_28 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    UDS_M_ItemImplBase::UpdateSlotInfo((UDS_M_ItemImplBase *)this);
    *(int *)(lVar2 + 0x38) = this->ShopListTableID;
  }
  return;
}

