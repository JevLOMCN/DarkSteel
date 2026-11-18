// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 29

// StaticClass @ 14b50bad0

UClass * __cdecl UDS_M_ItemEnchant::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemEnchant.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemEnchant",
               &Z_Registration_Info_UClass_UDS_M_ItemEnchant.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemEnchant,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ItemEnchant>,
               InternalVTableHelperCtorCaller<UDS_M_ItemEnchant>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemEnchant.InnerSingleton;
}

// UDS_M_ItemEnchant @ 14b511a40

UDS_M_ItemEnchant * __thiscall
UDS_M_ItemEnchant::UDS_M_ItemEnchant(UDS_M_ItemEnchant *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_ItemEnchant__6B_;
  (this->TargetItemSlotModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->TargetItemSlotModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->ScrollItemSlotModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ScrollItemSlotModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->ResultItemSlotModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ResultItemSlotModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->OptionModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OptionModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->EnchantButtonModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->EnchantButtonModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->BagModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->BagModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->TargetItemData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->TargetItemData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->ScrollItemData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ScrollItemData).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// UDS_M_ItemEnchant @ 14b511b40

UDS_M_ItemEnchant * __thiscall
UDS_M_ItemEnchant::UDS_M_ItemEnchant(UDS_M_ItemEnchant *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_ItemEnchant__6B_;
  (this->TargetItemSlotModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->TargetItemSlotModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->ScrollItemSlotModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ScrollItemSlotModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->ResultItemSlotModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ResultItemSlotModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->OptionModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OptionModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->EnchantButtonModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->EnchantButtonModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->BagModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->BagModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->TargetItemData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->TargetItemData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->ScrollItemData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ScrollItemData).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~UDS_M_ItemEnchant @ 14b5131a0

void __thiscall UDS_M_ItemEnchant::~UDS_M_ItemEnchant(UDS_M_ItemEnchant *this)

{
  this->_padding_ = (longlong)&___7UDS_M_ItemEnchant__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b516440

UClass * __cdecl UDS_M_ItemEnchant::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemEnchant.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemEnchant",
               &Z_Registration_Info_UClass_UDS_M_ItemEnchant.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemEnchant,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ItemEnchant>,
               InternalVTableHelperCtorCaller<UDS_M_ItemEnchant>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemEnchant.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemEnchant @ 14b516da0

void __cdecl UDS_M_ItemEnchant::StaticRegisterNativesUDS_M_ItemEnchant(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_M_ItemEnchant_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnOpenedItemEnchantResult @ 14b518ef0

void __cdecl
UDS_M_ItemEnchant::execOnOpenedItemEnchantResult(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnOpenedItemEnchantResult((UDS_M_ItemEnchant *)param_1,local_res10);
  return;
}

// execOnRecvItemEnchantRequest @ 14b518f80

void __cdecl
UDS_M_ItemEnchant::execOnRecvItemEnchantRequest(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnRecvItemEnchantRequest((UDS_M_ItemEnchant *)param_1);
  return;
}

// GetViewModelContext @ 14bcff910

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_ItemEnchant::GetViewModelContext
          (UDS_M_ItemEnchant *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  *(undefined4 *)&this->_padding_ = 0xa2;
  UDS_ModelBase::GetViewModelContext((UDS_ModelBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsSelectedScroll @ 14bd06280

bool __thiscall UDS_M_ItemEnchant::IsSelectedScroll(UDS_M_ItemEnchant *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ScrollItemData).WeakPtr);
  return bVar1;
}

// IsSelectedTarget @ 14bd062a0

bool __thiscall UDS_M_ItemEnchant::IsSelectedTarget(UDS_M_ItemEnchant *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->TargetItemData).WeakPtr);
  return bVar1;
}

// OnClickedEnchantButton @ 14bd0b060

void __thiscall UDS_M_ItemEnchant::OnClickedEnchantButton(UDS_M_ItemEnchant *this)

{
  longlong *this_00;
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  EDS_MoneyType EVar4;
  int iVar5;
  uint uVar6;
  long64 lVar7;
  UObject *pUVar8;
  FName FVar9;
  FString *pFVar10;
  ulonglong uVar11;
  wchar_t *_Str;
  FWeakObjectPtr local_res8;
  undefined1 local_res10 [8];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_48;
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->TargetItemData).WeakPtr);
  if (!bVar3) {
    local_48._0_8_ = 0;
    local_48._8_8_ = 0;
    local_48._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0xa030,Alert_None_01,&local_48);
    return;
  }
  bVar3 = FWeakObjectPtr::IsValid(&(this->ScrollItemData).WeakPtr);
  if (!bVar3) {
    local_48._0_8_ = 0;
    local_48._8_8_ = 0;
    local_48._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0xa031,Alert_None_01,&local_48);
    return;
  }
  this_00 = &this->_padding_;
  iVar5 = FDS_DataContainer::GetData<int,enum_EDS_ItemEnchantData>
                    ((FDS_DataContainer *)this_00,EnchantMoneyValue);
  EVar4 = FDS_DataContainer::GetData<enum_EDS_MoneyType,enum_EDS_ItemEnchantData>
                    ((FDS_DataContainer *)this_00,EnchantMoneyType);
  lVar7 = DS_MoneyDataUtil::GetMoneyQuantity(EVar4);
  if (lVar7 < iVar5) {
    local_48._0_8_ = 0;
    local_48._8_8_ = 0;
    local_48._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0xa032,Alert_None_01,&local_48);
  }
  else {
    UDS_PlayerData::GetMainPlayerData();
    bVar3 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar3) {
      pUVar8 = FWeakObjectPtr::Get(&local_res8);
      iVar5 = *(int *)&pUVar8[9].field_0x10;
      pUVar8 = FWeakObjectPtr::Get(&(this->ScrollItemData).WeakPtr);
      iVar1 = *(int *)&pUVar8[8].field_0x8;
      pUVar8 = FWeakObjectPtr::Get(&(this->TargetItemData).WeakPtr);
      lVar7 = *(long64 *)&pUVar8[8].field_0x8;
      FVar9 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemEnchantData>
                        ((FDS_DataContainer *)this_00,(EDS_ItemEnchantData)local_res10);
      uVar2 = *(undefined8 *)FVar9;
      uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
      pFVar10 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::FindOrAddImpl<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)this_00,uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar9);
      if ((pFVar10->Data).ArrayNum == 0) {
        _Str = L"";
      }
      else {
        _Str = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      uVar11 = _wcstoui64(_Str,(wchar_t **)0x0,0);
      FDS_ItemEnchantService::RequestItemEnchant(uVar11,lVar7,iVar1,iVar5);
    }
  }
  return;
}

// OnClickedScrollItemSlot @ 14bd0bd80

void __thiscall
UDS_M_ItemEnchant::OnClickedScrollItemSlot
          (UDS_M_ItemEnchant *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  FWeakObjectPtr local_res8 [2];
  undefined8 local_res18 [2];
  
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
  (this->ScrollItemData).WeakPtr = local_res8[0];
  return;
}

// OnClickedScrollListItemSlot @ 14bd0bdc0

