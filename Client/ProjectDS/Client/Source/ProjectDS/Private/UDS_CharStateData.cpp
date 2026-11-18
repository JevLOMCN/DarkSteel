// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 27

// StaticClass @ 14b4492d0

UClass * __cdecl UDS_CharStateData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharStateData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharStateData",
               &Z_Registration_Info_UClass_UDS_CharStateData.InnerSingleton,
               StaticRegisterNativesUDS_CharStateData,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CharStateData>,
               InternalVTableHelperCtorCaller<UDS_CharStateData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharStateData.InnerSingleton;
}

// UDS_CharStateData @ 14b44d340

UDS_CharStateData * __thiscall
UDS_CharStateData::UDS_CharStateData(UDS_CharStateData *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->ShieldState = Folded;
  this->_padding_ = (longlong)&___7UDS_CharStateData__6B_;
  (this->StateTagList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StateTagList).ArrayNum = 0;
  (this->StateTagList).ArrayMax = 0;
  *(undefined8 *)&this->AniIndexListMap = 0;
  *(undefined8 *)&(this->AniIndexListMap).field_0x8 = 0;
  *(undefined8 *)&(this->AniIndexListMap).field_0x20 = 0;
  this->CharState = None;
  *(undefined4 *)&(this->AniIndexListMap).field_0x28 = 0;
  *(undefined4 *)&(this->AniIndexListMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AniIndexListMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AniIndexListMap).field_0x34 = 0;
  *(undefined8 *)&(this->AniIndexListMap).field_0x40 = 0;
  *(undefined4 *)&(this->AniIndexListMap).field_0x48 = 0;
  (this->LatestChangedCharStateInfo).StateTag.TagName = FGameplayTag::EmptyTag.TagName;
  (this->LatestChangedCharStateInfo).bIsStateTagOn = false;
  (this->LatestChangedCharStateInfo).AddedCharState = None;
  (this->LatestChangedCharStateInfo).RemovedCharState = None;
  (this->LatestChangedCharStateInfo).AddedCharDetailState = None;
  (this->LatestChangedCharStateInfo).RemovedCharDetailState = None;
  (this->LocomotionStateTagPendingList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocomotionStateTagPendingList).ArrayNum = 0;
  (this->LocomotionStateTagPendingList).ArrayMax = 0;
  (this->LocomotionStateInfo).Tag.TagName = FGameplayTag::EmptyTag.TagName;
  (this->LocomotionStateInfo).State = Default;
  (this->LocomotionStateInfo).StateOrder = 0;
  (this->LocomotionStateInfo).Tag.TagName = FGameplayTag::EmptyTag.TagName;
  (this->LocomotionStateInfo).State = Default;
  (this->LocomotionStateInfo).StateOrder = 0;
  this->LookAtType = None;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LookAtLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->LookAtLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->LookAtLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  *(undefined8 *)&this->ChangedCharStateDelegate = 0;
  *(undefined8 *)&(this->ChangedCharStateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedCharStateDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangedCharStateDelegate).field_0x18 = 2;
  this->AimModePitch = 0.0;
  return this;
}

// UDS_CharStateData @ 14b44d470

UDS_CharStateData * __thiscall
UDS_CharStateData::UDS_CharStateData(UDS_CharStateData *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->ShieldState = Folded;
  this->_padding_ = (longlong)&___7UDS_CharStateData__6B_;
  (this->StateTagList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StateTagList).ArrayNum = 0;
  (this->StateTagList).ArrayMax = 0;
  *(undefined8 *)&this->AniIndexListMap = 0;
  *(undefined8 *)&(this->AniIndexListMap).field_0x8 = 0;
  *(undefined8 *)&(this->AniIndexListMap).field_0x20 = 0;
  this->CharState = None;
  *(undefined4 *)&(this->AniIndexListMap).field_0x28 = 0;
  *(undefined4 *)&(this->AniIndexListMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AniIndexListMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AniIndexListMap).field_0x34 = 0;
  *(undefined8 *)&(this->AniIndexListMap).field_0x40 = 0;
  *(undefined4 *)&(this->AniIndexListMap).field_0x48 = 0;
  (this->LatestChangedCharStateInfo).StateTag.TagName = FGameplayTag::EmptyTag.TagName;
  (this->LatestChangedCharStateInfo).bIsStateTagOn = false;
  (this->LatestChangedCharStateInfo).AddedCharState = None;
  (this->LatestChangedCharStateInfo).RemovedCharState = None;
  (this->LatestChangedCharStateInfo).AddedCharDetailState = None;
  (this->LatestChangedCharStateInfo).RemovedCharDetailState = None;
  (this->LocomotionStateTagPendingList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocomotionStateTagPendingList).ArrayNum = 0;
  (this->LocomotionStateTagPendingList).ArrayMax = 0;
  (this->LocomotionStateInfo).Tag.TagName = FGameplayTag::EmptyTag.TagName;
  (this->LocomotionStateInfo).State = Default;
  (this->LocomotionStateInfo).StateOrder = 0;
  (this->LocomotionStateInfo).Tag.TagName = FGameplayTag::EmptyTag.TagName;
  (this->LocomotionStateInfo).State = Default;
  (this->LocomotionStateInfo).StateOrder = 0;
  this->LookAtType = None;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LookAtLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->LookAtLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->LookAtLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  *(undefined8 *)&this->ChangedCharStateDelegate = 0;
  *(undefined8 *)&(this->ChangedCharStateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedCharStateDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangedCharStateDelegate).field_0x18 = 2;
  this->AimModePitch = 0.0;
  return this;
}

// ~UDS_CharStateData @ 14b450010

void __thiscall UDS_CharStateData::~UDS_CharStateData(UDS_CharStateData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_CharStateData__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedCharStateDelegate).field_0x8,
             *(int *)&(this->ChangedCharStateDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangedCharStateDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedCharStateDelegate);
  pFVar2 = (this->LocomotionStateTagPendingList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->AniIndexListMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AniIndexListMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AniIndexListMap);
  pFVar2 = (this->StateTagList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4540b0

UClass * __cdecl UDS_CharStateData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharStateData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharStateData",
               &Z_Registration_Info_UClass_UDS_CharStateData.InnerSingleton,
               StaticRegisterNativesUDS_CharStateData,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CharStateData>,
               InternalVTableHelperCtorCaller<UDS_CharStateData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharStateData.InnerSingleton;
}

// StaticRegisterNativesUDS_CharStateData @ 14b455130

void __cdecl UDS_CharStateData::StaticRegisterNativesUDS_CharStateData(void)

{
  return;
}

// AddCharStateTag @ 14ba34ff0

void __thiscall UDS_CharStateData::AddCharStateTag(UDS_CharStateData *this,FGameplayTag *param_1)

{
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGameplayTag_const_&>
            (&this->StateTagList,param_1);
  UpdateCharState(this);
  return;
}

// Created @ 14ba3c070

void __thiscall UDS_CharStateData::Created(UDS_CharStateData *this)

{
  return;
}

// Deleted @ 14ba3c9c0

void __thiscall UDS_CharStateData::Deleted(UDS_CharStateData *this)

{
  return;
}

// EmplaceToCharStateInfoMap @ 14ba3d6c0

void __cdecl
UDS_CharStateData::EmplaceToCharStateInfoMap
          (EDS_StateTagType *param_1,EDS_CharState *param_2,EDS_CharDetailState *param_3)

{
  code *pcVar1;
  bool bVar2;
  FName *local_38;
  FName *local_30;
  FName local_28;
  EDS_CharState local_20;
  EDS_CharDetailState local_18;
  
  local_38 = &FDS_GameplayTags::GetStateTag(param_1)->TagName;
  local_28 = *local_38;
  if (local_28 == (FName)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7843724478616960699>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                       ,0x145,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_20 = *param_2;
    local_18 = *param_3;
    local_30 = &local_28;
    TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&>_>
              ((TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
                *)&CharStateInfoMap,
               (TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&> *)&stack0x00000020,
               (bool *)&local_38);
  }
  return;
}

// EmplaceToLocomotionStateInfoMap @ 14ba3d770

void __cdecl
UDS_CharStateData::EmplaceToLocomotionStateInfoMap
          (EDS_StateTagType *param_1,EDS_LocomotionState *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  FName local_28;
  EDS_LocomotionState local_20;
  int local_1c;
  FName *local_18;
  FName *local_10;
  
  local_18 = &FDS_GameplayTags::GetStateTag(param_1)->TagName;
  local_28 = *local_18;
  if (local_28 == (FName)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7843724478616960711>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                       ,0x139,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_20 = *param_2;
    local_1c = *param_3;
    local_10 = &local_28;
    TSet<TTuple<FGameplayTag,FDS_LocomotionStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_LocomotionStateInfo_&&>_>
              ((TSet<TTuple<FGameplayTag,FDS_LocomotionStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>,FDefaultSetAllocator>
                *)&LocomotionStateInfoMap,
               (TPairInitializer<FGameplayTag_const_&,FDS_LocomotionStateInfo_&&> *)&stack0x00000020
               ,(bool *)&local_18);
  }
  return;
}

// GetAniIndexList @ 14ba44c60

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_CharStateData::GetAniIndexList(UDS_CharStateData *this,FGameplayTag *param_1)

{
  FName FVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined1 *puVar6;
  
  FVar1 = param_1->TagName;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->AniIndexListMap).field_0x8 != *(int *)&(this->AniIndexListMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->AniIndexListMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->AniIndexListMap).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->AniIndexListMap).field_0x48 - 1U &
                              FVar1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->AniIndexListMap;
      do {
        if (*(FName *)((longlong)iVar4 * 0x20 + lVar2) == param_1->TagName) {
          pTVar5 = TMapBase<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked((TMapBase<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                  *)&this->AniIndexListMap,param_1);
          return pTVar5;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar2);
      } while (iVar4 != -1);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_CharStateData::GetAniIndexList'::__l2::_dynamic_atexit_destructor_for__emptyList__
            );
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &emptyList;
}

// GetChangedCharStateInfo @ 14ba45520

FDS_ChangedCharStateInfo * __cdecl
UDS_CharStateData::GetChangedCharStateInfo
          (FDS_ChangedCharStateInfo *__return_storage_ptr__,FGameplayTag *param_1,bool *param_2)

