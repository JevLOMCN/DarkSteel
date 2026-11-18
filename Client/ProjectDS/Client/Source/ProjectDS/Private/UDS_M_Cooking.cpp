// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// StaticClass @ 14b50b1d0

UClass * __cdecl UDS_M_Cooking::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_Cooking.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_Cooking",
               &Z_Registration_Info_UClass_UDS_M_Cooking.InnerSingleton,
               StaticRegisterNativesUDS_M_Cooking,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_M_Cooking>,InternalVTableHelperCtorCaller<UDS_M_Cooking>,
               local_res8,UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_Cooking.InnerSingleton;
}

// UDS_M_Cooking @ 14b510b40

UDS_M_Cooking * __thiscall UDS_M_Cooking::UDS_M_Cooking(UDS_M_Cooking *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_Cooking__6B_;
  (this->InventoryBagModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->InventoryBagModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->SelectedCookingItemSlotModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SelectedCookingItemSlotModel).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// UDS_M_Cooking @ 14b510bb0

UDS_M_Cooking * __thiscall
UDS_M_Cooking::UDS_M_Cooking(UDS_M_Cooking *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_Cooking__6B_;
  (this->InventoryBagModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->InventoryBagModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->SelectedCookingItemSlotModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SelectedCookingItemSlotModel).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~UDS_M_Cooking @ 14b512d30

void __thiscall UDS_M_Cooking::~UDS_M_Cooking(UDS_M_Cooking *this)

{
  this->_padding_ = (longlong)&___7UDS_M_Cooking__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b515780

UClass * __cdecl UDS_M_Cooking::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_Cooking.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_Cooking",
               &Z_Registration_Info_UClass_UDS_M_Cooking.InnerSingleton,
               StaticRegisterNativesUDS_M_Cooking,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_M_Cooking>,InternalVTableHelperCtorCaller<UDS_M_Cooking>,
               local_res8,UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_Cooking.InnerSingleton;
}

// StaticRegisterNativesUDS_M_Cooking @ 14b516c30

void __cdecl UDS_M_Cooking::StaticRegisterNativesUDS_M_Cooking(void)

{
  return;
}

// ClearTarget @ 14bceb670

void __thiscall UDS_M_Cooking::ClearTarget(UDS_M_Cooking *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_M_ItemImplBase *this_00;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->SelectedCookingItemSlotModel).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_M_ItemImplBase *)
              FWeakObjectPtr::Get(&(this->SelectedCookingItemSlotModel).WeakPtr);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    UDS_M_ItemImplBase::SetItemData(this_00,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res8)
    ;
    *(undefined1 *)&this->_padding_ = 1;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8257730996347076359>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Cooking.cpp"
                       ,0xf9,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetSelectedCookingTID @ 14bcfb980

int __thiscall UDS_M_Cooking::GetSelectedCookingTID(UDS_M_Cooking *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->SelectedCookingItemSlotModel).WeakPtr);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&(this->SelectedCookingItemSlotModel).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014bcfb9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(*(longlong *)pUVar4 + 0x380))
                      (pUVar4,*(code **)(*(longlong *)pUVar4 + 0x380));
    return iVar3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8257730996347076424>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Cooking.cpp"
                     ,0xb8,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetShareState @ 14bcfba70

EDS_ShareState __thiscall UDS_M_Cooking::GetShareState(UDS_M_Cooking *this)