void __thiscall
UDS_M_ItemEnchant::OnClickedScrollListItemSlot
          (UDS_M_ItemEnchant *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_ItemData *this_00;
  FDS_ItemEnchantTableRow *pFVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res10;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_58;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_40;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&(this->TargetItemData).WeakPtr);
  if (bVar2) {
    bVar2 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar2) {
      this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res10);
      pFVar3 = UDS_ItemData::GetItemEnchantTable(this_00);
      if (pFVar3 == (FDS_ItemEnchantTableRow *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1976727082729734423>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                           ,0x117,"false");
        if (bVar2) goto code_r0x00014bd0beac;
      }
      else if ((pFVar3->ID_Prefix < 1) ||
              (pUVar4 = FWeakObjectPtr::Get(&(this->TargetItemData).WeakPtr),
              pFVar3->ID_Prefix != *(int *)(pUVar4 + 0x11))) {
        if ((pFVar3->ID_SetEffect < 1) ||
           (pUVar4 = FWeakObjectPtr::Get(&(this->TargetItemData).WeakPtr),
           pFVar3->ID_SetEffect != *(int *)&pUVar4[0x12].field_0x8)) {
          pUVar4 = FWeakObjectPtr::Get(&(this->TargetItemData).WeakPtr);
          if (*(EDS_GradeType *)(pUVar4 + 0x14) < pFVar3->ID_GradeType) {
            local_28._0_8_ = 0;
            local_28._8_8_ = 0;
            local_28._16_4_ = 0;
            UDS_UIMessageManager::OpenMsgByStringUi(0xa036,Alert_None_01,&local_28);
          }
          else {
            (this->ScrollItemData).WeakPtr = local_res10;
            Update(this);
          }
        }
        else {
          local_40._0_8_ = 0;
          local_40._8_8_ = 0;
          local_40._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0xa035,Alert_None_01,&local_40);
        }
      }
      else {
        local_58._0_8_ = 0;
        local_58._8_8_ = 0;
        local_58._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0xa035,Alert_None_01,&local_58);
      }
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1976727082729734420>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                         ,0x114,"false");
      if (bVar2) goto code_r0x00014bd0beac;
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1976727082729734419>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                       ,0x113,"false");
    if (bVar2) {
code_r0x00014bd0beac:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnClickedTargetItemSlot @ 14bd0c660

void __thiscall
UDS_M_ItemEnchant::OnClickedTargetItemSlot
          (UDS_M_ItemEnchant *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (this->TargetItemData).WeakPtr = local_res8;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (this->ScrollItemData).WeakPtr = local_res8;
  return;
}

// OnClickedTargetListItemSlot @ 14bd0c6d0

void __thiscall
UDS_M_ItemEnchant::OnClickedTargetListItemSlot
          (UDS_M_ItemEnchant *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  (this->TargetItemData).WeakPtr = param_1.WeakPtr;
  return;
}

// OnDeInit @ 14bd0cd10

void __thiscall UDS_M_ItemEnchant::OnDeInit(UDS_M_ItemEnchant *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDS_ItemEnchantService::OnRecvDelegateItemEnchant,this);
  return;
}

// OnInit @ 14bd0e970

void __thiscall UDS_M_ItemEnchant::OnInit(UDS_M_ItemEnchant *this)

{
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_M_ItemEnchant>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FDS_ItemEnchantService::OnRecvDelegateItemEnchant,
             (UDS_M_ItemEnchant *)&stack0x00000010,(pmf_4eac62cb)this);
  return;
}

// OnOpenedItemEnchantResult @ 14bd0f750

