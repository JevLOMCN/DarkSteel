// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 36

// StaticClass @ 14b50a690

UClass * __cdecl UDS_M_InventoryBag::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_InventoryBag.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_InventoryBag",
               &Z_Registration_Info_UClass_UDS_M_InventoryBag.InnerSingleton,
               StaticRegisterNativesUDS_M_InventoryBag,0x270,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_InventoryBag>,
               InternalVTableHelperCtorCaller<UDS_M_InventoryBag>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_InventoryBag.InnerSingleton;
}

// UDS_M_InventoryBag @ 14b511580

UDS_M_InventoryBag * __thiscall
UDS_M_InventoryBag::UDS_M_InventoryBag(UDS_M_InventoryBag *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_InventoryBag__6B_;
  (this->CategoryModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryModelList).ArrayNum = 0;
  (this->CategoryModelList).ArrayMax = 0;
  (this->ReleasedCategoryModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReleasedCategoryModelList).ArrayNum = 0;
  (this->ReleasedCategoryModelList).ArrayMax = 0;
  (this->TabModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabModelList).ArrayNum = 0;
  (this->TabModelList).ArrayMax = 0;
  (this->ReleasedTabModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReleasedTabModelList).ArrayNum = 0;
  (this->ReleasedTabModelList).ArrayMax = 0;
  (this->InventoryWeightModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->InventoryWeightModel).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->QuantityList = 0;
  *(undefined8 *)&(this->QuantityList).field_0x8 = 0;
  *(undefined8 *)&(this->QuantityList).field_0x20 = 0;
  *(undefined4 *)&(this->QuantityList).field_0x28 = 0;
  *(undefined4 *)&(this->QuantityList).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuantityList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QuantityList).field_0x34 = 0;
  *(undefined8 *)&(this->QuantityList).field_0x40 = 0;
  *(undefined4 *)&(this->QuantityList).field_0x48 = 0;
  *(undefined8 *)&this->OnCustomFilterDelegate = 0;
  *(undefined8 *)&(this->OnCustomFilterDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnCustomFilterDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnCustomSlotUpdateDelegate = 0;
  *(undefined8 *)&(this->OnCustomSlotUpdateDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnCustomSlotUpdateDelegate).field_0x10 = 0;
  return this;
}

// UDS_M_InventoryBag @ 14b511670

UDS_M_InventoryBag * __thiscall
UDS_M_InventoryBag::UDS_M_InventoryBag(UDS_M_InventoryBag *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_InventoryBag__6B_;
  (this->CategoryModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryModelList).ArrayNum = 0;
  (this->CategoryModelList).ArrayMax = 0;
  (this->ReleasedCategoryModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReleasedCategoryModelList).ArrayNum = 0;
  (this->ReleasedCategoryModelList).ArrayMax = 0;
  (this->TabModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabModelList).ArrayNum = 0;
  (this->TabModelList).ArrayMax = 0;
  (this->ReleasedTabModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReleasedTabModelList).ArrayNum = 0;
  (this->ReleasedTabModelList).ArrayMax = 0;
  (this->InventoryWeightModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->InventoryWeightModel).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->QuantityList = 0;
  *(undefined8 *)&(this->QuantityList).field_0x8 = 0;
  *(undefined8 *)&(this->QuantityList).field_0x20 = 0;
  *(undefined4 *)&(this->QuantityList).field_0x28 = 0;
  *(undefined4 *)&(this->QuantityList).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuantityList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QuantityList).field_0x34 = 0;
  *(undefined8 *)&(this->QuantityList).field_0x40 = 0;
  *(undefined4 *)&(this->QuantityList).field_0x48 = 0;
  *(undefined8 *)&this->OnCustomFilterDelegate = 0;
  *(undefined8 *)&(this->OnCustomFilterDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnCustomFilterDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnCustomSlotUpdateDelegate = 0;
  *(undefined8 *)&(this->OnCustomSlotUpdateDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnCustomSlotUpdateDelegate).field_0x10 = 0;
  return this;
}

// ~UDS_M_InventoryBag @ 14b512fe0

void __thiscall UDS_M_InventoryBag::~UDS_M_InventoryBag(UDS_M_InventoryBag *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_M_InventoryBag__6B_;
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
  pFVar2 = (this->ReleasedTabModelList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TabModelList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ReleasedCategoryModelList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CategoryModelList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b516080

UClass * __cdecl UDS_M_InventoryBag::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_InventoryBag.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_InventoryBag",
               &Z_Registration_Info_UClass_UDS_M_InventoryBag.InnerSingleton,
               StaticRegisterNativesUDS_M_InventoryBag,0x270,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_InventoryBag>,
               InternalVTableHelperCtorCaller<UDS_M_InventoryBag>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_InventoryBag.InnerSingleton;
}

// StaticRegisterNativesUDS_M_InventoryBag @ 14b516d20

void __cdecl UDS_M_InventoryBag::StaticRegisterNativesUDS_M_InventoryBag(void)

{
  return;
}

// AddFilteredItemUID @ 14bce8020

/* WARNING: Removing unreachable block (ram,0x00014bce8149) */

void __thiscall UDS_M_InventoryBag::AddFilteredItemUID(UDS_M_InventoryBag *this,long64 param_1)

{
  FWeakObjectPtr *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FName FVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  int iVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  undefined1 local_res18 [8];
  FString local_58;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_InventoryBagData)local_res18);
  uVar2 = *(undefined8 *)FVar7;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  pTVar8 = TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->_padding_,uVar5 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar7);
  ::FString::PrintfImpl(&local_58,L"%lld");
  pFVar11 = (pTVar8->AllocatorInstance).Data;
  if (((pFVar11 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 < pFVar11 + (longlong)pTVar8->ArrayMax * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = pTVar8->ArrayNum;
  if (iVar6 == pTVar8->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar6 + 1;
  pFVar11 = (pTVar8->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar11 = 0;
  *(FScriptContainerElement **)pFVar11 = local_58.Data.AllocatorInstance.Data;
  *(int *)(pFVar11 + 8) = local_58.Data.ArrayNum;
  *(int *)(pFVar11 + 0xc) = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40 = (this->CategoryModelList).ArrayNum;
  lVar14 = (longlong)local_40;
  pFVar11 = (this->CategoryModelList).AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (local_40 == 0) {
    local_3c = 0;
    iVar6 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,pFVar11,lVar14 << 3);
    iVar6 = local_40;
  }
  pFVar1 = (FWeakObjectPtr *)(local_48.Data + (longlong)iVar6 * 8);
  FVar12.Data = local_48.Data;
  iVar13 = iVar6;
  while( true ) {
    if (iVar13 != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_InventoryBagCategory,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)FVar12.Data == pFVar1) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      *(undefined1 *)&this->_padding_ = 1;
      return;
    }
    local_res10 = *(FWeakObjectPtr *)FVar12.Data;
    bVar4 = FWeakObjectPtr::IsValid(&local_res10);
    if (!bVar4) break;
    pUVar9 = FWeakObjectPtr::Get(&local_res10);
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar9[10].field_0x18);
    if (bVar4) {
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar9[10].field_0x18);
      FDS_DataContainer::AddListData<__int64,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar10[1].field_0x18,FilteredItem,param_1);
      pUVar9[5].field_0x18 = 1;
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<521342736914186336>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBagCategory.cpp"
                         ,0x60,"false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FVar12.Data = FVar12.Data + 8;
    iVar13 = local_40;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6834028579869687482>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBag.cpp"
                     ,0x146,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_48.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_48.Data);
  return;
}

// BindViewModel @ 14bce9860

