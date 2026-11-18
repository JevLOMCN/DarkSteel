// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 13

// GetTestFlags @ 1432f8210

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

EAutomationTestFlags __thiscall FFileAttributionSpec::GetTestFlags(FFileAttributionSpec *this)

{
  return ProductFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// GetTestSourceFileName @ 1432f8220

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall
FFileAttributionSpec::GetTestSourceFileName
          (FFileAttributionSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Tests\\Unit\\FileAttribution.spec.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1432f8250

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

int __thiscall FFileAttributionSpec::GetTestSourceFileLine(FFileAttributionSpec *this)

{
  return 0x10;
}

// GetBeautifiedTestName @ 1432f8260

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall
FFileAttributionSpec::GetBeautifiedTestName
          (FFileAttributionSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"BuildPatchServices.Unit");
  return __return_storage_ptr__;
}

// Define @ 1432f8290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FFileAttributionSpec::Define(FFileAttributionSpec *this)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_01;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar1;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar2;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  FString local_f0;
  undefined1 local_d8 [24];
  FFileAttributionSpec *local_c0;
  undefined8 local_b0;
  ForElementType<FSetElementId> local_98;
  int local_90;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  ::FString::operator=(&this->InstallDirectory,L"InstallDir/");
  ::FString::operator=(&this->StagedFileDirectory,L"StagedFileDir/");
  ::FString::FString(&local_f0,L"New/Exe");
  pTVar2 = &this->NewFiles;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (pTVar2,(FString *)local_f8,(bool *)&local_f0);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (&this->ExeFiles,(FString *)local_f8,
             (bool *)(*(longlong *)&pTVar2->Elements + (longlong)(int)local_f8._0_4_ * 0x18));
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f0,L"New/ReadOnly");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (pTVar2,(FString *)local_f8,(bool *)&local_f0);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (&this->ReadOnlyFiles,(FString *)local_f8,
             (bool *)(*(longlong *)&pTVar2->Elements + (longlong)(int)local_f8._0_4_ * 0x18));
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f0,L"New/Compressed");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (pTVar2,(FString *)local_f8,(bool *)&local_f0);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (&this->CompressedFiles,(FString *)local_f8,
             (bool *)(*(longlong *)&pTVar2->Elements + (longlong)(int)local_f8._0_4_ * 0x18));
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f0,L"Changed/Exe");
  this_00 = &this->ChangedFiles;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (this_00,(FString *)local_f8,(bool *)&local_f0);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (&this->ExeFiles,(FString *)local_f8,
             (bool *)(*(longlong *)&this_00->Elements + (longlong)(int)local_f8._0_4_ * 0x18));
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f0,L"Changed/ReadOnly");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (this_00,(FString *)local_f8,(bool *)&local_f0);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (&this->ReadOnlyFiles,(FString *)local_f8,
             (bool *)(*(longlong *)&this_00->Elements + (longlong)(int)local_f8._0_4_ * 0x18));
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f0,L"Changed/Compressed");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (this_00,(FString *)local_f8,(bool *)&local_f0);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (&this->CompressedFiles,(FString *)local_f8,
             (bool *)(*(longlong *)&this_00->Elements + (longlong)(int)local_f8._0_4_ * 0x18));
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f0,L"Same/Exe");
  this_01 = &this->SameFiles;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (this_01,(FString *)local_f8,(bool *)&local_f0);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (&this->ExeFiles,(FString *)local_f8,
             (bool *)(*(longlong *)&this_01->Elements + (longlong)(int)local_f8._0_4_ * 0x18));
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f0,L"Same/ReadOnly");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (this_01,(FString *)local_f8,(bool *)&local_f0);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (&this->ReadOnlyFiles,(FString *)local_f8,
             (bool *)(*(longlong *)&this_01->Elements + (longlong)(int)local_f8._0_4_ * 0x18));
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f0,L"Same/Compressed");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (this_01,(FString *)local_f8,(bool *)&local_f0);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (&this->CompressedFiles,(FString *)local_f8,
             (bool *)(*(longlong *)&this_01->Elements + (longlong)(int)local_f8._0_4_ * 0x18));
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  pTVar1 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Union
                     (pTVar2,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                             local_d8,this_00);
  if (&this->TouchedFiles != pTVar1) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>(&this->TouchedFiles,pTVar1)
    ;
  }
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
  pTVar2 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Union
                     (pTVar2,&local_88,this_00);
  pTVar2 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Union
                     (pTVar2,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                             local_d8,this_01);
  if (&this->AllFiles != pTVar2) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>(&this->AllFiles,pTVar2);
  }
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  ::FString::operator=(&this->MissingFile,L"MissingFile.dat");
  local_b0 = 0;
  local_d8._16_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FFileAttributionSpec::Define'::`2'::<lambda_1>,0,0>::_vftable_;
  local_d8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FFileAttributionSpec::Define'::__l2::<lambda_1>,void>::Call;
  local_c0 = this;
  FAutomationSpecBase::BeforeEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_d8);
  local_b0 = 0;
  local_d8._16_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FFileAttributionSpec::Define'::`2'::<lambda_2>,0,0>::_vftable_;
  local_d8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FFileAttributionSpec::Define'::__l2::<lambda_2>,void>::Call;
  local_c0 = this;
  ::FString::FString(&local_f0,"FileAttribution");
  FAutomationSpecBase::Describe
            ((FAutomationSpecBase *)this,&local_f0,(TFunction<void___cdecl(void)> *)local_d8);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  local_b0 = 0;
  local_d8._16_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FFileAttributionSpec::Define'::`2'::<lambda_3>,0,0>::_vftable_;
  local_d8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FFileAttributionSpec::Define'::__l2::<lambda_3>,void>::Call;
  local_c0 = this;
  FAutomationSpecBase::AfterEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_d8);
  return;
}