void __thiscall
UDS_M_ItemEnchant::OnOpenedItemEnchantResult(UDS_M_ItemEnchant *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  UObject *pUVar4;
  FName *pFVar5;
  UObject *pUVar6;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_98;
  FWeakObjectPtr local_90;
  FWeakObjectPtr local_88;
  FWeakObjectPtr local_80;
  FWeakObjectPtr local_78;
  UDS_ModelBase *local_70;
  UDS_UserWidget *local_68;
  UDS_ModelBase *local_60;
  UDS_UserWidget *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  FName local_38 [2];
  
  local_70 = NewObject<UDS_ModelBase>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70 != (UDS_ModelBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_70);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70 != (UDS_ModelBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_70);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_70);
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&local_res20);
    *(undefined4 *)&pUVar4[9].field_0x20 = 0xa4;
    pUVar4 = FWeakObjectPtr::Get(&local_res20);
    pcVar1 = *(code **)(*(longlong *)pUVar4 + 0x2e8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_98.ObjectIndex = 0;
    local_98.ObjectSerialNumber = 0;
    local_68 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_98,(FObjectPtr)&local_68);
    (*pcVar1)(pUVar4);
    bVar3 = FWeakObjectPtr::IsValid(&(this->OptionModel).WeakPtr);
    if (bVar3) {
      local_60 = NewObject<UDS_ModelBase>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_60 != (UDS_ModelBase *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)local_60);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_60 != (UDS_ModelBase *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)local_60);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_60);
      bVar3 = FWeakObjectPtr::IsValid(&local_res18);
      if (bVar3) {
        pUVar4 = FWeakObjectPtr::Get(&local_res18);
        *(undefined4 *)&pUVar4[9].field_0x20 = 0xa3;
        pUVar4 = FWeakObjectPtr::Get(&local_res18);
        pFVar5 = ::FName::FName(local_38,L"DS_VM_ItemEnchantOption");
        uVar2 = pFVar5->Number;
        *(uint *)&pUVar4[9].field_0x10 = (pFVar5->ComparisonIndex).Value;
        *(uint *)&pUVar4[9].field_0x14 = uVar2;
        pUVar4 = FWeakObjectPtr::Get(&(this->OptionModel).WeakPtr);
        pUVar6 = FWeakObjectPtr::Get(&local_res18);
        FDS_DataContainer::operator=
                  ((FDS_DataContainer *)&pUVar6[1].field_0x18,
                   (FDS_DataContainer *)&pUVar4[1].field_0x18);
        pUVar4 = FWeakObjectPtr::Get(&local_res18);
        pcVar1 = *(code **)(*(longlong *)pUVar4 + 0x2e8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_1 != (UDS_UserWidget *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_90.ObjectIndex = 0;
        local_90.ObjectSerialNumber = 0;
        local_58 = param_1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_1 != (UDS_UserWidget *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_90,(FObjectPtr)&local_58);
        (*pcVar1)(pUVar4,local_90);
        local_88.ObjectIndex = 0;
        local_88.ObjectSerialNumber = 0;
        local_50 = 0;
        FWeakObjectPtr::operator=(&local_88,(FObjectPtr)&local_50);
        (this->TargetItemData).WeakPtr = local_88;
        local_80.ObjectIndex = 0;
        local_80.ObjectSerialNumber = 0;
        local_48 = 0;
        FWeakObjectPtr::operator=(&local_80,(FObjectPtr)&local_48);
        (this->ScrollItemData).WeakPtr = local_80;
        Update(this);
        local_78.ObjectIndex = 0;
        local_78.ObjectSerialNumber = 0;
        local_40 = 0;
        pcVar1 = *(code **)(this->_padding_ + 0x2e0);
        FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_40);
        (*pcVar1)(this,local_78,0);
      }
      else {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1976727082729734512>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                           ,0x170,"false");
        if (bVar3) goto code_r0x00014bd0f94b;
      }
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1976727082729734509>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                         ,0x16d,"false");
      if (bVar3) goto code_r0x00014bd0f94b;
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1976727082729734504>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                       ,0x168,"false");
    if (bVar3) {
code_r0x00014bd0f94b:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnRecvItemEnchantRequest @ 14bd10000

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_M_ItemEnchant::OnRecvItemEnchantRequest(UDS_M_ItemEnchant *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_WindowManager *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  FWeakObjectPtr local_res10;
  UDS_WindowManager *local_res18;
  UDS_M_ItemEnchant *local_res20;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  local_res18 = UDS_WindowManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18 != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18 != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    this_00 = (UDS_WindowManager *)FWeakObjectPtr::Get(&local_res10);
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_ItemEnchant____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_M_ItemEnchant *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_res20 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_M_ItemEnchant *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res20);
      puVar3[4] = OnOpenedItemEnchantResult;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    UDS_WindowManager::OpenWindow
              (this_00,ItemEnchantResult,
               (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_68);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1976727082729734495>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                       ,0x15f,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnUpdateModel @ 14bd12d20

void __thiscall
UDS_M_ItemEnchant::OnUpdateModel
          (UDS_M_ItemEnchant *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  EDS_MoneyType EVar5;
  EDS_ItemSlotStateType EVar6;
  uint uVar7;
  int iVar8;
  UObject *pUVar9;
  FName FVar10;
  FString *pFVar11;
  long64 lVar12;
  ulonglong uVar13;
  UClass *pUVar14;
  UDS_M_ItemImplBase *this_00;
  FWeakObjectPtr *pFVar15;
  UDS_ItemData *this_01;
  FDS_ItemEnchantTableRow *pFVar16;
  wchar_t *pwVar17;
  wchar_t *_Str;
  UObject *pUVar18;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  FWeakObjectPtr local_138;
  FWeakObjectPtr local_130;
  UObject *local_128;
  UObject *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  UObject *local_100;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_f8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_e0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_c8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_b0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_98;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_80;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  undefined1 local_40 [8];
  
  local_res10 = param_1.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1976727082729734250>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                       ,0x6a,"false");
    if (!bVar4) {
      return;
    }
code_r0x00014bd12dc6:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar9 = FWeakObjectPtr::Get(&local_res10);
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pUVar9 + 1));
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1976727082729734251>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                       ,0x6b,"false");
    if (!bVar4) {
      return;
    }
    goto code_r0x00014bd12dc6;
  }
  pUVar9 = FWeakObjectPtr::Get(&local_res10);
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar9 + 1));
  FVar10 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemEnchantData>
                     ((FDS_DataContainer *)&pUVar9[1].field_0x18,(EDS_ItemEnchantData)local_68);
  uVar2 = *(undefined8 *)FVar10;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  pFVar11 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)&pUVar9[1].field_0x18,(int)((ulonglong)uVar2 >> 0x20) + uVar7,
                       (FName *)FVar10);
  _Str = L"";
  if ((pFVar11->Data).ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
  bVar4 = FToBoolHelper::FromCStringWide(pwVar17);
  if (bVar4) {
    bVar4 = FWeakObjectPtr::IsValid(&(this->TargetItemData).WeakPtr);
    if (bVar4) {
      bVar4 = FWeakObjectPtr::IsValid(&(this->ScrollItemData).WeakPtr);
      if (bVar4) {
        iVar8 = FDS_DataContainer::GetData<int,enum_EDS_ItemEnchantData>
                          ((FDS_DataContainer *)&this->_padding_,EnchantMoneyValue);
        EVar5 = FDS_DataContainer::GetData<enum_EDS_MoneyType,enum_EDS_ItemEnchantData>
                          ((FDS_DataContainer *)&this->_padding_,EnchantMoneyType);
        lVar12 = DS_MoneyDataUtil::GetMoneyQuantity(EVar5);
        if (lVar12 < iVar8) {
          local_c8._0_8_ = 0;
          local_c8._8_8_ = 0;
          local_c8._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0xa032,Alert_None_01,&local_c8);
        }
        else {
          UDS_PlayerData::GetMainPlayerData();
          bVar4 = FWeakObjectPtr::IsValid(&local_130);
          if (bVar4) {
            pUVar9 = FWeakObjectPtr::Get(&local_130);
            iVar8 = *(int *)&pUVar9[9].field_0x10;
            pUVar9 = FWeakObjectPtr::Get(&(this->ScrollItemData).WeakPtr);
            iVar1 = *(int *)&pUVar9[8].field_0x8;
            pUVar9 = FWeakObjectPtr::Get(&(this->TargetItemData).WeakPtr);
            local_res18.ObjectIndex = *(int *)&pUVar9[8].field_0x8;
            local_res18.ObjectSerialNumber = *(int *)&pUVar9[8].field_0xc;
            FVar10 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemEnchantData>
                               ((FDS_DataContainer *)&this->_padding_,(EDS_ItemEnchantData)local_60)
            ;
            uVar2 = *(undefined8 *)FVar10;
            uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
            pFVar11 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                      ::FindOrAddImpl<FName>
                                ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                                  *)&this->_padding_,(int)((ulonglong)uVar2 >> 0x20) + uVar7,
                                 (FName *)FVar10);
            if ((pFVar11->Data).ArrayNum != 0) {
              _Str = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
            }
            uVar13 = _wcstoui64(_Str,(wchar_t **)0x0,0);
            FDS_ItemEnchantService::RequestItemEnchant(uVar13,(long64)local_res18,iVar1,iVar8);
          }
        }
      }
      else {
        local_e0._0_8_ = 0;
        local_e0._8_8_ = 0;
        local_e0._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0xa031,Alert_None_01,&local_e0);
      }
    }
    else {
      local_f8._0_8_ = 0;
      local_f8._8_8_ = 0;
      local_f8._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0xa030,Alert_None_01,&local_f8);
    }
  }
  pUVar18 = (UObject *)0x0;
  pUVar9 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar9 == (UObject *)0x0) {
LAB_14bd13031:
    pUVar9 = pUVar18;
  }
  else {
    pUVar14 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    iVar8 = (int)pUVar14->_padding_;
    if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar8) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar14->_padding_)) goto LAB_14bd13031;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_128 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_128);
  bVar4 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar4) {
    pUVar9 = FWeakObjectPtr::Get(&local_res20);
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar9 + 1));
    if (pUVar9 == (UObject *)0x0) {
LAB_14bd130d9:
      pUVar9 = pUVar18;
    }
    else {
      pUVar14 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
      iVar8 = (int)pUVar14->_padding_;
      if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar8) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
          &pUVar14->_padding_)) goto LAB_14bd130d9;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_120 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_120);
    bVar4 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar4) {
      this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_res18);
      EVar6 = UDS_M_ItemImplBase::GetItemSlotType(this_00);
      pUVar9 = FWeakObjectPtr::Get(&local_res20);
      iVar8 = *(int *)&pUVar9[5].field_0x8;
      if (((iVar8 != 2) && (iVar8 != 6)) && (iVar8 == 7)) {
        if (EVar6 == EnchantTargetList) {
          pUVar9 = FWeakObjectPtr::Get(&local_res18);
          pFVar15 = (FWeakObjectPtr *)(**(code **)(*(longlong *)pUVar9 + 0x3a0))(pUVar9,local_40);
          (this->TargetItemData).WeakPtr = *pFVar15;
        }
        else if (EVar6 == EnchantScrollList) {
          pUVar9 = FWeakObjectPtr::Get(&local_res18);
          pFVar15 = (FWeakObjectPtr *)(**(code **)(*(longlong *)pUVar9 + 0x3a0))(pUVar9);
          local_140 = *pFVar15;
          bVar4 = FWeakObjectPtr::IsValid(&(this->TargetItemData).WeakPtr);
          if (bVar4) {
            bVar4 = FWeakObjectPtr::IsValid(&local_140);
            if (bVar4) {
              this_01 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_140);
              pFVar16 = UDS_ItemData::GetItemEnchantTable(this_01);
              if (pFVar16 == (FDS_ItemEnchantTableRow *)0x0) {
                bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<1976727082729734423>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                                   ,0x117,"false");
                if (bVar4) goto code_r0x00014bd1335b;
              }
              else if ((pFVar16->ID_Prefix < 1) ||
                      (pUVar9 = FWeakObjectPtr::Get(&(this->TargetItemData).WeakPtr),
                      pFVar16->ID_Prefix != *(int *)(pUVar9 + 0x11))) {
                if ((pFVar16->ID_SetEffect < 1) ||
                   (pUVar9 = FWeakObjectPtr::Get(&(this->TargetItemData).WeakPtr),
                   pFVar16->ID_SetEffect != *(int *)&pUVar9[0x12].field_0x8)) {
                  pUVar9 = FWeakObjectPtr::Get(&(this->TargetItemData).WeakPtr);
                  if (*(EDS_GradeType *)(pUVar9 + 0x14) < pFVar16->ID_GradeType) {
                    local_80._0_8_ = 0;
                    local_80._8_8_ = 0;
                    local_80._16_4_ = 0;
                    UDS_UIMessageManager::OpenMsgByStringUi(0xa036,Alert_None_01,&local_80);
                  }
                  else {
                    (this->ScrollItemData).WeakPtr = local_140;
                    Update(this);
                  }
                }
                else {
                  local_98._0_8_ = 0;
                  local_98._8_8_ = 0;
                  local_98._16_4_ = 0;
                  UDS_UIMessageManager::OpenMsgByStringUi(0xa035,Alert_None_01,&local_98);
                }
              }
              else {
                local_b0._0_8_ = 0;
                local_b0._8_8_ = 0;
                local_b0._16_4_ = 0;
                UDS_UIMessageManager::OpenMsgByStringUi(0xa035,Alert_None_01,&local_b0);
              }
            }
            else {
              bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<1976727082729734420>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                                 ,0x114,"false");
              if (bVar4) goto code_r0x00014bd1335b;
            }
          }
          else {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<1976727082729734419>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                               ,0x113,"false");
            if (bVar4) {
code_r0x00014bd1335b:
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        else if (EVar6 == ItemEnchantTarget) {
          pUVar9 = FWeakObjectPtr::Get(&local_res18);
          (**(code **)(*(longlong *)pUVar9 + 0x3a0))(pUVar9,local_50);
          local_150.ObjectIndex = 0;
          local_150.ObjectSerialNumber = 0;
          local_110 = 0;
          FWeakObjectPtr::operator=(&local_150,(FObjectPtr)&local_110);
          (this->TargetItemData).WeakPtr = local_150;
          local_148.ObjectIndex = 0;
          local_148.ObjectSerialNumber = 0;
          local_108 = 0;
          FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_108);
          (this->ScrollItemData).WeakPtr = local_148;
        }
        else if (EVar6 == ItemEnchantScroll) {
          pUVar9 = FWeakObjectPtr::Get(&local_res18);
          (**(code **)(*(longlong *)pUVar9 + 0x3a0))(pUVar9,local_58);
          local_158.ObjectIndex = 0;
          local_158.ObjectSerialNumber = 0;
          local_118 = 0;
          FWeakObjectPtr::operator=(&local_158,(FObjectPtr)&local_118);
          (this->ScrollItemData).WeakPtr = local_158;
        }
      }
    }
  }
  pUVar9 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar9 != (UObject *)0x0) {
    pUVar14 = Z_Construct_UClass_UDS_ModelEventInventoryBag_NoRegister();
    iVar8 = (int)pUVar14->_padding_;
    if ((iVar8 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar8 * 8) ==
        &pUVar14->_padding_)) goto LAB_14bd1349b;
  }
  pUVar9 = pUVar18;
