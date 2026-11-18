// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 3

// CopyTo @ 145f86d70

void __thiscall FHeightBuffer2DView::CopyTo(FHeightBuffer2DView *this,ushort *param_1,int param_2)

{
  uchar *puVar1;
  byte bVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  
  if (0 < param_2) {
    iVar4 = 0;
    do {
      if (this->NumY <= iVar4) {
        return;
      }
      iVar5 = this->NumX;
      if (param_2 < this->NumX) {
        iVar5 = param_2;
      }
      if (iVar5 != 0) {
        puVar3 = &this->BufferStart[iVar4 * this->StrideY].field0_0x0._s_0.G;
        do {
          puVar1 = puVar3 + 1;
          bVar2 = *puVar3;
          puVar3 = puVar3 + 4;
          *param_1 = (ushort)*puVar1 * 0x100 + (ushort)bVar2;
          param_1 = param_1 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      param_2 = param_2 - this->NumX;
      iVar4 = iVar4 + 1;
    } while (0 < param_2);
  }
  return;
}

// CopyToAndCalcIsAllZero @ 145f86e80

bool __thiscall
FHeightBuffer2DView::CopyToAndCalcIsAllZero(FHeightBuffer2DView *this,ushort *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
                     ,0x2a2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return true;
}

// Num @ 145f99d30

int __thiscall FHeightBuffer2DView::Num(FHeightBuffer2DView *this)

{
  return this->NumY * this->NumX;
}

