// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// StaticClass @ 14b4d02f0

UClass * __cdecl UDS_ItemDetailInfoManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ItemDetailInfoManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ItemDetailInfoManager",
               &Z_Registration_Info_UClass_UDS_ItemDetailInfoManager.InnerSingleton,
               StaticRegisterNativesUDS_ItemDetailInfoManager,0x120,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_ItemDetailInfoManager>,
               InternalVTableHelperCtorCaller<UDS_ItemDetailInfoManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ItemDetailInfoManager.InnerSingleton;
}

// UDS_ItemDetailInfoManager @ 14b4d3ca0

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

UDS_ItemDetailInfoManager * __thiscall
UDS_ItemDetailInfoManager::UDS_ItemDetailInfoManager
          (UDS_ItemDetailInfoManager *this,FVTableHelper *param_1)

{
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ItemDetailInfoManager__6B_;
  this_00 = &(this->SlotActionInfo).ItemData;
  *(undefined8 *)&this->OnOpenItemDestructionPopup_Delegate = 0;
  *(undefined8 *)&(this->OnOpenItemDestructionPopup_Delegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnOpenItemDestructionPopup_Delegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnOpenItemDestructionPopup_Delegate).field_0x18 = 2;
  *(undefined8 *)&this->OnOpenItemDecompositionPopup_Delegate = 0;
  *(undefined8 *)&(this->OnOpenItemDecompositionPopup_Delegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnOpenItemDecompositionPopup_Delegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnOpenItemDecompositionPopup_Delegate).field_0x18 = 2;
  *(undefined8 *)&this->ChangedOptionValue_Delegate = 0;
  *(undefined8 *)&(this->ChangedOptionValue_Delegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedOptionValue_Delegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangedOptionValue_Delegate).field_0x18 = 2;
  *(undefined8 *)&this->ItemDetailInfoMap = 0;
  *(undefined8 *)&(this->ItemDetailInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->ItemDetailInfoMap).field_0x20 = 0;
  this->OptionValue = None;
  *(undefined4 *)&(this->ItemDetailInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->ItemDetailInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ItemDetailInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ItemDetailInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->ItemDetailInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->ItemDetailInfoMap).field_0x48 = 0;
  (this->SlotActionInfo).SlotType = None;
  (this->SlotActionInfo).SlotIndex = 0;
  (this->SlotActionInfo).ItemTID = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->SlotActionInfo).ActionType = None;
  (this->SlotActionInfo).IsShowComparison = true;
  (this->SlotActionInfo).ItemDetailInfoType = Normal;
  (this->SlotActionInfo).TargetSlotWidget.WeakPtr = (FWeakObjectPtr)0x0;
  (this->SlotActionInfo).CharID = 0;
  (this->SlotActionInfo).InventoryType = None;
  (this->SlotActionInfo).PrefixID = -1;
  (this->SlotActionInfo).SetEffectID = -1;
  return this;
}

// UDS_ItemDetailInfoManager @ 14b4d3dc0

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

UDS_ItemDetailInfoManager * __thiscall
UDS_ItemDetailInfoManager::UDS_ItemDetailInfoManager
          (UDS_ItemDetailInfoManager *this,FObjectInitializer *param_1)

{
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ItemDetailInfoManager__6B_;
  this_00 = &(this->SlotActionInfo).ItemData;
  *(undefined8 *)&this->OnOpenItemDestructionPopup_Delegate = 0;
  *(undefined8 *)&(this->OnOpenItemDestructionPopup_Delegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnOpenItemDestructionPopup_Delegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnOpenItemDestructionPopup_Delegate).field_0x18 = 2;
  *(undefined8 *)&this->OnOpenItemDecompositionPopup_Delegate = 0;
  *(undefined8 *)&(this->OnOpenItemDecompositionPopup_Delegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnOpenItemDecompositionPopup_Delegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnOpenItemDecompositionPopup_Delegate).field_0x18 = 2;
  *(undefined8 *)&this->ChangedOptionValue_Delegate = 0;
  *(undefined8 *)&(this->ChangedOptionValue_Delegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedOptionValue_Delegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangedOptionValue_Delegate).field_0x18 = 2;
  *(undefined8 *)&this->ItemDetailInfoMap = 0;
  *(undefined8 *)&(this->ItemDetailInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->ItemDetailInfoMap).field_0x20 = 0;
  this->OptionValue = None;
  *(undefined4 *)&(this->ItemDetailInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->ItemDetailInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ItemDetailInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ItemDetailInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->ItemDetailInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->ItemDetailInfoMap).field_0x48 = 0;
  (this->SlotActionInfo).SlotType = None;
  (this->SlotActionInfo).SlotIndex = 0;
  (this->SlotActionInfo).ItemTID = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->SlotActionInfo).ActionType = None;
  (this->SlotActionInfo).IsShowComparison = true;
  (this->SlotActionInfo).ItemDetailInfoType = Normal;
  (this->SlotActionInfo).TargetSlotWidget.WeakPtr = (FWeakObjectPtr)0x0;
  (this->SlotActionInfo).CharID = 0;
  (this->SlotActionInfo).InventoryType = None;
  (this->SlotActionInfo).PrefixID = -1;
  (this->SlotActionInfo).SetEffectID = -1;
  return this;
}

// ~UDS_ItemDetailInfoManager @ 14b4d4920

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

void __thiscall
UDS_ItemDetailInfoManager::~UDS_ItemDetailInfoManager(UDS_ItemDetailInfoManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ItemDetailInfoManager__6B_;
  *(undefined4 *)&(this->ItemDetailInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ItemDetailInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ItemDetailInfoMap);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedOptionValue_Delegate).field_0x8,
             *(int *)&(this->ChangedOptionValue_Delegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangedOptionValue_Delegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedOptionValue_Delegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnOpenItemDecompositionPopup_Delegate).field_0x8,
             *(int *)&(this->OnOpenItemDecompositionPopup_Delegate).field_0x10);
  pvVar1 = *(void **)&(this->OnOpenItemDecompositionPopup_Delegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOpenItemDecompositionPopup_Delegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnOpenItemDestructionPopup_Delegate).field_0x8,
             *(int *)&(this->OnOpenItemDestructionPopup_Delegate).field_0x10);
  pvVar1 = *(void **)&(this->OnOpenItemDestructionPopup_Delegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOpenItemDestructionPopup_Delegate);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4d5380

UClass * __cdecl UDS_ItemDetailInfoManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ItemDetailInfoManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ItemDetailInfoManager",
               &Z_Registration_Info_UClass_UDS_ItemDetailInfoManager.InnerSingleton,
               StaticRegisterNativesUDS_ItemDetailInfoManager,0x120,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_ItemDetailInfoManager>,
               InternalVTableHelperCtorCaller<UDS_ItemDetailInfoManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ItemDetailInfoManager.InnerSingleton;
}

// StaticRegisterNativesUDS_ItemDetailInfoManager @ 14b4d5570

void __cdecl UDS_ItemDetailInfoManager::StaticRegisterNativesUDS_ItemDetailInfoManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_ItemDetailInfoManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnClickCloseItemDetailInfo @ 14b4d6550

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

