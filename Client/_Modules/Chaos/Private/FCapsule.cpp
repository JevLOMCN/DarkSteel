// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 14

// GetRadiusf @ 143792c20

float __thiscall Chaos::FCapsule::GetRadiusf(FCapsule *this)

{
  return *(float *)&this->_padding_;
}

// BoundingBox @ 14389e820

TAABB<double,3> * __thiscall
Chaos::FCapsule::BoundingBox(FCapsule *this,TAABB<double,3> *__return_storage_ptr__)

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
  dVar5 = (double)*(float *)&this->_padding_;
  *(double *)&__return_storage_ptr__->MMin = (double)fVar8 - dVar5;
  *(double *)&(__return_storage_ptr__->MMin).field_0x8 = (double)fVar3 - dVar5;
  *(double *)&(__return_storage_ptr__->MMax).field_0x8 = dVar5 + (double)fVar6;
  *(double *)&(__return_storage_ptr__->MMin).field_0x10 = (double)fVar4 - dVar5;
  *(double *)&__return_storage_ptr__->MMax = dVar5 + (double)fVar9;
  *(double *)&(__return_storage_ptr__->MMax).field_0x10 = dVar5 + (double)fVar2;
  return __return_storage_ptr__;
}

// GetClosestEdgePosition @ 1438ba1a0

TVector<double,3> * __thiscall
Chaos::FCapsule::GetClosestEdgePosition
          (FCapsule *this,TVector<double,3> *__return_storage_ptr__,int param_1,
          TVector<double,3> *param_2)

{
  float fVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  TVector<double> *pTVar5;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40;
  TVector<double> local_28;
  
  uVar2 = *(undefined8 *)&(this->MSegment).MPoint;
  fVar1 = (this->MSegment).MLength;
  local_40._s_0.X = (double)(float)uVar2;
  local_40._s_0.Y = (double)(float)((ulonglong)uVar2 >> 0x20);
  local_40._s_0.Z = (double)*(float *)&(this->MSegment).MPoint.field_0x8;
  local_58._s_0.X =
       (double)(fVar1 * *(float *)&(this->MSegment).MAxis + *(float *)&(this->MSegment).MPoint);
  local_58._s_0.Y =
       (double)(fVar1 * *(float *)&(this->MSegment).MAxis.field_0x4 +
               *(float *)&(this->MSegment).MPoint.field_0x4);
  local_58._s_0.Z =
       (double)(fVar1 * *(float *)&(this->MSegment).MAxis.field_0x8 +
               *(float *)&(this->MSegment).MPoint.field_0x8);
  pTVar5 = FMath::ClosestPointOnLine<double>
                     (&local_28,(TVector<double> *)&local_40._s_0,(TVector<double> *)&local_58._s_0,
                      (TVector<double> *)param_2);
  dVar4 = (pTVar5->field0_0x0)._s_0.Y;
  dVar3 = (pTVar5->field0_0x0)._s_0.Z;
  *(double *)__return_storage_ptr__ = (pTVar5->field0_0x0)._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar4;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar3;
  return __return_storage_ptr__;
}

// GetTypeHash @ 1438bd250

uint __thiscall Chaos::FCapsule::GetTypeHash(FCapsule *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 local_38;
  undefined4 local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_28 = (double)*(float *)&(this->MSegment).MAxis;
  local_20 = (double)*(float *)&(this->MSegment).MAxis.field_0x4;
  local_18 = (double)*(float *)&(this->MSegment).MAxis.field_0x8;
  uVar1 = FCrc::MemCrc_DEPRECATED(&local_28,0x18,0);
  local_30 = *(undefined4 *)&(this->MSegment).MPoint.field_0x8;
  local_38 = *(undefined8 *)&(this->MSegment).MPoint;
  uVar2 = FCrc::MemCrc_DEPRECATED(&local_38,0xc,0);
  uVar4 = uVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar2 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar3 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf;
}

// Raycast @ 1438c8220