void __thiscall
UDS_M_InventoryBag::BindViewModel
          (UDS_M_InventoryBag *this,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_1)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  bool bVar4;
  UObject *pUVar5;
  UDS_UserWidget *this_00;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint auStackX_8 [2];
  FWeakObjectPtr FStackX_10;
  FWeakObjectPtr FStackX_18;
  FName FStackX_20;
  UDS_UserWidget *pUStack_a8;
  UObject *pUStack_a0;
  ForAnyElementType FStack_98;
  int iStack_90;
  int iStack_8c;
  FString FStack_88;
  FScriptContainerElement *pFStack_78;
  int iStack_70;
  undefined4 uStack_6c;
  TSharedPtr<FDS_ViewModelContext,1> TStack_68;
  TStringView<wchar_t> TStack_58;
  undefined1 auStack_48 [8];
  TReferenceControllerBase<1> *pTStack_40;
  
  bVar4 = false;
  auStackX_8[0] = 0;
  FStackX_10 = param_1.WeakPtr;
  if (this->_padding_ == 0) {
LAB_14bce9983:
    bVar3 = false;
  }
  else {
    pUVar5 = FWeakObjectPtr::Get(&FStackX_10);
    FStackX_20.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
    FStackX_20.Number = *(uint *)&pUVar5->field_0x1c;
    ::FName::ToString(&FStackX_20,&FStack_88);
    _Src.Data = FStack_88.Data.AllocatorInstance.Data;
    FStack_98.Data = (FScriptContainerElement *)0x0;
    iStack_90 = FStack_88.Data.ArrayNum;
    if (FStack_88.Data.ArrayNum == 0) {
      iStack_8c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,FStack_88.Data.ArrayNum,0,&FStack_98,FStack_88.Data.ArrayNum,&iStack_8c);
      memcpy(FStack_98.Data,_Src.Data,(longlong)FStack_88.Data.ArrayNum * 2);
    }
    iStack_70 = iStack_90 + -1;
    if (iStack_90 == 0) {
      iStack_70 = 0;
    }
    TStack_58._12_4_ = uStack_6c;
    TStack_58.Size = iStack_70;
    pFStack_78 = FStack_98.Data;
    TStack_58.DataPtr = (wchar_t *)FStack_98.Data;
    bVar3 = ::FName::Equals((FName)this->_padding_,&TStack_58);
    if (FStack_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_98.Data);
    }
    bVar4 = true;
    if (bVar3) goto LAB_14bce9983;
    bVar3 = true;
  }
  if ((bVar4) && (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    this_00 = (UDS_UserWidget *)FWeakObjectPtr::Get(&FStackX_10);
    pUStack_a8 = UDS_UserWidget::FindChildWidget(this_00,(FName)this->_padding_);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUStack_a8 != (UDS_UserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUStack_a8);
    }
    FWeakObjectPtr::operator=(&FStackX_10,(FObjectPtr)&pUStack_a8);
    bVar4 = FWeakObjectPtr::IsValid(&FStackX_10);
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1502362375976648847>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_ModelBase.cpp"
                         ,0x8f,"false");
      if (!bVar4) {
        return;
      }
      goto code_r0x00014bce9b60;
    }
  }
  if ((char)this->_padding_ != '\0') {
    puVar6 = (undefined8 *)(**(code **)(this->_padding_ + 0x310))(this,auStack_48);
    TStack_68.Object = (FDS_ViewModelContext *)*puVar6;
    TStack_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar6[1];
    if (TStack_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)FStackX_10,&TStack_68,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  }
  puVar7 = (undefined8 *)this->_padding_;
  iVar1 = (int)this->_padding_;
  puVar6 = puVar7 + iVar1;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      auStackX_8[0] = auStackX_8[0] & 0xffffff00;
      `TCheckedPointerIterator<TObjectPtr<UDS_ModelBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (puVar7 == puVar6) {
      return;
    }
    pUVar5 = (UObject *)*puVar7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar5 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
    }
    FStackX_18.ObjectIndex = 0;
    FStackX_18.ObjectSerialNumber = 0;
    pUStack_a0 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&FStackX_18,(FObjectPtr)&pUStack_a0);
    bVar4 = FWeakObjectPtr::IsValid(&FStackX_18);
    if (!bVar4) break;
    pUVar5 = FWeakObjectPtr::Get(&FStackX_18);
    (**(code **)(*(longlong *)pUVar5 + 0x2e8))(pUVar5,FStackX_10);
    puVar7 = puVar7 + 1;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1502362375976648860>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_ModelBase.cpp"
                     ,0x9c,"false");
  if (!bVar4) {
    return;
  }
code_r0x00014bce9b60:
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// ClearFilteredItemUID @ 14bceae60

void __thiscall UDS_M_InventoryBag::ClearFilteredItemUID(UDS_M_InventoryBag *this)

{
  FWeakObjectPtr *pFVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  UObject *pUVar8;
  UObject *pUVar9;
  longlong *plVar10;
  ForAnyElementType FVar11;
  int iVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  FName local_res10;
  FWeakObjectPtr local_res18 [2];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
            ((FDS_DataContainer *)&this->_padding_,(EDS_InventoryBagData)&local_res10);
  FVar3 = local_res10;
  uVar5 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar10 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar10 = &this->_padding_;
    }
    iVar6 = *(int *)((longlong)plVar10 +
                    (ulonglong)((int)this->_padding_ - 1U & FVar3.Number + uVar5) * 4);
    if (iVar6 != -1) {
      lVar13 = this->_padding_;
      do {
        if (*(FName *)((longlong)iVar6 * 0x20 + lVar13) == FVar3) {
          pTVar7 = TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked((TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                                  *)&this->_padding_,local_res10);
          DestructItems<FString,int>((FString *)(pTVar7->AllocatorInstance).Data,pTVar7->ArrayNum);
          pTVar7->ArrayNum = 0;
          if (pTVar7->ArrayMax != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&pTVar7->AllocatorInstance,0,&pTVar7->ArrayMax);
          }
          break;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar13);
      } while (iVar6 != -1);
    }
  }
  local_40 = (this->CategoryModelList).ArrayNum;
  lVar13 = (longlong)local_40;
  _Src = (this->CategoryModelList).AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (local_40 == 0) {
    local_3c = 0;
    iVar6 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,_Src,lVar13 << 3);
    iVar6 = local_40;
  }
  pFVar1 = (FWeakObjectPtr *)(local_48.Data + (longlong)iVar6 * 8);
  FVar11.Data = local_48.Data;
  iVar12 = iVar6;
  while( true ) {
    if (iVar12 != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_InventoryBagCategory,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)FVar11.Data == pFVar1) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      *(undefined1 *)&this->_padding_ = 1;
      return;
    }
    local_res18[0] = *(FWeakObjectPtr *)FVar11.Data;
    bVar4 = FWeakObjectPtr::IsValid(local_res18);
    if (!bVar4) break;
    pUVar8 = FWeakObjectPtr::Get(local_res18);
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar8[10].field_0x18);
    if (bVar4) {
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar8[10].field_0x18);
      FDS_DataContainer::ClearListData<enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar9[1].field_0x18,FilteredItem);
      pUVar8[5].field_0x18 = 1;
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<521342736914186329>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBagCategory.cpp"
                         ,0x59,"false");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar11.Data = FVar11.Data + 8;
    iVar12 = local_40;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6834028579869687494>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBag.cpp"
                     ,0x13a,"false");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_48.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_48.Data);
  return;
}

// ClearQuantityList @ 14bceb2c0

void __thiscall UDS_M_InventoryBag::ClearQuantityList(UDS_M_InventoryBag *this)

{
  undefined1 *puVar1;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->QuantityList;
  bVar3 = 1 < *(int *)&(this->QuantityList).field_0x48;
  if (!bVar3) {
    TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->QuantityList).field_0xc;
  *(undefined4 *)&(this->QuantityList).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->QuantityList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QuantityList).field_0x34 = 0;
  iVar2 = *(int *)&(this->QuantityList).field_0x2c;
  *(undefined4 *)&(this->QuantityList).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->QuantityList).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->QuantityList).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->QuantityList).field_0x48 = 1;
    TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  ResetQuantityList(this);
  return;
}

// GenerateInventoryBagCategory @ 14bcf3370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_M_InventoryBag::GenerateInventoryBagCategory(UDS_M_InventoryBag *this)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UDS_M_InventoryBagCategory,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<TWeakObjectPtr<UDS_M_InventoryBagCategory,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  FScriptContainerElement FVar4;
  FWeakObjectPtr FVar5;
  undefined8 uVar6;
  FWeakObjectPtr *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  EDS_BagType EVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  FDS_InventoryBagTableRow *pFVar16;
  ulonglong uVar17;
  UClass *pUVar18;
  UDS_ModelBase *pUVar19;
  UEnum *this_00;
  FName FVar20;
  longlong *plVar21;
  FString *pFVar22;
  UDS_M_InventoryBagCategory *this_01;
  UObject *pUVar23;
  wchar_t *pwVar24;
  FScriptContainerElement *pFVar25;
  ForElementType<FSetElementId> FVar26;
  FScriptContainerElement *pFVar27;
  undefined1 auStackY_378 [32];
  undefined1 local_328 [8];
  FWeakObjectPtr local_320;
  uint local_318;
  FWeakObjectPtr local_310;
  FString local_308;
  undefined8 local_2f8;
  UDS_ModelBase *local_2f0;
  FDS_InventoryBagTableRow *local_2e8;
  FScriptContainerElement *local_2e0;
  UDS_M_InventoryBag *local_2d8;
  UObject *local_2d0;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_2c8;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_2b0;
  undefined1 local_298 [8];
  undefined1 local_290 [8];
  undefined1 local_288 [72];
  int local_240;
  undefined1 local_238 [64];
  undefined8 local_1f8;
  int local_1f0 [2];
  undefined1 local_1e8 [128];
  undefined1 local_168 [128];
  undefined1 local_e8 [64];
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [64];
  void *local_58;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_378;
  EVar11 = FDS_DataContainer::GetData<enum_EDS_BagType,enum_EDS_InventoryBagData>
                     ((FDS_DataContainer *)&this->_padding_,BagType);
  pFVar16 = FDS_InventoryBagTableRow::Get((ulonglong)EVar11,true);
  local_2e8 = pFVar16;
  if (pFVar16 == (FDS_InventoryBagTableRow *)0x0) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_6834028579869687669>,false,
                        "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBag.cpp"
                        ,0x8b,"false");
    if (bVar12) {
code_r0x00014bcf3ab9:
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    pTVar2 = &this->ReleasedCategoryModelList;
    pTVar3 = &this->CategoryModelList;
    if ((pTVar2 == pTVar3) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x986,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar15 = (this->CategoryModelList).ArrayNum;
    if (iVar15 != 0) {
      iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,4,iVar15,&pTVar2->AllocatorInstance,
                          &(this->ReleasedCategoryModelList).ArrayNum,
                          &(this->ReleasedCategoryModelList).ArrayMax);
      memmove((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 8,
              (pTVar3->AllocatorInstance).Data,(longlong)iVar15 << 3);
      (this->CategoryModelList).ArrayNum = 0;
    }
    uVar10 = _UNK_150631d98;
    uVar9 = ___xmm_00000000ffffffff0000008000000000;
    local_318 = (pFVar16->ItemFilter).ArrayNum;
    uVar17 = (ulonglong)(int)local_318;
    pFVar27 = (pFVar16->ItemFilter).AllocatorInstance.Data;
    local_2e0 = pFVar27 + uVar17;
    while( true ) {
      pFVar25 = local_2e0;
      if ((pFVar16->ItemFilter).ArrayNum != (int)uVar17) {
        local_328[0] = 0;
        `TCheckedPointerIterator<enum_EDS_FilterType_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_328);
      }
      if (pFVar27 == pFVar25) break;
      local_320.ObjectIndex = 0;
      local_320.ObjectSerialNumber = 0;
      local_2f8 = 0;
      FWeakObjectPtr::operator=(&local_320,(FObjectPtr)&local_2f8);
      iVar15 = (this->ReleasedCategoryModelList).ArrayNum;
      if (iVar15 == 0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar18 = Z_Construct_UClass_UDS_M_InventoryBagCategory_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_1e8,pUVar18);
        local_1e8._8_8_ = this;
        pUVar19 = (UDS_ModelBase *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1e8);
        if (local_1e8._64_8_ != 0) {
          plVar21 = (longlong *)(local_1e8 + 0x50);
          if ((longlong *)local_1e8._104_8_ != (longlong *)0x0) {
            plVar21 = (longlong *)local_1e8._104_8_;
          }
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
        UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar19);
        local_2f0 = pUVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar19 != (UDS_ModelBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar19);
        }
        FWeakObjectPtr::operator=(&local_320,(FObjectPtr)&local_2f0);
      }
      else {
        if ((iVar15 < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar15 = (this->ReleasedCategoryModelList).ArrayNum;
        iVar13 = iVar15 + -1;
        FVar5 = *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 8 + -8);
        (this->ReleasedCategoryModelList).ArrayNum = iVar13;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&pTVar2->AllocatorInstance,iVar13,&(this->ReleasedCategoryModelList).ArrayMax
                  );
        local_320 = FVar5;
      }
      bVar12 = FWeakObjectPtr::IsValid(&local_320);
      if (!bVar12) {
        bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_6834028579869687653>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBag.cpp"
                            ,0x9b,"false");
        if (!bVar12) {
          return;
        }
        goto code_r0x00014bcf3ab9;
      }
      local_e8._0_8_ = 0;
      local_e8._8_8_ = 0;
      local_e8._32_8_ = 0;
      local_e8._40_4_ = 0;
      local_e8._44_4_ = 0x80;
      local_e8._48_4_ = 0xffffffff;
      local_e8._52_4_ = 0;
      local_a8 = (ForElementType<FSetElementId>)0x0;
      local_a0 = 0;
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)local_e8,
                  (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)&this->_padding_);
      local_98._0_8_ = 0;
      local_98._8_8_ = 0;
      local_98._32_8_ = 0;
      local_98._40_4_ = 0;
      local_98._44_4_ = 0x80;
      local_98._48_4_ = 0xffffffff;
      local_98._52_4_ = 0;
      local_58 = (void *)0x0;
      local_50[0] = 0;
      if ((longlong *)local_98 != &this->_padding_) {
        UE::Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(local_98 + 0x38),local_50,
                   (ForElementType<FSetElementId> *)&this->_padding_,(int)this->_padding_);
        TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,
                    (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->_padding_);
      }
      FVar4 = *pFVar27;
      this_00 = StaticEnum<enum_EDS_FilterType>();
      if (this_00 == (UEnum *)0x0) {
        ::FString::FString(&local_308,L"");
      }
      else {
        UEnum::GetNameStringByValue(this_00,&local_308,(ulonglong)(byte)FVar4);
      }
      FVar20 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagCategoryData>
                         ((FDS_DataContainer *)local_e8,(EDS_InventoryBagCategoryData)local_298);
      uVar6 = *(undefined8 *)FVar20;
      uVar14 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
      uVar14 = uVar14 + (int)((ulonglong)uVar6 >> 0x20);
      if (local_e8._8_4_ != local_e8._52_4_) {
        FVar26 = (ForElementType<FSetElementId>)((longlong)local_e8 + 0x38);
        if (local_a8 != (ForElementType<FSetElementId>)0x0) {
          FVar26 = local_a8;
        }
        iVar15 = *(int *)((longlong)FVar26 + (ulonglong)(local_a0 - 1U & uVar14) * 4);
        if (iVar15 != -1) {
          do {
            plVar21 = (longlong *)((longlong)iVar15 * 0x20 + local_e8._0_8_);
            if (*plVar21 == *(longlong *)FVar20) {
              if (plVar21 != (longlong *)0x0) {
                pFVar22 = (FString *)(plVar21 + 1);
                goto LAB_14bcf379c;
              }
              break;
            }
            iVar15 = (int)plVar21[3];
          } while (iVar15 != -1);
        }
      }
      pFVar22 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::EmplaceByHash<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)local_e8,uVar14,(FName *)FVar20);
