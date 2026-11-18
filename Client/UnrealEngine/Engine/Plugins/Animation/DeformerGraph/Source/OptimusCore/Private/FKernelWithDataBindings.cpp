// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 2

// FKernelWithDataBindings @ 14e14f930

FKernelWithDataBindings * __thiscall
`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l505::FKernelWithDataBindings::
FKernelWithDataBindings(void *this,FKernelWithDataBindings *param_1)

{
  *(UComputeKernel **)this = param_1->Kernel;
  TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
  ::
  TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
            ((TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
              *)((longlong)this + 8),&param_1->InputDataBindings);
  TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
  ::
  TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
            ((TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
              *)((longlong)this + 0x58),&param_1->OutputDataBindings);
  return this;
}

// ~FKernelWithDataBindings @ 14e161090

void __thiscall
`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l505::FKernelWithDataBindings::
~FKernelWithDataBindings(void *this)

{
  *(undefined4 *)((longlong)this + 0xa0) = 0;
  if (*(void **)((longlong)this + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x98));
  }
  TSparseArray<TSparseSetElement<TTuple<int,FOptimus_InterfaceBinding>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FOptimus_InterfaceBinding>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FOptimus_InterfaceBinding>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x58));
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<int,FOptimus_InterfaceBinding>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FOptimus_InterfaceBinding>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FOptimus_InterfaceBinding>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 8));
  return;
}

