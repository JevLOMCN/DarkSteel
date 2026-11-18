// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 31

// BeginTrackingAndCachePreAnimatedValuesTask<UE::MovieScene::TPreAnimatedStateTaskParams<UObject_*,FWidgetMaterialHandle>,UObject_*,FWidgetMaterialHandle> @ 1468e3b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
::
BeginTrackingAndCachePreAnimatedValuesTask<UE::MovieScene::TPreAnimatedStateTaskParams<UObject_*,FWidgetMaterialHandle>,UObject_*,FWidgetMaterialHandle>
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
           *this,UMovieSceneEntitySystemLinker *param_1,
          TPreAnimatedStateTaskParams<UObject_*,FWidgetMaterialHandle> *param_2,
          TComponentTypeID<UObject_*> param_3,TComponentTypeID<FWidgetMaterialHandle> param_4)

{
  FBuiltInComponentTypes *pFVar1;
  undefined1 auStack_248 [40];
  undefined8 local_220;
  TStatIdData *pTStack_218;
  byte local_210;
  undefined7 uStack_20f;
  undefined4 uStack_208;
  uint uStack_204;
  undefined2 local_200;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TStack_1fe;
  TComponentTypeID<UObject_*> TStack_1fc;
  TComponentTypeID<FWidgetMaterialHandle> TStack_1fa;
  undefined8 uStack_1f8;
  TStatIdData *pTStack_1f0;
  ulonglong uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [4];
  FComponentAccess FStack_1d4;
  FComponentAccess FStack_1d2;
  wchar_t *pwStack_1d0;
  TStatIdData *local_1c8;
  ulonglong uStack_1c0;
  undefined8 local_1b8;
  FEntityComponentFilter local_1b0;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_c8;
  undefined4 local_c4;
  <lambda_1> local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_248;
  local_b8.__this = this;
  FEntityComponentFilter::FEntityComponentFilter
            (&local_b8.InParams.AdditionalFilter,&param_2->AdditionalFilter);
  local_b8.InParams.TrackingMode = param_2->TrackingMode;
  pFVar1 = FBuiltInComponentTypes::Get();
  pTStack_218 = &TStatId::TStatId_NAME_None;
  local_220 = 0;
  TStack_1fe = pFVar1->RootInstanceHandle;
  uStack_1f8 = 0;
  pTStack_1f0 = &TStatId::TStatId_NAME_None;
  TStack_1fa = param_4;
  uStack_208 = 0x6ff;
  uStack_204 = uStack_204 & 0xffffff00;
  uStack_1e8 = CONCAT71(uStack_20f,local_210) & 0xffffffffffffffe0;
  uStack_1e0._4_4_ = uStack_204;
  uStack_1e0._0_4_ = AnyHiPriThreadHiPriTask;
  local_1d8._2_2_ = TStack_1fe;
  local_1d8._0_2_ = local_200;
  unique0x1000020d = param_3;
  unique0x1000020f = param_4;
  pwStack_1d0 = (wchar_t *)0x0;
  local_1c8 = &TStatId::TStatId_NAME_None;
  local_210 = local_210 & 0xe0;
  TStack_1fc = param_3;
  uStack_1c0 = uStack_1e8;
  local_1b8 = uStack_1e0;
  FEntityComponentFilter::FEntityComponentFilter(&local_1b0,&param_2->AdditionalFilter);
  local_100 = 0;
  local_fc = 0x180;
  local_c8 = 0;
  local_c4 = 0x180;
  AddAccessorToFilter((FComponentAccess *)(local_1d8 + 2),&local_1b0);
  AddAccessorToFilter((FComponentAccess *)(local_1d8 + 4),&local_1b0);
  AddAccessorToFilter((FComponentAccess *)(local_1d8 + 6),&local_1b0);
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>_>
  ::
  Iterate_PerAllocationImpl<_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>::BeginTrackingAndCachePreAnimatedValuesTask<UE::MovieScene::TPreAnimatedStateTaskParams<UObject_*,FWidgetMaterialHandle>,UObject_*,FWidgetMaterialHandle>_::__l2::<lambda_1>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>_>
              *)local_1d8,&param_1->EntityManager,&local_1b0,&local_b8);
  if (local_1b0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.ComplexMasks.AllocatorInstance.Data);
  }
  if (local_b8.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_> @ 1468fdb90

/* WARNING: Enum "Type": Some values do not have unique names */

TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
* __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
           *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->KeyToStorageIndex = 0;
  *(undefined8 *)&(this->KeyToStorageIndex).field_0x8 = 0;
  *(undefined8 *)&(this->KeyToStorageIndex).field_0x20 = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__TPreAnimatedStateStorage_U__TPreAnimatedMaterialTraits_UFWidgetMaterialAccessor_MovieScene_UE__PEAVUObject__VFWidgetMaterialHandle___MovieScene_UE___MovieScene_UE__6B_
  ;
  *(undefined4 *)&(this->KeyToStorageIndex).field_0x28 = 0;
  *(undefined4 *)&(this->KeyToStorageIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyToStorageIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyToStorageIndex).field_0x34 = 0;
  *(undefined8 *)&(this->KeyToStorageIndex).field_0x40 = 0;
  *(undefined4 *)&(this->KeyToStorageIndex).field_0x48 = 0;
  *(undefined8 *)&this->PreAnimatedStorage = 0;
  *(undefined8 *)&(this->PreAnimatedStorage).field_0x8 = 0;
  *(undefined8 *)&(this->PreAnimatedStorage).field_0x20 = 0;
  *(undefined4 *)&(this->PreAnimatedStorage).field_0x28 = 0;
  *(undefined4 *)&(this->PreAnimatedStorage).field_0x2c = 0x80;
  *(undefined4 *)&(this->PreAnimatedStorage).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PreAnimatedStorage).field_0x34 = 0;
  (this->TransientPreAnimatedStorage).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientPreAnimatedStorage).Pairs.ArrayNum = 0;
  (this->TransientPreAnimatedStorage).Pairs.ArrayMax = 0;
  this->ParentExtension = (FPreAnimatedStateExtension *)0x0;
  this->RestoreMask = (IRestoreMask *)0x0;
  (this->StorageID).TypeID = 0xffffffff;
  *(undefined8 *)&this->Traits = 0;
  *(undefined8 *)&(this->Traits).field_0x8 = 0;
  return this;
}

// ~TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_> @ 146903170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
::
~TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
           *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  longlong *plVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Traits).field_0x8);
  DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters>,int>
            ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters>
              *)(this->TransientPreAnimatedStorage).Pairs.AllocatorInstance.Data,
             (this->TransientPreAnimatedStorage).Pairs.ArrayNum);
  pFVar3 = (this->TransientPreAnimatedStorage).Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>::FCachedData,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>::FCachedData,FDefaultSparseArrayAllocator>
            (&this->PreAnimatedStorage);
  *(undefined4 *)&(this->KeyToStorageIndex).field_0x48 = 0;
  pvVar4 = *(void **)&(this->KeyToStorageIndex).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToStorageIndex);
  this->_padding_ = (longlong)&___7IPreAnimatedStorage_MovieScene_UE__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// ~TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_> @ 146903220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
::
~TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
           *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  longlong *plVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)(this->Traits)._padding_);
  DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>,int>
            ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>
              *)(this->TransientPreAnimatedStorage).Pairs.AllocatorInstance.Data,
             (this->TransientPreAnimatedStorage).Pairs.ArrayNum);
  pFVar3 = (this->TransientPreAnimatedStorage).Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
            (&this->PreAnimatedStorage);
  *(undefined4 *)&(this->KeyToStorageIndex).field_0x48 = 0;
  pvVar4 = *(void **)&(this->KeyToStorageIndex).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToStorageIndex);
  this->_padding_ = (longlong)&___7IPreAnimatedStorage_MovieScene_UE__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// ~TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_> @ 1469032d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
::
~TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
           *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  longlong *plVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)(this->Traits)._padding_);
  DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>,int>
            ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>
              *)(this->TransientPreAnimatedStorage).Pairs.AllocatorInstance.Data,
             (this->TransientPreAnimatedStorage).Pairs.ArrayNum);
  pFVar3 = (this->TransientPreAnimatedStorage).Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
            (&this->PreAnimatedStorage);
  *(undefined4 *)&(this->KeyToStorageIndex).field_0x48 = 0;
  pvVar4 = *(void **)&(this->KeyToStorageIndex).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToStorageIndex);
  this->_padding_ = (longlong)&___7IPreAnimatedStorage_MovieScene_UE__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// operator() @ 146905800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
::
BeginTrackingAndCachePreAnimatedValuesTask<UE::MovieScene::TPreAnimatedStateTaskParams<UObject_*,FWidgetMaterialHandle>,UObject_*,FWidgetMaterialHandle>'
::__l2::<lambda_1>::operator()
          (void *this,FEntityAllocationProxy *param_1,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FRootInstanceHandle> param_3,TRead<UObject_*> param_4,
          TRead<FWidgetMaterialHandle> param_5)

