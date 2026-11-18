// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// GetRangeImpl @ 149e69320

bool __thiscall
FPCGIndexAccessor::GetRangeImpl
          (FPCGIndexAccessor *this,TArrayView<int,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  
  iVar5 = (**(code **)(param_3->_padding_ + 0x10))(param_3);
  iVar1 = param_1->ArrayNum;
  uVar7 = 0;
  if (0 < iVar1) {
    lVar9 = 0;
    do {
      iVar8 = param_2 + 1;
      uVar6 = 0;
      if ((int)uVar7 < iVar1) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      *(int *)(lVar9 + (longlong)param_1->DataPtr) = param_2;
      lVar9 = lVar9 + 4;
      param_2 = 0;
      if (iVar8 < iVar5) {
        param_2 = iVar8;
      }
    } while ((int)uVar7 < iVar1);
  }
  return true;
}

