// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 34

// StaticClass @ 14b50b110

UClass * __cdecl UDS_M_ItemDismantle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemDismantle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemDismantle",
               &Z_Registration_Info_UClass_UDS_M_ItemDismantle.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemDismantle,0x218,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ItemDismantle>,
               InternalVTableHelperCtorCaller<UDS_M_ItemDismantle>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemDismantle.InnerSingleton;
}

// UDS_M_ItemDismantle @ 14b5118c0

UDS_M_ItemDismantle * __thiscall
UDS_M_ItemDismantle::UDS_M_ItemDismantle(UDS_M_ItemDismantle *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_ItemDismantle__6B_;
  (this->InventoryBagModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->InventoryBagModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->ItemListModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ItemListModel).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->QuantityDataMap = 0;
  *(undefined8 *)&(this->QuantityDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->QuantityDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuantityDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QuantityDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->QuantityDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x48 = 0;
  (this->GradeFilterList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GradeFilterList).ArrayNum = 0;
  (this->GradeFilterList).ArrayMax = 0;
  return this;
}

// UDS_M_ItemDismantle @ 14b511980

UDS_M_ItemDismantle * __thiscall
UDS_M_ItemDismantle::UDS_M_ItemDismantle(UDS_M_ItemDismantle *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_ItemDismantle__6B_;
  (this->InventoryBagModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->InventoryBagModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->ItemListModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ItemListModel).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->QuantityDataMap = 0;
  *(undefined8 *)&(this->QuantityDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->QuantityDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuantityDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QuantityDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->QuantityDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x48 = 0;
  (this->GradeFilterList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GradeFilterList).ArrayNum = 0;
  (this->GradeFilterList).ArrayMax = 0;
  return this;
}

// ~UDS_M_ItemDismantle @ 14b513130

void __thiscall UDS_M_ItemDismantle::~UDS_M_ItemDismantle(UDS_M_ItemDismantle *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_M_ItemDismantle__6B_;
  pFVar1 = (this->GradeFilterList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->QuantityDataMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->QuantityDataMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->QuantityDataMap);
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b516380

UClass * __cdecl UDS_M_ItemDismantle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemDismantle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemDismantle",
               &Z_Registration_Info_UClass_UDS_M_ItemDismantle.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemDismantle,0x218,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ItemDismantle>,
               InternalVTableHelperCtorCaller<UDS_M_ItemDismantle>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemDismantle.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemDismantle @ 14b516d60

void __cdecl UDS_M_ItemDismantle::StaticRegisterNativesUDS_M_ItemDismantle(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_M_ItemDismantle_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedItemDataSet @ 14b518ba0

void __cdecl
UDS_M_ItemDismantle::execOnChangedItemDataSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataSetBase *local_res10;
  
  local_res10 = (UDS_DataSetBase *)0x0;
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
  OnChangedItemDataSet((UDS_M_ItemDismantle *)param_1,local_res10);
  return;
}

// AutoRegistTarget @ 14bce87c0

/* WARNING: Type propagation algorithm not settling */

void __thiscall UDS_M_ItemDismantle::AutoRegistTarget(UDS_M_ItemDismantle *this)

{
  undefined1 *puVar1;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *this_00;
  FWeakObjectPtr *pFVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  EDS_DismantleRegisterCondition EVar9;
  EDS_ItemUseType EVar10;
  int iVar11;
  FName FVar12;
  FString *pFVar13;
  UDS_M_InventoryBag *this_01;
  UObject *pUVar14;
  UObject *pUVar15;
  int *piVar16;
  int iVar17;
  wchar_t *_Str;
  UObject *pUVar18;
  wchar_t *_Str_00;
  ForAnyElementType FVar19;
  undefined1 local_res8 [8];
  EDS_InventoryType local_res10 [8];
  int local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_78;
  FWeakObjectPtr local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_58;
  
  bVar6 = FWeakObjectPtr::IsValid(&(this->InventoryBagModel).WeakPtr);
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7537242845099327697>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                       ,0xd1,"false");
    if (!bVar6) {
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar12 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemDismantleData>
                     ((FDS_DataContainer *)&this->_padding_,(EDS_ItemDismantleData)local_68);
  uVar3 = *(undefined8 *)FVar12;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  pFVar13 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)&this->_padding_,uVar7 + (int)((ulonglong)uVar3 >> 0x20),(FName *)FVar12);
  _Str_00 = L"";
  if ((pFVar13->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  iVar8 = _wtoi(_Str);
  FVar12 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemDismantleData>
                     ((FDS_DataContainer *)&this->_padding_,(EDS_ItemDismantleData)local_60);
  uVar3 = *(undefined8 *)FVar12;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  pFVar13 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)&this->_padding_,uVar7 + (int)((ulonglong)uVar3 >> 0x20),(FName *)FVar12);
  if ((pFVar13->Data).ArrayNum != 0) {
    _Str_00 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  local_res18 = _wtoi(_Str_00);
  this_00 = &this->QuantityDataMap;
  bVar6 = 1 < *(int *)&(this->QuantityDataMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
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
  iVar17 = *(int *)&(this->QuantityDataMap).field_0x2c;
  *(undefined4 *)&(this->QuantityDataMap).field_0x28 = 0;
  if ((iVar17 < 0) || (0x80 < iVar17)) {
    *(undefined4 *)&(this->QuantityDataMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->QuantityDataMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->QuantityDataMap).field_0x48 = 1;
    TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this_01 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&(this->InventoryBagModel).WeakPtr);
  UDS_M_InventoryBag::GetItemModelList(this_01,&local_58);
  iVar17 = local_58.ArrayNum;
  pFVar2 = (FWeakObjectPtr *)(local_58.AllocatorInstance.Data + (longlong)iVar17 * 8);
  FVar19.Data = local_58.AllocatorInstance.Data;
  while( true ) {
    if (local_58.ArrayNum != iVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)FVar19.Data == pFVar2) {
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      UpdateItemList(this);
      return;
    }
    local_70 = *(FWeakObjectPtr *)FVar19.Data;
    bVar6 = FWeakObjectPtr::IsValid(&local_70);
    if (!bVar6) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7537242845099327706>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                         ,0xda,"false");
      goto joined_r0x00014bce8bb5;
    }
    pUVar14 = FWeakObjectPtr::Get(&local_70);
    (**(code **)(*(longlong *)pUVar14 + 0x3a0))(pUVar14);
    bVar6 = FWeakObjectPtr::IsValid(&local_res20);
    if (!bVar6) break;
    EVar9 = GetDismantleRegisterCondition
                      (this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res20);
    if ((EVar9 == Dismantleable) &&
       (pUVar14 = FWeakObjectPtr::Get(&local_res20), *(byte *)(pUVar14 + 0x14) <= (byte)local_res18)
       ) {
      pUVar14 = FWeakObjectPtr::Get(&local_res20);
      EVar10 = DS_ItemDataUtil::GetItemUseType(*(int *)&pUVar14[8].field_0x10);
      if (((iVar8 != 1) || (EVar10 == Equipment)) && ((iVar8 != 2 || (EVar10 != Equipment)))) {
        FWeakObjectPtr::Get(&local_res20);
        GetQuantityData(this,(long64)&local_78);
        bVar6 = FWeakObjectPtr::IsValid(&local_78);
        if (!bVar6) {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7537242845099327734>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                             ,0xf6,"false");
          goto joined_r0x00014bce8bb5;
        }
        pUVar14 = FWeakObjectPtr::Get(&local_78);
        local_res10[0] = PlayerNormal;
        pcVar5 = *(code **)(*(longlong *)pUVar14 + 0x300);
        pUVar15 = FWeakObjectPtr::Get(&local_res20);
        piVar16 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                  ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                            (&pUVar15[10].field_0x18,1,local_res10);
        (*pcVar5)(pUVar14,*piVar16);
        pUVar14 = FWeakObjectPtr::Get(&local_78);
        pcVar5 = *(code **)(*(longlong *)pUVar14 + 0x308);
        pUVar15 = FWeakObjectPtr::Get(&local_res20);
        if (*(int *)&pUVar15[8].field_0x20 != *(int *)&pUVar15[9].field_0x24) {
          pUVar18 = pUVar15 + 10;
          if (*(UObject **)&pUVar15[10].field_0x8 != (UObject *)0x0) {
            pUVar18 = *(UObject **)&pUVar15[10].field_0x8;
          }
          iVar11 = *(int *)(&pUVar18->field_0x0 +
                           (ulonglong)(*(int *)&pUVar15[10].field_0x10 - 1U & 1) * 4);
          if (iVar11 != -1) {
            lVar4 = *(longlong *)&pUVar15[8].field_0x18;
            do {
              if (*(char *)(lVar4 + (longlong)iVar11 * 0x10) == '\x01') {
                piVar16 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                          ::FindChecked(&pUVar15[8].field_0x18,PlayerNormal);
                iVar11 = *piVar16;
                goto LAB_14bce8b27;
              }
              iVar11 = *(int *)(lVar4 + 8 + (longlong)iVar11 * 0x10);
            } while (iVar11 != -1);
          }
        }
        iVar11 = 0;
LAB_14bce8b27:
        (*pcVar5)(pUVar14,iVar11);
        pUVar14 = FWeakObjectPtr::Get(&local_78);
        (**(code **)(*(longlong *)pUVar14 + 0x2b8))(pUVar14);
      }
    }
    FVar19.Data = FVar19.Data + 8;
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7537242845099327709>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                     ,0xdd,"false");
joined_r0x00014bce8bb5:
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (local_58.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_58.AllocatorInstance.Data);
  return;
}