{
  code *pcVar1;
  bool bVar2;
  EDS_ShareState EVar3;
  int iVar4;
  int iVar5;
  UObject *pUVar6;
  UDS_NPCCampData *this_00;
  atomic<unsigned_char> *paVar7;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_18;
  undefined8 local_10;
  
  UDS_PlayerData::GetData((ulong64)&local_res18,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    DS_CommonDataHelper::CookingCostTicketType();
    pUVar6 = FWeakObjectPtr::Get(&local_res18);
    local_10 = *(undefined8 *)&pUVar6[8].field_0x10;
    UDS_TicketData::GetDataByCharEntityID((ulong64 *)&local_res20,(EDS_TicketType *)&local_10);
    bVar2 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar2) {
      pUVar6 = FWeakObjectPtr::Get(&local_res20);
      iVar5 = *(int *)&pUVar6[2].field_0xc;
      iVar4 = DS_CommonDataHelper::CookingCostTicketValue();
      if (iVar5 < iVar4) {
        return EmptyTicket;
      }
      FDS_DataContainer::GetData<unsigned___int64,enum_EDS_CookingData>
                ((FDS_DataContainer *)&this->_padding_,CampEntityID);
      UDS_NPCCampData::GetData((ulong64)&local_18);
      bVar2 = FWeakObjectPtr::IsValid(&local_18);
      if (bVar2) {
        this_00 = (UDS_NPCCampData *)FWeakObjectPtr::Get(&local_18);
        iVar5 = UDS_NPCCampData::GetOccupantCount(this_00);
        return (1 < iVar5) + NoOneToShare;
      }
      return Enable;
    }
    iVar5 = 0xe0;
    paVar7 = &bGEnsureHasExecuted<_8257730996347076384>;
  }
  else {
    iVar5 = 0xdc;
    paVar7 = &bGEnsureHasExecuted<_8257730996347076388>;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar7,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Cooking.cpp"
                     ,iVar5,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return Error;
}

// GetViewModelContext @ 14bcff780

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_Cooking::GetViewModelContext
          (UDS_M_Cooking *this,TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  *(undefined4 *)&this->_padding_ = 0x1d1;
  UDS_ModelBase::GetViewModelContext((UDS_ModelBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsSelectedCookingShared @ 14bd061e0

bool __thiscall UDS_M_Cooking::IsSelectedCookingShared(UDS_M_Cooking *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  UObject *pUVar5;
  FDS_ItemBaseTableRow *pFVar6;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->SelectedCookingItemSlotModel).WeakPtr);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&(this->SelectedCookingItemSlotModel).WeakPtr);
    iVar4 = (**(code **)(*(longlong *)pUVar5 + 0x380))(pUVar5);
    pFVar6 = FDS_ItemBaseTableRow::Get((longlong)iVar4,true);
    if (pFVar6 != (FDS_ItemBaseTableRow *)0x0) {
      return pFVar6->ItemType == PlayerSkillCookingShare;
    }
    return false;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8257730996347076432>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Cooking.cpp"
                     ,0xb0,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// IsTargetEmpty @ 14bd065a0

bool __thiscall UDS_M_Cooking::IsTargetEmpty(UDS_M_Cooking *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->SelectedCookingItemSlotModel).WeakPtr);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&(this->SelectedCookingItemSlotModel).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014bd06608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*(longlong *)pUVar4 + 0x558))
                      (pUVar4,*(code **)(*(longlong *)pUVar4 + 0x558));
    return (bool)uVar3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8257730996347076438>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Cooking.cpp"
                     ,0xaa,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// OnChangedCampNPCData @ 14bd09f30

void __thiscall UDS_M_Cooking::OnChangedCampNPCData(UDS_M_Cooking *this,UDS_DataBase *param_1)

{
  code *pcVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  *(undefined1 *)&this->_padding_ = 1;
  pcVar1 = *(code **)(this->_padding_ + 0x2e0);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (*pcVar1)(this,local_res8,0);
  return;
}

// OnClickedAloneCooking @ 14bd0adf0

void __thiscall UDS_M_Cooking::OnClickedAloneCooking(UDS_M_Cooking *this)

{
  int iVar1;
  
  iVar1 = GetSelectedCookingTID(this);
  FDS_CookingService::RequestCampCooking(iVar1,false);
  return;
}

// OnClickedItemSlotInventoryBag @ 14bd0bac0

void __thiscall
UDS_M_Cooking::OnClickedItemSlotInventoryBag
          (UDS_M_Cooking *this,TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(local_res10);
    iVar3 = (**(code **)(*(longlong *)pUVar4 + 0x380))(pUVar4);
    SetTarget(this,iVar3);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8257730996347076323>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Cooking.cpp"
                       ,0x11d,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnClickedItemSlotTarget @ 14bd0bb40

void __thiscall
UDS_M_Cooking::OnClickedItemSlotTarget
          (UDS_M_Cooking *this,TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_M_ItemImplBase *this_00;
  FWeakObjectPtr FStackX_8;
  undefined8 uStackX_10;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->SelectedCookingItemSlotModel).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_M_ItemImplBase *)
              FWeakObjectPtr::Get(&(this->SelectedCookingItemSlotModel).WeakPtr);
    FStackX_8.ObjectIndex = 0;
    FStackX_8.ObjectSerialNumber = 0;
    uStackX_10 = 0;
    FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
    UDS_M_ItemImplBase::SetItemData(this_00,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)FStackX_8);
    *(undefined1 *)&this->_padding_ = 1;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8257730996347076359>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Cooking.cpp"
                       ,0xf9,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnClickedShareCooking @ 14bd0bfb0

