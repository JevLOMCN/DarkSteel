// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 20

// GetTestFlags @ 1432f7e70

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

EAutomationTestFlags __thiscall FVerifierSpec::GetTestFlags(FVerifierSpec *this)

{
  return ProductFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// GetTestSourceFileName @ 1432f7e80

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall
FVerifierSpec::GetTestSourceFileName(FVerifierSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Tests\\Unit\\Verifier.spec.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1432f7eb0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

int __thiscall FVerifierSpec::GetTestSourceFileLine(FVerifierSpec *this)

{
  return 0x13;
}

// GetBeautifiedTestName @ 1432f7ec0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall
FVerifierSpec::GetBeautifiedTestName(FVerifierSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"BuildPatchServices.Unit");
  return __return_storage_ptr__;
}

// Define @ 1432f7ef0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FVerifierSpec::Define(FVerifierSpec *this)

{
  undefined ***pppuVar1;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FVerifierSpec *local_20;
  undefined ***local_10;
  
  FRollingHashConst::Init();
  ::FString::operator=(&this->VerifyDirectory,L"VerDir");
  ::FString::operator=(&this->StagedFileDirectory,L"StaFilDir");
  this->bHasPaused = false;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FVerifierSpec::Define'::`2'::<lambda_1>,0,0>::_vftable_;
  local_10 = (undefined ***)0x0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FVerifierSpec::Define'::__l2::<lambda_1>,void>::Call;
  local_20 = this;
  FAutomationSpecBase::BeforeEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = (undefined ***)0x0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FVerifierSpec::Define'::`2'::<lambda_2>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FVerifierSpec::Define'::__l2::<lambda_2>,void>::Call;
  local_20 = this;
  ::FString::FString(&local_48,"Verifier");
  if (local_38[0] != (code *)0x0) {
    pppuVar1 = &local_28;
    if (local_10 != (undefined ***)0x0) {
      pppuVar1 = local_10;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_10 = (undefined ***)0x0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FVerifierSpec::Define'::`2'::<lambda_3>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FVerifierSpec::Define'::__l2::<lambda_3>,void>::Call;
  local_20 = this;
  FAutomationSpecBase::AfterEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// ~FVerifierSpec @ 1432fdd30

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FVerifierSpec::~FVerifierSpec(FVerifierSpec *this)

{
  IBuildManifestSet *pIVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<FSetElementId> FVar4;
  FMockVerifierStat *pFVar5;
  FFakeInstallerError *pFVar6;
  FFakeFileSystem *pFVar7;
  IVerifier *pIVar8;
  
  pIVar1 = (this->ManifestSet).Ptr;
  if (pIVar1 != (IBuildManifestSet *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  *(undefined4 *)&(this->DiskFileToManifestFile).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DiskFileToManifestFile).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DiskFileToManifestFile);
  DestructItems<FString,int>
            ((FString *)(this->OutDatedFiles).AllocatorInstance.Data,(this->OutDatedFiles).ArrayNum)
  ;
  pFVar3 = (this->OutDatedFiles).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  (this->Tags).HashSize = 0;
  FVar4 = (this->Tags).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Tags).Elements);
  (this->TouchedFiles).HashSize = 0;
  FVar4 = (this->TouchedFiles).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TouchedFiles).Elements);
  (this->SomeFiles).HashSize = 0;
  FVar4 = (this->SomeFiles).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SomeFiles).Elements);
  (this->AllFiles).HashSize = 0;
  FVar4 = (this->AllFiles).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AllFiles).Elements);
  pFVar3 = (this->StagedFileDirectory).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->VerifyDirectory).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MockManifest).SharedReferenceCount.ReferenceController);
  pFVar5 = (this->MockVerificationStat).Ptr;
  if (pFVar5 != (FMockVerifierStat *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  pFVar6 = (this->FakeInstallerError).Ptr;
  if (pFVar6 != (FFakeInstallerError *)0x0) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
  pFVar7 = (this->FakeFileSystem).Ptr;
  if (pFVar7 != (FFakeFileSystem *)0x0) {
    (**(code **)pFVar7->_padding_)(pFVar7,1);
  }
  pIVar8 = (this->Verifier).Ptr;
  if (pIVar8 != (IVerifier *)0x0) {
    (**(code **)*pIVar8)(pIVar8,1);
  }
  FAutomationSpecBase::~FAutomationSpecBase((FAutomationSpecBase *)this);
  return;
}

// operator() @ 143303ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall `FVerifierSpec::Define'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong lVar2;
  IBuildManifest *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  IBuildManifestSet *pIVar5;
  code *pcVar6;
  bool bVar7;
  FFakeFileSystem *this_00;
  FMockManifest *pFVar8;
  FMockManifest *pFVar9;
  FMockManifest *pFVar10;
  FInstallerAction *pFVar11;
  IBuildManifestSet *pIVar12;
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
  pFVar10 = (FMockManifest *)0x0;
  pFVar8 = pFVar10;
  if (this_00 != (FFakeFileSystem *)0x0) {
    memset(this_00,0,0x220);
    pFVar8 = (FMockManifest *)BuildPatchServices::FFakeFileSystem::FFakeFileSystem(this_00);
  }
  pFVar9 = *(FMockManifest **)(lVar1 + 0x1a0);
  if ((pFVar9 != pFVar8) &&
     (*(FMockManifest **)(lVar1 + 0x1a0) = pFVar8, pFVar9 != (FMockManifest *)0x0)) {
    (**(code **)pFVar9->_padding_)();
  }
  lVar1 = *(longlong *)this;
  pFVar9 = ::operator_new(0x88);
  pFVar8 = pFVar10;
  if (pFVar9 != (FMockManifest *)0x0) {
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = (longlong)&___7FFakeInstallerError_BuildPatchServices__6B_;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    FText::FText((FText *)&pFVar9->_padding_);
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    *(undefined4 *)&pFVar9->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar9->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar9->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar9->_padding_ + 4) = 0;
    pFVar9->_padding_ = 0;
    *(undefined4 *)&pFVar9->_padding_ = 0;
    pFVar8 = pFVar9;
  }
  pFVar9 = *(FMockManifest **)(lVar1 + 0x1a8);
  if ((pFVar9 != pFVar8) &&
     (*(FMockManifest **)(lVar1 + 0x1a8) = pFVar8, pFVar9 != (FMockManifest *)0x0)) {
    (**(code **)pFVar9->_padding_)();
  }
  lVar1 = *(longlong *)this;
  pFVar9 = ::operator_new(0xd0);
  pFVar8 = pFVar10;
  if (pFVar9 != (FMockManifest *)0x0) {
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = (longlong)&___7FMockVerifierStat_BuildPatchServices__6B_;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar8 = pFVar9;
  }
  pFVar9 = *(FMockManifest **)(lVar1 + 0x1b0);
  if ((pFVar9 != pFVar8) &&
     (*(FMockManifest **)(lVar1 + 0x1b0) = pFVar8, pFVar9 != (FMockManifest *)0x0)) {
    (**(code **)pFVar9->_padding_)();
  }
  pFVar8 = ::operator_new(0x768);
  if (pFVar8 != (FMockManifest *)0x0) {
    memset(pFVar8,0,0x768);
    pFVar10 = BuildPatchServices::FMockManifest::FMockManifest(pFVar8);
  }
  local_2b8.Object = pFVar10;
  TSharedPtr<BuildPatchServices::FMockManifest,1>::operator=<BuildPatchServices::FMockManifest>
            ((TSharedPtr<BuildPatchServices::FMockManifest,1> *)(*(longlong *)this + 0x1b8),
             &local_2b8);
  lVar1 = *(longlong *)this;
  local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.Data.ArrayNum = 0;
  local_2b0.Data.ArrayMax = 0;
  local_2a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a0.Data.ArrayNum = 0;
  local_2a0.Data.ArrayMax = 0;
  local_280.Elements._0_8_ = 0;
  local_280.Elements._8_8_ = 0;
  local_280.Elements._32_8_ = 0;
  local_280.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_280.Elements._48_8_ = _UNK_150631d98;
  local_280.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_280.HashSize = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (&local_280,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(lVar1 + 0x2d8));
  lVar2 = *(longlong *)this;
  if ((*(longlong *)(lVar2 + 0x1b8) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pIVar3 = *(IBuildManifest **)(lVar2 + 0x1b8);
  pTVar4 = *(TReferenceControllerBase<1> **)(lVar2 + 0x1c0);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pIVar3 == (IBuildManifest *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_290.Object = pIVar3;
  local_290.SharedReferenceCount.ReferenceController = pTVar4;
  pFVar11 = BuildPatchServices::FInstallerAction::MakeInstall
                      (&local_228,&local_290,&local_280,&local_2a0,&local_2b0);
  BuildPatchServices::FBuildPatchInstallerAction::FBuildPatchInstallerAction(&local_188,pFVar11);
  local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x158,8,1,0,&local_2c8.AllocatorInstance,1,&local_2c8.ArrayMax);
  ConstructItems<BuildPatchServices::FBuildPatchInstallerAction,BuildPatchServices::FBuildPatchInstallerAction,int>
            (local_2c8.AllocatorInstance.Data,&local_188,1);
  pIVar12 = BuildPatchServices::FBuildManifestSetFactory::Create(&local_2c8);
  pIVar5 = *(IBuildManifestSet **)(lVar1 + 0x390);
  if ((pIVar5 != pIVar12) &&
     (*(IBuildManifestSet **)(lVar1 + 0x390) = pIVar12, pIVar5 != (IBuildManifestSet *)0x0)) {
    (**(code **)*pIVar5)(pIVar5,1);
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FVerifierSpec::MakeFileData(*(FVerifierSpec **)this);
  return;
}

// operator() @ 143304530

void __thiscall `FVerifierSpec::PauseFor'::__l2::<lambda_1>::operator()(void *this)

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
                    /* WARNING: Could not recover jumptable at 0x0001433045a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*(longlong *)this + 0x198) + 8))
            (*(longlong **)(*(longlong *)this + 0x198),0);
  return;
}

// operator() @ 14330e350

void __thiscall `FVerifierSpec::Define'::__l2::<lambda_2>::operator()(void *this)

{
  FAutomationSpecBase *pFVar1;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FAutomationSpecBase *local_20;
  undefined8 local_10;
  
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FVerifierSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FVerifierSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"Verify");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FVerifierSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FVerifierSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"SetPaused");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FVerifierSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FVerifierSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"Abort");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 143311450