{
  bool bVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  FDS_CharStateInfo *pFVar5;
  longlong lVar6;
  EDS_CharDetailState EVar7;
  
  EVar7 = None;
  FVar2 = param_1->TagName;
  (__return_storage_ptr__->StateTag).TagName = FGameplayTag::EmptyTag.TagName;
  __return_storage_ptr__->AddedCharState = None;
  __return_storage_ptr__->RemovedCharState = None;
  __return_storage_ptr__->AddedCharDetailState = None;
  __return_storage_ptr__->RemovedCharDetailState = None;
  __return_storage_ptr__->bIsStateTagOn = false;
  uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (CharStateInfoMap._8_4_ != CharStateInfoMap._52_4_) {
    lVar6 = 0x154cf7278;
    if (CharStateInfoMap._64_8_ != 0) {
      lVar6 = CharStateInfoMap._64_8_;
    }
    iVar4 = *(int *)(lVar6 + (ulonglong)(CharStateInfoMap._72_4_ - 1 & FVar2.Number + uVar3) * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(CharStateInfoMap._0_8_ + (longlong)iVar4 * 0x28) == param_1->TagName) {
          pFVar5 = TMapBase<FGameplayTag,FDS_CharStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>_>
                   ::FindChecked((TMapBase<FGameplayTag,FDS_CharStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>_>
                                  *)&CharStateInfoMap,param_1);
          goto LAB_14ba455f8;
        }
        iVar4 = *(int *)(CharStateInfoMap._0_8_ + 0x20 + (longlong)iVar4 * 0x28);
      } while (iVar4 != -1);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    emptyInfo.Tag = FGameplayTag::EmptyTag;
    emptyInfo.State = None;
    emptyInfo.DetailState = None;
    _Init_thread_footer(&::_TSS0);
  }
  pFVar5 = &emptyInfo;
LAB_14ba455f8:
  if ((pFVar5->Tag).TagName == (FName)0x0) {
    return __return_storage_ptr__;
  }
  bVar1 = *param_2;
  (__return_storage_ptr__->StateTag).TagName = param_1->TagName;
  __return_storage_ptr__->bIsStateTagOn = bVar1;
  if (bVar1 == true) {
    __return_storage_ptr__->AddedCharState = pFVar5->State;
LAB_14ba45617:
    __return_storage_ptr__->RemovedCharState = None;
    if (bVar1 == true) {
      __return_storage_ptr__->AddedCharDetailState = pFVar5->DetailState;
      goto LAB_14ba45656;
    }
  }
  else {
    __return_storage_ptr__->AddedCharState = None;
    if (bVar1 != false) goto LAB_14ba45617;
    __return_storage_ptr__->RemovedCharState = pFVar5->State;
  }
  __return_storage_ptr__->AddedCharDetailState = None;
  if (bVar1 == false) {
    EVar7 = pFVar5->DetailState;
  }
LAB_14ba45656:
  __return_storage_ptr__->RemovedCharDetailState = EVar7;
  return __return_storage_ptr__;
}

// GetCharStateInfo @ 14ba45aa0

FDS_CharStateInfo * __cdecl UDS_CharStateData::GetCharStateInfo(FGameplayTag *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  FDS_CharStateInfo *pFVar4;
  longlong lVar5;
  
  FVar1 = param_1->TagName;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (CharStateInfoMap._8_4_ != CharStateInfoMap._52_4_) {
    lVar5 = 0x154cf7278;
    if (CharStateInfoMap._64_8_ != 0) {
      lVar5 = CharStateInfoMap._64_8_;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(CharStateInfoMap._72_4_ - 1 & FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)(CharStateInfoMap._0_8_ + (longlong)iVar3 * 0x28) == param_1->TagName) {
          pFVar4 = TMapBase<FGameplayTag,FDS_CharStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>_>
                   ::FindChecked((TMapBase<FGameplayTag,FDS_CharStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>_>
                                  *)&CharStateInfoMap,param_1);
          return pFVar4;
        }
        iVar3 = *(int *)(CharStateInfoMap._0_8_ + 0x20 + (longlong)iVar3 * 0x28);
      } while (iVar3 != -1);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      emptyInfo.Tag = FGameplayTag::EmptyTag;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &emptyInfo;
}

// GetData @ 14ba47d20

TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> __cdecl UDS_CharStateData::GetData(ulong64 param_1)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *this;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_00;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  undefined1 local_18 [16];
  
  TDS_DataSetGetter<UDS_CharDataSet>::Get((ulong64)&local_res18);
  bVar2 = TWeakObjectPtr<UDS_CharDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharDataSet,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (bVar2) {
    *(undefined8 *)param_1 = 0;
    local_res20 = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
    return (TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_CharStateData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14ba47dc6;
  }
  pUVar3 = (UObject *)0x0;
LAB_14ba47dc6:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// HasCharDetailState @ 14ba51450

bool __thiscall
UDS_CharStateData::HasCharDetailState(UDS_CharStateData *this,EDS_CharDetailState *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FDS_CharStateInfo *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->StateTagList).AllocatorInstance.Data;
  iVar2 = (this->StateTagList).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->StateTagList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FGameplayTag,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pFVar3 = TMapBase<FGameplayTag,FDS_CharStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>_>
             ::FindChecked((TMapBase<FGameplayTag,FDS_CharStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>_>
                            *)&CharStateInfoMap,(FGameplayTag *)pFVar4);
    if (pFVar3->DetailState == *param_1) {
      return true;
    }
    pFVar4 = pFVar4 + 8;
  }
  return false;
}

// HasCharState @ 14ba514d0

bool __thiscall UDS_CharStateData::HasCharState(UDS_CharStateData *this,EDS_CharState *param_1)

{
  return (*param_1 & this->CharState) != None;
}

// HasControlAbnormalState @ 14ba514f0

bool __thiscall UDS_CharStateData::HasControlAbnormalState(UDS_CharStateData *this)

{
  if (((this->CharState >> 0xc & 1) != 0) && ((this->CharState >> 0xd & 1) == 0)) {
    return true;
  }
  return false;
}

// HasStateTag @ 14ba522e0

bool __thiscall UDS_CharStateData::HasStateTag(UDS_CharStateData *this,FGameplayTag *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar2 = (FName *)(this->StateTagList).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->StateTagList).ArrayNum;
  if (pFVar2 != pFVar1) {
    do {
      if (*pFVar2 == param_1->TagName) {
        return true;
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar1);
  }
  return false;
}

// InitStateInfoMap @ 14ba56c60

