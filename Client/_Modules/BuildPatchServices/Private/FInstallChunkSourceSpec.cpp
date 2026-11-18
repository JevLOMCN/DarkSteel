// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 14

// GetTestFlags @ 1432f7a20

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

EAutomationTestFlags __thiscall FInstallChunkSourceSpec::GetTestFlags(FInstallChunkSourceSpec *this)

{
  return ProductFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// GetTestSourceFileName @ 1432f7a30

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall
FInstallChunkSourceSpec::GetTestSourceFileName
          (FInstallChunkSourceSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Tests\\Unit\\InstallChunkSource.spec.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1432f7a60

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

int __thiscall FInstallChunkSourceSpec::GetTestSourceFileLine(FInstallChunkSourceSpec *this)

{
  return 0x16;
}

// GetBeautifiedTestName @ 1432f7a70

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall
FInstallChunkSourceSpec::GetBeautifiedTestName
          (FInstallChunkSourceSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"BuildPatchServices.Unit");
  return __return_storage_ptr__;
}

// Define @ 1432f7aa0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FInstallChunkSourceSpec::Define(FInstallChunkSourceSpec *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  ForAnyElementType local_48;
  code *local_38 [2];
  undefined **local_28;
  FInstallChunkSourceSpec *local_20;
  undefined8 local_10;
  
  FRollingHashConst::Init();
  pFVar4 = FGuid::NewGuid((FGuid *)&local_48);
  local_10 = 0;
  uVar1 = pFVar4->B;
  uVar2 = pFVar4->C;
  uVar3 = pFVar4->D;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FInstallChunkSourceSpec::Define'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FInstallChunkSourceSpec::Define'::__l2::<lambda_1>,void>::Call;
  (this->SomeChunk).A = pFVar4->A;
  (this->SomeChunk).B = uVar1;
  (this->SomeChunk).C = uVar2;
  (this->SomeChunk).D = uVar3;
  local_20 = this;
  FAutomationSpecBase::BeforeEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FInstallChunkSourceSpec::Define'::`2'::<lambda_2>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FInstallChunkSourceSpec::Define'::__l2::<lambda_2>,void>::Call;
  local_20 = this;
  ::FString::FString((FString *)&local_48,"InstallChunkSource");
  FAutomationSpecBase::Describe
            ((FAutomationSpecBase *)this,(FString *)&local_48,
             (TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FInstallChunkSourceSpec::Define'::`2'::<lambda_3>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FInstallChunkSourceSpec::Define'::__l2::<lambda_3>,void>::Call;
  local_20 = this;
  FAutomationSpecBase::AfterEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// ~FInstallChunkSourceSpec @ 1432fd5c0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FInstallChunkSourceSpec::~FInstallChunkSourceSpec(FInstallChunkSourceSpec *this)

{
  FScriptContainerElement *pFVar1;
  IBuildManifestSet *pIVar2;
  ForElementType<FSetElementId> FVar3;
  void *pvVar4;
  FMockInstallChunkSourceStat *pFVar5;
  FFakeFileSystem *pFVar6;
  IConstructorInstallChunkSource *pIVar7;
  
  pFVar1 = (this->ReadDestination).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->ManifestSet).Ptr;
  if (pIVar2 != (IBuildManifestSet *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  (this->SomeAvailableChunks).HashSize = 0;
  FVar3 = (this->SomeAvailableChunks).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SomeAvailableChunks).Elements);
  *(undefined4 *)&(this->InstallationSources).field_0x48 = 0;
  pvVar4 = *(void **)&(this->InstallationSources).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InstallationSources);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MockManifest).SharedReferenceCount.ReferenceController);
  pFVar5 = (this->MockInstallChunkSourceStat).Ptr;
  if (pFVar5 != (FMockInstallChunkSourceStat *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  pFVar6 = (this->FakeFileSystem).Ptr;
  if (pFVar6 != (FFakeFileSystem *)0x0) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
  pIVar7 = (this->InstallChunkSource).Ptr;
  if (pIVar7 != (IConstructorInstallChunkSource *)0x0) {
    (**(code **)*pIVar7)(pIVar7,1);
  }
  FAutomationSpecBase::~FAutomationSpecBase((FAutomationSpecBase *)this);
  return;
}

// operator() @ 1433038c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall `FInstallChunkSourceSpec::Define'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  IBuildManifest *pIVar3;
  IBuildManifestSet *pIVar4;
  code *pcVar5;
  bool bVar6;
  FFakeFileSystem *this_00;
  FMockManifest *pFVar7;
  FMockManifest *pFVar8;
  FMockManifest *pFVar9;
  FInstallerAction *pFVar10;
  IBuildManifestSet *pIVar11;
  undefined1 auStackY_308 [32];
  TArray<BuildPatchServices::FBuildPatchInstallerAction,TSizedDefaultAllocator<32>_> local_2c8;
  TRawPtrProxy<BuildPatchServices::FMockManifest> local_2b8;
  FString local_2b0;
  FString local_2a0;
  TSharedRef<IBuildManifest,1> local_290;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_280;
  FInstallerAction local_228;
  FBuildPatchInstallerAction local_188;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_308;
  lVar1 = *(longlong *)this;
  this_00 = ::operator_new(0x220);
  pFVar9 = (FMockManifest *)0x0;
  pFVar7 = pFVar9;
  if (this_00 != (FFakeFileSystem *)0x0) {
    memset(this_00,0,0x220);
    pFVar7 = (FMockManifest *)BuildPatchServices::FFakeFileSystem::FFakeFileSystem(this_00);
  }
  pFVar8 = *(FMockManifest **)(lVar1 + 0x1a8);
  if ((pFVar8 != pFVar7) &&
     (*(FMockManifest **)(lVar1 + 0x1a8) = pFVar7, pFVar8 != (FMockManifest *)0x0)) {
    (**(code **)pFVar8->_padding_)();
  }
  lVar1 = *(longlong *)this;
  pFVar8 = ::operator_new(0x90);
  pFVar7 = pFVar9;
  if (pFVar8 != (FMockManifest *)0x0) {
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = (longlong)&___7FMockInstallChunkSourceStat_BuildPatchServices__6B_;
    pFVar7 = pFVar8;
  }
  pFVar8 = *(FMockManifest **)(lVar1 + 0x1b0);
  if ((pFVar8 != pFVar7) &&
     (*(FMockManifest **)(lVar1 + 0x1b0) = pFVar7, pFVar8 != (FMockManifest *)0x0)) {
    (**(code **)pFVar8->_padding_)();
  }
  pFVar7 = ::operator_new(0x768);
  if (pFVar7 != (FMockManifest *)0x0) {
    memset(pFVar7,0,0x768);
    pFVar9 = BuildPatchServices::FMockManifest::FMockManifest(pFVar7);
  }
  local_2b8.Object = pFVar9;
  TSharedPtr<BuildPatchServices::FMockManifest,1>::operator=<BuildPatchServices::FMockManifest>
            ((TSharedPtr<BuildPatchServices::FMockManifest,1> *)(*(longlong *)this + 0x1b8),
             &local_2b8);
  lVar1 = *(longlong *)this;
  local_280.Elements._16_8_ = 0;
  local_280.Elements._24_8_ = 0;
  local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_280.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_280.Elements._48_8_ = _UNK_150631d98;
  local_2b0.Data.ArrayNum = 0;
  local_2b0.Data.ArrayMax = 0;
  local_2a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a0.Data.ArrayNum = 0;
  local_2a0.Data.ArrayMax = 0;
  local_280.Hash.InlineData[0] = '\0';
  local_280.Hash.InlineData[1] = '\0';
  local_280.Hash.InlineData[2] = '\0';
  local_280.Hash.InlineData[3] = '\0';
  local_280.Hash._padding_ = 0;
  local_280.HashSize = 0;
  local_280._76_4_ = 0;
  local_280.Elements._0_8_ = 0;
  local_280.Elements._8_8_ = 0;
  local_280.Elements._32_8_ = 0;
  local_280.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  if ((*(longlong *)(lVar1 + 0x1b8) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x1c0);
  pIVar3 = *(IBuildManifest **)(lVar1 + 0x1b8);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pIVar3 == (IBuildManifest *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_290.Object = pIVar3;
  local_290.SharedReferenceCount.ReferenceController = pTVar2;
  pFVar10 = BuildPatchServices::FInstallerAction::MakeInstall
                      (&local_228,&local_290,&local_280,&local_2a0,&local_2b0);
  BuildPatchServices::FBuildPatchInstallerAction::FBuildPatchInstallerAction(&local_188,pFVar10);
  local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x158,8,1,0,&local_2c8.AllocatorInstance,1,&local_2c8.ArrayMax);
  ConstructItems<BuildPatchServices::FBuildPatchInstallerAction,BuildPatchServices::FBuildPatchInstallerAction,int>
            (local_2c8.AllocatorInstance.Data,&local_188,1);
  pIVar11 = BuildPatchServices::FBuildManifestSetFactory::Create(&local_2c8);
  pIVar4 = *(IBuildManifestSet **)(lVar1 + 0x278);
  if ((pIVar4 != pIVar11) &&
     (*(IBuildManifestSet **)(lVar1 + 0x278) = pIVar11, pIVar4 != (IBuildManifestSet *)0x0)) {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  local_188.TaggedFiles.HashSize = 0;
  if (local_188.TaggedFiles.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_188.TaggedFiles.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_188.TaggedFiles.Elements);
  local_188.InstallTags.HashSize = 0;
  if (local_188.InstallTags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_188.InstallTags.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_188.InstallTags.Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.InstallManifest.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.CurrentManifest.SharedReferenceCount.ReferenceController);
  BuildPatchServices::FInstallerAction::~FInstallerAction(&local_188.InstallerAction);
  if (local_228.CloudSubdirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.CloudSubdirectory.Data.AllocatorInstance.Data);
  }
  if (local_228.InstallSubdirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.InstallSubdirectory.Data.AllocatorInstance.Data);
  }
  local_228.InstallTags.HashSize = 0;
  if (local_228.InstallTags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_228.InstallTags.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_228.InstallTags.Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_228.InstallManifest.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_228.CurrentManifest.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_290.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// operator() @ 14330e0f0

void __thiscall `FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()(void *this)

{
  FAutomationSpecBase *pFVar1;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FAutomationSpecBase *local_20;
  undefined8 local_10;
  
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FInstallChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"GetAvailableChunks");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FInstallChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"Get");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 143311330

void __thiscall `FInstallChunkSourceSpec::Define'::__l2::<lambda_3>::operator()(void *this)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  puVar2 = *(undefined8 **)(*(longlong *)this + 0x1a8);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x1a8) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(*(longlong *)this + 0x1b0);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x1b0) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(*(longlong *)this + 0x278);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x278) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  lVar1 = *(longlong *)this;
  puVar2 = (undefined8 *)(lVar1 + 0x1b8);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (puVar2 != &local_18) {
    *puVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar1 + 0x1c0),&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>,FDefaultSetAllocator>
           *)(*(longlong *)this + 0x1c8));
  lVar1 = *(longlong *)this;
  if (*(int *)(lVar1 + 0x220) != *(int *)(lVar1 + 0x24c)) {
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::UnhashElements
              ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(lVar1 + 0x218));
    *(undefined4 *)(lVar1 + 0x220) = 0;
    if (*(int *)(lVar1 + 0x224) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,(ForAnyElementType *)(lVar1 + 0x218),0,(int *)(lVar1 + 0x224));
    }
    *(undefined4 *)(lVar1 + 0x248) = 0xffffffff;
    *(undefined4 *)(lVar1 + 0x24c) = 0;
    *(undefined4 *)(lVar1 + 0x240) = 0;
  }
  return;
}