void __thiscall `FVerifierSpec::Define'::__l2::<lambda_3>::operator()(void *this)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  puVar4 = *(undefined8 **)(*(longlong *)this + 0x198);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x198) = 0;
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)(*(longlong *)this + 0x390);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x390) = 0;
    (**(code **)*puVar4)(puVar4,1);
  }
  lVar2 = *(longlong *)this;
  puVar4 = (undefined8 *)(lVar2 + 0x1b8);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (puVar4 != &local_18) {
    *puVar4 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar2 + 0x1c0),&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  puVar4 = *(undefined8 **)(*(longlong *)this + 0x1b0);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x1b0) = 0;
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)(*(longlong *)this + 0x1a0);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x1a0) = 0;
    (**(code **)*puVar4)(puVar4,1);
  }
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Reset
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
             (*(longlong *)this + 0x1e8));
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Reset
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
             (*(longlong *)this + 0x288));
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Reset
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
             (*(longlong *)this + 0x2d8));
  lVar2 = *(longlong *)this;
  piVar1 = (int *)(lVar2 + 0x334);
  pFVar3 = ((ForAnyElementType *)(lVar2 + 0x328))->Data;
  if (*piVar1 < 0) {
    DestructItems<FString,int>((FString *)pFVar3,*(int *)(lVar2 + 0x330));
    *(undefined4 *)(lVar2 + 0x330) = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)(lVar2 + 0x328),0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar3,*(int *)(lVar2 + 0x330));
    *(undefined4 *)(lVar2 + 0x330) = 0;
  }
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           *)(*(longlong *)this + 0x338));
  *(undefined1 *)(*(longlong *)this + 0x388) = 0;
  return;
}

// CorruptSomeFiles @ 14331b180

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FVerifierSpec::CorruptSomeFiles(FVerifierSpec *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  uint uVar4;
  FFakeFileSystem *pFVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *_Src;
  longlong lVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  FString local_b8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  puVar1 = &(this->SomeFiles).Elements.field_0x10;
  iStack_a0 = 0;
  iVar11 = *(int *)&(this->SomeFiles).Elements.field_0x28;
  local_a8 = &this->SomeFiles;
  local_88 = 0;
  uStack_9c = 1;
  iStack_8c = 0;
  if (iVar11 != 0) {
    puVar19 = *(uint **)&(this->SomeFiles).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar17 = *puVar19;
    while (uVar17 == 0) {
      lVar13 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14331b22d;
      uVar17 = puVar19[lVar13 + 1];
    }
    uStack_9c = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_9c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res18 = (int)lVar13;
    iStack_8c = local_res18 + -1 + local_88;
    if (iVar11 < iStack_8c) {
      iStack_8c = iVar11;
    }
  }
LAB_14331b22d:
  uVar17 = *(uint *)&(this->SomeFiles).Elements.field_0x28;
  uVar15 = uVar17 & 0xffffffe0;
  iStack_80 = *(int *)&(this->SomeFiles).Elements.field_0x8 -
              *(int *)&(this->SomeFiles).Elements.field_0x34;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_78 = local_a8;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar11 < (int)uVar17)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->SomeFiles).Elements.field_0x28;
  if (uVar17 != uVar4) {
    puVar18 = *(undefined1 **)&(this->SomeFiles).Elements.field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14331b330;
      uVar17 = *(uint *)(puVar18 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13;
    uVar17 = local_res20 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar17) {
      uVar17 = uVar4;
    }
  }
LAB_14331b330:
  do {
    pTVar8 = local_78;
    if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
        (int)uStack_50) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar13 = (longlong)TStack_70.CurrentBitIndex;
    if (((TStack_70.CurrentBitIndex == uVar17) &&
        (TStack_70.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->SomeFiles).Elements.field_0x10)) &&
       (pTVar8 == &this->SomeFiles)) {
      return;
    }
    lVar16 = *(longlong *)&pTVar8->Elements;
    iVar14 = (this->VerifyDirectory).Data.ArrayNum;
    iVar10 = *(int *)(lVar16 + 8 + lVar13 * 0x18);
    iVar11 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar11 = 0;
    }
    local_b8.Data.ArrayNum = iVar14;
    if ((iVar14 == 0) && (iVar11 != -1)) {
      _Src = (this->VerifyDirectory).Data.AllocatorInstance.Data;
      iVar10 = iVar11 + 2;
LAB_14331b3bc:
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar10 != 0) goto LAB_14331b3c6;
      local_b8.Data.ArrayMax = 0;
    }
    else {
      _Src = (this->VerifyDirectory).Data.AllocatorInstance.Data;
      iVar10 = iVar11 + 1;
      if (iVar14 == 0) goto LAB_14331b3bc;
LAB_14331b3c6:
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar15 = iVar14 + iVar10;
      if ((int)uVar15 < iVar14) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar15,0,(ForAnyElementType *)&local_b8,iVar14,&local_b8.Data.ArrayMax);
      if (iVar14 != 0) {
        memcpy(local_b8.Data.AllocatorInstance.Data,_Src,(longlong)iVar14 * 2);
      }
    }
    ::FString::PathAppend(&local_b8,*(wchar_t **)(lVar16 + lVar13 * 0x18),iVar11);
    pFVar5 = (this->FakeFileSystem).Ptr;
    iVar11 = local_b8.Data.ArrayNum + -1;
    FVar7.Data = local_b8.Data.AllocatorInstance.Data;
    if (local_b8.Data.ArrayNum == 0) {
      iVar11 = 0;
      FVar7.Data = (FScriptContainerElement *)L"";
    }
    uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar7.Data);
    iVar11 = TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                         *)&pFVar5->DiskData,uVar15,&local_b8);
    if (iVar11 == -1) {
      lVar13 = 0;
LAB_14331b474:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      lVar13 = *(longlong *)&pFVar5->DiskData + (longlong)iVar11 * 0x28;
      if (lVar13 == 0) goto LAB_14331b474;
    }
    lVar16 = 0;
    uVar15 = 0;
    do {
      uVar4 = uVar15 + 1;
      uVar12 = 0;
      if ((int)uVar4 < *(int *)(lVar13 + 0x18)) {
        uVar12 = ~uVar4 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar3 = *(undefined1 *)(*(longlong *)(lVar13 + 0x10) + 1 + lVar16);
      if ((*(int *)(lVar13 + 0x18) <= (int)uVar15) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined1 *)(lVar16 + *(longlong *)(lVar13 + 0x10)) = uVar3;
      lVar16 = lVar16 + 1;
      uVar15 = uVar4;
    } while ((int)uVar4 < 10);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// FilesSizeCheckedFiles @ 14331edb0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
FVerifierSpec::FilesSizeCheckedFiles
          (FVerifierSpec *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  int iVar1;
  FFakeFileSystem *pFVar2;
  FString *pFVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [16];
  
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  pFVar2 = (this->FakeFileSystem).Ptr;
  iVar1 = (int)pFVar2->_padding_;
  lVar4 = pFVar2->_padding_;
  lVar5 = (longlong)iVar1 * 0x20 + lVar4;
  while( true ) {
    if ((int)pFVar2->_padding_ != iVar1) {
      `TCheckedPointerIterator<TTuple<double,FString,__int64>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (lVar4 == lVar5) break;
    pFVar3 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
             ::FindChecked((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                            *)&this->DiskFileToManifestFile,(FString *)(lVar4 + 8));
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (__return_storage_ptr__,(FString *)(local_res8 + 8),(bool *)pFVar3);
    lVar4 = lVar4 + 0x20;
  }
  return __return_storage_ptr__;
}

