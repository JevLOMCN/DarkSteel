// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// BoundingBox @ 143b5e9a0

TAABB<double,3> * __thiscall
Chaos::FTaperedCapsule::BoundingBox(FTaperedCapsule *this,TAABB<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x8;
  uVar1 = *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&(this->LocalBoundingBox).MMin;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&(this->LocalBoundingBox).MMax;
  uVar3 = *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMax = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar3;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = uVar1;
  return __return_storage_ptr__;
}

// GetTypeHash @ 143b690a0

uint __thiscall Chaos::FTaperedCapsule::GetTypeHash(FTaperedCapsule *this)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = FCrc::MemCrc_DEPRECATED(&this->Axis,0xc,0);
  uVar3 = FCrc::MemCrc_DEPRECATED(&this->Origin,0xc,0);
  fVar1 = this->Radius2;
  uVar4 = uVar3 - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar5 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xc;
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
  uVar4 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
  uVar6 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar5 = (uVar3 - uVar6) - uVar4 ^ uVar6 << 10;
  uVar3 = (int)this->Radius1 - (int)fVar1 ^ (uint)fVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - (int)fVar1 ^ uVar3 << 8;
  uVar7 = ((int)fVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar7) - uVar2 ^ uVar7 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar3 << 0x10;
  uVar7 = (uVar7 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar2) - uVar7 ^ uVar7 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar3 << 10;
  uVar7 = (uVar7 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  uVar3 = (int)this->Height - uVar7 ^ uVar7 >> 0xd;
  uVar2 = (-0x61c88647 - uVar7) - uVar3 ^ uVar3 << 8;
  uVar7 = (uVar7 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar7) - uVar2 ^ uVar7 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar3 << 0x10;
  uVar7 = (uVar7 - uVar3) - uVar2 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar2) - uVar7 ^ uVar7 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar3 << 10;
  uVar3 = (uVar7 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  uVar2 = ((uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar4 = (-0x61c88647 - uVar3) - uVar2 ^ uVar2 << 8;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 << 10;
  return (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// PhiWithNormal @ 143b6c380

double __thiscall
Chaos::FTaperedCapsule::PhiWithNormal
          (FTaperedCapsule *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  
  dVar8 = *(double *)&param_1->field_0x8;
  dVar7 = *(double *)&param_1->field_0x10;
  fVar1 = this->Height;
  fVar10 = this->Radius1;
  fVar9 = (float)(*(double *)param_1 - (double)*(float *)&this->Origin) * *(float *)&this->Axis +
          (float)(dVar8 - (double)*(float *)&(this->Origin).field_0x4) *
          *(float *)&(this->Axis).field_0x4 +
          (float)(dVar7 - (double)*(float *)&(this->Origin).field_0x8) *
          *(float *)&(this->Axis).field_0x8;
  if (fVar1 <= fVar9) {
    fVar9 = fVar1;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  fVar2 = this->Radius2;
  fVar3 = *(float *)&(this->Axis).field_0x8;
  fVar4 = *(float *)&(this->Axis).field_0x4;
  fVar5 = *(float *)&(this->Origin).field_0x8;
  fVar6 = *(float *)&(this->Origin).field_0x4;
  if (fVar1 <= __real_322bcc77) {
    if (fVar10 <= fVar2) {
      fVar10 = fVar2;
    }
  }
  else {
    fVar10 = (fVar9 / fVar1) * (fVar2 - fVar10) + fVar10;
  }
  *(double *)param_2 =
       *(double *)param_1 - (double)(fVar9 * *(float *)&this->Axis + *(float *)&this->Origin);
  *(double *)&param_2->field_0x8 = dVar8 - (double)(fVar9 * fVar4 + fVar6);
  *(double *)&param_2->field_0x10 = dVar7 - (double)(fVar9 * fVar3 + fVar5);
  dVar8 = TVector<double,3>::SafeNormalize(param_2,__real_3f1a36e2e0000000);
  return dVar8 - (double)fVar10;
}

