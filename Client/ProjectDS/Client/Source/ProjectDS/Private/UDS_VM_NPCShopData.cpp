// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b6aecd0

UClass * __cdecl UDS_VM_NPCShopData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NPCShopData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NPCShopData",
               &Z_Registration_Info_UClass_UDS_VM_NPCShopData.InnerSingleton,
               StaticRegisterNativesUDS_VM_NPCShopData,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NPCShopData>,
               InternalVTableHelperCtorCaller<UDS_VM_NPCShopData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NPCShopData.InnerSingleton;
}

// UDS_VM_NPCShopData @ 14b6b1320

UDS_VM_NPCShopData * __thiscall
UDS_VM_NPCShopData::UDS_VM_NPCShopData(UDS_VM_NPCShopData *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->EntryBindingEventField_GoodsInfoList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->EntryBindingEventField_GoodsInfoList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_GoodsInfoList).UserObjectList.ArrayMax = 0;
  this->_padding_ = (longlong)&___7UDS_VM_NPCShopData__6B_;
  (this->EntryBindingEventField_Basket).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Basket).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Basket).UserObjectList.ArrayMax = 0;
  (this->NPCShopData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->NPCShopData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->NpcFunctionShop).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NpcFunctionShop).WeakPtr,(FObjectPtr)&local_res8);
  this->BuyBasketSlotMax = 0;
  return this;
}

// UDS_VM_NPCShopData @ 14b6b13c0

UDS_VM_NPCShopData * __thiscall
UDS_VM_NPCShopData::UDS_VM_NPCShopData(UDS_VM_NPCShopData *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->EntryBindingEventField_GoodsInfoList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->EntryBindingEventField_GoodsInfoList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_GoodsInfoList).UserObjectList.ArrayMax = 0;
  this->_padding_ = (longlong)&___7UDS_VM_NPCShopData__6B_;
  (this->EntryBindingEventField_Basket).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Basket).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Basket).UserObjectList.ArrayMax = 0;
  (this->NPCShopData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->NPCShopData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->NpcFunctionShop).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NpcFunctionShop).WeakPtr,(FObjectPtr)&local_res8);
  this->BuyBasketSlotMax = 0;
  return this;
}

// ~UDS_VM_NPCShopData @ 14b6b3a00

