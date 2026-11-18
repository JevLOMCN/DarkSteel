// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 77

// Destruct @ 1416347b0

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TUniquePtr<IAsyncReadFileHandle,TDefaultDelete<IAsyncReadFileHandle>_>,FFileSystemError>::FEmptyType>
::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1416347c0

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FEmptyType>
::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1416347d0

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FEmptyType>
::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1416347e0

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TUniquePtr<IAsyncReadFileHandle,TDefaultDelete<IAsyncReadFileHandle>_>,FFileSystemError>::FWrapErrorType>
::Destruct(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct @ 141634800

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType>
::Destruct(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct @ 141634820

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType>
::Destruct(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct @ 141634840

void __cdecl
UE::Core::Private::
TDestructorCaller<TUniquePtr<IAsyncReadFileHandle,TDefaultDelete<IAsyncReadFileHandle>_>_>::Destruct
          (void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141634850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// Destruct @ 141634860

void __cdecl
UE::Core::Private::TDestructorCaller<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>_>::
Destruct(void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141634870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// Destruct @ 141634880

void __cdecl
UE::Core::Private::
TDestructorCaller<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>_>::Destruct
          (void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141634890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// Destruct @ 141751410

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
::Destruct(void *param_1)

{
  return;
}

// Destruct @ 141751420

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType>
::Destruct(void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014175142b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 141751440

void __cdecl
UE::Core::Private::TDestructorCaller<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>_>
::Destruct(void *param_1)

{
  DestructItems<TExpressionToken<wchar_t>,int>
            (*(TExpressionToken<wchar_t> **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 1417c3e30

void __cdecl UE::Core::Private::TDestructorCaller<double>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1417c3e40

void __cdecl UE::Core::Private::TDestructorCaller<FNumericUnit<double>_>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1417c3e50

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<double,FExpressionError>::FEmptyType>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 1417c3e60

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<FNumericUnit<double>,FExpressionError>::FEmptyType>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 1417c3e70

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<FNumericUnit<double>,FText>::FEmptyType>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 1417c3e80

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1417c3e90

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<FExpressionNode,FExpressionError>::FEmptyType>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 1417c3ea0

void __cdecl UE::Core::Private::TDestructorCaller<FEmptyVariantState>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1417c3eb0

void __cdecl
UE::Core::Private::TDestructorCaller<FIoStoreTocResourceStorage::FMappedFile>::Destruct
          (void *param_1)

{
  undefined8 *puVar1;
  TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
  *pTVar2;
  TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> *pTVar3;
  
  pTVar2 = *(TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
             **)((longlong)param_1 + 0x108);
  if (*(TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
        **)((longlong)param_1 + 0x108) ==
      (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
       *)0x0) {
    pTVar2 = (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
              *)((longlong)param_1 + 0x68);
  }
  DestructItems<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>,int>
            (pTVar2,*(int *)((longlong)param_1 + 0x110));
  if (*(void **)((longlong)param_1 + 0x108) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x108));
  }
  pTVar3 = *(TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> **)
            ((longlong)param_1 + 0x58);
  if (*(TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> **)
       ((longlong)param_1 + 0x58) ==
      (TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> *)0x0) {
    pTVar3 = (TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> *)
             ((longlong)param_1 + 8);
  }
  DestructItems<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>,int>
            (pTVar3,*(int *)((longlong)param_1 + 0x60));
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

// Destruct @ 1417c3ec0

void __cdecl
UE::Core::Private::TDestructorCaller<FIoStoreTocResourceStorage::FReadBlocks>::Destruct
          (void *param_1)

{
  undefined8 *puVar1;
  TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
  *pTVar2;
  
  pTVar2 = *(TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
             **)((longlong)param_1 + 0xa8);
  if (*(TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
        **)((longlong)param_1 + 0xa8) ==
      (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
       *)0x0) {
    pTVar2 = (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
              *)((longlong)param_1 + 8);
  }
  DestructItems<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>,int>
            (pTVar2,*(int *)((longlong)param_1 + 0xb0));
  if (*(void **)((longlong)param_1 + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa8));
  }
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

// Destruct @ 1417c3f20

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<double,FExpressionError>::FWrapErrorType>::
Destruct(void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001417c3f2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1417c3f40

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<FNumericUnit<double>,FExpressionError>::FWrapErrorType>::Destruct
          (void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001417c3f4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1417c3f60

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<FNumericUnit<double>,FText>::FWrapErrorType>::
Destruct(void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001417c3f6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1417c3f80

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType>
::Destruct(void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001417c3f8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1417c3fa0

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType>::Destruct
          (void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001417c3fab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1417c3fc0

void __cdecl
UE::Core::Private::TDestructorCaller<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>_>::
Destruct(void *param_1)

{
  DestructItems<TCompiledToken<wchar_t>,int>
            (*(TCompiledToken<wchar_t> **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 1417c4000

void __cdecl UE::Core::Private::TDestructorCaller<FExpressionNode>::Destruct(void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
  if (((*(int *)((longlong)param_1 + 0xc) == 0 && *(int *)((longlong)param_1 + 8) == 0) &&
      *(int *)((longlong)param_1 + 4) == 0) && *(int *)param_1 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418beb42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,0);
    return;
  }
  return;
}

// Destruct @ 1418d6c70

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<FFrameRate,FExpressionError>::FEmptyType>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 1418d6c80

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1418d6c90

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TArray<TCompiledToken<char8_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1418d6ca0

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TArray<TExpressionToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1418d6cb0

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TArray<TExpressionToken<char8_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1418d6cc0

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<bool,FExpressionError>::FEmptyType>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 1418d6cd0

void __cdecl UE::Core::Private::TDestructorCaller<FFrameRate>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1418d6ce0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Private::FOutputDeviceLine>::Destruct(void *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  FLowLevelMemTracker *this;
  int *piVar4;
  
  lVar3 = *(longlong *)((longlong)param_1 + 8);
  if (lVar3 == 0) {
    return;
  }
  if (lVar3 != 0) {
    puVar1 = (uint *)(lVar3 + -8);
    MemoryTrace_Free((ulong64)puVar1,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,puVar1,FMalloc,true);
    }
    piVar4 = (int *)((longlong)puVar1 - (ulonglong)*puVar1);
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar4,0,0);
                    /* WARNING: Could not recover jumptable at 0x0001418db87d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar4);
      return;
    }
  }
  return;
}

// Destruct @ 1418d6d00

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<FFrameRate,FExpressionError>::FWrapErrorType>::
Destruct(void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418d6d0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1418d6d20

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType>
::Destruct(void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418d6d2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1418d6d40

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TArray<TCompiledToken<char8_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType>
::Destruct(void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418d6d4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1418d6d60

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TArray<TExpressionToken<char>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType>
::Destruct(void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418d6d6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1418d6d80

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TArray<TExpressionToken<char8_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType>
::Destruct(void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418d6d8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1418d6da0

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<bool,FExpressionError>::FWrapErrorType>::Destruct
          (void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418d6dab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1418d6dc0

void __cdecl
UE::Core::Private::
TDestructorCaller<TArray<unsigned_char,TSizedInlineAllocator<1024,64,TSizedDefaultAllocator<64>_>_>_>
::Destruct(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x400);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct @ 1418d6de0

void __cdecl
UE::Core::Private::TDestructorCaller<TArray<TCompiledToken<char>,TSizedDefaultAllocator<32>_>_>::
Destruct(void *param_1)

{
  DestructItems<TCompiledToken<char>,int>
            (*(TCompiledToken<char> **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 1418d6e20

void __cdecl
UE::Core::Private::TDestructorCaller<TArray<TCompiledToken<char8_t>,TSizedDefaultAllocator<32>_>_>::
Destruct(void *param_1)

{
  DestructItems<TCompiledToken<char8_t>,int>
            (*(TCompiledToken<char8_t> **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 1418d6e60

void __cdecl
UE::Core::Private::TDestructorCaller<TArray<TExpressionToken<char>,TSizedDefaultAllocator<32>_>_>::
Destruct(void *param_1)

{
  DestructItems<TExpressionToken<char>,int>
            (*(TExpressionToken<char> **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 1418d6ea0

void __cdecl
UE::Core::Private::TDestructorCaller<TArray<TExpressionToken<char8_t>,TSizedDefaultAllocator<32>_>_>
::Destruct(void *param_1)

{
  DestructItems<TExpressionToken<char8_t>,int>
            (*(TExpressionToken<char8_t> **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 1418d6ee0

void __cdecl UE::Core::Private::TDestructorCaller<TCbWriter<1024>_>::Destruct(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 1418d6ef0

void __cdecl
UE::Core::Private::TDestructorCaller<TStringBuilderWithBuffer<char8_t,1024>_>::Destruct
          (void *param_1)

{
  if (*(char *)((longlong)param_1 + 0x18) != '\0') {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 1418d6f00

void __cdecl
UE::Core::Private::TDestructorCaller<TStringBuilderWithBuffer<wchar_t,512>_>::Destruct
          (void *param_1)

{
  if (*(char *)((longlong)param_1 + 0x18) != '\0') {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 1418d6f10

void __cdecl UE::Core::Private::TDestructorCaller<UE::FLogRecord>::Destruct(void *param_1)

{
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)((longlong)param_1 + 0x38));
  return;
}

// Destruct @ 1418d6f20

void __cdecl UE::Core::Private::TDestructorCaller<unsigned___int64>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1418d6f30

void __cdecl UE::Core::Private::TDestructorCaller<bool>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 141934790

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<FAnsiString,FExpressionError>::FEmptyType>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 1419347a0

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<FString,FExpressionError>::FEmptyType>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 1419347b0

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<FUtf8String,FExpressionError>::FEmptyType>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 1419347c0

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<FAnsiString,FExpressionError>::FWrapErrorType>::
Destruct(void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001419347cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1419347e0

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<FString,FExpressionError>::FWrapErrorType>::
Destruct(void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001419347eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 141934800

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<FUtf8String,FExpressionError>::FWrapErrorType>::
Destruct(void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014193480b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 141934820

void __cdecl UE::Core::Private::TDestructorCaller<FAnsiString>::Destruct(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct @ 141934840

void __cdecl UE::Core::Private::TDestructorCaller<FString>::Destruct(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct @ 141934860

void __cdecl UE::Core::Private::TDestructorCaller<FUtf8String>::Destruct(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct @ 1419ed330

void __cdecl UE::Core::Private::TDestructorCaller<std::nullptr_t>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1419ed340

void __cdecl
UE::Core::Private::TDestructorCaller<FCbAttachment::FBinaryValue>::Destruct(void *param_1)

{
  FSharedBuffer *pFVar1;
  
  pFVar1 = param_1;
  if (*(FSharedBuffer **)((longlong)param_1 + 8) != (FSharedBuffer *)0x0) {
    pFVar1 = *(FSharedBuffer **)((longlong)param_1 + 8);
  }
  DestructItems<FSharedBuffer,int>(pFVar1,*(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Destruct @ 1419ed350

void __cdecl
UE::Core::Private::TDestructorCaller<FCbAttachment::FCompressedBinaryValue>::Destruct(void *param_1)

{
  FSharedBuffer *pFVar1;
  
  pFVar1 = param_1;
  if (*(FSharedBuffer **)((longlong)param_1 + 8) != (FSharedBuffer *)0x0) {
    pFVar1 = *(FSharedBuffer **)((longlong)param_1 + 8);
  }
  DestructItems<FSharedBuffer,int>(pFVar1,*(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Destruct @ 1419ed360

void __cdecl
UE::Core::Private::TDestructorCaller<FCbAttachment::FObjectValue>::Destruct(void *param_1)

{
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)((longlong)param_1 + 0x10));
  return;
}

// Destruct @ 141cfbf10

void __cdecl UE::Core::Private::TDestructorCaller<int>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 141cfbf20

void __cdecl UE::Core::Private::TDestructorCaller<float>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 141cfbf30

void __cdecl
UE::Core::Private::
TDestructorCaller<`FTVariantEmplaceNonMoveNonCopyTest::TestBody'::__l2::FNonMoveNonCopy>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 141cfbf40

void __cdecl UE::Core::Private::TDestructorCaller<TSharedPtr<int,1>_>::Destruct(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 141cfbf50

void __cdecl
UE::Core::Private::
TDestructorCaller<TSharedPtr<`FTVariantDestructorTest::TestBody'::__l2::FTestItem,1>_>::Destruct
          (void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 141cfbf60

void __cdecl
UE::Core::Private::TDestructorCaller<TUniquePtr<int,TDefaultDelete<int>_>_>::Destruct(void *param_1)

{
  ::operator_delete(*(void **)param_1,4);
  return;
}

// Destruct @ 141cfbf80

void __cdecl
UE::Core::Private::
TDestructorCaller<TUniquePtr<`FTVariantDestructorTest::TestBody'::__l2::FTestItem,TDefaultDelete<`FTVariantDestructorTest::TestBody'::__l2::FTestItem>_>_>
::Destruct(void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
    *(int *)*puVar1 = *(int *)*puVar1 + 1;
    ::operator_delete(puVar1,8);
    return;
  }
  return;
}

// Destruct @ 141d78dc0

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue,`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestError>::FEmptyType>
::Destruct(void *param_1)

{
  return;
}

// Destruct @ 141d78dd0

void __cdecl
UE::Core::Private::TDestructorCaller<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue>::
Destruct(void *param_1)

{
  ValueCount = ValueCount + -1;
  return;
}

// Destruct @ 141d78de0

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue,`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestError>::FWrapErrorType>
::Destruct(void *param_1)

{
  ErrorCount = ErrorCount + -1;
  return;
}

