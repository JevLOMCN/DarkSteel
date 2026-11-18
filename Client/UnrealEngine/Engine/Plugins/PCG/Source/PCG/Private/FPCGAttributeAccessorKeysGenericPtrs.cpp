// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// GetGenericObjectKeys @ 1499f5f30

bool __thiscall
FPCGAttributeAccessorKeysGenericPtrs::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysGenericPtrs *this,int param_1,TArrayView<void_*,int> *param_2)

{
  longlong lVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  void **ppvVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  
  ppvVar8 = param_2->DataPtr;
  iVar12 = (this->Ptrs).ArrayNum;
  if (iVar12 == 0) {
    return false;
  }
  if (iVar12 <= param_1) {
    param_1 = param_1 % iVar12;
  }
  uVar9 = 0;
  iVar11 = (int)*(undefined8 *)&param_2->ArrayNum;
  if (0 < iVar11) {
    lVar10 = (longlong)param_1;
    do {
      uVar6 = 0;
      if (param_1 < iVar12) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar1 = lVar10 + 1;
      uVar6 = param_1 + 1;
      pvVar2 = (this->Ptrs).DataPtr[lVar10];
      uVar7 = 0;
      if ((int)uVar9 < iVar11) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar9 = uVar9 + 1;
      *ppvVar8 = pvVar2;
      ppvVar8 = ppvVar8 + 1;
      iVar12 = (this->Ptrs).ArrayNum;
      param_1 = 0;
      if ((int)uVar6 < iVar12) {
        param_1 = uVar6;
      }
      lVar10 = 0;
      if ((int)uVar6 < iVar12) {
        lVar10 = lVar1;
      }
    } while ((int)uVar9 < iVar11);
  }
  return true;
}

// GetGenericObjectKeys @ 1499f60f0

bool __thiscall
FPCGAttributeAccessorKeysGenericPtrs::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysGenericPtrs *this,int param_1,
          TArrayView<void_const_*,int> *param_2)

{
  longlong lVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  void **ppvVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  
  ppvVar8 = param_2->DataPtr;
  iVar12 = (this->Ptrs).ArrayNum;
  if (iVar12 == 0) {
    return false;
  }
  if (iVar12 <= param_1) {
    param_1 = param_1 % iVar12;
  }
  uVar9 = 0;
  iVar11 = (int)*(undefined8 *)&param_2->ArrayNum;
  if (0 < iVar11) {
    lVar10 = (longlong)param_1;
    do {
      uVar6 = 0;
      if (param_1 < iVar12) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar1 = lVar10 + 1;
      uVar6 = param_1 + 1;
      pvVar2 = (this->Ptrs).DataPtr[lVar10];
      uVar7 = 0;
      if ((int)uVar9 < iVar11) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar9 = uVar9 + 1;
      *ppvVar8 = pvVar2;
      ppvVar8 = ppvVar8 + 1;
      iVar12 = (this->Ptrs).ArrayNum;
      param_1 = 0;
      if ((int)uVar6 < iVar12) {
        param_1 = uVar6;
      }
      lVar10 = 0;
      if ((int)uVar6 < iVar12) {
        lVar10 = lVar1;
      }
    } while ((int)uVar9 < iVar11);
  }
  return true;
}

// GetNum @ 1499f9bb0

int __thiscall
FPCGAttributeAccessorKeysGenericPtrs::GetNum(FPCGAttributeAccessorKeysGenericPtrs *this)

{
  return (this->Ptrs).ArrayNum;
}

