// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 47

// StaticClass @ 14b51b5d0

UClass * __cdecl UDS_M_ItemList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemList",
               &Z_Registration_Info_UClass_UDS_M_ItemList.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemList,0x2a8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_M_ItemList>,InternalVTableHelperCtorCaller<UDS_M_ItemList>,
               local_res8,UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemList.InnerSingleton;
}

// UDS_M_ItemList @ 14b521b90

UDS_M_ItemList * __thiscall
UDS_M_ItemList::UDS_M_ItemList(UDS_M_ItemList *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_ItemList__6B_;
  (this->FilterModel).field0_0x0.DebugPtr = (UDS_M_Filter *)0x0;
  *(undefined8 *)&this->ItemModelPools = 0;
  *(undefined8 *)&(this->ItemModelPools).field_0x8 = 0;
  *(undefined8 *)&(this->ItemModelPools).field_0x20 = 0;
  *(undefined4 *)&(this->ItemModelPools).field_0x28 = 0;
  *(undefined4 *)&(this->ItemModelPools).field_0x2c = 0x80;
  *(undefined4 *)&(this->ItemModelPools).field_0x34 = 0;
  *(undefined4 *)&(this->ItemModelPools).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ItemModelPools).field_0x40 = 0;
  *(undefined4 *)&(this->ItemModelPools).field_0x48 = 0;
  (this->UsedItemModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedItemModelList).ArrayNum = 0;
  (this->UsedItemModelList).ArrayMax = 0;
  *(undefined8 *)&this->QuantityList = 0;
  *(undefined8 *)&(this->QuantityList).field_0x8 = 0;
  *(undefined8 *)&(this->QuantityList).field_0x20 = 0;
  *(undefined4 *)&(this->QuantityList).field_0x28 = 0;
  *(undefined4 *)&(this->QuantityList).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuantityList).field_0x34 = 0;
  *(undefined4 *)&(this->QuantityList).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->QuantityList).field_0x40 = 0;
  *(undefined4 *)&(this->QuantityList).field_0x48 = 0;
  *(undefined8 *)&this->OnUpdateModelDelegate = 0;
  *(undefined8 *)&(this->OnUpdateModelDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnUpdateModelDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnCustomFilterDelegate = 0;
  *(undefined8 *)&(this->OnCustomFilterDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnCustomFilterDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnCustomSlotUpdateDelegate = 0;
  *(undefined8 *)&(this->OnCustomSlotUpdateDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnCustomSlotUpdateDelegate).field_0x10 = 0;
  return this;
}

// UDS_M_ItemList @ 14b521c90

UDS_M_ItemList * __thiscall
UDS_M_ItemList::UDS_M_ItemList(UDS_M_ItemList *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_ItemList__6B_;
  (this->FilterModel).field0_0x0.DebugPtr = (UDS_M_Filter *)0x0;
  *(undefined8 *)&this->ItemModelPools = 0;
  *(undefined8 *)&(this->ItemModelPools).field_0x8 = 0;
  *(undefined8 *)&(this->ItemModelPools).field_0x20 = 0;
  *(undefined4 *)&(this->ItemModelPools).field_0x28 = 0;
  *(undefined4 *)&(this->ItemModelPools).field_0x2c = 0x80;
  *(undefined4 *)&(this->ItemModelPools).field_0x34 = 0;
  *(undefined4 *)&(this->ItemModelPools).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ItemModelPools).field_0x40 = 0;
  *(undefined4 *)&(this->ItemModelPools).field_0x48 = 0;
  (this->UsedItemModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedItemModelList).ArrayNum = 0;
  (this->UsedItemModelList).ArrayMax = 0;
  *(undefined8 *)&this->QuantityList = 0;
  *(undefined8 *)&(this->QuantityList).field_0x8 = 0;
  *(undefined8 *)&(this->QuantityList).field_0x20 = 0;
  *(undefined4 *)&(this->QuantityList).field_0x28 = 0;
  *(undefined4 *)&(this->QuantityList).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuantityList).field_0x34 = 0;
  *(undefined4 *)&(this->QuantityList).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->QuantityList).field_0x40 = 0;
  *(undefined4 *)&(this->QuantityList).field_0x48 = 0;
  *(undefined8 *)&this->OnUpdateModelDelegate = 0;
  *(undefined8 *)&(this->OnUpdateModelDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnUpdateModelDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnCustomFilterDelegate = 0;
  *(undefined8 *)&(this->OnCustomFilterDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnCustomFilterDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnCustomSlotUpdateDelegate = 0;
  *(undefined8 *)&(this->OnCustomSlotUpdateDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnCustomSlotUpdateDelegate).field_0x10 = 0;
  return this;
}

// ~UDS_M_ItemList @ 14b5232f0

void __thiscall UDS_M_ItemList::~UDS_M_ItemList(UDS_M_ItemList *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_M_ItemList__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCustomSlotUpdateDelegate);
  pvVar1 = *(void **)&(this->OnCustomSlotUpdateDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCustomSlotUpdateDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCustomFilterDelegate);
  pvVar1 = *(void **)&(this->OnCustomFilterDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCustomFilterDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUpdateModelDelegate);
  pvVar1 = *(void **)&(this->OnUpdateModelDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateModelDelegate);
  *(undefined4 *)&(this->QuantityList).field_0x48 = 0;
  pvVar1 = *(void **)&(this->QuantityList).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->QuantityList);
  pFVar2 = (this->UsedItemModelList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ItemModelPools).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ItemModelPools).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemSlotStateType,TObjectPtr<UDS_ObjectPool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemSlotStateType,TObjectPtr<UDS_ObjectPool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ItemModelPools);
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5260a0

UClass * __cdecl UDS_M_ItemList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemList",
               &Z_Registration_Info_UClass_UDS_M_ItemList.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemList,0x2a8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_M_ItemList>,InternalVTableHelperCtorCaller<UDS_M_ItemList>,
               local_res8,UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemList.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemList @ 14b5274f0

void __cdecl UDS_M_ItemList::StaticRegisterNativesUDS_M_ItemList(void)

{
  return;
}

// GenerateItemDataList @ 14bcf3c30

void __thiscall UDS_M_ItemList::GenerateItemDataList(UDS_M_ItemList *this)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  UEnum *this_00;
  FName *pFVar5;
  long64 lVar6;
  int iVar7;
  wchar_t *pwVar8;
  int local_res8 [2];
  FName local_res10;
  FString local_28;
  
  FVar3 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemListData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemListData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar8);
  this_00 = StaticEnum<enum_EDS_ItemListType>();
  iVar7 = local_res8[0];
  if (this_00 != (UEnum *)0x0) {
    iVar7 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_res10,iVar7,(wchar_t *)local_28.Data.AllocatorInstance.Data,
                            FNAME_Add);
    lVar6 = UEnum::GetValueByName(this_00,*pFVar5,None);
    iVar7 = (int)lVar6;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (iVar7 == 0) {
    (**(code **)(this->_padding_ + 0x330))(this);
  }
  else if (iVar7 == 1) {
    (**(code **)(this->_padding_ + 0x338))(this);
  }
  else if (iVar7 == 2) {
    (**(code **)(this->_padding_ + 0x328))(this);
  }
  (**(code **)(this->_padding_ + 0x350))(this,1);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Generation,false);
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// GenerateItemDataListByList @ 14bcf3db0