bool __thiscall
Chaos::FCapsule::Raycast
          (FCapsule *this,TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
          double param_4,double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,
          int *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  bool bVar5;
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
  local_40 = (double)(fVar1 * *(float *)&(this->MSegment).MAxis + *(float *)&(this->MSegment).MPoint
                     );
  local_38 = (double)(fVar1 * *(float *)&(this->MSegment).MAxis.field_0x4 +
                     *(float *)&(this->MSegment).MPoint.field_0x4);
  local_30 = (double)(fVar1 * *(float *)&(this->MSegment).MAxis.field_0x8 +
                     *(float *)&(this->MSegment).MPoint.field_0x8);
  uVar4 = *(undefined8 *)&(this->MSegment).MPoint;
  local_28 = (double)(float)uVar4;
  local_20 = (double)(float)((ulonglong)uVar4 >> 0x20);
  local_18 = (double)*(float *)&(this->MSegment).MPoint.field_0x8;
  local_58 = (double)*(float *)&(this->MSegment).MAxis;
  local_50 = (double)*(float *)&(this->MSegment).MAxis.field_0x4;
  fVar1 = *(float *)&this->_padding_;
  fVar2 = *(float *)&(this->MSegment).MAxis.field_0x8;
  fVar3 = (this->MSegment).MLength;
  *param_8 = -1;
  local_48 = (double)fVar2;
  bVar5 = Raycasts::RayCapsule
                    (param_1,param_2,param_3,param_4,(double)fVar1,(double)fVar3,
                     (TVector<double,3> *)&local_58,(TVector<double,3> *)&local_28,
                     (TVector<double,3> *)&local_40,param_5,param_6,param_7);
  return bVar5;
}

// Serialize @ 1438d1890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Chaos::FCapsule::Serialize(FCapsule *this,FChaosArchive *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FArchive *pFVar5;
  float local_res8 [2];
  uint local_res10 [2];
  TSerializablePtr<Chaos::FImplicitObjectUnion> local_res18;
  undefined1 local_res20 [8];
  TAABB<double,3> local_58;
  
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  (**(code **)(this->_padding_ + 0x118))(this,local_res20);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  pFVar5 = operator<<<3>((FArchive *)param_1,&(this->MSegment).MPoint);
  operator<<<3>(pFVar5,&(this->MSegment).MAxis);
  plVar1 = (longlong *)param_1->_padding_;
  local_res8[0] = (this->MSegment).MLength;
  if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)local_res8);
    }
  }
  else {
    local_res8[0] = *(float *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  (this->MSegment).MLength = local_res8[0];
  plVar1 = (longlong *)param_1->_padding_;
  local_res10[0] = (uint)this->_padding_;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  *(uint *)&this->_padding_ = local_res10[0];
  iVar4 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar4 < 0x1e) {
    local_58.MMin._0_8_ = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_58.MMin._8_8_ = _UNK_150a9e648;
    local_58.MMax._8_8_ = ___xmm_ffefffffffffffffffefffffffffffff;
    local_58.MMax._16_8_ = _UNK_1508ffb58;
    local_58.MMin._16_8_ = ___xmm_ffefffffffffffff7fefffffffffffff;
    local_58.MMax._0_8_ = _UNK_150a9e6d8;
    TBox<double,3>::SerializeAsAABB((FArchive *)param_1,&local_58);
  }
  iVar4 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar4 < 0x1e) {
    (**(code **)(*(longlong *)param_1->_padding_ + 0x230))
              ((longlong *)param_1->_padding_,&FDestructionObjectVersion::GUID);
    iVar4 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1->_padding_,&FDestructionObjectVersion::GUID);
    if (iVar4 < 5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                         ,0x14d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_res18.Ptr = (FImplicitObjectUnion *)0x0;
      FChaosArchive::SerializePtr<Chaos::FImplicitObjectUnion>(param_1,&local_res18);
      if (((*(byte *)(param_1->_padding_ + 0x28) & 1) != 0) &&
         (local_res18.Ptr != (FImplicitObjectUnion *)0x0)) {
        (**(code **)(local_res18.Ptr)->_padding_)(local_res18.Ptr,1);
      }
    }
  }
  return;
}

// ToString @ 1438d9840

FString * __thiscall Chaos::FCapsule::ToString(FCapsule *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"Capsule: Height: %f Radius: %f");
  return __return_storage_ptr__;
}

// FCapsule @ 143af99c0

FCapsule * __thiscall
Chaos::FCapsule::FCapsule
          (FCapsule *this,TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3)