// InventUsableChunkData @ 1433214f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FInstallChunkSourceSpec::InventUsableChunkData(FInstallChunkSourceSpec *this)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FGuid *pFVar4;
  FFakeFileSystem *pFVar5;
  FFileManifest *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ForAnyElementType FVar10;
  TSharedRef<FBuildPatchAppManifest,1> *pTVar11;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *this_00;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  FGuid *pFVar17;
  FMockManifest *pFVar18;
  FMockManifest *pFVar19;
  FMockManifest *this_01;
  TReferenceControllerBase<1> *pTVar20;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar21;
  FScriptContainerElement *pFVar22;
  ulong64 uVar23;
  TReferenceControllerBase<1> *pTVar24;
  wchar_t *pwVar25;
  int iVar26;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  longlong lVar30;
  int iVar31;
  FMockManifest *pFVar32;
  undefined1 auStackY_2c8 [32];
  uint local_274;
  uint local_270;
  uint local_26c;
  FString local_268;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_258;
  int local_248;
  FInstallChunkSourceSpec *local_240;
  FString local_238;
  FScriptContainerElement *local_228;
  FMockManifest *local_220;
  FMockManifest *local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  undefined1 local_1e8 [8];
  TPairInitializer<FString_&&,TSharedRef<FBuildPatchAppManifest,1>_&&> local_1e0;
  ulong64 local_1d0;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_1c8;
  TPairInitializer<FString_&&,TSharedRef<FBuildPatchAppManifest,1>_&&> local_1c0;
  undefined1 local_1b0 [8];
  FMockManifest *local_1a8;
  TReferenceControllerBase<1> *local_1a0;
  FMockManifest *local_198;
  TReferenceControllerBase<1> *local_190;
  FString local_188;
  FString *local_178;
  FMockManifest **local_170;
  FString local_168;
  FString *local_158;
  FMockManifest **local_150;
  FString local_148;
  FFileManifest *local_138;
  ulong64 *local_130;
  FFileManifest *local_128;
  FSHAHash *local_120;
  FScriptContainerElement *local_118;
  FChunkInfo *local_110;
  FGuid local_108;
  FFileManifest local_f8;
  uchar local_98 [32];
  FChunkInfo local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_240 = this;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->ReadDestination,this->TestChunkSize,Default);
  lVar30 = 100;
  do {
    if (((this->MockManifest).Object == (FMockManifest *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar19 = (this->MockManifest).Object;
    pTVar27 = &pFVar19->DataList;
    pFVar17 = FGuid::NewGuid(&local_108);
    pFVar4 = (FGuid *)(pTVar27->AllocatorInstance).Data;
    if (((pFVar4 <= pFVar17) && (pFVar17 < pFVar4 + (pFVar19->DataList).ArrayMax)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar13 = (pFVar19->DataList).ArrayNum;
    piVar1 = &(pFVar19->DataList).ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&pTVar27->AllocatorInstance,piVar1);
    }
    (pFVar19->DataList).ArrayNum = iVar13 + 1;
    uVar8 = *(undefined8 *)&pFVar17->C;
    pFVar28 = (pTVar27->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
    *(undefined8 *)pFVar28 = *(undefined8 *)pFVar17;
    *(undefined8 *)(pFVar28 + 8) = uVar8;
    lVar30 = lVar30 + -1;
  } while (lVar30 != 0);
  pFVar32 = (FMockManifest *)0x0;
  local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.ArrayNum = 0;
  local_258.ArrayMax = 0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_258,this->TestChunkSize,Default);
  pFVar18 = ::operator_new(0x768);
  pFVar19 = pFVar32;
  if (pFVar18 != (FMockManifest *)0x0) {
    memset(pFVar18,0,0x768);
    pFVar19 = BuildPatchServices::FMockManifest::FMockManifest(pFVar18);
  }
  local_218 = pFVar19;
  this_01 = ::operator_new(0x768);
  pFVar18 = pFVar32;
  if (this_01 != (FMockManifest *)0x0) {
    memset(this_01,0,0x768);
    pFVar18 = BuildPatchServices::FMockManifest::FMockManifest(this_01);
  }
  local_220 = pFVar18;
  local_1a8 = pFVar19;
  local_1a0 = ::operator_new(0x18);
  if (local_1a0 != (TReferenceControllerBase<1> *)0x0) {
    local_1a0->SharedReferenceCount = (atomic<int>)0x1;
    local_1a0->WeakReferenceCount = (atomic<int>)0x1;
    local_1a0->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMockManifest_BuildPatchServices__U__DefaultDeleter_VFMockManifest_BuildPatchServices___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    local_1a0[1]._padding_ = (longlong)pFVar19;
  }
  if ((pFVar19 == (FMockManifest *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InRawPtrProxy.Object != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0xe3,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ::FString::FString(&local_168,L"LocationA/");
  local_178 = &local_168;
  local_170 = &local_1a8;
  TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TSharedRef<FBuildPatchAppManifest,1>_&&>_>
            ((TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>,FDefaultSetAllocator>
              *)&this->InstallationSources,&local_1e0,(bool *)&local_178);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a0);
  local_198 = pFVar18;
  pTVar20 = ::operator_new(0x18);
  pTVar24 = (TReferenceControllerBase<1> *)0x0;
  local_190 = pTVar24;
  if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
    pTVar20->SharedReferenceCount = (atomic<int>)0x1;
    pTVar20->WeakReferenceCount = (atomic<int>)0x1;
    pTVar20->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMockManifest_BuildPatchServices__U__DefaultDeleter_VFMockManifest_BuildPatchServices___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar20[1]._padding_ = (longlong)pFVar18;
    local_190 = pTVar20;
  }
  if ((pFVar18 == (FMockManifest *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InRawPtrProxy.Object != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0xe3,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ::FString::FString(&local_148,L"LocationB/");
  local_158 = &local_148;
  local_150 = &local_198;
  TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TSharedRef<FBuildPatchAppManifest,1>_&&>_>
            ((TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>,FDefaultSetAllocator>
              *)&this->InstallationSources,&local_1c0,(bool *)&local_158);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_190);
  local_200 = 0;
  local_270 = 0;
  local_26c = 0;
  pTVar20 = pTVar24;
  do {
    lVar30 = local_200;
    pwVar25 = L"LocationA/";
    pFVar19 = local_218;
    if ((int)pTVar24 != 0) {
      pwVar25 = L"LocationB/";
      pFVar19 = pFVar18;
    }
    local_1e0.Value = (TSharedRef<FBuildPatchAppManifest,1> *)pFVar19;
    ::FString::FString(&local_188,pwVar25);
    local_1c0.Value = (TSharedRef<FBuildPatchAppManifest,1> *)&pFVar19->ChunksRequiredForFiles;
    local_210 = 0;
    local_1c8 = &pFVar19->ProducibleChunks;
    local_274 = (uint)pTVar20;
    do {
      this_00 = local_1c8;
      local_208 = lVar30;
      if (((this->MockManifest).Object == (FMockManifest *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar19 = (this->MockManifest).Object;
      uVar14 = 0;
      if ((int)(uint)pTVar20 < (pFVar19->DataList).ArrayNum) {
        uVar14 = ~(uint)pTVar20 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar28 = (pFVar19->DataList).AllocatorInstance.Data + lVar30;
      local_228 = pFVar28;
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (&this->SomeAvailableChunks,(FGuid *)local_1b0,(bool *)pFVar28);
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (this_00,(FGuid *)local_1f8,(bool *)pFVar28);
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_1c0.Value,
                 (FGuid *)(local_1f8 + 4),(bool *)pFVar28);
      if (((this->MockManifest).Object == (FMockManifest *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (&((this->MockManifest).Object)->ChunksRequiredForFiles,(FGuid *)local_1f0,
                 (bool *)pFVar28);
      if (((this->TestChunkSize & 3) != 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(TestChunkSize % 4) == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Tests\\Unit\\InstallChunkSource.spec.cpp"
                              ,0x17d,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar31 = 0;
      iVar13 = iVar31;
      do {
        BuildPatchServices::FFileManifest::FFileManifest(&local_f8);
        ::FString::PrintfImpl(&local_238,L"File%d.dat");
        if (local_f8.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Filename.Data.AllocatorInstance.Data);
        }
        local_f8.Filename.Data.AllocatorInstance.Data = local_238.Data.AllocatorInstance.Data;
        local_f8.Filename.Data.ArrayNum = local_238.Data.ArrayNum;
        local_f8.Filename.Data.ArrayMax = local_238.Data.ArrayMax;
        local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_238.Data.ArrayNum = 0;
        local_238.Data.ArrayMax = 0;
        if (local_f8.ChunkParts.ArrayNum == local_f8.ChunkParts.ArrayMax) {
          local_f8.ChunkParts.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,&local_f8.ChunkParts.AllocatorInstance,&local_f8.ChunkParts.ArrayMax
                         );
        }
        pFVar3 = local_f8.ChunkParts.AllocatorInstance.Data +
                 (longlong)local_f8.ChunkParts.ArrayNum * 0x18;
        local_f8.ChunkParts.ArrayNum = local_f8.ChunkParts.ArrayNum + 1;
        DefaultConstructItems<BuildPatchServices::FChunkPart,int>(pFVar3,1);
        FVar10.Data = local_188.Data.AllocatorInstance.Data;
        uVar8 = *(undefined8 *)pFVar28;
        uVar9 = *(undefined8 *)(pFVar28 + 8);
        *(int *)(pFVar3 + 0x10) = iVar13;
        *(undefined8 *)pFVar3 = uVar8;
        *(undefined8 *)(pFVar3 + 8) = uVar9;
        uVar14 = this->TestChunkSize >> 2;
        local_248 = iVar13 + uVar14;
        *(uint *)(pFVar3 + 0x14) = uVar14;
        local_f8.FileSize = (ulong64)(this->TestChunkSize >> 2);
        pFVar5 = (this->FakeFileSystem).Ptr;
        iVar13 = local_f8.Filename.Data.ArrayNum + -1;
        if (local_f8.Filename.Data.ArrayNum == 0) {
          iVar13 = 0;
        }
        iVar26 = local_188.Data.ArrayNum;
        if ((iVar26 != 0) || (iVar15 = 2, iVar13 == -1)) {
          iVar15 = 1;
        }
        local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_268.Data.ArrayNum = iVar26;
        if ((iVar26 == 0) && (iVar13 + iVar15 == 0)) {
          local_268.Data.ArrayMax = 0;
        }
        else {
          uVar14 = iVar13 + iVar15 + iVar26;
          if ((int)uVar14 < iVar26) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar14,0,(ForAnyElementType *)&local_268,iVar26,&local_268.Data.ArrayMax);
          if (iVar26 != 0) {
            memcpy(local_268.Data.AllocatorInstance.Data,FVar10.Data,(longlong)iVar26 * 2);
          }
        }
        ::FString::PathAppend
                  (&local_268,(wchar_t *)local_f8.Filename.Data.AllocatorInstance.Data,iVar13);
        iVar13 = local_268.Data.ArrayNum + -1;
        FVar10.Data = local_268.Data.AllocatorInstance.Data;
        if (local_268.Data.ArrayNum == 0) {
          iVar13 = 0;
          FVar10.Data = (FScriptContainerElement *)L"";
        }
        uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar10.Data);
        pTVar21 = TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<FString>
                            ((TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
                              *)&pFVar5->DiskData,uVar14,&local_268);
        if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_268.Data.AllocatorInstance.Data);
        }
        iVar13 = pTVar21->ArrayNum;
        piVar1 = &pTVar21->ArrayNum;
        uVar14 = *(uint *)(pFVar3 + 0x14);
        if (iVar13 < (int)uVar14) {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar14 - iVar13,&pTVar21->AllocatorInstance,piVar1,&pTVar21->ArrayMax);
        }
        else {
          if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
          }
          if ((int)uVar14 < iVar13) {
            uVar29 = iVar13 - uVar14;
            if (((int)(uVar29 | uVar14) < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (uVar29 != 0) {
              pFVar28 = (pTVar21->AllocatorInstance).Data + (int)uVar14;
              iVar13 = (*piVar1 - uVar14) - uVar29;
              if (iVar13 != 0) {
                memmove(pFVar28,pFVar28 + (int)uVar29,(longlong)iVar13);
              }
              *piVar1 = *piVar1 - uVar29;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,&pTVar21->AllocatorInstance,*piVar1,&pTVar21->ArrayMax);
            }
          }
        }
        pFVar28 = (pTVar21->AllocatorInstance).Data;
        iVar13 = 0;
        pFVar22 = pFVar28;
        if (-1 < *piVar1 + -4) {
          do {
            iVar13 = iVar13 + 4;
            uVar14 = (int)pFVar32 * 0xbb38435 + 0x3619636b;
            pFVar32 = (FMockManifest *)(ulonglong)uVar14;
            *(uint *)pFVar22 = uVar14;
            pFVar22 = pFVar22 + 4;
          } while (iVar13 <= *piVar1 + -4);
        }
        FSHA1::HashBuffer(pFVar28,local_f8.FileSize,local_f8.FileHash.Hash);
        uVar14 = *(uint *)(pFVar3 + 0x10);
        uVar29 = *(uint *)(pFVar3 + 0x14);
        uVar16 = 0;
        if ((int)uVar14 < local_258.ArrayNum) {
          uVar16 = ~uVar14 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        memcpy(local_258.AllocatorInstance.Data + (int)uVar14,pFVar28,(ulonglong)uVar29);
        pTVar11 = local_1e0.Value;
        pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)local_1e0.Value + 0x330);
        pFVar6 = (FFileManifest *)(pTVar2->AllocatorInstance).Data;
        if (((pFVar6 <= &local_f8) &&
            (&local_f8 <
             (FFileManifest *)
             ((pFVar6->FileHash).Hash +
             (longlong)
             ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)local_1e0.Value + 0x330))->
             ArrayMax * 0x10 + -0x20))) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar13 = ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)pTVar11 + 0x330))->
                 ArrayNum;
        piVar1 = &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)pTVar11 + 0x330))->
                  ArrayMax;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)pTVar2,piVar1);
        }
        FVar10.Data = local_f8.Filename.Data.AllocatorInstance.Data;
        ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)pTVar11 + 0x330))->ArrayNum =
             iVar13 + 1;
        pFVar28 = (pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
        *(undefined8 *)pFVar28 = 0;
        lVar30 = (longlong)local_f8.Filename.Data.ArrayNum;
        *(int *)(pFVar28 + 8) = local_f8.Filename.Data.ArrayNum;
        if (local_f8.Filename.Data.ArrayNum == 0) {
          *(int *)(pFVar28 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_f8.Filename.Data.ArrayNum,0,(ForAnyElementType *)pFVar28,
                     local_f8.Filename.Data.ArrayNum,(int *)(pFVar28 + 0xc));
          memcpy(*(void **)pFVar28,FVar10.Data,lVar30 * 2);
        }
        local_1d0 = local_f8.FileSize;
        local_138 = &local_f8;
        local_130 = &local_1d0;
        TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,__int64_&&>_>
                  ((TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
                    *)((longlong)pTVar11 + 0x480),
                   (TPairInitializer<FString_const_&,__int64_&&> *)(local_1f0 + 4),
                   (bool *)&local_138);
        local_128 = &local_f8;
        local_120 = &local_f8.FileHash;
        TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FSHAHash_const_&>_>
                  ((TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
                    *)((longlong)pTVar11 + 0x628),
                   (TPairInitializer<FString_const_&,FSHAHash_const_&> *)local_1e8,
                   (bool *)&local_128);
        TMapBase<FString,BuildPatchServices::FFileManifest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>_>
        ::Emplace<FString_const_&,BuildPatchServices::FFileManifest>
                  ((TMapBase<FString,BuildPatchServices::FFileManifest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>_>
                    *)((longlong)pTVar11 + 0x538),&local_f8.Filename,&local_f8);
        if (local_f8.ChunkParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.ChunkParts.AllocatorInstance.Data);
        }
        DestructItems<FString,int>
                  ((FString *)local_f8.InstallTags.AllocatorInstance.Data,
                   local_f8.InstallTags.ArrayNum);
        if (local_f8.InstallTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.InstallTags.AllocatorInstance.Data);
        }
        if (local_f8.SymlinkTarget.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.SymlinkTarget.Data.AllocatorInstance.Data);
        }
        if (local_f8.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Filename.Data.AllocatorInstance.Data);
        }
        this = local_240;
        iVar31 = iVar31 + 1;
        pFVar28 = local_228;
        iVar13 = local_248;
      } while (iVar31 < 4);
      local_98[0] = '\0';
      local_98[1] = '\0';
      local_98[2] = '\0';
      local_98[3] = '\0';
      local_98[4] = '\0';
      local_98[5] = '\0';
      local_98[6] = '\0';
      local_98[7] = '\0';
      local_98[8] = '\0';
      local_98[9] = '\0';
      local_98[10] = '\0';
      local_98[0xb] = '\0';
      local_98[0xc] = '\0';
      local_98[0xd] = '\0';
      local_98[0xe] = '\0';
      local_98[0xf] = '\0';
      local_98[0x10] = '\0';
      local_98[0x11] = '\0';
      local_98[0x12] = '\0';
      local_98[0x13] = '\0';
      uVar23 = FRollingHash::GetHashForDataSet
                         ((uchar *)local_258.AllocatorInstance.Data,local_258.ArrayNum);
      FSHA1::HashBuffer(local_258.AllocatorInstance.Data,(ulonglong)this->TestChunkSize,local_98);
      BuildPatchServices::FChunkInfo::FChunkInfo(&local_78);
      local_118 = local_228;
      local_78.Guid._0_8_ = *(undefined8 *)local_228;
      local_78.Guid._8_8_ = *(undefined8 *)(local_228 + 8);
      local_78.ShaHash.Hash[0x10] = local_98[0x10];
      local_78.ShaHash.Hash[0x11] = local_98[0x11];
      local_78.ShaHash.Hash[0x12] = local_98[0x12];
      local_78.ShaHash.Hash[0x13] = local_98[0x13];
      local_78.WindowSize = this->TestChunkSize;
      local_78.FileSize = (long64)local_78.WindowSize;
      local_110 = &local_78;
      local_78.ShaHash.Hash[0] = local_98[0];
      local_78.ShaHash.Hash[1] = local_98[1];
      local_78.ShaHash.Hash[2] = local_98[2];
      local_78.ShaHash.Hash[3] = local_98[3];
      local_78.ShaHash.Hash[4] = local_98[4];
      local_78.ShaHash.Hash[5] = local_98[5];
      local_78.ShaHash.Hash[6] = local_98[6];
      local_78.ShaHash.Hash[7] = local_98[7];
      local_78.ShaHash.Hash[8] = local_98[8];
      local_78.ShaHash.Hash[9] = local_98[9];
      local_78.ShaHash.Hash[10] = local_98[10];
      local_78.ShaHash.Hash[0xb] = local_98[0xb];
      local_78.ShaHash.Hash[0xc] = local_98[0xc];
      local_78.ShaHash.Hash[0xd] = local_98[0xd];
      local_78.ShaHash.Hash[0xe] = local_98[0xe];
      local_78.ShaHash.Hash[0xf] = local_98[0xf];
      local_78.GroupNumber = '\0';
      local_78.Hash = uVar23;
      TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGuid_const_&,BuildPatchServices::FChunkInfo_const_&>_>
                ((TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>,FDefaultSetAllocator>
                  *)((longlong)pTVar11 + 0x588),
                 (TPairInitializer<FGuid_const_&,BuildPatchServices::FChunkInfo_const_&> *)
                 (local_1e8 + 4),(bool *)&local_118);
      local_210 = local_210 + 1;
      local_274 = local_274 + 1;
      pTVar20 = (TReferenceControllerBase<1> *)(ulonglong)local_274;
      lVar30 = local_208 + 0x10;
    } while (local_210 < 0x32);
    local_208 = lVar30;
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    local_270 = local_270 + 1;
    pTVar24 = (TReferenceControllerBase<1> *)(ulonglong)local_270;
    local_26c = local_26c + 0x32;
    pTVar20 = (TReferenceControllerBase<1> *)(ulonglong)local_26c;
    local_200 = local_200 + 800;
    pFVar18 = local_220;
    if (99 < (int)local_26c) {
      if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.AllocatorInstance.Data);
      }
      return;
    }
  } while( true );
}