void __thiscall UDS_M_ItemList::GenerateItemDataListByList(UDS_M_ItemList *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FWeakObjectPtr local_98;
  FWeakObjectPtr local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_48;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_38;
  
  bVar3 = FDS_DataContainer::IsListData<enum_EDS_ItemListData>
                    ((FDS_DataContainer *)&this->_padding_,ItemUIDList);
  if (bVar3) {
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    FDS_DataContainer::GetListData<__int64,enum_EDS_ItemListData>
              ((FDS_DataContainer *)&this->_padding_,&local_48,ItemUIDList);
    iVar5 = local_48.ArrayNum;
    pFVar1 = local_48.AllocatorInstance.Data + (longlong)iVar5 * 8;
    FVar6.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      if (local_48.ArrayNum != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<__int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar6.Data == pFVar1) break;
      DS_ItemDataUtil::GetItemDataByUID((long64)&local_98);
      bVar3 = FWeakObjectPtr::IsValid(&local_98);
      if (bVar3) {
        if (((local_88.Data <= &local_98) &&
            (&local_98 < (FWeakObjectPtr *)(local_88.Data + (longlong)local_80._4_4_ * 8))) &&
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
        iVar4 = (int)local_80;
        if ((int)local_80 == local_80._4_4_) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_88,(int *)((longlong)&local_80 + 4));
        }
        local_80 = CONCAT44(local_80._4_4_,iVar4 + 1);
        *(FWeakObjectPtr *)(local_88.Data + (longlong)iVar4 * 8) = local_98;
      }
      FVar6.Data = FVar6.Data + 8;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    FVar6.Data = local_88.Data;
    lVar7 = (longlong)(int)local_80;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = (int)local_80;
    pcVar2 = *(code **)(this->_padding_ + 0x348);
    if ((int)local_80 == 0) {
      local_5c = 0;
      (*pcVar2)(this,&local_68);
      FVar6.Data = local_88.Data;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,(int)local_80,0,&local_68,(int)local_80,&local_5c);
      memcpy(local_68.Data,FVar6.Data,lVar7 << 3);
      (*pcVar2)(this,&local_68);
      FVar6.Data = local_88.Data;
    }
  }
  else {
    bVar3 = FDS_DataContainer::IsListData<enum_EDS_ItemListData>
                      ((FDS_DataContainer *)&this->_padding_,ItemTIDList);
    if (!bVar3) {
      return;
    }
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = 0;
    FDS_DataContainer::GetListData<__int64,enum_EDS_ItemListData>
              ((FDS_DataContainer *)&this->_padding_,&local_38,ItemTIDList);
    iVar5 = local_38.ArrayNum;
    pFVar1 = local_38.AllocatorInstance.Data + (longlong)iVar5 * 8;
    FVar6.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if (local_38.ArrayNum != iVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<__int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar6.Data == pFVar1) break;
      local_90 = (FWeakObjectPtr)FDS_ItemBaseTableRow::Get((longlong)*(int *)FVar6.Data,true);
      if (local_90 != (FWeakObjectPtr)0x0) {
        if (((local_78.Data <= &local_90) &&
            (&local_90 < (FWeakObjectPtr *)(local_78.Data + (longlong)local_70._4_4_ * 8))) &&
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
        iVar4 = (int)local_70;
        if ((int)local_70 == local_70._4_4_) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_78,(int *)((longlong)&local_70 + 4));
        }
        local_70 = CONCAT44(local_70._4_4_,iVar4 + 1);
        *(FWeakObjectPtr *)(local_78.Data + (longlong)iVar4 * 8) = local_90;
      }
      FVar6.Data = FVar6.Data + 8;
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    FVar6.Data = local_78.Data;
    lVar7 = (longlong)(int)local_70;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = (int)local_70;
    pcVar2 = *(code **)(this->_padding_ + 0x340);
    if ((int)local_70 == 0) {
      local_4c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(int)local_70,0,&local_58,(int)local_70,&local_4c);
      memcpy(local_58.Data,FVar6.Data,lVar7 << 3);
    }
    (*pcVar2)(this,&local_58);
    FVar6.Data = local_78.Data;
  }
  if ((FWeakObjectPtr *)FVar6.Data != (FWeakObjectPtr *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  return;
}

// GenerateItemDataListByTID @ 14bcf4140

void __thiscall UDS_M_ItemList::GenerateItemDataListByTID(UDS_M_ItemList *this)

{
  code *pcVar1;
  ForAnyElementType _Src;
  EDS_FilterType EVar2;
  bool bVar3;
  EDS_SortingType EVar4;
  EDS_SortOrder EVar5;
  TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_28;
  TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  pTVar6 = FDS_ItemBaseTableRow::GetAll(&local_18);
  local_28.AllocatorInstance.Data = (pTVar6->AllocatorInstance).Data;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = pTVar6->ArrayNum;
  local_28.ArrayMax = pTVar6->ArrayMax;
  pTVar6->ArrayNum = 0;
  pTVar6->ArrayMax = 0;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  EVar2 = FDS_DataContainer::GetData<enum_EDS_FilterType,enum_EDS_ItemListData>
                    ((FDS_DataContainer *)&this->_padding_,FilterType);
  DS_ItemDataUtil::Filter(&local_28,EVar2);
  bVar3 = FDS_DataContainer::IsData<enum_EDS_ItemListData>
                    ((FDS_DataContainer *)&this->_padding_,SortType);
  if (bVar3) {
    EVar5 = GetSortOrderType(this);
    EVar4 = GetSortType(this);
    DS_ItemDataUtil::Sort(&local_28,EVar4,EVar5);
  }
  _Src.Data = local_28.AllocatorInstance.Data;
  lVar7 = (longlong)local_28.ArrayNum;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = local_28.ArrayNum;
  pcVar1 = *(code **)(this->_padding_ + 0x340);
  if (local_28.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_28.ArrayNum,0,&local_18.AllocatorInstance,local_28.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src.Data,lVar7 << 3);
  }
  (*pcVar1)(this,&local_18);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// GenerateItemDataListByUID @ 14bcf4290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_M_ItemList::GenerateItemDataListByUID(UDS_M_ItemList *this)

{
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *this_00;
  undefined8 uVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  ForAnyElementType _Src;
  bool bVar4;
  EDS_InventoryType EVar5;
  char cVar6;
  EDS_FilterType EVar7;
  bool bVar8;
  EDS_SortingType EVar9;
  uint uVar10;
  EDS_SortOrder EVar11;
  FName FVar12;
  FString *pFVar13;
  TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> this_01;
  UDS_ItemDataSet *this_02;
  TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar14;
  UClass *pUVar15;
  UDS_M_Filter *pUVar16;
  UObject *pUVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  FDS_DataContainer *this_03;
  wchar_t *_Str;
  undefined1 auStackY_1d8 [32];
  TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_190;
  FWeakObjectPtr local_180;
  UObject *local_178;
  ForAnyElementType local_170;
  int local_168;
  int local_164;
  FWeakObjectPtr local_160;
  FWeakObjectPtr local_158;
  UDS_M_Filter *local_150;
  FDS_DataContainer *local_148;
  FWeakObjectPtr local_140;
  FWeakObjectPtr local_138;
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_118;
  FReadAccessScope local_108;
  FReadAccessScope local_f0;
  FReadAccessScope local_d8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  plVar18 = &this->_padding_;
  local_170.Data = (FScriptContainerElement *)this;
  local_148 = (FDS_DataContainer *)plVar18;
  bVar4 = FDS_DataContainer::IsData<enum_EDS_ItemListData>
                    ((FDS_DataContainer *)plVar18,SelectedCharID);
  if (bVar4) {
    FVar12 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemListData>
                       ((FDS_DataContainer *)plVar18,(EDS_ItemListData)local_130);
    uVar1 = *(undefined8 *)FVar12;
    uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar13 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)plVar18,uVar10 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar12);
    if ((pFVar13->Data).ArrayNum == 0) {
      local_160.ObjectIndex = _wtoi(L"");
    }
    else {
      local_160.ObjectIndex = _wtoi((wchar_t *)(pFVar13->Data).AllocatorInstance.Data);
    }
  }
  else {
    local_160.ObjectIndex = UDS_PlayerData::GetMainPlayerCurrentCharID();
  }
  iVar24 = 0;
  local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ArrayNum = 0;
  local_190.ArrayMax = 0;
  this_01 = TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)local_128);
  local_178 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_178 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_178);
  }
  local_158.ObjectIndex = 0;
  local_158.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_178 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_178);
  }
  FWeakObjectPtr::operator=(&local_158,(FObjectPtr)&local_178);
  bVar4 = FWeakObjectPtr::IsValid(&local_158);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7509389084536602238>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemList.cpp"
                       ,0x182,"false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    goto LAB_14bcf49e2;
  }
  this_02 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_158);
  EVar5 = FDS_DataContainer::GetData<enum_EDS_InventoryType,enum_EDS_ItemListData>
                    ((FDS_DataContainer *)plVar18,InventoryType);
  pTVar14 = UDS_ItemDataSet::GetItemDataList(this_02,&local_118,EVar5);
  if (&local_190 != pTVar14) {
    if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.AllocatorInstance.Data);
    }
    local_190.AllocatorInstance.Data = (pTVar14->AllocatorInstance).Data;
    (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_190.ArrayNum = pTVar14->ArrayNum;
    local_190.ArrayMax = pTVar14->ArrayMax;
    pTVar14->ArrayNum = 0;
    pTVar14->ArrayMax = 0;
  }
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  this_00 = &this->OnCustomFilterDelegate;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_108);
  if (((*(int *)&(this->OnCustomFilterDelegate).field_0x10 == 0) ||
      (plVar18 = *(longlong **)&(this->OnCustomFilterDelegate).field_0x8, plVar18 == (longlong *)0x0
      )) || (cVar6 = (**(code **)(*plVar18 + 0x38))(), cVar6 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_108);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_108);
    FVar3.Data = local_190.AllocatorInstance.Data;
    lVar22 = (longlong)local_190.ArrayNum;
    if (local_190.ArrayNum != 0) {
      local_180 = (FWeakObjectPtr)((ulonglong)local_180 & 0xffffffff00000000);
      iVar21 = 0;
      uVar1 = *(undefined8 *)local_190.AllocatorInstance.Data;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_f0);
      if (*(int *)&(this->OnCustomFilterDelegate).field_0x10 == 0) {
        plVar18 = (longlong *)0x0;
      }
      else {
        plVar18 = *(longlong **)&(this->OnCustomFilterDelegate).field_0x8;
      }
      cVar6 = (**(code **)(*plVar18 + 0x60))(plVar18,uVar1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_f0);
      bVar4 = cVar6 == '\0';
      lVar23 = 0;
      do {
        lVar23 = lVar23 + 1;
        iVar19 = iVar21 + 1;
        local_178 = (UObject *)CONCAT44(local_178._4_4_,iVar21);
        iVar20 = iVar21;
        if (lVar23 < lVar22) {
          do {
            uVar1 = *(undefined8 *)(FVar3.Data + lVar23 * 8);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_d8);
            if (*(int *)&(this->OnCustomFilterDelegate).field_0x10 == 0) {
              plVar18 = (longlong *)0x0;
            }
            else {
              plVar18 = *(longlong **)&(this->OnCustomFilterDelegate).field_0x8;
            }
            cVar6 = (**(code **)(*plVar18 + 0x60))(plVar18,uVar1);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_d8);
            if (bVar4 != (cVar6 == '\0')) break;
            iVar19 = iVar19 + 1;
            lVar23 = lVar23 + 1;
          } while (lVar23 < lVar22);
          iVar20 = (int)local_178;
          iVar24 = local_180.ObjectIndex;
        }
        iVar21 = iVar19;
        if (bVar4 != false) {
          if (iVar24 != iVar20) {
            memmove(FVar3.Data + (longlong)iVar24 * 8,FVar3.Data + (longlong)iVar20 * 8,
                    (longlong)(iVar21 - iVar20) << 3);
          }
          iVar24 = iVar24 + (iVar21 - iVar20);
          local_180.ObjectIndex = iVar24;
        }
        bVar4 = (bool)(bVar4 ^ 1);
      } while (lVar23 < lVar22);
      local_190.ArrayNum = iVar24;
      this = (UDS_M_ItemList *)local_170.Data;
    }
  }
  _Str = L"";
  pUVar16 = (this->FilterModel).field0_0x0.DebugPtr;
  if (pUVar16 == (UDS_M_Filter *)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar15 = Z_Construct_UClass_UDS_M_Filter_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar15);
    local_b8._8_8_ = this;
    pUVar16 = (UDS_M_Filter *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar18 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar18 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UDS_M_Filter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar16);
    }
    (this->FilterModel).field0_0x0.DebugPtr = pUVar16;
  }
  this_03 = local_148;
  EVar7 = FDS_DataContainer::GetData<enum_EDS_FilterType,enum_EDS_ItemListData>
                    (local_148,FilterType);
  if (pUVar16->FilterType != EVar7) {
    pUVar16->FilterType = EVar7;
    (**(code **)(pUVar16->_padding_ + 0x2d8))(pUVar16);
  }
  if (0 < local_160.ObjectIndex) {
    FDS_DataContainer::SetData<int,enum_EDS_ItemFilterData>
              ((FDS_DataContainer *)&((this->FilterModel).field0_0x0.DebugPtr)->_padding_,CharId,
               local_160.ObjectIndex);
  }
  pUVar16 = (this->FilterModel).field0_0x0.DebugPtr;
  FVar12 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemFilterData>
                     (this_03,(EDS_ItemFilterData)local_120);
  uVar1 = *(undefined8 *)FVar12;
  uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar13 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)this_03,uVar10 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar12);
  if ((pFVar13->Data).ArrayNum != 0) {
    _Str = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  iVar24 = _wtoi(_Str);
  FDS_DataContainer::SetData<int,enum_EDS_ItemFilterData>
            ((FDS_DataContainer *)&pUVar16->_padding_,SeasonGroup,iVar24);
  local_150 = (this->FilterModel).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_150 != (UDS_M_Filter *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_150);
  }
  DS_ItemDataUtil::Filter(&local_190,(TObjectPtr<UDS_M_Filter>)&local_150);
  bVar4 = FDS_DataContainer::IsListData<enum_EDS_ItemListData>(this_03,FilteredItem);
  FVar3.Data = local_190.AllocatorInstance.Data;
  iVar24 = local_190.ArrayNum;
  if (bVar4) {
    lVar22 = (longlong)local_190.ArrayNum;
    if (local_190.ArrayNum != 0) {
      iVar24 = 0;
      iVar21 = 0;
      local_160 = *(FWeakObjectPtr *)local_190.AllocatorInstance.Data;
      pUVar17 = FWeakObjectPtr::Get(&local_160);
      bVar4 = FDS_DataContainer::IsListData<__int64,enum_EDS_ItemListData>
                        (this_03,FilteredItem,*(long64 *)&pUVar17[8].field_0x8);
      bVar4 = !bVar4;
      lVar23 = 0;
      do {
        lVar23 = lVar23 + 1;
        iVar20 = iVar21 + 1;
        local_178 = (UObject *)CONCAT44(local_178._4_4_,iVar21);
        iVar19 = iVar21;
        iVar21 = iVar20;
        if (lVar23 < lVar22) {
          do {
            local_180 = *(FWeakObjectPtr *)(FVar3.Data + lVar23 * 8);
            pUVar17 = FWeakObjectPtr::Get(&local_180);
            bVar8 = FDS_DataContainer::IsListData<__int64,enum_EDS_ItemListData>
                              (this_03,FilteredItem,*(long64 *)&pUVar17[8].field_0x8);
            if (bVar4 != !bVar8) break;
            iVar21 = iVar21 + 1;
            lVar23 = lVar23 + 1;
          } while (lVar23 < lVar22);
          iVar19 = (int)local_178;
        }
        if (bVar4 != false) {
          if (iVar24 != iVar19) {
            memmove(FVar3.Data + (longlong)iVar24 * 8,FVar3.Data + (longlong)iVar19 * 8,
                    (longlong)(iVar21 - iVar19) << 3);
          }
          iVar24 = iVar24 + (iVar21 - iVar19);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        this_03 = local_148;
      } while (lVar23 < lVar22);
      local_190.ArrayNum = iVar24;
      goto LAB_14bcf4844;
    }
  }
  else {
LAB_14bcf4844:
    FVar3.Data = local_190.AllocatorInstance.Data;
    if (iVar24 != 0) {
      local_180 = (FWeakObjectPtr)((ulonglong)local_180 & 0xffffffff00000000);
      iVar21 = 0;
      local_140 = *(FWeakObjectPtr *)local_190.AllocatorInstance.Data;
      pUVar17 = FWeakObjectPtr::Get(&local_140);
      bVar4 = DS_WaitCompleteDataUtil::IsItem(*(long64 *)&pUVar17[8].field_0x8);
      lVar23 = (longlong)iVar24;
      bVar4 = !bVar4;
      lVar22 = 0;
      do {
        lVar22 = lVar22 + 1;
        iVar19 = iVar21 + 1;
        local_178 = (UObject *)CONCAT44(local_178._4_4_,iVar21);
        iVar24 = iVar21;
        iVar21 = iVar19;
        if (lVar22 < lVar23) {
          do {
            local_138 = *(FWeakObjectPtr *)(FVar3.Data + lVar22 * 8);
            pUVar17 = FWeakObjectPtr::Get(&local_138);
            bVar8 = DS_WaitCompleteDataUtil::IsItem(*(long64 *)&pUVar17[8].field_0x8);
            if (bVar4 != !bVar8) break;
            iVar21 = iVar21 + 1;
            lVar22 = lVar22 + 1;
          } while (lVar22 < lVar23);
          iVar24 = (int)local_178;
        }
        iVar19 = local_180.ObjectIndex;
        if (bVar4 != false) {
          if (local_180.ObjectIndex != iVar24) {
            memmove(FVar3.Data + (longlong)local_180.ObjectIndex * 8,
                    FVar3.Data + (longlong)iVar24 * 8,(longlong)(iVar21 - iVar24) << 3);
          }
          iVar19 = iVar19 + (iVar21 - iVar24);
          local_180.ObjectIndex = iVar19;
        }
        bVar4 = (bool)(bVar4 ^ 1);
      } while (lVar22 < lVar23);
      local_190.ArrayNum = iVar19;
    }
  }
  bVar4 = FDS_DataContainer::IsData<enum_EDS_ItemListData>(local_148,SortType);
  FVar3.Data = local_170.Data;
  if (bVar4) {
    EVar11 = GetSortOrderType((UDS_M_ItemList *)local_170.Data);
    EVar9 = GetSortType((UDS_M_ItemList *)FVar3.Data);
    DS_ItemDataUtil::Sort(&local_190,EVar9,EVar11);
  }
  _Src.Data = local_190.AllocatorInstance.Data;
  lVar22 = (longlong)local_190.ArrayNum;
  local_168 = local_190.ArrayNum;
  pcVar2 = *(code **)(*(longlong *)FVar3.Data + 0x348);
  local_170.Data = (FScriptContainerElement *)0x0;
  if (local_190.ArrayNum == 0) {
    local_164 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_190.ArrayNum,0,&local_170,local_190.ArrayNum,&local_164);
    memcpy(local_170.Data,_Src.Data,lVar22 << 3);
  }
  (*pcVar2)(FVar3.Data,&local_170);