void __cdecl UDS_CharStateData::InitStateInfoMap(void)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  UEnum *pUVar5;
  EDS_StateTagType local_res8 [8];
  EDS_StateTagType local_res10 [8];
  EDS_StateTagType local_res18 [8];
  EDS_StateTagType local_res20 [8];
  EDS_StateTagType local_a48 [148];
  EDS_CharDetailState local_9b4 [130];
  undefined1 local_7ac [8];
  undefined1 local_7a4 [8];
  undefined1 local_79c [8];
  undefined1 local_794 [8];
  undefined1 local_78c [8];
  undefined1 local_784 [8];
  undefined1 local_77c [8];
  undefined1 local_774 [8];
  undefined1 local_76c [8];
  undefined1 local_764 [8];
  undefined1 local_75c [12];
  EDS_CharState local_750 [129];
  FName local_348;
  undefined1 local_340;
  undefined4 local_33c;
  FName local_338;
  undefined1 local_330;
  undefined4 local_32c;
  FName local_328;
  undefined1 local_320;
  undefined4 local_31c;
  FName local_318;
  undefined1 local_310;
  undefined4 local_30c;
  FName local_308;
  undefined1 local_300;
  undefined4 local_2fc;
  FName local_2f8;
  undefined1 local_2f0;
  undefined4 local_2ec;
  FName *local_2e8;
  FName *local_2e0;
  FName *local_2d8;
  FName *local_2d0;
  FName *local_2c8;
  FName *local_2c0;
  FName *local_2b8;
  FName *local_2b0;
  FName *local_2a8;
  FName *local_2a0;
  FName *local_298;
  FName *local_290;
  FName *local_288;
  FName *local_280;
  FName *local_278;
  FName *local_270;
  FName *local_268;
  FName *local_260;
  FName *local_258;
  FName *local_250;
  FName *local_248;
  FName *local_240;
  FName *local_238;
  FName *local_230;
  FName *local_228;
  FName *local_220;
  FName *local_218;
  FName *local_210;
  FName *local_208;
  FName *local_200;
  FName *local_1f8;
  FName *local_1f0;
  FName *local_1e8;
  FName *local_1e0;
  FName *local_1d8;
  FName *local_1d0;
  FName *local_1c8;
  FName *local_1c0;
  FName *local_1b8;
  FName *local_1b0;
  FName *local_1a8;
  FName *local_1a0;
  FName local_198;
  undefined8 local_190;
  undefined4 local_188;
  FName local_180;
  undefined8 local_178;
  undefined4 local_170;
  FName local_168;
  undefined8 local_160;
  undefined4 local_158;
  FName local_150;
  undefined8 local_148;
  undefined4 local_140;
  FName local_138;
  undefined8 local_130;
  undefined4 local_128;
  FName local_120;
  undefined8 local_118;
  undefined4 local_110;
  FName local_108;
  undefined8 local_100;
  undefined4 local_f8;
  FName local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  FName local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  FName local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  FName local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  FName local_90;
  undefined8 local_88;
  undefined4 local_80;
  FName local_78;
  undefined8 local_70;
  undefined4 local_68;
  FName local_60;
  undefined8 local_58;
  undefined4 local_50;
  FName local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  local_res8[0] = Locomotion_Default;
  pFVar4 = &FDS_GameplayTags::GetStateTag(local_res8)->TagName;
  DefaultLocomotionTag.TagName = *pFVar4;
  bVar3 = 1 < (int)LocomotionStateInfoMap._72_4_;
  if (!bVar3) {
    TSet<TTuple<FGameplayTag,FDS_LocomotionStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FGameplayTag,FDS_LocomotionStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>,FDefaultSetAllocator>
                      *)&LocomotionStateInfoMap);
  }
  LocomotionStateInfoMap._8_4_ = 0;
  if (LocomotionStateInfoMap._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)&LocomotionStateInfoMap,0,
               (int *)&LocomotionStateInfoMap.field_0xc);
  }
  LocomotionStateInfoMap._48_4_ = 0xffffffff;
  LocomotionStateInfoMap._52_4_ = 0;
  LocomotionStateInfoMap._40_4_ = 0;
  if (0x80 < (uint)LocomotionStateInfoMap._44_4_) {
    LocomotionStateInfoMap._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&LocomotionStateInfoMap.field_0x10,0);
  }
  if (bVar3) {
    LocomotionStateInfoMap._72_4_ = 1;
    TSet<TTuple<FGameplayTag,FDS_LocomotionStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FGameplayTag,FDS_LocomotionStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>,FDefaultSetAllocator>
              *)&LocomotionStateInfoMap);
  }
  if (((uint)(LocomotionStateInfoMap._8_4_ - LocomotionStateInfoMap._52_4_) < 3) &&
     (TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&LocomotionStateInfoMap,3), (int)LocomotionStateInfoMap._72_4_ < 1)) {
    LocomotionStateInfoMap._72_4_ = 1;
    TSet<TTuple<FGameplayTag,FDS_LocomotionStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FGameplayTag,FDS_LocomotionStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>,FDefaultSetAllocator>
              *)&LocomotionStateInfoMap);
  }
  local_res10[0] = Locomotion_Default;
  pFVar4 = &FDS_GameplayTags::GetStateTag(local_res10)->TagName;
  if (*pFVar4 == (FName)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7843724478616960711>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                       ,0x139,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    local_2e0 = &local_348;
    local_340 = 0;
    local_33c = 0x32;
    local_348 = *pFVar4;
    local_2e8 = pFVar4;
    TSet<TTuple<FGameplayTag,FDS_LocomotionStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_LocomotionStateInfo_&&>_>
              ((TSet<TTuple<FGameplayTag,FDS_LocomotionStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>,FDefaultSetAllocator>
                *)&LocomotionStateInfoMap,
               (TPairInitializer<FGameplayTag_const_&,FDS_LocomotionStateInfo_&&> *)local_7ac,
               (bool *)&local_2e8);
  }
  local_res18[0] = Locomotion_Swim;
  pFVar4 = &FDS_GameplayTags::GetStateTag(local_res18)->TagName;
  if (*pFVar4 == (FName)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7843724478616960711>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                       ,0x139,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    local_2d0 = &local_338;
    local_330 = 1;
    local_32c = 0x1e;
    local_338 = *pFVar4;
    local_2d8 = pFVar4;
    TSet<TTuple<FGameplayTag,FDS_LocomotionStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_LocomotionStateInfo_&&>_>
              ((TSet<TTuple<FGameplayTag,FDS_LocomotionStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>,FDefaultSetAllocator>
                *)&LocomotionStateInfoMap,
               (TPairInitializer<FGameplayTag_const_&,FDS_LocomotionStateInfo_&&> *)(local_7ac + 4),
               (bool *)&local_2d8);
  }
  local_res20[0] = Locomotion_ToggleMove;
  pFVar4 = &FDS_GameplayTags::GetStateTag(local_res20)->TagName;
  if (*pFVar4 == (FName)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7843724478616960711>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                       ,0x139,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    local_2c0 = &local_328;
    local_320 = 2;
    local_31c = 0x28;
    local_328 = *pFVar4;
    local_2c8 = pFVar4;
    TSet<TTuple<FGameplayTag,FDS_LocomotionStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_LocomotionStateInfo_&&>_>
              ((TSet<TTuple<FGameplayTag,FDS_LocomotionStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>,FDefaultSetAllocator>
                *)&LocomotionStateInfoMap,
               (TPairInitializer<FGameplayTag_const_&,FDS_LocomotionStateInfo_&&> *)local_7a4,
               (bool *)&local_2c8);
  }
  local_a48[0] = Locomotion_Climbing;
  pFVar4 = &FDS_GameplayTags::GetStateTag(local_a48)->TagName;
  if (*pFVar4 == (FName)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7843724478616960711>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                       ,0x139,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    local_2b0 = &local_318;
    local_310 = 3;
    local_30c = 0x14;
    local_318 = *pFVar4;
    local_2b8 = pFVar4;
    TSet<TTuple<FGameplayTag,FDS_LocomotionStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_LocomotionStateInfo_&&>_>
              ((TSet<TTuple<FGameplayTag,FDS_LocomotionStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>,FDefaultSetAllocator>
                *)&LocomotionStateInfoMap,
               (TPairInitializer<FGameplayTag_const_&,FDS_LocomotionStateInfo_&&> *)(local_7a4 + 4),
               (bool *)&local_2b8);
  }
  local_a48[1] = 5;
  pFVar4 = &FDS_GameplayTags::GetStateTag(local_a48 + 1)->TagName;
  if (*pFVar4 == (FName)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7843724478616960711>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                       ,0x139,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    local_2a0 = &local_308;
    local_300 = 4;
    local_2fc = 10;
    local_308 = *pFVar4;
    local_2a8 = pFVar4;
    TSet<TTuple<FGameplayTag,FDS_LocomotionStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_LocomotionStateInfo_&&>_>
              ((TSet<TTuple<FGameplayTag,FDS_LocomotionStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>,FDefaultSetAllocator>
                *)&LocomotionStateInfoMap,
               (TPairInitializer<FGameplayTag_const_&,FDS_LocomotionStateInfo_&&> *)local_79c,
               (bool *)&local_2a8);
  }
  local_a48[2] = 6;
  pFVar4 = &FDS_GameplayTags::GetStateTag(local_a48 + 2)->TagName;
  if (*pFVar4 == (FName)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7843724478616960711>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                       ,0x139,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    local_290 = &local_2f8;
    local_2f0 = 5;
    local_2ec = 10;
    local_2f8 = *pFVar4;
    local_298 = pFVar4;
    TSet<TTuple<FGameplayTag,FDS_LocomotionStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_LocomotionStateInfo_&&>_>
              ((TSet<TTuple<FGameplayTag,FDS_LocomotionStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>,FDefaultSetAllocator>
                *)&LocomotionStateInfoMap,
               (TPairInitializer<FGameplayTag_const_&,FDS_LocomotionStateInfo_&&> *)(local_79c + 4),
               (bool *)&local_298);
  }
  pUVar5 = StaticEnum<enum_EDS_StateTagType>();
  if (pUVar5 == (UEnum *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7843724478616960953>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                       ,0x47,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    iVar1 = (pUVar5->Names).NumValues;
    bVar3 = 1 < (int)CharStateInfoMap._72_4_;
    if (!bVar3) {
      TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
                        *)&CharStateInfoMap);
    }
    CharStateInfoMap._8_4_ = 0;
    if (CharStateInfoMap._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)&CharStateInfoMap,0,
                 (int *)&CharStateInfoMap.field_0xc);
    }
    CharStateInfoMap._48_4_ = 0xffffffff;
    CharStateInfoMap._52_4_ = 0;
    CharStateInfoMap._40_4_ = 0;
    if (0x80 < (uint)CharStateInfoMap._44_4_) {
      CharStateInfoMap._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&CharStateInfoMap.field_0x10,0);
    }
    if (bVar3) {
      CharStateInfoMap._72_4_ = 1;
      TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
                *)&CharStateInfoMap);
    }
    TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
               *)&CharStateInfoMap,iVar1);
    local_a48[3] = 2;
    pFVar4 = &FDS_GameplayTags::GetStateTag(local_a48 + 3)->TagName;
    if (*pFVar4 == (FName)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7843724478616960699>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                         ,0x145,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_280 = &local_198;
      local_190 = 1;
      local_188 = 1;
      local_288 = pFVar4;
      local_198 = *pFVar4;
      TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&>_>
                ((TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
                  *)&CharStateInfoMap,
                 (TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&> *)local_794,
                 (bool *)&local_288);
    }
    local_a48[4] = 3;
    pFVar4 = &FDS_GameplayTags::GetStateTag(local_a48 + 4)->TagName;
    if (*pFVar4 == (FName)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7843724478616960699>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                         ,0x145,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_270 = &local_180;
      local_178 = 2;
      local_170 = 2;
      local_278 = pFVar4;
      local_180 = *pFVar4;
      TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&>_>
                ((TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
                  *)&CharStateInfoMap,
                 (TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&> *)(local_794 + 4),
                 (bool *)&local_278);
    }
    local_a48[5] = 4;
    pFVar4 = &FDS_GameplayTags::GetStateTag(local_a48 + 5)->TagName;
    if (*pFVar4 == (FName)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7843724478616960699>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                         ,0x145,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_160 = 0x80000000;
      local_260 = &local_168;
      local_158 = 3;
      local_268 = pFVar4;
      local_168 = *pFVar4;
      TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&>_>
                ((TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
                  *)&CharStateInfoMap,
                 (TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&> *)local_78c,
                 (bool *)&local_268);
    }
    local_a48[6] = 5;
    pFVar4 = &FDS_GameplayTags::GetStateTag(local_a48 + 6)->TagName;
    if (*pFVar4 == (FName)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7843724478616960699>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                         ,0x145,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_250 = &local_150;
      local_148 = 0x400000000;
      local_140 = 0x13;
      local_258 = pFVar4;
      local_150 = *pFVar4;
      TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&>_>
                ((TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
                  *)&CharStateInfoMap,
                 (TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&> *)(local_78c + 4),
                 (bool *)&local_258);
    }
    local_a48[7] = 6;
    pFVar4 = &FDS_GameplayTags::GetStateTag(local_a48 + 7)->TagName;
    if (*pFVar4 == (FName)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7843724478616960699>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                         ,0x145,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_240 = &local_138;
      local_130 = 0x400000000;
      local_128 = 0x14;
      local_248 = pFVar4;
      local_138 = *pFVar4;
      TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&>_>
                ((TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
                  *)&CharStateInfoMap,
                 (TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&> *)local_784,
                 (bool *)&local_248);
    }
    local_a48[8] = 7;
    pFVar4 = &FDS_GameplayTags::GetStateTag(local_a48 + 8)->TagName;
    if (*pFVar4 == (FName)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7843724478616960699>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                         ,0x145,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_230 = &local_120;
      local_118 = 4;
      local_110 = 4;
      local_238 = pFVar4;
      local_120 = *pFVar4;
      TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&>_>
                ((TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
                  *)&CharStateInfoMap,
                 (TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&> *)(local_784 + 4),
                 (bool *)&local_238);
    }
    local_a48[9] = 8;
    pFVar4 = &FDS_GameplayTags::GetStateTag(local_a48 + 9)->TagName;
    if (*pFVar4 == (FName)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7843724478616960699>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                         ,0x145,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_220 = &local_108;
      local_100 = 0x800000;
      local_f8 = 5;
      local_228 = pFVar4;
      local_108 = *pFVar4;
      TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&>_>
                ((TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
                  *)&CharStateInfoMap,
                 (TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&> *)local_77c,
                 (bool *)&local_228);
    }
    local_a48[10] = 9;
    pFVar4 = &FDS_GameplayTags::GetStateTag(local_a48 + 10)->TagName;
    if (*pFVar4 == (FName)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7843724478616960699>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                         ,0x145,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_210 = &local_f0;
      local_e8 = 1;
      local_e0 = 6;
      local_218 = pFVar4;
      local_f0 = *pFVar4;
      TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&>_>
                ((TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
                  *)&CharStateInfoMap,
                 (TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&> *)(local_77c + 4),
                 (bool *)&local_218);
    }
    local_a48[0xb] = 10;
    pFVar4 = &FDS_GameplayTags::GetStateTag(local_a48 + 0xb)->TagName;
    if (*pFVar4 == (FName)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7843724478616960699>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                         ,0x145,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_200 = &local_d8;
      local_d0 = 0x800000;
      local_c8 = 8;
      local_208 = pFVar4;
      local_d8 = *pFVar4;
      TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&>_>
                ((TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
                  *)&CharStateInfoMap,
                 (TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&> *)local_774,
                 (bool *)&local_208);
    }
    local_a48[0xc] = 0xb;
    pFVar4 = &FDS_GameplayTags::GetStateTag(local_a48 + 0xc)->TagName;
    if (*pFVar4 == (FName)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7843724478616960699>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                         ,0x145,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_1f0 = &local_c0;
      local_b8 = 0x800000;
      local_b0 = 9;
      local_1f8 = pFVar4;
      local_c0 = *pFVar4;
      TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&>_>
                ((TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
                  *)&CharStateInfoMap,
                 (TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&> *)(local_774 + 4),
                 (bool *)&local_1f8);
    }
    local_a48[0xd] = 0xc;
    pFVar4 = &FDS_GameplayTags::GetStateTag(local_a48 + 0xd)->TagName;
    if (*pFVar4 == (FName)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7843724478616960699>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                         ,0x145,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_1e0 = &local_a8;
      local_a0 = 4;
      local_98 = 7;
      local_1e8 = pFVar4;
      local_a8 = *pFVar4;
      TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&>_>
                ((TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
                  *)&CharStateInfoMap,
                 (TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&> *)local_76c,
                 (bool *)&local_1e8);
    }
    local_a48[0xe] = 0xd;
    pFVar4 = &FDS_GameplayTags::GetStateTag(local_a48 + 0xe)->TagName;
    if (*pFVar4 == (FName)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7843724478616960699>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                         ,0x145,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_1d0 = &local_90;
      local_88 = 4;
      local_80 = 10;
      local_1d8 = pFVar4;
      local_90 = *pFVar4;
      TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&>_>
                ((TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
                  *)&CharStateInfoMap,
                 (TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&> *)(local_76c + 4),
                 (bool *)&local_1d8);
    }
    local_a48[0xf] = 0xe;
    pFVar4 = &FDS_GameplayTags::GetStateTag(local_a48 + 0xf)->TagName;
    if (*pFVar4 == (FName)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7843724478616960699>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                         ,0x145,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_1c0 = &local_78;
      local_70 = 0x800000;
      local_68 = 0xb;
      local_1c8 = pFVar4;
      local_78 = *pFVar4;
      TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&>_>
                ((TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
                  *)&CharStateInfoMap,
                 (TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&> *)local_764,
                 (bool *)&local_1c8);
    }
    local_a48[0x10] = 0x11;
    pFVar4 = &FDS_GameplayTags::GetStateTag(local_a48 + 0x10)->TagName;
    if (*pFVar4 == (FName)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7843724478616960699>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                         ,0x145,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_1b0 = &local_60;
      local_58 = 1;
      local_50 = 0xc;
      local_1b8 = pFVar4;
      local_60 = *pFVar4;
      TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&>_>
                ((TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
                  *)&CharStateInfoMap,
                 (TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&> *)(local_764 + 4),
                 (bool *)&local_1b8);
    }
    local_a48[0x11] = 0x12;
    pFVar4 = &FDS_GameplayTags::GetStateTag(local_a48 + 0x11)->TagName;
    if (*pFVar4 == (FName)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7843724478616960699>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStateData.cpp"
                         ,0x145,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_1a0 = &local_48;
      local_40 = 8;
      local_38 = 0xd;
      local_1a8 = pFVar4;
      local_48 = *pFVar4;
      TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&>_>
                ((TSet<TTuple<FGameplayTag,FDS_CharStateInfo>,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>,FDefaultSetAllocator>
                  *)&CharStateInfoMap,
                 (TPairInitializer<FGameplayTag_const_&,FDS_CharStateInfo_&&> *)local_75c,
                 (bool *)&local_1a8);
    }
    local_9b4[0] = AvoidNotInput;
    local_75c._4_8_ = &DAT_00000008;
    local_a48[0x12] = 0x13;
    EmplaceToCharStateInfoMap(local_a48 + 0x12,(EDS_CharState *)(local_75c + 4),local_9b4);
    local_9b4[1] = 0xf;
    local_750[0] = Skill;
    local_a48[0x13] = 0x14;
    EmplaceToCharStateInfoMap(local_a48 + 0x13,local_750,local_9b4 + 1);
    local_9b4[2] = 0x10;
    local_750[1] = 0x10;
    local_a48[0x14] = 0x15;
    EmplaceToCharStateInfoMap(local_a48 + 0x14,local_750 + 1,local_9b4 + 2);
    local_9b4[3] = 0x11;
    local_750[2] = 0x10;
    local_a48[0x15] = 0x16;
    EmplaceToCharStateInfoMap(local_a48 + 0x15,local_750 + 2,local_9b4 + 3);
    local_9b4[4] = 0x12;
    local_750[3] = 0x20;
    local_a48[0x16] = 0x17;
    EmplaceToCharStateInfoMap(local_a48 + 0x16,local_750 + 3,local_9b4 + 4);
    local_9b4[5] = 0x15;
    local_750[4] = 0x40;
    local_a48[0x17] = 0x18;
    EmplaceToCharStateInfoMap(local_a48 + 0x17,local_750 + 4,local_9b4 + 5);
    local_9b4[6] = 0x16;
    local_750[5] = 0x40;
    local_a48[0x18] = 0x19;
    EmplaceToCharStateInfoMap(local_a48 + 0x18,local_750 + 5,local_9b4 + 6);
    local_9b4[7] = 0x17;
    local_750[6] = 0x80;
    local_a48[0x19] = 0x1a;
    EmplaceToCharStateInfoMap(local_a48 + 0x19,local_750 + 6,local_9b4 + 7);
    local_9b4[8] = 0x18;
    local_750[7] = 0x80;
    local_a48[0x1a] = 0x1b;
    EmplaceToCharStateInfoMap(local_a48 + 0x1a,local_750 + 7,local_9b4 + 8);
    local_9b4[9] = 0x19;
    local_750[8] = 0x100;
    local_a48[0x1b] = 0x1c;
    EmplaceToCharStateInfoMap(local_a48 + 0x1b,local_750 + 8,local_9b4 + 9);
    local_9b4[10] = 0x8e;
    local_750[9] = 0x200;
    local_a48[0x1c] = 0x1d;
    EmplaceToCharStateInfoMap(local_a48 + 0x1c,local_750 + 9,local_9b4 + 10);
    local_9b4[0xb] = 0x8f;
    local_750[10] = 0x200;
    local_a48[0x1d] = 0x1e;
    EmplaceToCharStateInfoMap(local_a48 + 0x1d,local_750 + 10,local_9b4 + 0xb);
    local_9b4[0xc] = 0x90;
    local_750[0xb] = 0x200;
    local_a48[0x1e] = 0x1f;
    EmplaceToCharStateInfoMap(local_a48 + 0x1e,local_750 + 0xb,local_9b4 + 0xc);
    local_9b4[0xd] = 0x91;
    local_750[0xc] = 0x200;
    local_a48[0x1f] = 0x20;
    EmplaceToCharStateInfoMap(local_a48 + 0x1f,local_750 + 0xc,local_9b4 + 0xd);
    local_9b4[0xe] = 0x1b;
    local_750[0xd] = 0x400;
    local_a48[0x20] = 0x21;
    EmplaceToCharStateInfoMap(local_a48 + 0x20,local_750 + 0xd,local_9b4 + 0xe);
    local_9b4[0xf] = 0x1c;
    local_750[0xe] = 0x800;
    local_a48[0x21] = 0x26;
    EmplaceToCharStateInfoMap(local_a48 + 0x21,local_750 + 0xe,local_9b4 + 0xf);
    local_9b4[0x10] = 0x1d;
    local_750[0xf] = 0x800;
    local_a48[0x22] = 0x27;
    EmplaceToCharStateInfoMap(local_a48 + 0x22,local_750 + 0xf,local_9b4 + 0x10);
    local_9b4[0x11] = 0x1e;
    local_750[0x10] = 0x800;
    local_a48[0x23] = 0x28;
    EmplaceToCharStateInfoMap(local_a48 + 0x23,local_750 + 0x10,local_9b4 + 0x11);
    local_9b4[0x12] = 0x1f;
    local_750[0x11] = 0x800;
    local_a48[0x24] = 0x29;
    EmplaceToCharStateInfoMap(local_a48 + 0x24,local_750 + 0x11,local_9b4 + 0x12);
    local_9b4[0x13] = 0x20;
    local_750[0x12] = 0x800;
    local_a48[0x25] = 0x2a;
    EmplaceToCharStateInfoMap(local_a48 + 0x25,local_750 + 0x12,local_9b4 + 0x13);
    local_9b4[0x14] = 0x21;
    local_750[0x13] = 0x800;
    local_a48[0x26] = 0x2b;
    EmplaceToCharStateInfoMap(local_a48 + 0x26,local_750 + 0x13,local_9b4 + 0x14);
    local_9b4[0x15] = 0x22;
    local_750[0x14] = 0x800;
    local_a48[0x27] = 0x2c;
    EmplaceToCharStateInfoMap(local_a48 + 0x27,local_750 + 0x14,local_9b4 + 0x15);
    local_9b4[0x16] = 0x23;
    local_750[0x15] = 0x800;
    local_a48[0x28] = 0x2d;
    EmplaceToCharStateInfoMap(local_a48 + 0x28,local_750 + 0x15,local_9b4 + 0x16);
    local_9b4[0x17] = 0x24;
    local_750[0x16] = 0x800;
    local_a48[0x29] = 0x2e;
    EmplaceToCharStateInfoMap(local_a48 + 0x29,local_750 + 0x16,local_9b4 + 0x17);
    local_9b4[0x18] = 0x25;
    local_750[0x17] = 0x800;
    local_a48[0x2a] = 0x2f;
    EmplaceToCharStateInfoMap(local_a48 + 0x2a,local_750 + 0x17,local_9b4 + 0x18);
    local_9b4[0x19] = 0x26;
    local_750[0x18] = 0x800;
    local_a48[0x2b] = 0x30;
    EmplaceToCharStateInfoMap(local_a48 + 0x2b,local_750 + 0x18,local_9b4 + 0x19);
    local_9b4[0x1a] = 0x27;
    local_750[0x19] = 0x800;
    local_a48[0x2c] = 0x31;
    EmplaceToCharStateInfoMap(local_a48 + 0x2c,local_750 + 0x19,local_9b4 + 0x1a);
    local_9b4[0x1b] = 0x28;
    local_750[0x1a] = 0x1000;
    local_a48[0x2d] = 0x32;
    EmplaceToCharStateInfoMap(local_a48 + 0x2d,local_750 + 0x1a,local_9b4 + 0x1b);
    local_9b4[0x1c] = 0x29;
    local_750[0x1b] = 0x1000;
    local_a48[0x2e] = 0x33;
    EmplaceToCharStateInfoMap(local_a48 + 0x2e,local_750 + 0x1b,local_9b4 + 0x1c);
    local_9b4[0x1d] = 0x2a;
    local_750[0x1c] = 0x1000;
    local_a48[0x2f] = 0x34;
    EmplaceToCharStateInfoMap(local_a48 + 0x2f,local_750 + 0x1c,local_9b4 + 0x1d);
    local_9b4[0x1e] = 0x2b;
    local_750[0x1d] = 0x1000;
    local_a48[0x30] = 0x35;
    EmplaceToCharStateInfoMap(local_a48 + 0x30,local_750 + 0x1d,local_9b4 + 0x1e);
    local_9b4[0x1f] = 0x2c;
    local_750[0x1e] = 0x1000;
    local_a48[0x31] = 0x36;
    EmplaceToCharStateInfoMap(local_a48 + 0x31,local_750 + 0x1e,local_9b4 + 0x1f);
    local_9b4[0x20] = 0x2d;
    local_750[0x1f] = 0x1000;
    local_a48[0x32] = 0x37;
    EmplaceToCharStateInfoMap(local_a48 + 0x32,local_750 + 0x1f,local_9b4 + 0x20);
    local_9b4[0x21] = 0x2e;
    local_750[0x20] = 0x1000;
    local_a48[0x33] = 0x38;
    EmplaceToCharStateInfoMap(local_a48 + 0x33,local_750 + 0x20,local_9b4 + 0x21);
    local_9b4[0x22] = 0x2f;
    local_750[0x21] = 0x1000;
    local_a48[0x34] = 0x39;
    EmplaceToCharStateInfoMap(local_a48 + 0x34,local_750 + 0x21,local_9b4 + 0x22);
    local_9b4[0x23] = 0x30;
    local_750[0x22] = 0x1000;
    local_a48[0x35] = 0x3a;
    EmplaceToCharStateInfoMap(local_a48 + 0x35,local_750 + 0x22,local_9b4 + 0x23);
    local_9b4[0x24] = 0x31;
    local_750[0x23] = 0x1000;
    local_a48[0x36] = 0x3b;
    EmplaceToCharStateInfoMap(local_a48 + 0x36,local_750 + 0x23,local_9b4 + 0x24);
    local_9b4[0x25] = 0x32;
    local_750[0x24] = 0x1000;
    local_a48[0x37] = 0x3c;
    EmplaceToCharStateInfoMap(local_a48 + 0x37,local_750 + 0x24,local_9b4 + 0x25);
    local_9b4[0x26] = 0x33;
    local_750[0x25] = 0x1000;
    local_a48[0x38] = 0x3d;
    EmplaceToCharStateInfoMap(local_a48 + 0x38,local_750 + 0x25,local_9b4 + 0x26);
    local_9b4[0x27] = 0x34;
    local_750[0x26] = 0x1000;
    local_a48[0x39] = 0x3e;
    EmplaceToCharStateInfoMap(local_a48 + 0x39,local_750 + 0x26,local_9b4 + 0x27);
    local_9b4[0x28] = 0x35;
    local_750[0x27] = 0x1000;
    local_a48[0x3a] = 0x3f;
    EmplaceToCharStateInfoMap(local_a48 + 0x3a,local_750 + 0x27,local_9b4 + 0x28);
    local_9b4[0x29] = 0x36;
    local_750[0x28] = 0x1000;
    local_a48[0x3b] = 0x40;
    EmplaceToCharStateInfoMap(local_a48 + 0x3b,local_750 + 0x28,local_9b4 + 0x29);
    local_9b4[0x2a] = 0x37;
    local_750[0x29] = 0x1000;
    local_a48[0x3c] = 0x41;
    EmplaceToCharStateInfoMap(local_a48 + 0x3c,local_750 + 0x29,local_9b4 + 0x2a);
    local_9b4[0x2b] = 0x38;
    local_750[0x2a] = 0x1000;
    local_a48[0x3d] = 0x42;
    EmplaceToCharStateInfoMap(local_a48 + 0x3d,local_750 + 0x2a,local_9b4 + 0x2b);
    local_9b4[0x2c] = 0x39;
    local_750[0x2b] = 0x1000;
    local_a48[0x3e] = 0x43;
    EmplaceToCharStateInfoMap(local_a48 + 0x3e,local_750 + 0x2b,local_9b4 + 0x2c);
    local_9b4[0x2d] = 0;
    local_750[0x2c] = 0x2000;
    local_a48[0x3f] = 0x44;
    EmplaceToCharStateInfoMap(local_a48 + 0x3f,local_750 + 0x2c,local_9b4 + 0x2d);
    local_9b4[0x2e] = 0x3a;
    local_750[0x2d] = 0x4000;
    local_a48[0x40] = 0x45;
    EmplaceToCharStateInfoMap(local_a48 + 0x40,local_750 + 0x2d,local_9b4 + 0x2e);
    local_9b4[0x2f] = 0x3b;
    local_750[0x2e] = 0x4000;
    local_a48[0x41] = 0x46;
    EmplaceToCharStateInfoMap(local_a48 + 0x41,local_750 + 0x2e,local_9b4 + 0x2f);
    local_9b4[0x30] = 0x3c;
    local_750[0x2f] = 0x4000;
    local_a48[0x42] = 0x47;
    EmplaceToCharStateInfoMap(local_a48 + 0x42,local_750 + 0x2f,local_9b4 + 0x30);
    local_9b4[0x31] = 0x3d;
    local_750[0x30] = 0x4000;
    local_a48[0x43] = 0x48;
    EmplaceToCharStateInfoMap(local_a48 + 0x43,local_750 + 0x30,local_9b4 + 0x31);
    local_9b4[0x32] = 0x3e;
    local_750[0x31] = 0x4000;
    local_a48[0x44] = 0x49;
    EmplaceToCharStateInfoMap(local_a48 + 0x44,local_750 + 0x31,local_9b4 + 0x32);
    local_9b4[0x33] = 0x3f;
    local_750[0x32] = 0x4000;
    local_a48[0x45] = 0x4a;
    EmplaceToCharStateInfoMap(local_a48 + 0x45,local_750 + 0x32,local_9b4 + 0x33);
    local_9b4[0x34] = 0x40;
    local_750[0x33] = 0x4000;
    local_a48[0x46] = 0x4b;
    EmplaceToCharStateInfoMap(local_a48 + 0x46,local_750 + 0x33,local_9b4 + 0x34);
    local_9b4[0x35] = 0x41;
    local_750[0x34] = 0x4000;
    local_a48[0x47] = 0x4c;
    EmplaceToCharStateInfoMap(local_a48 + 0x47,local_750 + 0x34,local_9b4 + 0x35);
    local_9b4[0x36] = 0x42;
    local_750[0x35] = 0x4000;
    local_a48[0x48] = 0x4d;
    EmplaceToCharStateInfoMap(local_a48 + 0x48,local_750 + 0x35,local_9b4 + 0x36);
    local_9b4[0x37] = 0x43;
    local_750[0x36] = 0x4000;
    local_a48[0x49] = 0x50;
    EmplaceToCharStateInfoMap(local_a48 + 0x49,local_750 + 0x36,local_9b4 + 0x37);
    local_9b4[0x38] = 0x44;
    local_750[0x37] = 0x4000;
    local_a48[0x4a] = 0x51;
    EmplaceToCharStateInfoMap(local_a48 + 0x4a,local_750 + 0x37,local_9b4 + 0x38);
    local_9b4[0x39] = 0x45;
    local_750[0x38] = 0x4000;
    local_a48[0x4b] = 0x52;
    EmplaceToCharStateInfoMap(local_a48 + 0x4b,local_750 + 0x38,local_9b4 + 0x39);
    local_9b4[0x3a] = 0x46;
    local_750[0x39] = 0x4000;
    local_a48[0x4c] = 0x53;
    EmplaceToCharStateInfoMap(local_a48 + 0x4c,local_750 + 0x39,local_9b4 + 0x3a);
    local_9b4[0x3b] = 0x47;
    local_750[0x3a] = 0x4000;
    local_a48[0x4d] = 0x56;
    EmplaceToCharStateInfoMap(local_a48 + 0x4d,local_750 + 0x3a,local_9b4 + 0x3b);
    local_9b4[0x3c] = 0x48;
    local_750[0x3b] = 0x4000;
    local_a48[0x4e] = 0x57;
    EmplaceToCharStateInfoMap(local_a48 + 0x4e,local_750 + 0x3b,local_9b4 + 0x3c);
    local_9b4[0x3d] = 0x49;
    local_750[0x3c] = 0x4000;
    local_a48[0x4f] = 0x58;
    EmplaceToCharStateInfoMap(local_a48 + 0x4f,local_750 + 0x3c,local_9b4 + 0x3d);
    local_9b4[0x3e] = 0x4a;
    local_750[0x3d] = 0x4000;
    local_a48[0x50] = 0x59;
    EmplaceToCharStateInfoMap(local_a48 + 0x50,local_750 + 0x3d,local_9b4 + 0x3e);
    local_9b4[0x3f] = 0x4b;
    local_750[0x3e] = 0x4000;
    local_a48[0x51] = 0x5a;
    EmplaceToCharStateInfoMap(local_a48 + 0x51,local_750 + 0x3e,local_9b4 + 0x3f);
    local_9b4[0x40] = 0x4c;
    local_750[0x3f] = 0x4000;
    local_a48[0x52] = 0x55;
    EmplaceToCharStateInfoMap(local_a48 + 0x52,local_750 + 0x3f,local_9b4 + 0x40);
    local_9b4[0x41] = 0x4d;
    local_750[0x40] = 0x4000;
    local_a48[0x53] = 0x54;
    EmplaceToCharStateInfoMap(local_a48 + 0x53,local_750 + 0x40,local_9b4 + 0x41);
    local_9b4[0x42] = 0x4e;
    local_750[0x41] = 0x4000;
    local_a48[0x54] = 0x5b;
    EmplaceToCharStateInfoMap(local_a48 + 0x54,local_750 + 0x41,local_9b4 + 0x42);
    local_9b4[0x43] = 0x4f;
    local_750[0x42] = 0x4000;
    local_a48[0x55] = 0x5c;
    EmplaceToCharStateInfoMap(local_a48 + 0x55,local_750 + 0x42,local_9b4 + 0x43);
    local_9b4[0x44] = 0x50;
    local_750[0x43] = 0x4000;
    local_a48[0x56] = 0x5d;
    EmplaceToCharStateInfoMap(local_a48 + 0x56,local_750 + 0x43,local_9b4 + 0x44);
    local_9b4[0x45] = 0x51;
    local_750[0x44] = 0x4000;
    local_a48[0x57] = 0x5e;
    EmplaceToCharStateInfoMap(local_a48 + 0x57,local_750 + 0x44,local_9b4 + 0x45);
    local_9b4[0x46] = 0x52;
    local_750[0x45] = 0x8000;
    local_a48[0x58] = 0x5f;
    EmplaceToCharStateInfoMap(local_a48 + 0x58,local_750 + 0x45,local_9b4 + 0x46);
    local_9b4[0x47] = 0x53;
    local_750[0x46] = 0x8000;
    local_a48[0x59] = 0x60;
    EmplaceToCharStateInfoMap(local_a48 + 0x59,local_750 + 0x46,local_9b4 + 0x47);
    local_9b4[0x48] = 0x54;
    local_750[0x47] = 0x20000000;
    local_a48[0x5a] = 0x61;
    EmplaceToCharStateInfoMap(local_a48 + 0x5a,local_750 + 0x47,local_9b4 + 0x48);
    local_9b4[0x49] = 0x55;
    local_750[0x48] = 0x20000000;
    local_a48[0x5b] = 0x62;
    EmplaceToCharStateInfoMap(local_a48 + 0x5b,local_750 + 0x48,local_9b4 + 0x49);
    local_9b4[0x4a] = 0x56;
    local_750[0x49] = 0x10000;
    local_a48[0x5c] = 99;
    EmplaceToCharStateInfoMap(local_a48 + 0x5c,local_750 + 0x49,local_9b4 + 0x4a);
    local_9b4[0x4b] = 0x57;
    local_750[0x4a] = 0x10000;
    local_a48[0x5d] = 100;
    EmplaceToCharStateInfoMap(local_a48 + 0x5d,local_750 + 0x4a,local_9b4 + 0x4b);
    local_9b4[0x4c] = 0x58;
    local_750[0x4b] = 0x10000;
    local_a48[0x5e] = 0x65;
    EmplaceToCharStateInfoMap(local_a48 + 0x5e,local_750 + 0x4b,local_9b4 + 0x4c);
    local_9b4[0x4d] = 0x59;
    local_750[0x4c] = 0x10000;
    local_a48[0x5f] = 0x66;
    EmplaceToCharStateInfoMap(local_a48 + 0x5f,local_750 + 0x4c,local_9b4 + 0x4d);
    local_9b4[0x4e] = 0x5a;
    local_750[0x4d] = 0x10000;
    local_a48[0x60] = 0x67;
    EmplaceToCharStateInfoMap(local_a48 + 0x60,local_750 + 0x4d,local_9b4 + 0x4e);
    local_9b4[0x4f] = 0x5b;
    local_750[0x4e] = 0x10000;
    local_a48[0x61] = 0x68;
    EmplaceToCharStateInfoMap(local_a48 + 0x61,local_750 + 0x4e,local_9b4 + 0x4f);
    local_9b4[0x50] = 0x5c;
    local_750[0x4f] = 0x10000;
    local_a48[0x62] = 0x69;
    EmplaceToCharStateInfoMap(local_a48 + 0x62,local_750 + 0x4f,local_9b4 + 0x50);
    local_9b4[0x51] = 0x5d;
    local_750[0x50] = 0x10000;
    local_a48[99] = 0x6a;
    EmplaceToCharStateInfoMap(local_a48 + 99,local_750 + 0x50,local_9b4 + 0x51);
    local_9b4[0x52] = 0x5e;
    local_750[0x51] = 0x20000;
    local_a48[100] = 0x6b;
    EmplaceToCharStateInfoMap(local_a48 + 100,local_750 + 0x51,local_9b4 + 0x52);
    local_9b4[0x53] = 0x5f;
    local_750[0x52] = 0x20000;
    local_a48[0x65] = 0x6c;
    EmplaceToCharStateInfoMap(local_a48 + 0x65,local_750 + 0x52,local_9b4 + 0x53);
    local_9b4[0x54] = 0x60;
    local_750[0x53] = 0x10000000;
    local_a48[0x66] = 0x6d;
    EmplaceToCharStateInfoMap(local_a48 + 0x66,local_750 + 0x53,local_9b4 + 0x54);
    local_9b4[0x55] = 0x61;
    local_750[0x54] = 0x10000000;
    local_a48[0x67] = 0x6e;
    EmplaceToCharStateInfoMap(local_a48 + 0x67,local_750 + 0x54,local_9b4 + 0x55);
    local_9b4[0x56] = 0x62;
    local_750[0x55] = 0x10000000;
    local_a48[0x68] = 0x6f;
    EmplaceToCharStateInfoMap(local_a48 + 0x68,local_750 + 0x55,local_9b4 + 0x56);
    local_9b4[0x57] = 99;
    local_750[0x56] = 0x10000000;
    local_a48[0x69] = 0x70;
    EmplaceToCharStateInfoMap(local_a48 + 0x69,local_750 + 0x56,local_9b4 + 0x57);
    local_9b4[0x58] = 100;
    local_750[0x57] = 0x10000000;
    local_a48[0x6a] = 0x71;
    EmplaceToCharStateInfoMap(local_a48 + 0x6a,local_750 + 0x57,local_9b4 + 0x58);
    local_9b4[0x59] = 0x66;
    local_750[0x58] = 0x10000000;
    local_a48[0x6b] = 0x73;
    EmplaceToCharStateInfoMap(local_a48 + 0x6b,local_750 + 0x58,local_9b4 + 0x59);
    local_9b4[0x5a] = 0x67;
    local_750[0x59] = 0x10000000;
    local_a48[0x6c] = 0x74;
    EmplaceToCharStateInfoMap(local_a48 + 0x6c,local_750 + 0x59,local_9b4 + 0x5a);
    local_9b4[0x5b] = 0x68;
    local_750[0x5a] = 0x10000000;
    local_a48[0x6d] = 0x75;
    EmplaceToCharStateInfoMap(local_a48 + 0x6d,local_750 + 0x5a,local_9b4 + 0x5b);
    local_9b4[0x5c] = 0x69;
    local_750[0x5b] = 0x10000000;
    local_a48[0x6e] = 0x76;
    EmplaceToCharStateInfoMap(local_a48 + 0x6e,local_750 + 0x5b,local_9b4 + 0x5c);
    local_9b4[0x5d] = 0x6c;
    local_750[0x5c] = 0x10000000;
    local_a48[0x6f] = 0x79;
    EmplaceToCharStateInfoMap(local_a48 + 0x6f,local_750 + 0x5c,local_9b4 + 0x5d);
    local_9b4[0x5e] = 0x6a;
    local_750[0x5d] = 0x10000000;
    local_a48[0x70] = 0x77;
    EmplaceToCharStateInfoMap(local_a48 + 0x70,local_750 + 0x5d,local_9b4 + 0x5e);
    local_9b4[0x5f] = 0x6b;
    local_750[0x5e] = 0x10000000;
    local_a48[0x71] = 0x78;
    EmplaceToCharStateInfoMap(local_a48 + 0x71,local_750 + 0x5e,local_9b4 + 0x5f);
    local_9b4[0x60] = 0x65;
    local_750[0x5f] = 0x10000000;
    local_a48[0x72] = 0x72;
    EmplaceToCharStateInfoMap(local_a48 + 0x72,local_750 + 0x5f,local_9b4 + 0x60);
    local_9b4[0x61] = 0x6d;
    local_750[0x60] = 0x10000000;
    local_a48[0x73] = 0x7a;
    EmplaceToCharStateInfoMap(local_a48 + 0x73,local_750 + 0x60,local_9b4 + 0x61);
    local_9b4[0x62] = 0x6e;
    local_750[0x61] = 0x40000;
    local_a48[0x74] = 0x7b;
    EmplaceToCharStateInfoMap(local_a48 + 0x74,local_750 + 0x61,local_9b4 + 0x62);
    local_9b4[99] = 0x6f;
    local_750[0x62] = 0x80000;
    local_a48[0x75] = 0x7c;
    EmplaceToCharStateInfoMap(local_a48 + 0x75,local_750 + 0x62,local_9b4 + 99);
    local_9b4[100] = 0x70;
    local_750[99] = 0x80000;
    local_a48[0x76] = 0x7d;
    EmplaceToCharStateInfoMap(local_a48 + 0x76,local_750 + 99,local_9b4 + 100);
    local_9b4[0x65] = 0x71;
    local_750[100] = 0x100000;
    local_a48[0x77] = 0x7e;
    EmplaceToCharStateInfoMap(local_a48 + 0x77,local_750 + 100,local_9b4 + 0x65);
    local_9b4[0x66] = 0x72;
    local_750[0x65] = 0x200000;
    local_a48[0x78] = 0x7f;
    EmplaceToCharStateInfoMap(local_a48 + 0x78,local_750 + 0x65,local_9b4 + 0x66);
    local_9b4[0x67] = 0x73;
    local_750[0x66] = 0x400000;
    local_a48[0x79] = 0x80;
    EmplaceToCharStateInfoMap(local_a48 + 0x79,local_750 + 0x66,local_9b4 + 0x67);
    local_9b4[0x68] = 0x74;
    local_750[0x67] = 0x800000;
    local_a48[0x7a] = 0x82;
    EmplaceToCharStateInfoMap(local_a48 + 0x7a,local_750 + 0x67,local_9b4 + 0x68);
    local_9b4[0x69] = 0x75;
    local_750[0x68] = 0x800000;
    local_a48[0x7b] = 0x83;
    EmplaceToCharStateInfoMap(local_a48 + 0x7b,local_750 + 0x68,local_9b4 + 0x69);
    local_9b4[0x6a] = 0x76;
    local_750[0x69] = 0x1000000;
    local_a48[0x7c] = 0x84;
    EmplaceToCharStateInfoMap(local_a48 + 0x7c,local_750 + 0x69,local_9b4 + 0x6a);
    local_9b4[0x6b] = 0x77;
    local_750[0x6a] = 0x2000000;
    local_a48[0x7d] = 0x85;
    EmplaceToCharStateInfoMap(local_a48 + 0x7d,local_750 + 0x6a,local_9b4 + 0x6b);
    local_9b4[0x6c] = 0x78;
    local_750[0x6b] = 0x4000000;
    local_a48[0x7e] = 0x86;
    EmplaceToCharStateInfoMap(local_a48 + 0x7e,local_750 + 0x6b,local_9b4 + 0x6c);
    local_9b4[0x6d] = 0x79;
    local_750[0x6c] = 0x8000000;
    local_a48[0x7f] = 0x87;
    EmplaceToCharStateInfoMap(local_a48 + 0x7f,local_750 + 0x6c,local_9b4 + 0x6d);
    local_9b4[0x6e] = 0x7a;
    local_750[0x6d] = 0x8000000;
    local_a48[0x80] = 0x88;
    EmplaceToCharStateInfoMap(local_a48 + 0x80,local_750 + 0x6d,local_9b4 + 0x6e);
    local_9b4[0x6f] = 0x7b;
    local_750[0x6e] = 0x8000000;
    local_a48[0x81] = 0x89;
    EmplaceToCharStateInfoMap(local_a48 + 0x81,local_750 + 0x6e,local_9b4 + 0x6f);
    local_9b4[0x70] = 0x7c;
    local_750[0x6f] = 0x8000000;
    local_a48[0x82] = 0x8a;
    EmplaceToCharStateInfoMap(local_a48 + 0x82,local_750 + 0x6f,local_9b4 + 0x70);
    local_9b4[0x71] = 0x7d;
    local_750[0x70] = 0x8000000;
    local_a48[0x83] = 0x8b;
    EmplaceToCharStateInfoMap(local_a48 + 0x83,local_750 + 0x70,local_9b4 + 0x71);
    local_9b4[0x72] = 0x7e;
    local_750[0x71] = 0x8000000;
    local_a48[0x84] = 0x8c;
    EmplaceToCharStateInfoMap(local_a48 + 0x84,local_750 + 0x71,local_9b4 + 0x72);
    local_9b4[0x73] = 0x7f;
    local_750[0x72] = 0x40000000;
    local_a48[0x85] = 0x8d;
    EmplaceToCharStateInfoMap(local_a48 + 0x85,local_750 + 0x72,local_9b4 + 0x73);
    local_9b4[0x74] = 0x80;
    local_750[0x73] = 4;
    local_a48[0x86] = 0x8e;
    EmplaceToCharStateInfoMap(local_a48 + 0x86,local_750 + 0x73,local_9b4 + 0x74);
    local_9b4[0x75] = 0x81;
    local_750[0x74] = 4;
    local_a48[0x87] = 0x8f;
    EmplaceToCharStateInfoMap(local_a48 + 0x87,local_750 + 0x74,local_9b4 + 0x75);
    local_9b4[0x76] = 0x82;
    local_750[0x75] = 4;
    local_a48[0x88] = 0x90;
    EmplaceToCharStateInfoMap(local_a48 + 0x88,local_750 + 0x75,local_9b4 + 0x76);
    local_9b4[0x77] = 0x83;
    local_750[0x76] = 0x100000000;
    local_a48[0x89] = 0x91;
    EmplaceToCharStateInfoMap(local_a48 + 0x89,local_750 + 0x76,local_9b4 + 0x77);
    local_9b4[0x78] = 0x84;
    local_750[0x77] = 0x200000000;
    local_a48[0x8a] = 0x92;
    EmplaceToCharStateInfoMap(local_a48 + 0x8a,local_750 + 0x77,local_9b4 + 0x78);
    local_9b4[0x79] = 0x85;
    local_750[0x78] = 0x200000000;
    local_a48[0x8b] = 0x93;
    EmplaceToCharStateInfoMap(local_a48 + 0x8b,local_750 + 0x78,local_9b4 + 0x79);
    local_9b4[0x7a] = 0x86;
    local_750[0x79] = 0x200000000;
    local_a48[0x8c] = 0x94;
    EmplaceToCharStateInfoMap(local_a48 + 0x8c,local_750 + 0x79,local_9b4 + 0x7a);
    local_9b4[0x7b] = 0x87;
    local_750[0x7a] = 0x200000000;
    local_a48[0x8d] = 0x95;
    EmplaceToCharStateInfoMap(local_a48 + 0x8d,local_750 + 0x7a,local_9b4 + 0x7b);
    local_9b4[0x7c] = 0x88;
    local_750[0x7b] = 0x200000000;
    local_a48[0x8e] = 0x96;
    EmplaceToCharStateInfoMap(local_a48 + 0x8e,local_750 + 0x7b,local_9b4 + 0x7c);
    local_9b4[0x7d] = 0x89;
    local_750[0x7c] = 0x200000000;
    local_a48[0x8f] = 0x97;
    EmplaceToCharStateInfoMap(local_a48 + 0x8f,local_750 + 0x7c,local_9b4 + 0x7d);
    local_9b4[0x7e] = 0x8a;
    local_750[0x7d] = 0x200000000;
    local_a48[0x90] = 0x98;
    EmplaceToCharStateInfoMap(local_a48 + 0x90,local_750 + 0x7d,local_9b4 + 0x7e);
    local_9b4[0x7f] = 0x8b;
    local_750[0x7e] = 0x200000000;
    local_a48[0x91] = 0x99;
    EmplaceToCharStateInfoMap(local_a48 + 0x91,local_750 + 0x7e,local_9b4 + 0x7f);
    local_9b4[0x80] = 0x8c;
    local_750[0x7f] = 0x200000000;
    local_a48[0x92] = 0x9a;
    EmplaceToCharStateInfoMap(local_a48 + 0x92,local_750 + 0x7f,local_9b4 + 0x80);
    local_9b4[0x81] = 0x8d;
    local_750[0x80] = 0x200000000;
    local_a48[0x93] = 0x9b;
    EmplaceToCharStateInfoMap(local_a48 + 0x93,local_750 + 0x80,local_9b4 + 0x81);
  }
  return;
}