// MakeUnit @ 1433249c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FInstallChunkSourceSpec::MakeUnit(FInstallChunkSourceSpec *this)

{
  IBuildManifestSet *pIVar1;
  IConstructorInstallChunkSource *pIVar2;
  int iVar3;
  IConstructorInstallChunkSource *pIVar4;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_3c = 0x80;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  pIVar1 = (this->ManifestSet).Ptr;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,local_68);
  pIVar4 = BuildPatchServices::IConstructorInstallChunkSource::CreateInstallSource
                     ((IFileSystem *)(this->FakeFileSystem).Ptr,
                      (IInstallChunkSourceStat *)(this->MockInstallChunkSourceStat).Ptr,
                      &this->InstallationSources,
                      (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_68);
  pIVar2 = (this->InstallChunkSource).Ptr;
  if ((pIVar2 != pIVar4) &&
     ((this->InstallChunkSource).Ptr = pIVar4, pIVar2 != (IConstructorInstallChunkSource *)0x0)) {
    (**(code **)*pIVar2)();
  }
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar3 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return;
}

// SomeChunkAvailable @ 143327420

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FInstallChunkSourceSpec::SomeChunkAvailable(FInstallChunkSourceSpec *this)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  
  iVar8 = 0;
  iVar3 = *(int *)&(this->SomeAvailableChunks).Elements.field_0x28;
  iVar10 = 0;
  iVar9 = iVar8;
  if (iVar3 != 0) {
    puVar11 = *(uint **)&(this->SomeAvailableChunks).Elements.field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)&(this->SomeAvailableChunks).Elements.field_0x10;
    }
    uVar4 = *puVar11;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar10 = iVar10 + 0x20;
      iVar8 = iVar8 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14332749a;
      uVar4 = puVar11[lVar7 + 1];
    }
    uVar2 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar9 = (int)lVar7 + -1 + iVar10;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14332749a:
  puVar1 = (undefined8 *)
           (*(longlong *)&(this->SomeAvailableChunks).Elements + (longlong)iVar9 * 0x18);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  (this->SomeChunk).A = (int)uVar5;
  (this->SomeChunk).B = (int)((ulonglong)uVar5 >> 0x20);
  (this->SomeChunk).C = (int)uVar6;
  (this->SomeChunk).D = (int)((ulonglong)uVar6 >> 0x20);
  return;
}

