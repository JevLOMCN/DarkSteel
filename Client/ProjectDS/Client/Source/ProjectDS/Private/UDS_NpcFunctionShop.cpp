// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 63

// StaticClass @ 14b53de20

UClass * __cdecl UDS_NpcFunctionShop::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionShop.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionShop",
               &Z_Registration_Info_UClass_UDS_NpcFunctionShop.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionShop,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionShop>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionShop>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionShop.InnerSingleton;
}

// UDS_NpcFunctionShop @ 14b540fe0

UDS_NpcFunctionShop * __thiscall
UDS_NpcFunctionShop::UDS_NpcFunctionShop(UDS_NpcFunctionShop *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NpcFunctionBase__6B_;
  this->_padding_ = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UDS_NpcFunctionBase__;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&_vftable__for__IDS_ItemBasketInterface__;
  (this->NPCShopData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->NPCShopData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->NPCSellData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NPCSellData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->InventoryBagModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->InventoryBagModel).WeakPtr,(FObjectPtr)&local_res8);
  (this->BuyBasketSlots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuyBasketSlots).ArrayNum = 0;
  (this->BuyBasketSlots).ArrayMax = 0;
  (this->SellBasketSlots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SellBasketSlots).ArrayNum = 0;
  (this->SellBasketSlots).ArrayMax = 0;
  this->SelectedBasketSlotIndex = -1;
  (this->SellQuantityData).field0_0x0.DebugPtr = (UDS_QuantityData *)0x0;
  return this;
}

// UDS_NpcFunctionShop @ 14b5410b0

UDS_NpcFunctionShop * __thiscall
UDS_NpcFunctionShop::UDS_NpcFunctionShop(UDS_NpcFunctionShop *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NpcFunctionBase__6B_;
  this->_padding_ = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UDS_NpcFunctionBase__;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&_vftable__for__IDS_ItemBasketInterface__;
  (this->NPCShopData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->NPCShopData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->NPCSellData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NPCSellData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->InventoryBagModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->InventoryBagModel).WeakPtr,(FObjectPtr)&local_res8);
  (this->BuyBasketSlots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuyBasketSlots).ArrayNum = 0;
  (this->BuyBasketSlots).ArrayMax = 0;
  (this->SellBasketSlots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SellBasketSlots).ArrayNum = 0;
  (this->SellBasketSlots).ArrayMax = 0;
  this->SelectedBasketSlotIndex = -1;
  (this->SellQuantityData).field0_0x0.DebugPtr = (UDS_QuantityData *)0x0;
  return this;
}

// ~UDS_NpcFunctionShop @ 14b541ae0

void __thiscall UDS_NpcFunctionShop::~UDS_NpcFunctionShop(UDS_NpcFunctionShop *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UDS_NpcFunctionBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ItemBasketInterface__;
  pFVar1 = (this->SellBasketSlots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BuyBasketSlots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IDS_ItemBasketInterface__6B_;
  this->_padding_ = (longlong)&___7UDS_NpcFunctionBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetBasketType @ 14b5429d0

EDS_ItemBasketType __thiscall UDS_NpcFunctionShop::GetBasketType(UDS_NpcFunctionShop *this)

{
  return (this->NPCShopData).WeakPtr.ObjectIndex;
}

// GetPrivateStaticClass @ 14b543830

UClass * __cdecl UDS_NpcFunctionShop::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionShop.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionShop",
               &Z_Registration_Info_UClass_UDS_NpcFunctionShop.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionShop,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionShop>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionShop>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionShop.InnerSingleton;
}

// StaticRegisterNativesUDS_NpcFunctionShop @ 14b543c70

void __cdecl UDS_NpcFunctionShop::StaticRegisterNativesUDS_NpcFunctionShop(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_NpcFunctionShop_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 14b545250

UObject * __thiscall UDS_NpcFunctionShop::_getUObject(UDS_NpcFunctionShop *this)

{
  return (UObject *)&this[-1].InventoryBagModel;
}

// execOpenNpcShopCallback @ 14b5455e0

void __cdecl
UDS_NpcFunctionShop::execOpenNpcShopCallback(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_UserWidget *local_res10;
  
  local_res10 = (UDS_UserWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OpenNpcShopCallback((UDS_NpcFunctionShop *)param_1,local_res10);
  return;
}

// CheckPurchasedNPCShopGoodsInfo @ 14bed9e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_NpcFunctionShop::CheckPurchasedNPCShopGoodsInfo(UDS_NpcFunctionShop *this,int param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NPCShopData *this_00;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = FWeakObjectPtr::IsValid(&(this->NPCShopData).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
    bVar1 = UDS_NPCShopData::CheckPurchasedNPCShopGoodsInfo(this_00,param_1);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NpcFunctionShop::CheckPurchasedNPCShopGoodsInfo",0x33,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x464,L"NPCShopData.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  return bVar1;
}

// ClearAllBasket @ 14bed9fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NpcFunctionShop::ClearAllBasket(UDS_NpcFunctionShop *this)

{
  bool bVar1;
  UDS_NPCShopData *this_00;
  UDS_NPCSellData *this_01;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = FWeakObjectPtr::IsValid(&(this->NPCShopData).WeakPtr);
  if ((bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&(this->NPCSellData).WeakPtr), bVar1)) {
    this_00 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
    UDS_NPCShopData::ClearNPCShopBasket(this_00);
    this_01 = (UDS_NPCSellData *)FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
    UDS_NPCSellData::ClearNPCSellBasket(this_01);
    (**(code **)(this->_padding_ + 0x98))(&this->_padding_,0xffffffff);
    return;
  }
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NpcFunctionShop::ClearAllBasket",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x21d,
               L"NPCShopData.IsValid() == false || NPCSellData.IsValid() == false");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// GetBasketActionButtonText @ 14beec500

FDS_Text * __thiscall
UDS_NpcFunctionShop::GetBasketActionButtonText
          (UDS_NpcFunctionShop *this,FDS_Text *__return_storage_ptr__)

{
  int iVar1;
  
  iVar1 = (this->NPCShopData).WeakPtr.ObjectIndex;
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex.Value = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  if (iVar1 == 1) {
    FDS_Text::SetTextFromStringTable(__return_storage_ptr__,StringUi,0x4e2b);
    return __return_storage_ptr__;
  }
  if (iVar1 == 2) {
    FDS_Text::SetTextFromStringTable(__return_storage_ptr__,StringUi,0x4e3b);
  }
  return __return_storage_ptr__;
}

// GetBasketItemContextList @ 14beec7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_NpcFunctionShop::GetBasketItemContextList
          (UDS_NpcFunctionShop *this,
          TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UDS_NPCShopData *this_01;
  TArray<FDS_NPCShopGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  UObject *pUVar7;
  TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  UClass *pUVar9;
  undefined8 *puVar10;
  UDS_NPCSellData *this_02;
  TArray<FDS_NPCSellGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FObjectPtr_u_0 FVar15;
  ulonglong uVar16;
  TWeakObjectPtr<UDS_M_InventoryBag,FWeakObjectPtr> *pTVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auStackY_468 [32];
  FWeakObjectPtr local_438;
  UDS_NpcFunctionShop *local_430;
  FObjectPtr_u_0 local_428;
  FWeakObjectPtr local_420;
  longlong local_418;
  FObjectPtr_u_0 local_410;
  FWeakObjectPtr local_408;
  TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> *local_400;
  longlong local_3f8;
  TWeakObjectPtr<UDS_M_InventoryBag,FWeakObjectPtr> *local_3f0;
  longlong *local_3e8;
  undefined8 local_3e0;
  TWeakObjectPtr<UDS_M_InventoryBag,FWeakObjectPtr> *local_3d8;
  undefined1 local_3d0 [8];
  TReferenceControllerBase<1> *local_3c8;
  undefined1 local_3c0 [8];
  TReferenceControllerBase<1> *local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_468;
  uVar16 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar4 = (this->NPCShopData).WeakPtr.ObjectIndex;
  local_430 = this;
  local_400 = __return_storage_ptr__;
  if (iVar4 == 1) {
    this_00 = &this->_padding_;
    local_3e8 = this_00;
    bVar2 = TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr> *)this_00,(void *)0x0);
    if (bVar2) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_3a8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_3a8,"UDS_NpcFunctionShop::GetBasketItemContextList",0x2d,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_3a8.Ptr,0x9e,L"NPCShopData is nullptr.");
        if ((void *)local_3a8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_3a8._padding_);
        }
      }
    }
    else {
      this_01 = (UDS_NPCShopData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      pTVar6 = UDS_NPCShopData::GetNPCShopBasket(this_01);
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      iVar4 = *(int *)(pUVar7 + 6);
      lVar12 = (longlong)iVar4;
      if (iVar4 < pTVar6->ArrayNum) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_288._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_288,"UDS_NpcFunctionShop::GetBasketItemContextList",0x2d,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_288.Ptr,0xa7,L"npcShopBasket.Num() > buyBasketSlotMax");
          if ((void *)local_288._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_288._padding_);
          }
        }
      }
      else if (0 < iVar4) {
        local_418 = 0;
        lVar18 = 0;
        local_3f8 = lVar12;
        do {
          uVar14 = (uint)uVar16;
          if ((-1 < (int)uVar14) && ((int)uVar14 < (int)this->_padding_)) {
            uVar20 = 0;
            uVar19 = 0;
            if ((int)uVar14 < pTVar6->ArrayNum) {
              if (((int)uVar14 < 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                pTVar8 = (TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> *)
                         (*pcVar1)();
                return pTVar8;
              }
              uVar20 = *(undefined4 *)((pTVar6->AllocatorInstance).Data + lVar18 + 0x14);
              uVar3 = 0;
              if ((int)uVar14 < pTVar6->ArrayNum) {
                uVar3 = ~uVar14 >> 0x1f;
              }
              if ((uVar3 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                pTVar8 = (TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> *)
                         (*pcVar1)();
                return pTVar8;
              }
              uVar19 = *(undefined4 *)((pTVar6->AllocatorInstance).Data + lVar18 + 8);
            }
            lVar12 = local_418;
            uVar3 = 0;
            if ((int)uVar14 < (int)local_430->_padding_) {
              uVar3 = ~uVar14 >> 0x1f;
            }
            if ((uVar3 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              pTVar8 = (TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> *)
                       (*pcVar1)();
              return pTVar8;
            }
            local_428 = (FObjectPtr_u_0)
                        ((FObjectPtr_u_0 *)(local_430->_padding_ + lVar12 * 8))->Handle;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14beecaed:
              if ((UDS_M_ItemImplBase *)local_428.Handle == (UDS_M_ItemImplBase *)0x0)
              goto LAB_14beecb0f;
              pUVar9 = Z_Construct_UClass_UDS_M_ItemImplNpcShopBuyBasketSlot_NoRegister();
              bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_428,pUVar9);
              FVar15 = local_428;
              if (!bVar2) goto LAB_14beecb0f;
            }
            else {
              if ((UDS_M_ItemImplBase *)local_428.Handle != (UDS_M_ItemImplBase *)0x0) {
                UE::GC::MarkAsReachable(local_428.Handle);
                goto LAB_14beecaed;
              }
LAB_14beecb0f:
              FVar15.Handle = (UObject *)0x0;
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               ((UDS_M_ItemImplBase *)FVar15.Handle != (UDS_M_ItemImplBase *)0x0)) {
              UE::GC::MarkAsReachable(FVar15.Handle);
            }
            (**(code **)(*(longlong *)FVar15.Handle + 0x340))(FVar15.Handle,0x23,uVar20);
            pTVar17 = &local_430[-1].InventoryBagModel;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pTVar17 != (TWeakObjectPtr<UDS_M_InventoryBag,FWeakObjectPtr> *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pTVar17);
            }
            local_420.ObjectIndex = 0;
            local_420.ObjectSerialNumber = 0;
            local_3f0 = pTVar17;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pTVar17 != (TWeakObjectPtr<UDS_M_InventoryBag,FWeakObjectPtr> *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pTVar17);
            }
            FWeakObjectPtr::operator=(&local_420,(FObjectPtr)&local_3f0);
            this = local_430;
            *(int *)&(FVar15.Handle + 0x1e0)->field_0x10 = local_420.ObjectIndex;
            *(int *)&(FVar15.Handle + 0x1e0)->field_0x14 = local_420.ObjectSerialNumber;
            *(longlong *)&FVar15.Handle[0xc].field_0x18 = *local_3e8;
            *(uint *)&FVar15.Handle[0xc].field_0x20 = uVar14;
            *(undefined4 *)&FVar15.Handle[0xc].field_0x24 = uVar19;
            UDS_M_ItemImplBase::SetSelected
                      ((UDS_M_ItemImplBase *)FVar15.Handle,
                       uVar14 == (local_430->NPCShopData).WeakPtr.ObjectSerialNumber);
            puVar10 = (undefined8 *)
                      (**(code **)(*(longlong *)FVar15.Handle + 0x310))(FVar15.Handle,local_3d0);
            pTVar8 = local_400;
            iVar4 = local_400->ArrayNum;
            if (iVar4 == local_400->ArrayMax) {
              iVar4 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_400->AllocatorInstance,&local_400->ArrayMax);
            }
            pTVar8->ArrayNum = iVar4 + 1;
            pFVar13 = (pTVar8->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
            *(undefined8 *)pFVar13 = *puVar10;
            lVar12 = puVar10[1];
            *(longlong *)(pFVar13 + 8) = lVar12;
            if (lVar12 != 0) {
              LOCK();
              *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_3c8);
            lVar12 = local_3f8;
          }
          local_418 = local_418 + 1;
          uVar16 = (ulonglong)(uVar14 + 1);
          lVar18 = lVar18 + 0x50;
        } while (local_418 < lVar12);
      }
    }
  }
  else if (iVar4 == 2) {
    bVar2 = TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (bVar2) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_NpcFunctionShop::GetBasketItemContextList",0x2d,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_168.Ptr,0xc9,L"NPCSellData is nullptr.");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
    }
    else {
      this_02 = (UDS_NPCSellData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pTVar11 = UDS_NPCSellData::GetNPCSellBasket(this_02);
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      lVar12 = (longlong)*(int *)&pUVar7[3].field_0x10;
      uVar21 = uVar16;
      uVar22 = uVar16;
      local_3f8 = lVar12;
      if (0 < lVar12) {
        do {
          FVar15.Handle = (UObject *)0x0;
          uVar14 = (uint)uVar16;
          if ((-1 < (int)uVar14) && ((int)uVar14 < (int)this->_padding_)) {
            local_438.ObjectIndex = 0;
            local_438.ObjectSerialNumber = 0;
            local_3e0 = 0;
            FWeakObjectPtr::operator=(&local_438,(FObjectPtr)&local_3e0);
            if ((int)uVar14 < pTVar11->ArrayNum) {
              if (((int)uVar14 < 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                pTVar8 = (TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> *)
                         (*pcVar1)();
                return pTVar8;
              }
              local_438 = *(FWeakObjectPtr *)((pTVar11->AllocatorInstance).Data + uVar22 + 8);
            }
            uVar3 = 0;
            if ((int)uVar14 < (int)this->_padding_) {
              uVar3 = ~uVar14 >> 0x1f;
            }
            if ((uVar3 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              pTVar8 = (TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> *)
                       (*pcVar1)();
              return pTVar8;
            }
            local_410 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(this->_padding_ + uVar21 * 8))->Handle;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14beece1b:
              if ((UDS_M_ItemImplBase *)local_410.Handle != (UDS_M_ItemImplBase *)0x0) {
                pUVar9 = Z_Construct_UClass_UDS_M_ItemImplNpcShopSellBasketSlot_NoRegister();
                bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_410,pUVar9);
                if (bVar2) {
                  FVar15 = local_410;
                }
              }
            }
            else if ((UDS_M_ItemImplBase *)local_410.Handle != (UDS_M_ItemImplBase *)0x0) {
              UE::GC::MarkAsReachable(local_410.Handle);
              goto LAB_14beece1b;
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               ((UDS_M_ItemImplBase *)FVar15.Handle != (UDS_M_ItemImplBase *)0x0)) {
              UE::GC::MarkAsReachable(FVar15.Handle);
            }
            (**(code **)(*(longlong *)FVar15.Handle + 0x338))(FVar15.Handle,0x24,local_438);
            pTVar17 = &this[-1].InventoryBagModel;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pTVar17 != (TWeakObjectPtr<UDS_M_InventoryBag,FWeakObjectPtr> *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pTVar17);
            }
            local_408.ObjectIndex = 0;
            local_408.ObjectSerialNumber = 0;
            local_3d8 = pTVar17;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pTVar17 != (TWeakObjectPtr<UDS_M_InventoryBag,FWeakObjectPtr> *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pTVar17);
            }
            FWeakObjectPtr::operator=(&local_408,(FObjectPtr)&local_3d8);
            *(int *)&(FVar15.Handle + 0x1e0)->field_0x10 = local_408.ObjectIndex;
            *(int *)&(FVar15.Handle + 0x1e0)->field_0x14 = local_408.ObjectSerialNumber;
            *(longlong *)&FVar15.Handle[0xc].field_0x18 = this->_padding_;
            *(uint *)&FVar15.Handle[0xc].field_0x20 = uVar14;
            UDS_M_ItemImplBase::SetSelected
                      ((UDS_M_ItemImplBase *)FVar15.Handle,
                       uVar14 == (this->NPCShopData).WeakPtr.ObjectSerialNumber);
            puVar10 = (undefined8 *)
                      (**(code **)(*(longlong *)FVar15.Handle + 0x310))(FVar15.Handle,local_3c0);
            pTVar8 = local_400;
            iVar4 = local_400->ArrayNum;
            if (iVar4 == local_400->ArrayMax) {
              iVar4 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_400->AllocatorInstance,&local_400->ArrayMax);
            }
            pTVar8->ArrayNum = iVar4 + 1;
            pFVar13 = (pTVar8->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
            *(undefined8 *)pFVar13 = *puVar10;
            lVar12 = puVar10[1];
            *(longlong *)(pFVar13 + 8) = lVar12;
            if (lVar12 != 0) {
              LOCK();
              *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_3b8);
            lVar12 = local_3f8;
          }
          uVar16 = (ulonglong)(uVar14 + 1);
          uVar21 = uVar21 + 1;
          uVar22 = uVar22 + 0x1c;
        } while ((longlong)uVar21 < lVar12);
      }
    }
  }
  return local_400;
}

// GetBasketMoneyIconID @ 14beecf90

int __thiscall UDS_NpcFunctionShop::GetBasketMoneyIconID(UDS_NpcFunctionShop *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  if ((this->NPCShopData).WeakPtr.ObjectIndex == 1) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      return *(int *)&pUVar2[5].field_0x24;
    }
  }
  if ((this->NPCShopData).WeakPtr.ObjectIndex == 2) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      return *(int *)&pUVar2[3].field_0xc;
    }
  }
  return 0;
}

