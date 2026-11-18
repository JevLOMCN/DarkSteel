// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// InitRHI @ 145cf7d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FEmptyVertexDeclaration::InitRHI(FEmptyVertexDeclaration *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  FRHIResource *this_01;
  undefined1 auStack_c8 [32];
  TArray<FVertexElement,TFixedAllocator<17>_> local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0x11;
  this_01 = (FRHIResource *)PipelineStateCache::GetOrCreateVertexDeclaration(&local_a8);
  this_00 = (FRHIResource *)(this->VertexDeclarationRHI).Reference;
  if (this_00 != this_01) {
    (this->VertexDeclarationRHI).Reference = (FRHIVertexDeclaration *)this_01;
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_01);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  return;
}

// ReleaseRHI @ 145cf7e20

void __thiscall FEmptyVertexDeclaration::ReleaseRHI(FEmptyVertexDeclaration *this)

{
  FRHIResource *this_00;
  
  this_00 = (FRHIResource *)(this->VertexDeclarationRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    (this->VertexDeclarationRHI).Reference = (FRHIVertexDeclaration *)0x0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// ~FEmptyVertexDeclaration @ 145d0bf30

void __thiscall FEmptyVertexDeclaration::~FEmptyVertexDeclaration(FEmptyVertexDeclaration *this)

{
  FRHIResource *this_00;
  
  this->_padding_ = (longlong)&___7FEmptyVertexDeclaration__6B_;
  this_00 = (FRHIResource *)(this->VertexDeclarationRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