// GetDeismantleCost @ 14bcf6590

/* WARNING: Type propagation algorithm not settling */

int __thiscall UDS_M_ItemDismantle::GetDeismantleCost(UDS_M_ItemDismantle *this)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *pTVar5;
  bool bVar6;
  EDS_GradeType EVar7;
  int iVar8;
  EDS_ItemType EVar9;
  int iVar10;
  longlong lVar11;
  UObject *pUVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  int iVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *pTVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  FWeakObjectPtr local_e8;
  TArray<FDS_ItemDismantleCostTableRow_const_*,TSizedDefaultAllocator<32>_> local_e0;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  UObject *local_98;
  TBitArray<FDefaultBitArrayAllocator> *local_90;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *local_88;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->QuantityDataMap).field_0x10;
  iVar10 = 0;
  iVar8 = *(int *)&(this->QuantityDataMap).field_0x28;
  pTVar20 = &this->QuantityDataMap;
  iStack_c8 = 0;
  local_res18 = 0;
  local_b0 = 0;
  uStack_c4 = 1;
  iStack_b4 = 0;
  if (iVar8 != 0) {
    puVar19 = *(uint **)&(this->QuantityDataMap).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)pTVar21;
    }
    uVar18 = *puVar19;
    while (uVar18 == 0) {
      lVar11 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar8;
      if ((int)((iVar8 + -1 >> 0x1f & 0x1fU) + iVar8 + -1) >> 5 < iStack_c8) goto LAB_14bcf663f;
      uVar18 = puVar19[lVar11 + 1];
    }
    uStack_c4 = -uVar18 & uVar18;
    uVar2 = (ulonglong)uStack_c4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iStack_b4 = local_b0 + -1 + local_res20;
    if (iVar8 < iStack_b4) {
      iStack_b4 = iVar8;
    }
  }
LAB_14bcf663f:
  uVar18 = *(uint *)&(this->QuantityDataMap).field_0x28;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_a8 = *(int *)&(this->QuantityDataMap).field_0x8 -
              *(int *)&(this->QuantityDataMap).field_0x34;
  uStack_b8 = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_c4,iStack_c8);
  TStack_78.CurrentBitIndex = iStack_b4;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar18 >> 5;
  TStack_78._28_4_ = iStack_b4;
  TStack_78.BaseBitIndex = local_b0;
  uStack_58 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = pTVar20;
  local_c0 = (undefined1 *)pTVar21;
  iStack_ac = iStack_b4;
  local_90 = pTVar21;
  local_88 = pTVar20;
  local_80 = pTVar20;
  TStack_78.Array = pTVar21;
  if ((((int)uVar18 < 0) || (iVar8 < (int)uVar18)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  uVar3 = *(uint *)&(this->QuantityDataMap).field_0x28;
  iVar8 = 0;
  if (uVar18 != uVar3) {
    puVar13 = *(undefined1 **)&(this->QuantityDataMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = (undefined1 *)pTVar21;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar15 * 4);
    while (iVar8 = iVar10, uVar18 == 0) {
      lVar11 = (longlong)iVar15;
      uVar17 = uVar17 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar15) goto LAB_14bcf6740;
      uVar18 = *(uint *)(puVar13 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_a0 = (int)lVar11;
    uVar18 = local_a0 + -1 + uVar17;
    if ((int)uVar3 < (int)uVar18) {
      uVar18 = uVar3;
    }
  }
LAB_14bcf6740:
  do {
    pTVar5 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_78.CurrentBitIndex == uVar18) && (TStack_78.Array == pTVar21)) &&
       (pTVar5 == pTVar20)) {
      return iVar8;
    }
    pUVar12 = *(UObject **)(*(longlong *)pTVar5 + 8 + (longlong)TStack_78.CurrentBitIndex * 0x18);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar12 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar12);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar12 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar12);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar12);
        }
      }
    }
    local_e8.ObjectIndex = 0;
    local_e8.ObjectSerialNumber = 0;
    local_98 = pUVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    FWeakObjectPtr::operator=(&local_e8,(FObjectPtr)&local_98);
    bVar6 = FWeakObjectPtr::IsValid(&local_e8);
    if (!bVar6) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7537242845099327980>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                         ,0x1ec,"false");
      if (!bVar6) {
        return 0;
      }
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
    pUVar12 = FWeakObjectPtr::Get(&local_e8);
    EVar9 = DS_ItemDataUtil::GetItemTypeByUID(*(long64 *)(pUVar12 + 1));
    pUVar12 = FWeakObjectPtr::Get(&local_e8);
    EVar7 = DS_ItemDataUtil::GetItemGradeByUID(*(long64 *)(pUVar12 + 1));
    iVar8 = 0;
    FDS_ItemDismantleCostTableRow::GetAll(&local_e0);
    iVar10 = local_e0.ArrayNum;
    pFVar1 = local_e0.AllocatorInstance.Data + (longlong)iVar10 * 8;
    uVar14 = local_e0._8_8_;
    FVar16.Data = local_e0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar10) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FDS_ItemDismantleCostTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
        uVar14 = local_e0._8_8_;
      }
      if (FVar16.Data == pFVar1) goto LAB_14bcf6888;
      lVar11 = *(longlong *)FVar16.Data;
      if ((*(EDS_ItemType *)(lVar11 + 0x24) == EVar9) &&
         (*(EDS_GradeType *)(lVar11 + 0x28) == EVar7)) break;
      FVar16.Data = FVar16.Data + 8;
    }
    iVar8 = *(int *)(lVar11 + 0x30);
LAB_14bcf6888:
    if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.AllocatorInstance.Data);
    }
    pUVar12 = FWeakObjectPtr::Get(&local_e8);
    iVar10 = (**(code **)(*(longlong *)pUVar12 + 0x2f8))(pUVar12);
    iVar8 = local_res18 + iVar10 * iVar8;
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    local_res18 = iVar8;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    pTVar20 = local_88;
    pTVar21 = local_90;
  } while( true );
}

// GetDismantleCondition @ 14bcf6930

EDS_DismantleCondition __thiscall
UDS_M_ItemDismantle::GetDismantleCondition(UDS_M_ItemDismantle *this)

{
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *pTVar1;
  FWeakObjectPtr FVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UObject *pUVar7;
  long64 lVar8;
  ulonglong uVar9;
  EDS_DismantleCondition EVar10;
  uint uVar11;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
  *local_38;
  char local_30;
  char cStack_2f;
  
  pTVar1 = &this->QuantityDataMap;
  TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_30 = '\0';
  cStack_2f = '\0';
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar9 = local_98._24_8_ >> 0x20;
  uVar11 = local_98._28_4_;
  iVar6 = 1;
  local_38 = (TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
              *)pTVar1;
  if ((int)uVar11 < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      FVar2 = *(FWeakObjectPtr *)(*local_68 + 8 + (longlong)(int)uVar9 * 0x18);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (FVar2 != (FWeakObjectPtr)0x0) {
          UE::GC::MarkAsReachable((UObject *)FVar2);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)FVar2);
        }
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = FVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar2);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      local_res10 = local_res8;
      bVar4 = FWeakObjectPtr::IsValid(&local_res10);
      if (((!bVar4) || (pUVar7 = FWeakObjectPtr::Get(&local_res10), *(longlong *)(pUVar7 + 1) < 1))
         || (iVar5 = (**(code **)(*(longlong *)pUVar7 + 0x2f8))(pUVar7), iVar5 < 1)) {
        TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_40,uVar11);
        local_30 = '\x01';
      }
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar9 = (ulonglong)uStack_4c;
      uVar11 = uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if ((local_30 != '\0') && (cStack_2f != '\0')) {
      uVar11 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (3 < uVar11) {
        uVar9 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar11) && (local_38->HashSize < iVar6)) || (iVar6 < local_38->HashSize)) {
        local_38->HashSize = iVar6;
        TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  if (*(int *)&(this->QuantityDataMap).field_0x8 != *(int *)&(this->QuantityDataMap).field_0x34) {
    iVar6 = DS_ItemDataUtil::GetEnabledInventorySlotCount(PlayerNormal);
    if (0 < iVar6) {
      iVar6 = GetDeismantleCost(this);
      lVar8 = DS_MoneyDataUtil::GetMoneyQuantity(Copper);
      EVar10 = Dismantleable;
      if (lVar8 < iVar6) {
        EVar10 = NotEnoughCost;
      }
      return EVar10;
    }
    return NotEnoughInventorySlot;
  }
  return IsEmptyTargetItem;
}