// OnChangedTagCallback @ 14ba608a0

void __thiscall
UDS_CharStateData::OnChangedTagCallback(UDS_CharStateData *this,FGameplayTag *param_1,bool param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  FName FVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  FWeakObjectPtr FVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FDS_ChangedCharStateInfo *pFVar14;
  longlong lVar15;
  FWeakObjectPtr local_res10;
  bool local_res18 [8];
  UDS_CharStateData *local_res20;
  FDestructionSentinel local_c0;
  FName local_a8;
  undefined8 uStack_a0;
  EDS_CharState local_98;
  EDS_CharState EStack_90;
  FName local_88;
  undefined8 uStack_80;
  EDS_CharState local_78;
  EDS_CharState EStack_70;
  undefined8 local_68;
  FDS_ChangedCharStateInfo local_58;
  
  FVar3 = param_1->TagName;
  local_res18[0] = param_2;
  uVar11 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  if (CharStateInfoMap._8_4_ != CharStateInfoMap._52_4_) {
    lVar15 = 0x154cf7278;
    if (CharStateInfoMap._64_8_ != 0) {
      lVar15 = CharStateInfoMap._64_8_;
    }
    iVar12 = *(int *)(lVar15 + (ulonglong)(CharStateInfoMap._72_4_ - 1 & FVar3.Number + uVar11) * 4)
    ;
    if (iVar12 != -1) {
      do {
        if (*(FName *)(CharStateInfoMap._0_8_ + (longlong)iVar12 * 0x28) == param_1->TagName)
        goto LAB_14ba609c1;
        iVar12 = *(int *)(CharStateInfoMap._0_8_ + 0x20 + (longlong)iVar12 * 0x28);
      } while (iVar12 != -1);
    }
  }
  FVar3 = param_1->TagName;
  uVar11 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  if (LocomotionStateInfoMap._8_4_ != LocomotionStateInfoMap._52_4_) {
    lVar15 = 0x154cf7228;
    if (LocomotionStateInfoMap._64_8_ != 0) {
      lVar15 = LocomotionStateInfoMap._64_8_;
    }
    iVar12 = *(int *)(lVar15 + (ulonglong)
                               (LocomotionStateInfoMap._72_4_ - 1 & FVar3.Number + uVar11) * 4);
    if (iVar12 != -1) {
      while (*(FName *)((longlong)iVar12 * 0x20 + LocomotionStateInfoMap._0_8_) != param_1->TagName)
      {
        iVar12 = *(int *)((longlong)iVar12 * 0x20 + 0x18 + LocomotionStateInfoMap._0_8_);
        if (iVar12 == -1) {
          return;
        }
      }
LAB_14ba609c1:
      UpdateCharStateInfo(this,param_1,param_2);
      UpdateLocomotionStateInfo(this,param_1,param_2);
      pFVar14 = GetChangedCharStateInfo(&local_58,param_1,local_res18);
      local_a8 = (pFVar14->StateTag).TagName;
      uStack_a0 = *(undefined8 *)&pFVar14->bIsStateTagOn;
      local_98 = pFVar14->AddedCharState;
      EStack_90 = pFVar14->RemovedCharState;
      uVar2._0_4_ = pFVar14->AddedCharDetailState;
      uVar2._4_4_ = pFVar14->RemovedCharDetailState;
      (this->LatestChangedCharStateInfo).StateTag.TagName = local_a8;
      *(undefined8 *)&(this->LatestChangedCharStateInfo).bIsStateTagOn = uStack_a0;
      (this->LatestChangedCharStateInfo).AddedCharState = local_98;
      (this->LatestChangedCharStateInfo).RemovedCharState = EStack_90;
      (this->LatestChangedCharStateInfo).AddedCharDetailState = (undefined4)uVar2;
      (this->LatestChangedCharStateInfo).RemovedCharDetailState = uVar2._4_4_;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
      FVar8 = local_res10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->ChangedCharStateDelegate,(FWriteAccessScope *)&local_c0);
      puVar1 = &(this->ChangedCharStateDelegate).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar7 = false;
      uVar11 = *(int *)&(this->ChangedCharStateDelegate).field_0x10 - 1;
      if (-1 < (int)uVar11) {
        lVar15 = (longlong)(int)uVar11 << 4;
        bVar7 = false;
        do {
          uVar13 = 0;
          if ((int)uVar11 < *(int *)&(this->ChangedCharStateDelegate).field_0x10) {
            uVar13 = ~uVar11 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar4 = *(longlong *)&(this->ChangedCharStateDelegate).field_0x8;
          if ((*(int *)(lVar15 + 8 + lVar4) == 0) ||
             (plVar5 = *(longlong **)(lVar15 + lVar4), plVar5 == (longlong *)0x0)) {
LAB_14ba60b53:
            bVar7 = true;
          }
          else {
            local_88 = local_a8;
            uStack_80 = uStack_a0;
            local_78 = local_98;
            EStack_70 = EStack_90;
            local_68 = uVar2;
            cVar10 = (**(code **)(*plVar5 + 0x68))(plVar5,FVar8,&local_88);
            if (cVar10 == '\0') goto LAB_14ba60b53;
          }
          lVar15 = lVar15 + -0x10;
          uVar11 = uVar11 - 1;
        } while (-1 < (int)uVar11);
      }
      puVar1 = &(this->ChangedCharStateDelegate).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar7) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->ChangedCharStateDelegate,false);
      }
      if (local_c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
      }
    }
  }
  return;
}

