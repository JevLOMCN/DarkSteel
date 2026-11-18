// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 16

// BoundingBox @ 143755a50

TAABB<double,3> * __thiscall
Chaos::TSphere<double,3>::BoundingBox
          (TSphere<double,3> *this,TAABB<double,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)&this->Center;
  fVar2 = *(float *)&(this->Center).field_0x4;
  fVar3 = *(float *)&this->_padding_;
  fVar4 = *(float *)&(this->Center).field_0x8;
  *(double *)&__return_storage_ptr__->MMin = (double)(fVar1 - fVar3);
  *(double *)&(__return_storage_ptr__->MMin).field_0x8 = (double)(fVar2 - fVar3);
  *(double *)&(__return_storage_ptr__->MMin).field_0x10 = (double)(fVar4 - fVar3);
  *(double *)&__return_storage_ptr__->MMax = (double)(fVar1 + fVar3);
  *(double *)&(__return_storage_ptr__->MMax).field_0x8 = (double)(fVar2 + fVar3);
  *(double *)&(__return_storage_ptr__->MMax).field_0x10 = (double)(fVar4 + fVar3);
  return __return_storage_ptr__;
}

// GetRadiusf @ 143792c10

float __thiscall Chaos::TSphere<double,3>::GetRadiusf(TSphere<double,3> *this)

{
  return *(float *)&this->_padding_;
}

// GetTypeHash @ 1438bd000

uint __thiscall Chaos::TSphere<double,3>::GetTypeHash(TSphere<double,3> *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(&this->Center,0xc,0);
  uVar2 = (uint)this->_padding_;
  uVar3 = uVar1 - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar4 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar1 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 << 10;
  return (uVar4 - uVar2) - uVar1 ^ uVar2 >> 0xf;
}

// Raycast @ 1438c81c0

bool __thiscall
Chaos::TSphere<double,3>::Raycast
          (TSphere<double,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          double param_3,double param_4,double *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8)

{
  bool bVar1;
  
  *param_8 = -1;
  bVar1 = Raycasts::RaySphere<double,3>
                    (param_1,param_2,param_3,param_4,&this->Center,*(float *)&this->_padding_,
                     param_5,param_6,param_7);
  return bVar1;
}

// Serialize @ 1438d17f0

void __thiscall Chaos::TSphere<double,3>::Serialize(TSphere<double,3> *this,FChaosArchive *param_1)

