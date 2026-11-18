// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 2

// operator_delete @ 14266a7a0

void __cdecl
TConcurrentLinearObject<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelForData,FTaskGraphBlockAllocationTag>
::operator_delete(void *param_1)

{
  TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(param_1);
  return;
}

// operator_delete @ 14266a7c0

void __cdecl
TConcurrentLinearObject<TGraphTask<UE::ImageWrapper::Private::TiffImageWrapper::FProcessDecodedDataTask>,FTaskGraphBlockAllocationTag>
::operator_delete(void *param_1)

{
  TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(param_1);
  return;
}