// SomeChunkCorrupted @ 1433274d0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FInstallChunkSourceSpec::SomeChunkCorrupted(FInstallChunkSourceSpec *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  FFakeFileSystem *pFVar3;
  code *pcVar4;
  longlong *plVar5;
  TMultiMap<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  undefined1 *puVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  void *_Src;
  undefined8 *puVar22;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_178;
  FString local_170;
  uint local_160;
  TMultiMap<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
  *local_158;
  int iStack_150;
  uint uStack_14c;
  undefined1 *local_148;
  undefined4 uStack_140;
  int iStack_13c;
  int local_138;
  int iStack_130;
  undefined4 uStack_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  longlong *local_118;
  undefined8 *local_110;
  uint *local_108;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  longlong *local_f8;
  int iStack_f0;
  uint uStack_ec;
  TBitArray<FDefaultBitArrayAllocator> *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TMultiMap<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  puVar1 = &(this->InstallationSources).field_0x10;
  iStack_150 = 0;
  iVar16 = *(int *)&(this->InstallationSources).field_0x28;
  local_158 = &this->InstallationSources;
  local_138 = 0;
  uStack_14c = 1;
  iStack_13c = 0;
  if (iVar16 != 0) {
    puVar13 = *(uint **)&(this->InstallationSources).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar14 = *puVar13;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_150;
      local_138 = local_138 + 0x20;
      iStack_150 = iStack_150 + 1;
      iStack_13c = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_150) goto LAB_14332757d;
      uVar14 = puVar13[lVar10 + 1];
    }
    uStack_14c = -uVar14 & uVar14;
    uVar11 = (ulonglong)uStack_14c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_128 = (int)lVar10;
    iStack_13c = local_138 + -1 + local_128;
    if (iVar16 < iStack_13c) {
      iStack_13c = iVar16;
    }
  }
