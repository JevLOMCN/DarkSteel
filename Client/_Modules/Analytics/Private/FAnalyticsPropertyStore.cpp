// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 57

// FAnalyticsPropertyStore @ 143133370

FAnalyticsPropertyStore * __thiscall
FAnalyticsPropertyStore::FAnalyticsPropertyStore(FAnalyticsPropertyStore *this)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  FMemoryReader *this_00;
  
  this->_padding_ = (longlong)&___7FAnalyticsPropertyStore__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->StoreLock,4000);
  pTVar1 = &this->StorageBuf;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->StorageBuf).ArrayNum = 0;
  (this->StorageBuf).ArrayMax = 0;
  *(undefined8 *)&this->StorageWriter = 0;
  *(undefined8 *)&(this->StorageWriter).field_0x8 = 0;
  *(undefined8 *)&(this->StorageWriter).field_0x10 = 0;
  *(undefined8 *)&(this->StorageWriter).field_0x18 = 0;
  *(undefined8 *)&(this->StorageWriter).field_0x20 = 0;
  *(undefined8 *)&(this->StorageWriter).field_0x28 = 0;
  *(undefined8 *)&(this->StorageWriter).field_0x30 = 0;
  *(undefined8 *)&(this->StorageWriter).field_0x38 = 0;
  *(undefined8 *)&(this->StorageWriter).field_0x40 = 0;
  *(undefined8 *)&(this->StorageWriter).field_0x48 = 0;
  *(undefined8 *)&(this->StorageWriter).field_0x50 = 0;
  *(undefined8 *)&(this->StorageWriter).field_0x58 = 0;
  *(undefined8 *)&(this->StorageWriter).field_0x60 = 0;
  *(undefined8 *)&(this->StorageWriter).field_0x68 = 0;
  *(undefined8 *)&(this->StorageWriter).field_0x70 = 0;
  *(undefined8 *)&(this->StorageWriter).field_0x78 = 0;
  *(undefined8 *)&(this->StorageWriter).field_0x80 = 0;
  *(undefined8 *)&(this->StorageWriter).field_0x88 = 0;
  FArchiveState::FArchiveState((FArchiveState *)&this->StorageWriter);
  *(undefined8 *)&(this->StorageWriter).field_0x90 = 0;
  *(undefined ***)&this->StorageWriter =
       &___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)&(this->StorageWriter).field_0x98 = pTVar1;
  *(undefined8 *)&(this->StorageWriter).field_0xa0 = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&this->StorageWriter,true);
  (**(code **)(*(longlong *)&this->StorageWriter + 0x108))(&this->StorageWriter,0);
  this_00 = &this->StorageReader;
  *(undefined ***)&this->StorageWriter = &___7FMemoryWriter__6B_;
  this_00->_padding_ = 0;
  (this->StorageReader)._padding_ = 0;
  (this->StorageReader)._padding_ = 0;
  (this->StorageReader)._padding_ = 0;
  (this->StorageReader)._padding_ = 0;
  (this->StorageReader)._padding_ = 0;
  (this->StorageReader)._padding_ = 0;
  (this->StorageReader)._padding_ = 0;
  (this->StorageReader)._padding_ = 0;
  (this->StorageReader)._padding_ = 0;
  (this->StorageReader)._padding_ = 0;
  (this->StorageReader)._padding_ = 0;
  (this->StorageReader)._padding_ = 0;
  (this->StorageReader)._padding_ = 0;
  (this->StorageReader)._padding_ = 0;
  (this->StorageReader)._padding_ = 0;
  (this->StorageReader)._padding_ = 0;
  (this->StorageReader)._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)this_00);
  (this->StorageReader)._padding_ = 0;
  this_00->_padding_ = (longlong)&___7FMemoryReader__6B_;
  (this->StorageReader).Bytes = pTVar1;
  (this->StorageReader).LimitSize = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading((FArchiveState *)this_00,true);
  (**(code **)(this_00->_padding_ + 0x108))(this_00,0);
  *(undefined8 *)&this->NameOffsetMap = 0;
  *(undefined8 *)&(this->NameOffsetMap).field_0x8 = 0;
  *(undefined8 *)&(this->NameOffsetMap).field_0x20 = 0;
  *(undefined4 *)&(this->NameOffsetMap).field_0x28 = 0;
  *(undefined4 *)&(this->NameOffsetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameOffsetMap).field_0x34 = 0;
  *(undefined4 *)&(this->NameOffsetMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NameOffsetMap).field_0x40 = 0;
  *(undefined4 *)&(this->NameOffsetMap).field_0x48 = 0;
  (this->FileHandle).Ptr = (IFileHandle *)0x0;
  this->bFragmented = false;
  (this->FlushTask).Ptr = (FAsyncTask<FAnalyticsPropertyStore::FFlushWorker> *)0x0;
  (this->AsyncFlushDataCopy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncFlushDataCopy).ArrayNum = 0;
  (this->AsyncFlushDataCopy).ArrayMax = 0;
  return this;
}

// ~FAnalyticsPropertyStore @ 1431339d0

