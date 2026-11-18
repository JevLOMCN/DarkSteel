// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 20

// Call @ 148cbd390

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`StorageServer::FCacheStrategyLinear::FCacheStrategyLinear'::__l2::<lambda_1>,void,FIoChunkId_const_&,StorageServer::FCacheEntry_const_&>
::Call(void *param_1,FIoChunkId *param_2,FCacheEntry *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  **(longlong **)((longlong)param_1 + 8) =
       **(longlong **)((longlong)param_1 + 8) + param_3->StorageSize;
  puVar1 = *(ulonglong **)param_1;
  uVar2 = param_3->StorageSize + param_3->StorageOffset;
  if (uVar2 < *puVar1) {
    uVar2 = *puVar1;
  }
  *puVar1 = uVar2;
  return;
}

// Call @ 148cbd3c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FStorageServerPlatformFile::IterateDirectory'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,bool,FIoChunkId_const_&,wchar_t_const_*,__int64>
::Call(void *param_1,FIoChunkId *param_2,wchar_t **param_3,long64 *param_4)

{
  bool bVar1;
  
  bVar1 = ``FStorageServerPlatformFile::IterateDirectory'::__l2::<lambda_2>::operator()'::__l2::
          <lambda_1>::operator()(param_1,param_2,*param_3,*param_4);
  return bVar1;
}

// Call @ 148cbd3e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FStorageServerPlatformFile::IterateDirectoryRecursively'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,bool,FIoChunkId_const_&,wchar_t_const_*,__int64>
::Call(void *param_1,FIoChunkId *param_2,wchar_t **param_3,long64 *param_4)

{
  bool bVar1;
  
  bVar1 = ``FStorageServerPlatformFile::IterateDirectoryRecursively'::__l2::<lambda_2>::operator()'
          ::__l2::<lambda_1>::operator()(param_1,param_2,*param_3,*param_4);
  return bVar1;
}

// Call @ 148cbd400

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FStorageServerPlatformFile::IterateDirectoryStat'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,bool,FIoChunkId_const_&,wchar_t_const_*,__int64>
::Call(void *param_1,FIoChunkId *param_2,wchar_t **param_3,long64 *param_4)

{
  bool bVar1;
  
  bVar1 = ``FStorageServerPlatformFile::IterateDirectoryStat'::__l2::<lambda_2>::operator()'::__l2::
          <lambda_1>::operator()(param_1,param_2,*param_3,*param_4);
  return bVar1;
}

// Call @ 148cbd420

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`StorageServer::FCacheStrategyLinear::Invalidate'::__l2::<lambda_1>,void,StorageServer::FCacheEntry_const_&>
::Call(void *param_1,FCacheEntry *param_2)

{
  *(longlong *)(*(longlong *)param_1 + 0x30) =
       *(longlong *)(*(longlong *)param_1 + 0x30) + param_2->StorageSize;
  return;
}

// Call @ 148cbd440

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStorageServerPlatformFile::IterateDirectory'::__l2::<lambda_1>,bool,wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&>
::Call(void *param_1,wchar_t **param_2,FDirectoryVisitor *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)param_1 + 0x108);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cbd455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x140))(plVar1,*param_2);
    return (bool)uVar2;
  }
  return true;
}

// Call @ 148cbd470

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStorageServerPlatformFile::IterateDirectoryRecursively'::__l2::<lambda_1>,bool,wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&>
::Call(void *param_1,wchar_t **param_2,FDirectoryVisitor *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)param_1 + 0x108);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cbd485. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x1d0))(plVar1,*param_2);
    return (bool)uVar2;
  }
  return true;
}

// Call @ 148cbd4a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStorageServerPlatformFile::IterateDirectoryStat'::__l2::<lambda_1>,bool,wchar_t_const_*,IPlatformFile::FDirectoryStatVisitor_&>
::Call(void *param_1,wchar_t **param_2,FDirectoryStatVisitor *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)param_1 + 0x108);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cbd4b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x150))(plVar1,*param_2);
    return (bool)uVar2;
  }
  return true;
}

// Call @ 148cbd4d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStorageServerEngineStartupPrecache::PrecacheItems'::__l2::<lambda_1>,void,FIoChunkId,enum_EStorageServerContentType,FIoBuffer,TOptional<unsigned___int64>_const_&>
::Call(void *param_1,FIoChunkId *param_2,EStorageServerContentType *param_3,FIoBuffer *param_4,
      TOptional<unsigned___int64> *param_5)

