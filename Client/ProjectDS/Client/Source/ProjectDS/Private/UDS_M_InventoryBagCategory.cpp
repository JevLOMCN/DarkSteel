// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b50a290

UClass * __cdecl UDS_M_InventoryBagCategory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_InventoryBagCategory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_InventoryBagCategory",
               &Z_Registration_Info_UClass_UDS_M_InventoryBagCategory.InnerSingleton,
               StaticRegisterNativesUDS_M_InventoryBagCategory,0x1b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_InventoryBagCategory>,
               InternalVTableHelperCtorCaller<UDS_M_InventoryBagCategory>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_InventoryBagCategory.InnerSingleton;
}

// UDS_M_InventoryBagCategory @ 14b511760

UDS_M_InventoryBagCategory * __thiscall
UDS_M_InventoryBagCategory::UDS_M_InventoryBagCategory
          (UDS_M_InventoryBagCategory *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_InventoryBagCategory__6B_;
  (this->ItemListModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->ItemListModel).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_M_InventoryBagCategory @ 14b5117b0

UDS_M_InventoryBagCategory * __thiscall
UDS_M_InventoryBagCategory::UDS_M_InventoryBagCategory
          (UDS_M_InventoryBagCategory *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_InventoryBagCategory__6B_;
  (this->ItemListModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->ItemListModel).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_M_InventoryBagCategory @ 14b5130d0

void __thiscall
UDS_M_InventoryBagCategory::~UDS_M_InventoryBagCategory(UDS_M_InventoryBagCategory *this)

{
  this->_padding_ = (longlong)&___7UDS_M_InventoryBagCategory__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// BindViewModel @ 14b514710

void __thiscall
UDS_M_InventoryBagCategory::BindViewModel
          (UDS_M_InventoryBagCategory *this,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_1)

{
  return;
}

// GetPrivateStaticClass @ 14b516140

UClass * __cdecl UDS_M_InventoryBagCategory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_InventoryBagCategory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_InventoryBagCategory",
               &Z_Registration_Info_UClass_UDS_M_InventoryBagCategory.InnerSingleton,
               StaticRegisterNativesUDS_M_InventoryBagCategory,0x1b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_InventoryBagCategory>,
               InternalVTableHelperCtorCaller<UDS_M_InventoryBagCategory>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_InventoryBagCategory.InnerSingleton;
}

// StaticRegisterNativesUDS_M_InventoryBagCategory @ 14b516d30

void __cdecl UDS_M_InventoryBagCategory::StaticRegisterNativesUDS_M_InventoryBagCategory(void)

{
  return;
}

// AddFilteredItemUID @ 14bce82f0

void __thiscall
UDS_M_InventoryBagCategory::AddFilteredItemUID(UDS_M_InventoryBagCategory *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
    FDS_DataContainer::AddListData<__int64,enum_EDS_ItemListData>
              ((FDS_DataContainer *)&pUVar3[1].field_0x18,FilteredItem,param_1);
    *(undefined1 *)&this->_padding_ = 1;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<521342736914186336>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBagCategory.cpp"
                       ,0x60,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ClearFilteredItemUID @ 14bceb0f0

void __thiscall UDS_M_InventoryBagCategory::ClearFilteredItemUID(UDS_M_InventoryBagCategory *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
    FDS_DataContainer::ClearListData<enum_EDS_ItemListData>
              ((FDS_DataContainer *)&pUVar3[1].field_0x18,FilteredItem);
    *(undefined1 *)&this->_padding_ = 1;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<521342736914186329>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBagCategory.cpp"
                       ,0x59,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetItemListModel @ 14bcf8a50

TWeakObjectPtr<UDS_M_ItemList,FWeakObjectPtr> __thiscall
UDS_M_InventoryBagCategory::GetItemListModel(UDS_M_InventoryBagCategory *this)

{
  FWeakObjectPtr in_RDX;
  
  *(FWeakObjectPtr *)in_RDX = (this->ItemListModel).WeakPtr;
  return (TWeakObjectPtr<UDS_M_ItemList,FWeakObjectPtr>)in_RDX;
}

// GetViewModelContext @ 14bcff840

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_InventoryBagCategory::GetViewModelContext
          (UDS_M_InventoryBagCategory *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  *(undefined4 *)&this->_padding_ = 0x189;
  UDS_ModelBase::GetViewModelContext((UDS_ModelBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InitModel @ 14bd022b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_M_InventoryBagCategory::InitModel
          (UDS_M_InventoryBagCategory *this,FDS_DataContainer *param_1,
          TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          *param_2,TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                   *param_3)

{
  TWeakObjectPtr<UDS_M_ItemList,FWeakObjectPtr> *this_00;
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  code *pcVar4;
  UDS_M_InventoryBagCategory *this_01;
  bool bVar5;
  EDS_InventoryType EVar6;
  uint uVar7;
  FName FVar8;
  FString *pFVar9;
  UEnum *pUVar10;
  FName *pFVar11;
  ulonglong uVar12;
  FString *pFVar13;
  long64 lVar14;
  UObject *pUVar15;
  UDS_M_ItemList *this_02;
  FDS_DataContainer *pFVar16;
  wchar_t *pwVar17;
  int iVar18;
  EDS_SortingType EVar19;
  EDS_SortOrder EVar20;
  wchar_t *pwVar21;
  undefined1 auStackY_308 [32];
  EDS_SortingType local_2d8;
  undefined8 local_2d0;
  FString local_2c8;
  FString local_2b8;
  FDS_DataContainer *local_2a8;
  ulonglong local_2a0;
  UDS_M_InventoryBagCategory *local_298;
  undefined1 local_290 [8];
  void *local_288;
  undefined4 local_280;
  undefined1 local_278 [8];
  void *local_270;
  undefined4 local_268;
  undefined1 local_260 [24];
  int local_248;
  FString local_240;
  FString local_230;
  FString local_220;
  undefined1 local_210 [8];
  FName local_208 [2];
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  FName local_1e8;
  FName local_1e0;
  undefined1 local_1d8 [8];
  FName local_1d0;
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [8];
  FString local_1b0;
  FDS_DataContainer local_1a0;
  undefined1 local_f8 [64];
  void *local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [64];
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_298 = this;
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagCategoryData>
                    (param_1,(EDS_InventoryBagCategoryData)local_210);
  uVar1 = *(undefined8 *)FVar8;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)param_1,uVar7 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar8);
  pwVar21 = L"";
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  ::FString::FString((FString *)(local_260 + 0x10),pwVar17);
  pUVar10 = StaticEnum<enum_EDS_FilterType>();
  if (pUVar10 == (UEnum *)0x0) {
    uVar12 = (ulonglong)local_2d8;
  }
  else {
    iVar18 = local_248 + -1;
    if (local_248 == 0) {
      iVar18 = 0;
    }
    pFVar11 = ::FName::FName(local_208,iVar18,(wchar_t *)local_260._16_8_,FNAME_Add);
    uVar12 = UEnum::GetValueByName(pUVar10,*pFVar11,None);
  }
  local_2a0 = uVar12;
  if ((wchar_t *)local_260._16_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_260._16_8_);
  }
  local_2d0 = (UDS_M_ItemList *)(CONCAT44(local_2d0._4_4_,(int)uVar12) & 0xffffffff000000ff);
  local_2a8 = (FDS_DataContainer *)&this->_padding_;
  pUVar10 = StaticEnum<enum_EDS_FilterType>();
  DS_Util::GetStringEnumTableKey((UEnum *)local_260,(int)pUVar10);
  local_260._8_8_ = local_260._0_8_;
  pFVar9 = ::LexToString(&local_1b0,(FName *)(local_260 + 8));
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagCategoryData>
                    ((FDS_DataContainer *)&this->_padding_,CategoryNameKey);
  uVar1 = *(undefined8 *)FVar8;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar16 = local_2a8;
  pFVar13 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)local_2a8,uVar7 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar8);
  if (pFVar13 != pFVar9) {
    pFVar2 = (pFVar13->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar13->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->Data).ArrayNum = (pFVar9->Data).ArrayNum;
    (pFVar13->Data).ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  pUVar10 = StaticEnum<enum_EDS_FilterType>();
  DS_Util::GetEnumIconID(pUVar10,(EDS_SortOrder)local_2d0);
  ::FString::PrintfImpl(&local_2c8,L"%d");
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagCategoryData>
                    (pFVar16,(EDS_InventoryBagCategoryData)local_1f8);
  uVar1 = *(undefined8 *)FVar8;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)local_2a8,uVar7 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar8);
  if (pFVar9 != &local_2c8) {
    pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar9->Data).AllocatorInstance.Data = local_2c8.Data.AllocatorInstance.Data;
    local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar9->Data).ArrayNum = local_2c8.Data.ArrayNum;
    (pFVar9->Data).ArrayMax = local_2c8.Data.ArrayMax;
    local_2c8.Data.ArrayNum = 0;
    local_2c8.Data.ArrayMax = 0;
  }
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  this_01 = local_298;
  this_00 = &local_298->ItemListModel;
  bVar5 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (!bVar5) {
    local_2d0 = UDS_ModelBase::AddChildModel1<UDS_M_ItemList>((UDS_ModelBase *)this_01);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2d0 != (UDS_M_ItemList *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_2d0);
    }
    FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_2d0);
    bVar5 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<521342736914186264>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBagCategory.cpp"
                         ,0x18,"false");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FDS_DataContainer::~FDS_DataContainer(param_1);
      goto LAB_14bd02b49;
    }
  }
  local_f8._0_8_ = 0;
  local_f8._8_8_ = 0;
  local_f8._32_8_ = 0;
  local_f8._40_4_ = 0;
  local_f8._44_4_ = 0x80;
  local_f8._48_4_ = 0xffffffff;
  local_f8._52_4_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8._0_8_ = 0;
  local_a8._8_8_ = 0;
  local_a8._32_8_ = 0;
  local_a8._40_4_ = 0;
  local_a8._44_4_ = 0x80;
  local_a8._48_4_ = 0xffffffff;
  local_a8._52_4_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                    (param_1,(EDS_InventoryBagData)local_1f0);
  uVar1 = *(undefined8 *)FVar8;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)param_1,uVar7 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar8);
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_240,pwVar17);
  pUVar10 = StaticEnum<enum_EDS_SortingType>();
  EVar19 = local_2d8;
  if (pUVar10 != (UEnum *)0x0) {
    iVar18 = local_240.Data.ArrayNum + -1;
    if (local_240.Data.ArrayNum == 0) {
      iVar18 = 0;
    }
    pFVar11 = ::FName::FName(&local_1e8,iVar18,(wchar_t *)local_240.Data.AllocatorInstance.Data,
                             FNAME_Add);
    lVar14 = UEnum::GetValueByName(pUVar10,*pFVar11,None);
    EVar19 = (EDS_SortingType)lVar14;
  }
  if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data.AllocatorInstance.Data);
  }
  FDS_DataContainer::SetData<enum_EDS_SortingType,enum_EDS_ItemListData>
            ((FDS_DataContainer *)local_f8,SortType,EVar19);
  FDS_DataContainer::SetData<enum_EDS_FilterType,enum_EDS_ItemListData>
            ((FDS_DataContainer *)local_f8,FilterType,(EDS_FilterType)local_2a0);
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                    (param_1,(EDS_InventoryBagData)&local_2a0);
  uVar1 = *(undefined8 *)FVar8;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)param_1,uVar7 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar8);
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_230,pwVar17);
  pUVar10 = StaticEnum<enum_EDS_SortOrder>();
  if (pUVar10 == (UEnum *)0x0) {
    EVar20 = (EDS_SortOrder)local_2d0;
  }
  else {
    iVar18 = local_230.Data.ArrayNum + -1;
    if (local_230.Data.ArrayNum == 0) {
      iVar18 = 0;
    }
    pFVar11 = ::FName::FName(&local_1e0,iVar18,(wchar_t *)local_230.Data.AllocatorInstance.Data,
                             FNAME_Add);
    lVar14 = UEnum::GetValueByName(pUVar10,*pFVar11,None);
    EVar20 = (EDS_SortOrder)lVar14;
  }
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  FDS_DataContainer::SetData<enum_EDS_SortOrder,enum_EDS_ItemListData>
            ((FDS_DataContainer *)local_f8,SortOrderType,EVar20);
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                    (param_1,(EDS_InventoryBagData)local_1d8);
  uVar1 = *(undefined8 *)FVar8;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)param_1,uVar7 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar8);
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_220,pwVar17);
  pUVar10 = StaticEnum<enum_EDS_ItemSlotStateType>();
  if (pUVar10 != (UEnum *)0x0) {
    iVar18 = local_220.Data.ArrayNum + -1;
    if (local_220.Data.ArrayNum == 0) {
      iVar18 = 0;
    }
    pFVar11 = ::FName::FName(&local_1d0,iVar18,(wchar_t *)local_220.Data.AllocatorInstance.Data,
                             FNAME_Add);
    lVar14 = UEnum::GetValueByName(pUVar10,*pFVar11,None);
    local_2d8 = (EDS_SortingType)lVar14;
  }
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  FDS_DataContainer::SetData<enum_EDS_ItemSlotStateType,enum_EDS_ItemListData>
            ((FDS_DataContainer *)local_f8,SlotType,local_2d8);
  EVar6 = FDS_DataContainer::GetData<enum_EDS_InventoryType,enum_EDS_InventoryBagData>
                    (param_1,InventoryType);
  FDS_DataContainer::SetData<enum_EDS_InventoryType,enum_EDS_ItemListData>
            ((FDS_DataContainer *)local_f8,InventoryType,EVar6);
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemFilterData>
                    (param_1,(EDS_ItemFilterData)local_1c8);
  uVar1 = *(undefined8 *)FVar8;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)param_1,uVar7 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar8);
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  iVar18 = _wtoi(pwVar17);
  FDS_DataContainer::SetData<int,enum_EDS_ItemFilterData>
            ((FDS_DataContainer *)local_f8,SeasonGroup,iVar18);
  bVar5 = FDS_DataContainer::IsData<enum_EDS_InventoryBagData>(param_1,SelectedCharID);
  if (bVar5) {
    FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                      (param_1,(EDS_InventoryBagData)local_1c0);
    uVar1 = *(undefined8 *)FVar8;
    uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)param_1,uVar7 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar8);
    if ((pFVar9->Data).ArrayNum != 0) {
      pwVar21 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    iVar18 = _wtoi(pwVar21);
    FDS_DataContainer::SetData<int,enum_EDS_ItemListData>
              ((FDS_DataContainer *)local_f8,SelectedCharID,iVar18);
  }
  pUVar15 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  local_290 = (undefined1  [8])0x0;
  local_288 = (void *)0x0;
  local_280 = 0;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_290,param_2);
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)&pUVar15[0xf].field_0x20,
             (TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_290);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&pUVar15[1].field_0x18,Generation,true);
  pUVar15[5].field_0x18 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_290);
  if (local_288 != (void *)0x0) {
    FMemory::Free(local_288);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_290);
  pUVar15 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  local_278 = (undefined1  [8])0x0;
  local_270 = (void *)0x0;
  local_268 = 0;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_278,param_3);
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)&pUVar15[0x10].field_0x10,
             (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_278);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&pUVar15[1].field_0x18,Update,true);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_278);
  if (local_270 != (void *)0x0) {
    FMemory::Free(local_270);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_278);
  this_02 = (UDS_M_ItemList *)FWeakObjectPtr::Get(&this_00->WeakPtr);
  pFVar16 = FDS_DataContainer::FDS_DataContainer(&local_1a0,(FDS_DataContainer *)local_f8);
  UDS_M_ItemList::InitModel(this_02,pFVar16);
  pUVar15 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  pwVar21 = L"true";
  if (*(int *)(pUVar15 + 0xd) != 0) {
    pwVar21 = L"false";
  }
  ::FString::FString(&local_2b8,pwVar21);
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagCategoryData>
                    (local_2a8,(EDS_InventoryBagCategoryData)local_1b8);
  uVar1 = *(undefined8 *)FVar8;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)local_2a8,uVar7 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar8);
  if (pFVar9 != &local_2b8) {
    pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar9->Data).AllocatorInstance.Data = local_2b8.Data.AllocatorInstance.Data;
    local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar9->Data).ArrayNum = local_2b8.Data.ArrayNum;
    (pFVar9->Data).ArrayMax = local_2b8.Data.ArrayMax;
    local_2b8.Data.ArrayNum = 0;
    local_2b8.Data.ArrayMax = 0;
  }
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  local_60 = 0;
  *(undefined1 *)&local_298->_padding_ = 1;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  local_b0 = 0;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8);
  *(undefined4 *)&(param_1->ListDataMap).field_0x48 = 0;
  pvVar3 = *(void **)&(param_1->ListDataMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&param_1->ListDataMap);
  *(undefined4 *)&(param_1->DataMap).field_0x48 = 0;
  pvVar3 = *(void **)&(param_1->DataMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_1);