// GetDismantleRegisterCondition @ 14bcf6b80

EDS_DismantleRegisterCondition __thiscall
UDS_M_ItemDismantle::GetDismantleRegisterCondition
          (UDS_M_ItemDismantle *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_DismantleRegisterCondition EVar3;
  UDS_ItemData *this_00;
  UObject *pUVar4;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar2) {
    this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(local_res10);
    bVar2 = UDS_ItemData::IsEquipped(this_00);
    if (bVar2) {
      return EquippedItem;
    }
    pUVar4 = FWeakObjectPtr::Get(local_res10);
    EVar3 = Dismantleable;
    if (pUVar4[0x11].field_0x9 != '\0') {
      EVar3 = LockedItem;
    }
    return EVar3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7537242845099327751>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                     ,0x107,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return None;
}

// GetFilter @ 14bcf7900

EDS_ItemDismantleFilter __thiscall UDS_M_ItemDismantle::GetFilter(UDS_M_ItemDismantle *this)

{
  undefined8 uVar1;
  uint uVar2;
  EDS_ItemDismantleFilter EVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemDismantleData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemDismantleData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  EVar3 = _wtoi(_Str);
  return EVar3;
}

// GetQuantityData @ 14bcf9e10

TWeakObjectPtr<UDS_QuantityData,FWeakObjectPtr> __thiscall
UDS_M_ItemDismantle::GetQuantityData
          (UDS_M_ItemDismantle *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  EDS_CommonPopupContext EVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  TWeakObjectPtr<UDS_QuantityData,FWeakObjectPtr> TVar8;
  FWeakObjectPtr *this_00;
  UClass *pUVar9;
  undefined1 *puVar10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_48;
  UObject *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28 [2];
  
  pUVar6 = FWeakObjectPtr::Get(&local_res18);
  pUVar7 = FWeakObjectPtr::Get(&local_res18);
  EVar1 = pUVar7[0x13].field_0x20;
  if (*(int *)&pUVar6[0x16].field_0x8 != *(int *)&pUVar6[0x17].field_0xc) {
    puVar10 = *(undefined1 **)&pUVar6[0x17].field_0x18;
    if (*(undefined1 **)&pUVar6[0x17].field_0x18 == (undefined1 *)0x0) {
      puVar10 = &pUVar6[0x17].field_0x10;
    }
    iVar5 = *(int *)(puVar10 +
                    ((ulonglong)(*(int *)&pUVar6[0x17].field_0x20 - 1) & (ulonglong)EVar1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)(pUVar6 + 0x16);
      do {
        if (*(EDS_CommonPopupContext *)(lVar2 + (longlong)iVar5 * 0x14) == EVar1) {
          this_00 = &TMapBase<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,0>_>
                     ::FindChecked(pUVar6 + 0x16,EVar1)->WeakPtr;
          pUVar6 = FWeakObjectPtr::Get(this_00);
          if (pUVar6 == (UObject *)0x0) {
LAB_14bcf9f92:
            pUVar6 = (UObject *)0x0;
          }
          else {
            pUVar9 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
            iVar5 = (int)pUVar9->_padding_;
            if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar5) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
                &pUVar9->_padding_)) goto LAB_14bcf9f92;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          local_res20.ObjectIndex = 0;
          local_res20.ObjectSerialNumber = 0;
          local_40 = pUVar6;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_40);
          goto LAB_14bcf9ef0;
        }
        iVar5 = *(int *)(lVar2 + 0xc + (longlong)iVar5 * 0x14);
      } while (iVar5 != -1);
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1729980661818720170>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.h"
                     ,0x56,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    TVar8.WeakPtr = (FWeakObjectPtr)(*pcVar3)();
    return (TWeakObjectPtr<UDS_QuantityData,FWeakObjectPtr>)TVar8.WeakPtr;
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_38 = 0;
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_38);
LAB_14bcf9ef0:
  bVar4 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar4) {
    pUVar6 = FWeakObjectPtr::Get(&local_res20);
    (**(code **)(*(longlong *)pUVar6 + 0x380))(pUVar6);
    DS_ItemDataUtil::GetItemDataByTID((int)&local_48);
    bVar4 = FWeakObjectPtr::IsValid(&local_48);
    if (bVar4) {
      FWeakObjectPtr::Get(&local_48);
      GetQuantityData(this,(long64)param_1.WeakPtr);
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7537242845099327652>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                         ,0xa4,"false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.WeakPtr = (FWeakObjectPtr)(*pcVar3)();
        return (TWeakObjectPtr<UDS_QuantityData,FWeakObjectPtr>)TVar8.WeakPtr;
      }
      *(undefined8 *)param_1.WeakPtr = 0;
      local_28[0] = 0;
      FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1.WeakPtr,(FObjectPtr)local_28);
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7537242845099327649>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                       ,0xa1,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar8.WeakPtr = (FWeakObjectPtr)(*pcVar3)();
      return (TWeakObjectPtr<UDS_QuantityData,FWeakObjectPtr>)TVar8.WeakPtr;
    }
    *(undefined8 *)param_1.WeakPtr = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1.WeakPtr,(FObjectPtr)&local_30);
  }
  return (TWeakObjectPtr<UDS_QuantityData,FWeakObjectPtr>)param_1.WeakPtr;
}

// GetQuantityData @ 14bcfa0a0

TWeakObjectPtr<UDS_QuantityData,FWeakObjectPtr> __thiscall
UDS_M_ItemDismantle::GetQuantityData(UDS_M_ItemDismantle *this,long64 param_1)

{
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *this_00;
  TObjectPtr<UDS_QuantityData>_u_0 TVar1;
  int iVar2;
  UObject *pUVar3;
  UDS_InventoryQuantityData *pUVar4;
  TObjectPtr<UDS_QuantityData> *pTVar5;
  longlong in_R8;
  undefined1 *puVar6;
  TObjectPtr<UDS_QuantityData>_u_0 local_res8;
  UDS_InventoryQuantityData *local_res10;
  longlong local_res18;
  longlong *local_28;
  UDS_InventoryQuantityData **local_20;
  
  this_00 = &this->QuantityDataMap;
  if (*(int *)&(this->QuantityDataMap).field_0x8 != *(int *)&(this->QuantityDataMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->QuantityDataMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->QuantityDataMap).field_0x38;
    }
    iVar2 = *(int *)(puVar6 + ((in_R8 >> 0x20) * 0x17 + in_R8 &
                              (ulonglong)(*(int *)&(this->QuantityDataMap).field_0x48 - 1)) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x18) == in_R8)
        goto LAB_14bcfa1a9;
        iVar2 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  local_res18 = in_R8;
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UDS_InventoryQuantityData>(pUVar3);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UDS_InventoryQuantityData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar4->_padding_ = local_res18;
  pUVar4->InventoryType = PlayerNormal;
  pUVar4->TradableQuantity = 0;
  pUVar4->UnTradableQuantity = 0;
  pUVar4->ModifiedTradableQuantity = 0;
  pUVar4->ModifiedUnTradableQuantity = 0;
  (**(code **)(pUVar4->_padding_ + 0x328))(pUVar4,0xffffffff);
  local_res10 = pUVar4;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  local_28 = &local_res18;
  local_20 = &local_res10;
  TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<__int64_const_&,TObjectPtr<UDS_QuantityData>_&&>_>
            ((TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<__int64_const_&,TObjectPtr<UDS_QuantityData>_&&> *)
             &local_res8.ObjectPtr,(bool *)&local_28);
  in_R8 = local_res18;
