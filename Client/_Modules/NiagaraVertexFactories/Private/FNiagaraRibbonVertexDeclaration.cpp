// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraVertexFactories
// Functions: 4

// FillDeclElements @ 148dcbe20

void __thiscall
FNiagaraRibbonVertexDeclaration::FillDeclElements
          (FNiagaraRibbonVertexDeclaration *this,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_1,int *param_2)

{
  return;
}

// InitRHI @ 148dcbe90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraRibbonVertexDeclaration::InitRHI
          (FNiagaraRibbonVertexDeclaration *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  FRHIResource *this_01;
  undefined1 auStack_d8 [32];
  undefined4 local_b8 [4];
  TArray<FVertexElement,TFixedAllocator<17>_> local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_a8.ArrayMax = 0x11;
  local_a8.ArrayNum = 0;
  local_b8[0] = 0;
  (**(code **)(this->_padding_ + 0x30))(this,&local_a8,local_b8);
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

// ReleaseRHI @ 148dcbf30

void __thiscall FNiagaraRibbonVertexDeclaration::ReleaseRHI(FNiagaraRibbonVertexDeclaration *this)

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

// ~FNiagaraRibbonVertexDeclaration @ 148dcda90

void __thiscall
FNiagaraRibbonVertexDeclaration::~FNiagaraRibbonVertexDeclaration
          (FNiagaraRibbonVertexDeclaration *this)

{
  FRHIResource *this_00;
  
  this->_padding_ = (longlong)&___7FNiagaraRibbonVertexDeclaration__6B_;
  this_00 = (FRHIResource *)(this->VertexDeclarationRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

