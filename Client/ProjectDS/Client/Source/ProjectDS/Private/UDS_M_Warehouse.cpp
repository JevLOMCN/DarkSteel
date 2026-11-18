// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 26

// StaticClass @ 14b519d80

UClass * __cdecl UDS_M_Warehouse::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_Warehouse.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_Warehouse",
               &Z_Registration_Info_UClass_UDS_M_Warehouse.InnerSingleton,
               StaticRegisterNativesUDS_M_Warehouse,0x228,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_M_Warehouse>,InternalVTableHelperCtorCaller<UDS_M_Warehouse>
               ,local_res8,UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_Warehouse.InnerSingleton;
}

// UDS_M_Warehouse @ 14b5227d0

UDS_M_Warehouse * __thiscall
UDS_M_Warehouse::UDS_M_Warehouse(UDS_M_Warehouse *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_Warehouse__6B_;
  (this->WarehouseBagModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->WarehouseBagModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->CharacterBagModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CharacterBagModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->MountBagModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->MountBagModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->AutoModeModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->AutoModeModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->PlayerToWarehouseButtonModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->PlayerToWarehouseButtonModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->MountToWarehouseButtonModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->MountToWarehouseButtonModel).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->QuantityDataMap = 0;
  *(undefined8 *)&(this->QuantityDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->QuantityDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuantityDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QuantityDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->QuantityDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x48 = 0;
  return this;
}

// UDS_M_Warehouse @ 14b5228e0

UDS_M_Warehouse * __thiscall
UDS_M_Warehouse::UDS_M_Warehouse(UDS_M_Warehouse *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_Warehouse__6B_;
  (this->WarehouseBagModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->WarehouseBagModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->CharacterBagModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CharacterBagModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->MountBagModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->MountBagModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->AutoModeModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->AutoModeModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->PlayerToWarehouseButtonModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->PlayerToWarehouseButtonModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->MountToWarehouseButtonModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->MountToWarehouseButtonModel).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->QuantityDataMap = 0;
  *(undefined8 *)&(this->QuantityDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->QuantityDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuantityDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QuantityDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->QuantityDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x48 = 0;
  return this;
}

// ~UDS_M_Warehouse @ 14b523730

void __thiscall UDS_M_Warehouse::~UDS_M_Warehouse(UDS_M_Warehouse *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_M_Warehouse__6B_;
  *(undefined4 *)&(this->QuantityDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->QuantityDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_InventoryQuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_InventoryQuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_InventoryQuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->QuantityDataMap);
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b526a60

UClass * __cdecl UDS_M_Warehouse::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_Warehouse.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_Warehouse",
               &Z_Registration_Info_UClass_UDS_M_Warehouse.InnerSingleton,
               StaticRegisterNativesUDS_M_Warehouse,0x228,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_M_Warehouse>,InternalVTableHelperCtorCaller<UDS_M_Warehouse>
               ,local_res8,UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_Warehouse.InnerSingleton;
}

// StaticRegisterNativesUDS_M_Warehouse @ 14b527650

void __cdecl UDS_M_Warehouse::StaticRegisterNativesUDS_M_Warehouse(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_M_Warehouse_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnUpdateInventory @ 14b529bc0

void __cdecl UDS_M_Warehouse::execOnUpdateInventory(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EDS_InventoryUpdate local_res10;
  
  local_res10 = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnUpdateInventory((UDS_M_Warehouse *)param_1,local_res10);
  return;
}

// operator() @ 14bd44500

bool __thiscall
`UDS_M_Warehouse::MountToWarehouse'::__l2::<lambda_1>::operator()
          (void *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  int *piVar5;
  int *piVar6;
  FWeakObjectPtr local_res10;
  EDS_InventoryType local_res18 [16];
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    local_res18[0] = PlayerWareHouse;
    piVar5 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
             ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(&pUVar4[10].field_0x18,3,local_res18);
    piVar6 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
             ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                       (&pUVar4[8].field_0x18,(uint)local_res18[0],local_res18);
    return 0 < *piVar6 + *piVar5;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3602175112511487615>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                     ,0x181,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 14bd445c0

bool __thiscall
`UDS_M_Warehouse::MountToWarehouse'::__l2::<lambda_2>::operator()
          (void *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  int *piVar5;
  int *piVar6;
  FWeakObjectPtr local_res10;
  EDS_InventoryType local_res18 [16];
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    local_res18[0] = PlayerWareHouse;
    piVar5 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
             ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(&pUVar4[10].field_0x18,3,local_res18);
    piVar6 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
             ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                       (&pUVar4[8].field_0x18,(uint)local_res18[0],local_res18);
    return *piVar6 + *piVar5 == 0;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3602175112511487608>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                     ,0x188,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// ConvertModelEventToWarehouseEvent @ 14bd4b110

EDS_WarehouseModelEvent __thiscall
UDS_M_Warehouse::ConvertModelEventToWarehouseEvent
          (UDS_M_Warehouse *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FWeakObjectPtr FVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FName FVar8;
  FString *pFVar9;
  wchar_t *_Str;
  FWeakObjectPtr FVar10;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  FWeakObjectPtr local_30;
  FWeakObjectPtr local_28 [2];
  
  local_res10 = param_1.WeakPtr;
  FVar5 = (FWeakObjectPtr)FWeakObjectPtr::Get(&local_res10);
  FVar10.ObjectIndex = 0;
  FVar10.ObjectSerialNumber = 0;
  if (FVar5 == (FWeakObjectPtr)0x0) {
LAB_14bd4b155:
    FVar5 = FVar10;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_ModelEventWarehouse_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar6->_padding_)) goto LAB_14bd4b155;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_30 = FVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_30);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar2) {
    pUVar7 = FWeakObjectPtr::Get(&local_res20);
    if (*(int *)&pUVar7[5].field_0x8 == 1) {
      return ClickedCharBagTab;
    }
    if (*(int *)&pUVar7[5].field_0x8 == 2) {
      return ClickedMountBagTab;
    }
  }
  FVar5 = (FWeakObjectPtr)FWeakObjectPtr::Get(&local_res10);
  if (FVar5 == (FWeakObjectPtr)0x0) {
LAB_14bd4b211:
    FVar5 = FVar10;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar6->_padding_)) goto LAB_14bd4b211;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_30 = FVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_30);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) goto LAB_14bd4b3cc;
  pUVar7 = FWeakObjectPtr::Get(&local_res18);
  FVar5 = (FWeakObjectPtr)FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar7 + 1));
  if (FVar5 == (FWeakObjectPtr)0x0) {
LAB_14bd4b2a7:
    FVar5 = FVar10;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_M_InventoryBag_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar6->_padding_)) goto LAB_14bd4b2a7;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  local_38.ObjectIndex = 0;
  local_38.ObjectSerialNumber = 0;
  local_28[0] = FVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  FWeakObjectPtr::operator=(&local_38,(FObjectPtr)local_28);
  bVar2 = FWeakObjectPtr::IsValid(&local_38);
  if (bVar2) {
    pUVar7 = FWeakObjectPtr::Get(&local_res18);
    if (*(int *)&pUVar7[5].field_0x8 == 3) {
      return DropSlotToBag;
    }
  }
  pUVar7 = FWeakObjectPtr::Get(&local_res18);
  FVar5 = (FWeakObjectPtr)FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar7 + 1));
  if (FVar5 == (FWeakObjectPtr)0x0) {
LAB_14bd4b358:
    FVar5 = FVar10;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar6->_padding_)) goto LAB_14bd4b358;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  local_30.ObjectIndex = 0;
  local_30.ObjectSerialNumber = 0;
  local_28[0] = FVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  FWeakObjectPtr::operator=(&local_30,(FObjectPtr)local_28);
  bVar2 = FWeakObjectPtr::IsValid(&local_30);
  if (bVar2) {
    pUVar7 = FWeakObjectPtr::Get(&local_res18);
    if (*(int *)&pUVar7[5].field_0x8 == 7) {
      return ClickedSlot;
    }
  }
