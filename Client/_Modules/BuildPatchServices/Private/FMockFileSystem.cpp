// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 22

// FMockFileSystem @ 1432faf50

FMockFileSystem * __thiscall
BuildPatchServices::FMockFileSystem::FMockFileSystem(FMockFileSystem *this)

{
  this->_padding_ = (longlong)&___7FMockFileSystem_BuildPatchServices__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ThreadLock,4000);
  (this->RxCreateFileReader).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RxCreateFileReader).ArrayNum = 0;
  (this->RxCreateFileReader).ArrayMax = 0;
  (this->RxCreateFileWriter).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RxCreateFileWriter).ArrayNum = 0;
  (this->RxCreateFileWriter).ArrayMax = 0;
  (this->RxGetAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RxGetAttributes).ArrayNum = 0;
  (this->RxGetAttributes).ArrayMax = 0;
  (this->RxGetFileSize).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RxGetFileSize).ArrayNum = 0;
  (this->RxGetFileSize).ArrayMax = 0;
  (this->RxSetReadOnly).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RxSetReadOnly).ArrayNum = 0;
  (this->RxSetReadOnly).ArrayMax = 0;
  (this->RxSetCompressed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RxSetCompressed).ArrayNum = 0;
  (this->RxSetCompressed).ArrayMax = 0;
  (this->RxSetExecutable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RxSetExecutable).ArrayNum = 0;
  (this->RxSetExecutable).ArrayMax = 0;
  (this->ReadFile).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadFile).ArrayNum = 0;
  (this->ReadFile).ArrayMax = 0;
  (this->WriteFile).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WriteFile).ArrayNum = 0;
  (this->WriteFile).ArrayMax = 0;
  *(undefined8 *)&this->FileSizes = 0;
  *(undefined8 *)&(this->FileSizes).field_0x8 = 0;
  *(undefined8 *)&(this->FileSizes).field_0x20 = 0;
  *(undefined4 *)&(this->FileSizes).field_0x28 = 0;
  *(undefined4 *)&(this->FileSizes).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileSizes).field_0x34 = 0;
  *(undefined4 *)&(this->FileSizes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FileSizes).field_0x40 = 0;
  *(undefined4 *)&(this->FileSizes).field_0x48 = 0;
  *(undefined8 *)&this->FileAttributes = 0;
  *(undefined8 *)&(this->FileAttributes).field_0x8 = 0;
  *(undefined8 *)&(this->FileAttributes).field_0x20 = 0;
  *(undefined4 *)&(this->FileAttributes).field_0x28 = 0;
  *(undefined4 *)&(this->FileAttributes).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileAttributes).field_0x34 = 0;
  *(undefined4 *)&(this->FileAttributes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FileAttributes).field_0x40 = 0;
  *(undefined4 *)&(this->FileAttributes).field_0x48 = 0;
  return this;
}

// ~FMockFileSystem @ 1432fd7b0

