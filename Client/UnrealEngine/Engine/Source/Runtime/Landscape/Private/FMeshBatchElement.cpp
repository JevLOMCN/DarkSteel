// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// FMeshBatchElement @ 145f7b3b0

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FMeshBatchElement * __thiscall
FMeshBatchElement::FMeshBatchElement(FMeshBatchElement *this,FMeshBatchElement *param_1)

{
  FRHIUniformBuffer *this_00;
  uint3 uVar1;
  undefined5 uVar2;
  uint uVar3;
  
  this->PrimitiveUniformBuffer = param_1->PrimitiveUniformBuffer;
  this->PrimitiveUniformBufferResource = param_1->PrimitiveUniformBufferResource;
  (this->LooseParametersUniformBuffer).Reference = (FRHIUniformBuffer *)0x0;
  this_00 = (param_1->LooseParametersUniformBuffer).Reference;
  (this->LooseParametersUniformBuffer).Reference = this_00;
  if (this_00 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->IndexBuffer = param_1->IndexBuffer;
  uVar1 = (param_1->DynamicIndexBuffer).FirstIndex;
  uVar2 = *(undefined5 *)&(param_1->DynamicIndexBuffer).field_0xb;
  (this->DynamicIndexBuffer).IndexBuffer = (param_1->DynamicIndexBuffer).IndexBuffer;
  (this->DynamicIndexBuffer).FirstIndex = uVar1;
  *(undefined5 *)&(this->DynamicIndexBuffer).field_0xb = uVar2;
  this->field5_0x30 = param_1->field5_0x30;
  this->field5_0x30 = param_1->field5_0x30;
  this->UserData = param_1->UserData;
  this->VertexFactoryUserData = param_1->VertexFactoryUserData;
  this->IndirectArgsBuffer = param_1->IndirectArgsBuffer;
  this->IndirectArgsOffset = param_1->IndirectArgsOffset;
  *(uint *)&this->field_0x54 =
       (*(uint *)&param_1->field_0x54 ^ *(uint *)&this->field_0x54) & 0xfffffff8 ^
       *(uint *)&param_1->field_0x54;
  this->FirstIndex = param_1->FirstIndex;
  this->NumPrimitives = param_1->NumPrimitives;
  this->NumInstances = param_1->NumInstances;
  this->BaseVertexIndex = param_1->BaseVertexIndex;
  this->MinVertexIndex = param_1->MinVertexIndex;
  this->MaxVertexIndex = param_1->MaxVertexIndex;
  this->UserIndex = param_1->UserIndex;
  this->MinScreenSize = param_1->MinScreenSize;
  this->MaxScreenSize = param_1->MaxScreenSize;
  uVar3 = (this->InstancedLODIndex ^ param_1->InstancedLODIndex) & 0xf ^ *(uint *)&this->field_0x7c;
  *(uint *)&this->field_0x7c = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&param_1->field_0x7c) & 0xf0 ^ uVar3;
  *(uint *)&this->field_0x7c = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&param_1->field_0x7c) & 0x100 ^ uVar3;
  *(uint *)&this->field_0x7c = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&param_1->field_0x7c) & 0x200 ^ uVar3;
  *(uint *)&this->field_0x7c = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&param_1->field_0x7c) & 0x400 ^ uVar3;
  *(uint *)&this->field_0x7c = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&param_1->field_0x7c) & 0x800 ^ uVar3;
  *(uint *)&this->field_0x7c = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&param_1->field_0x7c) & 0x1000 ^ uVar3;
  *(uint *)&this->field_0x7c = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&param_1->field_0x7c) & 0x2000 ^ uVar3;
  *(uint *)&this->field_0x7c = uVar3;
  *(uint *)&this->field_0x7c =
       (*(uint *)&param_1->field_0x7c ^ uVar3) & 0xffc03fff ^ *(uint *)&param_1->field_0x7c;
  (this->SkinCacheDebugColor).field0_0x0 = (param_1->SkinCacheDebugColor).field0_0x0;
  this->DynamicPrimitiveData = param_1->DynamicPrimitiveData;
  this->DynamicPrimitiveIndex = param_1->DynamicPrimitiveIndex;
  this->DynamicPrimitiveInstanceSceneDataOffset = param_1->DynamicPrimitiveInstanceSceneDataOffset;
  return this;
}

