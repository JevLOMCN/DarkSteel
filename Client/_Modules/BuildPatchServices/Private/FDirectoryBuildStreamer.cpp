// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 17

// FDirectoryBuildStreamer @ 143222de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDirectoryBuildStreamer * __thiscall
BuildPatchServices::FDirectoryBuildStreamer::FDirectoryBuildStreamer
          (FDirectoryBuildStreamer *this,FDirectoryBuildStreamerConfig *param_1,
          FDirectoryBuildStreamerDependencies *param_2)

{
  TFuture<void> *pTVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uchar *_Dst;
  TFuture<void> *pTVar7;
  undefined ***pppuVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  TUniqueFunction<void___cdecl(void)> local_a8;
  code *local_78 [2];
  undefined **local_68;
  FDirectoryBuildStreamer *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  this->_padding_ = (longlong)&___7FDirectoryBuildStreamer_BuildPatchServices__6B_;
  ::FString::FString(&(this->Config).BuildRoot,&param_1->BuildRoot);
  ::FString::FString(&(this->Config).InputListFile,&param_1->InputListFile);
  ::FString::FString(&(this->Config).IgnoreListFile,&param_1->IgnoreListFile);
  uVar4 = *(undefined4 *)((longlong)&param_2->StatsCollector + 4);
  uVar5 = *(undefined4 *)&param_2->FileSystem;
  uVar6 = *(undefined4 *)((longlong)&param_2->FileSystem + 4);
  *(undefined4 *)&(this->Dependencies).StatsCollector = *(undefined4 *)&param_2->StatsCollector;
  *(undefined4 *)((longlong)&(this->Dependencies).StatsCollector + 4) = uVar4;
  *(undefined4 *)&(this->Dependencies).FileSystem = uVar5;
  *(undefined4 *)((longlong)&(this->Dependencies).FileSystem + 4) = uVar6;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DataStream,4000);
  (this->DataStream).BuildDataStream.BufferDataSize = 0x6400000;
  _Dst = operator_new__(0x6400000);
  uVar2 = (this->DataStream).BuildDataStream.BufferDataSize;
  (this->DataStream).BuildDataStream.Data = _Dst;
  memset(_Dst,0,(ulonglong)uVar2);
  (this->DataStream).BuildDataStream.NumDataAvailable = 0;
  (this->DataStream).BuildDataStream.DataIndex = 0;
  (this->DataStream).BuildDataStream.TotalNumDataPushed = 0;
  (this->DataStream).EndOfStream = (FThreadSafeBool)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->FilesCS,4000);
  *(undefined8 *)&this->Files = 0;
  *(undefined8 *)&(this->Files).field_0x8 = 0;
  *(undefined8 *)&(this->Files).field_0x20 = 0;
  *(undefined4 *)&(this->Files).field_0x28 = 0;
  *(undefined4 *)&(this->Files).field_0x2c = 0x80;
  *(undefined4 *)&(this->Files).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Files).field_0x34 = 0;
  *(undefined8 *)&(this->Files).field_0x40 = 0;
  *(undefined4 *)&(this->Files).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->EnumeratedFilesCS,4000);
  (this->EnumeratedFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnumeratedFiles).ArrayNum = 0;
  (this->EnumeratedFiles).ArrayMax = 0;
  *(undefined8 *)&(this->EmptyFiles).Elements = 0;
  *(undefined8 *)&(this->EmptyFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EmptyFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EmptyFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EmptyFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EmptyFiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EmptyFiles).Elements.field_0x34 = 0;
  (this->EmptyFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EmptyFiles).HashSize = 0;
  FSHA1::FSHA1(&this->EmptyHasher);
  pTVar1 = &this->Future;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->Future).field_0x8 = 0;
  this->bShouldAbort = (FThreadSafeBool)0x0;
  this->bFilesEnumerated = (FThreadSafeBool)0x0;
  FSHA1::Final(&this->EmptyHasher);
  local_50 = (undefined ***)0x0;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`BuildPatchServices::FDirectoryBuildStreamer::FDirectoryBuildStreamer'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`BuildPatchServices::FDirectoryBuildStreamer::FDirectoryBuildStreamer'::__l2::<lambda_1>,void>
                ::Call;
  local_a8._0_8_ = 0;
  local_a8._40_8_ = 0;
  local_60 = this;
  pTVar7 = Async<TFunction<void___cdecl(void)>_>
                     ((TFuture<void> *)local_b8,Thread,(TFunction<void___cdecl(void)> *)local_78,
                      &local_a8);
  if (pTVar1 != pTVar7) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar7;
    *(undefined8 *)pTVar7 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->Future).field_0x8,
               (FSharedReferencer<1> *)&pTVar7->field_0x8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_b8._8_8_);
  if (local_78[0] != (code *)0x0) {
    pppuVar8 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar8 = local_50;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  pFVar3 = (param_1->IgnoreListFile).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_1->InputListFile).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_1->BuildRoot).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return this;
}

// ~FDirectoryBuildStreamer @ 1432285e0

void __thiscall
BuildPatchServices::FDirectoryBuildStreamer::~FDirectoryBuildStreamer(FDirectoryBuildStreamer *this)

{
  longlong *plVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  char cVar5;
  
  this->_padding_ = (longlong)&___7FDirectoryBuildStreamer_BuildPatchServices__6B_;
  LOCK();
  this->bShouldAbort = (FThreadSafeBool)0x1;
  UNLOCK();
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
  FSHA1::~FSHA1(&this->EmptyHasher);
  (this->EmptyFiles).HashSize = 0;
  FVar2 = (this->EmptyFiles).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->EmptyFiles).Elements);
  DestructItems<FString,int>
            ((FString *)(this->EnumeratedFiles).AllocatorInstance.Data,
             (this->EnumeratedFiles).ArrayNum);
  pFVar3 = (this->EnumeratedFiles).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->EnumeratedFilesCS);
  *(undefined4 *)&(this->Files).field_0x48 = 0;
  pvVar4 = *(void **)&(this->Files).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,BuildPatchServices::FFileSpan>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,BuildPatchServices::FFileSpan>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,BuildPatchServices::FFileSpan>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Files);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FilesCS);
  operator_delete__((this->DataStream).BuildDataStream.Data);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DataStream);
  pFVar3 = (this->Config).IgnoreListFile.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Config).InputListFile.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Config).BuildRoot.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IBuildStreamer_BuildPatchServices__6B_;
  return;
}

