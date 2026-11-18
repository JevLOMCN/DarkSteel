// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// FRHIUniformBufferShaderBindingLayout @ 1459f5480

FRHIUniformBufferShaderBindingLayout * __thiscall
FRHIUniformBufferShaderBindingLayout::FRHIUniformBufferShaderBindingLayout
          (FRHIUniformBufferShaderBindingLayout *this,FRHIUniformBufferShaderBindingLayout *param_1)

{
  uint uVar1;
  
  ::FString::FString(&this->LayoutName,&param_1->LayoutName);
  uVar1 = ((this->field1_0x10).Flags ^ (param_1->field1_0x10).Flags) & 0xf ^
          (this->field1_0x10).Flags;
  (this->field1_0x10).Flags = uVar1;
  uVar1 = (uVar1 ^ (param_1->field1_0x10).Flags) & 0x3f0 ^ uVar1;
  (this->field1_0x10).Flags = uVar1;
  uVar1 = (uVar1 ^ (param_1->field1_0x10).Flags) & 0x3fc00 ^ uVar1;
  (this->field1_0x10).Flags = uVar1;
  uVar1 = (uVar1 ^ (param_1->field1_0x10).Flags) & 0x3fc0000 ^ uVar1;
  (this->field1_0x10).Flags = uVar1;
  (this->field1_0x10).Flags =
       (uVar1 ^ (param_1->field1_0x10).Flags) & 0x3ffffff ^ (param_1->field1_0x10).Flags;
  this->field1_0x10 = param_1->field1_0x10;
  return this;
}

// operator== @ 145a49a60

bool __thiscall
FRHIUniformBufferShaderBindingLayout::operator==
          (FRHIUniformBufferShaderBindingLayout *this,FRHIUniformBufferShaderBindingLayout *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (this->LayoutName).Data.ArrayNum;
  iVar1 = (param_1->LayoutName).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_145a49a9a;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->LayoutName).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->LayoutName).Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_145a49a9a:
  if ((this->field1_0x10).Flags != (param_1->field1_0x10).Flags) {
    return false;
  }
  return true;
}

