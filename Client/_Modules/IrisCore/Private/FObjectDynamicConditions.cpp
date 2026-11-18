// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// FObjectDynamicConditions @ 1442297d0

FObjectDynamicConditions * __thiscall
UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions::FObjectDynamicConditions
          (FObjectDynamicConditions *this,FObjectDynamicConditions *param_1)

{
  undefined1 *_Dst;
  void *pvVar1;
  undefined1 *_Src;
  
  *(undefined8 *)&this->DynamicConditions = 0;
  *(undefined8 *)&(this->DynamicConditions).field_0x8 = 0;
  *(undefined8 *)&(this->DynamicConditions).field_0x20 = 0;
  *(undefined4 *)&(this->DynamicConditions).field_0x28 = 0;
  *(undefined4 *)&(this->DynamicConditions).field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicConditions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicConditions).field_0x34 = 0;
  *(undefined8 *)&(this->DynamicConditions).field_0x40 = 0;
  *(undefined4 *)&(this->DynamicConditions).field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)&this->DynamicConditions = *(undefined8 *)&param_1->DynamicConditions;
    *(undefined8 *)&param_1->DynamicConditions = 0;
    *(undefined4 *)&(this->DynamicConditions).field_0x8 =
         *(undefined4 *)&(param_1->DynamicConditions).field_0x8;
    *(undefined4 *)&(this->DynamicConditions).field_0xc =
         *(undefined4 *)&(param_1->DynamicConditions).field_0xc;
    *(undefined8 *)&(param_1->DynamicConditions).field_0x8 = 0;
    _Src = &(param_1->DynamicConditions).field_0x10;
    _Dst = &(this->DynamicConditions).field_0x10;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->DynamicConditions).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->DynamicConditions).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->DynamicConditions).field_0x20 =
           *(undefined8 *)&(param_1->DynamicConditions).field_0x20;
      *(undefined8 *)&(param_1->DynamicConditions).field_0x20 = 0;
      *(undefined4 *)&(this->DynamicConditions).field_0x28 =
           *(undefined4 *)&(param_1->DynamicConditions).field_0x28;
      *(undefined4 *)&(this->DynamicConditions).field_0x2c =
           *(undefined4 *)&(param_1->DynamicConditions).field_0x2c;
      *(undefined8 *)&(param_1->DynamicConditions).field_0x28 = 0;
    }
    *(undefined4 *)&(this->DynamicConditions).field_0x30 =
         *(undefined4 *)&(param_1->DynamicConditions).field_0x30;
    *(undefined4 *)&(this->DynamicConditions).field_0x34 =
         *(undefined4 *)&(param_1->DynamicConditions).field_0x34;
    *(undefined4 *)&(param_1->DynamicConditions).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->DynamicConditions).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->DynamicConditions).field_0x40 == 0) {
    *(undefined4 *)&(this->DynamicConditions).field_0x38 =
         *(undefined4 *)&(param_1->DynamicConditions).field_0x38;
  }
  pvVar1 = *(void **)&(this->DynamicConditions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined8 *)&(this->DynamicConditions).field_0x40 =
       *(undefined8 *)&(param_1->DynamicConditions).field_0x40;
  *(undefined8 *)&(param_1->DynamicConditions).field_0x40 = 0;
  *(undefined4 *)&(this->DynamicConditions).field_0x48 =
       *(undefined4 *)&(param_1->DynamicConditions).field_0x48;
  *(undefined4 *)&(param_1->DynamicConditions).field_0x48 = 0;
  return this;
}