void __thiscall UDS_M_Cooking::OnClickedShareCooking(UDS_M_Cooking *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UObject *pUVar5;
  UDS_NPCCampData *this_00;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_48;
  undefined8 local_40;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_38;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_20;
  
  UDS_PlayerData::GetData((ulong64)&local_res18,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8257730996347076388>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Cooking.cpp"
                       ,0xdc,"false");
    if (!bVar2) {
      return;
    }
code_r0x00014bd0c099:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DS_CommonDataHelper::CookingCostTicketType();
  pUVar5 = FWeakObjectPtr::Get(&local_res18);
  local_40 = *(undefined8 *)&pUVar5[8].field_0x10;
  UDS_TicketData::GetDataByCharEntityID((ulong64 *)&local_res20,(EDS_TicketType *)&local_40);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&local_res20);
    iVar4 = *(int *)&pUVar5[2].field_0xc;
    iVar3 = DS_CommonDataHelper::CookingCostTicketValue();
    if (iVar3 <= iVar4) {
      FDS_DataContainer::GetData<unsigned___int64,enum_EDS_CookingData>
                ((FDS_DataContainer *)&this->_padding_,CampEntityID);
      UDS_NPCCampData::GetData((ulong64)&local_48);
      bVar2 = FWeakObjectPtr::IsValid(&local_48);
      if (bVar2) {
        this_00 = (UDS_NPCCampData *)FWeakObjectPtr::Get(&local_48);
        iVar4 = UDS_NPCCampData::GetOccupantCount(this_00);
        if (iVar4 < 2) {
          local_38._0_8_ = 0;
          local_38._8_8_ = 0;
          local_38._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x4d271,Alert_None_01,&local_38);
          return;
        }
      }
      iVar4 = GetSelectedCookingTID(this);
      FDS_CookingService::RequestCampCooking(iVar4,true);
      return;
    }
    local_20._0_8_ = 0;
    local_20._8_8_ = 0;
    local_20._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x587,Alert_None_01,&local_20);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8257730996347076384>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Cooking.cpp"
                       ,0xe0,"false");
    if (bVar2) goto code_r0x00014bd0c099;
  }
  return;
}

// OnDeInit @ 14bd0cc60

void __thiscall UDS_M_Cooking::OnDeInit(UDS_M_Cooking *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDS_CookingService::OnRecvDelegateCampCooking,this);
  return;
}

// OnInit @ 14bd0e890

void __thiscall UDS_M_Cooking::OnInit(UDS_M_Cooking *this)

{
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_M_Cooking>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FDS_CookingService::OnRecvDelegateCampCooking,(UDS_M_Cooking *)&stack0x00000010,
             (pmf_eaf4b41f)this);
  return;
}

// OnRecvCampCooking @ 14bd0ffa0

void __thiscall UDS_M_Cooking::OnRecvCampCooking(UDS_M_Cooking *this)

{
  code *pcVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  ClearTarget(this);
  pcVar1 = *(code **)(this->_padding_ + 0x2e0);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (*pcVar1)(this,local_res8,0);
  return;
}

// OnRemoveCamp @ 14bd10f30

void __thiscall UDS_M_Cooking::OnRemoveCamp(UDS_M_Cooking *this,ulong64 *param_1)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  UDS_ContentManager *this_00;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  uVar1 = *param_1;
  uVar4 = FDS_DataContainer::GetData<unsigned___int64,enum_EDS_CookingData>
                    ((FDS_DataContainer *)&this->_padding_,CampEntityID);
  if (uVar4 == uVar1) {
    this_00 = UDS_ContentManager::GetInst();
    if (this_00 == (UDS_ContentManager *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8257730996347076338>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Cooking.cpp"
                         ,0x10e,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      UDS_ContentManager::CloseContent(this_00);
      local_28._0_8_ = 0;
      local_28._8_8_ = 0;
      local_28._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x4d262,Alert_System_01,&local_28);
    }
  }
  return;
}