LAB_14bd4b3cc:
  pUVar7 = FWeakObjectPtr::Get(&local_res10);
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar7 + 1));
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_WarehouseData>
                    ((FDS_DataContainer *)&pUVar7[1].field_0x18,(EDS_WarehouseData)local_28);
  uVar1 = *(undefined8 *)FVar8;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&pUVar7[1].field_0x18,(int)((ulonglong)uVar1 >> 0x20) + uVar3,
                      (FName *)FVar8);
  if ((pFVar9->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  iVar4 = _wtoi(_Str);
  if (iVar4 != 1) {
    if (iVar4 != 2) {
      return None;
    }
    return ClickedMountToWarehouse;
  }
  return ClickedPlayerToWarehouse;
}

// GetQuantityData @ 14bd5ff60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_InventoryQuantityData,FWeakObjectPtr> __thiscall
UDS_M_Warehouse::GetQuantityData(UDS_M_Warehouse *this,long64 param_1,EDS_InventoryType param_2)

{
  TMap<__int64,TObjectPtr<UDS_InventoryQuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>_>
  *this_00;
  TObjectPtr<UDS_InventoryQuantityData>_u_0 TVar1;
  int iVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  TObjectPtr<UDS_InventoryQuantityData>_u_0 *pTVar5;
  TObjectPtr<UDS_InventoryQuantityData> *pTVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined7 in_register_00000081;
  EDS_InventoryType in_R9B;
  undefined1 auStackY_118 [32];
  TObjectPtr<UDS_InventoryQuantityData>_u_0 local_e8;
  TObjectPtr<UDS_InventoryQuantityData>_u_0 local_e0;
  TPairInitializer<__int64_const_&,TObjectPtr<UDS_InventoryQuantityData>_&&> local_d8;
  TObjectPtr<UDS_InventoryQuantityData>_u_0 *local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_e8._1_7_ = in_register_00000081;
  local_e8._0_1_ = param_2;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this_00 = &this->QuantityDataMap;
  if (*(int *)&(this->QuantityDataMap).field_0x8 != *(int *)&(this->QuantityDataMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->QuantityDataMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->QuantityDataMap).field_0x38;
    }
    iVar2 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->QuantityDataMap).field_0x48 - 1U &
                              (int)((uint7)in_register_00000081 >> 0x18) * 0x17 + local_e8._0_4_) *
                              4);
    if (iVar2 != -1) {
      do {
        if (*(UDS_InventoryQuantityData **)
             (*(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x18) == local_e8.DebugPtr)
        goto LAB_14bd600c6;
        iVar2 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UDS_InventoryQuantityData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar4);
  local_b8._8_8_ = pUVar3;
  local_e0.DebugPtr =
       (UDS_InventoryQuantityData *)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar7 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_e0.DebugPtr != (UDS_InventoryQuantityData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_e0.DebugPtr);
  }
  local_d8.Value = (TObjectPtr<UDS_InventoryQuantityData> *)&local_e8;
  local_c8 = &local_e0;
  TSet<TTuple<__int64,TObjectPtr<UDS_InventoryQuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<__int64_const_&,TObjectPtr<UDS_InventoryQuantityData>_&&>_>
            ((TSet<TTuple<__int64,TObjectPtr<UDS_InventoryQuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>,FDefaultSetAllocator>
              *)this_00,&local_d8,(bool *)&local_d8.Value);
  pTVar5 = &TMapBase<__int64,TObjectPtr<UDS_InventoryQuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>_>
            ::FindChecked((TMapBase<__int64,TObjectPtr<UDS_InventoryQuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>_>
                           *)this_00,(long64)local_e8)->field0_0x0;
  UDS_InventoryQuantityData::Init(pTVar5->DebugPtr,(long64)local_e8,in_R9B,0,0,-1);
LAB_14bd600c6:
  pTVar6 = TMapBase<__int64,TObjectPtr<UDS_InventoryQuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>_>
           ::FindChecked((TMapBase<__int64,TObjectPtr<UDS_InventoryQuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>_>
                          *)this_00,(long64)local_e8);
  TVar1.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar6->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar1.DebugPtr != (UDS_InventoryQuantityData *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UDS_InventoryQuantityData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
  }
  *(undefined8 *)param_1 = 0;
  local_e0.ObjectPtr.field0_0x0 = TVar1.ObjectPtr.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar1.DebugPtr != (UDS_InventoryQuantityData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_e0);
  return (TWeakObjectPtr<UDS_InventoryQuantityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetQuantityData @ 14bd60160

TWeakObjectPtr<UDS_QuantityData,FWeakObjectPtr> __thiscall
UDS_M_Warehouse::GetQuantityData
          (UDS_M_Warehouse *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  undefined8 local_res10 [3];
  
  *(undefined8 *)param_1.WeakPtr = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1.WeakPtr,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_QuantityData,FWeakObjectPtr>)param_1.WeakPtr;
}

// GetViewModelContext @ 14bd64bb0

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_Warehouse::GetViewModelContext
          (UDS_M_Warehouse *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  UDS_ModelBase::SetViewModelTemplateKey((UDS_ModelBase *)this,W_Warehouse);
  UDS_ModelBase::GetViewModelContext((UDS_ModelBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsAutoModeOn @ 14bd6a300

bool __thiscall UDS_M_Warehouse::IsAutoModeOn(UDS_M_Warehouse *this)

{
  bool bVar1;
  UDS_CharLocalSave *this_00;
  FWeakObjectPtr local_res10 [3];
  
  UDS_CharLocalSave::GetInst();
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    this_00 = (UDS_CharLocalSave *)FWeakObjectPtr::Get(local_res10);
    bVar1 = UDS_CharLocalSave::IsAllMoveToWarehouse(this_00);
    return bVar1;
  }
  return false;
}

// ManualMove @ 14bd6d000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_M_Warehouse::ManualMove
          (UDS_M_Warehouse *this,EDS_InventoryType param_1,EDS_InventoryType param_2,
          TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_3)

{
  undefined1 *puVar1;
  TMap<__int64,TObjectPtr<UDS_InventoryQuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>_>
  *this_00;
  code *pcVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  EDS_ValidateResult EVar6;
  EDS_ItemUseType EVar7;
  int iVar8;
  UDS_ItemData *pUVar9;
  UObject *pUVar10;
  int *piVar11;
  ulong64 uVar12;
  UDS_CharLocalSave *this_01;
  UDS_CommonPopupManager *this_02;
  undefined8 *puVar13;
  TWeakObjectPtr<UDS_InventoryQuantityData,FWeakObjectPtr> TVar14;
  FScriptContainerElement *pFVar15;
  FWeakObjectPtr local_res20;
  undefined1 auStackY_288 [32];
  EDS_InventoryType local_238 [8];
  EDS_InventoryType local_230 [8];
  FWeakObjectPtr local_228;
  TArray<DS_ItemInventoryMoveData,TSizedDefaultAllocator<32>_> local_220;
  TArray<DS_ItemInventoryMoveData,TSizedDefaultAllocator<32>_> local_210;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  TArray<DS_ItemInventoryMoveData,TSizedDefaultAllocator<32>_> local_1f0;
  TArray<DS_ItemInventoryMoveData,TSizedDefaultAllocator<32>_> local_1e0;
  FWeakObjectPtr local_1d0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1c8;
  FDelegateAllocation local_1c0;
  UDS_GameInstance *local_1b0;
  UDS_CommonPopupManager *local_1a8;
  UDS_M_Warehouse *local_1a0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_198;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_180;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_168;
  FDestructionSentinel local_150;
  FDelegateAllocation *local_138;
  undefined1 local_130 [8];
  undefined1 local_128 [16];
  undefined1 local_118 [80];
  undefined4 local_c8;
  undefined1 local_b8 [80];
  undefined4 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_res20 = param_3.WeakPtr;
  UDS_PlayerData::GetMainPlayerData();
  bVar5 = FWeakObjectPtr::IsValid(&local_1f8);
  if (bVar5) {
    if (param_1 == Mount) {
      pUVar9 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res20);
      bVar5 = UDS_ItemData::IsMountInventory(pUVar9);
      if (!bVar5) {
        local_198._0_8_ = 0;
        local_198._8_8_ = 0;
        local_198._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x664ce,Alert_None_01,&local_198);
        return;
      }
    }
    pUVar10 = FWeakObjectPtr::Get(&local_res20);
    EVar7 = DS_ItemDataUtil::GetItemUseType(*(int *)&pUVar10[8].field_0x10);
    if (EVar7 == Equipment) {
      local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_220.ArrayNum = 0;
      local_220.ArrayMax = 0;
      DS_ItemInventoryMoveData::DS_ItemInventoryMoveData((DS_ItemInventoryMoveData *)local_118);
      pUVar10 = FWeakObjectPtr::Get(&local_res20);
      DS_ItemInventoryMoveData::Init
                ((DS_ItemInventoryMoveData *)local_118,*(long64 *)&pUVar10[8].field_0x8);
      local_238[0] = param_2;
      pUVar10 = FWeakObjectPtr::Get(&local_res20);
      piVar11 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                          (&pUVar10[10].field_0x18,(uint)param_2,local_238);
      local_228.ObjectIndex = *piVar11;
      pUVar9 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res20);
      iVar8 = UDS_ItemData::GetStackCount_UnTradable(pUVar9,param_2);
      local_228.ObjectSerialNumber = iVar8;
      DS_ItemInventoryMoveData::SetMoveData
                ((DS_ItemInventoryMoveData *)local_118,param_1,param_2,
                 (DS_ItemInventoryMoveQuantityData)local_228);
      if (((local_220.AllocatorInstance.Data <= (DS_ItemInventoryMoveData *)local_118) &&
          ((FScriptContainerElement *)local_118 <
           local_220.AllocatorInstance.Data + (longlong)local_220.ArrayMax * 0x58)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar8 = local_220.ArrayNum;
      if (local_220.ArrayNum == local_220.ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x858,&local_220.AllocatorInstance,&local_220.ArrayMax);
      }
      local_220.ArrayNum = iVar8 + 1;
      *(undefined8 *)&local_220.AllocatorInstance.Data[(longlong)iVar8 * 0x58].field_0x0 =
           local_118._0_8_;
      pFVar15 = local_220.AllocatorInstance.Data + (longlong)iVar8 * 0x58 + 8;
      *(undefined8 *)pFVar15 = 0;
      *(undefined8 *)(pFVar15 + 8) = 0;
      *(undefined8 *)(pFVar15 + 0x20) = 0;
      *(undefined4 *)(pFVar15 + 0x28) = 0;
      *(undefined4 *)(pFVar15 + 0x2c) = 0x80;
      *(undefined4 *)(pFVar15 + 0x30) = 0xffffffff;
      *(undefined4 *)(pFVar15 + 0x34) = 0;
      *(undefined8 *)(pFVar15 + 0x40) = 0;
      *(undefined4 *)(pFVar15 + 0x48) = 0;
      TSet<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
      ::operator=(pFVar15,(TSet<TTuple<EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
                           *)(local_118 + 8));
      EVar6 = FDS_ItemInventoryMoveService::ValidateMoveDataAndConvertion
                        (param_1,param_2,&local_220);
      if (EVar6 == MoveEnable) {
        pUVar10 = FWeakObjectPtr::Get(&local_1f8);
        FVar3.Data = local_220.AllocatorInstance.Data;
        iVar4 = local_220.ArrayNum;
        iVar8 = *(int *)&pUVar10[9].field_0x10;
        local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1f0.ArrayNum = local_220.ArrayNum;
        if (local_220.ArrayNum == 0) {
          local_1f0.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,local_220.ArrayNum,0,&local_1f0.AllocatorInstance,local_220.ArrayNum,
                     &local_1f0.ArrayMax);
          ConstructItems<DS_ItemInventoryMoveData,DS_ItemInventoryMoveData,int>
                    (local_1f0.AllocatorInstance.Data,(DS_ItemInventoryMoveData *)FVar3.Data,iVar4);
        }
        uVar12 = FDS_DataContainer::GetData<unsigned___int64,enum_EDS_WarehouseData>
                           ((FDS_DataContainer *)&this->_padding_,NpcEntityID);
        FDS_ItemInventoryMoveService::RequestItemInventoryMove(uVar12,&local_1f0,iVar8);
      }
      else if (EVar6 == MoveDisable) {
        local_180._0_8_ = 0;
        local_180._8_8_ = 0;
        local_180._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x664bf,Alert_None_01,&local_180);
      }
      local_c8 = 0;
      if ((void *)local_118._72_8_ != (void *)0x0) {
        FMemory::Free((void *)local_118._72_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_118 + 8);
      DestructItems<DS_ItemInventoryMoveData,int>
                ((DS_ItemInventoryMoveData *)local_220.AllocatorInstance.Data,local_220.ArrayNum);
      if ((DS_ItemInventoryMoveData *)local_220.AllocatorInstance.Data !=
          (DS_ItemInventoryMoveData *)0x0) {
        FMemory::Free(local_220.AllocatorInstance.Data);
      }
    }
    else {
      UDS_CharLocalSave::GetInst();
      bVar5 = FWeakObjectPtr::IsValid(&local_1d0);
      if (bVar5) {
        this_01 = (UDS_CharLocalSave *)FWeakObjectPtr::Get(&local_1d0);
        bVar5 = UDS_CharLocalSave::IsAllMoveToWarehouse(this_01);
        if (bVar5) {
          local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_210.ArrayNum = 0;
          local_210.ArrayMax = 0;
          DS_ItemInventoryMoveData::DS_ItemInventoryMoveData((DS_ItemInventoryMoveData *)local_b8);
          pUVar10 = FWeakObjectPtr::Get(&local_res20);
          DS_ItemInventoryMoveData::Init
                    ((DS_ItemInventoryMoveData *)local_b8,*(long64 *)&pUVar10[8].field_0x8);
          local_230[0] = param_2;
          pUVar10 = FWeakObjectPtr::Get(&local_res20);
          piVar11 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                    ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                              (&pUVar10[10].field_0x18,(uint)param_2,local_230);
          local_228.ObjectIndex = *piVar11;
          pUVar9 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res20);
          iVar8 = UDS_ItemData::GetStackCount_UnTradable(pUVar9,param_2);
          local_228.ObjectSerialNumber = iVar8;
          DS_ItemInventoryMoveData::SetMoveData
                    ((DS_ItemInventoryMoveData *)local_b8,param_1,param_2,
                     (DS_ItemInventoryMoveQuantityData)local_228);
          if (((local_210.AllocatorInstance.Data <= (DS_ItemInventoryMoveData *)local_b8) &&
              ((FScriptContainerElement *)local_b8 <
               local_210.AllocatorInstance.Data + (longlong)local_210.ArrayMax * 0x58)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar8 = local_210.ArrayNum;
          if (local_210.ArrayNum == local_210.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x858,&local_210.AllocatorInstance,&local_210.ArrayMax);
          }
          local_210.ArrayNum = iVar8 + 1;
          *(undefined8 *)&local_210.AllocatorInstance.Data[(longlong)iVar8 * 0x58].field_0x0 =
               local_b8._0_8_;
          pFVar15 = local_210.AllocatorInstance.Data + (longlong)iVar8 * 0x58 + 8;
          *(undefined8 *)pFVar15 = 0;
          *(undefined8 *)(pFVar15 + 8) = 0;
          *(undefined8 *)(pFVar15 + 0x20) = 0;
          *(undefined4 *)(pFVar15 + 0x28) = 0;
          *(undefined4 *)(pFVar15 + 0x2c) = 0x80;
          *(undefined4 *)(pFVar15 + 0x30) = 0xffffffff;
          *(undefined4 *)(pFVar15 + 0x34) = 0;
          *(undefined8 *)(pFVar15 + 0x40) = 0;
          *(undefined4 *)(pFVar15 + 0x48) = 0;
          TSet<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
          ::operator=(pFVar15,(TSet<TTuple<EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
                               *)(local_b8 + 8));
          EVar6 = FDS_ItemInventoryMoveService::ValidateMoveDataAndConvertion
                            (param_1,param_2,&local_210);
          if (EVar6 == MoveEnable) {
            pUVar10 = FWeakObjectPtr::Get(&local_1f8);
            FVar3.Data = local_210.AllocatorInstance.Data;
            iVar4 = local_210.ArrayNum;
            iVar8 = *(int *)&pUVar10[9].field_0x10;
            local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1e0.ArrayNum = local_210.ArrayNum;
            if (local_210.ArrayNum == 0) {
              local_1e0.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x58,8,local_210.ArrayNum,0,&local_1e0.AllocatorInstance,local_210.ArrayNum
                         ,&local_1e0.ArrayMax);
              ConstructItems<DS_ItemInventoryMoveData,DS_ItemInventoryMoveData,int>
                        (local_1e0.AllocatorInstance.Data,(DS_ItemInventoryMoveData *)FVar3.Data,
                         iVar4);
            }
            uVar12 = FDS_DataContainer::GetData<unsigned___int64,enum_EDS_WarehouseData>
                               ((FDS_DataContainer *)&this->_padding_,NpcEntityID);
            FDS_ItemInventoryMoveService::RequestItemInventoryMove(uVar12,&local_1e0,iVar8);
          }
          else if (EVar6 == MoveDisable) {
            local_168._0_8_ = 0;
            local_168._8_8_ = 0;
            local_168._16_4_ = 0;
            UDS_UIMessageManager::OpenMsgByStringUi(0x664bf,Alert_None_01,&local_168);
          }
          local_68 = 0;
          if ((void *)local_b8._72_8_ != (void *)0x0) {
            FMemory::Free((void *)local_b8._72_8_);
          }
          TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (local_b8 + 8);
          DestructItems<DS_ItemInventoryMoveData,int>
                    ((DS_ItemInventoryMoveData *)local_210.AllocatorInstance.Data,local_210.ArrayNum
                    );
          if ((DS_ItemInventoryMoveData *)local_210.AllocatorInstance.Data ==
              (DS_ItemInventoryMoveData *)0x0) {
            return;
          }
          FMemory::Free(local_210.AllocatorInstance.Data);
          return;
        }
      }
      local_1b0 = UDS_GameInstance::GetInst();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_1b0 != (UDS_GameInstance *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_1b0);
      }
      local_228.ObjectIndex = 0;
      local_228.ObjectSerialNumber = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_1b0 != (UDS_GameInstance *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_1b0);
      }
      FWeakObjectPtr::operator=(&local_228,(FObjectPtr)&local_1b0);
      bVar5 = FWeakObjectPtr::IsValid(&local_228);
      if (bVar5) {
        local_1a8 = UDS_CommonPopupManager::GetInst();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_1a8 != (UDS_CommonPopupManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_1a8);
        }
        local_200.ObjectIndex = 0;
        local_200.ObjectSerialNumber = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_1a8 != (UDS_CommonPopupManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_1a8);
        }
        FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1a8);
        bVar5 = FWeakObjectPtr::IsValid(&local_200);
        if (bVar5) {
          this_00 = &this->QuantityDataMap;
          bVar5 = 1 < *(int *)&(this->QuantityDataMap).field_0x48;
          if (!bVar5) {
            TSet<TTuple<__int64,TObjectPtr<UDS_InventoryQuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>,FDefaultSetAllocator>
            ::UnhashElements((TSet<TTuple<__int64,TObjectPtr<UDS_InventoryQuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>,FDefaultSetAllocator>
                              *)this_00);
          }
          puVar1 = &(this->QuantityDataMap).field_0xc;
          *(undefined4 *)&(this->QuantityDataMap).field_0x8 = 0;
          if (*(int *)puVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
          }
          *(undefined4 *)&(this->QuantityDataMap).field_0x30 = 0xffffffff;
          *(undefined4 *)&(this->QuantityDataMap).field_0x34 = 0;
          iVar8 = *(int *)&(this->QuantityDataMap).field_0x2c;
          *(undefined4 *)&(this->QuantityDataMap).field_0x28 = 0;
          if ((iVar8 < 0) || (0x80 < iVar8)) {
            *(undefined4 *)&(this->QuantityDataMap).field_0x2c = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)&(this->QuantityDataMap).field_0x10,0
                      );
          }
          if (bVar5) {
            *(undefined4 *)&(this->QuantityDataMap).field_0x48 = 1;
            TSet<TTuple<__int64,TObjectPtr<UDS_InventoryQuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>,FDefaultSetAllocator>
            ::Rehash((TSet<TTuple<__int64,TObjectPtr<UDS_InventoryQuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>,FDefaultSetAllocator>
                      *)this_00);
          }
          this_02 = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&local_200);
          local_1c8.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          local_1c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_1c0.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_1c8,(FWriteAccessScope *)&local_150);
          local_138 = &local_1c0;
          puVar13 = UE::Core::Private::DelegateAllocate(0x28,&local_1c0);
          if (puVar13 != (undefined8 *)0x0) {
            *puVar13 = &
                       ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__W4EDS_InventoryType__W42___6B_
            ;
            *(EDS_InventoryType *)(puVar13 + 1) = param_1;
            *(EDS_InventoryType *)((longlong)puVar13 + 9) = param_2;
            uVar12 = FDelegateHandle::GenerateNewID();
            puVar13[2] = uVar12;
            *puVar13 = &
                       ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_Warehouse____A6AXXZUFDefaultDelegateUserPolicy__W4EDS_InventoryType__W43___6B_
            ;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UDS_M_Warehouse *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar13[3] = 0;
            local_1a0 = this;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UDS_M_Warehouse *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)&local_1a0);
            puVar13[4] = OnClickedQuantitySelectionPopupConfirm;
          }
          if (local_150.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_150.Accessor,&local_150);
          }
          pUVar10 = FWeakObjectPtr::Get(&local_res20);
          TVar14 = GetQuantityData(this,(long64)local_130,
                                   (EDS_InventoryType)*(undefined8 *)&pUVar10[8].field_0x8);
          UDS_CommonPopupManager::CreateQuantitySelectionPopup
                    (this_02,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_128,
                     (TWeakObjectPtr<UDS_InventoryQuantityData,FWeakObjectPtr>)local_res20,
                     *(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> **)TVar14.WeakPtr);
        }
        else {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3602175112511487490>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                             ,0x1fe,"false");
          if (bVar5) goto code_r0x00014bd6d716;
        }
      }
      else {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3602175112511487493>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                           ,0x1fb,"false");
        if (bVar5) {
code_r0x00014bd6d716:
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  return;
}