LAB_14bd02b49:
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return;
}

// SetCharID @ 14bd1e2c0

void __thiscall UDS_M_InventoryBagCategory::SetCharID(UDS_M_InventoryBagCategory *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
    FDS_DataContainer::SetData<int,enum_EDS_ItemListData>
              ((FDS_DataContainer *)&pUVar3[1].field_0x18,SelectedCharID,param_1);
    FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
              ((FDS_DataContainer *)&pUVar3[1].field_0x18,Update,true);
    *(undefined1 *)&this->_padding_ = 1;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<521342736914186315>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBagCategory.cpp"
                       ,0x4b,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetFilterData @ 14bd1f7a0

void __thiscall
UDS_M_InventoryBagCategory::SetFilterData
          (UDS_M_InventoryBagCategory *this,FDS_DataContainer *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FDS_DataContainer *this_00;
  FDS_DataContainer local_a8;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
    this_00 = FDS_DataContainer::FDS_DataContainer(&local_a8,param_1);
    if (*(longlong *)&pUVar3[10].field_0x18 == 0) {
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
                ((FDS_DataContainer *)&pUVar3[1].field_0x18,Generation,true);
      pUVar3[5].field_0x18 = 1;
    }
    FDS_DataContainer::~FDS_DataContainer(this_00);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<521342736914186323>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBagCategory.cpp"
                       ,0x53,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FDS_DataContainer::~FDS_DataContainer(param_1);
  return;
}

// SetFilterList @ 14bd1f930

void __thiscall
UDS_M_InventoryBagCategory::SetFilterList
          (UDS_M_InventoryBagCategory *this,TArray<__int64,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
    FDS_DataContainer::SetListData<__int64,enum_EDS_ItemListData>
              ((FDS_DataContainer *)&pUVar4[1].field_0x18,FilteredItem,param_1);
    *(undefined1 *)&this->_padding_ = 1;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<521342736914186343>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBagCategory.cpp"
                       ,0x67,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetQuantityList @ 14bd20c40

void __thiscall
UDS_M_InventoryBagCategory::SetQuantityList
          (UDS_M_InventoryBagCategory *this,
          TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_M_ItemList *this_00;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *pTVar3;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  local_58;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_M_ItemList *)FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
    pTVar3 = TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
             ::
             TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
                       (&local_58,param_1);
    UDS_M_ItemList::SetQuantityList(this_00,pTVar3);
    *(undefined1 *)&this->_padding_ = 1;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<521342736914186350>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBagCategory.cpp"
                       ,0x6e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
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

// SetSortOrderType @ 14bd21860

void __thiscall
UDS_M_InventoryBagCategory::SetSortOrderType(UDS_M_InventoryBagCategory *this,EDS_SortOrder param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
    FDS_DataContainer::SetData<enum_EDS_SortOrder,enum_EDS_ItemListData>
              ((FDS_DataContainer *)&pUVar3[1].field_0x18,SortOrderType,param_1);
    FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
              ((FDS_DataContainer *)&pUVar3[1].field_0x18,Generation,true);
    pUVar3[5].field_0x18 = 1;
    *(undefined1 *)&this->_padding_ = 1;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<521342736914186308>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBagCategory.cpp"
                       ,0x44,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetSortType @ 14bd21cb0

void __thiscall
UDS_M_InventoryBagCategory::SetSortType(UDS_M_InventoryBagCategory *this,EDS_SortingType param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
    FDS_DataContainer::SetData<enum_EDS_SortingType,enum_EDS_ItemListData>
              ((FDS_DataContainer *)&pUVar3[1].field_0x18,SortType,param_1);
    FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
              ((FDS_DataContainer *)&pUVar3[1].field_0x18,Generation,true);
    pUVar3[5].field_0x18 = 1;
    *(undefined1 *)&this->_padding_ = 1;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<521342736914186300>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBagCategory.cpp"
                       ,0x3c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

