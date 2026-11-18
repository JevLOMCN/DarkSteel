// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCore
// Functions: 12

// FCoreCapsule @ 143624070

FCoreCapsule * __thiscall
Chaos::FCoreCapsule::FCoreCapsule(FCoreCapsule *this,TCoreSegment<float> *param_1,float param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_1->MPoint).field_0x8;
  *(undefined8 *)&(this->MSegment).MPoint = *(undefined8 *)&param_1->MPoint;
  *(undefined8 *)&(this->MSegment).MPoint.field_0x8 = uVar1;
  *(undefined8 *)&(this->MSegment).MAxis.field_0x4 = *(undefined8 *)&(param_1->MAxis).field_0x4;
  (this->MSegment).MLength = param_1->MLength;
  this->Radius = param_2;
  return this;
}

// FCoreCapsule @ 1436240a0

FCoreCapsule * __thiscall
Chaos::FCoreCapsule::FCoreCapsule
          (FCoreCapsule *this,TVector<float,3> *param_1,TVector<float,3> *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  *(undefined8 *)&(this->MSegment).MPoint = *(undefined8 *)param_1;
  *(undefined4 *)&(this->MSegment).MPoint.field_0x8 = *(undefined4 *)&param_1->field_0x8;
  fVar4 = *(float *)&param_2->field_0x4 - *(float *)&param_1->field_0x4;
  fVar3 = *(float *)&param_2->field_0x8 - *(float *)&param_1->field_0x8;
  fVar5 = *(float *)param_2 - *(float *)param_1;
  fVar2 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
  fVar1 = 0.0;
  if (__real_38d1b717 <= fVar2) {
    fVar1 = SQRT(fVar2);
    fVar2 = __real_3f800000 / fVar1;
    fVar3 = fVar2 * fVar3;
    fVar4 = fVar2 * fVar4;
    fVar2 = fVar2 * fVar5;
  }
  else {
    fVar3 = 0.0;
    fVar4 = 0.0;
    fVar2 = __real_3f800000;
  }
  *(float *)&(this->MSegment).MAxis = fVar2;
  *(float *)&(this->MSegment).MAxis.field_0x4 = fVar4;
  *(float *)&(this->MSegment).MAxis.field_0x8 = fVar3;
  (this->MSegment).MLength = fVar1;
  this->Radius = param_3;
  return this;
}

// BoundingBox @ 1436247b0

TAABB<double,3> * __thiscall
Chaos::FCoreCapsule::BoundingBox(FCoreCapsule *this,TAABB<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  double dVar5;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = (this->MSegment).MLength;
  uVar1 = *(undefined8 *)&(this->MSegment).MPoint;
  fVar2 = *(float *)&(this->MSegment).MPoint.field_0x8;
  fVar4 = (float)uVar1;
  fVar6 = (float)((ulonglong)uVar1 >> 0x20);
  fVar7 = fVar3 * *(float *)&(this->MSegment).MAxis.field_0x4 +
          *(float *)&(this->MSegment).MPoint.field_0x4;
  fVar8 = fVar3 * *(float *)&(this->MSegment).MAxis + *(float *)&(this->MSegment).MPoint;
  fVar10 = fVar3 * *(float *)&(this->MSegment).MAxis.field_0x8 +
           *(float *)&(this->MSegment).MPoint.field_0x8;
  fVar3 = fVar6;
  if (fVar7 <= fVar6) {
    fVar3 = fVar7;
  }
  fVar9 = fVar8;
  if (fVar8 <= fVar4) {
    fVar9 = fVar4;
  }
  if (fVar4 <= fVar8) {
    fVar8 = fVar4;
  }
  fVar4 = fVar2;
  if (fVar10 <= fVar2) {
    fVar4 = fVar10;
  }
  *(double *)&__return_storage_ptr__->MMin = (double)fVar8;
  *(double *)&(__return_storage_ptr__->MMin).field_0x8 = (double)fVar3;
  *(double *)&__return_storage_ptr__->MMax = (double)fVar9;
  if (fVar6 <= fVar7) {
    fVar6 = fVar7;
  }
  *(double *)&(__return_storage_ptr__->MMin).field_0x10 = (double)fVar4;
  if (fVar2 <= fVar10) {
    fVar2 = fVar10;
  }
  *(double *)&(__return_storage_ptr__->MMax).field_0x8 = (double)fVar6;
  *(double *)&(__return_storage_ptr__->MMax).field_0x10 = (double)fVar2;
  dVar5 = (double)this->Radius;
  *(double *)&__return_storage_ptr__->MMin = (double)fVar8 - dVar5;
  *(double *)&(__return_storage_ptr__->MMin).field_0x8 = (double)fVar3 - dVar5;
  *(double *)&(__return_storage_ptr__->MMax).field_0x8 = dVar5 + (double)fVar6;
  *(double *)&(__return_storage_ptr__->MMin).field_0x10 = (double)fVar4 - dVar5;
  *(double *)&__return_storage_ptr__->MMax = dVar5 + (double)fVar9;
  *(double *)&(__return_storage_ptr__->MMax).field_0x10 = dVar5 + (double)fVar2;
  return __return_storage_ptr__;
}

