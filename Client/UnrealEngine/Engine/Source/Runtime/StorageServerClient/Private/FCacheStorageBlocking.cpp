// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 12

// FCacheStorageBlocking @ 148cb3700

FCacheStorageBlocking * __thiscall
StorageServer::FCacheStorageBlocking::FCacheStorageBlocking
          (FCacheStorageBlocking *this,wchar_t *param_1,ulong64 param_2)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar7;
  FCacheStorageBlocking *pFVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *local_res20;
  FScriptContainerElement local_50 [8];
  TArray<TTuple<FString,unsigned___int64>,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined1 *)&this->_padding_ = 0;
  piVar1 = &(this->BackingFiles).ArrayNum;
  uVar18 = 0;
  this->FlushTask = (TTask<void>)0x0;
  piVar2 = &(this->BackingFiles).ArrayMax;
  (this->BackingFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FCacheStorageBlocking_StorageServer__6B_;
  (this->Buffers).Queue1.Operations.AllocatorInstance.SecondaryData =
       (ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp>)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->Buffers).Queue1.Operations.ArrayNum = 0;
  (this->Buffers).Queue1.Operations.ArrayMax = 0x6000;
  (this->Buffers).Queue1.Data.AllocatorInstance.SecondaryData = (ForElementType<unsigned_char>)0x0;
  (this->Buffers).Queue1.Data.ArrayNum = 0;
  (this->Buffers).Queue1.Data.ArrayMax = 0x1000000;
  (this->Buffers).Queue2.Operations.AllocatorInstance.SecondaryData =
       (ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp>)0x0;
  (this->Buffers).Queue2.Operations.ArrayNum = 0;
  (this->Buffers).Queue2.Operations.ArrayMax = 0x6000;
  (this->Buffers).Queue2.Data.AllocatorInstance.SecondaryData = (ForElementType<unsigned_char>)0x0;
  (this->Buffers).Queue2.Data.ArrayNum = 0;
  (this->Buffers).Queue2.Data.ArrayMax = 0x1000000;
  (this->Buffers).Front = &(this->Buffers).Queue1;
  (this->Buffers).Back = &(this->Buffers).Queue2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->FrontLock,4000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->BackLock,4000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->FileWriteLock,4000);
  this_00 = FPlatformFileManager::Get();
  pIVar7 = FPlatformFileManager::GetPlatformFile(this_00);
  ICacheStorage::GetBackingFileNames(&local_48,param_1,param_2);
  iVar6 = local_48.ArrayNum;
  iVar14 = *piVar1;
  if (iVar14 < local_48.ArrayNum) {
    iVar14 = local_48.ArrayNum - iVar14;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar14,&(this->BackingFiles).AllocatorInstance,piVar1,piVar2);
    memset((this->BackingFiles).AllocatorInstance.Data + (longlong)iVar6 * 8,0,(longlong)iVar14 << 3
          );
  }
  else {
    if (local_48.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_48.ArrayNum);
    }
    if (local_48.ArrayNum < iVar14) {
      uVar16 = iVar14 - local_48.ArrayNum;
      if (((int)(local_48.ArrayNum | uVar16) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FCacheStorageBlocking *)(*pcVar4)();
        return pFVar8;
      }
      if (uVar16 != 0) {
        TArray<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(&this->BackingFiles,iVar6,uVar16);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->BackingFiles).AllocatorInstance,*piVar1,piVar2);
      }
    }
  }
  this->FileSize = 0;
  uVar19 = uVar18;
  uVar20 = uVar18;
  if (0 < (this->BackingFiles).ArrayNum) {
    do {
      uVar17 = (uint)uVar18;
      uVar15 = ~uVar17 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar17 < local_48.ArrayNum) {
        uVar16 = uVar15;
      }
      if ((uVar16 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FCacheStorageBlocking *)(*pcVar4)();
        return pFVar8;
      }
      pFVar21 = local_48.AllocatorInstance.Data + uVar19;
      uVar16 = 0;
      if ((int)uVar17 < local_48.ArrayNum) {
        uVar16 = uVar15;
      }
      if ((uVar16 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FCacheStorageBlocking *)(*pcVar4)();
        return pFVar8;
      }
      lVar11 = *(longlong *)(local_48.AllocatorInstance.Data + uVar19 + 0x10);
      if (*(int *)(pFVar21 + 8) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = *(wchar_t **)pFVar21;
      }
      plVar9 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x110))(pIVar7,pwVar13,1);
      if ((plVar9 == (longlong *)0x0) &&
         (local_res20 = pFVar21,
         bVar5 = `StorageServer::FCacheStorageBlocking::FCacheStorageBlocking'::__l5::<lambda_1>::
                 operator()(&local_res20), !bVar5)) break;
      lVar10 = (**(code **)(*plVar9 + 0x50))(plVar9);
      if (lVar10 != lVar11) {
        (**(code **)(*plVar9 + 0x40))(plVar9,lVar11);
        *(undefined1 *)&this->_padding_ = 1;
      }
      lVar11 = (**(code **)(*plVar9 + 0x50))(plVar9);
      this->FileSize = this->FileSize + lVar11;
      uVar16 = 0;
      if ((int)uVar17 < *piVar1) {
        uVar16 = uVar15;
      }
      if ((uVar16 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FCacheStorageBlocking *)(*pcVar4)();
        return pFVar8;
      }
      pFVar21 = (this->BackingFiles).AllocatorInstance.Data + uVar20 * 8;
      if (pFVar21 == local_50) {
        if (plVar9 != (longlong *)0x0) {
          puVar12 = (undefined8 *)*plVar9;
          goto LAB_148cb3a99;
        }
      }
      else {
        plVar3 = *(longlong **)pFVar21;
        *(longlong **)pFVar21 = plVar9;
        if (plVar3 != (longlong *)0x0) {
          puVar12 = (undefined8 *)*plVar3;
          plVar9 = plVar3;
LAB_148cb3a99:
          (*(code *)*puVar12)(plVar9,1);
        }
      }
      uVar18 = (ulonglong)(uVar17 + 1);
      uVar19 = uVar19 + 0x18;
      uVar20 = uVar20 + 1;
    } while ((int)(uVar17 + 1) < (this->BackingFiles).ArrayNum);
  }
  DestructItems<TTuple<FString,unsigned___int64>,int>
            ((TTuple<FString,unsigned___int64> *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((TTuple<FString,unsigned___int64> *)local_48.AllocatorInstance.Data !=
      (TTuple<FString,unsigned___int64> *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return this;
}

// ~FCacheStorageBlocking @ 148cb6070

void __thiscall
StorageServer::FCacheStorageBlocking::~FCacheStorageBlocking(FCacheStorageBlocking *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<unsigned_char> FVar3;
  ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp> FVar4;
  FScriptContainerElement *pFVar5;
  TTask<void> TVar6;
  
  this->_padding_ = (longlong)&___7FCacheStorageBlocking_StorageServer__6B_;
  if (this->FlushTask != (TTask<void>)0x0) {
    UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)this->FlushTask);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FileWriteLock);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->BackLock);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FrontLock);
  FVar3 = (this->Buffers).Queue2.Data.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar4 = (this->Buffers).Queue2.Operations.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar3 = (this->Buffers).Queue1.Data.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar4 = (this->Buffers).Queue1.Operations.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  DestructItems<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,int>
            ((TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_> *)
             (this->BackingFiles).AllocatorInstance.Data,(this->BackingFiles).ArrayNum);
  pFVar5 = (this->BackingFiles).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  TVar6 = this->FlushTask;
  if (TVar6 != (TTask<void>)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)TVar6 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000148cb613b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)TVar6)(TVar6,1);
      return;
    }
  }
  return;
}

// operator() @ 148cb7fa0

void __thiscall
`StorageServer::FCacheStorageBlocking::Flush'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp> FVar2;
  ushort uVar3;
  ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp> FVar4;
  ulong64 *puVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar6;
  undefined1 local_res8 [8];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x2120078);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  FVar2 = *(ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp> *)
           (*(longlong *)this + 0x2120068);
  iVar1 = *(int *)((longlong)FVar2 + 0x90008);
  FVar4 = *(ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp> *)
           ((longlong)FVar2 + 0x90000);
  if (*(ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp> *)((longlong)FVar2 + 0x90000)
      == (ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp>)0x0) {
    FVar4 = FVar2;
  }
  puVar5 = (ulong64 *)((longlong)FVar4 + 8);
  while( true ) {
    if (*(int *)((longlong)FVar2 + 0x90008) != iVar1) {
      `TCheckedPointerIterator<StorageServer::FCacheStorageBlocking::FWriteOp,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar5 + -1 == (ulong64 *)((longlong)FVar4 + (longlong)iVar1 * 0x18)) break;
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId146,"FCacheStorageBlocking::Flush::Write",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheStorageBlocking.cpp"
                 ,0x92);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId146);
    }
    StorageServer::FCacheStorageBlocking::BackingWriteAt
              (*(FCacheStorageBlocking **)this,puVar5[-1],(void *)puVar5[1],*puVar5);
    if ((*puVar5 != 0) &&
       (__GTraceCounterFrontBuffer.Value = __GTraceCounterFrontBuffer.Value - *puVar5,
       -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterFrontBuffer.CounterId == (atomic<unsigned_int>)0x0) {
        uVar3 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterFrontBuffer.CounterName,TraceCounterType_Int,
                           __GTraceCounterFrontBuffer.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterFrontBuffer.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterFrontBuffer.CounterId._2_2_ = 0;
          __GTraceCounterFrontBuffer.CounterId._0_2_ = uVar3;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterFrontBuffer.CounterId._0_2_,__GTraceCounterFrontBuffer.Value);
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    puVar5 = puVar5 + 3;
  }
  *(undefined4 *)((longlong)FVar2 + 0x90008) = 0;
  if (*(int *)((longlong)FVar2 + 0x9000c) != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<24576,32,TSizedDefaultAllocator<32>_>::ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp>_>
              (0x18,8,0,(ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp> *)FVar2,0,
               (int *)((longlong)FVar2 + 0x9000c));
  }
  *(undefined4 *)((longlong)FVar2 + 0x1090018) = 0;
  if (*(int *)((longlong)FVar2 + 0x109001c) != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16777216,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
              (1,1,0,(ForElementType<unsigned_char> *)((longlong)FVar2 + 0x90010),0,
               (int *)((longlong)FVar2 + 0x109001c));
  }
                    /* WARNING: Could not recover jumptable at 0x000148cb8185. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// BackingReadAt @ 148cbcae0

void __thiscall
StorageServer::FCacheStorageBlocking::BackingReadAt
          (FCacheStorageBlocking *this,ulong64 param_1,void *param_2,ulong64 param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong64 uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar8 = (param_1 - 1) + param_3 >> 0x1f;
  uVar9 = (uint)(param_1 >> 0x1f);
  uVar7 = (uint)uVar8;
  if (uVar9 + 1 < uVar7) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8566135052931432368>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheStorage.h"
                       ,0x50,"IndexA + 1 >= IndexB");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    lVar6 = 0;
    if (uVar9 != uVar7) {
      uVar5 = (uVar8 & 0xffffffff) * 0x80000000 - param_1;
      lVar6 = param_3 - uVar5;
      param_3 = uVar5;
    }
    if (param_3 != 0) {
      uVar4 = 0;
      if ((int)uVar9 < (this->BackingFiles).ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)
                ((this->BackingFiles).AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
      (**(code **)(*plVar1 + 0x28))
                (plVar1,param_2,param_3,param_1 + (param_1 >> 0x1f & 0xffffffff) * -0x80000000);
    }
    if (lVar6 != 0) {
      uVar9 = 0;
      if ((int)uVar7 < (this->BackingFiles).ArrayNum) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)
                ((this->BackingFiles).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
      (**(code **)(*plVar1 + 0x28))(plVar1,param_3 + (longlong)param_2,lVar6,0);
    }
  }
  return;
}

// BackingWriteAt @ 148cbcc80

void __thiscall
StorageServer::FCacheStorageBlocking::BackingWriteAt
          (FCacheStorageBlocking *this,ulong64 param_1,void *param_2,ulong64 param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulong64 uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar9 = (param_1 - 1) + param_3 >> 0x1f;
  uVar5 = (uint)(param_1 >> 0x1f);
  uVar8 = (uint)uVar9;
  if (uVar5 + 1 < uVar8) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8566135052931432368>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheStorage.h"
                       ,0x50,"IndexA + 1 >= IndexB");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    lVar7 = 0;
    if (uVar5 != uVar8) {
      uVar6 = (uVar9 & 0xffffffff) * 0x80000000 - param_1;
      lVar7 = param_3 - uVar6;
      param_3 = uVar6;
    }
    lpCriticalSection = &this->FileWriteLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (param_3 != 0) {
      uVar4 = 0;
      if ((int)uVar5 < (this->BackingFiles).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)
                ((this->BackingFiles).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + (param_1 >> 0x1f & 0xffffffff) * -0x80000000);
      uVar4 = 0;
      if ((int)uVar5 < (this->BackingFiles).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)
                ((this->BackingFiles).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
      (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
    }
    if (lVar7 != 0) {
      uVar5 = 0;
      if ((int)uVar8 < (this->BackingFiles).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)
                ((this->BackingFiles).AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
      uVar5 = 0;
      if ((int)uVar8 < (this->BackingFiles).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)
                ((this->BackingFiles).AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
      (**(code **)(*plVar1 + 0x30))(plVar1,(longlong)param_2 + param_3,lVar7);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// Flush @ 148cc5590

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
StorageServer::FCacheStorageBlocking::Flush(FCacheStorageBlocking *this,bool param_1)

{
  TTask<void> *pTVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar3;
  FWriteQueue *pFVar4;
  TTask<void> TVar5;
  uint uVar6;
  ushort uVar7;
  TTask<void> this_00;
  undefined8 *puVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  TTask<void> local_18 [2];
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId111,"FCacheStorageBlocking::Flush",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheStorageBlocking.cpp"
               ,0x6f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId111);
  }
  lpCriticalSection = &this->BackLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->FlushTask;
  if ((this->FlushTask != (TTask<void>)0x0) && (*(char *)((longlong)this->FlushTask + 0xd0) == '\0')
     ) {
    if (param_1) goto LAB_148cc5875;
    bVar11 = -1 < CpuChannel->Enabled;
    if (bVar11) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId123,"FCacheStorageBlocking::Flush::FlushTaskWait",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheStorageBlocking.cpp"
                 ,0x7b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId123);
    }
    if (*pTVar1 != (TTask<void>)0x0) {
      UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)*pTVar1);
    }
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if ((((this->Buffers).Back)->Data).ArrayNum == 0) goto LAB_148cc5875;
  pFVar4 = (this->Buffers).Front;
  lVar9 = 0x1090048;
  if ((FDoubleBuffer *)pFVar4 != &this->Buffers) {
    lVar9 = 0x28;
  }
  (this->Buffers).Front =
       (FWriteQueue *)
       ((this->Buffers).Queue1.Operations.AllocatorInstance.InlineData + lVar9 + -0x28);
  uVar6 = 0x28;
  if ((FDoubleBuffer *)pFVar4 != &this->Buffers) {
    uVar6 = 0x1090048;
  }
  (this->Buffers).Back =
       (FWriteQueue *)
       ((this->Buffers).Queue1.Operations.AllocatorInstance.InlineData + ((ulonglong)uVar6 - 0x28));
  lVar9 = (longlong)(((this->Buffers).Front)->Data).ArrayNum;
  if ((__GTraceCounterFrontBuffer.Value != lVar9) &&
     (__GTraceCounterFrontBuffer.Value = lVar9, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterFrontBuffer.CounterId == (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterFrontBuffer.CounterName,TraceCounterType_Int,
                         __GTraceCounterFrontBuffer.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterFrontBuffer.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterFrontBuffer.CounterId._2_2_ = 0;
        __GTraceCounterFrontBuffer.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterFrontBuffer.CounterId._0_2_,__GTraceCounterFrontBuffer.Value);
  }
  lVar9 = (longlong)(((this->Buffers).Back)->Data).ArrayNum;
  if ((__GTraceCounterBackBuffer.Value != lVar9) &&
     (__GTraceCounterBackBuffer.Value = lVar9, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterBackBuffer.CounterId == (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterBackBuffer.CounterName,TraceCounterType_Int,
                         __GTraceCounterBackBuffer.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterBackBuffer.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterBackBuffer.CounterId._2_2_ = 0;
        __GTraceCounterBackBuffer.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterBackBuffer.CounterId._0_2_,__GTraceCounterBackBuffer.Value);
  }
  this_00 = (TTask<void>)
            TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this_00 == (TTask<void>)0x0) {
    this_00 = (TTask<void>)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)this_00,2,true);
    *(undefined ***)this_00 =
         &UE::Tasks::Private::
          TExecutableTaskBase<`StorageServer::FCacheStorageBlocking::Flush'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              ((FTaskBase *)this_00,L"CacheStorageFlush",BackgroundNormal,None,None);
    ((FTaskBase *)((longlong)this_00 + 0xd8))->_padding_ = (longlong)this;
    *(undefined ***)this_00 =
         &UE::Tasks::Private::
          TExecutableTask<`StorageServer::FCacheStorageBlocking::Flush'::`2'::<lambda_1>_>::
          _vftable_;
  }
  UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0x100);
  if (pTVar1 == local_18) {
    if (this_00 == (TTask<void>)0x0) goto LAB_148cc5875;
    LOCK();
    piVar2 = (int *)((longlong)this_00 + 0x30);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) goto LAB_148cc5875;
    puVar8 = *(undefined8 **)this_00;
  }
  else {
    TVar5 = *pTVar1;
    *pTVar1 = this_00;
    if (TVar5 == (TTask<void>)0x0) goto LAB_148cc5875;
    LOCK();
    piVar2 = (int *)((longlong)TVar5 + 0x30);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) goto LAB_148cc5875;
    puVar8 = *(undefined8 **)TVar5;
    this_00 = TVar5;
  }
  (*(code *)*puVar8)(this_00,1);
