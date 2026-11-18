// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 2

// operator_delete @ 14ddcbf30

void __cdecl
UE::Tasks::Private::
TExecutableTask<``UE::MovieGraph::Rendering::FMovieGraphImagePassBase::MakeForwardingEndpoint'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::operator_delete(void *param_1,ulong64 param_2)

{
  if (param_2 < 0x101) {
    TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
    ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            *)&SmallTaskAllocator,param_1);
    return;
  }
  FMemory::Free(param_1);
  return;
}

// operator_delete @ 14ddcbf70

void __cdecl
UE::Tasks::Private::
TExecutableTask<``UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::operator_delete(void *param_1,ulong64 param_2)

{
  if (param_2 < 0x101) {
    TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
    ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            *)&SmallTaskAllocator,param_1);
    return;
  }
  FMemory::Free(param_1);
  return;
}