// GetAxis @ 14362aae0

TVector<float,3> * __thiscall
Chaos::FCoreCapsule::GetAxis(FCoreCapsule *this,TVector<float,3> *__return_storage_ptr__)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)&(this->MSegment).MAxis.field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)&(this->MSegment).MAxis;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// GetCenter @ 14362abc0

TVector<float,3> * __thiscall
Chaos::FCoreCapsule::GetCenter(FCoreCapsule *this,TVector<float,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = (this->MSegment).MLength * __real_3f000000;
  fVar1 = *(float *)&(this->MSegment).MAxis.field_0x4;
  fVar2 = *(float *)&(this->MSegment).MAxis.field_0x8;
  fVar3 = *(float *)&(this->MSegment).MPoint.field_0x4;
  fVar4 = *(float *)&(this->MSegment).MPoint.field_0x8;
  *(float *)__return_storage_ptr__ =
       fVar5 * *(float *)&(this->MSegment).MAxis + *(float *)&(this->MSegment).MPoint;
  *(float *)&__return_storage_ptr__->field_0x4 = fVar5 * fVar1 + fVar3;
  *(float *)&__return_storage_ptr__->field_0x8 = fVar5 * fVar2 + fVar4;
  return __return_storage_ptr__;
}

// GetHeight @ 14362ae50

float __thiscall Chaos::FCoreCapsule::GetHeight(FCoreCapsule *this)

{
  return (this->MSegment).MLength;
}

// GetRadius @ 14362b2a0

float __thiscall Chaos::FCoreCapsule::GetRadius(FCoreCapsule *this)

{
  return this->Radius;
}

// GetSegment @ 14362b330

TCoreSegment<float> * __thiscall Chaos::FCoreCapsule::GetSegment(FCoreCapsule *this)

{
  return &this->MSegment;
}

// GetX1 @ 14362b6b0

TVector<float,3> * __thiscall
Chaos::FCoreCapsule::GetX1(FCoreCapsule *this,TVector<float,3> *__return_storage_ptr__)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)&(this->MSegment).MPoint.field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)&(this->MSegment).MPoint;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// GetX2 @ 14362b6d0

TVector<float,3> * __thiscall
Chaos::FCoreCapsule::GetX2(FCoreCapsule *this,TVector<float,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (this->MSegment).MLength;
  fVar2 = *(float *)&(this->MSegment).MAxis.field_0x4;
  fVar3 = *(float *)&(this->MSegment).MAxis.field_0x8;
  fVar4 = *(float *)&(this->MSegment).MPoint.field_0x4;
  fVar5 = *(float *)&(this->MSegment).MPoint.field_0x8;
  *(float *)__return_storage_ptr__ =
       fVar1 * *(float *)&(this->MSegment).MAxis + *(float *)&(this->MSegment).MPoint;
  *(float *)&__return_storage_ptr__->field_0x4 = fVar1 * fVar2 + fVar4;
  *(float *)&__return_storage_ptr__->field_0x8 = fVar1 * fVar3 + fVar5;
  return __return_storage_ptr__;
}

// Raycast @ 14362e490

bool __thiscall
Chaos::FCoreCapsule::Raycast
          (FCoreCapsule *this,TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
          double param_4,double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  fVar1 = (this->MSegment).MLength;
  uVar2 = *(undefined8 *)&(this->MSegment).MAxis;
  local_58 = (double)(fVar1 * *(float *)&(this->MSegment).MAxis + *(float *)&(this->MSegment).MPoint
                     );
  local_50 = (double)(fVar1 * *(float *)&(this->MSegment).MAxis.field_0x4 +
                     *(float *)&(this->MSegment).MPoint.field_0x4);
  local_48 = (double)(fVar1 * *(float *)&(this->MSegment).MAxis.field_0x8 +
                     *(float *)&(this->MSegment).MPoint.field_0x8);
  uVar3 = *(undefined8 *)&(this->MSegment).MPoint;
  local_40 = (double)(float)uVar3;
  local_38 = (double)(float)((ulonglong)uVar3 >> 0x20);
  local_30 = (double)*(float *)&(this->MSegment).MPoint.field_0x8;
  local_28 = (double)(float)uVar2;
  local_20 = (double)(float)((ulonglong)uVar2 >> 0x20);
  local_18 = (double)*(float *)&(this->MSegment).MAxis.field_0x8;
  bVar4 = Raycasts::RayCapsule
                    (param_1,param_2,param_3,param_4,(double)this->Radius,(double)fVar1,
                     (TVector<double,3> *)&local_28,(TVector<double,3> *)&local_40,
                     (TVector<double,3> *)&local_58,param_5,param_6,param_7);
  return bVar4;
}

// SetRadius @ 14362f360

void __thiscall Chaos::FCoreCapsule::SetRadius(FCoreCapsule *this,float param_1)

{
  this->Radius = param_1;
  return;
}

