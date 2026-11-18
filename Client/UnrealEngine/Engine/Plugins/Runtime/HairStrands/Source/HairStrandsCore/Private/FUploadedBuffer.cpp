// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// FUploadedBuffer @ 14e03dc00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FUploadedBuffer * __thiscall
FRDGBuilder::FUploadedBuffer::FUploadedBuffer
          (FUploadedBuffer *this,FRDGBuffer *param_1,void *param_2,ulong64 param_3,
          TFunction<void___cdecl(void_const_*)> *param_4)

{
  undefined8 uVar1;
  
  this->Buffer = param_1;
  this->Data = param_2;
  this->bUseDataCallbacks = false;
  this->bUseFreeCallbacks = true;
  this->DataSize = param_3;
  *(undefined8 *)&this->DataCallback = 0;
  *(undefined8 *)&(this->DataCallback).field_0x28 = 0;
  *(undefined8 *)&this->DataSizeCallback = 0;
  *(undefined8 *)&(this->DataSizeCallback).field_0x28 = 0;
  *(undefined8 *)&this->DataFreeCallback = *(undefined8 *)param_4;
  *(undefined8 *)&(this->DataFreeCallback).field_0x28 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&param_4->field_0x28 = 0;
  uVar1 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->DataFreeCallback).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->DataFreeCallback).field_0x18 = uVar1;
  *(undefined8 *)&(this->DataFreeCallback).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  if (*(longlong *)&this->DataFreeCallback != 0) {
    *(undefined8 *)param_4 = 0;
  }
  *(undefined8 *)&this->DataFillCallback = 0;
  *(undefined8 *)&(this->DataFillCallback).field_0x28 = 0;
  return this;
}