{
  int *piVar1;
  int iVar2;
  EStorageServerContentType EVar3;
  BufCore *this;
  FStorageServerEngineStartupPrecache *this_00;
  BufCore *local_res8 [4];
  FIoChunkId local_18;
  
  this = (param_4->CorePtr).Reference;
  (param_4->CorePtr).Reference = (BufCore *)0x0;
  local_18.Id._8_4_ = *(undefined4 *)(param_2->Id + 8);
  local_18.Id._0_8_ = *(undefined8 *)param_2->Id;
  EVar3 = *param_3;
  this_00 = *(FStorageServerEngineStartupPrecache **)param_1;
  local_res8[0] = this;
  if (this == (BufCore *)0x0) {
    FStorageServerEngineStartupPrecache::HandleChunkBatchResponse
              (this_00,&local_18,EVar3,(FIoBuffer)local_res8,param_5);
  }
  else {
    LOCK();
    this->NumRefs = this->NumRefs + 1;
    UNLOCK();
    FStorageServerEngineStartupPrecache::HandleChunkBatchResponse
              (this_00,&local_18,EVar3,(FIoBuffer)local_res8,param_5);
    FIoBuffer::BufCore::CheckRefCount(this);
    LOCK();
    piVar1 = &this->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this);
      ::operator_delete(this,0x20);
      return;
    }
  }
  return;
}

// Call @ 148cbd580

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStorageServerConnection::ReadChunkRequestAsync'::__l2::<lambda_1>,void,TTuple<TIoStatusOr<FIoBuffer>,enum_EStorageServerContentType>_>
::Call(void *param_1,TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType> *param_2)

{
  TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType> local_28;
  
  FIoStatus::FIoStatus((FIoStatus *)&local_28);
  FIoStatus::operator=((FIoStatus *)&local_28,(FIoStatus *)param_2);
  if (local_28._8_4_ == 0) {
    local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
    *(undefined8 *)&param_2->field_0x10 = 0;
    FIoStatus::operator=((FIoStatus *)param_2,Unknown);
  }
  local_28._24_1_ = param_2->field_0x18;
  `FStorageServerConnection::ReadChunkRequestAsync'::__l2::<lambda_1>::operator()(param_1,&local_28)
  ;
  return;
}

// Call @ 148cbd600

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStorageServerPackageStoreBackend::FAsyncInitRunnable::Run'::__l2::<lambda_1>,void,FPackageStoreEntryResource_&&>
::Call(void *param_1,FPackageStoreEntryResource *param_2)

{
  TArray<FPackageId,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FSHAHash,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FStoreEntry *pFVar4;
  TArray<FSHAHash,TSizedDefaultAllocator<32>_> *pTVar5;
  FPackageId FStackX_10;
  
  if ((param_2->Flags & HasPackageData) != None) {
    FStackX_10.Id = (param_2->PackageId).Id;
    pFVar4 = TMapBase<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry,0>_>
             ::FindOrAddImpl<FPackageId>
                       ((TMapBase<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry,0>_>
                         *)(*(longlong *)(*(longlong *)param_1 + 8) + 8),(uint)FStackX_10.Id,
                        &FStackX_10);
    pTVar1 = &param_2->ImportedPackageIds;
    if (pFVar4 != (FStoreEntry *)pTVar1) {
      pFVar3 = (pFVar4->ImportedPackages).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar4->ImportedPackages).AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar4->ImportedPackages).ArrayNum = (param_2->ImportedPackageIds).ArrayNum;
      (pFVar4->ImportedPackages).ArrayMax = (param_2->ImportedPackageIds).ArrayMax;
      (param_2->ImportedPackageIds).ArrayNum = 0;
      (param_2->ImportedPackageIds).ArrayMax = 0;
    }
    pTVar2 = &param_2->ShaderMapHashes;
    pTVar5 = &pFVar4->ShaderMapHashes;
    if (pTVar5 != pTVar2) {
      pFVar3 = (pTVar5->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar5->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar4->ShaderMapHashes).ArrayNum = (param_2->ShaderMapHashes).ArrayNum;
      (pFVar4->ShaderMapHashes).ArrayMax = (param_2->ShaderMapHashes).ArrayMax;
      (param_2->ShaderMapHashes).ArrayNum = 0;
      (param_2->ShaderMapHashes).ArrayMax = 0;
    }
  }
  return;
}

// Call @ 148cbd610

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStorageServerConnection::FAsyncQueryLatestServerChunkInfo::Run'::__l2::<lambda_1>,void,FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&>
::Call(void *param_1,FIoChunkId *param_2,FCacheChunkInfo *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  longlong lVar7;
  ulong64 uVar8;
  
  if ((param_3->ModTag).bIsSet == false) {
    uVar8 = 0;
  }
  else {
    uVar8 = (param_3->ModTag).TypedValue;
  }
  pFVar4 = *(ForAnyElementType **)param_1;
  uVar2 = *(undefined8 *)param_2->Id;
  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
  uVar3 = *(undefined4 *)(param_2->Id + 8);
  iVar6 = *(int *)&pFVar4[1].Data;
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,pFVar4,piVar1);
  }
  lVar7 = (longlong)iVar6;
  *(int *)&pFVar4[1].Data = iVar6 + 1;
  pFVar5 = pFVar4->Data;
  *(undefined8 *)(pFVar5 + lVar7 * 0x30) = uVar2;
  *(undefined4 *)(pFVar5 + lVar7 * 0x30 + 8) = uVar3;
  pFVar5[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)0x1;
  *(undefined8 *)(pFVar5 + lVar7 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar5 + lVar7 * 0x30 + 0x18) = 0xffffffffffffffff;
  *(ulong64 *)(pFVar5 + lVar7 * 0x30 + 0x20) = uVar8;
  return;
}

// Call @ 148cbd620

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStorageServerPlatformFile::SendGetFileListMessage'::__l2::<lambda_1>,void,FIoChunkId,TStringView<wchar_t>,__int64>
::Call(void *param_1,FIoChunkId *param_2,TStringView<wchar_t> *param_3,long64 *param_4)

{
  FIoChunkId local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_3->DataPtr;
  local_18.Size = param_3->Size;
  local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_28.Id._8_4_ = *(undefined4 *)(param_2->Id + 8);
  local_28.Id._0_8_ = *(undefined8 *)param_2->Id;
  `FStorageServerPlatformFile::SendGetFileListMessage'::__l2::<lambda_1>::operator()
            (param_1,&local_28,&local_18,*param_4);
  return;
}