// FFileAttributionSpec @ 1432facb0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FFileAttributionSpec * __thiscall
FFileAttributionSpec::FFileAttributionSpec(FFileAttributionSpec *this,FString *param_1)

{
  FAutomationSpecBase::FAutomationSpecBase((FAutomationSpecBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FFileAttributionSpec__6B_;
  (this->FileAttribution).Ptr = (IFileAttribution *)0x0;
  (this->MockFileSystem).Ptr = (FMockFileSystem *)0x0;
  (this->MockNewManifest).Object = (FMockManifest *)0x0;
  (this->MockNewManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MockOldManifest).Object = (FMockManifest *)0x0;
  (this->MockOldManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MockBuildProgress).Ptr = (FMockBuildPatchProgress *)0x0;
  (this->ManifestSet).Ptr = (IBuildManifestSet *)0x0;
  (this->InstallDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstallDirectory).Data.ArrayNum = 0;
  (this->InstallDirectory).Data.ArrayMax = 0;
  (this->StagedFileDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StagedFileDirectory).Data.ArrayNum = 0;
  (this->StagedFileDirectory).Data.ArrayMax = 0;
  (this->MissingFile).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MissingFile).Data.ArrayNum = 0;
  (this->MissingFile).Data.ArrayMax = 0;
  *(undefined8 *)&(this->NewFiles).Elements = 0;
  *(undefined8 *)&(this->NewFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NewFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NewFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NewFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NewFiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NewFiles).Elements.field_0x34 = 0;
  (this->NewFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NewFiles).HashSize = 0;
  *(undefined8 *)&(this->ChangedFiles).Elements = 0;
  *(undefined8 *)&(this->ChangedFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ChangedFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ChangedFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ChangedFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ChangedFiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChangedFiles).Elements.field_0x34 = 0;
  (this->ChangedFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ChangedFiles).HashSize = 0;
  *(undefined8 *)&(this->SameFiles).Elements = 0;
  *(undefined8 *)&(this->SameFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SameFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SameFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SameFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SameFiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SameFiles).Elements.field_0x34 = 0;
  (this->SameFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SameFiles).HashSize = 0;
  *(undefined8 *)&(this->ExeFiles).Elements = 0;
  *(undefined8 *)&(this->ExeFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ExeFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ExeFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ExeFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExeFiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExeFiles).Elements.field_0x34 = 0;
  (this->ExeFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ExeFiles).HashSize = 0;
  *(undefined8 *)&(this->ReadOnlyFiles).Elements = 0;
  *(undefined8 *)&(this->ReadOnlyFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReadOnlyFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReadOnlyFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReadOnlyFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReadOnlyFiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReadOnlyFiles).Elements.field_0x34 = 0;
  (this->ReadOnlyFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReadOnlyFiles).HashSize = 0;
  *(undefined8 *)&(this->CompressedFiles).Elements = 0;
  *(undefined8 *)&(this->CompressedFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CompressedFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CompressedFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CompressedFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CompressedFiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompressedFiles).Elements.field_0x34 = 0;
  (this->CompressedFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CompressedFiles).HashSize = 0;
  *(undefined8 *)&(this->TouchedFiles).Elements = 0;
  *(undefined8 *)&(this->TouchedFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TouchedFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TouchedFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TouchedFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TouchedFiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TouchedFiles).Elements.field_0x34 = 0;
  (this->TouchedFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TouchedFiles).HashSize = 0;
  *(undefined8 *)&(this->AllFiles).Elements = 0;
  *(undefined8 *)&(this->AllFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AllFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AllFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AllFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AllFiles).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->AllFiles).Elements.field_0x30 = 0xffffffff;
  (this->AllFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AllFiles).HashSize = 0;
  return this;
}

