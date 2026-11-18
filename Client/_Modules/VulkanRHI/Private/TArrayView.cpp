// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// operator[] @ 145b05df0

/* WARNING: Enum "VkFormat": Some values do not have unique names */

VkFormat * __thiscall TArrayView<enum_VkFormat_const_,int>::operator[](void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  VkFormat *pVVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)((longlong)this + 8)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pVVar4 = (VkFormat *)(*pcVar1)();
      return pVVar4;
    }
  }
  return (VkFormat *)(*(longlong *)this + (longlong)param_1 * 4);
}

// operator[] @ 145bc9ba0

VkImage_T ** __thiscall
TArrayView<VkImage_T_*_const,int>::operator[](TArrayView<VkImage_T_*_const,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  VkImage_T **ppVVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppVVar4 = (VkImage_T **)(*pcVar1)();
      return ppVVar4;
    }
  }
  return this->DataPtr + param_1;
}