// Call @ 148cbd660

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`StorageServer::FCacheJournalSectioned::ValidateJournal'::__l2::<lambda_1>,void,FIoChunkId_const_&,StorageServer::FCacheEntry_const_&>
::Call(void *param_1,FIoChunkId *param_2,FCacheEntry *param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined1 auStack_38 [8];
  undefined1 uStack_30;
  undefined1 uStack_20;
  undefined1 uStack_14;
  
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_14 = 0;
  cVar5 = (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x28))
                    (*(longlong **)((longlong)param_1 + 8),param_2,auStack_38);
  if (cVar5 == '\0') {
    pFVar2 = *(ForAnyElementType **)param_1;
    if ((pFVar2->Data <= param_2) &&
       (param_2 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0xc)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10c,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    pFVar3 = pFVar2->Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0xc) = *(undefined8 *)param_2->Id;
    *(undefined4 *)(pFVar3 + (longlong)iVar7 * 0xc + 8) = *(undefined4 *)(param_2->Id + 8);
  }
  return;
}

// Call @ 148cbd670

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStorageServerConnection::ReadChunkRequest'::__l12::<lambda_1>,void,FIoChunkId,enum_EStorageServerContentType,FIoBuffer,TOptional<unsigned___int64>_const_&>
::Call(void *param_1,FIoChunkId *param_2,EStorageServerContentType *param_3,FIoBuffer *param_4,
      TOptional<unsigned___int64> *param_5)

{
  BufCore *local_res10 [3];
  FIoChunkId local_18 [2];
  
  local_res10[0] = (param_4->CorePtr).Reference;
  (param_4->CorePtr).Reference = (BufCore *)0x0;
  local_18[0].Id._0_8_ = *(undefined8 *)param_2->Id;
  local_18[0].Id._8_4_ = *(undefined4 *)(param_2->Id + 8);
  `FStorageServerConnection::ReadChunkRequest'::__l12::<lambda_1>::operator()
            (param_1,local_18,*param_3,(FIoBuffer)local_res10,param_5);
  return;
}

