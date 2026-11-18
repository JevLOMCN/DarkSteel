// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 1

// GetHandle @ 14ea4c590

FDelegateHandle __thiscall
TCommonDelegateInstanceState<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