// ~FFileAttributionSpec @ 1432fd3d0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FFileAttributionSpec::~FFileAttributionSpec(FFileAttributionSpec *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  IBuildManifestSet *pIVar3;
  FMockBuildPatchProgress *pFVar4;
  FMockFileSystem *pFVar5;
  IFileAttribution *pIVar6;
  
  (this->AllFiles).HashSize = 0;
  FVar1 = (this->AllFiles).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AllFiles).Elements);
  (this->TouchedFiles).HashSize = 0;
  FVar1 = (this->TouchedFiles).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TouchedFiles).Elements);
  (this->CompressedFiles).HashSize = 0;
  FVar1 = (this->CompressedFiles).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CompressedFiles).Elements);
  (this->ReadOnlyFiles).HashSize = 0;
  FVar1 = (this->ReadOnlyFiles).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReadOnlyFiles).Elements);
  (this->ExeFiles).HashSize = 0;
  FVar1 = (this->ExeFiles).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ExeFiles).Elements);
  (this->SameFiles).HashSize = 0;
  FVar1 = (this->SameFiles).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SameFiles).Elements);
  (this->ChangedFiles).HashSize = 0;
  FVar1 = (this->ChangedFiles).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ChangedFiles).Elements);
  (this->NewFiles).HashSize = 0;
  FVar1 = (this->NewFiles).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NewFiles).Elements);
  pFVar2 = (this->MissingFile).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->StagedFileDirectory).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InstallDirectory).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->ManifestSet).Ptr;
  if (pIVar3 != (IBuildManifestSet *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  pFVar4 = (this->MockBuildProgress).Ptr;
  if (pFVar4 != (FMockBuildPatchProgress *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MockOldManifest).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MockNewManifest).SharedReferenceCount.ReferenceController);
  pFVar5 = (this->MockFileSystem).Ptr;
  if (pFVar5 != (FMockFileSystem *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  pIVar6 = (this->FileAttribution).Ptr;
  if (pIVar6 != (IFileAttribution *)0x0) {
    (**(code **)*pIVar6)(pIVar6,1);
  }
  FAutomationSpecBase::~FAutomationSpecBase((FAutomationSpecBase *)this);
  return;
}

// operator() @ 1433037b0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall `FFileAttributionSpec::Define'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  FMockFileSystem *pFVar2;
  FMockFileSystem *pFVar3;
  FMockFileSystem *pFVar4;
  
  lVar1 = *(longlong *)this;
  pFVar2 = ::operator_new(0x160);
  pFVar4 = (FMockFileSystem *)0x0;
  pFVar3 = pFVar4;
  if (pFVar2 != (FMockFileSystem *)0x0) {
    memset(pFVar2,0,0x160);
    pFVar3 = BuildPatchServices::FMockFileSystem::FMockFileSystem(pFVar2);
  }
  pFVar2 = *(FMockFileSystem **)(lVar1 + 0x1a0);
  if ((pFVar2 != pFVar3) &&
     (*(FMockFileSystem **)(lVar1 + 0x1a0) = pFVar3, pFVar2 != (FMockFileSystem *)0x0)) {
    (**(code **)pFVar2->_padding_)();
  }
  lVar1 = *(longlong *)this;
  pFVar3 = ::operator_new(0xf0);
  if (pFVar3 != (FMockFileSystem *)0x0) {
    memset(pFVar3,0,0xf0);
    BuildPatchServices::FBuildPatchProgress::FBuildPatchProgress((FBuildPatchProgress *)pFVar3);
    pFVar3->_padding_ = (longlong)&___7FMockBuildPatchProgress_BuildPatchServices__6B_;
    (pFVar3->ReadFile).ArrayNum = 0;
    (pFVar3->ReadFile).ArrayMax = 0;
    (pFVar3->WriteFile).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)&pFVar3->FileSizes = 0;
    *(undefined8 *)&(pFVar3->FileSizes).field_0x28 = 0;
    pFVar4 = pFVar3;
  }
  pFVar3 = *(FMockFileSystem **)(lVar1 + 0x1c8);
  if ((pFVar3 != pFVar4) &&
     (*(FMockFileSystem **)(lVar1 + 0x1c8) = pFVar4, pFVar3 != (FMockFileSystem *)0x0)) {
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  FFileAttributionSpec::MakeUnit(*(FFileAttributionSpec **)this);
  return;
}

// operator() @ 1433044b0

void __thiscall `FFileAttributionSpec::PauseFor'::__l2::<lambda_1>::operator()(void *this)

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
                    /* WARNING: Could not recover jumptable at 0x000143304525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*(longlong *)this + 0x198) + 8))
            (*(longlong **)(*(longlong *)this + 0x198),0);
  return;
}

// operator() @ 14330df70

void __thiscall `FFileAttributionSpec::Define'::__l2::<lambda_2>::operator()(void *this)

{
  FAutomationSpecBase *pFVar1;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FAutomationSpecBase *local_20;
  undefined8 local_10;
  
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FFileAttributionSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FFileAttributionSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"Construction");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FFileAttributionSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FFileAttributionSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"ApplyAttributes");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FFileAttributionSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FFileAttributionSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"SetPaused");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FFileAttributionSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FFileAttributionSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"Abort");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 143311220