void __cdecl
UDS_ItemDetailInfoManager::execOnClickCloseItemDetailInfo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EDS_ItemDetailInfoType local_res10 [24];
  
  local_res10[0] = Normal;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClickCloseItemDetailInfo((UDS_ItemDetailInfoManager *)param_1,local_res10[0]);
  return;
}

// AddOptionValue @ 14baf0b20

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

void __thiscall
UDS_ItemDetailInfoManager::AddOptionValue
          (UDS_ItemDetailInfoManager *this,EDS_ItemDetailOption param_1)

{
  this->OptionValue = this->OptionValue | param_1;
  TMulticastDelegate<void___cdecl(enum_EDS_ItemDetailOption),FDefaultDelegateUserPolicy>::Broadcast
            (&this->ChangedOptionValue_Delegate,this->OptionValue);
  return;
}

// CloseItemDetailInfo @ 14bafa3b0

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ItemDetailInfoManager::CloseItemDetailInfo
          (UDS_ItemDetailInfoManager *this,EDS_ItemDetailInfoType param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  UDS_WindowManager *this_00;
  FDS_ItemDetailInfoData *this_01;
  FSlateApplication *pFVar4;
  EDS_WindowWidget EVar5;
  undefined1 *puVar6;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    while( true ) {
      local_res18[0] = 0.0;
      local_res20[0] = 0;
      if ((param_1 == Normal) || (EVar5 = ItemDetailInfoComparison, param_1 != Comparison)) {
        EVar5 = ItemDetailInfo;
      }
      UDS_WindowManager::CloseWindow(this_00,EVar5,local_res20,local_res18);
      if (*(int *)&(this->ItemDetailInfoMap).field_0x8 ==
          *(int *)&(this->ItemDetailInfoMap).field_0x34) break;
      puVar1 = *(undefined1 **)&(this->ItemDetailInfoMap).field_0x40;
      puVar6 = &(this->ItemDetailInfoMap).field_0x38;
      if (puVar1 != (undefined1 *)0x0) {
        puVar6 = puVar1;
      }
      iVar3 = *(int *)(puVar6 + ((ulonglong)(*(int *)&(this->ItemDetailInfoMap).field_0x48 - 1) &
                                (ulonglong)param_1) * 4);
      if (iVar3 == -1) {
        return;
      }
      lVar2 = *(longlong *)&this->ItemDetailInfoMap;
      while (*(EDS_ItemDetailInfoType *)(lVar2 + (longlong)iVar3 * 0x24) != param_1) {
        iVar3 = *(int *)(lVar2 + 0x1c + (longlong)iVar3 * 0x24);
        if (iVar3 == -1) {
          return;
        }
      }
      this_01 = TMapBase<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
                ::FindChecked(&this->ItemDetailInfoMap,param_1);
      FDS_ItemDetailInfoData::Reset(this_01);
      if (param_1 != Normal) {
        return;
      }
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this_00->WindowOpenCloseDelegate,this);
      pFVar4 = FSlateApplication::Get();
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar4->PostTickEvent,this);
      param_1 = Comparison;
      this_00 = UDS_WindowManager::GetInst();
      if (this_00 == (UDS_WindowManager *)0x0) {
        return;
      }
    }
  }
  return;
}

// Created @ 14bb01530

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

void __thiscall UDS_ItemDetailInfoManager::Created(UDS_ItemDetailInfoManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Destroyed @ 14bb02e90

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

void __thiscall UDS_ItemDetailInfoManager::Destroyed(UDS_ItemDetailInfoManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bb02e93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d0))();
  return;
}

// GetInst @ 14bb0ba90

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

UDS_ItemDetailInfoManager * __cdecl UDS_ItemDetailInfoManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_ItemDetailInfoManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_ItemDetailInfoManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_ItemDetailInfoManager_NoRegister();
  pUVar3 = (UDS_ItemDetailInfoManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_ItemDetailInfoManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_ItemDetailInfoManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_ItemDetailInfoManager *)0x0;
}

// Init @ 14bb13630

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

void __thiscall UDS_ItemDetailInfoManager::Init(UDS_ItemDetailInfoManager *this)

{
  undefined1 local_res8 [8];
  TPairInitializer<EDS_ItemDetailInfoType_&&,FDS_ItemDetailInfoData_&&> local_res10;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 local_38 [8];
  undefined4 local_30;
  FWeakObjectPtr local_2c;
  uint local_24;
  
  if (*(int *)&(this->ItemDetailInfoMap).field_0x8 == *(int *)&(this->ItemDetailInfoMap).field_0x34)
  {
    local_2c.ObjectIndex = 0;
    local_2c.ObjectSerialNumber = 0;
    local_24 = 0;
    local_38 = (undefined1  [8])0x0;
    local_30 = 0;
    local_res10.Value = (FDS_ItemDetailInfoData *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_38 + 4),(FObjectPtr)&local_res10.Value);
    local_2c.ObjectIndex = 0;
    local_2c.ObjectSerialNumber = 0;
    local_res10.Value = (FDS_ItemDetailInfoData *)0x0;
    FWeakObjectPtr::operator=(&local_2c,(FObjectPtr)&local_res10.Value);
    local_48 = local_res8;
    local_24 = local_24 & 0xffff0000;
    local_40 = local_38;
    local_res8[0] = 0;
    TSet<TTuple<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_ItemDetailInfoType_&&,FDS_ItemDetailInfoData_&&>_>
              (&this->ItemDetailInfoMap,&local_res10,(bool *)&local_48);
    local_2c.ObjectIndex = 0;
    local_2c.ObjectSerialNumber = 0;
    local_24 = 0;
    local_38 = (undefined1  [8])0x0;
    local_30 = 0;
    local_res10.Value = (FDS_ItemDetailInfoData *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_38 + 4),(FObjectPtr)&local_res10.Value);
    local_2c.ObjectIndex = 0;
    local_2c.ObjectSerialNumber = 0;
    local_res10.Value = (FDS_ItemDetailInfoData *)0x0;
    FWeakObjectPtr::operator=(&local_2c,(FObjectPtr)&local_res10.Value);
    local_24 = local_24 & 0xffff0000;
    local_res8[0] = 1;
    TSet<TTuple<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_ItemDetailInfoType_&&,FDS_ItemDetailInfoData_&&>_>
              (&this->ItemDetailInfoMap,&local_res10,(bool *)&local_48);
  }
  return;
}

