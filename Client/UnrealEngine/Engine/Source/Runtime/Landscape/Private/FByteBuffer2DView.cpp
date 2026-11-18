// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 3

// CopyTo @ 145f86d00

void __thiscall FByteBuffer2DView::CopyTo(FByteBuffer2DView *this,uchar *param_1,int param_2)

{
  int iVar1;
  uchar *puVar2;
  int iVar3;
  
  for (iVar3 = 0; (0 < param_2 && (iVar3 < this->NumY)); iVar3 = iVar3 + 1) {
    puVar2 = this->BufferStart + iVar3 * this->ByteStrideY;
    iVar1 = this->NumX;
    if (param_2 < this->NumX) {
      iVar1 = param_2;
    }
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *puVar2;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + this->ByteStrideX;
    }
    param_2 = param_2 - this->NumX;
  }
  return;
}

// CopyToAndCalcIsAllZero @ 145f86e00

bool __thiscall
FByteBuffer2DView::CopyToAndCalcIsAllZero(FByteBuffer2DView *this,uchar *param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  
  bVar4 = 0;
  for (iVar3 = 0; (0 < param_2 && (iVar3 < this->NumY)); iVar3 = iVar3 + 1) {
    pbVar2 = this->BufferStart + iVar3 * this->ByteStrideY;
    iVar1 = this->NumX;
    if (param_2 < this->NumX) {
      iVar1 = param_2;
    }
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      bVar4 = bVar4 | *pbVar2;
      *param_1 = *pbVar2;
      param_1 = param_1 + 1;
      pbVar2 = pbVar2 + this->ByteStrideX;
    }
    param_2 = param_2 - this->NumX;
  }
  return bVar4 == 0;
}

// Num @ 145f99d20

int __thiscall FByteBuffer2DView::Num(FByteBuffer2DView *this)

{
  return this->NumY * this->NumX;
}