LAB_14bcf379c:
      iVar15 = local_308.Data.ArrayNum + -1;
      if (local_308.Data.ArrayNum == 0) {
        iVar15 = 0;
      }
      ::FString::AssignRange(pFVar22,(wchar_t *)local_308.Data.AllocatorInstance.Data,iVar15);
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
      this_01 = (UDS_M_InventoryBagCategory *)FWeakObjectPtr::Get(&local_320);
      local_2c8._0_8_ = 0;
      local_2c8._8_8_ = 0;
      local_2c8._16_4_ = 0;
      TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
      ::CopyFrom<FDefaultDelegateUserPolicy>(&local_2c8,&this->OnCustomSlotUpdateDelegate);
      local_2b0._0_8_ = 0;
      local_2b0._8_8_ = 0;
      local_2b0._16_4_ = 0;
      TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
      ::CopyFrom<FDefaultDelegateUserPolicy>(&local_2b0,&this->OnCustomFilterDelegate);
      local_288._0_8_ = 0;
      local_288._8_8_ = 0;
      local_288._32_8_ = 0;
      local_288._40_8_ = uVar9;
      local_288._48_8_ = uVar10;
      local_288._64_8_ = (ForElementType<FSetElementId>)0x0;
      local_240 = 0;
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)local_288,
                  (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)local_e8);
      local_238._0_8_ = 0;
      local_238._8_8_ = 0;
      local_238._32_8_ = 0;
      local_238._40_8_ = uVar9;
      local_238._48_8_ = uVar10;
      local_1f8 = 0;
      local_1f0[0] = 0;
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)(local_238 + 0x38),local_1f0,
                 (ForElementType<FSetElementId> *)(local_98 + 0x38),local_50[0]);
      TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_238,
                  (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_98);
      UDS_M_InventoryBagCategory::InitModel
                (this_01,(FDS_DataContainer *)local_288,&local_2b0,&local_2c8);
      pUVar23 = FWeakObjectPtr::Get(&local_320);
      FVar20 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagCategoryData>
                         ((FDS_DataContainer *)&pUVar23[1].field_0x18,
                          (EDS_InventoryBagCategoryData)local_290);
      uVar6 = *(undefined8 *)FVar20;
      uVar14 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
      pFVar22 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::FindOrAddImpl<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)&pUVar23[1].field_0x18,uVar14 + (int)((ulonglong)uVar6 >> 0x20),
                           (FName *)FVar20);
      if ((pFVar22->Data).ArrayNum == 0) {
        pwVar24 = L"";
      }
      else {
        pwVar24 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
      }
      bVar12 = FToBoolHelper::FromCStringWide(pwVar24);
      if (bVar12) {
        pFVar7 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
        if (((pFVar7 <= &local_320) &&
            (&local_320 < pFVar7 + (this->ReleasedCategoryModelList).ArrayMax)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar15 = (this->ReleasedCategoryModelList).ArrayNum;
        piVar1 = &(this->ReleasedCategoryModelList).ArrayMax;
        if (iVar15 == *piVar1) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->ReleasedCategoryModelList).ArrayNum = iVar15 + 1;
        pFVar25 = (pTVar2->AllocatorInstance).Data;
      }
      else {
        pFVar7 = (FWeakObjectPtr *)(pTVar3->AllocatorInstance).Data;
        if (((pFVar7 <= &local_320) && (&local_320 < pFVar7 + (this->CategoryModelList).ArrayMax))
           && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar15 = (this->CategoryModelList).ArrayNum;
        piVar1 = &(this->CategoryModelList).ArrayMax;
        if (iVar15 == *piVar1) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->CategoryModelList).ArrayNum = iVar15 + 1;
        pFVar25 = (pTVar3->AllocatorInstance).Data;
      }
      *(FWeakObjectPtr *)(pFVar25 + (longlong)iVar15 * 8) = local_320;
      local_50[0] = 0;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      local_a0 = 0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
      uVar17 = (ulonglong)local_318;
      pFVar27 = pFVar27 + 1;
      pFVar16 = local_2e8;
    }
    ResetFilterList(this);
    ResetQuantityList(this);
    FDS_DataContainer::SetData<int,enum_EDS_InventoryBagData>
              ((FDS_DataContainer *)&this->_padding_,CategoryNum,(this->CategoryModelList).ArrayNum)
    ;
    *(undefined1 *)&this->_padding_ = 1;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar18 = Z_Construct_UClass_UDS_ModelEventInventoryBag_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_168,pUVar18);
    local_168._8_8_ = this;
    pUVar23 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_168);
    if (local_168._64_8_ != 0) {
      plVar21 = (longlong *)(local_168 + 0x50);
      if ((longlong *)local_168._104_8_ != (longlong *)0x0) {
        plVar21 = (longlong *)local_168._104_8_;
      }
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar23 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar23);
    }
    local_2d8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pUVar23 + 1),(FObjectPtr)&local_2d8);
    *(undefined4 *)&pUVar23[5].field_0x8 = 1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (UE::GC::MarkAsReachable(pUVar23), UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable(pUVar23);
    }
    local_310.ObjectIndex = 0;
    local_310.ObjectSerialNumber = 0;
    local_2d0 = pUVar23;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar23);
    }
    FWeakObjectPtr::operator=(&local_310,(FObjectPtr)&local_2d0);
    UDS_ModelBase::UpdateModel
              ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_310);
  }
  return;
}

// GetBagTitle @ 14bcf5870

FDS_Text * __thiscall
UDS_M_InventoryBag::GetBagTitle(UDS_M_InventoryBag *this,FDS_Text *__return_storage_ptr__)

{
  code *pcVar1;
  EDS_BagGroupType EVar2;
  bool bVar3;
  FDS_InventoryBagGroupTableRow *pFVar4;
  FDS_Text *pFVar5;
  
  EVar2 = FDS_DataContainer::GetData<enum_EDS_BagGroupType,enum_EDS_InventoryBagData>
                    ((FDS_DataContainer *)&this->_padding_,BagGroupType);
  pFVar4 = FDS_InventoryBagGroupTableRow::Get((ulonglong)EVar2,true);
  if (pFVar4 != (FDS_InventoryBagGroupTableRow *)0x0) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    __return_storage_ptr__->StringTableID = (pFVar4->ID_BagTitle).ID;
    __return_storage_ptr__->StringTableType = StringUi;
    return __return_storage_ptr__;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6834028579869687549>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBag.cpp"
                     ,0x103,"false");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FDS_Text *)(*pcVar1)();
    return pFVar5;
  }
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetInventoryBagCategoryModelList @ 14bcf8700

TArray<TWeakObjectPtr<UDS_M_InventoryBagCategory,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *
__thiscall
UDS_M_InventoryBag::GetInventoryBagCategoryModelList
          (UDS_M_InventoryBag *this,
          TArray<TWeakObjectPtr<UDS_M_InventoryBagCategory,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->CategoryModelList).ArrayNum;
  _Src = (this->CategoryModelList).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return __return_storage_ptr__;
}

// GetInventoryBagTabModelList @ 14bcf87a0

TArray<TWeakObjectPtr<UDS_M_InventoryBagTabBtn,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *
__thiscall
UDS_M_InventoryBag::GetInventoryBagTabModelList
          (UDS_M_InventoryBag *this,
          TArray<TWeakObjectPtr<UDS_M_InventoryBagTabBtn,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->TabModelList).ArrayNum;
  _Src = (this->TabModelList).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return __return_storage_ptr__;
}

// GetItemModelList @ 14bcf8a70

TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_M_InventoryBag::GetItemModelList
          (UDS_M_InventoryBag *this,
          TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FWeakObjectPtr *pFVar1;
  FScriptContainerElement *_Src;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UObject *pUVar7;
  UDS_M_ItemList *this_00;
  FName FVar8;
  FString *pFVar9;
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar10;
  wchar_t *pwVar11;
  atomic<unsigned_char> *paVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  ForAnyElementType FVar16;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  undefined1 local_res20 [8];
  ForAnyElementType local_58;
  int local_50;
  int local_4c [3];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_50 = (this->CategoryModelList).ArrayNum;
  lVar14 = (longlong)local_50;
  _Src = (this->CategoryModelList).AllocatorInstance.Data;
  local_58.Data = (FScriptContainerElement *)0x0;
  if (local_50 == 0) {
    local_4c[0] = 0;
    iVar15 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_50,0,&local_58,local_50,local_4c);
    memcpy(local_58.Data,_Src,lVar14 << 3);
    iVar15 = local_50;
  }
  pFVar1 = (FWeakObjectPtr *)(local_58.Data + (longlong)iVar15 * 8);
  FVar16.Data = local_58.Data;
  iVar13 = iVar15;
  while( true ) {
    if (iVar13 != iVar15) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_InventoryBagCategory,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)FVar16.Data == pFVar1) goto LAB_14bcf8cc8;
    local_res10 = *(FWeakObjectPtr *)FVar16.Data;
    bVar4 = FWeakObjectPtr::IsValid(&local_res10);
    if (!bVar4) break;
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    local_res18.ObjectIndex = *(int *)&pUVar7[10].field_0x18;
    local_res18.ObjectSerialNumber = *(int *)&pUVar7[10].field_0x1c;
    bVar4 = FWeakObjectPtr::IsValid(&local_res18);
    if (!bVar4) {
      iVar15 = 0xe7;
      paVar12 = &bGEnsureHasExecuted<_6834028579869687577>;
      goto LAB_14bcf8ca8;
    }
    this_00 = (UDS_M_ItemList *)FWeakObjectPtr::Get(&local_res18);
    FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemListData>
                      ((FDS_DataContainer *)&this_00->_padding_,(EDS_ItemListData)local_res20);
    uVar2 = *(undefined8 *)FVar8;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)&this_00->_padding_,uVar5 + (int)((ulonglong)uVar2 >> 0x20),
                        (FName *)FVar8);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    bVar4 = FToBoolHelper::FromCStringWide(pwVar11);
    if (bVar4) {
      (**(code **)(this_00->_padding_ + 800))(this_00);
    }
    bVar4 = UDS_M_ItemList::IsSlotUpdateDirty(this_00);
    if (bVar4) {
      (**(code **)(this_00->_padding_ + 0x350))(this_00);
    }
    if (__return_storage_ptr__ == &this_00->UsedItemModelList) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                   *)(*pcVar3)();
        return pTVar10;
      }
    }
    iVar13 = (this_00->UsedItemModelList).ArrayNum;
    if (iVar13 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,iVar13,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8,
             (this_00->UsedItemModelList).AllocatorInstance.Data,(longlong)iVar13 << 3);
    }
    FVar16.Data = FVar16.Data + 8;
    iVar13 = local_50;
  }
  iVar15 = 0xe4;
  paVar12 = &bGEnsureHasExecuted<_6834028579869687580>;
