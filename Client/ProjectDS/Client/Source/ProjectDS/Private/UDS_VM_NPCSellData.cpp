// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b6ae7b0

UClass * __cdecl UDS_VM_NPCSellData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NPCSellData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NPCSellData",
               &Z_Registration_Info_UClass_UDS_VM_NPCSellData.InnerSingleton,
               StaticRegisterNativesUDS_VM_NPCSellData,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NPCSellData>,
               InternalVTableHelperCtorCaller<UDS_VM_NPCSellData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NPCSellData.InnerSingleton;
}

// UDS_VM_NPCSellData @ 14b6b11e0

UDS_VM_NPCSellData * __thiscall
UDS_VM_NPCSellData::UDS_VM_NPCSellData(UDS_VM_NPCSellData *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->EntryBindingEventField_Basket).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->EntryBindingEventField_Basket).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Basket).UserObjectList.ArrayMax = 0;
  this->_padding_ = (longlong)&___7UDS_VM_NPCSellData__6B_;
  this->bIsAbleGarbage = false;
  (this->NPCSellData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->NPCSellData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->NpcFunctionShop).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NpcFunctionShop).WeakPtr,(FObjectPtr)&local_res8);
  this->SellBasketSlotMax = 0;
  return this;
}

// UDS_VM_NPCSellData @ 14b6b1280

UDS_VM_NPCSellData * __thiscall
UDS_VM_NPCSellData::UDS_VM_NPCSellData(UDS_VM_NPCSellData *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->EntryBindingEventField_Basket).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->EntryBindingEventField_Basket).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Basket).UserObjectList.ArrayMax = 0;
  this->_padding_ = (longlong)&___7UDS_VM_NPCSellData__6B_;
  this->bIsAbleGarbage = false;
  (this->NPCSellData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->NPCSellData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->NpcFunctionShop).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NpcFunctionShop).WeakPtr,(FObjectPtr)&local_res8);
  this->SellBasketSlotMax = 0;
  return this;
}

// ~UDS_VM_NPCSellData @ 14b6b39b0

