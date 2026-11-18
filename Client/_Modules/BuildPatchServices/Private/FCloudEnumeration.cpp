// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 17

// FCloudEnumeration @ 143220d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FCloudEnumeration * __thiscall
BuildPatchServices::FCloudEnumeration::FCloudEnumeration
          (FCloudEnumeration *this,FString *param_1,FDateTime *param_2,EFeatureLevel *param_3,
          FStatsCollector *param_4)

{
  TFuture<void> *pTVar1;
  EFeatureLevel EVar2;
  FStatsCollector *pFVar3;
  code *pcVar4;
  wchar_t *pwVar5;
  long64 *plVar6;
  TFuture<void> *pTVar7;
  undefined ***pppuVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  TUniqueFunction<void___cdecl(void)> local_98;
  code *local_68 [2];
  undefined **local_58;
  FCloudEnumeration *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  this->_padding_ = (longlong)&___7FCloudEnumeration_BuildPatchServices__6B_;
  ::FString::FString(&this->CloudDirectory,param_1);
  (this->ManifestAgeThreshold).Ticks = param_2->Ticks;
  EVar2 = *param_3;
  if ((int)EVar2 < 3) {
    pwVar5 = L"Chunks";
  }
  else if ((int)EVar2 < 6) {
    pwVar5 = L"ChunksV2";
  }
  else {
    pwVar5 = L"ChunksV4";
    if ((int)EVar2 < 0xf) {
      pwVar5 = L"ChunksV3";
    }
  }
  this->FeatureLevelChunkSubdir = pwVar5;
  *(undefined8 *)&this->ChunkInventory = 0;
  *(undefined8 *)&(this->ChunkInventory).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkInventory).field_0x20 = 0;
  *(undefined4 *)&(this->ChunkInventory).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkInventory).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkInventory).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunkInventory).field_0x34 = 0;
  *(undefined8 *)&(this->ChunkInventory).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkInventory).field_0x48 = 0;
  *(undefined8 *)&this->ChunkFileSizes = 0;
  *(undefined8 *)&(this->ChunkFileSizes).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkFileSizes).field_0x20 = 0;
  *(undefined4 *)&(this->ChunkFileSizes).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkFileSizes).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkFileSizes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunkFileSizes).field_0x34 = 0;
  *(undefined8 *)&(this->ChunkFileSizes).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkFileSizes).field_0x48 = 0;
  *(undefined8 *)&this->ChunkHashes = 0;
  *(undefined8 *)&(this->ChunkHashes).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkHashes).field_0x20 = 0;
  *(undefined4 *)&(this->ChunkHashes).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkHashes).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkHashes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunkHashes).field_0x34 = 0;
  *(undefined8 *)&(this->ChunkHashes).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkHashes).field_0x48 = 0;
  *(undefined8 *)&this->ChunkShaHashes = 0;
  *(undefined8 *)&(this->ChunkShaHashes).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkShaHashes).field_0x20 = 0;
  *(undefined4 *)&(this->ChunkShaHashes).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkShaHashes).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkShaHashes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunkShaHashes).field_0x34 = 0;
  *(undefined8 *)&(this->ChunkShaHashes).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkShaHashes).field_0x48 = 0;
  *(undefined8 *)&(this->UniqueWindowSizes).Elements = 0;
  *(undefined8 *)&(this->UniqueWindowSizes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UniqueWindowSizes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->UniqueWindowSizes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UniqueWindowSizes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UniqueWindowSizes).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UniqueWindowSizes).Elements.field_0x34 = 0;
  (this->UniqueWindowSizes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UniqueWindowSizes).HashSize = 0;
  *(undefined8 *)&this->ChunkWindowSizes = 0;
  *(undefined8 *)&(this->ChunkWindowSizes).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkWindowSizes).field_0x20 = 0;
  *(undefined4 *)&(this->ChunkWindowSizes).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkWindowSizes).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkWindowSizes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunkWindowSizes).field_0x34 = 0;
  *(undefined8 *)&(this->ChunkWindowSizes).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkWindowSizes).field_0x48 = 0;
  *(undefined8 *)&this->WindowsSizeChunks = 0;
  *(undefined8 *)&(this->WindowsSizeChunks).field_0x8 = 0;
  *(undefined8 *)&(this->WindowsSizeChunks).field_0x20 = 0;
  *(undefined4 *)&(this->WindowsSizeChunks).field_0x28 = 0;
  *(undefined4 *)&(this->WindowsSizeChunks).field_0x2c = 0x80;
  *(undefined4 *)&(this->WindowsSizeChunks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WindowsSizeChunks).field_0x34 = 0;
  *(undefined8 *)&(this->WindowsSizeChunks).field_0x40 = 0;
  *(undefined4 *)&(this->WindowsSizeChunks).field_0x48 = 0;
  *(undefined8 *)&(this->FeatureLevelMatchedChunks).Elements = 0;
  *(undefined8 *)&(this->FeatureLevelMatchedChunks).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FeatureLevelMatchedChunks).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FeatureLevelMatchedChunks).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FeatureLevelMatchedChunks).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FeatureLevelMatchedChunks).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FeatureLevelMatchedChunks).Elements.field_0x34 = 0;
  (this->FeatureLevelMatchedChunks).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FeatureLevelMatchedChunks).HashSize = 0;
  *(undefined8 *)&this->IdenticalChunks = 0;
  *(undefined8 *)&(this->IdenticalChunks).field_0x8 = 0;
  *(undefined8 *)&(this->IdenticalChunks).field_0x20 = 0;
  *(undefined4 *)&(this->IdenticalChunks).field_0x28 = 0;
  *(undefined4 *)&(this->IdenticalChunks).field_0x2c = 0x80;
  *(undefined4 *)&(this->IdenticalChunks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IdenticalChunks).field_0x34 = 0;
  pTVar1 = &this->Future;
  *(undefined8 *)&(this->IdenticalChunks).field_0x40 = 0;
  *(undefined4 *)&(this->IdenticalChunks).field_0x48 = 0;
  this->StatsCollector = param_4;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->Future).field_0x8 = 0;
  pFVar3 = this->StatsCollector;
  pcVar4 = *(code **)((longlong)*pFVar3 + 8);
  ::FString::FString((FString *)local_a8,L"Cloud Enumeration: Manifests Loaded");
  plVar6 = (long64 *)(*pcVar4)(pFVar3,local_a8,4,0);
  this->StatManifestsLoaded = plVar6;
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  pFVar3 = this->StatsCollector;
  pcVar4 = *(code **)((longlong)*pFVar3 + 8);
  ::FString::FString((FString *)local_a8,L"Cloud Enumeration: Manifests Rejected");
  plVar6 = (long64 *)(*pcVar4)(pFVar3,local_a8,4,0);
  this->StatManifestsRejected = plVar6;
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  pFVar3 = this->StatsCollector;
  pcVar4 = *(code **)((longlong)*pFVar3 + 8);
  ::FString::FString((FString *)local_a8,L"Cloud Enumeration: Chunks Enumerated");
  plVar6 = (long64 *)(*pcVar4)(pFVar3,local_a8,4,0);
  this->StatChunksEnumerated = plVar6;
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  pFVar3 = this->StatsCollector;
  pcVar4 = *(code **)((longlong)*pFVar3 + 8);
  ::FString::FString((FString *)local_a8,L"Cloud Enumeration: Chunks Rejected");
  plVar6 = (long64 *)(*pcVar4)(pFVar3,local_a8,4,0);
  this->StatChunksRejected = plVar6;
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  pFVar3 = this->StatsCollector;
  pcVar4 = *(code **)((longlong)*pFVar3 + 8);
  ::FString::FString((FString *)local_a8,L"Cloud Enumeration: Enumeration Time");
  plVar6 = (long64 *)(*pcVar4)(pFVar3,local_a8,0,0);
  this->StatTotalTime = plVar6;
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  pFVar3 = this->StatsCollector;
  pcVar4 = *(code **)((longlong)*pFVar3 + 8);
  ::FString::FString((FString *)local_a8,L"Cloud Enumeration: Unique Window Sizes");
  plVar6 = (long64 *)(*pcVar4)(pFVar3,local_a8,4,0);
  this->StatUniqueWindowSizes = plVar6;
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  local_40 = (undefined ***)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`BuildPatchServices::FCloudEnumeration::FCloudEnumeration'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`BuildPatchServices::FCloudEnumeration::FCloudEnumeration'::__l2::<lambda_1>,void>
                ::Call;
  local_98._0_8_ = 0;
  local_98._40_8_ = 0;
  local_50 = this;
  pTVar7 = Async<TFunction<void___cdecl(void)>_>
                     ((TFuture<void> *)local_a8,Thread,(TFunction<void___cdecl(void)> *)local_68,
                      &local_98);
  if (pTVar1 != pTVar7) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar7;
    *(undefined8 *)pTVar7 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->Future).field_0x8,
               (FSharedReferencer<1> *)&pTVar7->field_0x8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_a8._8_8_);
  if (local_68[0] != (code *)0x0) {
    pppuVar8 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar8 = local_40;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  return this;
}

