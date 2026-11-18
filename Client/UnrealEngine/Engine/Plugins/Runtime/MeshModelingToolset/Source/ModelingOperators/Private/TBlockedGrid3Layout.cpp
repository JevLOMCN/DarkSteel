// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// Resize @ 14c9849b0

void __thiscall
UE::Geometry::TBlockedGrid3Layout<8>::Resize
          (TBlockedGrid3Layout<8> *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (0x7ffffffe < (longlong)param_1 * (longlong)param_2 * (longlong)param_3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(int64)DimI * (int64)DimJ * (int64)DimK < 2147483647",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\BlockedLayout3.h"
                       ,0x4d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar6 = param_1 >> 0x1f & 7;
  uVar3 = param_1 + uVar6;
  uVar7 = param_2 >> 0x1f & 7;
  uVar4 = param_2 + uVar7;
  uVar8 = param_3 >> 0x1f & 7;
  uVar5 = param_3 + uVar8;
  (this->BlockDimensions).field0_0x0._s_0.X = (uint)((uVar3 & 7) != uVar6) + ((int)uVar3 >> 3);
  (this->BlockDimensions).field0_0x0._s_0.Y = (uint)((uVar4 & 7) != uVar7) + ((int)uVar4 >> 3);
  (this->BlockDimensions).field0_0x0._s_0.Z = (uint)((uVar5 & 7) != uVar8) + ((int)uVar5 >> 3);
  (this->Dimensions).field0_0x0._s_0.X = param_1;
  (this->Dimensions).field0_0x0._s_0.Y = param_2;
  (this->Dimensions).field0_0x0._s_0.Z = param_3;
  return;
}