void __thiscall UDS_VM_NPCSellData::~UDS_VM_NPCSellData(UDS_VM_NPCSellData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NPCSellData__6B_;
  pFVar1 = (this->EntryBindingEventField_Basket).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6b66a0

IClassDescriptor * __thiscall
UDS_VM_NPCSellData::GetFieldNotificationDescriptor(UDS_VM_NPCSellData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_NPCSellData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6b6e60

UClass * __cdecl UDS_VM_NPCSellData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NPCSellData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NPCSellData",
               &Z_Registration_Info_UClass_UDS_VM_NPCSellData.InnerSingleton,
               StaticRegisterNativesUDS_VM_NPCSellData,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NPCSellData>,
               InternalVTableHelperCtorCaller<UDS_VM_NPCSellData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NPCSellData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_NPCSellData @ 14b6b7d20

void __cdecl UDS_VM_NPCSellData::StaticRegisterNativesUDS_VM_NPCSellData(void)

{
  return;
}

// BindModel @ 14bed89a0

void __thiscall UDS_VM_NPCSellData::BindModel(UDS_VM_NPCSellData *this)

{
  UDS_NPCShopEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnClearedBasket,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ItemBasketType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_NPCSellData>
              (&pUVar1->OnClearedBasket,(UDS_VM_NPCSellData *)&stack0x00000010,(pmf_8db205f5 *)this)
    ;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedBasketType,
               this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ItemBasketType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_NPCSellData>
              (&pUVar1->OnChangedBasketType,(UDS_VM_NPCSellData *)&stack0x00000010,
               (pmf_8db205f5 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedBasket,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NPCSellData>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdatedBasket,(UDS_VM_NPCSellData *)&stack0x00000010,(pmf_6012042c *)this)
    ;
  }
  return;
}

// ClearBasket @ 14beda100

void __thiscall UDS_VM_NPCSellData::ClearBasket(UDS_VM_NPCSellData *this)

{
  FName local_18;
  int local_10;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_Basket);
  local_10 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnChangedBasketType @ 14bef7980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_NPCSellData::OnChangedBasketType(UDS_VM_NPCSellData *this,EDS_ItemBasketType param_1)

{
  FWeakObjectPtr FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_NPCSellData *this_00;
  TArray<FDS_NPCSellGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar5;
  UDS_UserObjectListItem *this_01;
  UClass *pUVar6;
  undefined8 *puVar7;
  UObject *pUVar8;
  longlong lVar9;
  FObjectPtr_u_0 FVar10;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar11;
  FName *pFVar12;
  int iVar13;
  FObjectPtr_u_0 FVar14;
  FObjectPtr_u_0 FVar15;
  FObjectPtr_u_0 FVar16;
  undefined1 auStackY_458 [32];
  FWeakObjectPtr FStack_428;
  FObjectPtr_u_0 FStack_420;
  undefined8 uStack_418;
  UDS_UserObjectListItem *pUStack_410;
  FName FStack_408;
  int iStack_400;
  FName FStack_3f8;
  int iStack_3f0;
  FName FStack_3e8;
  int iStack_3e0;
  FName FStack_3d8;
  int iStack_3d0;
  FName FStack_3c8;
  int iStack_3c0;
  TSharedPtr<FDS_ViewModelContext,1> TStack_3b8;
  undefined1 auStack_3a8 [8];
  TReferenceControllerBase<1> *pTStack_3a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  if (param_1 != SellBasket) {
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_458;
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_Basket);
  bVar3 = TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr>::UEOpEquals(&this->NPCSellData,(void *)0x0)
  ;
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      TStack_398._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_398,"UDS_VM_NPCSellData::UpdateBasket",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_398.Ptr,0x4e,L"NPCSellData is nullptr.");
      if ((void *)TStack_398._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_398._padding_);
      }
    }
    iStack_400 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.BitNumber;
    FStack_408 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_408);
  }
  else {
    bVar3 = TWeakObjectPtr<UDS_NpcFunctionShop,FWeakObjectPtr>::UEOpEquals
                      (&this->NpcFunctionShop,(void *)0x0);
    if (bVar3) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        TStack_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_278,"UDS_VM_NPCSellData::UpdateBasket",0x20,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,TStack_278.Ptr,0x55,L"NpcFunctionSell is nullptr.");
        if ((void *)TStack_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_278._padding_);
        }
      }
      iStack_3f0 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.BitNumber;
      FStack_3f8 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_3f8);
    }
    else {
      this_00 = (UDS_NPCSellData *)FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
      pTVar5 = UDS_NPCSellData::GetNPCSellBasket(this_00);
      FVar16.Handle = (UObject *)0x0;
      FVar14.Handle = FVar16.Handle;
      FVar15.Handle = FVar16.Handle;
      if (0 < this->SellBasketSlotMax) {
        do {
          this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf1ef8c;
          }
          else {
            if (this_01 == (UDS_UserObjectListItem *)0x0) {
LAB_14bf1ef8c:
              pUVar4 = UDS_LogManager::GetInst();
              if (pUVar4 != (UDS_LogManager *)0x0) {
                pUVar4 = UDS_LogManager::GetInst();
                TStack_158._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&TStack_158,"UDS_VM_NPCSellData::UpdateBasket",0x20,Yes);
                UDS_LogManager::PrintLog
                          (pUVar4,1,Warning,TStack_158.Ptr,0x62,L"listItem is nullptr.");
                if ((void *)TStack_158._padding_ != (void *)0x0) {
                  FMemory::Free((void *)TStack_158._padding_);
                }
              }
              iStack_3e0 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.
                           BitNumber;
              FStack_3e8 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.
                           FieldName;
              pFVar12 = &FStack_3e8;
              lVar9 = this->_padding_;
              goto LAB_14bf1ef1d;
            }
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          FVar10.Handle = (UObject *)&uStack_418;
          FStack_428.ObjectIndex = 0;
          FStack_428.ObjectSerialNumber = 0;
          uStack_418 = 0;
          FWeakObjectPtr::operator=(&FStack_428,(FObjectPtr)FVar10);
          iVar13 = FVar14._0_4_;
          if ((-1 < iVar13) && (iVar13 < pTVar5->ArrayNum)) {
            if (iVar13 < 0) {
              FVar10.Handle = (UObject *)0x1506109c0;
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
            FStack_428 = *(FWeakObjectPtr *)
                          (&(FVar15.Handle)->field_0x8 + (longlong)(pTVar5->AllocatorInstance).Data)
            ;
          }
          TVar11.WeakPtr._1_7_ = FVar10._1_7_;
          TVar11.WeakPtr.ObjectIndex._0_1_ = 0x24;
          DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)&FStack_420,TVar11);
          if (FStack_420.Handle == (UObject *)0x0) {
LAB_14bf1edfe:
            FVar14.Handle = FVar16.Handle;
          }
          else {
            pUVar6 = Z_Construct_UClass_UDS_M_ItemImplNpcShopSellBasketSlot_NoRegister();
            bVar3 = FObjectPtr::IsA((FObjectPtr *)&FStack_420,pUVar6);
            FVar14 = FStack_420;
            if (!bVar3) goto LAB_14bf1edfe;
          }
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (FVar14.Handle == (UObject *)0x0) goto LAB_14bf1ef5d;
          }
          else {
            if (FVar14.Handle == (UObject *)0x0) {
LAB_14bf1ef5d:
              bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_7151666790370639759>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcShop\\DS_VM_NPCSellData.cpp"
                                 ,0x71,"false");
              if (!bVar3) {
                return;
              }
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            UE::GC::MarkAsReachable(FVar14.Handle);
          }
          FVar1 = (this->NpcFunctionShop).WeakPtr;
          *(int *)&(FVar14.Handle + 0x1e0)->field_0x10 = FVar1.ObjectIndex;
          *(int *)&(FVar14.Handle + 0x1e0)->field_0x14 = FVar1.ObjectSerialNumber;
          FVar1 = (this->NPCSellData).WeakPtr;
          *(int *)&(FVar14.Handle + 0x1e0)->field_0x18 = FVar1.ObjectIndex;
          *(int *)&(FVar14.Handle + 0x1e0)->field_0x1c = FVar1.ObjectSerialNumber;
          *(int *)&FVar14.Handle[0xc].field_0x20 = iVar13;
          puVar7 = (undefined8 *)
                   (**(code **)(*(longlong *)FVar14.Handle + 0x310))(FVar14.Handle,auStack_3a8);
          TStack_3b8.Object = (FDS_ViewModelContext *)*puVar7;
          TStack_3b8.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar7[1];
          if (TStack_3b8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (TStack_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(TStack_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          UDS_UserObjectListItem::AddContext(this_01,&TStack_3b8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_3a0);
          pUStack_410 = this_01;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          FDS_EntryBindingEventField::Add
                    (&this->EntryBindingEventField_Basket,
                     (TObjectPtr<UDS_UserObjectListItem>)&pUStack_410);
          FVar14._0_4_ = iVar13 + 1;
          FVar14._4_4_ = 0;
          FVar15 = (FObjectPtr_u_0)&(FVar15.Handle)->field_0x1c;
        } while ((int)FVar14._0_4_ < this->SellBasketSlotMax);
      }
      iStack_3d0 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.BitNumber;
      FStack_3d8 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_3d8);
      pUVar8 = FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
      this->bIsAbleGarbage = *(bool *)(pUVar8 + 3);
      pFVar12 = &FStack_3c8;
      iStack_3c0 = FFieldNotificationClassDescriptor::bIsAbleGarbage.BitNumber;
      lVar9 = this->_padding_;
      FStack_3c8 = FFieldNotificationClassDescriptor::bIsAbleGarbage.FieldName;