// AddEmptyFile @ 143232b70

void __thiscall
BuildPatchServices::FDirectoryBuildStreamer::AddEmptyFile
          (FDirectoryBuildStreamer *this,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  
  lpCriticalSection = &this->FilesCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              (&this->EmptyFiles,(FString *)&stack0x00000008,(bool *)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddFile @ 143232bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
BuildPatchServices::FDirectoryBuildStreamer::AddFile
          (FDirectoryBuildStreamer *this,FFileSpan *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  undefined1 auStack_48 [32];
  TPairInitializer<unsigned___int64_const_&,BuildPatchServices::FFileSpan_&&> local_28;
  FFileSpan *local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  lpCriticalSection = &this->FilesCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_28.Value = (FFileSpan *)&param_1->StartIdx;
    local_18 = param_1;
    TSet<TTuple<unsigned___int64,BuildPatchServices::FFileSpan>,TDefaultMapHashableKeyFuncs<unsigned___int64,BuildPatchServices::FFileSpan,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,BuildPatchServices::FFileSpan_&&>_>
              ((TSet<TTuple<unsigned___int64,BuildPatchServices::FFileSpan>,TDefaultMapHashableKeyFuncs<unsigned___int64,BuildPatchServices::FFileSpan,0>,FDefaultSetAllocator>
                *)&this->Files,&local_28,(bool *)&local_28.Value);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = (param_1->SymlinkTarget).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Filename).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DequeueData @ 1432493b0

uint __thiscall
BuildPatchServices::FDirectoryBuildStreamer::DequeueData
          (FDirectoryBuildStreamer *this,uchar *param_1,uint param_2,bool param_3)

{
  FDataStream *lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  
  lpCriticalSection = &this->DataStream;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar2 = (this->DataStream).BuildDataStream.NumDataAvailable;
  uVar6 = (this->DataStream).BuildDataStream.BufferDataSize;
  uVar7 = uVar2;
  if (param_2 < uVar2) {
    uVar7 = param_2;
  }
  uVar3 = (ulonglong)(((this->DataStream).BuildDataStream.DataIndex - uVar2) + uVar6) %
          (ulonglong)uVar6;
  uVar6 = uVar6 - (int)uVar3;
  uVar2 = uVar7;
  if (uVar6 < uVar7) {
    uVar2 = uVar6;
  }
  memcpy(param_1,(this->DataStream).BuildDataStream.Data + uVar3,(ulonglong)uVar2);
  if (uVar6 < uVar7) {
    memcpy(param_1 + uVar6,(this->DataStream).BuildDataStream.Data,(ulonglong)(uVar7 - uVar6));
  }
  puVar1 = &(this->DataStream).BuildDataStream.NumDataAvailable;
  *puVar1 = *puVar1 - uVar7;
  fVar5 = __real_3c23d70a;
  if (param_3) {
    while ((uVar7 < param_2 && ((this->DataStream).EndOfStream == (FThreadSafeBool)0x0))) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      FWindowsPlatformProcess::Sleep(fVar5);
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      uVar2 = (this->DataStream).BuildDataStream.NumDataAvailable;
      uVar6 = (this->DataStream).BuildDataStream.BufferDataSize;
      uVar4 = uVar2;
      if (param_2 - uVar7 < uVar2) {
        uVar4 = param_2 - uVar7;
      }
      uVar3 = (ulonglong)(((this->DataStream).BuildDataStream.DataIndex - uVar2) + uVar6) %
              (ulonglong)uVar6;
      uVar6 = uVar6 - (int)uVar3;
      uVar2 = uVar4;
      if (uVar6 < uVar4) {
        uVar2 = uVar6;
      }
      memcpy(param_1 + uVar7,(this->DataStream).BuildDataStream.Data + uVar3,(ulonglong)uVar2);
      if (uVar6 < uVar4) {
        memcpy(param_1 + uVar7 + uVar6,(this->DataStream).BuildDataStream.Data,
               (ulonglong)(uVar4 - uVar6));
      }
      puVar1 = &(this->DataStream).BuildDataStream.NumDataAvailable;
      *puVar1 = *puVar1 - uVar4;
      uVar7 = uVar7 + uVar4;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return uVar7;
}

// GetAllFilenames @ 143253c40

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FDirectoryBuildStreamer::GetAllFilenames
          (FDirectoryBuildStreamer *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FThreadSafeBool FVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  
  fVar4 = __real_3dcccccd;
  FVar1 = this->bFilesEnumerated;
  while ((FVar1 == (FThreadSafeBool)0x0 && (this->bShouldAbort == (FThreadSafeBool)0x0))) {
    FWindowsPlatformProcess::Sleep(fVar4);
    FVar1 = this->bFilesEnumerated;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->EnumeratedFilesCS);
  if ((__return_storage_ptr__ == &this->EnumeratedFiles) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar7;
  }
  iVar2 = (this->EnumeratedFiles).ArrayNum;
  if (iVar2 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar2,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
    ConstructItems<FString,FString,int>
              ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10,
               (FString *)(this->EnumeratedFiles).AllocatorInstance.Data,iVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->EnumeratedFilesCS);
  return __return_storage_ptr__;
}

// GetAllFiles @ 143253d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001432541b4) */
/* WARNING: Removing unreachable block (ram,0x0001432541c2) */

TArray<BuildPatchServices::FFileSpan,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FDirectoryBuildStreamer::GetAllFiles
          (FDirectoryBuildStreamer *this,
          TArray<BuildPatchServices::FFileSpan,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  ForElementType<unsigned_int> FVar7;
  FDirectoryBuildStreamer *pFVar8;
  ForAnyElementType _Src;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  TArray<BuildPatchServices::FFileSpan,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ForElementType<unsigned_int> FVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1a8 [32];
  undefined1 local_158 [8];
  ForElementType<unsigned_int> local_150;
  int local_148;
  int local_144;
  FDirectoryBuildStreamer *local_140;
  LPCRITICAL_SECTION local_138;
  FString local_130;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_120;
  int iStack_118;
  uint uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  undefined4 local_a4;
  FString local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  FScriptContainerElement local_64;
  ForAnyElementType local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  iVar15 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_140 = this;
  if (((this->DataStream).EndOfStream == (FThreadSafeBool)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("DataStream.IsEndOfStream()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\DirectoryBuildStreamer.cpp"
                          ,0x10a,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TArray<BuildPatchServices::FFileSpan,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar11;
  }
  local_138 = (LPCRITICAL_SECTION)&this->FilesCS;
  if (local_138 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_138);
  TMapBase<unsigned___int64,BuildPatchServices::FFileSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,BuildPatchServices::FFileSpan,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<unsigned___int64,BuildPatchServices::FFileSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,BuildPatchServices::FFileSpan,0>_>
              *)&this->Files,__return_storage_ptr__);
  local_150 = (ForElementType<unsigned_int>)&(this->EmptyFiles).Elements.field_0x10;
  local_100 = 0;
  iVar2 = *(int *)&(this->EmptyFiles).Elements.field_0x28;
  uStack_114 = 1;
  iStack_104 = iVar15;
  if (iVar2 != 0) {
    puVar17 = *(uint **)&(this->EmptyFiles).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)local_150;
    }
    uVar13 = *puVar17;
    iVar15 = 0;
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar15;
      local_100 = local_100 + 0x20;
      iVar15 = iVar15 + 1;
      iStack_104 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_143253e8f;
      uVar13 = (puVar17 + 1)[lVar12];
    }
    uStack_114 = -uVar13 & uVar13;
    uVar1 = (ulonglong)uStack_114 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_148 = (int)lVar12;
    iStack_104 = local_100 + -1 + local_148;
    if (iVar2 < iStack_104) {
      iStack_104 = iVar2;
    }
  }
LAB_143253e8f:
  local_120 = &this->EmptyFiles;
  uStack_fc = local_a4;
  iStack_f8 = *(int *)&(this->EmptyFiles).Elements.field_0x8 -
              *(int *)&(this->EmptyFiles).Elements.field_0x34;
  uVar13 = *(uint *)&(this->EmptyFiles).Elements.field_0x28;
  uStack_108 = 0xffffffff;
  TStack_e8.CurrentBitIndex = iStack_104;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  TStack_e8._padding_ = CONCAT44(uStack_114,iVar15);
  uVar18 = uVar13 & 0xffffffe0;
  iVar14 = (int)uVar13 >> 5;
  TStack_e8._28_4_ = local_a4;
  TStack_e8.BaseBitIndex = local_100;
  uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
  iStack_118 = iVar15;
  local_110 = (undefined1 *)local_150;
  local_f0 = local_120;
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_150;
  if ((((int)uVar13 < 0) || (iVar2 < (int)uVar13)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TArray<BuildPatchServices::FFileSpan,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar11;
  }
  pFVar8 = local_140;
  FVar7 = local_150;
  uVar3 = *(int *)((longlong)local_150 + 0x18);
  if (uVar13 != uVar3) {
    FVar16 = *(ForElementType<unsigned_int> *)((longlong)local_150 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_150 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_150;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_143253fb0;
      uVar13 = *(uint *)((undefined1 *)((longlong)FVar16 + 4) + lVar12 * 4);
    }
    uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_144 = (int)lVar12;
    uVar13 = local_144 + -1 + uVar18;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_143253fb0:
  while( true ) {
    pTVar9 = local_f0;
    if (*(int *)&(local_f0->Elements).field_0x8 - *(int *)&(local_f0->Elements).field_0x34 !=
        (int)uStack_c8) {
      local_158[0] = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_158);
    }
    lVar12 = (longlong)TStack_e8.CurrentBitIndex;
    if (((TStack_e8.CurrentBitIndex == uVar13) &&
        ((ForElementType<unsigned_int>)TStack_e8.Array == FVar7)) && (pTVar9 == &pFVar8->EmptyFiles)
       ) {
      LeaveCriticalSection(local_138);
      return __return_storage_ptr__;
    }
    lVar4 = *(longlong *)&pTVar9->Elements;
    ::FString::FString(&local_130,L"");
    ::FString::FString(&local_98,(FString *)(lVar4 + lVar12 * 0x18));
    _Src.Data = local_130.Data.AllocatorInstance.Data;
    local_88 = 0;
    local_80 = 0;
    local_68 = 0;
    local_64 = (FScriptContainerElement)0x0;
    local_60.Data = (FScriptContainerElement *)0x0;
    iVar15 = local_130.Data.ArrayNum;
    local_58 = CONCAT44(local_58._4_4_,iVar15);
    local_78 = 0;
    uStack_70 = 0;
    if (iVar15 == 0) {
      local_58 = local_130.Data._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar15,0,&local_60,iVar15,(int *)((longlong)&local_58 + 4));
      memcpy(local_60.Data,_Src.Data,(longlong)iVar15 * 2);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    FSHA1::GetHash(&pFVar8->EmptyHasher,(uchar *)&local_78);
    pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_98) &&
        ((FScriptContainerElement *)&local_98 <
         pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 0x48)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) break;
    iVar15 = __return_storage_ptr__->ArrayNum;
    if (iVar15 == __return_storage_ptr__->ArrayMax) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x848,&__return_storage_ptr__->AllocatorInstance,
                          &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar15 + 1;
    pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(undefined8 *)(pFVar5 + (longlong)iVar15 * 0x48) = 0;
    pFVar5 = pFVar5 + (longlong)iVar15 * 0x48;
    *(FScriptContainerElement **)pFVar5 = local_98.Data.AllocatorInstance.Data;
    *(int *)(pFVar5 + 8) = local_98.Data.ArrayNum;
    *(int *)(pFVar5 + 0xc) = local_98.Data.ArrayMax;
    *(undefined8 *)(pFVar5 + 0x10) = local_88;
    *(undefined8 *)(pFVar5 + 0x18) = local_80;
    *(undefined8 *)(pFVar5 + 0x20) = local_78;
    *(undefined8 *)(pFVar5 + 0x28) = uStack_70;
    *(undefined4 *)(pFVar5 + 0x30) = local_68;
    *(undefined8 *)(pFVar5 + 0x38) = 0;
    pFVar5[0x34] = local_64;
    *(FScriptContainerElement **)(pFVar5 + 0x38) = local_60.Data;
    *(undefined4 *)(pFVar5 + 0x40) = (undefined4)local_58;
    *(undefined4 *)(pFVar5 + 0x44) = local_58._4_4_;
    local_58 = 0;
    local_60.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  pcVar6 = (code *)swi(3);
  pTVar11 = (TArray<BuildPatchServices::FFileSpan,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
  return pTVar11;
}

// GetBuildSize @ 143254670

ulong64 __thiscall
BuildPatchServices::FDirectoryBuildStreamer::GetBuildSize(FDirectoryBuildStreamer *this)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if ((this->DataStream).EndOfStream == (FThreadSafeBool)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataStream.IsEndOfStream()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\DirectoryBuildStreamer.cpp"
                       ,0x103,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->DataStream);
  uVar3 = (this->DataStream).BuildDataStream.TotalNumDataPushed;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->DataStream);
  return uVar3;
}