// RemoveCharStateTag @ 14ba65ab0

void __thiscall UDS_CharStateData::RemoveCharStateTag(UDS_CharStateData *this,FGameplayTag *param_1)

{
  FName FVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::Remove(&this->StateTagList,param_1);
  UpdateCharState(this);
  FVar1 = param_1->TagName;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->AniIndexListMap).field_0x8 != *(int *)&(this->AniIndexListMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->AniIndexListMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->AniIndexListMap).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->AniIndexListMap).field_0x48 - 1U &
                              FVar1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      FVar1 = param_1->TagName;
      lVar2 = *(longlong *)&(this->AniIndexListMap).field_0x0;
      while (*(FName *)((longlong)iVar4 * 0x20 + lVar2) != FVar1) {
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar2);
        if (iVar4 == -1) {
          return;
        }
      }
      uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
      TSet<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FGameplayTag>
                ((TSet<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&this->AniIndexListMap,uVar3 + FVar1.Number,param_1);
    }
  }
  return;
}

// ResetData @ 14ba68980

void __thiscall UDS_CharStateData::ResetData(UDS_CharStateData *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  FGameplayTag FVar6;
  
  piVar1 = &(this->StateTagList).ArrayMax;
  (this->StateTagList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->StateTagList).AllocatorInstance,0,piVar1);
  }
  this->CharState = None;
  this->ShieldState = Folded;
  bVar4 = 1 < *(int *)&(this->AniIndexListMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->AniIndexListMap);
  }
  TSparseArray<TSparseSetElement<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->AniIndexListMap,0,*(int *)&(this->AniIndexListMap).field_0x8);
  puVar2 = &(this->AniIndexListMap).field_0xc;
  *(undefined4 *)&(this->AniIndexListMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->AniIndexListMap,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->AniIndexListMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AniIndexListMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->AniIndexListMap).field_0x2c;
  *(undefined4 *)&(this->AniIndexListMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->AniIndexListMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AniIndexListMap).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->AniIndexListMap).field_0x48 = 1;
    TSet<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->AniIndexListMap);
  }
  piVar1 = &(this->LocomotionStateTagPendingList).ArrayMax;
  (this->LocomotionStateTagPendingList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->LocomotionStateTagPendingList).AllocatorInstance,0,piVar1);
  }
  FVar6.TagName = FGameplayTag::EmptyTag.TagName;
  (this->LocomotionStateInfo).State = Default;
  (this->LocomotionStateInfo).StateOrder = 0;
  (this->LocomotionStateInfo).Tag.TagName = FVar6.TagName;
  this->LookAtType = None;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LookAtLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->LookAtLocation).field0_0x0._s_0.Y = (double)uVar5;
  (this->LookAtLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  return;
}