LAB_14bf1ef1d:
      (**(code **)(lVar9 + 0x38))(&this->_padding_,pFVar12);
    }
  }
  return;
}

// OnCleardBasket @ 14bef8590

void __thiscall
UDS_VM_NPCSellData::OnCleardBasket(UDS_VM_NPCSellData *this,EDS_ItemBasketType param_1)

{
  FName local_18;
  int local_10;
  
  if (param_1 == SellBasket) {
    FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_Basket);
    local_10 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14bf07540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_NPCSellData::OnSetViewModel
          (UDS_VM_NPCSellData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
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
                (&local_388,"UDS_VM_NPCSellData::OnSetViewModel",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_388.Ptr,0x15,L"npcShopContext.IsValid() == false");
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
    (this->NPCSellData).WeakPtr = ((local_3a8.Object)->NPCSellData).WeakPtr;
    bVar3 = FWeakObjectPtr::IsValid(&(this->NPCSellData).WeakPtr);
    if (bVar3) {
      (this->NpcFunctionShop).WeakPtr = ((local_3a8.Object)->NpcFunctionShop).WeakPtr;
      bVar3 = FWeakObjectPtr::IsValid(&(this->NpcFunctionShop).WeakPtr);
      if (bVar3) {
        pUVar5 = FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
        this->SellBasketSlotMax = *(int *)&pUVar5[3].field_0x10;
      }
      else {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_VM_NPCSellData::OnSetViewModel",0x22,Yes);
          UDS_LogManager::PrintLog
                    (pUVar4,1,Warning,local_148.Ptr,0x23,L"NpcFunctionShop.IsValid() == false");
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
                  (&local_268,"UDS_VM_NPCSellData::OnSetViewModel",0x22,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_268.Ptr,0x1c,L"NPCSellData.IsValid() == false");
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

// OnUpdatedSellBasket @ 14bf0b230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_NPCSellData::OnUpdatedSellBasket(UDS_VM_NPCSellData *this)

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
                (&local_138,"UDS_VM_NPCSellData::OnUpdatedSellBasket",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x97,L"NpcFunctionShop is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(&(this->NpcFunctionShop).WeakPtr);
    iVar2 = (**(code **)(*(longlong *)&pUVar4[1].field_0x10 + 0x10))(&pUVar4[1].field_0x10);
    if (iVar2 == 2) {
      UpdateBasket(this);
    }
  }
  return;
}

// UnbindModel @ 14bf1e2b0

void __thiscall UDS_VM_NPCSellData::UnbindModel(UDS_VM_NPCSellData *this)

{
  UDS_NPCShopEvent *pUVar1;
  
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
  return;
}

// UpdateBasket @ 14bf1eb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_NPCSellData::UpdateBasket(UDS_VM_NPCSellData *this)

{
  FWeakObjectPtr FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_NPCSellData *this_00;
  TArray<FDS_NPCSellGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar5;
  UDS_UserObjectListItem *this_01;
  UClass *pUVar6;
  undefined8 *puVar7;
  UObject *pUVar8;
  longlong lVar9;
  FObjectPtr_u_0 FVar10;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar11;
  FName *pFVar12;
  int iVar13;
  FObjectPtr_u_0 FVar14;
  FObjectPtr_u_0 FVar15;
  FObjectPtr_u_0 FVar16;
  undefined1 auStackY_458 [32];
  FWeakObjectPtr local_428;
  FObjectPtr_u_0 local_420;
  undefined8 local_418;
  UDS_UserObjectListItem *local_410;
  FName local_408;
  int local_400;
  FName local_3f8;
  int local_3f0;
  FName local_3e8;
  int local_3e0;
  FName local_3d8;
  int local_3d0;
  FName local_3c8;
  int local_3c0;
  TSharedPtr<FDS_ViewModelContext,1> local_3b8;
  undefined1 local_3a8 [8];
  TReferenceControllerBase<1> *local_3a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_458;
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_Basket);
  bVar3 = TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr>::UEOpEquals(&this->NPCSellData,(void *)0x0)
  ;
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_398._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_398,"UDS_VM_NPCSellData::UpdateBasket",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_398.Ptr,0x4e,L"NPCSellData is nullptr.");
      if ((void *)local_398._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_398._padding_);
      }
    }
    local_400 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.BitNumber;
    local_408 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_408);
  }
  else {
    bVar3 = TWeakObjectPtr<UDS_NpcFunctionShop,FWeakObjectPtr>::UEOpEquals
                      (&this->NpcFunctionShop,(void *)0x0);
    if (bVar3) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_VM_NPCSellData::UpdateBasket",0x20,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_278.Ptr,0x55,L"NpcFunctionSell is nullptr.")
        ;
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
      local_3f0 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.BitNumber;
      local_3f8 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3f8);
    }
    else {
      this_00 = (UDS_NPCSellData *)FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
      pTVar5 = UDS_NPCSellData::GetNPCSellBasket(this_00);
      FVar16.Handle = (UObject *)0x0;
      FVar14.Handle = FVar16.Handle;
      FVar15.Handle = FVar16.Handle;
      if (0 < this->SellBasketSlotMax) {
        do {
          this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf1ef8c;
          }
          else {
            if (this_01 == (UDS_UserObjectListItem *)0x0) {
LAB_14bf1ef8c:
              pUVar4 = UDS_LogManager::GetInst();
              if (pUVar4 != (UDS_LogManager *)0x0) {
                pUVar4 = UDS_LogManager::GetInst();
                local_158._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_158,"UDS_VM_NPCSellData::UpdateBasket",0x20,Yes);
                UDS_LogManager::PrintLog
                          (pUVar4,1,Warning,local_158.Ptr,0x62,L"listItem is nullptr.");
                if ((void *)local_158._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_158._padding_);
                }
              }
              local_3e0 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.BitNumber
              ;
              local_3e8 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.FieldName
              ;
              pFVar12 = &local_3e8;
              lVar9 = this->_padding_;
              goto LAB_14bf1ef1d;
            }
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          FVar10.Handle = (UObject *)&local_418;
          local_428.ObjectIndex = 0;
          local_428.ObjectSerialNumber = 0;
          local_418 = 0;
          FWeakObjectPtr::operator=(&local_428,(FObjectPtr)FVar10);
          iVar13 = FVar14._0_4_;
          if ((-1 < iVar13) && (iVar13 < pTVar5->ArrayNum)) {
            if (iVar13 < 0) {
              FVar10.Handle = (UObject *)0x1506109c0;
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
            local_428 = *(FWeakObjectPtr *)
                         (&(FVar15.Handle)->field_0x8 + (longlong)(pTVar5->AllocatorInstance).Data);
          }
          TVar11.WeakPtr._1_7_ = FVar10._1_7_;
          TVar11.WeakPtr.ObjectIndex._0_1_ = 0x24;
          DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)&local_420,TVar11);
          if (local_420.Handle == (UObject *)0x0) {
LAB_14bf1edfe:
            FVar14.Handle = FVar16.Handle;
          }
          else {
            pUVar6 = Z_Construct_UClass_UDS_M_ItemImplNpcShopSellBasketSlot_NoRegister();
            bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_420,pUVar6);
            FVar14 = local_420;
            if (!bVar3) goto LAB_14bf1edfe;
          }
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (FVar14.Handle == (UObject *)0x0) goto LAB_14bf1ef5d;
          }
          else {
            if (FVar14.Handle == (UObject *)0x0) {
LAB_14bf1ef5d:
              bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_7151666790370639759>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcShop\\DS_VM_NPCSellData.cpp"
                                 ,0x71,"false");
              if (!bVar3) {
                return;
              }
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            UE::GC::MarkAsReachable(FVar14.Handle);
          }
          FVar1 = (this->NpcFunctionShop).WeakPtr;
          *(int *)&(FVar14.Handle + 0x1e0)->field_0x10 = FVar1.ObjectIndex;
          *(int *)&(FVar14.Handle + 0x1e0)->field_0x14 = FVar1.ObjectSerialNumber;
          FVar1 = (this->NPCSellData).WeakPtr;
          *(int *)&(FVar14.Handle + 0x1e0)->field_0x18 = FVar1.ObjectIndex;
          *(int *)&(FVar14.Handle + 0x1e0)->field_0x1c = FVar1.ObjectSerialNumber;
          *(int *)&FVar14.Handle[0xc].field_0x20 = iVar13;
          puVar7 = (undefined8 *)
                   (**(code **)(*(longlong *)FVar14.Handle + 0x310))(FVar14.Handle,local_3a8);
          local_3b8.Object = (FDS_ViewModelContext *)*puVar7;
          local_3b8.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar7[1];
          if (local_3b8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          UDS_UserObjectListItem::AddContext(this_01,&local_3b8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3a0);
          local_410 = this_01;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          FDS_EntryBindingEventField::Add
                    (&this->EntryBindingEventField_Basket,
                     (TObjectPtr<UDS_UserObjectListItem>)&local_410);
          FVar14._0_4_ = iVar13 + 1;
          FVar14._4_4_ = 0;
          FVar15 = (FObjectPtr_u_0)&(FVar15.Handle)->field_0x1c;
        } while ((int)FVar14._0_4_ < this->SellBasketSlotMax);
      }
      local_3d0 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.BitNumber;
      local_3d8 = FFieldNotificationClassDescriptor::EntryBindingEventField_Basket.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3d8);
      pUVar8 = FWeakObjectPtr::Get(&(this->NPCSellData).WeakPtr);
      this->bIsAbleGarbage = *(bool *)(pUVar8 + 3);
      pFVar12 = &local_3c8;
      local_3c0 = FFieldNotificationClassDescriptor::bIsAbleGarbage.BitNumber;
      lVar9 = this->_padding_;
      local_3c8 = FFieldNotificationClassDescriptor::bIsAbleGarbage.FieldName;
LAB_14bf1ef1d:
      (**(code **)(lVar9 + 0x38))(&this->_padding_,pFVar12);
    }
  }
  return;
}

