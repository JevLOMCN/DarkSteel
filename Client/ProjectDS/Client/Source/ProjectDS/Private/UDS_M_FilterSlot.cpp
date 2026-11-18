// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b50b290

UClass * __cdecl UDS_M_FilterSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_FilterSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_FilterSlot",
               &Z_Registration_Info_UClass_UDS_M_FilterSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_FilterSlot,0x208,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_FilterSlot>,
               InternalVTableHelperCtorCaller<UDS_M_FilterSlot>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_FilterSlot.InnerSingleton;
}

// UDS_M_FilterSlot @ 14b510dc0

UDS_M_FilterSlot * __thiscall
UDS_M_FilterSlot::UDS_M_FilterSlot(UDS_M_FilterSlot *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->FilterType = None;
  this->FilterState = None;
  this->_padding_ = (longlong)&___7UDS_M_FilterSlot__6B_;
  *(undefined8 *)&this->MapFilterStateEntry = 0;
  *(undefined8 *)&(this->MapFilterStateEntry).field_0x8 = 0;
  *(undefined8 *)&(this->MapFilterStateEntry).field_0x20 = 0;
  *(undefined4 *)&(this->MapFilterStateEntry).field_0x28 = 0;
  *(undefined4 *)&(this->MapFilterStateEntry).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapFilterStateEntry).field_0x34 = 0;
  *(undefined4 *)&(this->MapFilterStateEntry).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MapFilterStateEntry).field_0x40 = 0;
  *(undefined4 *)&(this->MapFilterStateEntry).field_0x48 = 0;
  this->Checkable = false;
  return this;
}

// UDS_M_FilterSlot @ 14b510e40

UDS_M_FilterSlot * __thiscall
UDS_M_FilterSlot::UDS_M_FilterSlot(UDS_M_FilterSlot *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->FilterType = None;
  this->FilterState = None;
  this->_padding_ = (longlong)&___7UDS_M_FilterSlot__6B_;
  *(undefined8 *)&this->MapFilterStateEntry = 0;
  *(undefined8 *)&(this->MapFilterStateEntry).field_0x8 = 0;
  *(undefined8 *)&(this->MapFilterStateEntry).field_0x20 = 0;
  *(undefined4 *)&(this->MapFilterStateEntry).field_0x28 = 0;
  *(undefined4 *)&(this->MapFilterStateEntry).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapFilterStateEntry).field_0x34 = 0;
  *(undefined4 *)&(this->MapFilterStateEntry).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MapFilterStateEntry).field_0x40 = 0;
  *(undefined4 *)&(this->MapFilterStateEntry).field_0x48 = 0;
  this->Checkable = false;
  return this;
}

// ~UDS_M_FilterSlot @ 14b512e40

void __thiscall UDS_M_FilterSlot::~UDS_M_FilterSlot(UDS_M_FilterSlot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_M_FilterSlot__6B_;
  *(undefined4 *)&(this->MapFilterStateEntry).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MapFilterStateEntry).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,enum_EDS_ItemFilterState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,enum_EDS_ItemFilterState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->MapFilterStateEntry);
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5159c0

UClass * __cdecl UDS_M_FilterSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_FilterSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_FilterSlot",
               &Z_Registration_Info_UClass_UDS_M_FilterSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_FilterSlot,0x208,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_FilterSlot>,
               InternalVTableHelperCtorCaller<UDS_M_FilterSlot>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_FilterSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_M_FilterSlot @ 14b516c60

void __cdecl UDS_M_FilterSlot::StaticRegisterNativesUDS_M_FilterSlot(void)

{
  return;
}

// GetEntryEventFieldFilterSlotEntry @ 14bcf7000

/* WARNING: Type propagation algorithm not settling */