LAB_14bcfa1a9:
  pTVar5 = TMapBase<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
           ::FindChecked((TMapBase<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
                          *)this_00,in_R8);
  TVar1.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar5->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar1.DebugPtr != (UDS_QuantityData *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UDS_QuantityData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
  }
  *(undefined8 *)param_1 = 0;
  local_res8.ObjectPtr.field0_0x0 = TVar1.ObjectPtr.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar1.DebugPtr != (UDS_QuantityData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_QuantityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetViewModelContext @ 14bcff8e0

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_ItemDismantle::GetViewModelContext
          (UDS_M_ItemDismantle *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  *(undefined4 *)&this->_padding_ = 0x143;
  UDS_ModelBase::GetViewModelContext((UDS_ModelBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsDisabledDismantleButton @ 14bd056b0

bool __thiscall UDS_M_ItemDismantle::IsDisabledDismantleButton(UDS_M_ItemDismantle *this)

{
  EDS_DismantleCondition EVar1;
  
  EVar1 = GetDismantleCondition(this);
  return EVar1 == IsEmptyTargetItem;
}

// IsDisabledResetButton @ 14bd056d0

bool __thiscall UDS_M_ItemDismantle::IsDisabledResetButton(UDS_M_ItemDismantle *this)

{
  EDS_DismantleCondition EVar1;
  
  EVar1 = GetDismantleCondition(this);
  return EVar1 == IsEmptyTargetItem;
}

// IsEmpty @ 14bd057c0

bool __thiscall UDS_M_ItemDismantle::IsEmpty(UDS_M_ItemDismantle *this)

{
  return *(int *)&(this->QuantityDataMap).field_0x8 == *(int *)&(this->QuantityDataMap).field_0x34;
}

// OnChangedFilter @ 14bd0a260

void __thiscall
UDS_M_ItemDismantle::OnChangedFilter(UDS_M_ItemDismantle *this,EDS_ItemDismantleFilter param_1)

{
  code *pcVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  FDS_DataContainer::SetData<int,enum_EDS_ItemDismantleData>
            ((FDS_DataContainer *)&this->_padding_,Filter,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  pcVar1 = *(code **)(this->_padding_ + 0x2e0);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (*pcVar1)(this,local_res8,0);
  return;
}

// OnChangedGradeFilter @ 14bd0a2d0

void __thiscall UDS_M_ItemDismantle::OnChangedGradeFilter(UDS_M_ItemDismantle *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  if ((-1 < param_1) && (param_1 < (this->GradeFilterList).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->GradeFilterList).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FDS_DataContainer::SetData<int,enum_EDS_ItemDismantleData>
              ((FDS_DataContainer *)&this->_padding_,SelectedFilterGrade,
               (uint)(byte)(this->GradeFilterList).AllocatorInstance.Data[param_1]);
    *(undefined1 *)&this->_padding_ = 1;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = 0;
    pcVar1 = *(code **)(this->_padding_ + 0x2e0);
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    (*pcVar1)(this,local_res8,0);
  }
  return;
}

// OnChangedItemDataSet @ 14bd0a3b0

void __thiscall
UDS_M_ItemDismantle::OnChangedItemDataSet(UDS_M_ItemDismantle *this,UDS_DataSetBase *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bd0a3b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d8))();
  return;
}

// OnClickedAutoRegisterButton @ 14bd0ae10

/* WARNING: Type propagation algorithm not settling */

void __thiscall UDS_M_ItemDismantle::OnClickedAutoRegisterButton(UDS_M_ItemDismantle *this)

{
  undefined1 *puVar1;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *this_00;
  FWeakObjectPtr *pFVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  EDS_DismantleRegisterCondition EVar9;
  EDS_ItemUseType EVar10;
  int iVar11;
  FName FVar12;
  FString *pFVar13;
  UDS_M_InventoryBag *this_01;
  UObject *pUVar14;
  UObject *pUVar15;
  int *piVar16;
  int iVar17;
  wchar_t *_Str;
  UObject *pUVar18;
  wchar_t *_Str_00;
  ForAnyElementType FVar19;
  undefined1 auStackX_8 [8];
  EDS_InventoryType aEStackX_10 [8];
  int iStackX_18;
  FWeakObjectPtr FStackX_20;
  FWeakObjectPtr FStack_78;
  FWeakObjectPtr FStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> TStack_58;
  
  bVar6 = FWeakObjectPtr::IsValid(&(this->InventoryBagModel).WeakPtr);
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7537242845099327697>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                       ,0xd1,"false");
    if (!bVar6) {
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar12 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemDismantleData>
                     ((FDS_DataContainer *)&this->_padding_,(EDS_ItemDismantleData)auStack_68);
  uVar3 = *(undefined8 *)FVar12;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  pFVar13 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)&this->_padding_,uVar7 + (int)((ulonglong)uVar3 >> 0x20),(FName *)FVar12);
  _Str_00 = L"";
  if ((pFVar13->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  iVar8 = _wtoi(_Str);
  FVar12 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemDismantleData>
                     ((FDS_DataContainer *)&this->_padding_,(EDS_ItemDismantleData)auStack_60);
  uVar3 = *(undefined8 *)FVar12;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  pFVar13 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)&this->_padding_,uVar7 + (int)((ulonglong)uVar3 >> 0x20),(FName *)FVar12);
  if ((pFVar13->Data).ArrayNum != 0) {
    _Str_00 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  iStackX_18 = _wtoi(_Str_00);
  this_00 = &this->QuantityDataMap;
  bVar6 = 1 < *(int *)&(this->QuantityDataMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
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
  iVar17 = *(int *)&(this->QuantityDataMap).field_0x2c;
  *(undefined4 *)&(this->QuantityDataMap).field_0x28 = 0;
  if ((iVar17 < 0) || (0x80 < iVar17)) {
    *(undefined4 *)&(this->QuantityDataMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->QuantityDataMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->QuantityDataMap).field_0x48 = 1;
    TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this_01 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&(this->InventoryBagModel).WeakPtr);
  UDS_M_InventoryBag::GetItemModelList(this_01,&TStack_58);
  iVar17 = TStack_58.ArrayNum;
  pFVar2 = (FWeakObjectPtr *)(TStack_58.AllocatorInstance.Data + (longlong)iVar17 * 8);
  FVar19.Data = TStack_58.AllocatorInstance.Data;
  while( true ) {
    if (TStack_58.ArrayNum != iVar17) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if ((FWeakObjectPtr *)FVar19.Data == pFVar2) {
      if (TStack_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_58.AllocatorInstance.Data);
      }
      UpdateItemList(this);
      return;
    }
    FStack_70 = *(FWeakObjectPtr *)FVar19.Data;
    bVar6 = FWeakObjectPtr::IsValid(&FStack_70);
    if (!bVar6) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7537242845099327706>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                         ,0xda,"false");
      goto joined_r0x00014bce8bb5;
    }
    pUVar14 = FWeakObjectPtr::Get(&FStack_70);
    (**(code **)(*(longlong *)pUVar14 + 0x3a0))(pUVar14);
    bVar6 = FWeakObjectPtr::IsValid(&FStackX_20);
    if (!bVar6) break;
    EVar9 = GetDismantleRegisterCondition
                      (this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)FStackX_20);
    if ((EVar9 == Dismantleable) &&
       (pUVar14 = FWeakObjectPtr::Get(&FStackX_20), *(byte *)(pUVar14 + 0x14) <= (byte)iStackX_18))
    {
      pUVar14 = FWeakObjectPtr::Get(&FStackX_20);
      EVar10 = DS_ItemDataUtil::GetItemUseType(*(int *)&pUVar14[8].field_0x10);
      if (((iVar8 != 1) || (EVar10 == Equipment)) && ((iVar8 != 2 || (EVar10 != Equipment)))) {
        FWeakObjectPtr::Get(&FStackX_20);
        GetQuantityData(this,(long64)&FStack_78);
        bVar6 = FWeakObjectPtr::IsValid(&FStack_78);
        if (!bVar6) {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7537242845099327734>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                             ,0xf6,"false");
          goto joined_r0x00014bce8bb5;
        }
        pUVar14 = FWeakObjectPtr::Get(&FStack_78);
        aEStackX_10[0] = PlayerNormal;
        pcVar5 = *(code **)(*(longlong *)pUVar14 + 0x300);
        pUVar15 = FWeakObjectPtr::Get(&FStackX_20);
        piVar16 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                  ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                            (&pUVar15[10].field_0x18,1,aEStackX_10);
        (*pcVar5)(pUVar14,*piVar16);
        pUVar14 = FWeakObjectPtr::Get(&FStack_78);
        pcVar5 = *(code **)(*(longlong *)pUVar14 + 0x308);
        pUVar15 = FWeakObjectPtr::Get(&FStackX_20);
        if (*(int *)&pUVar15[8].field_0x20 != *(int *)&pUVar15[9].field_0x24) {
          pUVar18 = pUVar15 + 10;
          if (*(UObject **)&pUVar15[10].field_0x8 != (UObject *)0x0) {
            pUVar18 = *(UObject **)&pUVar15[10].field_0x8;
          }
          iVar11 = *(int *)(&pUVar18->field_0x0 +
                           (ulonglong)(*(int *)&pUVar15[10].field_0x10 - 1U & 1) * 4);
          if (iVar11 != -1) {
            lVar4 = *(longlong *)&pUVar15[8].field_0x18;
            do {
              if (*(char *)(lVar4 + (longlong)iVar11 * 0x10) == '\x01') {
                piVar16 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                          ::FindChecked(&pUVar15[8].field_0x18,PlayerNormal);
                iVar11 = *piVar16;
                goto LAB_14bce8b27;
              }
              iVar11 = *(int *)(lVar4 + 8 + (longlong)iVar11 * 0x10);
            } while (iVar11 != -1);
          }
        }
        iVar11 = 0;
LAB_14bce8b27:
        (*pcVar5)(pUVar14,iVar11);
        pUVar14 = FWeakObjectPtr::Get(&FStack_78);
        (**(code **)(*(longlong *)pUVar14 + 0x2b8))(pUVar14);
      }
    }
    FVar19.Data = FVar19.Data + 8;
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7537242845099327709>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                     ,0xdd,"false");
joined_r0x00014bce8bb5:
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (TStack_58.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(TStack_58.AllocatorInstance.Data);
  return;
}

// OnClickedDismantleButton @ 14bd0aef0

