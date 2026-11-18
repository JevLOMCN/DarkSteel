// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 15

// GetTestFlags @ 14326f180

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

EAutomationTestFlags __thiscall FCloudChunkSourceSpec::GetTestFlags(FCloudChunkSourceSpec *this)

{
  return ProductFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// GetTestSourceFileName @ 14326f190

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall
FCloudChunkSourceSpec::GetTestSourceFileName
          (FCloudChunkSourceSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Tests\\Unit\\CloudChunkSource.spec.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14326f1c0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

int __thiscall FCloudChunkSourceSpec::GetTestSourceFileLine(FCloudChunkSourceSpec *this)

{
  return 0x20;
}

// GetBeautifiedTestName @ 14326f1d0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall
FCloudChunkSourceSpec::GetBeautifiedTestName
          (FCloudChunkSourceSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"BuildPatchServices.Unit");
  return __return_storage_ptr__;
}

// Define @ 14326f200

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FCloudChunkSourceSpec::Define(FCloudChunkSourceSpec *this)

{
  undefined1 *puVar1;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *this_00;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  FGuid *pFVar8;
  undefined ***pppuVar9;
  longlong lVar10;
  ForAnyElementType local_58;
  code *local_48 [2];
  undefined **local_38;
  FCloudChunkSourceSpec *local_30;
  undefined ***local_20;
  
  this->PausePadding = 1.1;
  FRollingHashConst::Init();
  pFVar8 = FGuid::NewGuid((FGuid *)&local_58);
  this_00 = &this->InitialDownloadSet;
  uVar4 = pFVar8->B;
  uVar5 = pFVar8->C;
  uVar6 = pFVar8->D;
  (this->SomeChunk).A = pFVar8->A;
  (this->SomeChunk).B = uVar4;
  (this->SomeChunk).C = uVar5;
  uVar7 = u_At_least_enough._8_8_;
  (this->SomeChunk).D = uVar6;
  *(undefined8 *)(this->SomeShaData).Hash = u_At_least_enough._0_8_;
  *(undefined8 *)((this->SomeShaData).Hash + 8) = uVar7;
  *(undefined4 *)((this->SomeShaData).Hash + 0x10) = u_At_least_enough._16_4_;
  bVar3 = 1 < (this->InitialDownloadSet).HashSize;
  if (!bVar3) {
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::UnhashElements(this_00);
  }
  puVar1 = &(this->InitialDownloadSet).Elements.field_0xc;
  *(undefined4 *)&(this->InitialDownloadSet).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->InitialDownloadSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InitialDownloadSet).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->InitialDownloadSet).Elements.field_0x2c;
  *(undefined4 *)&(this->InitialDownloadSet).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->InitialDownloadSet).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->InitialDownloadSet).Elements.field_0x10,0);
  }
  if (bVar3) {
    (this->InitialDownloadSet).HashSize = 1;
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  lVar10 = 0x19;
  do {
    pFVar8 = FGuid::NewGuid((FGuid *)&local_58);
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid>
              (this_00,(FGuid *)&stack0x00000008,(bool *)pFVar8);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=
            (&this->LargeInitialDownloadSet,this_00);
  lVar10 = 0x4b;
  do {
    pFVar8 = FGuid::NewGuid((FGuid *)&local_58);
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid>
              (&this->LargeInitialDownloadSet,(FGuid *)&stack0x00000008,(bool *)pFVar8);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FCloudChunkSourceSpec::Define'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FCloudChunkSourceSpec::Define'::__l2::<lambda_1>,void>::Call;
  local_30 = this;
  FAutomationSpecBase::BeforeEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_48);
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FCloudChunkSourceSpec::Define'::`2'::<lambda_2>,0,0>::_vftable_
  ;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FCloudChunkSourceSpec::Define'::__l2::<lambda_2>,void>::Call;
  local_30 = this;
  ::FString::FString((FString *)&local_58,"CloudChunkSource");
  if (local_48[0] != (code *)0x0) {
    pppuVar9 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar9 = local_20;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FCloudChunkSourceSpec::Define'::`2'::<lambda_3>,0,0>::_vftable_
  ;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FCloudChunkSourceSpec::Define'::__l2::<lambda_3>,void>::Call;
  local_30 = this;
  FAutomationSpecBase::AfterEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_48);
  return;
}

// ~FCloudChunkSourceSpec @ 143287d10

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FCloudChunkSourceSpec::~FCloudChunkSourceSpec(FCloudChunkSourceSpec *this)

{
  ForElementType<FSetElementId> FVar1;
  FCloudSourceConfig *pFVar2;
  FScriptContainerElement *pFVar3;
  IBuildManifestSet *pIVar4;
  FMockCloudChunkSourceStat *pFVar5;
  FFakeInstallerError *pFVar6;
  FMockDownloadConnectionCount *pFVar7;
  FMockMessagePump *pFVar8;
  FFakeChunkDataSerialization *pFVar9;
  FFakeChunkReferenceTracker *pFVar10;
  FFakeDownloadService *pFVar11;
  FFakeChunkStore *pFVar12;
  TPlatform<BuildPatchServices::FMockPlatformProcess,BuildPatchServices::FMockPlatformMisc> *pTVar13
  ;
  FBuildInstallerSharedContext *pFVar14;
  ICloudChunkSource *pIVar15;
  
  (this->LargeInitialDownloadSet).HashSize = 0;
  FVar1 = (this->LargeInitialDownloadSet).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LargeInitialDownloadSet).Elements);
  (this->EmptyInitialDownloadSet).HashSize = 0;
  FVar1 = (this->EmptyInitialDownloadSet).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->EmptyInitialDownloadSet).Elements);
  (this->InitialDownloadSet).HashSize = 0;
  FVar1 = (this->InitialDownloadSet).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->InitialDownloadSet).Elements);
  pFVar2 = (this->CloudSourceConfig).Ptr;
  if (pFVar2 != (FCloudSourceConfig *)0x0) {
    pFVar3 = (pFVar2->HealthPercentages).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (pFVar2->RetryDelayTimes).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    DestructItems<FString,int>
              ((FString *)(pFVar2->CloudRoots).AllocatorInstance.Data,(pFVar2->CloudRoots).ArrayNum)
    ;
    pFVar3 = (pFVar2->CloudRoots).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar2,0x60);
  }
  pIVar4 = (this->ManifestSet).Ptr;
  if (pIVar4 != (IBuildManifestSet *)0x0) {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MockManifest).SharedReferenceCount.ReferenceController);
  pFVar5 = (this->MockCloudChunkSourceStat).Ptr;
  if (pFVar5 != (FMockCloudChunkSourceStat *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  pFVar6 = (this->MockInstallerError).Ptr;
  if (pFVar6 != (FFakeInstallerError *)0x0) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
  pFVar7 = (this->MockConnectionCount).Ptr;
  if (pFVar7 != (FMockDownloadConnectionCount *)0x0) {
    (**(code **)(pFVar7->_padding_ + 8))(pFVar7,1);
  }
  pFVar8 = (this->MockMessagePump).Ptr;
  if (pFVar8 != (FMockMessagePump *)0x0) {
    (**(code **)*pFVar8)(pFVar8,1);
  }
  pFVar9 = (this->FakeChunkDataSerialization).Ptr;
  if (pFVar9 != (FFakeChunkDataSerialization *)0x0) {
    (*(code *)**(undefined8 **)pFVar9)(pFVar9,1);
  }
  pFVar10 = (this->MockChunkReferenceTracker).Ptr;
  if (pFVar10 != (FFakeChunkReferenceTracker *)0x0) {
    (**(code **)pFVar10->_padding_)(pFVar10,1);
  }
  pFVar11 = (this->FakeDownloadService).Ptr;
  if (pFVar11 != (FFakeDownloadService *)0x0) {
    (**(code **)pFVar11->_padding_)(pFVar11,1);
  }
  pFVar12 = (this->FakeChunkStore).Ptr;
  if (pFVar12 != (FFakeChunkStore *)0x0) {
    (**(code **)pFVar12->_padding_)(pFVar12,1);
  }
  pTVar13 = (this->MockPlatform).Ptr;
  if (pTVar13 !=
      (TPlatform<BuildPatchServices::FMockPlatformProcess,BuildPatchServices::FMockPlatformMisc> *)
      0x0) {
    (**(code **)*pTVar13)(pTVar13,1);
  }
  pFVar14 = (this->InstallerSharedContext).Ptr;
  if (pFVar14 != (FBuildInstallerSharedContext *)0x0) {
    (**(code **)pFVar14->_padding_)(pFVar14,1);
  }
  pIVar15 = (this->CloudChunkSource).Ptr;
  if (pIVar15 != (ICloudChunkSource *)0x0) {
    (*(code *)**(undefined8 **)pIVar15)(pIVar15,1);
  }
  FAutomationSpecBase::~FAutomationSpecBase((FAutomationSpecBase *)this);
  return;
}

// operator() @ 1432982a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall `FCloudChunkSourceSpec::Define'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  FGuid *pFVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  FMockManifest *pFVar6;
  FScriptContainerElement *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  IBuildManifest *pIVar9;
  IBuildManifestSet *pIVar10;
  undefined8 *puVar11;
  code *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  longlong *plVar26;
  bool bVar27;
  uint uVar28;
  FMockManifest *pFVar29;
  FCloudSourceConfig *this_00;
  FMockManifest *pFVar30;
  FInstallerAction *pFVar31;
  IBuildManifestSet *pIVar32;
  longlong lVar33;
  int iVar34;
  ForAnyElementType *pFVar35;
  uint uVar36;
  uint uVar37;
  TBitArray<FDefaultBitArrayAllocator> *pTVar39;
  uint uVar40;
  undefined1 auStackY_3d8 [32];
  undefined1 local_388 [4];
  int local_384;
  TArray<FString,TSizedDefaultAllocator<32>_> local_380;
  TArray<BuildPatchServices::FBuildPatchInstallerAction,TSizedDefaultAllocator<32>_> local_370;
  int local_360;
  int local_35c;
  undefined1 local_358 [8];
  TRawPtrProxy<BuildPatchServices::FMockManifest> local_350;
  FString local_348;
  FString local_338;
  TSharedRef<IBuildManifest,1> local_328;
  longlong *local_318;
  uint uStack_310;
  uint uStack_30c;
  TBitArray<FDefaultBitArrayAllocator> *local_308;
  undefined4 uStack_300;
  uint uStack_2fc;
  uint local_2f8;
  undefined4 uStack_2f4;
  int iStack_2f0;
  undefined4 uStack_2ec;
  longlong *local_2e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2e0;
  undefined8 uStack_2c0;
  FString local_2b8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_2a8;
  undefined4 local_23c;
  FInstallerAction local_238;
  FBuildPatchInstallerAction local_198;
  ulonglong local_38;
  FMockManifest *pFVar38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  pFVar38 = (FMockManifest *)0x0;
  uVar37 = 0;
  local_384 = 0;
  lVar5 = *(longlong *)this;
  pFVar29 = ::operator_new(8);
  pFVar30 = pFVar38;
  if (pFVar29 != (FMockManifest *)0x0) {
    (((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)
         &
         ___7__TPlatform_VFMockPlatformProcess_BuildPatchServices__VFMockPlatformMisc_2__BuildPatchServices__6B_
    ;
    pFVar30 = pFVar29;
  }
  pFVar29 = *(FMockManifest **)(lVar5 + 0x1a8);
  if ((pFVar29 != pFVar30) &&
     (*(FMockManifest **)(lVar5 + 0x1a8) = pFVar30, pFVar29 != (FMockManifest *)0x0)) {
    (**(code **)(((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->
                AllocatorInstance).Data)();
  }
  lVar5 = *(longlong *)this;
  pFVar29 = ::operator_new(0x50);
  pFVar30 = pFVar38;
  if (pFVar29 != (FMockManifest *)0x0) {
    pFVar29->_padding_ = 0;
    (((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)&___7FBuildInstallerSharedContext_BuildPatchServices__6B_;
    pFVar29->_padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar29->_padding_,4000);
    *(float *)&pFVar29->_padding_ = 0.0;
    pFVar29->_padding_ = (longlong)L"CloudChunkSourceSpec";
    *(undefined1 *)((longlong)&pFVar29->_padding_ + 4) = 0;
    pFVar30 = pFVar29;
  }
  pFVar29 = *(FMockManifest **)(lVar5 + 0x1a0);
  if ((pFVar29 != pFVar30) &&
     (*(FMockManifest **)(lVar5 + 0x1a0) = pFVar30, pFVar29 != (FMockManifest *)0x0)) {
    (**(code **)(((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->
                AllocatorInstance).Data)();
  }
  lVar5 = *(longlong *)this;
  this_00 = ::operator_new(0x60);
  pFVar30 = pFVar38;
  pFVar29 = pFVar38;
  if (this_00 != (FCloudSourceConfig *)0x0) {
    ::FString::FString(&local_2b8,"http://download.mydomain.com/clouddata");
    local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_380.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,1,0,&local_380.AllocatorInstance,1,&local_380.ArrayMax);
    ConstructItems<FString,FString,int>(local_380.AllocatorInstance.Data,&local_2b8,1);
    pFVar30 = (FMockManifest *)
              BuildPatchServices::FCloudSourceConfig::FCloudSourceConfig(this_00,&local_380);
    pFVar29 = (FMockManifest *)&DAT_00000007;
  }
  pFVar6 = *(FMockManifest **)(lVar5 + 0x208);
  if ((pFVar6 != pFVar30) &&
     (*(FMockManifest **)(lVar5 + 0x208) = pFVar30, pFVar6 != (FMockManifest *)0x0)) {
    pFVar7 = (((TArray<float,TSizedDefaultAllocator<32>_> *)&pFVar6->_padding_)->AllocatorInstance).
             Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    pFVar7 = (((TArray<float,TSizedDefaultAllocator<32>_> *)&pFVar6->_padding_)->AllocatorInstance).
             Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    DestructItems<FString,int>
              ((FString *)
               (((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar6->_padding_)->
               AllocatorInstance).Data,(int)pFVar6->_padding_);
    pFVar7 = (((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar6->_padding_)->AllocatorInstance
             ).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    ::operator_delete(pFVar6,0x60);
  }
  if (((ulonglong)pFVar29 & 4) != 0) {
    pFVar29 = (FMockManifest *)(ulonglong)((uint)pFVar29 & 0xfffffffb);
    DestructItems<FString,int>((FString *)local_380.AllocatorInstance.Data,local_380.ArrayNum);
    if (local_380.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_380.AllocatorInstance.Data);
    }
  }
  if ((((ulonglong)pFVar29 & 2) != 0) &&
     (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  lVar5 = *(longlong *)this;
  pFVar29 = ::operator_new(200);
  pFVar30 = pFVar38;
  if (pFVar29 != (FMockManifest *)0x0) {
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    (((TArray<float,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    pFVar29->_padding_ = 0;
    (((TArray<float,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    (((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)&___7FFakeChunkStore_BuildPatchServices__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar29->_padding_,4000);
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    *(undefined4 *)&pFVar29->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar29->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar29->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar29->_padding_ + 4) = 0;
    pFVar29->_padding_ = 0;
    *(undefined4 *)&pFVar29->_padding_ = 0;
    pFVar30 = pFVar29;
  }
  pFVar29 = *(FMockManifest **)(lVar5 + 0x1b0);
  if ((pFVar29 != pFVar30) &&
     (*(FMockManifest **)(lVar5 + 0x1b0) = pFVar30, pFVar29 != (FMockManifest *)0x0)) {
    (**(code **)(((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->
                AllocatorInstance).Data)();
  }
  lVar5 = *(longlong *)this;
  pFVar29 = ::operator_new(0x180);
  pFVar30 = pFVar38;
  if (pFVar29 != (FMockManifest *)0x0) {
    (((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)&___7FMockDownloadService_BuildPatchServices__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar29->_padding_,4000);
    *(undefined4 *)
     &(((TArray<float,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         0;
    (((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)&___7FFakeDownloadService_BuildPatchServices__6B_;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    *(undefined1 *)&pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    BuildPatchServices::FChunkHeader::FChunkHeader((FChunkHeader *)&pFVar29->_padding_);
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    *(undefined4 *)&pFVar29->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar29->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar29->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar29->_padding_ + 4) = 0;
    pFVar29->_padding_ = 0;
    *(undefined4 *)&pFVar29->_padding_ = 0;
    pFVar30 = pFVar29;
  }
  pFVar29 = *(FMockManifest **)(lVar5 + 0x1b8);
  if ((pFVar29 != pFVar30) &&
     (*(FMockManifest **)(lVar5 + 0x1b8) = pFVar30, pFVar29 != (FMockManifest *)0x0)) {
    (**(code **)(((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->
                AllocatorInstance).Data)();
  }
  lVar5 = *(longlong *)this;
  pFVar29 = ::operator_new(0xc0);
  pFVar30 = pFVar38;
  if (pFVar29 != (FMockManifest *)0x0) {
    pFVar29->_padding_ = 0;
    (((TArray<float,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    (((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)&___7FFakeChunkReferenceTracker_BuildPatchServices__6B_;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    (((TArray<float,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)&pFVar29->_padding_ = 0;
    *(int *)((longlong)&pFVar29->_padding_ + 4) = 0x80;
    *(float *)&pFVar29->_padding_ = -NAN;
    *(undefined4 *)((longlong)&pFVar29->_padding_ + 4) = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    *(undefined4 *)&pFVar29->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar29->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar29->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar29->_padding_ + 4) = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar30 = pFVar29;
  }
  pFVar29 = *(FMockManifest **)(lVar5 + 0x1c0);
  if ((pFVar29 != pFVar30) &&
     (*(FMockManifest **)(lVar5 + 0x1c0) = pFVar30, pFVar29 != (FMockManifest *)0x0)) {
    (**(code **)(((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->
                AllocatorInstance).Data)();
  }
  lVar5 = *(longlong *)this;
  pFVar29 = ::operator_new(0xd0);
  pFVar30 = pFVar38;
  if (pFVar29 != (FMockManifest *)0x0) {
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    (((TArray<float,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    pFVar29->_padding_ = 0;
    (((TArray<float,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    (((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)&___7FFakeChunkDataSerialization_BuildPatchServices__6B_;
    pFVar30 = pFVar29;
  }
  pFVar29 = *(FMockManifest **)(lVar5 + 0x1c8);
  if ((pFVar29 != pFVar30) &&
     (*(FMockManifest **)(lVar5 + 0x1c8) = pFVar30, pFVar29 != (FMockManifest *)0x0)) {
    (**(code **)(((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->
                AllocatorInstance).Data)();
  }
  lVar5 = *(longlong *)this;
  pFVar29 = ::operator_new(8);
  pFVar30 = pFVar38;
  if (pFVar29 != (FMockManifest *)0x0) {
    (((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)&___7FMockMessagePump_BuildPatchServices__6B_;
    pFVar30 = pFVar29;
  }
  pFVar29 = *(FMockManifest **)(lVar5 + 0x1d0);
  if ((pFVar29 != pFVar30) &&
     (*(FMockManifest **)(lVar5 + 0x1d0) = pFVar30, pFVar29 != (FMockManifest *)0x0)) {
    (**(code **)(((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->
                AllocatorInstance).Data)();
  }
  lVar5 = *(longlong *)this;
  pFVar29 = ::operator_new(0x10);
  pFVar30 = pFVar38;
  if (pFVar29 != (FMockManifest *)0x0) {
    *(int *)&pFVar29->_padding_ = 8;
    (((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)&___7FMockDownloadConnectionCount_BuildPatchServices__6B_;
    pFVar30 = pFVar29;
  }
  pFVar29 = *(FMockManifest **)(lVar5 + 0x1d8);
  if ((pFVar29 != pFVar30) &&
     (*(FMockManifest **)(lVar5 + 0x1d8) = pFVar30, pFVar29 != (FMockManifest *)0x0)) {
    (**(code **)((((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->
                 AllocatorInstance).Data + 8))();
  }
  lVar5 = *(longlong *)this;
  pFVar29 = ::operator_new(0x88);
  pFVar30 = pFVar38;
  if (pFVar29 != (FMockManifest *)0x0) {
    pFVar29->_padding_ = 0;
    (((TArray<float,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    pFVar29->_padding_ = 0;
    (((TArray<float,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    (((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)&___7FFakeInstallerError_BuildPatchServices__6B_;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    FText::FText((FText *)&pFVar29->_padding_);
    (((TArray<float,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    *(undefined4 *)&pFVar29->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar29->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar29->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar29->_padding_ + 4) = 0;
    pFVar29->_padding_ = 0;
    *(undefined4 *)&pFVar29->_padding_ = 0;
    pFVar30 = pFVar29;
  }
  pFVar29 = *(FMockManifest **)(lVar5 + 0x1e0);
  if ((pFVar29 != pFVar30) &&
     (*(FMockManifest **)(lVar5 + 0x1e0) = pFVar30, pFVar29 != (FMockManifest *)0x0)) {
    (**(code **)(((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->
                AllocatorInstance).Data)();
  }
  lVar5 = *(longlong *)this;
  pFVar29 = ::operator_new(0xa8);
  pFVar30 = pFVar38;
  if (pFVar29 != (FMockManifest *)0x0) {
    pFVar29->_padding_ = 0;
    (((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)&___7FMockCloudChunkSourceStat_BuildPatchServices__6B_;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    (((TArray<float,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    pFVar29->_padding_ = 0;
    (((TArray<float,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar29->_padding_ = 0;
    pFVar30 = pFVar29;
  }
  pFVar29 = *(FMockManifest **)(lVar5 + 0x1e8);
  if ((pFVar29 != pFVar30) &&
     (*(FMockManifest **)(lVar5 + 0x1e8) = pFVar30, pFVar29 != (FMockManifest *)0x0)) {
    (**(code **)(((TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->
                AllocatorInstance).Data)();
  }
  pFVar30 = ::operator_new(0x768);
  local_350.Object = pFVar38;
  if (pFVar30 != (FMockManifest *)0x0) {
    memset(pFVar30,0,0x768);
    local_350.Object = BuildPatchServices::FMockManifest::FMockManifest(pFVar30);
  }
  TSharedPtr<BuildPatchServices::FMockManifest,1>::operator=<BuildPatchServices::FMockManifest>
            ((TSharedPtr<BuildPatchServices::FMockManifest,1> *)(*(longlong *)this + 0x1f0),
             &local_350);
  lVar5 = *(longlong *)this;
  local_2a8.Elements._16_8_ = 0;
  local_2a8.Elements._24_8_ = 0;
  local_348.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_2a8.Elements._48_8_ = _UNK_150631d98;
  local_348.Data.ArrayNum = 0;
  local_348.Data.ArrayMax = 0;
  local_338.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_338.Data.ArrayNum = 0;
  local_338.Data.ArrayMax = 0;
  local_2a8.Hash.InlineData[0] = '\0';
  local_2a8.Hash.InlineData[1] = '\0';
  local_2a8.Hash.InlineData[2] = '\0';
  local_2a8.Hash.InlineData[3] = '\0';
  local_2a8.Hash._padding_ = 0;
  local_2a8.HashSize = 0;
  local_2a8._76_4_ = 0;
  local_2a8.Elements._0_8_ = 0;
  local_2a8.Elements._8_8_ = 0;
  local_2a8.Elements._32_8_ = 0;
  local_2a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  if ((*(longlong *)(lVar5 + 0x1f0) == 0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar27)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pTVar8 = *(TReferenceControllerBase<1> **)(lVar5 + 0x1f8);
  pIVar9 = *(IBuildManifest **)(lVar5 + 0x1f0);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pIVar9 == (IBuildManifest *)0x0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar27)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_328.Object = pIVar9;
  local_328.SharedReferenceCount.ReferenceController = pTVar8;
  pFVar31 = BuildPatchServices::FInstallerAction::MakeInstall
                      (&local_238,&local_328,&local_2a8,&local_338,&local_348);
  BuildPatchServices::FBuildPatchInstallerAction::FBuildPatchInstallerAction(&local_198,pFVar31);
  local_370.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_370.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x158,8,1,0,&local_370.AllocatorInstance,1,&local_370.ArrayMax);
  ConstructItems<BuildPatchServices::FBuildPatchInstallerAction,BuildPatchServices::FBuildPatchInstallerAction,int>
            (local_370.AllocatorInstance.Data,&local_198,1);
  pIVar32 = BuildPatchServices::FBuildManifestSetFactory::Create(&local_370);
  pIVar10 = *(IBuildManifestSet **)(lVar5 + 0x200);
  if ((pIVar10 != pIVar32) &&
     (*(IBuildManifestSet **)(lVar5 + 0x200) = pIVar32, pIVar10 != (IBuildManifestSet *)0x0)) {
    (**(code **)*pIVar10)(pIVar10,1);
  }
  local_198.TaggedFiles.HashSize = 0;
  if (local_198.TaggedFiles.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_198.TaggedFiles.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_198.TaggedFiles.Elements);
  local_198.InstallTags.HashSize = 0;
  if (local_198.InstallTags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_198.InstallTags.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_198.InstallTags.Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.InstallManifest.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.CurrentManifest.SharedReferenceCount.ReferenceController);
  BuildPatchServices::FInstallerAction::~FInstallerAction(&local_198.InstallerAction);
  if (local_238.CloudSubdirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.CloudSubdirectory.Data.AllocatorInstance.Data);
  }
  if (local_238.InstallSubdirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.InstallSubdirectory.Data.AllocatorInstance.Data);
  }
  local_238.InstallTags.HashSize = 0;
  if (local_238.InstallTags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_238.InstallTags.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_238.InstallTags.Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238.InstallManifest.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238.CurrentManifest.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_328.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  lVar5 = *(longlong *)this;
  uStack_30c = 1;
  local_2f8 = 0;
  local_308 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar5 + 0x220);
  uVar36 = *(uint *)(lVar5 + 0x238);
  plVar1 = (longlong *)(lVar5 + 0x210);
  uStack_2fc = local_2f8;
  if (uVar36 != 0) {
    pTVar39 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x230);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x230) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar39 = local_308;
    }
    uVar28 = *(uint *)(pTVar39->AllocatorInstance).InlineData;
    pFVar30 = pFVar38;
    local_2f8 = 0;
    uVar37 = 0;
    while (uVar28 == 0) {
      iVar34 = (int)pFVar38;
      local_2f8 = (int)pFVar30 + 0x20;
      pFVar30 = (FMockManifest *)(ulonglong)local_2f8;
      uVar37 = iVar34 + 1;
      pFVar38 = (FMockManifest *)(ulonglong)uVar37;
      uStack_2fc = uVar36;
      if ((int)((uVar36 - 1) + ((int)(uVar36 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar37)
      goto LAB_143298d50;
      uVar28 = *(uint *)((pTVar39->AllocatorInstance).InlineData + (longlong)iVar34 * 4 + 4);
    }
    uStack_30c = -uVar28 & uVar28;
    uVar3 = (ulonglong)uStack_30c * 2 + 1;
    lVar33 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    local_360 = (int)lVar33;
    uStack_2fc = (local_2f8 - 1) + local_360;
    if ((int)uVar36 < (int)uStack_2fc) {
      uStack_2fc = uVar36;
    }
  }
LAB_143298d50:
  uStack_2f4 = local_23c;
  iStack_2f0 = *(int *)(lVar5 + 0x218) - *(int *)(lVar5 + 0x244);
  uVar28 = *(uint *)(lVar5 + 0x238);
  uStack_300 = 0xffffffff;
  TStack_2e0.CurrentBitIndex = uStack_2fc;
  TStack_2e0.UnvisitedBitMask = 0xffffffff;
  uVar40 = uVar28 & 0xffffffe0;
  TStack_2e0._padding_ = CONCAT44(uStack_30c,uVar37);
  iVar34 = (int)uVar28 >> 5;
  TStack_2e0._28_4_ = local_23c;
  TStack_2e0.BaseBitIndex = local_2f8;
  uStack_2c0 = CONCAT44(uStack_2ec,iStack_2f0);
  local_318 = plVar1;
  uStack_310 = uVar37;
  local_2e8 = plVar1;
  TStack_2e0.Array = local_308;
  if ((((int)uVar28 < 0) || ((int)uVar36 < (int)uVar28)) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar27)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar37 = *(uint *)(lVar5 + 0x238);
  if (uVar28 != uVar37) {
    pTVar39 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x230);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x230) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar39 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar5 + 0x220);
    }
    uVar36 = -1 << ((byte)uVar28 & 0x1f) &
             *(uint *)((pTVar39->AllocatorInstance).InlineData + (longlong)iVar34 * 4);
    while (uVar36 == 0) {
      lVar33 = (longlong)iVar34;
      uVar40 = uVar40 + 0x20;
      iVar34 = iVar34 + 1;
      uVar28 = uVar37;
      if ((int)((uVar37 - 1) + ((int)(uVar37 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar34)
      goto LAB_143298e60;
      uVar36 = *(uint *)((pTVar39->AllocatorInstance).InlineData + lVar33 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar36 & uVar36) * 2 + 1;
    lVar33 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    local_35c = (int)lVar33;
    uVar28 = local_35c + -1 + uVar40;
    if ((int)uVar37 < (int)uVar28) {
      uVar28 = uVar37;
    }
  }
LAB_143298e60:
  while( true ) {
    plVar26 = local_2e8;
    if ((int)local_2e8[1] - *(int *)((longlong)local_2e8 + 0x34) != (int)uStack_2c0) {
      local_388[0] = 0;
      `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_388);
    }
    if (((TStack_2e0.CurrentBitIndex == uVar28) &&
        (TStack_2e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(lVar5 + 0x220))) &&
       (plVar26 == plVar1)) break;
    pFVar2 = (FGuid *)(*plVar26 + (longlong)TStack_2e0.CurrentBitIndex * 0x18);
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
              ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
               (*(longlong *)(*(longlong *)this + 0x1c0) + 0x10),(FGuid *)local_358,(bool *)pFVar2);
    local_384 = 1;
    TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_>::
    Emplace<FGuid_const_&,int>
              ((TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *
               )(*(longlong *)(*(longlong *)this + 0x1c0) + 0x60),pFVar2,&local_384);
    lVar33 = *(longlong *)(*(longlong *)this + 0x1c0);
    pFVar35 = (ForAnyElementType *)(lVar33 + 0xb0);
    if ((((FGuid *)pFVar35->Data <= pFVar2) &&
        (pFVar2 < (FGuid *)pFVar35->Data + *(int *)(lVar33 + 0xbc))) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar27)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar34 = *(int *)(lVar33 + 0xb8);
    if (iVar34 == *(int *)(lVar33 + 0xbc)) {
      iVar34 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,pFVar35,(int *)(lVar33 + 0xbc));
    }
    *(int *)(lVar33 + 0xb8) = iVar34 + 1;
    uVar4 = *(undefined8 *)&pFVar2->C;
    pFVar7 = pFVar35->Data;
    *(undefined8 *)(pFVar7 + (longlong)iVar34 * 0x10) = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar7 + (longlong)iVar34 * 0x10 + 8) = uVar4;
    TStack_2e0.UnvisitedBitMask = TStack_2e0.UnvisitedBitMask & ~TStack_2e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2e0);
  }
  lVar5 = *(longlong *)(*(longlong *)this + 0x1c0);
  if ((*(int *)(lVar5 + 0xb8) < 1) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar27)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  puVar11 = *(undefined8 **)(lVar5 + 0xb0);
  uVar4 = puVar11[1];
  lVar5 = *(longlong *)this;
  *(undefined8 *)(lVar5 + 0x324) = *puVar11;
  *(undefined8 *)(lVar5 + 0x32c) = uVar4;
  lVar5 = *(longlong *)this;
  *(undefined8 *)(lVar5 + 0x340) = *(undefined8 *)(lVar5 + 0x324);
  *(undefined8 *)(lVar5 + 0x348) = *(undefined8 *)(lVar5 + 0x32c);
  *(undefined4 *)(*(longlong *)this + 0x350) = 0x80;
  *(undefined4 *)(*(longlong *)this + 0x354) = 0x80;
  EnterCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(*(longlong *)this + 0x1b8) + 8));
  lVar5 = *(longlong *)this;
  uVar13 = *(undefined4 *)(lVar5 + 0x33c);
  uVar14 = *(undefined4 *)(lVar5 + 0x340);
  uVar15 = *(undefined4 *)(lVar5 + 0x344);
  uVar16 = *(undefined4 *)(lVar5 + 0x348);
  uVar17 = *(undefined4 *)(lVar5 + 0x34c);
  uVar18 = *(undefined4 *)(lVar5 + 0x350);
  uVar19 = *(undefined4 *)(lVar5 + 0x354);
  uVar20 = *(undefined4 *)(lVar5 + 0x358);
  uVar21 = *(undefined4 *)(lVar5 + 0x35c);
  uVar22 = *(undefined4 *)(lVar5 + 0x360);
  uVar23 = *(undefined4 *)(lVar5 + 0x364);
  uVar24 = *(undefined8 *)(lVar5 + 0x368);
  uVar25 = *(undefined8 *)(lVar5 + 0x370);
  uVar4 = *(undefined8 *)(lVar5 + 0x378);
  lVar33 = *(longlong *)(lVar5 + 0x1b8);
  *(undefined4 *)(lVar33 + 0xd8) = *(undefined4 *)(lVar5 + 0x338);
  *(undefined4 *)(lVar33 + 0xdc) = uVar13;
  *(undefined4 *)(lVar33 + 0xe0) = uVar14;
  *(undefined4 *)(lVar33 + 0xe4) = uVar15;
  *(undefined4 *)(lVar33 + 0xe8) = uVar16;
  *(undefined4 *)(lVar33 + 0xec) = uVar17;
  *(undefined4 *)(lVar33 + 0xf0) = uVar18;
  *(undefined4 *)(lVar33 + 0xf4) = uVar19;
  *(undefined4 *)(lVar33 + 0xf8) = uVar20;
  *(undefined4 *)(lVar33 + 0xfc) = uVar21;
  *(undefined4 *)(lVar33 + 0x100) = uVar22;
  *(undefined4 *)(lVar33 + 0x104) = uVar23;
  *(undefined8 *)(lVar33 + 0x108) = uVar24;
  *(undefined8 *)(lVar33 + 0x110) = uVar25;
  *(undefined8 *)(lVar33 + 0x118) = uVar4;
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(*(longlong *)this + 0x1b8) + 8));
  *(undefined4 *)(*(longlong *)this + 0x38c) = 8;
  return;
}

// operator() @ 14329a150

void __thiscall `FCloudChunkSourceSpec::PauseFor'::__l2::<lambda_1>::operator()(void *this)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = BuildPatchServices::FStatsCollector::GetSeconds();
  fVar1 = __real_3c23d70a;
  if (dVar2 - *(double *)((longlong)this + 8) < (double)*(float *)((longlong)this + 0x10)) {
    do {
      FWindowsPlatformProcess::Sleep(fVar1);
      dVar2 = *(double *)((longlong)this + 8);
      dVar3 = BuildPatchServices::FStatsCollector::GetSeconds();
    } while (dVar3 - dVar2 < (double)*(float *)((longlong)this + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00014329a1ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)(*(longlong *)this + 0x198) + 8) + 8))
            (*(longlong *)(*(longlong *)this + 0x198) + 8,0);
  return;
}

// operator() @ 14329ab80

bool __thiscall
`FCloudChunkSourceSpec::CheckForChunkRequests'::__l4::<lambda_1>::operator()
          (void *this,FGuid *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  size_t sVar4;
  wchar_t *_Str;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  FString local_38;
  
  plVar1 = *(longlong **)this;
  lVar2 = plVar1[1];
  lVar6 = *plVar1;
  lVar5 = (longlong)(int)lVar2 * 0x50 + lVar6;
  do {
    if ((int)plVar1[1] != (int)lVar2) {
      `TCheckedPointerIterator<TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (lVar6 == lVar5) {
      return false;
    }
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    FGuid::AppendString(param_1,&local_38,Digits);
    if (local_38.Data.ArrayNum == 0) {
      _Str = L"";
LAB_14329ac12:
      sVar4 = wcslen(_Str);
      iVar3 = ::FString::Find((FString *)(lVar6 + 0x10),_Str,(int)sVar4,IgnoreCase,FromStart,-1);
    }
    else {
      _Str = (wchar_t *)local_38.Data.AllocatorInstance.Data;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14329ac12;
      iVar3 = -1;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (iVar3 != -1) {
      return true;
    }
    lVar6 = lVar6 + 0x50;
  } while( true );
}

// operator() @ 1432a7fa0

void __thiscall `FCloudChunkSourceSpec::Define'::__l2::<lambda_2>::operator()(void *this)

{
  FAutomationSpecBase *pFVar1;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FAutomationSpecBase *local_20;
  undefined8 local_10;
  
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FCloudChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FCloudChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"Get");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FCloudChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FCloudChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"SetPaused");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FCloudChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FCloudChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"when a chunk download is corrupt");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FCloudChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FCloudChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"when some chunk SHA is in the manifest");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FCloudChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_5>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FCloudChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_5>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"when set up with initial download list");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1432ad520

void __thiscall `FCloudChunkSourceSpec::Define'::__l2::<lambda_3>::operator()(void *this)

{
  longlong *plVar1;
  longlong lVar2;
  FOutputDeviceRedirector *this_00;
  undefined8 *puVar3;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  BuildPatchServices::FFakeDownloadService::StopService
            (*(FFakeDownloadService **)(*(longlong *)this + 0x1b8));
  puVar3 = *(undefined8 **)(*(longlong *)this + 0x198);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x198) = 0;
    (**(code **)*puVar3)();
  }
  puVar3 = *(undefined8 **)(*(longlong *)this + 0x208);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x208) = 0;
    if ((void *)puVar3[6] != (void *)0x0) {
      FMemory::Free((void *)puVar3[6]);
    }
    if ((void *)puVar3[4] != (void *)0x0) {
      FMemory::Free((void *)puVar3[4]);
    }
    DestructItems<FString,int>((FString *)*puVar3,*(int *)(puVar3 + 1));
    if ((void *)*puVar3 != (void *)0x0) {
      FMemory::Free((void *)*puVar3);
    }
    ::operator_delete(puVar3,0x60);
  }
  puVar3 = *(undefined8 **)(*(longlong *)this + 0x1b0);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x1b0) = 0;
    (**(code **)*puVar3)();
  }
  puVar3 = *(undefined8 **)(*(longlong *)this + 0x1b8);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x1b8) = 0;
    (**(code **)*puVar3)();
  }
  puVar3 = *(undefined8 **)(*(longlong *)this + 0x1c0);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x1c0) = 0;
    (**(code **)*puVar3)();
  }
  puVar3 = *(undefined8 **)(*(longlong *)this + 0x1c8);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x1c8) = 0;
    (**(code **)*puVar3)();
  }
  puVar3 = *(undefined8 **)(*(longlong *)this + 0x1d0);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x1d0) = 0;
    (**(code **)*puVar3)();
  }
  plVar1 = *(longlong **)(*(longlong *)this + 0x1d8);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x1d8) = 0;
    (**(code **)(*plVar1 + 8))();
  }
  puVar3 = *(undefined8 **)(*(longlong *)this + 0x1e0);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x1e0) = 0;
    (**(code **)*puVar3)();
  }
  puVar3 = *(undefined8 **)(*(longlong *)this + 0x1e8);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x1e8) = 0;
    (**(code **)*puVar3)();
  }
  puVar3 = *(undefined8 **)(*(longlong *)this + 0x200);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x200) = 0;
    (**(code **)*puVar3)();
  }
  lVar2 = *(longlong *)this;
  puVar3 = (undefined8 *)(lVar2 + 0x1f0);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (puVar3 != &local_18) {
    *puVar3 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar2 + 0x1f8),&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  this_00 = GetGlobalLogSingleton();
  FOutputDeviceRedirector::FlushThreadedLogs(this_00,None);
  return;
}

// CheckForChunkRequests @ 1432c4980

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TArray<FGuid,TSizedDefaultAllocator<32>_> * __thiscall
FCloudChunkSourceSpec::CheckForChunkRequests
          (FCloudChunkSourceSpec *this,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1,float param_2)

{
  int iVar1;
  FFakeDownloadService *pFVar2;
  TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
  *pTVar3;
  FGuid *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  ForAnyElementType *local_res18;
  ForAnyElementType local_68;
  undefined8 local_60;
  
  dVar12 = BuildPatchServices::FStatsCollector::GetSeconds();
  local_res18 = &local_68;
  do {
    iVar11 = 0;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)&((this->FakeDownloadService).Ptr)->_padding_);
    pFVar2 = (this->FakeDownloadService).Ptr;
    plVar10 = &pFVar2->_padding_;
    if (&local_68 != (ForAnyElementType *)plVar10) {
      DestructItems<TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>,int>
                ((TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
                  *)local_68.Data,(int)local_60);
      iVar1 = (int)pFVar2->_padding_;
      pTVar3 = (TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
                *)*plVar10;
      local_60 = CONCAT44(local_60._4_4_,iVar1);
      if ((iVar1 == 0) && (local_60._4_4_ == 0)) {
        local_60 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,iVar1,local_60._4_4_,&local_68,iVar1,(int *)((longlong)&local_60 + 4));
        ConstructItems<TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>,TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>,int>
                  (local_68.Data,pTVar3,iVar1);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&((this->FakeDownloadService).Ptr)->_padding_);
    iVar1 = param_1->ArrayNum;
    if (iVar1 != 0) {
      pFVar4 = (FGuid *)(param_1->AllocatorInstance).Data;
      bVar7 = `FCloudChunkSourceSpec::CheckForChunkRequests'::__l4::<lambda_1>::operator()
                        (&local_res18,pFVar4);
      bVar7 = !bVar7;
      iVar9 = iVar11;
      do {
        iVar6 = iVar9;
        do {
          iVar6 = iVar6 + 1;
          if (iVar1 <= iVar6) break;
          bVar8 = `FCloudChunkSourceSpec::CheckForChunkRequests'::__l4::<lambda_1>::operator()
                            (&local_res18,pFVar4 + iVar6);
        } while (bVar7 == !bVar8);
        if (bVar7 != false) {
          if (iVar11 != iVar9) {
            memmove(pFVar4 + iVar11,pFVar4 + iVar9,(longlong)(iVar6 - iVar9) << 4);
          }
          iVar11 = iVar11 + (iVar6 - iVar9);
        }
        bVar7 = (bool)(bVar7 ^ 1);
        iVar9 = iVar6;
      } while (iVar6 < iVar1);
      param_1->ArrayNum = iVar11;
    }
    dVar13 = BuildPatchServices::FStatsCollector::GetSeconds();
    if ((param_1->ArrayNum < 1) || ((double)param_2 <= dVar13 - dVar12)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    FWindowsPlatformProcess::Sleep(0.0);
    DestructItems<TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>,int>
              ((TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
                *)local_68.Data,(int)local_60);
    if ((TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
         *)local_68.Data !=
        (TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
         *)0x0) {
      FMemory::Free(local_68.Data);
    }
    if (!bVar7) {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
      (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = param_1->ArrayNum;
      __return_storage_ptr__->ArrayMax = param_1->ArrayMax;
      param_1->ArrayNum = 0;
      param_1->ArrayMax = 0;
      pFVar5 = (param_1->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// GetAllChunks @ 1432d3360

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TArray<FGuid,TSizedDefaultAllocator<32>_> * __thiscall
FCloudChunkSourceSpec::GetAllChunks
          (FCloudChunkSourceSpec *this,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  ICloudChunkSource *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = param_1->ArrayNum;
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar11 = pFVar10 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == pFVar11) break;
    pIVar2 = (this->CloudChunkSource).Ptr;
    lVar8 = (**(code **)(*(longlong *)pIVar2 + 8))(pIVar2,pFVar10);
    if (lVar8 != 0) {
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar3 <= pFVar10) &&
         (pFVar10 < pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      uVar5 = *(undefined8 *)(pFVar10 + 8);
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(undefined8 *)pFVar3 = *(undefined8 *)pFVar10;
      *(undefined8 *)(pFVar3 + 8) = uVar5;
    }
    pFVar10 = pFVar10 + 0x10;
  }
  pFVar10 = (param_1->AllocatorInstance).Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  return __return_storage_ptr__;
}

// MakeUnit @ 1432ddba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FCloudChunkSourceSpec::MakeUnit
          (FCloudChunkSourceSpec *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1)

{
  uint uVar1;
  IBuildManifestSet *pIVar2;
  FMockCloudChunkSourceStat *pFVar3;
  FFakeChunkStore *pFVar4;
  FFakeInstallerError *pFVar5;
  IMessagePump *pIVar6;
  FFakeChunkDataSerialization *pFVar7;
  FFakeChunkReferenceTracker *pFVar8;
  FFakeDownloadService *pFVar9;
  IPlatform *pIVar10;
  ICloudChunkSource *pIVar11;
  ForElementType<FSetElementId> FVar12;
  FMockDownloadConnectionCount *pFVar13;
  FMockDownloadConnectionCount *pFVar14;
  FCloudSourceConfig *pFVar15;
  ICloudChunkSource *pIVar16;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_e8;
  FCloudSourceConfig local_98;
  
  pFVar13 = ::operator_new(0x10);
  pFVar14 = (FMockDownloadConnectionCount *)0x0;
  if (pFVar13 != (FMockDownloadConnectionCount *)0x0) {
    uVar1 = this->ForceConnectionCount;
    pFVar13->_padding_ = (longlong)&___7FMockDownloadConnectionCount_BuildPatchServices__6B_;
    pFVar13->Count = uVar1;
    pFVar14 = pFVar13;
  }
  pFVar13 = (this->MockConnectionCount).Ptr;
  if ((pFVar13 != pFVar14) &&
     ((this->MockConnectionCount).Ptr = pFVar14, pFVar13 != (FMockDownloadConnectionCount *)0x0)) {
    (**(code **)(pFVar13->_padding_ + 8))(pFVar13,1);
  }
  local_e8.Elements._0_8_ = 0;
  local_e8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_e8.Elements._48_8_ = _UNK_150631d98;
  local_e8.Elements._8_8_ = 0;
  local_e8.Elements._32_8_ = 0;
  local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8.HashSize = 0;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=(&local_e8,param_1);
  pIVar2 = (this->ManifestSet).Ptr;
  pFVar3 = (this->MockCloudChunkSourceStat).Ptr;
  pFVar14 = (this->MockConnectionCount).Ptr;
  pFVar4 = (this->FakeChunkStore).Ptr;
  pFVar5 = (this->MockInstallerError).Ptr;
  pIVar6 = (IMessagePump *)(this->MockMessagePump).Ptr;
  pFVar7 = (this->FakeChunkDataSerialization).Ptr;
  pFVar8 = (this->MockChunkReferenceTracker).Ptr;
  pFVar9 = (this->FakeDownloadService).Ptr;
  pIVar10 = (IPlatform *)(this->MockPlatform).Ptr;
  pFVar15 = BuildPatchServices::FCloudSourceConfig::FCloudSourceConfig
                      (&local_98,(this->CloudSourceConfig).Ptr);
  pIVar16 = BuildPatchServices::FCloudChunkSourceFactory::Create
                      (pFVar15,pIVar10,(IChunkStore *)pFVar4,(IDownloadService *)pFVar9,
                       (IChunkReferenceTracker *)pFVar8,(IChunkDataSerialization *)pFVar7,pIVar6,
                       (IInstallerError *)pFVar5,(IDownloadConnectionCount *)pFVar14,
                       (ICloudChunkSourceStat *)pFVar3,pIVar2,&local_e8);
  pIVar11 = (this->CloudChunkSource).Ptr;
  if ((pIVar11 != pIVar16) &&
     ((this->CloudChunkSource).Ptr = pIVar16, pIVar11 != (ICloudChunkSource *)0x0)) {
    (*(code *)**(undefined8 **)pIVar11)(pIVar11,1);
  }
  param_1->HashSize = 0;
  FVar12 = (param_1->Hash).SecondaryData;
  if (FVar12 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar12);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&param_1->Elements);
  return;
}

// PauseFor @ 1432e1390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TFuture<void> * __thiscall
FCloudChunkSourceSpec::PauseFor
          (FCloudChunkSourceSpec *this,TFuture<void> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  undefined1 *puVar2;
  code **ppcVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auStack_b8 [32];
  FCloudChunkSourceSpec *local_98 [5];
  undefined8 local_70;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  fVar5 = param_1 * this->PausePadding;
  dVar1 = BuildPatchServices::FStatsCollector::GetSeconds();
  uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
  puVar2 = &((this->CloudChunkSource).Ptr)->field_0x8;
  (**(code **)(*(longlong *)puVar2 + 8))(puVar2,1);
  local_68[0] = (code *)0x0;
  local_98[0] = this;
  local_40 = FMemory::Malloc(0x20,8);
  local_70 = 0;
  *local_40 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FCloudChunkSourceSpec::PauseFor'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  *(undefined4 *)(local_40 + 1) = local_98[0]._0_4_;
  *(undefined4 *)((longlong)local_40 + 0xc) = local_98[0]._4_4_;
  *(int *)(local_40 + 2) = SUB84(dVar1,0);
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar4;
  local_98[0] = (FCloudChunkSourceSpec *)0x0;
  local_40[3] = (code *)CONCAT44(local_98[2]._4_4_,fVar5);
  if (local_40 + 1 != (code **)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FCloudChunkSourceSpec::PauseFor'::__l2::<lambda_1>,void>::Call
    ;
  }
  local_98[2]._0_4_ = fVar5;
  local_98[1]._0_4_ = SUB84(dVar1,0);
  local_98[1]._4_4_ = uVar4;
  Async<TFunction<void___cdecl(void)>_>
            (__return_storage_ptr__,Thread,(TFunction<void___cdecl(void)> *)local_68,
             (TUniqueFunction<void___cdecl(void)> *)local_98);
  if (local_68[0] != (code *)0x0) {
    ppcVar3 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar3 = local_40;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  return __return_storage_ptr__;
}