// LoadedFiles @ 1433221a0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
FVerifierSpec::LoadedFiles
          (FVerifierSpec *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  longlong lVar1;
  int iVar2;
  FFakeFileSystem *pFVar3;
  FString *pFVar4;
  longlong lVar5;
  undefined1 local_res8 [16];
  
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  pFVar3 = (this->FakeFileSystem).Ptr;
  iVar2 = (int)pFVar3->_padding_;
  lVar5 = pFVar3->_padding_;
  lVar1 = lVar5 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((int)pFVar3->_padding_ != iVar2) {
      `TCheckedPointerIterator<TTuple<double,FArchive_*,FString,enum_BuildPatchServices::EReadFlags>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (lVar5 == lVar1) break;
    pFVar4 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
             ::FindChecked((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                            *)&this->DiskFileToManifestFile,(FString *)(lVar5 + 0x10));
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (__return_storage_ptr__,(FString *)(local_res8 + 8),(bool *)pFVar4);
    lVar5 = lVar5 + 0x28;
  }
  return __return_storage_ptr__;
}

// MakeFileData @ 143322290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001433223f7) */
/* WARNING: Removing unreachable block (ram,0x000143322964) */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FVerifierSpec::MakeFileData(FVerifierSpec *this)

{
  int *piVar1;
  TSharedPtr<BuildPatchServices::FMockManifest,1> *this_00;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar2;
  undefined8 *puVar3;
  uint *puVar4;
  int iVar5;
  FFakeFileSystem *pFVar6;
  int *piVar7;
  code *pcVar8;
  void *pvVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  FMockManifest *pFVar16;
  byte bVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  ForElementType<unsigned_int> FVar22;
  TSparseSetElement<FString> *pTVar23;
  wchar_t *pwVar24;
  int *piVar25;
  uint uVar26;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar27;
  FScriptContainerElement *pFVar28;
  int iVar29;
  ulonglong uVar30;
  int iVar31;
  TSparseSetElement<FString> *pTVar32;
  FScriptContainerElement *pFVar33;
  FVerifierSpec *pFVar34;
  undefined1 auStackY_298 [32];
  undefined1 local_248 [8];
  FVerifierSpec *local_240;
  int local_238;
  uint local_234;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  TKeyInitializer<FString_const_&> local_1d0;
  int local_1c8;
  uint uStack_1c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c0;
  undefined4 local_1b8;
  int iStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  int local_1a8;
  uint uStack_1a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1a0;
  undefined4 local_198;
  int iStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_188;
  undefined1 local_178 [8];
  TPairInitializer<FString_&&,FString_const_&> local_170;
  int local_160;
  undefined1 local_15c [12];
  FString *local_150;
  longlong local_148;
  longlong *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_138;
  longlong *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_110;
  FString *local_f0;
  FScriptContainerElement *local_e8;
  FString *local_e0;
  FScriptContainerElement *local_d8;
  FSparseArrayAllocationInfo local_d0;
  FScriptContainerElement *local_c0;
  uchar *local_b8;
  FScriptContainerElement *local_b0;
  longlong *local_a8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  uchar local_48 [24];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_298;
  iVar31 = 0;
  this_00 = &this->MockManifest;
  local_240 = this;
  do {
    if ((this_00->Object == (FMockManifest *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar16 = this_00->Object;
    pTVar27 = &pFVar16->BuildFileList;
    ::FString::PrintfImpl(&local_230,L"Some/Install/File%d.exe");
    pFVar20 = (pTVar27->AllocatorInstance).Data;
    if (((pFVar20 <= (FScriptContainerElement *)&local_230) &&
        ((FScriptContainerElement *)&local_230 <
         pFVar20 + (longlong)(pFVar16->BuildFileList).ArrayMax * 0x10)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar11 = (pFVar16->BuildFileList).ArrayNum;
    piVar1 = &(pFVar16->BuildFileList).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar27->AllocatorInstance,piVar1);
    }
    (pFVar16->BuildFileList).ArrayNum = iVar11 + 1;
    pFVar20 = (pTVar27->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
    *(undefined8 *)pFVar20 = 0;
    *(FScriptContainerElement **)pFVar20 = local_230.Data.AllocatorInstance.Data;
    *(int *)(pFVar20 + 8) = local_230.Data.ArrayNum;
    *(int *)(pFVar20 + 0xc) = local_230.Data.ArrayMax;
    local_230.Data.ArrayNum = 0;
    local_230.Data.ArrayMax = 0;
    local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((this_00->Object == (FMockManifest *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar16 = this_00->Object;
    iVar11 = (pFVar16->BuildFileList).ArrayNum;
    uVar19 = iVar11 - 1;
    uVar13 = 0;
    if ((int)uVar19 < iVar11) {
      uVar13 = ~uVar19 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar11 = (pFVar16->BuildFileList).ArrayNum;
    pFVar20 = (pFVar16->BuildFileList).AllocatorInstance.Data;
    if ((this_00->Object == (FMockManifest *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar16 = this_00->Object;
    iVar29 = (pFVar16->BuildFileList).ArrayNum;
    uVar19 = iVar29 - 1;
    uVar13 = 0;
    if ((int)uVar19 < iVar29) {
      uVar13 = ~uVar19 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar14 = (pFVar16->BuildFileList).ArrayNum;
    pFVar33 = (pFVar16->BuildFileList).AllocatorInstance.Data;
    iVar5 = (this->VerifyDirectory).Data.ArrayNum;
    iVar12 = *(int *)(pFVar33 + (longlong)iVar14 * 0x10 + -8);
    iVar29 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar29 = 0;
    }
    local_220.Data.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar29 != -1)) {
      pFVar28 = (this->VerifyDirectory).Data.AllocatorInstance.Data;
      iVar12 = iVar29 + 2;
LAB_143322575:
      local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar12 != 0) goto LAB_14332257e;
      local_220.Data.ArrayMax = 0;
    }
    else {
      pFVar28 = (this->VerifyDirectory).Data.AllocatorInstance.Data;
      iVar12 = iVar29 + 1;
      if (iVar5 == 0) goto LAB_143322575;
LAB_14332257e:
      local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar13 = iVar12 + iVar5;
      if ((int)uVar13 < iVar5) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar13,0,(ForAnyElementType *)&local_220,iVar5,&local_220.Data.ArrayMax);
      if (iVar5 != 0) {
        memcpy(local_220.Data.AllocatorInstance.Data,pFVar28,(longlong)iVar5 * 2);
      }
    }
    ::FString::PathAppend
              (&local_220,*(wchar_t **)(pFVar33 + (longlong)iVar14 * 0x10 + -0x10),iVar29);
    pFVar34 = local_240;
    TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
    Emplace<FString,FString_const_&>
              ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)&local_240->DiskFileToManifestFile,&local_220,
               (FString *)(pFVar20 + (longlong)(iVar11 + -1) * 0x10));
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
    if ((this_00->Object == (FMockManifest *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar16 = this_00->Object;
    iVar11 = (pFVar16->BuildFileList).ArrayNum;
    uVar19 = iVar11 - 1;
    uVar13 = 0;
    if ((int)uVar19 < iVar11) {
      uVar13 = ~uVar19 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar11 = (pFVar16->BuildFileList).ArrayNum;
    pFVar20 = (pFVar16->BuildFileList).AllocatorInstance.Data;
    if ((this_00->Object == (FMockManifest *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar16 = this_00->Object;
    iVar29 = (pFVar16->BuildFileList).ArrayNum;
    uVar19 = iVar29 - 1;
    uVar13 = 0;
    if ((int)uVar19 < iVar29) {
      uVar13 = ~uVar19 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar14 = (pFVar16->BuildFileList).ArrayNum;
    iVar5 = (pFVar34->StagedFileDirectory).Data.ArrayNum;
    pFVar33 = (pFVar16->BuildFileList).AllocatorInstance.Data;
    iVar12 = *(int *)(pFVar33 + (longlong)iVar14 * 0x10 + -8);
    iVar29 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar29 = 0;
    }
    if ((iVar5 != 0) || (iVar12 = 2, iVar29 == -1)) {
      iVar12 = 1;
    }
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmptyWithSlack<wchar_t,int>
              (&local_188,(wchar_t *)(pFVar34->StagedFileDirectory).Data.AllocatorInstance.Data,
               iVar5,0,iVar12 + iVar29);
    ::FString::PathAppend
              ((FString *)&local_188,*(wchar_t **)(pFVar33 + (longlong)iVar14 * 0x10 + -0x10),iVar29
              );
    TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
    Emplace<FString,FString_const_&>
              ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)&pFVar34->DiskFileToManifestFile,(FString *)&local_188,
               (FString *)(pFVar20 + (longlong)(iVar11 + -1) * 0x10));
    if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.AllocatorInstance.Data);
    }
    if ((this_00->Object == (FMockManifest *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar16 = this_00->Object;
    iVar11 = (pFVar16->BuildFileList).ArrayNum;
    uVar19 = iVar11 - 1;
    uVar13 = 0;
    if ((int)uVar19 < iVar11) {
      uVar13 = ~uVar19 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&pFVar34->SomeFiles,(FString *)local_178,
               (bool *)((pFVar16->BuildFileList).AllocatorInstance.Data +
                       (longlong)((pFVar16->BuildFileList).ArrayNum + -1) * 0x10));
    if ((this_00->Object == (FMockManifest *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar16 = this_00->Object;
    pTVar27 = &pFVar16->BuildFileList;
    ::FString::PrintfImpl(&local_210,L"Other/Install/File%d.exe");
    pFVar20 = (pTVar27->AllocatorInstance).Data;
    if (((pFVar20 <= (FScriptContainerElement *)&local_210) &&
        ((FScriptContainerElement *)&local_210 <
         pFVar20 + (longlong)(pFVar16->BuildFileList).ArrayMax * 0x10)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar11 = (pFVar16->BuildFileList).ArrayNum;
    piVar1 = &(pFVar16->BuildFileList).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar27->AllocatorInstance,piVar1);
    }
    (pFVar16->BuildFileList).ArrayNum = iVar11 + 1;
    pFVar20 = (pTVar27->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
    *(undefined8 *)pFVar20 = 0;
    *(FScriptContainerElement **)pFVar20 = local_210.Data.AllocatorInstance.Data;
    *(int *)(pFVar20 + 8) = local_210.Data.ArrayNum;
    *(int *)(pFVar20 + 0xc) = local_210.Data.ArrayMax;
    local_210.Data.ArrayNum = 0;
    local_210.Data.ArrayMax = 0;
    local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((this_00->Object == (FMockManifest *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar16 = this_00->Object;
    iVar11 = (pFVar16->BuildFileList).ArrayNum;
    uVar19 = iVar11 - 1;
    uVar13 = 0;
    if ((int)uVar19 < iVar11) {
      uVar13 = ~uVar19 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar11 = (pFVar16->BuildFileList).ArrayNum;
    pFVar20 = (pFVar16->BuildFileList).AllocatorInstance.Data;
    if ((this_00->Object == (FMockManifest *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar16 = this_00->Object;
    iVar29 = (pFVar16->BuildFileList).ArrayNum;
    uVar19 = iVar29 - 1;
    uVar13 = 0;
    if ((int)uVar19 < iVar29) {
      uVar13 = ~uVar19 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar14 = (pFVar16->BuildFileList).ArrayNum;
    pFVar33 = (pFVar16->BuildFileList).AllocatorInstance.Data;
    iVar5 = (pFVar34->VerifyDirectory).Data.ArrayNum;
    iVar12 = *(int *)(pFVar33 + (longlong)iVar14 * 0x10 + -8);
    iVar29 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar29 = 0;
    }
    local_200.Data.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar29 != -1)) {
      pFVar28 = (pFVar34->VerifyDirectory).Data.AllocatorInstance.Data;
      iVar12 = iVar29 + 2;
LAB_143322ae0:
      local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar12 != 0) goto LAB_143322ae9;
      local_200.Data.ArrayMax = 0;
    }
    else {
      pFVar28 = (pFVar34->VerifyDirectory).Data.AllocatorInstance.Data;
      iVar12 = iVar29 + 1;
      if (iVar5 == 0) goto LAB_143322ae0;
LAB_143322ae9:
      local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar13 = iVar12 + iVar5;
      if ((int)uVar13 < iVar5) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar13,0,(ForAnyElementType *)&local_200,iVar5,&local_200.Data.ArrayMax);
      if (iVar5 != 0) {
        memcpy(local_200.Data.AllocatorInstance.Data,pFVar28,(longlong)iVar5 * 2);
      }
    }
    ::FString::PathAppend
              (&local_200,*(wchar_t **)(pFVar33 + (longlong)iVar14 * 0x10 + -0x10),iVar29);
    pFVar34 = local_240;
    local_f0 = &local_200;
    local_e8 = pFVar20 + (longlong)(iVar11 + -1) * 0x10;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&local_240->DiskFileToManifestFile,
               (TPairInitializer<FString_&&,FString_const_&> *)(local_178 + 4),(bool *)&local_f0);
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    if ((this_00->Object == (FMockManifest *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar16 = this_00->Object;
    iVar11 = (pFVar16->BuildFileList).ArrayNum;
    uVar19 = iVar11 - 1;
    uVar13 = 0;
    if ((int)uVar19 < iVar11) {
      uVar13 = ~uVar19 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar11 = (pFVar16->BuildFileList).ArrayNum;
    pFVar20 = (pFVar16->BuildFileList).AllocatorInstance.Data;
    if ((this_00->Object == (FMockManifest *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar16 = this_00->Object;
    iVar29 = (pFVar16->BuildFileList).ArrayNum;
    uVar19 = iVar29 - 1;
    uVar13 = 0;
    if ((int)uVar19 < iVar29) {
      uVar13 = ~uVar19 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar14 = (pFVar16->BuildFileList).ArrayNum;
    pFVar33 = (pFVar16->BuildFileList).AllocatorInstance.Data;
    iVar5 = (pFVar34->StagedFileDirectory).Data.ArrayNum;
    iVar12 = *(int *)(pFVar33 + (longlong)iVar14 * 0x10 + -8);
    iVar29 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar29 = 0;
    }
    local_1f0.Data.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar29 != -1)) {
      pFVar28 = (pFVar34->StagedFileDirectory).Data.AllocatorInstance.Data;
      iVar12 = iVar29 + 2;
LAB_143322cf9:
      local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar12 != 0) goto LAB_143322d02;
      local_1f0.Data.ArrayMax = 0;
    }
    else {
      pFVar28 = (pFVar34->StagedFileDirectory).Data.AllocatorInstance.Data;
      iVar12 = iVar29 + 1;
      if (iVar5 == 0) goto LAB_143322cf9;
LAB_143322d02:
      local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar13 = iVar12 + iVar5;
      if ((int)uVar13 < iVar5) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar13,0,(ForAnyElementType *)&local_1f0,iVar5,&local_1f0.Data.ArrayMax);
      if (iVar5 != 0) {
        memcpy(local_1f0.Data.AllocatorInstance.Data,pFVar28,(longlong)iVar5 * 2);
      }
    }
    ::FString::PathAppend
              (&local_1f0,*(wchar_t **)(pFVar33 + (longlong)iVar14 * 0x10 + -0x10),iVar29);
    this = local_240;
    local_e0 = &local_1f0;
    local_d8 = pFVar20 + (longlong)(iVar11 + -1) * 0x10;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&local_240->DiskFileToManifestFile,&local_170,(bool *)&local_e0);
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
    iVar31 = iVar31 + 1;
  } while (iVar31 < 0x19);
  if ((this_00->Object == (FMockManifest *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar13 = (this_00->Object->BuildFileList).ArrayNum;
  pFVar20 = (this_00->Object->BuildFileList).AllocatorInstance.Data;
  if (((int)uVar13 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar31 = 0;
  pTVar32 = (TSparseSetElement<FString> *)0x0;
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (uVar13 == 0) goto LAB_1433230c5;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar19 = 1;
  if (3 < uVar13) {
    uVar30 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_170.Key._4_4_ = (int)lVar21;
    uVar19 = 1 << ((byte)lVar21 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar19 <= (int)local_50)) goto LAB_1433230c5;
  local_50 = uVar19;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar19 != 0) {
    uVar26 = uVar19;
    if (uVar19 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar26 = 0;
        goto LAB_143322eec;
      }
    }
    else {
LAB_143322eec:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar26,4);
    }
    if (0 < (int)uVar19) {
      uVar30 = (ulonglong)uVar19;
      pTVar23 = pTVar32;
      do {
        FVar18.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar18.Data = local_58.Data;
        }
        uVar15 = (longlong)(int)uVar19 - 1U & (ulonglong)pTVar23;
        pTVar23 = (TSparseSetElement<FString> *)&pTVar23->field_0x1;
        *(undefined4 *)(FVar18.Data + uVar15 * 4) = 0xffffffff;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
  }
  if (local_50 != 0) {
    pTStack_1c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_1c8 = 0;
    uStack_1c4 = 1;
    iStack_1b4 = 0;
    iStack_1b0 = 0;
    if (local_70 != 0) {
      FVar22 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_78;
      }
      uVar19 = *(uint *)FVar22;
      iStack_1b0 = iVar31;
      local_1c8 = iVar31;
      while (uVar19 == 0) {
        iStack_1b0 = iStack_1b0 + 0x20;
        lVar21 = (longlong)local_1c8;
        local_1c8 = local_1c8 + 1;
        if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1c8)
        goto LAB_143322ffb;
        uVar19 = ((uint *)((longlong)FVar22 + 4))[lVar21];
      }
      uStack_1c4 = -uVar19 & uVar19;
      uVar30 = (ulonglong)uStack_1c4 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_170.Value._0_4_ = (int)lVar21;
      iStack_1b4 = (int)local_170.Value + -1 + iStack_1b0;
      if (local_70 < iStack_1b4) {
LAB_143322ffb:
        iStack_1b4 = local_70;
      }
    }
    local_1b8 = 0xffffffff;
    local_140 = (longlong *)local_98;
    local_138._padding_ = CONCAT44(uStack_1c4,local_1c8);
    local_138.CurrentBitIndex = iStack_1b4;
    local_138.UnvisitedBitMask = 0xffffffff;
    local_138._28_4_ = uStack_1ac;
    local_138.BaseBitIndex = iStack_1b0;
    local_138.Array = pTStack_1c0;
    iVar11 = iStack_1b4;
    if (iStack_1b4 < local_70) {
      do {
        puVar3 = (undefined8 *)(*local_140 + (longlong)iVar11 * 0x18);
        iVar14 = *(int *)(*local_140 + 8 + (longlong)iVar11 * 0x18);
        iVar29 = iVar14 + -1;
        if (iVar14 == 0) {
          pwVar24 = L"";
          iVar29 = 0;
        }
        else {
          pwVar24 = (wchar_t *)*puVar3;
        }
        uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar29,pwVar24);
        uVar19 = local_50 - 1 & uVar19;
        *(uint *)((longlong)puVar3 + 0x14) = uVar19;
        FVar18.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar18.Data = local_58.Data;
        }
        uVar30 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar19;
        *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(FVar18.Data + uVar30 * 4);
        *(int *)(FVar18.Data + uVar30 * 4) = iVar11;
        local_138.UnvisitedBitMask = local_138.UnvisitedBitMask & ~local_138._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_138);
        iVar11 = local_138.CurrentBitIndex;
      } while (local_138.CurrentBitIndex < (local_138.Array)->NumBits);
    }
  }
LAB_1433230c5:
  pFVar33 = pFVar20 + (longlong)(int)uVar13 * 0x10;
  pFVar34 = local_240;
  iVar11 = local_68;
  for (; local_240 = pFVar34, local_68 = iVar11, pFVar20 != pFVar33; pFVar20 = pFVar20 + 0x10) {
    if (local_64 == 0) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x18,8,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                          (int *)(local_98 + 0xc));
      iVar29 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                         ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),1);
      FVar22 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_78;
      }
      bVar17 = (byte)iVar29 & 0x1f;
      if (iVar29 < 0) {
        iVar29 = iVar29 + 0x1f;
        bVar17 = bVar17 - 0x20;
      }
      puVar4 = (uint *)((longlong)FVar22 + (longlong)(iVar29 >> 5) * 4);
      *puVar4 = *puVar4 & ~(1 << (bVar17 & 0x1f));
    }
    else {
      local_64 = local_64 + -1;
      local_68 = *(int *)(local_98._0_8_ + (longlong)iVar11 * 0x18 + 4);
      if (local_64 != 0) {
        *(undefined4 *)(local_98._0_8_ + (longlong)local_68 * 0x18) = 0xffffffff;
      }
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,&local_d0,iVar11);
    pvVar9 = local_d0.Pointer;
    pTVar23 = pTVar32;
    if (local_d0.Pointer != (TSparseSetElement<FString> *)0x0) {
      ::FString::FString(local_d0.Pointer,(FString *)pFVar20);
      *(undefined4 *)((longlong)pvVar9 + 0x10) = 0xffffffff;
      pTVar23 = pvVar9;
    }
    local_238 = local_d0.Index;
    iVar11 = *(int *)&pTVar23->field_0x8 + -1;
    if (*(int *)&pTVar23->field_0x8 == 0) {
      pwVar24 = L"";
      iVar11 = 0;
    }
    else {
      pwVar24 = *(wchar_t **)pTVar23;
    }
    uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar24);
    bVar10 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::TryReplaceExisting
                       ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                        uVar13,pTVar23,&local_238,(bool *)0x0);
    if (!bVar10) {
      uVar26 = 1;
      uVar19 = local_98._8_4_ - local_64;
      if (3 < uVar19) {
        uVar30 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_170.Value._4_4_ = (undefined4)lVar21;
        uVar26 = 1 << ((byte)lVar21 & 0x1f);
      }
      if (((int)uVar19 < 1) || ((int)uVar26 <= (int)local_50)) {
        uVar13 = local_50 - 1 & uVar13;
        *(uint *)&pTVar23->field_0x14 = uVar13;
        FVar18.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar18.Data = local_58.Data;
        }
        uVar30 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)&pTVar23->field_0x10 = *(undefined4 *)(FVar18.Data + uVar30 * 4);
        *(int *)(FVar18.Data + uVar30 * 4) = local_238;
      }
      else {
        local_50 = uVar26;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
        }
        if (uVar26 != 0) {
          uVar13 = uVar26;
          if (uVar26 < 2) {
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              uVar13 = 0;
              goto LAB_1433232b7;
            }
          }
          else {
LAB_1433232b7:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_58,0,uVar13,4);
          }
          if (0 < (int)uVar26) {
            uVar30 = (ulonglong)uVar26;
            pTVar23 = pTVar32;
            do {
              FVar18.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar18.Data = local_58.Data;
              }
              uVar15 = (ulonglong)pTVar23 & (longlong)(int)uVar26 - 1U;
              pTVar23 = (TSparseSetElement<FString> *)&pTVar23->field_0x1;
              *(undefined4 *)(FVar18.Data + uVar15 * 4) = 0xffffffff;
              uVar30 = uVar30 - 1;
            } while (uVar30 != 0);
          }
        }
        if (local_50 != 0) {
          pTStack_1a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
          local_1a8 = 0;
          uStack_1a4 = 1;
          iStack_194 = 0;
          iStack_190 = 0;
          if (local_70 != 0) {
            FVar22 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
            if (local_78 != (ForElementType<unsigned_int>)0x0) {
              FVar22 = local_78;
            }
            uVar13 = *(uint *)FVar22;
            iStack_190 = iVar31;
            local_1a8 = iVar31;
            while (uVar13 == 0) {
              iStack_190 = iStack_190 + 0x20;
              lVar21 = (longlong)local_1a8;
              local_1a8 = local_1a8 + 1;
              if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1a8)
              goto LAB_1433233cb;
              uVar13 = ((uint *)((longlong)FVar22 + 4))[lVar21];
            }
            uStack_1a4 = -uVar13 & uVar13;
            uVar30 = (ulonglong)uStack_1a4 * 2 + 1;
            lVar21 = 0x3f;
            if (uVar30 != 0) {
              for (; uVar30 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            local_160 = (int)lVar21;
            iStack_194 = local_160 + -1 + iStack_190;
            if (local_70 < iStack_194) {
LAB_1433233cb:
              iStack_194 = local_70;
            }
          }
          local_198 = 0xffffffff;
          local_118 = (longlong *)local_98;
          local_110._padding_ = CONCAT44(uStack_1a4,local_1a8);
          local_110.CurrentBitIndex = iStack_194;
          local_110.UnvisitedBitMask = 0xffffffff;
          local_110._28_4_ = uStack_18c;
          local_110.BaseBitIndex = iStack_190;
          iVar11 = iStack_194;
          local_110.Array = pTStack_1a0;
          if (iStack_194 < local_70) {
            do {
              puVar3 = (undefined8 *)(*local_118 + (longlong)iVar11 * 0x18);
              iVar14 = *(int *)(*local_118 + 8 + (longlong)iVar11 * 0x18);
              iVar29 = iVar14 + -1;
              if (iVar14 == 0) {
                pwVar24 = L"";
                iVar29 = 0;
              }
              else {
                pwVar24 = (wchar_t *)*puVar3;
              }
              uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar29,pwVar24);
              uVar13 = local_50 - 1 & uVar13;
              *(uint *)((longlong)puVar3 + 0x14) = uVar13;
              FVar18.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar18.Data = local_58.Data;
              }
              uVar30 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
              *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(FVar18.Data + uVar30 * 4);
              *(int *)(FVar18.Data + uVar30 * 4) = iVar11;
              local_110.UnvisitedBitMask = local_110.UnvisitedBitMask & ~local_110._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_110);
              iVar11 = local_110.CurrentBitIndex;
            } while (local_110.CurrentBitIndex < (local_110.Array)->NumBits);
          }
        }
      }
    }
    pFVar34 = local_240;
    iVar11 = local_68;
  }
  pTVar2 = &pFVar34->AllFiles;
  if (pTVar2 != (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              (pTVar2,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98);
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  pFVar16 = TSharedPtr<BuildPatchServices::FMockManifest,1>::operator->(this_00);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (&pFVar16->TaggedFileList,pTVar2);
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  pFVar16 = TSharedPtr<BuildPatchServices::FMockManifest,1>::operator->(this_00);
  pFVar20 = (pFVar16->BuildFileList).AllocatorInstance.Data;
  local_234 = (pFVar16->BuildFileList).ArrayNum;
  uVar30 = (ulonglong)(int)local_234;
  pFVar33 = pFVar20 + uVar30 * 0x10;
  do {
    if ((pFVar16->BuildFileList).ArrayNum != (int)uVar30) {
      local_248[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_248);
    }
    if (pFVar20 == pFVar33) {
      return;
    }
    iVar29 = (pFVar34->VerifyDirectory).Data.ArrayNum;
    iVar11 = *(int *)(pFVar20 + 8) + -1;
    if (*(int *)(pFVar20 + 8) == 0) {
      iVar11 = 0;
    }
    local_1e0.Data.ArrayNum = iVar29;
    if ((iVar29 == 0) && (iVar11 != -1)) {
      pFVar28 = (pFVar34->VerifyDirectory).Data.AllocatorInstance.Data;
      iVar14 = iVar11 + 2;
LAB_1433235fd:
      local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar14 != 0) goto LAB_143323606;
      local_1e0.Data.ArrayMax = 0;
    }
    else {
      pFVar28 = (pFVar34->VerifyDirectory).Data.AllocatorInstance.Data;
      iVar14 = iVar11 + 1;
      if (iVar29 == 0) goto LAB_1433235fd;
LAB_143323606:
      local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar13 = iVar29 + iVar14;
      if ((int)uVar13 < iVar29) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar13,0,(ForAnyElementType *)&local_1e0,iVar29,&local_1e0.Data.ArrayMax);
      if (iVar29 != 0) {
        memcpy(local_1e0.Data.AllocatorInstance.Data,pFVar28,(longlong)iVar29 * 2);
      }
    }
    ::FString::PathAppend(&local_1e0,*(wchar_t **)pFVar20,iVar11);
    pFVar34 = local_240;
    local_150 = &local_1e0;
    pFVar6 = (local_240->FakeFileSystem).Ptr;
    TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FString_const_&>_>
              ((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&pFVar6->DiskData,&local_1d0,(bool *)&local_150);
    lVar21 = *(longlong *)&pFVar6->DiskData + (longlong)(int)local_1d0.Key * 0x28;
    piVar1 = (int *)(lVar21 + 0x18);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,100,(ForAnyElementType *)(lVar21 + 0x10),piVar1,(int *)(lVar21 + 0x1c));
    iVar11 = *piVar1;
    iVar29 = 0;
    piVar7 = *(int **)(lVar21 + 0x10);
    piVar25 = piVar7;
    if (-1 < iVar11 + -4) {
      do {
        iVar29 = iVar29 + 4;
        iVar31 = iVar31 * 0xbb38435 + 0x3619636b;
        *piVar25 = iVar31;
        iVar11 = *piVar1;
        piVar25 = piVar25 + 1;
      } while (iVar29 <= iVar11 + -4);
    }
    FSHA1::HashBuffer(piVar7,(longlong)iVar11,local_48);
    if (((pFVar34->MockManifest).Object == (FMockManifest *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_b8 = local_48;
    local_c0 = pFVar20;
    TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FSHAHash_const_&>_>
              ((TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
                *)&((pFVar34->MockManifest).Object)->FileNameToHashes,
               (TPairInitializer<FString_const_&,FSHAHash_const_&> *)local_15c,(bool *)&local_c0);
    if (((pFVar34->MockManifest).Object == (FMockManifest *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_148 = (longlong)*piVar1;
    local_a8 = &local_148;
    local_b0 = pFVar20;
    TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,__int64_&&>_>
              ((TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
                *)&((pFVar34->MockManifest).Object)->FileNameToFileSize,
               (TPairInitializer<FString_const_&,__int64_&&> *)(local_15c + 4),(bool *)&local_b0);
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    uVar30 = (ulonglong)local_234;
    pFVar20 = pFVar20 + 0x10;
  } while( true );
}

// MakeUnit @ 143324b10

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FVerifierSpec::MakeUnit(FVerifierSpec *this,EVerifyMode param_1)

{
  IVerifier *pIVar1;
  FString *pFVar2;
  FString *pFVar3;
  IVerifier *pIVar4;
  TSharedPtr<IBuildInstallerSharedContext,1> local_38;
  FString local_28;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_28,&this->StagedFileDirectory);
  pFVar3 = ::FString::FString(&local_18,&this->VerifyDirectory);
  local_38.Object = (IBuildInstallerSharedContext *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pIVar4 = BuildPatchServices::FVerifierFactory::Create
                     ((IFileSystem *)(this->FakeFileSystem).Ptr,
                      (IVerifierStat *)(this->MockVerificationStat).Ptr,param_1,&local_38,
                      (this->ManifestSet).Ptr,pFVar3,pFVar2);
  pIVar1 = (this->Verifier).Ptr;
  if ((pIVar1 != pIVar4) && ((this->Verifier).Ptr = pIVar4, pIVar1 != (IVerifier *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  if ((param_1 - ShaVerifyTouchedFiles & 0xfffffffd) == 0) {
    pIVar1 = (this->Verifier).Ptr;
    (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,&this->TouchedFiles);
  }
  return;
}

// PauseFor @ 143325930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TFuture<void> * __thiscall
FVerifierSpec::PauseFor(FVerifierSpec *this,TFuture<void> *__return_storage_ptr__,float param_1)

{
  IVerifier *pIVar1;
  double dVar2;
  code **ppcVar3;
  undefined4 uVar4;
  undefined1 auStack_b8 [32];
  FVerifierSpec *local_98 [5];
  undefined8 local_70;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  dVar2 = BuildPatchServices::FStatsCollector::GetSeconds();
  uVar4 = (undefined4)((ulonglong)dVar2 >> 0x20);
  pIVar1 = (this->Verifier).Ptr;
  (**(code **)((longlong)*pIVar1 + 8))(pIVar1,1);
  local_68[0] = (code *)0x0;
  local_98[0] = this;
  local_40 = FMemory::Malloc(0x20,8);
  local_70 = 0;
  *local_40 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FVerifierSpec::PauseFor'::`2'::<lambda_1>,0,1>::
                       _vftable_;
  *(undefined4 *)(local_40 + 1) = local_98[0]._0_4_;
  *(undefined4 *)((longlong)local_40 + 0xc) = local_98[0]._4_4_;
  *(int *)(local_40 + 2) = SUB84(dVar2,0);
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar4;
  local_98[0] = (FVerifierSpec *)0x0;
  local_40[3] = (code *)CONCAT44(local_98[2]._4_4_,param_1);
  if (local_40 + 1 != (code **)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FVerifierSpec::PauseFor'::__l2::<lambda_1>,void>::Call;
  }
  local_98[2]._0_4_ = param_1;
  local_98[1]._0_4_ = SUB84(dVar2,0);
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

// ResizeSomeFiles @ 143326820

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FVerifierSpec::ResizeSomeFiles(FVerifierSpec *this)

{
  undefined1 *puVar1;
  FString *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  FFakeFileSystem *pFVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  TTuple<FString,FSHAHash> *pTVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *_Src;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined1 local_b8 [8];
  FString local_b0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  puVar1 = &(this->SomeFiles).Elements.field_0x10;
  iVar11 = *(int *)&(this->SomeFiles).Elements.field_0x28;
  local_a0 = &this->SomeFiles;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar11 != 0) {
    puVar18 = *(uint **)&(this->SomeFiles).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    local_80 = 0;
    while (uVar16 == 0) {
      lVar13 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_1433268cd;
      uVar16 = puVar18[lVar13 + 1];
    }
    uStack_94 = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res10 = (int)lVar13;
    iStack_84 = local_res10 + -1 + local_80;
    if (iVar11 < iStack_84) {
      iStack_84 = iVar11;
    }
  }
LAB_1433268cd:
  uVar16 = *(uint *)&(this->SomeFiles).Elements.field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  iStack_78 = *(int *)&(this->SomeFiles).Elements.field_0x8 -
              *(int *)&(this->SomeFiles).Elements.field_0x34;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = local_a0;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar11 < (int)uVar16)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->SomeFiles).Elements.field_0x28;
  if (uVar16 != uVar4) {
    puVar17 = *(undefined1 **)&(this->SomeFiles).Elements.field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1433269d0;
      uVar16 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res18 = (int)lVar13;
    uVar16 = local_res18 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_1433269d0:
  do {
    pTVar8 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar16) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar8 == &this->SomeFiles)) {
      return;
    }
    iVar14 = (this->VerifyDirectory).Data.ArrayNum;
    pFVar2 = (FString *)
             (*(longlong *)&pTVar8->Elements + (longlong)TStack_68.CurrentBitIndex * 0x18);
    iVar10 = (pFVar2->Data).ArrayNum;
    iVar11 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar11 = 0;
    }
    local_b0.Data.ArrayNum = iVar14;
    if ((iVar14 == 0) && (iVar11 != -1)) {
      _Src = (this->VerifyDirectory).Data.AllocatorInstance.Data;
      iVar10 = iVar11 + 2;
LAB_143326a5a:
      local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar10 != 0) goto LAB_143326a63;
      local_b0.Data.ArrayMax = 0;
    }
    else {
      _Src = (this->VerifyDirectory).Data.AllocatorInstance.Data;
      iVar10 = iVar11 + 1;
      if (iVar14 == 0) goto LAB_143326a5a;
LAB_143326a63:
      local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar15 = iVar14 + iVar10;
      if ((int)uVar15 < iVar14) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar15,0,(ForAnyElementType *)&local_b0,iVar14,&local_b0.Data.ArrayMax);
      if (iVar14 != 0) {
        memcpy(local_b0.Data.AllocatorInstance.Data,_Src,(longlong)iVar14 * 2);
      }
    }
    ::FString::PathAppend(&local_b0,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar11);
    pFVar5 = (this->FakeFileSystem).Ptr;
    iVar11 = local_b0.Data.ArrayNum + -1;
    FVar7.Data = local_b0.Data.AllocatorInstance.Data;
    if (local_b0.Data.ArrayNum == 0) {
      iVar11 = 0;
      FVar7.Data = (FScriptContainerElement *)L"";
    }
    uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar7.Data);
    iVar11 = TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                         *)&pFVar5->DiskData,uVar15,&local_b0);
    if (iVar11 == -1) {
      lVar13 = 0;
LAB_143326b15:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      lVar13 = *(longlong *)&pFVar5->DiskData + (longlong)iVar11 * 0x28;
      if (lVar13 == 0) goto LAB_143326b15;
    }
    local_b8[0] = 0x7b;
    if (((*(undefined1 **)(lVar13 + 0x10) <= local_b8) &&
        (local_b8 < *(undefined1 **)(lVar13 + 0x10) + *(int *)(lVar13 + 0x1c))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = *(int *)(lVar13 + 0x18);
    if (iVar11 == *(int *)(lVar13 + 0x1c)) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x101,(ForAnyElementType *)(lVar13 + 0x10),(int *)(lVar13 + 0x1c));
    }
    *(int *)(lVar13 + 0x18) = iVar11 + 1;
    *(undefined1 *)((longlong)iVar11 + *(longlong *)(lVar13 + 0x10)) = local_b8[0];
    if (((this->MockManifest).Object == (FMockManifest *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar12 = TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
                      *)&((this->MockManifest).Object)->FileNameToHashes,pFVar2);
    if ((pTVar12 == (TTuple<FString,FSHAHash> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FSHA1::HashBuffer(*(void **)(lVar13 + 0x10),(longlong)*(int *)(lVar13 + 0x18),
                      &pTVar12->field_0x10);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// StageSomeFiles @ 143327af0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FVerifierSpec::StageSomeFiles(FVerifierSpec *this)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  FFakeFileSystem *pFVar5;
  code *pcVar6;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  FString local_d8;
  FString local_c8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FString *local_58;
  longlong local_50;
  
  puVar1 = &(this->SomeFiles).Elements.field_0x10;
  iStack_b0 = 0;
  iVar10 = *(int *)&(this->SomeFiles).Elements.field_0x28;
  local_b8 = &this->SomeFiles;
  local_98 = 0;
  uStack_ac = 1;
  iStack_9c = 0;
  if (iVar10 != 0) {
    puVar18 = *(uint **)&(this->SomeFiles).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar15 = *puVar18;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_b0;
      local_98 = local_98 + 0x20;
      iStack_b0 = iStack_b0 + 1;
      iStack_9c = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_143327b9d;
      uVar15 = puVar18[lVar11 + 1];
    }
    uStack_ac = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_ac * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iStack_9c = local_98 + -1 + local_res10;
    if (iVar10 < iStack_9c) {
      iStack_9c = iVar10;
    }
  }
LAB_143327b9d:
  uVar15 = *(uint *)&(this->SomeFiles).Elements.field_0x28;
  uVar19 = uVar15 & 0xffffffe0;
  iStack_90 = *(int *)&(this->SomeFiles).Elements.field_0x8 -
              *(int *)&(this->SomeFiles).Elements.field_0x34;
  uStack_a0 = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_ac,iStack_b0);
  TStack_80.CurrentBitIndex = iStack_9c;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_80._28_4_ = iStack_9c;
  TStack_80.BaseBitIndex = local_98;
  uStack_60 = CONCAT44(uStack_8c,iStack_90);
  local_a8 = puVar1;
  iStack_94 = iStack_9c;
  local_88 = local_b8;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar10 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->SomeFiles).Elements.field_0x28;
  if (uVar15 != uVar4) {
    puVar17 = *(undefined1 **)&(this->SomeFiles).Elements.field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar13;
      uVar19 = uVar19 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_143327ca0;
      uVar15 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    uVar15 = local_res18 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_143327ca0:
  do {
    pTVar7 = local_88;
    if (*(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34 !=
        (int)uStack_60) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar15) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar7 == &this->SomeFiles)) {
      return;
    }
    iVar13 = (this->VerifyDirectory).Data.ArrayNum;
    puVar2 = (undefined8 *)
             (*(longlong *)&pTVar7->Elements + (longlong)TStack_80.CurrentBitIndex * 0x18);
    iVar10 = *(int *)(puVar2 + 1) + -1;
    if (*(int *)(puVar2 + 1) == 0) {
      iVar10 = 0;
    }
    iVar9 = iVar10 + 1;
    local_d8.Data.ArrayNum = iVar13;
    if ((iVar13 == 0) && (iVar9 != 0)) {
      pFVar16 = (this->VerifyDirectory).Data.AllocatorInstance.Data;
      iVar9 = iVar10 + 2;
LAB_143327d29:
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar9 != 0) goto LAB_143327d32;
      local_d8.Data.ArrayMax = 0;
    }
    else {
      pFVar16 = (this->VerifyDirectory).Data.AllocatorInstance.Data;
      if (iVar13 == 0) goto LAB_143327d29;
LAB_143327d32:
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar19 = iVar9 + iVar13;
      if ((int)uVar19 < iVar13) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar19,0,(ForAnyElementType *)&local_d8,iVar13,&local_d8.Data.ArrayMax);
      if (iVar13 != 0) {
        memcpy(local_d8.Data.AllocatorInstance.Data,pFVar16,(longlong)iVar13 * 2);
      }
    }
    ::FString::PathAppend(&local_d8,(wchar_t *)*puVar2,iVar10);
    iVar13 = (this->StagedFileDirectory).Data.ArrayNum;
    iVar10 = *(int *)(puVar2 + 1) + -1;
    if (*(int *)(puVar2 + 1) == 0) {
      iVar10 = 0;
    }
    iVar9 = iVar10 + 1;
    local_c8.Data.ArrayNum = iVar13;
    if ((iVar13 == 0) && (iVar9 != 0)) {
      pFVar16 = (this->StagedFileDirectory).Data.AllocatorInstance.Data;
      iVar9 = iVar10 + 2;
LAB_143327dd4:
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar9 != 0) goto LAB_143327ddd;
      local_c8.Data.ArrayMax = 0;
    }
    else {
      pFVar16 = (this->StagedFileDirectory).Data.AllocatorInstance.Data;
      if (iVar13 == 0) goto LAB_143327dd4;
LAB_143327ddd:
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar19 = iVar9 + iVar13;
      if ((int)uVar19 < iVar13) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar19,0,(ForAnyElementType *)&local_c8,iVar13,&local_c8.Data.ArrayMax);
      if (iVar13 != 0) {
        memcpy(local_c8.Data.AllocatorInstance.Data,pFVar16,(longlong)iVar13 * 2);
      }
    }
    ::FString::PathAppend(&local_c8,(wchar_t *)*puVar2,iVar10);
    pFVar5 = (this->FakeFileSystem).Ptr;
    if (local_d8.Data.ArrayNum == 0) {
      iVar10 = 0;
      pwVar12 = L"";
    }
    else {
      iVar10 = local_d8.Data.ArrayNum + -1;
      pwVar12 = (wchar_t *)local_d8.Data.AllocatorInstance.Data;
    }
    lVar14 = 0;
    uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar12);
    iVar10 = TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                         *)&pFVar5->DiskData,uVar19,&local_d8);
    lVar11 = lVar14;
    if (((iVar10 == -1) ||
        (lVar11 = *(longlong *)&pFVar5->DiskData + (longlong)iVar10 * 0x28, lVar11 == 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_58 = &local_c8;
    local_50 = lVar11 + 0x10;
    TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FString_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&>_>
              ((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&pFVar5->DiskData,
               (TPairInitializer<FString_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&>
                *)&stack0x00000020,(bool *)&local_58);
    pFVar5 = (this->FakeFileSystem).Ptr;
    iVar10 = 0;
    if (*(int *)&(pFVar5->DiskData).field_0x8 != *(int *)&(pFVar5->DiskData).field_0x34) {
      if (local_d8.Data.ArrayNum == 0) {
        pwVar12 = L"";
        iVar13 = iVar10;
      }
      else {
        pwVar12 = (wchar_t *)local_d8.Data.AllocatorInstance.Data;
        iVar13 = local_d8.Data.ArrayNum + -1;
      }
      uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar12);
      TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FString>
                ((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&pFVar5->DiskData,uVar19,&local_d8);
    }
    if (local_d8.Data.ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      iVar10 = local_d8.Data.ArrayNum + -1;
      pwVar12 = (wchar_t *)local_d8.Data.AllocatorInstance.Data;
    }
    uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar12);
    iVar10 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                         *)&this->DiskFileToManifestFile,uVar19,&local_d8);
    if (((iVar10 == -1) ||
        (lVar14 = *(longlong *)&this->DiskFileToManifestFile + (longlong)iVar10 * 0x28, lVar14 == 0)
        ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    ::FString::operator=((FString *)(lVar14 + 0x10),L"Break");
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  } while( true );
}

// TouchAllFiles @ 143328540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FVerifierSpec::TouchAllFiles(FVerifierSpec *this)

{
  undefined8 *puVar1;
  uint *puVar2;
  FMockManifest *pFVar3;
  longlong lVar4;
  code *pcVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  byte bVar12;
  TSparseSetElement<FString> *pTVar13;
  ForAnyElementType FVar14;
  ForElementType<unsigned_int> FVar15;
  wchar_t *pwVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  TSparseSetElement<FString> *pTVar21;
  TSparseSetElement<FString> *pTVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  undefined1 auStackY_168 [32];
  int local_138 [2];
  uint local_130;
  uint uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_128;
  undefined4 local_120;
  uint uStack_11c;
  uint uStack_118;
  undefined4 uStack_114;
  uint local_110;
  uint uStack_10c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_108;
  undefined4 local_100;
  uint uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  FSparseArrayAllocationInfo local_a0;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (((this->MockManifest).Object == (FMockManifest *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this->MockManifest).Object;
  uVar10 = (pFVar3->BuildFileList).ArrayNum;
  pFVar23 = (pFVar3->BuildFileList).AllocatorInstance.Data;
  if (((int)uVar10 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar22 = (TSparseSetElement<FString> *)0x0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  iVar19 = 0;
  if (uVar10 == 0) goto LAB_14332884a;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar10);
  uVar17 = 1;
  if (3 < uVar10) {
    uVar20 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar17 <= (int)local_40)) goto LAB_14332884a;
  local_40 = uVar17;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar17 != 0) {
    uVar18 = uVar17;
    if (uVar17 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar18 = 0;
        goto LAB_14332868d;
      }
    }
    else {
LAB_14332868d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar18,4);
    }
    if (0 < (int)uVar17) {
      uVar20 = (ulonglong)uVar17;
      pTVar13 = pTVar22;
      do {
        FVar14.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_48.Data;
        }
        uVar11 = (ulonglong)pTVar13 & (longlong)(int)uVar17 - 1U;
        pTVar13 = (TSparseSetElement<FString> *)&pTVar13->field_0x1;
        *(undefined4 *)(FVar14.Data + uVar11 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if (local_40 != 0) {
    pTStack_128 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    local_130 = 0;
    uStack_12c = 1;
    uStack_11c = 0;
    uStack_118 = 0;
    pTVar13 = pTVar22;
    if (local_60 != 0) {
      FVar15 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_68;
      }
      uVar17 = *(uint *)FVar15;
      pTVar21 = pTVar22;
      while (uVar17 == 0) {
        uStack_118 = (int)pTVar21 + 0x20;
        pTVar21 = (TSparseSetElement<FString> *)(ulonglong)uStack_118;
        iVar8 = (int)pTVar13;
        local_130 = iVar8 + 1;
        pTVar13 = (TSparseSetElement<FString> *)(ulonglong)local_130;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_130)
        goto LAB_14332878c;
        uVar17 = ((uint *)((longlong)FVar15 + 4))[iVar8];
      }
      uStack_12c = -uVar17 & uVar17;
      uVar20 = (ulonglong)uStack_12c * 2 + 1;
      lVar4 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_11c = (int)lVar4 + -1 + uStack_118;
      pTVar13 = (TSparseSetElement<FString> *)(ulonglong)uStack_11c;
      if ((int)local_60 < (int)uStack_11c) {
LAB_14332878c:
        pTVar13 = (TSparseSetElement<FString> *)(ulonglong)local_60;
        uStack_11c = local_60;
      }
    }
    local_120 = 0xffffffff;
    local_f0 = (longlong *)local_88;
    local_e8._padding_ = CONCAT44(uStack_12c,local_130);
    local_e8.CurrentBitIndex = uStack_11c;
    local_e8.UnvisitedBitMask = 0xffffffff;
    local_e8._28_4_ = uStack_114;
    local_e8.BaseBitIndex = uStack_118;
    local_e8.Array = pTStack_128;
    if ((int)pTVar13 < (int)local_60) {
      do {
        iVar9 = (int)pTVar13;
        puVar1 = (undefined8 *)(*local_f0 + (longlong)iVar9 * 0x18);
        iVar8 = *(int *)(*local_f0 + 8 + (longlong)iVar9 * 0x18);
        if (iVar8 == 0) {
          pwVar16 = L"";
          iVar8 = iVar19;
        }
        else {
          pwVar16 = (wchar_t *)*puVar1;
          iVar8 = iVar8 + -1;
        }
        uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar16);
        uVar17 = local_40 - 1 & uVar17;
        *(uint *)((longlong)puVar1 + 0x14) = uVar17;
        FVar14.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_48.Data;
        }
        uVar20 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar17;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(FVar14.Data + uVar20 * 4);
        *(int *)(FVar14.Data + uVar20 * 4) = iVar9;
        local_e8.UnvisitedBitMask = local_e8.UnvisitedBitMask & ~local_e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e8);
        pTVar13 = (TSparseSetElement<FString> *)(ulonglong)(uint)local_e8.CurrentBitIndex;
      } while (local_e8.CurrentBitIndex < (local_e8.Array)->NumBits);
    }
  }