// GetEmptyFiles @ 143256250

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FDirectoryBuildStreamer::GetEmptyFiles
          (FDirectoryBuildStreamer *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->FilesCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Array
              (&this->EmptyFiles,__return_storage_ptr__);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetFileSpan @ 143256780

bool __thiscall
BuildPatchServices::FDirectoryBuildStreamer::GetFileSpan
          (FDirectoryBuildStreamer *this,ulong64 param_1,FFileSpan *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  FFileSpan *pFVar4;
  undefined1 *puVar5;
  bool bVar6;
  
  lpCriticalSection = &this->FilesCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->Files).field_0x8 != *(int *)&(this->Files).field_0x34) {
    puVar5 = *(undefined1 **)&(this->Files).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Files).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->Files).field_0x48 - 1U &
                              (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Files;
      do {
        if (*(ulong64 *)((longlong)iVar3 * 0x58 + lVar1) == param_1) {
          pFVar4 = TMapBase<unsigned___int64,BuildPatchServices::FFileSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,BuildPatchServices::FFileSpan,0>_>
                   ::FindChecked((TMapBase<unsigned___int64,BuildPatchServices::FFileSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,BuildPatchServices::FFileSpan,0>_>
                                  *)&this->Files,param_1);
          ::FString::operator=(&param_2->Filename,&pFVar4->Filename);
          param_2->Size = pFVar4->Size;
          param_2->StartIdx = pFVar4->StartIdx;
          uVar2 = *(undefined8 *)((pFVar4->SHAHash).Hash + 8);
          *(undefined8 *)(param_2->SHAHash).Hash = *(undefined8 *)(pFVar4->SHAHash).Hash;
          *(undefined8 *)((param_2->SHAHash).Hash + 8) = uVar2;
          *(undefined4 *)((param_2->SHAHash).Hash + 0x10) =
               *(undefined4 *)((pFVar4->SHAHash).Hash + 0x10);
          param_2->IsUnixExecutable = pFVar4->IsUnixExecutable;
          ::FString::operator=(&param_2->SymlinkTarget,&pFVar4->SymlinkTarget);
          bVar6 = true;
          goto LAB_143256819;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x58 + 0x50 + lVar1);
      } while (iVar3 != -1);
    }
  }
  bVar6 = false;