// OnClickCloseItemDetailInfo @ 14bb1cfd0

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ItemDetailInfoManager::OnClickCloseItemDetailInfo
          (UDS_ItemDetailInfoManager *this,EDS_ItemDetailInfoType param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  UDS_WindowManager *this_00;
  FDS_ItemDetailInfoData *this_01;
  FSlateApplication *pFVar4;
  EDS_WindowWidget EVar5;
  undefined1 *puVar6;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    while( true ) {
      afStackX_18[0] = 0.0;
      auStackX_20[0] = 0;
      if ((param_1 == Normal) || (EVar5 = ItemDetailInfoComparison, param_1 != Comparison)) {
        EVar5 = ItemDetailInfo;
      }
      UDS_WindowManager::CloseWindow(this_00,EVar5,auStackX_20,afStackX_18);
      if (*(int *)&(this->ItemDetailInfoMap).field_0x8 ==
          *(int *)&(this->ItemDetailInfoMap).field_0x34) break;
      puVar1 = *(undefined1 **)&(this->ItemDetailInfoMap).field_0x40;
      puVar6 = &(this->ItemDetailInfoMap).field_0x38;
      if (puVar1 != (undefined1 *)0x0) {
        puVar6 = puVar1;
      }
      iVar3 = *(int *)(puVar6 + ((ulonglong)(*(int *)&(this->ItemDetailInfoMap).field_0x48 - 1) &
                                (ulonglong)param_1) * 4);
      if (iVar3 == -1) {
        return;
      }
      lVar2 = *(longlong *)&this->ItemDetailInfoMap;
      while (*(EDS_ItemDetailInfoType *)(lVar2 + (longlong)iVar3 * 0x24) != param_1) {
        iVar3 = *(int *)(lVar2 + 0x1c + (longlong)iVar3 * 0x24);
        if (iVar3 == -1) {
          return;
        }
      }
      this_01 = TMapBase<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
                ::FindChecked(&this->ItemDetailInfoMap,param_1);
      FDS_ItemDetailInfoData::Reset(this_01);
      if (param_1 != Normal) {
        return;
      }
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this_00->WindowOpenCloseDelegate,this);
      pFVar4 = FSlateApplication::Get();
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar4->PostTickEvent,this);
      param_1 = Comparison;
      this_00 = UDS_WindowManager::GetInst();
      if (this_00 == (UDS_WindowManager *)0x0) {
        return;
      }
    }
  }
  return;
}

// OnItemSlotAction @ 14bb1e5d0

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ItemDetailInfoManager::OnItemSlotAction
          (UDS_ItemDetailInfoManager *this,FDS_ItemSlotActionInfo *param_1)