// SetAniIndexList @ 14ba6a290

void __thiscall
UDS_CharStateData::SetAniIndexList
          (UDS_CharStateData *this,FGameplayTag *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  TPairInitializer<FGameplayTag_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&> local_res10
  ;
  FGameplayTag *local_18;
  TArray<int,TSizedDefaultAllocator<32>_> *local_10;
  
  if ((param_1->TagName != (FName)0x0) && (param_2->ArrayNum == 3)) {
    local_18 = param_1;
    local_10 = param_2;
    TSet<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FGameplayTag_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&>_>
              ((TSet<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&this->AniIndexListMap,&local_res10,(bool *)&local_18);
  }
  return;
}

// UpdateCharState @ 14ba7bf40

void __thiscall UDS_CharStateData::UpdateCharState(UDS_CharStateData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FDS_CharStateInfo *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  this->CharState = None;
  pFVar4 = (this->StateTagList).AllocatorInstance.Data;
  iVar2 = (this->StateTagList).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->StateTagList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FGameplayTag,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pFVar3 = TMapBase<FGameplayTag,FDS_CharStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>_>
             ::FindChecked((TMapBase<FGameplayTag,FDS_CharStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>_>
                            *)&CharStateInfoMap,(FGameplayTag *)pFVar4);
    this->CharState = this->CharState | pFVar3->State;
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// UpdateCharStateInfo @ 14ba7bfc0

void __thiscall
UDS_CharStateData::UpdateCharStateInfo(UDS_CharStateData *this,FGameplayTag *param_1,bool param_2)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  FVar1 = param_1->TagName;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (CharStateInfoMap._8_4_ == CharStateInfoMap._52_4_) {
    return;
  }
  lVar5 = 0x154cf7278;
  if (CharStateInfoMap._64_8_ != 0) {
    lVar5 = CharStateInfoMap._64_8_;
  }
  iVar3 = *(int *)(lVar5 + (ulonglong)(CharStateInfoMap._72_4_ - 1 & FVar1.Number + uVar2) * 4);
  if (iVar3 == -1) {
    return;
  }
  while (*(FName *)(CharStateInfoMap._0_8_ + (longlong)iVar3 * 0x28) != param_1->TagName) {
    iVar3 = *(int *)(CharStateInfoMap._0_8_ + 0x20 + (longlong)iVar3 * 0x28);
    if (iVar3 == -1) {
      return;
    }
  }
  if (param_2) {
    TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGameplayTag_const_&>
              (&this->StateTagList,param_1);
    UpdateCharState(this);
    return;
  }
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::Remove(&this->StateTagList,param_1);
  UpdateCharState(this);
  FVar1 = param_1->TagName;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->AniIndexListMap).field_0x8 == *(int *)&(this->AniIndexListMap).field_0x34) {
    return;
  }
  puVar4 = *(undefined1 **)&(this->AniIndexListMap).field_0x40;
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &(this->AniIndexListMap).field_0x38;
  }
  iVar3 = *(int *)(puVar4 + (ulonglong)
                            (*(int *)&(this->AniIndexListMap).field_0x48 - 1U & FVar1.Number + uVar2
                            ) * 4);
  if (iVar3 == -1) {
    return;
  }
  FVar1 = param_1->TagName;
  do {
    if (*(FName *)((longlong)iVar3 * 0x20 + *(longlong *)&this->AniIndexListMap) == FVar1) {
      uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
      TSet<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FGameplayTag>
                ((TSet<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&this->AniIndexListMap,uVar2 + FVar1.Number,param_1);
      return;
    }
    iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->AniIndexListMap);
  } while (iVar3 != -1);
  return;
}