{
  TVector<float,3> *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,3,'\x03');
  this_00 = &(this->MSegment).MAxis;
  this->_padding_ = (longlong)&___7FCapsule_Chaos__6B_;
  dVar1 = *(double *)param_2;
  dVar2 = *(double *)&param_2->field_0x8;
  dVar3 = *(double *)&param_2->field_0x10;
  dVar4 = *(double *)param_1;
  dVar5 = *(double *)&param_1->field_0x8;
  dVar6 = *(double *)&param_1->field_0x10;
  *(float *)&(this->MSegment).MPoint = (float)dVar4;
  *(float *)&(this->MSegment).MPoint.field_0x4 = (float)dVar5;
  *(float *)&(this->MSegment).MPoint.field_0x8 = (float)dVar6;
  fVar7 = __real_38d1b717;
  *(float *)&(this->MSegment).MAxis.field_0x4 = (float)dVar2 - (float)dVar5;
  *(float *)this_00 = (float)dVar1 - (float)dVar4;
  *(float *)&(this->MSegment).MAxis.field_0x8 = (float)dVar3 - (float)dVar6;
  fVar7 = TVector<float,3>::SafeNormalize(this_00,fVar7);
  (this->MSegment).MLength = fVar7;
  *(float *)&this->_padding_ = (float)param_3;
  return this;
}

// CalculateTransformedBounds @ 143b17860

