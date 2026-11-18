// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// InitRHI @ 147cae6f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FGPUSortDummyUAV::InitRHI(FGPUSortDummyUAV *this,FRHICommandListBase *param_1)

{
  FRWBuffer::Initialize
            (&this->Buffer,param_1,L"FGPUSortDummyUAV",4,1,PF_R32_UINT,UAVCompute,Static,
             (FResourceArrayUploadInterface *)0x0);
  return;
}

// ReleaseRHI @ 147cae740

void __thiscall FGPUSortDummyUAV::ReleaseRHI(FGPUSortDummyUAV *this)

{
  FRHIBuffer *this_00;
  FRHIUnorderedAccessView *this_01;
  FRHIShaderResourceView *this_02;
  
  (this->Buffer).NumBytes = 0;
  this_00 = (this->Buffer).Buffer.Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    (this->Buffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->Buffer).UAV.Reference;
  if (this_01 != (FRHIUnorderedAccessView *)0x0) {
    (this->Buffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
  }
  this_02 = (this->Buffer).SRV.Reference;
  if (this_02 != (FRHIShaderResourceView *)0x0) {
    (this->Buffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_02);
  }
  return;
}

