// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// ExecuteTask @ 1498025d0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FPCGComputeGraphElement::ExecuteInternal'::__l150::<lambda_2>,void,void>::
ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  `FPCGComputeGraphElement::ExecuteInternal'::__l150::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  plVar3 = *(longlong **)((longlong)this + 0xe0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014980260d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ExecuteTask @ 149802620

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FPCGComputeGraphElement::ExecuteInternal'::__l204::<lambda_4>,void,void>::
ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  `FPCGComputeGraphElement::ExecuteInternal'::__l204::<lambda_4>::operator()
            ((void *)((longlong)this + 0xd8));
  plVar3 = *(longlong **)((longlong)this + 0xe0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014980265d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ExecuteTask @ 149cc4c60

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FPCGGraphExecutor::ExecuteScheduling'::__l110::<lambda_2>,bool,void>::
ExecuteTask(void *this)

{
  bool bVar1;
  
  bVar1 = `FPCGGraphExecutor::ExecuteScheduling'::__l110::<lambda_2>::operator()
                    ((void *)((longlong)this + 0xe0));
  *(bool *)((longlong)this + 0xd8) = bVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xf0));
  return;
}

// ExecuteTask @ 149d49ac0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FPCGAsync::PrivateAsyncPointProcessing'::__l15::<lambda_1>,int,void>::
ExecuteTask(void *this)

{
  int iVar1;
  
  iVar1 = `FPCGAsync::PrivateAsyncPointProcessing'::__l15::<lambda_1>::operator()
                    ((void *)((longlong)this + 0xe0));
  *(int *)((longlong)this + 0xd8) = iVar1;
  return;
}

// ExecuteTask @ 149d49af0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FPCGAsync::PrivateAsyncMultiPointProcessing'::__l14::<lambda_2>,TArray<FPCGPoint,TSizedDefaultAllocator<32>_>,void>
::ExecuteTask(void *this)

{
  `FPCGAsync::PrivateAsyncMultiPointProcessing'::__l14::<lambda_2>::operator()
            ((void *)((longlong)this + 0xe8),
             (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 149d49b10

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FPCGAsync::PrivateAsyncPointFilterProcessing'::__l15::<lambda_2>,TTuple<int,int>,void>
::ExecuteTask(void *this)

{
  `FPCGAsync::PrivateAsyncPointFilterProcessing'::__l15::<lambda_2>::operator()
            ((void *)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 149d49b30

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FPCGAsync::Private::AsyncProcessing'::__l55::<lambda_4>,void,void>::ExecuteTask
          (void *this)

{
  `FPCGAsync::Private::AsyncProcessing'::__l55::<lambda_4>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

