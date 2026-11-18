// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FVectorFieldResource @ 148909ee0

FVectorFieldResource * __thiscall
FVectorFieldResource::FVectorFieldResource(FVectorFieldResource *this)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FVectorFieldResource__6B_;
  (this->VolumeTextureRHI).Reference = (FRHITexture *)0x0;
  (this->LocalBounds).IsValid = '\0';
  (this->NumRefs).Counter = 0;
  return this;
}

// ~FVectorFieldResource @ 14890e400

void __thiscall FVectorFieldResource::~FVectorFieldResource(FVectorFieldResource *this)

{
  FRHITexture *this_00;
  
  this->_padding_ = (longlong)&___7FVectorFieldResource__6B_;
  this_00 = (this->VolumeTextureRHI).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ReleaseRHI @ 148977860

void __thiscall FVectorFieldResource::ReleaseRHI(FVectorFieldResource *this)

{
  FRHITexture *this_00;
  
  this_00 = (this->VolumeTextureRHI).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->VolumeTextureRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// ResetVectorField @ 14897a2e0

void __thiscall FVectorFieldResource::ResetVectorField(FVectorFieldResource *this)

{
  return;
}

// Update @ 1489889c0

void __thiscall
FVectorFieldResource::Update
          (FVectorFieldResource *this,FRHICommandListImmediate *param_1,float param_2)

{
  return;
}