LAB_143256819:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar6;
}

// HasAborted @ 143257a10

bool __thiscall
BuildPatchServices::FDirectoryBuildStreamer::HasAborted(FDirectoryBuildStreamer *this)

{
  return this->bShouldAbort != (FThreadSafeBool)0x0;
}

// IsEndOfData @ 143258c80

bool __thiscall
BuildPatchServices::FDirectoryBuildStreamer::IsEndOfData(FDirectoryBuildStreamer *this)

{
  uint uVar1;
  
  if ((this->DataStream).EndOfStream != (FThreadSafeBool)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&this->DataStream);
    uVar1 = (this->DataStream).BuildDataStream.NumDataAvailable;
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->DataStream);
    if (uVar1 == 0) {
      return true;
    }
  }
  return false;
}

// ReadData @ 14325f6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall BuildPatchServices::FDirectoryBuildStreamer::ReadData(FDirectoryBuildStreamer *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *pFVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  FStatsCollector *pFVar4;
  code *pcVar5;
  IFileSystem *pIVar6;
  ulong64 uVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  longlong *plVar10;
  char cVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  FFileSpan *pFVar16;
  FString *pFVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  int iVar22;
  LARGE_INTEGER LVar23;
  wchar_t *pwVar24;
  LARGE_INTEGER LVar25;
  undefined1 auStackY_2b8 [32];
  FIdentityFunctor local_278 [8];
  longlong *local_270;
  LARGE_INTEGER local_268;
  ulonglong local_260;
  LARGE_INTEGER local_258;
  LARGE_INTEGER local_250;
  uchar *local_248;
  uint local_240;
  uint local_23c;
  longlong *local_238;
  longlong *local_230;
  FString local_228;
  undefined1 local_218 [16];
  LARGE_INTEGER local_208;
  longlong *local_200;
  LARGE_INTEGER local_1f8;
  LARGE_INTEGER local_1f0;
  LARGE_INTEGER local_1e8;
  LARGE_INTEGER local_1e0;
  longlong *local_1d8;
  LARGE_INTEGER local_1d0;
  LARGE_INTEGER local_1c8;
  longlong *local_1c0;
  ulong64 local_1b8;
  undefined1 local_1b0 [8];
  FString local_1a8;
  LARGE_INTEGER local_198;
  FString local_190;
  longlong local_180;
  ulong64 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined1 local_15c;
  ForAnyElementType local_158;
  int local_150;
  int local_14c;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FSHA1 local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  pFVar4 = (this->Dependencies).StatsCollector;
  pcVar5 = *(code **)((longlong)*pFVar4 + 8);
  ::FString::FString(&local_e8,L"Build Stream: Open Time");
  local_238 = (longlong *)(*pcVar5)(pFVar4,&local_e8,0,0);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  pFVar4 = (this->Dependencies).StatsCollector;
  pcVar5 = *(code **)((longlong)*pFVar4 + 8);
  ::FString::FString(&local_148,L"Build Stream: Read Time");
  local_230 = (longlong *)(*pcVar5)(pFVar4,&local_148,0,0);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  pFVar4 = (this->Dependencies).StatsCollector;
  pcVar5 = *(code **)((longlong)*pFVar4 + 8);
  ::FString::FString(&local_138,L"Build Stream: Hash Time");
  local_1d8 = (longlong *)(*pcVar5)(pFVar4,&local_138,0,0);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  pFVar4 = (this->Dependencies).StatsCollector;
  pcVar5 = *(code **)((longlong)*pFVar4 + 8);
  ::FString::FString(&local_128,L"Build Stream: Enqueue Time");
  local_1c0 = (longlong *)(*pcVar5)(pFVar4,&local_128,0,0);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  pFVar4 = (this->Dependencies).StatsCollector;
  pcVar5 = *(code **)((longlong)*pFVar4 + 8);
  ::FString::FString(&local_118,L"Build Stream: Data Access Speed");
  plVar12 = (longlong *)(*pcVar5)(pFVar4,&local_118,2,0);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  pFVar4 = (this->Dependencies).StatsCollector;
  pcVar5 = *(code **)((longlong)*pFVar4 + 8);
  ::FString::FString(&local_108,L"Build Stream: Potential Throughput");
  local_200 = (longlong *)(*pcVar5)(pFVar4,&local_108,2,0);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  pFVar4 = (this->Dependencies).StatsCollector;
  pcVar5 = *(code **)((longlong)*pFVar4 + 8);
  ::FString::FString(&local_f8,L"Build Stream: Total Data Read");
  plVar13 = (longlong *)(*pcVar5)(pFVar4,&local_f8,1,0);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->DataStream);
  memset((this->DataStream).BuildDataStream.Data,0,
         (ulonglong)(this->DataStream).BuildDataStream.BufferDataSize);
  (this->DataStream).BuildDataStream.NumDataAvailable = 0;
  (this->DataStream).BuildDataStream.DataIndex = 0;
  (this->DataStream).BuildDataStream.TotalNumDataPushed = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->DataStream);
  local_268.QuadPart = 0;
  local_260 = 0;
  QueryPerformanceCounter(&local_258);
  if ((this->Config).InputListFile.Data.ArrayNum < 2) {
    pIVar6 = (this->Dependencies).FileSystem;
    if ((this->Config).BuildRoot.Data.ArrayNum == 0) {
      (**(code **)((longlong)*pIVar6 + 0x90))(pIVar6,&local_268,L"",0);
    }
    else {
      (**(code **)((longlong)*pIVar6 + 0x90))
                (pIVar6,&local_268,(this->Config).BuildRoot.Data.AllocatorInstance.Data,0);
    }
  }
  else {
    ReadInputFileList(this,(TArray<FString,TSizedDefaultAllocator<32>_> *)&local_268.s);
  }
  QueryPerformanceCounter(&local_250);
  if (4 < (byte)LogBuildStreamer._0_1_) {
    FGenericPlatformTime::PrettyTime
              ((FString *)local_218,
               (double)(local_250.s.LowPart - local_258._0_4_) *
               FGenericPlatformTime::SecondsPerCycle64);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildStreamer);
    if ((FScriptContainerElement *)local_218._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_218._0_8_);
    }
  }
  AlgoImpl::
  IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
            ((FString *)local_268,(uint)local_260,local_278[0],(TLess<void> *)local_278);
  StripIgnoredFiles(this,(TArray<FString,TSizedDefaultAllocator<32>_> *)&local_268.s);
  pFVar2 = &this->EnumeratedFilesCS;
  if (pFVar2 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
  pTVar3 = &this->EnumeratedFiles;
  if ((LARGE_INTEGER *)pTVar3 != &local_268) {
    DestructItems<FString,int>
              ((FString *)(pTVar3->AllocatorInstance).Data,(this->EnumeratedFiles).ArrayNum);
    LVar23 = local_268;
    iVar22 = (uint)local_260;
    piVar1 = &(this->EnumeratedFiles).ArrayMax;
    (this->EnumeratedFiles).ArrayNum = (uint)local_260;
    if (((uint)local_260 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(uint)local_260,*piVar1,&pTVar3->AllocatorInstance,(uint)local_260,piVar1);
      ConstructItems<FString,FString,int>((pTVar3->AllocatorInstance).Data,(FString *)LVar23,iVar22)
      ;
    }
  }
  LOCK();
  this->bFilesEnumerated = (FThreadSafeBool)0x1;
  UNLOCK();
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
  FSHA1::FSHA1(&local_c8);
  local_248 = operator_new__(0xa00000);
  uVar19 = (ulonglong)(int)(uint)local_260;
  LVar25.QuadPart = uVar19 * 0x10 + local_268.QuadPart;
  local_23c = (uint)local_260;
  uVar20 = uVar19;
  LVar23 = local_268;
  local_258.QuadPart = LVar25.QuadPart;
  do {
    local_250 = LVar23;
    if ((int)uVar20 != (int)uVar19) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_278);
    }
    if ((LVar23.QuadPart == LVar25.QuadPart) || (this->bShouldAbort != (FThreadSafeBool)0x0)) {
LAB_14325ff8b:
      LOCK();
      (this->DataStream).EndOfStream = (FThreadSafeBool)0x1;
      UNLOCK();
      operator_delete__(local_248);
      FSHA1::~FSHA1(&local_c8);
      DestructItems<FString,int>((FString *)local_268,(uint)local_260);
      if ((FString *)local_268.QuadPart != (FString *)0x0) {
        FMemory::Free((void *)local_268);
      }
      return;
    }
    QueryPerformanceCounter(&local_208);
    pIVar6 = (this->Dependencies).FileSystem;
    if (*(int *)(LVar23.QuadPart + 8) == 0) {
      pwVar24 = L"";
    }
    else {
      pwVar24 = *(wchar_t **)LVar23;
    }
    (**(code **)((longlong)*pIVar6 + 0x48))(pIVar6,&local_270,pwVar24);
    ::FString::FString(&local_228,L"");
    QueryPerformanceCounter(&local_198);
    LOCK();
    *local_238 = *local_238 + (local_198.QuadPart - (longlong)local_208);
    UNLOCK();
    if (local_270 == (longlong *)0x0) {
      if (1 < (byte)LogBuildStreamer._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildStreamer);
      }
      LOCK();
      this->bShouldAbort = (FThreadSafeBool)0x1;
      UNLOCK();
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
      if (local_270 != (longlong *)0x0) {
        (**(code **)*local_270)(local_270,1);
      }
      goto LAB_14325ff8b;
    }
    ::FString::ConcatFC(&local_1a8,&(this->Config).BuildRoot,L"/");
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_1a8.Data.ArrayNum != 0) {
      FVar21.Data = local_1a8.Data.AllocatorInstance.Data;
    }
    FPaths::MakePathRelativeTo((FString *)LVar23,(wchar_t *)FVar21.Data);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    lVar14 = (**(code **)(*local_270 + 0x30))();
    if (lVar14 < 1) {
      if (lVar14 == 0) {
        pFVar17 = ::FString::FString(&local_d8,(FString *)LVar23);
        pFVar2 = &this->FilesCS;
        if (pFVar2 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                  (&this->EmptyFiles,(FString *)(local_1b0 + 4),(bool *)pFVar17);
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
        pFVar8 = (pFVar17->Data).AllocatorInstance.Data;
        LVar25 = local_258;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
          LVar25 = local_258;
        }
      }
    }
    else {
      FSHA1::Reset(&local_c8);
      EnterCriticalSection((LPCRITICAL_SECTION)&this->DataStream);
      uVar7 = (this->DataStream).BuildDataStream.TotalNumDataPushed;
      local_1b8 = uVar7;
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->DataStream);
      ::FString::FString(&local_190,(FString *)LVar23);
      FVar21.Data = local_228.Data.AllocatorInstance.Data;
      local_160 = 0;
      local_15c = 0;
      local_158.Data = (FScriptContainerElement *)0x0;
      iVar22 = local_228.Data.ArrayNum;
      local_170 = 0;
      uStack_168 = 0;
      local_180 = lVar14;
      local_178 = uVar7;
      local_150 = iVar22;
      if (iVar22 == 0) {
        local_14c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar22,0,&local_158,iVar22,&local_14c);
        memcpy(local_158.Data,FVar21.Data,(longlong)iVar22 * 2);
      }
      pFVar2 = &this->FilesCS;
      if (pFVar2 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
      local_218._0_8_ = &local_178;
      local_218._8_8_ = &local_190;
      TSet<TTuple<unsigned___int64,BuildPatchServices::FFileSpan>,TDefaultMapHashableKeyFuncs<unsigned___int64,BuildPatchServices::FFileSpan,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,BuildPatchServices::FFileSpan_&&>_>
                ((TSet<TTuple<unsigned___int64,BuildPatchServices::FFileSpan>,TDefaultMapHashableKeyFuncs<unsigned___int64,BuildPatchServices::FFileSpan,0>,FDefaultSetAllocator>
                  *)&this->Files,
                 (TPairInitializer<unsigned___int64_const_&,BuildPatchServices::FFileSpan_&&> *)
                 local_1b0,(bool *)local_218);
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data);
      }
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      cVar11 = (**(code **)(*local_270 + 0x38))();
      plVar9 = local_200;
      while ((cVar11 == '\0' && (LVar23 = local_250, this->bShouldAbort == (FThreadSafeBool)0x0))) {
        lVar15 = (**(code **)(*local_270 + 0x28))();
        uVar18 = (uint)(lVar14 - lVar15);
        if (0xa00000 < lVar14 - lVar15) {
          uVar18 = 0xa00000;
        }
        local_240 = uVar18;
        QueryPerformanceCounter(&local_1f0);
        (**(code **)(*local_270 + 0x188))(local_270,local_248,uVar18);
        QueryPerformanceCounter(&local_1f8);
        LOCK();
        *local_230 = *local_230 + (local_1f8.QuadPart - (longlong)local_1f0);
        UNLOCK();
        LOCK();
        *plVar13 = *plVar13 + (ulonglong)uVar18;
        UNLOCK();
        QueryPerformanceCounter(&local_1e0);
        FSHA1::Update(&local_c8,local_248,(ulonglong)uVar18);
        QueryPerformanceCounter(&local_1e8);
        plVar10 = local_1d8;
        LOCK();
        *local_1d8 = *local_1d8 + (local_1e8.QuadPart - (longlong)local_1e0);
        UNLOCK();
        QueryPerformanceCounter(&local_1c8);
        FDataStream::EnqueueData(&this->DataStream,local_248,&local_240);
        QueryPerformanceCounter(&local_1d0);
        LOCK();
        *local_1c0 = *local_1c0 + (local_1d0.QuadPart - (longlong)local_1c8);
        UNLOCK();
        LOCK();
        *plVar12 = (longlong)
                   ((double)*plVar13 /
                   ((double)(ulonglong)(*local_230 + *local_238) *
                   FGenericPlatformTime::SecondsPerCycle64));
        UNLOCK();
        LOCK();
        *plVar9 = (longlong)
                  ((double)*plVar13 /
                  ((double)(ulonglong)(*local_238 + *local_230 + *plVar10) *
                  FGenericPlatformTime::SecondsPerCycle64));
        UNLOCK();
        cVar11 = (**(code **)(*local_270 + 0x38))();
        LVar23 = local_250;
      }
      FSHA1::Final(&local_c8);
      EnterCriticalSection((LPCRITICAL_SECTION)&this->FilesCS);
      pFVar16 = TMapBase<unsigned___int64,BuildPatchServices::FFileSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,BuildPatchServices::FFileSpan,0>_>
                ::FindChecked((TMapBase<unsigned___int64,BuildPatchServices::FFileSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,BuildPatchServices::FFileSpan,0>_>
                               *)&this->Files,local_1b8);
      FSHA1::GetHash(&local_c8,(pFVar16->SHAHash).Hash);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->FilesCS);
      LVar25 = local_258;
    }
    (**(code **)(*local_270 + 0x210))();
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    if (local_270 != (longlong *)0x0) {
      (**(code **)*local_270)(local_270,1);
    }
    uVar20 = local_260 & 0xffffffff;
    uVar19 = (ulonglong)local_23c;
    LVar23.QuadPart = LVar23.QuadPart + 0x10;
  } while( true );
}

