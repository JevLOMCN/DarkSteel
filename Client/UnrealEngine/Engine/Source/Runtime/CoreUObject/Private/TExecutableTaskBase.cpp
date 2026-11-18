// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// ExecuteTask @ 14203eb20

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::Wait<TArray<UE::Tasks::TTask<void>,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 14203eb30

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::GC::FRealtimeGC::BeginInitialReferenceCollection'::__l5::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  UGCObjectReferencer::AddInitialReferences
            (FGCObject::GGCObjectReferencer,
             (TArray<UObject_*_*,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)((longlong)this + 0xd8) + 0x50));
  return;
}

// ExecuteTask @ 14203eb50

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<`UE::GC::ProcessAsync'::__l8::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  FWorkerContext *pFVar1;
  
  pFVar1 = GC::FWorkCoordinator::TryStartWorking
                     (*(FWorkCoordinator **)((longlong)this + 0xd8),*(int *)((longlong)this + 0xe8))
  ;
  if (pFVar1 != (FWorkerContext *)0x0) {
    (**(code **)((longlong)this + 0xf0))(*(undefined8 *)((longlong)this + 0xf8),pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14220ab40

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::SavePackageUtilities::AsyncWriteFile'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  void *pvVar1;
  
  `UE::SavePackageUtilities::AsyncWriteFile'::__l2::<lambda_1>::operator()
            ((undefined8 *)((longlong)this + 0xd8));
  if (*(void **)((longlong)this + 0x100) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x100));
  }
  if (*(void **)((longlong)this + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe8));
  }
  pvVar1 = *(void **)((longlong)this + 0xd8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// ExecuteTask @ 1423227c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FEventLoadNode2::Fire'::__l19::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  FGCCSyncObject *pFVar1;
  
  FEventLoadNode2::ParallelLoadingWork(*(FEventLoadNode2 **)((longlong)this + 0xd8));
  pFVar1 = FGCCSyncObject::Get();
  LOCK();
  (pFVar1->AsyncCounter).Counter = (pFVar1->AsyncCounter).Counter + -1;
  UNLOCK();
  return;
}