void __thiscall UDS_M_ItemDismantle::OnClickedDismantleButton(UDS_M_ItemDismantle *this)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  EDS_DismantleCondition EVar4;
  uint uVar5;
  UObject *pUVar6;
  FName FVar7;
  FString *pFVar8;
  ulong64 uVar9;
  wchar_t *_Str;
  FWeakObjectPtr local_res10;
  undefined1 local_res18 [8];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_38;
  
  UDS_PlayerData::GetMainPlayerData();
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    EVar4 = GetDismantleCondition(this);
    if (EVar4 == Dismantleable) {
      pUVar6 = FWeakObjectPtr::Get(&local_res10);
      iVar1 = *(int *)&pUVar6[9].field_0x10;
      FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemDismantleData>
                        ((FDS_DataContainer *)&this->_padding_,(EDS_ItemDismantleData)local_res18);
      uVar2 = *(undefined8 *)FVar7;
      uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
      pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
               ::FindOrAddImpl<FName>
                         ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                           *)&this->_padding_,uVar5 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar7
                         );
      if ((pFVar8->Data).ArrayNum == 0) {
        _Str = L"";
      }
      else {
        _Str = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      uVar9 = _wtoi64(_Str);
      FDS_ItemDismantleService::RequestItemDismantle(uVar9,&this->QuantityDataMap,iVar1);
    }
    else {
      if (EVar4 == IsEmptyTargetItem) {
        local_38._0_8_ = 0;
        local_38._8_8_ = 0;
        local_38._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x9f08,Alert_System_01,&local_38);
        return;
      }
      if (EVar4 == NotEnoughCost) {
        local_38._0_8_ = 0;
        local_38._8_8_ = 0;
        local_38._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x9f09,Alert_System_01,&local_38);
        return;
      }
      if (EVar4 == NotEnoughInventorySlot) {
        local_38._0_8_ = 0;
        local_38._8_8_ = 0;
        local_38._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x9f0d,Alert_System_01,&local_38);
        return;
      }
    }
  }
  return;
}

// OnClickedInventoryBagItem @ 14bd0b470

void __thiscall
UDS_M_ItemDismantle::OnClickedInventoryBagItem
          (UDS_M_ItemDismantle *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_DismantleRegisterCondition EVar3;
  EDS_ItemUseType EVar4;
  int iVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  int *piVar8;
  UDS_ItemData *this_00;
  UDS_CommonPopupManager *this_01;
  undefined8 *puVar9;
  ulong64 uVar10;
  TWeakObjectPtr<UDS_QuantityData,FWeakObjectPtr> this_02;
  UClass *pUVar11;
  long64 lVar12;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> *pTVar13;
  FWeakObjectPtr local_res10;
  EDS_InventoryType local_res18 [8];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_128;
  FWeakObjectPtr local_120;
  FWeakObjectPtr local_118;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_110;
  FDelegateAllocation local_108;
  UDS_GameInstance *local_f8;
  UDS_CommonPopupManager *local_f0;
  UDS_M_ItemDismantle *local_e8;
  UObject *local_e0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_d8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_c0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_a8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_90;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_78;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7537242845099327830>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                       ,0x156,"false");
    if (!bVar2) {
      return;
    }
    goto code_r0x00014bd0b742;
  }
  EVar3 = GetDismantleRegisterCondition
                    (this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res10);
  switch(EVar3) {
  case Dismantleable:
    pUVar6 = FWeakObjectPtr::Get(&local_res10);
    EVar4 = DS_ItemDataUtil::GetItemUseType(*(int *)&pUVar6[8].field_0x10);
    if (EVar4 == Equipment) {
      FWeakObjectPtr::Get(&local_res10);
      GetQuantityData(this,(long64)&local_res20);
      bVar2 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar2) {
        pUVar6 = FWeakObjectPtr::Get(&local_res20);
        local_res18[0] = PlayerNormal;
        pcVar1 = *(code **)(*(longlong *)pUVar6 + 0x300);
        pUVar7 = FWeakObjectPtr::Get(&local_res10);
        piVar8 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                 ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                           (&pUVar7[10].field_0x18,1,local_res18);
        (*pcVar1)(pUVar6,*piVar8);
        pUVar6 = FWeakObjectPtr::Get(&local_res20);
        pcVar1 = *(code **)(*(longlong *)pUVar6 + 0x308);
        this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res10);
        iVar5 = UDS_ItemData::GetStackCount_UnTradable(this_00,PlayerNormal);
        (*pcVar1)(pUVar6,iVar5);
        pUVar6 = FWeakObjectPtr::Get(&local_res20);
        (**(code **)(*(longlong *)pUVar6 + 0x2b8))(pUVar6);
        UpdateItemList(this);
        return;
      }
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7537242845099327839>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                         ,0x15f,"false");
      if (!bVar2) {
        return;
      }
code_r0x00014bd0b742:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_f8 = UDS_GameInstance::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_f8 != (UDS_GameInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_f8);
    }
    local_120.ObjectIndex = 0;
    local_120.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_f8 != (UDS_GameInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_f8);
    }
    FWeakObjectPtr::operator=(&local_120,(FObjectPtr)&local_f8);
    bVar2 = FWeakObjectPtr::IsValid(&local_120);
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7537242845099327850>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                         ,0x16a,"false");
      if (!bVar2) {
        return;
      }
      goto code_r0x00014bd0b742;
    }
    local_f0 = UDS_CommonPopupManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_f0 != (UDS_CommonPopupManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_f0);
    }
    local_128.ObjectIndex = 0;
    local_128.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_f0 != (UDS_CommonPopupManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_f0);
    }
    FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_f0);
    bVar2 = FWeakObjectPtr::IsValid(&local_128);
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7537242845099327853>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                         ,0x16d,"false");
      if (!bVar2) {
        return;
      }
      goto code_r0x00014bd0b742;
    }
    this_01 = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&local_128);
    local_110.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_108.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_108.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_110,(FWriteAccessScope *)&local_60);
    local_48 = &local_108;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_108);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_ItemDismantle____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_M_ItemDismantle *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar9[3] = 0;
      local_e8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_M_ItemDismantle *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_e8);
      puVar9[4] = OnClickedQuantitySelectionPopupConfirm;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    FWeakObjectPtr::Get(&local_res10);
    this_02 = GetQuantityData(this,(long64)local_40);
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.WeakPtr);
    if (pUVar6 != (UObject *)0x0) {
      pUVar11 = Z_Construct_UClass_UDS_InventoryQuantityData_NoRegister();
      iVar5 = (int)pUVar11->_padding_;
      if ((iVar5 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar11->_padding_)) goto LAB_14bd0b87d;
    }
    pUVar6 = (UObject *)0x0;
LAB_14bd0b87d:
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    local_118.ObjectIndex = 0;
    local_118.ObjectSerialNumber = 0;
    local_e0 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=(&local_118,(FObjectPtr)&local_e0);
    UDS_CommonPopupManager::CreateQuantitySelectionPopup
              (this_01,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_38,
               (TWeakObjectPtr<UDS_InventoryQuantityData,FWeakObjectPtr>)local_res10,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_118);
    return;
  case NotDismantleItem:
    pTVar13 = &local_d8;
    local_d8._0_8_ = 0;
    lVar12 = 0x9efe;
    local_d8._8_8_ = 0;
    local_d8._16_4_ = 0;
    break;
  case EquippedItem:
    pTVar13 = &local_a8;
    local_a8._0_8_ = 0;
    lVar12 = 0x9eff;
    local_a8._8_8_ = 0;
    local_a8._16_4_ = 0;
    break;
  case LockedItem:
    pTVar13 = &local_c0;
    local_c0._0_8_ = 0;
    lVar12 = 0x9efe;
    local_c0._8_8_ = 0;
    local_c0._16_4_ = 0;
    break;
  case AutoUseRegisteredItem:
    pTVar13 = &local_90;
    local_90._0_8_ = 0;
    lVar12 = 0x9f00;
    local_90._8_8_ = 0;
    local_90._16_4_ = 0;
    break;
  case NotEnoughInventorySlot:
    pTVar13 = &local_78;
    local_78._0_8_ = 0;
    lVar12 = 0x9f01;
    local_78._8_8_ = 0;
    local_78._16_4_ = 0;
    break;
  default:
    goto switchD_14bd0b4fa_default;
  }
  UDS_UIMessageManager::OpenMsgByStringUi(lVar12,Alert_System_01,pTVar13);
switchD_14bd0b4fa_default:
  return;
}

// OnClickedInventoryBagItemSubtract @ 14bd0b9b0

void __thiscall
UDS_M_ItemDismantle::OnClickedInventoryBagItemSubtract
          (UDS_M_ItemDismantle *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7537242845099327895>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                       ,0x197,"false");
    if (!bVar2) {
      return;
    }
code_r0x00014bd0ba54:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FWeakObjectPtr::Get(&local_res10);
  GetQuantityData(this,(long64)local_res18);
  bVar2 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(local_res18);
    (**(code **)(*(longlong *)pUVar3 + 0x300))(pUVar3,0);
    pUVar3 = FWeakObjectPtr::Get(local_res18);
    (**(code **)(*(longlong *)pUVar3 + 0x308))(pUVar3,0);
    pUVar3 = FWeakObjectPtr::Get(local_res18);
    (**(code **)(*(longlong *)pUVar3 + 0x2b8))(pUVar3);
    UpdateItemList(this);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7537242845099327898>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                       ,0x19a,"false");
    if (bVar2) goto code_r0x00014bd0ba54;
  }
  return;
}

