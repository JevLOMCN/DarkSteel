// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// operator() @ 145ec4dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FRHICommandList::SetStreamSourceSlot'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  FRHIBuffer *this_00;
  FRHICommandSetStreamSource local_48;
  
  local_48.Offset = *(uint *)((longlong)this + 0x10);
  if (*(longlong *)((longlong)this + 8) == 0) {
    local_48._padding_ = 0;
    local_48._padding_ = (longlong)&___7FRHICommandSetStreamSource__6B_;
    local_48.StreamIndex = *(uint *)this;
    local_48.VertexBuffer = (FRHIBuffer *)0x0;
  }
  else {
    this_00 = *(FRHIBuffer **)(*(longlong *)((longlong)this + 8) + 0x18);
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    local_48._padding_ = 0;
    local_48._padding_ = (longlong)&___7FRHICommandSetStreamSource__6B_;
    local_48.StreamIndex = *(uint *)this;
    local_48.VertexBuffer = this_00;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  FRHICommandSetStreamSource::Execute(&local_48,param_1);
  return;
}