{
  EDS_ItemSlotActionType EVar1;
  longlong lVar2;
  code *pcVar3;
  undefined3 uVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  EDS_InventoryType EVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  UDS_WindowManager *this_00;
  UObject *pUVar12;
  FDS_ItemDetailInfoData *pFVar13;
  undefined1 *puVar14;
  EDS_ItemDetailInfoType EVar15;
  EDS_ItemDetailInfoPopupType EVar16;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  UDS_WindowManager *local_30;
  UObject *local_28 [2];
  
  local_30 = UDS_WindowManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UDS_WindowManager *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_30);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UDS_WindowManager *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_30);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_30);
  bVar9 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar9) {
    this_00 = (UDS_WindowManager *)FWeakObjectPtr::Get(&local_res20);
    UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&local_38);
    bVar9 = FWeakObjectPtr::IsValid(&local_38);
    if (bVar9) {
      pUVar12 = FWeakObjectPtr::Get(&local_38);
      cVar10 = (**(code **)(*(longlong *)pUVar12 + 0x2c8))(pUVar12);
      if (cVar10 == '\0') {
        uVar4 = *(undefined3 *)&param_1->field_0x1;
        iVar11 = param_1->SlotIndex;
        iVar5 = param_1->ItemTID;
        iVar6 = (param_1->ItemData).WeakPtr.ObjectIndex;
        (this->SlotActionInfo).SlotType = param_1->SlotType;
        *(undefined3 *)&(this->SlotActionInfo).field_0x1 = uVar4;
        (this->SlotActionInfo).SlotIndex = iVar11;
        (this->SlotActionInfo).ItemTID = iVar5;
        (this->SlotActionInfo).ItemData.WeakPtr.ObjectIndex = iVar6;
        bVar9 = param_1->IsShowComparison;
        EVar15 = param_1->ItemDetailInfoType;
        uVar7 = *(undefined2 *)&param_1->field_0x1a;
        iVar11 = (param_1->TargetSlotWidget).WeakPtr.ObjectIndex;
        *(undefined8 *)&(this->SlotActionInfo).ItemData.WeakPtr.ObjectSerialNumber =
             *(undefined8 *)&(param_1->ItemData).WeakPtr.ObjectSerialNumber;
        (this->SlotActionInfo).IsShowComparison = bVar9;
        (this->SlotActionInfo).ItemDetailInfoType = EVar15;
        *(undefined2 *)&(this->SlotActionInfo).field_0x1a = uVar7;
        (this->SlotActionInfo).TargetSlotWidget.WeakPtr.ObjectIndex = iVar11;
        EVar8 = param_1->InventoryType;
        uVar4 = *(undefined3 *)&param_1->field_0x29;
        iVar11 = param_1->PrefixID;
        *(undefined8 *)&(this->SlotActionInfo).TargetSlotWidget.WeakPtr.ObjectSerialNumber =
             *(undefined8 *)&(param_1->TargetSlotWidget).WeakPtr.ObjectSerialNumber;
        (this->SlotActionInfo).InventoryType = EVar8;
        *(undefined3 *)&(this->SlotActionInfo).field_0x29 = uVar4;
        (this->SlotActionInfo).PrefixID = iVar11;
        (this->SlotActionInfo).SetEffectID = param_1->SetEffectID;
        local_28[0] = FWeakObjectPtr::Get(&(this->SlotActionInfo).ItemData.WeakPtr);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_28[0]);
        }
        local_res18.ObjectIndex = 0;
        local_res18.ObjectSerialNumber = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_28[0]);
        }
        FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_28);
        EVar15 = (this->SlotActionInfo).ItemDetailInfoType;
        if (*(int *)&(this->ItemDetailInfoMap).field_0x8 !=
            *(int *)&(this->ItemDetailInfoMap).field_0x34) {
          puVar14 = *(undefined1 **)&(this->ItemDetailInfoMap).field_0x40;
          if (puVar14 == (undefined1 *)0x0) {
            puVar14 = &(this->ItemDetailInfoMap).field_0x38;
          }
          iVar11 = *(int *)(puVar14 +
                           ((ulonglong)(*(int *)&(this->ItemDetailInfoMap).field_0x48 - 1) &
                           (ulonglong)EVar15) * 4);
          if (iVar11 != -1) {
            lVar2 = *(longlong *)&this->ItemDetailInfoMap;
            while (*(EDS_ItemDetailInfoType *)(lVar2 + (longlong)iVar11 * 0x24) != EVar15) {
              iVar11 = *(int *)(lVar2 + 0x1c + (longlong)iVar11 * 0x24);
              if (iVar11 == -1) {
                return;
              }
            }
            pFVar13 = TMapBase<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
                      ::FindChecked(&this->ItemDetailInfoMap,EVar15);
            EVar1 = (this->SlotActionInfo).ActionType;
            if (EVar1 == LeftClick) {
              if (EVar15 != Normal) {
                return;
              }
              EVar16 = FixedPopup;
              EVar15 = Normal;
            }
            else {
              if (EVar1 != Hover) {
                if (EVar1 != Unhover) {
                  return;
                }
                if (pFVar13->PopupType == FixedPopup) {
                  return;
                }
                CloseItemDetailInfo(this,EVar15);
                return;
              }
              if (pFVar13->PopupType == FixedPopup) {
                return;
              }
              bVar9 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_res18,
                                 (void *)0x0);
              EVar16 = FocusPopup;
              if (bVar9) {
                OpenItemDetailInfo(this,(longlong)(this->SlotActionInfo).ItemTID,EVar15,FocusPopup);
                return;
              }
            }
            OpenItemDetailInfo(this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res18,EVar15,
                               EVar16);
          }
        }
      }
      return;
    }
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1769003484834693229>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_ItemDetailInfoManager.cpp"
                       ,0x6d,"false");
    if (!bVar9) {
      return;
    }
  }
  else {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1769003484834693226>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_ItemDetailInfoManager.cpp"
                       ,0x6a,"false");
    if (!bVar9) {
      return;
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// OnOpenItemComparisonDetailInfo @ 14bb1f700

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

void __thiscall
UDS_ItemDetailInfoManager::OnOpenItemComparisonDetailInfo
          (UDS_ItemDetailInfoManager *this,UDS_UserWidget *param_1)

{
  longlong lVar1;
  code *pcVar2;
  FDS_ViewModelContext_ItemDetailInfo *pFVar3;
  bool bVar4;
  FDS_ItemDetailInfoData *pFVar5;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar6;
  TDelegate<void___cdecl(EDS_ItemDetailInfoType),FDefaultDelegateUserPolicy> *pTVar7;
  int iVar8;
  undefined1 *puVar9;
  TSharedPtr<FDS_ViewModelContext,1> *pTVar10;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar11;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  longlong *local_c8;
  FWeakObjectPtr local_c0;
  undefined1 local_b8 [8];
  ForAnyElementType local_b0;
  int local_a8;
  TSharedPtr<FDS_ViewModelContext_ItemDetailInfo,1> local_98;
  UDS_UserWidget *local_88;
  UDS_UserWidget *local_80;
  UDS_UserWidget *local_78;
  FDestructionSentinel local_70;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_48;
  
  if ((param_1 != (UDS_UserWidget *)0x0) &&
     (*(int *)&(this->ItemDetailInfoMap).field_0x8 != *(int *)&(this->ItemDetailInfoMap).field_0x34)
     ) {
    puVar9 = *(undefined1 **)&(this->ItemDetailInfoMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->ItemDetailInfoMap).field_0x38;
    }
    iVar8 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->ItemDetailInfoMap).field_0x48 - 1U & 1) *
                              4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->ItemDetailInfoMap;
      while (*(char *)(lVar1 + (longlong)iVar8 * 0x24) != '\x01') {
        iVar8 = *(int *)(lVar1 + 0x1c + (longlong)iVar8 * 0x24);
        if (iVar8 == -1) {
          return;
        }
      }
      pFVar5 = TMapBase<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
               ::FindChecked(&this->ItemDetailInfoMap,Comparison);
      if (pFVar5 == (FDS_ItemDetailInfoData *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1769003484834693434>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_ItemDetailInfoManager.cpp"
                           ,0x13a,"false");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        local_res20 = (pFVar5->ItemData).WeakPtr;
        bVar4 = FWeakObjectPtr::IsValid(&local_res20);
        if (bVar4) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          local_res10.ObjectIndex = 0;
          local_res10.ObjectSerialNumber = 0;
          local_88 = param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_88);
          pTVar6 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                   CreateUObject<UDS_ItemDetailInfoManager,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
                             (&local_48,this,(pmf_c30c5458)0x14bb23e30,
                              (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)&local_res10);
          UDS_UserWidget::SetDelegateResize(param_1,pTVar6);
          MakeContext<FDS_ViewModelContext_ItemDetailInfo>(&local_98);
          pFVar3 = local_98.Object;
          if ((local_98.Object == (FDS_ViewModelContext_ItemDetailInfo *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined4 *)&pFVar3->_padding_ = 0xac;
          pFVar3->InfoType = Comparison;
          (pFVar3->ItemData).WeakPtr = local_res20;
          pFVar3->PopupType = pFVar5->PopupType;
          pTVar7 = TDelegate<void___cdecl(enum_EDS_ItemDetailInfoType),FDefaultDelegateUserPolicy>::
                   CreateUObject<UDS_ItemDetailInfoManager>
                             ((TDelegate<void___cdecl(EDS_ItemDetailInfoType),FDefaultDelegateUserPolicy>
                               *)local_b8,this,(pmf_6a509866)0x14bb1cfd0);
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar3->OnClickCloseDelegate,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar7);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
                     (FWriteAccessScope *)&local_70);
          if ((local_a8 != 0) && (local_b0.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_b0.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b0,0,0,0x10)
            ;
            local_a8 = 0;
          }
          if (local_70.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
          }
          if (local_b0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_b8);
          local_58.Object = (FDS_ViewModelContext *)local_98.Object;
          local_58.SharedReferenceCount.ReferenceController =
               local_98.SharedReferenceCount.ReferenceController;
          if (local_98.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          local_res18.ObjectIndex = 0;
          local_res18.ObjectSerialNumber = 0;
          local_80 = param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_80);
          pTVar10 = &local_58;
          DS_ViewModelTemplateUtil::BindViewModel
                    ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res18,pTVar10,false);
          TVar11.WeakPtr._1_7_ = (undefined7)((ulonglong)pTVar10 >> 8);
          TVar11.WeakPtr.ObjectIndex._0_1_ = 9;
          DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)&local_c8,TVar11);
          if (local_c8 == (longlong *)0x0) {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<1769003484834693451>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_ItemDetailInfoManager.cpp"
                               ,0x14b,"false");
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          else {
            FDS_DataContainer::SetData<enum_EDS_InventoryType,enum_EDS_ItemSlotData>
                      ((FDS_DataContainer *)(local_c8 + 8),InventoryType,
                       (this->SlotActionInfo).InventoryType);
            FDS_DataContainer::SetData<int,enum_EDS_ItemSlotData>
                      ((FDS_DataContainer *)(local_c8 + 8),CharID,(this->SlotActionInfo).CharID);
            pcVar2 = *(code **)(*local_c8 + 0x2e8);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1);
            }
            local_c0.ObjectIndex = 0;
            local_c0.ObjectSerialNumber = 0;
            local_78 = param_1;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1);
            }
            FWeakObjectPtr::operator=(&local_c0,(FObjectPtr)&local_78);
            (*pcVar2)(local_c8,local_c0);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_98.SharedReferenceCount.ReferenceController);
        }
      }
    }
  }
  return;
}

// OnOpenItemNormalDetailInfo @ 14bb1fab0

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