{
  byte bVar1;
  int iVar2;
  TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
  *this_00;
  UObject *pUVar3;
  longlong lVar4;
  code *pcVar5;
  FName FVar6;
  void *pvVar7;
  FPreAnimatedStorageIndex FVar8;
  EPreAnimatedStorageRequirement EVar9;
  bool bVar10;
  UClass *pUVar11;
  UMaterialInterface *pUVar12;
  FMovieScenePreAnimatedMaterialParameters *pFVar13;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters> *pTVar14
  ;
  longlong lVar15;
  longlong lVar16;
  FPreAnimatedStorageIndex local_158 [4];
  FPreAnimatedStorageIndex local_148 [2];
  FWeakObjectPtr local_140;
  FPreAnimatedStateEntry local_138;
  undefined1 local_128 [8];
  TObjectPtr<UMaterialInterface>_u_0 local_120;
  TPersistentObjectPtr<FSoftObjectPath> local_118;
  FPreAnimatedTrackerParams local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  UObject *local_d8;
  FPreAnimatedEntityCaptureSource *local_d0;
  FName local_c8;
  FName local_c0;
  longlong local_b8;
  FString local_b0;
  FString local_a0;
  FWeakObjectPtr local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  FWidgetMaterialHandle local_70;
  FEntityAllocationProxy local_58 [2];
  
  local_58[0].Manager = param_1->Manager;
  local_58[0].AllocationIndex = param_1->AllocationIndex;
  local_58[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
  UE::MovieScene::FPreAnimatedTrackerParams::FPreAnimatedTrackerParams(&local_f0,local_58);
  local_b8 = (longlong)local_f0.Num;
  if (((*(FPreAnimatedStateExtension **)(*(longlong *)this + 0xb0))->NumRequestsForGlobalState != 0)
     || (local_f0.bWantsRestoreState != false)) {
    local_d0 = UE::MovieScene::FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                         (*(FPreAnimatedStateExtension **)(*(longlong *)this + 0xb0));
    lVar16 = 0;
    if (0 < local_f0.Num) {
      do {
        this_00 = *(TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
                    **)this;
        local_90.ObjectIndex = 0;
        local_90.ObjectSerialNumber = 0;
        pUVar3 = *(UObject **)((longlong)param_4 + lVar16 * 8);
        if (pUVar3 != (UObject *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          local_140.ObjectIndex = 0;
          local_140.ObjectSerialNumber = 0;
          local_d8 = pUVar3;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          FWeakObjectPtr::operator=(&local_140,(FObjectPtr)&local_d8);
          local_90 = local_140;
        }
        local_88 = *(undefined8 *)param_5;
        uStack_80 = *(undefined8 *)((longlong)param_5 + 8);
        UE::MovieScene::FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                  ((FBoundObjectPreAnimatedStateTraits *)&this_00->Traits,(UObject *)local_128);
        UE::MovieScene::
        TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
        ::GetOrCreateStorageIndex(this_00,(FWidgetMaterialKey *)(local_128 + 4));
        local_138.GroupHandle.Value = local_128._0_4_;
        local_138.ValueHandle.TypeID.TypeID = (this_00->StorageID).TypeID;
        local_138.ValueHandle.StorageIndex.Value = local_128._4_4_;
        UE::MovieScene::FPreAnimatedEntityCaptureSource::BeginTrackingEntity
                  (local_d0,&local_138,
                   (FMovieSceneEntityID)*(ushort *)((longlong)param_2 + lVar16 * 2),
                   *(FRootInstanceHandle *)((longlong)param_3 + lVar16 * 4),
                   local_f0.bWantsRestoreState);
        EVar9 = UE::MovieScene::FPreAnimatedStateExtension::GetStorageRequirement
                          (*(FPreAnimatedStateExtension **)(*(longlong *)this + 0xb0),&local_138);
        FVar8.Value = local_138.ValueHandle.StorageIndex.Value;
        lVar4 = *(longlong *)this;
        local_148[0].Value = local_138.ValueHandle.StorageIndex.Value;
        if ((local_138.ValueHandle.StorageIndex.Value == -1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StorageIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                ,0x1b6,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar15 = (longlong)FVar8.Value * 0x50 + *(longlong *)(lVar4 + 0x68);
        if (EVar9 == Persistent) {
          bVar10 = (*(byte *)(lVar15 + 0x48) & 1) == 0;
LAB_146905a10:
          if (bVar10) {
            lVar4 = *(longlong *)((longlong)param_4 + lVar16 * 8);
            FVar6 = *(FName *)param_5;
            pvVar7 = *(void **)((longlong)param_5 + 8);
            if (lVar4 == 0) {
LAB_146905ae8:
              local_78 = 0;
              lVar15 = local_78;
              local_70.TypeName = FVar6;
              local_70.Data = pvVar7;
              if ((lVar4 != 0) && (2 < (byte)LogUMG._0_1_)) {
                local_c8 = *(FName *)(*(longlong *)(lVar4 + 0x10) + 0x18);
                ::FName::ToString(&local_c8,&local_a0);
                local_c0 = *(FName *)(lVar4 + 0x18);
                ::FName::ToString(&local_c0,&local_b0);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
                if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                }
                lVar15 = 0;
                if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a0.Data.AllocatorInstance.Data);
                  lVar15 = 0;
                }
              }
            }
            else {
              pUVar11 = Z_Construct_UClass_UWidget_NoRegister();
              iVar2 = (int)pUVar11->_padding_;
              if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar2) ||
                 (lVar15 = lVar4, local_78 = lVar4, local_70.TypeName = FVar6,
                 local_70.Data = pvVar7,
                 (longlong *)
                 *(undefined1 **)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
                 &pUVar11->_padding_)) goto LAB_146905ae8;
            }
            pUVar12 = (UMaterialInterface *)0x0;
            local_e8 = 0;
            local_118.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_118.ObjectID.AssetPath.AssetName.Number = 0;
            local_118.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_118.ObjectID.AssetPath.PackageName.Number = 0;
            local_120.DebugPtr = (UMaterialInterface *)0x0;
            local_118.ObjectID.SubPathString.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_118.ObjectID.SubPathString.Data.ArrayNum = 0;
            local_118.ObjectID.SubPathString.Data.ArrayMax = 0;
            local_118.WeakPtr.ObjectIndex = 0;
            local_118.WeakPtr.ObjectSerialNumber = 0;
            FUtf8String::Reset(&local_118.ObjectID.SubPathString,0);
            if (lVar15 != 0) {
              local_e0 = 0;
              if ((FVar6 != (FName)0x0) && (pvVar7 != (void *)0x0)) {
                pUVar12 = FWidgetMaterialHandle::GetMaterial(&local_70);
              }
              FMovieScenePreAnimatedMaterialParameters::SetMaterial
                        ((FMovieScenePreAnimatedMaterialParameters *)&local_120.ObjectPtr,pUVar12);
            }
            local_158[0].Value = local_138.ValueHandle.StorageIndex.Value;
            lVar4 = *(longlong *)this;
            if ((local_138.ValueHandle.StorageIndex.Value == -1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StorageIndex",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                    ,0x195,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar15 = (longlong)local_158[0].Value * 0x50 + *(longlong *)(lVar4 + 0x68);
            if (EVar9 == Persistent) {
              if (((*(byte *)(lVar15 + 0x48) & 1) != 0) &&
                 (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<3111672766223352219>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                      ,0x19b,"!CachedData.bInitialized"), bVar10)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_120.DebugPtr != (UMaterialInterface *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)local_120.DebugPtr);
              }
              ((TObjectPtr<UMaterialInterface>_u_0 *)(lVar15 + 0x18))->DebugPtr =
                   (UMaterialInterface *)local_120;
              TPersistentObjectPtr<FSoftObjectPath>::operator=
                        ((TPersistentObjectPtr<FSoftObjectPath> *)(lVar15 + 0x20),&local_118);
              *(byte *)(lVar15 + 0x48) = *(byte *)(lVar15 + 0x48) | 3;
            }
            else if (EVar9 == Transient) {
              if ((*(byte *)(lVar15 + 0x48) & 1) != 0) {
                pFVar13 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                          ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                                  *)(lVar4 + 0xa0),local_158);
                if ((pFVar13 != (FMovieScenePreAnimatedMaterialParameters *)0x0) &&
                   (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<3111672766223352226>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                        ,0x1a2,
                                        "!CachedData.bInitialized || !TransientPreAnimatedStorage.Contains(StorageIndex)"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if ((*(byte *)(lVar15 + 0x48) & 1) != 0) {
                  pTVar14 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                            ::
                            AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
                                      ((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                                        *)(lVar4 + 0xa0),local_158);
                  *(int *)pTVar14 = local_158[0].Value;
                  FMovieScenePreAnimatedMaterialParameters::FMovieScenePreAnimatedMaterialParameters
                            ((FMovieScenePreAnimatedMaterialParameters *)&pTVar14->field_0x8,
                             (FMovieScenePreAnimatedMaterialParameters *)&local_120.ObjectPtr);
                  goto LAB_146905d23;
                }
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_120.DebugPtr != (UMaterialInterface *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)local_120.DebugPtr);
              }
              ((TObjectPtr<UMaterialInterface>_u_0 *)(lVar15 + 0x18))->DebugPtr =
                   (UMaterialInterface *)local_120;
              TPersistentObjectPtr<FSoftObjectPath>::operator=
                        ((TPersistentObjectPtr<FSoftObjectPath> *)(lVar15 + 0x20),&local_118);
              *(byte *)(lVar15 + 0x48) = *(byte *)(lVar15 + 0x48) | 1;
            }
LAB_146905d23:
            if (local_118.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_118.ObjectID.SubPathString.Data.AllocatorInstance.Data);
            }
          }
        }
        else if ((EVar9 == Transient) &&
                ((bVar1 = *(byte *)(lVar15 + 0x48), (bVar1 & 1) == 0 || ((bVar1 & 2) != 0)))) {
          pFVar13 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                            *)(lVar4 + 0xa0),local_148);
          bVar10 = pFVar13 == (FMovieScenePreAnimatedMaterialParameters *)0x0;
          goto LAB_146905a10;
        }
        lVar16 = lVar16 + 1;
        param_5 = (TRead<FWidgetMaterialHandle>)((longlong)param_5 + 0x10);
      } while (lVar16 < local_b8);
    }
  }
  return;
}

