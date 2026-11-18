// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 5

// SetBaseAddress @ 146a928c0

void __thiscall
FSlateVectorArtInstanceData::SetBaseAddress(FSlateVectorArtInstanceData *this,float param_1)

{
  (this->Data).field0_0x0._s_0.W = (double)param_1;
  return;
}

// SetPosition @ 146a94840

void __thiscall
FSlateVectorArtInstanceData::SetPosition
          (FSlateVectorArtInstanceData *this,TVector2<double> *param_1)

{
  (this->Data).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Data).field0_0x0._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  return;
}

// SetPositionFixedPoint16 @ 146a94860

void __thiscall
FSlateVectorArtInstanceData::SetPositionFixedPoint16
          (FSlateVectorArtInstanceData *this,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y * __real_4030000000000000 + __real_3fe0000000000000;
  dVar1 = (this->Data).field0_0x0._s_0.Y;
  (this->Data).field0_0x0._s_0.X =
       (double)((uint)(longlong)(this->Data).field0_0x0._s_0.X & 0xffff0000 |
               (int)ROUND((param_1->field0_0x0)._s_0.X * __real_4030000000000000 +
                          __real_3fe0000000000000) >> 1);
  (this->Data).field0_0x0._s_0.Y =
       (double)((uint)(longlong)dVar1 & 0xffff0000 | (int)ROUND(dVar2) >> 1);
  return;
}

// SetScale @ 146a94b30

void __thiscall
FSlateVectorArtInstanceData::SetScale(FSlateVectorArtInstanceData *this,float param_1)

{
  (this->Data).field0_0x0._s_0.Z = (double)param_1;
  return;
}

// SetScaleFixedPoint16 @ 146a94b50

void __thiscall
FSlateVectorArtInstanceData::SetScaleFixedPoint16(FSlateVectorArtInstanceData *this,float param_1)

{
  (this->Data).field0_0x0._s_0.Z =
       (double)((uint)(longlong)(this->Data).field0_0x0._s_0.Z & 0xffff0000 |
               (int)ROUND(param_1 * __real_44000000 + __real_3f000000) >> 1);
  return;
}