// GetBasketMoneyQuantity @ 14beed010

int __thiscall UDS_NpcFunctionShop::GetBasketMoneyQuantity(UDS_NpcFunctionShop *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  if ((this->NPCShopData).WeakPtr.ObjectIndex == 1) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      return *(int *)&pUVar2[5].field_0x18;
    }
  }
  if ((this->NPCShopData).WeakPtr.ObjectIndex == 2) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      return *(int *)&pUVar2[3].field_0x4;
    }
  }
  return 0;
}

// GetBasketMoneyType @ 14beed090

EDS_MoneyType __thiscall UDS_NpcFunctionShop::GetBasketMoneyType(UDS_NpcFunctionShop *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  if ((this->NPCShopData).WeakPtr.ObjectIndex == 1) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      return (EDS_MoneyType)*(undefined4 *)&pUVar2[5].field_0x20;
    }
  }
  if ((this->NPCShopData).WeakPtr.ObjectIndex == 2) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      return pUVar2[3].field_0x8;
    }
  }
  return None;
}

// GetBasketMoneyVisibility @ 14beed110

ESlateVisibility __thiscall UDS_NpcFunctionShop::GetBasketMoneyVisibility(UDS_NpcFunctionShop *this)

{
  int iVar1;
  ESlateVisibility EVar2;
  
  iVar1 = (**(code **)(this->_padding_ + 0x58))();
  EVar2 = Collapsed;
  if (0 < iVar1) {
    EVar2 = SelfHitTestInvisible;
  }
  return EVar2;
}

// GetBasketTitle @ 14beed350

FDS_Text * __thiscall
UDS_NpcFunctionShop::GetBasketTitle(UDS_NpcFunctionShop *this,FDS_Text *__return_storage_ptr__)

{
  int iVar1;
  
  iVar1 = (this->NPCShopData).WeakPtr.ObjectIndex;
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex.Value = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  if (iVar1 == 1) {
    FDS_Text::SetTextFromStringTable(__return_storage_ptr__,StringUi,0x4e29);
    return __return_storage_ptr__;
  }
  if (iVar1 == 2) {
    FDS_Text::SetTextFromStringTable(__return_storage_ptr__,StringUi,0x4e39);
  }
  return __return_storage_ptr__;
}

// GetBasketWeight @ 14beed460