LAB_14bcf49e2:
  if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.AllocatorInstance.Data);
  }
  return;
}

// GenerateItemModel @ 14bcf4a40

void __thiscall
UDS_M_ItemList::GenerateItemModel
          (UDS_M_ItemList *this,
          TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UDS_ModelBase *pUVar4;
  code *pcVar5;
  EDS_InventoryType EVar6;
  bool bVar7;
  TObjectPtr<UDS_M_ItemImplBase> TVar8;
  UObject *pUVar9;
  UDS_M_ItemImplBase *this_00;
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  undefined1 local_res18 [8];
  EDS_ItemSlotStateType local_res20;
  FWeakObjectPtr local_80;
  UDS_ObjectPool *local_78;
  UDS_ModelBase *local_70 [2];
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_60;
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_50;
  
  local_res20 = GetSlotType(this);
  GetItemModelPool(this,(EDS_ItemSlotStateType)&local_78);
  if (local_78 == (UDS_ObjectPool *)0x0) {
    pFVar3 = (param_1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
      return;
    }
  }
  else {
    EVar6 = FDS_DataContainer::GetData<enum_EDS_InventoryType,enum_EDS_ItemListData>
                      ((FDS_DataContainer *)&this->_padding_,InventoryType);
    pFVar11 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar3 = pFVar11 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FDS_ItemBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      if (pFVar11 == pFVar3) {
        pTVar1 = &this->UsedItemModelList;
        local_60.ArrayNum = (this->UsedItemModelList).ArrayNum;
        lVar12 = (longlong)local_60.ArrayNum;
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_60.ArrayNum == 0) {
          local_60.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,local_60.ArrayNum,0,&local_60.AllocatorInstance,local_60.ArrayNum,
                     &local_60.ArrayMax);
          memcpy(local_60.AllocatorInstance.Data,pFVar3,lVar12 << 3);
        }
        UDS_ObjectPool::PushItemList<UDS_M_ItemImplBase>(local_78,&local_60,false);
        pTVar10 = UDS_ObjectPool::GetItemList<UDS_M_ItemImplBase>(local_78,&local_50);
        if (pTVar1 != pTVar10) {
          pFVar3 = (pTVar1->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (pTVar1->AllocatorInstance).Data = (pTVar10->AllocatorInstance).Data;
          (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (this->UsedItemModelList).ArrayNum = pTVar10->ArrayNum;
          (this->UsedItemModelList).ArrayMax = pTVar10->ArrayMax;
          pTVar10->ArrayNum = 0;
          pTVar10->ArrayMax = 0;
        }
        if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.AllocatorInstance.Data);
        }
        goto LAB_14bcf4cbf;
      }
      TVar8 = UDS_ObjectPool::PopItem<UDS_M_ItemImplBase>(local_78);
      pUVar4 = *(UDS_ModelBase **)TVar8.field0_0x0;
      UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar4);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_ModelBase *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      local_80.ObjectIndex = 0;
      local_80.ObjectSerialNumber = 0;
      local_70[0] = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_ModelBase *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      FWeakObjectPtr::operator=(&local_80,(FObjectPtr)local_70);
      bVar7 = FWeakObjectPtr::IsValid(&local_80);
      if (!bVar7) break;
      pUVar9 = FWeakObjectPtr::Get(&local_80);
      (**(code **)(*(longlong *)pUVar9 + 0x340))(pUVar9,local_res20);
      this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_80);
      UDS_M_ItemImplBase::SetInventoryType(this_00,EVar6);
      pUVar9 = FWeakObjectPtr::Get(&local_80);
      pFVar11 = pFVar11 + 8;
      pUVar9[10].field_0x10 = 0;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7509389084536602109>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemList.cpp"
                       ,0x203,"false");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_14bcf4cbf:
    pFVar3 = (param_1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  return;
}