FDS_EntryBindingEventField * __thiscall
UDS_M_FilterSlot::GetEntryEventFieldFilterSlotEntry
          (UDS_M_FilterSlot *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  EDS_ViewModelTemplateKey *pEVar1;
  UStruct **ppUVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  code *pcVar7;
  TMap<int,EDS_ItemFilterState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,EDS_ItemFilterState,0>_>
  *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FDS_EntryBindingEventField *pFVar12;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  UScriptStruct *pUVar15;
  UDS_ViewModelContextManager *this_01;
  UEnum *this_02;
  FName *pFVar16;
  undefined8 *puVar17;
  ulong64 uVar18;
  longlong lVar19;
  TReferenceControllerBase<1> *pTVar20;
  FName FVar21;
  uint uVar22;
  EDS_ViewModelTemplateKey EVar23;
  uint uVar24;
  int iVar25;
  undefined1 *puVar26;
  int iVar27;
  uint *puVar28;
  undefined1 local_res8 [8];
  FDS_EntryBindingEventField *local_res10;
  uint local_res18;
  int local_res20;
  undefined4 uStack_16c;
  FName local_164;
  undefined8 local_158;
  UDS_M_FilterSlot *local_150;
  UDS_UserObjectListItem *local_148;
  TSharedPtr<FDS_ViewModelContext,1> local_140;
  FString local_130;
  FString local_120;
  TMap<int,EDS_ItemFilterState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,EDS_ItemFilterState,0>_>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  TSharedPtr<FDS_ViewModelContext,1> local_e0;
  FDestructionSentinel local_d0;
  UStruct **local_b8;
  FName local_b0;
  FString local_a8 [4];
  undefined8 local_68 [2];
  undefined8 local_58 [3];
  
  puVar3 = &(this->MapFilterStateEntry).field_0x10;
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110 = &this->MapFilterStateEntry;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  iVar5 = *(int *)&(this->MapFilterStateEntry).field_0x28;
  iVar25 = 0;
  uVar10 = 1;
  iVar27 = 0;
  iVar11 = iVar25;
  if (iVar5 != 0) {
    puVar28 = *(uint **)&(this->MapFilterStateEntry).field_0x20;
    if (puVar28 == (uint *)0x0) {
      puVar28 = (uint *)puVar3;
    }
    uVar24 = *puVar28;
    iVar27 = 0;
    iVar25 = 0;
    while (uVar24 == 0) {
      lVar19 = (longlong)iVar25;
      iVar27 = iVar27 + 0x20;
      iVar25 = iVar25 + 1;
      iVar11 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_14bcf70c0;
      uVar24 = puVar28[lVar19 + 1];
    }
    uVar10 = -uVar24 & uVar24;
    uVar4 = (ulonglong)uVar10 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_res20 = (int)lVar19;
    iVar11 = iVar27 + -1 + local_res20;
    if (iVar5 < iVar11) {
      iVar11 = iVar5;
    }
  }
LAB_14bcf70c0:
  uVar24 = *(uint *)&(this->MapFilterStateEntry).field_0x28;
  uVar22 = uVar24 & 0xffffffe0;
  TStack_108._padding_ = CONCAT44(uVar10,iVar25);
  TStack_108.CurrentBitIndex = iVar11;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  iVar25 = (int)uVar24 >> 5;
  TStack_108._28_4_ = iVar11;
  TStack_108.BaseBitIndex = iVar27;
  uStack_e8 = CONCAT44(uStack_16c,
                       *(int *)&(this->MapFilterStateEntry).field_0x8 -
                       *(int *)&(this->MapFilterStateEntry).field_0x34);
  local_res10 = __return_storage_ptr__;
  local_res18 = uVar24;
  TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar24 < 0) || (iVar5 < (int)uVar24)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar12 = (FDS_EntryBindingEventField *)(*pcVar7)();
    return pFVar12;
  }
  uVar10 = *(uint *)&(this->MapFilterStateEntry).field_0x28;
  if (uVar24 != uVar10) {
    puVar26 = *(undefined1 **)&(this->MapFilterStateEntry).field_0x20;
    if (puVar26 == (undefined1 *)0x0) {
      puVar26 = puVar3;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar25 * 4);
    while (uVar24 == 0) {
      lVar19 = (longlong)iVar25;
      uVar22 = uVar22 + 0x20;
      iVar25 = iVar25 + 1;
      uVar24 = uVar10;
      local_res18 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
      goto LAB_14bcf71f0;
      uVar24 = *(uint *)(puVar26 + lVar19 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar24 = (int)lVar19 + -1 + uVar22;
    local_res18 = uVar24;
    if ((int)uVar10 < (int)uVar24) {
      uVar24 = uVar10;
      local_res18 = uVar10;
    }
  }
LAB_14bcf71f0:
  do {
    pTVar8 = local_110;
    if (*(int *)&local_110->field_0x8 - *(int *)&local_110->field_0x34 != (int)uStack_e8) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,enum_EDS_ItemFilterState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_108.CurrentBitIndex == uVar24) &&
        (TStack_108.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->MapFilterStateEntry).field_0x10)) &&
       (pTVar8 == &this->MapFilterStateEntry)) {
      return __return_storage_ptr__;
    }
    uVar6 = *(undefined8 *)(*(longlong *)pTVar8 + (longlong)TStack_108.CurrentBitIndex * 0x10);
    local_158 = uVar6;
    this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bcf7644;
    }
    else {
      if (this_00 == (UDS_UserObjectListItem *)0x0) {
LAB_14bcf7644:
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_123149266565725829>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Filter.cpp"
                           ,0x17b,"false");
        if (!bVar9) {
          return __return_storage_ptr__;
        }
        pcVar7 = (code *)swi(3);
        pFVar12 = (FDS_EntryBindingEventField *)(*pcVar7)();
        return pFVar12;
      }
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar13 = ::operator_new(0x98);
    if (pFVar13 == (FDS_ViewModelContext *)0x0) {
      pFVar13 = (FDS_ViewModelContext *)0x0;
    }
    else {
      *(undefined8 *)&pFVar13->ViewModelTemplateKey = 0;
      *(undefined4 *)((longlong)&pFVar13[1].DerivedStaticStruct + 1) = 0;
      *(undefined2 *)((longlong)&pFVar13[1].DerivedStaticStruct + 5) = 0;
      *(undefined1 *)((longlong)&pFVar13[1].DerivedStaticStruct + 7) = 0;
      *(undefined2 *)((longlong)&pFVar13[2].ViewModelName.Number + 1) = 0;
      *(undefined1 *)((longlong)&pFVar13[2].ViewModelName.Number + 3) = 0;
      *(undefined8 *)&pFVar13[3].ViewModelTemplateKey = 0;
      pFVar13[4].ViewModelName.ComparisonIndex = 0;
      pFVar13[4].ViewModelName.Number = 0;
      pFVar13->_padding_ = (longlong)&___7FDS_ViewModelContext_CommonCheckText__6B_;
      pFVar13->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar13->ViewModelName).ComparisonIndex = 0;
      (pFVar13->ViewModelName).Number = 0;
      pFVar13[1]._padding_ = 0;
      *(undefined1 *)&pFVar13[1].DerivedStaticStruct = 0;
      pFVar13[1].ViewModelName.ComparisonIndex = 0;
      pFVar13[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar13[1].ViewModelTemplateKey = 0;
      pFVar13[2]._padding_ = 0;
      pFVar13[2].DerivedStaticStruct = (UStruct *)0x0;
      pFVar13[2].ViewModelName.ComparisonIndex.Value = 0;
      *(undefined1 *)&pFVar13[2].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar13[2].ViewModelTemplateKey = 0;
      pFVar13[3]._padding_ = 0;
      pFVar13[3].DerivedStaticStruct = (UStruct *)0x0;
      pFVar13[3].ViewModelName.ComparisonIndex = 0;
      pFVar13[3].ViewModelName.Number = 0;
      pFVar13[4]._padding_ = 0;
      pFVar13[4].DerivedStaticStruct = (UStruct *)0x0;
    }
    pTVar20 = (TReferenceControllerBase<1> *)0x0;
    pTVar14 = ::operator_new(0x20);
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      pTVar14->SharedReferenceCount = (atomic<int>)0x1;
      pTVar14[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar14->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CommonCheckText__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar14->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar14[1].SharedReferenceCount = pFVar13;
      pTVar20 = pTVar14;
    }
    if ((pFVar13 == (FDS_ViewModelContext *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FDS_EntryBindingEventField *)(*pcVar7)();
      return pFVar12;
    }
    pUVar15 = FDS_ViewModelContext_CommonCheckText::StaticStruct();
    pFVar13->DerivedStaticStruct = (UStruct *)pUVar15;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_140.Object = pFVar13;
      local_140.SharedReferenceCount.ReferenceController = pTVar20;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_140);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.SharedReferenceCount.ReferenceController);
    }
    pFVar13->ViewModelTemplateKey = W_CommonCheckText;
    this_02 = UDS_M_Filter::GetMappingEnum(this->FilterState);
    EVar23 = (EDS_ViewModelTemplateKey)uVar6;
    if (this_02 == (UEnum *)0x0) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8627520946023956263>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_Util.h",0xd9
                         ,"false");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FDS_EntryBindingEventField *)(*pcVar7)();
        return pFVar12;
      }
      FVar21.ComparisonIndex.Value = 0;
      FVar21.Number = 0;
    }
    else {
      UEnum::GetNameStringByValue(this_02,local_a8,(longlong)(int)EVar23);
      local_164 = (FName)this_02->_padding_;
      ::FName::ToString(&local_164,&local_120);
      ::FString::PrintfImpl(&local_130,L"%s_%s");
      iVar5 = local_130.Data.ArrayNum + -1;
      if (local_130.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      pFVar16 = ::FName::FName(&local_b0,iVar5,(wchar_t *)local_130.Data.AllocatorInstance.Data,
                               FNAME_Add);
      FVar21 = *pFVar16;
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      __return_storage_ptr__ = local_res10;
      if (local_a8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8[0].Data.AllocatorInstance.Data);
        __return_storage_ptr__ = local_res10;
      }
    }
    pFVar13[1].ViewModelTemplateKey = FVar21.ComparisonIndex.Value;
    *(uint *)&pFVar13[1].field_0x1c = FVar21.Number;
    pEVar1 = &pFVar13[2].ViewModelTemplateKey;
    *(undefined1 *)&pFVar13[1].DerivedStaticStruct = 0;
    pFVar13[1].ViewModelName.ComparisonIndex = 0;
    pFVar13[1].ViewModelName.Number = 0;
    pFVar13[2]._padding_ = 0;
    pFVar13[2].DerivedStaticStruct = (UStruct *)0x0;
    pFVar13[2].ViewModelName.ComparisonIndex.Value = 0;
    *(undefined1 *)&pFVar13[2].ViewModelName.Number = 0;
    if (pEVar1 != (EDS_ViewModelTemplateKey *)local_68) {
      if (*(void **)pEVar1 != (void *)0x0) {
        FMemory::Free(*(void **)pEVar1);
      }
      *(undefined8 *)pEVar1 = 0;
      pFVar13[3]._padding_ = 0;
    }
    ppUVar2 = &pFVar13[3].DerivedStaticStruct;
    if (ppUVar2 != (UStruct **)local_58) {
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)*ppUVar2,pFVar13[3].ViewModelName.ComparisonIndex.Value);
      if (*ppUVar2 != (UStruct *)0x0) {
        FMemory::Free(*ppUVar2);
      }
      *ppUVar2 = (UStruct *)0x0;
      pFVar13[3].ViewModelName.ComparisonIndex = 0;
      pFVar13[3].ViewModelName.Number = 0;
    }
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    pFVar13[3].ViewModelTemplateKey = EVar23;
    pFVar13[3].field_0x1c = local_158._4_4_ == 1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar13 + 4),
               (FWriteAccessScope *)&local_d0);
    local_b8 = &pFVar13[4].DerivedStaticStruct;
    puVar17 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_b8);
    if (puVar17 != (undefined8 *)0x0) {
      *puVar17 = &___7__TCommonDelegateInstanceState___A6AXII_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar18 = FDelegateHandle::GenerateNewID();
      puVar17[2] = uVar18;
      *puVar17 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_FilterSlot____A6AXII_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar17[3] = 0;
      local_150 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_150);
      puVar17[4] = OnChangedCheckState;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e0.Object = pFVar13;
    local_e0.SharedReferenceCount.ReferenceController = pTVar20;
    UDS_UserObjectListItem::AddContext(this_00,&local_e0);
    local_148 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FDS_EntryBindingEventField::Add
              (__return_storage_ptr__,(TObjectPtr<UDS_UserObjectListItem>)&local_148);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
    uVar24 = local_res18;
  } while( true );
}