// ReadInputFileList @ 143260010

void __thiscall
BuildPatchServices::FDirectoryBuildStreamer::ReadInputFileList
          (FDirectoryBuildStreamer *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType this_00;
  undefined1 local_res8 [8];
  FString local_68;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  if ((this->Config).InputListFile.Data.ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(this->Config).InputListFile.Data.AllocatorInstance.Data;
  }
  FFileHelper::LoadFileToString(&local_48,pwVar9,None,0);
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  ::FString::ParseIntoArrayLines(&local_48,&local_58,true);
  uVar3 = local_58._8_8_;
  uVar7 = (ulonglong)local_58.ArrayNum;
  pFVar12 = local_58.AllocatorInstance.Data + uVar7 * 0x10;
  this_00.Data = local_58.AllocatorInstance.Data;
  do {
    if (local_58.ArrayNum != (int)uVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (this_00.Data == pFVar12) {
      DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      return;
    }
    ::FString::TrimStartAndEndInline((FString *)this_00.Data);
    iVar6 = *(int *)(this_00.Data + 8) + -1;
    if (*(int *)(this_00.Data + 8) == 0) {
      iVar6 = 0;
    }
    if (0 < iVar6) {
      iVar1 = (this->Config).BuildRoot.Data.ArrayNum;
      local_68.Data.ArrayNum = iVar1;
      if ((iVar1 == 0) && (iVar6 != -1)) {
        iVar5 = iVar6 + 2;
        pFVar10 = (this->Config).BuildRoot.Data.AllocatorInstance.Data;
LAB_143260100:
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar5 != 0) goto LAB_143260109;
        local_68.Data.ArrayMax = 0;
      }
      else {
        iVar5 = iVar6 + 1;
        pFVar10 = (this->Config).BuildRoot.Data.AllocatorInstance.Data;
        if (iVar1 == 0) goto LAB_143260100;
LAB_143260109:
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar8 = iVar1 + iVar5;
        if ((int)uVar8 < iVar1) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar8,0,(ForAnyElementType *)&local_68,iVar1,&local_68.Data.ArrayMax);
        if (iVar1 != 0) {
          memcpy(local_68.Data.AllocatorInstance.Data,pFVar10,(longlong)iVar1 * 2);
        }
      }
      ::FString::PathAppend(&local_68,*(wchar_t **)this_00.Data,iVar6);
      FPaths::NormalizeFilename(&local_68);
      pFVar10 = (param_1->AllocatorInstance).Data;
      if ((pFVar10 <= (FScriptContainerElement *)&local_68) &&
         ((FScriptContainerElement *)&local_68 < pFVar10 + (longlong)param_1->ArrayMax * 0x10)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      _Src.Data = local_68.Data.AllocatorInstance.Data;
      pFVar10 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      param_1->ArrayNum = iVar6 + 1;
      *(undefined8 *)&pFVar10->field_0x0 = 0;
      lVar11 = (longlong)local_68.Data.ArrayNum;
      *(int *)&pFVar10[8].field_0x0 = local_68.Data.ArrayNum;
      if (local_68.Data.ArrayNum == 0) {
        *(int *)(pFVar10 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar10,local_68.Data.ArrayNum,
                   (int *)(pFVar10 + 0xc));
        memcpy(*(void **)&pFVar10->field_0x0,_Src.Data,lVar11 * 2);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    uVar7 = uVar3 & 0xffffffff;
    this_00.Data = this_00.Data + 0x10;
  } while( true );
}

// SetEnumeratedFiles @ 143268b90

void __thiscall
BuildPatchServices::FDirectoryBuildStreamer::SetEnumeratedFiles
          (FDirectoryBuildStreamer *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->EnumeratedFilesCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&this->EnumeratedFiles,param_1);
    LOCK();
    this->bFilesEnumerated = (FThreadSafeBool)0x1;
    UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000143268be6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetFileHash @ 143268c10

void __thiscall
BuildPatchServices::FDirectoryBuildStreamer::SetFileHash
          (FDirectoryBuildStreamer *this,ulong64 param_1,FSHA1 *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FFileSpan *pFVar1;
  
  lpCriticalSection = &this->FilesCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = TMapBase<unsigned___int64,BuildPatchServices::FFileSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,BuildPatchServices::FFileSpan,0>_>
             ::FindChecked((TMapBase<unsigned___int64,BuildPatchServices::FFileSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,BuildPatchServices::FFileSpan,0>_>
                            *)&this->Files,param_1);
    FSHA1::GetHash(param_2,(pFVar1->SHAHash).Hash);
                    /* WARNING: Could not recover jumptable at 0x000143268c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StripIgnoredFiles @ 143269620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
BuildPatchServices::FDirectoryBuildStreamer::StripIgnoredFiles
          (FDirectoryBuildStreamer *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  wchar_t *pwVar9;
  ForAnyElementType this_00;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  undefined1 auStackY_128 [32];
  byte local_e8 [8];
  FString local_e0;
  int local_d0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  int local_b8;
  int local_b4;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_b0;
  FString local_a8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_b0 = param_1;
  if (4 < (byte)LogBuildStreamer._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildStreamer);
  }
  local_b4 = param_1->ArrayNum;
  ::FString::FString(&local_a8,L"");
  if ((this->Config).IgnoreListFile.Data.ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(this->Config).IgnoreListFile.Data.AllocatorInstance.Data;
  }
  FFileHelper::LoadFileToString(&local_a8,pwVar9,None,0);
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  ::FString::ParseIntoArrayLines(&local_a8,&local_c8,true);
  iVar5 = param_1->ArrayNum;
  pFVar13 = (param_1->AllocatorInstance).Data;
  pFVar11 = pFVar13 + (longlong)iVar5 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar5) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_e8);
    }
    if (pFVar13 == pFVar11) break;
    FPaths::NormalizeFilename((FString *)pFVar13);
    pFVar13 = pFVar13 + 0x10;
  }
  iVar5 = local_c8.ArrayNum;
  uVar6 = (ulonglong)local_c8.ArrayNum;
  pFVar13 = local_c8.AllocatorInstance.Data + uVar6 * 0x10;
  this_00.Data = local_c8.AllocatorInstance.Data;
  do {
    if ((int)uVar6 != iVar5) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_e8);
    }
    if (this_00.Data == pFVar13) {
      iVar2 = 0;
      local_6c = 0x80;
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_8_ = 0;
      local_78 = (void *)0x0;
      iVar5 = 0;
      local_70 = 0;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      local_68 = 0xffffffff;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
      Append<TSizedDefaultAllocator<32>_>
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,&local_c8
                );
      lVar10 = (longlong)local_b0->ArrayNum;
      if (local_b0->ArrayNum != 0) {
        pFVar13 = (local_b0->AllocatorInstance).Data;
        local_d0 = 0;
        if (*(int *)&pFVar13[8].field_0x0 == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)
                   (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar13->field_0x0)->
                   AllocatorInstance).Data;
          iVar5 = *(int *)&pFVar13[8].field_0x0 + -1;
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar9);
        iVar5 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                FindIndexByHash<FString>
                          ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98
                           ,uVar4,(FString *)pFVar13);
        if ((iVar5 != -1) && (4 < (byte)LogBuildStreamer._0_1_)) {
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u________s_150a7d4f8,
                     (FLogCategoryBase *)&LogBuildStreamer);
        }
        local_e8[0] = iVar5 == -1;
        lVar12 = 0;
        iVar5 = iVar2;
        do {
          bVar1 = local_e8[0];
          lVar12 = lVar12 + 1;
          iVar3 = iVar2 + 1;
          local_b8 = iVar2;
          if (lVar12 < lVar10) {
            pFVar11 = pFVar13 + lVar12 * 0x10;
            do {
              iVar5 = 0;
              if (*(int *)&pFVar11[8].field_0x0 == 0) {
                pwVar9 = L"";
              }
              else {
                pwVar9 = *(wchar_t **)&pFVar11->field_0x0;
                iVar5 = *(int *)&pFVar11[8].field_0x0 + -1;
              }
              uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar9);
              iVar2 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                      FindIndexByHash<FString>
                                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                                 local_98,uVar4,(FString *)(pFVar13 + (longlong)iVar3 * 0x10));
              if ((iVar2 != -1) && (4 < (byte)LogBuildStreamer._0_1_)) {
                UE::Logging::Private::BasicLog<5>
                          ((FStaticBasicLogRecord *)&PTR_u________s_150a7d4f8,
                           (FLogCategoryBase *)&LogBuildStreamer);
              }
              iVar5 = local_d0;
              if ((bool)bVar1 != (iVar2 == -1)) break;
              iVar3 = iVar3 + 1;
              lVar12 = lVar12 + 1;
              pFVar11 = pFVar11 + 0x10;
            } while (lVar12 < lVar10);
          }
          iVar2 = iVar3;
          bVar1 = local_e8[0];
          iVar3 = iVar2 - local_b8;
          if (local_e8[0] == 0) {
            DestructItems<FString,int>((FString *)(pFVar13 + (longlong)local_b8 * 0x10),iVar3);
          }
          else {
            if (iVar5 != local_b8) {
              memmove(pFVar13 + (longlong)iVar5 * 0x10,pFVar13 + (longlong)local_b8 * 0x10,
                      (longlong)iVar3 << 4);
            }
            iVar5 = iVar5 + iVar3;
            local_d0 = iVar5;
          }
          local_e8[0] = bVar1 ^ 1;
        } while (lVar12 < lVar10);
        local_b0->ArrayNum = iVar5;
      }
      if (4 < (byte)LogBuildStreamer._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildStreamer);
      }
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_98,0,local_98._8_4_);
      bVar14 = local_98._12_4_ != 0;
      local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
      if (bVar14) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      DestructItems<FString,int>((FString *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      return;
    }
    iVar2 = ::FString::Find((FString *)this_00.Data,L"\t",1,CaseSensitive,FromStart,-1);
    if (iVar2 != -1) {
      iVar3 = *(int *)(this_00.Data + 8) + -1;
      if (*(int *)(this_00.Data + 8) == 0) {
        iVar3 = 0;
      }
      iVar7 = iVar3;
      if (iVar2 < iVar3) {
        iVar7 = iVar2;
      }
      iVar2 = 0;
      if (0 < iVar7) {
        iVar2 = iVar7;
      }
      ::FString::RemoveAt((FString *)this_00.Data,iVar2,iVar3 - iVar2,No);
    }
    uVar4 = (this->Config).BuildRoot.Data.ArrayNum;
    iVar2 = *(int *)(this_00.Data + 8) + -1;
    if (*(int *)(this_00.Data + 8) == 0) {
      iVar2 = 0;
    }
    iVar3 = iVar2 + 1;
    if ((uVar4 == 0) && (iVar3 != 0)) {
      iVar3 = iVar2 + 2;
      pFVar11 = (this->Config).BuildRoot.Data.AllocatorInstance.Data;
LAB_1432697bb:
      local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar3 != 0) goto LAB_1432697c6;
      local_e0.Data.ArrayMax = 0;
      local_e0.Data.ArrayNum = uVar4;
    }
    else {
      pFVar11 = (this->Config).BuildRoot.Data.AllocatorInstance.Data;
      if (uVar4 == 0) goto LAB_1432697bb;
LAB_1432697c6:
      local_e0.Data.ArrayNum = uVar4;
      local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar8 = uVar4 + iVar3;
      if ((int)uVar8 < (int)uVar4) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar8,0,(ForAnyElementType *)&local_e0,uVar4,&local_e0.Data.ArrayMax);
      if (uVar4 != 0) {
        memcpy(local_e0.Data.AllocatorInstance.Data,pFVar11,(longlong)(int)uVar4 * 2);
      }
    }
    ::FString::PathAppend(&local_e0,*(wchar_t **)this_00.Data,iVar2);
    if (this_00.Data != (FScriptContainerElement *)&local_e0) {
      if (*(void **)this_00.Data != (void *)0x0) {
        FMemory::Free(*(void **)this_00.Data);
      }
      *(FScriptContainerElement **)this_00.Data = local_e0.Data.AllocatorInstance.Data;
      *(int *)(this_00.Data + 8) = local_e0.Data.ArrayNum;
      *(int *)(this_00.Data + 0xc) = local_e0.Data.ArrayMax;
      local_e0.Data.ArrayNum = 0;
      local_e0.Data.ArrayMax = 0;
      local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    FPaths::NormalizeFilename((FString *)this_00.Data);
    uVar6 = local_c8._8_8_ & 0xffffffff;
    this_00.Data = this_00.Data + 0x10;
  } while( true );
}