void __thiscall
UDS_ItemDetailInfoManager::OnOpenItemNormalDetailInfo
          (UDS_ItemDetailInfoManager *this,UDS_UserWidget *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FDS_ViewModelContext_ItemDetailInfo *pFVar3;
  bool bVar4;
  int *piVar5;
  FDS_ItemDetailInfoData *pFVar6;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  TObjectPtr<UDS_M_ItemImplBase>_u_0 TVar10;
  int iVar11;
  TSharedPtr<FDS_ViewModelContext,1> *pTVar12;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar13;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined1 local_108 [8];
  FDelegateAllocation local_100;
  FWeakObjectPtr local_f0;
  TSharedPtr<FDS_ViewModelContext_ItemDetailInfo,1> local_e8;
  UDS_UserWidget *local_d8;
  UDS_ItemDetailInfoManager *local_d0;
  UDS_UserWidget *local_c8;
  UDS_UserWidget *local_c0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDelegateAllocation *local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [16];
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_58;
  
  if ((param_1 != (UDS_UserWidget *)0x0) &&
     (*(int *)&(this->ItemDetailInfoMap).field_0x8 != *(int *)&(this->ItemDetailInfoMap).field_0x34)
     ) {
    piVar5 = *(int **)&(this->ItemDetailInfoMap).field_0x40;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)&(this->ItemDetailInfoMap).field_0x38;
    }
    iVar11 = *piVar5;
    if (iVar11 != -1) {
      while (*(char *)(*(longlong *)&this->ItemDetailInfoMap + (longlong)iVar11 * 0x24) != '\0') {
        iVar11 = *(int *)(*(longlong *)&this->ItemDetailInfoMap + 0x1c + (longlong)iVar11 * 0x24);
        if (iVar11 == -1) {
          return;
        }
      }
      pFVar6 = TMapBase<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
               ::FindChecked(&this->ItemDetailInfoMap,Normal);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_d8 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_d8);
      pTVar7 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateUObject<UDS_ItemDetailInfoManager,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
                         (&local_58,this,(pmf_c30c5458)0x14bb23e90,
                          (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)&local_res10);
      UDS_UserWidget::SetDelegateResize(param_1,pTVar7);
      MakeContext<FDS_ViewModelContext_ItemDetailInfo>(&local_e8);
      pFVar3 = local_e8.Object;
      if ((local_e8.Object == (FDS_ViewModelContext_ItemDetailInfo *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar3->_padding_ = 0xac;
      pFVar3->InfoType = Normal;
      (pFVar3->ItemData).WeakPtr = (pFVar6->ItemData).WeakPtr;
      (pFVar3->ItemData_Comparison).WeakPtr = (pFVar6->ItemData_Comparison).WeakPtr;
      pFVar3->PopupType = pFVar6->PopupType;
      pFVar3->ItemTID = pFVar6->ItemTID;
      local_108 = (undefined1  [8])0x0;
      local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_100.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
                 (FWriteAccessScope *)&local_a0);
      local_88 = &local_100;
      puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_100);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AXW4EDS_ItemDetailInfoType___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ItemDetailInfoManager____A6AXW4EDS_ItemDetailInfoType___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_ItemDetailInfoManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar8[3] = 0;
        local_d0 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_ItemDetailInfoManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_d0);
        puVar8[4] = OnClickCloseItemDetailInfo;
      }
      if (local_a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar3->OnClickCloseDelegate,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_108);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
                 (FWriteAccessScope *)&local_b8);
      if ((local_100.DelegateSize != 0) &&
         (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_100.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_100,0,0,0x10);
        local_100.DelegateSize = 0;
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      if (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_100.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_108);
      local_68.Object = (FDS_ViewModelContext *)local_e8.Object;
      local_68.SharedReferenceCount.ReferenceController =
           local_e8.SharedReferenceCount.ReferenceController;
      if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_c8 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_c8);
      pTVar12 = &local_68;
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res18,pTVar12,false);
      local_f0 = (pFVar6->ItemData).WeakPtr;
      bVar4 = FWeakObjectPtr::IsValid(&local_f0);
      TVar13.WeakPtr._1_7_ = (undefined7)((ulonglong)pTVar12 >> 8);
      TVar13.WeakPtr.ObjectIndex._0_1_ = 9;
      if (bVar4) {
        TVar10.ObjectPtr.field0_0x0 =
             (FObjectPtr)DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)local_80,TVar13);
      }
      else {
        TVar10.ObjectPtr.field0_0x0 =
             (FObjectPtr)
             DS_ItemDataUtil::CreateItemModel
                       ((EDS_ItemSlotStateType)local_78,TVar13.WeakPtr.ObjectIndex);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)(TVar10.DebugPtr)->_padding_ != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)(TVar10.DebugPtr)->_padding_);
      }
      plVar1 = (longlong *)(TVar10.DebugPtr)->_padding_;
      if (plVar1 == (longlong *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1769003484834693420>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_ItemDetailInfoManager.cpp"
                           ,300,"false");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        FDS_DataContainer::SetData<enum_EDS_InventoryType,enum_EDS_ItemSlotData>
                  ((FDS_DataContainer *)(plVar1 + 8),InventoryType,
                   (this->SlotActionInfo).InventoryType);
        FDS_DataContainer::SetData<int,enum_EDS_ItemImplDetailData>
                  ((FDS_DataContainer *)(plVar1 + 8),PrefixID,(this->SlotActionInfo).PrefixID);
        FDS_DataContainer::SetData<int,enum_EDS_ItemImplDetailData>
                  ((FDS_DataContainer *)(plVar1 + 8),SetEffectID,(this->SlotActionInfo).SetEffectID)
        ;
        FDS_DataContainer::SetData<int,enum_EDS_ItemSlotData>
                  ((FDS_DataContainer *)(plVar1 + 8),CharID,(this->SlotActionInfo).CharID);
        pcVar2 = *(code **)(*plVar1 + 0x2e8);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        local_c0 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_c0);
        (*pcVar2)(plVar1,local_res20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// OnPostTick @ 14bb20c40

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

void __thiscall UDS_ItemDetailInfoManager::OnPostTick(UDS_ItemDetailInfoManager *this,float param_1)

{
  FDS_ItemDetailInfoData *pFVar1;
  
  pFVar1 = TMapBase<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
           ::FindChecked(&this->ItemDetailInfoMap,Normal);
  if (pFVar1->Init != false) {
    pFVar1 = TMapBase<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
             ::FindChecked(&this->ItemDetailInfoMap,Comparison);
    if (pFVar1->Init != false) {
      OnUpdateComparisonDetailPopup(this);
    }
  }
  return;
}

// OnUpdateComparisonDetailPopup @ 14bb23ad0

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ItemDetailInfoManager::OnUpdateComparisonDetailPopup(UDS_ItemDetailInfoManager *this)

{
  undefined8 uVar1;
  TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> TVar2;
  TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> TVar3;
  code *pcVar4;
  bool bVar5;
  EDS_TooltipArea EVar6;
  UDS_WindowManager *this_00;
  UObject *pUVar7;
  TVector2<double> *pTVar8;
  FSlateApplication *pFVar9;
  UUserWidget *pUVar10;
  UWidget *this_01;
  EDS_TooltipArea EVar11;
  uint uVar12;
  uint uVar13;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  TVector2<double>_u_0 local_78;
  TVector2<double>_u_0 local_68;
  FLinearColor_u_0 local_58;
  FLinearColor_u_0 local_48;
  TVector2<double> local_38;
  TVector2<double> local_28 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    return;
  }
  UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&local_res10);
  bVar5 = TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1769003484834693495>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_ItemDetailInfoManager.cpp"
                       ,0x177,"false");
    if (!bVar5) {
      return;
    }
  }
  else {
    UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&local_res18);
    bVar5 = TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> *)&local_res18,(void *)0x0);
    if (bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1769003484834693498>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_ItemDetailInfoManager.cpp"
                         ,0x17a,"false");
      if (!bVar5) {
        return;
      }
    }
    else {
      pUVar7 = FWeakObjectPtr::Get(&local_res10);
      bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar7[5].field_0x10);
      if (bVar5) {
        pUVar7 = FWeakObjectPtr::Get(&local_res18);
        bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar7[5].field_0x10);
        if (bVar5) {
          bVar5 = FWeakObjectPtr::IsValid(&(this->SlotActionInfo).TargetSlotWidget.WeakPtr);
          if (bVar5) {
            pTVar8 = DS_Util::GetViewportPosition
                               (&local_38,
                                (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)
                                (this->SlotActionInfo).TargetSlotWidget.WeakPtr);
            local_68._s_0.X = (pTVar8->field0_0x0)._s_0.X;
            local_68._s_0.Y = (pTVar8->field0_0x0)._s_0.Y;
            EVar6 = DS_Util::GetTooltipArea((TVector2<double> *)&local_68._s_0);
            pFVar9 = FSlateApplication::Get();
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar9->PostTickEvent,
                       this);
            pUVar7 = FWeakObjectPtr::Get(&local_res10);
            pUVar10 = (UUserWidget *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar7[5].field_0x8);
            local_58 = FLinearColor::White.field0_0x0;
            UUserWidget::SetColorAndOpacity(pUVar10,(FLinearColor *)&local_58._s_0);
            pUVar7 = FWeakObjectPtr::Get(&local_res18);
            pUVar10 = (UUserWidget *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar7[5].field_0x8);
            local_48 = FLinearColor::White.field0_0x0;
            UUserWidget::SetColorAndOpacity(pUVar10,(FLinearColor *)&local_48._s_0);
            pUVar7 = FWeakObjectPtr::Get(&local_res10);
            this_01 = (UWidget *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar7[5].field_0x10);
            pTVar8 = UWidget::GetDesiredSize(this_01,local_28);
            uVar1 = *(undefined8 *)((longlong)&pTVar8->field0_0x0 + 8);
            uVar12 = (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000;
            uVar13 = (uint)((ulonglong)uVar1 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_
            ;
            pUVar7 = FWeakObjectPtr::Get(&local_res18);
            TVar2.WeakPtr.ObjectIndex = *(int *)&pUVar7[5].field_0x10;
            TVar2.WeakPtr.ObjectSerialNumber = *(int *)&pUVar7[5].field_0x14;
            pUVar7 = FWeakObjectPtr::Get(&local_res10);
            local_78._s_0.X = __real_403e000000000000;
            local_78._s_0.Y = (double)CONCAT44(uVar13,uVar12);
            EVar11 = Top|Left;
            if ((EVar6 >> 1 & 1) == 0) {
              EVar11 = Top|Right;
            }
            TVar3.WeakPtr.ObjectIndex = *(int *)&pUVar7[5].field_0x10;
            TVar3.WeakPtr.ObjectSerialNumber = *(int *)&pUVar7[5].field_0x14;
            DS_Util::TransformTooltipPosition(TVar3,TVar2,(TVector2<double> *)&local_78._s_0,EVar11)
            ;
          }
          else {
            bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<1769003484834693502>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_ItemDetailInfoManager.cpp"
                               ,0x17e,"false");
            if (bVar5) goto code_r0x00014bb23cb9;
          }
          return;
        }
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1769003484834693501>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_ItemDetailInfoManager.cpp"
                           ,0x17d,"false");
        if (!bVar5) {
          return;
        }
      }
      else {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1769003484834693500>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_ItemDetailInfoManager.cpp"
                           ,0x17c,"false");
        if (!bVar5) {
          return;
        }
      }
    }
  }