LAB_14bcf8ca8:
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar12,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBag.cpp"
                     ,iVar15,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
               *)(*pcVar3)();
    return pTVar10;
  }
LAB_14bcf8cc8:
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return __return_storage_ptr__;
}

// GetViewModelContext @ 14bcff810

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_InventoryBag::GetViewModelContext
          (UDS_M_InventoryBag *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  *(undefined4 *)&this->_padding_ = 0x188;
  UDS_ModelBase::GetViewModelContext((UDS_ModelBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InitModel @ 14bd01e40

void __thiscall
UDS_M_InventoryBag::InitModel
          (UDS_M_InventoryBag *this,FDS_DataContainer *param_1,
          TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          *param_2,TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                   *param_3)

{
  EDS_ItemSlotStateType EVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  EDS_BagGroupType EVar5;
  bool bVar6;
  EDS_InventoryType EVar7;
  uint uVar8;
  FDS_InventoryBagGroupTableRow *pFVar9;
  UEnum *pUVar10;
  FName FVar11;
  FString *pFVar12;
  UObject *pUVar13;
  FName *pFVar14;
  UDS_M_Weight *this_00;
  undefined1 local_f8 [8];
  ForAnyElementType local_f0;
  int local_e8;
  undefined1 local_e0 [8];
  ForAnyElementType local_d8;
  int local_d0;
  FDS_DataContainer *local_c8;
  FString local_c0;
  FString local_b0;
  UDS_M_Weight *local_a0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  FName local_58 [3];
  
  local_c8 = param_1;
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
  FDS_DataContainer::SetData<enum_EDS_SortOrder,enum_EDS_InventoryBagData>
            ((FDS_DataContainer *)&this->_padding_,SortOrderType,Descend);
  local_f8 = (undefined1  [8])0x0;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 0;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_f8,param_2);
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnCustomFilterDelegate,
             (TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_f8);
  *(undefined1 *)&this->_padding_ = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_98);
  if ((local_e8 != 0) && (local_f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f0,0,0,0x10);
    local_e8 = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f8);
  local_e0 = (undefined1  [8])0x0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_e0,param_3);
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnCustomSlotUpdateDelegate,
             (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_e0);
  *(undefined1 *)&this->_padding_ = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
             (FWriteAccessScope *)&local_80);
  if ((local_d0 != 0) && (local_d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d8,0,0,0x10);
    local_d0 = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e0);
  EVar5 = FDS_DataContainer::GetData<enum_EDS_BagGroupType,enum_EDS_InventoryBagData>
                    ((FDS_DataContainer *)&this->_padding_,BagGroupType);
  pFVar9 = FDS_InventoryBagGroupTableRow::Get((ulonglong)EVar5,true);
  if (pFVar9 == (FDS_InventoryBagGroupTableRow *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6834028579869687754>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBag.cpp"
                       ,0x36,"false");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    EVar1 = pFVar9->ID_ItemSlotState;
    pUVar10 = StaticEnum<enum_EDS_ItemSlotStateType>();
    if (pUVar10 == (UEnum *)0x0) {
      ::FString::FString(&local_c0,L"");
    }
    else {
      UEnum::GetNameStringByValue(pUVar10,&local_c0,(ulonglong)EVar1);
    }
    FVar11 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                       ((FDS_DataContainer *)&this->_padding_,(EDS_InventoryBagData)local_68);
    uVar2 = *(undefined8 *)FVar11;
    uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar12 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&this->_padding_,uVar8 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar11
                        );
    iVar4 = local_c0.Data.ArrayNum + -1;
    if (local_c0.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange(pFVar12,(wchar_t *)local_c0.Data.AllocatorInstance.Data,iVar4);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    EVar7 = pFVar9->ID_InventoryType;
    pUVar10 = StaticEnum<enum_EDS_InventoryType>();
    if (pUVar10 == (UEnum *)0x0) {
      ::FString::FString(&local_b0,L"");
    }
    else {
      UEnum::GetNameStringByValue(pUVar10,&local_b0,(ulonglong)EVar7);
    }
    FVar11 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                       ((FDS_DataContainer *)&this->_padding_,(EDS_InventoryBagData)local_60);
    uVar2 = *(undefined8 *)FVar11;
    uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar12 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&this->_padding_,uVar8 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar11
                        );
    iVar4 = local_b0.Data.ArrayNum + -1;
    if (local_b0.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange(pFVar12,(wchar_t *)local_b0.Data.AllocatorInstance.Data,iVar4);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    InitTab(this,pFVar9);
    local_a0 = UDS_ModelBase::AddChildModel1<UDS_M_Weight>((UDS_ModelBase *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (UDS_M_Weight *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_a0);
    }
    FWeakObjectPtr::operator=(&(this->InventoryWeightModel).WeakPtr,(FObjectPtr)&local_a0);
    bVar6 = FWeakObjectPtr::IsValid(&(this->InventoryWeightModel).WeakPtr);
    if (bVar6) {
      pUVar13 = FWeakObjectPtr::Get(&(this->InventoryWeightModel).WeakPtr);
      pFVar14 = ::FName::FName(local_58,L"DS_VM_PlayerInventoryWeight");
      uVar8 = pFVar14->Number;
      *(uint *)&pUVar13[9].field_0x10 = (pFVar14->ComparisonIndex).Value;
      *(uint *)&pUVar13[9].field_0x14 = uVar8;
      this_00 = (UDS_M_Weight *)FWeakObjectPtr::Get(&(this->InventoryWeightModel).WeakPtr);
      EVar7 = FDS_DataContainer::GetData<enum_EDS_InventoryType,enum_EDS_InventoryBagData>
                        ((FDS_DataContainer *)&this->_padding_,InventoryType);
      UDS_M_Weight::Init(this_00,EVar7,0,0);
    }
    else {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6834028579869687708>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBag.cpp"
                         ,100,"false");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    SetSortType(this,0);
    GenerateInventoryBagCategory(this);
  }
  FDS_DataContainer::~FDS_DataContainer(local_c8);
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

// InitTab @ 14bd03ef0

void __thiscall
UDS_M_InventoryBag::InitTab(UDS_M_InventoryBag *this,FDS_InventoryBagGroupTableRow *param_1)

{
  longlong *this_00;
  int *piVar1;
  TArray<TWeakObjectPtr<UDS_M_InventoryBagTabBtn,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement FVar3;
  FWeakObjectPtr FVar4;
  undefined8 uVar5;
  FWeakObjectPtr *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  UDS_ModelBase *pUVar12;
  FName FVar13;
  UEnum *pUVar14;
  FString *pFVar15;
  UObject *pUVar16;
  FText *this_01;
  FName *pFVar17;
  longlong *plVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  TArray<TWeakObjectPtr<UDS_M_InventoryBagTabBtn,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *pTVar22;
  int iVar23;
  undefined1 local_res18 [8];
  uint local_res20;
  FWeakObjectPtr local_188;
  ForAnyElementType local_180;
  int local_178;
  int local_174;
  FString local_170;
  FString local_160;
  ulonglong local_150;
  FScriptContainerElement *local_148;
  FString local_140;
  FString local_130;
  undefined8 local_120;
  UDS_ModelBase *local_118;
  undefined1 local_110 [40];
  FDS_Text local_e8;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  FName local_68;
  undefined1 local_60 [8];
  FText local_58;
  
  pTVar22 = &this->ReleasedTabModelList;
  pTVar2 = &this->TabModelList;
  local_110._8_8_ = pTVar22;
  if ((pTVar22 == pTVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar23 = (this->TabModelList).ArrayNum;
  if (iVar23 != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,iVar23,&pTVar22->AllocatorInstance,&(this->ReleasedTabModelList).ArrayNum
                       ,&(this->ReleasedTabModelList).ArrayMax);
    memmove((pTVar22->AllocatorInstance).Data + (longlong)iVar9 * 8,(pTVar2->AllocatorInstance).Data
            ,(longlong)iVar23 << 3);
    (this->TabModelList).ArrayNum = 0;
  }
  local_res20 = (param_1->ID_Bag).ArrayNum;
  uVar11 = (ulonglong)(int)local_res20;
  pFVar21 = (param_1->ID_Bag).AllocatorInstance.Data;
  local_150 = (ulonglong)this & 0xff;
  local_110._16_8_ = pFVar21 + uVar11;
  do {
    uVar5 = local_110._16_8_;
    local_148 = pFVar21;
    if ((param_1->ID_Bag).ArrayNum != (int)uVar11) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<enum_EDS_BagType_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar21 == (FScriptContainerElement *)uVar5) {
      return;
    }
    FVar3 = *pFVar21;
    local_188.ObjectIndex = 0;
    local_188.ObjectSerialNumber = 0;
    local_120 = 0;
    FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_120);
    iVar23 = (this->ReleasedTabModelList).ArrayNum;
    if (iVar23 == 0) {
      pUVar12 = (UDS_ModelBase *)NewObject<UDS_M_InventoryBagTabBtn>((UObject *)this);
      UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar12);
      local_118 = pUVar12;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UDS_ModelBase *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_118);
    }
    else {
      if ((iVar23 < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar23 = pTVar22->ArrayNum + -1;
      FVar4 = *(FWeakObjectPtr *)
               ((pTVar22->AllocatorInstance).Data + (longlong)pTVar22->ArrayNum * 8 + -8);
      pTVar22->ArrayNum = iVar23;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,&pTVar22->AllocatorInstance,iVar23,&pTVar22->ArrayMax);
      local_188 = FVar4;
    }
    bVar8 = FWeakObjectPtr::IsValid(&local_188);
    if (!bVar8) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6834028579869687727>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBag.cpp"
                         ,0x51,"false");
      if (!bVar8) {
        return;
      }
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_00 = &this->_padding_;
    FVar13 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                       ((FDS_DataContainer *)this_00,(EDS_InventoryBagData)local_98);
    lVar20 = *(longlong *)FVar13;
    uVar10 = ::GetTypeHash((FNameEntryId)(uint)lVar20);
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar18 = &this->_padding_;
      if ((longlong *)this->_padding_ != (longlong *)0x0) {
        plVar18 = (longlong *)this->_padding_;
      }
      iVar23 = *(int *)((longlong)plVar18 +
                       (ulonglong)
                       ((int)this->_padding_ - 1U & (int)((ulonglong)lVar20 >> 0x20) + uVar10) * 4);
      if (iVar23 != -1) {
        do {
          if (*(longlong *)((longlong)iVar23 * 0x20 + *this_00) == lVar20) goto LAB_14bd041d7;
          iVar23 = *(int *)((longlong)iVar23 * 0x20 + 0x18 + *this_00);
        } while (iVar23 != -1);
      }
    }
    pUVar14 = StaticEnum<enum_EDS_BagType>();
    if (pUVar14 == (UEnum *)0x0) {
      ::FString::FString(&local_140,L"");
    }
    else {
      UEnum::GetNameStringByValue(pUVar14,&local_140,(ulonglong)(byte)FVar3);
    }
    FVar13 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                       ((FDS_DataContainer *)this_00,(EDS_InventoryBagData)local_90);
    uVar5 = *(undefined8 *)FVar13;
    uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
    pFVar15 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)this_00,uVar10 + (int)((ulonglong)uVar5 >> 0x20),(FName *)FVar13);
    iVar23 = local_140.Data.ArrayNum + -1;
    if (local_140.Data.ArrayNum == 0) {
      iVar23 = 0;
    }
    ::FString::AssignRange(pFVar15,(wchar_t *)local_140.Data.AllocatorInstance.Data,iVar23);
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
LAB_14bd041d7:
    pUVar16 = FWeakObjectPtr::Get(&local_188);
    pUVar14 = StaticEnum<enum_EDS_BagType>();
    DS_Util::GetStringEnumTableKey((UEnum *)local_110,(int)pUVar14);
    local_e8.StringEnumTableNameID.ComparisonIndex.Value = local_110._0_4_;
    local_e8.StringEnumTableNameID.Number = local_110._4_4_;
    local_e8.StringTableType = None;
    local_e8.DateTime.Ticks = 0;
    local_e8.TimeSpan.Ticks = 0;
    local_e8.StringTableID = 0;
    local_e8.TimeExpressionType = None;
    local_e8.IsExpression = false;
    local_e8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.UniqueString.Data.ArrayNum = 0;
    local_e8.UniqueString.Data.ArrayMax = 0;
    local_e8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.FormatArgs.ArrayNum = 0;
    local_e8.FormatArgs.ArrayMax = 0;
    this_01 = FDS_Text::GetText(&local_e8,&local_58);
    pFVar15 = FText::ToString(this_01);
    local_180.Data = (FScriptContainerElement *)0x0;
    local_178 = (pFVar15->Data).ArrayNum;
    lVar20 = (longlong)local_178;
    pFVar21 = (pFVar15->Data).AllocatorInstance.Data;
    if (local_178 == 0) {
      local_174 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_178,0,&local_180,local_178,&local_174);
      memcpy(local_180.Data,pFVar21,lVar20 * 2);
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    FVar13 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagTabBtnData>
                       ((FDS_DataContainer *)&pUVar16[1].field_0x18,
                        (EDS_InventoryBagTabBtnData)local_88);
    uVar5 = *(undefined8 *)FVar13;
    uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
    pFVar15 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar16[1].field_0x18,uVar10 + (int)((ulonglong)uVar5 >> 0x20),
                         (FName *)FVar13);
    iVar23 = local_178 + -1;
    if (local_178 == 0) {
      iVar23 = 0;
    }
    ::FString::AssignRange(pFVar15,(wchar_t *)local_180.Data,iVar23);
    if (local_180.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data);
    }
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_e8.FormatArgs.AllocatorInstance.Data,
               local_e8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_e8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_e8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_e8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.UniqueString.Data.AllocatorInstance.Data);
    }
    pUVar16 = FWeakObjectPtr::Get(&local_188);
    pUVar14 = StaticEnum<enum_EDS_BagType>();
    DS_Util::GetEnumIconID(pUVar14,(uint)(byte)FVar3);
    ::FString::PrintfImpl(&local_170,L"%d");
    FVar13 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagTabBtnData>
                       ((FDS_DataContainer *)&pUVar16[1].field_0x18,
                        (EDS_InventoryBagTabBtnData)local_80);
    uVar5 = *(undefined8 *)FVar13;
    uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
    pFVar15 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar16[1].field_0x18,uVar10 + (int)((ulonglong)uVar5 >> 0x20),
                         (FName *)FVar13);
    if (pFVar15 != &local_170) {
      pFVar21 = (pFVar15->Data).AllocatorInstance.Data;
      if (pFVar21 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar21);
      }
      (pFVar15->Data).AllocatorInstance.Data = local_170.Data.AllocatorInstance.Data;
      local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar15->Data).ArrayNum = local_170.Data.ArrayNum;
      (pFVar15->Data).ArrayMax = local_170.Data.ArrayMax;
      local_170.Data.ArrayNum = 0;
      local_170.Data.ArrayMax = 0;
    }
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    pUVar16 = FWeakObjectPtr::Get(&local_188);
    pUVar14 = StaticEnum<enum_EDS_BagType>();
    if (pUVar14 == (UEnum *)0x0) {
      ::FString::FString(&local_130,L"");
    }
    else {
      UEnum::GetNameStringByValue(pUVar14,&local_130,(ulonglong)(byte)FVar3);
    }
    FVar13 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagTabBtnData>
                       ((FDS_DataContainer *)&pUVar16[1].field_0x18,
                        (EDS_InventoryBagTabBtnData)local_78);
    uVar5 = *(undefined8 *)FVar13;
    uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
    pFVar15 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar16[1].field_0x18,uVar10 + (int)((ulonglong)uVar5 >> 0x20),
                         (FName *)FVar13);
    iVar23 = local_130.Data.ArrayNum + -1;
    if (local_130.Data.ArrayNum == 0) {
      iVar23 = 0;
    }
    ::FString::AssignRange(pFVar15,(wchar_t *)local_130.Data.AllocatorInstance.Data,iVar23);
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    pUVar16 = FWeakObjectPtr::Get(&local_188);
    FVar13 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                       ((FDS_DataContainer *)this_00,(EDS_InventoryBagData)local_70);
    uVar5 = *(undefined8 *)FVar13;
    uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
    pFVar15 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)this_00,uVar10 + (int)((ulonglong)uVar5 >> 0x20),(FName *)FVar13);
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    ::FString::FString((FString *)(local_110 + 0x18),pwVar19);
    pUVar14 = StaticEnum<enum_EDS_BagType>();
    if (pUVar14 != (UEnum *)0x0) {
      iVar23 = (int)local_110._32_8_ + -1;
      if ((int)local_110._32_8_ == 0) {
        iVar23 = 0;
      }
      pFVar17 = ::FName::FName(&local_68,iVar23,(wchar_t *)local_110._24_8_,FNAME_Add);
      local_150 = UEnum::GetValueByName(pUVar14,*pFVar17,None);
    }
    uVar11 = local_150;
    if ((wchar_t *)local_110._24_8_ != (wchar_t *)0x0) {
      FMemory::Free((void *)local_110._24_8_);
    }
    pwVar19 = L"true";
    if (SUB81(uVar11,0) != FVar3) {
      pwVar19 = L"false";
    }
    ::FString::FString(&local_160,pwVar19);
    FVar13 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagTabBtnData>
                       ((FDS_DataContainer *)&pUVar16[1].field_0x18,
                        (EDS_InventoryBagTabBtnData)local_60);
    uVar5 = *(undefined8 *)FVar13;
    uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
    pFVar15 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar16[1].field_0x18,uVar10 + (int)((ulonglong)uVar5 >> 0x20),
                         (FName *)FVar13);
    if (pFVar15 != &local_160) {
      pFVar21 = (pFVar15->Data).AllocatorInstance.Data;
      if (pFVar21 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar21);
      }
      (pFVar15->Data).AllocatorInstance.Data = local_160.Data.AllocatorInstance.Data;
      local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar15->Data).ArrayNum = local_160.Data.ArrayNum;
      (pFVar15->Data).ArrayMax = local_160.Data.ArrayMax;
      local_160.Data.ArrayNum = 0;
      local_160.Data.ArrayMax = 0;
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    pFVar6 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
    if (((pFVar6 <= &local_188) && (&local_188 < pFVar6 + (this->TabModelList).ArrayMax)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar23 = (this->TabModelList).ArrayNum;
    piVar1 = &(this->TabModelList).ArrayMax;
    if (iVar23 == *piVar1) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar21 = local_148 + 1;
    (this->TabModelList).ArrayNum = iVar23 + 1;
    *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar23 * 8) = local_188;
    uVar11 = (ulonglong)local_res20;
    pTVar22 = (TArray<TWeakObjectPtr<UDS_M_InventoryBagTabBtn,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
               *)local_110._8_8_;
  } while( true );
}