void __thiscall `FFileAttributionSpec::Define'::__l2::<lambda_3>::operator()(void *this)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  puVar2 = *(undefined8 **)(*(longlong *)this + 0x198);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x198) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(*(longlong *)this + 0x1d0);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x1d0) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(*(longlong *)this + 0x1c8);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x1c8) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  lVar1 = *(longlong *)this;
  puVar2 = (undefined8 *)(lVar1 + 0x1b8);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (puVar2 != &local_28) {
    *puVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar1 + 0x1c0),&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  lVar1 = *(longlong *)this;
  puVar2 = (undefined8 *)(lVar1 + 0x1a8);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (puVar2 != &local_18) {
    *puVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar1 + 0x1b0),&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  puVar2 = *(undefined8 **)(*(longlong *)this + 0x1a0);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x1a0) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}

// MakeUnit @ 143323a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FFileAttributionSpec::MakeUnit(FFileAttributionSpec *this)

{
  int *piVar1;
  undefined1 *puVar2;
  FFileManifest *pFVar3;
  FChunkPart *pFVar4;
  uint uVar5;
  FFileManifest *pFVar6;
  FMockFileSystem *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  IBuildManifestSet *pIVar10;
  FMockBuildPatchProgress *pFVar11;
  IFileAttribution *pIVar12;
  code *pcVar13;
  FFileAttributionSpec *pFVar14;
  long64 *plVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  FMockManifest *pFVar19;
  FGuid *pFVar20;
  FInstallerAction *pFVar21;
  IBuildManifestSet *pIVar22;
  IFileAttribution *pIVar23;
  byte bVar24;
  EFileMetaFlags EVar25;
  longlong lVar26;
  ForAnyElementType FVar27;
  ulonglong uVar28;
  wchar_t *pwVar29;
  uint uVar30;
  int iVar31;
  ulong64 uVar32;
  uint uVar33;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar34;
  undefined1 *puVar35;
  uint *puVar36;
  EFileMetaFlags EVar37;
  int iVar38;
  int iVar39;
  FScriptContainerElement *pFVar40;
  undefined1 auStackY_5a8 [32];
  undefined1 local_558;
  undefined1 local_557 [7];
  FString local_550;
  FString local_540;
  undefined4 local_530 [2];
  int local_528;
  uint uStack_524;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_520;
  uint local_518;
  uint uStack_514;
  uint uStack_510;
  undefined4 uStack_50c;
  FString local_508;
  FString local_4f8;
  TArray<BuildPatchServices::FBuildPatchInstallerAction,TSizedDefaultAllocator<32>_> local_4e8;
  FChunkPart local_4d8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_4c0;
  int iStack_4b8;
  uint uStack_4b4;
  undefined1 *local_4b0;
  undefined4 uStack_4a8;
  int iStack_4a4;
  int local_4a0;
  int iStack_49c;
  int iStack_498;
  undefined4 uStack_494;
  TPairInitializer<FString_&&,BuildPatchServices::EAttributeFlags_&&> local_490;
  TRawPtrProxy<BuildPatchServices::FMockManifest> local_480;
  FFileAttributionSpec *local_478;
  ulong64 local_470;
  FString local_468;
  FString local_458;
  TSharedRef<IBuildManifest,1> local_448;
  int local_438;
  int local_434;
  TPairInitializer<FString_&&,__int64_&&> local_430;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_420;
  undefined8 uStack_400;
  FString *local_3f8;
  ulong64 *local_3f0;
  FString *local_3e8;
  undefined4 *local_3e0;
  TSharedPtr<IBuildManifest,1> local_3d8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_3c8;
  undefined8 uStack_3c0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  int local_3a0;
  undefined4 uStack_39c;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_398;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_348;
  undefined8 uStack_340;
  TBitArray<FDefaultBitArrayAllocator> *local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_318;
  FGuid local_2c8;
  FGuid local_2b8;
  FGuid local_2a8;
  FFileManifest local_298;
  FInstallerAction local_238;
  FBuildPatchInstallerAction local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  local_478 = this;
  pFVar19 = ::operator_new(0x768);
  local_490.Value = (EAttributeFlags *)0x0;
  if (pFVar19 != (FMockManifest *)0x0) {
    memset(pFVar19,0,0x768);
    local_490.Value = (EAttributeFlags *)BuildPatchServices::FMockManifest::FMockManifest(pFVar19);
  }
  TSharedPtr<BuildPatchServices::FMockManifest,1>::operator=<BuildPatchServices::FMockManifest>
            (&this->MockNewManifest,
             (TRawPtrProxy<BuildPatchServices::FMockManifest> *)&local_490.Value);
  pFVar19 = ::operator_new(0x768);
  local_480.Object = (FMockManifest *)0x0;
  if (pFVar19 != (FMockManifest *)0x0) {
    memset(pFVar19,0,0x768);
    local_480.Object = BuildPatchServices::FMockManifest::FMockManifest(pFVar19);
  }
  TSharedPtr<BuildPatchServices::FMockManifest,1>::operator=<BuildPatchServices::FMockManifest>
            (&this->MockOldManifest,&local_480);
  puVar2 = &(this->AllFiles).Elements.field_0x10;
  iStack_4b8 = 0;
  iVar39 = *(int *)&(this->AllFiles).Elements.field_0x28;
  local_3c8 = &this->AllFiles;
  local_4a0 = 0;
  uStack_4b4 = 1;
  iStack_4a4 = 0;
  if (iVar39 != 0) {
    puVar36 = *(uint **)&(this->AllFiles).Elements.field_0x20;
    if (puVar36 == (uint *)0x0) {
      puVar36 = (uint *)puVar2;
    }
    uVar17 = *puVar36;
    while (uVar17 == 0) {
      lVar26 = (longlong)iStack_4b8;
      local_4a0 = local_4a0 + 0x20;
      iStack_4b8 = iStack_4b8 + 1;
      iStack_4a4 = iVar39;
      if ((int)(iVar39 + -1 + (iVar39 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_4b8) goto LAB_143323bbe;
      uVar17 = puVar36[lVar26 + 1];
    }
    uStack_4b4 = -uVar17 & uVar17;
    uVar28 = (ulonglong)uStack_4b4 * 2 + 1;
    lVar26 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    local_438 = (int)lVar26;
    iStack_4a4 = local_438 + -1 + local_4a0;
    if (iVar39 < iStack_4a4) {
      iStack_4a4 = iVar39;
    }
  }
LAB_143323bbe:
  iStack_498 = *(int *)&(this->AllFiles).Elements.field_0x8 -
               *(int *)&(this->AllFiles).Elements.field_0x34;
  uVar17 = *(uint *)&(this->AllFiles).Elements.field_0x28;
  bVar24 = (byte)uVar17 & 0x1f;
  iVar38 = (int)uVar17 >> 5;
  uStack_524 = 1 << bVar24;
  uVar30 = -1 << bVar24;
  uVar33 = uVar17 & 0xffffffe0;
  uStack_4a8 = 0xffffffff;
  TStack_420._padding_ = CONCAT44(uStack_4b4,iStack_4b8);
  TStack_420.CurrentBitIndex = iStack_4a4;
  TStack_420.UnvisitedBitMask = 0xffffffff;
  TStack_420._28_4_ = iStack_4a4;
  TStack_420.BaseBitIndex = local_4a0;
  uStack_400 = CONCAT44(uStack_494,iStack_498);
  local_528 = iVar38;
  pTStack_520 = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  local_518 = uVar30;
  uStack_514 = uVar17;
  uStack_510 = uVar33;
  local_4c0 = local_3c8;
  local_4b0 = puVar2;
  iStack_49c = iStack_4a4;
  local_430.Value = (long64 *)local_3c8;
  TStack_420.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar17 < 0) || (iVar39 < (int)uVar17)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar14 = local_478;
  uVar5 = *(uint *)&(this->AllFiles).Elements.field_0x28;
  if (uVar17 != uVar5) {
    puVar35 = *(undefined1 **)&(this->AllFiles).Elements.field_0x20;
    if (puVar35 == (undefined1 *)0x0) {
      puVar35 = puVar2;
    }
    uVar30 = uVar30 & *(uint *)(puVar35 + (longlong)iVar38 * 4);
    while (uVar30 == 0) {
      uStack_510 = uVar33 + 0x20;
      local_528 = iVar38 + 1;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < local_528)
      goto LAB_143323d08;
      uVar30 = *(uint *)(puVar35 + (longlong)iVar38 * 4 + 4);
      local_518 = 0xffffffff;
      iVar38 = local_528;
      uVar33 = uStack_510;
    }
    uStack_524 = -uVar30 & uVar30;
    uVar28 = (ulonglong)uStack_524 * 2 + 1;
    lVar26 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    local_434 = (int)lVar26;
    uStack_514 = local_434 + -1 + uVar33;
    if ((int)uVar5 < (int)uStack_514) {
LAB_143323d08:
      uStack_514 = uVar5;
    }
  }
  uStack_3c0 = CONCAT44(uStack_524,local_528);
  uStack_3b0 = CONCAT44(uStack_514,local_518);
  uStack_3a8 = CONCAT44(uStack_50c,uStack_510);
  pTStack_3b8 = pTStack_520;
  local_3a0 = *(int *)&(local_478->AllFiles).Elements.field_0x8 -
              *(int *)&(local_478->AllFiles).Elements.field_0x34;
  iVar39 = 0;
  uStack_320 = CONCAT44(uStack_39c,local_3a0);
  local_338 = pTStack_520;
  local_348 = local_3c8;
  uStack_340 = uStack_3c0;
  uStack_330 = uStack_3b0;
  local_328 = uStack_3a8;
  do {
    plVar15 = local_430.Value;
    EVar37 = None;
    if (*(int *)&((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_430.Value)->field_0x8 -
        *(int *)&((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_430.Value)->field_0x34 != (int)uStack_400) {
      local_558 = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_558);
    }
    if (((TStack_420.CurrentBitIndex == uStack_330._4_4_) && (TStack_420.Array == local_338)) &&
       ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)plVar15 == local_348)) {
      local_468.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_398.Elements._16_8_ = 0;
      local_398.Elements._24_8_ = 0;
      local_468.Data.ArrayNum = 0;
      local_468.Data.ArrayMax = 0;
      local_398.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_398.Elements._48_8_ = _UNK_150631d98;
      local_458.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_458.Data.ArrayNum = 0;
      local_458.Data.ArrayMax = 0;
      local_398.Hash.InlineData[0] = '\0';
      local_398.Hash.InlineData[1] = '\0';
      local_398.Hash.InlineData[2] = '\0';
      local_398.Hash.InlineData[3] = '\0';
      local_398.Hash._padding_ = 0;
      local_398.HashSize = 0;
      local_398._76_4_ = 0;
      local_398.Elements._0_8_ = 0;
      local_398.Elements._8_8_ = 0;
      local_398.Elements._32_8_ = 0;
      local_398.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      if (((pFVar14->MockNewManifest).Object == (FMockManifest *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar16)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pTVar8 = (pFVar14->MockNewManifest).SharedReferenceCount.ReferenceController;
      pFVar19 = (pFVar14->MockNewManifest).Object;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar19 == (FMockManifest *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar16)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar9 = (pFVar14->MockOldManifest).SharedReferenceCount.ReferenceController;
      local_3d8.Object = (IBuildManifest *)(pFVar14->MockOldManifest).Object;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_448.Object = (IBuildManifest *)pFVar19;
      local_448.SharedReferenceCount.ReferenceController = pTVar8;
      local_3d8.SharedReferenceCount.ReferenceController = pTVar9;
      pFVar21 = BuildPatchServices::FInstallerAction::MakeInstallOrUpdate
                          (&local_238,&local_3d8,&local_448,&local_398,&local_458,&local_468);
      BuildPatchServices::FBuildPatchInstallerAction::FBuildPatchInstallerAction(&local_198,pFVar21)
      ;
      local_4e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4e8.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x158,8,1,0,&local_4e8.AllocatorInstance,1,&local_4e8.ArrayMax);
      ConstructItems<BuildPatchServices::FBuildPatchInstallerAction,BuildPatchServices::FBuildPatchInstallerAction,int>
                (local_4e8.AllocatorInstance.Data,&local_198,1);
      pIVar22 = BuildPatchServices::FBuildManifestSetFactory::Create(&local_4e8);
      pIVar10 = (pFVar14->ManifestSet).Ptr;
      if ((pIVar10 != pIVar22) &&
         ((pFVar14->ManifestSet).Ptr = pIVar22, pIVar10 != (IBuildManifestSet *)0x0)) {
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
      if (local_238.CloudSubdirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_238.CloudSubdirectory.Data.AllocatorInstance.Data);
      }
      if (local_238.InstallSubdirectory.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
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
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_448.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      pFVar11 = (pFVar14->MockBuildProgress).Ptr;
      local_318.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_318.Elements._48_8_ = _UNK_150631d98;
      local_318.Elements._0_8_ = 0;
      local_318.Elements._8_8_ = 0;
      local_318.Elements._32_8_ = 0;
      local_318.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_318.HashSize = 0;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                (&local_318,&pFVar14->TouchedFiles);
      pIVar23 = BuildPatchServices::FFileAttributionFactory::Create
                          ((IFileSystem *)(pFVar14->MockFileSystem).Ptr,(pFVar14->ManifestSet).Ptr,
                           &local_318,&pFVar14->InstallDirectory,&pFVar14->StagedFileDirectory,
                           (FBuildPatchProgress *)pFVar11);
      pIVar12 = (pFVar14->FileAttribution).Ptr;
      if ((pIVar12 != pIVar23) &&
         ((pFVar14->FileAttribution).Ptr = pIVar23, pIVar12 != (IFileAttribution *)0x0)) {
        (**(code **)*pIVar12)(pIVar12,1);
      }
      return;
    }
    pFVar3 = (FFileManifest *)
             (*(longlong *)
               (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)plVar15 + (longlong)TStack_420.CurrentBitIndex * 0x18);
    BuildPatchServices::FChunkPart::FChunkPart(&local_4d8);
    pFVar20 = FGuid::NewGuid(&local_2c8);
    local_4d8.Guid.A = pFVar20->A;
    local_4d8.Guid.B = pFVar20->B;
    local_4d8.Guid.C = pFVar20->C;
    local_4d8.Guid.D = pFVar20->D;
    local_4d8.Offset = 0;
    local_4d8.Size = 0x40;
    BuildPatchServices::FFileManifest::FFileManifest(&local_298);
    if (&local_298 != pFVar3) {
      iVar38 = (pFVar3->Filename).Data.ArrayNum;
      pFVar40 = (pFVar3->Filename).Data.AllocatorInstance.Data;
      local_298.Filename.Data.ArrayNum = iVar38;
      if ((iVar38 == 0) && (local_298.Filename.Data.ArrayMax == 0)) {
        local_298.Filename.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar38,local_298.Filename.Data.ArrayMax,(ForAnyElementType *)&local_298,
                   iVar38,&local_298.Filename.Data.ArrayMax);
        if (iVar38 != 0) {
          memcpy(local_298.Filename.Data.AllocatorInstance.Data,pFVar40,(longlong)iVar38 * 2);
        }
      }
    }
    pFVar20 = FGuid::NewGuid(&local_2b8);
    local_508.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_508.Data.ArrayNum = 0;
    local_508.Data.ArrayMax = 0;
    FGuid::AppendString(pFVar20,&local_508,Digits);
    FVar27.Data = (FScriptContainerElement *)L"";
    if (local_508.Data.ArrayNum != 0) {
      FVar27.Data = local_508.Data.AllocatorInstance.Data;
    }
    FSHA1::HashBuffer(FVar27.Data,0x40,local_298.FileHash.Hash);
    if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_508.Data.AllocatorInstance.Data);
    }
    if (((local_298.ChunkParts.AllocatorInstance.Data <= &local_4d8) &&
        (&local_4d8 <
         (FChunkPart *)
         (local_298.ChunkParts.AllocatorInstance.Data +
         (longlong)local_298.ChunkParts.ArrayMax * 0x18))) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar16)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    if (local_298.ChunkParts.ArrayNum == local_298.ChunkParts.ArrayMax) {
      local_298.ChunkParts.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x418,&local_298.ChunkParts.AllocatorInstance,&local_298.ChunkParts.ArrayMax);
    }
    *(undefined8 *)
     (local_298.ChunkParts.AllocatorInstance.Data + (longlong)local_298.ChunkParts.ArrayNum * 0x18)
         = local_4d8.Guid._0_8_;
    *(undefined8 *)
     (local_298.ChunkParts.AllocatorInstance.Data + (longlong)local_298.ChunkParts.ArrayNum * 0x18 +
     8) = local_4d8.Guid._8_8_;
    *(ulonglong *)
     (local_298.ChunkParts.AllocatorInstance.Data +
     (longlong)local_298.ChunkParts.ArrayNum * 0x18 + 0x10) =
         CONCAT44(local_4d8.Size,local_4d8.Offset);
    iVar38 = (pFVar3->Filename).Data.ArrayNum;
    if (iVar38 == 0) {
      pwVar29 = L"";
      iVar38 = iVar39;
    }
    else {
      pwVar29 = (wchar_t *)(pFVar3->Filename).Data.AllocatorInstance.Data;
      iVar38 = iVar38 + -1;
    }
    local_298.ChunkParts.ArrayNum = local_298.ChunkParts.ArrayNum + 1;
    uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar38,pwVar29);
    iVar38 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                       (&pFVar14->ReadOnlyFiles,uVar17,(FString *)pFVar3);
    local_298.FileMetaFlags = local_298.FileMetaFlags | iVar38 != -1;
    iVar38 = (pFVar3->Filename).Data.ArrayNum;
    if (iVar38 == 0) {
      pwVar29 = L"";
      iVar38 = iVar39;
    }
    else {
      pwVar29 = (wchar_t *)(pFVar3->Filename).Data.AllocatorInstance.Data;
      iVar38 = iVar38 + -1;
    }
    uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar38,pwVar29);
    iVar18 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                       (&pFVar14->CompressedFiles,uVar17,(FString *)pFVar3);
    iVar38 = (pFVar3->Filename).Data.ArrayNum;
    EVar25 = EVar37;
    if (iVar18 != -1) {
      EVar25 = Compressed;
    }
    local_298.FileMetaFlags = local_298.FileMetaFlags | EVar25;
    if (iVar38 == 0) {
      pwVar29 = L"";
      iVar38 = iVar39;
    }
    else {
      pwVar29 = (wchar_t *)(pFVar3->Filename).Data.AllocatorInstance.Data;
      iVar38 = iVar38 + -1;
    }
    uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar38,pwVar29);
    iVar18 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                       (&pFVar14->ExeFiles,uVar17,(FString *)pFVar3);
    iVar38 = local_298.ChunkParts.ArrayNum;
    uVar28 = (ulonglong)local_298.ChunkParts.ArrayNum;
    if (iVar18 != -1) {
      EVar37 = UnixExecutable;
    }
    local_298.FileMetaFlags = local_298.FileMetaFlags | EVar37;
    pFVar4 = (FChunkPart *)(local_298.ChunkParts.AllocatorInstance.Data + uVar28 * 0x18);
    uVar32 = 0;
    FVar27.Data = local_298.ChunkParts.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar28 != iVar38) {
        local_557[0] = 0;
        `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_557);
        uVar28 = (ulonglong)(uint)local_298.ChunkParts.ArrayNum;
      }
      if ((FChunkPart *)FVar27.Data == pFVar4) break;
      uVar32 = uVar32 + ((FChunkPart *)FVar27.Data)->Size;
      FVar27.Data = FVar27.Data + 0x18;
    }
    local_298.FileSize = uVar32;
    if (((pFVar14->MockNewManifest).Object == (FMockManifest *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar19 = (pFVar14->MockNewManifest).Object;
    pTVar34 = &pFVar19->BuildFileList;
    pFVar6 = (FFileManifest *)(pTVar34->AllocatorInstance).Data;
    if (((pFVar6 <= pFVar3) &&
        (pFVar3 < (FFileManifest *)
                  ((pFVar6->FileHash).Hash +
                  (longlong)(pFVar19->BuildFileList).ArrayMax * 0x10 + -0x20))) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar16)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    iVar38 = (pFVar19->BuildFileList).ArrayNum;
    piVar1 = &(pFVar19->BuildFileList).ArrayMax;
    if (iVar38 == *piVar1) {
      iVar38 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar34->AllocatorInstance,piVar1);
    }
    (pFVar19->BuildFileList).ArrayNum = iVar38 + 1;
    ::FString::FString((FString *)((pTVar34->AllocatorInstance).Data + (longlong)iVar38 * 0x10),
                       (FString *)pFVar3);
    if (((pFVar14->MockNewManifest).Object == (FMockManifest *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    TMapBase<FString,BuildPatchServices::FFileManifest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>_>
    ::Emplace<FString_const_&,BuildPatchServices::FFileManifest_const_&>
              ((TMapBase<FString,BuildPatchServices::FFileManifest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>_>
                *)&((pFVar14->MockNewManifest).Object)->FileManifests,(FString *)pFVar3,&local_298);
    iVar38 = (pFVar3->Filename).Data.ArrayNum;
    if (iVar38 == 0) {
      pwVar29 = L"";
      iVar38 = iVar39;
    }
    else {
      pwVar29 = (wchar_t *)(pFVar3->Filename).Data.AllocatorInstance.Data;
      iVar38 = iVar38 + -1;
    }
    uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar38,pwVar29);
    iVar38 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                       (&pFVar14->SameFiles,uVar17,(FString *)pFVar3);
    if (iVar38 == -1) {
      iVar38 = (pFVar3->Filename).Data.ArrayNum;
      if (iVar38 == 0) {
        pwVar29 = L"";
        iVar38 = iVar39;
      }
      else {
        pwVar29 = (wchar_t *)(pFVar3->Filename).Data.AllocatorInstance.Data;
        iVar38 = iVar38 + -1;
      }
      uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar38,pwVar29);
      iVar38 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
               FindIndexByHash<FString>(&pFVar14->ChangedFiles,uVar17,(FString *)pFVar3);
      if (iVar38 != -1) {
        pFVar20 = FGuid::NewGuid(&local_2a8);
        local_4f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4f8.Data.ArrayNum = 0;
        local_4f8.Data.ArrayMax = 0;
        FGuid::AppendString(pFVar20,&local_4f8,Digits);
        FVar27.Data = (FScriptContainerElement *)L"";
        if (local_4f8.Data.ArrayNum != 0) {
          FVar27.Data = local_4f8.Data.AllocatorInstance.Data;
        }
        FSHA1::HashBuffer(FVar27.Data,0x40,local_298.FileHash.Hash);
        if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
        }
        goto LAB_143324296;
      }
    }
    else {
LAB_143324296:
      if (((pFVar14->MockOldManifest).Object == (FMockManifest *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar19 = (pFVar14->MockOldManifest).Object;
      pTVar34 = &pFVar19->BuildFileList;
      pFVar6 = (FFileManifest *)(pTVar34->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar3) &&
          (pFVar3 < (FFileManifest *)
                    ((pFVar6->FileHash).Hash +
                    (longlong)(pFVar19->BuildFileList).ArrayMax * 0x10 + -0x20))) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar38 = (pFVar19->BuildFileList).ArrayNum;
      piVar1 = &(pFVar19->BuildFileList).ArrayMax;
      if (iVar38 == *piVar1) {
        iVar38 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar34->AllocatorInstance,piVar1);
      }
      (pFVar19->BuildFileList).ArrayNum = iVar38 + 1;
      ::FString::FString((FString *)((pTVar34->AllocatorInstance).Data + (longlong)iVar38 * 0x10),
                         (FString *)pFVar3);
      if (((pFVar14->MockOldManifest).Object == (FMockManifest *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      TMapBase<FString,BuildPatchServices::FFileManifest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>_>
      ::Emplace<FString_const_&,BuildPatchServices::FFileManifest_const_&>
                ((TMapBase<FString,BuildPatchServices::FFileManifest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>_>
                  *)&((pFVar14->MockOldManifest).Object)->FileManifests,(FString *)pFVar3,&local_298
                );
    }
    iVar38 = (pFVar14->InstallDirectory).Data.ArrayNum;
    pFVar7 = (pFVar14->MockFileSystem).Ptr;
    local_470 = local_298.FileSize;
    iVar18 = (pFVar3->Filename).Data.ArrayNum;
    iVar31 = iVar18 + -1;
    if (iVar18 == 0) {
      iVar31 = iVar39;
    }
    local_550.Data.ArrayNum = iVar38;
    if ((iVar38 == 0) && (iVar31 != -1)) {
      pFVar40 = (pFVar14->InstallDirectory).Data.AllocatorInstance.Data;
      iVar18 = iVar31 + 2;
LAB_14332440e:
      local_550.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar18 != 0) goto LAB_143324419;
      local_550.Data.ArrayMax = 0;
    }
    else {
      pFVar40 = (pFVar14->InstallDirectory).Data.AllocatorInstance.Data;
      iVar18 = iVar31 + 1;
      if (iVar38 == 0) goto LAB_14332440e;
LAB_143324419:
      local_550.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar17 = iVar38 + iVar18;
      if ((int)uVar17 < iVar38) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar17,0,(ForAnyElementType *)&local_550,iVar38,&local_550.Data.ArrayMax);
      if (iVar38 != 0) {
        memcpy(local_550.Data.AllocatorInstance.Data,pFVar40,(longlong)iVar38 * 2);
      }
    }
    ::FString::PathAppend
              (&local_550,(wchar_t *)(pFVar3->Filename).Data.AllocatorInstance.Data,iVar31);
    local_3f8 = &local_550;
    local_3f0 = &local_470;
    TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,__int64_&&>_>
              ((TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
                *)&pFVar7->FileSizes,&local_430,(bool *)&local_3f8);
    if (local_550.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_550.Data.AllocatorInstance.Data);
    }
    iVar38 = (pFVar3->Filename).Data.ArrayNum;
    iVar18 = (pFVar14->InstallDirectory).Data.ArrayNum;
    pFVar7 = (pFVar14->MockFileSystem).Ptr;
    local_530[0] = 1;
    iVar31 = iVar38 + -1;
    if (iVar38 == 0) {
      iVar31 = iVar39;
    }
    local_540.Data.ArrayNum = iVar18;
    if ((iVar18 == 0) && (iVar31 != -1)) {
      pFVar40 = (pFVar14->InstallDirectory).Data.AllocatorInstance.Data;
      iVar38 = iVar31 + 2;
LAB_14332450e:
      local_540.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar38 != 0) goto LAB_143324519;
      local_540.Data.ArrayMax = 0;
    }
    else {
      pFVar40 = (pFVar14->InstallDirectory).Data.AllocatorInstance.Data;
      iVar38 = iVar31 + 1;
      if (iVar18 == 0) goto LAB_14332450e;
LAB_143324519:
      local_540.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar17 = iVar38 + iVar18;
      if ((int)uVar17 < iVar18) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar17,0,(ForAnyElementType *)&local_540,iVar18,&local_540.Data.ArrayMax);
      if (iVar18 != 0) {
        memcpy(local_540.Data.AllocatorInstance.Data,pFVar40,(longlong)iVar18 * 2);
      }
    }
    ::FString::PathAppend
              (&local_540,(wchar_t *)(pFVar3->Filename).Data.AllocatorInstance.Data,iVar31);
    local_3e8 = &local_540;
    local_3e0 = local_530;
    TSet<TTuple<FString,enum_BuildPatchServices::EAttributeFlags>,TDefaultMapHashableKeyFuncs<FString,enum_BuildPatchServices::EAttributeFlags,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,enum_BuildPatchServices::EAttributeFlags_&&>_>
              (&pFVar7->FileAttributes,&local_490,(bool *)&local_3e8);
    if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_540.Data.AllocatorInstance.Data);
    }
    if ((FChunkPart *)local_298.ChunkParts.AllocatorInstance.Data != (FChunkPart *)0x0) {
      FMemory::Free(local_298.ChunkParts.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_298.InstallTags.AllocatorInstance.Data,
               local_298.InstallTags.ArrayNum);
    if (local_298.InstallTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.InstallTags.AllocatorInstance.Data);
    }
    if (local_298.SymlinkTarget.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.SymlinkTarget.Data.AllocatorInstance.Data);
    }
    if (local_298.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Filename.Data.AllocatorInstance.Data);
    }
    TStack_420.UnvisitedBitMask = TStack_420.UnvisitedBitMask & ~TStack_420._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_420);
  } while( true );
}