// ~FCloudEnumeration @ 143227f40

void __thiscall BuildPatchServices::FCloudEnumeration::~FCloudEnumeration(FCloudEnumeration *this)

{
  longlong *plVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  FScriptContainerElement *pFVar4;
  char cVar5;
  
  this->_padding_ = (longlong)&___7FCloudEnumeration_BuildPatchServices__6B_;
  if (*(longlong *)&this->Future != 0) {
    do {
      do {
      } while (*(longlong *)&this->Future == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->Future + 0x60);
      cVar5 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar5 == '\0');
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Future).field_0x8);
  *(undefined4 *)&(this->IdenticalChunks).field_0x48 = 0;
  pvVar2 = *(void **)&(this->IdenticalChunks).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IdenticalChunks);
  (this->FeatureLevelMatchedChunks).HashSize = 0;
  FVar3 = (this->FeatureLevelMatchedChunks).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->FeatureLevelMatchedChunks).Elements);
  *(undefined4 *)&(this->WindowsSizeChunks).field_0x48 = 0;
  pvVar2 = *(void **)&(this->WindowsSizeChunks).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WindowsSizeChunks);
  *(undefined4 *)&(this->ChunkWindowSizes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ChunkWindowSizes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChunkWindowSizes);
  (this->UniqueWindowSizes).HashSize = 0;
  FVar3 = (this->UniqueWindowSizes).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->UniqueWindowSizes).Elements);
  *(undefined4 *)&(this->ChunkShaHashes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ChunkShaHashes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FSHAHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FSHAHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FSHAHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChunkShaHashes);
  *(undefined4 *)&(this->ChunkHashes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ChunkHashes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChunkHashes);
  *(undefined4 *)&(this->ChunkFileSizes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ChunkFileSizes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChunkFileSizes);
  *(undefined4 *)&(this->ChunkInventory).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ChunkInventory).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChunkInventory);
  pFVar4 = (this->CloudDirectory).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7ICloudEnumeration_BuildPatchServices__6B_;
  return;
}