// MountToWarehouse @ 14bd6d900

void __thiscall UDS_M_Warehouse::MountToWarehouse(UDS_M_Warehouse *this)

{
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_ItemDataSet *this_00;
  ForAnyElementType FVar5;
  FWeakObjectPtr *pFVar6;
  longlong lVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FWeakObjectPtr local_res20;
  TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_98;
  TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_88;
  TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_78;
  TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_68;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_58;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_40;
  
  bVar3 = UDS_MountManager::IsUseableMountInventory();
  if (bVar3) {
    local_58._0_8_ = 0;
    local_58._8_8_ = 0;
    local_58._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x664cd,Alert_None_01,&local_58);
    return;
  }
  DS_ItemDataUtil::GetItemDataSet();
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar3) {
    this_00 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_res20);
    UDS_ItemDataSet::GetItemDataList(this_00,&local_78,Mount);
    if (local_78.ArrayNum == 0) {
      local_40._0_8_ = 0;
      local_40._8_8_ = 0;
      local_40._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x664c4,Alert_None_01,&local_40);
    }
    else {
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar1 = (FWeakObjectPtr *)(local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 8)
      ;
      local_98.ArrayNum = 0;
      local_98.ArrayMax = 0;
      for (FVar5.Data = local_78.AllocatorInstance.Data; (FWeakObjectPtr *)FVar5.Data != pFVar1;
          FVar5.Data = FVar5.Data + 8) {
        bVar3 = `UDS_M_Warehouse::MountToWarehouse'::__l2::<lambda_1>::operator()
                          (local_res10,
                           (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)
                           *(FWeakObjectPtr *)FVar5.Data);
        if (bVar3) {
          if (((local_98.AllocatorInstance.Data <= FVar5.Data) &&
              (FVar5.Data <
               (FWeakObjectPtr *)(local_98.AllocatorInstance.Data + (longlong)local_98.ArrayMax * 8)
              )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar4 = local_98.ArrayNum;
          if (local_98.ArrayNum == local_98.ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_98.AllocatorInstance,&local_98.ArrayMax);
          }
          local_98.ArrayNum = iVar4 + 1;
          *(FWeakObjectPtr *)(local_98.AllocatorInstance.Data + (longlong)iVar4 * 8) =
               *(FWeakObjectPtr *)FVar5.Data;
        }
      }
      local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.ArrayNum = 0;
      local_88.ArrayMax = 0;
      pFVar1 = (FWeakObjectPtr *)
               ((longlong)local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 8);
      for (pFVar6 = (FWeakObjectPtr *)local_78.AllocatorInstance.Data; pFVar6 != pFVar1;
          pFVar6 = pFVar6 + 1) {
        bVar3 = `UDS_M_Warehouse::MountToWarehouse'::__l2::<lambda_2>::operator()
                          (local_res18,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*pFVar6);
        if (bVar3) {
          if (((local_88.AllocatorInstance.Data <= pFVar6) &&
              (pFVar6 < (FWeakObjectPtr *)
                        (local_88.AllocatorInstance.Data + (longlong)local_88.ArrayMax * 8))) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar4 = local_88.ArrayNum;
          if (local_88.ArrayNum == local_88.ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_88.AllocatorInstance,&local_88.ArrayMax);
          }
          local_88.ArrayNum = iVar4 + 1;
          *(FWeakObjectPtr *)(local_88.AllocatorInstance.Data + (longlong)iVar4 * 8) = *pFVar6;
        }
      }
      DS_Sorting<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>::Sort
                (&local_98,MoveToWarehouse,Ascend);
      DS_Sorting<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>::Sort
                (&local_88,MoveToWarehouse,Ascend);
      lVar7 = (longlong)local_88.ArrayNum;
      if (local_88.ArrayNum != 0) {
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,local_88.ArrayNum,&local_98.AllocatorInstance,&local_98.ArrayNum,
                           &local_98.ArrayMax);
        memcpy(local_98.AllocatorInstance.Data + (longlong)iVar4 * 8,local_88.AllocatorInstance.Data
               ,lVar7 << 3);
      }
      local_68.AllocatorInstance.Data = local_98.AllocatorInstance.Data;
      local_68.ArrayNum = local_98.ArrayNum;
      local_68.ArrayMax = local_98.ArrayMax;
      local_98.ArrayNum = 0;
      local_98.ArrayMax = 0;
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      MoveToWarehouseDataValidateAndConvert(this,&local_68,Mount);
      if ((FWeakObjectPtr *)local_88.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
    }
    if ((FWeakObjectPtr *)local_78.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3602175112511487628>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                       ,0x174,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// MoveToWarehouseDataValidateAndConvert @ 14bd6dce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_M_Warehouse::MoveToWarehouseDataValidateAndConvert
          (UDS_M_Warehouse *this,
          TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *param_1,
          EDS_InventoryType param_2)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  DS_ItemInventoryMoveQuantityData DVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  EDS_ValidateResult EVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  UObject *pUVar13;
  int *piVar14;
  FName FVar15;
  FString *pFVar16;
  ulonglong uVar17;
  wchar_t *_Str;
  UObject *pUVar18;
  FScriptContainerElement *pFVar19;
  FWeakObjectPtr *pFVar20;
  undefined1 auStackY_1b8 [32];
  undefined1 local_168;
  EDS_InventoryType local_167 [7];
  EDS_InventoryType local_160 [8];
  TArray<DS_ItemInventoryMoveData,TSizedDefaultAllocator<32>_> local_158;
  FWeakObjectPtr local_148;
  TArray<DS_ItemInventoryMoveData,TSizedDefaultAllocator<32>_> local_140;
  DS_ItemInventoryMoveQuantityData local_130;
  undefined8 local_128;
  undefined8 local_120;
  int local_118;
  int iStack_114;
  FWeakObjectPtr local_110;
  initializer_list<TPairInitializer<EDS_InventoryType_const_&,DS_ItemInventoryMoveQuantityData_const_&>_>
  local_108;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_f8;
  undefined1 local_e0 [8];
  TPairInitializer<EDS_InventoryType_const_&,DS_ItemInventoryMoveQuantityData_const_&> local_d8;
  EDS_InventoryType *local_c8;
  undefined8 *local_c0;
  EDS_InventoryType *local_b8;
  undefined8 *local_b0;
  undefined1 local_a8 [80];
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  UDS_PlayerData::GetMainPlayerData();
  bVar8 = FWeakObjectPtr::IsValid(&local_110);
  if (bVar8) {
    iVar2 = param_1->ArrayNum;
    pFVar20 = (FWeakObjectPtr *)(param_1->AllocatorInstance).Data;
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar1 = pFVar20 + iVar2;
    local_158.ArrayNum = 0;
    local_158.ArrayMax = 0;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_168 = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_168);
      }
      iVar11 = 0;
      if (pFVar20 == pFVar1) break;
      local_148 = *pFVar20;
      local_d8.Key = local_167;
      local_a8._0_8_ = (EDS_InventoryType *)0x0;
      local_d8.Value = &local_130;
      local_c8 = local_167 + 1;
      local_c0 = &local_128;
      local_b8 = local_167 + 2;
      local_b0 = &local_120;
      local_108._First = &local_d8;
      local_108._Last =
           (TPairInitializer<EDS_InventoryType_const_&,DS_ItemInventoryMoveQuantityData_const_&> *)
           local_a8;
      local_167[0] = PlayerNormal;
      local_130.TradableQuantity = 0;
      local_130.UntradableQuantity = 0;
      local_167[1] = 3;
      local_128 = 0;
      local_167[2] = 6;
      local_120 = 0;
      TMap<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>_>
      ::
      TMap<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>_>
                (local_a8 + 8,&local_108);
      pUVar13 = FWeakObjectPtr::Get(&local_148);
      DS_ItemInventoryMoveData::Init
                ((DS_ItemInventoryMoveData *)local_a8,*(long64 *)&pUVar13[8].field_0x8);
      local_160[0] = param_2;
      pUVar13 = FWeakObjectPtr::Get(&local_148);
      piVar14 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                          (&pUVar13[10].field_0x18,(uint)param_2,local_160);
      local_118 = *piVar14;
      pUVar13 = FWeakObjectPtr::Get(&local_148);
      if (*(int *)&pUVar13[8].field_0x20 != *(int *)&pUVar13[9].field_0x24) {
        pUVar18 = pUVar13 + 10;
        if (*(UObject **)&pUVar13[10].field_0x8 != (UObject *)0x0) {
          pUVar18 = *(UObject **)&pUVar13[10].field_0x8;
        }
        iVar10 = *(int *)(&pUVar18->field_0x0 +
                         ((ulonglong)(*(int *)&pUVar13[10].field_0x10 - 1) & (ulonglong)param_2) * 4
                         );
        if (iVar10 != -1) {
          lVar3 = *(longlong *)&pUVar13[8].field_0x18;
          do {
            if (*(EDS_InventoryType *)(lVar3 + (longlong)iVar10 * 0x10) == param_2) {
              piVar14 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                        ::FindChecked(&pUVar13[8].field_0x18,param_2);
              iVar11 = *piVar14;
              break;
            }
            iVar10 = *(int *)(lVar3 + 8 + (longlong)iVar10 * 0x10);
          } while (iVar10 != -1);
        }
      }
      DVar6.UntradableQuantity = iVar11;
      DVar6.TradableQuantity = local_118;
      iStack_114 = iVar11;
      DS_ItemInventoryMoveData::SetMoveData
                ((DS_ItemInventoryMoveData *)local_a8,PlayerWareHouse,param_2,DVar6);
      if (((local_158.AllocatorInstance.Data <= (DS_ItemInventoryMoveData *)local_a8) &&
          ((FScriptContainerElement *)local_a8 <
           local_158.AllocatorInstance.Data + (longlong)local_158.ArrayMax * 0x58)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = local_158.ArrayNum;
      if (local_158.ArrayNum == local_158.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,&local_158.AllocatorInstance,&local_158.ArrayMax);
      }
      local_158.ArrayNum = iVar11 + 1;
      pFVar19 = local_158.AllocatorInstance.Data + (longlong)iVar11 * 0x58;
      *(undefined8 *)&pFVar19->field_0x0 = local_a8._0_8_;
      *(undefined8 *)(pFVar19 + 8) = 0;
      *(undefined8 *)(pFVar19 + 0x10) = 0;
      *(undefined8 *)(pFVar19 + 0x28) = 0;
      *(undefined4 *)(pFVar19 + 0x30) = 0;
      *(undefined4 *)(pFVar19 + 0x34) = 0x80;
      *(undefined4 *)(pFVar19 + 0x38) = 0xffffffff;
      *(undefined4 *)(pFVar19 + 0x3c) = 0;
      *(undefined8 *)(pFVar19 + 0x48) = 0;
      *(undefined4 *)(pFVar19 + 0x50) = 0;
      TSet<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
      ::operator=(pFVar19 + 8,
                  (TSet<TTuple<EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
                   *)(local_a8 + 8));
      local_58 = 0;
      if ((void *)local_a8._72_8_ != (void *)0x0) {
        FMemory::Free((void *)local_a8._72_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_a8 + 8);
      pFVar20 = pFVar20 + 1;
    }
    EVar9 = FDS_ItemInventoryMoveService::ValidateMoveDataAndConvertion
                      (PlayerWareHouse,param_2,&local_158);
    if (EVar9 == MoveEnable) {
      pUVar13 = FWeakObjectPtr::Get(&local_110);
      FVar7.Data = local_158.AllocatorInstance.Data;
      iVar11 = local_158.ArrayNum;
      iVar2 = *(int *)&pUVar13[9].field_0x10;
      local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.ArrayNum = local_158.ArrayNum;
      if (local_158.ArrayNum == 0) {
        local_140.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,local_158.ArrayNum,0,&local_140.AllocatorInstance,local_158.ArrayNum,
                   &local_140.ArrayMax);
        ConstructItems<DS_ItemInventoryMoveData,DS_ItemInventoryMoveData,int>
                  (local_140.AllocatorInstance.Data,(DS_ItemInventoryMoveData *)FVar7.Data,iVar11);
      }
      FVar15 = FDS_DataContainer::TransformIndexToName<enum_EDS_WarehouseData>
                         ((FDS_DataContainer *)&this->_padding_,(EDS_WarehouseData)local_e0);
      uVar4 = *(undefined8 *)FVar15;
      uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
      pFVar16 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::FindOrAddImpl<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)&this->_padding_,uVar12 + (int)((ulonglong)uVar4 >> 0x20),
                           (FName *)FVar15);
      if ((pFVar16->Data).ArrayNum == 0) {
        _Str = L"";
      }
      else {
        _Str = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
      uVar17 = _wcstoui64(_Str,(wchar_t **)0x0,0);
      FDS_ItemInventoryMoveService::RequestItemInventoryMove(uVar17,&local_140,iVar2);
    }
    else if (EVar9 == MoveDisable) {
      local_f8._0_8_ = 0;
      local_f8._8_8_ = 0;
      local_f8._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x664bf,Alert_None_01,&local_f8);
    }
    DestructItems<DS_ItemInventoryMoveData,int>
              ((DS_ItemInventoryMoveData *)local_158.AllocatorInstance.Data,local_158.ArrayNum);
    if ((DS_ItemInventoryMoveData *)local_158.AllocatorInstance.Data !=
        (DS_ItemInventoryMoveData *)0x0) {
      FMemory::Free(local_158.AllocatorInstance.Data);
    }
  }
  pFVar19 = (param_1->AllocatorInstance).Data;
  if (pFVar19 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar19);
  }
  return;
}