LAB_14bd1349b:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  local_138.ObjectIndex = 0;
  local_138.ObjectSerialNumber = 0;
  local_100 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  FWeakObjectPtr::operator=(&local_138,(FObjectPtr)&local_100);
  bVar4 = FWeakObjectPtr::IsValid(&local_138);
  if (!bVar4) {
    Update(this);
    TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
    ::Broadcast((TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 *)&this->_padding_,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res10);
  }
  return;
}

// PreInitBindViewModel @ 14bd163a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDS_M_ItemEnchant::PreInitBindViewModel(UDS_M_ItemEnchant *this)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  TObjectPtr<UDS_M_ItemImplBase> TVar7;
  UObject *pUVar8;
  FName *pFVar9;
  UDS_ModelBase *pUVar10;
  FName FVar11;
  FString *pFVar12;
  UDS_M_InventoryBag *this_00;
  FDS_DataContainer *pFVar13;
  FObjectPtr_u_0 FVar14;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar15;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar16;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar17;
  undefined1 auStackY_2e8 [32];
  FString local_2b8;
  FWeakObjectPtr local_2a8;
  FWeakObjectPtr local_2a0;
  FWeakObjectPtr local_298;
  undefined8 local_290;
  UDS_ModelBase *local_288;
  undefined8 local_280;
  UDS_ModelBase *local_278;
  undefined8 local_270;
  UDS_ModelBase *local_268;
  UDS_ModelBase *local_260;
  UDS_ModelBase *local_258;
  UDS_M_InventoryBag *local_250;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_248;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_230;
  FDS_Text local_218;
  undefined1 local_1c8 [8];
  FName local_1c0;
  undefined1 local_1b8 [8];
  FName local_1b0;
  undefined1 local_1a8 [8];
  FName local_1a0;
  FName local_198;
  FName local_190;
  undefined1 local_188 [8];
  FDS_DataContainer local_180;
  undefined1 local_d8 [32];
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  void *local_98;
  undefined4 local_90;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  FVar14.Handle = (UObject *)&local_290;
  local_2a8.ObjectIndex = 0;
  local_2a8.ObjectSerialNumber = 0;
  local_290 = 0;
  FWeakObjectPtr::operator=(&local_2a8,(FObjectPtr)FVar14);
  TVar15.WeakPtr._1_7_ = FVar14._1_7_;
  TVar15.WeakPtr.ObjectIndex._0_1_ = 0x41;
  TVar7 = DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)local_1c8,TVar15);
  pUVar10 = *(UDS_ModelBase **)TVar7.field0_0x0;
  UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar10);
  local_288 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UDS_ModelBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(&(this->TargetItemSlotModel).WeakPtr,(FObjectPtr)&local_288);
  bVar5 = FWeakObjectPtr::IsValid(&(this->TargetItemSlotModel).WeakPtr);
  if (bVar5) {
    pUVar8 = FWeakObjectPtr::Get(&(this->TargetItemSlotModel).WeakPtr);
    pFVar9 = ::FName::FName(&local_1c0,L"DS_VM_ItemEnchantTarget");
    FVar14.Handle = (UObject *)&local_280;
    local_2a0.ObjectIndex = 0;
    local_2a0.ObjectSerialNumber = 0;
    local_280 = 0;
    uVar6 = pFVar9->Number;
    *(uint *)&pUVar8[9].field_0x10 = (pFVar9->ComparisonIndex).Value;
    *(uint *)&pUVar8[9].field_0x14 = uVar6;
    FWeakObjectPtr::operator=(&local_2a0,(FObjectPtr)FVar14);
    TVar16.WeakPtr._1_7_ = FVar14._1_7_;
    TVar16.WeakPtr.ObjectIndex._0_1_ = 0x42;
    TVar7 = DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)local_1b8,TVar16);
    pUVar10 = *(UDS_ModelBase **)TVar7.field0_0x0;
    UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar10);
    local_278 = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UDS_ModelBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    FWeakObjectPtr::operator=(&(this->ScrollItemSlotModel).WeakPtr,(FObjectPtr)&local_278);
    bVar5 = FWeakObjectPtr::IsValid(&(this->ScrollItemSlotModel).WeakPtr);
    if (bVar5) {
      pUVar8 = FWeakObjectPtr::Get(&(this->ScrollItemSlotModel).WeakPtr);
      pFVar9 = ::FName::FName(&local_1b0,L"DS_VM_ItemEnchantScroll");
      FVar14.Handle = (UObject *)&local_270;
      local_298.ObjectIndex = 0;
      local_298.ObjectSerialNumber = 0;
      local_270 = 0;
      uVar6 = pFVar9->Number;
      *(uint *)&pUVar8[9].field_0x10 = (pFVar9->ComparisonIndex).Value;
      *(uint *)&pUVar8[9].field_0x14 = uVar6;
      FWeakObjectPtr::operator=(&local_298,(FObjectPtr)FVar14);
      TVar17.WeakPtr._1_7_ = FVar14._1_7_;
      TVar17.WeakPtr.ObjectIndex._0_1_ = 0x43;
      TVar7 = DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)local_1a8,TVar17);
      pUVar10 = *(UDS_ModelBase **)TVar7.field0_0x0;
      UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar10);
      local_268 = pUVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UDS_ModelBase *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      FWeakObjectPtr::operator=(&(this->ResultItemSlotModel).WeakPtr,(FObjectPtr)&local_268);
      bVar5 = FWeakObjectPtr::IsValid(&(this->ResultItemSlotModel).WeakPtr);
      if (bVar5) {
        pUVar8 = FWeakObjectPtr::Get(&(this->ResultItemSlotModel).WeakPtr);
        pFVar9 = ::FName::FName(&local_1a0,L"DS_VM_ItemEnchantResult");
        uVar6 = pFVar9->Number;
        *(uint *)&pUVar8[9].field_0x10 = (pFVar9->ComparisonIndex).Value;
        *(uint *)&pUVar8[9].field_0x14 = uVar6;
        pUVar10 = NewObject<UDS_ModelBase>((UObject *)this);
        UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar10);
        local_260 = pUVar10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (UDS_ModelBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        FWeakObjectPtr::operator=(&(this->OptionModel).WeakPtr,(FObjectPtr)&local_260);
        bVar5 = FWeakObjectPtr::IsValid(&(this->OptionModel).WeakPtr);
        if (bVar5) {
          pUVar8 = FWeakObjectPtr::Get(&(this->OptionModel).WeakPtr);
          *(undefined4 *)&pUVar8[9].field_0x20 = 0xa3;
          pUVar8 = FWeakObjectPtr::Get(&(this->OptionModel).WeakPtr);
          pFVar9 = ::FName::FName(&local_198,L"DS_VM_ItemEnchantOption");
          uVar6 = pFVar9->Number;
          *(uint *)&pUVar8[9].field_0x10 = (pFVar9->ComparisonIndex).Value;
          *(uint *)&pUVar8[9].field_0x14 = uVar6;
          pUVar10 = (UDS_ModelBase *)NewObject<UDS_M_CommonIconTextButton>((UObject *)this);
          UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar10);
          local_258 = pUVar10;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar10 != (UDS_ModelBase *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          FWeakObjectPtr::operator=(&(this->EnchantButtonModel).WeakPtr,(FObjectPtr)&local_258);
          bVar5 = FWeakObjectPtr::IsValid(&(this->EnchantButtonModel).WeakPtr);
          if (bVar5) {
            pUVar8 = FWeakObjectPtr::Get(&(this->EnchantButtonModel).WeakPtr);
            pFVar9 = ::FName::FName(&local_190,L"DS_VM_CommonIconTextButtonEnchant");
            uVar6 = pFVar9->Number;
            *(uint *)&pUVar8[9].field_0x10 = (pFVar9->ComparisonIndex).Value;
            *(uint *)&pUVar8[9].field_0x14 = uVar6;
            pUVar8 = FWeakObjectPtr::Get(&(this->EnchantButtonModel).WeakPtr);
            ::FString::FString(&local_2b8,L"true");
            FVar11 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemEnchantData>
                               ((FDS_DataContainer *)&pUVar8[1].field_0x18,
                                (EDS_ItemEnchantData)local_188);
            uVar1 = *(undefined8 *)FVar11;
            uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
            pFVar12 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                      ::FindOrAddImpl<FName>
                                ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                                  *)&pUVar8[1].field_0x18,uVar6 + (int)((ulonglong)uVar1 >> 0x20),
                                 (FName *)FVar11);
            if (pFVar12 != &local_2b8) {
              pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
              if (pFVar2 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar2);
              }
              (pFVar12->Data).AllocatorInstance.Data = local_2b8.Data.AllocatorInstance.Data;
              local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (pFVar12->Data).ArrayNum = local_2b8.Data.ArrayNum;
              (pFVar12->Data).ArrayMax = local_2b8.Data.ArrayMax;
              local_2b8.Data.ArrayNum = 0;
              local_2b8.Data.ArrayMax = 0;
            }
            if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
            }
            pUVar8 = FWeakObjectPtr::Get(&(this->EnchantButtonModel).WeakPtr);
            local_218.StringEnumTableNameID.ComparisonIndex.Value = 0;
            local_218.StringEnumTableNameID.Number = 0;
            local_218.TimeExpressionType = None;
            local_218.IsExpression = false;
            local_218.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_218.DateTime.Ticks = 0;
            local_218.TimeSpan.Ticks = 0;
            local_218.UniqueString.Data.ArrayNum = 0;
            local_218.UniqueString.Data.ArrayMax = 0;
            local_218.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_218.FormatArgs.ArrayNum = 0;
            local_218.FormatArgs.ArrayMax = 0;
            local_218.StringTableType = StringUi;
            local_218.StringTableID = 0xa029;
            FDS_DataContainer::SetData<FDS_Text,enum_EDS_CommonIconTextButtonData>
                      ((FDS_DataContainer *)&pUVar8[1].field_0x18,ButtonText,&local_218);
            local_250 = UDS_ModelBase::AddChildModel1<UDS_M_InventoryBag>((UDS_ModelBase *)this);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_250 != (UDS_M_InventoryBag *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_250);
            }
            FWeakObjectPtr::operator=(&(this->BagModel).WeakPtr,(FObjectPtr)&local_250);
            bVar5 = FWeakObjectPtr::IsValid(&(this->BagModel).WeakPtr);
            if (bVar5) {
              local_d8._0_8_ = (FScriptContainerElement *)0x0;
              local_d8._8_8_ = 0;
              local_b8 = (void *)0x0;
              local_b0 = 0;
              local_ac = 0x80;
              local_a8 = 0xffffffff;
              local_a4 = 0;
              local_98 = (void *)0x0;
              local_90 = 0;
              local_88._0_8_ = (FScriptContainerElement *)0x0;
              local_88._8_8_ = 0;
              local_68 = (void *)0x0;
              local_60 = 0;
              local_5c = 0x80;
              local_58 = 0xffffffff;
              local_54 = 0;
              local_48 = (void *)0x0;
              local_40 = 0;
              FDS_DataContainer::SetData<enum_EDS_BagGroupType,enum_EDS_InventoryBagData>
                        ((FDS_DataContainer *)local_d8,BagGroupType,ItemEnchant);
              this_00 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&(this->BagModel).WeakPtr);
              local_248._16_8_ = 0;
              local_248._0_8_ = 0;
              local_248._8_8_ = 0;
              local_230._16_8_ = 0;
              local_230._0_8_ = 0;
              local_230._8_8_ = 0;
              pFVar13 = FDS_DataContainer::FDS_DataContainer
                                  (&local_180,(FDS_DataContainer *)local_d8);
              UDS_M_InventoryBag::InitModel(this_00,pFVar13,&local_230,&local_248);
              local_40 = 0;
              if (local_48 != (void *)0x0) {
                FMemory::Free(local_48);
              }
              TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)local_88,0,local_88._8_4_);
              iVar4 = SUB84(local_88._8_8_,4);
              local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
              if (iVar4 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x20,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
              }
              local_58 = 0xffffffff;
              local_54 = 0;
              local_60 = 0;
              if (0x80 < local_5c) {
                local_5c = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
              }
              if (local_68 != (void *)0x0) {
                FMemory::Free(local_68);
              }
              if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_88._0_8_);
              }
              local_90 = 0;
              if (local_98 != (void *)0x0) {
                FMemory::Free(local_98);
              }
              TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)local_d8,0,local_d8._8_4_);
              iVar4 = SUB84(local_d8._8_8_,4);
              local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
              if (iVar4 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x20,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
              }
              local_a8 = 0xffffffff;
              local_a4 = 0;
              local_b0 = 0;
              if (0x80 < local_ac) {
                local_ac = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
              }
              if (local_b8 != (void *)0x0) {
                FMemory::Free(local_b8);
              }
              if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_d8._0_8_);
              }
            }
            else {
              bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<1976727082729734225>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                                 ,0x51,"false");
              if (bVar5) goto code_r0x00014bd1691c;
            }
          }
          else {
            bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<1976727082729734215>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                               ,0x47,"false");
            if (bVar5) goto code_r0x00014bd1691c;
          }
        }
        else {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1976727082729734206>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                             ,0x3e,"false");
          if (bVar5) goto code_r0x00014bd1691c;
        }
      }
      else {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1976727082729734198>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                           ,0x36,"false");
        if (bVar5) goto code_r0x00014bd1691c;
      }
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1976727082729734190>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                         ,0x2e,"false");
      if (bVar5) goto code_r0x00014bd1691c;
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1976727082729734182>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                       ,0x26,"false");
    if (bVar5) {
code_r0x00014bd1691c:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Update @ 14bd26970

void __thiscall UDS_M_ItemEnchant::Update(UDS_M_ItemEnchant *this)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  EDS_MoneyType EVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UDS_ItemData *pUVar9;
  FDS_ItemEnchantTableRow *pFVar10;
  UDS_M_ItemImplBase *this_00;
  FName FVar11;
  FString *pFVar12;
  long64 lVar13;
  UObject *pUVar14;
  wchar_t *_Str;
  longlong *this_01;
  undefined1 local_res8 [8];
  
  UpdateTargetSlot(this);
  UpdateScrollSlot(this);
  bVar3 = FWeakObjectPtr::IsValid(&(this->ScrollItemData).WeakPtr);
  if (bVar3) {
    pUVar9 = (UDS_ItemData *)FWeakObjectPtr::Get(&(this->ScrollItemData).WeakPtr);
    pFVar10 = UDS_ItemData::GetItemEnchantTable(pUVar9);
    if (pFVar10 == (FDS_ItemEnchantTableRow *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1976727082729734605>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                         ,0x1cd,"false");
      if (bVar3) {
code_r0x00014bd26a31:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      bVar3 = FWeakObjectPtr::IsValid(&(this->ResultItemSlotModel).WeakPtr);
      if (bVar3) {
        this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&(this->ResultItemSlotModel).WeakPtr);
        UDS_M_ItemImplBase::SetItemData
                  (this_00,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)
                           (this->TargetItemData).WeakPtr);
        pUVar14 = FWeakObjectPtr::Get(&(this->ResultItemSlotModel).WeakPtr);
        FDS_DataContainer::SetData<int,enum_EDS_ItemImplEnchantResultData>
                  ((FDS_DataContainer *)&pUVar14[1].field_0x18,PrefixID,pFVar10->ID_Prefix);
        pUVar14 = FWeakObjectPtr::Get(&(this->ResultItemSlotModel).WeakPtr);
        FDS_DataContainer::SetData<int,enum_EDS_ItemImplEnchantResultData>
                  ((FDS_DataContainer *)&pUVar14[1].field_0x18,SetID,pFVar10->ID_SetEffect);
      }
      else {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1976727082729734607>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                           ,0x1cf,"false");
        if (bVar3) goto code_r0x00014bd26a31;
      }
    }
  }
  bVar3 = FWeakObjectPtr::IsValid(&(this->ScrollItemData).WeakPtr);
  if (bVar3) {
    pUVar9 = (UDS_ItemData *)FWeakObjectPtr::Get(&(this->ScrollItemData).WeakPtr);
    pFVar10 = UDS_ItemData::GetItemEnchantTable(pUVar9);
    if (pFVar10 == (FDS_ItemEnchantTableRow *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1976727082729734620>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                         ,0x1dc,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_14bd26b1f;
    }
    FDS_DataContainer::SetData<enum_EDS_MoneyType,enum_EDS_ItemEnchantData>
              ((FDS_DataContainer *)&this->_padding_,EnchantMoneyType,pFVar10->ReqMoneyType);
    iVar8 = pFVar10->ReqMoneyValue;
  }
  else {
    FDS_DataContainer::SetData<enum_EDS_MoneyType,enum_EDS_ItemEnchantData>
              ((FDS_DataContainer *)&this->_padding_,EnchantMoneyType,Copper);
    iVar8 = 0;
  }
  FDS_DataContainer::SetData<int,enum_EDS_ItemEnchantData>
            ((FDS_DataContainer *)&this->_padding_,EnchantMoneyValue,iVar8);
LAB_14bd26b1f:
  this_01 = &this->_padding_;
  bVar3 = FWeakObjectPtr::IsValid(&(this->TargetItemData).WeakPtr);
  bVar4 = FWeakObjectPtr::IsValid(&(this->ScrollItemData).WeakPtr);
  FVar11 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemEnchantData>
                     ((FDS_DataContainer *)this_01,(EDS_ItemEnchantData)local_res8);
  uVar1 = *(undefined8 *)FVar11;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar12 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)this_01,uVar7 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar11);
  if ((pFVar12->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
  }
  iVar8 = _wtoi(_Str);
  EVar5 = FDS_DataContainer::GetData<enum_EDS_MoneyType,enum_EDS_ItemEnchantData>
                    ((FDS_DataContainer *)this_01,EnchantMoneyType);
  lVar13 = DS_MoneyDataUtil::GetMoneyQuantity(EVar5);
  bVar6 = FWeakObjectPtr::IsValid(&(this->EnchantButtonModel).WeakPtr);
  if (bVar6) {
    pUVar14 = FWeakObjectPtr::Get(&(this->EnchantButtonModel).WeakPtr);
    FDS_DataContainer::SetData<bool,enum_EDS_CommonIconTextButtonData>
              ((FDS_DataContainer *)&pUVar14[1].field_0x18,IsDisabled,
               lVar13 < iVar8 || (!bVar4 || !bVar3));
    pUVar14 = FWeakObjectPtr::Get(&(this->EnchantButtonModel).WeakPtr);
    pUVar14[5].field_0x18 = 1;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1976727082729734651>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                       ,0x1fb,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UpdateInventoryBag(this);
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// UpdateEnchantButton @ 14bd273e0

void __thiscall UDS_M_ItemEnchant::UpdateEnchantButton(UDS_M_ItemEnchant *this)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  EDS_MoneyType EVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FName FVar9;
  FString *pFVar10;
  long64 lVar11;
  UObject *pUVar12;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->TargetItemData).WeakPtr);
  bVar4 = FWeakObjectPtr::IsValid(&(this->ScrollItemData).WeakPtr);
  FVar9 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemEnchantData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemEnchantData)local_res8);
  uVar1 = *(undefined8 *)FVar9;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar10 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)&this->_padding_,uVar7 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  iVar8 = _wtoi(_Str);
  EVar5 = FDS_DataContainer::GetData<enum_EDS_MoneyType,enum_EDS_ItemEnchantData>
                    ((FDS_DataContainer *)&this->_padding_,EnchantMoneyType);
  lVar11 = DS_MoneyDataUtil::GetMoneyQuantity(EVar5);
  bVar6 = FWeakObjectPtr::IsValid(&(this->EnchantButtonModel).WeakPtr);
  if (bVar6) {
    pUVar12 = FWeakObjectPtr::Get(&(this->EnchantButtonModel).WeakPtr);
    FDS_DataContainer::SetData<bool,enum_EDS_CommonIconTextButtonData>
              ((FDS_DataContainer *)&pUVar12[1].field_0x18,IsDisabled,
               lVar11 < iVar8 || (!bVar4 || !bVar3));
    pUVar12 = FWeakObjectPtr::Get(&(this->EnchantButtonModel).WeakPtr);
    pUVar12[5].field_0x18 = 1;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1976727082729734651>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                       ,0x1fb,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// UpdateEnchantCost @ 14bd27530

void __thiscall UDS_M_ItemEnchant::UpdateEnchantCost(UDS_M_ItemEnchant *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_ItemData *this_00;
  FDS_ItemEnchantTableRow *pFVar3;
  int iVar4;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ScrollItemData).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(&(this->ScrollItemData).WeakPtr);
    pFVar3 = UDS_ItemData::GetItemEnchantTable(this_00);
    if (pFVar3 == (FDS_ItemEnchantTableRow *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1976727082729734620>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                         ,0x1dc,"false");
      if (!bVar2) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FDS_DataContainer::SetData<enum_EDS_MoneyType,enum_EDS_ItemEnchantData>
              ((FDS_DataContainer *)&this->_padding_,EnchantMoneyType,pFVar3->ReqMoneyType);
    iVar4 = pFVar3->ReqMoneyValue;
  }
  else {
    FDS_DataContainer::SetData<enum_EDS_MoneyType,enum_EDS_ItemEnchantData>
              ((FDS_DataContainer *)&this->_padding_,EnchantMoneyType,Copper);
    iVar4 = 0;
  }
  FDS_DataContainer::SetData<int,enum_EDS_ItemEnchantData>
            ((FDS_DataContainer *)&this->_padding_,EnchantMoneyValue,iVar4);
  return;
}

