// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 5

// ExecuteTask @ 1432d04f0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``BuildPatchServices::FChunkDbChunkSource::CreateRequest'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  ``BuildPatchServices::FChunkDbChunkSource::CreateRequest'::__l2::<lambda_2>::operator()'::__l2::
  <lambda_1>::operator()((void *)((longlong)this + 0xd8));
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)((longlong)this + 0x168));
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0xe8));
  return;
}

// ExecuteTask @ 1432d0530

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``BuildPatchServices::FInstallChunkSource::CreateRequest'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  ``BuildPatchServices::FInstallChunkSource::CreateRequest'::__l2::<lambda_2>::operator()'::__l2::
  <lambda_1>::operator()((void *)((longlong)this + 0xd8));
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x108));
  return;
}

// ExecuteTask @ 1432d0560

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`BuildPatchServices::FDownloadServiceImpl::MakeFileLoadTask'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  `BuildPatchServices::FDownloadServiceImpl::MakeFileLoadTask'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  if (*(void **)((longlong)this + 0xf8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xf8));
  }
  plVar3 = *(longlong **)((longlong)this + 0xe8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001432d05ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ExecuteTask @ 1432d05c0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`BuildPatchServices::FOptimisedDelta::OnDownloadComplete'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `BuildPatchServices::FOptimisedDelta::OnDownloadComplete'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xf0));
  return;
}

// ExecuteTask @ 1432d05f0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`BuildPatchServices::FConstructorCloudChunkSource::Tick'::__l74::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `BuildPatchServices::FConstructorCloudChunkSource::Tick'::__l74::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)((longlong)this + 0x138));
  return;
}