void __thiscall FAnalyticsPropertyStore::~FAnalyticsPropertyStore(FAnalyticsPropertyStore *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FAsyncTask<FAnalyticsPropertyStore::FFlushWorker> *pFVar1;
  FScriptContainerElement *pFVar2;
  IFileHandle *pIVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  
  lpCriticalSection = &this->StoreLock;
  this->_padding_ = (longlong)&___7FAnalyticsPropertyStore__6B_;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = (this->FlushTask).Ptr;
  if (pFVar1 != (FAsyncTask<FAnalyticsPropertyStore::FFlushWorker> *)0x0) {
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)pFVar1,true,false);
    pFVar1 = (this->FlushTask).Ptr;
    if (pFVar1 != (FAsyncTask<FAnalyticsPropertyStore::FFlushWorker> *)0x0) {
      (this->FlushTask).Ptr = (FAsyncTask<FAnalyticsPropertyStore::FFlushWorker> *)0x0;
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  pFVar2 = (this->AsyncFlushDataCopy).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar1 = (this->FlushTask).Ptr;
  if (pFVar1 != (FAsyncTask<FAnalyticsPropertyStore::FFlushWorker> *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
  }
  pIVar3 = (this->FileHandle).Ptr;
  if (pIVar3 != (IFileHandle *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  *(undefined4 *)&(this->NameOffsetMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->NameOffsetMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameOffsetMap);
  FArchive::~FArchive((FArchive *)&this->StorageReader);
  FArchive::~FArchive((FArchive *)&this->StorageWriter);
  pFVar2 = (this->StorageBuf).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000143133b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// operator() @ 143133f10

EStatusCode __thiscall
`FAnalyticsPropertyStore::SetStringValueInternal'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,ETypeCode param_2,void *param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  EStatusCode EVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 local_res8 [2];
  TPairInitializer<FString_const_&,unsigned_int_&&> local_res10;
  FString *local_38;
  undefined4 *local_30;
  
  local_res10.Value._0_1_ = param_2;
  uVar5 = (**(code **)(*(longlong *)(*(longlong *)this + 0x40) + 0x30))();
  *(ulonglong *)(*(longlong *)this + 0xd0) = uVar5;
  (**(code **)(*(longlong *)(*(longlong *)this + 0x40) + 0x188))
            ((longlong *)(*(longlong *)this + 0x40),&local_res10.Value,1);
  (**(code **)(*(longlong *)(*(longlong *)this + 0x40) + 0x188))
            ((longlong *)(*(longlong *)this + 0x40),&param_4,4);
  (**(code **)(*(longlong *)(*(longlong *)this + 0x40) + 0x188))
            ((longlong *)(*(longlong *)this + 0x40),&param_5,4);
  (**(code **)(*(longlong *)(*(longlong *)this + 0x40) + 0x188))
            ((longlong *)(*(longlong *)this + 0x40),param_3,param_4);
  uVar7 = (ulonglong)param_4;
  if (param_4 < param_5) {
    lVar1 = *(longlong *)this;
    uVar8 = (ulonglong)param_5;
    lVar6 = (**(code **)(*(longlong *)(lVar1 + 0x40) + 0x30))(lVar1 + 0x40);
    *(ulonglong *)(lVar1 + 0xd0) = lVar6 + (uVar8 - uVar7);
  }
  ::operator<<((FArchive *)(*(longlong *)this + 0x40),param_1);
  lVar1 = *(longlong *)this;
  if ((uVar5 != (uVar5 & 0xffffffff)) || ((longlong)uVar5 < 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  local_30 = local_res8;
  local_res8[0] = (undefined4)uVar5;
  local_38 = param_1;
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,unsigned_int_&&>_>
            ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
              *)(lVar1 + 400),&local_res10,(bool *)&local_38);
  return Success;
}

// operator() @ 143134080

bool __thiscall
`FAnalyticsPropertyStore::Flush'::__l2::<lambda_2>::operator()(void *this,bool param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FAsyncTaskBase *pFVar4;
  FScriptContainerElement *_Src;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong local_18 [2];
  
  plVar12 = (longlong *)0x0;
  pFVar4 = *(FAsyncTaskBase **)(*(longlong *)this + 0x1f0);
  if (pFVar4 != (FAsyncTaskBase *)0x0) {
    if ((pFVar4->WorkNotFinishedCounter).Counter == 0) {
      FAsyncTaskBase::SyncCompletion(pFVar4,false);
    }
    else {
      pFVar4 = *(FAsyncTaskBase **)(*(longlong *)this + 0x1f0);
      if (pFVar4->QueuedPool != (FQueuedThreadPool *)0x0) {
        cVar7 = (**(code **)((longlong)*pFVar4->QueuedPool + 0x20))();
        iVar3 = (pFVar4->WorkNotFinishedCounter).Counter;
        if (cVar7 != '\0') {
          if ((iVar3 != 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("WorkNotFinishedCounter.GetValue() == 1",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                                 ,0x1e8,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          LOCK();
          (pFVar4->WorkNotFinishedCounter).Counter = (pFVar4->WorkNotFinishedCounter).Counter + -1;
          UNLOCK();
          FAsyncTaskBase::FinishThreadedWork(pFVar4);
          pFVar4->QueuedPool = (FQueuedThreadPool *)0x0;
          goto LAB_143134153;
        }
        if (iVar3 != 0) {
          (**(code **)(pFVar4->_padding_ + 0x40))(pFVar4);
        }
      }
      if (param_1) {
        return false;
      }
      FAsyncTaskBase::EnsureCompletion(*(FAsyncTaskBase **)(*(longlong *)this + 0x1f0),true,false);
    }
LAB_143134153:
    plVar10 = *(longlong **)(*(longlong *)this + 0x1f0);
    if (plVar10 != (longlong *)0x0) {
      *(undefined8 *)(*(longlong *)this + 0x1f0) = 0;
      (**(code **)(*plVar10 + 0x28))();
    }
  }
  if (*(char *)((longlong)this + 8) == '\0') goto LAB_1431342be;
  lVar11 = *(longlong *)this;
  pFVar2 = (ForAnyElementType *)(lVar11 + 0x1f8);
  if (pFVar2 != (ForAnyElementType *)(lVar11 + 0x30)) {
    iVar3 = *(int *)(lVar11 + 0x38);
    piVar1 = (int *)(lVar11 + 0x204);
    _Src = ((ForAnyElementType *)(lVar11 + 0x30))->Data;
    *(int *)(lVar11 + 0x200) = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar3,*piVar1,pFVar2,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy(pFVar2->Data,_Src,(longlong)iVar3);
      }
    }
  }
  lVar11 = *(longlong *)this;
  plVar10 = ::operator_new(0x88);
  if (plVar10 != (longlong *)0x0) {
    plVar10[1] = 0;
    *plVar10 = (longlong)&___7FAsyncTaskBase__6B_;
    *plVar10 = (longlong)&___7__FAsyncTask_VFFlushWorker_FAnalyticsPropertyStore____6B_;
    plVar10[0xd] = (longlong)&TStatId::TStatId_NAME_None;
    *(undefined4 *)(plVar10 + 7) = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    *(undefined2 *)(plVar10 + 10) = 3;
    plVar10[0xb] = -1;
    plVar10[0xc] = 0;
    plVar10[0xe] = lVar11;
    plVar10[0xf] = 0;
    plVar10[0x10] = 0;
    plVar12 = plVar10;
  }
  plVar10 = (longlong *)(*(longlong *)this + 0x1f0);
  if (plVar10 == local_18) {
    if (plVar12 != (longlong *)0x0) {
      lVar11 = *plVar12;
      goto LAB_143134281;
    }
  }
  else {
    plVar5 = (longlong *)*plVar10;
    *plVar10 = (longlong)plVar12;
    if (plVar5 != (longlong *)0x0) {
      lVar11 = *plVar5;
      plVar12 = plVar5;
LAB_143134281:
      (**(code **)(lVar11 + 0x28))(plVar12);
    }
  }
  if (*(FAsyncTaskBase **)(*(longlong *)this + 0x1f0) != (FAsyncTaskBase *)0x0) {
    FAsyncTaskBase::Start
              (*(FAsyncTaskBase **)(*(longlong *)this + 0x1f0),false,GThreadPool,Normal,None,-1,
               (wchar_t *)0x0);
    return true;
  }
LAB_1431342be:
  FAnalyticsPropertyStore::FlushInternal
            (*(FAnalyticsPropertyStore **)this,&(*(FAnalyticsPropertyStore **)this)->StorageBuf);
  return true;
}

// Contains @ 143135fd0

bool __thiscall FAnalyticsPropertyStore::Contains(FAnalyticsPropertyStore *this,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  
  lpCriticalSection = &this->StoreLock;
  pwVar7 = L"";
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (param_1->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar6 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                      *)&this->NameOffsetMap,uVar5,param_1);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return iVar6 != -1;
}

// Create @ 143136090

bool __thiscall
FAnalyticsPropertyStore::Create(FAnalyticsPropertyStore *this,FString *param_1,uint param_2)

{
  uint uVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_> *pTVar2;
  IFileHandle *pIVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar7;
  IFileHandle *pIVar8;
  IFileHandle IVar9;
  wchar_t *pwVar10;
  uint uVar11;
  undefined1 local_res18 [8];
  longlong local_28 [2];
  
  lpCriticalSection = &this->StoreLock;
  pwVar10 = L"";
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  Reset(this);
  if (param_2 < 0x18) {
    param_2 = 0x18;
  }
  uVar11 = 0x200000;
  if (param_2 < 0x200000) {
    uVar11 = param_2;
  }
  uVar1 = uVar11 - 0x18;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if ((this->StorageBuf).ArrayMax < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar1,&(this->StorageBuf).AllocatorInstance,(this->StorageBuf).ArrayNum,
               &(this->StorageBuf).ArrayMax);
  }
  this_00 = FPlatformFileManager::Get();
  pIVar7 = FPlatformFileManager::GetPlatformFile(this_00);
  if ((param_1->Data).ArrayNum != 0) {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pIVar8 = (IFileHandle *)(**(code **)((longlong)*pIVar7 + 0x110))(pIVar7,pwVar10,0,0);
  pTVar2 = &this->FileHandle;
  if (pTVar2 == (TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_> *)local_28) {
    if (pIVar8 == (IFileHandle *)0x0) goto LAB_1431361a5;
    IVar9 = *pIVar8;
  }
  else {
    pIVar3 = pTVar2->Ptr;
    pTVar2->Ptr = pIVar8;
    if (pIVar3 == (IFileHandle *)0x0) goto LAB_1431361a5;
    IVar9 = *pIVar3;
    pIVar8 = pIVar3;
  }
  (**(code **)IVar9)(pIVar8,1);
LAB_1431361a5:
  pIVar8 = pTVar2->Ptr;
  if (pIVar8 == (IFileHandle *)0x0) {
    uVar6 = 0;
  }
  else {
    local_res18[0] = 0;
    (**(code **)((longlong)*pIVar8 + 0x10))(pIVar8,(ulonglong)uVar11 - 1);
    uVar6 = (**(code **)((longlong)*pTVar2->Ptr + 0x30))(pTVar2->Ptr,local_res18,1);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return (bool)uVar6;
}

// Defragment @ 143136650

void __thiscall FAnalyticsPropertyStore::Defragment(FAnalyticsPropertyStore *this)

{
  this->bFragmented = false;
  return;
}

// Flush @ 143138ed0

bool __thiscall
FAnalyticsPropertyStore::Flush(FAnalyticsPropertyStore *this,bool param_1,FTimespan *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  ulonglong uVar9;
  undefined1 uVar10;
  BOOL BVar11;
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar12;
  bool bVar13;
  double dVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  double dVar15;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar16 [16];
  float fVar17;
  LARGE_INTEGER local_res8;
  FAnalyticsPropertyStore *local_88;
  undefined1 local_80;
  
  if ((this->FileHandle).Ptr == (IFileHandle *)0x0) {
    bVar12 = false;
  }
  else {
    bVar13 = -1 < CpuChannel->Enabled;
    if (bVar13) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId948,"FAnalyticsPropertyStore::Flush",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\AnalyticsPropertyStore.cpp"
                 ,0x3b4);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId948);
    }
    local_88 = this;
    local_80 = param_1;
    if (param_2->Ticks == 0) {
      BVar11 = TryEnterCriticalSection((LPCRITICAL_SECTION)&this->StoreLock);
      if (BVar11 == 0) {
        bVar12 = false;
      }
      else {
        bVar12 = `FAnalyticsPropertyStore::Flush'::__l2::<lambda_2>::operator()(&local_88,true);
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->StoreLock);
      }
    }
    else {
      lpCriticalSection = &this->StoreLock;
      if (param_2->Ticks == 0x7fffffffffffffff) {
        if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mutex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                ,0x1b,L""), bVar12)) {
          pcVar2 = (code *)swi(3);
          uVar10 = (*pcVar2)();
          return (bool)uVar10;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        bVar12 = `FAnalyticsPropertyStore::Flush'::__l2::<lambda_2>::operator()(&local_88,false);
        if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
      }
      else {
        dVar14 = FWindowsPlatformTime::Seconds();
        uVar9 = __real_40c3884000000000;
        dVar8 = __real_3f50624dd2f1a9fc;
        uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        dVar5 = __real_4170000000000000;
        dVar4 = __real_3e7ad7f29abcaf48;
        do {
          BVar11 = TryEnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          auVar16._8_8_ = extraout_XMM0_Qb;
          auVar16._0_8_ = extraout_XMM0_Qa;
          if (BVar11 != 0) {
            bVar12 = `FAnalyticsPropertyStore::Flush'::__l2::<lambda_2>::operator()(&local_88,true);
            if (bVar12) {
              LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
              bVar12 = true;
              goto LAB_143139181;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            auVar16._8_8_ = extraout_XMM0_Qb_00;
            auVar16._0_8_ = extraout_XMM0_Qa_00;
          }
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar9;
          auVar16 = roundpd(auVar16,auVar3,1);
          dVar15 = (double)(longlong)auVar16._0_8_ * dVar4;
          fVar17 = (float)dVar15;
          dVar15 = (double)fVar17 - dVar15;
          if ((dVar8 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar7,
                                        SUB84(dVar15,0) & uVar6)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("FloatFitsIn<OutType>(In, Precision)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                  ,0xc0,L"Loss of data caused by narrowing conversion"), bVar12)) {
            pcVar2 = (code *)swi(3);
            uVar10 = (*pcVar2)();
            return (bool)uVar10;
          }
          FWindowsPlatformProcess::Sleep(fVar17);
          lVar1 = param_2->Ticks;
          QueryPerformanceCounter(&local_res8);
        } while (((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5) -
                 dVar14 < (double)lVar1 * dVar4);
        bVar12 = false;
      }
    }
LAB_143139181:
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return bVar12;
}

// FlushInternal @ 1431391c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnalyticsPropertyStore::FlushInternal
          (FAnalyticsPropertyStore *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  IFileHandle *pIVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  int local_94;
  uchar local_90 [24];
  FMD5 local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_94 = param_1->ArrayNum;
  local_98 = 1;
  FMD5::FMD5(&local_78);
  FMD5::Update(&local_78,(uchar *)(param_1->AllocatorInstance).Data,(longlong)param_1->ArrayNum);
  FMD5::Final(&local_78,local_90);
  pIVar1 = (this->FileHandle).Ptr;
  (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,0);
  pIVar1 = (this->FileHandle).Ptr;
  (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,&local_98,0x18);
  pIVar1 = (this->FileHandle).Ptr;
  (**(code **)((longlong)*pIVar1 + 0x30))
            (pIVar1,(param_1->AllocatorInstance).Data,(longlong)param_1->ArrayNum);
  pIVar1 = (this->FileHandle).Ptr;
  (**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,0);
  FMD5::~FMD5(&local_78);
  return;
}

// Get @ 1431392a0

EStatusCode __thiscall
FAnalyticsPropertyStore::Get(FAnalyticsPropertyStore *this,FString *param_1,int *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  EStatusCode EVar3;
  uint *puVar4;
  char local_res8 [8];
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar4 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar4 == (uint *)0x0) {
    EVar3 = NotFound;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar4;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] == '\0') {
      (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,param_2,4);
      EVar3 = Success;
    }
    else {
      EVar3 = BadType;
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar3;
}

// Get @ 143139390

EStatusCode __thiscall
FAnalyticsPropertyStore::Get(FAnalyticsPropertyStore *this,FString *param_1,uint *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  EStatusCode EVar3;
  uint *puVar4;
  char local_res8 [8];
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar4 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar4 == (uint *)0x0) {
    EVar3 = NotFound;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar4;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] == '\x01') {
      (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,param_2,4);
      EVar3 = Success;
    }
    else {
      EVar3 = BadType;
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar3;
}

// Get @ 143139480

EStatusCode __thiscall
FAnalyticsPropertyStore::Get(FAnalyticsPropertyStore *this,FString *param_1,float *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  EStatusCode EVar3;
  uint *puVar4;
  char local_res8 [8];
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar4 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar4 == (uint *)0x0) {
    EVar3 = NotFound;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar4;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] == '\x04') {
      (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,param_2,4);
      EVar3 = Success;
    }
    else {
      EVar3 = BadType;
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar3;
}

// Get @ 143139570

EStatusCode __thiscall
FAnalyticsPropertyStore::Get(FAnalyticsPropertyStore *this,FString *param_1,double *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  EStatusCode EVar3;
  uint *puVar4;
  char local_res8 [8];
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar4 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar4 == (uint *)0x0) {
    EVar3 = NotFound;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar4;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] == '\x05') {
      (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,param_2,8);
      EVar3 = Success;
    }
    else {
      EVar3 = BadType;
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar3;
}

// Get @ 143139660

EStatusCode __thiscall
FAnalyticsPropertyStore::Get(FAnalyticsPropertyStore *this,FString *param_1,FDateTime *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  EStatusCode EVar3;
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  EVar3 = GetDateTimeValueInternal(this,param_1,param_2);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar3;
}

// Get @ 143139710

EStatusCode __thiscall
FAnalyticsPropertyStore::Get(FAnalyticsPropertyStore *this,FString *param_1,FString *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  EStatusCode EVar3;
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  EVar3 = GetStringValueInternal(this,param_1,param_2);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar3;
}

// Get @ 1431397c0

EStatusCode __thiscall
FAnalyticsPropertyStore::Get(FAnalyticsPropertyStore *this,FString *param_1,long64 *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  EStatusCode EVar3;
  uint *puVar4;
  char local_res8 [8];
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar4 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar4 == (uint *)0x0) {
    EVar3 = NotFound;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar4;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] == '\x02') {
      (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,param_2,8);
      EVar3 = Success;
    }
    else {
      EVar3 = BadType;
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar3;
}

// Get @ 1431398b0

EStatusCode __thiscall
FAnalyticsPropertyStore::Get(FAnalyticsPropertyStore *this,FString *param_1,ulong64 *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  EStatusCode EVar3;
  uint *puVar4;
  char local_res8 [8];
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar4 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar4 == (uint *)0x0) {
    EVar3 = NotFound;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar4;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] == '\x03') {
      (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,param_2,8);
      EVar3 = Success;
    }
    else {
      EVar3 = BadType;
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar3;
}

// Get @ 1431399a0

EStatusCode __thiscall
FAnalyticsPropertyStore::Get(FAnalyticsPropertyStore *this,FString *param_1,bool *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FMemoryReader *pFVar1;
  code *pcVar2;
  bool bVar3;
  EStatusCode EVar4;
  uint *puVar5;
  char local_res8 [8];
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar5 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar5 == (uint *)0x0) {
    EVar4 = NotFound;
  }
  else {
    pFVar1 = &this->StorageReader;
    (this->StorageReader)._padding_ = (ulonglong)*puVar5;
    (**(code **)(pFVar1->_padding_ + 0x188))(pFVar1,local_res8,1);
    if (local_res8[0] == '\x06') {
      (**(code **)(pFVar1->_padding_ + 0x188))(pFVar1,param_2,1);
      EVar4 = Success;
    }
    else {
      EVar4 = BadType;
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar4;
}

// GetDateTimeValueInternal @ 143139ee0

EStatusCode __thiscall
FAnalyticsPropertyStore::GetDateTimeValueInternal
          (FAnalyticsPropertyStore *this,FString *param_1,FDateTime *param_2)

{
  uint *puVar1;
  char local_res8 [8];
  FDateTime local_res20;
  
  puVar1 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar1 == (uint *)0x0) {
    return NotFound;
  }
  (this->StorageReader)._padding_ = (ulonglong)*puVar1;
  (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
  if (local_res8[0] == '\a') {
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,&local_res20,8);
    param_2->Ticks = (long64)local_res20;
    return Success;
  }
  return BadType;
}

// GetFixedSizeValueInternal @ 14313a2c0

EStatusCode __thiscall
FAnalyticsPropertyStore::GetFixedSizeValueInternal
          (FAnalyticsPropertyStore *this,FString *param_1,ETypeCode param_2,uchar *param_3,
          uint param_4)

{
  code *pcVar1;
  bool bVar2;
  EStatusCode EVar3;
  uint *puVar4;
  ETypeCode local_res18 [8];
  
  if (param_2 == Str) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFixedSize(TypeCode)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\AnalyticsPropertyStore.cpp"
                       ,0x299,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  puVar4 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar4 == (uint *)0x0) {
    EVar3 = NotFound;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar4;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res18,1);
    if (local_res18[0] == param_2) {
      (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,param_3,param_4);
      EVar3 = Success;
    }
    else {
      EVar3 = BadType;
    }
  }
  return EVar3;
}

// GetStringValueInternal @ 14313a810

EStatusCode __thiscall
FAnalyticsPropertyStore::GetStringValueInternal
          (FAnalyticsPropertyStore *this,FString *param_1,FString *param_2)

{
  int *piVar1;
  int *piVar2;
  FMemoryReader *pFVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  uint *puVar6;
  uint uVar7;
  char local_res8 [8];
  uint local_res20 [2];
  
  puVar6 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar6 == (uint *)0x0) {
    return NotFound;
  }
  (this->StorageReader)._padding_ = (ulonglong)*puVar6;
  pFVar3 = &this->StorageReader;
  (**(code **)(pFVar3->_padding_ + 0x188))(pFVar3,local_res8,1);
  if (local_res8[0] == '\b') {
    (**(code **)(pFVar3->_padding_ + 0x188))(pFVar3,local_res20,4);
    plVar4 = &(this->StorageReader)._padding_;
    *plVar4 = *plVar4 + 4;
    piVar1 = &(param_2->Data).ArrayNum;
    piVar2 = &(param_2->Data).ArrayMax;
    uVar7 = local_res20[0] >> 1;
    *piVar1 = 0;
    if (*piVar2 != uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)param_2,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,(ForAnyElementType *)param_2,piVar1,piVar2);
    pFVar5 = (param_2->Data).AllocatorInstance.Data;
    (**(code **)(pFVar3->_padding_ + 0x188))(pFVar3,pFVar5,local_res20[0]);
    *(undefined2 *)(pFVar5 + (ulonglong)(uVar7 - 1) * 2) = 0;
    StringConv::InlineCombineSurrogates(param_2);
    return Success;
  }
  return BadType;
}

// Load @ 14313aab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FAnalyticsPropertyStore::Load(FAnalyticsPropertyStore *this,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int *piVar2;
  FMemoryReader *pFVar3;
  longlong *plVar4;
  IFileHandle *pIVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar10;
  IFileHandle *pIVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  TPairInitializer<FString_&,unsigned_int_&> *pTVar15;
  wchar_t *pwVar16;
  TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_> *pTVar17;
  FString **ppFVar18;
  undefined1 auStackY_178 [32];
  byte local_148 [4];
  undefined4 local_144;
  FString local_140;
  uint local_130;
  undefined1 local_12c [8];
  undefined1 local_124 [12];
  FString *local_118;
  undefined4 *local_110;
  FString *local_108;
  undefined4 *local_100;
  FString *local_f8;
  undefined4 *local_f0;
  FString *local_e8;
  undefined4 *local_e0;
  longlong local_d8;
  int local_d0;
  uint local_cc;
  undefined1 local_c8 [16];
  FMD5 local_b8;
  uchar local_58 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  lpCriticalSection = &this->StoreLock;
  pwVar16 = L"";
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  Reset(this);
  this_00 = FPlatformFileManager::Get();
  pIVar10 = FPlatformFileManager::GetPlatformFile(this_00);
  if ((param_1->Data).ArrayNum != 0) {
    pwVar16 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pIVar11 = (IFileHandle *)(**(code **)((longlong)*pIVar10 + 0x110))(pIVar10,pwVar16,1);
  if ((pIVar11 != (IFileHandle *)0x0) &&
     (uVar12 = (**(code **)((longlong)*pIVar11 + 0x50))(pIVar11), 0x17 < uVar12)) {
    (**(code **)((longlong)*pIVar11 + 0x10))(pIVar11,0);
    (**(code **)((longlong)*pIVar11 + 0x20))(pIVar11,&local_d0,0x18);
    if (local_d0 == 1) {
      if ((int)local_cc < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_cc);
      }
      piVar1 = &(this->StorageBuf).ArrayNum;
      piVar2 = &(this->StorageBuf).ArrayMax;
      *piVar1 = 0;
      if (*piVar2 != local_cc) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_cc,&(this->StorageBuf).AllocatorInstance,0,piVar2);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_cc,&(this->StorageBuf).AllocatorInstance,piVar1,piVar2);
      (**(code **)((longlong)*pIVar11 + 0x20))
                (pIVar11,(this->StorageBuf).AllocatorInstance.Data,local_cc);
      FMD5::FMD5(&local_b8);
      FMD5::Update(&local_b8,(uchar *)(this->StorageBuf).AllocatorInstance.Data,
                   (longlong)(this->StorageBuf).ArrayNum);
      FMD5::Final(&local_b8,local_58);
      iVar9 = memcmp(local_c8,local_58,0x10);
      if (iVar9 == 0) {
        pFVar3 = &this->StorageReader;
        local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_140.Data.ArrayNum = 0;
        local_140.Data.ArrayMax = 0;
        lVar13 = (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3);
        lVar14 = (this->StorageReader)._padding_;
        if (lVar14 < lVar13) {
          do {
            local_144 = (undefined4)lVar14;
            (**(code **)(pFVar3->_padding_ + 0x188))(pFVar3,local_148,1);
            switch(local_148[0] & 0xf) {
            case 0:
            case 1:
            case 4:
              plVar4 = &(this->StorageReader)._padding_;
              *plVar4 = *plVar4 + 4;
              ::operator<<((FArchive *)pFVar3,&local_140);
              if (local_140.Data.ArrayNum < 2) {
LAB_14313ae92:
                bVar7 = false;
                goto LAB_14313ae68;
              }
              if ((local_148[0] & 0x80) == 0) {
                local_118 = &local_140;
                ppFVar18 = &local_118;
                local_110 = &local_144;
                pTVar15 = (TPairInitializer<FString_&,unsigned_int_&> *)local_12c;
LAB_14313ae15:
                TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<FString_&,unsigned_int_&>_>
                          ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                            *)&this->NameOffsetMap,pTVar15,(bool *)ppFVar18);
              }
              break;
            case 2:
            case 3:
            case 5:
            case 7:
              plVar4 = &(this->StorageReader)._padding_;
              *plVar4 = *plVar4 + 8;
              ::operator<<((FArchive *)pFVar3,&local_140);
              if (local_140.Data.ArrayNum < 2) goto LAB_14313ae92;
              if ((local_148[0] & 0x80) == 0) {
                local_108 = &local_140;
                ppFVar18 = &local_108;
                local_100 = &local_144;
                pTVar15 = (TPairInitializer<FString_&,unsigned_int_&> *)(local_12c + 4);
                goto LAB_14313ae15;
              }
              break;
            case 6:
              plVar4 = &(this->StorageReader)._padding_;
              *plVar4 = *plVar4 + 1;
              ::operator<<((FArchive *)pFVar3,&local_140);
              if (local_140.Data.ArrayNum < 2) goto LAB_14313ae92;
              if ((local_148[0] & 0x80) == 0) {
                local_f8 = &local_140;
                ppFVar18 = &local_f8;
                local_f0 = &local_144;
                pTVar15 = (TPairInitializer<FString_&,unsigned_int_&> *)local_124;
                goto LAB_14313ae15;
              }
              break;
            case 8:
              plVar4 = &(this->StorageReader)._padding_;
              *plVar4 = *plVar4 + 4;
              (**(code **)(pFVar3->_padding_ + 0x188))(pFVar3,&local_130,4);
              plVar4 = &(this->StorageReader)._padding_;
              *plVar4 = *plVar4 + (ulonglong)local_130;
              ::operator<<((FArchive *)pFVar3,&local_140);
              if (local_140.Data.ArrayNum < 2) goto LAB_14313ae92;
              if ((local_148[0] & 0x80) == 0) {
                local_e8 = &local_140;
                ppFVar18 = &local_e8;
                local_e0 = &local_144;
                pTVar15 = (TPairInitializer<FString_&,unsigned_int_&> *)(local_124 + 4);
                goto LAB_14313ae15;
              }
            }
            lVar13 = (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3);
            lVar14 = (this->StorageReader)._padding_;
          } while (lVar14 < lVar13);
        }
        pTVar17 = &this->FileHandle;
        if (pTVar17 != (TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_> *)&local_d8) {
          pIVar5 = pTVar17->Ptr;
          pTVar17->Ptr = pIVar11;
          pIVar11 = (IFileHandle *)0x0;
          if (pIVar5 != (IFileHandle *)0x0) {
            (**(code **)*pIVar5)(pIVar5,1);
            pIVar11 = (IFileHandle *)0x0;
          }
        }
        bVar7 = true;
LAB_14313ae68:
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
      }
      else {
        bVar7 = false;
      }
      FMD5::~FMD5(&local_b8);
      goto LAB_14313ae9a;
    }
  }
  bVar7 = false;
LAB_14313ae9a:
  if (pIVar11 != (IFileHandle *)0x0) {
    (**(code **)*pIVar11)(pIVar11,1);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar7;
}

// Num @ 14313af30

uint __thiscall FAnalyticsPropertyStore::Num(FAnalyticsPropertyStore *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = *(int *)&(this->NameOffsetMap).field_0x8;
  iVar2 = *(int *)&(this->NameOffsetMap).field_0x34;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return iVar1 - iVar2;
}

// Remove @ 14313b870

bool __thiscall FAnalyticsPropertyStore::Remove(FAnalyticsPropertyStore *this,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
  *this_00;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  uint *puVar9;
  wchar_t *pwVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte local_res8 [8];
  
  lpCriticalSection = &this->StoreLock;
  pwVar10 = L"";
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (param_1->Data).ArrayNum;
  this_00 = &this->NameOffsetMap;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
  uVar6 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                      *)this_00,uVar6,param_1);
  if (uVar6 == 0xffffffff) {
    bVar4 = false;
LAB_14313ba68:
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    return bVar4;
  }
  uVar11 = (ulonglong)
           *(uint *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)(int)uVar6 * 0x20);
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->NameOffsetMap).field_0x28)) {
    puVar8 = *(undefined1 **)&(this->NameOffsetMap).field_0x20;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->NameOffsetMap).field_0x10;
    }
    if ((*(uint *)(puVar8 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14313b97e;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
LAB_14313b97e:
  puVar8 = *(undefined1 **)&(this->NameOffsetMap).field_0x40;
  lVar12 = *(longlong *)&this_00->field_0x0 + (longlong)(int)uVar6 * 0x20;
  if (puVar8 == (undefined1 *)0x0) {
    puVar8 = &(this->NameOffsetMap).field_0x38;
  }
  puVar9 = (uint *)(puVar8 + (longlong)*(int *)(lVar12 + 0x1c) * 4);
  do {
    uVar2 = *puVar9;
    if (uVar2 == 0xffffffff) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    else if (uVar2 == uVar6) {
      *puVar9 = *(uint *)(lVar12 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,uVar6,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_00,uVar6,1);
      (this->StorageReader)._padding_ = uVar11;
      (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
      lVar12 = *(longlong *)&this->StorageWriter;
      local_res8[0] = local_res8[0] | 0x80;
      *(ulonglong *)&(this->StorageWriter).field_0x90 = uVar11;
      (**(code **)(lVar12 + 0x188))(&this->StorageWriter,local_res8,1);
      bVar4 = true;
      this->bFragmented = true;
      goto LAB_14313ba68;
    }
    puVar9 = (uint *)(*(longlong *)&this_00->field_0x0 + 0x18 + (longlong)(int)uVar2 * 0x20);
  } while( true );
}

// RemoveAll @ 14313baa0

void __thiscall FAnalyticsPropertyStore::RemoveAll(FAnalyticsPropertyStore *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
           *)&this->NameOffsetMap);
  uVar2 = (this->StorageBuf).ArrayNum;
  (this->StorageReader)._padding_ = 0;
  *(undefined8 *)&(this->StorageWriter).field_0x90 = 0;
  if (-1 < (int)uVar2) {
    piVar1 = &(this->StorageBuf).ArrayMax;
    (this->StorageBuf).ArrayNum = 0;
    if (*piVar1 != uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar2,&(this->StorageBuf).AllocatorInstance,0,piVar1);
    }
    this->bFragmented = false;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// Reset @ 14313bc70

void __thiscall FAnalyticsPropertyStore::Reset(FAnalyticsPropertyStore *this)

{
  int *piVar1;
  uint uVar2;
  FAsyncTask<FAnalyticsPropertyStore::FFlushWorker> *pFVar3;
  IFileHandle *pIVar4;
  
  pFVar3 = (this->FlushTask).Ptr;
  if (pFVar3 != (FAsyncTask<FAnalyticsPropertyStore::FFlushWorker> *)0x0) {
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)pFVar3,true,false);
    pFVar3 = (this->FlushTask).Ptr;
    if (pFVar3 != (FAsyncTask<FAnalyticsPropertyStore::FFlushWorker> *)0x0) {
      (this->FlushTask).Ptr = (FAsyncTask<FAnalyticsPropertyStore::FFlushWorker> *)0x0;
      (**(code **)(pFVar3->_padding_ + 0x28))(pFVar3,1);
    }
  }
  pIVar4 = (this->FileHandle).Ptr;
  if (pIVar4 != (IFileHandle *)0x0) {
    (this->FileHandle).Ptr = (IFileHandle *)0x0;
    (**(code **)*pIVar4)(pIVar4,1);
  }
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
           *)&this->NameOffsetMap);
  uVar2 = (this->StorageBuf).ArrayNum;
  if (-1 < (int)uVar2) {
    piVar1 = &(this->StorageBuf).ArrayMax;
    (this->StorageBuf).ArrayNum = 0;
    if (*piVar1 != uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar2,&(this->StorageBuf).AllocatorInstance,0,piVar1);
    }
    (this->StorageReader)._padding_ = 0;
    *(undefined8 *)&(this->StorageWriter).field_0x90 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// Set @ 14313bd40

EStatusCode __thiscall
FAnalyticsPropertyStore::Set
          (FAnalyticsPropertyStore *this,FString *param_1,FString *param_2,
          TFunction<bool___cdecl(FString_const_*,FString_const_&)> *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStatusCode EVar4;
  undefined8 uVar5;
  longlong *plVar6;
  FString *local_res8;
  FString local_38;
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  EVar4 = GetStringValueInternal(this,param_1,&local_38);
  if (EVar4 < BadType) {
    local_res8 = &local_38;
    if (EVar4 == NotFound) {
      local_res8 = (FString *)0x0;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)param_3);
    pcVar1 = *(code **)param_3;
    plVar6 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_3->field_0x28;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar3 = (*pcVar1)(uVar5,&local_res8,param_2);
    if (cVar3 == '\0') {
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      EVar4 = Declined;
      goto LAB_14313be38;
    }
    EVar4 = SetStringValueInternal(this,param_1,param_2,0);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14313be38:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar4;
}

// Set @ 14313be70

EStatusCode __thiscall
FAnalyticsPropertyStore::Set
          (FAnalyticsPropertyStore *this,FString *param_1,FString *param_2,uint param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  EStatusCode EVar3;
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  EVar3 = SetStringValueInternal(this,param_1,param_2,param_3);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar3;
}

// Set @ 14313bf30

EStatusCode __thiscall
FAnalyticsPropertyStore::Set(FAnalyticsPropertyStore *this,FString *param_1,FDateTime *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  EStatusCode EVar3;
  long64 local_res8;
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res8 = param_2->Ticks;
  EVar3 = SetFixedSizeValueInternal(this,param_1,Date,(uchar *)&local_res8,8);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar3;
}

// Set @ 14313bfe0

EStatusCode __thiscall
FAnalyticsPropertyStore::Set
          (FAnalyticsPropertyStore *this,FString *param_1,FDateTime *param_2,
          TFunction<bool___cdecl(FDateTime_const_*,FDateTime_const_&)> *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStatusCode EVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 local_48;
  undefined8 *local_40;
  long64 local_38 [2];
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res10 = 0;
  puVar5 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar5 == (uint *)0x0) {
    bVar2 = true;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar5;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] != '\a') {
      EVar4 = BadType;
      goto LAB_14313c147;
    }
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,&local_48,8);
    bVar2 = false;
    local_res10 = local_48;
  }
  local_40 = &local_res10;
  if (bVar2) {
    local_40 = (undefined8 *)0x0;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)param_3);
  pcVar1 = *(code **)param_3;
  plVar7 = (longlong *)&param_3->field_0x10;
  if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
    plVar7 = *(longlong **)&param_3->field_0x28;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  cVar3 = (*pcVar1)(uVar6,&local_40,param_2);
  if (cVar3 == '\0') {
    EVar4 = Declined;
  }
  else {
    local_38[0] = param_2->Ticks;
    EVar4 = SetFixedSizeValueInternal(this,param_1,Date,(uchar *)local_38,8);
  }
LAB_14313c147:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar4;
}

// Set @ 14313c190

EStatusCode __thiscall
FAnalyticsPropertyStore::Set(FAnalyticsPropertyStore *this,FString *param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  EStatusCode EVar3;
  int local_res18 [2];
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res18[0] = param_2;
  EVar3 = SetFixedSizeValueInternal(this,param_1,I32,(uchar *)local_res18,4);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar3;
}

// Set @ 14313c240

EStatusCode __thiscall
FAnalyticsPropertyStore::Set
          (FAnalyticsPropertyStore *this,FString *param_1,int param_2,
          TFunction<bool___cdecl(int_const_*,int_const_&)> *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStatusCode EVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_38 [2];
  undefined1 *local_30;
  
  lpCriticalSection = &this->StoreLock;
  local_res18 = param_2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar5 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar5 == (uint *)0x0) {
    bVar2 = true;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar5;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] != '\0') {
      EVar4 = BadType;
      goto LAB_14313c38e;
    }
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res10,4);
    bVar2 = false;
  }
  local_30 = local_res10;
  if (bVar2) {
    local_30 = (undefined1 *)0x0;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)param_3);
  pcVar1 = *(code **)param_3;
  plVar7 = (longlong *)&param_3->field_0x10;
  if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
    plVar7 = *(longlong **)&param_3->field_0x28;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  cVar3 = (*pcVar1)(uVar6,&local_30);
  if (cVar3 == '\0') {
    EVar4 = Declined;
  }
  else {
    local_38[0] = local_res18;
    EVar4 = SetFixedSizeValueInternal(this,param_1,I32,(uchar *)local_38,4);
  }
LAB_14313c38e:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar4;
}

// Set @ 14313c3d0

EStatusCode __thiscall
FAnalyticsPropertyStore::Set(FAnalyticsPropertyStore *this,FString *param_1,uint param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  EStatusCode EVar3;
  uint local_res18 [2];
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res18[0] = param_2;
  EVar3 = SetFixedSizeValueInternal(this,param_1,U32,(uchar *)local_res18,4);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar3;
}

// Set @ 14313c480

EStatusCode __thiscall
FAnalyticsPropertyStore::Set
          (FAnalyticsPropertyStore *this,FString *param_1,uint param_2,
          TFunction<bool___cdecl(unsigned_int_const_*,unsigned_int_const_&)> *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStatusCode EVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_38 [2];
  undefined1 *local_30;
  
  lpCriticalSection = &this->StoreLock;
  local_res18[0] = param_2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar5 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar5 == (uint *)0x0) {
    bVar2 = true;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar5;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] != '\x01') {
      EVar4 = BadType;
      goto LAB_14313c5ce;
    }
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res10,4);
    bVar2 = false;
  }
  local_30 = local_res10;
  if (bVar2) {
    local_30 = (undefined1 *)0x0;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)param_3);
  pcVar1 = *(code **)param_3;
  plVar7 = (longlong *)&param_3->field_0x10;
  if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
    plVar7 = *(longlong **)&param_3->field_0x28;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  cVar3 = (*pcVar1)(uVar6,&local_30,local_res18);
  if (cVar3 == '\0') {
    EVar4 = Declined;
  }
  else {
    local_38[0] = local_res18[0];
    EVar4 = SetFixedSizeValueInternal(this,param_1,U32,(uchar *)local_38,4);
  }
LAB_14313c5ce:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar4;
}

// Set @ 14313c610

EStatusCode __thiscall
FAnalyticsPropertyStore::Set(FAnalyticsPropertyStore *this,FString *param_1,float param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  EStatusCode EVar3;
  float local_res18 [4];
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res18[0] = param_2;
  EVar3 = SetFixedSizeValueInternal(this,param_1,Flt,(uchar *)local_res18,4);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar3;
}

// Set @ 14313c6c0

EStatusCode __thiscall
FAnalyticsPropertyStore::Set
          (FAnalyticsPropertyStore *this,FString *param_1,float param_2,
          TFunction<bool___cdecl(float_const_*,float_const_&)> *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStatusCode EVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char local_res8 [8];
  undefined1 local_res10 [8];
  float local_res18 [2];
  float local_38 [2];
  undefined1 *local_30;
  
  lpCriticalSection = &this->StoreLock;
  local_res18[0] = param_2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar5 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar5 == (uint *)0x0) {
    bVar2 = true;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar5;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] != '\x04') {
      EVar4 = BadType;
      goto LAB_14313c813;
    }
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res10,4);
    bVar2 = false;
  }
  local_30 = local_res10;
  if (bVar2) {
    local_30 = (undefined1 *)0x0;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)param_3);
  pcVar1 = *(code **)param_3;
  plVar7 = (longlong *)&param_3->field_0x10;
  if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
    plVar7 = *(longlong **)&param_3->field_0x28;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  cVar3 = (*pcVar1)(uVar6,&local_30,local_res18);
  if (cVar3 == '\0') {
    EVar4 = Declined;
  }
  else {
    local_38[0] = local_res18[0];
    EVar4 = SetFixedSizeValueInternal(this,param_1,Flt,(uchar *)local_38,4);
  }
LAB_14313c813:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar4;
}

// Set @ 14313c850

EStatusCode __thiscall
FAnalyticsPropertyStore::Set(FAnalyticsPropertyStore *this,FString *param_1,double param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  EStatusCode EVar3;
  double local_res8;
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res8 = param_2;
  EVar3 = SetFixedSizeValueInternal(this,param_1,Dbl,(uchar *)&local_res8,8);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar3;
}

// Set @ 14313c900

EStatusCode __thiscall
FAnalyticsPropertyStore::Set
          (FAnalyticsPropertyStore *this,FString *param_1,double param_2,
          TFunction<bool___cdecl(double_const_*,double_const_&)> *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStatusCode EVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char local_res8 [8];
  undefined1 local_res10 [8];
  double local_res18;
  undefined1 *local_38;
  double local_30;
  
  lpCriticalSection = &this->StoreLock;
  local_res18 = param_2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar5 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar5 == (uint *)0x0) {
    bVar2 = true;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar5;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] != '\x05') {
      EVar4 = BadType;
      goto LAB_14313ca53;
    }
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res10,8);
    bVar2 = false;
  }
  local_38 = local_res10;
  if (bVar2) {
    local_38 = (undefined1 *)0x0;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)param_3);
  pcVar1 = *(code **)param_3;
  plVar7 = (longlong *)&param_3->field_0x10;
  if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
    plVar7 = *(longlong **)&param_3->field_0x28;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  cVar3 = (*pcVar1)(uVar6,&local_38,&local_res18);
  if (cVar3 == '\0') {
    EVar4 = Declined;
  }
  else {
    local_30 = local_res18;
    EVar4 = SetFixedSizeValueInternal(this,param_1,Dbl,(uchar *)&local_30,8);
  }
LAB_14313ca53:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar4;
}

// Set @ 14313ca90

EStatusCode __thiscall
FAnalyticsPropertyStore::Set(FAnalyticsPropertyStore *this,FString *param_1,long64 param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  EStatusCode EVar3;
  long64 local_res8;
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res8 = param_2;
  EVar3 = SetFixedSizeValueInternal(this,param_1,I64,(uchar *)&local_res8,8);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar3;
}

// Set @ 14313cb40

EStatusCode __thiscall
FAnalyticsPropertyStore::Set
          (FAnalyticsPropertyStore *this,FString *param_1,long64 param_2,
          TFunction<bool___cdecl(__int64_const_*,__int64_const_&)> *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStatusCode EVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char local_res8 [8];
  undefined1 local_res10 [8];
  long64 local_res18;
  undefined1 *local_38;
  long64 local_30;
  
  lpCriticalSection = &this->StoreLock;
  local_res18 = param_2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar5 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar5 == (uint *)0x0) {
    bVar2 = true;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar5;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] != '\x02') {
      EVar4 = BadType;
      goto LAB_14313cc90;
    }
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res10,8);
    bVar2 = false;
  }
  local_38 = local_res10;
  if (bVar2) {
    local_38 = (undefined1 *)0x0;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)param_3);
  pcVar1 = *(code **)param_3;
  plVar7 = (longlong *)&param_3->field_0x10;
  if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
    plVar7 = *(longlong **)&param_3->field_0x28;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  cVar3 = (*pcVar1)(uVar6,&local_38,&local_res18);
  if (cVar3 == '\0') {
    EVar4 = Declined;
  }
  else {
    local_30 = local_res18;
    EVar4 = SetFixedSizeValueInternal(this,param_1,I64,(uchar *)&local_30,8);
  }
LAB_14313cc90:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar4;
}

// Set @ 14313ccd0

EStatusCode __thiscall
FAnalyticsPropertyStore::Set(FAnalyticsPropertyStore *this,FString *param_1,ulong64 param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  EStatusCode EVar3;
  ulong64 local_res8;
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res8 = param_2;
  EVar3 = SetFixedSizeValueInternal(this,param_1,U64,(uchar *)&local_res8,8);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar3;
}

// Set @ 14313cd80

EStatusCode __thiscall
FAnalyticsPropertyStore::Set
          (FAnalyticsPropertyStore *this,FString *param_1,ulong64 param_2,
          TFunction<bool___cdecl(unsigned___int64_const_*,unsigned___int64_const_&)> *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStatusCode EVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char local_res8 [8];
  undefined1 local_res10 [8];
  ulong64 local_res18;
  undefined1 *local_38;
  ulong64 local_30;
  
  lpCriticalSection = &this->StoreLock;
  local_res18 = param_2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar5 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar5 == (uint *)0x0) {
    bVar2 = true;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar5;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] != '\x03') {
      EVar4 = BadType;
      goto LAB_14313ced0;
    }
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res10,8);
    bVar2 = false;
  }
  local_38 = local_res10;
  if (bVar2) {
    local_38 = (undefined1 *)0x0;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)param_3);
  pcVar1 = *(code **)param_3;
  plVar7 = (longlong *)&param_3->field_0x10;
  if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
    plVar7 = *(longlong **)&param_3->field_0x28;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  cVar3 = (*pcVar1)(uVar6,&local_38,&local_res18);
  if (cVar3 == '\0') {
    EVar4 = Declined;
  }
  else {
    local_30 = local_res18;
    EVar4 = SetFixedSizeValueInternal(this,param_1,U64,(uchar *)&local_30,8);
  }
LAB_14313ced0:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar4;
}

// Set @ 14313cf10

EStatusCode __thiscall
FAnalyticsPropertyStore::Set(FAnalyticsPropertyStore *this,FString *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  EStatusCode EVar3;
  uchar local_res18 [8];
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res18[0] = param_2;
  EVar3 = SetFixedSizeValueInternal(this,param_1,Bool,local_res18,1);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar3;
}

// Set @ 14313cfc0

EStatusCode __thiscall
FAnalyticsPropertyStore::Set
          (FAnalyticsPropertyStore *this,FString *param_1,bool param_2,
          TFunction<bool___cdecl(bool_const_*,bool_const_&)> *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStatusCode EVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char local_res8 [8];
  undefined1 local_res10 [8];
  uchar local_res18 [8];
  uchar local_38 [8];
  undefined1 *local_30;
  
  lpCriticalSection = &this->StoreLock;
  local_res18[0] = param_2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar5 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar5 == (uint *)0x0) {
    bVar2 = true;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar5;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] != '\x06') {
      EVar4 = BadType;
      goto LAB_14313d10f;
    }
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res10,1);
    bVar2 = false;
  }
  local_30 = local_res10;
  if (bVar2) {
    local_30 = (undefined1 *)0x0;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)param_3);
  pcVar1 = *(code **)param_3;
  plVar7 = (longlong *)&param_3->field_0x10;
  if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
    plVar7 = *(longlong **)&param_3->field_0x28;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  cVar3 = (*pcVar1)(uVar6,&local_30,local_res18);
  if (cVar3 == '\0') {
    EVar4 = Declined;
  }
  else {
    local_38[0] = local_res18[0];
    EVar4 = SetFixedSizeValueInternal(this,param_1,Bool,local_38,1);
  }
LAB_14313d10f:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar4;
}

// SetDateTimeValueInternal @ 14313d150

EStatusCode __thiscall
FAnalyticsPropertyStore::SetDateTimeValueInternal
          (FAnalyticsPropertyStore *this,FString *param_1,FDateTime *param_2)

{
  EStatusCode EVar1;
  long64 local_res18 [2];
  
  local_res18[0] = param_2->Ticks;
  EVar1 = SetFixedSizeValueInternal(this,param_1,Date,(uchar *)local_res18,8);
  return EVar1;
}

// SetFixedSizeValueInternal @ 14313d180

EStatusCode __thiscall
FAnalyticsPropertyStore::SetFixedSizeValueInternal
          (FAnalyticsPropertyStore *this,FString *param_1,ETypeCode param_2,uchar *param_3,
          uint param_4)

{
  code *pcVar1;
  bool bVar2;
  EStatusCode EVar3;
  uint *puVar4;
  ulonglong uVar5;
  ETypeCode local_res8 [8];
  ETypeCode local_res18 [16];
  undefined4 local_48;
  undefined1 local_44 [4];
  FString *local_40;
  undefined4 *local_38;
  
  local_res18[0] = param_2;
  if (param_2 == Str) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFixedSize(TypeCode)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\AnalyticsPropertyStore.cpp"
                       ,0x272,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  puVar4 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar4 != (uint *)0x0) {
    (this->StorageReader)._padding_ = (ulonglong)*puVar4;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] == local_res18[0]) {
      *(ulonglong *)&(this->StorageWriter).field_0x90 = (ulonglong)*puVar4 + 1;
      (**(code **)(*(longlong *)&this->StorageWriter + 0x188))(&this->StorageWriter,param_3,param_4)
      ;
      return Success;
    }
    return BadType;
  }
  uVar5 = (**(code **)(*(longlong *)&this->StorageWriter + 0x30))(&this->StorageWriter);
  *(ulonglong *)&(this->StorageWriter).field_0x90 = uVar5;
  (**(code **)(*(longlong *)&this->StorageWriter + 0x188))(&this->StorageWriter,local_res18,1);
  (**(code **)(*(longlong *)&this->StorageWriter + 0x188))(&this->StorageWriter,param_3,param_4);
  ::operator<<((FArchive *)&this->StorageWriter,param_1);
  if ((uVar5 != (uVar5 & 0xffffffff)) || ((longlong)uVar5 < 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  local_38 = &local_48;
  local_48 = (undefined4)uVar5;
  local_40 = param_1;
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,unsigned_int_&&>_>
            ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->NameOffsetMap,(TPairInitializer<FString_const_&,unsigned_int_&&> *)local_44,
             (bool *)(local_44 + 4));
  return Success;
}

// SetStringValueInternal @ 14313d3f0

EStatusCode __thiscall
FAnalyticsPropertyStore::SetStringValueInternal
          (FAnalyticsPropertyStore *this,FString *param_1,FString *param_2,uint param_3)

{
  longlong *plVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  EStatusCode EVar6;
  size_t sVar7;
  uint *puVar8;
  int iVar9;
  wchar_t *_Str;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  char local_res8 [8];
  undefined1 local_res18 [8];
  uint uVar13;
  uint local_28;
  uint local_24;
  FAnalyticsPropertyStore *local_20;
  
  iVar3 = (param_2->Data).ArrayNum;
  pFVar11 = (FScriptContainerElement *)0x0;
  iVar10 = 0;
  iVar12 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar12 = iVar10;
  }
  iVar9 = iVar12 + 1;
  local_20 = this;
  if (iVar3 == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) goto LAB_14313d45b;
  }
  iVar10 = iVar9;
  if ((0 < iVar9) && (*(short *)((longlong)_Str + (longlong)iVar12 * 2) == 0)) {
    iVar10 = iVar12;
  }
  pFVar11 = (FScriptContainerElement *)_Str;
  if (iVar10 == -1) {
    sVar7 = wcslen(_Str);
    iVar10 = (int)sVar7;
  }
LAB_14313d45b:
  local_28 = iVar10 * 2 + 2;
  puVar8 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar8 == (uint *)0x0) {
    uVar5 = param_3 * 2;
    uVar13 = local_28;
    if ((local_28 < uVar5) && (uVar13 = local_28 + 0x800, uVar5 < local_28 + 0x800)) {
      uVar13 = uVar5;
    }
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar8;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] != '\b') {
      return BadType;
    }
    plVar1 = &(this->StorageReader)._padding_;
    *plVar1 = *plVar1 + 4;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,&local_24,4);
    if (local_28 <= local_24) {
      *(ulonglong *)&(this->StorageWriter).field_0x90 = (ulonglong)*puVar8 + 1;
      (**(code **)(*(longlong *)&this->StorageWriter + 0x188))(&this->StorageWriter,&local_28,4);
      lVar4 = *(longlong *)&this->StorageWriter;
      puVar2 = &(this->StorageWriter).field_0x90;
      *(longlong *)puVar2 = *(longlong *)puVar2 + 4;
      (**(code **)(lVar4 + 0x188))(&this->StorageWriter,pFVar11,local_28);
      return Success;
    }
    lVar4 = *(longlong *)&this->StorageWriter;
    *(ulonglong *)&(this->StorageWriter).field_0x90 = (ulonglong)*puVar8;
    local_res18[0] = 0x88;
    (**(code **)(lVar4 + 0x188))(&this->StorageWriter,local_res18,1);
    this->bFragmented = true;
    uVar13 = local_28;
  }
  EVar6 = `FAnalyticsPropertyStore::SetStringValueInternal'::__l2::<lambda_1>::operator()
                    (&local_20,param_1,Str,pFVar11,local_28,uVar13);
  return EVar6;
}

// Update @ 14313e3e0

EStatusCode __thiscall
FAnalyticsPropertyStore::Update
          (FAnalyticsPropertyStore *this,FString *param_1,TFunction<bool___cdecl(int_&)> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStatusCode EVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar5 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar5 == (uint *)0x0) {
    EVar4 = NotFound;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar5;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] == '\0') {
      (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res10);
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar1 = *(code **)param_2;
      plVar7 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar7 = *(longlong **)&param_2->field_0x28;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      cVar3 = (*pcVar1)(uVar6,local_res10);
      if (cVar3 == '\0') {
        EVar4 = Declined;
      }
      else {
        local_res20[0] = local_res10[0];
        EVar4 = SetFixedSizeValueInternal(this,param_1,I32,(uchar *)local_res20,4);
      }
    }
    else {
      EVar4 = BadType;
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar4;
}

// Update @ 14313e550

EStatusCode __thiscall
FAnalyticsPropertyStore::Update
          (FAnalyticsPropertyStore *this,FString *param_1,
          TFunction<bool___cdecl(unsigned_int_&)> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStatusCode EVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar5 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar5 == (uint *)0x0) {
    EVar4 = NotFound;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar5;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] == '\x01') {
      (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res10,4);
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar1 = *(code **)param_2;
      plVar7 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar7 = *(longlong **)&param_2->field_0x28;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      cVar3 = (*pcVar1)(uVar6,local_res10);
      if (cVar3 == '\0') {
        EVar4 = Declined;
      }
      else {
        local_res20[0] = local_res10[0];
        EVar4 = SetFixedSizeValueInternal(this,param_1,U32,(uchar *)local_res20,4);
      }
    }
    else {
      EVar4 = BadType;
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar4;
}

// Update @ 14313e6c0

EStatusCode __thiscall
FAnalyticsPropertyStore::Update
          (FAnalyticsPropertyStore *this,FString *param_1,TFunction<bool___cdecl(float_&)> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStatusCode EVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar5 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar5 == (uint *)0x0) {
    EVar4 = NotFound;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar5;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] == '\x04') {
      (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res10,4);
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar1 = *(code **)param_2;
      plVar7 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar7 = *(longlong **)&param_2->field_0x28;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      cVar3 = (*pcVar1)(uVar6,local_res10);
      if (cVar3 == '\0') {
        EVar4 = Declined;
      }
      else {
        local_res20[0] = local_res10[0];
        EVar4 = SetFixedSizeValueInternal(this,param_1,Flt,(uchar *)local_res20,4);
      }
    }
    else {
      EVar4 = BadType;
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar4;
}

// Update @ 14313e830

EStatusCode __thiscall
FAnalyticsPropertyStore::Update
          (FAnalyticsPropertyStore *this,FString *param_1,TFunction<bool___cdecl(double_&)> *param_2
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStatusCode EVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res20;
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar5 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar5 == (uint *)0x0) {
    EVar4 = NotFound;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar5;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] == '\x05') {
      (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,&local_res10,8);
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar1 = *(code **)param_2;
      plVar7 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar7 = *(longlong **)&param_2->field_0x28;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      cVar3 = (*pcVar1)(uVar6,&local_res10);
      if (cVar3 == '\0') {
        EVar4 = Declined;
      }
      else {
        local_res20 = local_res10;
        EVar4 = SetFixedSizeValueInternal(this,param_1,Dbl,(uchar *)&local_res20,8);
      }
    }
    else {
      EVar4 = BadType;
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar4;
}

// Update @ 14313e9a0

EStatusCode __thiscall
FAnalyticsPropertyStore::Update
          (FAnalyticsPropertyStore *this,FString *param_1,
          TFunction<bool___cdecl(FDateTime_&)> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStatusCode EVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_38 [2];
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar5 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar5 == (uint *)0x0) {
    EVar4 = NotFound;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar5;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] == '\a') {
      (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,&local_res20,8);
      local_res10 = local_res20;
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar1 = *(code **)param_2;
      plVar7 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar7 = *(longlong **)&param_2->field_0x28;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      cVar3 = (*pcVar1)(uVar6,&local_res10);
      if (cVar3 == '\0') {
        EVar4 = Declined;
      }
      else {
        local_38[0] = local_res10;
        EVar4 = SetFixedSizeValueInternal(this,param_1,Date,(uchar *)local_38,8);
      }
    }
    else {
      EVar4 = BadType;
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar4;
}

// Update @ 14313eb20

EStatusCode __thiscall
FAnalyticsPropertyStore::Update
          (FAnalyticsPropertyStore *this,FString *param_1,
          TFunction<bool___cdecl(FString_&)> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStatusCode EVar4;
  undefined8 uVar5;
  longlong *plVar6;
  FString local_18;
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  EVar4 = GetStringValueInternal(this,param_1,&local_18);
  if (EVar4 == Success) {
    UE::Core::Private::Function::CheckCallable(*(void **)param_2);
    pcVar1 = *(code **)param_2;
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar3 = (*pcVar1)(uVar5,&local_18);
    if (cVar3 == '\0') {
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      EVar4 = Declined;
      goto LAB_14313ebef;
    }
    EVar4 = SetStringValueInternal(this,param_1,&local_18,0);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_14313ebef:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar4;
}

// Update @ 14313ec40

EStatusCode __thiscall
FAnalyticsPropertyStore::Update
          (FAnalyticsPropertyStore *this,FString *param_1,
          TFunction<bool___cdecl(__int64_&)> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStatusCode EVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res20;
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar5 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar5 == (uint *)0x0) {
    EVar4 = NotFound;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar5;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] == '\x02') {
      (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,&local_res10,8);
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar1 = *(code **)param_2;
      plVar7 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar7 = *(longlong **)&param_2->field_0x28;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      cVar3 = (*pcVar1)(uVar6,&local_res10);
      if (cVar3 == '\0') {
        EVar4 = Declined;
      }
      else {
        local_res20 = local_res10;
        EVar4 = SetFixedSizeValueInternal(this,param_1,I64,(uchar *)&local_res20,8);
      }
    }
    else {
      EVar4 = BadType;
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar4;
}

// Update @ 14313edb0

EStatusCode __thiscall
FAnalyticsPropertyStore::Update
          (FAnalyticsPropertyStore *this,FString *param_1,
          TFunction<bool___cdecl(unsigned___int64_&)> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStatusCode EVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res20;
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar5 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  if (puVar5 == (uint *)0x0) {
    EVar4 = NotFound;
  }
  else {
    (this->StorageReader)._padding_ = (ulonglong)*puVar5;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
    if (local_res8[0] == '\x03') {
      (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,&local_res10,8);
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar1 = *(code **)param_2;
      plVar7 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar7 = *(longlong **)&param_2->field_0x28;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      cVar3 = (*pcVar1)(uVar6,&local_res10);
      if (cVar3 == '\0') {
        EVar4 = Declined;
      }
      else {
        local_res20 = local_res10;
        EVar4 = SetFixedSizeValueInternal(this,param_1,U64,(uchar *)&local_res20,8);
      }
    }
    else {
      EVar4 = BadType;
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar4;
}

// Update @ 14313ef20

EStatusCode __thiscall
FAnalyticsPropertyStore::Update
          (FAnalyticsPropertyStore *this,FString *param_1,TFunction<bool___cdecl(bool_&)> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStatusCode EVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uchar local_res8 [8];
  char local_res10 [8];
  uchar local_res20 [8];
  
  lpCriticalSection = &this->StoreLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar5 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   *)&this->NameOffsetMap,param_1);
  EVar4 = NotFound;
  if (puVar5 != (uint *)0x0) {
    (this->StorageReader)._padding_ = (ulonglong)*puVar5;
    (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res10,1);
    if (local_res10[0] == '\x06') {
      (**(code **)((this->StorageReader)._padding_ + 0x188))(&this->StorageReader,local_res8,1);
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar1 = *(code **)param_2;
      plVar7 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar7 = *(longlong **)&param_2->field_0x28;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      cVar3 = (*pcVar1)(uVar6,local_res8);
      if (cVar3 == '\0') {
        EVar4 = Declined;
      }
      else {
        local_res20[0] = local_res8[0];
        EVar4 = SetFixedSizeValueInternal(this,param_1,Bool,local_res20,1);
      }
    }
    else {
      EVar4 = BadType;
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return EVar4;
}

// VisitAll @ 14313f080

void __thiscall
FAnalyticsPropertyStore::VisitAll
          (FAnalyticsPropertyStore *this,
          TFunction<void___cdecl(FAnalyticsEventAttribute_&&)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
  *this_00;
  FMemoryReader *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FAnalyticsEventAttribute *pFVar11;
  undefined8 uVar12;
  uint *puVar13;
  FString *pFVar14;
  byte bVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  longlong *plVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  FString *pFVar21;
  int iVar22;
  undefined1 *puVar23;
  int iVar24;
  uint uVar25;
  byte local_res18 [8];
  undefined1 local_res20 [8];
  char local_3d8;
  char local_3d7 [3];
  undefined1 local_3d4 [4];
  undefined1 local_3d0 [4];
  float local_3cc;
  int local_3c8;
  uint uStack_3c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3c0;
  uint local_3b8;
  uint uStack_3b4;
  uint uStack_3b0;
  undefined4 uStack_3ac;
  FString local_3a8;
  TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
  *local_398;
  undefined8 uStack_390;
  TBitArray<FDefaultBitArrayAllocator> *local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  int iStack_370;
  undefined4 uStack_36c;
  FDateTime local_368;
  FScriptContainerElement *local_360;
  int local_358;
  int local_354;
  ForAnyElementType local_350;
  int local_348;
  int local_344 [3];
  undefined1 local_338;
  undefined4 local_334;
  FScriptContainerElement *local_330;
  int local_328;
  int local_324;
  FScriptContainerElement *local_320;
  int local_318;
  int local_314;
  undefined8 local_310;
  undefined1 local_308;
  undefined4 local_304;
  int local_300;
  int local_2fc;
  undefined1 local_2f8 [8];
  undefined1 local_2f0 [8];
  double local_2e8;
  long64 local_2e0;
  LPCRITICAL_SECTION local_2d8;
  FScriptContainerElement *local_2d0;
  int local_2c8;
  int local_2c4;
  FString local_2c0;
  undefined8 local_2b0;
  undefined1 local_2a8;
  undefined4 local_2a4;
  FScriptContainerElement *local_2a0;
  int local_298;
  int local_294;
  FString local_290;
  undefined8 local_280;
  undefined1 local_278;
  undefined4 local_274;
  FScriptContainerElement *local_270;
  int local_268;
  int local_264;
  FString local_260;
  undefined8 local_250;
  undefined1 local_248;
  undefined4 local_244;
  FScriptContainerElement *local_240;
  int local_238;
  int local_234;
  FString local_230;
  undefined8 local_220;
  undefined1 local_218;
  undefined4 local_214;
  FScriptContainerElement *local_210;
  int local_208;
  int local_204;
  FString local_200;
  undefined8 local_1f0;
  undefined1 local_1e8;
  undefined4 local_1e4;
  FScriptContainerElement *local_1e0;
  int local_1d8;
  int local_1d4;
  FString local_1d0;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined4 local_1b4;
  TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
  *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 uStack_188;
  FString local_180;
  TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
  *local_170;
  undefined8 uStack_168;
  TBitArray<FDefaultBitArrayAllocator> *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FAnalyticsEventAttribute local_b0;
  undefined4 local_64;
  
  lpCriticalSection = &this->StoreLock;
  local_2d8 = (LPCRITICAL_SECTION)lpCriticalSection;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar22 = 0;
  local_378._0_4_ = 0;
  uVar9 = 1;
  puVar1 = &(this->NameOffsetMap).field_0x10;
  iVar10 = *(int *)&(this->NameOffsetMap).field_0x28;
  local_398 = &this->NameOffsetMap;
  uStack_380._4_4_ = 0;
  if (iVar10 != 0) {
    puVar13 = *(uint **)&(this->NameOffsetMap).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar16 = (longlong)iVar22;
      local_378._0_4_ = (int)local_378 + 0x20;
      iVar22 = iVar22 + 1;
      uStack_380._4_4_ = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_14313f185;
      uVar4 = puVar13[lVar16 + 1];
    }
    uVar9 = -uVar4 & uVar4;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_300 = (int)lVar16;
    uStack_380._4_4_ = (int)local_378 + -1 + local_300;
    if (iVar10 < uStack_380._4_4_) {
      uStack_380._4_4_ = iVar10;
    }
  }
LAB_14313f185:
  uVar4 = *(uint *)&(this->NameOffsetMap).field_0x28;
  bVar15 = (byte)uVar4 & 0x1f;
  iStack_370 = *(int *)&(this->NameOffsetMap).field_0x8 - *(int *)&(this->NameOffsetMap).field_0x34;
  uVar20 = uVar4 & 0xffffffe0;
  iVar24 = (int)uVar4 >> 5;
  uStack_3c4 = 1 << bVar15;
  uVar25 = -1 << bVar15;
  uStack_390 = CONCAT44(uVar9,iVar22);
  uStack_380._0_4_ = 0xffffffff;
  local_378._4_4_ = local_64;
  TStack_1a8._padding_ = uStack_390;
  uStack_188 = CONCAT44(uStack_36c,iStack_370);
  TStack_1a8.UnvisitedBitMask = 0xffffffff;
  TStack_1a8.CurrentBitIndex = uStack_380._4_4_;
  TStack_1a8.BaseBitIndex = (int)local_378;
  TStack_1a8._28_4_ = local_64;
  local_3c8 = iVar24;
  pTStack_3c0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_3b8 = uVar25;
  uStack_3b4 = uVar4;
  uStack_3b0 = uVar20;
  local_1b0 = local_398;
  TStack_1a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar4 < 0) || (iVar10 < (int)uVar4)) &&
     (local_388 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1,
     bVar8 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = *(uint *)&(this->NameOffsetMap).field_0x28;
  if (uVar4 != uVar9) {
    puVar23 = *(undefined1 **)&(this->NameOffsetMap).field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = puVar1;
    }
    uVar25 = uVar25 & *(uint *)(puVar23 + (longlong)iVar24 * 4);
    while (uVar25 == 0) {
      uStack_3b0 = uVar20 + 0x20;
      local_3c8 = iVar24 + 1;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < local_3c8)
      goto LAB_14313f2e0;
      uVar25 = *(uint *)(puVar23 + (longlong)iVar24 * 4 + 4);
      local_3b8 = 0xffffffff;
      uVar20 = uStack_3b0;
      iVar24 = local_3c8;
    }
    uStack_3c4 = -uVar25 & uVar25;
    uVar3 = (ulonglong)uStack_3c4 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_2fc = (int)lVar16;
    uStack_3b4 = (uVar20 - 1) + local_2fc;
    if ((int)uVar9 < (int)uStack_3b4) {
LAB_14313f2e0:
      uStack_3b4 = uVar9;
    }
  }
  uStack_390 = CONCAT44(uStack_3c4,local_3c8);
  this_00 = &this->NameOffsetMap;
  uStack_380 = CONCAT44(uStack_3b4,local_3b8);
  local_378 = CONCAT44(uStack_3ac,uStack_3b0);
  iStack_370 = *(int *)&(this->NameOffsetMap).field_0x8 - *(int *)&(this->NameOffsetMap).field_0x34;
  local_388 = pTStack_3c0;
  uStack_148 = CONCAT44(uStack_36c,iStack_370);
  local_160 = pTStack_3c0;
  local_398 = this_00;
  local_170 = this_00;
  uStack_168 = uStack_390;
  uStack_158 = uStack_380;
  local_150 = local_378;
  do {
    pTVar7 = local_1b0;
    if (*(int *)&local_1b0->field_0x8 - *(int *)&local_1b0->field_0x34 != (int)uStack_188) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_1a8.CurrentBitIndex == uStack_158._4_4_) && (TStack_1a8.Array == local_160)) &&
       (pTVar7 == local_170)) {
      if (local_2d8 != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(local_2d8);
      }
      return;
    }
    pFVar21 = (FString *)((longlong)TStack_1a8.CurrentBitIndex * 0x20 + *(longlong *)pTVar7);
    pFVar2 = &this->StorageReader;
    (this->StorageReader)._padding_ = (ulonglong)*(uint *)&pFVar21[1].Data.AllocatorInstance.Data;
    plVar18 = (longlong *)(this->StorageReader)._padding_;
    if ((byte *)plVar18[1] < (byte *)*plVar18 + 1) {
      (**(code **)(pFVar2->_padding_ + 0x188))(pFVar2,local_res18,1);
    }
    else {
      local_res18[0] = *(byte *)*plVar18;
      *plVar18 = *plVar18 + 1;
    }
    switch(local_res18[0] & 0xf) {
    case 0:
      (**(code **)(pFVar2->_padding_ + 0x188))(pFVar2,local_3d4,4);
      pFVar21 = ::FString::FString(&local_e0,pFVar21);
      if (((pFVar21->Data).ArrayNum < 2) ||
         (iVar10 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(pFVar21->Data).AllocatorInstance.Data,L"EventName"),
         iVar10 == 0)) {
LAB_14313f48b:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidAttributeName(InName)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                           ,0x78,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        if ((pFVar21->Data).ArrayNum == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
        }
        iVar10 = FGenericPlatformStricmp::Stricmp(pwVar17,L"DateOffset");
        if (iVar10 == 0) goto LAB_14313f48b;
      }
      local_2d0 = (pFVar21->Data).AllocatorInstance.Data;
      (pFVar21->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2c8 = (pFVar21->Data).ArrayNum;
      local_2c4 = (pFVar21->Data).ArrayMax;
      (pFVar21->Data).ArrayNum = 0;
      (pFVar21->Data).ArrayMax = 0;
      ::FString::PrintfImpl(&local_2c0,L"%d");
      local_2b0 = 0;
      local_2a8 = 0;
      local_2a4 = 4;
      pFVar5 = (pFVar21->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar6 = *(code **)param_1;
      plVar18 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar18 = (longlong *)&param_1->field_0x10;
      }
      uVar12 = (**(code **)(*plVar18 + 8))();
      (*pcVar6)(uVar12,&local_2d0);
      if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
      }
      if (local_2d0 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d0);
      }
      break;
    case 1:
      (**(code **)(pFVar2->_padding_ + 0x188))(pFVar2,local_3d0,4);
      pFVar21 = ::FString::FString(&local_d0,pFVar21);
      if (((pFVar21->Data).ArrayNum < 2) ||
         (iVar10 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(pFVar21->Data).AllocatorInstance.Data,L"EventName"),
         iVar10 == 0)) {
LAB_14313f5b5:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidAttributeName(InName)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                           ,0x78,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        if ((pFVar21->Data).ArrayNum == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
        }
        iVar10 = FGenericPlatformStricmp::Stricmp(pwVar17,L"DateOffset");
        if (iVar10 == 0) goto LAB_14313f5b5;
      }
      local_2a0 = (pFVar21->Data).AllocatorInstance.Data;
      (pFVar21->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_298 = (pFVar21->Data).ArrayNum;
      local_294 = (pFVar21->Data).ArrayMax;
      (pFVar21->Data).ArrayNum = 0;
      (pFVar21->Data).ArrayMax = 0;
      ::FString::PrintfImpl(&local_290,L"%u");
      local_280 = 0;
      local_278 = 0;
      local_274 = 4;
      pFVar5 = (pFVar21->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar6 = *(code **)param_1;
      plVar18 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar18 = (longlong *)&param_1->field_0x10;
      }
      uVar12 = (**(code **)(*plVar18 + 8))();
      (*pcVar6)(uVar12,&local_2a0);
      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
      }
      if (local_2a0 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0);
      }
      break;
    case 2:
      (**(code **)(pFVar2->_padding_ + 0x188))(pFVar2,local_2f8,8);
      pFVar21 = ::FString::FString(&local_c0,pFVar21);
      if (((pFVar21->Data).ArrayNum < 2) ||
         (iVar10 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(pFVar21->Data).AllocatorInstance.Data,L"EventName"),
         iVar10 == 0)) {
LAB_14313f6f3:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidAttributeName(InName)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                           ,0x78,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        if ((pFVar21->Data).ArrayNum == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
        }
        iVar10 = FGenericPlatformStricmp::Stricmp(pwVar17,L"DateOffset");
        if (iVar10 == 0) goto LAB_14313f6f3;
      }
      local_270 = (pFVar21->Data).AllocatorInstance.Data;
      (pFVar21->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_268 = (pFVar21->Data).ArrayNum;
      local_264 = (pFVar21->Data).ArrayMax;
      (pFVar21->Data).ArrayNum = 0;
      (pFVar21->Data).ArrayMax = 0;
      ::FString::PrintfImpl(&local_260,L"%lld");
      local_250 = 0;
      local_248 = 0;
      local_244 = 4;
      pFVar5 = (pFVar21->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar6 = *(code **)param_1;
      plVar18 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar18 = (longlong *)&param_1->field_0x10;
      }
      uVar12 = (**(code **)(*plVar18 + 8))();
      (*pcVar6)(uVar12,&local_270);
      if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data.AllocatorInstance.Data);
      }
      if (local_270 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270);
      }
      break;
    case 3:
      (**(code **)(pFVar2->_padding_ + 0x188))(pFVar2,local_2f0,8);
      pFVar21 = ::FString::FString(&local_140,pFVar21);
      if (((pFVar21->Data).ArrayNum < 2) ||
         (iVar10 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(pFVar21->Data).AllocatorInstance.Data,L"EventName"),
         iVar10 == 0)) {
LAB_14313f83c:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidAttributeName(InName)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                           ,0x78,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        if ((pFVar21->Data).ArrayNum == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
        }
        iVar10 = FGenericPlatformStricmp::Stricmp(pwVar17,L"DateOffset");
        if (iVar10 == 0) goto LAB_14313f83c;
      }
      local_240 = (pFVar21->Data).AllocatorInstance.Data;
      (pFVar21->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_238 = (pFVar21->Data).ArrayNum;
      local_234 = (pFVar21->Data).ArrayMax;
      (pFVar21->Data).ArrayNum = 0;
      (pFVar21->Data).ArrayMax = 0;
      ::FString::PrintfImpl(&local_230,L"%llu");
      local_220 = 0;
      local_218 = 0;
      local_214 = 4;
      pFVar5 = (pFVar21->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar6 = *(code **)param_1;
      plVar18 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar18 = (longlong *)&param_1->field_0x10;
      }
      uVar12 = (**(code **)(*plVar18 + 8))();
      (*pcVar6)(uVar12,&local_240);
      if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.Data.AllocatorInstance.Data);
      }
      if (local_240 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240);
      }
      break;
    case 4:
      (**(code **)(pFVar2->_padding_ + 0x188))(pFVar2,&local_3cc,4);
      pFVar21 = ::FString::FString(&local_130,pFVar21);
      pFVar11 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<float_&>
                          (&local_b0,pFVar21,&local_3cc);
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar6 = *(code **)param_1;
      plVar18 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar18 = (longlong *)&param_1->field_0x10;
      }
      uVar12 = (**(code **)(*plVar18 + 8))();
      (*pcVar6)(uVar12,pFVar11);
      if (local_b0.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.AttrValueString.Data.AllocatorInstance.Data);
      }
      if (local_b0.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.AttrName.Data.AllocatorInstance.Data);
      }
      break;
    case 5:
      (**(code **)(pFVar2->_padding_ + 0x188))(pFVar2,&local_2e8,8);
      pFVar21 = ::FString::FString(&local_120,pFVar21);
      if (((pFVar21->Data).ArrayNum < 2) ||
         (iVar10 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(pFVar21->Data).AllocatorInstance.Data,L"EventName"),
         iVar10 == 0)) {
LAB_14313fa15:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidAttributeName(InName)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                           ,0x78,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        if ((pFVar21->Data).ArrayNum == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
        }
        iVar10 = FGenericPlatformStricmp::Stricmp(pwVar17,L"DateOffset");
        if (iVar10 == 0) goto LAB_14313fa15;
      }
      local_210 = (pFVar21->Data).AllocatorInstance.Data;
      (pFVar21->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_208 = (pFVar21->Data).ArrayNum;
      local_204 = (pFVar21->Data).ArrayMax;
      (pFVar21->Data).ArrayNum = 0;
      (pFVar21->Data).ArrayMax = 0;
      AnalyticsConversionToString(&local_200,local_2e8);
      local_1f0 = 0;
      local_1e8 = 0;
      local_1e4 = 4;
      pFVar5 = (pFVar21->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar6 = *(code **)param_1;
      plVar18 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar18 = (longlong *)&param_1->field_0x10;
      }
      uVar12 = (**(code **)(*plVar18 + 8))();
      (*pcVar6)(uVar12,&local_210);
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      if (local_210 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210);
      }
      break;
    case 6:
      (**(code **)(pFVar2->_padding_ + 0x188))(pFVar2,&local_3d8,1);
      pFVar21 = ::FString::FString(&local_110,pFVar21);
      if (((pFVar21->Data).ArrayNum < 2) ||
         (iVar10 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(pFVar21->Data).AllocatorInstance.Data,L"EventName"),
         iVar10 == 0)) {
LAB_14313fb59:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidAttributeName(InName)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                           ,0x78,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        if ((pFVar21->Data).ArrayNum == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
        }
        iVar10 = FGenericPlatformStricmp::Stricmp(pwVar17,L"DateOffset");
        if (iVar10 == 0) goto LAB_14313fb59;
      }
      pwVar17 = L"true";
      local_1e0 = (pFVar21->Data).AllocatorInstance.Data;
      (pFVar21->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8 = (pFVar21->Data).ArrayNum;
      local_1d4 = (pFVar21->Data).ArrayMax;
      (pFVar21->Data).ArrayNum = 0;
      (pFVar21->Data).ArrayMax = 0;
      if (local_3d8 == '\0') {
        pwVar17 = L"false";
      }
      ::FString::FString(&local_1d0,pwVar17);
      local_1c0 = 0;
      local_1b8 = 0;
      local_1b4 = 4;
      pFVar5 = (pFVar21->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar6 = *(code **)param_1;
      plVar18 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar18 = (longlong *)&param_1->field_0x10;
      }
      uVar12 = (**(code **)(*plVar18 + 8))();
      (*pcVar6)(uVar12,&local_1e0);
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      if (local_1e0 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0);
      }
      break;
    case 7:
      local_368.Ticks = 0;
      puVar13 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                        *)this_00,pFVar21);
      if (puVar13 != (uint *)0x0) {
        (this->StorageReader)._padding_ = (ulonglong)*puVar13;
        (**(code **)(pFVar2->_padding_ + 0x188))(pFVar2,local_3d7,1);
        if (local_3d7[0] == '\a') {
          (**(code **)(pFVar2->_padding_ + 0x188))(pFVar2,&local_2e0,8);
          local_368.Ticks = local_2e0;
        }
      }
      pFVar14 = FDateTime::ToIso8601(&local_368,&local_180);
      pFVar21 = ::FString::FString(&local_f0,pFVar21);
      if (((pFVar21->Data).ArrayNum < 2) ||
         (iVar10 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(pFVar21->Data).AllocatorInstance.Data,L"EventName"),
         iVar10 == 0)) {
LAB_14313fe7d:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidAttributeName(InName)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                           ,0x78,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        if ((pFVar21->Data).ArrayNum == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
        }
        iVar10 = FGenericPlatformStricmp::Stricmp(pwVar17,L"DateOffset");
        if (iVar10 == 0) goto LAB_14313fe7d;
      }
      local_330 = (pFVar21->Data).AllocatorInstance.Data;
      (pFVar21->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_328 = (pFVar21->Data).ArrayNum;
      local_324 = (pFVar21->Data).ArrayMax;
      (pFVar21->Data).ArrayNum = 0;
      (pFVar21->Data).ArrayMax = 0;
      local_320 = (pFVar14->Data).AllocatorInstance.Data;
      (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_318 = (pFVar14->Data).ArrayNum;
      local_314 = (pFVar14->Data).ArrayMax;
      (pFVar14->Data).ArrayNum = 0;
      (pFVar14->Data).ArrayMax = 0;
      local_310 = 0;
      local_308 = 0;
      local_304 = 0;
      pFVar5 = (pFVar21->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar6 = *(code **)param_1;
      plVar18 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar18 = (longlong *)&param_1->field_0x10;
      }
      uVar12 = (**(code **)(*plVar18 + 8))();
      (*pcVar6)(uVar12,&local_330);
      if (local_320 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320);
      }
      FVar19.Data = local_180.Data.AllocatorInstance.Data;
      if (local_330 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_330);
        FVar19.Data = local_180.Data.AllocatorInstance.Data;
      }
      goto LAB_14313ff47;
    case 8:
      local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3a8.Data.ArrayNum = 0;
      local_3a8.Data.ArrayMax = 0;
      GetStringValueInternal(this,pFVar21,&local_3a8);
      pFVar21 = ::FString::FString(&local_100,pFVar21);
      if (((pFVar21->Data).ArrayNum < 2) ||
         (iVar10 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(pFVar21->Data).AllocatorInstance.Data,L"EventName"),
         iVar10 == 0)) {
LAB_14313fcb8:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidAttributeName(InName)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                           ,0x78,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        if ((pFVar21->Data).ArrayNum == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
        }
        iVar10 = FGenericPlatformStricmp::Stricmp(pwVar17,L"DateOffset");
        if (iVar10 == 0) goto LAB_14313fcb8;
      }
      FVar19.Data = local_3a8.Data.AllocatorInstance.Data;
      local_360 = (pFVar21->Data).AllocatorInstance.Data;
      (pFVar21->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_358 = (pFVar21->Data).ArrayNum;
      local_354 = (pFVar21->Data).ArrayMax;
      (pFVar21->Data).ArrayNum = 0;
      (pFVar21->Data).ArrayMax = 0;
      lVar16 = (longlong)local_3a8.Data.ArrayNum;
      local_350.Data = (FScriptContainerElement *)0x0;
      local_348 = local_3a8.Data.ArrayNum;
      if (local_3a8.Data.ArrayNum == 0) {
        local_344[0] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_3a8.Data.ArrayNum,0,&local_350,local_3a8.Data.ArrayNum,local_344);
        memcpy(local_350.Data,FVar19.Data,lVar16 * 2);
      }
      local_344[1] = 0;
      local_344[2] = 0;
      local_338 = 0;
      local_334 = 0;
      pFVar5 = (pFVar21->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar6 = *(code **)param_1;
      plVar18 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar18 = (longlong *)&param_1->field_0x10;
      }
      uVar12 = (**(code **)(*plVar18 + 8))();
      (*pcVar6)(uVar12,&local_360);
      if (local_350.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_350.Data);
      }
      FVar19.Data = local_3a8.Data.AllocatorInstance.Data;
      if (local_360 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_360);
        FVar19.Data = local_3a8.Data.AllocatorInstance.Data;
      }
LAB_14313ff47:
      if (FVar19.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar19.Data);
      }
    }
    TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
  } while( true );
}

