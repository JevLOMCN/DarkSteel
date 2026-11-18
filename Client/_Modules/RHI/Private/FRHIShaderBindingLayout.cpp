// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// FRHIShaderBindingLayout @ 145c46120

/* WARNING: Type propagation algorithm not settling */

FRHIShaderBindingLayout * __thiscall
FRHIShaderBindingLayout::FRHIShaderBindingLayout
          (FRHIShaderBindingLayout *this,EShaderBindingLayoutFlags param_1,
          TArrayView<FRHIUniformBufferShaderBindingLayout_const_,int> *param_2)

{
  code *pcVar1;
  FRHIUniformBufferShaderBindingLayout *pFVar2;
  bool bVar3;
  FRHIShaderBindingLayout *pFVar4;
  uint uVar5;
  wchar_t *pwVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  this->Flags = param_1;
  pFVar4 = (FRHIShaderBindingLayout *)&this->UniformBufferEntries;
  uVar8 = 0;
  this->Hash = 0;
  *(undefined4 *)&(this->UniformBufferEntries).Elements[0].field_0x14 = 0;
  *(undefined4 *)&(this->UniformBufferEntries).Elements[1].field_0x14 = 0;
  *(undefined4 *)&(this->UniformBufferEntries).Elements[2].field_0x14 = 0;
  *(undefined4 *)&(this->UniformBufferEntries).Elements[3].field_0x14 = 0;
  *(undefined4 *)&(this->UniformBufferEntries).Elements[4].field_0x14 = 0;
  *(undefined4 *)&(this->UniformBufferEntries).Elements[5].field_0x14 = 0;
  *(undefined4 *)&(this->UniformBufferEntries).Elements[6].field_0x14 = 0;
  *(undefined4 *)&(this->UniformBufferEntries).Elements[7].field_0x14 = 0;
  uVar5 = param_2->ArrayNum;
  ((TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> *)pFVar4)->Elements[0].
  LayoutName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniformBufferEntries).Elements[0].LayoutName.Data.ArrayNum = 0;
  (this->UniformBufferEntries).Elements[0].LayoutName.Data.ArrayMax = 0;
  (this->UniformBufferEntries).Elements[0].field1_0x10.Flags = 0;
  (this->UniformBufferEntries).Elements[1].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar2 = (this->UniformBufferEntries).Elements;
  pFVar2[1].LayoutName.Data.ArrayNum = 0;
  pFVar2[1].LayoutName.Data.ArrayMax = 0;
  (this->UniformBufferEntries).Elements[1].field1_0x10.Flags = 0;
  (this->UniformBufferEntries).Elements[2].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar2 = (this->UniformBufferEntries).Elements;
  pFVar2[2].LayoutName.Data.ArrayNum = 0;
  pFVar2[2].LayoutName.Data.ArrayMax = 0;
  (this->UniformBufferEntries).Elements[2].field1_0x10.Flags = 0;
  (this->UniformBufferEntries).Elements[3].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar2 = (this->UniformBufferEntries).Elements;
  pFVar2[3].LayoutName.Data.ArrayNum = 0;
  pFVar2[3].LayoutName.Data.ArrayMax = 0;
  (this->UniformBufferEntries).Elements[3].field1_0x10.Flags = 0;
  (this->UniformBufferEntries).Elements[4].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar2 = (this->UniformBufferEntries).Elements;
  pFVar2[4].LayoutName.Data.ArrayNum = 0;
  pFVar2[4].LayoutName.Data.ArrayMax = 0;
  (this->UniformBufferEntries).Elements[4].field1_0x10.Flags = 0;
  (this->UniformBufferEntries).Elements[5].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar2 = (this->UniformBufferEntries).Elements;
  pFVar2[5].LayoutName.Data.ArrayNum = 0;
  pFVar2[5].LayoutName.Data.ArrayMax = 0;
  (this->UniformBufferEntries).Elements[5].field1_0x10.Flags = 0;
  (this->UniformBufferEntries).Elements[6].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar2 = (this->UniformBufferEntries).Elements;
  pFVar2[6].LayoutName.Data.ArrayNum = 0;
  pFVar2[6].LayoutName.Data.ArrayMax = 0;
  (this->UniformBufferEntries).Elements[6].field1_0x10.Flags = 0;
  (this->UniformBufferEntries).Elements[7].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar2 = (this->UniformBufferEntries).Elements;
  pFVar2[7].LayoutName.Data.ArrayNum = 0;
  pFVar2[7].LayoutName.Data.ArrayMax = 0;
  (this->UniformBufferEntries).Elements[7].field1_0x10.Flags = 0;
  this->NumUniformBufferEntries = uVar5;
  if ((7 < uVar5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumUniformBufferEntries < MaxUniformBufferEntries",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderBindingLayout.h"
                         ,0x55,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FRHIShaderBindingLayout *)(*pcVar1)();
    return pFVar4;
  }
  uVar5 = 0;
  uVar7 = uVar8;
  if (this->NumUniformBufferEntries != 0) {
    do {
      uVar9 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FRHIShaderBindingLayout *)(*pcVar1)();
        return pFVar4;
      }
      pFVar2 = param_2->DataPtr + (int)uVar9;
      ::FString::operator=
                (&(this->UniformBufferEntries).Elements[uVar7].LayoutName,&pFVar2->LayoutName);
      uVar5 = ((this->UniformBufferEntries).Elements[uVar7].field1_0x10.Flags ^
              (pFVar2->field1_0x10).Flags) & 0xf ^
              (this->UniformBufferEntries).Elements[uVar7].field1_0x10.Flags;
      (this->UniformBufferEntries).Elements[uVar7].field1_0x10.Flags = uVar5;
      uVar5 = (uVar5 ^ (pFVar2->field1_0x10).Flags) & 0x3f0 ^ uVar5;
      (this->UniformBufferEntries).Elements[uVar7].field1_0x10.Flags = uVar5;
      uVar5 = (uVar5 ^ (pFVar2->field1_0x10).Flags) & 0x3fc00 ^ uVar5;
      (this->UniformBufferEntries).Elements[uVar7].field1_0x10.Flags = uVar5;
      uVar5 = (uVar5 ^ (pFVar2->field1_0x10).Flags) & 0x3fc0000 ^ uVar5;
      (this->UniformBufferEntries).Elements[uVar7].field1_0x10.Flags = uVar5;
      (this->UniformBufferEntries).Elements[uVar7].field1_0x10.Flags =
           (uVar5 ^ (pFVar2->field1_0x10).Flags) & 0x3ffffff ^ (pFVar2->field1_0x10).Flags;
      (this->UniformBufferEntries).Elements[uVar7].field1_0x10 = pFVar2->field1_0x10;
      uVar5 = this->NumUniformBufferEntries;
      uVar7 = (ulonglong)(uVar9 + 1);
    } while (uVar9 + 1 < uVar5);
  }
  uVar9 = this->Hash;
  uVar9 = this->Flags + 0x9e3779b9 + uVar9 * 0x40 + (uVar9 >> 2) ^ uVar9;
  this->Hash = (uVar9 >> 2) + 0x9e3779b9 + uVar9 * 0x40 + uVar5 ^ uVar9;
  uVar5 = 0;
  for (; pFVar4 != this + 1;
      pFVar4 = (FRHIShaderBindingLayout *)
               ((FRHIUniformBufferShaderBindingLayout_u_16 *)&pFVar4->UniformBufferEntries + 2)) {
    if (pFVar4->NumUniformBufferEntries == 0) {
      pwVar6 = L"";
      uVar5 = 0;
    }
    else {
      pwVar6 = *(wchar_t **)pFVar4;
      uVar5 = pFVar4->NumUniformBufferEntries - 1;
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar5,pwVar6);
    uVar5 = (uint)uVar8 ^
            (int)(uVar8 >> 2) +
            ((uVar5 >> 2) + 0x9e3779b9 +
             ((FRHIUniformBufferShaderBindingLayout_u_16 *)&pFVar4->UniformBufferEntries)->Flags +
             uVar5 * 0x40 ^ uVar5) + (uint)uVar8 * 0x40 + -0x61c88647;
    uVar8 = (ulonglong)uVar5;
  }
  uVar9 = this->Hash;
  this->Hash = (uVar9 >> 2) + 0x9e3779b9 + uVar9 * 0x40 + uVar5 ^ uVar9;
  return this;
}