// PauseFor @ 143325800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TFuture<void> * __thiscall
FFileAttributionSpec::PauseFor
          (FFileAttributionSpec *this,TFuture<void> *__return_storage_ptr__,float param_1)

{
  IFileAttribution *pIVar1;
  double dVar2;
  code **ppcVar3;
  undefined4 uVar4;
  undefined1 auStack_b8 [32];
  FFileAttributionSpec *local_98 [5];
  undefined8 local_70;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  dVar2 = BuildPatchServices::FStatsCollector::GetSeconds();
  uVar4 = (undefined4)((ulonglong)dVar2 >> 0x20);
  pIVar1 = (this->FileAttribution).Ptr;
  (**(code **)((longlong)*pIVar1 + 8))(pIVar1,1);
  local_68[0] = (code *)0x0;
  local_98[0] = this;
  local_40 = FMemory::Malloc(0x20,8);
  local_70 = 0;
  *local_40 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FFileAttributionSpec::PauseFor'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  *(undefined4 *)(local_40 + 1) = local_98[0]._0_4_;
  *(undefined4 *)((longlong)local_40 + 0xc) = local_98[0]._4_4_;
  *(int *)(local_40 + 2) = SUB84(dVar2,0);
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar4;
  local_98[0] = (FFileAttributionSpec *)0x0;
  local_40[3] = (code *)CONCAT44(local_98[2]._4_4_,param_1);
  if (local_40 + 1 != (code **)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FFileAttributionSpec::PauseFor'::__l2::<lambda_1>,void>::Call;
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