// GenerateItemModel @ 14bcf4d10

void __thiscall
UDS_M_ItemList::GenerateItemModel
          (UDS_M_ItemList *this,
          TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UDS_ModelBase *pUVar4;
  code *pcVar5;
  EDS_InventoryType EVar6;
  bool bVar7;
  TObjectPtr<UDS_M_ItemImplBase> TVar8;
  UObject *pUVar9;
  UDS_M_ItemImplBase *this_00;
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res18 [8];
  EDS_ItemSlotStateType local_res20;
  FWeakObjectPtr local_80;
  UDS_ObjectPool *local_78;
  UDS_ModelBase *local_70 [2];
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_60;
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_50;
  
  local_res20 = GetSlotType(this);
  GetItemModelPool(this,(EDS_ItemSlotStateType)&local_78);
  if (local_78 == (UDS_ObjectPool *)0x0) {
    pFVar3 = (param_1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
      return;
    }
  }
  else {
    EVar6 = FDS_DataContainer::GetData<enum_EDS_InventoryType,enum_EDS_ItemListData>
                      ((FDS_DataContainer *)&this->_padding_,InventoryType);
    pFVar12 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar3 = pFVar12 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar12 == pFVar3) {
        pTVar1 = &this->UsedItemModelList;
        local_60.ArrayNum = (this->UsedItemModelList).ArrayNum;
        lVar11 = (longlong)local_60.ArrayNum;
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_60.ArrayNum == 0) {
          local_60.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,local_60.ArrayNum,0,&local_60.AllocatorInstance,local_60.ArrayNum,
                     &local_60.ArrayMax);
          memcpy(local_60.AllocatorInstance.Data,pFVar3,lVar11 << 3);
        }
        UDS_ObjectPool::PushItemList<UDS_M_ItemImplBase>(local_78,&local_60,false);
        pTVar10 = UDS_ObjectPool::GetItemList<UDS_M_ItemImplBase>(local_78,&local_50);
        if (pTVar1 != pTVar10) {
          pFVar3 = (pTVar1->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (pTVar1->AllocatorInstance).Data = (pTVar10->AllocatorInstance).Data;
          (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (this->UsedItemModelList).ArrayNum = pTVar10->ArrayNum;
          (this->UsedItemModelList).ArrayMax = pTVar10->ArrayMax;
          pTVar10->ArrayNum = 0;
          pTVar10->ArrayMax = 0;
        }
        if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.AllocatorInstance.Data);
        }
        goto LAB_14bcf4f8e;
      }
      TVar8 = UDS_ObjectPool::PopItem<UDS_M_ItemImplBase>(local_78);
      pUVar4 = *(UDS_ModelBase **)TVar8.field0_0x0;
      UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar4);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_ModelBase *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      local_80.ObjectIndex = 0;
      local_80.ObjectSerialNumber = 0;
      local_70[0] = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_ModelBase *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      FWeakObjectPtr::operator=(&local_80,(FObjectPtr)local_70);
      bVar7 = FWeakObjectPtr::IsValid(&local_80);
      if (!bVar7) break;
      pUVar9 = FWeakObjectPtr::Get(&local_80);
      (**(code **)(*(longlong *)pUVar9 + 0x338))(pUVar9,local_res20);
      this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_80);
      UDS_M_ItemImplBase::SetInventoryType(this_00,EVar6);
      pUVar9 = FWeakObjectPtr::Get(&local_80);
      pFVar12 = pFVar12 + 8;
      pUVar9[10].field_0x10 = 0;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7509389084536602157>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemList.cpp"
                       ,0x1d3,"false");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_14bcf4f8e:
    pFVar3 = (param_1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  return;
}