// OnClickedQuantitySelectionPopupConfirm @ 14bd75920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_M_Warehouse::OnClickedQuantitySelectionPopupConfirm
          (UDS_M_Warehouse *this,EDS_InventoryType param_1,EDS_InventoryType param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  TMap<__int64,TObjectPtr<UDS_InventoryQuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>_>
  *pTVar7;
  bool bVar8;
  EDS_InventoryType EVar9;
  EDS_ValidateResult EVar10;
  int iVar11;
  UObject *pUVar12;
  FName FVar13;
  FString *pFVar14;
  ulonglong uVar15;
  longlong lVar16;
  wchar_t *_Str;
  FScriptContainerElement *pFVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined1 *puVar21;
  DS_ItemInventoryMoveQuantityData DVar22;
  uint *puVar23;
  undefined1 auStackY_208 [32];
  undefined1 local_1b7;
  EDS_InventoryType local_1b6 [6];
  TArray<DS_ItemInventoryMoveData,TSizedDefaultAllocator<32>_> local_1b0;
  TArray<DS_ItemInventoryMoveData,TSizedDefaultAllocator<32>_> local_1a0;
  DS_ItemInventoryMoveQuantityData local_190;
  undefined8 local_188;
  undefined8 local_180;
  FWeakObjectPtr local_178;
  TMap<__int64,TObjectPtr<UDS_InventoryQuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>_>
  *local_170;
  int iStack_168;
  uint uStack_164;
  undefined1 *local_160;
  undefined4 uStack_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int local_140;
  int local_13c;
  TMap<__int64,TObjectPtr<UDS_InventoryQuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>_>
  *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  initializer_list<TPairInitializer<EDS_InventoryType_const_&,DS_ItemInventoryMoveQuantityData_const_&>_>
  local_108;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_f8;
  undefined1 local_e0 [8];
  TPairInitializer<EDS_InventoryType_const_&,DS_ItemInventoryMoveQuantityData_const_&> local_d8;
  EDS_InventoryType *local_c8;
  undefined8 *local_c0;
  EDS_InventoryType *local_b8;
  undefined8 *local_b0;
  undefined1 local_a8 [80];
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1b6[3] = param_2;
  UDS_PlayerData::GetMainPlayerData();
  bVar8 = FWeakObjectPtr::IsValid(&local_178);
  if (!bVar8) {
    return;
  }
  iStack_168 = 0;
  local_170 = &this->QuantityDataMap;
  uStack_164 = 1;
  puVar1 = &(this->QuantityDataMap).field_0x10;
  local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.ArrayNum = 0;
  local_1b0.ArrayMax = 0;
  iVar18 = *(int *)&(this->QuantityDataMap).field_0x28;
  local_150 = 0;
  iStack_154 = iStack_168;
  if (iVar18 != 0) {
    puVar23 = *(uint **)&(this->QuantityDataMap).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar20 = *puVar23;
    local_150 = 0;
    iStack_168 = 0;
    while (uVar20 == 0) {
      lVar16 = (longlong)iStack_168;
      local_150 = local_150 + 0x20;
      iStack_168 = iStack_168 + 1;
      iStack_154 = iVar18;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_168) goto LAB_14bd75a2d;
      uVar20 = puVar23[lVar16 + 1];
    }
    uStack_164 = -uVar20 & uVar20;
    uVar15 = (ulonglong)uStack_164 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_140 = (int)lVar16;
    iStack_154 = local_150 + -1 + local_140;
    if (iVar18 < iStack_154) {
      iStack_154 = iVar18;
    }
  }