void __thiscall UDS_VM_NPCShopData::~UDS_VM_NPCShopData(UDS_VM_NPCShopData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NPCShopData__6B_;
  pFVar1 = (this->EntryBindingEventField_Basket).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_GoodsInfoList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6b6710

IClassDescriptor * __thiscall
UDS_VM_NPCShopData::GetFieldNotificationDescriptor(UDS_VM_NPCShopData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_NPCShopData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6b6f20

UClass * __cdecl UDS_VM_NPCShopData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NPCShopData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NPCShopData",
               &Z_Registration_Info_UClass_UDS_VM_NPCShopData.InnerSingleton,
               StaticRegisterNativesUDS_VM_NPCShopData,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NPCShopData>,
               InternalVTableHelperCtorCaller<UDS_VM_NPCShopData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NPCShopData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_NPCShopData @ 14b6b7d30

void __cdecl UDS_VM_NPCShopData::StaticRegisterNativesUDS_VM_NPCShopData(void)

{
  return;
}

// BindModel @ 14bed8ab0

void __thiscall UDS_VM_NPCShopData::BindModel(UDS_VM_NPCShopData *this)

{
  UDS_NPCShopEvent *pUVar1;
  UDS_ShopManager *pUVar2;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnClearedBasket,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ItemBasketType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_NPCShopData>
              (&pUVar1->OnClearedBasket,(UDS_VM_NPCShopData *)&stack0x00000010,(pmf_ebe48551 *)this)
    ;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedBasketType,
               this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ItemBasketType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_NPCShopData>
              (&pUVar1->OnChangedBasketType,(UDS_VM_NPCShopData *)&stack0x00000010,
               (pmf_ebe48551 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedBasket,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NPCShopData>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdatedBasket,(UDS_VM_NPCShopData *)&stack0x00000010,(pmf_01294388 *)this)
    ;
  }
  pUVar2 = UDS_ShopManager::GetInst();
  if (pUVar2 != (UDS_ShopManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->NpcShopBuyLimitChangedDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NPCShopData>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->NpcShopBuyLimitChangedDelegate,(UDS_VM_NPCShopData *)&stack0x00000010,
               (pmf_01294388 *)this);
  }
  return;
}

// OnChangedBasketType @ 14bef7990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_NPCShopData::OnChangedBasketType(UDS_VM_NPCShopData *this,EDS_ItemBasketType param_1)

{
  FWeakObjectPtr FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UDS_NPCShopData *this_00;
  TArray<FDS_NPCShopGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  UDS_UserObjectListItem *this_01;
  UClass *pUVar7;
  undefined8 *puVar8;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar9;
  undefined1 *puVar10;
  uint uVar11;
  FObjectPtr_u_0 FVar12;
  longlong lVar13;
  undefined1 auStackY_578 [32];
  undefined4 uStack_548;
  FObjectPtr_u_0 FStack_540;
  UDS_UserObjectListItem *apUStack_538 [2];
  FName FStack_528;
  int iStack_520;
  FName FStack_518;
  int iStack_510;
  FName FStack_508;
  int iStack_500;
  FName FStack_4f8;
  int iStack_4f0;
  FName FStack_4e8;
  int iStack_4e0;
  TSharedPtr<FDS_ViewModelContext,1> TStack_4d8;
  undefined1 auStack_4c8 [8];
  TReferenceControllerBase<1> *pTStack_4c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  if (param_1 != BuyBasket) {
    return;
  }
  puVar10 = &stack0xfffffffffffffff0;
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_578;
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_Basket);
  bVar3 = TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr>::UEOpEquals(&this->NPCShopData,(void *)0x0)
  ;
  if (bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      TStack_4b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_4b8,"UDS_VM_NPCShopData::UpdateBasket",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_4b8.Ptr,0x9f,L"NPCShopData is nullptr.");
      if ((void *)TStack_4b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_4b8._padding_);
      }
    }
    iStack_520 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.BitNumber;
    FStack_528 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_528);
  }
  else {
    TVar9.DebugPtr = (UDS_UserObjectListItem *)0x0;
    bVar3 = TWeakObjectPtr<UDS_NpcFunctionShop,FWeakObjectPtr>::UEOpEquals
                      (&this->NpcFunctionShop,(void *)0x0);
    if (bVar3) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        TStack_398._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_398,"UDS_VM_NPCShopData::UpdateBasket",0x20,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,TStack_398.Ptr,0xa6,L"NpcFunctionShop is nullptr.");
        if ((void *)TStack_398._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_398._padding_);
        }
      }
      iStack_510 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.BitNumber;
      FStack_518 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_518);
    }
    else {
      this_00 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
      pTVar6 = UDS_NPCShopData::GetNPCShopBasket(this_00);
      if (this->BuyBasketSlotMax < pTVar6->ArrayNum) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          TStack_278._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_278,"UDS_VM_NPCShopData::UpdateBasket",0x20,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,TStack_278.Ptr,0xaf,L"npcShopBasket.Num() > BuyBasketSlotMax")
          ;
          if ((void *)TStack_278._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_278._padding_);
          }
        }
        iStack_500 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.BitNumber;
        FStack_508 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_508);
      }
      else {
        uVar11 = 0;
        if (0 < this->BuyBasketSlotMax) {
          lVar13 = 0;
          do {
            this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf1f576;
            }
            else {
              if (this_01 == (UDS_UserObjectListItem *)0x0) {
LAB_14bf1f576:
                pUVar5 = UDS_LogManager::GetInst();
                if (pUVar5 != (UDS_LogManager *)0x0) {
                  pUVar5 = UDS_LogManager::GetInst();
                  TStack_158._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_158,"UDS_VM_NPCShopData::UpdateBasket",0x20,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar5,1,Warning,TStack_158.Ptr,0xb9,L"listItem is nullptr.");
                  if ((void *)TStack_158._padding_ != (void *)0x0) {
                    FMemory::Free((void *)TStack_158._padding_);
                  }
                }
                FStack_4f8 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.
                             FieldName;
                iStack_4f0 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.
                             BitNumber;
                goto LAB_14bf1f4f9;
              }
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            uStack_548 = 0;
            if ((-1 < (int)uVar11) && ((int)uVar11 < pTVar6->ArrayNum)) {
              if (-((int)~uVar11 >> 0x1f) == 0) {
                TVar9.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar3) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              iVar4 = 0;
              if ((int)uVar11 < pTVar6->ArrayNum) {
                iVar4 = -((int)~uVar11 >> 0x1f);
              }
              if (iVar4 == 0) {
                TVar9.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar3) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              uStack_548 = *(undefined4 *)((pTVar6->AllocatorInstance).Data + lVar13 + 8);
            }
            DS_ItemDataUtil::CreateItemModel
                      ((EDS_ItemSlotStateType)&FStack_540,(int)CONCAT71(TVar9._1_7_,0x23));
            if (FStack_540.Handle == (UObject *)0x0) {
LAB_14bf1f415:
              FVar12.Handle = (UObject *)0x0;
            }
            else {
              pUVar7 = Z_Construct_UClass_UDS_M_ItemImplNpcShopBuyBasketSlot_NoRegister();
              bVar3 = FObjectPtr::IsA((FObjectPtr *)&FStack_540,pUVar7);
              FVar12 = FStack_540;
              if (!bVar3) goto LAB_14bf1f415;
            }
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (FVar12.Handle == (UObject *)0x0) goto LAB_14bf1f547;
            }
            else {
              if (FVar12.Handle == (UObject *)0x0) {
LAB_14bf1f547:
                bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<785812284537569482>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcShop\\DS_VM_NPCShopData.cpp"
                                   ,0xca,"false");
                if (!bVar3) {
                  return;
                }
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              UE::GC::MarkAsReachable(FVar12.Handle);
            }
            FVar1 = (this->NpcFunctionShop).WeakPtr;
            *(int *)&(FVar12.Handle + 0x1e0)->field_0x10 = FVar1.ObjectIndex;
            *(int *)&(FVar12.Handle + 0x1e0)->field_0x14 = FVar1.ObjectSerialNumber;
            FVar1 = (this->NPCShopData).WeakPtr;
            *(int *)&(FVar12.Handle + 0x1e0)->field_0x18 = FVar1.ObjectIndex;
            *(int *)&(FVar12.Handle + 0x1e0)->field_0x1c = FVar1.ObjectSerialNumber;
            *(uint *)&FVar12.Handle[0xc].field_0x20 = uVar11;
            *(undefined4 *)&FVar12.Handle[0xc].field_0x24 = uStack_548;
            puVar8 = (undefined8 *)
                     (**(code **)(*(longlong *)FVar12.Handle + 0x310))(FVar12.Handle,auStack_4c8);
            TStack_4d8.Object = (FDS_ViewModelContext *)*puVar8;
            TStack_4d8.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)puVar8[1];
            if (TStack_4d8.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (TStack_4d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(TStack_4d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            UDS_UserObjectListItem::AddContext(this_01,&TStack_4d8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_4c0);
            apUStack_538[0] = this_01;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            TVar9.DebugPtr = (UDS_UserObjectListItem *)apUStack_538;
            FDS_EntryBindingEventField::Add
                      (&this->EntryBindingEventField_Basket,
                       (TObjectPtr<UDS_UserObjectListItem>)TVar9.ObjectPtr.field0_0x0);
            uVar11 = uVar11 + 1;
            lVar13 = lVar13 + 0x50;
          } while ((int)uVar11 < this->BuyBasketSlotMax);
        }
        FStack_4e8 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.FieldName;
        iStack_4e0 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.BitNumber;
        puVar10 = (undefined1 *)register0x00000020;
LAB_14bf1f4f9:
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,puVar10 + -0x4e8);
      }
    }
  }
  return;
}