LAB_14332757d:
  local_178 = *(uint *)&(this->InstallationSources).field_0x28;
  uVar14 = local_178 & 0xffffffe0;
  iStack_130 = *(int *)&(this->InstallationSources).field_0x8 -
               *(int *)&(this->InstallationSources).field_0x34;
  TStack_90._padding_ = CONCAT44(uStack_14c,iStack_150);
  uStack_140 = 0xffffffff;
  TStack_90.CurrentBitIndex = iStack_13c;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)local_178 >> 5;
  TStack_90._28_4_ = local_4c;
  TStack_90.BaseBitIndex = local_138;
  uStack_70 = CONCAT44(uStack_12c,iStack_130);
  local_148 = puVar1;
  local_98 = local_158;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)local_178 < 0) || (iVar16 < (int)local_178)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar15 = *(uint *)&(this->InstallationSources).field_0x28;
  if (local_178 != uVar15) {
    puVar19 = *(undefined1 **)&(this->InstallationSources).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)local_178 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar12 * 4);
    while (uVar17 == 0) {
      lVar10 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      local_178 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_1433276a1;
      uVar17 = *(uint *)(puVar19 + lVar10 * 4 + 4);
    }
    uVar11 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_124 = (int)lVar10;
    local_178 = local_124 + -1 + uVar14;
    if ((int)uVar15 < (int)local_178) {
      local_178 = uVar15;
    }
  }