LAB_14332884a:
  pFVar24 = pFVar23 + (longlong)(int)uVar10 * 0x10;
  iVar8 = local_58;
  do {
    local_58 = iVar8;
    if (pFVar23 == pFVar24) {
      if (&this->TouchedFiles !=
          (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_88) {
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
        Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                  (&this->TouchedFiles,
                   (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_88);
      }
      local_40 = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_88,0);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_68);
      }
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
      return;
    }
    if (local_54 == 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                         (int *)(local_88 + 0xc));
      iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),1);
      FVar15 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_68;
      }
      bVar12 = (byte)iVar9 & 0x1f;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 0x1f;
        bVar12 = bVar12 - 0x20;
      }
      puVar2 = (uint *)((longlong)FVar15 + (longlong)(iVar9 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << (bVar12 & 0x1f));
    }
    else {
      local_54 = local_54 + -1;
      local_58 = *(int *)(local_88._0_8_ + (longlong)iVar8 * 0x18 + 4);
      if (local_54 != 0) {
        *(undefined4 *)(local_88._0_8_ + (longlong)local_58 * 0x18) = 0xffffffff;
      }
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,&local_a0,iVar8);
    pvVar6 = local_a0.Pointer;
    pTVar13 = pTVar22;
    if (local_a0.Pointer != (TSparseSetElement<FString> *)0x0) {
      ::FString::FString(local_a0.Pointer,(FString *)pFVar23);
      *(undefined4 *)((longlong)pvVar6 + 0x10) = 0xffffffff;
      pTVar13 = pvVar6;
    }
    local_138[0] = local_a0.Index;
    if (*(int *)&pTVar13->field_0x8 == 0) {
      pwVar16 = L"";
      iVar8 = iVar19;
    }
    else {
      pwVar16 = *(wchar_t **)pTVar13;
      iVar8 = *(int *)&pTVar13->field_0x8 + -1;
    }
    uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar16);
    bVar7 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::TryReplaceExisting
                      ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_88,
                       uVar10,pTVar13,local_138,(bool *)0x0);
    if (!bVar7) {
      uVar18 = 1;
      uVar17 = local_88._8_4_ - local_54;
      if (3 < uVar17) {
        uVar20 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar18 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((int)uVar17 < 1) || ((int)uVar18 <= (int)local_40)) {
        uVar10 = local_40 - 1 & uVar10;
        *(uint *)&pTVar13->field_0x14 = uVar10;
        FVar14.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_48.Data;
        }
        uVar20 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)&pTVar13->field_0x10 = *(undefined4 *)(FVar14.Data + uVar20 * 4);
        *(int *)(FVar14.Data + uVar20 * 4) = local_138[0];
      }
      else {
        local_40 = uVar18;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
        }
        if (uVar18 != 0) {
          uVar10 = uVar18;
          if (uVar18 < 2) {
            if (local_48.Data != (FScriptContainerElement *)0x0) {
              uVar10 = 0;
              goto LAB_1433289ed;
            }
          }
          else {
LAB_1433289ed:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_48,0,uVar10,4);
          }
          if (0 < (int)uVar18) {
            uVar20 = (ulonglong)uVar18;
            pTVar13 = pTVar22;
            do {
              FVar14.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar14.Data = local_48.Data;
              }
              uVar11 = (ulonglong)pTVar13 & (longlong)(int)uVar18 - 1U;
              pTVar13 = (TSparseSetElement<FString> *)&pTVar13->field_0x1;
              *(undefined4 *)(FVar14.Data + uVar11 * 4) = 0xffffffff;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
        }
        if (local_40 != 0) {
          pTStack_108 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
          local_110 = 0;
          uStack_10c = 1;
          uStack_fc = 0;
          uStack_f8 = 0;
          pTVar13 = pTVar22;
          if (local_60 != 0) {
            FVar15 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
            if (local_68 != (ForElementType<unsigned_int>)0x0) {
              FVar15 = local_68;
            }
            uVar10 = *(uint *)FVar15;
            pTVar21 = pTVar22;
            while (uVar10 == 0) {
              uStack_f8 = (int)pTVar21 + 0x20;
              pTVar21 = (TSparseSetElement<FString> *)(ulonglong)uStack_f8;
              iVar8 = (int)pTVar13;
              local_110 = iVar8 + 1;
              pTVar13 = (TSparseSetElement<FString> *)(ulonglong)local_110;
              if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_110) goto LAB_143328aec;
              uVar10 = ((uint *)((longlong)FVar15 + 4))[iVar8];
            }
            uStack_10c = -uVar10 & uVar10;
            uVar20 = (ulonglong)uStack_10c * 2 + 1;
            lVar4 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
              }
            }
            uStack_fc = (int)lVar4 + -1 + uStack_f8;
            pTVar13 = (TSparseSetElement<FString> *)(ulonglong)uStack_fc;
            if ((int)local_60 < (int)uStack_fc) {
LAB_143328aec:
              pTVar13 = (TSparseSetElement<FString> *)(ulonglong)local_60;
              uStack_fc = local_60;
            }
          }
          local_100 = 0xffffffff;
          local_c8 = (longlong *)local_88;
          local_c0._padding_ = CONCAT44(uStack_10c,local_110);
          local_c0.CurrentBitIndex = uStack_fc;
          local_c0.UnvisitedBitMask = 0xffffffff;
          local_c0._28_4_ = uStack_f4;
          local_c0.BaseBitIndex = uStack_f8;
          local_c0.Array = pTStack_108;
          if ((int)pTVar13 < (int)local_60) {
            do {
              iVar9 = (int)pTVar13;
              puVar1 = (undefined8 *)(*local_c8 + (longlong)iVar9 * 0x18);
              iVar8 = *(int *)(*local_c8 + 8 + (longlong)iVar9 * 0x18);
              if (iVar8 == 0) {
                pwVar16 = L"";
                iVar8 = iVar19;
              }
              else {
                pwVar16 = (wchar_t *)*puVar1;
                iVar8 = iVar8 + -1;
              }
              uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar16);
              uVar10 = local_40 - 1 & uVar10;
              *(uint *)((longlong)puVar1 + 0x14) = uVar10;
              FVar14.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar14.Data = local_48.Data;
              }
              uVar20 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar10;
              *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(FVar14.Data + uVar20 * 4);
              *(int *)(FVar14.Data + uVar20 * 4) = iVar9;
              local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
              pTVar13 = (TSparseSetElement<FString> *)(ulonglong)(uint)local_c0.CurrentBitIndex;
            } while (local_c0.CurrentBitIndex < (local_c0.Array)->NumBits);
          }
        }
      }
    }
    pFVar23 = pFVar23 + 0x10;
    iVar8 = local_58;
  } while( true );
}

// TouchSomeFiles @ 143328c90

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FVerifierSpec::TouchSomeFiles(FVerifierSpec *this)

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
  
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Reset(&this->TouchedFiles);
  iVar11 = 0;
  puVar1 = &(this->SomeFiles).Elements.field_0x10;
  iVar3 = *(int *)&(this->SomeFiles).Elements.field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->SomeFiles).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_143328d4d;
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
LAB_143328d4d:
  uVar10 = *(uint *)&(this->SomeFiles).Elements.field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->SomeFiles).Elements.field_0x8 -
                       *(int *)&(this->SomeFiles).Elements.field_0x34);
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
  uVar6 = *(uint *)&(this->SomeFiles).Elements.field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->SomeFiles).Elements.field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_143328e50;
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
LAB_143328e50:
  while( true ) {
    if (*(int *)&(this->SomeFiles).Elements.field_0x8 -
        *(int *)&(this->SomeFiles).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&this->TouchedFiles,(FString *)&stack0x00000018,
               (bool *)(*(longlong *)&(this->SomeFiles).Elements +
                       (longlong)TStack_60.CurrentBitIndex * 0x18));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