TAABB<double,3> * __thiscall
Chaos::FCapsule::CalculateTransformedBounds
          (FCapsule *this,TAABB<double,3> *__return_storage_ptr__,TRigidTransform<double,3> *param_1
          )

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined1 auVar5 [12];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar15;
  undefined1 auVar14 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined4 uVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  auVar28 = *(undefined1 (*) [16])&param_1->field_0x10;
  auVar10 = *(undefined1 (*) [16])param_1;
  dVar36 = *(double *)&param_1->field_0x18;
  dVar7 = (double)*(float *)&(this->MSegment).MPoint.field_0x8;
  auVar8 = *(undefined1 (*) [16])param_1;
  fVar1 = *(float *)&(this->MSegment).MPoint;
  auVar23 = blendpd(auVar8,auVar28,2);
  fVar2 = *(float *)&(this->MSegment).MPoint.field_0x4;
  dVar4 = (double)fVar2;
  dVar29 = (double)fVar1;
  auVar37._8_4_ = SUB84(dVar4,0);
  auVar37._0_8_ = dVar29;
  uVar31 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar37._12_4_ = uVar31;
  dVar17 = auVar28._0_8_;
  auVar38._0_8_ = auVar37._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar29;
  auVar38._8_8_ = dVar7 * auVar8._8_8_ - dVar17 * dVar4;
  auVar19._8_4_ = SUB84(dVar4,0);
  auVar19._0_8_ = dVar29;
  auVar19._12_4_ = uVar31;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar7;
  auVar8 = blendpd(auVar19,auVar8,2);
  auVar9._0_8_ = auVar8._0_8_ * dVar17 - auVar23._0_8_ * dVar7;
  auVar9._8_8_ = auVar8._8_8_ * auVar28._8_8_ - auVar23._8_8_ * 0.0;
  auVar8 = blendpd(auVar38,auVar9,2);
  dVar13 = auVar38._8_8_ + auVar38._8_8_;
  dVar6 = auVar9._0_8_ + auVar9._0_8_;
  uVar31 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar39._0_8_ = auVar8._0_8_ + auVar8._0_8_;
  auVar39._8_8_ = auVar8._8_8_ + auVar8._8_8_;
  auVar24._8_4_ = SUB84(dVar6,0);
  auVar24._0_8_ = dVar13;
  auVar24._12_4_ = uVar31;
  auVar18._8_4_ = SUB84(dVar6,0);
  auVar18._0_8_ = dVar13;
  auVar18._12_4_ = uVar31;
  auVar8 = blendpd(auVar10,auVar28,2);
  auVar19 = blendpd(auVar18,auVar39,2);
  auVar25._0_8_ = auVar24._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar13;
  auVar25._8_8_ = auVar39._0_8_ * auVar10._8_8_ - dVar17 * dVar6;
  auVar20._0_8_ = auVar19._0_8_ * dVar17 - auVar8._0_8_ * auVar39._0_8_;
  auVar20._8_8_ = auVar19._8_8_ * auVar28._8_8_ - auVar8._8_8_ * auVar39._8_8_;
  fVar3 = (this->MSegment).MLength;
  auVar28._8_4_ = SUB84(auVar25._8_8_,0);
  auVar28._0_8_ = auVar25._0_8_;
  auVar28._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
  dVar32 = *(double *)&param_1->field_0x18;
  dVar17 = dVar13 * dVar36 + dVar29 + auVar28._8_8_ + *(double *)&param_1->field_0x20;
  dVar29 = dVar6 * dVar36 + dVar4 + auVar20._0_8_ + *(double *)&param_1->field_0x28;
  auVar8 = blendpd(auVar25,auVar20,2);
  dVar16 = (double)(fVar3 * *(float *)&(this->MSegment).MAxis.field_0x4 + fVar2);
  auVar28 = *(undefined1 (*) [16])&param_1->field_0x10;
  dVar30 = (double)(fVar3 * *(float *)&(this->MSegment).MAxis + fVar1);
  auVar10 = *(undefined1 (*) [16])param_1;
  dVar13 = (double)(fVar3 * *(float *)&(this->MSegment).MAxis.field_0x8 +
                   *(float *)&(this->MSegment).MPoint.field_0x8);
  dVar36 = auVar39._0_8_ * dVar36 + dVar7 + auVar8._0_8_ + *(double *)&param_1->field_0x30;
  auVar33._8_4_ = SUB84(dVar16,0);
  auVar33._0_8_ = dVar30;
  uVar31 = (undefined4)((ulonglong)dVar16 >> 0x20);
  auVar33._12_4_ = uVar31;
  dVar4 = auVar28._0_8_;
  auVar8 = blendpd(auVar10,auVar28,2);
  auVar34._0_8_ = auVar33._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar30;
  auVar34._8_8_ = dVar13 * auVar10._8_8_ - dVar4 * dVar16;
  auVar23._8_4_ = SUB84(dVar16,0);
  auVar23._0_8_ = dVar30;
  auVar23._12_4_ = uVar31;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar13;
  auVar10 = blendpd(auVar23,auVar10,2);
  auVar11._0_8_ = auVar10._0_8_ * dVar4 - auVar8._0_8_ * dVar13;
  auVar11._8_8_ = auVar10._8_8_ * auVar28._8_8_ - auVar8._8_8_ * 0.0;
  auVar10 = *(undefined1 (*) [16])param_1;
  auVar8 = blendpd(auVar34,auVar11,2);
  dVar7 = auVar34._8_8_ + auVar34._8_8_;
  dVar6 = auVar11._0_8_ + auVar11._0_8_;
  uVar31 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar35._0_8_ = auVar8._0_8_ + auVar8._0_8_;
  auVar35._8_8_ = auVar8._8_8_ + auVar8._8_8_;
  auVar26._8_4_ = SUB84(dVar6,0);
  auVar26._0_8_ = dVar7;
  auVar26._12_4_ = uVar31;
  auVar21._8_4_ = SUB84(dVar6,0);
  auVar21._0_8_ = dVar7;
  auVar21._12_4_ = uVar31;
  auVar19 = blendpd(auVar21,auVar35,2);
  auVar8 = blendpd(auVar10,auVar28,2);
  auVar27._0_8_ = auVar26._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar7;
  auVar27._8_8_ = auVar35._0_8_ * auVar10._8_8_ - dVar4 * dVar6;
  dVar15 = auVar8._8_8_ * auVar35._8_8_;
  auVar22._0_8_ = auVar19._0_8_ * dVar4 - auVar8._0_8_ * auVar35._0_8_;
  auVar22._8_8_ = auVar19._8_8_ * auVar28._8_8_ - dVar15;
  auVar12._8_4_ = SUB84(auVar27._8_8_,0);
  auVar12._0_8_ = auVar27._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
  auVar5._4_8_ = dVar15;
  auVar5._0_4_ = (int)((ulonglong)dVar17 >> 0x20);
  auVar14._0_8_ = auVar5._0_8_ << 0x20;
  auVar14._8_4_ = SUB84(dVar29,0);
  auVar14._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  dVar4 = dVar7 * dVar32 + dVar30 + auVar12._8_8_ + *(double *)&param_1->field_0x20;
  dVar7 = dVar6 * dVar32 + dVar16 + auVar22._0_8_ + *(double *)&param_1->field_0x28;
  dVar29 = auVar14._8_8_;
  dVar6 = dVar4;
  if (dVar4 <= dVar17) {
    dVar6 = dVar17;
  }
  auVar28 = blendpd(auVar27,auVar22,2);
  if (dVar17 <= dVar4) {
    dVar4 = dVar17;
  }
  dVar17 = (double)*(float *)&this->_padding_;
  dVar32 = auVar35._0_8_ * dVar32 + dVar13 + auVar28._0_8_ + *(double *)&param_1->field_0x30;
  dVar13 = dVar29;
  if (dVar7 <= dVar29) {
    dVar13 = dVar7;
  }
  if (dVar29 <= dVar7) {
    dVar29 = dVar7;
  }
  dVar7 = dVar36;
  if (dVar36 <= dVar32) {
    dVar7 = dVar32;
  }
  if (dVar32 <= dVar36) {
    dVar36 = dVar32;
  }
  *(double *)&__return_storage_ptr__->MMin = dVar4 - dVar17;
  *(double *)&(__return_storage_ptr__->MMin).field_0x8 = dVar13 - dVar17;
  *(double *)&(__return_storage_ptr__->MMin).field_0x10 = dVar36 - dVar17;
  *(double *)&__return_storage_ptr__->MMax = dVar6 + dVar17;
  *(double *)&(__return_storage_ptr__->MMax).field_0x8 = dVar29 + dVar17;
  *(double *)&(__return_storage_ptr__->MMax).field_0x10 = dVar7 + dVar17;
  return __return_storage_ptr__;
}