// operator() @ 14322c300

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FBuildPatchAppManifest,1> * __thiscall
`BuildPatchServices::FCloudEnumeration::AsyncLoadManifest'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<FBuildPatchAppManifest,1> *__return_storage_ptr__)

{
  char cVar1;
  IFileManager *pIVar2;
  longlong *plVar3;
  FBuildPatchAppManifest *this_00;
  wchar_t *pwVar4;
  TRawPtrProxy<FBuildPatchAppManifest> local_res8;
  TSharedRef<FBuildPatchAppManifest,1> local_28;
  
  pIVar2 = IFileManager::Get();
  if (*(int *)((longlong)this + 0x10) == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)((longlong)this + 8);
  }
  plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0xd8))(pIVar2,&local_res8,pwVar4);
  if (*plVar3 < *(longlong *)(*(longlong *)this + 0x18)) {
    plVar3 = *(longlong **)(*(longlong *)this + 0x318);
    LOCK();
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    __return_storage_ptr__->Object = (FBuildPatchAppManifest *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  this_00 = ::operator_new(0x2b8);
  local_res8.Object = (FBuildPatchAppManifest *)0x0;
  if (this_00 != (FBuildPatchAppManifest *)0x0) {
    local_res8.Object = FBuildPatchAppManifest::FBuildPatchAppManifest(this_00);
  }
  TSharedRef<FBuildPatchAppManifest,1>::TSharedRef<FBuildPatchAppManifest,1><FBuildPatchAppManifest>
            (&local_28,&local_res8);
  cVar1 = (**(code **)((local_28.Object)->_padding_ + 0x158))(local_28.Object,(longlong)this + 8);
  if (cVar1 == '\0') {
    plVar3 = *(longlong **)(*(longlong *)this + 0x318);
    LOCK();
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (2 < (byte)LogCloudEnumeration._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCloudEnumeration);
    }
    __return_storage_ptr__->Object = (FBuildPatchAppManifest *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    plVar3 = *(longlong **)(*(longlong *)this + 0x310);
    LOCK();
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    __return_storage_ptr__->Object = local_28.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// AsyncLoadManifest @ 143234270

TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> * __thiscall
BuildPatchServices::FCloudEnumeration::AsyncLoadManifest
          (FCloudEnumeration *this,
          TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *__return_storage_ptr__,FString *param_1)

{
  <lambda_1> local_58;
  TUniqueFunction<void___cdecl(void)> local_38;
  
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  local_58.__this = this;
  ::FString::FString(&local_58.ManifestFilename,param_1);
  Async<_BuildPatchServices::FCloudEnumeration::AsyncLoadManifest_::__l2::<lambda_1>_>
            (__return_storage_ptr__,ThreadPool,&local_58,&local_38);
  if (local_58.ManifestFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ManifestFilename.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CalculateChunkWindowSizes @ 1432421d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>
* __thiscall
BuildPatchServices::FCloudEnumeration::CalculateChunkWindowSizes
          (FCloudEnumeration *this,
          TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>
          *__return_storage_ptr__,TSharedRef<FBuildPatchAppManifest,1> *param_1)

{
  uint *puVar1;
  FGuid *pFVar2;
  bool *pbVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  uint *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulong64 uVar13;
  TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>
  *pTVar14;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *this_00;
  IFileManager *pIVar15;
  FArchive *pFVar16;
  byte bVar17;
  longlong lVar18;
  ForAnyElementType FVar19;
  FGuid *pFVar20;
  FString *pFVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  FScriptContainerElement *_Src;
  uint uVar26;
  TBitArray<FDefaultBitArrayAllocator> *pTVar27;
  undefined1 *puVar28;
  FString *pFVar29;
  undefined1 auStackY_408 [32];
  undefined1 local_3c8;
  undefined1 local_3c7;
  undefined1 local_3c6;
  undefined1 local_3c5;
  undefined1 local_3c4 [4];
  uint local_3c0;
  undefined1 local_3bc [4];
  uint *local_3b8;
  undefined8 uStack_3b0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3a8;
  uint uStack_3a0;
  uint uStack_39c;
  uint uStack_398;
  undefined4 uStack_394;
  int local_390;
  undefined4 uStack_38c;
  FString *local_388;
  FString local_380;
  FString *local_370;
  ulonglong local_368;
  int local_360 [2];
  uint local_358 [2];
  TSharedRef<FBuildPatchAppManifest,1> *local_350;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_348;
  int local_328;
  uint local_324;
  undefined1 local_320 [8];
  int local_318;
  int local_314;
  int local_310;
  undefined1 local_30c [12];
  FGuid *local_300;
  TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>
  *local_2f8;
  FCloudEnumeration *local_2f0;
  undefined1 local_2e8 [24];
  uint local_2d0 [2];
  uint *local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c0;
  undefined8 uStack_2a0;
  longlong *local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_290;
  undefined8 uStack_270;
  uint *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_260;
  undefined8 uStack_240;
  longlong *local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_230;
  undefined8 uStack_210;
  bool *local_208;
  uint *local_200;
  FGuid *local_1f8;
  uint *local_1f0;
  undefined4 local_1cc;
  undefined4 local_1ac;
  undefined4 local_18c;
  undefined1 local_188 [32];
  uint *local_168;
  uint local_160;
  undefined4 local_15c;
  undefined4 local_158;
  int local_154;
  ForElementType<FSetElementId> local_148;
  int local_140;
  undefined1 local_138 [32];
  undefined1 *local_118;
  uint local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [28];
  uint local_7c;
  undefined2 local_78;
  ulong64 local_70;
  uchar local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_408;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x88 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x98 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x78 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x7c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x80 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x84 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x90 = 0;
  local_350 = param_1;
  local_2f8 = __return_storage_ptr__;
  local_2f0 = this;
  iVar9 = (**(code **)(param_1->Object->_padding_ + 0x180))();
  if (iVar9 != 0xf) {
    return __return_storage_ptr__;
  }
  local_138._0_8_ = 0;
  local_138._8_8_ = 0;
  local_118 = (undefined1 *)0x0;
  local_110 = 0;
  local_10c = 0x80;
  local_108 = 0xffffffff;
  local_104 = 0;
  local_f8 = (ForElementType<FSetElementId>)0x0;
  local_f0 = 0;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  local_370 = (FString *)0x0;
  local_368 = 0;
  (**(code **)(param_1->Object->_padding_ + 0x1c8))(param_1->Object,&local_370);
  iVar9 = (int)local_368;
  uVar11 = (ulonglong)(int)local_368;
  pFVar21 = local_370 + uVar11;
  pFVar29 = local_370;
  local_388 = pFVar21;
  while( true ) {
    if ((int)uVar11 != iVar9) {
      local_3c8 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_3c8)
      ;
    }
    pTVar14 = local_2f8;
    if (pFVar29 == pFVar21) break;
    lVar12 = (**(code **)(param_1->Object->_padding_ + 0x1f8))(param_1->Object,pFVar29);
    if (lVar12 != 0) {
      iVar4 = *(int *)(lVar12 + 0x50);
      pFVar20 = *(FGuid **)(lVar12 + 0x48);
      pFVar2 = (FGuid *)((longlong)pFVar20 + (longlong)iVar4 * 0x18);
      while( true ) {
        if (*(int *)(lVar12 + 0x50) != iVar4) {
          local_3c7 = 0;
          `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_3c7);
        }
        pFVar21 = local_388;
        param_1 = local_350;
        if (pFVar20 == pFVar2) break;
        uVar13 = CityHash64((char *)pFVar20,0x10);
        iVar10 = TSet<TTuple<FGuid,BuildPatchServices::FBlockStructure>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FBlockStructure,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FGuid>
                           ((TSet<TTuple<FGuid,BuildPatchServices::FBlockStructure>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FBlockStructure,0>,FDefaultSetAllocator>
                             *)local_138,(uint)uVar13,pFVar20);
        if ((iVar10 == -1) || (lVar18 = local_138._0_8_ + (longlong)iVar10 * 0x28, lVar18 == 0)) {
          local_300 = pFVar20;
          TSet<TTuple<FGuid,BuildPatchServices::FBlockStructure>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FBlockStructure,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
                    ((TSet<TTuple<FGuid,BuildPatchServices::FBlockStructure>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FBlockStructure,0>,FDefaultSetAllocator>
                      *)local_138,(uint)local_360,
                     (TKeyInitializer<FGuid_const_&> *)(uVar13 & 0xffffffff),(bool *)&local_300);
          lVar18 = local_138._0_8_ + (longlong)local_360[0] * 0x28;
        }
        FBlockStructure::Add
                  ((FBlockStructure *)(lVar18 + 0x10),(ulonglong)pFVar20[1].A,
                   (ulonglong)pFVar20[1].B,FromStart);
        pFVar20 = (FGuid *)&pFVar20[1].C;
      }
    }
    uVar11 = local_368 & 0xffffffff;
    pFVar29 = pFVar29 + 1;
  }
  local_348.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
  uVar26 = 0;
  local_348._padding_._0_4_ = 0;
  local_348._padding_._4_4_ = 1;
  local_348.UnvisitedBitMask = 0xffffffff;
  local_348.CurrentBitIndex = 0;
  local_348.BaseBitIndex = 0;
  if (local_110 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_348);
  }
  uVar24 = local_110;
  uStack_3b0 = CONCAT44(local_348._padding_._4_4_,(undefined4)local_348._padding_);
  local_3b8 = (uint *)local_138;
  uStack_39c = local_348.CurrentBitIndex;
  uStack_3a0 = local_348.UnvisitedBitMask;
  uStack_394 = local_348._28_4_;
  uStack_398 = local_348.BaseBitIndex;
  local_390 = local_138._8_4_ - local_104;
  pTStack_3a8 = local_348.Array;
  uVar22 = local_110 & 0xffffffe0;
  iVar9 = (int)local_110 >> 5;
  bVar17 = (byte)local_110;
  uStack_270 = CONCAT44(uStack_38c,local_390);
  TStack_290.Array = local_348.Array;
  local_298 = (longlong *)local_3b8;
  TStack_290._padding_ = uStack_3b0;
  TStack_290._16_8_ = _uStack_3a0;
  TStack_290._24_8_ = _uStack_398;
  if (((int)local_110 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar14 = (TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>
               *)(*pcVar6)();
    return pTVar14;
  }
  if (uVar24 != local_110) {
    puVar28 = local_138 + 0x10;
    if (local_118 != (undefined1 *)0x0) {
      puVar28 = local_118;
    }
    uVar24 = -1 << (bVar17 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar9 * 4);
    while (uVar24 == 0) {
      lVar12 = (longlong)iVar9;
      uVar22 = uVar22 + 0x20;
      iVar9 = iVar9 + 1;
      uVar24 = local_110;
      if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_1432425c0;
      uVar24 = *(uint *)(puVar28 + lVar12 * 4 + 4);
    }
    uVar11 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_328 = (int)lVar12;
    uVar24 = local_328 + -1 + uVar22;
    if ((int)local_110 < (int)uVar24) {
      uVar24 = local_110;
    }
  }
LAB_1432425c0:
  while( true ) {
    plVar5 = local_298;
    if ((int)local_298[1] - *(int *)((longlong)local_298 + 0x34) != (int)uStack_270) {
      local_3c6 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FBlockStructure>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3c6);
    }
    uVar22 = local_c0;
    if (((TStack_290.CurrentBitIndex == uVar24) &&
        (TStack_290.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10))) &&
       (plVar5 == (longlong *)local_138)) break;
    lVar12 = *plVar5;
    pbVar3 = (bool *)(lVar12 + (longlong)TStack_290.CurrentBitIndex * 0x28);
    plVar5 = *(longlong **)(lVar12 + 0x10 + (longlong)TStack_290.CurrentBitIndex * 0x28);
    if (((plVar5 != (longlong *)0x0) && (plVar5 == *(longlong **)(pbVar3 + 0x18))) && (*plVar5 == 0)
       ) {
      local_3c0 = *(uint *)(plVar5 + 1);
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
      Emplace<unsigned_int_const_&>
                ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)pTVar14,
                 &local_324,(bool *)&local_3c0);
      local_200 = &local_3c0;
      local_208 = pbVar3;
      TSet<TTuple<FGuid,unsigned_int>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGuid_const_&,unsigned_int_const_&>_>
                ((TSet<TTuple<FGuid,unsigned_int>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>,FDefaultSetAllocator>
                  *)&pTVar14->field_0x50,
                 (TPairInitializer<FGuid_const_&,unsigned_int_const_&> *)local_320,
                 (bool *)&local_208);
      this_00 = TMapBase<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
                ::FindOrAddImpl<unsigned_int_const_&>
                          ((TMapBase<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
                            *)local_e8,local_3c0,&local_3c0);
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (this_00,(FGuid *)(local_320 + 4),pbVar3);
    }
    TStack_290.UnvisitedBitMask = TStack_290.UnvisitedBitMask & ~TStack_290._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_290);
  }
  uVar24 = 1;
  local_188._0_8_ = 0;
  uStack_398 = 0;
  local_188._8_8_ = 0;
  local_168 = (uint *)0x0;
  local_160 = 0;
  local_15c = 0x80;
  local_158 = 0xffffffff;
  local_154 = 0;
  local_148 = (ForElementType<FSetElementId>)0x0;
  local_140 = 0;
  uStack_39c = uStack_398;
  if (local_c0 != 0) {
    puVar25 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar25 = local_c8;
    }
    uVar23 = *puVar25;
    uStack_398 = 0;
    uVar26 = 0;
    while (uVar23 == 0) {
      lVar12 = (longlong)(int)uVar26;
      uStack_398 = uStack_398 + 0x20;
      uVar26 = uVar26 + 1;
      uStack_39c = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar26)
      goto LAB_143242790;
      uVar23 = puVar25[lVar12 + 1];
    }
    uVar24 = -uVar23 & uVar23;
    uVar11 = (ulonglong)uVar24 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_318 = (int)lVar12;
    uStack_39c = local_318 + -1 + uStack_398;
    if ((int)local_c0 < (int)uStack_39c) {
      uStack_39c = local_c0;
    }
  }
