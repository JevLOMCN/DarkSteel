// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// InitRHI @ 147e8c750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUSkinPassThroughFactoryNullUniformBuffer::InitRHI
          (FGPUSkinPassThroughFactoryNullUniformBuffer *this,FRHICommandListBase *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uStack_24;
  
  uVar1 = GNullVertexBuffer._40_8_;
  puVar2 = *(undefined8 **)&this->field_0x30;
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = FMemory::Malloc(0x20,0x10);
    *(undefined8 **)&this->field_0x30 = puVar2;
  }
  *puVar2 = CONCAT44(uStack_24,0xffffffff);
  puVar2[1] = uVar1;
  puVar2[2] = uVar1;
  puVar2[3] = uVar1;
  TUniformBuffer<FGPUSkinPassThroughFactoryLooseParameters>::InitRHI
            ((TUniformBuffer<FGPUSkinPassThroughFactoryLooseParameters> *)this,param_1);
  return;
}