// InitWeight @ 14bd04790

void __thiscall UDS_M_InventoryBag::InitWeight(UDS_M_InventoryBag *this)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  EDS_InventoryType EVar4;
  UObject *pUVar5;
  FName *pFVar6;
  UDS_M_Weight *this_00;
  UDS_M_Weight *local_res8;
  FName local_res10;
  
  local_res8 = UDS_ModelBase::AddChildModel1<UDS_M_Weight>((UDS_ModelBase *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UDS_M_Weight *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=(&(this->InventoryWeightModel).WeakPtr,(FObjectPtr)&local_res8);
  bVar3 = FWeakObjectPtr::IsValid(&(this->InventoryWeightModel).WeakPtr);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&(this->InventoryWeightModel).WeakPtr);
    pFVar6 = ::FName::FName(&local_res10,L"DS_VM_PlayerInventoryWeight");
    uVar2 = pFVar6->Number;
    *(uint *)&pUVar5[9].field_0x10 = (pFVar6->ComparisonIndex).Value;
    *(uint *)&pUVar5[9].field_0x14 = uVar2;
    this_00 = (UDS_M_Weight *)FWeakObjectPtr::Get(&(this->InventoryWeightModel).WeakPtr);
    EVar4 = FDS_DataContainer::GetData<enum_EDS_InventoryType,enum_EDS_InventoryBagData>
                      ((FDS_DataContainer *)&this->_padding_,InventoryType);
    UDS_M_Weight::Init(this_00,EVar4,0,0);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6834028579869687708>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBag.cpp"
                       ,100,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// IsShowBagTitle @ 14bd062c0

bool __thiscall UDS_M_InventoryBag::IsShowBagTitle(UDS_M_InventoryBag *this)

{
  code *pcVar1;
  EDS_BagGroupType EVar2;
  bool bVar3;
  undefined1 uVar4;
  FDS_InventoryBagGroupTableRow *pFVar5;
  
  EVar2 = FDS_DataContainer::GetData<enum_EDS_BagGroupType,enum_EDS_InventoryBagData>
                    ((FDS_DataContainer *)&this->_padding_,BagGroupType);
  pFVar5 = FDS_InventoryBagGroupTableRow::Get((ulonglong)EVar2,true);
  if (pFVar5 != (FDS_InventoryBagGroupTableRow *)0x0) {
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    return true;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6834028579869687549>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBag.cpp"
                     ,0x103,"false");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
  return false;
}

// IsShowTabList @ 14bd06360

bool __thiscall UDS_M_InventoryBag::IsShowTabList(UDS_M_InventoryBag *this)

{
  code *pcVar1;
  EDS_BagGroupType EVar2;
  bool bVar3;
  undefined1 uVar4;
  FDS_InventoryBagGroupTableRow *pFVar5;
  
  EVar2 = FDS_DataContainer::GetData<enum_EDS_BagGroupType,enum_EDS_InventoryBagData>
                    ((FDS_DataContainer *)&this->_padding_,BagGroupType);
  pFVar5 = FDS_InventoryBagGroupTableRow::Get((ulonglong)EVar2,true);
  if (pFVar5 != (FDS_InventoryBagGroupTableRow *)0x0) {
    return pFVar5->IsIconShow;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6834028579869687562>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBag.cpp"
                     ,0xf6,"false");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  return false;
}

// OnClickedTab @ 14bd0c610

void __thiscall UDS_M_InventoryBag::OnClickedTab(UDS_M_InventoryBag *this,EDS_BagType param_1)

{
  FDS_DataContainer::SetData<enum_EDS_BagType,enum_EDS_InventoryBagData>
            ((FDS_DataContainer *)&this->_padding_,BagType,param_1);
  SetTabIndex(this,param_1);
  SetSortType(this,0);
  GenerateInventoryBagCategory(this);
  return;
}

// OnEventOnDrop @ 14bd0d510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_M_InventoryBag::OnEventOnDrop(UDS_M_InventoryBag *this,FDS_DragDropEventField *param_1)

{
  code *pcVar1;
  long64 lVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  UClass *pUVar6;
  FDS_ItemSlotInfo *pFVar7;
  UObject *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  UDragDropOperation *pUVar10;
  FSharedReferencer<1> FVar11;
  TReferenceControllerBase<1> *pTVar12;
  longlong *plVar13;
  undefined1 auStackY_118 [32];
  FWeakObjectPtr local_e8;
  TReferenceControllerBase<1> *local_e0;
  FSharedReferencer<1> FStack_d8;
  UObject *local_d0;
  UDS_M_InventoryBag *local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if ((param_1->DragDropOperation).field0_0x0.DebugPtr != (UDragDropOperation *)0x0) {
    pUVar6 = Z_Construct_UClass_UDS_W_DragDropOperation_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->DragDropOperation,pUVar6);
    if (bVar5) {
      pUVar10 = (param_1->DragDropOperation).field0_0x0.DebugPtr;
      goto LAB_14bd0d55b;
    }
  }
  pUVar10 = (UDragDropOperation *)0x0;
LAB_14bd0d55b:
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar10 == (UDragDropOperation *)0x0) {
      return;
    }
  }
  else {
    if (pUVar10 == (UDragDropOperation *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  pFVar7 = FDS_SlotInfo::GetSlotInfo<FDS_ItemSlotInfo>((FDS_SlotInfo *)(pUVar10 + 1));
  if ((pFVar7 != (FDS_ItemSlotInfo *)0x0) && (0 < pFVar7->ItemTID)) {
    pUVar8 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar8,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar6);
    local_b8._8_8_ = pUVar8;
    pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar13 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    local_e8.ObjectIndex = 0;
    local_e8.ObjectSerialNumber = 0;
    local_d0 = pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    FWeakObjectPtr::operator=(&local_e8,(FObjectPtr)&local_d0);
    bVar5 = FWeakObjectPtr::IsValid(&local_e8);
    if (bVar5) {
      pUVar8 = FWeakObjectPtr::Get(&local_e8);
      local_c8[0] = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_M_InventoryBag *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(pUVar8 + 1),(FObjectPtr)local_c8);
      pUVar8 = FWeakObjectPtr::Get(&local_e8);
      *(undefined4 *)&pUVar8[5].field_0x8 = 3;
      lVar2 = pFVar7->ItemTID;
      pUVar8 = FWeakObjectPtr::Get(&local_e8);
      *(int *)&pUVar8[5].field_0xc = (int)lVar2;
      pTVar9 = ::operator_new(0xa8);
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        local_e0 = ___xmm_00000000000000000000000000000010;
        pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000010;
        FVar11.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFDS_DragDropEventField___00_SharedPointerInternals__6B_
        ;
        *(char *)&pTVar9[1]._padding_ = (char)param_1->_padding_;
        pUVar10 = (param_1->DragDropOperation).field0_0x0.DebugPtr;
        *(UDragDropOperation **)&pTVar9[1].SharedReferenceCount = pUVar10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (UDragDropOperation *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        pTVar9[2]._padding_ = (longlong)&___7FInputEvent__6B_;
        *(short *)&pTVar9[2].SharedReferenceCount = (short)(param_1->PointerEvent)._padding_;
        pTVar9[2].SharedReferenceCount.field_0x2 =
             *(undefined1 *)((longlong)&(param_1->PointerEvent)._padding_ + 2);
        pTVar9[2].WeakReferenceCount =
             *(atomic<int> *)((longlong)&(param_1->PointerEvent)._padding_ + 4);
        *(int *)&pTVar9[3]._padding_ = (int)(param_1->PointerEvent)._padding_;
        uVar3 = *(undefined4 *)((longlong)&(param_1->PointerEvent)._padding_ + 4);
        pTVar9[3].SharedReferenceCount =
             (atomic<int>)*(undefined4 *)&(param_1->PointerEvent)._padding_;
        pTVar9[3].WeakReferenceCount = (atomic<int>)uVar3;
        pTVar9[4]._padding_ = (param_1->PointerEvent)._padding_;
        pTVar9[2]._padding_ = (longlong)&___7FPointerEvent__6B_;
        *(FDeprecateSlateVector2D *)&pTVar9[4].SharedReferenceCount =
             (param_1->PointerEvent).ScreenSpacePosition;
        pTVar9[5]._padding_ = (longlong)(param_1->PointerEvent).LastScreenSpacePosition;
        *(FDeprecateSlateVector2D *)&pTVar9[5].SharedReferenceCount =
             (param_1->PointerEvent).CursorDelta;
        pTVar9[6]._padding_ = (longlong)(param_1->PointerEvent).PressedButtons;
        uVar4 = (param_1->PointerEvent).EffectingButton.KeyName.Number;
        pTVar9[6].SharedReferenceCount =
             (atomic<int>)(param_1->PointerEvent).EffectingButton.KeyName.ComparisonIndex.Value;
        pTVar9[6].WeakReferenceCount = (atomic<int>)uVar4;
        pTVar9[7]._padding_ = (longlong)(param_1->PointerEvent).EffectingButton.KeyDetails.Object;
        pTVar12 = (param_1->PointerEvent).EffectingButton.KeyDetails.SharedReferenceCount.
                  ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar9[7].SharedReferenceCount = pTVar12;
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar12 = pTVar9 + 1;
        *(uint *)&pTVar9[8]._padding_ = (param_1->PointerEvent).PointerIndex;
        *(uint *)((longlong)&pTVar9[8]._padding_ + 4) = (param_1->PointerEvent).TouchpadIndex;
        pTVar9[8].SharedReferenceCount = (atomic<int>)(param_1->PointerEvent).Force;
        *(bool *)&pTVar9[8].WeakReferenceCount = (param_1->PointerEvent).bIsTouchEvent;
        pTVar9[8].WeakReferenceCount.field_0x1 = (param_1->PointerEvent).GestureType;
        pTVar9[9]._padding_ = (longlong)(param_1->PointerEvent).WheelOrGestureDelta;
        *(bool *)&pTVar9[9].SharedReferenceCount =
             (param_1->PointerEvent).bIsDirectionInvertedFromDevice;
        pTVar9[9].SharedReferenceCount.field_0x1 = (param_1->PointerEvent).bIsTouchForceChanged;
        pTVar9[9].SharedReferenceCount.field_0x2 = (param_1->PointerEvent).bIsTouchFirstMove;
        *(bool *)&pTVar9[10]._padding_ = param_1->DragCanceled;
        if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
        FVar11.ReferenceController = pTVar9;
        local_e0 = pTVar12;
      }
      FStack_d8.ReferenceController = FVar11.ReferenceController;
      pUVar8 = FWeakObjectPtr::Get(&local_e8);
      if (pUVar8 + 0xc != (UObject *)&local_e0) {
        *(TReferenceControllerBase<1> **)(pUVar8 + 0xc) = pTVar12;
        local_e0 = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&pUVar8[0xc].field_0x8,&FStack_d8);
        FVar11.ReferenceController = FStack_d8.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar11.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      UDS_ModelBase::UpdateModel
                ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_e8);
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6834028579869687613>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBag.cpp"
                         ,0xc3,"false");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// OnSortTypeChanged @ 14bd11360

void __thiscall UDS_M_InventoryBag::OnSortTypeChanged(UDS_M_InventoryBag *this,int param_1)

{
  code *pcVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  SetSortType(this,param_1);
  pcVar1 = *(code **)(this->_padding_ + 0x2e0);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (*pcVar1)(this,local_res8,0);
  return;
}

// OnUpdateModel @ 14bd128d0

void __thiscall
UDS_M_InventoryBag::OnUpdateModel
          (UDS_M_InventoryBag *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  bool bVar2;
  EDS_BagType EVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res10);
  bVar2 = TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr> *)(pUVar4 + 1),(void *)0x0);
  if (bVar2) {
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res10);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar4 + 1));
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_M_InventoryBagTabBtn_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14bd12951;
  }
  pUVar4 = (UObject *)0x0;