// OnCleardBasket @ 14bef85e0

void __thiscall
UDS_VM_NPCShopData::OnCleardBasket(UDS_VM_NPCShopData *this,EDS_ItemBasketType param_1)

{
  FName local_18;
  int local_10;
  
  if (param_1 == BuyBasket) {
    FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_Basket);
    local_10 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14bf07820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_NPCShopData::OnSetViewModel
          (UDS_VM_NPCShopData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UDS_NPCShopData *this_00;
  undefined1 auStackY_3d8 [32];
  TSharedPtr<FDS_ViewModelContext_NPCShop,1> local_3a8;
  TSharedPtr<FDS_ViewModelContext,1> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_398.Object = param_1->Object;
  local_398.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_398.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_398.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_398.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_NPCShop>(&local_3a8,&local_398);
  if (local_3a8.Object == (FDS_ViewModelContext_NPCShop *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_388._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_388,"UDS_VM_NPCShopData::OnSetViewModel",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_388.Ptr,0x18,L"npcShopContext.IsValid() == false");
      if ((void *)local_388._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_388._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3a8.SharedReferenceCount.ReferenceController);
  }
  else {
    if (local_3a8.Object == (FDS_ViewModelContext_NPCShop *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (this->NPCShopData).WeakPtr = ((local_3a8.Object)->NPCShopData).WeakPtr;
    bVar3 = FWeakObjectPtr::IsValid(&(this->NPCShopData).WeakPtr);
    if (bVar3) {
      (this->NpcFunctionShop).WeakPtr = ((local_3a8.Object)->NpcFunctionShop).WeakPtr;
      bVar3 = FWeakObjectPtr::IsValid(&(this->NpcFunctionShop).WeakPtr);
      if (bVar3) {
        pUVar5 = FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
        this->BuyBasketSlotMax = *(int *)(pUVar5 + 6);
        UpdateGoodsInfoList(this);
        this_00 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
        UDS_NPCShopData::UpdateNPCShopGoodsInfoCondition(this_00);
      }
      else {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_VM_NPCShopData::OnSetViewModel",0x22,Yes);
          UDS_LogManager::PrintLog
                    (pUVar4,1,Warning,local_148.Ptr,0x26,L"NpcFunctionShop.IsValid() == false");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_268._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_268,"UDS_VM_NPCShopData::OnSetViewModel",0x22,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_268.Ptr,0x1f,L"NPCShopData.IsValid() == false");
        if ((void *)local_268._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_268._padding_);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3a8.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdatedBuyBasket @ 14bf0b110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_NPCShopData::OnUpdatedBuyBasket(UDS_VM_NPCShopData *this)

{
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = TWeakObjectPtr<UDS_NpcFunctionShop,FWeakObjectPtr>::UEOpEquals
                    (&this->NpcFunctionShop,(void *)0x0);
  if (bVar1) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_NPCShopData::OnUpdatedBuyBasket",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0xee,L"NpcFunctionShop is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(&(this->NpcFunctionShop).WeakPtr);
    iVar2 = (**(code **)(*(longlong *)&pUVar4[1].field_0x10 + 0x10))(&pUVar4[1].field_0x10);
    if (iVar2 == 1) {
      UpdateBasket(this);
    }
  }
  return;
}

// UnbindModel @ 14bf1e310

void __thiscall UDS_VM_NPCShopData::UnbindModel(UDS_VM_NPCShopData *this)

{
  UDS_NPCShopEvent *pUVar1;
  UDS_ShopManager *pUVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnClearedBasket,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedBasketType,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedBasket,this);
  }
  pUVar2 = UDS_ShopManager::GetInst();
  if (pUVar2 != (UDS_ShopManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->NpcShopBuyLimitChangedDelegate,this);
  }
  return;
}

// UpdateBasket @ 14bf1f040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_NPCShopData::UpdateBasket(UDS_VM_NPCShopData *this)

{
  FWeakObjectPtr FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UDS_NPCShopData *this_00;
  TArray<FDS_NPCShopGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  UDS_UserObjectListItem *this_01;
  UClass *pUVar7;
  undefined8 *puVar8;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar9;
  undefined1 *puVar10;
  uint uVar11;
  FObjectPtr_u_0 FVar12;
  longlong lVar13;
  undefined1 auStackY_578 [32];
  undefined4 local_548;
  FObjectPtr_u_0 local_540;
  UDS_UserObjectListItem *local_538 [2];
  FName local_528;
  int local_520;
  FName local_518;
  int local_510;
  FName local_508;
  int local_500;
  FName local_4f8;
  int local_4f0;
  FName local_4e8;
  int local_4e0;
  TSharedPtr<FDS_ViewModelContext,1> local_4d8;
  undefined1 local_4c8 [8];
  TReferenceControllerBase<1> *local_4c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  puVar10 = &stack0xfffffffffffffff0;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_578;
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_Basket);
  bVar3 = TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr>::UEOpEquals(&this->NPCShopData,(void *)0x0)
  ;
  if (bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_4b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4b8,"UDS_VM_NPCShopData::UpdateBasket",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_4b8.Ptr,0x9f,L"NPCShopData is nullptr.");
      if ((void *)local_4b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4b8._padding_);
      }
    }
    local_520 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.BitNumber;
    local_528 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_528);
  }
  else {
    TVar9.DebugPtr = (UDS_UserObjectListItem *)0x0;
    bVar3 = TWeakObjectPtr<UDS_NpcFunctionShop,FWeakObjectPtr>::UEOpEquals
                      (&this->NpcFunctionShop,(void *)0x0);
    if (bVar3) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_398._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_398,"UDS_VM_NPCShopData::UpdateBasket",0x20,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_398.Ptr,0xa6,L"NpcFunctionShop is nullptr.")
        ;
        if ((void *)local_398._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_398._padding_);
        }
      }
      local_510 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.BitNumber;
      local_518 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_518);
    }
    else {
      this_00 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
      pTVar6 = UDS_NPCShopData::GetNPCShopBasket(this_00);
      if (this->BuyBasketSlotMax < pTVar6->ArrayNum) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_278._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_278,"UDS_VM_NPCShopData::UpdateBasket",0x20,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_278.Ptr,0xaf,L"npcShopBasket.Num() > BuyBasketSlotMax");
          if ((void *)local_278._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_278._padding_);
          }
        }
        local_500 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.BitNumber;
        local_508 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_508);
      }
      else {
        uVar11 = 0;
        if (0 < this->BuyBasketSlotMax) {
          lVar13 = 0;
          do {
            this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf1f576;
            }
            else {
              if (this_01 == (UDS_UserObjectListItem *)0x0) {
LAB_14bf1f576:
                pUVar5 = UDS_LogManager::GetInst();
                if (pUVar5 != (UDS_LogManager *)0x0) {
                  pUVar5 = UDS_LogManager::GetInst();
                  local_158._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_158,"UDS_VM_NPCShopData::UpdateBasket",0x20,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar5,1,Warning,local_158.Ptr,0xb9,L"listItem is nullptr.");
                  if ((void *)local_158._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_158._padding_);
                  }
                }
                local_4f8 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.
                            FieldName;
                local_4f0 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.
                            BitNumber;
                goto LAB_14bf1f4f9;
              }
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            local_548 = 0;
            if ((-1 < (int)uVar11) && ((int)uVar11 < pTVar6->ArrayNum)) {
              if (-((int)~uVar11 >> 0x1f) == 0) {
                TVar9.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar3) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              iVar4 = 0;
              if ((int)uVar11 < pTVar6->ArrayNum) {
                iVar4 = -((int)~uVar11 >> 0x1f);
              }
              if (iVar4 == 0) {
                TVar9.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar3) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              local_548 = *(undefined4 *)((pTVar6->AllocatorInstance).Data + lVar13 + 8);
            }
            DS_ItemDataUtil::CreateItemModel
                      ((EDS_ItemSlotStateType)&local_540,(int)CONCAT71(TVar9._1_7_,0x23));
            if (local_540.Handle == (UObject *)0x0) {
LAB_14bf1f415:
              FVar12.Handle = (UObject *)0x0;
            }
            else {
              pUVar7 = Z_Construct_UClass_UDS_M_ItemImplNpcShopBuyBasketSlot_NoRegister();
              bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_540,pUVar7);
              FVar12 = local_540;
              if (!bVar3) goto LAB_14bf1f415;
            }
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (FVar12.Handle == (UObject *)0x0) goto LAB_14bf1f547;
            }
            else {
              if (FVar12.Handle == (UObject *)0x0) {
LAB_14bf1f547:
                bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<785812284537569482>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcShop\\DS_VM_NPCShopData.cpp"
                                   ,0xca,"false");
                if (!bVar3) {
                  return;
                }
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              UE::GC::MarkAsReachable(FVar12.Handle);
            }
            FVar1 = (this->NpcFunctionShop).WeakPtr;
            *(int *)&(FVar12.Handle + 0x1e0)->field_0x10 = FVar1.ObjectIndex;
            *(int *)&(FVar12.Handle + 0x1e0)->field_0x14 = FVar1.ObjectSerialNumber;
            FVar1 = (this->NPCShopData).WeakPtr;
            *(int *)&(FVar12.Handle + 0x1e0)->field_0x18 = FVar1.ObjectIndex;
            *(int *)&(FVar12.Handle + 0x1e0)->field_0x1c = FVar1.ObjectSerialNumber;
            *(uint *)&FVar12.Handle[0xc].field_0x20 = uVar11;
            *(undefined4 *)&FVar12.Handle[0xc].field_0x24 = local_548;
            puVar8 = (undefined8 *)
                     (**(code **)(*(longlong *)FVar12.Handle + 0x310))(FVar12.Handle,local_4c8);
            local_4d8.Object = (FDS_ViewModelContext *)*puVar8;
            local_4d8.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)puVar8[1];
            if (local_4d8.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_4d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_4d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            UDS_UserObjectListItem::AddContext(this_01,&local_4d8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_4c0);
            local_538[0] = this_01;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            TVar9.DebugPtr = (UDS_UserObjectListItem *)local_538;
            FDS_EntryBindingEventField::Add
                      (&this->EntryBindingEventField_Basket,
                       (TObjectPtr<UDS_UserObjectListItem>)TVar9.ObjectPtr.field0_0x0);
            uVar11 = uVar11 + 1;
            lVar13 = lVar13 + 0x50;
          } while ((int)uVar11 < this->BuyBasketSlotMax);
        }
        local_4e8 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.FieldName;
        local_4e0 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.BitNumber;
        puVar10 = (undefined1 *)register0x00000020;