// CopyGeometry @ 143b1a8f0

TRefCountPtr<Chaos::FImplicitObject> __thiscall Chaos::FCapsule::CopyGeometry(FCapsule *this)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  FImplicitObject *this_00;
  FImplicitObject *in_RDX;
  
  this_00 = ::operator_new(0x40);
  if (this_00 != (FImplicitObject *)0x0) {
    FImplicitObject::FImplicitObject(this_00,3,'\x03');
    in_RDX->_padding_ = (longlong)this_00;
    this_00->_padding_ = (longlong)&___7FCapsule_Chaos__6B_;
    lVar1 = *(longlong *)&(this->MSegment).MPoint.field_0x8;
    this_00[1]._padding_ = *(longlong *)&(this->MSegment).MPoint;
    this_00[1]._padding_ = lVar1;
    uVar2 = (this->MSegment).MAxis.field_0x8;
    uVar3 = (this->MSegment).MAxis.field_0x9;
    uVar4 = (this->MSegment).MAxis.field_0xa;
    uVar5 = (this->MSegment).MAxis.field_0xb;
    this_00[1].Margin = (float)*(undefined4 *)&(this->MSegment).MAxis.field_0x4;
    this_00[1].bIsConvex = (bool)uVar2;
    this_00[1].bDoCollide = (bool)uVar3;
    this_00[1].bHasBoundingBox = (bool)uVar4;
    this_00[1].bIsTracked = (bool)uVar5;
    *(float *)&this_00[1].Type = (this->MSegment).MLength;
    this_00->Margin = *(float *)&this->_padding_;
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
    return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometryWithScale @ 143b1a990

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::FCapsule::CopyGeometryWithScale(FCapsule *this,TVector<double,3> *param_1)

{
  TVector<float,3> *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double *pdVar11;
  FImplicitObject *this_01;
  undefined1 in_R8B;
  undefined7 in_register_00000081;
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  pdVar11 = (double *)CONCAT71(in_register_00000081,in_R8B);
  this_01 = ::operator_new(0x40);
  if (this_01 == (FImplicitObject *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    dVar8 = pdVar11[1];
    dVar9 = *pdVar11;
    if (((dVar8 <= dVar9) || (dVar14 = pdVar11[2], dVar13 = dVar9, dVar14 <= dVar9)) &&
       (dVar14 = pdVar11[2], dVar13 = dVar14, dVar8 <= dVar14)) {
      dVar13 = dVar8;
    }
    fVar12 = (this->MSegment).MLength;
    fVar1 = *(float *)&this->_padding_;
    uVar10 = *(undefined8 *)&(this->MSegment).MPoint;
    fVar17 = *(float *)&(this->MSegment).MPoint.field_0x8;
    fVar2 = *(float *)&(this->MSegment).MAxis.field_0x4;
    fVar3 = *(float *)&(this->MSegment).MPoint.field_0x4;
    fVar4 = *(float *)&(this->MSegment).MAxis;
    fVar5 = *(float *)&(this->MSegment).MAxis.field_0x8;
    fVar6 = *(float *)&(this->MSegment).MPoint;
    fVar7 = *(float *)&(this->MSegment).MPoint.field_0x8;
    FImplicitObject::FImplicitObject(this_01,3,'\x03');
    this_00 = (TVector<float,3> *)((longlong)&this_01[1]._padding_ + 4);
    this_01->_padding_ = (longlong)&___7FCapsule_Chaos__6B_;
    fVar15 = (float)dVar9 * (float)uVar10;
    fVar16 = (float)dVar8 * (float)((ulonglong)uVar10 >> 0x20);
    *(float *)&this_01[1]._padding_ = fVar15;
    *(float *)((longlong)&this_01[1]._padding_ + 4) = fVar16;
    fVar17 = (float)dVar14 * fVar17;
    *(float *)&this_01[1]._padding_ = fVar17;
    this_01[1].Margin = (fVar12 * fVar2 + fVar3) * (float)dVar8 - fVar16;
    fVar2 = __real_38d1b717;
    *(float *)this_00 = (fVar12 * fVar4 + fVar6) * (float)dVar9 - fVar15;
    *(float *)&this_01[1].bIsConvex = (fVar12 * fVar5 + fVar7) * (float)dVar14 - fVar17;
    fVar12 = TVector<float,3>::SafeNormalize(this_00,fVar2);
    *(FImplicitObject **)param_1 = this_01;
    *(float *)&this_01[1].Type = fVar12;
    this_01->Margin = (float)((double)fVar1 * dVar13);
    LOCK();
    *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// GetRadius @ 143b21fe0

double __thiscall Chaos::FCapsule::GetRadius(FCapsule *this)

{
  return (double)*(float *)&this->_padding_;
}

// PhiWithNormal @ 143b2a7a0

double __thiscall
Chaos::FCapsule::PhiWithNormal(FCapsule *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar3 = *(undefined8 *)&(this->MSegment).MPoint;
  uVar4 = *(undefined8 *)&(this->MSegment).MAxis;
  fVar7 = (float)uVar3;
  fVar8 = (float)((ulonglong)uVar3 >> 0x20);
  dVar5 = *(double *)&param_1->field_0x8;
  dVar6 = *(double *)&param_1->field_0x10;
  fVar9 = (float)uVar4;
  fVar10 = (float)((ulonglong)uVar4 >> 0x20);
  fVar11 = (float)(*(double *)param_1 - (double)fVar7) * fVar9 +
           (float)(dVar5 - (double)fVar8) * fVar10 +
           (float)(dVar6 - (double)*(float *)&(this->MSegment).MPoint.field_0x8) *
           *(float *)&(this->MSegment).MAxis.field_0x8;
  fVar1 = (this->MSegment).MLength;
  if (fVar1 <= fVar11) {
    fVar11 = fVar1;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  fVar1 = *(float *)&(this->MSegment).MAxis.field_0x8;
  fVar2 = *(float *)&(this->MSegment).MPoint.field_0x8;
  *(double *)param_2 = *(double *)param_1 - (double)(fVar11 * fVar9 + fVar7);
  *(double *)&param_2->field_0x8 = dVar5 - (double)(fVar11 * fVar10 + fVar8);
  *(double *)&param_2->field_0x10 = dVar6 - (double)(fVar11 * fVar1 + fVar2);
  fVar1 = *(float *)&this->_padding_;
  dVar6 = TVector<double,3>::SafeNormalize(param_2,__real_3f1a36e2e0000000);
  return dVar6 - (double)fVar1;
}

// GetInertiaTensor @ 143c06a30

PMatrix<double,3,3> * __thiscall
Chaos::FCapsule::GetInertiaTensor
          (FCapsule *this,PMatrix<double,3,3> *__return_storage_ptr__,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = (double)(this->MSegment).MLength;
  if (__real_7fefffffffffffff <= dVar5) {
    dVar5 = __real_7fefffffffffffff;
  }
  dVar3 = (double)*(float *)&this->_padding_;
  if (__real_7fefffffffffffff <= (double)*(float *)&this->_padding_) {
    dVar3 = __real_7fefffffffffffff;
  }
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  dVar4 = dVar3 * dVar3;
  dVar1 = dVar3 * __real_4044000000000000;
  dVar2 = dVar3 * __real_4030000000000000;
  dVar3 = (((dVar5 * dVar5 * __real_4034000000000000 + dVar4 * __real_4040000000000000) * dVar3 +
            dVar5 * dVar5 * __real_4014000000000000 * dVar5 +
           dVar5 * __real_4046800000000000 * dVar4) * param_1) /
          (dVar5 * __real_404e000000000000 + dVar3 * __real_4054000000000000);
  dVar6 = dVar5 * __real_403e000000000000;
  dVar5 = dVar5 * __real_402e000000000000;
  *(double *)__return_storage_ptr__ = dVar3;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(double *)&__return_storage_ptr__->field_0x28 = dVar3;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = 0x3ff0000000000000;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  *(double *)&__return_storage_ptr__->field_0x50 =
       ((dVar5 + dVar2) * dVar4 * param_1) / (dVar6 + dVar1);
  return __return_storage_ptr__;
}

