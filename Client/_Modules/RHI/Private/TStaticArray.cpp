// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// operator= @ 145c48530

TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> * __thiscall
TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::operator=
          (TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> *this,
          TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> *param_1)

{
  uint uVar1;
  
  ::FString::operator=((FString *)this,(FString *)param_1);
  uVar1 = (this->Elements[0].field1_0x10.Flags ^ param_1->Elements[0].field1_0x10.Flags) & 0xf ^
          this->Elements[0].field1_0x10.Flags;
  this->Elements[0].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[0].field1_0x10.Flags) & 0x3f0 ^ uVar1;
  this->Elements[0].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[0].field1_0x10.Flags) & 0x3fc00 ^ uVar1;
  this->Elements[0].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[0].field1_0x10.Flags) & 0x3fc0000 ^ uVar1;
  this->Elements[0].field1_0x10.Flags = uVar1;
  this->Elements[0].field1_0x10.Flags =
       (uVar1 ^ param_1->Elements[0].field1_0x10.Flags) & 0x3ffffff ^
       param_1->Elements[0].field1_0x10.Flags;
  this->Elements[0].field1_0x10 = param_1->Elements[0].field1_0x10;
  ::FString::operator=(&this->Elements[1].LayoutName,&param_1->Elements[1].LayoutName);
  uVar1 = (this->Elements[1].field1_0x10.Flags ^ param_1->Elements[1].field1_0x10.Flags) & 0xf ^
          this->Elements[1].field1_0x10.Flags;
  this->Elements[1].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[1].field1_0x10.Flags) & 0x3f0 ^ uVar1;
  this->Elements[1].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[1].field1_0x10.Flags) & 0x3fc00 ^ uVar1;
  this->Elements[1].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[1].field1_0x10.Flags) & 0x3fc0000 ^ uVar1;
  this->Elements[1].field1_0x10.Flags = uVar1;
  this->Elements[1].field1_0x10.Flags =
       (uVar1 ^ param_1->Elements[1].field1_0x10.Flags) & 0x3ffffff ^
       param_1->Elements[1].field1_0x10.Flags;
  this->Elements[1].field1_0x10 = param_1->Elements[1].field1_0x10;
  ::FString::operator=(&this->Elements[2].LayoutName,&param_1->Elements[2].LayoutName);
  uVar1 = (this->Elements[2].field1_0x10.Flags ^ param_1->Elements[2].field1_0x10.Flags) & 0xf ^
          this->Elements[2].field1_0x10.Flags;
  this->Elements[2].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[2].field1_0x10.Flags) & 0x3f0 ^ uVar1;
  this->Elements[2].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[2].field1_0x10.Flags) & 0x3fc00 ^ uVar1;
  this->Elements[2].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[2].field1_0x10.Flags) & 0x3fc0000 ^ uVar1;
  this->Elements[2].field1_0x10.Flags = uVar1;
  this->Elements[2].field1_0x10.Flags =
       (uVar1 ^ param_1->Elements[2].field1_0x10.Flags) & 0x3ffffff ^
       param_1->Elements[2].field1_0x10.Flags;
  this->Elements[2].field1_0x10 = param_1->Elements[2].field1_0x10;
  ::FString::operator=(&this->Elements[3].LayoutName,&param_1->Elements[3].LayoutName);
  uVar1 = (this->Elements[3].field1_0x10.Flags ^ param_1->Elements[3].field1_0x10.Flags) & 0xf ^
          this->Elements[3].field1_0x10.Flags;
  this->Elements[3].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[3].field1_0x10.Flags) & 0x3f0 ^ uVar1;
  this->Elements[3].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[3].field1_0x10.Flags) & 0x3fc00 ^ uVar1;
  this->Elements[3].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[3].field1_0x10.Flags) & 0x3fc0000 ^ uVar1;
  this->Elements[3].field1_0x10.Flags = uVar1;
  this->Elements[3].field1_0x10.Flags =
       (uVar1 ^ param_1->Elements[3].field1_0x10.Flags) & 0x3ffffff ^
       param_1->Elements[3].field1_0x10.Flags;
  this->Elements[3].field1_0x10 = param_1->Elements[3].field1_0x10;
  ::FString::operator=(&this->Elements[4].LayoutName,&param_1->Elements[4].LayoutName);
  uVar1 = (this->Elements[4].field1_0x10.Flags ^ param_1->Elements[4].field1_0x10.Flags) & 0xf ^
          this->Elements[4].field1_0x10.Flags;
  this->Elements[4].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[4].field1_0x10.Flags) & 0x3f0 ^ uVar1;
  this->Elements[4].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[4].field1_0x10.Flags) & 0x3fc00 ^ uVar1;
  this->Elements[4].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[4].field1_0x10.Flags) & 0x3fc0000 ^ uVar1;
  this->Elements[4].field1_0x10.Flags = uVar1;
  this->Elements[4].field1_0x10.Flags =
       (uVar1 ^ param_1->Elements[4].field1_0x10.Flags) & 0x3ffffff ^
       param_1->Elements[4].field1_0x10.Flags;
  this->Elements[4].field1_0x10 = param_1->Elements[4].field1_0x10;
  ::FString::operator=(&this->Elements[5].LayoutName,&param_1->Elements[5].LayoutName);
  uVar1 = (this->Elements[5].field1_0x10.Flags ^ param_1->Elements[5].field1_0x10.Flags) & 0xf ^
          this->Elements[5].field1_0x10.Flags;
  this->Elements[5].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[5].field1_0x10.Flags) & 0x3f0 ^ uVar1;
  this->Elements[5].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[5].field1_0x10.Flags) & 0x3fc00 ^ uVar1;
  this->Elements[5].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[5].field1_0x10.Flags) & 0x3fc0000 ^ uVar1;
  this->Elements[5].field1_0x10.Flags = uVar1;
  this->Elements[5].field1_0x10.Flags =
       (uVar1 ^ param_1->Elements[5].field1_0x10.Flags) & 0x3ffffff ^
       param_1->Elements[5].field1_0x10.Flags;
  this->Elements[5].field1_0x10 = param_1->Elements[5].field1_0x10;
  ::FString::operator=(&this->Elements[6].LayoutName,&param_1->Elements[6].LayoutName);
  uVar1 = (this->Elements[6].field1_0x10.Flags ^ param_1->Elements[6].field1_0x10.Flags) & 0xf ^
          this->Elements[6].field1_0x10.Flags;
  this->Elements[6].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[6].field1_0x10.Flags) & 0x3f0 ^ uVar1;
  this->Elements[6].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[6].field1_0x10.Flags) & 0x3fc00 ^ uVar1;
  this->Elements[6].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[6].field1_0x10.Flags) & 0x3fc0000 ^ uVar1;
  this->Elements[6].field1_0x10.Flags = uVar1;
  this->Elements[6].field1_0x10.Flags =
       (uVar1 ^ param_1->Elements[6].field1_0x10.Flags) & 0x3ffffff ^
       param_1->Elements[6].field1_0x10.Flags;
  this->Elements[6].field1_0x10 = param_1->Elements[6].field1_0x10;
  ::FString::operator=(&this->Elements[7].LayoutName,&param_1->Elements[7].LayoutName);
  uVar1 = (this->Elements[7].field1_0x10.Flags ^ param_1->Elements[7].field1_0x10.Flags) & 0xf ^
          this->Elements[7].field1_0x10.Flags;
  this->Elements[7].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[7].field1_0x10.Flags) & 0x3f0 ^ uVar1;
  this->Elements[7].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[7].field1_0x10.Flags) & 0x3fc00 ^ uVar1;
  this->Elements[7].field1_0x10.Flags = uVar1;
  uVar1 = (uVar1 ^ param_1->Elements[7].field1_0x10.Flags) & 0x3fc0000 ^ uVar1;
  this->Elements[7].field1_0x10.Flags = uVar1;
  this->Elements[7].field1_0x10.Flags =
       (uVar1 ^ param_1->Elements[7].field1_0x10.Flags) & 0x3ffffff ^
       param_1->Elements[7].field1_0x10.Flags;
  this->Elements[7].field1_0x10 = param_1->Elements[7].field1_0x10;
  return this;
}