LAB_14bf1f4f9:
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,puVar10 + -0x4e8);
      }
    }
  }
  return;
}

// UpdateGoodsInfoList @ 14bf1fd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_NPCShopData::UpdateGoodsInfoList(UDS_VM_NPCShopData *this)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  FDS_ViewModelContext_MoneyDisplay *pFVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  int iVar8;
  UDS_LogManager *pUVar9;
  UDS_NPCShopData *this_00;
  TMap<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>
  *pTVar10;
  UDS_UserObjectListItem *this_01;
  TObjectPtr<UDS_M_ItemImplBase> this_02;
  UClass *pUVar11;
  undefined8 *puVar12;
  UDS_M_ItemImplNpcShopSlot *pUVar13;
  UDS_M_ItemImplNpcShopSlot *pUVar14;
  UScriptStruct *pUVar15;
  UDS_ViewModelContextManager *this_03;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar16;
  longlong lVar17;
  UDS_M_ItemImplNpcShopSlot *pUVar18;
  uint *puVar19;
  UDS_M_ItemImplNpcShopSlot *pUVar20;
  undefined1 auStackY_4b8 [32];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_480;
  int local_460;
  UDS_UserObjectListItem *local_458 [2];
  FName local_448;
  int local_440;
  TSharedPtr<FDS_ViewModelContext,1> local_438;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_428;
  TMap<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>
  *local_418;
  uint uStack_410;
  uint uStack_40c;
  undefined1 *local_408;
  undefined4 uStack_400;
  uint uStack_3fc;
  uint local_3f8;
  uint uStack_3f4;
  TSharedPtr<FDS_ViewModelContext,1> local_3e8;
  TSharedPtr<FDS_ViewModelContext,1> local_3d8;
  undefined1 local_3c8 [8];
  undefined1 local_3c0 [8];
  TReferenceControllerBase<1> *local_3b8;
  TSharedPtr<FDS_ViewModelContext,1> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_GoodsInfoList);
  bVar7 = TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr>::UEOpEquals(&this->NPCShopData,(void *)0x0)
  ;
  if (bVar7) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_398._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_398,"UDS_VM_NPCShopData::UpdateGoodsInfoList",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_398.Ptr,0x5c,L"NPCShopData is nullptr.");
      if ((void *)local_398._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_398._padding_);
      }
    }
  }
  else {
    TVar16.DebugPtr = (UDS_UserObjectListItem *)0x0;
    bVar7 = TWeakObjectPtr<UDS_NpcFunctionShop,FWeakObjectPtr>::UEOpEquals
                      (&this->NpcFunctionShop,(void *)0x0);
    if (bVar7) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_VM_NPCShopData::UpdateGoodsInfoList",0x27,Yes);
        UDS_LogManager::PrintLog(pUVar9,1,Warning,local_278.Ptr,0x62,L"NpcFunctionShop is nullptr.")
        ;
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
    }
    else {
      this_00 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
      pTVar10 = UDS_NPCShopData::GetNPCShopGoodsInfoMap(this_00);
      uVar2 = *(uint *)&pTVar10->field_0x28;
      pUVar20 = (UDS_M_ItemImplNpcShopSlot *)0x0;
      uStack_410 = 0;
      uStack_40c = 1;
      TStack_480.Array = (TBitArray<FDefaultBitArrayAllocator> *)&pTVar10->field_0x10;
      uStack_3fc = uStack_410;
      local_3f8 = uStack_410;
      if (uVar2 != 0) {
        puVar19 = *(uint **)&pTVar10->field_0x20;
        if (*(uint **)&pTVar10->field_0x20 == (uint *)0x0) {
          puVar19 = (uint *)TStack_480.Array;
        }
        TVar16.DebugPtr = (UDS_UserObjectListItem *)0x0;
        uVar3 = *puVar19;
        pUVar18 = pUVar20;
        pUVar13 = pUVar20;
        local_3f8 = 0;
        uStack_410 = 0;
        while (uVar3 == 0) {
          iVar8 = (int)pUVar18;
          local_3f8 = (int)pUVar13 + 0x20;
          pUVar13 = (UDS_M_ItemImplNpcShopSlot *)(ulonglong)local_3f8;
          uStack_410 = iVar8 + 1;
          pUVar18 = (UDS_M_ItemImplNpcShopSlot *)(ulonglong)uStack_410;
          uStack_3fc = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_410)
          goto LAB_14bf1ff6d;
          uVar3 = puVar19[(longlong)iVar8 + 1];
        }
        uStack_40c = -uVar3 & uVar3;
        uVar1 = (ulonglong)uStack_40c * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_460 = (int)lVar17;
        uStack_3fc = (local_3f8 - 1) + local_460;
        if ((int)uVar2 < (int)uStack_3fc) {
          uStack_3fc = uVar2;
        }
      }