// GetActivatedSlotCount @ 14bcf5840

int __thiscall UDS_M_ItemList::GetActivatedSlotCount(UDS_M_ItemList *this)

{
  return (this->UsedItemModelList).ArrayNum;
}

// GetFilterType @ 14bcf7990

EDS_FilterType __thiscall UDS_M_ItemList::GetFilterType(UDS_M_ItemList *this)

{
  EDS_FilterType EVar1;
  
  EVar1 = FDS_DataContainer::GetData<enum_EDS_FilterType,enum_EDS_ItemListData>
                    ((FDS_DataContainer *)&this->_padding_,FilterType);
  return EVar1;
}

// GetItemModelList @ 14bcf8d00

TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_M_ItemList::GetItemModelList(UDS_M_ItemList *this)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  undefined1 local_res8 [8];
  
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemListData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemListData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  bVar2 = FToBoolHelper::FromCStringWide(pwVar6);
  if (bVar2) {
    (**(code **)(this->_padding_ + 800))(this);
  }
  bVar2 = IsSlotUpdateDirty(this);
  if (bVar2) {
    (**(code **)(this->_padding_ + 0x350))(this,0);
  }
  return &this->UsedItemModelList;
}

// GetItemModelPool @ 14bcf8db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectPtr<UDS_ObjectPool> __thiscall
UDS_M_ItemList::GetItemModelPool(UDS_M_ItemList *this,EDS_ItemSlotStateType param_1)

{
  TMap<EDS_ItemSlotStateType,TObjectPtr<UDS_ObjectPool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ItemSlotStateType,TObjectPtr<UDS_ObjectPool>,0>_>
  *this_00;
  bool bVar1;
  int iVar2;
  UClass *pUVar3;
  TObjectPtr<UDS_ObjectPool> *pTVar4;
  UClass *pUVar5;
  longlong *plVar6;
  TObjectPtr<UDS_ObjectPool>_u_0 TVar7;
  undefined7 in_register_00000011;
  TObjectPtr<UDS_ObjectPool>_u_0 TVar8;
  undefined1 *puVar9;
  EDS_ItemSlotStateType in_R8B;
  undefined1 auStack_f8 [32];
  TObjectPtr<UDS_ObjectPool> local_d8;
  UClass *local_d0;
  TObjectPtr<UDS_ObjectPool>_u_0 local_c8;
  TPairInitializer<EDS_ItemSlotStateType_const_&,TObjectPtr<UDS_ObjectPool>_&> local_c0;
  TObjectPtr<UDS_ObjectPool>_u_0 *local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  TVar8._1_7_ = in_register_00000011;
  TVar8._0_1_ = param_1;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  this_00 = &this->ItemModelPools;
  if (*(int *)&(this->ItemModelPools).field_0x8 != *(int *)&(this->ItemModelPools).field_0x34) {
    puVar9 = *(undefined1 **)&(this->ItemModelPools).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->ItemModelPools).field_0x38;
    }
    iVar2 = *(int *)(puVar9 + ((ulonglong)(*(int *)&(this->ItemModelPools).field_0x48 - 1) &
                              (ulonglong)in_R8B) * 4);
    if (iVar2 != -1) {
      do {
        if (*(EDS_ItemSlotStateType *)(*(longlong *)this_00 + (longlong)iVar2 * 0x18) == in_R8B) {
          pTVar4 = TMapBase<enum_EDS_ItemSlotStateType,TObjectPtr<UDS_ObjectPool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TObjectPtr<UDS_ObjectPool>,0>_>
                   ::FindChecked(this_00,in_R8B);
          TVar7.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar4->field0_0x0).DebugPtr;
          goto LAB_14bcf8f9c;
        }
        iVar2 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  UDS_M_ItemImplBase::GetItemImplClass((EDS_ItemSlotStateType)&local_d0);
  pUVar5 = local_d0;
  if ((local_d0 == (UClass *)0x0) ||
     (pUVar3 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister(), pUVar3 == (UClass *)0x0)) {
LAB_14bcf8fb4:
    (TVar8.DebugPtr)->_padding_ = 0;
    return (TObjectPtr<UDS_ObjectPool>)TVar8;
  }
  iVar2 = (int)pUVar3->_padding_;
  if (((int)pUVar5->_padding_ < iVar2) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) != &pUVar3->_padding_))
  {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((!bVar1) || (local_d0 == (UClass *)0x0)) goto LAB_14bcf8fb4;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = Z_Construct_UClass_UDS_ObjectPool_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar5);
  local_a8._8_8_ = this;
  local_c8.DebugPtr =
       (UDS_ObjectPool *)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar6 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_c8.DebugPtr != (UDS_ObjectPool *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c8.DebugPtr);
  }
  TVar7 = local_c8;
  pUVar5 = local_d0;
  if ((local_d0 != (UClass *)0x0) &&
     (pUVar3 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister(), pUVar3 != (UClass *)0x0)) {
    iVar2 = (int)pUVar3->_padding_;
    if (((int)pUVar5->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) != &pUVar3->_padding_)
       ) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14bcf8f63;
  }
  local_d0 = (UClass *)0x0;
LAB_14bcf8f63:
  UDS_ObjectPool::InitPool(TVar7.DebugPtr,local_d0);
  local_c0.Value = &local_d8;
  local_b0 = &local_c8;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TObjectPtr<UDS_ObjectPool>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TObjectPtr<UDS_ObjectPool>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ItemSlotStateType_const_&,TObjectPtr<UDS_ObjectPool>_&>_>
            (this_00,&local_c0,(bool *)&local_c0.Value);
  TVar7 = local_c8;
LAB_14bcf8f9c:
  (TVar8.DebugPtr)->_padding_ = (longlong)TVar7;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    return (TObjectPtr<UDS_ObjectPool>)TVar8.DebugPtr;
  }
  if (TVar7.DebugPtr == (UDS_ObjectPool *)0x0) {
    return (TObjectPtr<UDS_ObjectPool>)TVar8.DebugPtr;
  }
  UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
  return (TObjectPtr<UDS_ObjectPool>)TVar8.DebugPtr;
}

// GetSelectedItemTID @ 14bcfba10

int __thiscall UDS_M_ItemList::GetSelectedItemTID(UDS_M_ItemList *this)

{
  return 0;
}

// GetSelectedItemUID @ 14bcfba20