// OnClickedQuantitySelectionPopupConfirm @ 14bd0bc80

void __thiscall
UDS_M_ItemDismantle::OnClickedQuantitySelectionPopupConfirm(UDS_M_ItemDismantle *this)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  UDS_M_ItemList *this_00;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *pTVar5;
  UDS_M_InventoryBag *this_01;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *pTVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  FWeakObjectPtr FStackX_8;
  FWeakObjectPtr FStackX_10;
  FWeakObjectPtr FStackX_18;
  UObject *pUStackX_20;
  TArray<__int64,TSizedDefaultAllocator<32>_> TStack_188;
  TArray<__int64,TSizedDefaultAllocator<32>_> TStack_178;
  longlong *plStack_168;
  undefined1 auStack_160 [16];
  uint uStack_150;
  uint uStack_14c;
  longlong lStack_148;
  TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
  *pTStack_140;
  TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
  *pTStack_138;
  char cStack_130;
  char cStack_12f;
  undefined8 uStack_128;
  undefined1 auStack_120 [32];
  longlong lStack_100;
  TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
  *pTStack_f8;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  TStack_f0;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  TStack_a0;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (bVar2) {
    bVar2 = FWeakObjectPtr::IsValid(&(this->InventoryBagModel).WeakPtr);
    if (bVar2) {
      pTVar6 = &this->QuantityDataMap;
      TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)auStack_120,
                 (TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
                  *)pTVar6);
      cStack_130 = '\0';
      cStack_12f = '\0';
      stack0xfffffffffffffea8 = auStack_120._16_16_;
      plStack_168 = (longlong *)auStack_120._0_8_;
      auStack_160._0_8_ = auStack_120._8_8_;
      lStack_148 = lStack_100;
      pTStack_140 = pTStack_f8;
      uVar7 = auStack_120._24_8_ >> 0x20;
      uVar9 = auStack_120._28_4_;
      pTStack_138 = (TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
                     *)pTVar6;
      if ((int)uVar9 < *(int *)(auStack_120._16_8_ + 0x18)) {
        do {
          pUVar4 = *(UObject **)(*plStack_168 + 8 + (longlong)(int)uVar7 * 0x18);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar4 != (UObject *)0x0) {
              UE::GC::MarkAsReachable(pUVar4);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar4);
            }
          }
          FStackX_8.ObjectIndex = 0;
          FStackX_8.ObjectSerialNumber = 0;
          pUStackX_20 = pUVar4;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&pUStackX_20);
          FStackX_18 = FStackX_8;
          bVar2 = FWeakObjectPtr::IsValid(&FStackX_18);
          if (((!bVar2) ||
              (pUVar4 = FWeakObjectPtr::Get(&FStackX_18), *(longlong *)(pUVar4 + 1) < 1)) ||
             (iVar3 = (**(code **)(*(longlong *)pUVar4 + 0x2f8))(pUVar4), iVar3 < 1)) {
            TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_140,uVar9);
            cStack_130 = '\x01';
          }
          uStack_150 = uStack_150 & ~auStack_160._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_160);
          uVar7 = (ulonglong)uStack_14c;
          uVar9 = uStack_14c;
        } while ((int)uStack_14c < *(int *)(auStack_160._8_8_ + 0x18));
        if ((cStack_130 != '\0') && (cStack_12f != '\0')) {
          uVar9 = *(int *)&(pTStack_138->Elements).field_0x8 -
                  *(int *)&(pTStack_138->Elements).field_0x34;
          if (uVar9 < 4) {
            iVar3 = 1;
          }
          else {
            uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
            lVar8 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            iVar3 = 1 << ((byte)lVar8 & 0x1f);
          }
          if (((0 < (int)uVar9) && (pTStack_138->HashSize < iVar3)) ||
             (iVar3 < pTStack_138->HashSize)) {
            pTStack_138->HashSize = iVar3;
            TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
            ::Rehash(pTStack_138);
          }
        }
      }
      TStack_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_178.ArrayNum = 0;
      TStack_178.ArrayMax = 0;
      TMapBase<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
      ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
                  *)pTVar6,&TStack_178);
      this_00 = (UDS_M_ItemList *)FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
      pTVar5 = TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
               ::
               TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
                         (&TStack_f0,pTVar6);
      UDS_M_ItemList::SetQuantityList(this_00,pTVar5);
      pUVar4 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
      _Src.Data = TStack_178.AllocatorInstance.Data;
      lVar8 = (longlong)TStack_178.ArrayNum;
      TStack_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_188.ArrayNum = TStack_178.ArrayNum;
      if (TStack_178.ArrayNum == 0) {
        TStack_188.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,TStack_178.ArrayNum,0,&TStack_188.AllocatorInstance,TStack_178.ArrayNum,
                   &TStack_188.ArrayMax);
        memcpy(TStack_188.AllocatorInstance.Data,_Src.Data,lVar8 << 3);
      }
      FDS_DataContainer::SetData<enum_EDS_SortingType,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,SortType,Equip);
      FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,Generation,true);
      pUVar4[5].field_0x18 = 1;
      FDS_DataContainer::SetData<enum_EDS_FilterType,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,FilterType,None);
      FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,Generation,true);
      pUVar4[5].field_0x18 = 1;
      FDS_DataContainer::SetData<enum_EDS_ItemSlotStateType,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,SlotType,ItemDismantleTarget);
      FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,Generation,true);
      pUVar4[5].field_0x18 = 1;
      FDS_DataContainer::SetData<enum_EDS_SortOrder,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,SortOrderType,Descend);
      FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,Generation,true);
      pUVar4[5].field_0x18 = 1;
      FDS_DataContainer::SetData<enum_EDS_ItemListType,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,ListType,Custom);
      FDS_DataContainer::SetListData<__int64,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,ItemUIDList,&TStack_188);
      (**(code **)(*(longlong *)pUVar4 + 800))(pUVar4);
      if (TStack_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_188.AllocatorInstance.Data);
      }
      this_01 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&(this->InventoryBagModel).WeakPtr);
      pTVar6 = TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
               ::
               TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
                         (&TStack_a0,pTVar6);
      if (&this_01->QuantityList != pTVar6) {
        UE::Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)&(this_01->QuantityList).field_0x38,
                   (int *)&(this_01->QuantityList).field_0x48,
                   (ForElementType<FSetElementId> *)&pTVar6->field_0x38,*(int *)&pTVar6->field_0x48)
        ;
        TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this_01->QuantityList,
                    (TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)pTVar6);
      }
      UDS_M_InventoryBag::ResetQuantityList(this_01);
      *(undefined4 *)&pTVar6->field_0x48 = 0;
      if (*(void **)&pTVar6->field_0x40 != (void *)0x0) {
        FMemory::Free(*(void **)&pTVar6->field_0x40);
      }
      TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)pTVar6);
      FStackX_10.ObjectIndex = 0;
      FStackX_10.ObjectSerialNumber = 0;
      uStack_128 = 0;
      pcVar1 = *(code **)(this->_padding_ + 0x2e0);
      FWeakObjectPtr::operator=(&FStackX_10,(FObjectPtr)&uStack_128);
      (*pcVar1)(this,FStackX_10,1);
      if (TStack_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_178.AllocatorInstance.Data);
      }
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7537242845099327671>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                         ,0xb7,"false");
      if (bVar2) goto code_r0x00014bd281f4;
    }
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7537242845099327670>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                     ,0xb6,"false");
  if (!bVar2) {
    return;
  }
code_r0x00014bd281f4:
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// OnClickedResetButton @ 14bd0bd70

void __thiscall UDS_M_ItemDismantle::OnClickedResetButton(UDS_M_ItemDismantle *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bd0bd73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d8))();
  return;
}

// OnUpdateModel @ 14bd12a30

void __thiscall
UDS_M_ItemDismantle::OnUpdateModel
          (UDS_M_ItemDismantle *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  bool bVar2;
  EDS_ItemSlotStateType EVar3;
  FWeakObjectPtr FVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UDS_M_ItemImplBase *this_00;
  FWeakObjectPtr *pFVar7;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar8;
  FWeakObjectPtr FVar9;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_28;
  FWeakObjectPtr local_20;
  
  local_res10 = param_1.WeakPtr;
  FVar4 = (FWeakObjectPtr)FWeakObjectPtr::Get(&local_res10);
  FVar9.ObjectIndex = 0;
  FVar9.ObjectSerialNumber = 0;
  if (FVar4 == (FWeakObjectPtr)0x0) {
LAB_14bd12a7d:
    FVar4 = FVar9;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)((longlong)FVar4 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14bd12a7d;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar4);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_res18 = FVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar4);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar2) {
    FVar4 = (FWeakObjectPtr)FWeakObjectPtr::Get(&local_res10);
    if (FVar4 != (FWeakObjectPtr)0x0) {
      pUVar5 = Z_Construct_UClass_UDS_ModelEventItemList_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)((longlong)FVar4 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)((longlong)FVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) goto LAB_14bd12c71;
    }
    FVar4 = FVar9;
