// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b52ce00

UClass * __cdecl UDS_M_Weight::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_Weight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_Weight",
               &Z_Registration_Info_UClass_UDS_M_Weight.InnerSingleton,
               StaticRegisterNativesUDS_M_Weight,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_M_Weight>,InternalVTableHelperCtorCaller<UDS_M_Weight>,
               local_res8,UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_Weight.InnerSingleton;
}

// UDS_M_Weight @ 14b52efc0

UDS_M_Weight * __thiscall UDS_M_Weight::UDS_M_Weight(UDS_M_Weight *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_Weight__6B_;
  return this;
}

// UDS_M_Weight @ 14b52eff0

UDS_M_Weight * __thiscall UDS_M_Weight::UDS_M_Weight(UDS_M_Weight *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_Weight__6B_;
  return this;
}

// ~UDS_M_Weight @ 14b5306d0

void __thiscall UDS_M_Weight::~UDS_M_Weight(UDS_M_Weight *this)

{
  *(undefined ***)this = &___7UDS_M_Weight__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b532900

UClass * __cdecl UDS_M_Weight::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_Weight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_Weight",
               &Z_Registration_Info_UClass_UDS_M_Weight.InnerSingleton,
               StaticRegisterNativesUDS_M_Weight,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_M_Weight>,InternalVTableHelperCtorCaller<UDS_M_Weight>,
               local_res8,UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_Weight.InnerSingleton;
}

// StaticRegisterNativesUDS_M_Weight @ 14b5330e0

void __cdecl UDS_M_Weight::StaticRegisterNativesUDS_M_Weight(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_M_Weight_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnUpdateInventory @ 14b5346d0

void __cdecl UDS_M_Weight::execOnUpdateInventory(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnUpdateInventory((UDS_M_Weight *)param_1,local_res10);
  return;
}

// GetCurrWeight @ 14bd5b7c0

int __thiscall UDS_M_Weight::GetCurrWeight(UDS_M_Weight *this)

{
  undefined1 *this_00;
  undefined8 uVar1;
  code *pcVar2;
  EDS_InventoryType EVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FName FVar8;
  FString *pFVar9;
  longlong lVar10;
  longlong lVar11;
  UObject *pUVar12;
  int *piVar13;
  int *piVar14;
  FDS_ItemBaseTableRow *this_01;
  wchar_t *pwVar15;
  wchar_t *_Str;
  EDS_InventoryType local_res8 [8];
  FWeakObjectPtr local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_48 [16];
  
  this_00 = &this->field_0x40;
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_WeightData>
                    ((FDS_DataContainer *)this_00,(EDS_WeightData)local_res18);
  uVar1 = *(undefined8 *)FVar8;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this_00,uVar5 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar8);
  _Str = L"";
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  iVar6 = _wtoi(pwVar15);
  iVar7 = 0;
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_WeightData>
                    ((FDS_DataContainer *)this_00,(EDS_WeightData)local_res20);
  uVar1 = *(undefined8 *)FVar8;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this_00,uVar5 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar8);
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  lVar10 = _wtoi64(pwVar15);
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_WeightData>
                    ((FDS_DataContainer *)this_00,(EDS_WeightData)local_48);
  uVar1 = *(undefined8 *)FVar8;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this_00,uVar5 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar8);
  if ((pFVar9->Data).ArrayNum != 0) {
    _Str = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  lVar11 = _wtoi64(_Str);
  EVar3 = FDS_DataContainer::GetData<enum_EDS_InventoryType,enum_EDS_WeightData>
                    ((FDS_DataContainer *)this_00,InventoryType);
  if (lVar10 < 1) {
    if ((int)lVar11 < 1) {
      iVar7 = DS_ItemDataUtil::GetInventoryWeight(EVar3);
    }
    else {
      this_01 = FDS_ItemBaseTableRow::GetRef((longlong)(int)lVar11,true);
      bVar4 = FDS_ItemBaseTableRow::IsValid(this_01);
      if (bVar4) {
        iVar7 = this_01->Weight;
      }
    }
  }
  else {
    DS_ItemDataUtil::GetItemDataByUID((long64)&local_res10);
    bVar4 = FWeakObjectPtr::IsValid(&local_res10);
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3840037732873142204>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Weight.cpp"
                         ,0x44,"false");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        iVar7 = (*pcVar2)();
        return iVar7;
      }
      return 0;
    }
    pUVar12 = FWeakObjectPtr::Get(&local_res10);
    local_res8[0] = EVar3;
    piVar13 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
              ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                        (&pUVar12[10].field_0x18,(uint)EVar3,local_res8);
    piVar14 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
              ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                        (&pUVar12[8].field_0x18,(uint)local_res8[0],local_res8);
    iVar7 = (*piVar13 + *piVar14) * *(int *)&pUVar12[0x15].field_0x14;
  }
  return iVar7 + iVar6;
}

// GetInventoryIconID @ 14bd5cf20

int __thiscall UDS_M_Weight::GetInventoryIconID(UDS_M_Weight *this)