LAB_148cc5875:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Flush @ 148cc58b0

void __thiscall StorageServer::FCacheStorageBlocking::Flush(FCacheStorageBlocking *this)

{
  Flush(this,true);
  return;
}

// GetSize @ 148cc7f90

ulong64 __thiscall StorageServer::FCacheStorageBlocking::GetSize(FCacheStorageBlocking *this)

{
  return this->FileSize;
}

// Invalidate @ 148ccbbd0

void __thiscall
StorageServer::FCacheStorageBlocking::Invalidate
          (FCacheStorageBlocking *this,ulong64 param_1,ulong64 param_2)

{
  return;
}

// Read @ 148cd3480

FIoBuffer __thiscall
StorageServer::FCacheStorageBlocking::Read
          (FCacheStorageBlocking *this,ulong64 param_1,ulong64 param_2,TOptional<FIoBuffer> *param_3
          )

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  BufCore *this_00;
  FIoBuffer *pFVar4;
  FIoBuffer this_01;
  FIoBuffer local_res10;
  longlong *in_stack_00000028;
  
  if (((char)in_stack_00000028[1] == '\0') ||
     ((TOptional<FIoBuffer> *)
      (ulonglong)
      CONCAT14(*(undefined1 *)(*in_stack_00000028 + 0x18),*(undefined4 *)(*in_stack_00000028 + 8)) <
      param_3)) {
    pFVar4 = FIoBuffer::FIoBuffer(&local_res10,(ulong64)param_3);
    *(undefined8 *)param_1 = 0;
    *(BufCore **)param_1 = (pFVar4->CorePtr).Reference;
    (pFVar4->CorePtr).Reference = (BufCore *)0x0;
    this_01.CorePtr.Reference = local_res10.CorePtr.Reference;
  }
  else {
    lVar3 = *in_stack_00000028;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
      UNLOCK();
    }
    *(longlong *)param_1 = lVar3;
    this_01.CorePtr.Reference =
         (TRefCountPtr<FIoBuffer::BufCore>)(TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
  }
  if (this_01.CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)this_01.CorePtr.Reference);
    LOCK();
    piVar1 = &((BufCore *)this_01.CorePtr.Reference)->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)this_01.CorePtr.Reference);
      ::operator_delete((void *)this_01.CorePtr.Reference,0x20);
    }
  }
  FIoBuffer::BufCore::SetSize(*(BufCore **)param_1,(ulong64)param_3);
  BackingReadAt(this,param_2,(void *)**(undefined8 **)param_1,(ulong64)param_3);
  if (((char)in_stack_00000028[1] != '\0') &&
     (this_00 = (BufCore *)*in_stack_00000028, this_00 != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
    }
  }
  return (FIoBuffer)(TRefCountPtr<FIoBuffer::BufCore>)param_1;
}