// UpdateInventoryBag @ 14bd279f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDS_M_ItemEnchant::UpdateInventoryBag(UDS_M_ItemEnchant *this)

{
  TWeakObjectPtr<UDS_M_InventoryBag,FWeakObjectPtr> *this_00;
  code *pcVar1;
  int iVar2;
  ulonglong uVar3;
  bool bVar4;
  EDS_BagGroupType EVar5;
  EDS_BagGroupType EVar6;
  UObject *pUVar7;
  UDS_M_InventoryBag *this_01;
  FDS_DataContainer *pFVar8;
  undefined1 auStackY_1b8 [32];
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_188;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_170;
  FDS_DataContainer local_158;
  void *local_b8;
  undefined8 local_b0;
  TBitArray<FDefaultBitArrayAllocator> local_a8;
  undefined4 local_88;
  undefined4 local_84;
  void *local_78;
  undefined4 local_70;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this_00 = &this->BagModel;
  bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar4) {
    local_a8.MaxBits = 0x80;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_a8.NumBits = 0;
    local_84 = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_68._0_8_ = (FScriptContainerElement *)0x0;
    local_68._8_8_ = 0;
    local_48 = (void *)0x0;
    local_40 = 0;
    local_34 = 0;
    local_28 = (void *)0x0;
    local_20 = 0;
    local_88 = 0xffffffff;
    local_3c = 0x80;
    local_38 = 0xffffffff;
    bVar4 = FWeakObjectPtr::IsValid(&(this->TargetItemData).WeakPtr);
    if (bVar4) {
      pUVar7 = FWeakObjectPtr::Get(&(this->TargetItemData).WeakPtr);
      FDS_DataContainer::SetData<int,enum_EDS_ItemFilterData>
                ((FDS_DataContainer *)&local_b8,SeasonGroup,*(int *)&pUVar7[0x14].field_0x4);
      EVar5 = ItemEnchantScroll;
    }
    else {
      EVar5 = ItemEnchant;
    }
    FDS_DataContainer::SetData<enum_EDS_BagGroupType,enum_EDS_InventoryBagData>
              ((FDS_DataContainer *)&local_b8,BagGroupType,EVar5);
    pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    EVar5 = FDS_DataContainer::GetData<enum_EDS_BagGroupType,enum_EDS_InventoryBagData>
                      ((FDS_DataContainer *)&pUVar7[1].field_0x18,BagGroupType);
    EVar6 = FDS_DataContainer::GetData<enum_EDS_BagGroupType,enum_EDS_InventoryBagData>
                      ((FDS_DataContainer *)&local_b8,BagGroupType);
    if (EVar5 != EVar6) {
      this_01 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_188._16_8_ = 0;
      local_188._0_8_ = 0;
      local_188._8_8_ = 0;
      local_170._16_8_ = 0;
      local_170._0_8_ = 0;
      local_170._8_8_ = 0;
      pFVar8 = FDS_DataContainer::FDS_DataContainer(&local_158,(FDS_DataContainer *)&local_b8);
      UDS_M_InventoryBag::InitModel(this_01,pFVar8,&local_170,&local_188);
    }
    local_20 = 0;
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_68,0,local_68._8_4_);
    iVar2 = SUB84(local_68._8_8_,4);
    local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
    }
    local_38 = 0xffffffff;
    local_34 = 0;
    local_40 = 0;
    if (0x80 < local_3c) {
      local_3c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
    local_70 = 0;
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&local_b8,0,(int)local_b0);
    uVar3 = local_b0 >> 0x20;
    local_b0 = local_b0 & 0xffffffff00000000;
    if ((int)uVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)&local_b8,0,(int *)((longlong)&local_b0 + 4));
    }
    local_84 = 0;
    local_a8.NumBits = 0;
    local_88 = 0xffffffff;
    if (0x80 < (uint)local_a8.MaxBits) {
      local_a8.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_a8,0);
    }
    if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1976727082729734658>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                       ,0x202,"false");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UpdateResultSlot @ 14bd29320

