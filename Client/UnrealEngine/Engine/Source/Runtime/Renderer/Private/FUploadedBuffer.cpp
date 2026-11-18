// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FUploadedBuffer @ 1448eda90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FUploadedBuffer * __thiscall
FRDGBuilder::FUploadedBuffer::FUploadedBuffer
          (FUploadedBuffer *this,FRDGBuffer *param_1,TFunction<void_const_*___cdecl(void)> *param_2,
          TFunction<unsigned___int64___cdecl(void)> *param_3)

{
  undefined8 uVar1;
  
  this->Buffer = param_1;
  this->Data = (void *)0x0;
  this->DataSize = 0;
  this->bUseDataCallbacks = true;
  this->bUseFreeCallbacks = false;
  *(undefined8 *)&this->DataCallback = *(undefined8 *)param_2;
  *(undefined8 *)&(this->DataCallback).field_0x28 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->DataCallback).field_0x10 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->DataCallback).field_0x18 = uVar1;
  *(undefined8 *)&(this->DataCallback).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&this->DataCallback != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)&this->DataSizeCallback = *(undefined8 *)param_3;
  *(undefined8 *)&(this->DataSizeCallback).field_0x28 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  uVar1 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->DataSizeCallback).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->DataSizeCallback).field_0x18 = uVar1;
  *(undefined8 *)&(this->DataSizeCallback).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  if (*(longlong *)&this->DataSizeCallback != 0) {
    *(undefined8 *)param_3 = 0;
  }
  *(undefined8 *)&this->DataFreeCallback = 0;
  *(undefined8 *)&(this->DataFreeCallback).field_0x28 = 0;
  *(undefined8 *)&this->DataFillCallback = 0;
  *(undefined8 *)&(this->DataFillCallback).field_0x28 = 0;
  return this;
}