LAB_143242790:
  local_3b8 = (uint *)local_e8;
  pTStack_3a8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  uVar23 = local_c0 & 0xffffffe0;
  local_390 = local_e8._8_4_ - local_b4;
  uStack_3b0 = CONCAT44(uVar24,uVar26);
  uStack_3a0 = 0xffffffff;
  uStack_394 = local_1cc;
  TStack_2c0._padding_ = uStack_3b0;
  iVar9 = (int)local_c0 >> 5;
  uStack_2a0 = CONCAT44(uStack_38c,local_390);
  bVar17 = (byte)local_c0;
  local_388._0_4_ = local_c0;
  TStack_2c0.BaseBitIndex = uStack_398;
  TStack_2c0._28_4_ = local_1cc;
  TStack_2c0.UnvisitedBitMask = 0xffffffff;
  TStack_2c0.CurrentBitIndex = uStack_39c;
  local_2c8 = local_3b8;
  TStack_2c0.Array = pTStack_3a8;
  if (((int)local_c0 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar14 = (TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>
               *)(*pcVar6)();
    return pTVar14;
  }
  if (uVar22 != local_c0) {
    puVar25 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar25 = local_c8;
    }
    uVar26 = -1 << (bVar17 & 0x1f) & puVar25[iVar9];
    while (uVar26 == 0) {
      lVar12 = (longlong)iVar9;
      uVar23 = uVar23 + 0x20;
      iVar9 = iVar9 + 1;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) {
        local_388._0_4_ = local_c0;
        uVar22 = local_c0;
        goto LAB_1432428c0;
      }
      uVar26 = puVar25[lVar12 + 1];
    }
    uVar11 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_314 = (int)lVar12;
    local_388._0_4_ = local_314 + -1 + uVar23;
    uVar22 = (uint)local_388;
    if ((int)local_c0 < (int)(uint)local_388) {
      uVar22 = local_c0;
      local_388._0_4_ = local_c0;
    }
  }
LAB_1432428c0:
  while( true ) {
    puVar25 = local_2c8;
    if (local_2c8[2] - local_2c8[0xd] != (int)uStack_2a0) {
      local_3c5 = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3c5);
    }
    uVar26 = local_160;
    if (((TStack_2c0.CurrentBitIndex == uVar22) &&
        (TStack_2c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       (puVar25 == (uint *)local_e8)) break;
    puVar25 = (uint *)((longlong)TStack_2c0.CurrentBitIndex * 0x60 + *(longlong *)puVar25);
    if ((int)(puVar25[4] - puVar25[0xf]) < 2) {
      local_358[0] = *puVar25;
      if (*(int *)&pTVar14->field_0x8 != *(int *)&pTVar14->field_0x34) {
        TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
        RemoveImpl<unsigned_int>
                  ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                   pTVar14,local_358[0],local_358);
      }
      uVar26 = puVar25[0xc];
      pTStack_3a8 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar25 + 6);
      uVar22 = 0;
      puVar1 = puVar25 + 2;
      uVar24 = 1;
      uStack_39c = uVar22;
      uStack_398 = uVar22;
      if (uVar26 != 0) {
        pTVar27 = pTStack_3a8;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(puVar25 + 10) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar27 = *(TBitArray<FDefaultBitArrayAllocator> **)(puVar25 + 10);
        }
        uVar23 = *(uint *)(pTVar27->AllocatorInstance).InlineData;
        while (uVar23 == 0) {
          lVar12 = (longlong)(int)uVar22;
          uStack_398 = uStack_398 + 0x20;
          uVar22 = uVar22 + 1;
          uStack_39c = uVar26;
          if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar22)
          goto LAB_1432429bf;
          uVar23 = *(uint *)((pTVar27->AllocatorInstance).InlineData + lVar12 * 4 + 4);
        }
        uVar24 = -uVar23 & uVar23;
        uVar11 = (ulonglong)uVar24 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_310 = (int)lVar12;
        uStack_39c = (uStack_398 - 1) + local_310;
        if ((int)uVar26 < (int)uStack_39c) {
          uStack_39c = uVar26;
        }
      }
LAB_1432429bf:
      local_390 = puVar25[4] - puVar25[0xf];
      uVar26 = puVar25[0xc];
      uStack_3b0 = CONCAT44(uVar24,uVar22);
      uStack_3a0 = 0xffffffff;
      uVar22 = uVar26 & 0xffffffe0;
      uStack_394 = local_18c;
      TStack_260._padding_ = uStack_3b0;
      iVar9 = (int)uVar26 >> 5;
      uStack_240 = CONCAT44(uStack_38c,local_390);
      TStack_260.UnvisitedBitMask = 0xffffffff;
      TStack_260.CurrentBitIndex = uStack_39c;
      TStack_260.BaseBitIndex = uStack_398;
      TStack_260._28_4_ = local_18c;
      local_3b8 = puVar1;
      local_268 = puVar1;
      TStack_260.Array = pTStack_3a8;
      if (((int)uVar26 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar14 = (TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>
                   *)(*pcVar6)();
        return pTVar14;
      }
      uVar24 = puVar25[0xc];
      if (uVar26 != uVar24) {
        pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar25 + 6);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(puVar25 + 10) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar27 = *(TBitArray<FDefaultBitArrayAllocator> **)(puVar25 + 10);
        }
        uVar26 = -1 << ((byte)uVar26 & 0x1f) &
                 *(uint *)((pTVar27->AllocatorInstance).InlineData + (longlong)iVar9 * 4);
        while (uVar26 == 0) {
          lVar12 = (longlong)iVar9;
          uVar22 = uVar22 + 0x20;
          iVar9 = iVar9 + 1;
          uVar26 = uVar24;
          if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
          goto LAB_143242ad0;
          uVar26 = *(uint *)((pTVar27->AllocatorInstance).InlineData + lVar12 * 4 + 4);
        }
        uVar11 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_2e8._4_4_ = (undefined4)lVar12;
        uVar26 = local_2e8._4_4_ + -1 + uVar22;
        if ((int)uVar24 < (int)uVar26) {
          uVar26 = uVar24;
        }
      }
