// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// ExecuteTask @ 145aa7670

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``FD3D12TransientResourceHeapAllocator::CreateBuffer'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,FRHITransientResource::FResourceTaskResult,void>
::ExecuteTask(void *this)

{
  ``FD3D12TransientResourceHeapAllocator::CreateBuffer'::__l2::<lambda_1>::operator()'::__l2::
  <lambda_1>::operator()
            ((void *)((longlong)this + 0xe8),(FResourceTaskResult *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 145aa7690

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``FD3D12TransientResourceHeapAllocator::CreateTexture'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,FRHITransientResource::FResourceTaskResult,void>
::ExecuteTask(void *this)

{
  ``FD3D12TransientResourceHeapAllocator::CreateTexture'::__l2::<lambda_1>::operator()'::__l2::
  <lambda_1>::operator()
            ((void *)((longlong)this + 0xe8),(FResourceTaskResult *)((longlong)this + 0xd8));
  if (*(void **)((longlong)this + 0x1a0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x1a0));
    return;
  }
  return;
}