{
  FScriptContainerElement *pFVar1;
  EDS_InventoryType EVar2;
  int iVar3;
  undefined8 uVar4;
  ForAnyElementType FVar5;
  undefined1 local_res8 [8];
  TArray<FDS_InventoryBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  EVar2 = FDS_DataContainer::GetData<enum_EDS_InventoryType,enum_EDS_WeightData>
                    ((FDS_DataContainer *)&this->field_0x40,InventoryType);
  FDS_InventoryBaseTableRow::GetAll(&local_18);
  iVar3 = local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)iVar3 * 8;
  uVar4 = local_18._8_8_;
  FVar5.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar3) {
      `TCheckedPointerIterator<FDS_InventoryBaseTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
      uVar4 = local_18._8_8_;
    }
    if (FVar5.Data == pFVar1) break;
    if (*(EDS_InventoryType *)(*(longlong *)FVar5.Data + 0x10) == EVar2) {
      iVar3 = *(int *)(*(longlong *)FVar5.Data + 0x1c);
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      return iVar3;
    }
    FVar5.Data = FVar5.Data + 8;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return 0;
}

// GetLoadCapacity @ 14bd5da20

int __thiscall UDS_M_Weight::GetLoadCapacity(UDS_M_Weight *this)

{
  EDS_InventoryType EVar1;
  bool bVar2;
  int iVar3;
  UDS_MountDataSet *this_00;
  float fVar4;
  FWeakObjectPtr local_res8 [4];
  
  EVar1 = FDS_DataContainer::GetData<enum_EDS_InventoryType,enum_EDS_WeightData>
                    ((FDS_DataContainer *)&this->field_0x40,InventoryType);
  if (EVar1 == PlayerNormal) {
    local_res8[0].ObjectIndex = 0x195;
    fVar4 = UDS_CharStatusDataUtil::GetCurrentCharStatusMaxValue((EDS_StatusType *)local_res8);
    return (int)fVar4;
  }
  if (EVar1 == Mount) {
    TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)local_res8);
    bVar2 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar2) {
      this_00 = (UDS_MountDataSet *)FWeakObjectPtr::Get(local_res8);
      iVar3 = UDS_MountDataSet::GetCurrMountMaxLoadCapacity(this_00);
      return iVar3;
    }
  }
  return 0;
}

// GetViewModelContext @ 14bd64bf0

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_Weight::GetViewModelContext
          (UDS_M_Weight *this,TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  UDS_ModelBase::SetViewModelTemplateKey((UDS_ModelBase *)this,InventoryWeight);
  UDS_ModelBase::GetViewModelContext((UDS_ModelBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Init @ 14bd663f0

void __thiscall
UDS_M_Weight::Init(UDS_M_Weight *this,EDS_InventoryType param_1,long64 param_2,int param_3)

{
  undefined1 *this_00;
  undefined8 uVar1;
  uint uVar2;
  UEnum *this_01;
  FName FVar3;
  FString *this_02;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_28;
  
  this_00 = &this->field_0x40;
  this_01 = StaticEnum<enum_EDS_InventoryType>();
  if (this_01 == (UEnum *)0x0) {
    ::FString::FString(&local_28,L"");
  }
  else {
    UEnum::GetNameStringByValue(this_01,&local_28,(ulonglong)param_1);
  }
  FVar3 = FDS_DataContainer::TransformIndexToName<enum_EDS_WeightData>
                    ((FDS_DataContainer *)this_00,(EDS_WeightData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  this_02 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)this_00,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  iVar4 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange(this_02,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FDS_DataContainer::SetData<int,enum_EDS_WeightData>((FDS_DataContainer *)this_00,AddWeight,0);
  FDS_DataContainer::SetData<__int64,enum_EDS_WeightData>
            ((FDS_DataContainer *)this_00,ItemUID,param_2);
  FDS_DataContainer::SetData<int,enum_EDS_WeightData>((FDS_DataContainer *)this_00,ItemTID,param_3);
  return;
}

// OnDeInit @ 14bd76c00

void __thiscall UDS_M_Weight::OnDeInit(UDS_M_Weight *this)

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

// OnInit @ 14bd79a40

void __thiscall UDS_M_Weight::OnInit(UDS_M_Weight *this)

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
    ::AddUObject<UDS_M_Weight>
              (&pUVar3[0x13].field_0x18,(UDS_M_Weight *)(local_res10 + 1),(pmf_1ddbd3a5)this);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3840037732873142245>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Weight.cpp"
                       ,0x1b,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnUpdateInventory @ 14bd82bd0

void __thiscall UDS_M_Weight::OnUpdateInventory(UDS_M_Weight *this,EDS_InventoryUpdate param_1)

{
  code *pcVar1;
  FWeakObjectPtr local_res10;
  undefined8 local_res18 [2];
  
  if ((param_1 & Wieght) != None) {
    UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
    pcVar1 = *(code **)(*(longlong *)this + 0x2e0);
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = 0;
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    (*pcVar1)(this,local_res10,0);
  }
  return;
}

// SetAddWeight @ 14bd86d70

void __thiscall UDS_M_Weight::SetAddWeight(UDS_M_Weight *this,int param_1)

{
  FDS_DataContainer::SetData<int,enum_EDS_WeightData>
            ((FDS_DataContainer *)&this->field_0x40,AddWeight,param_1);
  UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
  return;
}