LAB_143242ad0:
      while( true ) {
        puVar7 = local_268;
        if (local_268[2] - local_268[0xd] != (int)uStack_240) {
          local_3c4[0] = 0;
          `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_3c4);
        }
        if (((TStack_260.CurrentBitIndex == uVar26) &&
            (TStack_260.Array == (TBitArray<FDefaultBitArrayAllocator> *)(puVar25 + 6))) &&
           (uVar22 = (uint)local_388, puVar7 == puVar1)) break;
        pFVar2 = (FGuid *)(*(longlong *)puVar7 + (longlong)TStack_260.CurrentBitIndex * 0x18);
        if (*(int *)&pTVar14->field_0x58 != *(int *)&pTVar14->field_0x84) {
          uVar13 = CityHash64((char *)pFVar2,0x10);
          TSet<TTuple<FGuid,unsigned_int>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>,FDefaultSetAllocator>
          ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,unsigned_int>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>,FDefaultSetAllocator>
                               *)&pTVar14->field_0x50,(uint)uVar13,pFVar2);
        }
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                  ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_188,
                   (FGuid *)local_30c,(bool *)pFVar2);
        TStack_260.UnvisitedBitMask = TStack_260.UnvisitedBitMask & ~TStack_260._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_260);
      }
    }
    TStack_2c0.UnvisitedBitMask = TStack_2c0.UnvisitedBitMask & ~TStack_2c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c0);
  }
  iVar9 = 0;
  uVar22 = 1;
  uStack_398 = 0;
  uStack_39c = 0;
  if (local_160 != 0) {
    puVar25 = (uint *)(local_188 + 0x10);
    if (local_168 != (uint *)0x0) {
      puVar25 = local_168;
    }
    uVar24 = *puVar25;
    uStack_398 = 0;
    while (uVar24 == 0) {
      lVar12 = (longlong)iVar9;
      uStack_398 = uStack_398 + 0x20;
      iVar9 = iVar9 + 1;
      uStack_39c = local_160;
      if ((int)((local_160 - 1) + ((int)(local_160 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_143242c30;
      uVar24 = (puVar25 + 1)[lVar12];
    }
    uVar22 = -uVar24 & uVar24;
    uVar11 = (ulonglong)uVar22 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_30c._4_4_ = (undefined4)lVar12;
    uStack_39c = (local_30c._4_4_ - 1) + uStack_398;
    if ((int)local_160 < (int)uStack_39c) {
      uStack_39c = local_160;
    }
  }
LAB_143242c30:
  local_3b8 = (uint *)local_188;
  pTStack_3a8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10);
  local_390 = local_188._8_4_ - local_154;
  uVar24 = local_160 & 0xffffffe0;
  uStack_3a0 = 0xffffffff;
  uStack_3b0 = CONCAT44(uVar22,iVar9);
  uStack_394 = local_1ac;
  TStack_230._padding_ = uStack_3b0;
  iVar9 = (int)local_160 >> 5;
  uStack_210 = CONCAT44(uStack_38c,local_390);
  bVar17 = (byte)local_160;
  TStack_230.UnvisitedBitMask = 0xffffffff;
  TStack_230.CurrentBitIndex = uStack_39c;
  TStack_230.BaseBitIndex = uStack_398;
  TStack_230._28_4_ = local_1ac;
  local_238 = (longlong *)local_3b8;
  TStack_230.Array = pTStack_3a8;
  if (((int)local_160 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar14 = (TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>
               *)(*pcVar6)();
    return pTVar14;
  }
  if (uVar26 != local_160) {
    puVar25 = (uint *)(local_188 + 0x10);
    if (local_168 != (uint *)0x0) {
      puVar25 = local_168;
    }
    uVar26 = -1 << (bVar17 & 0x1f) & puVar25[iVar9];
    while (uVar26 == 0) {
      lVar12 = (longlong)iVar9;
      uVar24 = uVar24 + 0x20;
      iVar9 = iVar9 + 1;
      uVar26 = local_160;
      if ((int)((local_160 - 1) + ((int)(local_160 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_143242d60;
      uVar26 = (puVar25 + 1)[lVar12];
    }
    uVar11 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar26 = (int)lVar12 + -1 + uVar24;
    if ((int)local_160 < (int)uVar26) {
      uVar26 = local_160;
    }
  }
LAB_143242d60:
  do {
    plVar5 = local_238;
    if ((int)local_238[1] - *(int *)((longlong)local_238 + 0x34) != (int)uStack_210) {
      `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3bc);
    }
    if (((TStack_230.CurrentBitIndex == uVar26) &&
        (TStack_230.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10))) &&
       (plVar5 == (longlong *)local_188)) {
      local_140 = 0;
      if (local_148 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_148);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_188);
      DestructItems<FString,int>(local_370,(int)local_368);
      if (local_370 != (FString *)0x0) {
        FMemory::Free(local_370);
      }
      local_a0 = 0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
      local_f0 = 0;
      if (local_f8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_f8);
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FBlockStructure>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FBlockStructure>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FBlockStructure>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_138);
      return pTVar14;
    }
    pFVar2 = (FGuid *)(*plVar5 + (longlong)TStack_230.CurrentBitIndex * 0x18);
    FBuildPatchUtils::GetDataFilename((FString *)(local_2e8 + 8),local_350->Object,pFVar2);
    iVar9 = (local_2f0->CloudDirectory).Data.ArrayNum;
    iVar4 = (int)local_2e8._16_8_ + -1;
    if ((int)local_2e8._16_8_ == 0) {
      iVar4 = 0;
    }
    iVar10 = iVar4 + 1;
    local_380.Data.ArrayNum = iVar9;
    if ((iVar9 == 0) && (iVar10 != 0)) {
      _Src = (local_2f0->CloudDirectory).Data.AllocatorInstance.Data;
      iVar10 = iVar4 + 2;
LAB_143242e14:
      local_380.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar10 != 0) goto LAB_143242e1f;
      local_380.Data.ArrayMax = 0;
    }
    else {
      _Src = (local_2f0->CloudDirectory).Data.AllocatorInstance.Data;
      if (iVar9 == 0) goto LAB_143242e14;
LAB_143242e1f:
      local_380.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar22 = iVar10 + iVar9;
      if ((int)uVar22 < iVar9) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar22,0,(ForAnyElementType *)&local_380,iVar9,&local_380.Data.ArrayMax);
      if (iVar9 != 0) {
        memcpy(local_380.Data.AllocatorInstance.Data,_Src,(longlong)iVar9 * 2);
      }
    }
    ::FString::PathAppend(&local_380,(wchar_t *)local_2e8._8_8_,iVar4);
    if ((wchar_t *)local_2e8._8_8_ != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2e8._8_8_);
    }
    pIVar15 = IFileManager::Get();
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_380.Data.ArrayNum != 0) {
      FVar19.Data = local_380.Data.AllocatorInstance.Data;
    }
    pFVar16 = (FArchive *)(**(code **)((longlong)*pIVar15 + 0x18))(pIVar15,FVar19.Data,0);
    if (pFVar16 != (FArchive *)0x0) {
      local_98._0_4_ = 3;
      local_98._4_4_ = 0x42;
      local_98._8_4_ = 0;
      local_68[0x10] = '\0';
      local_68[0x11] = '\0';
      local_68[0x12] = '\0';
      local_68[0x13] = '\0';
      local_98._12_4_ = 0;
      local_98._16_4_ = 0;
      local_68[0] = '\0';
      local_68[1] = '\0';
      local_68[2] = '\0';
      local_68[3] = '\0';
      local_68[4] = '\0';
      local_68[5] = '\0';
      local_68[6] = '\0';
      local_68[7] = '\0';
      local_68[8] = '\0';
      local_68[9] = '\0';
      local_68[10] = '\0';
      local_68[0xb] = '\0';
      local_68[0xc] = '\0';
      local_68[0xd] = '\0';
      local_68[0xe] = '\0';
      local_68[0xf] = '\0';
      local_98._20_4_ = 0;
      local_98._24_4_ = 0;
      local_7c = 0x100000;
      local_78._0_1_ = None;
      local_78._1_1_ = RollingPoly64;
      local_70 = 0;
      BuildPatchServices::operator<<(pFVar16,(FChunkHeader *)local_98);
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
      Emplace<unsigned_int_const_&>
                ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)pTVar14,
                 local_2d0,(bool *)&local_7c);
      local_1f0 = &local_7c;
      local_1f8 = pFVar2;
      TSet<TTuple<FGuid,unsigned_int>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGuid_const_&,unsigned_int_const_&>_>
                ((TSet<TTuple<FGuid,unsigned_int>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>,FDefaultSetAllocator>
                  *)&pTVar14->field_0x50,
                 (TPairInitializer<FGuid_const_&,unsigned_int_const_&> *)local_2e8,
                 (bool *)&local_1f8);
      (*(code *)**(undefined8 **)pFVar16)(pFVar16,1);
    }
    if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_380.Data.AllocatorInstance.Data);
    }
    TStack_230.UnvisitedBitMask = TStack_230.UnvisitedBitMask & ~TStack_230._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_230);
  } while( true );
}

// EnumerateCloud @ 14324b650

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall BuildPatchServices::FCloudEnumeration::EnumerateCloud(FCloudEnumeration *this)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  FBuildPatchAppManifest *pFVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  IFileManager *pIVar12;
  FString *pFVar13;
  ulonglong uVar14;
  uint uVar15;
  FScriptContainerElement *_Src;
  ForAnyElementType FVar16;
  wchar_t *pwVar17;
  FString *pFVar18;
  LARGE_INTEGER LVar19;
  TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *pTVar20;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  LARGE_INTEGER local_res20;
  ulonglong in_stack_fffffffffffffea8;
  ForAnyElementType local_128;
  undefined8 local_120;
  FString local_118;
  FString *local_108;
  ulonglong local_100;
  TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> local_f8;
  TSharedRef<FBuildPatchAppManifest,1> local_e8;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER local_d0;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  <lambda_1> local_a8;
  FString local_90;
  TUniqueFunction<void___cdecl(void)> local_78;
  
  pIVar12 = IFileManager::Get();
  QueryPerformanceCounter(&local_d8);
  if ((this->CloudDirectory).Data.ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(this->CloudDirectory).Data.AllocatorInstance.Data;
  }
  cVar8 = (**(code **)((longlong)*pIVar12 + 0x58))(pIVar12,pwVar17);
  if (cVar8 == '\0') {
    LVar19 = local_d8;
    if (4 < (byte)LogCloudEnumeration._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCloudEnumeration);
    }