LAB_14bd12951:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar4 + 1));
    EVar3 = FDS_DataContainer::GetData<enum_EDS_BagType,enum_EDS_InventoryBagTabBtnData>
                      ((FDS_DataContainer *)&pUVar4[1].field_0x18,TabIndex);
    FDS_DataContainer::SetData<enum_EDS_BagType,enum_EDS_InventoryBagData>
              ((FDS_DataContainer *)&this->_padding_,BagType,EVar3);
    SetTabIndex(this,EVar3);
    SetSortType(this,0);
    GenerateInventoryBagCategory(this);
  }
  TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               *)&this->_padding_,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res10);
  return;
}

// ResetFilterList @ 14bd1c510

void __thiscall UDS_M_InventoryBag::ResetFilterList(UDS_M_InventoryBag *this)

{
  FWeakObjectPtr *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar6;
  UObject *pUVar7;
  ForAnyElementType FVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_48;
  
  local_50 = (this->CategoryModelList).ArrayNum;
  lVar11 = (longlong)local_50;
  pFVar2 = (this->CategoryModelList).AllocatorInstance.Data;
  local_58.Data = (FScriptContainerElement *)0x0;
  if (local_50 == 0) {
    local_4c = 0;
    iVar9 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_50,0,&local_58,local_50,&local_4c);
    memcpy(local_58.Data,pFVar2,lVar11 << 3);
    iVar9 = local_50;
  }
  pFVar1 = (FWeakObjectPtr *)(local_58.Data + (longlong)iVar9 * 8);
  FVar8.Data = local_58.Data;
  iVar10 = iVar9;
  while( true ) {
    if (iVar10 != iVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_InventoryBagCategory,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)FVar8.Data == pFVar1) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      *(undefined1 *)&this->_padding_ = 1;
      return;
    }
    local_res10 = *(FWeakObjectPtr *)FVar8.Data;
    bVar4 = FWeakObjectPtr::IsValid(&local_res10);
    if (!bVar4) break;
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    pTVar6 = FDS_DataContainer::GetListData<__int64,enum_EDS_InventoryBagData>
                       ((FDS_DataContainer *)&this->_padding_,&local_48,FilteredItemUID);
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar5[10].field_0x18);
    if (bVar4) {
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5[10].field_0x18);
      FDS_DataContainer::SetListData<__int64,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar7[1].field_0x18,FilteredItem,pTVar6);
      pUVar5[5].field_0x18 = 1;
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<521342736914186343>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBagCategory.cpp"
                         ,0x67,"false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (pTVar6->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    FVar8.Data = FVar8.Data + 8;
    iVar10 = local_50;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6834028579869687471>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBag.cpp"
                     ,0x151,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_58.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_58.Data);
  return;
}