void __thiscall UDS_M_ItemEnchant::UpdateResultSlot(UDS_M_ItemEnchant *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_ItemData *this_00;
  FDS_ItemEnchantTableRow *pFVar3;
  UDS_M_ItemImplBase *this_01;
  UObject *pUVar4;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ScrollItemData).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(&(this->ScrollItemData).WeakPtr);
    pFVar3 = UDS_ItemData::GetItemEnchantTable(this_00);
    if (pFVar3 == (FDS_ItemEnchantTableRow *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1976727082729734605>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                         ,0x1cd,"false");
      if (!bVar2) {
        return;
      }
code_r0x00014bd293d9:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = FWeakObjectPtr::IsValid(&(this->ResultItemSlotModel).WeakPtr);
    if (bVar2) {
      this_01 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&(this->ResultItemSlotModel).WeakPtr);
      UDS_M_ItemImplBase::SetItemData
                (this_01,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)(this->TargetItemData).WeakPtr
                );
      pUVar4 = FWeakObjectPtr::Get(&(this->ResultItemSlotModel).WeakPtr);
      FDS_DataContainer::SetData<int,enum_EDS_ItemImplEnchantResultData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,PrefixID,pFVar3->ID_Prefix);
      pUVar4 = FWeakObjectPtr::Get(&(this->ResultItemSlotModel).WeakPtr);
      FDS_DataContainer::SetData<int,enum_EDS_ItemImplEnchantResultData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,SetID,pFVar3->ID_SetEffect);
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1976727082729734607>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                         ,0x1cf,"false");
      if (bVar2) goto code_r0x00014bd293d9;
    }
  }
  return;
}

