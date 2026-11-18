// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// FD3D12PipelineStateCommonData @ 1459eee40

FD3D12PipelineStateCommonData * __thiscall
FD3D12PipelineStateCommonData::FD3D12PipelineStateCommonData
          (FD3D12PipelineStateCommonData *this,FD3D12RootSignature *param_1,
          FD3D12PipelineState *param_2)

{
  this->RootSignature = param_1;
  this->PipelineState = param_2;
  (this->FrameCounter).LastUsedFrame = (atomic<unsigned_int>)0x0;
  return this;
}