LAB_14324bb16:
    plVar3 = this->StatTotalTime;
    QueryPerformanceCounter(&local_b0);
    LOCK();
    *plVar3 = *plVar3 + (local_b0.QuadPart - (longlong)LVar19);
    UNLOCK();
    return;
  }
  local_108 = (FString *)0x0;
  local_100 = 0;
  pcVar2 = *(code **)((longlong)*pIVar12 + 0x80);
  pFVar13 = ::operator/(&local_90,&this->CloudDirectory,L"*.manifest");
  if ((pFVar13->Data).ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(pIVar12,&local_108,pwVar17,1,in_stack_fffffffffffffea8 & 0xffffffffffffff00);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  plVar3 = this->StatTotalTime;
  QueryPerformanceCounter(&local_d0);
  LOCK();
  *plVar3 = *plVar3 + (local_d0.QuadPart - (longlong)local_d8);
  UNLOCK();
  QueryPerformanceCounter(&local_c8);
  local_res20 = local_c8;
  iVar7 = (int)local_100;
  uVar14 = (ulonglong)(int)local_100;
  local_128.Data = (FScriptContainerElement *)0x0;
  pFVar18 = local_108 + uVar14;
  local_120 = 0;
  pFVar13 = local_108;
  do {
    if ((int)uVar14 != iVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar13 == pFVar18) {
      iVar7 = (int)local_120;
      pTVar20 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)
                (local_128.Data + (longlong)(int)local_120 * 0x10);
      FVar16.Data = local_128.Data;
      while( true ) {
        if ((int)local_120 != iVar7) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TFuture<TSharedPtr<FBuildPatchAppManifest,1>_>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if ((TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)FVar16.Data == pTVar20) break;
        if (*(longlong *)FVar16.Data == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("State.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x155,L"");
          if (bVar9) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((*(longlong *)FVar16.Data == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        lVar4 = *(longlong *)FVar16.Data;
        while (*(char *)(lVar4 + 0x68) == '\0') {
          (**(code **)(**(longlong **)(lVar4 + 0x60) + 0x20))
                    (*(longlong **)(lVar4 + 0x60),0xffffffff,0);
        }
        pTVar5 = *(TReferenceControllerBase<1> **)(lVar4 + 0x78);
        pFVar6 = *(FBuildPatchAppManifest **)(lVar4 + 0x70);
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pFVar6 != (FBuildPatchAppManifest *)0x0) {
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_e8.Object = pFVar6;
          local_e8.SharedReferenceCount.ReferenceController = pTVar5;
          if ((pFVar6 == (FBuildPatchAppManifest *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar9)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          EnumerateManifestData(this,&local_e8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e8.SharedReferenceCount.ReferenceController);
        }
        plVar3 = this->StatTotalTime;
        QueryPerformanceCounter(&local_c0);
        LOCK();
        *plVar3 = *plVar3 + (local_c0.QuadPart - (longlong)local_res20);
        UNLOCK();
        QueryPerformanceCounter(&local_b8);
        local_res20 = local_b8;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        FVar16.Data = FVar16.Data + 0x10;
      }
      DestructItems<TFuture<TSharedPtr<FBuildPatchAppManifest,1>_>,int>
                ((TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)local_128.Data,(int)local_120);
      if ((TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)local_128.Data !=
          (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) {
        FMemory::Free(local_128.Data);
      }
      DestructItems<FString,int>(local_108,(int)local_100);
      LVar19 = local_res20;
      if (local_108 != (FString *)0x0) {
        FMemory::Free(local_108);
        LVar19 = local_res20;
      }
      goto LAB_14324bb16;
    }
    iVar10 = (pFVar13->Data).ArrayNum;
    iVar1 = (this->CloudDirectory).Data.ArrayNum;
    iVar11 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar11 = 0;
    }
    local_118.Data.ArrayNum = iVar1;
    if ((iVar1 == 0) && (iVar11 != -1)) {
      iVar10 = iVar11 + 2;
      _Src = (this->CloudDirectory).Data.AllocatorInstance.Data;
LAB_14324b7d9:
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar10 != 0) goto LAB_14324b7e5;
      local_118.Data.ArrayMax = 0;
    }
    else {
      iVar10 = iVar11 + 1;
      _Src = (this->CloudDirectory).Data.AllocatorInstance.Data;
      if (iVar1 == 0) goto LAB_14324b7d9;
LAB_14324b7e5:
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar15 = iVar10 + iVar1;
      if ((int)uVar15 < iVar1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar15,0,(ForAnyElementType *)&local_118,iVar1,&local_118.Data.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_118.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
      }
    }
    ::FString::PathAppend(&local_118,(wchar_t *)(pFVar13->Data).AllocatorInstance.Data,iVar11);
    local_78._0_8_ = 0;
    local_78._40_8_ = 0;
    local_a8.__this = this;
    ::FString::FString(&local_a8.ManifestFilename,&local_118);
    Async<_BuildPatchServices::FCloudEnumeration::AsyncLoadManifest_::__l2::<lambda_1>_>
              (&local_f8,ThreadPool,&local_a8,&local_78);
    if (local_a8.ManifestFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.ManifestFilename.Data.AllocatorInstance.Data);
    }
    if (((local_128.Data <= &local_f8) &&
        (&local_f8 <
         (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)
         (local_128.Data + (longlong)local_120._4_4_ * 0x10))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar11 = (int)local_120;
    if ((int)local_120 == local_120._4_4_) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_128,(int *)((longlong)&local_120 + 4));
    }
    local_120 = CONCAT44(local_120._4_4_,iVar11 + 1);
    *(undefined8 *)(local_128.Data + (longlong)iVar11 * 0x10) = local_f8._0_8_;
    *(undefined8 *)(local_128.Data + (longlong)iVar11 * 0x10 + 8) = local_f8._8_8_;
    local_f8._8_8_ = 0;
    local_f8._0_8_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    uVar14 = local_100 & 0xffffffff;
    pFVar13 = pFVar13 + 1;
  } while( true );
}

// EnumerateManifestData @ 14324bba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FCloudEnumeration::EnumerateManifestData
          (FCloudEnumeration *this,TSharedRef<FBuildPatchAppManifest,1> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar9;
  FSHAHash *pFVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool *pbVar14;
  uint uVar15;
  FGuid *pFVar16;
  uint uVar17;
  uint *puVar18;
  FGuid *pFVar19;
  uint uVar20;
  wchar_t *pwVar21;
  undefined1 auStack_258 [32];
  char local_238;
  undefined1 local_237;
  undefined1 local_236 [2];
  uint local_234;
  FGuid *local_230;
  ulonglong local_228;
  undefined1 local_220 [16];
  TReferenceControllerBase<1> *local_210;
  undefined1 local_208 [8];
  undefined1 local_200 [12];
  undefined1 local_1f4 [12];
  undefined8 local_1e8;
  wchar_t *local_1e0;
  longlong *local_1d8;
  uint uStack_1d0;
  uint uStack_1cc;
  TBitArray<FDefaultBitArrayAllocator> *local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  uint local_1b8;
  undefined4 uStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  longlong *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  <lambda_1> local_178;
  FGuid *local_168;
  undefined8 *local_160;
  FGuid *local_158;
  ulong64 *local_150;
  FGuid *local_148;
  bool *local_140;
  TUniqueFunction<void___cdecl(void)> local_138;
  undefined4 local_ec;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> local_e8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_258;
  iVar6 = (**(code **)(param_1->Object->_padding_ + 0x180))();
  if (iVar6 < 3) {
    pwVar21 = L"Chunks";
  }
  else if (iVar6 < 6) {
    pwVar21 = L"ChunksV2";
  }
  else {
    pwVar21 = L"ChunksV4";
    if (iVar6 < 0xf) {
      pwVar21 = L"ChunksV3";
    }
  }
  local_1e0 = this->FeatureLevelChunkSubdir;
  local_138._0_8_ = 0;
  local_138._40_8_ = 0;
  local_178.__this = this;
  local_178.Manifest = param_1;
  Async<_BuildPatchServices::FCloudEnumeration::EnumerateManifestData_::__l2::<lambda_1>_>
            ((TFuture<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>_>
              *)(local_220 + 8),TaskGraph,&local_178,&local_138);
  local_230 = (FGuid *)0x0;
  local_228 = 0;
  (**(code **)(param_1->Object->_padding_ + 0x1f0))(param_1->Object,&local_230);
  cVar4 = (**(code **)(param_1->Object->_padding_ + 0x200))();
  if (cVar4 == '\0') {
    uVar7 = (ulonglong)(int)(uint)local_228;
    pFVar19 = local_230 + uVar7;
    local_234 = (uint)local_228;
    uVar12 = uVar7;
    pFVar16 = local_230;
    while( true ) {
      if ((int)uVar7 != (int)uVar12) {
        local_237 = 0;
        `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_237)
        ;
      }
      if (pFVar16 == pFVar19) break;
      lVar8 = (**(code **)(param_1->Object->_padding_ + 0x218))(param_1->Object,pFVar16);
      if (lVar8 == 0) {
LAB_14324be69:
        LOCK();
        *this->StatChunksRejected = *this->StatChunksRejected + 1;
        UNLOCK();
LAB_14324be74:
        uVar7 = local_228 & 0xffffffff;
        pFVar16 = pFVar16 + 1;
        uVar12 = (ulonglong)local_234;
      }
      else {
        lVar13 = *(longlong *)(lVar8 + 0x10);
        if (lVar13 == 0) goto LAB_14324be69;
        local_238 = '\0';
        pTVar9 = TMapBase<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
                 ::FindOrAddImpl<unsigned___int64_const_&>
                           ((TMapBase<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
                             *)&this->ChunkInventory,
                            (int)((ulonglong)lVar13 >> 0x20) * 0x17 + (int)lVar13,
                            (ulong64 *)(lVar8 + 0x10));
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                  (pTVar9,(FGuid *)local_208,(bool *)pFVar16);
        if (local_238 == '\0') {
          local_1e8 = (**(code **)(param_1->Object->_padding_ + 0x1a8))(param_1->Object,pFVar16);
          local_160 = &local_1e8;
          local_168 = pFVar16;
          TSet<TTuple<FGuid,__int64>,TDefaultMapHashableKeyFuncs<FGuid,__int64,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FGuid_const_&,__int64_&&>_>
                    ((TSet<TTuple<FGuid,__int64>,TDefaultMapHashableKeyFuncs<FGuid,__int64,0>,FDefaultSetAllocator>
                      *)&this->ChunkFileSizes,
                     (TPairInitializer<FGuid_const_&,__int64_&&> *)(local_208 + 4),
                     (bool *)&local_168);
          local_158 = pFVar16;
          local_150 = (ulong64 *)(lVar8 + 0x10);
          TSet<TTuple<FGuid,unsigned___int64>,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FGuid_const_&,unsigned___int64_const_&>_>
                    ((TSet<TTuple<FGuid,unsigned___int64>,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>,FDefaultSetAllocator>
                      *)&this->ChunkHashes,
                     (TPairInitializer<FGuid_const_&,unsigned___int64_const_&> *)local_200,
                     (bool *)&local_158);
          local_220._0_8_ = CityHash64((char *)pFVar16,0x10);
          iVar6 = TSet<TTuple<FGuid,FSHAHash>,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FGuid>
                            ((TSet<TTuple<FGuid,FSHAHash>,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>,FDefaultSetAllocator>
                              *)&this->ChunkShaHashes,(uint)local_220._0_8_,pFVar16);
          if ((iVar6 == -1) ||
             (lVar13 = (longlong)iVar6 * 0x2c + *(longlong *)&this->ChunkShaHashes, lVar13 == 0)) {
            pFVar10 = TMapBase<FGuid,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>_>
                      ::EmplaceByHash<FGuid_const_&>
                                ((TMapBase<FGuid,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>_>
                                  *)&this->ChunkShaHashes,local_220._0_4_,pFVar16);
          }
          else {
            pFVar10 = (FSHAHash *)(lVar13 + 0x10);
          }
          uVar2 = *(undefined8 *)(lVar8 + 0x20);
          *(undefined8 *)pFVar10->Hash = *(undefined8 *)(lVar8 + 0x18);
          *(undefined8 *)(pFVar10->Hash + 8) = uVar2;
          *(undefined4 *)(pFVar10->Hash + 0x10) = *(undefined4 *)(lVar8 + 0x28);
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
          Emplace<unsigned_int_const_&>
                    (&this->UniqueWindowSizes,(uint *)(local_200 + 4),(bool *)(lVar8 + 0x30));
          local_148 = pFVar16;
          local_140 = (bool *)(lVar8 + 0x30);
          TSet<TTuple<FGuid,unsigned_int>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FGuid_const_&,unsigned_int_const_&>_>
                    ((TSet<TTuple<FGuid,unsigned_int>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>,FDefaultSetAllocator>
                      *)&this->ChunkWindowSizes,
                     (TPairInitializer<FGuid_const_&,unsigned_int_const_&> *)(local_200 + 8),
                     (bool *)&local_148);
          pTVar9 = TMapBase<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
                   ::FindOrAddImpl<FSHAHash_const_&>
                             ((TMapBase<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
                               *)&this->IdenticalChunks,*(uint *)((FSHAHash *)(lVar8 + 0x18))->Hash,
                              (FSHAHash *)(lVar8 + 0x18));
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                    (pTVar9,(FGuid *)local_1f4,(bool *)pFVar16);
          LOCK();
          *this->StatChunksEnumerated = *this->StatChunksEnumerated + 1;
          UNLOCK();
        }
        if (local_1e0 != pwVar21) goto LAB_14324be74;
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                  (&this->FeatureLevelMatchedChunks,(FGuid *)(local_1f4 + 4),(bool *)pFVar16);
        uVar7 = local_228 & 0xffffffff;
        pFVar16 = pFVar16 + 1;
        uVar12 = (ulonglong)local_234;
      }
    }
  }
  else {
    LOCK();
    *this->StatManifestsRejected = *this->StatManifestsRejected + 1;
    UNLOCK();
  }
  if (local_220._8_8_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  while (*(char *)(local_220._8_8_ + 0x68) == '\0') {
    (**(code **)(**(longlong **)(local_220._8_8_ + 0x60) + 0x20))
              (*(longlong **)(local_220._8_8_ + 0x60),0xffffffff,0);
  }
  local_e8.Elements._0_8_ = 0;
  local_e8.Elements._8_8_ = 0;
  local_e8.Elements._32_8_ = 0;
  uVar17 = 0;
  local_e8.Elements._40_4_ = 0;
  local_e8.Elements._44_4_ = 0x80;
  local_e8.Elements._48_4_ = 0xffffffff;
  local_e8.Elements._52_4_ = 0;
  local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8.HashSize = 0;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::operator=
            (&local_e8,
             (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
             (local_220._8_8_ + 0x70));
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  TSet<TTuple<FGuid,unsigned_int>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FGuid,unsigned_int>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>,FDefaultSetAllocator>
               *)local_98,
              (TSet<TTuple<FGuid,unsigned_int>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>,FDefaultSetAllocator>
               *)(local_220._8_8_ + 0xc0));
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
  Append<FDefaultSetAllocator>(&this->UniqueWindowSizes,&local_e8);
  TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>::
  Append<FDefaultSetAllocator>
            (&this->ChunkWindowSizes,
             (TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>
              *)local_98);
  uVar15 = local_70;
  uStack_1cc = 1;
  local_1b8 = 0;
  uStack_1bc = local_1b8;
  if (local_70 != 0) {
    puVar18 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar18 = local_78;
    }
    uVar20 = *puVar18;
    local_1b8 = 0;
    uVar17 = 0;
    while (uVar20 == 0) {
      lVar8 = (longlong)(int)uVar17;
      local_1b8 = local_1b8 + 0x20;
      uVar17 = uVar17 + 1;
      uStack_1bc = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
      goto LAB_14324c071;
      uVar20 = puVar18[lVar8 + 1];
    }
    uStack_1cc = -uVar20 & uVar20;
    uVar12 = (ulonglong)uStack_1cc * 2 + 1;
    lVar8 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_234 = (uint)lVar8;
    uStack_1bc = (local_1b8 - 1) + local_234;
    if ((int)local_70 < (int)uStack_1bc) {
      uStack_1bc = local_70;
    }
  }
LAB_14324c071:
  local_1d8 = (longlong *)local_98;
  uStack_1b4 = local_ec;
  local_1c8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar20 = local_70 & 0xffffffe0;
  iStack_1b0 = local_98._8_4_ - local_64;
  uStack_1c0 = 0xffffffff;
  TStack_1a0.CurrentBitIndex = uStack_1bc;
  TStack_1a0.UnvisitedBitMask = 0xffffffff;
  TStack_1a0._padding_ = CONCAT44(uStack_1cc,uVar17);
  iVar6 = (int)local_70 >> 5;
  TStack_1a0._28_4_ = local_ec;
  TStack_1a0.BaseBitIndex = local_1b8;
  uStack_180 = CONCAT44(uStack_1ac,iStack_1b0);
  bVar11 = (byte)local_70;
  uStack_1d0 = uVar17;
  local_1a8 = local_1d8;
  TStack_1a0.Array = local_1c8;
  if (((int)local_70 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (uVar15 != local_70) {
    puVar18 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar18 = local_78;
    }
    uVar17 = -1 << (bVar11 & 0x1f) & puVar18[iVar6];
    while (uVar17 == 0) {
      lVar8 = (longlong)iVar6;
      uVar20 = uVar20 + 0x20;
      iVar6 = iVar6 + 1;
      uVar15 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
      goto LAB_14324c180;
      uVar17 = puVar18[lVar8 + 1];
    }
    uVar12 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar15 = (int)lVar8 + -1 + uVar20;
    if ((int)local_70 < (int)uVar15) {
      uVar15 = local_70;
    }
  }
LAB_14324c180:
  while( true ) {
    plVar3 = local_1a8;
    if ((int)local_1a8[1] - *(int *)((longlong)local_1a8 + 0x34) != (int)uStack_180) {
      `TSparseArray<TSparseSetElement<TTuple<FGuid,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_236);
    }
    if (((TStack_1a0.CurrentBitIndex == uVar15) &&
        (TStack_1a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar3 == (longlong *)local_98)) break;
    pbVar14 = (bool *)(*plVar3 + (longlong)TStack_1a0.CurrentBitIndex * 0x1c);
    pTVar9 = TMapBase<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
             ::FindOrAddImpl<unsigned_int_const_&>
                       ((TMapBase<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
                         *)&this->WindowsSizeChunks,*(uint *)(pbVar14 + 0x10),
                        (uint *)(pbVar14 + 0x10));
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
              (pTVar9,(FGuid *)local_220,pbVar14);
    TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
  }
  LOCK();
  *this->StatUniqueWindowSizes =
       (longlong)
       (*(int *)&(this->UniqueWindowSizes).Elements.field_0x8 -
       *(int *)&(this->UniqueWindowSizes).Elements.field_0x34);
  UNLOCK();
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
  if (local_230 != (FGuid *)0x0) {
    FMemory::Free(local_230);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_210);
  return;
}

// GetChunkFileSizes @ 1432549e0

TMap<FGuid,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,__int64,0>_> * __thiscall
BuildPatchServices::FCloudEnumeration::GetChunkFileSizes(FCloudEnumeration *this)

{
  longlong *plVar1;
  char cVar2;
  
  if (*(longlong *)&this->Future != 0) {
    do {
      do {
      } while (*(longlong *)&this->Future == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->Future + 0x60);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar2 == '\0');
    return &this->ChunkFileSizes;
  }
  return &this->ChunkFileSizes;
}

// GetChunkHash @ 143254a30

ulong64 * __thiscall
BuildPatchServices::FCloudEnumeration::GetChunkHash(FCloudEnumeration *this,FGuid *param_1)

{
  longlong *plVar1;
  char cVar2;
  ulong64 *puVar3;
  
  if (*(longlong *)&this->Future != 0) {
    do {
      do {
      } while (*(longlong *)&this->Future == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->Future + 0x60);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar2 == '\0');
  }
  puVar3 = TMapBase<FGuid,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>_>
           ::FindChecked((TMapBase<FGuid,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>_>
                          *)&this->ChunkHashes,param_1);
  return puVar3;
}

// GetChunkInventory @ 143254ac0

TMap<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
* __thiscall BuildPatchServices::FCloudEnumeration::GetChunkInventory(FCloudEnumeration *this)

{
  longlong *plVar1;
  char cVar2;
  
  if (*(longlong *)&this->Future != 0) {
    do {
      do {
      } while (*(longlong *)&this->Future == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->Future + 0x60);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar2 == '\0');
    return &this->ChunkInventory;
  }
  return &this->ChunkInventory;
}

// GetChunkShaHash @ 143255260

FSHAHash * __thiscall
BuildPatchServices::FCloudEnumeration::GetChunkShaHash(FCloudEnumeration *this,FGuid *param_1)

{
  longlong *plVar1;
  char cVar2;
  FSHAHash *pFVar3;
  
  if (*(longlong *)&this->Future != 0) {
    do {
      do {
      } while (*(longlong *)&this->Future == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->Future + 0x60);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar2 == '\0');
  }
  pFVar3 = TMapBase<FGuid,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>_>
           ::FindChecked((TMapBase<FGuid,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>_>
                          *)&this->ChunkShaHashes,param_1);
  return pFVar3;
}

// GetChunkShaHashes @ 143255310

TMap<FGuid,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>_> *
__thiscall BuildPatchServices::FCloudEnumeration::GetChunkShaHashes(FCloudEnumeration *this)

{
  longlong *plVar1;
  char cVar2;
  
  if (*(longlong *)&this->Future != 0) {
    do {
      do {
      } while (*(longlong *)&this->Future == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->Future + 0x60);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar2 == '\0');
    return &this->ChunkShaHashes;
  }
  return &this->ChunkShaHashes;
}

// GetChunkWindowSizes @ 1432553c0

TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_> *
__thiscall BuildPatchServices::FCloudEnumeration::GetChunkWindowSizes(FCloudEnumeration *this)

{
  longlong *plVar1;
  char cVar2;
  
  if (*(longlong *)&this->Future != 0) {
    do {
      do {
      } while (*(longlong *)&this->Future == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->Future + 0x60);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar2 == '\0');
    return &this->ChunkWindowSizes;
  }
  return &this->ChunkWindowSizes;
}

// GetIdenticalChunks @ 143256f50

TMap<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
* __thiscall BuildPatchServices::FCloudEnumeration::GetIdenticalChunks(FCloudEnumeration *this)

{
  longlong *plVar1;
  char cVar2;
  
  if (*(longlong *)&this->Future != 0) {
    do {
      do {
      } while (*(longlong *)&this->Future == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->Future + 0x60);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar2 == '\0');
    return &this->IdenticalChunks;
  }
  return &this->IdenticalChunks;
}

// GetUniqueWindowSizes @ 143257730

TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> * __thiscall
BuildPatchServices::FCloudEnumeration::GetUniqueWindowSizes(FCloudEnumeration *this)

{
  longlong *plVar1;
  char cVar2;
  
  if (*(longlong *)&this->Future != 0) {
    do {
      do {
      } while (*(longlong *)&this->Future == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->Future + 0x60);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar2 == '\0');
    return &this->UniqueWindowSizes;
  }
  return &this->UniqueWindowSizes;
}

// IsChunkFeatureLevelMatch @ 143258bb0

bool __thiscall
BuildPatchServices::FCloudEnumeration::IsChunkFeatureLevelMatch
          (FCloudEnumeration *this,FGuid *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  ulong64 uVar4;
  
  if (*(longlong *)&this->Future != 0) {
    do {
      do {
      } while (*(longlong *)&this->Future == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->Future + 0x60);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar2 == '\0');
  }
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                    (&this->FeatureLevelMatchedChunks,(uint)uVar4,param_1);
  return iVar3 != -1;
}

// IsComplete @ 143258c30

bool __thiscall BuildPatchServices::FCloudEnumeration::IsComplete(FCloudEnumeration *this)

{
  if (*(longlong *)&this->Future != 0) {
    return (bool)*(undefined1 *)(*(longlong *)&this->Future + 0x68);
  }
  return false;
}