// UpdateScrollSlot @ 14bd29460

void __thiscall UDS_M_ItemEnchant::UpdateScrollSlot(UDS_M_ItemEnchant *this)

{
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  UDS_M_ItemImplBase *this_01;
  UObject *pUVar3;
  UDS_ItemData *this_02;
  FDS_ItemEnchantTableRow *pFVar4;
  FDS_ItemPrefixTableRow *pFVar5;
  FDS_ItemSetEffectTableRow *pFVar6;
  TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr> *this_03;
  int iVar7;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ScrollItemSlotModel).WeakPtr);
  if (bVar2) {
    this_01 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&(this->ScrollItemSlotModel).WeakPtr);
    this_00 = &this->ScrollItemData;
    UDS_M_ItemImplBase::SetItemData
              (this_01,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)this_00->WeakPtr);
    this_03 = &this->OptionModel;
    bVar2 = FWeakObjectPtr::IsValid(&this_03->WeakPtr);
    if (bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&this_03->WeakPtr);
      FDS_DataContainer::SetData<enum_EDS_EnchantOptionState,enum_EDS_ItemEnchantOptionData>
                ((FDS_DataContainer *)&pUVar3[1].field_0x18,ScrollOptionState,NoOption);
      pUVar3 = FWeakObjectPtr::Get(&this_03->WeakPtr);
      FDS_DataContainer::SetData<int,enum_EDS_ItemEnchantOptionData>
                ((FDS_DataContainer *)&pUVar3[1].field_0x18,ScrollOptionID,0);
      pUVar3 = FWeakObjectPtr::Get(&this_03->WeakPtr);
      pUVar3[5].field_0x18 = 1;
      bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
      if (bVar2) {
        this_02 = (UDS_ItemData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        pFVar4 = UDS_ItemData::GetItemEnchantTable(this_02);
        if (pFVar4 == (FDS_ItemEnchantTableRow *)0x0) {
          bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1976727082729734577>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                             ,0x1b1,"false");
          if (bVar2) goto code_r0x00014bd295bb;
        }
        else {
          if (pFVar4->ID_Prefix == 0) {
            pFVar6 = FDS_ItemSetEffectTableRow::Get((longlong)pFVar4->ID_SetEffect,true);
            if (pFVar6 == (FDS_ItemSetEffectTableRow *)0x0) {
              return;
            }
            pUVar3 = FWeakObjectPtr::Get(&this_03->WeakPtr);
            FDS_DataContainer::SetData<enum_EDS_EnchantOptionState,enum_EDS_ItemEnchantOptionData>
                      ((FDS_DataContainer *)&pUVar3[1].field_0x18,ScrollOptionState,SetOption);
            pUVar3 = FWeakObjectPtr::Get(&this_03->WeakPtr);
            iVar7 = pFVar4->ID_SetEffect;
          }
          else {
            pFVar5 = FDS_ItemPrefixTableRow::Get((longlong)pFVar4->ID_Prefix,true);
            if (pFVar5 == (FDS_ItemPrefixTableRow *)0x0) {
              return;
            }
            pUVar3 = FWeakObjectPtr::Get(&this_03->WeakPtr);
            FDS_DataContainer::SetData<enum_EDS_EnchantOptionState,enum_EDS_ItemEnchantOptionData>
                      ((FDS_DataContainer *)&pUVar3[1].field_0x18,ScrollOptionState,PrefixOption);
            pUVar3 = FWeakObjectPtr::Get(&this_03->WeakPtr);
            iVar7 = pFVar4->ID_Prefix;
          }
          FDS_DataContainer::SetData<int,enum_EDS_ItemEnchantOptionData>
                    ((FDS_DataContainer *)&pUVar3[1].field_0x18,ScrollOptionID,iVar7);
        }
      }
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1976727082729734568>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                       ,0x1a8,"false");
    if (!bVar2) {
      return;
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1976727082729734565>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                       ,0x1a5,"false");
    if (!bVar2) {
      return;
    }
  }