LAB_14bd12c71:
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FWeakObjectPtr)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar4);
    }
    local_28.ObjectIndex = 0;
    local_28.ObjectSerialNumber = 0;
    local_res18 = FVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FWeakObjectPtr)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar4);
    }
    FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_res18);
    bVar2 = FWeakObjectPtr::IsValid(&local_28);
    if (!bVar2) {
      TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
      ::Broadcast((TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                   *)&this->_padding_,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res10
                 );
      return;
    }
    FWeakObjectPtr::Get(&local_28);
    TVar8 = DS_ItemDataUtil::GetItemDataByUID((long64)&local_res18);
                    /* WARNING: Load size is inaccurate */
    OnClickedInventoryBagItem(this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*TVar8.WeakPtr);
    return;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res20);
  FVar4 = (FWeakObjectPtr)FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar6 + 1));
  if (FVar4 == (FWeakObjectPtr)0x0) {
LAB_14bd12b13:
    FVar4 = FVar9;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)((longlong)FVar4 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14bd12b13;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar4);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_20 = FVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar4);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) {
    return;
  }
  this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_res18);
  EVar3 = UDS_M_ItemImplBase::GetItemSlotType(this_00);
  pUVar6 = FWeakObjectPtr::Get(&local_res20);
  iVar1 = *(int *)&pUVar6[5].field_0x8;
  if (iVar1 != 2) {
    if (iVar1 == 6) {
      return;
    }
    if (iVar1 == 7) {
      if ((EVar3 != ItemDismantle) && (EVar3 != ItemDismantleTarget)) {
        return;
      }
      pUVar6 = FWeakObjectPtr::Get(&local_res18);
      pFVar7 = (FWeakObjectPtr *)(**(code **)(*(longlong *)pUVar6 + 0x3a0))(pUVar6,&local_20);
      OnClickedInventoryBagItem(this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*pFVar7);
      return;
    }
    if (iVar1 != 0xb) {
      return;
    }
    if (EVar3 == ItemDismantle) goto LAB_14bd12c05;
  }
  if (EVar3 != ItemDismantleTarget) {
    return;
  }
LAB_14bd12c05:
  pUVar6 = FWeakObjectPtr::Get(&local_res18);
  pFVar7 = (FWeakObjectPtr *)(**(code **)(*(longlong *)pUVar6 + 0x3a0))(pUVar6,&local_20);
  OnClickedInventoryBagItemSubtract(this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*pFVar7);
  return;
}

// PreInitBindViewModel @ 14bd15ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_M_ItemDismantle::PreInitBindViewModel(UDS_M_ItemDismantle *this)

{
  int *piVar1;
  TArray<EDS_GradeType,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  UDS_M_InventoryBag *pUVar8;
  FDS_DataContainer *pFVar9;
  UObject *pUVar10;
  FName *pFVar11;
  char *pcVar12;
  UObject *this_00;
  UFunction *pUVar13;
  char *pcVar14;
  undefined1 auStackY_2b8 [32];
  FScriptContainerElement local_268;
  FScriptContainerElement local_267;
  FScriptContainerElement local_266;
  FScriptContainerElement local_265;
  <lambda_1> local_264 [4];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_260;
  FWeakObjectPtr local_258;
  FName local_250;
  FWeakObjectPtr local_248;
  FName local_240;
  UDS_M_InventoryBag *local_238;
  UDS_M_ItemList *local_230;
  FName local_228;
  UDS_M_ItemDismantle *local_220;
  FName *local_218;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_210;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_1f8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_1e0;
  FDestructionSentinel local_1d0;
  FName local_1b8;
  FReadAccessScope local_1b0;
  FReadAccessScope local_198;
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
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  pTVar2 = &this->GradeFilterList;
  piVar1 = &(this->GradeFilterList).ArrayMax;
  (this->GradeFilterList).ArrayNum = 0;
  iVar7 = 0;
  if ((this->GradeFilterList).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar2->AllocatorInstance,0,piVar1);
    iVar7 = *piVar1;
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_268 = (FScriptContainerElement)0x2;
  if (((pFVar3 <= &local_268) && (&local_268 < pFVar3 + iVar7)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->GradeFilterList).ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->GradeFilterList).ArrayNum = iVar7 + 1;
  local_267 = (FScriptContainerElement)0x3;
  (pTVar2->AllocatorInstance).Data[iVar7] = local_268;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= &local_267) && (&local_267 < pFVar3 + *piVar1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->GradeFilterList).ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->GradeFilterList).ArrayNum = iVar7 + 1;
  local_266 = (FScriptContainerElement)0x4;
  (pTVar2->AllocatorInstance).Data[iVar7] = local_267;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= &local_266) && (&local_266 < pFVar3 + *piVar1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->GradeFilterList).ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->GradeFilterList).ArrayNum = iVar7 + 1;
  local_265 = (FScriptContainerElement)0x5;
  (pTVar2->AllocatorInstance).Data[iVar7] = local_266;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= &local_265) && (&local_265 < pFVar3 + *piVar1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->GradeFilterList).ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->GradeFilterList).ArrayNum = iVar7 + 1;
  (pTVar2->AllocatorInstance).Data[iVar7] = local_265;
  pUVar8 = NewObject<UDS_M_InventoryBag>((UObject *)this);
  UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,(UDS_ModelBase *)pUVar8);
  local_238 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_M_InventoryBag *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  FWeakObjectPtr::operator=(&(this->InventoryBagModel).WeakPtr,(FObjectPtr)&local_238);
  local_230 = UDS_ModelBase::AddChildModel1<UDS_M_ItemList>((UDS_ModelBase *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_230 != (UDS_M_ItemList *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_230);
  }
  FWeakObjectPtr::operator=(&(this->ItemListModel).WeakPtr,(FObjectPtr)&local_230);
  bVar6 = FWeakObjectPtr::IsValid(&(this->InventoryBagModel).WeakPtr);
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7537242845099327526>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                       ,0x26,"false");
    if (!bVar6) {
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
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
            ((FDS_DataContainer *)local_d8,BagGroupType,ItemDismantle);
  pUVar8 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&(this->InventoryBagModel).WeakPtr);
  local_210._16_8_ = 0;
  local_210._0_8_ = 0;
  local_210._8_8_ = 0;
  local_1f8._16_8_ = 0;
  local_1f8._0_8_ = 0;
  local_1f8._8_8_ = 0;
  pFVar9 = FDS_DataContainer::FDS_DataContainer(&local_180,(FDS_DataContainer *)local_d8);
  UDS_M_InventoryBag::InitModel(pUVar8,pFVar9,&local_1f8,&local_210);
  bVar6 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7537242845099327531>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                       ,0x2b,"false");
    if (bVar6) {
code_r0x00014bd1601b:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    goto LAB_14bd161e4;
  }
  pUVar10 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
  pFVar11 = ::FName::FName(&local_1b8,L"DS_VM_ItemList_1");
  uVar5 = pFVar11->Number;
  *(uint *)&pUVar10[9].field_0x10 = (pFVar11->ComparisonIndex).Value;
  *(uint *)&pUVar10[9].field_0x14 = uVar5;
  FDS_DataContainer::SetData<int,enum_EDS_ItemDismantleData>
            ((FDS_DataContainer *)&this->_padding_,Filter,0);
  *(undefined1 *)&this->_padding_ = 1;
  DS_ItemDataUtil::GetItemDataSet();
  bVar6 = FWeakObjectPtr::IsValid(&local_248);
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7537242845099327537>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                       ,0x31,"false");
    if (bVar6) goto code_r0x00014bd1601b;
    goto LAB_14bd161e4;
  }
  pUVar10 = FWeakObjectPtr::Get(&local_248);
  pcVar12 = strstr("&UDS_M_ItemDismantle::OnChangedItemDataSet","::");
  if (pcVar12 == (char *)0x0) {
LAB_14bd1607d:
    pcVar14 = &DAT_00000002;
LAB_14bd16082:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    do {
      pcVar14 = pcVar12;
      pcVar12 = strstr(pcVar14 + 1,"::");
    } while (pcVar12 != (char *)0x0);
    if (pcVar14 == (char *)0x0) goto LAB_14bd1607d;
    pcVar14 = pcVar14 + 2;
    if (*pcVar14 == '0') goto LAB_14bd16082;
  }
  ::FName::FName(&local_228,pcVar14);
  local_220 = this;
  if (this == (UDS_M_ItemDismantle *)0x0) {
    local_220 = (UDS_M_ItemDismantle *)0x0;
  }
  local_260.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_258.ObjectIndex = 0;
  local_258.ObjectSerialNumber = 0;
  local_250.ComparisonIndex.Value = 0;
  local_250.Number = 0;
  local_240 = local_228;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_220 != (UDS_M_ItemDismantle *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_220);
  }
  FWeakObjectPtr::operator=(&local_258,(FObjectPtr)&local_220);
  local_250 = local_240;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_260,&local_1b0);
  if ((local_250 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_258), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1b0);