// OnUpdateModel @ 14bd11b80

void __thiscall
UDS_M_Cooking::OnUpdateModel
          (UDS_M_Cooking *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_ItemSlotStateType EVar3;
  int iVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UDS_M_ItemImplBase *this_00;
  UObject *pUVar7;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_48;
  UObject *local_40;
  UObject *local_38;
  UObject *local_30 [2];
  
  local_res10 = param_1.WeakPtr;
  TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               *)&this->_padding_,param_1);
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  pUVar7 = (UObject *)0x0;
  if (pUVar5 == (UObject *)0x0) {
LAB_14bd11bd5:
    pUVar5 = pUVar7;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar6->_padding_)) goto LAB_14bd11bd5;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_40 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_40);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res8);
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar5 + 1));
  if (pUVar5 == (UObject *)0x0) {
LAB_14bd11c6b:
    pUVar5 = pUVar7;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar6->_padding_)) goto LAB_14bd11c6b;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_38 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_38);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) {
    return;
  }
  this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_res18);
  EVar3 = UDS_M_ItemImplBase::GetItemSlotType(this_00);
  pUVar5 = FWeakObjectPtr::Get(&local_res8);
  iVar4 = *(int *)&pUVar5[5].field_0x8;
  if (iVar4 == 2) {
    if (EVar3 != ItemCookingTarget) {
      return;
    }
    goto LAB_14bd11ea9;
  }
  if (iVar4 != 3) {
    if (iVar4 == 6) {
      return;
    }
    if (iVar4 != 7) {
      if (iVar4 != 0xb) {
        return;
      }
      if (EVar3 != ItemCookingTarget) {
        return;
      }
LAB_14bd11ea9:
      ClearTarget(this);
      return;
    }
    if (EVar3 != ItemCooking) {
      if (EVar3 != ItemCookingTarget) {
        return;
      }
      goto LAB_14bd11ea9;
    }
    local_res20 = local_res18;
    bVar2 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar2) {
      pUVar5 = FWeakObjectPtr::Get(&local_res20);
      iVar4 = (**(code **)(*(longlong *)pUVar5 + 0x380))(pUVar5);
      SetTarget(this,iVar4);
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8257730996347076323>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Cooking.cpp"
                       ,0x11d,"false");
    if (!bVar2) {
      return;
    }
    goto code_r0x00014bd11e7a;
  }
  if (EVar3 != ItemCookingTarget) {
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar5 + 1));
  if (pUVar5 == (UObject *)0x0) {
LAB_14bd11df9:
    pUVar5 = pUVar7;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar6->_padding_)) goto LAB_14bd11df9;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_48.ObjectIndex = 0;
  local_48.ObjectSerialNumber = 0;
  local_30[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_48,(FObjectPtr)local_30);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    SetTarget(this,*(int *)&pUVar5[5].field_0xc);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8257730996347076468>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Cooking.cpp"
                     ,0x8c,"false");
  if (!bVar2) {
    return;
  }
code_r0x00014bd11e7a:
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// PreInitBindViewModel @ 14bd15540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDS_M_Cooking::PreInitBindViewModel(UDS_M_Cooking *this)