// UpdateLocomotionStateInfo @ 14ba7d750

void __thiscall
UDS_CharStateData::UpdateLocomotionStateInfo
          (UDS_CharStateData *this,FGameplayTag *param_1,bool param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FDS_LocomotionStateInfo *pFVar7;
  FName FVar8;
  int iVar9;
  FName *pFVar10;
  FName *pFVar11;
  longlong lVar12;
  undefined1 local_res10 [8];
  
  FVar8 = param_1->TagName;
  uVar5 = ::GetTypeHash(FVar8.ComparisonIndex.Value);
  if (LocomotionStateInfoMap._8_4_ != LocomotionStateInfoMap._52_4_) {
    lVar12 = 0x154cf7228;
    if (LocomotionStateInfoMap._64_8_ != 0) {
      lVar12 = LocomotionStateInfoMap._64_8_;
    }
    iVar6 = *(int *)(lVar12 + (ulonglong)(LocomotionStateInfoMap._72_4_ - 1 & FVar8.Number + uVar5)
                              * 4);
    if (iVar6 != -1) {
      while (*(FName *)((longlong)iVar6 * 0x20 + LocomotionStateInfoMap._0_8_) != param_1->TagName)
      {
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + LocomotionStateInfoMap._0_8_);
        if (iVar6 == -1) {
          return;
        }
      }
      this_00 = &this->LocomotionStateTagPendingList;
      piVar1 = &(this->LocomotionStateTagPendingList).ArrayNum;
      if (param_2) {
        iVar6 = *piVar1;
        piVar2 = &(this->LocomotionStateTagPendingList).ArrayMax;
        if (iVar6 == *piVar2) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&this_00->AllocatorInstance,piVar2);
        }
        *piVar1 = iVar6 + 1;
        *(FName *)((this_00->AllocatorInstance).Data + (longlong)iVar6 * 8) = param_1->TagName;
      }
      else {
        TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::Remove(this_00,param_1);
      }
      pFVar10 = (FName *)(this_00->AllocatorInstance).Data;
      iVar9 = 0x32;
      iVar6 = *piVar1;
      pFVar11 = pFVar10 + iVar6;
      FVar8 = DefaultLocomotionTag.TagName;
      while( true ) {
        if (*piVar1 != iVar6) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FGameplayTag,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar10 == pFVar11) break;
        pFVar7 = TMapBase<FGameplayTag,FDS_LocomotionStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>_>
                 ::FindChecked((TMapBase<FGameplayTag,FDS_LocomotionStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>_>
                                *)&LocomotionStateInfoMap,(FGameplayTag *)pFVar10);
        if (pFVar7->StateOrder < iVar9) {
          FVar8 = *pFVar10;
          iVar9 = pFVar7->StateOrder;
        }
        pFVar10 = pFVar10 + 1;
      }
      if (FVar8 != (FName)0x0) {
        uVar5 = ::GetTypeHash(FVar8.ComparisonIndex.Value);
        if (LocomotionStateInfoMap._8_4_ != LocomotionStateInfoMap._52_4_) {
          lVar12 = 0x154cf7228;
          if (LocomotionStateInfoMap._64_8_ != 0) {
            lVar12 = LocomotionStateInfoMap._64_8_;
          }
          uVar5 = *(uint *)(lVar12 + (ulonglong)
                                     (LocomotionStateInfoMap._72_4_ - 1 & FVar8.Number + uVar5) * 4)
          ;
          while (uVar5 != 0xffffffff) {
            pFVar11 = (FName *)((longlong)(int)uVar5 * 0x20 + LocomotionStateInfoMap._0_8_);
            if (*pFVar11 == FVar8) {
              if (pFVar11 != (FName *)0x0) goto LAB_14ba7d93f;
              goto LAB_14ba7d919;
            }
            uVar5 = pFVar11[3].ComparisonIndex.Value;
          }
        }
        pFVar11 = (FName *)0x0;
LAB_14ba7d919:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_14ba7d93f:
        FVar8 = pFVar11[2];
        (this->LocomotionStateInfo).Tag.TagName = pFVar11[1];
        *(FName *)&(this->LocomotionStateInfo).State = FVar8;
      }
    }
  }
  return;
}