code_r0x00014bb23cb9:
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// OnUpdateComparisonDetailPopupSize @ 14bb23e30

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_ItemDetailInfoManager::OnUpdateComparisonDetailPopupSize
          (UDS_ItemDetailInfoManager *this,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_1)

{
  FDS_ItemDetailInfoData *pFVar1;
  UObject *pUVar2;
  UUserWidget *this_00;
  FWeakObjectPtr local_res10 [3];
  FLinearColor_u_0 local_18;
  
  local_res10[0] = param_1.WeakPtr;
  pFVar1 = TMapBase<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
           ::FindChecked(&this->ItemDetailInfoMap,Comparison);
  pFVar1->Init = true;
  pUVar2 = FWeakObjectPtr::Get(local_res10);
  this_00 = (UUserWidget *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar2[0x1b].field_0xc);
  local_18._0_8_ = 0;
  local_18._8_8_ = 0;
  UUserWidget::SetColorAndOpacity(this_00,(FLinearColor *)&local_18._s_0);
  return;
}

// OnUpdateDetailPopupSize @ 14bb23e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_ItemDetailInfoManager::OnUpdateDetailPopupSize
          (UDS_ItemDetailInfoManager *this,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_ItemDetailInfoData *pFVar3;
  UObject *pUVar4;
  UUserWidget *pUVar5;
  FSlateApplication *pFVar6;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_178 [32];
  uint uVar7;
  wchar_t *pwVar8;
  FLinearColor_u_0 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&(this->SlotActionInfo).TargetSlotWidget.WeakPtr);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar1) {
      pFVar3 = TMapBase<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
               ::FindChecked(&this->ItemDetailInfoMap,Normal);
      pFVar3->Init = true;
      local_148._s_0 = (FLinearColor_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      DS_Util::TransformTooltipPosition
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)
                 (this->SlotActionInfo).TargetSlotWidget.WeakPtr,
                 (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,
                 (TVector2<double> *)&local_148._s_0,None);
      local_148._0_8_ = (pFVar3->ItemData_Comparison).WeakPtr;
      bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_148._s_0);
      if (bVar1) {
        pUVar4 = FWeakObjectPtr::Get(&local_res10);
        pUVar5 = (UUserWidget *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar4[0x1b].field_0xc);
        local_148 = (FLinearColor_u_0)ZEXT816(0);
        UUserWidget::SetColorAndOpacity(pUVar5,(FLinearColor *)&local_148._s_0);
        pFVar6 = FSlateApplication::Get();
        TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_ItemDetailInfoManager>
                  ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *
                   )&pFVar6->PostTickEvent,(UDS_ItemDetailInfoManager *)&local_148._s_0,
                   (pmf_c55c4e5b)this);
        return;
      }
      pUVar4 = FWeakObjectPtr::Get(&local_res10);
      pUVar5 = (UUserWidget *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar4[0x1b].field_0xc);
      local_148 = FLinearColor::White.field0_0x0;
      UUserWidget::SetColorAndOpacity(pUVar5,(FLinearColor *)&local_148._s_0);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ItemDetailInfoManager::OnUpdateDetailPopupSize",0x32,Yes);
    pwVar8 = L"TargetWidget Is Invalid";
    uVar7 = 0x155;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ItemDetailInfoManager::OnUpdateDetailPopupSize",0x32,Yes);
    pwVar8 = L"TargetSlotWidget Is Invalid";
    uVar7 = 0x154;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar7,pwVar8);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OpenItemDetailInfo @ 14bb26130

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ItemDetailInfoManager::OpenItemDetailInfo
          (UDS_ItemDetailInfoManager *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,
          EDS_ItemDetailInfoType param_2,EDS_ItemDetailInfoPopupType param_3)