{
  UDS_ModelBase *pUVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  UDS_M_InventoryBag *pUVar5;
  FDS_DataContainer *pFVar6;
  TObjectPtr<UDS_M_ItemImplBase> TVar7;
  UDS_M_ItemImplBase *this_00;
  FObjectPtr_u_0 FVar8;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar9;
  TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *this_01;
  undefined1 auStackY_1f8 [32];
  FWeakObjectPtr local_1c8;
  UDS_M_InventoryBag *local_1c0;
  undefined8 local_1b8;
  UDS_ModelBase *local_1b0;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_1a8;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_190;
  undefined1 local_178 [8];
  FDS_DataContainer local_170;
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  void *local_88;
  undefined4 local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pUVar5 = NewObject<UDS_M_InventoryBag>((UObject *)this);
  UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,(UDS_ModelBase *)pUVar5);
  local_1c0 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_M_InventoryBag *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  FWeakObjectPtr::operator=(&(this->InventoryBagModel).WeakPtr,(FObjectPtr)&local_1c0);
  bVar4 = FWeakObjectPtr::IsValid(&(this->InventoryBagModel).WeakPtr);
  if (bVar4) {
    local_9c = 0x80;
    local_c8._0_8_ = (FScriptContainerElement *)0x0;
    local_c8._8_8_ = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_94 = 0;
    local_88 = (void *)0x0;
    local_80 = 0;
    local_78._0_8_ = (FScriptContainerElement *)0x0;
    local_78._8_8_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_44 = 0;
    local_38 = (void *)0x0;
    local_30 = 0;
    local_98 = 0xffffffff;
    local_4c = 0x80;
    local_48 = 0xffffffff;
    FDS_DataContainer::SetData<enum_EDS_BagGroupType,enum_EDS_InventoryBagData>
              ((FDS_DataContainer *)local_c8,BagGroupType,Cooking);
    pUVar5 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&(this->InventoryBagModel).WeakPtr);
    local_1a8._16_8_ = 0;
    local_1a8._0_8_ = 0;
    local_1a8._8_8_ = 0;
    local_190._16_8_ = 0;
    local_190._0_8_ = 0;
    local_190._8_8_ = 0;
    pFVar6 = FDS_DataContainer::FDS_DataContainer(&local_170,(FDS_DataContainer *)local_c8);
    UDS_M_InventoryBag::InitModel(pUVar5,pFVar6,&local_190,&local_1a8);
    FVar8.Handle = (UObject *)&local_1b8;
    local_1c8.ObjectIndex = 0;
    local_1c8.ObjectSerialNumber = 0;
    local_1b8 = 0;
    FWeakObjectPtr::operator=(&local_1c8,(FObjectPtr)FVar8);
    TVar9.WeakPtr._1_7_ = FVar8._1_7_;
    TVar9.WeakPtr.ObjectIndex._0_1_ = 0x2c;
    TVar7 = DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)local_178,TVar9);
    pUVar1 = *(UDS_ModelBase **)TVar7.field0_0x0;
    UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar1);
    this_01 = &this->SelectedCookingItemSlotModel;
    local_1b0 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_ModelBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FWeakObjectPtr::operator=(&this_01->WeakPtr,(FObjectPtr)&local_1b0);
    bVar4 = FWeakObjectPtr::IsValid(&this_01->WeakPtr);
    if (bVar4) {
      this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&this_01->WeakPtr);
      UDS_M_ItemImplBase::SetSubtract(this_00,true);
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8257730996347076578>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Cooking.cpp"
                         ,0x1e,"false");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_30 = 0;
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_78,0,local_78._8_4_);
    iVar3 = SUB84(local_78._8_8_,4);
    local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
    }
    local_48 = 0xffffffff;
    local_44 = 0;
    local_50 = 0;
    if (0x80 < local_4c) {
      local_4c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
    local_80 = 0;
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_c8,0,local_c8._8_4_);
    iVar3 = SUB84(local_c8._8_8_,4);
    local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
    }
    local_94 = 0;
    local_a0 = 0;
    local_98 = 0xffffffff;
    if (0x80 < local_9c) {
      local_9c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
    }
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8257730996347076585>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Cooking.cpp"
                       ,0x17,"false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// SetTarget @ 14bd22290

void __thiscall UDS_M_Cooking::SetTarget(UDS_M_Cooking *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_M_ItemImplBase *this_00;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar3;
  undefined1 local_res8 [8];
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->SelectedCookingItemSlotModel).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_M_ItemImplBase *)
              FWeakObjectPtr::Get(&(this->SelectedCookingItemSlotModel).WeakPtr);
    TVar3 = DS_ItemDataUtil::GetItemDataByTID((int)local_res8);
                    /* WARNING: Load size is inaccurate */
    UDS_M_ItemImplBase::SetItemData
              (this_00,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*TVar3.WeakPtr);
    *(undefined1 *)&this->_padding_ = 1;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8257730996347076350>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Cooking.cpp"
                       ,0x102,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UpdateSharedRate @ 14bd298e0

void __thiscall UDS_M_Cooking::UpdateSharedRate(UDS_M_Cooking *this,int param_1)

{
  return;
}