LAB_14bd75a2d:
  iStack_148 = *(int *)&(this->QuantityDataMap).field_0x8 -
               *(int *)&(this->QuantityDataMap).field_0x34;
  TStack_130._padding_ = CONCAT44(uStack_164,iStack_168);
  uStack_158 = 0xffffffff;
  TStack_130.CurrentBitIndex = iStack_154;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  TStack_130._28_4_ = iStack_154;
  TStack_130.BaseBitIndex = local_150;
  uStack_110 = CONCAT44(uStack_144,iStack_148);
  local_160 = puVar1;
  iStack_14c = iStack_154;
  local_138 = local_170;
  TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  do {
    uVar20 = *(uint *)&(this->QuantityDataMap).field_0x28;
    iVar18 = (int)uVar20 >> 5;
    uVar19 = uVar20 & 0xffffffe0;
    if (((int)uVar20 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar7 = local_138;
    uVar2 = *(uint *)&(this->QuantityDataMap).field_0x28;
    if (uVar20 != uVar2) {
      puVar3 = *(undefined1 **)&(this->QuantityDataMap).field_0x20;
      puVar21 = puVar1;
      if (puVar3 != (undefined1 *)0x0) {
        puVar21 = puVar3;
      }
      uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar18 * 4);
      while (uVar20 == 0) {
        lVar16 = (longlong)iVar18;
        uVar19 = uVar19 + 0x20;
        iVar18 = iVar18 + 1;
        uVar20 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_14bd75b3d;
        uVar20 = *(uint *)(puVar21 + lVar16 * 4 + 4);
      }
      uVar15 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_13c = (int)lVar16;
      uVar20 = local_13c + -1 + uVar19;
      if ((int)uVar2 < (int)uVar20) {
        uVar20 = uVar2;
      }
    }
LAB_14bd75b3d:
    if (*(int *)&local_138->field_0x8 - *(int *)&local_138->field_0x34 != (int)uStack_110) {
      local_1b7 = 0;
      `TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_InventoryQuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b7);
    }
    lVar16 = (longlong)TStack_130.CurrentBitIndex;
    if (((TStack_130.CurrentBitIndex == uVar20) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar7 == &this->QuantityDataMap)) {
      EVar10 = FDS_ItemInventoryMoveService::ValidateMoveDataAndConvertion
                         (param_1,local_1b6[3],&local_1b0);
      if (EVar10 == MoveEnable) {
        pUVar12 = FWeakObjectPtr::Get(&local_178);
        FVar6.Data = local_1b0.AllocatorInstance.Data;
        iVar11 = local_1b0.ArrayNum;
        iVar18 = *(int *)&pUVar12[9].field_0x10;
        local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a0.ArrayNum = local_1b0.ArrayNum;
        if (local_1b0.ArrayNum == 0) {
          local_1a0.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,local_1b0.ArrayNum,0,&local_1a0.AllocatorInstance,local_1b0.ArrayNum,
                     &local_1a0.ArrayMax);
          ConstructItems<DS_ItemInventoryMoveData,DS_ItemInventoryMoveData,int>
                    (local_1a0.AllocatorInstance.Data,(DS_ItemInventoryMoveData *)FVar6.Data,iVar11)
          ;
        }
        FVar13 = FDS_DataContainer::TransformIndexToName<enum_EDS_WarehouseData>
                           ((FDS_DataContainer *)&this->_padding_,(EDS_WarehouseData)local_e0);
        uVar4 = *(undefined8 *)FVar13;
        uVar20 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        pFVar14 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                  ::FindOrAddImpl<FName>
                            ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                              *)&this->_padding_,uVar20 + (int)((ulonglong)uVar4 >> 0x20),
                             (FName *)FVar13);
        if ((pFVar14->Data).ArrayNum == 0) {
          _Str = L"";
        }
        else {
          _Str = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        }
        uVar15 = _wcstoui64(_Str,(wchar_t **)0x0,0);
        FDS_ItemInventoryMoveService::RequestItemInventoryMove(uVar15,&local_1a0,iVar18);
      }
      else if (EVar10 == MoveDisable) {
        local_f8._0_8_ = 0;
        local_f8._8_8_ = 0;
        local_f8._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x664bf,Alert_None_01,&local_f8);
      }
      DestructItems<DS_ItemInventoryMoveData,int>
                ((DS_ItemInventoryMoveData *)local_1b0.AllocatorInstance.Data,local_1b0.ArrayNum);
      if ((DS_ItemInventoryMoveData *)local_1b0.AllocatorInstance.Data ==
          (DS_ItemInventoryMoveData *)0x0) {
        return;
      }
      FMemory::Free(local_1b0.AllocatorInstance.Data);
      return;
    }
    local_1b6[0] = PlayerNormal;
    local_d8.Key = local_1b6;
    local_a8._0_8_ = (EDS_InventoryType *)0x0;
    local_d8.Value = &local_190;
    local_190.TradableQuantity = 0;
    local_190.UntradableQuantity = 0;
    local_c8 = local_1b6 + 1;
    local_1b6[1] = 3;
    local_c0 = &local_188;
    local_b8 = local_1b6 + 2;
    local_b0 = &local_180;
    local_108._First = &local_d8;
    local_108._Last =
         (TPairInitializer<EDS_InventoryType_const_&,DS_ItemInventoryMoveQuantityData_const_&> *)
         local_a8;
    local_188 = 0;
    local_1b6[2] = 6;
    local_180 = 0;
    TMap<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>_>
    ::
    TMap<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>_>
              (local_a8 + 8,&local_108);
    lVar16 = lVar16 * 0x18;
    DS_ItemInventoryMoveData::Init
              ((DS_ItemInventoryMoveData *)local_a8,*(long64 *)(lVar16 + *(longlong *)pTVar7));
    iVar18 = (**(code **)(**(longlong **)(lVar16 + 8 + *(longlong *)pTVar7) + 0x2e8))();
    iVar11 = (**(code **)(**(longlong **)(lVar16 + 8 + *(longlong *)pTVar7) + 0x2f0))();
    EVar9 = (**(code **)(**(longlong **)(lVar16 + 8 + *(longlong *)pTVar7) + 0x2c0))();
    DVar22.UntradableQuantity = iVar11;
    DVar22.TradableQuantity = iVar18;
    DS_ItemInventoryMoveData::SetMoveData((DS_ItemInventoryMoveData *)local_a8,param_1,EVar9,DVar22)
    ;
    if (((local_1b0.AllocatorInstance.Data <= (DS_ItemInventoryMoveData *)local_a8) &&
        ((FScriptContainerElement *)local_a8 <
         local_1b0.AllocatorInstance.Data + (longlong)local_1b0.ArrayMax * 0x58)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar18 = local_1b0.ArrayNum;
    if (local_1b0.ArrayNum == local_1b0.ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x858,&local_1b0.AllocatorInstance,&local_1b0.ArrayMax);
    }
    local_1b0.ArrayNum = iVar18 + 1;
    pFVar17 = local_1b0.AllocatorInstance.Data + (longlong)iVar18 * 0x58;
    *(undefined8 *)&pFVar17->field_0x0 = local_a8._0_8_;
    *(undefined8 *)(pFVar17 + 8) = 0;
    *(undefined8 *)(pFVar17 + 0x10) = 0;
    *(undefined8 *)(pFVar17 + 0x28) = 0;
    *(undefined4 *)(pFVar17 + 0x30) = 0;
    *(undefined4 *)(pFVar17 + 0x34) = 0x80;
    *(undefined4 *)(pFVar17 + 0x38) = 0xffffffff;
    *(undefined4 *)(pFVar17 + 0x3c) = 0;
    *(undefined8 *)(pFVar17 + 0x48) = 0;
    *(undefined4 *)(pFVar17 + 0x50) = 0;
    TSet<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
    ::operator=(pFVar17 + 8,
                (TSet<TTuple<EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
                 *)(local_a8 + 8));
    local_58 = 0;
    if ((void *)local_a8._72_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._72_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_a8 + 8);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  } while( true );
}

// OnClickedRightTab @ 14bd75f00

void __thiscall UDS_M_Warehouse::OnClickedRightTab(UDS_M_Warehouse *this,int param_1)

{
  code *pcVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  FDS_DataContainer::SetData<int,enum_EDS_WarehouseData>
            ((FDS_DataContainer *)&this->_padding_,SelectedRightTabIndex,param_1);
  pcVar1 = *(code **)(this->_padding_ + 0x2e0);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (*pcVar1)(this,local_res8,1);
  return;
}

// OnDeInit @ 14bd76bb0

void __thiscall UDS_M_Warehouse::OnDeInit(UDS_M_Warehouse *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  DS_ItemDataUtil::GetItemDataSet();
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0x13].field_0x18,this);
  }
  return;
}

// OnErrorTab @ 14bd76d20

void __thiscall
UDS_M_Warehouse::OnErrorTab(UDS_M_Warehouse *this,EDS_TabErrorType param_1,int param_2)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if ((param_1 == DisabledTab) && (param_2 == 1)) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x664cd,Alert_None_01,&local_28);
  }
  return;
}

// OnInit @ 14bd799b0

void __thiscall UDS_M_Warehouse::OnInit(UDS_M_Warehouse *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10 [3];
  
  DS_ItemDataUtil::GetItemDataSet();
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_InventoryUpdate),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_M_Warehouse>
              (&pUVar3[0x13].field_0x18,(UDS_M_Warehouse *)(local_res10 + 1),(pmf_617c1e7e)this);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3602175112511487900>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                       ,100,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnUpdateInventory @ 14bd82b80

void __thiscall
UDS_M_Warehouse::OnUpdateInventory(UDS_M_Warehouse *this,EDS_InventoryUpdate param_1)

{
  code *pcVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  pcVar1 = *(code **)(this->_padding_ + 0x2e0);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (*pcVar1)(this,local_res8,1);
  return;
}

// OnUpdateModel @ 14bd82f40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_Warehouse::OnUpdateModel
          (UDS_M_Warehouse *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  EDS_ItemSlotStateType EVar6;
  EDS_WarehouseModelEvent EVar7;
  int iVar8;
  uint uVar9;
  UObject *pUVar10;
  FDS_ItemSlotInfo *pFVar11;
  UEnum *this_00;
  FName *pFVar12;
  long64 lVar13;
  UObject *pUVar14;
  UClass *pUVar15;
  UDS_M_ItemImplBase *this_01;
  FWeakObjectPtr *pFVar16;
  FName FVar17;
  UDS_CharLocalSave *this_02;
  FString *pFVar18;
  wchar_t *pwVar19;
  EDS_InventoryType EVar20;
  wchar_t *pwVar21;
  EDS_InventoryType EVar22;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_b8;
  FWeakObjectPtr local_b0;
  FWeakObjectPtr local_a8;
  FWeakObjectPtr local_a0;
  UObject *local_98;
  UObject *local_90;
  UDS_W_DragDropOperation *local_88;
  UObject *local_80;
  FString local_78;
  undefined1 local_68 [8];
  FName local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [16];
  
  local_res10 = param_1.WeakPtr;
  pUVar10 = FWeakObjectPtr::Get(&local_res10);
  bVar5 = TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr> *)(pUVar10 + 1),(void *)0x0);
  if (bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3602175112511487881>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                       ,0x77,"false");
    if (!bVar5) {
      return;
    }
    goto code_r0x00014bd834a3;
  }
  EVar7 = ConvertModelEventToWarehouseEvent
                    (this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res10);
  pwVar21 = L"";
  if (EVar7 == ClickedPlayerToWarehouse) {
    PlayerToWarehouse(this);
    goto LAB_14bd83542;
  }
  if (EVar7 == ClickedMountToWarehouse) {
    MountToWarehouse(this);
    goto LAB_14bd83542;
  }
  pUVar10 = (UObject *)0x0;
  if (EVar7 == DropSlotToBag) {
    pUVar14 = FWeakObjectPtr::Get(&local_res10);
    if (pUVar14 == (UObject *)0x0) {
LAB_14bd8301f:
      pUVar14 = pUVar10;
    }
    else {
      pUVar15 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
      iVar8 = (int)pUVar15->_padding_;
      if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar8) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
          &pUVar15->_padding_)) goto LAB_14bd8301f;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar14);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_98 = pUVar14;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar14);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_98);
    bVar5 = FWeakObjectPtr::IsValid(&local_res18);
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3602175112511487862>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                         ,0x8a,"false");
      if (!bVar5) {
        return;
      }
      goto code_r0x00014bd834a3;
    }
    pUVar14 = FWeakObjectPtr::Get(&local_res18);
    pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar14 + 1));
    if (pUVar14 == (UObject *)0x0) {
LAB_14bd830e5:
      pUVar14 = pUVar10;
    }
    else {
      pUVar15 = Z_Construct_UClass_UDS_M_InventoryBag_NoRegister();
      iVar8 = (int)pUVar15->_padding_;
      if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar8) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
          &pUVar15->_padding_)) goto LAB_14bd830e5;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar14);
    }
    local_b0.ObjectIndex = 0;
    local_b0.ObjectSerialNumber = 0;
    local_90 = pUVar14;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar14);
    }
    FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_90);
    bVar5 = FWeakObjectPtr::IsValid(&local_b0);
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3602175112511487859>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                         ,0x8d,"false");
      if (!bVar5) {
        return;
      }
      goto code_r0x00014bd834a3;
    }
    pUVar14 = FWeakObjectPtr::Get(&local_res18);
    if ((*(longlong *)(pUVar14 + 0xc) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_88 = Cast<UDS_W_DragDropOperation,UDragDropOperation>
                         ((TObjectPtr<UDragDropOperation> *)(*(longlong *)(pUVar14 + 0xc) + 8));
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_88 != (UDS_W_DragDropOperation *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_88);
    }
    local_b8.ObjectIndex = 0;
    local_b8.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_88 != (UDS_W_DragDropOperation *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_88);
    }
    FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_88);
    bVar5 = FWeakObjectPtr::IsValid(&local_b8);
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3602175112511487856>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                         ,0x90,"false");
      if (!bVar5) {
        return;
      }
      goto code_r0x00014bd834a3;
    }
    EVar22 = None;
    pUVar14 = FWeakObjectPtr::Get(&local_b8);
    pFVar11 = FDS_SlotInfo::GetSlotInfo<FDS_ItemSlotInfo>((FDS_SlotInfo *)&pUVar14[4].field_0x8);
    if (pFVar11 != (FDS_ItemSlotInfo *)0x0) {
      EVar6 = pFVar11->SlotType;
      if (EVar6 == ItemWarehouse) {
        EVar22 = PlayerWareHouse;
      }
      else if (EVar6 == WarehouseCharBagItem) {
        EVar22 = PlayerNormal;
      }
      else if (EVar6 == WarehouseMountBagItem) {
        EVar22 = Mount;
      }
    }
    pUVar14 = FWeakObjectPtr::Get(&local_b0);
    FVar17 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                       ((FDS_DataContainer *)&pUVar14[1].field_0x18,(EDS_InventoryBagData)local_68);
    uVar3 = *(undefined8 *)FVar17;
    uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
    pFVar18 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar14[1].field_0x18,(int)((ulonglong)uVar3 >> 0x20) + uVar9,
                         (FName *)FVar17);
    if ((pFVar18->Data).ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_78,pwVar19);
    this_00 = StaticEnum<enum_EDS_BagGroupType>();
    if (this_00 == (UEnum *)0x0) {
      uVar9 = (uint)(byte)local_res18.ObjectIndex;
    }
    else {
      iVar8 = local_78.Data.ArrayNum + -1;
      if (local_78.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      pFVar12 = ::FName::FName(&local_60,iVar8,(wchar_t *)local_78.Data.AllocatorInstance.Data,
                               FNAME_Add);
      lVar13 = UEnum::GetValueByName(this_00,*pFVar12,None);
      uVar9 = (uint)lVar13;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    uVar9 = uVar9 & 0xff;
    if (uVar9 == 0x10) {
      EVar20 = PlayerWareHouse;
    }
    else if (uVar9 == 0x11) {
      EVar20 = PlayerNormal;
    }
    else {
      if (uVar9 != 0x12) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3602175112511487806>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                           ,0xc2,"false");
        if (!bVar5) {
          return;
        }
        goto code_r0x00014bd834a3;
      }
      EVar20 = Mount;
    }
    FWeakObjectPtr::Get(&local_res18);
    DS_ItemDataUtil::GetItemDataByTID((int)&local_a8);
    bVar5 = FWeakObjectPtr::IsValid(&local_a8);
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3602175112511487803>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                         ,0xc5,"false");
      if (!bVar5) {
        return;
      }
      goto code_r0x00014bd834a3;
    }
    ManualMove(this,EVar20,EVar22,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_a8);
  }
  else if (EVar7 != ClickedSlot) goto LAB_14bd83542;
  EVar20 = None;
  EVar22 = None;
  pUVar14 = FWeakObjectPtr::Get(&local_res10);
  pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar14 + 1));
  if (pUVar14 == (UObject *)0x0) {
LAB_14bd8341e:
    pUVar14 = pUVar10;
  }
  else {
    pUVar15 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar8 = (int)pUVar15->_padding_;
    if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar8) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar15->_padding_)) goto LAB_14bd8341e;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar14);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_80 = pUVar14;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar14);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_80);
  bVar5 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar5) {
    this_01 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_res20);
    EVar6 = UDS_M_ItemImplBase::GetItemSlotType(this_01);
    if (EVar6 == ItemWarehouse) {
      EVar22 = PlayerWareHouse;
      iVar8 = FDS_DataContainer::GetData<int,enum_EDS_WarehouseData>
                        ((FDS_DataContainer *)&this->_padding_,SelectedRightTabIndex);
      if (iVar8 == 0) {
        EVar20 = PlayerNormal;
      }
      else if (iVar8 == 1) {
        EVar20 = Mount;
      }
    }
    else if (EVar6 == WarehouseCharBagItem) {
      EVar20 = PlayerWareHouse;
      EVar22 = PlayerNormal;
    }
    else if (EVar6 == WarehouseMountBagItem) {
      EVar20 = PlayerWareHouse;
      EVar22 = Mount;
    }
    pUVar10 = FWeakObjectPtr::Get(&local_res20);
    pFVar16 = (FWeakObjectPtr *)(**(code **)(*(longlong *)pUVar10 + 0x3a0))(pUVar10,local_58);
    ManualMove(this,EVar20,EVar22,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*pFVar16);
LAB_14bd83542:
    pUVar10 = FWeakObjectPtr::Get(&local_res10);
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar10 + 1));
    FVar17 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonCheckTextData>
                       ((FDS_DataContainer *)&pUVar10[1].field_0x18,
                        (EDS_CommonCheckTextData)local_50);
    lVar1 = *(longlong *)FVar17;
    uVar9 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
    if (*(int *)&pUVar10[1].field_0x20 != *(int *)&pUVar10[2].field_0x24) {
      pUVar14 = *(UObject **)&pUVar10[3].field_0x8;
      if (*(UObject **)&pUVar10[3].field_0x8 == (UObject *)0x0) {
        pUVar14 = pUVar10 + 3;
      }
      iVar8 = *(int *)(&pUVar14->field_0x0 +
                      (ulonglong)
                      (*(int *)&pUVar10[3].field_0x10 - 1U & uVar9 + (int)((ulonglong)lVar1 >> 0x20)
                      ) * 4);
      if (iVar8 != -1) {
        lVar2 = *(longlong *)&pUVar10[1].field_0x18;
        do {
          if (*(longlong *)((longlong)iVar8 * 0x20 + lVar2) == lVar1) {
            UDS_CharLocalSave::GetInst();
            bVar5 = FWeakObjectPtr::IsValid(&local_a0);
            if (bVar5) {
              this_02 = (UDS_CharLocalSave *)FWeakObjectPtr::Get(&local_a0);
              pUVar10 = FWeakObjectPtr::Get(&local_res10);
              pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar10 + 1));
              FVar17 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonCheckTextData>
                                 ((FDS_DataContainer *)&pUVar10[1].field_0x18,
                                  (EDS_CommonCheckTextData)local_48);
              uVar3 = *(undefined8 *)FVar17;
              uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
              pFVar18 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        ::FindOrAddImpl<FName>
                                  ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                                    *)&pUVar10[1].field_0x18,(int)((ulonglong)uVar3 >> 0x20) + uVar9
                                   ,(FName *)FVar17);
              if ((pFVar18->Data).ArrayNum != 0) {
                pwVar21 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
              }
              bVar5 = FToBoolHelper::FromCStringWide(pwVar21);
              UDS_CharLocalSave::SetAllMoveToWarehouse(this_02,bVar5);
            }
            break;
          }
          iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar2);
        } while (iVar8 != -1);
      }
    }
    UDS_ModelBase::OnUpdateModel
              ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res10)
    ;
    return;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3602175112511487792>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                     ,0xd0,"false");
  if (!bVar5) {
    return;
  }
code_r0x00014bd834a3:
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// PlayerToWarehouse @ 14bd848c0

void __thiscall UDS_M_Warehouse::PlayerToWarehouse(UDS_M_Warehouse *this)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  UDS_ItemDataSet *this_00;
  UObject *pUVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  EDS_InventoryType local_res10 [8];
  EDS_InventoryType local_res18 [8];
  uint local_res20;
  uint local_a8;
  TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_a0;
  uint local_90;
  FWeakObjectPtr local_88;
  FWeakObjectPtr local_80;
  FWeakObjectPtr local_78;
  TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_70;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_60;
  
  DS_ItemDataUtil::GetItemDataSet();
  bVar3 = FWeakObjectPtr::IsValid(&local_88);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3602175112511487662>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                       ,0x152,"false");
    if (!bVar3) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_88);
  UDS_ItemDataSet::GetItemDataList(this_00,&local_a0,PlayerNormal);
  FVar2.Data = local_a0.AllocatorInstance.Data;
  lVar9 = (longlong)local_a0.ArrayNum;
  uVar12 = 0;
  if (local_a0.ArrayNum != 0) {
    local_a8 = 0;
    local_80 = *(FWeakObjectPtr *)local_a0.AllocatorInstance.Data;
    bVar3 = FWeakObjectPtr::IsValid(&local_80);
    if (bVar3) {
      pUVar5 = FWeakObjectPtr::Get(&local_80);
      local_res10[0] = PlayerWareHouse;
      piVar6 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
               ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(&pUVar5[10].field_0x18,3,local_res10)
      ;
      piVar7 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
               ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                         (&pUVar5[8].field_0x18,(uint)local_res10[0],local_res10);
      local_res20 = (uint)(*piVar7 + *piVar6 != 0);
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3602175112511487655>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                         ,0x159,"false");
      local_res20 = uVar12;
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    lVar8 = 0;
    uVar11 = uVar12;
    do {
      lVar8 = lVar8 + 1;
      uVar13 = uVar11 + 1;
      local_90 = uVar11;
      if (lVar8 < lVar9) {
        uVar11 = local_res20 & 0xff;
        do {
          local_78 = *(FWeakObjectPtr *)(FVar2.Data + lVar8 * 8);
          bVar3 = FWeakObjectPtr::IsValid(&local_78);
          if (bVar3) {
            pUVar5 = FWeakObjectPtr::Get(&local_78);
            local_res18[0] = PlayerWareHouse;
            piVar6 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                     ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                               (&pUVar5[10].field_0x18,3,local_res18);
            piVar7 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                     ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                               (&pUVar5[8].field_0x18,(uint)local_res18[0],local_res18);
            uVar4 = (uint)(*piVar7 + *piVar6 != 0);
          }
          else {
            bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_3602175112511487655>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                               ,0x159,"false");
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar4 = 0;
          }
          uVar12 = local_a8;
          if (uVar11 != uVar4) break;
          uVar13 = uVar13 + 1;
          lVar8 = lVar8 + 1;
        } while (lVar8 < lVar9);
      }
      uVar11 = uVar13;
      iVar10 = uVar11 - local_90;
      if ((char)local_res20 != '\0') {
        if (uVar12 != local_90) {
          memmove(FVar2.Data + (longlong)(int)uVar12 * 8,FVar2.Data + (longlong)(int)local_90 * 8,
                  (longlong)iVar10 << 3);
        }
        uVar12 = uVar12 + iVar10;
        local_a8 = uVar12;
      }
      local_res20 = local_res20 ^ 1;
    } while (lVar8 < lVar9);
    local_a0.ArrayNum = uVar12;
    if (uVar12 != 0) {
      DS_Sorting<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>::Sort
                (&local_a0,MoveToWarehouse,Ascend);
      local_70.AllocatorInstance.Data = local_a0.AllocatorInstance.Data;
      local_70.ArrayNum = local_a0.ArrayNum;
      local_70.ArrayMax = local_a0.ArrayMax;
      local_a0.ArrayNum = 0;
      local_a0.ArrayMax = 0;
      local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      MoveToWarehouseDataValidateAndConvert(this,&local_70,PlayerNormal);
      goto LAB_14bd84bec;
    }
  }
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_60._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x664c1,Alert_None_01,&local_60);
LAB_14bd84bec:
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  return;
}

// PreInitBindViewModel @ 14bd85360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_M_Warehouse::PreInitBindViewModel(UDS_M_Warehouse *this)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  UDS_ModelBase *pUVar4;
  FName *pFVar5;
  UDS_M_InventoryBag *pUVar6;
  FDS_DataContainer *pFVar7;
  UClass *pUVar8;
  UDS_M_Common_Check_Text *this_00;
  UDS_CharLocalSave *this_01;
  UObject *pUVar9;
  longlong *plVar10;
  undefined1 auStackY_628 [32];
  FWeakObjectPtr local_5f8;
  UDS_M_InventoryBag *local_5f0;
  UDS_M_InventoryBag *local_5e8;
  UDS_M_InventoryBag *local_5e0;
  UDS_ModelBase *local_5d8;
  UDS_M_CommonIconTextButton *local_5d0;
  UDS_M_CommonIconTextButton *local_5c8;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_5c0;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_5a8;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_590;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_578;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_560;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_548;
  FDS_Text local_530;
  FDS_Text local_4e0;
  FName local_490;
  FName local_488;
  FName local_480;
  FName local_478;
  FName local_470;
  FDS_DataContainer local_468;
  FDS_DataContainer local_3c8;
  FDS_DataContainer local_328;
  undefined1 local_288 [128];
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
  undefined1 local_168 [32];
  void *local_148;
  undefined4 local_140;
  uint local_13c;
  undefined4 local_138;
  undefined4 local_134;
  void *local_128;
  undefined4 local_120;
  undefined1 local_118 [32];
  void *local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  void *local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [64];
  void *local_88;
  undefined4 local_80;
  undefined1 local_78 [64];
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_628;
  UDS_ModelBase::PreInitBindViewModel((UDS_ModelBase *)this);
  local_5f0 = UDS_ModelBase::AddChildModel1<UDS_M_InventoryBag>((UDS_ModelBase *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_5f0 != (UDS_M_InventoryBag *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_5f0);
  }
  FWeakObjectPtr::operator=(&(this->WarehouseBagModel).WeakPtr,(FObjectPtr)&local_5f0);
  bVar3 = FWeakObjectPtr::IsValid(&(this->WarehouseBagModel).WeakPtr);
  if (bVar3) {
    local_13c = 0x80;
    local_168._0_8_ = (FScriptContainerElement *)0x0;
    local_168._8_8_ = 0;
    local_148 = (void *)0x0;
    local_140 = 0;
    local_134 = 0;
    local_128 = (void *)0x0;
    local_120 = 0;
    local_118._0_8_ = (FScriptContainerElement *)0x0;
    local_118._8_8_ = 0;
    local_f8 = (void *)0x0;
    local_f0 = 0;
    local_e4 = 0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    local_138 = 0xffffffff;
    local_ec = 0x80;
    local_e8 = 0xffffffff;
    FDS_DataContainer::SetData<enum_EDS_BagGroupType,enum_EDS_InventoryBagData>
              ((FDS_DataContainer *)local_168,BagGroupType,Warehouse);
    pUVar4 = (UDS_ModelBase *)FWeakObjectPtr::Get(&(this->WarehouseBagModel).WeakPtr);
    pFVar5 = ::FName::FName(&local_490,L"DS_VM_W_InventoryBag_Warehouse");
    UDS_ModelBase::SetViewModelName(pUVar4,*pFVar5);
    pUVar6 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&(this->WarehouseBagModel).WeakPtr);
    local_5c0._16_8_ = 0;
    local_5c0._0_8_ = 0;
    local_5c0._8_8_ = 0;
    local_5a8._16_8_ = 0;
    local_5a8._0_8_ = 0;
    local_5a8._8_8_ = 0;
    pFVar7 = FDS_DataContainer::FDS_DataContainer(&local_468,(FDS_DataContainer *)local_168);
    UDS_M_InventoryBag::InitModel(pUVar6,pFVar7,&local_5a8,&local_5c0);
    local_5e8 = UDS_ModelBase::AddChildModel1<UDS_M_InventoryBag>((UDS_ModelBase *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_5e8 != (UDS_M_InventoryBag *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_5e8);
    }
    FWeakObjectPtr::operator=(&(this->CharacterBagModel).WeakPtr,(FObjectPtr)&local_5e8);
    bVar3 = FWeakObjectPtr::IsValid(&(this->CharacterBagModel).WeakPtr);
    if (bVar3) {
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
                ((FDS_DataContainer *)local_208,BagGroupType,BagWarehouse);
      pUVar4 = (UDS_ModelBase *)FWeakObjectPtr::Get(&(this->CharacterBagModel).WeakPtr);
      pFVar5 = ::FName::FName(&local_488,L"WInventoryBagChar");
      UDS_ModelBase::SetWidgetName(pUVar4,*pFVar5);
      pUVar6 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&(this->CharacterBagModel).WeakPtr);
      local_590._16_8_ = 0;
      local_590._0_8_ = 0;
      local_590._8_8_ = 0;
      local_578._16_8_ = 0;
      local_578._0_8_ = 0;
      local_578._8_8_ = 0;
      pFVar7 = FDS_DataContainer::FDS_DataContainer(&local_3c8,(FDS_DataContainer *)local_208);
      UDS_M_InventoryBag::InitModel(pUVar6,pFVar7,&local_578,&local_590);
      local_5e0 = UDS_ModelBase::AddChildModel1<UDS_M_InventoryBag>((UDS_ModelBase *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_5e0 != (UDS_M_InventoryBag *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_5e0);
      }
      FWeakObjectPtr::operator=(&(this->MountBagModel).WeakPtr,(FObjectPtr)&local_5e0);
      bVar3 = FWeakObjectPtr::IsValid(&(this->MountBagModel).WeakPtr);
      if (bVar3) {
        local_c8._0_8_ = 0;
        local_c8._8_8_ = 0;
        local_c8._32_8_ = 0;
        local_c8._40_4_ = 0;
        local_c8._44_4_ = 0x80;
        local_c8._48_4_ = 0xffffffff;
        local_c8._52_4_ = 0;
        local_88 = (void *)0x0;
        local_80 = 0;
        local_78._0_8_ = 0;
        local_78._8_8_ = 0;
        local_78._32_8_ = 0;
        local_78._40_4_ = 0;
        local_78._44_4_ = 0x80;
        local_78._48_4_ = 0xffffffff;
        local_78._52_4_ = 0;
        local_38 = (void *)0x0;
        local_30 = 0;
        FDS_DataContainer::SetData<enum_EDS_BagGroupType,enum_EDS_InventoryBagData>
                  ((FDS_DataContainer *)local_c8,BagGroupType,MountWarehouse);
        pUVar4 = (UDS_ModelBase *)FWeakObjectPtr::Get(&(this->MountBagModel).WeakPtr);
        pFVar5 = ::FName::FName(&local_480,L"WInventoryBagMount");
        UDS_ModelBase::SetWidgetName(pUVar4,*pFVar5);
        pUVar6 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&(this->MountBagModel).WeakPtr);
        local_560._16_8_ = 0;
        local_560._0_8_ = 0;
        local_560._8_8_ = 0;
        local_548._16_8_ = 0;
        local_548._0_8_ = 0;
        local_548._8_8_ = 0;
        pFVar7 = FDS_DataContainer::FDS_DataContainer(&local_328,(FDS_DataContainer *)local_c8);
        UDS_M_InventoryBag::InitModel(pUVar6,pFVar7,&local_548,&local_560);
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar8 = Z_Construct_UClass_UDS_M_Common_Check_Text_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_288,pUVar8);
        local_288._8_8_ = this;
        pUVar4 = (UDS_ModelBase *)
                 StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_288);
        if (local_288._64_8_ != 0) {
          plVar10 = (longlong *)(local_288 + 0x50);
          if ((longlong *)local_288._104_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_288._104_8_;
          }
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
        UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar4);
        local_5d8 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_ModelBase *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        FWeakObjectPtr::operator=(&(this->AutoModeModel).WeakPtr,(FObjectPtr)&local_5d8);
        bVar3 = FWeakObjectPtr::IsValid(&(this->AutoModeModel).WeakPtr);
        if (bVar3) {
          UDS_CharLocalSave::GetInst();
          this_00 = (UDS_M_Common_Check_Text *)FWeakObjectPtr::Get(&(this->AutoModeModel).WeakPtr);
          bVar3 = FWeakObjectPtr::IsValid(&local_5f8);
          if (bVar3) {
            this_01 = (UDS_CharLocalSave *)FWeakObjectPtr::Get(&local_5f8);
            bVar3 = UDS_CharLocalSave::IsAllMoveToWarehouse(this_01);
          }
          else {
            bVar3 = false;
          }
          UDS_M_Common_Check_Text::InitModel(this_00,0x64191,0,bVar3);
          local_5d0 = UDS_ModelBase::AddChildModel1<UDS_M_CommonIconTextButton>
                                ((UDS_ModelBase *)this);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_5d0 != (UDS_M_CommonIconTextButton *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_5d0);
          }
          FWeakObjectPtr::operator=
                    (&(this->PlayerToWarehouseButtonModel).WeakPtr,(FObjectPtr)&local_5d0);
          bVar3 = FWeakObjectPtr::IsValid(&(this->PlayerToWarehouseButtonModel).WeakPtr);
          if (bVar3) {
            pUVar4 = (UDS_ModelBase *)
                     FWeakObjectPtr::Get(&(this->PlayerToWarehouseButtonModel).WeakPtr);
            pFVar5 = ::FName::FName(&local_478,L"DS_VM_CommonIconTextButton_PlayerToWarehouse");
            UDS_ModelBase::SetViewModelName(pUVar4,*pFVar5);
            pUVar9 = FWeakObjectPtr::Get(&(this->PlayerToWarehouseButtonModel).WeakPtr);
            local_530.StringTableType = StringUi;
            local_530.StringTableID = 0x64192;
            local_530.StringEnumTableNameID.ComparisonIndex.Value = 0;
            local_530.StringEnumTableNameID.Number = 0;
            local_530.TimeExpressionType = None;
            local_530.DateTime.Ticks = 0;
            local_530.TimeSpan.Ticks = 0;
            local_530.IsExpression = false;
            local_530.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_530.UniqueString.Data.ArrayNum = 0;
            local_530.UniqueString.Data.ArrayMax = 0;
            local_530.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_530.FormatArgs.ArrayNum = 0;
            local_530.FormatArgs.ArrayMax = 0;
            FDS_DataContainer::SetData<FDS_Text,enum_EDS_CommonIconTextButtonData>
                      ((FDS_DataContainer *)&pUVar9[1].field_0x18,ButtonText,&local_530);
            pUVar9 = FWeakObjectPtr::Get(&(this->PlayerToWarehouseButtonModel).WeakPtr);
            FDS_DataContainer::SetData<int,enum_EDS_WarehouseData>
                      ((FDS_DataContainer *)&pUVar9[1].field_0x18,MoveToWarehouseButtonIndex,1);
            local_5c8 = UDS_ModelBase::AddChildModel1<UDS_M_CommonIconTextButton>
                                  ((UDS_ModelBase *)this);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_5c8 != (UDS_M_CommonIconTextButton *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_5c8);
            }
            FWeakObjectPtr::operator=
                      (&(this->MountToWarehouseButtonModel).WeakPtr,(FObjectPtr)&local_5c8);
            bVar3 = FWeakObjectPtr::IsValid(&(this->MountToWarehouseButtonModel).WeakPtr);
            if (bVar3) {
              pUVar4 = (UDS_ModelBase *)
                       FWeakObjectPtr::Get(&(this->MountToWarehouseButtonModel).WeakPtr);
              pFVar5 = ::FName::FName(&local_470,L"DS_VM_CommonIconTextButton_MountToWarehouse");
              UDS_ModelBase::SetViewModelName(pUVar4,*pFVar5);
              pUVar9 = FWeakObjectPtr::Get(&(this->MountToWarehouseButtonModel).WeakPtr);
              local_4e0.StringTableType = StringUi;
              local_4e0.StringTableID = 0x64193;
              local_4e0.StringEnumTableNameID.ComparisonIndex.Value = 0;
              local_4e0.StringEnumTableNameID.Number = 0;
              local_4e0.TimeExpressionType = None;
              local_4e0.DateTime.Ticks = 0;
              local_4e0.TimeSpan.Ticks = 0;
              local_4e0.IsExpression = false;
              local_4e0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_4e0.UniqueString.Data.ArrayNum = 0;
              local_4e0.UniqueString.Data.ArrayMax = 0;
              local_4e0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_4e0.FormatArgs.ArrayNum = 0;
              local_4e0.FormatArgs.ArrayMax = 0;
              FDS_DataContainer::SetData<FDS_Text,enum_EDS_CommonIconTextButtonData>
                        ((FDS_DataContainer *)&pUVar9[1].field_0x18,ButtonText,&local_4e0);
              pUVar9 = FWeakObjectPtr::Get(&(this->MountToWarehouseButtonModel).WeakPtr);
              FDS_DataContainer::SetData<int,enum_EDS_WarehouseData>
                        ((FDS_DataContainer *)&pUVar9[1].field_0x18,MoveToWarehouseButtonIndex,2);
            }
            else {
              bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_3602175112511487912>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                                 ,0x58,"false");
              if (bVar3) goto code_r0x00014bd85afd;
            }
          }
          else {
            bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_3602175112511487921>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                               ,0x4f,"false");
            if (bVar3) goto code_r0x00014bd85afd;
          }
        }
        else {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3602175112511487929>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                             ,0x47,"false");
          if (bVar3) {
code_r0x00014bd85afd:
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        local_30 = 0;
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_78);
        local_80 = 0;
        if (local_88 != (void *)0x0) {
          FMemory::Free(local_88);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_c8);
      }
      else {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3602175112511487940>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                           ,0x3c,"false");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_170 = 0;
      if (local_178 != (void *)0x0) {
        FMemory::Free(local_178);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_1b8,0,local_1b8._8_4_);
      iVar2 = SUB84(local_1b8._8_8_,4);
      local_1b8._8_8_ = local_1b8._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
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
      iVar2 = SUB84(local_208._8_8_,4);
      local_208._8_8_ = local_208._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
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
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3602175112511487951>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                         ,0x31,"false");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_d0 = 0;
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_118,0,local_118._8_4_);
    iVar2 = SUB84(local_118._8_8_,4);
    local_118._8_8_ = local_118._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_118,0,(int *)(local_118 + 0xc));
    }
    local_e8 = 0xffffffff;
    local_e4 = 0;
    local_f0 = 0;
    if (0x80 < local_ec) {
      local_ec = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10),0);
    }
    if (local_f8 != (void *)0x0) {
      FMemory::Free(local_f8);
    }
    if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_118._0_8_);
    }
    local_120 = 0;
    if (local_128 != (void *)0x0) {
      FMemory::Free(local_128);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_168,0,local_168._8_4_);
    iVar2 = SUB84(local_168._8_8_,4);
    local_168._8_8_ = local_168._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_168,0,(int *)(local_168 + 0xc));
    }
    local_134 = 0;
    local_140 = 0;
    local_138 = 0xffffffff;
    if (0x80 < local_13c) {
      local_13c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10),0);
    }
    if (local_148 != (void *)0x0) {
      FMemory::Free(local_148);
    }
    if ((FScriptContainerElement *)local_168._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_168._0_8_);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3602175112511487961>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Warehouse.cpp"
                       ,0x27,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