// Init @ 14bd00df0

void __thiscall
UDS_M_FilterSlot::Init
          (UDS_M_FilterSlot *this,EDS_FilterType param_1,EDS_FilterState param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  UEnum *this_00;
  FString *pFVar6;
  TTuple<FName,__int64> *pTVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  undefined4 local_res10 [2];
  TPairInitializer<int_const_&,EDS_ItemFilterState_&&> local_res18;
  undefined3 in_stack_00000029;
  FString local_a8;
  FString local_98;
  FString local_88;
  bool *local_78;
  undefined4 *local_70;
  FString local_68;
  FString local_58;
  TTuple<FName,__int64> local_48;
  
  bVar3 = false;
  bVar4 = false;
  local_res10[0] = 0;
  this->Checkable = param_4;
  this->FilterType = param_1;
  this->FilterState = param_2;
  local_res18.Value = (EDS_ItemFilterState *)param_3;
  this_00 = UDS_M_Filter::GetMappingEnum(param_2);
  if (this_00 == (UEnum *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_123149266565725858>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Filter.cpp"
                       ,0x15e,"false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    iVar9 = 0;
    iVar10 = 0;
    pFVar11 = (FScriptContainerElement *)0x0;
    _param_4 = 0;
    if (0 < (this_00->Names).NumValues) {
      do {
        pFVar6 = UEnum::GetNameStringByIndex(this_00,&local_68,iVar10);
        if (&local_58 != pFVar6) {
          if (pFVar11 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar11);
          }
          pFVar11 = (pFVar6->Data).AllocatorInstance.Data;
          (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar9 = (pFVar6->Data).ArrayNum;
          (pFVar6->Data).ArrayNum = 0;
          (pFVar6->Data).ArrayMax = 0;
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_88,"None");
        if (iVar9 == local_88.Data.ArrayNum) {
          if (1 < iVar9) {
            iVar5 = wcscmp((wchar_t *)pFVar11,(wchar_t *)local_88.Data.AllocatorInstance.Data);
            bVar12 = iVar5 == 0;
            goto LAB_14bd00f1e;
          }
LAB_14bd00fa2:
          bVar12 = true;
        }
        else {
          bVar12 = local_88.Data.ArrayNum + iVar9 == 1;
LAB_14bd00f1e:
          if (bVar12) goto LAB_14bd00fa2;
          ::FString::FString(&local_98,"Max");
          bVar3 = true;
          if (iVar9 == local_98.Data.ArrayNum) {
            if (iVar9 < 2) goto LAB_14bd00fa2;
            iVar5 = wcscmp((wchar_t *)pFVar11,(wchar_t *)local_98.Data.AllocatorInstance.Data);
            bVar12 = iVar5 == 0;
          }
          else {
            bVar12 = local_98.Data.ArrayNum + iVar9 == 1;
          }
          if (bVar12) goto LAB_14bd00fa2;
          ::FString::FString(&local_a8,"EDS_MAX");
          bVar3 = true;
          bVar4 = true;
          if (iVar9 == local_a8.Data.ArrayNum) {
            if (iVar9 < 2) goto LAB_14bd00fa2;
            iVar5 = wcscmp((wchar_t *)pFVar11,(wchar_t *)local_a8.Data.AllocatorInstance.Data);
            bVar12 = iVar5 == 0;
          }
          else {
            bVar12 = local_a8.Data.ArrayNum + iVar9 == 1;
          }
          if (bVar12) goto LAB_14bd00fa2;
          bVar12 = false;
        }
        if ((bVar4) &&
           (bVar4 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if ((bVar3) &&
           (bVar3 = false, local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        param_3 = (TArray<int,TSizedDefaultAllocator<32>_> *)local_res18.Value;
        if (!bVar12) {
          if (((iVar10 < 0) || ((this_00->Names).NumValues <= iVar10)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Names.IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                  ,0xb2d,L""), bVar12)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar7 = UEnum::FNameData::operator[](&this_00->Names,&local_48,iVar10);
          param_3 = (TArray<int,TSizedDefaultAllocator<32>_> *)local_res18.Value;
          _param_4 = *(int *)&pTVar7->field_0x8;
          pFVar1 = ((ForAnyElementType *)local_res18.Value)->Data;
          for (pFVar8 = pFVar1;
              pFVar8 != pFVar1 + (longlong)*(int *)((longlong)local_res18.Value + 8) * 4;
              pFVar8 = pFVar8 + 4) {
            if (*(int *)pFVar8 == _param_4) {
              if ((int)((longlong)pFVar8 - (longlong)pFVar1 >> 2) != -1) {
                local_78 = &param_4;
                local_res10[0] = 1;
                local_70 = local_res10;
                TSet<TTuple<int,enum_EDS_ItemFilterState>,TDefaultMapHashableKeyFuncs<int,enum_EDS_ItemFilterState,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<int_const_&,enum_EDS_ItemFilterState_&&>_>
                          (&this->MapFilterStateEntry,&local_res18,(bool *)&local_78);
              }
              break;
            }
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < (this_00->Names).NumValues);
    }
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
  }
  pFVar11 = (param_3->AllocatorInstance).Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  return;
}

// IsAllSelected @ 14bd04f80

bool __thiscall UDS_M_FilterSlot::IsAllSelected(UDS_M_FilterSlot *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar12 = 0;
  puVar1 = &(this->MapFilterStateEntry).field_0x10;
  iVar3 = *(int *)&(this->MapFilterStateEntry).field_0x28;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->MapFilterStateEntry).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14bd0502d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14bd0502d:
  uVar11 = *(uint *)&(this->MapFilterStateEntry).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar12);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar14;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->MapFilterStateEntry).field_0x8 -
                       *(int *)&(this->MapFilterStateEntry).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&(this->MapFilterStateEntry).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->MapFilterStateEntry).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14bd05130;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14bd05130:
  while( true ) {
    if (*(int *)&(this->MapFilterStateEntry).field_0x8 -
        *(int *)&(this->MapFilterStateEntry).field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<int,enum_EDS_ItemFilterState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar11) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if ((int)((ulonglong)
              *(undefined8 *)
               (*(longlong *)&this->MapFilterStateEntry + (longlong)TStack_50.CurrentBitIndex * 0x10
               ) >> 0x20) == 0) {
      return false;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return true;
}

// IsCheckable @ 14bd05290

bool __thiscall UDS_M_FilterSlot::IsCheckable(UDS_M_FilterSlot *this)

{
  return this->Checkable;
}

// OnChangedCheckState @ 14bd0a1a0

void __thiscall
UDS_M_FilterSlot::OnChangedCheckState(UDS_M_FilterSlot *this,uint param_1,uint param_2)

{
  code *pcVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  UDS_M_EventFilterSlot *local_res20;
  
  SetValue(this,param_1,(uint)(param_2 != 0));
  *(undefined1 *)&this->_padding_ = 1;
  pcVar1 = *(code **)(this->_padding_ + 0x2e0);
  pUVar2 = GetTransientPackageAsObject();
  local_res20 = NewObject<UDS_M_EventFilterSlot>(pUVar2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res20 != (UDS_M_EventFilterSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res20 != (UDS_M_EventFilterSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  (*pcVar1)(this,local_res8,0);
  return;
}

// SetAllSelect @ 14bd1d600

void __thiscall UDS_M_FilterSlot::SetAllSelect(UDS_M_FilterSlot *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  puVar1 = &(this->MapFilterStateEntry).field_0x10;
  iVar3 = *(int *)&(this->MapFilterStateEntry).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->MapFilterStateEntry).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd1d6ad;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bd1d6ad:
  uVar10 = *(uint *)&(this->MapFilterStateEntry).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->MapFilterStateEntry).field_0x8 -
                       *(int *)&(this->MapFilterStateEntry).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->MapFilterStateEntry).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->MapFilterStateEntry).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd1d7b0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bd1d7b0:
  while( true ) {
    if (*(int *)&(this->MapFilterStateEntry).field_0x8 -
        *(int *)&(this->MapFilterStateEntry).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,enum_EDS_ItemFilterState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    SetValue(this,*(uint *)(*(longlong *)&this->MapFilterStateEntry +
                           (longlong)TStack_60.CurrentBitIndex * 0x10),Check);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// SetAllUnSelect @ 14bd1d830

void __thiscall UDS_M_FilterSlot::SetAllUnSelect(UDS_M_FilterSlot *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  puVar1 = &(this->MapFilterStateEntry).field_0x10;
  iVar3 = *(int *)&(this->MapFilterStateEntry).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = iVar13;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->MapFilterStateEntry).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    iVar13 = 0;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd1d8dd;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bd1d8dd:
  uVar10 = *(uint *)&(this->MapFilterStateEntry).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->MapFilterStateEntry).field_0x8 -
                       *(int *)&(this->MapFilterStateEntry).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->MapFilterStateEntry).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->MapFilterStateEntry).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bd1d9e0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bd1d9e0:
  while( true ) {
    if (*(int *)&(this->MapFilterStateEntry).field_0x8 -
        *(int *)&(this->MapFilterStateEntry).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,enum_EDS_ItemFilterState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    SetValue(this,*(uint *)(*(longlong *)&this->MapFilterStateEntry +
                           (longlong)TStack_60.CurrentBitIndex * 0x10),Uncheck);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// SetValue @ 14bd22e10

void __thiscall
UDS_M_FilterSlot::SetValue(UDS_M_FilterSlot *this,uint param_1,EDS_ItemFilterState param_2)

{
  TMap<int,EDS_ItemFilterState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,EDS_ItemFilterState,0>_>
  *this_00;
  uint uVar1;
  uint *puVar2;
  undefined1 *puVar3;
  uint *local_res8;
  uint local_res10 [2];
  int local_res18 [2];
  
  this_00 = &this->MapFilterStateEntry;
  if (*(int *)&(this->MapFilterStateEntry).field_0x8 !=
      *(int *)&(this->MapFilterStateEntry).field_0x34) {
    puVar3 = *(undefined1 **)&(this->MapFilterStateEntry).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->MapFilterStateEntry).field_0x38;
    }
    uVar1 = *(uint *)(puVar3 + (ulonglong)
                               (*(int *)&(this->MapFilterStateEntry).field_0x48 - 1U & param_1) * 4)
    ;
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x10 + *(longlong *)this_00);
        if (*puVar2 == param_1) {
          if (puVar2 != (uint *)0x0) {
            puVar2[1] = param_2;
            return;
          }
          break;
        }
        uVar1 = puVar2[2];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res8 = local_res10;
  local_res10[0] = param_1;
  TSet<TTuple<int,enum_EDS_ItemFilterState>,TDefaultMapHashableKeyFuncs<int,enum_EDS_ItemFilterState,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_&&>_>
            (this_00,(uint)local_res18,(TKeyInitializer<int_&&> *)(ulonglong)param_1,
             (bool *)&local_res8);
  *(EDS_ItemFilterState *)((longlong)local_res18[0] * 0x10 + *(longlong *)this_00 + 4) = param_2;
  return;
}

// UpdateAllSelect @ 14bd26c50

void __thiscall UDS_M_FilterSlot::UpdateAllSelect(UDS_M_FilterSlot *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  UDS_M_EventFilterSlot *local_res10;
  
  bVar1 = IsAllSelected(this);
  if (bVar1) {
    SetAllUnSelect(this);
  }
  else {
    SetAllSelect(this);
  }
  pUVar2 = GetTransientPackageAsObject();
  local_res10 = NewObject<UDS_M_EventFilterSlot>(pUVar2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res10 != (UDS_M_EventFilterSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res10 != (UDS_M_EventFilterSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  pUVar2 = FWeakObjectPtr::Get(&local_res8);
  *(undefined4 *)&pUVar2[5].field_0x8 = 1;
  (**(code **)(this->_padding_ + 0x2e0))(this,local_res8,0);
  return;
}