{
  undefined1 *puVar1;
  TMap<EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
  *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_WindowManager *this_01;
  UObject *pUVar5;
  UDS_ItemData *this_02;
  UDS_ItemDataSet *this_03;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar6;
  FDS_ItemDetailInfoData *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar10;
  undefined1 *puVar11;
  EDS_WindowWidget EVar12;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_118;
  undefined1 local_110 [8];
  FDelegateAllocation local_108;
  EDS_ItemType local_f8;
  EDS_EquipSlotType local_f4;
  undefined1 local_f0 [8];
  ForAnyElementType local_e8;
  int local_e0;
  FWeakObjectPtr local_d8;
  TSharedPtr<FDS_EquipmentItemCharacterData,1> local_d0;
  undefined8 local_c0;
  UDS_ItemDetailInfoManager *local_b8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  EDS_EquipSlotType local_60 [2];
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_58;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_40;
  
  local_res10 = param_1.WeakPtr;
  this_01 = UDS_WindowManager::GetInst();
  if (this_01 == (UDS_WindowManager *)0x0) {
    return;
  }
  if ((param_2 == Normal) || (EVar12 = ItemDetailInfoComparison, param_2 != Comparison)) {
    EVar12 = ItemDetailInfo;
  }
  this_00 = &this->ItemDetailInfoMap;
  if (*(int *)&(this->ItemDetailInfoMap).field_0x8 == *(int *)&(this->ItemDetailInfoMap).field_0x34)
  {
    return;
  }
  puVar11 = *(undefined1 **)&(this->ItemDetailInfoMap).field_0x40;
  puVar1 = &(this->ItemDetailInfoMap).field_0x38;
  if (puVar11 == (undefined1 *)0x0) {
    puVar11 = puVar1;
  }
  iVar4 = *(int *)(puVar11 +
                  ((ulonglong)(*(int *)&(this->ItemDetailInfoMap).field_0x48 - 1) &
                  (ulonglong)param_2) * 4);
  if (iVar4 == -1) {
    return;
  }
  while (*(EDS_ItemDetailInfoType *)(*(longlong *)this_00 + (longlong)iVar4 * 0x24) != param_2) {
    iVar4 = *(int *)(*(longlong *)this_00 + 0x1c + (longlong)iVar4 * 0x24);
    if (iVar4 == -1) {
      return;
    }
  }
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    return;
  }
  local_118.ObjectIndex = 0;
  local_118.ObjectSerialNumber = 0;
  local_c0 = 0;
  FWeakObjectPtr::operator=(&local_118,(FObjectPtr)&local_c0);
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar5[0x13].field_0x1c != '\0') {
    this_02 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res10);
    bVar3 = UDS_ItemData::IsEquipped(this_02);
    if (!bVar3) {
      TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_d8);
      bVar3 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&local_d8,(void *)0x0);
      if (!bVar3) {
        pUVar5 = FWeakObjectPtr::Get(&local_res10);
        local_f8 = *(EDS_ItemType *)&pUVar5[0x13].field_0x20;
        local_f4 = FDS_EquipmentItemCharacterData::GetEquipSlotTypeByItemType(&local_f8);
        this_03 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_d8);
        UDS_ItemDataSet::GetEquipmentItemCharacterData(this_03,&local_d0);
        if (local_d0.Object != (FDS_EquipmentItemCharacterData *)0x0) {
          if ((local_d0.Object == (FDS_EquipmentItemCharacterData *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          TVar6 = FDS_EquipmentItemCharacterData::GetEquippedItemData(local_d0.Object,local_60);
                    /* WARNING: Load size is inaccurate */
          local_118 = *TVar6.WeakPtr;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d0.SharedReferenceCount.ReferenceController);
      }
    }
  }
  pFVar7 = TMapBase<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
           ::FindChecked(this_00,param_2);
  (pFVar7->ItemData).WeakPtr = local_res10;
  pFVar7 = TMapBase<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
           ::FindChecked(this_00,param_2);
  (pFVar7->ItemData_Comparison).WeakPtr = local_118;
  pFVar7 = TMapBase<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
           ::FindChecked(this_00,param_2);
  pFVar7->PopupType = param_3;
  local_110 = (undefined1  [8])0x0;
  local_108.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_108.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_110,
             (FWriteAccessScope *)&local_80);
  local_68 = &local_108;
  puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_108);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ItemDetailInfoManager____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_ItemDetailInfoManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[3] = 0;
    local_b8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_ItemDetailInfoManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_b8);
    puVar8[4] = OnOpenItemNormalDetailInfo;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  pTVar10 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
            TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                      (&local_58,
                       (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                       local_110);
  UDS_WindowManager::OpenWindow(this_01,EVar12,pTVar10);
  bVar3 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_118,(void *)0x0);
  if (bVar3) {
    CloseItemDetailInfo(this,Comparison);
  }
  else {
    if (*(int *)&(this->ItemDetailInfoMap).field_0x8 !=
        *(int *)&(this->ItemDetailInfoMap).field_0x34) {
      puVar11 = *(undefined1 **)&(this->ItemDetailInfoMap).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      iVar4 = *(int *)(puVar11 +
                      (ulonglong)(*(int *)&(this->ItemDetailInfoMap).field_0x48 - 1U & 1) * 4);
      if (iVar4 != -1) {
        do {
          if (*(char *)(*(longlong *)this_00 + (longlong)iVar4 * 0x24) == '\x01') {
            pFVar7 = TMapBase<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
                     ::FindChecked(this_00,Comparison);
            (pFVar7->ItemData).WeakPtr = local_118;
            break;
          }
          iVar4 = *(int *)(*(longlong *)this_00 + 0x1c + (longlong)iVar4 * 0x24);
        } while (iVar4 != -1);
      }
    }
    TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
    CreateUObject<UDS_ItemDetailInfoManager>
              ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_f0,this
               ,(pmf_a08c5574)0x14bb1f700);
    pTVar10 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
              TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                        (&local_40,
                         (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                         local_f0);
    UDS_WindowManager::OpenWindow(this_01,ItemDetailInfoComparison,pTVar10);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f0,
               (FWriteAccessScope *)&local_b0);
    if ((local_e0 != 0) && (local_e8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_e8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,0,0x10);
      local_e0 = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_f0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_110,
             (FWriteAccessScope *)&local_98);
  if ((local_108.DelegateSize != 0) &&
     (local_108.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_108.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_108,0,0,0x10);
    local_108.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_108.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_108.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_110);
  return;
}

// OpenItemDetailInfo @ 14bb265d0

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ItemDetailInfoManager::OpenItemDetailInfo
          (UDS_ItemDetailInfoManager *this,long64 param_1,EDS_ItemDetailInfoType param_2,
          EDS_ItemDetailInfoPopupType param_3)

