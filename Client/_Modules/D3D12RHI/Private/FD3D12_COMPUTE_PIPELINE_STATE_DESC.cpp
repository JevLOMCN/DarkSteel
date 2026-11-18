// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// PipelineStateStream @ 145ab0a20

FD3D12_COMPUTE_PIPELINE_STATE_STREAM * __thiscall
FD3D12_COMPUTE_PIPELINE_STATE_DESC::PipelineStateStream
          (FD3D12_COMPUTE_PIPELINE_STATE_DESC *this,
          FD3D12_COMPUTE_PIPELINE_STATE_STREAM *__return_storage_ptr__)

{
  code *pcVar1;
  ulong64 uVar2;
  bool bVar3;
  FD3D12_COMPUTE_PIPELINE_STATE_STREAM *pFVar4;
  
  (__return_storage_ptr__->NodeMask).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_NODE_MASK;
  (__return_storage_ptr__->NodeMask).pssInner = 0;
  (__return_storage_ptr__->pRootSignature).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_ROOT_SIGNATURE;
  (__return_storage_ptr__->pRootSignature).pssInner = (ID3D12RootSignature *)0x0;
  (__return_storage_ptr__->CS).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_CS;
  (__return_storage_ptr__->CS).pssInner.pShaderBytecode = (void *)0x0;
  (__return_storage_ptr__->CS).pssInner.BytecodeLength = 0;
  (__return_storage_ptr__->CachedPSO).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_CACHED_PSO;
  (__return_storage_ptr__->CachedPSO).pssInner.pCachedBlob = (void *)0x0;
  (__return_storage_ptr__->CachedPSO).pssInner.CachedBlobSizeInBytes = 0;
  if (*(int *)&this->field_0x30 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->Flags == D3D12_PIPELINE_STATE_FLAG_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                       ,99,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FD3D12_COMPUTE_PIPELINE_STATE_STREAM *)(*pcVar1)();
      return pFVar4;
    }
  }
  (__return_storage_ptr__->NodeMask).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_NODE_MASK;
  (__return_storage_ptr__->NodeMask).pssInner = *(uint *)&this->field_0x18;
  (__return_storage_ptr__->pRootSignature).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_ROOT_SIGNATURE;
  (__return_storage_ptr__->pRootSignature).pssInner = *(ID3D12RootSignature **)this;
  (__return_storage_ptr__->CS).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_CS;
  uVar2 = *(ulong64 *)&this->field_0x10;
  (__return_storage_ptr__->CS).pssInner.pShaderBytecode = *(void **)&this->field_0x8;
  (__return_storage_ptr__->CS).pssInner.BytecodeLength = uVar2;
  (__return_storage_ptr__->CachedPSO).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_CACHED_PSO;
  uVar2 = *(ulong64 *)&this->field_0x28;
  (__return_storage_ptr__->CachedPSO).pssInner.pCachedBlob = *(void **)&this->field_0x20;
  (__return_storage_ptr__->CachedPSO).pssInner.CachedBlobSizeInBytes = uVar2;
  return __return_storage_ptr__;
}