{
  longlong *plVar1;
  uint local_res8 [2];
  
  (**(code **)(this->_padding_ + 0x118))(this,local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  operator<<<3>((FArchive *)param_1,&this->Center);
  plVar1 = (longlong *)param_1->_padding_;
  local_res8[0] = (uint)this->_padding_;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  *(uint *)&this->_padding_ = local_res8[0];
  return;
}

// ToString @ 1438d9010

FString * __thiscall
Chaos::TSphere<double,3>::ToString(TSphere<double,3> *this,FString *__return_storage_ptr__)

{
  FString local_28 [2];
  
  ::FString::PrintfImpl(local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"Sphere: Center:%s, Radius:%f");
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// TSphere<double,3> @ 1439c05c0

TSphere<double,3> * __thiscall
Chaos::TSphere<double,3>::TSphere<double,3>
          (TSphere<double,3> *this,TVector<double,3> *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,3,'\0');
  this->_padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
  dVar1 = *(double *)&param_1->field_0x10;
  dVar2 = *(double *)&param_1->field_0x8;
  *(float *)&this->Center = (float)*(double *)param_1;
  *(float *)&this->_padding_ = (float)param_2;
  *(float *)&(this->Center).field_0x4 = (float)dVar2;
  *(float *)&(this->Center).field_0x8 = (float)dVar1;
  return this;
}

// ~TSphere<double,3> @ 1439c0dd0

void __thiscall Chaos::TSphere<double,3>::~TSphere<double,3>(TSphere<double,3> *this)

{
  this->_padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
  FImplicitObject::~FImplicitObject((FImplicitObject *)this);
  return;
}

// CalculateTransformedBounds @ 1439c7470

TAABB<double,3> * __thiscall
Chaos::TSphere<double,3>::CalculateTransformedBounds
          (TSphere<double,3> *this,TAABB<double,3> *__return_storage_ptr__,
          TRigidTransform<double,3> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar14;
  double dVar13;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  dVar1 = *(double *)&param_1->field_0x18;
  auVar2 = *(undefined1 (*) [16])param_1;
  dVar15 = (double)*(float *)&(this->Center).field_0x8 * *(double *)&param_1->field_0x50;
  dVar10 = *(double *)&param_1->field_0x58 * 0.0;
  auVar3 = *(undefined1 (*) [16])&param_1->field_0x10;
  dVar11 = (double)*(float *)&this->Center * *(double *)&param_1->field_0x40;
  dVar13 = (double)*(float *)&(this->Center).field_0x4 * *(double *)&param_1->field_0x48;
  uVar14 = (undefined4)((ulonglong)dVar13 >> 0x20);
  auVar5 = blendpd(auVar2,auVar3,2);
  auVar16._8_4_ = SUB84(dVar13,0);
  auVar16._0_8_ = dVar11;
  auVar16._12_4_ = uVar14;
  dVar4 = auVar3._0_8_;
  auVar17._0_8_ = auVar16._8_8_ * auVar2._0_8_ - auVar2._8_8_ * dVar11;
  auVar17._8_8_ = dVar15 * auVar2._8_8_ - dVar4 * dVar13;
  auVar18._8_4_ = SUB84(dVar13,0);
  auVar18._0_8_ = dVar11;
  auVar18._12_4_ = uVar14;
  auVar2._8_4_ = SUB84(dVar10,0);
  auVar2._0_8_ = dVar15;
  auVar2._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar2 = blendpd(auVar18,auVar2,2);
  auVar6._0_8_ = auVar2._0_8_ * dVar4 - auVar5._0_8_ * dVar15;
  auVar6._8_8_ = auVar2._8_8_ * auVar3._8_8_ - auVar5._8_8_ * dVar10;
  auVar2 = *(undefined1 (*) [16])param_1;
  auVar18 = blendpd(auVar17,auVar6,2);
  dVar10 = auVar17._8_8_ + auVar17._8_8_;
  dVar12 = auVar6._0_8_ + auVar6._0_8_;
  auVar19._0_8_ = auVar18._0_8_ + auVar18._0_8_;
  auVar19._8_8_ = auVar18._8_8_ + auVar18._8_8_;
  auVar8._8_4_ = SUB84(dVar12,0);
  auVar8._0_8_ = dVar10;
  uVar14 = (undefined4)((ulonglong)dVar12 >> 0x20);
  auVar8._12_4_ = uVar14;
  auVar5._8_4_ = SUB84(dVar12,0);
  auVar5._0_8_ = dVar10;
  auVar5._12_4_ = uVar14;
  auVar6 = blendpd(auVar5,auVar19,2);
  auVar18 = blendpd(auVar2,auVar3,2);
  auVar9._0_8_ = auVar8._8_8_ * auVar2._0_8_ - auVar2._8_8_ * dVar10;
  auVar9._8_8_ = auVar19._0_8_ * auVar2._8_8_ - dVar4 * dVar12;
  auVar7._0_8_ = auVar6._0_8_ * dVar4 - auVar18._0_8_ * auVar19._0_8_;
  auVar7._8_8_ = auVar6._8_8_ * auVar3._8_8_ - auVar18._8_8_ * auVar19._8_8_;
  auVar3._8_4_ = SUB84(auVar9._8_8_,0);
  auVar3._0_8_ = auVar9._0_8_;
  auVar3._12_4_ = (int)((ulonglong)auVar9._8_8_ >> 0x20);
  dVar4 = (double)*(float *)&this->_padding_;
  auVar2 = blendpd(auVar9,auVar7,2);
  dVar11 = dVar10 * dVar1 + dVar11 + auVar3._8_8_ + *(double *)&param_1->field_0x20;
  dVar13 = dVar12 * dVar1 + dVar13 + auVar7._0_8_ + *(double *)&param_1->field_0x28;
  dVar15 = auVar19._0_8_ * dVar1 + dVar15 + auVar2._0_8_ + *(double *)&param_1->field_0x30;
  *(double *)&__return_storage_ptr__->MMin = dVar11 - dVar4;
  *(double *)&(__return_storage_ptr__->MMin).field_0x8 = dVar13 - dVar4;
  *(double *)&(__return_storage_ptr__->MMin).field_0x10 = dVar15 - dVar4;
  *(double *)&__return_storage_ptr__->MMax = dVar11 + dVar4;
  *(double *)&(__return_storage_ptr__->MMax).field_0x8 = dVar13 + dVar4;
  *(double *)&(__return_storage_ptr__->MMax).field_0x10 = dVar15 + dVar4;
  return __return_storage_ptr__;
}

// CopyGeometry @ 1439c8c90

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TSphere<double,3>::CopyGeometry(TSphere<double,3> *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  FImplicitObject *this_00;
  FImplicitObject *in_RDX;
  
  this_00 = ::operator_new(0x30);
  if (this_00 != (FImplicitObject *)0x0) {
    uVar1 = *(undefined4 *)&this->Center;
    uVar2 = *(undefined4 *)&(this->Center).field_0x4;
    uVar3 = *(undefined4 *)&(this->Center).field_0x8;
    fVar4 = *(float *)&this->_padding_;
    FImplicitObject::FImplicitObject(this_00,3,'\0');
    in_RDX->_padding_ = (longlong)this_00;
    this_00->_padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
    *(undefined4 *)&this_00[1]._padding_ = uVar1;
    *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) = uVar2;
    *(undefined4 *)&this_00[1]._padding_ = uVar3;
    this_00->Margin = fVar4;
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
    return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometryWithScale @ 1439c8d90

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TSphere<double,3>::CopyGeometryWithScale(TSphere<double,3> *this,TVector<double,3> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  FImplicitObject *this_00;
  double *in_R8;
  double dVar7;
  double dVar8;
  
  this_00 = ::operator_new(0x30);
  if (this_00 == (FImplicitObject *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    dVar5 = in_R8[1];
    dVar6 = *in_R8;
    if (((dVar5 <= dVar6) || (dVar8 = in_R8[2], dVar7 = dVar6, dVar8 <= dVar6)) &&
       (dVar8 = in_R8[2], dVar7 = dVar8, dVar5 <= dVar8)) {
      dVar7 = dVar5;
    }
    fVar1 = *(float *)&this->_padding_;
    fVar2 = *(float *)&this->Center;
    fVar3 = *(float *)&(this->Center).field_0x4;
    fVar4 = *(float *)&(this->Center).field_0x8;
    FImplicitObject::FImplicitObject(this_00,3,'\0');
    *(FImplicitObject **)param_1 = this_00;
    this_00->_padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
    *(float *)&this_00[1]._padding_ = (float)dVar6 * fVar2;
    *(float *)((longlong)&this_00[1]._padding_ + 4) = (float)dVar5 * fVar3;
    *(float *)&this_00[1]._padding_ = (float)dVar8 * fVar4;
    this_00->Margin = (float)((double)fVar1 * dVar7);
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// FindClosestIntersectionImp @ 1439cc540

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::TSphere<double,3>::FindClosestIntersectionImp
          (TSphere<double,3> *this,Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar14 [16];
  
  dVar1 = *(double *)param_1;
  dVar12 = *(double *)param_2 - dVar1;
  dVar2 = *(double *)&param_1->field_0x10;
  dVar8 = *(double *)&param_2->field_0x10 - dVar2;
  dVar3 = *(double *)&param_1->field_0x8;
  dVar4 = *(double *)&param_2->field_0x8 - dVar3;
  dVar10 = dVar12 * dVar12 + dVar4 * dVar4 + dVar8 * dVar8;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar10;
  auVar14 = sqrtpd(unaff_XMM9,auVar14);
  uVar13 = dVar12;
  uVar6 = dVar8;
  uVar7 = dVar4;
  if ((dVar10 != __real_3ff0000000000000) &&
     (uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     __real_3e45798ee0000000 <= dVar10)) {
    dVar10 = __real_3ff0000000000000 / SQRT(dVar10);
    uVar13 = dVar12 * dVar10;
    uVar6 = dVar8 * dVar10;
    uVar7 = dVar4 * dVar10;
  }
  dVar11 = dVar2 - (double)*(float *)&(this->Center).field_0x8;
  dVar10 = dVar3 - (double)*(float *)&(this->Center).field_0x4;
  dVar12 = dVar1 - (double)*(float *)&this->Center;
  dVar4 = dVar12 * (double)uVar13 + dVar10 * (double)uVar7 + dVar11 * (double)uVar6;
  dVar8 = (double)*(float *)&this->_padding_ + param_3;
  auVar9._0_8_ = dVar8 * dVar8;
  auVar9._8_8_ = 0;
  dVar10 = (dVar4 * dVar4 - (dVar12 * dVar12 + dVar10 * dVar10 + dVar11 * dVar11)) + auVar9._0_8_;
  if (0.0 <= dVar10) {
    dVar8 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar4,0) ^ (uint)__xmm_80000000000000008000000000000000);
    dVar12 = auVar14._0_8_;
    if (dVar10 != 0.0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = dVar10;
      auVar14 = sqrtpd(auVar9,auVar5);
      dVar8 = dVar8 - auVar14._0_8_;
      dVar4 = auVar14._0_8_ - dVar4;
      if ((0.0 <= dVar4) && (dVar4 <= dVar12)) {
        if ((0.0 <= dVar8) && (dVar8 <= dVar12)) {
          if (dVar4 < dVar8) {
            *(double *)&__return_storage_ptr__->First = (double)uVar13 * dVar4 + dVar1;
            *(double *)&(__return_storage_ptr__->First).field_0x8 = (double)uVar7 * dVar4 + dVar3;
            *(double *)&(__return_storage_ptr__->First).field_0x10 = (double)uVar6 * dVar4 + dVar2;
            __return_storage_ptr__->Second = true;
            return __return_storage_ptr__;
          }
          *(double *)&__return_storage_ptr__->First = (double)uVar13 * dVar8 + dVar1;
          *(double *)&(__return_storage_ptr__->First).field_0x8 = (double)uVar7 * dVar8 + dVar3;
          *(double *)&(__return_storage_ptr__->First).field_0x10 = (double)uVar6 * dVar8 + dVar2;
          __return_storage_ptr__->Second = true;
          return __return_storage_ptr__;
        }
        *(double *)&__return_storage_ptr__->First = (double)uVar13 * dVar4 + dVar1;
        *(double *)&(__return_storage_ptr__->First).field_0x8 = (double)uVar7 * dVar4 + dVar3;
        *(double *)&(__return_storage_ptr__->First).field_0x10 = (double)uVar6 * dVar4 + dVar2;
        __return_storage_ptr__->Second = true;
        return __return_storage_ptr__;
      }
    }
    if ((0.0 <= dVar8) && (dVar8 <= dVar12)) {
      *(double *)&__return_storage_ptr__->First = (double)uVar13 * dVar8 + dVar1;
      *(double *)&(__return_storage_ptr__->First).field_0x8 = (double)uVar7 * dVar8 + dVar3;
      *(double *)&(__return_storage_ptr__->First).field_0x10 = (double)uVar6 * dVar8 + dVar2;
      __return_storage_ptr__->Second = true;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->First = 0;
  *(undefined8 *)&(__return_storage_ptr__->First).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->First).field_0x10 = 0;
  __return_storage_ptr__->Second = false;
  return __return_storage_ptr__;
}

// GetRadius @ 1439d38d0

double __thiscall Chaos::TSphere<double,3>::GetRadius(TSphere<double,3> *this)

{
  return (double)*(float *)&this->_padding_;
}

// PhiWithNormal @ 1439d5db0

double __thiscall
Chaos::TSphere<double,3>::PhiWithNormal
          (TSphere<double,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  fVar1 = *(float *)&(this->Center).field_0x8;
  fVar2 = *(float *)&(this->Center).field_0x4;
  dVar4 = *(double *)&param_1->field_0x10;
  dVar3 = *(double *)&param_1->field_0x8;
  *(double *)param_2 = *(double *)param_1 - (double)*(float *)&this->Center;
  *(double *)&param_2->field_0x8 = dVar3 - (double)fVar2;
  *(double *)&param_2->field_0x10 = dVar4 - (double)fVar1;
  fVar1 = *(float *)&this->_padding_;
  dVar4 = TVector<double,3>::SafeNormalize(param_2,__real_3f1a36e2e0000000);
  return dVar4 - (double)fVar1;
}

// Serialize @ 1439de0b0

void __thiscall Chaos::TSphere<double,3>::Serialize(TSphere<double,3> *this,FArchive *param_1)

{
  longlong *plVar1;
  uint local_res8 [2];
  
  FImplicitObject::SerializeImp((FImplicitObject *)this,param_1);
  operator<<<3>(param_1,&this->Center);
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = (uint)this->_padding_;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  *(uint *)&this->_padding_ = local_res8[0];
  return;
}

// ComputeLocalSamplePoints @ 143bf8f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TSphere<double,3>::ComputeLocalSamplePoints
          (TSphere<double,3> *this,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *pTVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStackY_138 [32];
  FImplicitObject local_f0;
  undefined8 local_d0;
  float local_c8;
  ulonglong local_c0;
  
  fVar8 = __real_38d1b717;
  local_c0 = __security_cookie.value ^ (ulonglong)auStackY_138;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &__return_storage_ptr__->ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if (fVar8 < *(float *)&this->_padding_) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (0 < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,param_1,&__return_storage_ptr__->AllocatorInstance,0,piVar2);
    }
    fVar3 = *(float *)&this->_padding_;
    FImplicitObject::FImplicitObject(&local_f0,3,'\0');
    local_d0 = 0;
    local_f0._padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
    local_c8 = 0.0;
    local_f0.Margin = fVar3;
    if ((param_1 < 2) || (fVar3 < fVar8)) {
      uVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x18,8,1,&__return_storage_ptr__->AllocatorInstance,piVar1,piVar2);
      lVar17 = (longlong)(int)uVar14;
      dVar20 = (double)(float)local_d0;
      uVar13 = 0;
      if ((int)uVar14 < *piVar1) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      dVar7 = (double)local_d0._4_4_;
      dVar6 = (double)local_c8;
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar15;
      }
      pFVar16 = (__return_storage_ptr__->AllocatorInstance).Data;
      *(double *)(pFVar16 + lVar17 * 0x18) = dVar20;
      *(double *)(pFVar16 + lVar17 * 0x18 + 8) = dVar7;
      *(double *)(pFVar16 + lVar17 * 0x18 + 0x10) = dVar6;
    }
    else {
      dVar20 = (double)fVar3;
      uVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x18,8,param_1,&__return_storage_ptr__->AllocatorInstance,piVar1,piVar2);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_void___cdecl_Chaos::TSphereSpecializeSamplingHelper<double,3>::ComputeGoldenSpiralPoints(TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>&___ptr64,Chaos::TVector<double,3>_const&___ptr64,double,int,bool,bool,int)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_void___cdecl_Chaos::TSphereSpecializeSamplingHelper<double,3>::ComputeGoldenSpiralPoints(TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>&___ptr64,Chaos::TVector<double,3>_const&___ptr64,double,int,bool,bool,int)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_void___cdecl_Chaos::TSphereSpecializeSamplingHelper<double,3>::ComputeGoldenSpiralPoints(TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>&___ptr64,Chaos::TVector<double,3>_const&___ptr64,double,int,bool,bool,int)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        `public:_static_void___cdecl_Chaos::TSphereSpecializeSamplingHelper<double,3>::ComputeGoldenSpiralPoints(TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>&___ptr64,Chaos::TVector<double,3>_const&___ptr64,double,int,bool,bool,int)'
        ::__l2::GRIncrement = __real_4024553362c3bf1a;
        _Init_thread_footer(&`public:_static_void___cdecl_Chaos::TSphereSpecializeSamplingHelper<double,3>::ComputeGoldenSpiralPoints(TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>&___ptr64,Chaos::TVector<double,3>_const&___ptr64,double,int,bool,bool,int)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      dVar10 = __real_bff0000000000000;
      dVar9 = __real_3fe0000000000000;
      dVar6 = __real_3ff0000000000000;
      lVar17 = (longlong)(int)uVar13 * 0x18;
      iVar12 = -uVar13;
      dVar7 = __real_3ff0000000000000 / (double)param_1;
      do {
        dVar19 = (double)(int)(iVar12 + uVar13) + dVar9;
        dVar18 = dVar6 - (dVar19 + dVar19) * dVar7;
        dVar19 = dVar10;
        if ((dVar10 <= dVar18) && (dVar19 = dVar18, dVar6 <= dVar18)) {
          dVar19 = dVar6;
        }
        dVar19 = acos(dVar19);
        dVar18 = sin(dVar19);
        uVar14 = 0;
        if ((int)uVar13 < *piVar1) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar15;
        }
        pFVar16 = (__return_storage_ptr__->AllocatorInstance).Data + lVar17;
        lVar17 = lVar17 + 0x18;
        uVar13 = uVar13 + 1;
        __libm_sse2_sincos_();
        *(double *)pFVar16 = extraout_XMM0_Qb * dVar20 * dVar18;
        *(double *)(pFVar16 + 8) = extraout_XMM0_Qa * dVar20 * dVar18;
        dVar19 = cos(dVar19);
        *(double *)(pFVar16 + 0x10) = dVar19 * dVar20;
      } while ((int)(iVar12 + uVar13) < param_1);
    }
    local_f0._padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
    FImplicitObject::~FImplicitObject(&local_f0);
  }
  else {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&__return_storage_ptr__->AllocatorInstance,piVar2);
    *piVar1 = iVar12 + 1;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar16 = pFVar4 + (longlong)iVar12 * 0x18;
    *(undefined8 *)pFVar16 = 0;
    *(undefined8 *)(pFVar16 + 8) = 0;
    *(undefined8 *)(pFVar4 + (longlong)iVar12 * 0x18 + 0x10) = 0;
  }
  return __return_storage_ptr__;
}