// Call @ 148cbd6c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStorageServerPlatformFile::IterateDirectory'::__l2::<lambda_2>,bool,wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&>
::Call(void *param_1,wchar_t **param_2,FDirectoryVisitor *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong local_38;
  FDirectoryVisitor *local_30;
  code *local_28;
  longlong *local_20;
  FString local_18;
  
  lVar1 = *(longlong *)param_1;
  local_20 = &local_38;
  local_28 = TFunctionRefCaller<``FStorageServerPlatformFile::IterateDirectory'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,bool,FIoChunkId_const_&,wchar_t_const_*,__int64>
             ::Call;
  local_38 = lVar1;
  local_30 = param_3;
  ::FString::FString(&local_18,*param_2);
  bVar2 = FStorageServerFileSystemTOC::IterateDirectory
                    ((FStorageServerFileSystemTOC *)(lVar1 + 0x148),&local_18,
                     (TFunctionRef<bool___cdecl(FIoChunkId_const_&,wchar_t_const_*,__int64)> *)
                     &local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// Call @ 148cbd730

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStorageServerPlatformFile::IterateDirectoryRecursively'::__l2::<lambda_2>,bool,wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&>
::Call(void *param_1,wchar_t **param_2,FDirectoryVisitor *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong local_38;
  FDirectoryVisitor *local_30;
  code *local_28;
  longlong *local_20;
  FString local_18;
  
  lVar1 = *(longlong *)param_1;
  local_20 = &local_38;
  local_28 = TFunctionRefCaller<``FStorageServerPlatformFile::IterateDirectoryRecursively'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,bool,FIoChunkId_const_&,wchar_t_const_*,__int64>
             ::Call;
  local_38 = lVar1;
  local_30 = param_3;
  ::FString::FString(&local_18,*param_2);
  bVar2 = FStorageServerFileSystemTOC::IterateDirectoryRecursively
                    ((FStorageServerFileSystemTOC *)(lVar1 + 0x148),&local_18,
                     (TFunctionRef<bool___cdecl(FIoChunkId_const_&,wchar_t_const_*,__int64)> *)
                     &local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// Call @ 148cbd7a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStorageServerPlatformFile::IterateDirectoryStat'::__l2::<lambda_2>,bool,wchar_t_const_*,IPlatformFile::FDirectoryStatVisitor_&>
::Call(void *param_1,wchar_t **param_2,FDirectoryStatVisitor *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong local_38;
  FDirectoryStatVisitor *local_30;
  code *local_28;
  longlong *local_20;
  FString local_18;
  
  lVar1 = *(longlong *)param_1;
  local_20 = &local_38;
  local_28 = TFunctionRefCaller<``FStorageServerPlatformFile::IterateDirectoryStat'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,bool,FIoChunkId_const_&,wchar_t_const_*,__int64>
             ::Call;
  local_38 = lVar1;
  local_30 = param_3;
  ::FString::FString(&local_18,*param_2);
  bVar2 = FStorageServerFileSystemTOC::IterateDirectory
                    ((FStorageServerFileSystemTOC *)(lVar1 + 0x148),&local_18,
                     (TFunctionRef<bool___cdecl(FIoChunkId_const_&,wchar_t_const_*,__int64)> *)
                     &local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// Call @ 148cbd810

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStorageServerConnection::FAsyncQueryLatestServerChunkInfo::Run'::__l2::<lambda_2>,void,FIoChunkId,enum_EStorageServerContentType,FIoBuffer,TOptional<unsigned___int64>_const_&>
::Call(void *param_1,FIoChunkId *param_2,EStorageServerContentType *param_3,FIoBuffer *param_4,
      TOptional<unsigned___int64> *param_5)

{
  BufCore *local_res10 [3];
  FIoChunkId local_18 [2];
  
  local_res10[0] = (param_4->CorePtr).Reference;
  (param_4->CorePtr).Reference = (BufCore *)0x0;
  local_18[0].Id._0_8_ = *(undefined8 *)param_2->Id;
  local_18[0].Id._8_4_ = *(undefined4 *)(param_2->Id + 8);
  `FStorageServerConnection::FAsyncQueryLatestServerChunkInfo::Run'::__l2::<lambda_2>::operator()
            (param_1,local_18,*param_3,(FIoBuffer)local_res10,param_5);
  return;
}

// Call @ 148cbd860

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`StorageServer::FCacheJournalSectioned::ValidateJournal'::__l2::<lambda_2>,void,FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&>
::Call(void *param_1,FIoChunkId *param_2,FCacheChunkInfo *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement *pFVar5;
  TSet<FIoChunkId,DefaultKeyFuncs<FIoChunkId,0>,FDefaultSetAllocator> *this;
  longlong lVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  ForElementType<FSetElementId> FVar12;
  
  if (((*(longlong *)param_2->Id == FIoChunkId::InvalidChunkId.Id._0_8_) &&
      (*(short *)(param_2->Id + 8) == FIoChunkId::InvalidChunkId.Id._8_2_)) &&
     (param_2->Id[10] == FIoChunkId::InvalidChunkId.Id[10])) {
    pFVar4 = *(ForAnyElementType **)param_1;
    if ((pFVar4->Data <= param_2) &&
       (param_2 < pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 0xc)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar10 = *(int *)&pFVar4[1].Data;
    piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
    if (iVar10 == *piVar1) {
      iVar10 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10c,pFVar4,piVar1);
    }
    *(int *)&pFVar4[1].Data = iVar10 + 1;
    pFVar5 = pFVar4->Data;
    *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0xc) = *(undefined8 *)param_2->Id;
    *(undefined4 *)(pFVar5 + (longlong)iVar10 * 0xc + 8) = *(undefined4 *)(param_2->Id + 8);
  }
  uVar3 = *(uint *)(param_2->Id + 8);
  uVar2 = *(undefined8 *)param_2->Id;
  this = *(TSet<FIoChunkId,DefaultKeyFuncs<FIoChunkId,0>,FDefaultSetAllocator> **)
          ((longlong)param_1 + 8);
  uVar8 = (uint)((ulonglong)uVar2 >> 0x20);
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar12 +
                     (ulonglong)
                     (this->HashSize - 1U &
                     (uVar3 >> 0x18) + 0x58a2c485 +
                     ((((((uVar8 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar2 >> 0x30) & 0xff))
                         * 0x21 + (uint)(byte)((ulonglong)uVar2 >> 0x38)) * 0x21 + (uVar3 & 0xff)) *
                       0x21 + (uVar3 >> 8 & 0xff)) * 0x21 + (uVar3 >> 0x10 & 0xff)) * 0x21 +
                     (((uint)((ulonglong)uVar2 >> 8) & 0xff) * 0x21 +
                     ((uint)((ulonglong)uVar2 >> 0x10) & 0xff)) * 0x40a9121 +
                     (uVar8 & 0xff) * -0x13be2b1f +
                     ((uint)((ulonglong)uVar2 >> 0x18) & 0xff) * 0x747c7101 +
                     ((uint)uVar2 & 0xff) * 0x30f35d61) * 4);
    if (iVar10 != -1) {
      lVar6 = *(longlong *)&this->Elements;
      do {
        lVar11 = (longlong)iVar10;
        if ((*(longlong *)(lVar6 + lVar11 * 0x14) == *(longlong *)param_2->Id) &&
           (*(int *)(lVar6 + 8 + lVar11 * 0x14) == *(int *)(param_2->Id + 8))) {
          pFVar4 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
          if ((pFVar4->Data <= param_2) &&
             (param_2 < pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 0xc)) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar9) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          iVar10 = *(int *)&pFVar4[1].Data;
          piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
          if (iVar10 == *piVar1) {
            iVar10 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10c,pFVar4,piVar1);
          }
          *(int *)&pFVar4[1].Data = iVar10 + 1;
          pFVar5 = pFVar4->Data;
          *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0xc) = *(undefined8 *)param_2->Id;
          *(undefined4 *)(pFVar5 + (longlong)iVar10 * 0xc + 8) = *(undefined4 *)(param_2->Id + 8);
          return;
        }
        iVar10 = *(int *)(lVar6 + 0xc + lVar11 * 0x14);
      } while (iVar10 != -1);
    }
  }
  TSet<FIoChunkId,DefaultKeyFuncs<FIoChunkId,0>,FDefaultSetAllocator>::Emplace<FIoChunkId_const_&>
            (this,(FIoChunkId *)&stack0x00000008,(bool *)param_2);
  return;
}

