// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// InitRHI @ 144e5a560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVisualizeTracesVertexDeclaration::InitRHI
          (FVisualizeTracesVertexDeclaration *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  TRefCountPtr<FRHIVertexDeclaration> *pTVar1;
  undefined1 auStack_d8 [32];
  TRefCountPtr<FRHIVertexDeclaration> local_b8 [2];
  undefined1 local_a8 [136];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_20 = 0;
  local_1c = 0x11;
  (**(code **)(GDynamicRHI->_padding_ + 0x68))(GDynamicRHI,local_b8,local_a8);
  pTVar1 = &this->VertexDeclarationRHI;
  if (pTVar1 != local_b8) {
    this_00 = (FRHIResource *)pTVar1->Reference;
    pTVar1->Reference = local_b8[0].Reference;
    local_b8[0].Reference = (FRHIVertexDeclaration *)0x0;
    if (this_00 == (FRHIResource *)0x0) {
      return;
    }
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_b8[0].Reference != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_b8[0].Reference);
  }
  return;
}

// ReleaseRHI @ 144e5a610

void __thiscall
FVisualizeTracesVertexDeclaration::ReleaseRHI(FVisualizeTracesVertexDeclaration *this)

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

// ~FVisualizeTracesVertexDeclaration @ 144e746a0

void __thiscall
FVisualizeTracesVertexDeclaration::~FVisualizeTracesVertexDeclaration
          (FVisualizeTracesVertexDeclaration *this)

{
  FRHIResource *this_00;
  
  this->_padding_ = (longlong)&___7FVisualizeTracesVertexDeclaration__6B_;
  this_00 = (FRHIResource *)(this->VertexDeclarationRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