// AddReferencedObjects @ 14690aa00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
::AddReferencedObjects
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
           *this,FReferenceCollector *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  undefined1 local_res18 [8];
  int local_res20;
  int local_c8;
  uint uStack_c4;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  uint uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_90;
  int local_70;
  int local_68;
  TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
  *local_58;
  longlong lStack_50;
  
  iVar9 = 0;
  uStack_c4 = 1;
  local_c8 = 0;
  iVar3 = *(int *)&(this->PreAnimatedStorage).field_0x28;
  puVar1 = &(this->PreAnimatedStorage).field_0x10;
  iStack_b4 = 0;
  iStack_b0 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->PreAnimatedStorage).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar10 = *puVar12;
    iStack_b0 = iVar9;
    local_c8 = iVar9;
    while (uVar10 == 0) {
      iStack_b0 = iStack_b0 + 0x20;
      lVar8 = (longlong)local_c8;
      local_c8 = local_c8 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_c8) goto LAB_14690aaca;
      uVar10 = puVar12[lVar8 + 1];
    }
    uStack_c4 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_c4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    iStack_b4 = local_res20 + -1 + iStack_b0;
    if (iVar3 < iStack_b4) {
LAB_14690aaca:
      iStack_b4 = iVar3;
    }
  }
  uVar10 = *(uint *)&(this->PreAnimatedStorage).field_0x28;
  local_70 = *(int *)&(this->PreAnimatedStorage).field_0x8 -
             *(int *)&(this->PreAnimatedStorage).field_0x34;
  local_90._padding_ = CONCAT44(uStack_c4,local_c8);
  local_90.CurrentBitIndex = iStack_b4;
  local_90.UnvisitedBitMask = 0xffffffff;
  local_90._28_4_ = uStack_ac;
  local_90.BaseBitIndex = iStack_b0;
  iVar13 = (int)uVar10 >> 5;
  uVar14 = uVar10 & 0xffffffe0;
  local_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->PreAnimatedStorage).field_0x28;
  if (uVar10 != uVar4) {
    puVar11 = *(undefined1 **)&(this->PreAnimatedStorage).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar13 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14690abc0;
      uVar10 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_68 = (int)lVar8;
    uVar10 = local_68 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14690abc0:
  while( true ) {
    if (*(int *)&(this->PreAnimatedStorage).field_0x8 -
        *(int *)&(this->PreAnimatedStorage).field_0x34 != local_70) {
      local_res18[0] = 0;
      `TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>::FCachedData,FDefaultSparseArrayAllocator>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    lVar8 = (longlong)local_90.CurrentBitIndex;
    if ((local_90.CurrentBitIndex == uVar10) &&
       (local_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar5 = *(longlong *)&this->PreAnimatedStorage;
    AddReferencedObjectForComponent();
    AddReferencedObjectForComponent<FMovieScenePreAnimatedMaterialParameters,UScriptStruct_*>
              (param_1,(FMovieScenePreAnimatedMaterialParameters *)(lVar5 + lVar8 * 0x50 + 0x18));
    local_90.UnvisitedBitMask = local_90.UnvisitedBitMask & ~local_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_90);
  }
  lStack_50 = (ulonglong)uStack_9c << 0x20;
  local_58 = &this->TransientPreAnimatedStorage;
  while( true ) {
    if ((iVar9 < 0) || ((this->TransientPreAnimatedStorage).Pairs.ArrayNum <= iVar9)) {
      return;
    }
    if ((iVar9 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    AddReferencedObjectForComponent<FMovieScenePreAnimatedMaterialParameters,UScriptStruct_*>
              (param_1,(FMovieScenePreAnimatedMaterialParameters *)
                       ((this->TransientPreAnimatedStorage).Pairs.AllocatorInstance.Data +
                       (longlong)iVar9 * 0x38 + 8));
    iVar9 = iVar9 + 1;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// AddReferencedObjects @ 14690ace0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
::AddReferencedObjects
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
           *this,FReferenceCollector *param_1)

{
  return;
}

// AddReferencedObjects @ 14690acf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
::AddReferencedObjects
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
           *this,FReferenceCollector *param_1)

{
  return;
}

// DiscardPreAnimatedStateStorage @ 146914200

/* WARNING: Enum "Type": Some values do not have unique names */

EPreAnimatedStorageRequirement __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
::DiscardPreAnimatedStateStorage
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
           *this,FPreAnimatedStorageIndex param_1,EPreAnimatedStorageRequirement param_2)

{
  FObjectKey *pFVar1;
  byte *pbVar2;
  IRestoreMask *pIVar3;
  code *pcVar4;
  bool bVar5;
  EPreAnimatedStorageRequirement EVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>::FCachedData,FDefaultSparseArrayAllocator>
  *this_00;
  FPreAnimatedStorageIndex local_res10 [2];
  FWidgetMaterialKey local_48;
  
  pIVar3 = this->RestoreMask;
  local_res10[0].Value = param_1.Value;
  if (pIVar3 != (IRestoreMask *)0x0) {
    pcVar4 = *(code **)((longlong)*pIVar3 + 8);
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    cVar7 = (*pcVar4)(pIVar3);
    if (cVar7 == '\0') {
      return NoChange;
    }
  }
  this_00 = &this->PreAnimatedStorage;
  if (param_2 == Persistent) {
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    pFVar1 = (FObjectKey *)(*(longlong *)&this_00->field_0x0 + (longlong)param_1.Value * 0x50);
    local_48.Object = *pFVar1;
    local_48.WidgetMaterialHandle.TypeName = *(FName *)(pFVar1 + 1);
    local_48.WidgetMaterialHandle.Data =
         *(void **)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)param_1.Value * 0x50);
    if (*(int *)&(this->KeyToStorageIndex).field_0x8 !=
        *(int *)&(this->KeyToStorageIndex).field_0x34) {
      uVar9 = local_48.Object.ObjectSerialNumber;
      uVar10 = local_48.Object.ObjectIndex - uVar9 ^ uVar9 >> 0xd;
      uVar12 = (-0x61c88647 - uVar10) - uVar9 ^ uVar10 << 8;
      uVar9 = (uVar9 - uVar12) - uVar10 ^ uVar12 >> 0xd;
      uVar11 = (uVar10 - uVar9) - uVar12 ^ uVar9 >> 0xc;
      uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 << 0x10;
      uVar10 = (uVar9 - uVar12) - uVar11 ^ uVar12 >> 5;
      uVar11 = (uVar11 - uVar10) - uVar12 ^ uVar10 >> 3;
      uVar12 = (uVar12 - uVar11) - uVar10 ^ uVar11 << 10;
      uVar9 = ::GetTypeHash(&local_48.WidgetMaterialHandle);
      TSet<TTuple<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
      ::RemoveImpl<UE::MovieScene::FWidgetMaterialKey>
                ((TSet<TTuple<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                  *)&this->KeyToStorageIndex,uVar9 ^ (uVar10 - uVar12) - uVar11 ^ uVar12 >> 0xf,
                 &local_48);
    }
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>::FCachedData,FDefaultSparseArrayAllocator>
    ::DestroyElements(this_00,param_1.Value,1);
    TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
              ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)this_00,param_1.Value,1);
    TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
    ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    EVar6 = None;
  }
  else {
    if ((param_2 != Transient) &&
       (bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352133>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x145,"SourceRequirement == EPreAnimatedStorageRequirement::Transient"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    iVar8 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    if (iVar8 == 0) {
      if ((param_1.Value == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      pbVar2 = (byte *)((longlong)param_1.Value * 0x50 + 0x48 + *(longlong *)&this_00->field_0x0);
      *pbVar2 = *pbVar2 | 2;
    }
    EVar6 = Persistent;
  }
  return EVar6;
}

// DiscardPreAnimatedStateStorage @ 1469144c0

/* WARNING: Enum "Type": Some values do not have unique names */

EPreAnimatedStorageRequirement __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
::DiscardPreAnimatedStateStorage
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
           *this,FPreAnimatedStorageIndex param_1,EPreAnimatedStorageRequirement param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  IRestoreMask *pIVar3;
  code *pcVar4;
  bool bVar5;
  EPreAnimatedStorageRequirement EVar6;
  char cVar7;
  int iVar8;
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
  *this_00;
  FPreAnimatedStorageIndex local_res10 [2];
  TTuple<FObjectKey,FName> local_28;
  
  pIVar3 = this->RestoreMask;
  local_res10[0].Value = param_1.Value;
  if (pIVar3 != (IRestoreMask *)0x0) {
    pcVar4 = *(code **)((longlong)*pIVar3 + 8);
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    cVar7 = (*pcVar4)(pIVar3);
    if (cVar7 == '\0') {
      return NoChange;
    }
  }
  this_00 = &this->PreAnimatedStorage;
  if (param_2 == Persistent) {
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    puVar1 = (undefined8 *)(*(longlong *)&this_00->field_0x0 + (longlong)param_1.Value * 0x50);
    local_28._0_8_ = *puVar1;
    local_28._8_8_ = puVar1[1];
    TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
    ::Remove((TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
              *)&this->KeyToStorageIndex,&local_28);
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
    ::DestroyElements(this_00,param_1.Value,1);
    TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
              ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)this_00,param_1.Value,1);
    TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
    ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    EVar6 = None;
  }
  else {
    if ((param_2 != Transient) &&
       (bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352133>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x145,"SourceRequirement == EPreAnimatedStorageRequirement::Transient"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    iVar8 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    if (iVar8 == 0) {
      if ((param_1.Value == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      pbVar2 = (byte *)((longlong)param_1.Value * 0x50 + 0x48 + *(longlong *)&this_00->field_0x0);
      *pbVar2 = *pbVar2 | 2;
    }
    EVar6 = Persistent;
  }
  return EVar6;
}

// DiscardPreAnimatedStateStorage @ 1469146d0

/* WARNING: Enum "Type": Some values do not have unique names */

EPreAnimatedStorageRequirement __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
::DiscardPreAnimatedStateStorage
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
           *this,FPreAnimatedStorageIndex param_1,EPreAnimatedStorageRequirement param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  IRestoreMask *pIVar3;
  code *pcVar4;
  bool bVar5;
  EPreAnimatedStorageRequirement EVar6;
  char cVar7;
  int iVar8;
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
  *this_00;
  FPreAnimatedStorageIndex local_res10 [2];
  TTuple<FObjectKey,FName> local_28;
  
  pIVar3 = this->RestoreMask;
  local_res10[0].Value = param_1.Value;
  if (pIVar3 != (IRestoreMask *)0x0) {
    pcVar4 = *(code **)((longlong)*pIVar3 + 8);
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    cVar7 = (*pcVar4)(pIVar3);
    if (cVar7 == '\0') {
      return NoChange;
    }
  }
  this_00 = &this->PreAnimatedStorage;
  if (param_2 == Persistent) {
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    puVar1 = (undefined8 *)((longlong)param_1.Value * 0x68 + *(longlong *)this_00);
    local_28._0_8_ = *puVar1;
    local_28._8_8_ = puVar1[1];
    TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
    ::Remove((TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
              *)&this->KeyToStorageIndex,&local_28);
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
    ::RemoveAt(this_00,param_1.Value,1);
    TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
    ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    EVar6 = None;
  }
  else {
    if ((param_2 != Transient) &&
       (bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352133>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x145,"SourceRequirement == EPreAnimatedStorageRequirement::Transient"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    iVar8 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    if (iVar8 == 0) {
      if ((param_1.Value == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      pbVar2 = (byte *)((longlong)param_1.Value * 0x68 + 0x60 + *(longlong *)this_00);
      *pbVar2 = *pbVar2 | 2;
    }
    EVar6 = Persistent;
  }
  return EVar6;
}

// GetOrCreateStorageIndex @ 1469202a0

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedStorageIndex __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
::GetOrCreateStorageIndex
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
           *this,FWidgetMaterialKey *param_1)

{
  TMap<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
  *this_00;
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  FWidgetMaterialKey *in_R8;
  FSparseArrayAllocationInfo local_78;
  FObjectKey local_68;
  FName FStack_60;
  FObjectKey local_58;
  TObjectPtr<UMaterialInterface>_u_0 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  FUtf8String local_30;
  byte local_20;
  
  this_00 = &this->KeyToStorageIndex;
  uVar3 = MovieScene::GetTypeHash(in_R8);
  iVar4 = TSet<TTuple<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::MovieScene::FWidgetMaterialKey>
                    ((TSet<TTuple<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                      *)this_00,uVar3,in_R8);
  if ((iVar4 == -1) ||
     (lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x28, lVar1 == 0)) {
    (param_1->Object).ObjectIndex = -1;
  }
  else {
    iVar4 = *(int *)(lVar1 + 0x18);
    (param_1->Object).ObjectIndex = iVar4;
    if (iVar4 != -1) goto LAB_146920457;
  }
  local_68 = in_R8->Object;
  FStack_60 = (in_R8->WidgetMaterialHandle).TypeName;
  local_58 = (FObjectKey)(in_R8->WidgetMaterialHandle).Data;
  local_50.DebugPtr = (UMaterialInterface *)0x0;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Data.ArrayNum = 0;
  local_30.Data.ArrayMax = 0;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  FUtf8String::Reset(&local_30,0);
  local_20 = local_20 & 0xfc;
  iVar4 = *(int *)&(this->PreAnimatedStorage).field_0x34;
  if (iVar4 == 0) {
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)&this->PreAnimatedStorage,
                       (int *)&(this->PreAnimatedStorage).field_0x8,
                       (int *)&(this->PreAnimatedStorage).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PreAnimatedStorage).field_0x10,false)
    ;
  }
  else {
    iVar5 = *(int *)&(this->PreAnimatedStorage).field_0x30;
    iVar4 = iVar4 + -1;
    lVar1 = *(longlong *)&this->PreAnimatedStorage;
    iVar2 = *(int *)(lVar1 + 4 + (longlong)iVar5 * 0x50);
    *(int *)&(this->PreAnimatedStorage).field_0x30 = iVar2;
    *(int *)&(this->PreAnimatedStorage).field_0x34 = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->PreAnimatedStorage,
             &local_78,iVar5);
  if (local_78.Pointer != (FObjectKey *)0x0) {
    *(FObjectKey *)local_78.Pointer = local_68;
    *(FName *)((longlong)local_78.Pointer + 8) = FStack_60;
    *(FObjectKey *)((longlong)local_78.Pointer + 0x10) = local_58;
    FMovieScenePreAnimatedMaterialParameters::FMovieScenePreAnimatedMaterialParameters
              ((FMovieScenePreAnimatedMaterialParameters *)((longlong)local_78.Pointer + 0x18),
               (FMovieScenePreAnimatedMaterialParameters *)&local_50.ObjectPtr);
    bVar6 = ((byte)((FObjectKey *)((longlong)local_78.Pointer + 0x48))->ObjectIndex ^ local_20) & 1
            ^ (byte)((FObjectKey *)((longlong)local_78.Pointer + 0x48))->ObjectIndex;
    *(byte *)&((FObjectKey *)((longlong)local_78.Pointer + 0x48))->ObjectIndex = bVar6;
    *(byte *)&((FObjectKey *)((longlong)local_78.Pointer + 0x48))->ObjectIndex =
         (bVar6 ^ local_20) & 2 ^ bVar6;
  }
  (param_1->Object).ObjectIndex = local_78.Index;
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  local_78.Pointer = param_1;
  TSet<TTuple<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::MovieScene::FWidgetMaterialKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ((TSet<TTuple<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<UE::MovieScene::FWidgetMaterialKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>
              *)&stack0x00000008,(bool *)&local_78);
LAB_146920457:
  return (FPreAnimatedStorageIndex)(int)param_1;
}

// GetOrCreateStorageIndex @ 146920480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedStorageIndex __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
::GetOrCreateStorageIndex
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
           *this,TTuple<FObjectKey,FName> *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar7;
  byte bVar8;
  ulonglong uVar9;
  TTuple<FObjectKey,FName> *in_R8;
  undefined1 auStackY_e8 [32];
  undefined1 local_b8 [16];
  undefined8 *local_a8;
  bool local_a0 [8];
  TTuple<FObjectKey,FName> *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60 [2];
  byte local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pTVar7 = TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                   *)&this->KeyToStorageIndex,in_R8);
  if (pTVar7 == (TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
    *(undefined4 *)param_1 = 0xffffffff;
  }
  else {
    iVar6 = *(int *)&pTVar7->field_0x10;
    *(int *)param_1 = iVar6;
    if (iVar6 != -1) goto LAB_1469206e9;
  }
  local_90 = *(undefined8 *)in_R8;
  uStack_88 = *(undefined8 *)&in_R8->field_0x8;
  local_48 = local_48 & 0xfc;
  iVar6 = *(int *)&(this->PreAnimatedStorage).field_0x34;
  local_60[0] = 0;
  local_50 = 0;
  if (iVar6 == 0) {
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)&this->PreAnimatedStorage,
                       (int *)&(this->PreAnimatedStorage).field_0x8,
                       (int *)&(this->PreAnimatedStorage).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PreAnimatedStorage).field_0x10,false)
    ;
  }
  else {
    iVar5 = *(int *)&(this->PreAnimatedStorage).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->PreAnimatedStorage;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x50);
    *(int *)&(this->PreAnimatedStorage).field_0x30 = iVar1;
    *(int *)&(this->PreAnimatedStorage).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->PreAnimatedStorage,
             (FSparseArrayAllocationInfo *)(local_b8 + 8),iVar5);
  if (local_a8 != (undefined8 *)0x0) {
    *local_a8 = local_90;
    local_a8[1] = uStack_88;
    local_a8[2] = local_80;
    local_a8[3] = uStack_78;
    local_a8[4] = local_70;
    local_a8[5] = uStack_68;
    uVar9 = (ulonglong)local_50;
    *(byte *)(local_a8 + 8) = local_50;
    if ((2 < local_50) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x105,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return (FPreAnimatedStorageIndex)iVar6;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[uVar9] ==
        Core::Private::TMoveConstructorCaller<UE::MovieScene::FCustomPropertyAccessor_const_*>::
        Construct) {
      local_a8[6] = local_60[0];
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[uVar9])(local_a8 + 6,local_60);
    }
    bVar8 = (*(byte *)(local_a8 + 9) ^ local_48) & 1 ^ *(byte *)(local_a8 + 9);
    *(byte *)(local_a8 + 9) = bVar8;
    *(byte *)(local_a8 + 9) = (bVar8 ^ local_48) & 2 ^ bVar8;
  }
  uVar9 = (ulonglong)local_50;
  *(undefined4 *)param_1 = local_b8._8_4_;
  if ((2 < local_50) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return (FPreAnimatedStorageIndex)iVar6;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9] !=
      Core::Private::TDestructorCaller<UE::MovieScene::FCustomPropertyAccessor_const_*>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(local_60);
  }
  local_98 = param_1;
  TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TTuple<FObjectKey,FName>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ((TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
              *)&this->KeyToStorageIndex,
             (TPairInitializer<TTuple<FObjectKey,FName>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>
              *)local_b8,local_a0);
LAB_1469206e9:
  return (FPreAnimatedStorageIndex)(int)param_1;
}

// GetOrCreateStorageIndex @ 146920710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedStorageIndex __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
::GetOrCreateStorageIndex
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
           *this,TTuple<FObjectKey,FName> *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar7;
  ulonglong uVar8;
  TTuple<FObjectKey,FName> *in_R8;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [16];
  FCachedData *local_b8;
  bool local_b0 [8];
  TTuple<FObjectKey,FName> *local_a8;
  FCachedData local_a0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pTVar7 = TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                   *)&this->KeyToStorageIndex,in_R8);
  if (pTVar7 == (TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
    *(undefined4 *)param_1 = 0xffffffff;
  }
  else {
    iVar6 = *(int *)&pTVar7->field_0x10;
    *(int *)param_1 = iVar6;
    if (iVar6 != -1) goto LAB_1469208ac;
  }
  local_a0.Key._0_8_ = *(undefined8 *)in_R8;
  local_a0.Key._8_8_ = *(undefined8 *)&in_R8->field_0x8;
  local_a0.bPersistent = false;
  local_a0.bInitialized = false;
  iVar6 = *(int *)&(this->PreAnimatedStorage).field_0x34;
  local_a0.Value.Binding._padding_ = 0;
  local_a0.Value.Binding.TypeIndex = 0;
  if (iVar6 == 0) {
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,1,(ForAnyElementType *)&this->PreAnimatedStorage,
                       (int *)&(this->PreAnimatedStorage).field_0x8,
                       (int *)&(this->PreAnimatedStorage).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PreAnimatedStorage).field_0x10,false)
    ;
  }
  else {
    iVar5 = *(int *)&(this->PreAnimatedStorage).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->PreAnimatedStorage;
    iVar1 = *(int *)((longlong)iVar5 * 0x68 + 4 + lVar2);
    *(int *)&(this->PreAnimatedStorage).field_0x30 = iVar1;
    *(int *)&(this->PreAnimatedStorage).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x68 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<104,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<104,8,FDefaultSparseArrayAllocator> *)&this->PreAnimatedStorage,
             (FSparseArrayAllocationInfo *)(local_c8 + 8),iVar5);
  if (local_b8 != (FCachedData *)0x0) {
    FCachedData::FCachedData(local_b8,&local_a0);
  }
  uVar8 = (ulonglong)local_a0.Value.Binding.TypeIndex;
  *(undefined4 *)param_1 = local_c8._8_4_;
  if ((2 < local_a0.Value.Binding.TypeIndex) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return (FPreAnimatedStorageIndex)iVar6;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] !=
      Core::Private::TDestructorCaller<UE::MovieScene::FCustomPropertyAccessor_const_*>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_a0.Value.Binding);
  }
  local_a8 = param_1;
  TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TTuple<FObjectKey,FName>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ((TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
              *)&this->KeyToStorageIndex,
             (TPairInitializer<TTuple<FObjectKey,FName>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>
              *)local_c8,local_b0);
LAB_1469208ac:
  return (FPreAnimatedStorageIndex)(int)param_1;
}

// GetStorageType @ 1469245e0

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedStorageID __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
::GetStorageType(TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
                 *this)

{
  uint *in_RDX;
  
  *in_RDX = (this->StorageID).TypeID;
  return (FPreAnimatedStorageID)(uint)in_RDX;
}

// GetStorageType @ 146924600

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedStorageID __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
::GetStorageType(TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
                 *this)

{
  uint *in_RDX;
  
  *in_RDX = (this->StorageID).TypeID;
  return (FPreAnimatedStorageID)(uint)in_RDX;
}

// GetStorageType @ 146924620

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedStorageID __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
::GetStorageType(TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
                 *this)

{
  uint *in_RDX;
  
  *in_RDX = (this->StorageID).TypeID;
  return (FPreAnimatedStorageID)(uint)in_RDX;
}

// Initialize @ 14692a360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
::Initialize(TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
             *this,FPreAnimatedStorageID param_1,FPreAnimatedStateExtension *param_2)

{
  this->ParentExtension = param_2;
  (this->StorageID).TypeID = param_1.TypeID;
  FBoundObjectPreAnimatedStateTraits::Initialize
            ((FBoundObjectPreAnimatedStateTraits *)&this->Traits,param_1,param_2);
  return;
}

// Initialize @ 14692a380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
::Initialize(TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
             *this,FPreAnimatedStorageID param_1,FPreAnimatedStateExtension *param_2)

{
  this->ParentExtension = param_2;
  (this->StorageID).TypeID = param_1.TypeID;
  FBoundObjectPreAnimatedStateTraits::Initialize
            ((FBoundObjectPreAnimatedStateTraits *)&this->Traits,param_1,param_2);
  return;
}

// Initialize @ 14692a3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
::Initialize(TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
             *this,FPreAnimatedStorageID param_1,FPreAnimatedStateExtension *param_2)

{
  this->ParentExtension = param_2;
  (this->StorageID).TypeID = param_1.TypeID;
  FBoundObjectPreAnimatedStateTraits::Initialize
            ((FBoundObjectPreAnimatedStateTraits *)&this->Traits,param_1,param_2);
  return;
}

// OnObjectReplaced @ 14692ed80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
::OnObjectReplaced(TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
                   *this,FPreAnimatedStorageIndex param_1,FObjectKey *param_2,FObjectKey *param_3)

{
  FObjectKey *pFVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  TPairInitializer<UE::MovieScene::FWidgetMaterialKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>
  local_res8;
  FObjectKey *local_58;
  FPreAnimatedStorageIndex **local_50;
  FWidgetMaterialKey local_48;
  FObjectKey local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  if ((param_1.Value == -1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Value != INDEX_NONE",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                          ,0x45,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_28 = *(undefined8 *)
               (*(longlong *)&this->PreAnimatedStorage + (longlong)param_1.Value * 0x50 + 8);
  local_20 = *(undefined8 *)
              (*(longlong *)&this->PreAnimatedStorage + 0x10 + (longlong)param_1.Value * 0x50);
  local_30 = *param_3;
  local_res8.Value._0_4_ = param_1.Value;
  if ((param_1.Value == -1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Value != INDEX_NONE",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                          ,0x45,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar9 = local_20;
  local_48.WidgetMaterialHandle.Data =
       *(void **)(*(longlong *)&this->PreAnimatedStorage + 0x10 +
                 (longlong)local_res8.Value._0_4_ * 0x50);
  pFVar1 = (FObjectKey *)
           (*(longlong *)&this->PreAnimatedStorage + (longlong)local_res8.Value._0_4_ * 0x50);
  local_48.Object = *pFVar1;
  local_48.WidgetMaterialHandle.TypeName = *(FName *)(pFVar1 + 1);
  iVar5 = local_30.ObjectIndex;
  iVar6 = local_30.ObjectSerialNumber;
  iVar7 = (int)uStack_28;
  iVar8 = uStack_28._4_4_;
  if ((local_res8.Value._0_4_ == -1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Value != INDEX_NONE",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                          ,0x45,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)&this->PreAnimatedStorage;
  piVar2 = (int *)(lVar3 + (longlong)local_res8.Value._0_4_ * 0x50);
  *piVar2 = iVar5;
  piVar2[1] = iVar6;
  piVar2[2] = iVar7;
  piVar2[3] = iVar8;
  *(undefined8 *)(lVar3 + 0x10 + (longlong)local_res8.Value._0_4_ * 0x50) = uVar9;
  if (*(int *)&(this->KeyToStorageIndex).field_0x8 != *(int *)&(this->KeyToStorageIndex).field_0x34)
  {
    uVar12 = local_48.Object.ObjectIndex - local_48.Object.ObjectSerialNumber ^
             (uint)local_48.Object.ObjectSerialNumber >> 0xd;
    uVar11 = (-0x61c88647 - uVar12) - local_48.Object.ObjectSerialNumber ^ uVar12 << 8;
    uVar13 = (local_48.Object.ObjectSerialNumber - uVar11) - uVar12 ^ uVar11 >> 0xd;
    uVar12 = (uVar12 - uVar13) - uVar11 ^ uVar13 >> 0xc;
    uVar11 = (uVar11 - uVar13) - uVar12 ^ uVar12 << 0x10;
    uVar14 = (uVar13 - uVar11) - uVar12 ^ uVar11 >> 5;
    uVar13 = (uVar12 - uVar14) - uVar11 ^ uVar14 >> 3;
    uVar12 = (uVar11 - uVar13) - uVar14 ^ uVar13 << 10;
    uVar11 = ::GetTypeHash(&local_48.WidgetMaterialHandle);
    TSet<TTuple<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
    ::RemoveImpl<UE::MovieScene::FWidgetMaterialKey>
              ((TSet<TTuple<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                *)&this->KeyToStorageIndex,uVar11 ^ (uVar14 - uVar12) - uVar13 ^ uVar12 >> 0xf,
               &local_48);
  }
  local_58 = &local_30;
  local_50 = &local_res8.Value;
  TSet<TTuple<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::MovieScene::FWidgetMaterialKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ((TSet<TTuple<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
              *)&this->KeyToStorageIndex,&local_res8,(bool *)&local_58);
  return;
}

// OnObjectReplaced @ 14692ef90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
::OnObjectReplaced(TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
                   *this,FPreAnimatedStorageIndex param_1,FObjectKey *param_2,FObjectKey *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  TPairInitializer<TTuple<FObjectKey,FName>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>
  local_res8;
  FObjectKey local_48;
  undefined8 uStack_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  FObjectKey *local_28;
  FPreAnimatedStorageIndex **local_20;
  TTuple<FObjectKey,FName> local_18;
  
  if ((param_1.Value == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_40 = *(undefined8 *)
               (*(longlong *)&this->PreAnimatedStorage + (longlong)param_1.Value * 0x50 + 8);
  local_48 = *param_3;
  local_res8.Value._0_4_ = param_1.Value;
  if ((param_1.Value == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)&this->PreAnimatedStorage + (longlong)local_res8.Value._0_4_ * 0x50);
  local_18._0_8_ = *puVar1;
  local_18._8_8_ = puVar1[1];
  local_38 = local_48.ObjectIndex;
  iStack_34 = local_48.ObjectSerialNumber;
  iStack_30 = (int)uStack_40;
  iStack_2c = uStack_40._4_4_;
  if ((local_res8.Value._0_4_ == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  piVar2 = (int *)(*(longlong *)&this->PreAnimatedStorage + (longlong)local_res8.Value._0_4_ * 0x50)
  ;
  *piVar2 = local_38;
  piVar2[1] = iStack_34;
  piVar2[2] = iStack_30;
  piVar2[3] = iStack_2c;
  TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
  ::Remove((TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
            *)&this->KeyToStorageIndex,&local_18);
  local_28 = &local_48;
  local_20 = &local_res8.Value;
  TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TTuple<FObjectKey,FName>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ((TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
              *)&this->KeyToStorageIndex,&local_res8,(bool *)&local_28);
  return;
}

// OnObjectReplaced @ 14692f0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
::OnObjectReplaced(TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
                   *this,FPreAnimatedStorageIndex param_1,FObjectKey *param_2,FObjectKey *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  TPairInitializer<TTuple<FObjectKey,FName>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>
  local_res8;
  FObjectKey local_48;
  undefined8 uStack_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  FObjectKey *local_28;
  FPreAnimatedStorageIndex **local_20;
  TTuple<FObjectKey,FName> local_18;
  
  if ((param_1.Value == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_40 = *(undefined8 *)
               ((longlong)param_1.Value * 0x68 + *(longlong *)&this->PreAnimatedStorage + 8);
  local_48 = *param_3;
  local_res8.Value._0_4_ = param_1.Value;
  if ((param_1.Value == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar1 = (undefined8 *)
           ((longlong)local_res8.Value._0_4_ * 0x68 + *(longlong *)&this->PreAnimatedStorage);
  local_18._0_8_ = *puVar1;
  local_18._8_8_ = puVar1[1];
  local_38 = local_48.ObjectIndex;
  iStack_34 = local_48.ObjectSerialNumber;
  iStack_30 = (int)uStack_40;
  iStack_2c = uStack_40._4_4_;
  if ((local_res8.Value._0_4_ == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  piVar2 = (int *)((longlong)local_res8.Value._0_4_ * 0x68 + *(longlong *)&this->PreAnimatedStorage)
  ;
  *piVar2 = local_38;
  piVar2[1] = iStack_34;
  piVar2[2] = iStack_30;
  piVar2[3] = iStack_2c;
  TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
  ::Remove((TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
            *)&this->KeyToStorageIndex,&local_18);
  local_28 = &local_48;
  local_20 = &local_res8.Value;
  TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TTuple<FObjectKey,FName>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ((TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
              *)&this->KeyToStorageIndex,&local_res8,(bool *)&local_28);
  return;
}

// RestorePreAnimatedStateStorage @ 14693d400

/* WARNING: Enum "Type": Some values do not have unique names */

EPreAnimatedStorageRequirement __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
::RestorePreAnimatedStateStorage
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
           *this,FPreAnimatedStorageIndex param_1,EPreAnimatedStorageRequirement param_2,
          EPreAnimatedStorageRequirement param_3,FRestoreStateParams *param_4)

{
  byte bVar1;
  IRestoreMask *pIVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  EPreAnimatedStorageRequirement EVar6;
  char cVar7;
  FMovieScenePreAnimatedMaterialParameters *pFVar8;
  FWidgetMaterialKey *pFVar9;
  uint uVar10;
  uint uVar11;
  FObjectKey *pFVar12;
  uint uVar13;
  uint uVar14;
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>::FCachedData,FDefaultSparseArrayAllocator>
  *this_00;
  FPreAnimatedStorageIndex local_res10 [2];
  FWidgetMaterialKey local_c8;
  undefined1 local_b0 [48];
  byte local_80;
  FWidgetMaterialKey local_78;
  undefined1 local_60 [48];
  byte local_30;
  
  pIVar2 = this->RestoreMask;
  local_res10[0].Value = param_1.Value;
  if (pIVar2 != (IRestoreMask *)0x0) {
    pcVar3 = *(code **)((longlong)*pIVar2 + 8);
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
    cVar7 = (*pcVar3)(pIVar2);
    if (cVar7 == '\0') {
      return NoChange;
    }
  }
  this_00 = &this->PreAnimatedStorage;
  if (param_2 == Persistent) {
    if (param_3 != None) {
      if ((param_3 != NoChange) &&
         (bVar5 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3111672766223352038>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                             ,0xe6,"TargetRequirement == EPreAnimatedStorageRequirement::NoChange"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        EVar6 = (*pcVar3)();
        return EVar6;
      }
      if ((param_1.Value == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        EVar6 = (*pcVar3)();
        return EVar6;
      }
      pFVar9 = (FWidgetMaterialKey *)
               ((longlong)param_1.Value * 0x50 + *(longlong *)&this_00->field_0x0);
      if ((pFVar9[3].Object.ObjectIndex & 1) != 0) {
        TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
        ::RestorePreAnimatedValue
                  (pFVar9,(FMovieScenePreAnimatedMaterialParameters *)(pFVar9 + 1),param_4);
      }
      return NoChange;
    }
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
    pFVar12 = (FObjectKey *)((longlong)param_1.Value * 0x50 + *(longlong *)&this_00->field_0x0);
    local_c8.Object = *pFVar12;
    local_c8.WidgetMaterialHandle.TypeName = *(FName *)(pFVar12 + 1);
    local_c8.WidgetMaterialHandle.Data = *(void **)(pFVar12 + 2);
    FMovieScenePreAnimatedMaterialParameters::FMovieScenePreAnimatedMaterialParameters
              ((FMovieScenePreAnimatedMaterialParameters *)local_b0,
               (FMovieScenePreAnimatedMaterialParameters *)(pFVar12 + 3));
    local_80 = (byte)pFVar12[9].ObjectIndex & 1 | local_80 & 0xfe;
    local_80 = (local_80 ^ (byte)pFVar12[9].ObjectIndex) & 2 ^ local_80;
    if (*(int *)&(this->KeyToStorageIndex).field_0x8 !=
        *(int *)&(this->KeyToStorageIndex).field_0x34) {
      uVar10 = local_c8.Object.ObjectIndex - local_c8.Object.ObjectSerialNumber ^
               (uint)local_c8.Object.ObjectSerialNumber >> 0xd;
      uVar13 = (-0x61c88647 - local_c8.Object.ObjectSerialNumber) - uVar10 ^ uVar10 << 8;
      uVar11 = (local_c8.Object.ObjectSerialNumber - uVar13) - uVar10 ^ uVar13 >> 0xd;
      uVar10 = (uVar10 - uVar11) - uVar13 ^ uVar11 >> 0xc;
      uVar14 = (uVar13 - uVar10) - uVar11 ^ uVar10 << 0x10;
      uVar13 = (uVar11 - uVar14) - uVar10 ^ uVar14 >> 5;
      uVar11 = (uVar10 - uVar13) - uVar14 ^ uVar13 >> 3;
      uVar14 = (uVar14 - uVar11) - uVar13 ^ uVar11 << 10;
      uVar10 = ::GetTypeHash(&local_c8.WidgetMaterialHandle);
      TSet<TTuple<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
      ::RemoveImpl<UE::MovieScene::FWidgetMaterialKey>
                ((TSet<TTuple<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                  *)&this->KeyToStorageIndex,uVar10 ^ (uVar13 - uVar14) - uVar11 ^ uVar14 >> 0xf,
                 &local_c8);
    }
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
    TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>::FCachedData,FDefaultSparseArrayAllocator>
    ::DestroyElements(this_00,param_1.Value,1);
    TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
              ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)this_00,param_1.Value,1);
    TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
    ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    local_60._32_8_ = local_b0._32_8_;
    if ((local_80 & 1) != 0) {
      TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
      ::RestorePreAnimatedValue
                (&local_c8,(FMovieScenePreAnimatedMaterialParameters *)local_b0,param_4);
      local_60._32_8_ = local_b0._32_8_;
    }
LAB_14693d96c:
    if ((void *)local_60._32_8_ != (void *)0x0) {
      FMemory::Free((void *)local_60._32_8_);
    }
    return None;
  }
  if ((param_2 != Transient) &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3111672766223352050>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0xf2,"SourceRequirement == EPreAnimatedStorageRequirement::Transient"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    EVar6 = (*pcVar3)();
    return EVar6;
  }
  pFVar8 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           ::Find(&this->TransientPreAnimatedStorage,local_res10);
  if (pFVar8 != (FMovieScenePreAnimatedMaterialParameters *)0x0) {
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
    TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
    ::RestorePreAnimatedValue
              ((FWidgetMaterialKey *)
               ((longlong)param_1.Value * 0x50 + *(longlong *)&this_00->field_0x0),pFVar8,param_4);
    TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
    ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    return Persistent;
  }
  if (param_3 == None) {
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
    pFVar9 = (FWidgetMaterialKey *)
             ((longlong)param_1.Value * 0x50 + *(longlong *)&this_00->field_0x0);
    iVar4 = pFVar9[3].Object.ObjectIndex;
    if ((iVar4 & 2) == 0) {
      if ((param_1.Value == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        EVar6 = (*pcVar3)();
        return EVar6;
      }
      pFVar12 = (FObjectKey *)
                ((longlong)param_1.Value * 0x50 + *(longlong *)&this->PreAnimatedStorage);
      local_78.Object = *pFVar12;
      local_78.WidgetMaterialHandle.TypeName = *(FName *)(pFVar12 + 1);
      local_78.WidgetMaterialHandle.Data = *(void **)(pFVar12 + 2);
      FMovieScenePreAnimatedMaterialParameters::FMovieScenePreAnimatedMaterialParameters
                ((FMovieScenePreAnimatedMaterialParameters *)local_60,
                 (FMovieScenePreAnimatedMaterialParameters *)(pFVar12 + 3));
      local_30 = (byte)pFVar12[9].ObjectIndex & 1 | local_30 & 0xfe;
      local_30 = (local_30 ^ (byte)pFVar12[9].ObjectIndex) & 2 ^ local_30;
      if (*(int *)&(this->KeyToStorageIndex).field_0x8 !=
          *(int *)&(this->KeyToStorageIndex).field_0x34) {
        uVar10 = local_78.Object.ObjectIndex - local_78.Object.ObjectSerialNumber ^
                 (uint)local_78.Object.ObjectSerialNumber >> 0xd;
        uVar13 = (-0x61c88647 - local_78.Object.ObjectSerialNumber) - uVar10 ^ uVar10 << 8;
        uVar11 = (local_78.Object.ObjectSerialNumber - uVar13) - uVar10 ^ uVar13 >> 0xd;
        uVar10 = (uVar10 - uVar11) - uVar13 ^ uVar11 >> 0xc;
        uVar14 = (uVar13 - uVar10) - uVar11 ^ uVar10 << 0x10;
        uVar13 = (uVar11 - uVar14) - uVar10 ^ uVar14 >> 5;
        uVar11 = (uVar10 - uVar13) - uVar14 ^ uVar13 >> 3;
        uVar14 = (uVar14 - uVar11) - uVar13 ^ uVar11 << 10;
        uVar10 = ::GetTypeHash(&local_78.WidgetMaterialHandle);
        TSet<TTuple<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
        ::RemoveImpl<UE::MovieScene::FWidgetMaterialKey>
                  ((TSet<TTuple<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FWidgetMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                    *)&this->KeyToStorageIndex,uVar10 ^ (uVar13 - uVar14) - uVar11 ^ uVar14 >> 0xf,
                   &local_78);
      }
      if ((param_1.Value == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        EVar6 = (*pcVar3)();
        return EVar6;
      }
      TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>::FCachedData,FDefaultSparseArrayAllocator>
      ::RemoveAt(this_00,param_1.Value,1);
      TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
      ::Remove(&this->TransientPreAnimatedStorage,local_res10);
      if ((local_30 & 1) != 0) {
        TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
        ::RestorePreAnimatedValue
                  (&local_78,(FMovieScenePreAnimatedMaterialParameters *)local_60,param_4);
      }
      goto LAB_14693d96c;
    }
    if ((iVar4 & 1) == 0) {
      return Persistent;
    }
  }
  else {
    if (param_3 != Persistent) {
      return Persistent;
    }
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
    pFVar9 = (FWidgetMaterialKey *)
             ((longlong)param_1.Value * 0x50 + *(longlong *)&this_00->field_0x0);
    bVar1 = (byte)pFVar9[3].Object.ObjectIndex;
    if ((bVar1 & 1) == 0) {
      return Persistent;
    }
    *(byte *)&pFVar9[3].Object.ObjectIndex = bVar1 | 2;
  }
  TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
  ::RestorePreAnimatedValue(pFVar9,(FMovieScenePreAnimatedMaterialParameters *)(pFVar9 + 1),param_4)
  ;
  return Persistent;
}

// RestorePreAnimatedStateStorage @ 14693da00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EPreAnimatedStorageRequirement __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
::RestorePreAnimatedStateStorage
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
           *this,FPreAnimatedStorageIndex param_1,EPreAnimatedStorageRequirement param_2,
          EPreAnimatedStorageRequirement param_3,FRestoreStateParams *param_4)

{
  IRestoreMask *pIVar1;
  code *pcVar2;
  bool bVar3;
  EPreAnimatedStorageRequirement EVar4;
  char cVar5;
  TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> *pTVar6;
  TTuple<FObjectKey,FName> *pTVar7;
  undefined8 *puVar8;
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
  *this_00;
  FPreAnimatedStorageIndex local_res10 [2];
  undefined1 auStackY_118 [32];
  TTuple<FObjectKey,FName> local_e8;
  TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> local_d8;
  byte local_a0;
  TTuple<FObjectKey,FName> local_98;
  TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> local_88;
  byte local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pIVar1 = this->RestoreMask;
  local_res10[0].Value = param_1.Value;
  if (pIVar1 != (IRestoreMask *)0x0) {
    pcVar2 = *(code **)((longlong)*pIVar1 + 8);
    if ((param_1.Value == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    cVar5 = (*pcVar2)(pIVar1);
    if (cVar5 == '\0') {
      return NoChange;
    }
  }
  this_00 = &this->PreAnimatedStorage;
  if (param_2 != Persistent) {
    if ((param_2 != Transient) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352050>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0xf2,"SourceRequirement == EPreAnimatedStorageRequirement::Transient"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
             ::Find(&this->TransientPreAnimatedStorage,local_res10);
    if (pTVar6 != (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> *)0x0) {
      if ((param_1.Value == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>
      ::RestorePreAnimatedValue
                (&this->Traits,
                 (TTuple<FObjectKey,FName> *)
                 ((longlong)param_1.Value * 0x50 + *(longlong *)&this->PreAnimatedStorage),pTVar6,
                 param_4);
      TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
      ::Remove(&this->TransientPreAnimatedStorage,local_res10);
      return Persistent;
    }
    if (param_3 == None) {
      if ((param_1.Value == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      pTVar7 = (TTuple<FObjectKey,FName> *)
               ((longlong)param_1.Value * 0x50 + *(longlong *)&this_00->field_0x0);
      if ((pTVar7[4].field_0x8 & 2) == 0) {
        if ((param_1.Value == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Value != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                               ,0x45,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
        puVar8 = (undefined8 *)
                 ((longlong)param_1.Value * 0x50 + *(longlong *)&this->PreAnimatedStorage);
        local_98._0_8_ = *puVar8;
        local_98._8_8_ = puVar8[1];
        local_88.Data.Left = (double)puVar8[2];
        local_88.Data.Top = (double)puVar8[3];
        local_88.Data.Right = (double)puVar8[4];
        local_88.Data.Bottom = (double)puVar8[5];
        TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
        ::
        TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                  (&local_88.Binding,
                   (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                    *)(puVar8 + 6));
        local_50 = local_50 & 0xfe | *(byte *)(puVar8 + 9) & 1;
        local_50 = (local_50 ^ *(byte *)(puVar8 + 9)) & 2 ^ local_50;
        TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
        ::Remove((TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
                  *)&this->KeyToStorageIndex,&local_98);
        if ((param_1.Value == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Value != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                               ,0x45,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
        TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
        ::RemoveAt(this_00,param_1.Value,1);
        TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
        ::Remove(&this->TransientPreAnimatedStorage,local_res10);
        if ((local_50 & 1) != 0) {
          TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>
          ::RestorePreAnimatedValue(&this->Traits,&local_98,&local_88,param_4);
        }
        if ((2 < local_88.Binding.TypeIndex) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_88.Binding.TypeIndex])(&local_88.Binding);
        return None;
      }
      if ((pTVar7[4].field_0x8 & 1) == 0) {
        return Persistent;
      }
    }
    else {
      if (param_3 != Persistent) {
        return Persistent;
      }
      if ((param_1.Value == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      pTVar7 = (TTuple<FObjectKey,FName> *)
               ((longlong)param_1.Value * 0x50 + *(longlong *)&this->PreAnimatedStorage);
      if ((pTVar7[4].field_0x8 & 1) == 0) {
        return Persistent;
      }
      pTVar7[4].field_0x8 = pTVar7[4].field_0x8 | 2;
    }
    TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>
    ::RestorePreAnimatedValue
              (&this->Traits,pTVar7,
               (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> *)(pTVar7 + 1),
               param_4);
    return Persistent;
  }
  if (param_3 == None) {
    if ((param_1.Value == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    puVar8 = (undefined8 *)((longlong)param_1.Value * 0x50 + *(longlong *)&this_00->field_0x0);
    local_e8._0_8_ = *puVar8;
    local_e8._8_8_ = puVar8[1];
    local_d8.Data.Left = (double)puVar8[2];
    local_d8.Data.Top = (double)puVar8[3];
    local_d8.Data.Right = (double)puVar8[4];
    local_d8.Data.Bottom = (double)puVar8[5];
    TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
    ::
    TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              (&local_d8.Binding,
               (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)(puVar8 + 6));
    local_a0 = local_a0 & 0xfe | *(byte *)(puVar8 + 9) & 1;
    local_a0 = (local_a0 ^ *(byte *)(puVar8 + 9)) & 2 ^ local_a0;
    TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
    ::Remove((TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
              *)&this->KeyToStorageIndex,&local_e8);
    if ((param_1.Value == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
    ::DestroyElements(this_00,param_1.Value,1);
    TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
              ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)this_00,param_1.Value,1);
    TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
    ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    if ((local_a0 & 1) != 0) {
      TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>
      ::RestorePreAnimatedValue(&this->Traits,&local_e8,&local_d8,param_4);
    }
    if ((2 < local_d8.Binding.TypeIndex) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_d8.Binding.TypeIndex])(&local_d8.Binding);
    return None;
  }
  if ((param_3 != NoChange) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3111672766223352038>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0xe6,"TargetRequirement == EPreAnimatedStorageRequirement::NoChange"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  if ((param_1.Value == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  pTVar7 = (TTuple<FObjectKey,FName> *)
           ((longlong)param_1.Value * 0x50 + *(longlong *)&this->PreAnimatedStorage);
  if ((pTVar7[4].field_0x8 & 1) != 0) {
    TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>
    ::RestorePreAnimatedValue
              (&this->Traits,pTVar7,
               (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> *)(pTVar7 + 1),
               param_4);
  }
  return NoChange;
}

// RestorePreAnimatedStateStorage @ 14693df90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

EPreAnimatedStorageRequirement __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
::RestorePreAnimatedStateStorage
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
           *this,FPreAnimatedStorageIndex param_1,EPreAnimatedStorageRequirement param_2,
          EPreAnimatedStorageRequirement param_3,FRestoreStateParams *param_4)

{
  IRestoreMask *pIVar1;
  code *pcVar2;
  bool bVar3;
  EPreAnimatedStorageRequirement EVar4;
  char cVar5;
  TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform> *pTVar6;
  TTuple<FObjectKey,FName> *pTVar7;
  undefined8 *puVar8;
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
  *this_00;
  FPreAnimatedStorageIndex local_res10 [2];
  undefined1 auStackY_148 [32];
  TTuple<FObjectKey,FName> local_118;
  TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform> local_108;
  byte local_b8;
  FCachedData local_b0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pIVar1 = this->RestoreMask;
  local_res10[0].Value = param_1.Value;
  if (pIVar1 != (IRestoreMask *)0x0) {
    pcVar2 = *(code **)((longlong)*pIVar1 + 8);
    if ((param_1.Value == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    cVar5 = (*pcVar2)(pIVar1);
    if (cVar5 == '\0') {
      return NoChange;
    }
  }
  this_00 = &this->PreAnimatedStorage;
  if (param_2 != Persistent) {
    if ((param_2 != Transient) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352050>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0xf2,"SourceRequirement == EPreAnimatedStorageRequirement::Transient"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
             ::Find(&this->TransientPreAnimatedStorage,local_res10);
    if (pTVar6 != (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform> *)0x0) {
      if ((param_1.Value == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>
      ::RestorePreAnimatedValue
                (&this->Traits,
                 (TTuple<FObjectKey,FName> *)
                 ((longlong)param_1.Value * 0x68 + *(longlong *)&this->PreAnimatedStorage),pTVar6,
                 param_4);
      TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
      ::Remove(&this->TransientPreAnimatedStorage,local_res10);
      return Persistent;
    }
    if (param_3 == None) {
      if ((param_1.Value == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      pTVar7 = (TTuple<FObjectKey,FName> *)((longlong)param_1.Value * 0x68 + *(longlong *)this_00);
      if ((*(byte *)(pTVar7 + 6) & 2) == 0) {
        if ((param_1.Value == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Value != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                               ,0x45,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
        FCachedData::FCachedData
                  (&local_b0,
                   (FCachedData *)
                   ((longlong)param_1.Value * 0x68 + *(longlong *)&this->PreAnimatedStorage));
        TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
        ::Remove((TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
                  *)&this->KeyToStorageIndex,&local_b0.Key);
        if ((param_1.Value == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Value != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                               ,0x45,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
        TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
        ::RemoveAt(this_00,param_1.Value,1);
        TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
        ::Remove(&this->TransientPreAnimatedStorage,local_res10);
        if (local_b0.bInitialized) {
          TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>
          ::RestorePreAnimatedValue(&this->Traits,&local_b0.Key,&local_b0.Value,param_4);
        }
        if ((2 < local_b0.Value.Binding.TypeIndex) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_b0.Value.Binding.TypeIndex])(&local_b0.Value.Binding)
        ;
        return None;
      }
      if ((*(byte *)(pTVar7 + 6) & 1) == 0) {
        return Persistent;
      }
    }
    else {
      if (param_3 != Persistent) {
        return Persistent;
      }
      if ((param_1.Value == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      pTVar7 = (TTuple<FObjectKey,FName> *)
               ((longlong)param_1.Value * 0x68 + *(longlong *)&this->PreAnimatedStorage);
      if ((*(byte *)(pTVar7 + 6) & 1) == 0) {
        return Persistent;
      }
      *(byte *)(pTVar7 + 6) = *(byte *)(pTVar7 + 6) | 2;
    }
    TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>
    ::RestorePreAnimatedValue
              (&this->Traits,pTVar7,
               (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform> *)
               (pTVar7 + 1),param_4);
    return Persistent;
  }
  if (param_3 == None) {
    if ((param_1.Value == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    puVar8 = (undefined8 *)((longlong)param_1.Value * 0x68 + *(longlong *)this_00);
    local_118._0_8_ = *puVar8;
    local_118._8_8_ = puVar8[1];
    local_108.Data.TranslationX = (double)puVar8[2];
    local_108.Data.TranslationY = (double)puVar8[3];
    local_108.Data.Rotation = (double)puVar8[4];
    local_108.Data.ScaleX = (double)puVar8[5];
    local_108.Data.ScaleY = (double)puVar8[6];
    local_108.Data.ShearX = (double)puVar8[7];
    local_108.Data.ShearY = (double)puVar8[8];
    TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
    ::
    TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              (&local_108.Binding,
               (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)(puVar8 + 9));
    local_b8 = local_b8 & 0xfe | *(byte *)(puVar8 + 0xc) & 1;
    local_b8 = (local_b8 ^ *(byte *)(puVar8 + 0xc)) & 2 ^ local_b8;
    TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
    ::Remove((TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
              *)&this->KeyToStorageIndex,&local_118);
    if ((param_1.Value == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
    ::RemoveAt(this_00,param_1.Value,1);
    TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
    ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    if ((local_b8 & 1) != 0) {
      TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>
      ::RestorePreAnimatedValue(&this->Traits,&local_118,&local_108,param_4);
    }
    if ((2 < local_108.Binding.TypeIndex) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_108.Binding.TypeIndex])(&local_108.Binding);
    return None;
  }
  if ((param_3 != NoChange) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3111672766223352038>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0xe6,"TargetRequirement == EPreAnimatedStorageRequirement::NoChange"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  if ((param_1.Value == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  pTVar7 = (TTuple<FObjectKey,FName> *)
           ((longlong)param_1.Value * 0x68 + *(longlong *)&this->PreAnimatedStorage);
  if ((*(byte *)(pTVar7 + 6) & 1) != 0) {
    TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>
    ::RestorePreAnimatedValue
              (&this->Traits,pTVar7,
               (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform> *)
               (pTVar7 + 1),param_4);
  }
  return NoChange;
}

// operator() @ 1504f5ef0

bool __thiscall
`UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
::TrackCaptureSource'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3111672766223352684>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3111672766223352684>,
                       &`public:___cdecl_`protected:_void___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>::TrackCaptureSource(UE::MovieScene::FPreAnimatedStateEntry_const&___ptr64,UE::MovieScene::EPreAnimatedCaptureSourceTracking)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f5f30

bool __thiscall
`UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
::TrackCaptureSource'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3111672766223352684>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3111672766223352684>,
                       &`public:___cdecl_`protected:_void___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>::TrackCaptureSource(UE::MovieScene::FPreAnimatedStateEntry_const&___ptr64,UE::MovieScene::EPreAnimatedCaptureSourceTracking)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f6270

bool __thiscall
`UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
::ShouldTrackCaptureSource<UObject_*_&,FName_const_&>'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3111672766223352646>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3111672766223352646>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>::ShouldTrackCaptureSource<UObject*___ptr64&___ptr64,FName_const&___ptr64>(UE::MovieScene::EPreAnimatedCaptureSourceTracking,UObject*___ptr64&___ptr64,FName_const&___ptr64)___ptr64'::`11'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f62b0

bool __thiscall
`UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
::ShouldTrackCaptureSource<UObject_*_&,FName_const_&>'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3111672766223352646>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3111672766223352646>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>::ShouldTrackCaptureSource<UObject*___ptr64&___ptr64,FName_const&___ptr64>(UE::MovieScene::EPreAnimatedCaptureSourceTracking,UObject*___ptr64&___ptr64,FName_const&___ptr64)___ptr64'::`11'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