code_r0x00014bd295bb:
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// UpdateTargetSlot @ 14bd2a420

void __thiscall UDS_M_ItemEnchant::UpdateTargetSlot(UDS_M_ItemEnchant *this)

{
  TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  UDS_M_ItemImplBase *this_01;
  UObject *pUVar5;
  UObject *pUVar6;
  TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr> *this_02;
  
  this_00 = &this->TargetItemSlotModel;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1976727082729734540>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                       ,0x18c,"false");
    if (!bVar2) {
      return;
    }
code_r0x00014bd2a4d0:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_01 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
  UDS_M_ItemImplBase::SetItemData
            (this_01,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)(this->TargetItemData).WeakPtr);
  this_02 = &this->OptionModel;
  bVar2 = FWeakObjectPtr::IsValid(&this_02->WeakPtr);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    cVar3 = (**(code **)(*(longlong *)pUVar5 + 0x5f8))(pUVar5);
    if (cVar3 == '\0') {
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      cVar3 = (**(code **)(*(longlong *)pUVar5 + 0x600))(pUVar5);
      if (cVar3 == '\0') {
        pUVar5 = FWeakObjectPtr::Get(&this_02->WeakPtr);
        FDS_DataContainer::SetData<enum_EDS_EnchantOptionState,enum_EDS_ItemEnchantOptionData>
                  ((FDS_DataContainer *)&pUVar5[1].field_0x18,TargetOptionState,NoOption);
        iVar4 = 0;
        pUVar5 = FWeakObjectPtr::Get(&this_02->WeakPtr);
      }
      else {
        pUVar5 = FWeakObjectPtr::Get(&this_02->WeakPtr);
        FDS_DataContainer::SetData<enum_EDS_EnchantOptionState,enum_EDS_ItemEnchantOptionData>
                  ((FDS_DataContainer *)&pUVar5[1].field_0x18,TargetOptionState,SetOption);
        pUVar5 = FWeakObjectPtr::Get(&this_02->WeakPtr);
        pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        iVar4 = (**(code **)(*(longlong *)pUVar6 + 0x488))(pUVar6);
      }
    }
    else {
      pUVar5 = FWeakObjectPtr::Get(&this_02->WeakPtr);
      FDS_DataContainer::SetData<enum_EDS_EnchantOptionState,enum_EDS_ItemEnchantOptionData>
                ((FDS_DataContainer *)&pUVar5[1].field_0x18,TargetOptionState,PrefixOption);
      pUVar5 = FWeakObjectPtr::Get(&this_02->WeakPtr);
      pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar4 = (**(code **)(*(longlong *)pUVar6 + 0x478))(pUVar6);
    }
    FDS_DataContainer::SetData<int,enum_EDS_ItemEnchantOptionData>
              ((FDS_DataContainer *)&pUVar5[1].field_0x18,TargetOptionID,iVar4);
    pUVar5 = FWeakObjectPtr::Get(&this_02->WeakPtr);
    pUVar5[5].field_0x18 = 1;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1976727082729734543>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemEnchant.cpp"
                       ,399,"false");
    if (bVar2) goto code_r0x00014bd2a4d0;
  }
  return;
}