long64 __thiscall UDS_M_ItemList::GetSelectedItemUID(UDS_M_ItemList *this)

{
  long64 lVar1;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_18;
  
  FDS_DataContainer::GetListData<__int64,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,&local_18,SelectedItemUID);
  if (local_18.ArrayNum < 1) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long64 *)local_18.AllocatorInstance.Data;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return lVar1;
}

// GetSlotType @ 14bcfbcd0

EDS_ItemSlotStateType __thiscall UDS_M_ItemList::GetSlotType(UDS_M_ItemList *this)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  UEnum *this_00;
  FName *pFVar5;
  long64 lVar6;
  int iVar7;
  wchar_t *pwVar8;
  EDS_ItemSlotStateType EVar9;
  EDS_ItemSlotStateType local_res8 [8];
  FName local_res10;
  FString local_18;
  
  FVar3 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemListData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemListData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar8);
  this_00 = StaticEnum<enum_EDS_ItemSlotStateType>();
  EVar9 = local_res8[0];
  if (this_00 != (UEnum *)0x0) {
    iVar7 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_res10,iVar7,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                            FNAME_Add);
    lVar6 = UEnum::GetValueByName(this_00,*pFVar5,None);
    EVar9 = (EDS_ItemSlotStateType)lVar6;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return EVar9;
}

// GetSortOrderType @ 14bcfc750

EDS_SortOrder __thiscall UDS_M_ItemList::GetSortOrderType(UDS_M_ItemList *this)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  UEnum *this_00;
  FName *pFVar5;
  long64 lVar6;
  int iVar7;
  wchar_t *pwVar8;
  EDS_SortOrder EVar9;
  EDS_SortOrder local_res8 [2];
  FName local_res10;
  FString local_18;
  
  FVar3 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemListData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemListData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar8);
  this_00 = StaticEnum<enum_EDS_SortOrder>();
  EVar9 = local_res8[0];
  if (this_00 != (UEnum *)0x0) {
    iVar7 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_res10,iVar7,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                            FNAME_Add);
    lVar6 = UEnum::GetValueByName(this_00,*pFVar5,None);
    EVar9 = (EDS_SortOrder)lVar6;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return EVar9;
}

// GetSortType @ 14bcfc820

EDS_SortingType __thiscall UDS_M_ItemList::GetSortType(UDS_M_ItemList *this)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  UEnum *this_00;
  FName *pFVar5;
  long64 lVar6;
  int iVar7;
  wchar_t *pwVar8;
  EDS_SortingType EVar9;
  EDS_SortingType local_res8 [8];
  FName local_res10;
  FString local_18;
  
  FVar3 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemListData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemListData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar8);
  this_00 = StaticEnum<enum_EDS_SortingType>();
  EVar9 = local_res8[0];
  if (this_00 != (UEnum *)0x0) {
    iVar7 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_res10,iVar7,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                            FNAME_Add);
    lVar6 = UEnum::GetValueByName(this_00,*pFVar5,None);
    EVar9 = (EDS_SortingType)lVar6;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return EVar9;
}

// GetViewModelContext @ 14bcff970

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_ItemList::GetViewModelContext
          (UDS_M_ItemList *this,TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__
          )

{
  *(undefined4 *)&this->_padding_ = 0xb5;
  UDS_ModelBase::GetViewModelContext((UDS_ModelBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InitModel @ 14bd03540

void __thiscall
UDS_M_ItemList::InitModel
          (UDS_M_ItemList *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          EDS_ItemSlotStateType param_2)

{
  FScriptContainerElement *pFVar1;
  
  FDS_DataContainer::SetData<enum_EDS_SortingType,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,SortType,Equip);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Generation,true);
  *(undefined1 *)&this->_padding_ = 1;
  FDS_DataContainer::SetData<enum_EDS_FilterType,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,FilterType,None);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Generation,true);
  *(undefined1 *)&this->_padding_ = 1;
  FDS_DataContainer::SetData<enum_EDS_ItemSlotStateType,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,SlotType,param_2);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Generation,true);
  *(undefined1 *)&this->_padding_ = 1;
  FDS_DataContainer::SetData<enum_EDS_SortOrder,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,SortOrderType,Descend);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Generation,true);
  *(undefined1 *)&this->_padding_ = 1;
  FDS_DataContainer::SetData<enum_EDS_ItemListType,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,ListType,Custom);
  FDS_DataContainer::SetListData<int,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,ItemTIDList,param_1);
  (**(code **)(this->_padding_ + 800))(this);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// InitModel @ 14bd03670

void __thiscall
UDS_M_ItemList::InitModel
          (UDS_M_ItemList *this,TArray<__int64,TSizedDefaultAllocator<32>_> *param_1,
          EDS_ItemSlotStateType param_2)

{
  FScriptContainerElement *pFVar1;
  
  FDS_DataContainer::SetData<enum_EDS_SortingType,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,SortType,Equip);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Generation,true);
  *(undefined1 *)&this->_padding_ = 1;
  FDS_DataContainer::SetData<enum_EDS_FilterType,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,FilterType,None);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Generation,true);
  *(undefined1 *)&this->_padding_ = 1;
  FDS_DataContainer::SetData<enum_EDS_ItemSlotStateType,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,SlotType,param_2);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Generation,true);
  *(undefined1 *)&this->_padding_ = 1;
  FDS_DataContainer::SetData<enum_EDS_SortOrder,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,SortOrderType,Descend);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Generation,true);
  *(undefined1 *)&this->_padding_ = 1;
  FDS_DataContainer::SetData<enum_EDS_ItemListType,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,ListType,Custom);
  FDS_DataContainer::SetListData<__int64,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,ItemUIDList,param_1);
  (**(code **)(this->_padding_ + 800))(this);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// InitModel @ 14bd037a0

void __thiscall UDS_M_ItemList::InitModel(UDS_M_ItemList *this,FDS_DataContainer *param_1)

{
  code *pcVar1;
  EDS_FilterType EVar2;
  bool bVar3;
  FDS_ItemFilterTableRow *pFVar4;
  
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&this->_padding_,
            (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)param_1);
  if ((TMap<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
       *)&this->_padding_ != &param_1->ListDataMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&this->_padding_,(int *)&this->_padding_,
               (ForElementType<FSetElementId> *)&(param_1->ListDataMap).field_0x38,
               *(int *)&(param_1->ListDataMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->_padding_,
                (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->ListDataMap);
  }
  EVar2 = FDS_DataContainer::GetData<enum_EDS_FilterType,enum_EDS_ItemListData>
                    ((FDS_DataContainer *)&this->_padding_,FilterType);
  pFVar4 = FDS_ItemFilterTableRow::Get((ulonglong)EVar2,true);
  if (pFVar4 == (FDS_ItemFilterTableRow *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7509389084536602415>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemList.cpp"
                       ,0xd1,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FDS_DataContainer::SetData<enum_EDS_ItemListType,enum_EDS_ItemListData>
              ((FDS_DataContainer *)&this->_padding_,ListType,(uint)(pFVar4->IsShowAll != false));
    (**(code **)(this->_padding_ + 800))(this);
  }
  FDS_DataContainer::~FDS_DataContainer(param_1);
  return;
}

// IsEmpty @ 14bd05960

bool __thiscall UDS_M_ItemList::IsEmpty(UDS_M_ItemList *this)

{
  return (this->UsedItemModelList).ArrayNum == 0;
}

// IsSlotGenerationDirty @ 14bd06430

bool __thiscall UDS_M_ItemList::IsSlotGenerationDirty(UDS_M_ItemList *this)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  undefined1 local_res8 [8];
  
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemListData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemListData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  bVar2 = FToBoolHelper::FromCStringWide(pwVar6);
  return bVar2;
}

// IsSlotUpdateDirty @ 14bd064b0

bool __thiscall UDS_M_ItemList::IsSlotUpdateDirty(UDS_M_ItemList *this)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  undefined1 local_res8 [8];
  
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemListData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemListData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  bVar2 = FToBoolHelper::FromCStringWide(pwVar6);
  return bVar2;
}

// IsValidSelectedUID @ 14bd068f0

bool __thiscall UDS_M_ItemList::IsValidSelectedUID(UDS_M_ItemList *this)