int __thiscall UDS_NpcFunctionShop::GetBasketWeight(UDS_NpcFunctionShop *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  UDS_NPCShopData *this_00;
  TArray<FDS_NPCShopGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  UDS_NPCSellData *this_01;
  TArray<FDS_NPCSellGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar5;
  UObject *pUVar6;
  FScriptContainerElement *pFVar7;
  FWeakObjectPtr *this_02;
  FScriptContainerElement *pFVar8;
  int iVar9;
  undefined1 local_res8 [8];
  
  iVar9 = 0;
  iVar2 = (**(code **)(this->_padding_ + 0x10))();
  if ((iVar2 == 1) && (bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), bVar1))
  {
    this_00 = (UDS_NPCShopData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar4 = UDS_NPCShopData::GetNPCShopBasket(this_00);
    iVar2 = pTVar4->ArrayNum;
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    pFVar8 = pFVar7 + (longlong)iVar2 * 0x50;
    while( true ) {
      if (pTVar4->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FDS_NPCShopGoodsInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      iVar3 = iVar9;
      if (pFVar7 == pFVar8) break;
      if ((0 < *(int *)(pFVar7 + 0x14)) && (0 < *(int *)(pFVar7 + 0x40))) {
        iVar3 = DS_ItemDataUtil::GetItemWeight(*(int *)(pFVar7 + 0x14));
        iVar9 = iVar9 + iVar3 * *(int *)(pFVar7 + 0x40);
      }
      pFVar7 = pFVar7 + 0x50;
    }
  }
  else {
    iVar2 = (**(code **)(this->_padding_ + 0x10))(this);
    iVar3 = iVar9;
    if ((iVar2 == 2) &&
       (bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), iVar3 = 0, bVar1)) {
      this_01 = (UDS_NPCSellData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pTVar5 = UDS_NPCSellData::GetNPCSellBasket(this_01);
      pFVar7 = (pTVar5->AllocatorInstance).Data;
      iVar2 = pTVar5->ArrayNum;
      this_02 = (FWeakObjectPtr *)(pFVar7 + 8);
      pFVar8 = pFVar7 + (longlong)iVar2 * 0x1c;
      iVar3 = iVar9;
      while( true ) {
        if (pTVar5->ArrayNum != iVar2) {
          `TCheckedPointerIterator<FDS_NPCSellGoodsInfo_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (pFVar7 == pFVar8) break;
        bVar1 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)this_02,(void *)0x0);
        if (!bVar1) {
          pUVar6 = FWeakObjectPtr::Get(this_02);
          iVar3 = iVar3 - (this_02[1].ObjectSerialNumber + this_02[1].ObjectIndex) *
                          *(int *)&pUVar6[0x15].field_0x14;
        }
        pFVar7 = pFVar7 + 0x1c;
        this_02 = (FWeakObjectPtr *)&this_02[3].ObjectSerialNumber;
      }
    }
  }
  return iVar3;
}

// GetNPCSellData @ 14beeed00

TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr> __thiscall
UDS_NpcFunctionShop::GetNPCSellData(UDS_NpcFunctionShop *this)

{
  FWeakObjectPtr in_RDX;
  
  *(FWeakObjectPtr *)in_RDX = (this->NPCSellData).WeakPtr;
  return (TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr>)in_RDX;
}

// GetNumOfBasket @ 14beef270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_NpcFunctionShop::GetNumOfBasket(UDS_NpcFunctionShop *this)

{
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  UDS_NPCShopData *this_00;
  UDS_NPCSellData *this_01;
  undefined1 auStackY_168 [32];
  uint uVar4;
  wchar_t *pwVar5;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  iVar2 = (this->NPCShopData).WeakPtr.ObjectIndex;
  if (iVar2 == 1) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar1) {
      this_00 = (UDS_NPCShopData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      iVar2 = UDS_NPCShopData::GetNumOfNPCShopBasket(this_00);
      return iVar2;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return 0;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NpcFunctionShop::GetNumOfBasket",0x23,Yes);
    pwVar5 = L"NPCShopData.IsValid() == false";
    uVar4 = 0x7d;
  }
  else {
    if (iVar2 != 2) {
      return 0;
    }
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar1) {
      this_01 = (UDS_NPCSellData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      iVar2 = UDS_NPCSellData::GetNumOfNPCSellBasket(this_01);
      return iVar2;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return 0;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NpcFunctionShop::GetNumOfBasket",0x23,Yes);
    pwVar5 = L"NPCSellData.IsValid() == false";
    uVar4 = 0x87;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return 0;
}

// GetQuantityControlContext @ 14beefdc0

TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> * __thiscall
UDS_NpcFunctionShop::GetQuantityControlContext
          (UDS_NpcFunctionShop *this,
          TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *pTVar7;
  UDS_NPCShopData *pUVar8;
  FDS_NPCShopGoodsInfo *pFVar9;
  FDS_ViewModelContext_CommonQuantityControl *pFVar10;
  UDS_NPCSellData *this_00;
  FDS_NPCSellGoodsInfo *pFVar11;
  UDS_ItemData *this_01;
  int iVar12;
  int iVar13;
  int iVar14;
  
  MakeContext<FDS_ViewModelContext_CommonQuantityControl>(__return_storage_ptr__);
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *)(*pcVar2)();
    return pTVar7;
  }
  iVar13 = 1;
  bVar3 = false;
  iVar12 = 1;
  iVar14 = 1;
  *(undefined4 *)&__return_storage_ptr__->Object->_padding_ = 0x15f;
  iVar5 = DS_CommonDataHelper::ItemValueMax();
  iVar6 = (**(code **)(this->_padding_ + 0x20))(this);
  iVar1 = (this->NPCShopData).WeakPtr.ObjectIndex;
  if (iVar1 == 1) {
    pUVar8 = (UDS_NPCShopData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pFVar9 = UDS_NPCShopData::GetNPCShopBasketGoodsInfoByBasketSlotIndex(pUVar8,iVar6);
    iVar14 = iVar12;
    if (pFVar9 != (FDS_NPCShopGoodsInfo *)0x0) {
      iVar13 = pFVar9->Quantity;
      iVar14 = pFVar9->ItemValue;
      pUVar8 = (UDS_NPCShopData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      iVar5 = UDS_NPCShopData::GetAvailableBuyQuantity(pUVar8,pFVar9->ShopListTID);
      bVar3 = true;
    }
  }
  else if (iVar1 == 2) {
    this_00 = (UDS_NPCSellData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pFVar11 = UDS_NPCSellData::GetNPCSellBasketGoodsInfoByBasketSlotIndex(this_00,iVar6);
    if ((pFVar11 != (FDS_NPCSellGoodsInfo *)0x0) &&
       (bVar4 = FWeakObjectPtr::IsValid(&(pFVar11->ItemData).WeakPtr), bVar4)) {
      iVar13 = pFVar11->SellCount_UnTradable + pFVar11->SellCount_Tradable;
      this_01 = (UDS_ItemData *)FWeakObjectPtr::Get(&(pFVar11->ItemData).WeakPtr);
      iVar5 = UDS_ItemData::GetStackCount_Total(this_01,PlayerNormal);
      pFVar10 = __return_storage_ptr__->Object;
      goto LAB_14beefea1;
    }
  }
  pFVar10 = __return_storage_ptr__->Object;
  iVar12 = iVar14;
  if (!bVar3) {
    if ((pFVar10 == (FDS_ViewModelContext_CommonQuantityControl *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *)(*pcVar2)();
      return pTVar7;
    }
    __return_storage_ptr__->Object->Min = 1.0;
    if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *)(*pcVar2)();
      return pTVar7;
    }
    __return_storage_ptr__->Object->Max = 1.0;
    if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *)(*pcVar2)();
      return pTVar7;
    }
    __return_storage_ptr__->Object->InitialQuantity = 1.0;
    return __return_storage_ptr__;
  }
LAB_14beefea1:
  if ((pFVar10 == (FDS_ViewModelContext_CommonQuantityControl *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *)(*pcVar2)();
    return pTVar7;
  }
  __return_storage_ptr__->Object->Min = (float)iVar12;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *)(*pcVar2)();
    return pTVar7;
  }
  __return_storage_ptr__->Object->Max = (float)iVar5;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *)(*pcVar2)();
    return pTVar7;
  }
  __return_storage_ptr__->Object->InitialQuantity = (float)iVar13;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *)(*pcVar2)();
    return pTVar7;
  }
  __return_storage_ptr__->Object->StepQuantity = (float)iVar12;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *)(*pcVar2)();
    return pTVar7;
  }
  TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_NpcFunctionShop>
            ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
             &__return_storage_ptr__->Object->OnQuantityChangeEvent,
             (UDS_NpcFunctionShop *)&stack0x00000010,(pmf_89dff1c9 *)&this[-1].InventoryBagModel);
  return __return_storage_ptr__;
}

// GetSelectedBasketSlot @ 14bef0510

int __thiscall UDS_NpcFunctionShop::GetSelectedBasketSlot(UDS_NpcFunctionShop *this)

{
  return (this->NPCShopData).WeakPtr.ObjectSerialNumber;
}

// IsAbleGarbage @ 14bef4000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_NpcFunctionShop::IsAbleGarbage(UDS_NpcFunctionShop *this)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  iVar1 = (this->NPCShopData).WeakPtr.ObjectIndex;
  if ((iVar1 != 1) && (iVar1 == 2)) {
    bVar2 = TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar2) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      return (bool)*(undefined1 *)(pUVar4 + 3);
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NpcFunctionShop::IsAbleGarbage",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x20a,L"NPCSellData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnAddBagItemToBasket @ 14bef6cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionShop::OnAddBagItemToBasket
          (UDS_NpcFunctionShop *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,int param_2
          )

{
  bool bVar1;
  int iVar2;
  UDS_NPCShopData *pUVar3;
  TArray<FDS_NPCShopGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  UDS_NPCSellData *pUVar5;
  UDS_NPCShopEvent *pUVar6;
  UDS_LogManager *pUVar7;
  FWeakObjectPtr local_res10 [2];
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&(this->NPCSellData).WeakPtr);
  if ((!bVar1) || (bVar1 = FWeakObjectPtr::IsValid(local_res10), !bVar1)) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_NpcFunctionShop::OnAddBagItemToBasket",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_148.Ptr,0x5ad,
                 L"NPCSellData.IsValid() == false || InItemData.IsValid() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    return;
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->NPCShopData).WeakPtr);
  if (bVar1) {
    pUVar3 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
    pTVar4 = UDS_NPCShopData::GetNPCShopBasket(pUVar3);
    if (pTVar4->ArrayNum != 0) {
      pUVar3 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
      UDS_NPCShopData::ClearNPCShopBasket(pUVar3);
    }
  }
  pUVar5 = (UDS_NPCSellData *)FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
  UDS_NPCSellData::AddNPCSellBasketGoodsInfo
            (pUVar5,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res10[0],param_2);
  pUVar6 = UDS_NPCShopEvent::GetEvent();
  if (pUVar6 == (UDS_NPCShopEvent *)0x0) {
    return;
  }
  pUVar5 = (UDS_NPCSellData *)FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
  iVar2 = UDS_NPCSellData::GetNPCSellBasketSlotIndex
                    (pUVar5,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res10[0]);
  FDS_EventDelegate<int_const_>::Broadcast(&pUVar6->OnUpdatedBasketSlot,iVar2);
  (**(code **)(this->_padding_ + 0x98))(&this->_padding_,iVar2);
  return;
}

// OnAddBagItemToBasket @ 14bef6e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionShop::OnAddBagItemToBasket
          (UDS_NpcFunctionShop *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,int param_2
          ,int param_3)

{
  bool bVar1;
  int iVar2;
  UDS_NPCShopData *pUVar3;
  TArray<FDS_NPCShopGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  UDS_NPCSellData *pUVar5;
  UDS_NPCShopEvent *pUVar6;
  UDS_LogManager *pUVar7;
  FWeakObjectPtr local_res10 [3];
  undefined1 auStackY_188 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&(this->NPCSellData).WeakPtr);
  if ((!bVar1) || (bVar1 = FWeakObjectPtr::IsValid(local_res10), !bVar1)) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_NpcFunctionShop::OnAddBagItemToBasket",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_158.Ptr,0x5c8,
                 L"NPCSellData.IsValid() == false || InItemData.IsValid() == false");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    return;
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->NPCShopData).WeakPtr);
  if (bVar1) {
    pUVar3 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
    pTVar4 = UDS_NPCShopData::GetNPCShopBasket(pUVar3);
    if (pTVar4->ArrayNum != 0) {
      pUVar3 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
      UDS_NPCShopData::ClearNPCShopBasket(pUVar3);
    }
  }
  pUVar5 = (UDS_NPCSellData *)FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
  UDS_NPCSellData::AddNPCSellBasketGoodsInfo
            (pUVar5,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res10[0],param_2,param_3);
  pUVar6 = UDS_NPCShopEvent::GetEvent();
  if (pUVar6 == (UDS_NPCShopEvent *)0x0) {
    return;
  }
  pUVar5 = (UDS_NPCSellData *)FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
  iVar2 = UDS_NPCSellData::GetNPCSellBasketSlotIndex
                    (pUVar5,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res10[0]);
  FDS_EventDelegate<int_const_>::Broadcast(&pUVar6->OnUpdatedBasketSlot,iVar2);
  (**(code **)(this->_padding_ + 0x98))(&this->_padding_,iVar2);
  return;
}

// OnAddNpcItemToBasket @ 14bef7010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionShop::OnAddNpcItemToBasket(UDS_NpcFunctionShop *this,int param_1,int param_2)

{
  TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr> *this_00;
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NPCShopData *pUVar3;
  FDS_NPCShopGoodsInfo *pFVar4;
  UDS_NPCSellData *pUVar5;
  TArray<FDS_NPCSellGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr> *this_01;
  undefined1 auStackY_178 [32];
  uint uVar7;
  wchar_t *pwVar8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = &this->NPCShopData;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar3 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    pFVar4 = UDS_NPCShopData::GetNPCShopGoodsInfo(pUVar3,param_1);
    if (pFVar4 != (FDS_NPCShopGoodsInfo *)0x0) {
      this_01 = &this->NPCSellData;
      bVar1 = FWeakObjectPtr::IsValid(&this_01->WeakPtr);
      if (bVar1) {
        pUVar5 = (UDS_NPCSellData *)FWeakObjectPtr::Get(&this_01->WeakPtr);
        pTVar6 = UDS_NPCSellData::GetNPCSellBasket(pUVar5);
        if (pTVar6->ArrayNum != 0) {
          pUVar5 = (UDS_NPCSellData *)FWeakObjectPtr::Get(&this_01->WeakPtr);
          UDS_NPCSellData::ClearNPCSellBasket(pUVar5);
        }
      }
      pUVar3 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      UDS_NPCShopData::AddNPCShopBasketGoodsInfo(pUVar3,param_1,param_2);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_NpcFunctionShop::OnAddNpcItemToBasket",0x29,Yes);
    pwVar8 = L"npcShopGoodsInfo == nullptr";
    uVar7 = 0x599;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_NpcFunctionShop::OnAddNpcItemToBasket",0x29,Yes);
    pwVar8 = L"NPCShopData.IsValid() == false";
    uVar7 = 0x592;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar7,pwVar8);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// OnBasketPurchaseCompleted @ 14bef74e0

void __thiscall UDS_NpcFunctionShop::OnBasketPurchaseCompleted(UDS_NpcFunctionShop *this)

{
  UDS_NPCShopEvent *pUVar1;
  
  ClearAllBasket(this);
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    FDS_EventDelegate<>::Broadcast(&pUVar1->OnUpdatedBasket);
    return;
  }
  return;
}

// OnBasketSellCompleted @ 14bef7510

void __thiscall UDS_NpcFunctionShop::OnBasketSellCompleted(UDS_NpcFunctionShop *this)

{
  UDS_NPCShopEvent *pUVar1;
  
  ClearAllBasket(this);
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    FDS_EventDelegate<>::Broadcast(&pUVar1->OnUpdatedBasket);
    return;
  }
  return;
}

// OnClickBasketAction @ 14bef87c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NpcFunctionShop::OnClickBasketAction(UDS_NpcFunctionShop *this)

{
  longlong *this_00;
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  UDS_NPCShopData *pUVar4;
  UDS_DataSetBase *this_01;
  UDS_NPCSellData *this_02;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  iVar2 = (this->NPCShopData).WeakPtr.ObjectIndex;
  if (iVar2 == 1) {
    this_00 = &this->_padding_;
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
    if (bVar1) {
      pUVar4 = (UDS_NPCShopData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      iVar2 = UDS_NPCShopData::GetNumOfNPCShopBasket(pUVar4);
      if (iVar2 == 0) {
        FDS_ItemShopService::OnNPCShopResult(EmptyPurchaseBasket);
      }
      else {
        pUVar4 = (UDS_NPCShopData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        UDS_NPCShopData::PurchaseNPCShopBasket(pUVar4);
      }
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_NpcFunctionShop::Request_PurchaseBasket",0x2b,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0x43b,L"NPCShopData.IsValid() == false");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  else if (iVar2 == 2) {
    this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].BasketType);
    UDS_DataSetBase::GetDataContainerKey(this_01);
    UDS_NPCSellData::GetData((ulong64)local_148);
    bVar1 = TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr> *)local_148,(void *)0x0);
    if (!bVar1) {
      this_02 = (UDS_NPCSellData *)FWeakObjectPtr::Get(local_148);
      UDS_NPCSellData::SellNPCSellBasket(this_02);
      return;
    }
  }
  return;
}

// OnClickClearBasket @ 14bef8de0

void __thiscall UDS_NpcFunctionShop::OnClickClearBasket(UDS_NpcFunctionShop *this)

{
  UDS_NPCShopEvent *pUVar1;
  
  ClearAllBasket((UDS_NpcFunctionShop *)&this[-1].InventoryBagModel);
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    FDS_EventDelegate<>::Broadcast(&pUVar1->OnUpdatedBasket);
    return;
  }
  return;
}

// OnCloseFunction @ 14befbda0

void __thiscall UDS_NpcFunctionShop::OnCloseFunction(UDS_NpcFunctionShop *this)

{
  bool bVar1;
  UDS_NPCShopEvent *pUVar2;
  UDS_NpcFunctionEvent *pUVar3;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  ClearAllBasket(this);
  this->BasketType = None;
  (this->SellQuantityData).field0_0x0.DebugPtr = (UDS_QuantityData *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->NPCShopData).WeakPtr = local_res8;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->NPCSellData).WeakPtr = local_res8;
  pUVar2 = UDS_NPCShopEvent::GetEvent();
  if (pUVar2 != (UDS_NPCShopEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnBasketPurchaseCompleted,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnBasketSellCompleted,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnSelectShopItemSlot,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnInventoryBagCompleted,this);
  }
  pUVar3 = UDS_NpcFunctionEvent::GetEvent();
  if (pUVar3 != (UDS_NpcFunctionEvent *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar3->OnQueryNpcFunction);
  }
  UDS_NpcFunctionBase::CloseWindow((UDS_NpcFunctionBase *)this,NpcShop);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    this->_padding_ = (longlong)local_res8;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0;
  return;
}

// OnEventDrop @ 14befcb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionShop::OnEventDrop(UDS_NpcFunctionShop *this,FDS_DragDropEventField *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FDS_ItemSlotInfo *pFVar8;
  FObjectPtr_u_0 FVar9;
  longlong *plVar10;
  undefined1 auStackY_2e8 [32];
  FWeakObjectPtr local_2b8;
  longlong *local_2b0;
  FObjectPtr_u_0 FStack_2a8;
  FWeakObjectPtr local_2a0;
  FObjectPtr_u_0 local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  if ((param_1->DragDropOperation).field0_0x0.DebugPtr == (UDragDropOperation *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_NpcFunctionShop::OnEventDrop",0x20,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_288.Ptr,0x193,
                 L"InDragDropEventField.DragDropOperation is nullptr");
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_W_DragDropOperation_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->DragDropOperation,pUVar6);
    FVar9.Handle = (UObject *)0x0;
    local_298.Handle = FVar9.Handle;
    if (bVar3) {
      local_298 = (FObjectPtr_u_0)(param_1->DragDropOperation).field0_0x0.DebugPtr;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDragDropOperation *)local_298.Handle != (UDragDropOperation *)0x0)) {
      UE::GC::MarkAsReachable(local_298.Handle);
    }
    local_2b8.ObjectIndex = 0;
    local_2b8.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDragDropOperation *)local_298.Handle != (UDragDropOperation *)0x0)) {
      UE::GC::MarkAsReachable(local_298.Handle);
    }
    FWeakObjectPtr::operator=(&local_2b8,(FObjectPtr)&local_298);
    bVar3 = TWeakObjectPtr<UDS_W_DragDropOperation,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_W_DragDropOperation,FWeakObjectPtr> *)&local_2b8,
                       (void *)0x0);
    if (bVar3) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_NpcFunctionShop::OnEventDrop",0x20,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_168.Ptr,0x19a,L"dragDropOperation is nullptr");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
    }
    else {
      pUVar7 = FWeakObjectPtr::Get(&local_2b8);
      if ((*(longlong *)&pUVar7[4].field_0x8 != 0) &&
         (*(char *)(*(longlong *)&pUVar7[4].field_0x8 + 8) == '\x01')) {
        pUVar7 = FWeakObjectPtr::Get(&local_2b8);
        pFVar8 = FDS_SlotInfo::GetSlotInfo<FDS_ItemSlotInfo>((FDS_SlotInfo *)&pUVar7[4].field_0x8);
        if ((pFVar8 != (FDS_ItemSlotInfo *)0x0) &&
           ((bVar3 = TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr>::UEOpEquals
                               ((TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr> *)&this->_padding_,
                                (void *)0x0), !bVar3 &&
            (bVar3 = TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr>::UEOpEquals
                               ((TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr> *)&this->_padding_,
                                (void *)0x0), !bVar3)))) {
          pUVar7 = FWeakObjectPtr::Get(&local_2b8);
          bVar3 = (bool)pUVar7[4].field_0x18;
          if (pFVar8->SlotType == ShopListItem) {
            pUVar7 = FWeakObjectPtr::Get(&local_2b8);
            puVar1 = &pUVar7[4].field_0x8;
            if (*(longlong *)puVar1 == 0) {
              FStack_2a8.Handle = ::operator_new(0x50);
              if ((UDragDropOperation *)FStack_2a8.Handle == (UDragDropOperation *)0x0) {
                local_2b0 = ___xmm_00000000000000000000000000000010;
                plVar10 = (longlong *)&DAT_00000010;
                FStack_2a8 = _UNK_150651568;
              }
              else {
                *(undefined4 *)&(FStack_2a8.Handle)->field_0x8 = 1;
                plVar10 = (longlong *)&(FStack_2a8.Handle)->field_0x10;
                *(undefined4 *)&(FStack_2a8.Handle)->field_0xc = 1;
                *(undefined ***)FStack_2a8.Handle =
                     &
                     ___7__TIntrusiveReferenceController_UFDS_NpcShopItemSlotInfo___00_SharedPointerInternals__6B_
                ;
                *(longlong *)&(FStack_2a8.Handle)->field_0x18 = 0;
                *(undefined8 *)(FStack_2a8.Handle + 1) = 0;
                *(undefined8 *)&FStack_2a8.Handle[1].field_0x8 = 0;
                *(undefined8 *)&FStack_2a8.Handle[1].field_0x20 = 0;
                *(longlong *)&(FStack_2a8.Handle)->field_0x20 = 0;
                (((TObjectPtr<UObject> *)&FStack_2a8.Handle[1].field_0x10)->field0_0x0).DebugPtr =
                     (UObject *)0x0;
                (((TObjectPtr<UWidget> *)&FStack_2a8.Handle[1].field_0x18)->field0_0x0).DebugPtr =
                     (UWidget *)0x0;
                *(undefined ***)&(FStack_2a8.Handle)->field_0x10 = &___7FDS_NpcShopItemSlotInfo__6B_
                ;
                if ((plVar10 == (longlong *)0x0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InObject != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x246,L""), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                LOCK();
                *(int *)&(FStack_2a8.Handle)->field_0x8 =
                     (int)*(longlong *)&(FStack_2a8.Handle)->field_0x8 + 1;
                UNLOCK();
                FVar9.Handle = FStack_2a8.Handle;
                local_2b0 = plVar10;
              }
              if ((longlong **)puVar1 != &local_2b0) {
                *(longlong **)puVar1 = plVar10;
                local_2b0 = (longlong *)0x0;
                SharedPointerInternals::FSharedReferencer<1>::operator=
                          ((FSharedReferencer<1> *)&pUVar7[4].field_0x10,
                           (FSharedReferencer<1> *)&FStack_2a8);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)FStack_2a8.Handle);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)FVar9.Handle);
            }
            if (*(longlong *)puVar1 != 0) {
              Request_AddNpcItemToBasket
                        ((UDS_NpcFunctionShop *)&this[-1].InventoryBagModel,
                         *(int *)(*(longlong *)puVar1 + 0x38),bVar3);
            }
          }
          else if (pFVar8->SlotType == ShopBagItem) {
            DS_ItemDataUtil::GetItemDataByUID((long64)&local_2a0);
            bVar4 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_2a0,(void *)0x0
                              );
            if (!bVar4) {
              Request_AddBagItemToBasket
                        ((UDS_NpcFunctionShop *)&this[-1].InventoryBagModel,
                         (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_2a0,bVar3);
            }
          }
        }
      }
    }
  }
  return;
}

// OnEventInventoryBag @ 14befcf70

void __thiscall
UDS_NpcFunctionShop::OnEventInventoryBag
          (UDS_NpcFunctionShop *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UDS_NPCShopEvent *pUVar5;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  local_res10 = param_1.WeakPtr;
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_ModelEventInventoryBag_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14befcfb9;
  }
  pUVar3 = (UObject *)0x0;
LAB_14befcfb9:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res18);
    if (*(int *)&pUVar3[5].field_0x8 == 1) {
      pUVar5 = UDS_NPCShopEvent::GetEvent();
      if (pUVar5 != (UDS_NPCShopEvent *)0x0) {
        FDS_EventDelegate<__int64_const_>::Broadcast(&pUVar5->OnUpdatedBagSlot,0);
      }
      OnInventoryBagCompleted(this);
    }
  }
  return;
}

// OnInventoryBagCompleted @ 14befe410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NpcFunctionShop::OnInventoryBagCompleted(UDS_NpcFunctionShop *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NPCShopData *this_00;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = FWeakObjectPtr::IsValid(&(this->NPCShopData).WeakPtr);
  if (!bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NpcFunctionShop::OnInventoryBagCompleted",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x600,L"NPCShopData.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  this_00 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
  UDS_NPCShopData::ClearPurchasedNPCShopBasket(this_00);
  return;
}

// OnOpenFunction @ 14bf00890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionShop::OnOpenFunction
          (UDS_NpcFunctionShop *this,TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> param_1,
          int param_2,EDS_InteractionFunctionType param_3)

{
  bool bVar1;
  int iVar2;
  UDS_DataSetBase *pUVar3;
  TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr> TVar4;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_00;
  FWeakObjectPtr FVar5;
  UClass *pUVar6;
  UDS_NPCShopEvent *pUVar7;
  UDS_NpcFunctionEvent *pUVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  UObject *pUVar11;
  UDS_WindowManager *this_01;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar12;
  UDS_LogManager *pUVar13;
  FObjectPtr_u_0 FVar14;
  ulonglong uVar15;
  FWeakObjectPtr FVar16;
  undefined1 auStackY_1e8 [32];
  FWeakObjectPtr local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [32];
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  int local_178;
  undefined1 *local_170;
  FDestructionSentinel local_168;
  ForAnyElementType local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_1b8 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_1b8);
  if (bVar1) {
    this->_padding_ = (longlong)local_1b8;
  }
  *(int *)&this->_padding_ = param_2;
  *(EDS_InteractionFunctionType *)((longlong)&this->_padding_ + 4) = param_3;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar1) {
    return;
  }
  pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_DataSetBase::GetDataContainerKey(pUVar3);
  TVar4 = UDS_NPCShopData::GetData((ulong64)&local_1b8);
                    /* WARNING: Load size is inaccurate */
  (this->NPCShopData).WeakPtr = *TVar4.WeakPtr;
  pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  this_00 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_1a8);
  FVar5 = (FWeakObjectPtr)FWeakObjectPtr::Get(this_00.WeakPtr);
  FVar16.ObjectIndex = 0;
  FVar16.ObjectSerialNumber = 0;
  if (FVar5 != (FWeakObjectPtr)0x0) {
    pUVar6 = Z_Construct_UClass_UDS_NPCSellData_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x38)) &&
       (local_1b8 = FVar5,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
       &pUVar6->_padding_)) goto LAB_14bf0097f;
  }
  local_1b8 = FVar16;
LAB_14bf0097f:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1b8 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1b8);
  }
  FVar14.Handle = (UObject *)&local_1b8;
  FWeakObjectPtr::operator=(&(this->NPCSellData).WeakPtr,(FObjectPtr)FVar14);
  pUVar7 = UDS_NPCShopEvent::GetEvent();
  if (pUVar7 != (UDS_NPCShopEvent *)0x0) {
    local_1a8._8_4_ = 0;
    local_1a8._0_8_ = OnBasketPurchaseCompleted;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar7->OnBasketPurchaseCompleted,this);
    uStack_1b0 = CONCAT44(local_1a8._12_4_,local_1a8._8_4_);
    local_1b8.ObjectIndex = local_1a8._0_4_;
    local_1b8.ObjectSerialNumber = local_1a8._4_4_;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_NpcFunctionShop>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar7->OnBasketPurchaseCompleted,(UDS_NpcFunctionShop *)local_1a8,
               (pmf_d865d140 *)this);
    local_1a8._8_4_ = 0;
    local_1a8._0_8_ = OnBasketSellCompleted;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7->OnBasketSellCompleted,
               this);
    uStack_1b0 = CONCAT44(local_1a8._12_4_,local_1a8._8_4_);
    local_1b8.ObjectIndex = local_1a8._0_4_;
    local_1b8.ObjectSerialNumber = local_1a8._4_4_;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_NpcFunctionShop>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar7->OnBasketSellCompleted,(UDS_NpcFunctionShop *)local_1a8,(pmf_d865d140 *)this)
    ;
    local_1a8._8_4_ = 0;
    local_1a8._0_8_ = OnSelectShopItem;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7->OnSelectShopItemSlot,
               this);
    uStack_1b0 = CONCAT44(local_1a8._12_4_,local_1a8._8_4_);
    local_1b8.ObjectIndex = local_1a8._0_4_;
    local_1b8.ObjectSerialNumber = local_1a8._4_4_;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_NpcFunctionShop>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar7->OnSelectShopItemSlot,(UDS_NpcFunctionShop *)local_1a8,(pmf_095e81fc *)this);
    local_1a8._8_4_ = 0;
    local_1a8._0_8_ = OnInventoryBagCompleted;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar7->OnInventoryBagCompleted,this);
    uStack_1b0 = CONCAT44(local_1a8._12_4_,local_1a8._8_4_);
    local_1b8.ObjectIndex = local_1a8._0_4_;
    local_1b8.ObjectSerialNumber = local_1a8._4_4_;
    FVar14.Handle = (UObject *)local_1a8;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_NpcFunctionShop>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar7->OnInventoryBagCompleted,(UDS_NpcFunctionShop *)FVar14.Handle,
               (pmf_d865d140 *)this);
  }
  pUVar8 = UDS_NpcFunctionEvent::GetEvent();
  if (pUVar8 != (UDS_NpcFunctionEvent *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar8->OnQueryNpcFunction);
    local_1a8._8_4_ = 0;
    local_1a8._0_8_ = OnQueryNpcFunction;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar8->OnQueryNpcFunction
               ,(FWriteAccessScope *)local_188);
    FVar14.Handle = (UObject *)&(pUVar8->OnQueryNpcFunction).Delegate.field_0x8;
    local_170 = (undefined1 *)FVar14;
    puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)FVar14.Handle);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6A_AU__TWeakObjectPtr_VUDS_NpcFunctionBase__UFWeakObjectPtr____XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionShop____A6A_AU__TWeakObjectPtr_VUDS_NpcFunctionBase__UFWeakObjectPtr____XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar9[3] = 0;
      local_1b8 = (FWeakObjectPtr)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FVar14.Handle = (UObject *)&local_1b8;
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)FVar14);
      ((FWeakObjectPtr *)(puVar9 + 4))->ObjectIndex = local_1a8._0_4_;
      ((FWeakObjectPtr *)(puVar9 + 4))->ObjectSerialNumber = local_1a8._4_4_;
      puVar9[5] = CONCAT44(local_1a8._12_4_,local_1a8._8_4_);
    }
    if (local_178._0_1_ == false) {
      FVar14.Handle = (UObject *)local_188;
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_180,(FDestructionSentinel *)FVar14.Handle);
    }
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->NPCShopData).WeakPtr);
  if ((bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&(this->NPCSellData).WeakPtr), bVar1)) {
    pUVar11 = FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
    if (((this->BuyBasketSlots).ArrayNum == 0) && (0 < (int)*(uint *)(pUVar11 + 6))) {
      uVar15 = (ulonglong)*(uint *)(pUVar11 + 6);
      do {
        DS_ItemDataUtil::CreateItemModel
                  ((EDS_ItemSlotStateType)&local_1b8,(int)CONCAT71(FVar14._1_7_,0x23));
        iVar2 = (this->BuyBasketSlots).ArrayNum;
        if (iVar2 == (this->BuyBasketSlots).ArrayMax) {
          iVar2 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->BuyBasketSlots).AllocatorInstance,
                             &(this->BuyBasketSlots).ArrayMax);
        }
        FVar14 = (FObjectPtr_u_0)(longlong)iVar2;
        (this->BuyBasketSlots).ArrayNum = iVar2 + 1;
        *(FWeakObjectPtr *)
         ((this->BuyBasketSlots).AllocatorInstance.Data + (longlong)FVar14.Handle * 8) = local_1b8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_1b8 != (FWeakObjectPtr)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_1b8);
        }
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    pUVar11 = FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
    if (((this->SellBasketSlots).ArrayNum == 0) && (0 < (int)*(uint *)&pUVar11[3].field_0x10)) {
      uVar15 = (ulonglong)*(uint *)&pUVar11[3].field_0x10;
      do {
        DS_ItemDataUtil::CreateItemModel
                  ((EDS_ItemSlotStateType)&local_1b8,(int)CONCAT71(FVar14._1_7_,0x24));
        iVar2 = (this->SellBasketSlots).ArrayNum;
        if (iVar2 == (this->SellBasketSlots).ArrayMax) {
          iVar2 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->SellBasketSlots).AllocatorInstance,
                             &(this->SellBasketSlots).ArrayMax);
        }
        FVar14 = (FObjectPtr_u_0)(longlong)iVar2;
        (this->SellBasketSlots).ArrayNum = iVar2 + 1;
        *(FWeakObjectPtr *)
         ((this->SellBasketSlots).AllocatorInstance.Data + (longlong)FVar14.Handle * 8) = local_1b8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_1b8 != (FWeakObjectPtr)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_1b8);
        }
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    this_01 = UDS_WindowManager::GetInst();
    if (this_01 != (UDS_WindowManager *)0x0) {
      local_1a8._0_8_ = OpenNpcShopCallback;
      local_1a8._8_4_ = 0;
      local_188 = (undefined1  [8])0x0;
      local_180 = (undefined1  [8])0x0;
      local_178 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
                 (FWriteAccessScope *)&local_168);
      local_150.Data = (FScriptContainerElement *)local_180;
      puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_180);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionShop____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar9[3] = 0;
        local_1b8 = (FWeakObjectPtr)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_1b8);
        puVar9[4] = local_1a8._0_8_;
        puVar9[5] = CONCAT44(local_1a8._12_4_,local_1a8._8_4_);
      }
      if (local_168.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
      }
      pTVar12 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                          ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                           local_1a8,
                           (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                           local_188);
      UDS_WindowManager::OpenWindow(this_01,NpcShop,pTVar12);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
                 (FWriteAccessScope *)local_1a8);
      if ((local_178 != 0) &&
         ((ForElementType<TAlignedBytes<16,16>_>)local_180 !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (**(code **)*(atomic<unsigned___int64> *)local_180)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)local_180,0,0,0x10);
        local_178 = 0;
      }
      if (local_1a8[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(local_1a8._12_4_,local_1a8._8_4_),
                   (FDestructionSentinel *)local_1a8);
      }
      if ((ForElementType<TAlignedBytes<16,16>_>)local_180 !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_180);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_188);
    }
  }
  else {
    pUVar13 = UDS_LogManager::GetInst();
    if (pUVar13 != (UDS_LogManager *)0x0) {
      pUVar13 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_NpcFunctionShop::OnOpenFunction",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar13,1,Warning,local_148.Ptr,0x3d,
                 L"NPCShopData.IsValid() == false || NPCSellData.IsValid() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// OnQuantitySliderValueChangedEvent @ 14bf03070

void __thiscall
UDS_NpcFunctionShop::OnQuantitySliderValueChangedEvent
          (UDS_NpcFunctionShop *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,
          int param_2)

{
  bool bVar1;
  int iVar2;
  UDS_M_CommonPopup *this_00;
  UDS_M_CommonPopup *this_01;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
    this_01 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
    iVar2 = UDS_M_CommonPopup::GetSliderCount(this_01);
    UDS_M_CommonPopup::UpdateAssetValue1(this_00,Asset01,iVar2 * param_2);
  }
  return;
}

// OnQueryNpcFunction @ 14bf03150

TWeakObjectPtr<UDS_NpcFunctionBase,FWeakObjectPtr> __thiscall
UDS_NpcFunctionShop::OnQueryNpcFunction(UDS_NpcFunctionShop *this)

{
  FWeakObjectPtr in_RDX;
  UDS_NpcFunctionShop *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (this != (UDS_NpcFunctionShop *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_NpcFunctionShop *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_NpcFunctionBase,FWeakObjectPtr>)in_RDX;
}

// OnSelectItemSlotTradable @ 14bf03cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionShop::OnSelectItemSlotTradable
          (UDS_NpcFunctionShop *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_2)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_M_CommonPopup *pUVar4;
  UDS_NPCSellData *this_00;
  FDS_NPCSellGoodsInfo *pFVar5;
  UObject *pUVar6;
  int *piVar7;
  int iVar8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  undefined1 auStackY_178 [32];
  uint uVar9;
  wchar_t *pwVar10;
  EDS_InventoryType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_res10 = param_1.WeakPtr;
  local_res18 = param_2.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&(this->NPCSellData).WeakPtr);
  if (bVar2) {
    bVar2 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar2) {
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
      UDS_M_CommonPopup::SetSelectedItemSlotType(pUVar4,ItemSlot02);
      iVar8 = 0;
      this_00 = (UDS_NPCSellData *)FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
      pFVar5 = UDS_NPCSellData::GetNPCSellBasketGoodsInfoByItemData
                         (this_00,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res18);
      if (pFVar5 != (FDS_NPCSellGoodsInfo *)0x0) {
        iVar8 = pFVar5->SellCount_Tradable;
      }
      local_148[0] = PlayerNormal;
      pUVar6 = FWeakObjectPtr::Get(&local_res18);
      piVar7 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
               ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(&pUVar6[10].field_0x18,1,local_148);
      iVar1 = *piVar7;
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
      UDS_M_CommonPopup::UpdateSlider(pUVar4,1,iVar1 - iVar8,1);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NpcFunctionShop::OnSelectItemSlotTradable",0x2d,Yes);
    pwVar10 = L"InItemData.IsValid() == false";
    uVar9 = 0x54d;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NpcFunctionShop::OnSelectItemSlotTradable",0x2d,Yes);
    pwVar10 = L"NPCSellData.IsValid()";
    uVar9 = 0x547;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar9,pwVar10);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnSelectItemSlotUnTradable @ 14bf04000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionShop::OnSelectItemSlotUnTradable
          (UDS_NpcFunctionShop *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_2)

{
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  UDS_M_CommonPopup *pUVar4;
  UDS_NPCSellData *this_00;
  FDS_NPCSellGoodsInfo *pFVar5;
  UDS_ItemData *this_01;
  int iVar6;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  undefined1 auStackY_168 [32];
  uint uVar7;
  wchar_t *pwVar8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_res10 = param_1.WeakPtr;
  local_res18 = param_2.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&(this->NPCSellData).WeakPtr);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar1) {
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
      UDS_M_CommonPopup::SetSelectedItemSlotType(pUVar4,ItemSlot01);
      iVar6 = 0;
      this_00 = (UDS_NPCSellData *)FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
      pFVar5 = UDS_NPCSellData::GetNPCSellBasketGoodsInfoByItemData
                         (this_00,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res18);
      if (pFVar5 != (FDS_NPCSellGoodsInfo *)0x0) {
        iVar6 = pFVar5->SellCount_UnTradable;
      }
      this_01 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res18);
      iVar2 = UDS_ItemData::GetStackCount_UnTradable(this_01,PlayerNormal);
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
      UDS_M_CommonPopup::UpdateSlider(pUVar4,1,iVar2 - iVar6,1);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NpcFunctionShop::OnSelectItemSlotUnTradable",0x2f,Yes);
    pwVar8 = L"InItemData.IsValid() == false";
    uVar7 = 0x568;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NpcFunctionShop::OnSelectItemSlotUnTradable",0x2f,Yes);
    pwVar8 = L"NPCSellData.IsValid()";
    uVar7 = 0x562;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar7,pwVar8);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnSelectShopItem @ 14bf041d0

void __thiscall UDS_NpcFunctionShop::OnSelectShopItem(UDS_NpcFunctionShop *this,int param_1)

{
  bool bVar1;
  int iVar2;
  UDS_NPCShopData *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->NPCShopData).WeakPtr);
  if ((bVar1) && (this->BasketType == BuyBasket)) {
    this_00 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
    iVar2 = UDS_NPCShopData::GetNPCShopBasketSlotIndex(this_00,param_1);
    if (this->SelectedBasketSlotIndex != iVar2) {
      (**(code **)(this->_padding_ + 0x98))(&this->_padding_,iVar2);
    }
  }
  return;
}

// OnUpdatedBasket @ 14bf0b100

void __thiscall UDS_NpcFunctionShop::OnUpdatedBasket(UDS_NpcFunctionShop *this)

{
  return;
}

// OpenNpcShopCallback @ 14bf0c480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionShop::OpenNpcShopCallback(UDS_NpcFunctionShop *this,UDS_UserWidget *param_1)

{
  FName FVar1;
  code *pcVar2;
  int iVar3;
  FDS_ViewModelContext_ItemBasket *pFVar4;
  bool bVar5;
  UObject *pUVar6;
  FDS_ViewModelContext_NPCShop *pFVar7;
  FDS_ViewModelContext_NPCShop *pFVar8;
  FDS_ViewModelContext_NPCShop *pFVar9;
  UScriptStruct *pUVar10;
  UDS_ViewModelContextManager *this_00;
  UDS_M_InventoryBag *this_01;
  UDS_DataBase *this_02;
  ulong64 uVar11;
  undefined8 *puVar12;
  FDS_DataContainer *pFVar13;
  UDS_M_Weight *this_03;
  FName *pFVar14;
  UDS_LogManager *pUVar15;
  FDS_ViewModelContext_NPCShop *pFVar16;
  undefined1 auStackY_438 [32];
  undefined1 local_408 [8];
  FDelegateAllocation local_400;
  FWeakObjectPtr local_3f0;
  FWeakObjectPtr local_3e8;
  FWeakObjectPtr local_3e0;
  FWeakObjectPtr local_3d8 [2];
  UDS_UserWidget *local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  FDS_ViewModelContext *local_3b8;
  TReferenceControllerBase<1> *pTStack_3b0;
  UDS_NpcFunctionShop *local_3a8;
  UDS_UserWidget *local_3a0;
  FDS_NpcShopTableRow *local_398;
  UDS_NpcFunctionShop *local_390;
  UDS_UserWidget *local_388;
  UDS_M_Weight *local_380;
  UDS_UserWidget *local_378;
  TSharedPtr<FDS_ViewModelContext,1> local_370;
  TSharedPtr<FDS_ViewModelContext_ItemBasket,1> local_358;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_348;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_330;
  TSharedPtr<FDS_ViewModelContext,1> local_318;
  TSharedPtr<FDS_ViewModelContext,1> local_308;
  FDestructionSentinel local_2f8;
  FDestructionSentinel local_2e0;
  FDelegateAllocation *local_2c8;
  FName local_2c0;
  TSharedPtr<FDS_ViewModelContext,1> local_2b8;
  FDS_DataContainer local_2a8;
  undefined1 local_208 [32];
  void *local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  void *local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8 [32];
  void *local_198;
  undefined4 local_190;
  uint local_18c;
  undefined4 local_188;
  undefined4 local_184;
  void *local_178;
  undefined4 local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_438;
    bVar5 = FWeakObjectPtr::IsValid(&(this->NPCShopData).WeakPtr);
    if ((bVar5) && (bVar5 = FWeakObjectPtr::IsValid(&(this->NPCSellData).WeakPtr), bVar5)) {
      ClearAllBasket(this);
      pUVar6 = FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
      local_398 = FDS_NpcShopTableRow::GetRef((longlong)*(int *)&pUVar6[2].field_0x10,true);
      pFVar7 = ::operator_new(0x38);
      pFVar16 = (FDS_ViewModelContext_NPCShop *)0x0;
      pFVar8 = pFVar16;
      if (pFVar7 != (FDS_ViewModelContext_NPCShop *)0x0) {
        pFVar7->_padding_ = 0;
        pFVar7->_padding_ = 0;
        pFVar7->_padding_ = 0;
        pFVar7->_padding_ = 0;
        (pFVar7->NPCShopData).WeakPtr = (FWeakObjectPtr)0x0;
        (pFVar7->NPCSellData).WeakPtr = (FWeakObjectPtr)0x0;
        (pFVar7->NpcFunctionShop).WeakPtr = (FWeakObjectPtr)0x0;
        pFVar8 = FDS_ViewModelContext_NPCShop::FDS_ViewModelContext_NPCShop(pFVar7);
      }
      pFVar9 = ::operator_new(0x20);
      pFVar7 = pFVar16;
      if (pFVar9 != (FDS_ViewModelContext_NPCShop *)0x0) {
        *(undefined4 *)&pFVar9->_padding_ = 1;
        pFVar9->_padding_ = (longlong)ViewModelContextDeleter;
        pFVar9->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_NPCShop__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        *(undefined4 *)((longlong)&pFVar9->_padding_ + 4) = 1;
        pFVar9->_padding_ = (longlong)pFVar8;
        pFVar7 = pFVar9;
      }
      if ((pFVar8 == (FDS_ViewModelContext_NPCShop *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar10 = FDS_ViewModelContext_NPCShop::StaticStruct();
      pFVar8->_padding_ = (longlong)pUVar10;
      this_00 = UDS_ViewModelContextManager::GetInst();
      if (this_00 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar7 != (FDS_ViewModelContext_NPCShop *)0x0) {
          LOCK();
          *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
          UNLOCK();
        }
        local_370.Object = (FDS_ViewModelContext *)pFVar8;
        local_370.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
        UDS_ViewModelContextManager::RegisterContext(this_00,&local_370);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_370.SharedReferenceCount.ReferenceController);
      }
      *(undefined4 *)&pFVar8->_padding_ = 0xfe;
      (pFVar8->NPCShopData).WeakPtr = (this->NPCShopData).WeakPtr;
      local_3a8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&(pFVar8->NpcFunctionShop).WeakPtr,(FObjectPtr)&local_3a8);
      if (pFVar7 != (FDS_ViewModelContext_NPCShop *)0x0) {
        LOCK();
        *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
        UNLOCK();
      }
      local_318.Object = (FDS_ViewModelContext *)pFVar8;
      local_318.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_3f0.ObjectIndex = 0;
      local_3f0.ObjectSerialNumber = 0;
      local_3a0 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_3f0,(FObjectPtr)&local_3a0);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_3f0,&local_318,false);
      this_01 = NewObject<UDS_M_InventoryBag>((UObject *)this);
      local_208._0_8_ = (FScriptContainerElement *)0x0;
      local_208._8_8_ = 0;
      local_1e8 = (void *)0x0;
      local_1e0 = 0;
      local_1dc = 0x80;
      local_1d8 = 0xffffffff;
      local_1d4 = 0;
      local_1c8 = (void *)0x0;
      local_1c0 = 0;
      local_1b8._0_8_ = (FScriptContainerElement *)0x0;
      local_1b8._8_8_ = 0;
      local_198 = (void *)0x0;
      local_190 = 0;
      local_18c = 0x80;
      local_188 = 0xffffffff;
      local_184 = 0;
      local_178 = (void *)0x0;
      local_170 = 0;
      FDS_DataContainer::SetData<enum_EDS_BagGroupType,enum_EDS_InventoryBagData>
                ((FDS_DataContainer *)local_208,BagGroupType,local_398->ID_BagGroup);
      FDS_DataContainer::SetData<enum_EDS_SortingType,enum_EDS_InventoryBagData>
                ((FDS_DataContainer *)local_208,SortType,CharGet);
      this_02 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
      uVar11 = UDS_DataBase::GetEntityID(this_02);
      FDS_DataContainer::SetData<unsigned___int64,enum_EDS_NpcFunctionData>
                ((FDS_DataContainer *)local_208,NpcShopDataKey,uVar11);
      uStack_3c0 = 0;
      local_3c8 = (UDS_UserWidget *)OnEventInventoryBag;
      uStack_3bc = local_308.SharedReferenceCount.ReferenceController._4_4_;
      local_408 = (undefined1  [8])0x0;
      local_400.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_400.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_408,
                 (FWriteAccessScope *)&local_2e0);
      local_2c8 = &local_400;
      puVar12 = UE::Core::Private::DelegateAllocate(0x30,&local_400);
      if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &
                   ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar12[2] = uVar11;
        *puVar12 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionShop____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar12[3] = 0;
        local_390 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_390);
        puVar12[4] = local_3c8;
        puVar12[5] = CONCAT44(uStack_3bc,uStack_3c0);
      }
      if (local_2e0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e0.Accessor,&local_2e0);
      }
      UDS_ModelBase::AddUpdateModelDelegate
                ((UDS_ModelBase *)this_01,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)local_408);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_408,
                 (FWriteAccessScope *)&local_2f8);
      if ((local_400.DelegateSize != 0) &&
         (local_400.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_400.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_400,0,0,0x10);
        local_400.DelegateSize = 0;
      }
      if (local_2f8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2f8.Accessor,&local_2f8);
      }
      if (local_400.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_400.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_408);
      local_348._16_8_ = 0;
      local_348._0_8_ = 0;
      local_348._8_8_ = 0;
      local_330._16_8_ = 0;
      local_330._0_8_ = 0;
      local_330._8_8_ = 0;
      pFVar13 = FDS_DataContainer::FDS_DataContainer(&local_2a8,(FDS_DataContainer *)local_208);
      UDS_M_InventoryBag::InitModel(this_01,pFVar13,&local_330,&local_348);
      pcVar2 = *(code **)(this_01->_padding_ + 0x2e8);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_3e8.ObjectIndex = 0;
      local_3e8.ObjectSerialNumber = 0;
      local_3c8 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_3e8,(FObjectPtr)&local_3c8);
      (*pcVar2)(this_01,local_3e8);
      this_03 = NewObject<UDS_M_Weight>((UObject *)this);
      UDS_M_Weight::Init(this_03,PlayerNormal,0,0);
      (**(code **)(*(longlong *)this_03 + 0x310))(this_03,&local_3b8);
      pFVar14 = ::FName::FName(&local_2c0,"DS_VM_Weight_Basket");
      FVar1 = *pFVar14;
      if ((local_3b8 == (FDS_ViewModelContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_3b8->ViewModelName = FVar1;
      local_2b8.Object = local_3b8;
      local_2b8.SharedReferenceCount.ReferenceController = pTStack_3b0;
      if (pTStack_3b0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_3b0->SharedReferenceCount =
             (atomic<int>)((int)pTStack_3b0->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_3e0.ObjectIndex = 0;
      local_3e0.ObjectSerialNumber = 0;
      local_388 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_3e0,(FObjectPtr)&local_388);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_3e0,&local_2b8,false);
      MakeContext<FDS_ViewModelContext_ItemBasket>(&local_358);
      pFVar4 = local_358.Object;
      if ((local_358.Object == (FDS_ViewModelContext_ItemBasket *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar4->_padding_ = 0x1c8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      pFVar8 = (FDS_ViewModelContext_NPCShop *)&this->_padding_;
      if (this == (UDS_NpcFunctionShop *)0x0) {
        pFVar8 = pFVar16;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      *(UDS_NpcFunctionShop **)&pFVar4->BasketInterface = this;
      *(FDS_ViewModelContext_NPCShop **)&(pFVar4->BasketInterface).field_0x8 = pFVar8;
      local_380 = this_03;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_03);
      }
      FWeakObjectPtr::operator=(&(pFVar4->BasketWeightModel).WeakPtr,(FObjectPtr)&local_380);
      local_308.Object = (FDS_ViewModelContext *)local_358.Object;
      local_308.SharedReferenceCount.ReferenceController =
           local_358.SharedReferenceCount.ReferenceController;
      if (local_358.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_358.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_358.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_3d8[0].ObjectIndex = 0;
      local_3d8[0].ObjectSerialNumber = 0;
      local_378 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(local_3d8,(FObjectPtr)&local_378);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_3d8[0],&local_308,false);
      SetBasketType(this,BuyBasket);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_358.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_3b0);
      local_170 = 0;
      if (local_178 != (void *)0x0) {
        FMemory::Free(local_178);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_1b8,0,local_1b8._8_4_);
      iVar3 = SUB84(local_1b8._8_8_,4);
      local_1b8._8_8_ = local_1b8._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)local_1b8,0,(int *)(local_1b8 + 0xc));
      }
      local_188 = 0xffffffff;
      local_184 = 0;
      local_190 = 0;
      if (0x80 < local_18c) {
        local_18c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10),0);
      }
      if (local_198 != (void *)0x0) {
        FMemory::Free(local_198);
      }
      if ((FScriptContainerElement *)local_1b8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1b8._0_8_);
      }
      local_1c0 = 0;
      if (local_1c8 != (void *)0x0) {
        FMemory::Free(local_1c8);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_208,0,local_208._8_4_);
      iVar3 = SUB84(local_208._8_8_,4);
      local_208._8_8_ = local_208._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)local_208,0,(int *)(local_208 + 0xc));
      }
      local_1d8 = 0xffffffff;
      local_1d4 = 0;
      local_1e0 = 0;
      if (0x80 < local_1dc) {
        local_1dc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_208 + 0x10),0);
      }
      if (local_1e8 != (void *)0x0) {
        FMemory::Free(local_1e8);
      }
      if ((FScriptContainerElement *)local_208._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_208._0_8_);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar7);
    }
    else {
      pUVar15 = UDS_LogManager::GetInst();
      if (pUVar15 != (UDS_LogManager *)0x0) {
        pUVar15 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_NpcFunctionShop::OpenNpcShopCallback",0x28,Yes);
        UDS_LogManager::PrintLog
                  (pUVar15,1,Warning,local_168.Ptr,0x474,
                   L"NPCShopData.IsValid() == false || NPCSellData.IsValid() == false");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
    }
  }
  return;
}

// OpenPopup_AddBagItemToBasket @ 14bf0d550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionShop::OpenPopup_AddBagItemToBasket
          (UDS_NpcFunctionShop *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  FDS_ItemBaseTableRow *pFVar2;
  bool bVar3;
  EDS_CommonPopupContext EVar4;
  int iVar5;
  int iVar6;
  UDS_ItemData *pUVar7;
  UDS_NPCSellData *pUVar8;
  TArray<FDS_NPCSellGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar9;
  UObject *pUVar10;
  FDS_NPCSellGoodsInfo *pFVar11;
  UDS_GameInstance *pUVar12;
  int *piVar13;
  UDS_CommonPopupManager *this_00;
  UDS_M_CommonPopup *pUVar14;
  FDS_Text *pFVar15;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar16;
  UDS_LogManager *pUVar17;
  FText *pFVar18;
  undefined8 *puVar19;
  ulong64 uVar20;
  int iVar21;
  int iVar22;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_4f8 [32];
  FWeakObjectPtr local_4b8;
  EDS_InventoryType local_4b0 [8];
  EDS_InventoryType local_4a8 [8];
  EDS_InventoryType local_4a0 [8];
  UDS_NpcFunctionShop *local_498;
  undefined4 uStack_490;
  uint uStack_48c;
  int local_488;
  FWeakObjectPtr local_480;
  UDS_CommonPopupManager *local_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  FDS_ItemBaseTableRow *local_468;
  undefined1 local_460 [8];
  FDelegateAllocation local_458;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_448;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_430;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_418;
  FDestructionSentinel local_400;
  FDelegateAllocation *local_3e8;
  code *local_3d8;
  longlong lStack_3d0;
  code *local_3c8;
  longlong lStack_3c0;
  code *local_3b8;
  longlong lStack_3b0;
  code *local_3a8;
  longlong lStack_3a0;
  FText local_398;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_388;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_370;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_358;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_340;
  FDS_Text local_328;
  FDS_Text local_2d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&(this->NPCSellData).WeakPtr);
  if ((bVar3) && (bVar3 = FWeakObjectPtr::IsValid(&local_res10), bVar3)) {
    pUVar7 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res10);
    bVar3 = UDS_ItemData::IsEquipped(pUVar7);
    if (bVar3) {
      local_448._0_8_ = 0;
      local_448._8_8_ = 0;
      local_448._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x4e46,Alert_None_01,&local_448);
    }
    else {
      pUVar7 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res10);
      bVar3 = UDS_ItemData::IsAbleSell(pUVar7);
      if (bVar3) {
        pUVar8 = (UDS_NPCSellData *)FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
        pTVar9 = UDS_NPCSellData::GetNPCSellBasket(pUVar8);
        iVar6 = pTVar9->ArrayNum;
        pUVar10 = FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
        if (*(int *)&pUVar10[3].field_0x10 <= iVar6) {
          pUVar8 = (UDS_NPCSellData *)FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
          pFVar11 = UDS_NPCSellData::GetNPCSellBasketGoodsInfoByItemData
                              (pUVar8,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res10);
          if (pFVar11 == (FDS_NPCSellGoodsInfo *)0x0) {
            local_418._0_8_ = 0;
            local_418._8_8_ = 0;
            local_418._16_4_ = 0;
            UDS_UIMessageManager::OpenMsgByStringUi(0x4e2f,Alert_None_01,&local_418);
            return;
          }
        }
        pUVar10 = FWeakObjectPtr::Get(&local_res10);
        if (pUVar10[0x13].field_0x1c == '\0') {
          pUVar10 = FWeakObjectPtr::Get(&local_res10);
          local_468 = FDS_ItemBaseTableRow::GetRef((longlong)*(int *)&pUVar10[8].field_0x10,true);
          pUVar12 = UDS_GameInstance::GetInst();
          if (pUVar12 != (UDS_GameInstance *)0x0) {
            local_478 = UDS_CommonPopupManager::GetInst();
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_478 != (UDS_CommonPopupManager *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_478);
            }
            iVar6 = 0;
            local_480.ObjectIndex = 0;
            local_480.ObjectSerialNumber = 0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_478 != (UDS_CommonPopupManager *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_478);
            }
            FWeakObjectPtr::operator=(&local_480,(FObjectPtr)&local_478);
            bVar3 = TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr> *)&local_480,
                               (void *)0x0);
            if (bVar3) {
              bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<8092590238255284916>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionShop.cpp"
                                 ,0x2b4,"false");
              if (bVar3) {
code_r0x00014bf0d8a8:
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            else {
              local_498 = (UDS_NpcFunctionShop *)FDS_MoneyBaseTableRow::GetRef(1,true);
              local_4b0[0] = PlayerNormal;
              pUVar10 = FWeakObjectPtr::Get(&local_res10);
              piVar13 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                        ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                  (&pUVar10[10].field_0x18,1,local_4b0);
              iVar22 = *piVar13;
              pUVar7 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res10);
              iVar5 = UDS_ItemData::GetStackCount_UnTradable(pUVar7,PlayerNormal);
              local_488 = 0;
              pUVar8 = (UDS_NPCSellData *)FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
              pFVar11 = UDS_NPCSellData::GetNPCSellBasketGoodsInfoByItemData
                                  (pUVar8,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res10);
              iVar21 = iVar6;
              if (pFVar11 != (FDS_NPCSellGoodsInfo *)0x0) {
                iVar6 = pFVar11->SellCount_Tradable;
                iVar21 = pFVar11->SellCount_UnTradable;
                local_488 = iVar6;
              }
              if (iVar6 + iVar21 < iVar5 + iVar22) {
                this_00 = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&local_480);
                UDS_CommonPopupManager::CreateCommonPopup(this_00);
                bVar3 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                                  ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_4b8,
                                   (void *)0x0);
                if (bVar3) {
                  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<8092590238255284942>,false,
                                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionShop.cpp"
                                     ,0x2ce,"false");
                  if (bVar3) goto code_r0x00014bf0d8a8;
                }
                else {
                  pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4b8);
                  pFVar15 = FDS_Text::FromStringTable(&local_328,StringUi,0x4e4c);
                  UDS_M_CommonPopup::SetTitle(pUVar14,pFVar15);
                  pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4b8);
                  pFVar2 = local_468;
                  local_478 = (UDS_CommonPopupManager *)&local_468->ID_Name;
                  pFVar15 = FDS_Text::FromStringID(&local_2d8,(FDS_StringItemID *)local_478);
                  UDS_M_CommonPopup::SetMainContent(pUVar14,pFVar15);
                  pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4b8);
                  UDS_M_CommonPopup::SetAsset
                            (pUVar14,Asset01,*(int *)&local_498->_padding_,pFVar2->SellPrice,0,false
                            );
                  pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4b8);
                  UDS_M_CommonPopup::SetButton(pUVar14,ButtonCancel,StringUi,0x66,false);
                  pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4b8);
                  UDS_M_CommonPopup::SetButton(pUVar14,ButtonConfirm,StringUi,0x65,false);
                  pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4b8);
                  uStack_490 = 0;
                  local_498 = (UDS_NpcFunctionShop *)Response_Cancel;
                  lStack_3d0 = (ulonglong)uStack_48c << 0x20;
                  local_3d8 = Response_Cancel;
                  pTVar16 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                            ::CreateUObject<UDS_NpcFunctionShop>
                                      (&local_388,this,(pmf_f0ad2748 *)&local_3d8);
                  UDS_M_CommonPopup::SetDelegate(pUVar14,ButtonCancel,pTVar16);
                  pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4b8);
                  uStack_490 = 0;
                  local_498 = (UDS_NpcFunctionShop *)Response_AddBagItemToBasket;
                  lStack_3c0 = (ulonglong)uStack_48c << 0x20;
                  local_3c8 = Response_AddBagItemToBasket;
                  pTVar16 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                            ::
                            CreateUObject<UDS_NpcFunctionShop,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_&>
                                      (&local_370,this,(pmf_2e828d3a *)&local_3c8,
                                       (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_res10);
                  UDS_M_CommonPopup::SetDelegate(pUVar14,ButtonConfirm,pTVar16);
                  pUVar7 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res10);
                  iVar6 = UDS_ItemData::GetStackCount_UnTradable(pUVar7,PlayerNormal);
                  if (0 < iVar6) {
                    pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4b8);
                    pUVar7 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res10);
                    iVar6 = UDS_ItemData::GetStackCount_UnTradable(pUVar7,PlayerNormal);
                    pUVar10 = FWeakObjectPtr::Get(&local_res10);
                    UDS_M_CommonPopup::SetItemSlot
                              (pUVar14,ItemSlot01,*(int *)&pUVar10[8].field_0x10,iVar5,iVar5,iVar6,
                               CommonPopup);
                    pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4b8);
                    uStack_490 = 0;
                    local_498 = (UDS_NpcFunctionShop *)OnSelectItemSlotUnTradable;
                    lStack_3b0 = (ulonglong)uStack_48c << 0x20;
                    local_3b8 = OnSelectItemSlotUnTradable;
                    pTVar16 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                              ::
                              CreateUObject<UDS_NpcFunctionShop,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_&>
                                        (&local_358,this,(pmf_2e828d3a *)&local_3b8,
                                         (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_res10
                                        );
                    UDS_M_CommonPopup::SetDelegate(pUVar14,ItemSlot01,pTVar16);
                    pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4b8);
                    UDS_M_CommonPopup::SetSelectedItemSlotType(pUVar14,ItemSlot01);
                  }
                  local_4a8[0] = PlayerNormal;
                  pUVar10 = FWeakObjectPtr::Get(&local_res10);
                  piVar13 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                            ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                      (&pUVar10[10].field_0x18,1,local_4a8);
                  if (0 < *piVar13) {
                    pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4b8);
                    local_4a0[0] = PlayerNormal;
                    pUVar10 = FWeakObjectPtr::Get(&local_res10);
                    piVar13 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                              ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                        (&pUVar10[10].field_0x18,1,local_4a0);
                    iVar6 = *piVar13;
                    pUVar10 = FWeakObjectPtr::Get(&local_res10);
                    UDS_M_CommonPopup::SetItemSlot
                              (pUVar14,ItemSlot02,*(int *)&pUVar10[8].field_0x10,iVar22,iVar22,iVar6
                               ,CommonPopup);
                    pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4b8);
                    uStack_490 = 0;
                    local_498 = (UDS_NpcFunctionShop *)OnSelectItemSlotTradable;
                    lStack_3a0 = (ulonglong)uStack_48c << 0x20;
                    local_3a8 = OnSelectItemSlotTradable;
                    pTVar16 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                              ::
                              CreateUObject<UDS_NpcFunctionShop,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_&>
                                        (&local_340,this,(pmf_2e828d3a *)&local_3a8,
                                         (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_res10
                                        );
                    UDS_M_CommonPopup::SetDelegate(pUVar14,ItemSlot02,pTVar16);
                    pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4b8);
                    EVar4 = UDS_M_CommonPopup::GetSelectedItemSlotPopupContext(pUVar14);
                    if (EVar4 == None) {
                      pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4b8);
                      UDS_M_CommonPopup::SetSelectedItemSlotType(pUVar14,ItemSlot02);
                    }
                  }
                  pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4b8);
                  EVar4 = UDS_M_CommonPopup::GetSelectedItemSlotPopupContext(pUVar14);
                  if (EVar4 == ItemSlot01) {
                    iVar22 = iVar5 - iVar21;
                  }
                  else {
                    if (EVar4 != ItemSlot02) {
                      pUVar17 = UDS_LogManager::GetInst();
                      if (pUVar17 == (UDS_LogManager *)0x0) {
                        return;
                      }
                      pUVar17 = UDS_LogManager::GetInst();
                      local_288._padding_ = 0;
                      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                                (&local_288,"UDS_NpcFunctionShop::OpenPopup_AddBagItemToBasket",0x31
                                 ,Yes);
                      UDS_LogManager::PrintLog
                                (pUVar17,1,Warning,local_288.Ptr,0x2ff,
                                 L"commonPopupModel->GetSelectedItemSlotPopupContext() - Invalid");
                      if ((void *)local_288._padding_ == (void *)0x0) {
                        return;
                      }
                      FMemory::Free((void *)local_288._padding_);
                      return;
                    }
                    iVar22 = iVar22 - local_488;
                  }
                  pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4b8);
                  pFVar18 = FDS_StringIDWrapper::Text((FDS_StringIDWrapper *)local_478,&local_398);
                  UDS_M_CommonPopup::SetSlider(pUVar14,1,iVar22,1,pFVar18,1);
                  pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4b8);
                  uStack_46c = local_398._12_4_;
                  uStack_470 = 0;
                  local_478 = (UDS_CommonPopupManager *)OnQuantitySliderValueChangedEvent;
                  local_460 = (undefined1  [8])0x0;
                  local_458.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
                  local_458.DelegateSize = 0;
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_460,
                             (FWriteAccessScope *)&local_400);
                  local_3e8 = &local_458;
                  puVar19 = UE::Core::Private::DelegateAllocate(0x30,&local_458);
                  if (puVar19 != (undefined8 *)0x0) {
                    *puVar19 = &
                               ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__H__6B_
                    ;
                    *(int *)(puVar19 + 1) = local_468->SellPrice;
                    uVar20 = FDelegateHandle::GenerateNewID();
                    puVar19[2] = uVar20;
                    *puVar19 = &
                               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionShop____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__H__6B_
                    ;
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (this != (UDS_NpcFunctionShop *)0x0)) {
                      UE::GC::MarkAsReachable((UObject *)this);
                    }
                    puVar19[3] = 0;
                    local_498 = this;
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (this != (UDS_NpcFunctionShop *)0x0)) {
                      UE::GC::MarkAsReachable((UObject *)this);
                    }
                    FWeakObjectPtr::operator=
                              ((FWeakObjectPtr *)(puVar19 + 3),(FObjectPtr)&local_498);
                    puVar19[4] = local_478;
                    puVar19[5] = CONCAT44(uStack_46c,uStack_470);
                  }
                  if (local_400.bDestroyed == false) {
                    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_400.Accessor,&local_400);
                  }
                  UDS_M_CommonPopup::SetDelegate
                            (pUVar14,Slider,
                             (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                              *)local_460);
                  pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4b8);
                  UDS_M_CommonPopup::OpenCommonPopup(pUVar14);
                }
              }
            }
          }
        }
        else {
          OnAddBagItemToBasket(this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res10,1);
        }
      }
      else {
        local_430._0_8_ = 0;
        local_430._8_8_ = 0;
        local_430._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x4e41,Alert_None_01,&local_430);
      }
    }
  }
  else {
    pUVar17 = UDS_LogManager::GetInst();
    if (pUVar17 != (UDS_LogManager *)0x0) {
      pUVar17 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_NpcFunctionShop::OpenPopup_AddBagItemToBasket",0x31,Yes);
      UDS_LogManager::PrintLog
                (pUVar17,1,Warning,local_168.Ptr,0x28a,
                 L"NPCSellData.IsValid() == false || InItemData.IsValid() == false");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  return;
}

// OpenPopup_AddNpcItemToBasket @ 14bf0de70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionShop::OpenPopup_AddNpcItemToBasket(UDS_NpcFunctionShop *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EDS_NPCShopResult EVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UDS_NPCShopData *pUVar7;
  FDS_NPCShopGoodsInfo *this_00;
  FDS_NPCShopGoodsInfo *pFVar8;
  FDS_ItemBaseTableRow *pFVar9;
  TArray<FDS_NPCShopGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar10;
  UObject *pUVar11;
  UDS_CommonPopupManager *this_01;
  UDS_M_CommonPopup *pUVar12;
  FDS_Text *pFVar13;
  FDS_StringItemTableRow *pFVar14;
  FText *pFVar15;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar16;
  undefined1 auStackY_538 [32];
  FWeakObjectPtr local_4f8 [2];
  FDS_ItemBaseTableRow *local_4e8;
  undefined8 uStack_4e0;
  int local_4d8 [4];
  code *local_4c8;
  undefined4 uStack_4c0;
  uint uStack_4bc;
  code *local_4b8;
  longlong lStack_4b0;
  FText local_4a8;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_498;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_480;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_468;
  FDS_Text local_450;
  FDS_Text local_400;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_538;
  local_4d8[0] = param_1;
  if (param_1 == 0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,"UDS_NpcFunctionShop::OpenPopup_AddNpcItemToBasket",0x31,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_3a8.Ptr,0x233,L"InShopListTID == 0");
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
    }
  }
  else {
    pUVar7 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
    this_00 = UDS_NPCShopData::GetNPCShopGoodsInfo(pUVar7,param_1);
    if (this_00 == (FDS_NPCShopGoodsInfo *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_288._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_288,"UDS_NpcFunctionShop::OpenPopup_AddNpcItemToBasket",0x31,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_288.Ptr,0x23a,L"npcShopGoodsInfo == nullptr");
        if ((void *)local_288._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_288._padding_);
        }
      }
    }
    else {
      pUVar7 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
      pFVar8 = UDS_NPCShopData::GetNPCShopBasketGoodsInfo(pUVar7,param_1);
      pFVar9 = FDS_ItemBaseTableRow::GetRef((longlong)this_00->ItemTID,true);
      local_4e8 = pFVar9;
      pUVar7 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
      pTVar10 = UDS_NPCShopData::GetNPCShopBasket(pUVar7);
      iVar1 = pTVar10->ArrayNum;
      pUVar11 = FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
      if (iVar1 < *(int *)(pUVar11 + 6)) {
        if (pFVar9->StackCount == 1) {
          OnAddNpcItemToBasket(this,param_1,1);
          return;
        }
      }
      else if ((pFVar8 == (FDS_NPCShopGoodsInfo *)0x0) || (pFVar9->StackCount == 1)) {
        FDS_ItemShopService::OnNPCShopResult(NotEnoughBasket);
        return;
      }
      iVar1 = this_00->ItemValue;
      pUVar7 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
      EVar4 = UDS_NPCShopData::CheckAddNPCShopBasket(pUVar7,param_1,iVar1);
      if (EVar4 == Succes) {
        this_01 = UDS_CommonPopupManager::GetInst();
        if (this_01 == (UDS_CommonPopupManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 != (UDS_LogManager *)0x0) {
            pUVar6 = UDS_LogManager::GetInst();
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"UDS_NpcFunctionShop::OpenPopup_AddNpcItemToBasket",0x31,Yes);
            UDS_LogManager::PrintLog
                      (pUVar6,1,Warning,local_168.Ptr,0x262,L"commonPopupManager == nullptr");
            if ((void *)local_168._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_168._padding_);
            }
          }
        }
        else {
          UDS_CommonPopupManager::CreateCommonPopup(this_01);
          bVar3 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)local_4f8,
                             (void *)0x0);
          if (bVar3) {
            bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<8092590238255284841>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionShop.cpp"
                               ,0x269,"false");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          else {
            pUVar7 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
            iVar5 = UDS_NPCShopData::GetAvailableBuyQuantity(pUVar7,param_1);
            if (1 < iVar1) {
              iVar5 = iVar5 - iVar5 % iVar1;
            }
            if (pFVar8 != (FDS_NPCShopGoodsInfo *)0x0) {
              iVar5 = iVar5 - pFVar8->Quantity;
            }
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_4f8);
            pFVar13 = FDS_Text::FromStringTable(&local_450,StringUi,0x4e4c);
            UDS_M_CommonPopup::SetTitle(pUVar12,pFVar13);
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_4f8);
            pFVar9 = local_4e8;
            pFVar13 = FDS_Text::FromStringID(&local_400,&local_4e8->ID_Name);
            UDS_M_CommonPopup::SetMainContent(pUVar12,pFVar13);
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_4f8);
            pFVar14 = FDS_ItemBaseTableRow::ID_NameTable(pFVar9);
            pFVar15 = FText::FromString(&local_4a8,&pFVar14->Text);
            UDS_M_CommonPopup::SetSlider(pUVar12,iVar1,iVar5,iVar1,pFVar15,iVar1);
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_4f8);
            UDS_M_CommonPopup::SetButton(pUVar12,ButtonCancel,StringUi,0x66,false);
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_4f8);
            UDS_M_CommonPopup::SetButton(pUVar12,ButtonConfirm,StringUi,0x65,false);
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_4f8);
            UDS_M_CommonPopup::SetItemSlot
                      (pUVar12,ItemSlot01,this_00->ItemTID,iVar1,iVar5,this_00->ItemValue,
                       CommonPopup);
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_4f8);
            iVar1 = this_00->BuyPrice;
            iVar5 = FDS_NPCShopGoodsInfo::GetItemCostIconID(this_00);
            UDS_M_CommonPopup::SetAsset(pUVar12,Asset01,iVar5,iVar1,0,false);
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_4f8);
            uStack_4e0._0_4_ = 0;
            local_4e8 = (FDS_ItemBaseTableRow *)Response_Cancel;
            pTVar16 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                      ::CreateUObject<UDS_NpcFunctionShop>
                                (&local_498,this,(pmf_f0ad2748 *)&local_4e8);
            UDS_M_CommonPopup::SetDelegate(pUVar12,ButtonCancel,pTVar16);
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_4f8);
            uStack_4e0._0_4_ = 0;
            local_4e8 = (FDS_ItemBaseTableRow *)Response_AddNpcItemToBasket;
            local_4c8 = Response_AddNpcItemToBasket;
            uStack_4c0 = 0;
            uStack_4bc = uStack_4e0._4_4_;
            pTVar16 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                      ::CreateUObject<UDS_NpcFunctionShop,int_&>
                                (&local_480,this,(pmf_b1d8d062 *)&local_4c8,local_4d8);
            UDS_M_CommonPopup::SetDelegate(pUVar12,ButtonConfirm,pTVar16);
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_4f8);
            uStack_4e0 = (ulonglong)uStack_4e0._4_4_ << 0x20;
            local_4e8 = (FDS_ItemBaseTableRow *)OnQuantitySliderValueChangedEvent;
            local_4b8 = OnQuantitySliderValueChangedEvent;
            lStack_4b0 = uStack_4e0;
            pTVar16 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                      ::CreateUObject<UDS_NpcFunctionShop,int_&>
                                (&local_468,this,(pmf_b1d8d062 *)&local_4b8,&this_00->BuyPrice);
            UDS_M_CommonPopup::SetDelegate(pUVar12,Slider,pTVar16);
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_4f8);
            UDS_M_CommonPopup::OpenCommonPopup(pUVar12);
          }
        }
      }
      else {
        FDS_ItemShopService::OnNPCShopResult(EVar4);
      }
    }
  }
  return;
}

// OpenPopup_NotEnoughInventorySpace @ 14bf0e420

void __thiscall UDS_NpcFunctionShop::OpenPopup_NotEnoughInventorySpace(UDS_NpcFunctionShop *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_GameInstance *pUVar3;
  UDS_CommonPopupManager *this_00;
  UDS_M_CommonPopup *pUVar4;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar5;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UDS_CommonPopupManager *local_res20;
  code *local_e8;
  undefined8 uStack_e0;
  FDS_Text local_d8;
  FDS_Text local_88;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_38;
  
  pUVar3 = UDS_GameInstance::GetInst();
  if (pUVar3 != (UDS_GameInstance *)0x0) {
    local_res20 = UDS_CommonPopupManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res20 != (UDS_CommonPopupManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res20 != (UDS_CommonPopupManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    bVar2 = TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr> *)&local_res18,
                       (void *)0x0);
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8092590238255285425>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionShop.cpp"
                         ,0x4b1,"false");
      if (bVar2) {
code_r0x00014bf0e532:
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      this_00 = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&local_res18);
      UDS_CommonPopupManager::CreateCommonPopup(this_00);
      bVar2 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_res10,
                         (void *)0x0);
      if (bVar2) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8092590238255285432>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionShop.cpp"
                           ,0x4b8,"false");
        if (bVar2) goto code_r0x00014bf0e532;
      }
      else {
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        local_d8.StringTableType = None;
        local_d8.StringTableID = 0;
        local_d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_d8.StringEnumTableNameID.Number = 0;
        local_d8.TimeExpressionType = None;
        local_d8.DateTime.Ticks = 0;
        local_d8.TimeSpan.Ticks = 0;
        local_d8.IsExpression = false;
        local_d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.UniqueString.Data.ArrayNum = 0;
        local_d8.UniqueString.Data.ArrayMax = 0;
        local_d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.FormatArgs.ArrayNum = 0;
        local_d8.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringTable(&local_d8,StringUi,4);
        UDS_M_CommonPopup::SetTitle(pUVar4,&local_d8);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        local_88.StringTableType = None;
        local_88.StringTableID = 0;
        local_88.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_88.StringEnumTableNameID.Number = 0;
        local_88.TimeExpressionType = None;
        local_88.DateTime.Ticks = 0;
        local_88.TimeSpan.Ticks = 0;
        local_88.IsExpression = false;
        local_88.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.UniqueString.Data.ArrayNum = 0;
        local_88.UniqueString.Data.ArrayMax = 0;
        local_88.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.FormatArgs.ArrayNum = 0;
        local_88.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringTable(&local_88,StringUi,0x4e25);
        UDS_M_CommonPopup::SetMainContent(pUVar4,&local_88);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        UDS_M_CommonPopup::SetButton(pUVar4,ButtonConfirm,StringUi,0x65,false);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        uStack_e0 = (ulonglong)uStack_e0._4_4_ << 0x20;
        local_e8 = Response_Cancel;
        pTVar5 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_NpcFunctionShop>(&local_38,this,(pmf_f0ad2748 *)&local_e8);
        UDS_M_CommonPopup::SetDelegate(pUVar4,ButtonConfirm,pTVar5);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar4);
      }
    }
  }
  return;
}

// OpenPopup_NotEnoughMoney @ 14bf0e690

void __thiscall UDS_NpcFunctionShop::OpenPopup_NotEnoughMoney(UDS_NpcFunctionShop *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_GameInstance *pUVar3;
  UDS_CommonPopupManager *this_00;
  UDS_M_CommonPopup *pUVar4;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar5;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UDS_CommonPopupManager *local_res20;
  code *local_118;
  undefined8 uStack_110;
  FDS_Text local_108;
  FDS_Text local_b8;
  code *local_68;
  longlong lStack_60;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_58;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_40;
  
  pUVar3 = UDS_GameInstance::GetInst();
  if (pUVar3 != (UDS_GameInstance *)0x0) {
    local_res20 = UDS_CommonPopupManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res20 != (UDS_CommonPopupManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res20 != (UDS_CommonPopupManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    bVar2 = TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr> *)&local_res18,
                       (void *)0x0);
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8092590238255285454>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionShop.cpp"
                         ,0x4ce,"false");
      if (bVar2) {
code_r0x00014bf0e7a3:
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      this_00 = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&local_res18);
      UDS_CommonPopupManager::CreateCommonPopup(this_00);
      bVar2 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_res10,
                         (void *)0x0);
      if (bVar2) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8092590238255285461>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionShop.cpp"
                           ,0x4d5,"false");
        if (bVar2) goto code_r0x00014bf0e7a3;
      }
      else {
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        local_108.StringTableType = None;
        local_108.StringTableID = 0;
        local_108.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_108.StringEnumTableNameID.Number = 0;
        local_108.TimeExpressionType = None;
        local_108.DateTime.Ticks = 0;
        local_108.TimeSpan.Ticks = 0;
        local_108.IsExpression = false;
        local_108.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.UniqueString.Data.ArrayNum = 0;
        local_108.UniqueString.Data.ArrayMax = 0;
        local_108.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.FormatArgs.ArrayNum = 0;
        local_108.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringTable(&local_108,StringUi,4);
        UDS_M_CommonPopup::SetTitle(pUVar4,&local_108);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        local_b8.StringTableType = None;
        local_b8.StringTableID = 0;
        local_b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_b8.StringEnumTableNameID.Number = 0;
        local_b8.TimeExpressionType = None;
        local_b8.DateTime.Ticks = 0;
        local_b8.TimeSpan.Ticks = 0;
        local_b8.IsExpression = false;
        local_b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.UniqueString.Data.ArrayNum = 0;
        local_b8.UniqueString.Data.ArrayMax = 0;
        local_b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.FormatArgs.ArrayNum = 0;
        local_b8.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringTable(&local_b8,StringUi,0x4e24);
        UDS_M_CommonPopup::SetMainContent(pUVar4,&local_b8);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        UDS_M_CommonPopup::SetButton(pUVar4,ButtonCancel,StringUi,0x66,false);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        UDS_M_CommonPopup::SetButton(pUVar4,ButtonConfirm,StringUi,0x4e55,false);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        uStack_110._0_4_ = 0;
        local_118 = Response_Cancel;
        pTVar5 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_NpcFunctionShop>(&local_58,this,(pmf_f0ad2748 *)&local_118);
        UDS_M_CommonPopup::SetDelegate(pUVar4,ButtonCancel,pTVar5);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        local_118 = Response_Cancel;
        uStack_110 = (ulonglong)uStack_110._4_4_ << 0x20;
        local_68 = Response_Cancel;
        lStack_60 = uStack_110;
        pTVar5 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_NpcFunctionShop>(&local_40,this,(pmf_f0ad2748 *)&local_68);
        UDS_M_CommonPopup::SetDelegate(pUVar4,ButtonConfirm,pTVar5);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar4);
      }
    }
  }
  return;
}

// Request_AddBagItemToBasket @ 14bf10670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionShop::Request_AddBagItemToBasket
          (UDS_NpcFunctionShop *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,
          bool param_2)

{
  code *pcVar1;
  ForElementType<TAlignedBytes<16,16>_> FVar2;
  int iVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UDS_NPCShopData *this_00;
  TArray<FDS_NPCShopGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar7;
  UObject *pUVar8;
  UDS_GameInstance *pUVar9;
  UDS_CommonPopupManager *this_01;
  undefined8 *puVar10;
  ulong64 uVar11;
  UDS_M_CommonPopup *pUVar12;
  FDS_Text *pFVar13;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar14;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar15;
  void *pvVar16;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_5a8 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_578;
  ForAnyElementType local_570;
  int local_568;
  FWeakObjectPtr local_560;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_558;
  FDelegateAllocation local_550;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_540;
  FDelegateAllocation local_538;
  UDS_NpcFunctionShop *local_528;
  undefined4 uStack_520;
  uint uStack_51c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_518;
  ForAnyElementType local_510;
  int local_508;
  FWeakObjectPtr local_500;
  UDS_M_CommonPopup *local_4f8 [2];
  UDS_NpcFunctionShop *local_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  code *local_4d8;
  undefined8 uStack_4d0;
  undefined1 local_4c8 [8];
  FDelegateAllocation local_4c0;
  UDS_CommonPopupManager *local_4b0;
  FDestructionSentinel local_4a8;
  FDestructionSentinel local_490;
  FDestructionSentinel local_478;
  FDestructionSentinel local_460;
  FDestructionSentinel local_448;
  FDestructionSentinel local_430;
  FDestructionSentinel local_418;
  FDestructionSentinel local_400;
  FDestructionSentinel local_3e8;
  FDestructionSentinel local_3d0;
  FDestructionSentinel local_3b8;
  FDelegateAllocation *local_3a0;
  FDestructionSentinel local_398;
  FDelegateAllocation *local_380;
  FDestructionSentinel local_378;
  FDelegateAllocation *local_360;
  FReadAccessScope local_358;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_340;
  FDS_Text local_328;
  FDS_Text local_2d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  local_res10 = param_1.WeakPtr;
  bVar5 = FWeakObjectPtr::IsValid(&(this->NPCSellData).WeakPtr);
  if ((!bVar5) || (bVar5 = FWeakObjectPtr::IsValid(&local_res10), !bVar5)) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_NpcFunctionShop::Request_AddBagItemToBasket",0x2f,Yes);
    UDS_LogManager::PrintLog
              (pUVar6,1,Warning,local_168.Ptr,0x3ca,
               L"NPCSellData.IsValid() == false || InItemData.IsValid() == false");
    pvVar16 = (void *)local_168._padding_;
LAB_14bf1113e:
    if (pvVar16 != (void *)0x0) {
      FMemory::Free(pvVar16);
    }
    return;
  }
  bVar5 = TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr>::UEOpEquals(&this->NPCShopData,(void *)0x0)
  ;
  if (bVar5) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_288._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_288,"UDS_NpcFunctionShop::Request_AddBagItemToBasket",0x2f,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_288.Ptr,0x3d0,L"NPCShopData is nullptr.");
    pvVar16 = (void *)local_288._padding_;
    goto LAB_14bf1113e;
  }
  this_00 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
  pTVar7 = UDS_NPCShopData::GetNPCShopBasket(this_00);
  if (pTVar7->ArrayNum == 0) {
    SetBasketType(this,SellBasket);
    if ((param_2) && (pUVar8 = FWeakObjectPtr::Get(&local_res10), pUVar8[0x13].field_0x1c == '\0'))
    {
      OpenPopup_AddBagItemToBasket(this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res10);
      return;
    }
    OnAddBagItemToBasket(this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res10,1);
    return;
  }
  pUVar9 = UDS_GameInstance::GetInst();
  if (pUVar9 == (UDS_GameInstance *)0x0) {
    return;
  }
  local_4b0 = UDS_CommonPopupManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_4b0 != (UDS_CommonPopupManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_4b0);
  }
  local_500.ObjectIndex = 0;
  local_500.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_4b0 != (UDS_CommonPopupManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_4b0);
  }
  FWeakObjectPtr::operator=(&local_500,(FObjectPtr)&local_4b0);
  bVar5 = TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr> *)&local_500,(void *)0x0
                    );
  if (bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8092590238255285229>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionShop.cpp"
                       ,0x3ed,"false");
    if (!bVar5) {
      return;
    }
code_r0x00014bf108ad:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_01 = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&local_500);
  UDS_CommonPopupManager::CreateCommonPopup(this_01);
  bVar5 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_560,(void *)0x0);
  if (bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8092590238255285236>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionShop.cpp"
                       ,0x3f4,"false");
    if (!bVar5) {
      return;
    }
    goto code_r0x00014bf108ad;
  }
  local_578.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_570.Data = (FScriptContainerElement *)0x0;
  local_568 = 0;
  uStack_520 = 0;
  if (!param_2) {
    local_540.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_528 = (UDS_NpcFunctionShop *)OnAddBagItemToBasket;
    uStack_51c = uStack_4d0._4_4_;
    local_538.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_538.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_540,(FWriteAccessScope *)&local_398);
    local_380 = &local_538;
    puVar10 = UE::Core::Private::DelegateAllocate(0x38,&local_538);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr____H__6B_
      ;
      *(FWeakObjectPtr *)(puVar10 + 1) = local_res10;
      *(undefined4 *)(puVar10 + 2) = 1;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[3] = uVar11;
      *puVar10 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionShop____A6AXXZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr____H__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_NpcFunctionShop *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar10[4] = 0;
      local_4f8[0] = (UDS_M_CommonPopup *)this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_NpcFunctionShop *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 4),(FObjectPtr)local_4f8);
      puVar10[5] = local_528;
      puVar10[6] = CONCAT44(uStack_51c,uStack_520);
    }
    if (local_398.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_398.Accessor,&local_398);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_540,(FWriteAccessScope *)&local_460);
    iVar3 = local_538.DelegateSize;
    FVar2 = local_538.DelegateAllocator;
    local_538.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_538.DelegateSize = 0;
    if (local_460.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_460.Accessor,&local_460);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_578,(FWriteAccessScope *)&local_448);
    if (local_568 == 0) {
LAB_14bf10c19:
      if (local_570.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_570.Data);
      }
    }
    else if (local_570.Data != (FScriptContainerElement *)0x0) {
      (*(code *)**(undefined8 **)local_570.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_570,0,0,0x10);
      local_568 = 0;
      goto LAB_14bf10c19;
    }
    local_570.Data = (FScriptContainerElement *)FVar2;
    local_568 = iVar3;
    if (local_448.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_448.Accessor,&local_448);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_540,(FWriteAccessScope *)&local_430);
    if ((local_538.DelegateSize != 0) &&
       (local_538.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_538.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_538,0,0,0x10);
      local_538.DelegateSize = 0;
    }
    if (local_430.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_430.Accessor,&local_430);
    }
    if (local_538.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_538.DelegateAllocator);
    }
    pTVar15 = &local_540;
    goto LAB_14bf10cb0;
  }
  local_558.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_528 = (UDS_NpcFunctionShop *)OpenPopup_AddBagItemToBasket;
  uStack_51c = uStack_4d0._4_4_;
  local_550.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_550.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_558,(FWriteAccessScope *)&local_3b8);
  local_3a0 = &local_550;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_550);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr______6B_
    ;
    *(FWeakObjectPtr *)(puVar10 + 1) = local_res10;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionShop____A6AXXZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr______6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_NpcFunctionShop *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_4e8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_NpcFunctionShop *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_4e8);
    puVar10[4] = local_528;
    puVar10[5] = CONCAT44(uStack_51c,uStack_520);
  }
  if (local_3b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3b8.Accessor,&local_3b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_558,(FWriteAccessScope *)&local_4a8);
  iVar3 = local_550.DelegateSize;
  FVar2 = local_550.DelegateAllocator;
  local_550.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_550.DelegateSize = 0;
  if (local_4a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a8.Accessor,&local_4a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_578,(FWriteAccessScope *)&local_490);
  if (local_568 == 0) {
LAB_14bf10a25:
    if (local_570.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_570.Data);
    }
  }
  else if (local_570.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_570.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_570,0,0,0x10);
    local_568 = 0;
    goto LAB_14bf10a25;
  }
  local_570.Data = (FScriptContainerElement *)FVar2;
  local_568 = iVar3;
  if (local_490.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_490.Accessor,&local_490);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_558,(FWriteAccessScope *)&local_478);
  if ((local_550.DelegateSize != 0) &&
     (local_550.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_550.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_550,0,0,0x10);
    local_550.DelegateSize = 0;
  }
  if (local_478.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_478.Accessor,&local_478);
  }
  if (local_550.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_550.DelegateAllocator);
  }
  pTVar15 = &local_558;
LAB_14bf10cb0:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&pTVar15->AccessDetector);
  pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_560);
  pFVar13 = FDS_Text::FromStringTable(&local_328,StringUi,4);
  UDS_M_CommonPopup::SetTitle(pUVar12,pFVar13);
  pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_560);
  pFVar13 = FDS_Text::FromStringTable(&local_2d8,StringUi,0x4e54);
  UDS_M_CommonPopup::SetMainContent(pUVar12,pFVar13);
  pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_560);
  UDS_M_CommonPopup::SetButton(pUVar12,ButtonCancel,StringUi,0x66,false);
  pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_560);
  UDS_M_CommonPopup::SetButton(pUVar12,ButtonConfirm,StringUi,0x65,false);
  pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_560);
  uStack_520 = 0;
  local_528 = (UDS_NpcFunctionShop *)Response_Cancel;
  uStack_4d0 = (ulonglong)uStack_51c << 0x20;
  local_4d8 = Response_Cancel;
  pTVar14 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
            ::CreateUObject<UDS_NpcFunctionShop>(&local_340,this,(pmf_f0ad2748 *)&local_4d8);
  UDS_M_CommonPopup::SetDelegate(pUVar12,ButtonCancel,pTVar14);
  pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_560);
  uStack_4dc = uStack_4d0._4_4_;
  local_4e8 = (UDS_NpcFunctionShop *)Response_ChangeBasketType;
  uStack_4e0 = 0;
  local_4c8 = (undefined1  [8])0x0;
  local_4c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_4c0.DelegateSize = 0;
  local_4f8[0] = pUVar12;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4c8,
             (FWriteAccessScope *)&local_378);
  local_360 = &local_4c0;
  puVar10 = UE::Core::Private::DelegateAllocate(0x48,&local_4c0);
  if (puVar10 != (undefined8 *)0x0) {
    pTVar15 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar10 + 2);
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__W4EDS_ItemBasketType__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    *(undefined4 *)(puVar10 + 1) = 2;
    (pTVar15->AccessDetector).State = (atomic<unsigned___int64>)0x0;
    puVar10[3] = 0;
    *(undefined4 *)(puVar10 + 4) = 0;
    if (&local_578 != pTVar15) {
      local_518.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_510.Data = (FScriptContainerElement *)0x0;
      local_508 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_578,&local_358);
      if ((local_568 != 0) &&
         ((ForElementType<TAlignedBytes<16,16>_>)local_570.Data !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (**(code **)(*(longlong *)local_570.Data + 0x50))(local_570.Data,&local_518);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_358);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_518,(FWriteAccessScope *)&local_418);
      iVar3 = local_508;
      FVar4.Data = local_510.Data;
      local_510.Data = (FScriptContainerElement *)0x0;
      local_508 = 0;
      if (local_418.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_418.Accessor,&local_418);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (pTVar15,(FWriteAccessScope *)&local_400);
      if ((*(int *)(puVar10 + 4) != 0) && ((undefined8 *)puVar10[3] != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)puVar10[3])();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)(puVar10 + 3),0,0,0x10);
        *(undefined4 *)(puVar10 + 4) = 0;
      }
      if ((void *)puVar10[3] != (void *)0x0) {
        FMemory::Free((void *)puVar10[3]);
      }
      puVar10[3] = FVar4.Data;
      *(int *)(puVar10 + 4) = iVar3;
      if (local_400.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_400.Accessor,&local_400);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_518,(FWriteAccessScope *)&local_3e8);
      if ((local_508 != 0) && (local_510.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_510.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_510,0,0,0x10);
        local_508 = 0;
      }
      if (local_3e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e8.Accessor,&local_3e8);
      }
      if (local_510.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_510.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_518.AccessDetector);
    }
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[5] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionShop____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__W4EDS_ItemBasketType__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_NpcFunctionShop *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[6] = 0;
    local_528 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_NpcFunctionShop *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 6),(FObjectPtr)&local_528);
    puVar10[7] = local_4e8;
    puVar10[8] = CONCAT44(uStack_4dc,uStack_4e0);
    pUVar12 = local_4f8[0];
  }
  if (local_378.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_378.Accessor,&local_378);
  }
  UDS_M_CommonPopup::SetDelegate
            (pUVar12,ButtonConfirm,
             (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_4c8);
  pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_560);
  UDS_M_CommonPopup::OpenCommonPopup(pUVar12);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_578,(FWriteAccessScope *)&local_3d0);
  if ((local_568 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)local_570.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_570.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_570,0,0,0x10);
    local_568 = 0;
  }
  if (local_3d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d0.Accessor,&local_3d0);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)local_570.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(local_570.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_578.AccessDetector);
  return;
}

// Request_AddNpcItemToBasket @ 14bf11170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionShop::Request_AddNpcItemToBasket(UDS_NpcFunctionShop *this,int param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  ForElementType<TAlignedBytes<16,16>_> FVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UDS_NPCShopData *this_00;
  FDS_NPCShopGoodsInfo *pFVar7;
  UDS_NPCSellData *this_01;
  TArray<FDS_NPCSellGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar8;
  UDS_CommonPopupManager *this_02;
  undefined8 *puVar9;
  ulong64 uVar10;
  UDS_M_CommonPopup *pUVar11;
  FDS_Text *pFVar12;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar13;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar14;
  undefined1 auStackY_7d8 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_7a8;
  ForAnyElementType local_7a0;
  int local_798;
  FWeakObjectPtr local_790;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_788;
  FDelegateAllocation local_780;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_770;
  FDelegateAllocation local_768;
  UDS_NpcFunctionShop *local_758;
  undefined4 uStack_750;
  uint uStack_74c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_748;
  ForAnyElementType local_740;
  int local_738;
  UDS_M_CommonPopup *local_730;
  UDS_NpcFunctionShop *local_728;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  code *local_718;
  undefined8 uStack_710;
  undefined1 local_708 [8];
  FDelegateAllocation local_700;
  FDestructionSentinel local_6f0;
  FDestructionSentinel local_6d8;
  FDestructionSentinel local_6c0;
  FDestructionSentinel local_6a8;
  FDestructionSentinel local_690;
  FDestructionSentinel local_678;
  FDestructionSentinel local_660;
  FDestructionSentinel local_648;
  FDestructionSentinel local_630;
  FDestructionSentinel local_618;
  FDestructionSentinel local_600;
  FDelegateAllocation *local_5e8;
  FDestructionSentinel local_5e0;
  FDelegateAllocation *local_5c8;
  FDestructionSentinel local_5c0;
  FDelegateAllocation *local_5a8;
  FReadAccessScope local_5a0;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_588;
  FDS_Text local_570;
  FDS_Text local_520;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_7d8;
  if (param_1 == 0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_4c8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_4c8,"UDS_NpcFunctionShop::Request_AddNpcItemToBasket",0x2f,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_4c8.Ptr,0x346,L"InShopListTID == 0");
    if ((void *)local_4c8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_4c8._padding_);
    return;
  }
  bVar5 = FWeakObjectPtr::IsValid(&(this->NPCShopData).WeakPtr);
  if ((!bVar5) || (bVar5 = FWeakObjectPtr::IsValid(&(this->NPCSellData).WeakPtr), !bVar5)) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_NpcFunctionShop::Request_AddNpcItemToBasket",0x2f,Yes);
    UDS_LogManager::PrintLog
              (pUVar6,1,Warning,local_168.Ptr,0x34c,
               L"NPCShopData.IsValid() == false || NPCSellData.IsValid() == false");
    if ((void *)local_168._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_168._padding_);
    return;
  }
  this_00 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
  pFVar7 = UDS_NPCShopData::GetNPCShopGoodsInfo(this_00,param_1);
  if (pFVar7 == (FDS_NPCShopGoodsInfo *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_3a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_3a8,"UDS_NpcFunctionShop::Request_AddNpcItemToBasket",0x2f,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_3a8.Ptr,0x353,L"npcShopGoodsInfo == nullptr");
    if ((void *)local_3a8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_3a8._padding_);
    return;
  }
  iVar1 = pFVar7->ItemValue;
  this_01 = (UDS_NPCSellData *)FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
  pTVar8 = UDS_NPCSellData::GetNPCSellBasket(this_01);
  if (pTVar8->ArrayNum == 0) {
    SetBasketType(this,BuyBasket);
    if (param_2) {
      OpenPopup_AddNpcItemToBasket(this,param_1);
      return;
    }
    OnAddNpcItemToBasket(this,param_1,iVar1);
    return;
  }
  this_02 = UDS_CommonPopupManager::GetInst();
  if (this_02 == (UDS_CommonPopupManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_288._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_288,"UDS_NpcFunctionShop::Request_AddNpcItemToBasket",0x2f,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_288.Ptr,0x36c,L"commonPopupManager == nullptr");
    if ((void *)local_288._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_288._padding_);
    return;
  }
  UDS_CommonPopupManager::CreateCommonPopup(this_02);
  bVar5 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_790,(void *)0x0);
  if (bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8092590238255285107>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionShop.cpp"
                       ,0x373,"false");
    if (!bVar5) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_7a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_7a0.Data = (FScriptContainerElement *)0x0;
  local_798 = 0;
  uStack_750 = 0;
  if (!param_2) {
    local_770.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_758 = (UDS_NpcFunctionShop *)OnAddNpcItemToBasket;
    uStack_74c = uStack_710._4_4_;
    local_768.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_768.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_770,(FWriteAccessScope *)&local_5e0);
    local_5c8 = &local_768;
    puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_768);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__HH__6B_;
      *(int *)(puVar9 + 1) = param_1;
      *(int *)((longlong)puVar9 + 0xc) = iVar1;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionShop____A6AXXZUFDefaultDelegateUserPolicy__HH__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_NpcFunctionShop *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar9[3] = 0;
      local_730 = (UDS_M_CommonPopup *)this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_NpcFunctionShop *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_730);
      puVar9[4] = local_758;
      puVar9[5] = CONCAT44(uStack_74c,uStack_750);
    }
    if (local_5e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5e0.Accessor,&local_5e0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_770,(FWriteAccessScope *)&local_6a8);
    iVar1 = local_768.DelegateSize;
    FVar3 = local_768.DelegateAllocator;
    local_768.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_768.DelegateSize = 0;
    if (local_6a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6a8.Accessor,&local_6a8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_7a8,(FWriteAccessScope *)&local_690);
    if (local_798 == 0) {
LAB_14bf117a1:
      if (local_7a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7a0.Data);
      }
    }
    else if (local_7a0.Data != (FScriptContainerElement *)0x0) {
      (*(code *)**(undefined8 **)local_7a0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_7a0,0,0,0x10);
      local_798 = 0;
      goto LAB_14bf117a1;
    }
    local_7a0.Data = (FScriptContainerElement *)FVar3;
    local_798 = iVar1;
    if (local_690.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_690.Accessor,&local_690);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_770,(FWriteAccessScope *)&local_678);
    if ((local_768.DelegateSize != 0) &&
       (local_768.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_768.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_768,0,0,0x10);
      local_768.DelegateSize = 0;
    }
    if (local_678.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_678.Accessor,&local_678);
    }
    if (local_768.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_768.DelegateAllocator);
    }
    pTVar14 = &local_770;
    goto LAB_14bf11832;
  }
  local_788.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_758 = (UDS_NpcFunctionShop *)OpenPopup_AddNpcItemToBasket;
  uStack_74c = uStack_710._4_4_;
  local_780.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_780.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_788,(FWriteAccessScope *)&local_600);
  local_5e8 = &local_780;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_780);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__H__6B_;
    *(int *)(puVar9 + 1) = param_1;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionShop____A6AXXZUFDefaultDelegateUserPolicy__H__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_NpcFunctionShop *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_728 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_NpcFunctionShop *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_728);
    puVar9[4] = local_758;
    puVar9[5] = CONCAT44(uStack_74c,uStack_750);
  }
  if (local_600.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_600.Accessor,&local_600);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_788,(FWriteAccessScope *)&local_6f0);
  iVar1 = local_780.DelegateSize;
  FVar3 = local_780.DelegateAllocator;
  local_780.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_780.DelegateSize = 0;
  if (local_6f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6f0.Accessor,&local_6f0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_7a8,(FWriteAccessScope *)&local_6d8);
  if (local_798 == 0) {
LAB_14bf115b7:
    if (local_7a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7a0.Data);
    }
  }
  else if (local_7a0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_7a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_7a0,0,0,0x10);
    local_798 = 0;
    goto LAB_14bf115b7;
  }
  local_7a0.Data = (FScriptContainerElement *)FVar3;
  local_798 = iVar1;
  if (local_6d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6d8.Accessor,&local_6d8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_788,(FWriteAccessScope *)&local_6c0);
  if ((local_780.DelegateSize != 0) &&
     (local_780.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_780.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_780,0,0,0x10);
    local_780.DelegateSize = 0;
  }
  if (local_6c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6c0.Accessor,&local_6c0);
  }
  if (local_780.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_780.DelegateAllocator);
  }
  pTVar14 = &local_788;
LAB_14bf11832:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&pTVar14->AccessDetector);
  pUVar11 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_790);
  pFVar12 = FDS_Text::FromStringTable(&local_570,StringUi,4);
  UDS_M_CommonPopup::SetTitle(pUVar11,pFVar12);
  pUVar11 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_790);
  pFVar12 = FDS_Text::FromStringTable(&local_520,StringUi,0x4e53);
  UDS_M_CommonPopup::SetMainContent(pUVar11,pFVar12);
  pUVar11 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_790);
  UDS_M_CommonPopup::SetButton(pUVar11,ButtonCancel,StringUi,0x66,false);
  pUVar11 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_790);
  UDS_M_CommonPopup::SetButton(pUVar11,ButtonConfirm,StringUi,0x65,false);
  pUVar11 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_790);
  uStack_750 = 0;
  local_758 = (UDS_NpcFunctionShop *)Response_Cancel;
  uStack_710 = (ulonglong)uStack_74c << 0x20;
  local_718 = Response_Cancel;
  pTVar13 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
            ::CreateUObject<UDS_NpcFunctionShop>(&local_588,this,(pmf_f0ad2748 *)&local_718);
  UDS_M_CommonPopup::SetDelegate(pUVar11,ButtonCancel,pTVar13);
  pUVar11 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_790);
  uStack_71c = uStack_710._4_4_;
  local_728 = (UDS_NpcFunctionShop *)Response_ChangeBasketType;
  uStack_720 = 0;
  local_708 = (undefined1  [8])0x0;
  local_700.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_700.DelegateSize = 0;
  local_730 = pUVar11;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_708,
             (FWriteAccessScope *)&local_5c0);
  local_5a8 = &local_700;
  puVar9 = UE::Core::Private::DelegateAllocate(0x48,&local_700);
  if (puVar9 != (undefined8 *)0x0) {
    pTVar14 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar9 + 2);
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__W4EDS_ItemBasketType__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    *(undefined4 *)(puVar9 + 1) = 1;
    (pTVar14->AccessDetector).State = (atomic<unsigned___int64>)0x0;
    puVar9[3] = 0;
    *(undefined4 *)(puVar9 + 4) = 0;
    if (&local_7a8 != pTVar14) {
      local_748.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_740.Data = (FScriptContainerElement *)0x0;
      local_738 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_7a8,&local_5a0);
      if ((local_798 != 0) &&
         ((ForElementType<TAlignedBytes<16,16>_>)local_7a0.Data !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (**(code **)(*(longlong *)local_7a0.Data + 0x50))(local_7a0.Data,&local_748);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_5a0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_748,(FWriteAccessScope *)&local_660);
      iVar1 = local_738;
      FVar4.Data = local_740.Data;
      local_740.Data = (FScriptContainerElement *)0x0;
      local_738 = 0;
      if (local_660.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_660.Accessor,&local_660);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (pTVar14,(FWriteAccessScope *)&local_648);
      if ((*(int *)(puVar9 + 4) != 0) && ((undefined8 *)puVar9[3] != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)puVar9[3])();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)(puVar9 + 3),0,0,0x10);
        *(undefined4 *)(puVar9 + 4) = 0;
      }
      if ((void *)puVar9[3] != (void *)0x0) {
        FMemory::Free((void *)puVar9[3]);
      }
      puVar9[3] = FVar4.Data;
      *(int *)(puVar9 + 4) = iVar1;
      if (local_648.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_648.Accessor,&local_648);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_748,(FWriteAccessScope *)&local_630);
      if ((local_738 != 0) && (local_740.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_740.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_740,0,0,0x10);
        local_738 = 0;
      }
      if (local_630.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_630.Accessor,&local_630);
      }
      if (local_740.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_740.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_748.AccessDetector);
    }
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[5] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionShop____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__W4EDS_ItemBasketType__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_NpcFunctionShop *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[6] = 0;
    local_758 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_NpcFunctionShop *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 6),(FObjectPtr)&local_758);
    puVar9[7] = local_728;
    puVar9[8] = CONCAT44(uStack_71c,uStack_720);
    pUVar11 = local_730;
  }
  if (local_5c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5c0.Accessor,&local_5c0);
  }
  UDS_M_CommonPopup::SetDelegate
            (pUVar11,ButtonConfirm,
             (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_708);
  pUVar11 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_790);
  UDS_M_CommonPopup::OpenCommonPopup(pUVar11);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_7a8,(FWriteAccessScope *)&local_618);
  if ((local_798 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)local_7a0.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_7a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_7a0,0,0,0x10);
    local_798 = 0;
  }
  if (local_618.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_618.Accessor,&local_618);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)local_7a0.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(local_7a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_7a8.AccessDetector);
  return;
}

// Request_PurchaseBasket @ 14bf11cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NpcFunctionShop::Request_PurchaseBasket(UDS_NpcFunctionShop *this)

{
  TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr> *this_00;
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  UDS_NPCShopData *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = &this->NPCShopData;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar4 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar2 = UDS_NPCShopData::GetNumOfNPCShopBasket(pUVar4);
    if (iVar2 == 0) {
      FDS_ItemShopService::OnNPCShopResult(EmptyPurchaseBasket);
    }
    else {
      pUVar4 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      UDS_NPCShopData::PurchaseNPCShopBasket(pUVar4);
    }
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NpcFunctionShop::Request_PurchaseBasket",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x43b,L"NPCShopData.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// Request_RemoveBagItemFromBasket @ 14bf11fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionShop::Request_RemoveBagItemFromBasket
          (UDS_NpcFunctionShop *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  UDS_NPCSellData *this_00;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = FWeakObjectPtr::IsValid(&(this->NPCSellData).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_NPCSellData *)FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
    iVar2 = UDS_NPCSellData::RemoveNPCSellBasketGoodsInfo(this_00,param_1);
    if ((-1 < iVar2) && (iVar2 == this->SelectedBasketSlotIndex)) {
      (**(code **)(this->_padding_ + 0x98))(&this->_padding_,0xffffffff);
    }
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NpcFunctionShop::Request_RemoveBagItemFromBasket",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x40f,L"NPCSellData.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// Request_RemoveNpcItemFromBasket @ 14bf120f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionShop::Request_RemoveNpcItemFromBasket(UDS_NpcFunctionShop *this,int param_1)

{
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  UDS_NPCShopData *this_00;
  UDS_NPCShopEvent *pUVar4;
  int iVar5;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (this->BasketType == BuyBasket) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->NPCShopData).WeakPtr);
    if (bVar1) {
      this_00 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
      iVar2 = UDS_NPCShopData::RemoveNPCShopBasketGoodsInfo(this_00,param_1);
      if (-1 < iVar2) {
        iVar5 = this->SelectedBasketSlotIndex;
        if (iVar2 == iVar5) {
          iVar5 = -1;
        }
        else {
          if (iVar5 <= iVar2) {
            return;
          }
          iVar5 = iVar5 + -1;
        }
        (**(code **)(this->_padding_ + 0x98))(&this->_padding_,iVar5);
        pUVar4 = UDS_NPCShopEvent::GetEvent();
        if (pUVar4 != (UDS_NPCShopEvent *)0x0) {
          FDS_EventDelegate<>::Broadcast(&pUVar4->OnUpdatedBasket);
        }
      }
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_NpcFunctionShop::Request_RemoveNpcItemFromBasket",0x34,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0x394,L"NPCShopData.IsValid() == false");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NpcFunctionShop::Request_RemoveNpcItemFromBasket",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x38e,
                 L"BasketType != EDS_NPCShopBasketType::BuyBasket");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// Request_SellBasket @ 14bf122c0

void __thiscall UDS_NpcFunctionShop::Request_SellBasket(UDS_NpcFunctionShop *this)

{
  bool bVar1;
  UDS_DataSetBase *this_00;
  UDS_NPCSellData *this_01;
  FWeakObjectPtr local_res8 [4];
  
  this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_DataSetBase::GetDataContainerKey(this_00);
  UDS_NPCSellData::GetData((ulong64)local_res8);
  bVar1 = TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr> *)local_res8,(void *)0x0);
  if (!bVar1) {
    this_01 = (UDS_NPCSellData *)FWeakObjectPtr::Get(local_res8);
    UDS_NPCSellData::SellNPCSellBasket(this_01);
  }
  return;
}

// Request_SetSelectedBagItemQuantityInBasket @ 14bf12310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionShop::Request_SetSelectedBagItemQuantityInBasket
          (UDS_NpcFunctionShop *this,int param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NPCSellData *this_00;
  FDS_NPCSellGoodsInfo *pFVar3;
  int iVar4;
  undefined1 auStackY_168 [32];
  uint uVar5;
  wchar_t *pwVar6;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (this->BasketType != SellBasket) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NpcFunctionShop::Request_SetSelectedBagItemQuantityInBasket",0x3f,Yes
              );
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x41e,
               L"BasketType != EDS_NPCShopBasketType::SellBasket");
    if ((void *)local_138._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_138._padding_);
    return;
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->NPCSellData).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_NPCSellData *)FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
    pFVar3 = UDS_NPCSellData::GetNPCSellBasketGoodsInfoByBasketSlotIndex
                       (this_00,this->SelectedBasketSlotIndex);
    if (pFVar3 != (FDS_NPCSellGoodsInfo *)0x0) {
      iVar4 = (param_1 - pFVar3->SellCount_UnTradable) - pFVar3->SellCount_Tradable;
      if (iVar4 == 0) {
        return;
      }
      OnAddBagItemToBasket
                (this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)(pFVar3->ItemData).WeakPtr,iVar4)
      ;
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NpcFunctionShop::Request_SetSelectedBagItemQuantityInBasket",0x3f,Yes
              );
    pwVar6 = L"basketGoodsInfo == nullptr";
    uVar5 = 0x42b;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NpcFunctionShop::Request_SetSelectedBagItemQuantityInBasket",0x3f,Yes
              );
    pwVar6 = L"NPCSellData.IsValid() == false";
    uVar5 = 0x424;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// Request_SetSelectedNpcShopItemQuantityInBasket @ 14bf12520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionShop::Request_SetSelectedNpcShopItemQuantityInBasket
          (UDS_NpcFunctionShop *this,int param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NPCShopData *this_00;
  FDS_NPCShopGoodsInfo *pFVar3;
  int iVar4;
  undefined1 auStackY_168 [32];
  uint uVar5;
  wchar_t *pwVar6;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (this->BasketType != BuyBasket) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NpcFunctionShop::Request_SetSelectedNpcShopItemQuantityInBasket",0x43
               ,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x3ac,
               L"BasketType != EDS_NPCShopBasketType::BuyBasket");
    if ((void *)local_138._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_138._padding_);
    return;
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->NPCShopData).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
    pFVar3 = UDS_NPCShopData::GetNPCShopBasketGoodsInfoByBasketSlotIndex
                       (this_00,this->SelectedBasketSlotIndex);
    if (pFVar3 != (FDS_NPCShopGoodsInfo *)0x0) {
      iVar4 = param_1 - pFVar3->Quantity;
      if (iVar4 == 0) {
        return;
      }
      OnAddNpcItemToBasket(this,pFVar3->ShopListTID,iVar4);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NpcFunctionShop::Request_SetSelectedNpcShopItemQuantityInBasket",0x43
               ,Yes);
    pwVar6 = L"basketGoodsInfo == nullptr";
    uVar5 = 0x3b9;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NpcFunctionShop::Request_SetSelectedNpcShopItemQuantityInBasket",0x43
               ,Yes);
    pwVar6 = L"NPCShopData.IsValid() == false";
    uVar5 = 0x3b2;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// Response_AddBagItemToBasket @ 14bf12b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionShop::Response_AddBagItemToBasket
          (UDS_NpcFunctionShop *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_2)

{
  bool bVar1;
  EDS_CommonPopupContext EVar2;
  int iVar3;
  int iVar4;
  UDS_M_CommonPopup *pUVar5;
  UDS_NPCShopData *pUVar6;
  TArray<FDS_NPCShopGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar7;
  UDS_NPCSellData *pUVar8;
  UDS_NPCShopEvent *pUVar9;
  UDS_LogManager *pUVar10;
  UDS_WindowManager *this_00;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  float local_150 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_res10 = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar1) {
    pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    iVar3 = UDS_M_CommonPopup::GetSliderCount(pUVar5);
    iVar4 = 0;
    pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    EVar2 = UDS_M_CommonPopup::GetSelectedItemSlotPopupContext(pUVar5);
    if (EVar2 == ItemSlot02) {
      iVar4 = iVar3;
      iVar3 = 0;
    }
    local_158 = param_2.WeakPtr;
    bVar1 = FWeakObjectPtr::IsValid(&(this->NPCSellData).WeakPtr);
    if ((bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&local_158), bVar1)) {
      bVar1 = FWeakObjectPtr::IsValid(&(this->NPCShopData).WeakPtr);
      if (bVar1) {
        pUVar6 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
        pTVar7 = UDS_NPCShopData::GetNPCShopBasket(pUVar6);
        if (pTVar7->ArrayNum != 0) {
          pUVar6 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
          UDS_NPCShopData::ClearNPCShopBasket(pUVar6);
        }
      }
      pUVar8 = (UDS_NPCSellData *)FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
      UDS_NPCSellData::AddNPCSellBasketGoodsInfo
                (pUVar8,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_158,iVar4,iVar3);
      pUVar9 = UDS_NPCShopEvent::GetEvent();
      if (pUVar9 != (UDS_NPCShopEvent *)0x0) {
        pUVar8 = (UDS_NPCSellData *)FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
        iVar4 = UDS_NPCSellData::GetNPCSellBasketSlotIndex
                          (pUVar8,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_158);
        FDS_EventDelegate<int_const_>::Broadcast(&pUVar9->OnUpdatedBasketSlot,iVar4);
        (**(code **)(this->_padding_ + 0x98))(&this->_padding_,iVar4);
      }
    }
    else {
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 != (UDS_LogManager *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_NpcFunctionShop::OnAddBagItemToBasket",0x29,Yes);
        UDS_LogManager::PrintLog
                  (pUVar10,1,Warning,local_148.Ptr,0x5c8,
                   L"NPCSellData.IsValid() == false || InItemData.IsValid() == false");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 != (UDS_WindowManager *)0x0) {
      local_150[0] = 0.0;
      local_158 = (FWeakObjectPtr)((ulonglong)local_158 & 0xffffffff00000000);
      UDS_WindowManager::CloseWindow(this_00,PopupCommon,(uint *)&local_158,local_150);
    }
  }
  return;
}

// Response_AddNpcItemToBasket @ 14bf12d40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionShop::Response_AddNpcItemToBasket
          (UDS_NpcFunctionShop *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,
          int param_2)

{
  bool bVar1;
  int iVar2;
  UDS_M_CommonPopup *this_00;
  UDS_WindowManager *this_01;
  FWeakObjectPtr local_res10 [2];
  float local_res20 [2];
  uint local_18 [4];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
    iVar2 = UDS_M_CommonPopup::GetSliderCount(this_00);
    OnAddNpcItemToBasket(this,param_2,iVar2);
    this_01 = UDS_WindowManager::GetInst();
    if (this_01 != (UDS_WindowManager *)0x0) {
      local_res20[0] = 0.0;
      local_18[0] = 0;
      UDS_WindowManager::CloseWindow(this_01,PopupCommon,local_18,local_res20);
    }
  }
  return;
}

// Response_Cancel @ 14bf12dd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionShop::Response_Cancel
          (UDS_NpcFunctionShop *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res20,local_res18);
  }
  return;
}

// Response_ChangeBasketType @ 14bf12e10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionShop::Response_ChangeBasketType
          (UDS_NpcFunctionShop *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,
          EDS_ItemBasketType param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  bool bVar1;
  UDS_WindowManager *this_00;
  longlong *plVar2;
  FWeakObjectPtr local_res10;
  float local_28;
  uint local_24;
  FReadAccessScope local_20;
  
  local_res10 = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (bVar1) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  }
  else {
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 == (UDS_WindowManager *)0x0) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
    }
    else {
      plVar2 = (longlong *)0x0;
      local_28 = 0.0;
      local_24 = 0;
      UDS_WindowManager::CloseWindow(this_00,PopupCommon,&local_24,&local_28);
      ClearAllBasket(this);
      SetBasketType(this,param_2);
      bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
      if (bVar1) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_20);
        if (*(int *)&param_3->field_0x10 != 0) {
          plVar2 = *(longlong **)&param_3->field_0x8;
        }
        (**(code **)(*plVar2 + 0x60))(plVar2);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_20);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
    }
  }
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return;
}

// SetBasketType @ 14bf13390

void __thiscall
UDS_NpcFunctionShop::SetBasketType(UDS_NpcFunctionShop *this,EDS_ItemBasketType param_1)

{
  UDS_NPCShopEvent *pUVar1;
  
  if (this->BasketType != param_1) {
    this->BasketType = param_1;
    pUVar1 = UDS_NPCShopEvent::GetEvent();
    if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
      FDS_EventDelegate<enum_EDS_ItemBasketType_const_>::Broadcast
                (&pUVar1->OnChangedBasketType,this->BasketType);
      if (this->BasketType == BuyBasket) {
        FDS_EventDelegate<__int64_const_>::Broadcast(&pUVar1->OnSelectBagSlot,0);
        return;
      }
      if (this->BasketType == SellBasket) {
        FDS_EventDelegate<int_const_>::Broadcast(&pUVar1->OnSelectShopItemSlot,0);
      }
    }
  }
  return;
}

// SetSelectedBasketSlot @ 14bf18a90

void __thiscall UDS_NpcFunctionShop::SetSelectedBasketSlot(UDS_NpcFunctionShop *this,int param_1)

{
  int iVar1;
  UDS_NPCShopEvent *pUVar2;
  
  (this->NPCShopData).WeakPtr.ObjectSerialNumber = param_1;
  pUVar2 = UDS_NPCShopEvent::GetEvent();
  if (pUVar2 != (UDS_NPCShopEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_ItemBasketType_const_,int_const_>::Broadcast
              (&pUVar2->OnSelectedBasketSlot,(EDS_ItemBasketType *)&this->NPCShopData,
               (this->NPCShopData).WeakPtr.ObjectSerialNumber);
    iVar1 = (this->NPCShopData).WeakPtr.ObjectIndex;
    if ((iVar1 == 2) || (iVar1 == 3)) {
      FDS_EventDelegate<int_const_>::Broadcast(&pUVar2->OnSelectShopItemSlot,0);
    }
  }
  return;
}

// UpdateBasket @ 14bf1eb00

void __thiscall UDS_NpcFunctionShop::UpdateBasket(UDS_NpcFunctionShop *this)

{
  UDS_NPCShopEvent *pUVar1;
  
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    FDS_EventDelegate<>::Broadcast(&pUVar1->OnUpdatedBasket);
    return;
  }
  return;
}

// UpdateQuantityControl @ 14bf23cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NpcFunctionShop::UpdateQuantityControl(UDS_NpcFunctionShop *this,float param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NPCShopData *this_00;
  FDS_NPCShopGoodsInfo *pFVar3;
  UDS_NPCSellData *this_01;
  FDS_NPCSellGoodsInfo *pFVar4;
  int iVar5;
  undefined1 auStackY_178 [32];
  uint uVar6;
  wchar_t *pwVar7;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (((this->NPCShopData).WeakPtr.ObjectIndex == 1) &&
     (bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), bVar1)) {
    if ((this->NPCShopData).WeakPtr.ObjectIndex == 1) {
      bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
      if (bVar1) {
        this_00 = (UDS_NPCShopData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pFVar3 = UDS_NPCShopData::GetNPCShopBasketGoodsInfoByBasketSlotIndex
                           (this_00,(this->NPCShopData).WeakPtr.ObjectSerialNumber);
        if (pFVar3 != (FDS_NPCShopGoodsInfo *)0x0) {
          iVar5 = (int)param_1 - pFVar3->Quantity;
          if (iVar5 == 0) {
            return;
          }
          OnAddNpcItemToBasket
                    ((UDS_NpcFunctionShop *)&this[-1].InventoryBagModel,pFVar3->ShopListTID,iVar5);
          return;
        }
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar2 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_NpcFunctionShop::Request_SetSelectedNpcShopItemQuantityInBasket",
                   0x43,Yes);
        pwVar7 = L"basketGoodsInfo == nullptr";
        uVar6 = 0x3b9;
      }
      else {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar2 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_NpcFunctionShop::Request_SetSelectedNpcShopItemQuantityInBasket",
                   0x43,Yes);
        pwVar7 = L"NPCShopData.IsValid() == false";
        uVar6 = 0x3b2;
      }
    }
    else {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_NpcFunctionShop::Request_SetSelectedNpcShopItemQuantityInBasket",
                 0x43,Yes);
      pwVar7 = L"BasketType != EDS_NPCShopBasketType::BuyBasket";
      uVar6 = 0x3ac;
    }
  }
  else {
    if ((this->NPCShopData).WeakPtr.ObjectIndex != 2) {
      return;
    }
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar1) {
      this_01 = (UDS_NPCSellData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pFVar4 = UDS_NPCSellData::GetNPCSellBasketGoodsInfoByBasketSlotIndex
                         (this_01,(this->NPCShopData).WeakPtr.ObjectSerialNumber);
      if (pFVar4 != (FDS_NPCSellGoodsInfo *)0x0) {
        iVar5 = ((int)param_1 - pFVar4->SellCount_UnTradable) - pFVar4->SellCount_Tradable;
        if (iVar5 == 0) {
          return;
        }
        OnAddBagItemToBasket
                  ((UDS_NpcFunctionShop *)&this[-1].InventoryBagModel,
                   (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)(pFVar4->ItemData).WeakPtr,iVar5);
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_NpcFunctionShop::Request_SetSelectedBagItemQuantityInBasket",0x3f,
                 Yes);
      pwVar7 = L"basketGoodsInfo == nullptr";
      uVar6 = 0x42b;
    }
    else {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_NpcFunctionShop::Request_SetSelectedBagItemQuantityInBasket",0x3f,
                 Yes);
      pwVar7 = L"NPCSellData.IsValid() == false";
      uVar6 = 0x424;
    }
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar6,pwVar7);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

