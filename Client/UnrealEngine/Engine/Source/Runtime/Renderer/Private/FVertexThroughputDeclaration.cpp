// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// InitRHI @ 1448d01f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVertexThroughputDeclaration::InitRHI
          (FVertexThroughputDeclaration *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  FRHIResource *this_01;
  undefined1 auStackY_118 [32];
  TArray<FVertexElement,TFixedAllocator<17>_> local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_a8.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
            (8,2,5,0,&local_a8.AllocatorInstance,5,&local_a8.ArrayMax);
  local_a8.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_a8.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_a8.AllocatorInstance.InlineData[0].Pad[2] = '\x04';
  local_a8.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_a8.AllocatorInstance.InlineData[0].Pad[4] = 'P';
  local_a8.AllocatorInstance.InlineData[0].Pad[5] = '\0';
  local_a8.AllocatorInstance.InlineData[0].Pad[6] = '\0';
  local_a8.AllocatorInstance.InlineData[0].Pad[7] = '\0';
  local_a8.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_a8.AllocatorInstance.InlineData[1].Pad[1] = '\x10';
  local_a8.AllocatorInstance.InlineData[1].Pad[2] = '\x04';
  local_a8.AllocatorInstance.InlineData[1].Pad[3] = '\x01';
  local_a8.AllocatorInstance.InlineData[1].Pad[4] = 'P';
  local_a8.AllocatorInstance.InlineData[1].Pad[5] = '\0';
  local_a8.AllocatorInstance.InlineData[1].Pad[6] = '\0';
  local_a8.AllocatorInstance.InlineData[1].Pad[7] = '\0';
  local_a8.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_a8.AllocatorInstance.InlineData[2].Pad[1] = ' ';
  local_a8.AllocatorInstance.InlineData[2].Pad[2] = '\x04';
  local_a8.AllocatorInstance.InlineData[2].Pad[3] = '\x02';
  local_a8.AllocatorInstance.InlineData[2].Pad[4] = 'P';
  local_a8.AllocatorInstance.InlineData[2].Pad[5] = '\0';
  local_a8.AllocatorInstance.InlineData[2].Pad[6] = '\0';
  local_a8.AllocatorInstance.InlineData[2].Pad[7] = '\0';
  local_a8.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_a8.AllocatorInstance.InlineData[3].Pad[1] = '0';
  local_a8.AllocatorInstance.InlineData[3].Pad[2] = '\x04';
  local_a8.AllocatorInstance.InlineData[3].Pad[3] = '\x03';
  local_a8.AllocatorInstance.InlineData[3].Pad[4] = 'P';
  local_a8.AllocatorInstance.InlineData[3].Pad[5] = '\0';
  local_a8.AllocatorInstance.InlineData[3].Pad[6] = '\0';
  local_a8.AllocatorInstance.InlineData[3].Pad[7] = '\0';
  local_a8.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_a8.AllocatorInstance.InlineData[4].Pad[1] = '@';
  local_a8.AllocatorInstance.InlineData[4].Pad[2] = '\x04';
  local_a8.AllocatorInstance.InlineData[4].Pad[3] = '\x04';
  local_a8.AllocatorInstance.InlineData[4].Pad[4] = 'P';
  local_a8.AllocatorInstance.InlineData[4].Pad[5] = '\0';
  local_a8.AllocatorInstance.InlineData[4].Pad[6] = '\0';
  local_a8.AllocatorInstance.InlineData[4].Pad[7] = '\0';
  this_01 = (FRHIResource *)PipelineStateCache::GetOrCreateVertexDeclaration(&local_a8);
  this_00 = (FRHIResource *)(this->DeclRHI).Reference;
  if (this_00 != this_01) {
    (this->DeclRHI).Reference = (FRHIVertexDeclaration *)this_01;
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_01);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  return;
}

// ReleaseRHI @ 1448d0320

void __thiscall FVertexThroughputDeclaration::ReleaseRHI(FVertexThroughputDeclaration *this)

{
  FRHIResource *this_00;
  
  this_00 = (FRHIResource *)(this->DeclRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    (this->DeclRHI).Reference = (FRHIVertexDeclaration *)0x0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

