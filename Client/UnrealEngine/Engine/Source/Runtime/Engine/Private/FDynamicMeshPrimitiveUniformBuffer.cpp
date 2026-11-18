// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FDynamicMeshPrimitiveUniformBuffer @ 147b39220

FDynamicMeshPrimitiveUniformBuffer * __thiscall
FDynamicMeshPrimitiveUniformBuffer::FDynamicMeshPrimitiveUniformBuffer
          (FDynamicMeshPrimitiveUniformBuffer *this)

{
  *(undefined ***)this = &___7FDynamicPrimitiveResource__6B_;
  FRenderResource::FRenderResource((FRenderResource *)&this->field_0x8);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x28 = 2;
  *(undefined ***)this = &_vftable__for__FDynamicPrimitiveResource__;
  *(undefined ***)&this->field_0x8 =
       &_vftable__for__TUniformBuffer<FPrimitiveUniformShaderParameters>__;
  return this;
}

// InitPrimitiveResource @ 147b75fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicMeshPrimitiveUniformBuffer::InitPrimitiveResource
          (FDynamicMeshPrimitiveUniformBuffer *this,FRHICommandListBase *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147b75fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->field_0x8 + 0x18))(&this->field_0x8);
  return;
}

// ReleasePrimitiveResource @ 147b835c0

void __thiscall
FDynamicMeshPrimitiveUniformBuffer::ReleasePrimitiveResource
          (FDynamicMeshPrimitiveUniformBuffer *this)

{
  undefined1 *puVar1;
  
  puVar1 = &this->field_0x8;
  (**(code **)(*(longlong *)&this->field_0x8 + 0x20))(puVar1);
                    /* WARNING: Could not recover jumptable at 0x000147b835e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)puVar1)(puVar1,1);
  return;
}

