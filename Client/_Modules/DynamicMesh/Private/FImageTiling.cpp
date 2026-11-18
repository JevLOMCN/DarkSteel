// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// GetTile @ 14c8f86c0

FImageTile * __thiscall
UE::Geometry::FImageTiling::GetTile
          (FImageTiling *this,FImageTile *__return_storage_ptr__,int param_1,int param_2)

{
  FVector2i_u_0 FVar1;
  FVector2i_u_0 FVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar7 = (this->Dimensions).Width;
  iVar10 = 0;
  if (param_2 < 0) {
    param_2 = iVar10;
  }
  iVar9 = (this->Dimensions).Height;
  iVar4 = (uint)(iVar7 % this->TileWidth != 0) + iVar7 / this->TileWidth;
  iVar8 = param_1 / iVar4;
  iVar4 = param_1 % iVar4;
  iVar5 = this->TileWidth * iVar4 - param_2;
  iVar6 = iVar7;
  if (iVar5 < iVar7) {
    iVar6 = iVar5;
  }
  iVar5 = iVar10;
  if (0 < iVar6) {
    iVar5 = iVar6;
  }
  iVar3 = this->TileHeight * iVar8 - param_2;
  iVar6 = iVar9;
  if (iVar3 < iVar9) {
    iVar6 = iVar3;
  }
  iVar3 = 0;
  if (0 < iVar6) {
    iVar3 = iVar6;
  }
  iVar6 = this->TileWidth;
  FVar1._s_0.Y = iVar3;
  FVar1._s_0.X = iVar5;
  (__return_storage_ptr__->Start).field0_0x0 = FVar1;
  iVar6 = (iVar4 + 1) * iVar6 + param_2;
  if (iVar6 < iVar7) {
    iVar7 = iVar6;
  }
  iVar6 = 0;
  if (0 < iVar7) {
    iVar6 = iVar7;
  }
  iVar7 = (iVar8 + 1) * this->TileHeight + param_2;
  if (iVar7 < iVar9) {
    iVar9 = iVar7;
  }
  if (0 < iVar9) {
    iVar10 = iVar9;
  }
  FVar2._s_0.Y = iVar10;
  FVar2._s_0.X = iVar6;
  (__return_storage_ptr__->End).field0_0x0 = FVar2;
  __return_storage_ptr__->Width = iVar6 - iVar5;
  __return_storage_ptr__->Height = iVar10 - iVar3;
  return __return_storage_ptr__;
}

