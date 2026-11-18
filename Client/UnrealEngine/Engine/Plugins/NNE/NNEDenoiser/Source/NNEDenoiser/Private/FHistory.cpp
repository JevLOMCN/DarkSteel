// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 2

// ~FHistory @ 14eae6b60

void __thiscall UE::NNEDenoiser::Private::FHistory::~FHistory(FHistory *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ResourceMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ResourceMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ResourceMap);
  this->_padding_ =
       (longlong)&___7IHistory_IPathTracingSpatialTemporalDenoiser_Private_Renderer_UE__6B_;
  return;
}

// GetDebugName @ 14eaf8e10

wchar_t * __thiscall UE::NNEDenoiser::Private::FHistory::GetDebugName(FHistory *this)

{
  return this->DebugName;
}