{
  TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *pTVar1;
  
  pTVar1 = TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UDS_M_ItemList::IsValidSelectedUID_::__l2::<lambda_1>_>
                     (&this->UsedItemModelList,(<lambda_1>)this);
  return pTVar1 != (TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)0x0;
}

// OnEventOnDrop @ 14bd0d920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_M_ItemList::OnEventOnDrop(UDS_M_ItemList *this,FDS_DragDropEventField *param_1)

{
  long64 lVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FDS_ItemSlotInfo *pFVar5;
  UObject *pUVar6;
  UDragDropOperation *pUVar7;
  longlong *plVar8;
  undefined1 auStackY_e8 [32];
  FWeakObjectPtr local_b8;
  UObject *local_b0;
  UDS_M_ItemList *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if ((param_1->DragDropOperation).field0_0x0.DebugPtr != (UDragDropOperation *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_W_DragDropOperation_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->DragDropOperation,pUVar4);
    if (bVar3) {
      pUVar7 = (param_1->DragDropOperation).field0_0x0.DebugPtr;
      goto LAB_14bd0d968;
    }
  }
  pUVar7 = (UDragDropOperation *)0x0;
LAB_14bd0d968:
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar7 == (UDragDropOperation *)0x0) {
      return;
    }
  }
  else {
    if (pUVar7 == (UDragDropOperation *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pFVar5 = FDS_SlotInfo::GetSlotInfo<FDS_ItemSlotInfo>((FDS_SlotInfo *)(pUVar7 + 1));
  if ((pFVar5 != (FDS_ItemSlotInfo *)0x0) && (0 < pFVar5->ItemTID)) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_ModelEventItemList_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar4);
    local_98._8_8_ = pUVar6;
    pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar8 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    local_b8.ObjectIndex = 0;
    local_b8.ObjectSerialNumber = 0;
    local_b0 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_b0);
    bVar3 = FWeakObjectPtr::IsValid(&local_b8);
    if (bVar3) {
      pUVar6 = FWeakObjectPtr::Get(&local_b8);
      local_a8[0] = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_M_ItemList *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(pUVar6 + 1),(FObjectPtr)local_a8);
      lVar1 = pFVar5->ItemUID;
      pUVar6 = FWeakObjectPtr::Get(&local_b8);
      *(long64 *)&pUVar6[5].field_0x8 = lVar1;
      UDS_ModelBase::UpdateModel
                ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_b8);
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7509389084536601875>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemList.cpp"
                         ,0x2ed,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// OnReset @ 14bd10fd0

void __thiscall UDS_M_ItemList::OnReset(UDS_M_ItemList *this)

{
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Generation,true);
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// OnUpdateView @ 14bd14a60

void __thiscall
UDS_M_ItemList::OnUpdateView
          (UDS_M_ItemList *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               *)&this->_padding_,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// SetCharID @ 14bd1e370

void __thiscall UDS_M_ItemList::SetCharID(UDS_M_ItemList *this,int param_1)

{
  FDS_DataContainer::SetData<int,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,SelectedCharID,param_1);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Update,true);
  return;
}

// SetCustomFilter @ 14bd1ec80

void __thiscall
UDS_M_ItemList::SetCustomFilter
          (UDS_M_ItemList *this,
          TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnCustomFilterDelegate,param_1);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Generation,true);
  *(undefined1 *)&this->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetCustomSlotUpdate @ 14bd1ed50

void __thiscall
UDS_M_ItemList::SetCustomSlotUpdate
          (UDS_M_ItemList *this,
          TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&this->OnCustomSlotUpdateDelegate,param_1);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Update,true);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetFilterData @ 14bd1f8a0

void __thiscall UDS_M_ItemList::SetFilterData(UDS_M_ItemList *this,FDS_DataContainer *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->FilterModel).field0_0x0.DebugPtr == (UDS_M_Filter *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7509389084536602038>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemList.cpp"
                       ,0x24a,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
              ((FDS_DataContainer *)&this->_padding_,Generation,true);
    *(undefined1 *)&this->_padding_ = 1;
  }
  FDS_DataContainer::~FDS_DataContainer(param_1);
  return;
}

// SetFilterModel @ 14bd1f9d0

void __thiscall
UDS_M_ItemList::SetFilterModel(UDS_M_ItemList *this,TObjectPtr<UDS_M_Filter> param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)param_1.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.field0_0x0);
  }
                    /* WARNING: Load size is inaccurate */
  (this->FilterModel).field0_0x0 = *param_1.field0_0x0;
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Generation,true);
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// SetFilterType @ 14bd1fa30

void __thiscall UDS_M_ItemList::SetFilterType(UDS_M_ItemList *this,EDS_FilterType param_1)

{
  FDS_DataContainer::SetData<enum_EDS_FilterType,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,FilterType,param_1);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Generation,true);
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// SetQuantityList @ 14bd20d00

void __thiscall
UDS_M_ItemList::SetQuantityList
          (UDS_M_ItemList *this,
          TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
          *param_1)

{
  if (&this->QuantityList != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->QuantityList).field_0x38,
               (int *)&(this->QuantityList).field_0x48,
               (ForElementType<FSetElementId> *)&param_1->field_0x38,*(int *)&param_1->field_0x48);
    TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->QuantityList,
                (TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)param_1);
  }
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Update,true);
  *(undefined4 *)&param_1->field_0x48 = 0;
  if (*(void **)&param_1->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_1);
  return;
}

// SetSelectedItemUID @ 14bd212b0

void __thiscall UDS_M_ItemList::SetSelectedItemUID(UDS_M_ItemList *this,long64 param_1)

{
  longlong *this_00;
  
  this_00 = &this->_padding_;
  FDS_DataContainer::ClearListData<enum_EDS_ItemListData>
            ((FDS_DataContainer *)this_00,SelectedItemUID);
  FDS_DataContainer::AddListData<__int64,enum_EDS_ItemListData>
            ((FDS_DataContainer *)this_00,SelectedItemUID,param_1);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>((FDS_DataContainer *)this_00,Update,true);
  return;
}

// SetSlotGenerationDirty @ 14bd215b0

void __thiscall UDS_M_ItemList::SetSlotGenerationDirty(UDS_M_ItemList *this,bool param_1)

{
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Generation,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// SetSlotType @ 14bd215e0

void __thiscall UDS_M_ItemList::SetSlotType(UDS_M_ItemList *this,EDS_ItemSlotStateType param_1)

{
  FDS_DataContainer::SetData<enum_EDS_ItemSlotStateType,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,SlotType,param_1);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Generation,true);
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// SetSlotUpdateDirty @ 14bd21630

void __thiscall UDS_M_ItemList::SetSlotUpdateDirty(UDS_M_ItemList *this,bool param_1)

{
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Update,param_1);
  return;
}

// SetSortOrderType @ 14bd21920

void __thiscall UDS_M_ItemList::SetSortOrderType(UDS_M_ItemList *this,EDS_SortOrder param_1)

{
  FDS_DataContainer::SetData<enum_EDS_SortOrder,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,SortOrderType,param_1);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Generation,true);
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// SetSortType @ 14bd21d80

void __thiscall UDS_M_ItemList::SetSortType(UDS_M_ItemList *this,EDS_SortingType param_1)

{
  FDS_DataContainer::SetData<enum_EDS_SortingType,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,SortType,param_1);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Generation,true);
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// UpdateItemDataList @ 14bd27ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UDS_M_ItemList::UpdateItemDataList(UDS_M_ItemList *this,bool param_1)