{
  undefined1 *puVar1;
  TMap<EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
  *this_00;
  bool bVar2;
  int iVar3;
  UDS_WindowManager *this_01;
  FDS_ItemDetailInfoData *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar7;
  undefined1 *puVar8;
  EDS_WindowWidget EVar9;
  FWeakObjectPtr local_88;
  UDS_ItemDetailInfoManager *local_80;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  undefined1 local_60 [8];
  FDelegateAllocation local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  this_01 = UDS_WindowManager::GetInst();
  if (this_01 == (UDS_WindowManager *)0x0) {
    return;
  }
  if ((param_2 == Normal) || (EVar9 = ItemDetailInfoComparison, param_2 != Comparison)) {
    EVar9 = ItemDetailInfo;
  }
  this_00 = &this->ItemDetailInfoMap;
  if (*(int *)&(this->ItemDetailInfoMap).field_0x8 == *(int *)&(this->ItemDetailInfoMap).field_0x34)
  {
    return;
  }
  puVar8 = *(undefined1 **)&(this->ItemDetailInfoMap).field_0x40;
  puVar1 = &(this->ItemDetailInfoMap).field_0x38;
  if (puVar8 == (undefined1 *)0x0) {
    puVar8 = puVar1;
  }
  iVar3 = *(int *)(puVar8 + ((ulonglong)(*(int *)&(this->ItemDetailInfoMap).field_0x48 - 1) &
                            (ulonglong)param_2) * 4);
  if (iVar3 == -1) {
    return;
  }
  while (*(EDS_ItemDetailInfoType *)(*(longlong *)this_00 + (longlong)iVar3 * 0x24) != param_2) {
    iVar3 = *(int *)(*(longlong *)this_00 + 0x1c + (longlong)iVar3 * 0x24);
    if (iVar3 == -1) {
      return;
    }
  }
  local_88.ObjectIndex = 0;
  local_88.ObjectSerialNumber = 0;
  local_80 = (UDS_ItemDetailInfoManager *)0x0;
  FWeakObjectPtr::operator=(&local_88,(FObjectPtr)&local_80);
  pFVar4 = TMapBase<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
           ::FindChecked(this_00,param_2);
  pFVar4->ItemTID = (int)param_1;
  pFVar4 = TMapBase<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
           ::FindChecked(this_00,param_2);
  (pFVar4->ItemData_Comparison).WeakPtr = local_88;
  pFVar4 = TMapBase<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
           ::FindChecked(this_00,param_2);
  pFVar4->PopupType = param_3;
  local_60 = (undefined1  [8])0x0;
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_58;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_58);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ItemDetailInfoManager____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_ItemDetailInfoManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar5[3] = 0;
    local_80 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_ItemDetailInfoManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_80);
    puVar5[4] = OnOpenItemNormalDetailInfo;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  pTVar7 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                     ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                      &local_48,
                      (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                      local_60);
  UDS_WindowManager::OpenWindow(this_01,EVar9,pTVar7);
  bVar2 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_88,(void *)0x0);
  if (bVar2) {
    CloseItemDetailInfo(this,Comparison);
  }
  else {
    if (*(int *)&(this->ItemDetailInfoMap).field_0x8 !=
        *(int *)&(this->ItemDetailInfoMap).field_0x34) {
      puVar8 = *(undefined1 **)&(this->ItemDetailInfoMap).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = puVar1;
      }
      iVar3 = *(int *)(puVar8 + (ulonglong)(*(int *)&(this->ItemDetailInfoMap).field_0x48 - 1U & 1)
                                * 4);
      if (iVar3 != -1) {
        do {
          if (*(char *)(*(longlong *)this_00 + (longlong)iVar3 * 0x24) == '\x01') {
            pFVar4 = TMapBase<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
                     ::FindChecked(this_00,Comparison);
            (pFVar4->ItemData).WeakPtr = local_88;
            break;
          }
          iVar3 = *(int *)(*(longlong *)this_00 + 0x1c + (longlong)iVar3 * 0x24);
        } while (iVar3 != -1);
      }
    }
    local_78 = (undefined1  [8])0x0;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_70;
    puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ItemDetailInfoManager____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_ItemDetailInfoManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar5[3] = 0;
      local_80 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_ItemDetailInfoManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_80);
      puVar5[4] = OnOpenItemComparisonDetailInfo;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    pTVar7 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_48,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_78);
    UDS_WindowManager::OpenWindow(this_01,ItemDetailInfoComparison,pTVar7);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
               (FWriteAccessScope *)&local_48);
    if ((local_70.DelegateSize != 0) &&
       (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_70,0,0,0x10);
      local_70.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_70.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_78);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
             (FWriteAccessScope *)&local_48);
  if ((local_58.DelegateSize != 0) &&
     (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_58.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_58,0,0,0x10);
    local_58.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_58.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_60);
  return;
}

// RemoveOptionValue @ 14bb31940

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

void __thiscall
UDS_ItemDetailInfoManager::RemoveOptionValue
          (UDS_ItemDetailInfoManager *this,EDS_ItemDetailOption param_1)

{
  this->OptionValue = this->OptionValue & ~param_1;
  TMulticastDelegate<void___cdecl(enum_EDS_ItemDetailOption),FDefaultDelegateUserPolicy>::Broadcast
            (&this->ChangedOptionValue_Delegate,this->OptionValue);
  return;
}

// Reset @ 14bb32cc0

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

void __thiscall UDS_ItemDetailInfoManager::Reset(UDS_ItemDetailInfoManager *this)

{
  undefined1 *puVar1;
  TMap<EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  TMap<EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  TMap<EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FDestructionSentinel local_68;
  
  iVar12 = 0;
  this->OptionValue = None;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ChangedOptionValue_Delegate,(FWriteAccessScope *)&local_68);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->ChangedOptionValue_Delegate);
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  puVar1 = &(this->ItemDetailInfoMap).field_0x10;
  iVar4 = *(int *)&(this->ItemDetailInfoMap).field_0x28;
  pTVar2 = &this->ItemDetailInfoMap;
  uVar8 = 1;
  iVar14 = 0;
  iVar9 = iVar14;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->ItemDetailInfoMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    iVar14 = 0;
    iVar12 = 0;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14bb32d9d;
      uVar11 = puVar15[lVar10 + 1];
    }
    uVar8 = -uVar11 & uVar11;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar9 = local_res10 + -1 + iVar14;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14bb32d9d:
  uVar11 = *(uint *)&(this->ItemDetailInfoMap).field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar8,iVar12);
  TStack_90.CurrentBitIndex = iVar9;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_90._28_4_ = iVar9;
  TStack_90.BaseBitIndex = iVar14;
  uStack_70 = CONCAT44(uStack_ac,
                       *(int *)&(this->ItemDetailInfoMap).field_0x8 -
                       *(int *)&(this->ItemDetailInfoMap).field_0x34);
  local_98 = pTVar2;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar4 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&(this->ItemDetailInfoMap).field_0x28;
  if (uVar11 != uVar8) {
    puVar13 = *(undefined1 **)&(this->ItemDetailInfoMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14bb32ea0;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar8 < (int)uVar11) {
      uVar11 = uVar8;
    }
  }
LAB_14bb32ea0:
  while( true ) {
    pTVar6 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_90.CurrentBitIndex == uVar11) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar2))
    break;
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_a8 = 0;
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_a8);
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_a0 = 0;
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_a0);
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  return;
}