void __thiscall BuildPatchServices::FMockFileSystem::~FMockFileSystem(FMockFileSystem *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->FileAttributes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FileAttributes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,enum_BuildPatchServices::EAttributeFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,enum_BuildPatchServices::EAttributeFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->FileAttributes);
  *(undefined4 *)&(this->FileSizes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FileSizes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileSizes);
  pFVar2 = (this->WriteFile).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ReadFile).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TTuple<double,FString,bool>,int>
            ((TTuple<double,FString,bool> *)(this->RxSetExecutable).AllocatorInstance.Data,
             (this->RxSetExecutable).ArrayNum);
  pFVar2 = (this->RxSetExecutable).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TTuple<double,FString,bool>,int>
            ((TTuple<double,FString,bool> *)(this->RxSetCompressed).AllocatorInstance.Data,
             (this->RxSetCompressed).ArrayNum);
  pFVar2 = (this->RxSetCompressed).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TTuple<double,FString,bool>,int>
            ((TTuple<double,FString,bool> *)(this->RxSetReadOnly).AllocatorInstance.Data,
             (this->RxSetReadOnly).ArrayNum);
  pFVar2 = (this->RxSetReadOnly).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TTuple<double,FString,__int64>,int>
            ((TTuple<double,FString,__int64> *)(this->RxGetFileSize).AllocatorInstance.Data,
             (this->RxGetFileSize).ArrayNum);
  pFVar2 = (this->RxGetFileSize).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TTuple<double,FString,enum_BuildPatchServices::EAttributeFlags>,int>
            ((TTuple<double,FString,BuildPatchServices::EAttributeFlags> *)
             (this->RxGetAttributes).AllocatorInstance.Data,(this->RxGetAttributes).ArrayNum);
  pFVar2 = (this->RxGetAttributes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TTuple<double,FArchive_*,FString,enum_BuildPatchServices::EWriteFlags>,int>
            ((TTuple<double,FArchive_*,FString,BuildPatchServices::EWriteFlags> *)
             (this->RxCreateFileWriter).AllocatorInstance.Data,(this->RxCreateFileWriter).ArrayNum);
  pFVar2 = (this->RxCreateFileWriter).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TTuple<double,FArchive_*,FString,enum_BuildPatchServices::EReadFlags>,int>
            ((TTuple<double,FArchive_*,FString,BuildPatchServices::EReadFlags> *)
             (this->RxCreateFileReader).AllocatorInstance.Data,(this->RxCreateFileReader).ArrayNum);
  pFVar2 = (this->RxCreateFileReader).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ThreadLock);
  this->_padding_ = (longlong)&___7IFileSystem_BuildPatchServices__6B_;
  return;
}

// CopyFile @ 14331b150

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockFileSystem::CopyFile
          (FMockFileSystem *this,wchar_t *param_1,wchar_t *param_2)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_bool___cdecl_BuildPatchServices::FMockFileSystem::CopyFile(wchar_t_const*___ptr64,wchar_t_const*___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return false;
}

// CreateFileReader @ 14331c670

