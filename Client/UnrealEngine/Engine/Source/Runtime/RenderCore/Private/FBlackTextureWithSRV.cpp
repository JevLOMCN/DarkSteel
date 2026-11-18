// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// InitRHI @ 145cf8a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FBlackTextureWithSRV::InitRHI(FBlackTextureWithSRV *this,FRHICommandListBase *param_1)

{
  FRHITexture *this_00;
  TRefCountPtr<FRHITexture> this_01;
  
  FColoredTexture<0,0,0,255>::InitRHI((FColoredTexture<0,0,0,255> *)this,param_1);
  this_01 = FRHITextureReference::DefaultTexture;
  this_00 = *(FRHITexture **)&this->field_0x20;
  if (FRHITextureReference::DefaultTexture.Reference != this_00) {
    FRHITextureReference::DefaultTexture.Reference = this_00;
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01.Reference);
      return;
    }
  }
  return;
}

// ReleaseRHI @ 145cf8a90

void __thiscall FBlackTextureWithSRV::ReleaseRHI(FBlackTextureWithSRV *this)

{
  TRefCountPtr<FRHITexture> this_00;
  
  this_00.Reference = FRHITextureReference::DefaultTexture.Reference;
  if (FRHITextureReference::DefaultTexture.Reference != (FRHITexture *)0x0) {
    FRHITextureReference::DefaultTexture.Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00.Reference);
  }
  FTextureWithSRV::ReleaseRHI((FTextureWithSRV *)this);
  return;
}

