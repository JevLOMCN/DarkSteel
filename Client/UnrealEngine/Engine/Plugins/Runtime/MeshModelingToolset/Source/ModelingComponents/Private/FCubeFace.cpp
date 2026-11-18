// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 3

// FCubeFace @ 14cac93f0

FCubeFace * __thiscall
UE::Geometry::FCubeGrid::FCubeFace::FCubeFace
          (FCubeFace *this,TVector<double> *param_1,EFaceDirection param_2,uchar param_3)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  FCubeFace *pFVar6;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar7 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar8 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar9 [16];
  
  this->Direction = param_2;
  this->CubeGridPower = param_3;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (param_1->field0_0x0)._s_0.Z;
  auVar7 = roundpd(unaff_XMM6,auVar7,1);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (param_1->field0_0x0)._s_0.Y;
  auVar8 = roundpd(unaff_XMM7,auVar8,1);
  dVar2 = (param_1->field0_0x0)._s_0.X;
  (this->Center).field0_0x0._s_0.X = 0.5;
  (this->Center).field0_0x0._s_0.Y = 0.5;
  (this->Center).field0_0x0._s_0.Z = 0.5;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar2;
  auVar9 = roundpd(unaff_XMM8,auVar9,1);
  bVar1 = ((param_2 ^ (char)param_2 >> 7) - ((char)param_2 >> 7)) - 1;
  if (2 < bVar1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FCubeFace *)(*pcVar4)();
      return pFVar6;
    }
  }
  (this->Center).field0_0x0.XYZ[(char)bVar1] = 0.0;
  dVar2 = (this->Center).field0_0x0._s_0.Y;
  dVar3 = (this->Center).field0_0x0._s_0.Z;
  (this->Center).field0_0x0._s_0.X = auVar9._0_8_ + (this->Center).field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = auVar8._0_8_ + dVar2;
  (this->Center).field0_0x0._s_0.Z = auVar7._0_8_ + dVar3;
  return this;
}

// GetMaxCorner @ 14cb10c50

TVector<double> * __thiscall
UE::Geometry::FCubeGrid::FCubeFace::GetMaxCorner
          (FCubeFace *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  dVar1 = (this->Center).field0_0x0._s_0.Y;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (this->Center).field0_0x0._s_0.X;
  auVar3 = roundpd(auVar2,auVar2,2);
  (__return_storage_ptr__->field0_0x0)._s_0.X = auVar3._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar1;
  auVar4 = roundpd(auVar3,auVar4,2);
  dVar1 = (this->Center).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = auVar4._0_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar1;
  auVar4 = roundpd(auVar4,auVar3,2);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar4._0_8_;
  return __return_storage_ptr__;
}

// GetMinCorner @ 14cb11380

TVector<double> * __thiscall
UE::Geometry::FCubeGrid::FCubeFace::GetMinCorner
          (FCubeFace *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  dVar1 = (this->Center).field0_0x0._s_0.Y;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (this->Center).field0_0x0._s_0.X;
  auVar3 = roundpd(auVar2,auVar2,1);
  (__return_storage_ptr__->field0_0x0)._s_0.X = auVar3._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar1;
  auVar4 = roundpd(auVar3,auVar4,1);
  dVar1 = (this->Center).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = auVar4._0_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar1;
  auVar4 = roundpd(auVar4,auVar3,1);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar4._0_8_;
  return __return_storage_ptr__;
}