LAB_1433276a1:
  do {
    pTVar6 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_90.CurrentBitIndex == local_178) &&
        (TStack_90.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->InstallationSources).field_0x10)) &&
       (pTVar6 == &this->InstallationSources)) {
      return;
    }
    iStack_f0 = 0;
    lVar10 = *(longlong *)pTVar6;
    local_d8 = 0;
    lVar2 = *(longlong *)(lVar10 + 0x10 + (longlong)TStack_90.CurrentBitIndex * 0x28);
    puVar22 = (undefined8 *)(lVar10 + (longlong)TStack_90.CurrentBitIndex * 0x28);
    uStack_ec = 1;
    pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar2 + 0x548);
    iVar16 = *(int *)(lVar2 + 0x560);
    local_118 = (longlong *)(lVar2 + 0x538);
    iStack_dc = 0;
    if (iVar16 != 0) {
      pTVar20 = pTVar21;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar2 + 0x558) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar20 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar2 + 0x558);
      }
      uVar14 = *(uint *)(pTVar20->AllocatorInstance).InlineData;
      while (uVar14 == 0) {
        lVar10 = (longlong)iStack_f0;
        local_d8 = local_d8 + 0x20;
        iStack_f0 = iStack_f0 + 1;
        iStack_dc = iVar16;
        if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0) goto LAB_14332777d;
        uVar14 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar10 * 4 + 4);
      }
      uStack_ec = -uVar14 & uVar14;
      uVar11 = (ulonglong)uStack_ec * 2 + 1;
      lVar10 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_120 = (int)lVar10;
      iStack_dc = local_d8 + -1 + local_120;
      if (iVar16 < iStack_dc) {
        iStack_dc = iVar16;
      }
    }