LAB_14bd16162:
    local_218 = &local_240;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
    __Internal_BindDynamic<UDS_M_ItemDismantle>'::__l2::<lambda_1>::operator()(&local_218);
  }
  else {
    pUVar13 = UObject::FindFunction(this_00,local_250);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1b0);
    if (pUVar13 == (UFunction *)0x0) goto LAB_14bd16162;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_260,&local_198);
  local_1e0.Object = local_258;
  local_1e0.FunctionName = local_250;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_198);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar10 + 1),
             (FWriteAccessScope *)&local_1d0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar10[1].field_0x8,&local_1e0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar10[1].field_0x8,local_264,Default);
  if (local_1d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d0.Accessor,&local_1d0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_260.AccessDetector);
LAB_14bd161e4:
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar7 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar7 != 0) {
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
  iVar7 = SUB84(local_d8._8_8_,4);
  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  if (iVar7 != 0) {
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
  return;
}

// Reset @ 14bd1c310

void __thiscall UDS_M_ItemDismantle::Reset(UDS_M_ItemDismantle *this)

{
  undefined1 *puVar1;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->QuantityDataMap;
  bVar3 = 1 < *(int *)&(this->QuantityDataMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
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
  iVar2 = *(int *)&(this->QuantityDataMap).field_0x2c;
  *(undefined4 *)&(this->QuantityDataMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->QuantityDataMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->QuantityDataMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->QuantityDataMap).field_0x48 = 1;
    TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  UpdateItemList(this);
  return;
}

// SetFilter @ 14bd1f320

void __thiscall
UDS_M_ItemDismantle::SetFilter(UDS_M_ItemDismantle *this,EDS_ItemDismantleFilter param_1)

{
  FDS_DataContainer::SetData<int,enum_EDS_ItemDismantleData>
            ((FDS_DataContainer *)&this->_padding_,Filter,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// SetGradeFilter @ 14bd1fc80

void __thiscall UDS_M_ItemDismantle::SetGradeFilter(UDS_M_ItemDismantle *this,EDS_GradeType param_1)

{
  FDS_DataContainer::SetData<int,enum_EDS_ItemDismantleData>
            ((FDS_DataContainer *)&this->_padding_,SelectedFilterGrade,(uint)param_1);
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// SetNpcEntityID @ 14bd20330

void __thiscall UDS_M_ItemDismantle::SetNpcEntityID(UDS_M_ItemDismantle *this,ulong64 param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%llu");
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemDismantleData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemDismantleData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateItemList @ 14bd28150

void __thiscall UDS_M_ItemDismantle::UpdateItemList(UDS_M_ItemDismantle *this)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  UDS_M_ItemList *this_00;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *pTVar5;
  UDS_M_InventoryBag *this_01;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *pTVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_188;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_178;
  longlong *local_168;
  undefined1 auStack_160 [16];
  uint uStack_150;
  uint uStack_14c;
  longlong local_148;
  TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
  *pTStack_140;
  TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
  *local_138;
  char local_130;
  char cStack_12f;
  undefined8 local_128;
  undefined1 local_120 [32];
  longlong local_100;
  TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
  *pTStack_f8;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  local_f0;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  local_a0;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (bVar2) {
    bVar2 = FWeakObjectPtr::IsValid(&(this->InventoryBagModel).WeakPtr);
    if (bVar2) {
      pTVar6 = &this->QuantityDataMap;
      TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_120,
                 (TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
                  *)pTVar6);
      local_130 = '\0';
      cStack_12f = '\0';
      stack0xfffffffffffffea8 = local_120._16_16_;
      local_168 = (longlong *)local_120._0_8_;
      auStack_160._0_8_ = local_120._8_8_;
      local_148 = local_100;
      pTStack_140 = pTStack_f8;
      uVar7 = local_120._24_8_ >> 0x20;
      uVar9 = local_120._28_4_;
      local_138 = (TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
                   *)pTVar6;
      if ((int)uVar9 < *(int *)(local_120._16_8_ + 0x18)) {
        do {
          pUVar4 = *(UObject **)(*local_168 + 8 + (longlong)(int)uVar7 * 0x18);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar4 != (UObject *)0x0) {
              UE::GC::MarkAsReachable(pUVar4);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar4);
            }
          }
          local_res8.ObjectIndex = 0;
          local_res8.ObjectSerialNumber = 0;
          local_res20 = pUVar4;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
          local_res18 = local_res8;
          bVar2 = FWeakObjectPtr::IsValid(&local_res18);
          if (((!bVar2) ||
              (pUVar4 = FWeakObjectPtr::Get(&local_res18), *(longlong *)(pUVar4 + 1) < 1)) ||
             (iVar3 = (**(code **)(*(longlong *)pUVar4 + 0x2f8))(pUVar4), iVar3 < 1)) {
            TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_140,uVar9);
            local_130 = '\x01';
          }
          uStack_150 = uStack_150 & ~auStack_160._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_160);
          uVar7 = (ulonglong)uStack_14c;
          uVar9 = uStack_14c;
        } while ((int)uStack_14c < *(int *)(auStack_160._8_8_ + 0x18));
        if ((local_130 != '\0') && (cStack_12f != '\0')) {
          uVar9 = *(int *)&(local_138->Elements).field_0x8 -
                  *(int *)&(local_138->Elements).field_0x34;
          if (uVar9 < 4) {
            iVar3 = 1;
          }
          else {
            uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
            lVar8 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            iVar3 = 1 << ((byte)lVar8 & 0x1f);
          }
          if (((0 < (int)uVar9) && (local_138->HashSize < iVar3)) || (iVar3 < local_138->HashSize))
          {
            local_138->HashSize = iVar3;
            TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
            ::Rehash(local_138);
          }
        }
      }
      local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.ArrayNum = 0;
      local_178.ArrayMax = 0;
      TMapBase<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
      ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
                  *)pTVar6,&local_178);
      this_00 = (UDS_M_ItemList *)FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
      pTVar5 = TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
               ::
               TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
                         (&local_f0,pTVar6);
      UDS_M_ItemList::SetQuantityList(this_00,pTVar5);
      pUVar4 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
      _Src.Data = local_178.AllocatorInstance.Data;
      lVar8 = (longlong)local_178.ArrayNum;
      local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188.ArrayNum = local_178.ArrayNum;
      if (local_178.ArrayNum == 0) {
        local_188.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_178.ArrayNum,0,&local_188.AllocatorInstance,local_178.ArrayNum,
                   &local_188.ArrayMax);
        memcpy(local_188.AllocatorInstance.Data,_Src.Data,lVar8 << 3);
      }
      FDS_DataContainer::SetData<enum_EDS_SortingType,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,SortType,Equip);
      FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,Generation,true);
      pUVar4[5].field_0x18 = 1;
      FDS_DataContainer::SetData<enum_EDS_FilterType,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,FilterType,None);
      FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,Generation,true);
      pUVar4[5].field_0x18 = 1;
      FDS_DataContainer::SetData<enum_EDS_ItemSlotStateType,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,SlotType,ItemDismantleTarget);
      FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,Generation,true);
      pUVar4[5].field_0x18 = 1;
      FDS_DataContainer::SetData<enum_EDS_SortOrder,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,SortOrderType,Descend);
      FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,Generation,true);
      pUVar4[5].field_0x18 = 1;
      FDS_DataContainer::SetData<enum_EDS_ItemListType,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,ListType,Custom);
      FDS_DataContainer::SetListData<__int64,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,ItemUIDList,&local_188);
      (**(code **)(*(longlong *)pUVar4 + 800))(pUVar4);
      if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.AllocatorInstance.Data);
      }
      this_01 = (UDS_M_InventoryBag *)FWeakObjectPtr::Get(&(this->InventoryBagModel).WeakPtr);
      pTVar6 = TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
               ::
               TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
                         (&local_a0,pTVar6);
      if (&this_01->QuantityList != pTVar6) {
        UE::Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)&(this_01->QuantityList).field_0x38,
                   (int *)&(this_01->QuantityList).field_0x48,
                   (ForElementType<FSetElementId> *)&pTVar6->field_0x38,*(int *)&pTVar6->field_0x48)
        ;
        TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this_01->QuantityList,
                    (TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)pTVar6);
      }
      UDS_M_InventoryBag::ResetQuantityList(this_01);
      *(undefined4 *)&pTVar6->field_0x48 = 0;
      if (*(void **)&pTVar6->field_0x40 != (void *)0x0) {
        FMemory::Free(*(void **)&pTVar6->field_0x40);
      }
      TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)pTVar6);
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_128 = 0;
      pcVar1 = *(code **)(this->_padding_ + 0x2e0);
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_128);
      (*pcVar1)(this,local_res10,1);
      if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.AllocatorInstance.Data);
      }
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7537242845099327671>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                         ,0xb7,"false");
      if (bVar2) goto code_r0x00014bd281f4;
    }
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7537242845099327670>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDismantle.cpp"
                     ,0xb6,"false");
  if (!bVar2) {
    return;
  }
code_r0x00014bd281f4:
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