// ResetQuantityList @ 14bd1c7c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UDS_M_InventoryBag::ResetQuantityList(UDS_M_InventoryBag *this)

{
  FWeakObjectPtr *pFVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  bool bVar6;
  UObject *pUVar7;
  UDS_M_ItemList *this_00;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *pTVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ForElementType<FSetElementId> local_b0;
  int local_a0 [2];
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  local_98;
  
  local_f0 = (this->CategoryModelList).ArrayNum;
  lVar11 = (longlong)local_f0;
  _Src = (this->CategoryModelList).AllocatorInstance.Data;
  local_f8.Data = (FScriptContainerElement *)0x0;
  if (local_f0 == 0) {
    local_ec = 0;
    iVar9 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_f0,0,&local_f8,local_f0,&local_ec);
    memcpy(local_f8.Data,_Src,lVar11 << 3);
    iVar9 = local_f0;
  }
  uVar4 = _UNK_150631d98;
  uVar3 = ___xmm_00000000ffffffff0000008000000000;
  pFVar1 = (FWeakObjectPtr *)(local_f8.Data + (longlong)iVar9 * 8);
  FVar12.Data = local_f8.Data;
  iVar10 = iVar9;
LAB_14bd1c870:
  do {
    if (iVar10 != iVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_InventoryBagCategory,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)FVar12.Data == pFVar1) {
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data);
      }
      *(undefined1 *)&this->_padding_ = 1;
      return;
    }
    local_res10 = *(FWeakObjectPtr *)FVar12.Data;
    bVar6 = FWeakObjectPtr::IsValid(&local_res10);
    if (!bVar6) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6834028579869687443>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBag.cpp"
                         ,0x16d,"false");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_f8.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_f8.Data);
      return;
    }
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    local_e8._0_8_ = (FScriptContainerElement *)0x0;
    local_e8._8_8_ = 0;
    local_c8 = (void *)0x0;
    local_b0.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_a0[0] = 0;
    local_c0 = uVar3;
    uStack_b8 = uVar4;
    if ((TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
         *)local_e8 != &this->QuantityList) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                (&local_b0,local_a0,
                 (ForElementType<FSetElementId> *)&(this->QuantityList).field_0x38,
                 *(int *)&(this->QuantityList).field_0x48);
      TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_e8,
                  (TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&this->QuantityList);
    }
    bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar7[10].field_0x18);
    if (bVar6) {
      this_00 = (UDS_M_ItemList *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar7[10].field_0x18);
      pTVar8 = TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
               ::
               TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
                         (&local_98,
                          (TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
                           *)local_e8);
      UDS_M_ItemList::SetQuantityList(this_00,pTVar8);
      pUVar7[5].field_0x18 = 1;
      local_a0[0] = 0;
      if (local_b0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b0.SecondaryData);
      }
      iVar10 = SUB84(local_e8._8_8_,4);
      local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
      if (iVar10 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
      }
      uVar5 = local_c0._4_4_;
      uStack_b8 = 0xffffffff;
      local_c0 = (ulonglong)local_c0._4_4_ << 0x20;
      if (0x80 < uVar5) {
        local_c0 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
      }
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
      }
      if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e8._0_8_);
      }
    }
    else {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<521342736914186350>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBagCategory.cpp"
                         ,0x6e,"false");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_a0[0] = 0;
      if (local_b0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b0.SecondaryData);
      }
      iVar10 = SUB84(local_e8._8_8_,4);
      local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
      if (iVar10 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
      }
      uVar5 = local_c0._4_4_;
      uStack_b8 = 0xffffffff;
      local_c0 = (ulonglong)local_c0._4_4_ << 0x20;
      if (0x80 < uVar5) {
        local_c0 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
      }
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
      }
      if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e8._0_8_);
        FVar12.Data = FVar12.Data + 8;
        iVar10 = local_f0;
        goto LAB_14bd1c870;
      }
    }
    FVar12.Data = FVar12.Data + 8;
    iVar10 = local_f0;
  } while( true );
}

// SetCharID @ 14bd1e0d0

void __thiscall UDS_M_InventoryBag::SetCharID(UDS_M_InventoryBag *this,int param_1)

{
  FWeakObjectPtr *pFVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res18 [2];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  FDS_DataContainer::SetData<int,enum_EDS_InventoryBagData>
            ((FDS_DataContainer *)&this->_padding_,SelectedCharID,param_1);
  local_40 = (this->CategoryModelList).ArrayNum;
  lVar8 = (longlong)local_40;
  _Src = (this->CategoryModelList).AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (local_40 == 0) {
    local_3c = 0;
    iVar6 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,_Src,lVar8 << 3);
    iVar6 = local_40;
  }
  pFVar1 = (FWeakObjectPtr *)(local_48.Data + (longlong)iVar6 * 8);
  FVar9.Data = local_48.Data;
  iVar7 = iVar6;
  while( true ) {
    if (iVar7 != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_InventoryBagCategory,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)FVar9.Data == pFVar1) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      *(undefined1 *)&this->_padding_ = 1;
      return;
    }
    local_res18[0] = *(FWeakObjectPtr *)FVar9.Data;
    bVar3 = FWeakObjectPtr::IsValid(local_res18);
    if (!bVar3) break;
    pUVar4 = FWeakObjectPtr::Get(local_res18);
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar4[10].field_0x18);
    if (bVar3) {
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar4[10].field_0x18);
      FDS_DataContainer::SetData<int,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar5[1].field_0x18,SelectedCharID,param_1);
      FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar5[1].field_0x18,Update,true);
      pUVar4[5].field_0x18 = 1;
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<521342736914186315>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBagCategory.cpp"
                         ,0x4b,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar9.Data = FVar9.Data + 8;
    iVar7 = local_40;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6834028579869687506>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBag.cpp"
                     ,0x12e,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_48.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_48.Data);
  return;
}

// SetCustomFilter @ 14bd1ec20

void __thiscall
UDS_M_InventoryBag::SetCustomFilter
          (UDS_M_InventoryBag *this,
          TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnCustomFilterDelegate,param_1);
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

// SetCustomSlotUpdate @ 14bd1ecf0

void __thiscall
UDS_M_InventoryBag::SetCustomSlotUpdate
          (UDS_M_InventoryBag *this,
          TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&this->OnCustomSlotUpdateDelegate,param_1);
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

// SetFilterData @ 14bd1f350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UDS_M_InventoryBag::SetFilterData(UDS_M_InventoryBag *this,FDS_DataContainer *param_1)