LAB_14332777d:
    iStack_d4 = iStack_13c;
    iStack_d0 = *(int *)(lVar2 + 0x540) - *(int *)(lVar2 + 0x56c);
    uVar14 = *(uint *)(lVar2 + 0x560);
    TStack_c0._padding_ = CONCAT44(uStack_ec,iStack_f0);
    uStack_e0 = 0xffffffff;
    uVar15 = uVar14 & 0xffffffe0;
    TStack_c0.CurrentBitIndex = iStack_dc;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar14 >> 5;
    TStack_c0._28_4_ = iStack_13c;
    TStack_c0.BaseBitIndex = local_d8;
    uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
    local_res20 = uVar14;
    local_110 = puVar22;
    local_100 = pTVar21;
    local_f8 = local_118;
    local_e8 = pTVar21;
    local_c8 = local_118;
    TStack_c0.Array = pTVar21;
    if ((((int)uVar14 < 0) || (iVar16 < (int)uVar14)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar17 = *(uint *)(lVar2 + 0x560);
    if (uVar14 != uVar17) {
      pTVar20 = pTVar21;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar2 + 0x558) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar20 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar2 + 0x558);
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) &
               *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar12;
        uVar15 = uVar15 + 0x20;
        iVar12 = iVar12 + 1;
        uVar14 = uVar17;
        local_res20 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_1433278a0;
        uVar14 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar10 * 4 + 4);
      }
      uVar11 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_11c = (int)lVar10;
      uVar14 = local_11c + -1 + uVar15;
      local_res20 = uVar14;
      if ((int)uVar17 < (int)uVar14) {
        uVar14 = uVar17;
        local_res20 = uVar17;
      }
    }
