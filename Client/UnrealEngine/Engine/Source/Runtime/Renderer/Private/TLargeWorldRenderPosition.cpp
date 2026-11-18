// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// TLargeWorldRenderPosition<double><double> @ 1448d0fb0

TLargeWorldRenderPosition<double> * __thiscall
TLargeWorldRenderPosition<double>::TLargeWorldRenderPosition<double><double>
          (TLargeWorldRenderPosition<double> *this,TVector<double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar5 [16];
  TLargeWorldRenderScalar<double> local_38;
  TLargeWorldRenderScalar<double> local_28;
  TLargeWorldRenderScalar<double> local_18;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  auVar2._0_8_ = dVar1 * __real_3ea0000000000000 + __real_3fe0000000000000;
  auVar2._8_8_ = 0;
  auVar2 = roundpd(auVar2,auVar2,1);
  local_18.Tile = auVar2._0_8_;
  local_18.Offset = dVar1 - local_18.Tile * __real_4140000000000000;
  TLargeWorldRenderScalar<double>::Validate(&local_18,dVar1);
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  auVar3._0_8_ = dVar1 * __real_3ea0000000000000 + __real_3fe0000000000000;
  auVar3._8_8_ = 0;
  auVar2 = roundpd(in_XMM3,auVar3,1);
  local_38.Tile = auVar2._0_8_;
  auVar5._8_8_ = auVar2._8_8_;
  auVar5._0_8_ = local_38.Tile * __real_4140000000000000;
  local_38.Offset = dVar1 - auVar5._0_8_;
  TLargeWorldRenderScalar<double>::Validate(&local_38,dVar1);
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  auVar4._0_8_ = dVar1 * __real_3ea0000000000000 + __real_3fe0000000000000;
  auVar4._8_8_ = 0;
  auVar2 = roundpd(auVar5,auVar4,1);
  local_28.Tile = auVar2._0_8_;
  local_28.Offset = dVar1 - local_28.Tile * __real_4140000000000000;
  TLargeWorldRenderScalar<double>::Validate(&local_28,dVar1);
  (this->Tile).field0_0x0._s_0.X = local_18.Tile;
  (this->Tile).field0_0x0._s_0.Y = local_38.Tile;
  (this->Tile).field0_0x0._s_0.Z = local_28.Tile;
  (this->Offset).field0_0x0._s_0.X = local_18.Offset;
  (this->Offset).field0_0x0._s_0.Y = local_38.Offset;
  (this->Offset).field0_0x0._s_0.Z = local_28.Offset;
  return this;
}