TUniquePtr<FArchive,TDefaultDelete<FArchive>_> __thiscall
BuildPatchServices::FMockFileSystem::CreateFileReader
          (FMockFileSystem *this,wchar_t *param_1,EReadFlags param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  int iVar4;
  FArchiveState *this_00;
  longlong lVar5;
  undefined4 in_register_00000084;
  undefined4 in_R9D;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = ::operator_new(0xa8);
    if (this_00 == (FArchiveState *)0x0) {
      this_00 = (FArchiveState *)0x0;
    }
    else {
      this_00->_padding_ = 0;
      this_00->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      (this_00->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
      (this_00->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
      (this_00->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
      *(undefined8 *)&this_00->field_0x28 = 0;
      this_00->ArSerializingDefaults = 0;
      this_00->ArPortFlags = 0;
      this_00->ArMaxSerializeSize = 0;
      (this_00->ArUEVer).FileVersionUE4 = 0;
      (this_00->ArUEVer).FileVersionUE5 = 0;
      this_00->ArLicenseeUEVer = 0;
      (this_00->ArEngineVer).Major = 0;
      (this_00->ArEngineVer).Minor = 0;
      (this_00->ArEngineVer).Patch = 0;
      *(undefined2 *)&(this_00->ArEngineVer).field_0x6 = 0;
      (this_00->ArEngineVer).Changelist = 0;
      this_00->CustomVersionContainer = (FCustomVersionContainer *)0x0;
      this_00->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      this_00->SavePackageData = (FArchiveSavePackageData *)0x0;
      this_00->SerializedProperty = (FProperty *)0x0;
      this_00->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      *(undefined8 *)&this_00->bCustomVersionsAreReset = 0;
      this_00->NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(this_00);
      this_00[1]._padding_ = 0;
      this_00->_padding_ = (longlong)&___7FMemoryReader__6B_;
      this_00[1].ActiveFPLB = (FFastPathLoadBuffer *)&this->ReadFile;
      this_00[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x7fffffffffffffff;
      FArchiveState::SetIsLoading(this_00,true);
      (**(code **)(this_00->_padding_ + 0x108))(this_00,0);
    }
    *(FArchiveState **)param_1 = this_00;
    dVar3 = FStatsCollector::GetSeconds();
    iVar4 = (this->RxCreateFileReader).ArrayNum;
    piVar1 = &(this->RxCreateFileReader).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&(this->RxCreateFileReader).AllocatorInstance,piVar1);
    }
    lVar5 = (longlong)iVar4;
    (this->RxCreateFileReader).ArrayNum = iVar4 + 1;
    pFVar2 = (this->RxCreateFileReader).AllocatorInstance.Data;
    *(double *)(pFVar2 + lVar5 * 0x28) = dVar3;
    *(FArchiveState **)(pFVar2 + lVar5 * 0x28 + 8) = this_00;
    ::FString::FString((FString *)(pFVar2 + lVar5 * 0x28 + 0x10),
                       (wchar_t *)CONCAT44(in_register_00000084,param_2));
    *(undefined4 *)(pFVar2 + lVar5 * 0x28 + 0x20) = in_R9D;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (TUniquePtr<FArchive,TDefaultDelete<FArchive>_>)(FArchive *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CreateFileWriter @ 14331cac0

TUniquePtr<FArchive,TDefaultDelete<FArchive>_> __thiscall
BuildPatchServices::FMockFileSystem::CreateFileWriter
          (FMockFileSystem *this,wchar_t *param_1,EWriteFlags param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  int iVar4;
  FArchiveState *this_00;
  longlong lVar5;
  FArchiveState *pFVar6;
  undefined4 in_register_00000084;
  undefined4 in_R9D;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = ::operator_new(0xa8);
  pFVar6 = (FArchiveState *)0x0;
  if (this_00 != (FArchiveState *)0x0) {
    this_00->_padding_ = 0;
    this_00->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    (this_00->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
    (this_00->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
    (this_00->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    this_00->ArSerializingDefaults = 0;
    this_00->ArPortFlags = 0;
    this_00->ArMaxSerializeSize = 0;
    (this_00->ArUEVer).FileVersionUE4 = 0;
    (this_00->ArUEVer).FileVersionUE5 = 0;
    this_00->ArLicenseeUEVer = 0;
    (this_00->ArEngineVer).Major = 0;
    (this_00->ArEngineVer).Minor = 0;
    (this_00->ArEngineVer).Patch = 0;
    *(undefined2 *)&(this_00->ArEngineVer).field_0x6 = 0;
    (this_00->ArEngineVer).Changelist = 0;
    this_00->CustomVersionContainer = (FCustomVersionContainer *)0x0;
    this_00->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    this_00->SavePackageData = (FArchiveSavePackageData *)0x0;
    this_00->SerializedProperty = (FProperty *)0x0;
    this_00->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    *(undefined8 *)&this_00->bCustomVersionsAreReset = 0;
    this_00->NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(this_00);
    this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    this_00[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    this_00[1].ActiveFPLB = (FFastPathLoadBuffer *)&this->WriteFile;
    FArchiveState::SetIsSaving(this_00,true);
    (**(code **)(this_00->_padding_ + 0x108))(this_00,0);
    this_00->_padding_ = (longlong)&___7FMemoryWriter__6B_;
    pFVar6 = this_00;
  }
  *(FArchiveState **)param_1 = pFVar6;
  dVar3 = FStatsCollector::GetSeconds();
  iVar4 = (this->RxCreateFileWriter).ArrayNum;
  piVar1 = &(this->RxCreateFileWriter).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&(this->RxCreateFileWriter).AllocatorInstance,piVar1);
  }
  lVar5 = (longlong)iVar4;
  (this->RxCreateFileWriter).ArrayNum = iVar4 + 1;
  pFVar2 = (this->RxCreateFileWriter).AllocatorInstance.Data;
  *(double *)(pFVar2 + lVar5 * 0x28) = dVar3;
  *(FArchiveState **)(pFVar2 + lVar5 * 0x28 + 8) = pFVar6;
  ::FString::FString((FString *)(pFVar2 + lVar5 * 0x28 + 0x10),
                     (wchar_t *)CONCAT44(in_register_00000084,param_2));
  *(undefined4 *)(pFVar2 + lVar5 * 0x28 + 0x20) = in_R9D;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return (TUniquePtr<FArchive,TDefaultDelete<FArchive>_>)(FArchive *)param_1;
}

// DeleteFile @ 14331d690

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockFileSystem::DeleteFile(FMockFileSystem *this,wchar_t *param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_bool___cdecl_BuildPatchServices::FMockFileSystem::DeleteFile(wchar_t_const*___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return false;
}

// DirectoryExists @ 14331e830

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockFileSystem::DirectoryExists(FMockFileSystem *this,wchar_t *param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_bool___cdecl_BuildPatchServices::FMockFileSystem::DirectoryExists(wchar_t_const*___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return false;
}

// FileExists @ 14331ed80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockFileSystem::FileExists(FMockFileSystem *this,wchar_t *param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_bool___cdecl_BuildPatchServices::FMockFileSystem::FileExists(wchar_t_const*___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return true;
}

// FindFiles @ 14331f030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockFileSystem::FindFiles
          (FMockFileSystem *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          wchar_t *param_2,wchar_t *param_3)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_BuildPatchServices::FMockFileSystem::FindFiles(TArray<FString,TSizedDefaultAllocator<32>_>&___ptr64,wchar_t_const*___ptr64,wchar_t_const*___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return;
  }
  return;
}

// FindFilesRecursively @ 14331f060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockFileSystem::FindFilesRecursively
          (FMockFileSystem *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          wchar_t *param_2,wchar_t *param_3)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_BuildPatchServices::FMockFileSystem::FindFilesRecursively(TArray<FString,TSizedDefaultAllocator<32>_>&___ptr64,wchar_t_const*___ptr64,wchar_t_const*___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return;
  }
  return;
}

// GetAllowedBytesToWriteThrottledStorage @ 143320110

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall
BuildPatchServices::FMockFileSystem::GetAllowedBytesToWriteThrottledStorage
          (FMockFileSystem *this,wchar_t *param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual___int64___cdecl_BuildPatchServices::FMockFileSystem::GetAllowedBytesToWriteThrottledStorage(wchar_t_const*___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return 0x7fffffffffffffff;
}

// GetAttributes @ 143320180

bool __thiscall
BuildPatchServices::FMockFileSystem::GetAttributes
          (FMockFileSystem *this,wchar_t *param_1,EAttributeFlags *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  FString local_48;
  FString local_38 [2];
  
  lVar9 = 0;
  *param_2 = None;
  ::FString::FString(&local_48,param_1);
  iVar8 = local_48.Data.ArrayNum + -1;
  FVar4.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == 0) {
    iVar8 = 0;
    FVar4.Data = (FScriptContainerElement *)L"";
  }
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar4.Data);
  iVar8 = TSet<TTuple<FString,enum_BuildPatchServices::EAttributeFlags>,TDefaultMapHashableKeyFuncs<FString,enum_BuildPatchServices::EAttributeFlags,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->FileAttributes,uVar7,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (iVar8 != -1) {
    ::FString::FString(local_38,param_1);
    iVar8 = local_38[0].Data.ArrayNum + -1;
    FVar4.Data = local_38[0].Data.AllocatorInstance.Data;
    if (local_38[0].Data.ArrayNum == 0) {
      iVar8 = 0;
      FVar4.Data = (FScriptContainerElement *)L"";
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar4.Data);
    iVar8 = TSet<TTuple<FString,enum_BuildPatchServices::EAttributeFlags>,TDefaultMapHashableKeyFuncs<FString,enum_BuildPatchServices::EAttributeFlags,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>(&this->FileAttributes,uVar7,local_38);
    if (((iVar8 == -1) ||
        (lVar9 = (longlong)iVar8 * 0x20 + *(longlong *)&this->FileAttributes, lVar9 == 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    *param_2 = *(EAttributeFlags *)(lVar9 + 0x10);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar10 = FStatsCollector::GetSeconds();
  iVar8 = (this->RxGetAttributes).ArrayNum;
  piVar1 = &(this->RxGetAttributes).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->RxGetAttributes).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->RxGetAttributes).AllocatorInstance.Data;
  (this->RxGetAttributes).ArrayNum = iVar8 + 1;
  lVar9 = (longlong)iVar8 * 0x20;
  *(double *)(pFVar2 + lVar9) = dVar10;
  ::FString::FString((FString *)(pFVar2 + lVar9 + 8),param_1);
  *(EAttributeFlags *)(pFVar2 + lVar9 + 0x18) = *param_2;
  return true;
}

// GetFileSize @ 143320c70

bool __thiscall
BuildPatchServices::FMockFileSystem::GetFileSize
          (FMockFileSystem *this,wchar_t *param_1,long64 *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  double dVar10;
  FString local_48;
  FString local_38 [2];
  
  *param_2 = -1;
  ::FString::FString(&local_48,param_1);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar8.Data = local_48.Data.AllocatorInstance.Data;
  }
  lVar9 = 0;
  iVar7 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar8.Data);
  iVar7 = TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
                      *)&this->FileSizes,uVar6,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (iVar7 != -1) {
    ::FString::FString(local_38,param_1);
    iVar7 = local_38[0].Data.ArrayNum + -1;
    FVar8.Data = local_38[0].Data.AllocatorInstance.Data;
    if (local_38[0].Data.ArrayNum == 0) {
      iVar7 = 0;
      FVar8.Data = (FScriptContainerElement *)L"";
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar8.Data);
    iVar7 = TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
                        *)&this->FileSizes,uVar6,local_38);
    if (((iVar7 == -1) ||
        (lVar9 = (longlong)iVar7 * 0x20 + *(longlong *)&this->FileSizes, lVar9 == 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    *param_2 = *(long64 *)(lVar9 + 0x10);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar10 = FStatsCollector::GetSeconds();
  iVar7 = (this->RxGetFileSize).ArrayNum;
  piVar1 = &(this->RxGetFileSize).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->RxGetFileSize).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->RxGetFileSize).AllocatorInstance.Data;
  (this->RxGetFileSize).ArrayNum = iVar7 + 1;
  lVar9 = (longlong)iVar7 * 0x20;
  *(double *)(pFVar2 + lVar9) = dVar10;
  ::FString::FString((FString *)(pFVar2 + lVar9 + 8),param_1);
  *(long64 *)(pFVar2 + lVar9 + 0x18) = *param_2;
  return (bool)((byte)((ulonglong)*param_2 >> 0x3f) ^ 1);
}

// GetTimeStamp @ 143321200

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockFileSystem::GetTimeStamp
          (FMockFileSystem *this,wchar_t *param_1,FDateTime *param_2)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_bool___cdecl_BuildPatchServices::FMockFileSystem::GetTimeStamp(wchar_t_const*___ptr64,FDateTime&___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return false;
}

// LoadFileToString @ 143322170

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockFileSystem::LoadFileToString
          (FMockFileSystem *this,wchar_t *param_1,FString *param_2)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_bool___cdecl_BuildPatchServices::FMockFileSystem::LoadFileToString(wchar_t_const*___ptr64,FString&___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return false;
}

// MakeDirectory @ 143322260

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockFileSystem::MakeDirectory(FMockFileSystem *this,wchar_t *param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_bool___cdecl_BuildPatchServices::FMockFileSystem::MakeDirectory(wchar_t_const*___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return false;
}

// MoveFile @ 143324be0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockFileSystem::MoveFile
          (FMockFileSystem *this,wchar_t *param_1,wchar_t *param_2)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_bool___cdecl_BuildPatchServices::FMockFileSystem::MoveFile(wchar_t_const*___ptr64,wchar_t_const*___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return false;
}

// ParallelFindFilesRecursively @ 1433257f0

void __thiscall
BuildPatchServices::FMockFileSystem::ParallelFindFilesRecursively
          (FMockFileSystem *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          wchar_t *param_2,wchar_t *param_3,EAsyncExecution param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001433257f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))();
  return;
}

// SaveStringToFile @ 143326cb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockFileSystem::SaveStringToFile
          (FMockFileSystem *this,wchar_t *param_1,FString *param_2)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_bool___cdecl_BuildPatchServices::FMockFileSystem::SaveStringToFile(wchar_t_const*___ptr64,FString_const&___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return false;
}

// SetCompressed @ 143326df0

bool __thiscall
BuildPatchServices::FMockFileSystem::SetCompressed
          (FMockFileSystem *this,wchar_t *param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  
  dVar5 = FStatsCollector::GetSeconds();
  iVar3 = (this->RxSetCompressed).ArrayNum;
  piVar1 = &(this->RxSetCompressed).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->RxSetCompressed).AllocatorInstance,piVar1);
  }
  (this->RxSetCompressed).ArrayNum = iVar3 + 1;
  pFVar2 = (this->RxSetCompressed).AllocatorInstance.Data;
  lVar4 = (longlong)iVar3 * 0x20;
  *(double *)(pFVar2 + lVar4) = dVar5;
  ::FString::FString((FString *)(pFVar2 + lVar4 + 8),param_1);
  pFVar2[lVar4 + 0x18] = (FScriptContainerElement)param_2;
  return true;
}

