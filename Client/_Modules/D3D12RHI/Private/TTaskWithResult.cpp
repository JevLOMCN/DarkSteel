// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// ~TTaskWithResult<FRHITransientResource::FResourceTaskResult> @ 145a94230

void __thiscall
UE::Tasks::Private::TTaskWithResult<FRHITransientResource::FResourceTaskResult>::
~TTaskWithResult<FRHITransientResource::FResourceTaskResult>
          (TTaskWithResult<FRHITransientResource::FResourceTaskResult> *this)

{
  FRHIResource *this_00;
  
  this->_padding_ =
       (longlong)
       &___7__TTaskWithResult_UFResourceTaskResult_FRHITransientResource___Private_Tasks_UE__6B_;
  this_00 = *(FRHIResource **)(this->ResultStorage).Pad;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FTaskBase::~FTaskBase((FTaskBase *)this);
  return;
}