{
  FScriptContainerElement *_Src;
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FWeakObjectPtr *pFVar5;
  bool bVar6;
  UObject *pUVar7;
  ForAnyElementType _Dst;
  FDS_DataContainer *this_00;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  void *_Src_00;
  ForAnyElementType FVar11;
  undefined1 local_1b8 [8];
  ForAnyElementType local_1b0;
  uint local_1a8;
  int local_1a4;
  undefined1 local_1a0 [32];
  void *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  ForElementType<FSetElementId> local_160;
  int local_158;
  undefined1 local_150 [32];
  void *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  FScriptContainerElement local_118 [8];
  ForAnyElementType local_110;
  uint local_108;
  uint local_100;
  FWeakObjectPtr local_f8;
  FWeakObjectPtr *local_f0;
  FDS_DataContainer local_e8;
  
  local_1a8 = (this->CategoryModelList).ArrayNum;
  lVar10 = (longlong)(int)local_1a8;
  _Src = (this->CategoryModelList).AllocatorInstance.Data;
  local_1b0.Data = (FScriptContainerElement *)0x0;
  if (local_1a8 == 0) {
    local_1a4 = 0;
    local_100 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_1a8,0,&local_1b0,local_1a8,&local_1a4);
    memcpy(local_1b0.Data,_Src,lVar10 << 3);
    local_100 = local_1a8;
  }
  uVar4 = _UNK_150631d98;
  uVar3 = ___xmm_00000000ffffffff0000008000000000;
  uVar8 = (ulonglong)(int)local_100;
  local_f0 = (FWeakObjectPtr *)(local_1b0.Data + uVar8 * 8);
  FVar11.Data = local_1b0.Data;
  uVar9 = local_100;
  while( true ) {
    pFVar5 = local_f0;
    if (uVar9 != (uint)uVar8) {
      local_1b8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_InventoryBagCategory,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_1b8);
    }
    if ((FWeakObjectPtr *)FVar11.Data == pFVar5) break;
    local_f8 = *(FWeakObjectPtr *)FVar11.Data;
    bVar6 = FWeakObjectPtr::IsValid(&local_f8);
    if (!bVar6) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6834028579869687459>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBag.cpp"
                         ,0x15d,"false");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      break;
    }
    pUVar7 = FWeakObjectPtr::Get(&local_f8);
    local_1a0._0_8_ = (FScriptContainerElement *)0x0;
    local_1a0._8_8_ = 0;
    local_180 = (void *)0x0;
    local_178 = uVar3;
    uStack_170 = uVar4;
    local_160 = (ForElementType<FSetElementId>)0x0;
    local_158 = 0;
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
               *)local_1a0,
              (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
               *)param_1);
    local_150._0_8_ = (FScriptContainerElement *)0x0;
    local_150._8_8_ = 0;
    local_130 = (void *)0x0;
    local_110.Data = (FScriptContainerElement *)0x0;
    local_108 = 0;
    local_128 = uVar3;
    uStack_120 = uVar4;
    if ((TMap<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
         *)local_150 != &param_1->ListDataMap) {
      uVar9 = *(uint *)&(param_1->ListDataMap).field_0x48;
      if (1 < uVar9) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_110,0,uVar9,4);
      }
      pvVar1 = *(void **)&(param_1->ListDataMap).field_0x40;
      _Src_00 = &(param_1->ListDataMap).field_0x38;
      if (pvVar1 != (void *)0x0) {
        _Src_00 = pvVar1;
      }
      _Dst.Data = local_118;
      if (local_110.Data != (FScriptContainerElement *)0x0) {
        _Dst.Data = local_110.Data;
      }
      if (uVar9 != 0) {
        memcpy(_Dst.Data,_Src_00,(longlong)(int)uVar9 << 2);
      }
      local_108 = uVar9;
      TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_150,
                  (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&param_1->ListDataMap);
    }
    bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar7[10].field_0x18);
    if (bVar6) {
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar7[10].field_0x18);
      this_00 = FDS_DataContainer::FDS_DataContainer(&local_e8,(FDS_DataContainer *)local_1a0);
      if (*(longlong *)&pUVar7[10].field_0x18 == 0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7509389084536602038>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemList.cpp"
                           ,0x24a,"false");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
                  ((FDS_DataContainer *)&pUVar7[1].field_0x18,Generation,true);
        pUVar7[5].field_0x18 = 1;
      }
      FDS_DataContainer::~FDS_DataContainer(this_00);
    }
    else {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<521342736914186323>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBagCategory.cpp"
                         ,0x53,"false");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_108 = 0;
    if (local_110.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_150,0,local_150._8_4_);
    bVar6 = local_150._12_4_ != 0;
    local_150._8_8_ = (ulonglong)(uint)local_150._12_4_ << 0x20;
    if (bVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_150,0,(int *)(local_150 + 0xc));
    }
    uVar9 = local_128._4_4_;
    local_128 = (ulonglong)local_128._4_4_ << 0x20;
    uStack_120 = 0xffffffff;
    if (0x80 < uVar9) {
      local_128 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_150 + 0x10),0);
    }
    if (local_130 != (void *)0x0) {
      FMemory::Free(local_130);
    }
    if ((FScriptContainerElement *)local_150._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_150._0_8_);
    }
    local_158 = 0;
    if (local_160 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_160);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_1a0,0,local_1a0._8_4_);
    bVar6 = local_1a0._12_4_ != 0;
    local_1a0._8_8_ = (ulonglong)(uint)local_1a0._12_4_ << 0x20;
    if (bVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_1a0,0,(int *)(local_1a0 + 0xc));
    }
    uVar9 = local_178._4_4_;
    local_178 = (ulonglong)local_178._4_4_ << 0x20;
    uStack_170 = 0xffffffff;
    if (0x80 < uVar9) {
      local_178 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1a0 + 0x10),0);
    }
    if (local_180 != (void *)0x0) {
      FMemory::Free(local_180);
    }
    if ((FScriptContainerElement *)local_1a0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1a0._0_8_);
    }
    FVar11.Data = FVar11.Data + 8;
    uVar8 = (ulonglong)local_100;
    uVar9 = local_1a8;
  }
  if ((FWeakObjectPtr *)local_1b0.Data != (FWeakObjectPtr *)0x0) {
    FMemory::Free(local_1b0.Data);
  }
  *(undefined4 *)&(param_1->ListDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(param_1->ListDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&param_1->ListDataMap);
  *(undefined4 *)&(param_1->DataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(param_1->DataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_1);
  return;
}

// SetQuantityList @ 14bd20bc0

void __thiscall
UDS_M_InventoryBag::SetQuantityList
          (UDS_M_InventoryBag *this,
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
  ResetQuantityList(this);
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

// SetSortOrderType @ 14bd21650

void __thiscall UDS_M_InventoryBag::SetSortOrderType(UDS_M_InventoryBag *this,EDS_SortOrder param_1)

{
  FWeakObjectPtr *pFVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res18 [2];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  FDS_DataContainer::SetData<enum_EDS_SortOrder,enum_EDS_InventoryBagData>
            ((FDS_DataContainer *)&this->_padding_,SortOrderType,param_1);
  local_40 = (this->CategoryModelList).ArrayNum;
  lVar8 = (longlong)local_40;
  _Src = (this->CategoryModelList).AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (local_40 == 0) {
    local_3c = 0;
    iVar6 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,_Src,lVar8 << 3);
    iVar6 = local_40;
  }
  pFVar1 = (FWeakObjectPtr *)(local_48.Data + (longlong)iVar6 * 8);
  FVar9.Data = local_48.Data;
  iVar7 = iVar6;
  while( true ) {
    if (iVar7 != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_InventoryBagCategory,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)FVar9.Data == pFVar1) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      *(undefined1 *)&this->_padding_ = 1;
      return;
    }
    local_res18[0] = *(FWeakObjectPtr *)FVar9.Data;
    bVar3 = FWeakObjectPtr::IsValid(local_res18);
    if (!bVar3) break;
    pUVar4 = FWeakObjectPtr::Get(local_res18);
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar4[10].field_0x18);
    if (bVar3) {
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar4[10].field_0x18);
      FDS_DataContainer::SetData<enum_EDS_SortOrder,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar5[1].field_0x18,SortOrderType,param_1);
      FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar5[1].field_0x18,Generation,true);
      pUVar5[5].field_0x18 = 1;
      pUVar4[5].field_0x18 = 1;
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<521342736914186308>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBagCategory.cpp"
                         ,0x44,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar9.Data = FVar9.Data + 8;
    iVar7 = local_40;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6834028579869687518>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBag.cpp"
                     ,0x122,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_48.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_48.Data);
  return;
}

// SetSortType @ 14bd21970

void __thiscall UDS_M_InventoryBag::SetSortType(UDS_M_InventoryBag *this,int param_1)

{
  code *pcVar1;
  EDS_BagType EVar2;
  bool bVar3;
  uint uVar4;
  FDS_InventoryBagTableRow *pFVar5;
  
  EVar2 = FDS_DataContainer::GetData<enum_EDS_BagType,enum_EDS_InventoryBagData>
                    ((FDS_DataContainer *)&this->_padding_,BagType);
  pFVar5 = FDS_InventoryBagTableRow::Get((ulonglong)EVar2,true);
  if (pFVar5 == (FDS_InventoryBagTableRow *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6834028579869687529>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBag.cpp"
                       ,0x117,"false");
    if (!bVar3) {
      return;
    }
  }
  else {
    if ((-1 < param_1) && (param_1 < (pFVar5->ID_Sorting).ArrayNum)) {
      uVar4 = 0;
      if (param_1 < (pFVar5->ID_Sorting).ArrayNum) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      SetSortType(this,(EDS_SortingType)(pFVar5->ID_Sorting).AllocatorInstance.Data[param_1]);
      return;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6834028579869687527>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBag.cpp"
                       ,0x119,"false");
    if (!bVar3) {
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// SetSortType @ 14bd21aa0

void __thiscall UDS_M_InventoryBag::SetSortType(UDS_M_InventoryBag *this,EDS_SortingType param_1)

{
  FWeakObjectPtr *pFVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res18 [2];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  FDS_DataContainer::SetData<enum_EDS_SortingType,enum_EDS_InventoryBagData>
            ((FDS_DataContainer *)&this->_padding_,SortType,param_1);
  local_40 = (this->CategoryModelList).ArrayNum;
  lVar8 = (longlong)local_40;
  _Src = (this->CategoryModelList).AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (local_40 == 0) {
    local_3c = 0;
    iVar6 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,_Src,lVar8 << 3);
    iVar6 = local_40;
  }
  pFVar1 = (FWeakObjectPtr *)(local_48.Data + (longlong)iVar6 * 8);
  FVar9.Data = local_48.Data;
  iVar7 = iVar6;
  while( true ) {
    if (iVar7 != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_InventoryBagCategory,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)FVar9.Data == pFVar1) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      *(undefined1 *)&this->_padding_ = 1;
      return;
    }
    local_res18[0] = *(FWeakObjectPtr *)FVar9.Data;
    bVar3 = FWeakObjectPtr::IsValid(local_res18);
    if (!bVar3) break;
    pUVar4 = FWeakObjectPtr::Get(local_res18);
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar4[10].field_0x18);
    if (bVar3) {
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar4[10].field_0x18);
      FDS_DataContainer::SetData<enum_EDS_SortingType,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar5[1].field_0x18,SortType,param_1);
      FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar5[1].field_0x18,Generation,true);
      pUVar5[5].field_0x18 = 1;
      pUVar4[5].field_0x18 = 1;
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<521342736914186300>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBagCategory.cpp"
                         ,0x3c,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar9.Data = FVar9.Data + 8;
    iVar7 = local_40;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6834028579869687540>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_InventoryBag.cpp"
                     ,0x10c,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_48.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_48.Data);
  return;
}

// SetTabIndex @ 14bd22060

void __thiscall UDS_M_InventoryBag::SetTabIndex(UDS_M_InventoryBag *this,EDS_BagType param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  UObject *pUVar8;
  FName FVar9;
  FString *pFVar10;
  UEnum *this_00;
  FName *pFVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  FWeakObjectPtr *pFVar14;
  FWeakObjectPtr local_res8;
  EDS_BagType local_res10;
  undefined1 local_res18 [8];
  FName local_res20;
  undefined1 local_78 [8];
  FString local_70;
  FString local_60 [2];
  
  pFVar14 = (FWeakObjectPtr *)(this->TabModelList).AllocatorInstance.Data;
  iVar2 = (this->TabModelList).ArrayNum;
  uVar12 = (ulonglong)local_res8 & 0xff;
  pFVar1 = pFVar14 + iVar2;
  local_res10 = param_1;
  while( true ) {
    if ((this->TabModelList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_InventoryBagTabBtn,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar14 == pFVar1) break;
    local_res8 = *pFVar14;
    bVar6 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar6) {
      pUVar8 = FWeakObjectPtr::Get(&local_res8);
      FVar9 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagTabBtnData>
                        ((FDS_DataContainer *)&pUVar8[1].field_0x18,
                         (EDS_InventoryBagTabBtnData)local_res18);
      uVar3 = *(undefined8 *)FVar9;
      uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
      pFVar10 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::FindOrAddImpl<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)&pUVar8[1].field_0x18,uVar7 + (int)((ulonglong)uVar3 >> 0x20),
                           (FName *)FVar9);
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      ::FString::FString(local_60,pwVar13);
      this_00 = StaticEnum<enum_EDS_BagType>();
      if (this_00 != (UEnum *)0x0) {
        iVar5 = (int)local_60[0].Data._8_8_ + -1;
        if ((int)local_60[0].Data._8_8_ == 0) {
          iVar5 = 0;
        }
        pFVar11 = ::FName::FName(&local_res20,iVar5,
                                 (wchar_t *)local_60[0].Data.AllocatorInstance.Data,FNAME_Add);
        uVar12 = UEnum::GetValueByName(this_00,*pFVar11,None);
      }
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
      pUVar8 = FWeakObjectPtr::Get(&local_res8);
      pwVar13 = L"true";
      if (local_res10 != (EDS_BagType)uVar12) {
        pwVar13 = L"false";
      }
      ::FString::FString(&local_70,pwVar13);
      FVar9 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagTabBtnData>
                        ((FDS_DataContainer *)&pUVar8[1].field_0x18,
                         (EDS_InventoryBagTabBtnData)local_78);
      uVar3 = *(undefined8 *)FVar9;
      uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
      pFVar10 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::FindOrAddImpl<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)&pUVar8[1].field_0x18,uVar7 + (int)((ulonglong)uVar3 >> 0x20),
                           (FName *)FVar9);
      if (pFVar10 != &local_70) {
        pFVar4 = (pFVar10->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar10->Data).AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
        local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar10->Data).ArrayNum = local_70.Data.ArrayNum;
        (pFVar10->Data).ArrayMax = local_70.Data.ArrayMax;
        local_70.Data.ArrayNum = 0;
        local_70.Data.ArrayMax = 0;
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      pUVar8 = FWeakObjectPtr::Get(&local_res8);
      pUVar8[5].field_0x18 = 1;
    }
    pFVar14 = pFVar14 + 1;
  }
  return;
}

