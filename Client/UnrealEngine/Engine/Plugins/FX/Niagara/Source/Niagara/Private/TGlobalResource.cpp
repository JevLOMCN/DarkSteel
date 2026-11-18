// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// ~TGlobalResource<FNDIDummyUAV,1> @ 148e559c0

void __thiscall
TGlobalResource<FNDIDummyUAV,1>::~TGlobalResource<FNDIDummyUAV,1>
          (TGlobalResource<FNDIDummyUAV,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFNDIDummyUAV___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FRWBuffer::~FRWBuffer((FRWBuffer *)&this->field_0x28);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FNiagaraEmptyBufferSRV,1> @ 1493359f0

void __thiscall
TGlobalResource<FNiagaraEmptyBufferSRV,1>::~TGlobalResource<FNiagaraEmptyBufferSRV,1>
          (TGlobalResource<FNiagaraEmptyBufferSRV,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFNiagaraEmptyBufferSRV___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x40 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x40);
  }
  if (*(FRHIResource **)&this->field_0x38 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x38);
  }
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FNiagaraEmptyByteAddressBufferSRV,1> @ 149335a50

void __thiscall
TGlobalResource<FNiagaraEmptyByteAddressBufferSRV,1>::
~TGlobalResource<FNiagaraEmptyByteAddressBufferSRV,1>
          (TGlobalResource<FNiagaraEmptyByteAddressBufferSRV,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFNiagaraEmptyByteAddressBufferSRV___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x38 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x38);
  }
  if (*(FRHIResource **)&this->field_0x30 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x30);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<NiagaraStateless::FNoiseLUT,1> @ 149476e80

void __thiscall
TGlobalResource<NiagaraStateless::FNoiseLUT,1>::~TGlobalResource<NiagaraStateless::FNoiseLUT,1>
          (TGlobalResource<NiagaraStateless::FNoiseLUT,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFNoiseLUT_NiagaraStateless___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x48 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x48);
  }
  if (*(FRHIResource **)&this->field_0x40 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x40);
  }
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