{
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *this_00;
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FWeakObjectPtr *pFVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  UObject *pUVar11;
  longlong lVar12;
  UDS_M_ItemImplBase *pUVar13;
  TObjectPtr<UDS_QuantityData>_u_0 *pTVar14;
  FName FVar15;
  FString *pFVar16;
  wchar_t *_Str;
  FReadAccessScope *this_01;
  longlong *plVar17;
  FWeakObjectPtr *this_02;
  undefined1 *puVar18;
  longlong lVar19;
  undefined1 local_res10 [8];
  FWeakObjectPtr *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  FString local_88;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_78;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  if ((param_1) || (bVar7 = IsSlotUpdateDirty(this), bVar7)) {
    FDS_DataContainer::GetListData<__int64,enum_EDS_ItemListData>
              ((FDS_DataContainer *)&this->_padding_,&local_78,SelectedItemUID);
    if (local_78.ArrayNum < 1) {
      lVar19 = 0;
    }
    else {
      lVar19 = *(longlong *)local_78.AllocatorInstance.Data;
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    this_02 = (FWeakObjectPtr *)(this->UsedItemModelList).AllocatorInstance.Data;
    iVar1 = (this->UsedItemModelList).ArrayNum;
    local_res18 = this_02 + iVar1;
    while( true ) {
      pFVar6 = local_res18;
      if ((this->UsedItemModelList).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (this_02 == pFVar6) {
        FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
                  ((FDS_DataContainer *)&this->_padding_,Update,false);
        return;
      }
      bVar7 = FWeakObjectPtr::IsValid(this_02);
      if (!bVar7) break;
      pUVar11 = FWeakObjectPtr::Get(this_02);
      lVar12 = (**(code **)(*(longlong *)pUVar11 + 0x388))(pUVar11);
      this_00 = &this->QuantityList;
      if (*(int *)&(this->QuantityList).field_0x8 != *(int *)&(this->QuantityList).field_0x34) {
        puVar2 = *(undefined1 **)&(this->QuantityList).field_0x40;
        puVar18 = &(this->QuantityList).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar18 = puVar2;
        }
        iVar9 = *(int *)(puVar18 +
                        ((lVar12 >> 0x20) * 0x17 + lVar12 &
                        (ulonglong)(*(int *)&(this->QuantityList).field_0x48 - 1)) * 4);
        if (iVar9 != -1) {
          do {
            if (*(longlong *)(*(longlong *)this_00 + (longlong)iVar9 * 0x18) == lVar12) {
              pTVar14 = &TMapBase<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
                         ::FindChecked((TMapBase<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
                                        *)this_00,lVar12)->field0_0x0;
              if ((0 < *(longlong *)((longlong)pTVar14->DebugPtr + 0x28)) &&
                 (iVar9 = (**(code **)(pTVar14->DebugPtr->_padding_ + 0x2f8))(), 0 < iVar9)) {
                pUVar13 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(this_02);
                pTVar14 = &TMapBase<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
                           ::FindChecked((TMapBase<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
                                          *)this_00,lVar12)->field0_0x0;
                iVar9 = (**(code **)(pTVar14->DebugPtr->_padding_ + 0x2f8))();
                goto LAB_14bd27e42;
              }
              break;
            }
            iVar9 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar9 * 0x18);
          } while (iVar9 != -1);
        }
      }
      pUVar13 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(this_02);
      iVar9 = 0;
LAB_14bd27e42:
      UDS_M_ItemImplBase::SetQuantity(pUVar13,iVar9);
      pUVar13 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(this_02);
      UDS_M_ItemImplBase::SetSelected(pUVar13,0 < lVar19 && lVar19 == lVar12);
      FVar15 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemListData>
                         ((FDS_DataContainer *)&this->_padding_,(EDS_ItemListData)local_res20);
      lVar12 = *(longlong *)FVar15;
      uVar10 = ::GetTypeHash((FNameEntryId)(uint)lVar12);
      if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
        plVar17 = &this->_padding_;
        if ((longlong *)this->_padding_ != (longlong *)0x0) {
          plVar17 = (longlong *)this->_padding_;
        }
        iVar9 = *(int *)((longlong)plVar17 +
                        (ulonglong)
                        ((int)this->_padding_ - 1U & (int)((ulonglong)lVar12 >> 0x20) + uVar10) * 4)
        ;
        if (iVar9 != -1) {
          do {
            if (*(longlong *)((longlong)iVar9 * 0x20 + this->_padding_) == lVar12) {
              pUVar11 = FWeakObjectPtr::Get(this_02);
              FVar15 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemListData>
                                 ((FDS_DataContainer *)&this->_padding_,(EDS_ItemListData)local_98);
              uVar3 = *(undefined8 *)FVar15;
              uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
              pFVar16 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        ::FindOrAddImpl<FName>
                                  ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                                    *)&this->_padding_,uVar10 + (int)((ulonglong)uVar3 >> 0x20),
                                   (FName *)FVar15);
              if ((pFVar16->Data).ArrayNum == 0) {
                _Str = L"";
              }
              else {
                _Str = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
              }
              _wtoi(_Str);
              ::FString::PrintfImpl(&local_88,L"%d");
              FVar15 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotData>
                                 ((FDS_DataContainer *)&pUVar11[1].field_0x18,
                                  (EDS_ItemSlotData)local_90);
              uVar3 = *(undefined8 *)FVar15;
              uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
              pFVar16 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        ::FindOrAddImpl<FName>
                                  ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                                    *)&pUVar11[1].field_0x18,
                                   uVar10 + (int)((ulonglong)uVar3 >> 0x20),(FName *)FVar15);
              if (pFVar16 != &local_88) {
                pFVar4 = (pFVar16->Data).AllocatorInstance.Data;
                if (pFVar4 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar4);
                }
                (pFVar16->Data).AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
                local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                (pFVar16->Data).ArrayNum = local_88.Data.ArrayNum;
                (pFVar16->Data).ArrayMax = local_88.Data.ArrayMax;
                local_88.Data.ArrayNum = 0;
                local_88.Data.ArrayMax = 0;
              }
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
              break;
            }
            iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + this->_padding_);
          } while (iVar9 != -1);
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnCustomSlotUpdateDelegate,&local_68);
      if (((*(int *)&(this->OnCustomSlotUpdateDelegate).field_0x10 == 0) ||
          (plVar17 = *(longlong **)&(this->OnCustomSlotUpdateDelegate).field_0x8,
          plVar17 == (longlong *)0x0)) || (cVar8 = (**(code **)(*plVar17 + 0x38))(), cVar8 == '\0'))
      {
        this_01 = &local_68;
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_68);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnCustomSlotUpdateDelegate,&local_50);
        if (*(int *)&(this->OnCustomSlotUpdateDelegate).field_0x10 == 0) {
          (**(code **)(_DAT_00000000 + 0x60))();
          this_01 = &local_50;
        }
        else {
          (**(code **)(**(longlong **)&(this->OnCustomSlotUpdateDelegate).field_0x8 + 0x60))();
          this_01 = &local_50;
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (this_01);
      pUVar11 = FWeakObjectPtr::Get(this_02);
      this_02 = this_02 + 1;
      pUVar11[5].field_0x18 = 1;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7509389084536602319>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemList.cpp"
                       ,0x131,"false");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// UpdateSelectedUID @ 14bd297d0

void __thiscall UDS_M_ItemList::UpdateSelectedUID(UDS_M_ItemList *this)

{
  code *pcVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *pTVar3;
  UObject *pUVar4;
  long64 lVar5;
  FWeakObjectPtr local_res8;
  
  if ((this->UsedItemModelList).ArrayNum == 0) {
    FDS_DataContainer::ClearListData<enum_EDS_ItemListData>
              ((FDS_DataContainer *)&this->_padding_,SelectedItemUID);
    return;
  }
  pTVar3 = TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UDS_M_ItemList::IsValidSelectedUID_::__l2::<lambda_1>_>
                     (&this->UsedItemModelList,(<lambda_1>)this);
  if (pTVar3 == (TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)0x0) {
    if (((this->UsedItemModelList).ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_res8 = *(FWeakObjectPtr *)(this->UsedItemModelList).AllocatorInstance.Data;
    bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)&local_res8,(void *)0x0)
    ;
    if (bVar2) {
      return;
    }
    FDS_DataContainer::ClearListData<enum_EDS_ItemListData>
              ((FDS_DataContainer *)&this->_padding_,SelectedItemUID);
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    lVar5 = (**(code **)(*(longlong *)pUVar4 + 0x388))(pUVar4);
    FDS_DataContainer::AddListData<__int64,enum_EDS_ItemListData>
              ((FDS_DataContainer *)&this->_padding_,SelectedItemUID,lVar5);
  }
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->_padding_,Update,true);
  return;
}