LAB_14bf1ff6d:
      uStack_400 = 0xffffffff;
      TStack_480._padding_ = CONCAT44(uStack_40c,uStack_410);
      TStack_480.UnvisitedBitMask = 0xffffffff;
      TStack_480._28_4_ = uStack_3fc;
      TStack_480.BaseBitIndex = local_3f8;
      local_418 = pTVar10;
      local_408 = (undefined1 *)TStack_480.Array;
      uStack_3f4 = uStack_3fc;
      TStack_480.CurrentBitIndex = uStack_3fc;
      if ((int)uStack_3fc < (int)uVar2) {
        do {
          this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf203a1;
          }
          else {
            if (this_01 == (UDS_UserObjectListItem *)0x0) {
LAB_14bf203a1:
              pUVar9 = UDS_LogManager::GetInst();
              if (pUVar9 == (UDS_LogManager *)0x0) {
                return;
              }
              pUVar9 = UDS_LogManager::GetInst();
              local_158._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_158,"UDS_VM_NPCShopData::UpdateGoodsInfoList",0x27,Yes);
              UDS_LogManager::PrintLog(pUVar9,1,Warning,local_158.Ptr,0x6c,L"listItem is nullptr.");
              if ((void *)local_158._padding_ == (void *)0x0) {
                return;
              }
              FMemory::Free((void *)local_158._padding_);
              return;
            }
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          lVar17 = (longlong)TStack_480.CurrentBitIndex * 0x60;
          iVar8 = *(int *)(lVar17 + 0x10 + *(longlong *)pTVar10);
          this_02 = DS_ItemDataUtil::CreateItemModel
                              ((EDS_ItemSlotStateType)local_3c8,(int)CONCAT71(TVar16._1_7_,0x22));
          pUVar18 = pUVar20;
          if (*(longlong *)this_02.field0_0x0 != 0) {
            pUVar11 = Z_Construct_UClass_UDS_M_ItemImplNpcShopSlot_NoRegister();
            bVar7 = FObjectPtr::IsA((FObjectPtr *)this_02.field0_0x0,pUVar11);
            if (bVar7) {
              pUVar18 = *(UDS_M_ItemImplNpcShopSlot **)this_02.field0_0x0;
            }
          }
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar18 == (UDS_M_ItemImplNpcShopSlot *)0x0) goto LAB_14bf20372;
          }
          else {
            if (pUVar18 == (UDS_M_ItemImplNpcShopSlot *)0x0) {
LAB_14bf20372:
              bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<785812284537569396>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcShop\\DS_VM_NPCShopData.cpp"
                                 ,0x74,"false");
              if (!bVar7) {
                return;
              }
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            UE::GC::MarkAsReachable((UObject *)pUVar18);
          }
          (**(code **)(pUVar18->_padding_ + 0x348))
                    (pUVar18,*(undefined4 *)(lVar17 + 0x1c + *(longlong *)pTVar10));
          UDS_M_ItemImplBase::SetQuantity
                    ((UDS_M_ItemImplBase *)pUVar18,*(int *)(lVar17 + 0x20 + *(longlong *)pTVar10));
          UDS_M_ItemImplNpcShopSlot::SetNPCShopInfo
                    (pUVar18,(TWeakObjectPtr<UDS_NpcFunctionShop,FWeakObjectPtr>)
                             (this->NpcFunctionShop).WeakPtr,
                     (TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr>)(this->NPCShopData).WeakPtr,
                     iVar8);
          (**(code **)(pUVar18->_padding_ + 800))(pUVar18);
          puVar12 = (undefined8 *)(**(code **)(pUVar18->_padding_ + 0x310))(pUVar18,local_3c0);
          local_3e8.Object = (FDS_ViewModelContext *)*puVar12;
          local_3e8.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar12[1];
          if (local_3e8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_3e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_3e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          UDS_UserObjectListItem::AddContext(this_01,&local_3e8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3b8);
          pUVar13 = ::operator_new(0x40);
          pUVar18 = pUVar20;
          if (pUVar13 != (UDS_M_ItemImplNpcShopSlot *)0x0) {
            pUVar13->_padding_ = 0;
            pUVar13->_padding_ = 0;
            pUVar13->_padding_ = 0;
            pUVar13->_padding_ = 0;
            ((TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr> *)&pUVar13->_padding_)->WeakPtr =
                 (FWeakObjectPtr)0x0;
            ((TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr> *)&pUVar13->_padding_)->WeakPtr =
                 (FWeakObjectPtr)0x0;
            ((TWeakObjectPtr<UDS_NpcFunctionShop,FWeakObjectPtr> *)&pUVar13->_padding_)->WeakPtr =
                 (FWeakObjectPtr)0x0;
            pUVar13->_padding_ = 0;
            FDS_ViewModelContext_NPCShop::FDS_ViewModelContext_NPCShop
                      ((FDS_ViewModelContext_NPCShop *)pUVar13);
            *(undefined4 *)&pUVar13->_padding_ = 0;
            pUVar13->_padding_ = (longlong)&___7FDS_ViewModelContext_NPCShopGoodsInfo__6B_;
            *(undefined4 *)((longlong)&pUVar13->_padding_ + 4) = 0xffffffff;
            pUVar18 = pUVar13;
          }
          pUVar14 = ::operator_new(0x20);
          pUVar13 = pUVar20;
          if (pUVar14 != (UDS_M_ItemImplNpcShopSlot *)0x0) {
            *(undefined4 *)&pUVar14->_padding_ = 1;
            pUVar14->_padding_ = (longlong)ViewModelContextDeleter;
            pUVar14->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_NPCShopGoodsInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
            ;
            *(undefined4 *)((longlong)&pUVar14->_padding_ + 4) = 1;
            pUVar14->_padding_ = (longlong)pUVar18;
            pUVar13 = pUVar14;
          }
          if ((pUVar18 == (UDS_M_ItemImplNpcShopSlot *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pUVar15 = FDS_ViewModelContext_NPCShopGoodsInfo::StaticStruct();
          pUVar18->_padding_ = (longlong)pUVar15;
          this_03 = UDS_ViewModelContextManager::GetInst();
          if (this_03 != (UDS_ViewModelContextManager *)0x0) {
            if (pUVar13 != (UDS_M_ItemImplNpcShopSlot *)0x0) {
              LOCK();
              *(int *)&pUVar13->_padding_ = (int)pUVar13->_padding_ + 1;
              UNLOCK();
            }
            local_438.Object = (FDS_ViewModelContext *)pUVar18;
            local_438.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pUVar13;
            UDS_ViewModelContextManager::RegisterContext(this_03,&local_438);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_438.SharedReferenceCount.ReferenceController);
          }
          *(undefined4 *)&pUVar18->_padding_ = 0x100;
          ((TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr> *)&pUVar18->_padding_)->WeakPtr =
               (this->NPCShopData).WeakPtr;
          ((TWeakObjectPtr<UDS_NpcFunctionShop,FWeakObjectPtr> *)&pUVar18->_padding_)->WeakPtr =
               (this->NpcFunctionShop).WeakPtr;
          *(int *)&pUVar18->_padding_ = iVar8;
          if (pUVar13 != (UDS_M_ItemImplNpcShopSlot *)0x0) {
            LOCK();
            *(int *)&pUVar13->_padding_ = (int)pUVar13->_padding_ + 1;
            UNLOCK();
          }
          local_3d8.Object = (FDS_ViewModelContext *)pUVar18;
          local_3d8.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pUVar13;
          UDS_UserObjectListItem::AddContext(this_01,&local_3d8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pUVar13);
          MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_428);
          pFVar5 = local_428.Object;
          if ((local_428.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar17 = (longlong)TStack_480.CurrentBitIndex;
          *(undefined4 *)&pFVar5->_padding_ = 0x192;
          iVar8 = FDS_NPCShopGoodsInfo::GetItemCostIconID
                            ((FDS_NPCShopGoodsInfo *)(*(longlong *)pTVar10 + 8 + lVar17 * 0x60));
          FVar6.ReferenceController = local_428.SharedReferenceCount.ReferenceController;
          pFVar5->MoneyId = (longlong)iVar8;
          local_3a8.Object = (FDS_ViewModelContext *)local_428.Object;
          local_3a8.SharedReferenceCount.ReferenceController =
               local_428.SharedReferenceCount.ReferenceController;
          pFVar5->Quantity = (longlong)*(int *)(lVar17 * 0x60 + 0x30 + *(longlong *)pTVar10);
          if (local_428.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_428.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_428.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          UDS_UserObjectListItem::AddContext(this_01,&local_3a8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar6.ReferenceController);
          local_458[0] = this_01;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          TVar16.DebugPtr = (UDS_UserObjectListItem *)local_458;
          FDS_EntryBindingEventField::Add
                    (&this->EntryBindingEventField_GoodsInfoList,
                     (TObjectPtr<UDS_UserObjectListItem>)TVar16.ObjectPtr.field0_0x0);
          TStack_480.UnvisitedBitMask = TStack_480.UnvisitedBitMask & ~TStack_480._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_480);
        } while (TStack_480.CurrentBitIndex < (TStack_480.Array)->NumBits);
      }
      local_440 = FFieldNotificationClassDescriptor::EntryBindingEventField_GoodsInfoList.BitNumber;
      local_448 = FFieldNotificationClassDescriptor::EntryBindingEventField_GoodsInfoList.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_448);
    }
  }
  return;
}