LAB_1433278a0:
    while( true ) {
      plVar5 = local_c8;
      if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,BuildPatchServices::FFileManifest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_c0.CurrentBitIndex == uVar14) && (TStack_c0.Array == pTVar21)) &&
         (plVar5 == local_118)) break;
      lVar10 = (longlong)TStack_c0.CurrentBitIndex * 0x78 + *plVar5;
      local_160 = *(uint *)(lVar10 + 0x60);
      uVar11 = (ulonglong)(int)local_160;
      puVar18 = *(uint **)(lVar10 + 0x58);
      puVar13 = puVar18 + uVar11 * 6;
      local_108 = puVar13;
      while( true ) {
        if (*(int *)(lVar10 + 0x60) != (int)uVar11) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<BuildPatchServices::FChunkPart,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (puVar18 == puVar13) break;
        if (((puVar18[3] == (this->SomeChunk).D && puVar18[2] == (this->SomeChunk).C) &&
            puVar18[1] == (this->SomeChunk).B) && (this->SomeChunk).A == *puVar18) {
          iVar12 = *(int *)(puVar22 + 1);
          pFVar3 = (this->FakeFileSystem).Ptr;
          iVar16 = *(int *)(lVar10 + 0x18) + -1;
          if (*(int *)(lVar10 + 0x18) == 0) {
            iVar16 = 0;
          }
          local_170.Data.ArrayNum = iVar12;
          if ((iVar12 == 0) && (iVar16 != -1)) {
            _Src = (void *)*puVar22;
            iVar8 = iVar16 + 2;
LAB_1433279a5:
            local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (iVar8 != 0) goto LAB_1433279af;
            local_170.Data.ArrayMax = 0;
          }
          else {
            _Src = (void *)*puVar22;
            iVar8 = iVar16 + 1;
            if (iVar12 == 0) goto LAB_1433279a5;
LAB_1433279af:
            local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            uVar14 = iVar12 + iVar8;
            if ((int)uVar14 < iVar12) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
            }
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar14,0,(ForAnyElementType *)&local_170,iVar12,&local_170.Data.ArrayMax)
            ;
            if (iVar12 != 0) {
              memcpy(local_170.Data.AllocatorInstance.Data,_Src,(longlong)iVar12 * 2);
            }
          }
          ::FString::PathAppend(&local_170,*(wchar_t **)(lVar10 + 0x10),iVar16);
          pTVar9 = TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked((TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
                                  *)&pFVar3->DiskData,&local_170);
          if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
          }
          memset((pTVar9->AllocatorInstance).Data,0,(longlong)pTVar9->ArrayNum);
          puVar13 = local_108;
          puVar22 = local_110;
        }
        uVar11 = (ulonglong)local_160;
        puVar18 = puVar18 + 6;
      }
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
      pTVar21 = local_100;
      uVar14 = local_res20;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  } while( true );
}

// SomeChunkUnavailable @ 143327ac0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FInstallChunkSourceSpec::SomeChunkUnavailable(FInstallChunkSourceSpec *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  pFVar4 = FGuid::NewGuid(&local_18);
  uVar1 = pFVar4->B;
  uVar2 = pFVar4->C;
  uVar3 = pFVar4->D;
  (this->SomeChunk).A = pFVar4->A;
  (this->SomeChunk).B = uVar1;
  (this->SomeChunk).C = uVar2;
  (this->SomeChunk).D = uVar3;
  return;
}