// WriteAsync @ 148ce3d10

void __thiscall
StorageServer::FCacheStorageBlocking::WriteAsync
          (FCacheStorageBlocking *this,ulong64 param_1,void *param_2,ulong64 param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId76,"FCacheStorageBlocking::WriteAsync",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheStorageBlocking.cpp"
               ,0x4c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId76);
  }
  iVar1 = CpuChannel->Enabled;
  if (param_3 < 0x800000) {
    if (iVar1 >= 0) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId86,"FCacheStorageBlocking::WriteAsync::Write",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheStorageBlocking.cpp"
                 ,0x56);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId86);
    }
    lpCriticalSection = &this->BackLock;
    while( true ) {
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      bVar2 = FWriteQueue::Write((this->Buffers).Back,param_1,param_2,param_3);
      if (bVar2) break;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      Flush(this,false);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (iVar1 < 0) goto LAB_148ce3e7b;
  }
  else {
    if (iVar1 < 0) {
      BackingWriteAt(this,param_1,param_2,param_3);
      goto LAB_148ce3e7b;
    }
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId81,"FCacheStorageBlocking::WriteAsync::SyncWrite",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheStorageBlocking.cpp"
               ,0x51);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId81);
    BackingWriteAt(this,param_1,param_2,param_3);
  }
  FCpuProfilerTrace::OutputEndEvent();
LAB_148ce3e7b:
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 1505397e0

bool __thiscall
`StorageServer::FCacheStorageBlocking::FCacheStorageBlocking'::__l5::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4297181789727752224>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<4297181789727752224>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