// SetExecutable @ 143326fc0

bool __thiscall
BuildPatchServices::FMockFileSystem::SetExecutable
          (FMockFileSystem *this,wchar_t *param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  
  dVar5 = FStatsCollector::GetSeconds();
  iVar3 = (this->RxSetExecutable).ArrayNum;
  piVar1 = &(this->RxSetExecutable).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->RxSetExecutable).AllocatorInstance,piVar1);
  }
  (this->RxSetExecutable).ArrayNum = iVar3 + 1;
  pFVar2 = (this->RxSetExecutable).AllocatorInstance.Data;
  lVar4 = (longlong)iVar3 * 0x20;
  *(double *)(pFVar2 + lVar4) = dVar5;
  ::FString::FString((FString *)(pFVar2 + lVar4 + 8),param_1);
  pFVar2[lVar4 + 0x18] = (FScriptContainerElement)param_2;
  return true;
}

// SetReadOnly @ 143327150

bool __thiscall
BuildPatchServices::FMockFileSystem::SetReadOnly
          (FMockFileSystem *this,wchar_t *param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  
  dVar5 = FStatsCollector::GetSeconds();
  iVar3 = (this->RxSetReadOnly).ArrayNum;
  piVar1 = &(this->RxSetReadOnly).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->RxSetReadOnly).AllocatorInstance,piVar1);
  }
  (this->RxSetReadOnly).ArrayNum = iVar3 + 1;
  pFVar2 = (this->RxSetReadOnly).AllocatorInstance.Data;
  lVar4 = (longlong)iVar3 * 0x20;
  *(double *)(pFVar2 + lVar4) = dVar5;
  ::FString::FString((FString *)(pFVar2 + lVar4 + 8),param_1);
  pFVar2[lVar4 + 0x18] = (FScriptContainerElement)param_2;
  return true;
}

