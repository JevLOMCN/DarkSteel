// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 40

// Handle @ 1437945a0

TPBDRigidParticleHandleImp<double,3,1> * __thiscall
Chaos::TPBDRigidParticles<double,3>::Handle(TPBDRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TPBDRigidParticleHandleImp<double,3,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return *(TPBDRigidParticleHandleImp<double,3,1> **)(this->_padding_ + (longlong)param_1 * 8);
}

// PCom @ 14379b1c0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticles<double,3>::PCom
          (TPBDRigidParticles<double,3> *this,TVector<double,3> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  undefined8 uVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  TVector<double,3> *pTVar12;
  TVector<double> *pTVar13;
  uint uVar14;
  longlong lVar15;
  TVector<double>_u_0 local_98;
  TVector<double> local_78 [2];
  undefined1 local_48 [32];
  
  lVar15 = (longlong)param_1;
  uVar14 = (uint)~param_1 >> 0x1f;
  uVar11 = 0;
  if (param_1 < *(int *)&(this->MP).field_0x10) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TVector<double,3> *)(*pcVar6)();
      return pTVar12;
    }
  }
  lVar4 = *(longlong *)&(this->MP).field_0x8;
  uVar11 = 0;
  if (param_1 < *(int *)&(this->MQ).field_0x10) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TVector<double,3> *)(*pcVar6)();
      return pTVar12;
    }
  }
  lVar5 = *(longlong *)&(this->MQ).field_0x8;
  local_48._0_8_ = (undefined8)*(float *)(lVar5 + lVar15 * 0x10);
  local_48._8_8_ = (undefined8)*(float *)(lVar5 + 4 + lVar15 * 0x10);
  uVar2 = *(undefined8 *)(lVar5 + 8 + lVar15 * 0x10);
  dVar7 = (double)(float)((ulonglong)uVar2 >> 0x20);
  uVar11 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar11 = uVar14;
  }
  local_48._24_4_ = SUB84(dVar7,0);
  local_48._16_8_ = (double)(float)uVar2;
  local_48._28_4_ = (int)((ulonglong)dVar7 >> 0x20);
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TVector<double,3> *)(*pcVar6)();
      return pTVar12;
    }
  }
  pdVar1 = (double *)(this->_padding_ + lVar15 * 0x18);
  local_98._s_0.X = *pdVar1;
  local_98._s_0.Y = pdVar1[1];
  local_98._s_0.Z = *(double *)(this->_padding_ + 0x10 + lVar15 * 0x18);
  pTVar13 = UE::Math::TQuat<double>::RotateVector
                      ((TQuat<double> *)local_48,local_78,(TVector<double> *)&local_98._s_0);
  dVar8 = (pTVar13->field0_0x0)._s_0.X;
  dVar9 = (pTVar13->field0_0x0)._s_0.Y;
  dVar7 = *(double *)(lVar4 + 8 + lVar15 * 0x18);
  dVar3 = *(double *)(lVar4 + lVar15 * 0x18);
  *(double *)&__return_storage_ptr__->field_0x10 =
       (pTVar13->field0_0x0)._s_0.Z + *(double *)(lVar4 + 0x10 + lVar15 * 0x18);
  *(double *)&__return_storage_ptr__->field_0x8 = dVar9 + dVar7;
  *(double *)__return_storage_ptr__ = dVar8 + dVar3;
  return __return_storage_ptr__;
}

// QCom @ 14379fbc0

TRotation<double,3> * __thiscall
Chaos::TPBDRigidParticles<double,3>::QCom
          (TPBDRigidParticles<double,3> *this,TRotation<double,3> *__return_storage_ptr__,
          int param_1)

{
  double *pdVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  uint uVar21;
  TRotation<double,3> *pTVar22;
  longlong lVar23;
  
  lVar23 = (longlong)param_1;
  uVar21 = 0;
  if (param_1 < *(int *)&(this->MQ).field_0x10) {
    uVar21 = (uint)~param_1 >> 0x1f;
  }
  if (uVar21 == 0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      pTVar22 = (TRotation<double,3> *)(*pcVar4)();
      return pTVar22;
    }
  }
  lVar3 = *(longlong *)&(this->MQ).field_0x8;
  uVar2 = *(undefined8 *)(lVar3 + 8 + lVar23 * 0x10);
  dVar13 = (double)(float)uVar2;
  dVar14 = (double)(float)((ulonglong)uVar2 >> 0x20);
  uVar21 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar21 = (uint)~param_1 >> 0x1f;
  }
  dVar11 = (double)*(float *)(lVar3 + lVar23 * 0x10);
  dVar15 = (double)*(float *)(lVar3 + 4 + lVar23 * 0x10);
  if (uVar21 == 0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      pTVar22 = (TRotation<double,3> *)(*pcVar4)();
      return pTVar22;
    }
  }
  pdVar1 = (double *)(lVar23 * 0x20 + 0x10 + this->_padding_);
  dVar16 = *pdVar1;
  dVar17 = pdVar1[1];
  pdVar1 = (double *)(lVar23 * 0x20 + this->_padding_);
  dVar18 = *pdVar1;
  dVar19 = pdVar1[1];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar12 = dVar11 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar17 * dVar14 +
           dVar19 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar13 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar9 = dVar11 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar19 * dVar14 +
          dVar17 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar13 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = dVar11 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar18 * dVar14 +
                 dVar16 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar13 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar8;
  auVar10._8_4_ = SUB84(dVar12,0);
  auVar10._0_8_ =
       dVar11 * dVar19 * dVar5 + dVar16 * dVar14 + dVar18 * dVar15 * dVar7 + dVar13 * dVar17 * dVar6
  ;
  auVar10._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x10 = auVar10;
  return __return_storage_ptr__;
}

// XCom @ 1438dc6b0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticles<double,3>::XCom
          (TPBDRigidParticles<double,3> *this,TVector<double,3> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  undefined8 uVar2;
  double dVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  TVector<double,3> *pTVar10;
  TVector<double> *pTVar11;
  uint uVar12;
  longlong lVar13;
  TVector<double>_u_0 local_88;
  TVector<double> local_68 [2];
  undefined1 local_38 [32];
  
  lVar13 = (longlong)param_1;
  pTVar10 = TParticles<double,3>::GetX((TParticles<double,3> *)this,param_1);
  uVar12 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TVector<double,3> *)(*pcVar5)();
      return pTVar10;
    }
  }
  lVar4 = this->_padding_;
  local_38._0_8_ = (undefined8)*(float *)(lVar4 + lVar13 * 0x10);
  local_38._8_8_ = (undefined8)*(float *)(lVar4 + 4 + lVar13 * 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 8 + lVar13 * 0x10);
  dVar6 = (double)(float)((ulonglong)uVar2 >> 0x20);
  uVar12 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  local_38._24_4_ = SUB84(dVar6,0);
  local_38._16_8_ = (double)(float)uVar2;
  local_38._28_4_ = (int)((ulonglong)dVar6 >> 0x20);
  if (uVar12 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TVector<double,3> *)(*pcVar5)();
      return pTVar10;
    }
  }
  pdVar1 = (double *)(this->_padding_ + lVar13 * 0x18);
  local_88._s_0.X = *pdVar1;
  local_88._s_0.Y = pdVar1[1];
  local_88._s_0.Z = *(double *)(this->_padding_ + 0x10 + lVar13 * 0x18);
  pTVar11 = UE::Math::TQuat<double>::RotateVector
                      ((TQuat<double> *)local_38,local_68,(TVector<double> *)&local_88._s_0);
  dVar7 = (pTVar11->field0_0x0)._s_0.X;
  dVar8 = (pTVar11->field0_0x0)._s_0.Y;
  dVar6 = *(double *)pTVar10;
  dVar3 = *(double *)&pTVar10->field_0x8;
  *(double *)&__return_storage_ptr__->field_0x10 =
       (pTVar11->field0_0x0)._s_0.Z + *(double *)&pTVar10->field_0x10;
  *(double *)__return_storage_ptr__ = dVar7 + dVar6;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar8 + dVar3;
  return __return_storage_ptr__;
}

// TPBDRigidParticles<double,3> @ 143af8d40

TPBDRigidParticles<double,3> * __thiscall
Chaos::TPBDRigidParticles<double,3>::TPBDRigidParticles<double,3>
          (TPBDRigidParticles<double,3> *this)

{
  TRigidParticles<double,3>::TRigidParticles<double,3>((TRigidParticles<double,3> *)this);
  *(undefined1 *)&this->_padding_ = 2;
  this->_padding_ = (longlong)&___7__TPBDRigidParticles_N_02_Chaos__6B_;
  *(undefined ***)&this->MP = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MQ = &___7__TArrayCollectionArray_V__TRotation_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MPreV = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MPreW = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MP).field_0x8 = 0;
  *(undefined8 *)&(this->MP).field_0x10 = 0;
  *(undefined8 *)&(this->MQ).field_0x8 = 0;
  *(undefined8 *)&(this->MQ).field_0x10 = 0;
  *(undefined8 *)&(this->MPreV).field_0x8 = 0;
  *(undefined8 *)&(this->MPreV).field_0x10 = 0;
  *(undefined8 *)&(this->MPreW).field_0x8 = 0;
  *(undefined8 *)&(this->MPreW).field_0x10 = 0;
  *(undefined8 *)&(this->MSolverBodyIndex).field_0x8 = 0;
  *(undefined8 *)&(this->MSolverBodyIndex).field_0x10 = 0;
  *(undefined ***)&this->MSolverBodyIndex = &___7__TArrayCollectionArray_H_Chaos__6B_;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MP);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MQ);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MPreV);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MPreW);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MSolverBodyIndex);
  return this;
}

// ~TPBDRigidParticles<double,3> @ 143afbe40

void __thiscall
Chaos::TPBDRigidParticles<double,3>::~TPBDRigidParticles<double,3>
          (TPBDRigidParticles<double,3> *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__TPBDRigidParticles_N_02_Chaos__6B_;
  *(undefined ***)&this->MSolverBodyIndex = &___7__TArrayCollectionArray_H_Chaos__6B_;
  pvVar1 = *(void **)&(this->MSolverBodyIndex).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MPreW = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MPreW).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MPreV = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MPreV).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MQ = &___7__TArrayCollectionArray_V__TRotation_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MQ).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MP = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MP).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TRigidParticles<double,3>::~TRigidParticles<double,3>((TRigidParticles<double,3> *)this);
  return;
}

// RCom @ 143b2d080

TRotation<double,3> * __thiscall
Chaos::TPBDRigidParticles<double,3>::RCom
          (TPBDRigidParticles<double,3> *this,TRotation<double,3> *__return_storage_ptr__,
          int param_1)

{
  double *pdVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  uint uVar21;
  TRotation<double,3> *pTVar22;
  longlong lVar23;
  
  lVar23 = (longlong)param_1;
  uVar21 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar21 = (uint)~param_1 >> 0x1f;
  }
  if (uVar21 == 0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      pTVar22 = (TRotation<double,3> *)(*pcVar4)();
      return pTVar22;
    }
  }
  lVar3 = this->_padding_;
  uVar2 = *(undefined8 *)(lVar3 + 8 + lVar23 * 0x10);
  dVar13 = (double)(float)uVar2;
  dVar14 = (double)(float)((ulonglong)uVar2 >> 0x20);
  uVar21 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar21 = (uint)~param_1 >> 0x1f;
  }
  dVar11 = (double)*(float *)(lVar3 + lVar23 * 0x10);
  dVar15 = (double)*(float *)(lVar3 + 4 + lVar23 * 0x10);
  if (uVar21 == 0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      pTVar22 = (TRotation<double,3> *)(*pcVar4)();
      return pTVar22;
    }
  }
  pdVar1 = (double *)(lVar23 * 0x20 + 0x10 + this->_padding_);
  dVar16 = *pdVar1;
  dVar17 = pdVar1[1];
  pdVar1 = (double *)(lVar23 * 0x20 + this->_padding_);
  dVar18 = *pdVar1;
  dVar19 = pdVar1[1];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar12 = dVar11 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar17 * dVar14 +
           dVar19 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar13 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar9 = dVar11 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar19 * dVar14 +
          dVar17 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar13 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = dVar11 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar18 * dVar14 +
                 dVar16 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar13 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar8;
  auVar10._8_4_ = SUB84(dVar12,0);
  auVar10._0_8_ =
       dVar11 * dVar19 * dVar5 + dVar16 * dVar14 + dVar18 * dVar15 * dVar7 + dVar13 * dVar17 * dVar6
  ;
  auVar10._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x10 = auVar10;
  return __return_storage_ptr__;
}

// Serialize @ 143b3d320

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TPBDRigidParticles<double,3>::Serialize
          (TPBDRigidParticles<double,3> *this,FChaosArchive *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  bool bVar14;
  int iVar15;
  FChaosArchive *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_a0;
  undefined **local_90;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_88;
  undefined **local_78;
  TArray<Chaos::TRotation<double,3>,TSizedDefaultAllocator<32>_> local_70 [4];
  
  TRigidParticles<double,3>::Serialize((TRigidParticles<double,3> *)this,param_1);
  operator<<<Chaos::TVector<double,3>_TSizedDefaultAllocator<32>_>
            (param_1,(TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)
                     &(this->MP).field_0x8);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  iVar15 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  if (iVar15 < 0x32) {
    uVar18 = 0;
    local_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70[0].ArrayNum = 0;
    local_70[0].ArrayMax = 0;
    local_78 = &___7__TArrayCollectionArray_V__TRotation_N_02_Chaos___Chaos__6B_;
    TArray<Chaos::TRotation<double,3>,TSizedDefaultAllocator<32>_>::SetNum
              (local_70,*(int *)&(this->MQ).field_0x10,No);
    iVar15 = *(int *)&(this->MQ).field_0x10;
    uVar20 = uVar18;
    uVar22 = uVar18;
    if (0 < iVar15) {
      do {
        uVar19 = (uint)uVar18;
        uVar17 = 0;
        if ((int)uVar19 < iVar15) {
          uVar17 = ~uVar19 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar21 = *(longlong *)&(this->MQ).field_0x8;
        fVar2 = *(float *)(lVar21 + uVar22);
        fVar3 = *(float *)(lVar21 + 0xc + uVar22);
        uVar4 = *(undefined8 *)(lVar21 + 4 + uVar22);
        dVar13 = (double)(float)((ulonglong)uVar4 >> 0x20);
        uVar17 = 0;
        if ((int)uVar19 < local_70[0].ArrayNum) {
          uVar17 = ~uVar19 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar18 = (ulonglong)(uVar19 + 1);
        *(double *)(local_70[0].AllocatorInstance.Data + uVar20) = (double)fVar2;
        auVar12._8_4_ = SUB84(dVar13,0);
        auVar12._0_8_ = (double)(float)uVar4;
        auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined1 (*) [16])(local_70[0].AllocatorInstance.Data + uVar20 + 8) = auVar12;
        *(double *)(local_70[0].AllocatorInstance.Data + uVar20 + 0x18) = (double)fVar3;
        iVar15 = *(int *)&(this->MQ).field_0x10;
        uVar20 = uVar20 + 0x20;
        uVar22 = uVar22 + 0x10;
      } while ((int)(uVar19 + 1) < iVar15);
    }
    uVar18 = 0;
    local_90 = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_88,*(int *)&(this->MPreV).field_0x10,No);
    iVar15 = *(int *)&(this->MPreV).field_0x10;
    uVar20 = uVar18;
    uVar22 = uVar18;
    if (0 < iVar15) {
      do {
        uVar19 = (uint)uVar18;
        uVar17 = 0;
        if ((int)uVar19 < iVar15) {
          uVar17 = ~uVar19 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar21 = *(longlong *)&(this->MPreV).field_0x8;
        fVar2 = *(float *)(uVar22 + lVar21);
        uVar4 = *(undefined8 *)(uVar22 + 4 + lVar21);
        dVar13 = (double)(float)((ulonglong)uVar4 >> 0x20);
        uVar17 = 0;
        if ((int)uVar19 < local_88.ArrayNum) {
          uVar17 = ~uVar19 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar18 = (ulonglong)(uVar19 + 1);
        *(double *)(local_88.AllocatorInstance.Data + uVar20) = (double)fVar2;
        auVar10._8_4_ = SUB84(dVar13,0);
        auVar10._0_8_ = (double)(float)uVar4;
        auVar10._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined1 (*) [16])(local_88.AllocatorInstance.Data + uVar20 + 8) = auVar10;
        iVar15 = *(int *)&(this->MPreV).field_0x10;
        uVar20 = uVar20 + 0x18;
        uVar22 = uVar22 + 0xc;
      } while ((int)(uVar19 + 1) < iVar15);
    }
    uVar18 = 0;
    local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.ArrayNum = 0;
    local_a0.ArrayMax = 0;
    TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_a0,*(int *)&(this->MPreW).field_0x10,No);
    iVar15 = *(int *)&(this->MPreW).field_0x10;
    uVar20 = uVar18;
    uVar22 = uVar18;
    if (0 < iVar15) {
      do {
        uVar19 = (uint)uVar18;
        uVar17 = 0;
        if ((int)uVar19 < iVar15) {
          uVar17 = ~uVar19 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar21 = *(longlong *)&(this->MPreW).field_0x8;
        fVar2 = *(float *)(uVar22 + lVar21);
        uVar4 = *(undefined8 *)(uVar22 + 4 + lVar21);
        dVar13 = (double)(float)((ulonglong)uVar4 >> 0x20);
        uVar17 = 0;
        if ((int)uVar19 < local_a0.ArrayNum) {
          uVar17 = ~uVar19 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar18 = (ulonglong)(uVar19 + 1);
        *(double *)(local_a0.AllocatorInstance.Data + uVar20) = (double)fVar2;
        auVar11._8_4_ = SUB84(dVar13,0);
        auVar11._0_8_ = (double)(float)uVar4;
        auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined1 (*) [16])(local_a0.AllocatorInstance.Data + uVar20 + 8) = auVar11;
        iVar15 = *(int *)&(this->MPreW).field_0x10;
        uVar20 = uVar20 + 0x18;
        uVar22 = uVar22 + 0xc;
      } while ((int)(uVar19 + 1) < iVar15);
    }
    pFVar16 = operator<<<Chaos::TRotation<double,3>_TSizedDefaultAllocator<32>_>(param_1,local_70);
    pFVar16 = operator<<<Chaos::TVector<double,3>_TSizedDefaultAllocator<32>_>(pFVar16,&local_88);
    operator<<<Chaos::TVector<double,3>_TSizedDefaultAllocator<32>_>(pFVar16,&local_a0);
    (**(code **)(*(longlong *)&this->MQ + 8))(&this->MQ,local_70[0]._8_8_ & 0xffffffff);
    uVar17 = 0;
    if (0 < local_70[0].ArrayNum) {
      lVar23 = 0;
      lVar21 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar17 < local_70[0].ArrayNum) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        dVar13 = *(double *)(local_70[0].AllocatorInstance.Data + lVar21);
        dVar5 = *(double *)(local_70[0].AllocatorInstance.Data + lVar21 + 8);
        dVar6 = *(double *)(local_70[0].AllocatorInstance.Data + lVar21 + 0x10);
        dVar7 = *(double *)(local_70[0].AllocatorInstance.Data + lVar21 + 0x18);
        uVar19 = 0;
        if ((int)uVar17 < *(int *)&(this->MQ).field_0x10) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar17 = uVar17 + 1;
        lVar21 = lVar21 + 0x20;
        pfVar1 = (float *)(lVar23 + *(longlong *)&(this->MQ).field_0x8);
        *pfVar1 = (float)dVar13;
        pfVar1[1] = (float)dVar5;
        pfVar1[2] = (float)dVar6;
        pfVar1[3] = (float)dVar7;
        lVar23 = lVar23 + 0x10;
      } while ((int)uVar17 < local_70[0].ArrayNum);
    }
    (**(code **)(*(longlong *)&this->MPreV + 8))(&this->MPreV,local_88._8_8_ & 0xffffffff);
    uVar17 = 0;
    if (0 < local_88.ArrayNum) {
      lVar21 = 0;
      lVar23 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar17 < local_88.ArrayNum) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        dVar13 = *(double *)(local_88.AllocatorInstance.Data + lVar23);
        dVar5 = *(double *)(local_88.AllocatorInstance.Data + lVar23 + 8);
        dVar6 = *(double *)(local_88.AllocatorInstance.Data + lVar23 + 0x10);
        uVar19 = 0;
        if ((int)uVar17 < *(int *)&(this->MPreV).field_0x10) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar8 = *(longlong *)&(this->MPreV).field_0x8;
        uVar17 = uVar17 + 1;
        lVar23 = lVar23 + 0x18;
        *(float *)(lVar21 + lVar8) = (float)dVar13;
        *(float *)(lVar21 + 4 + lVar8) = (float)dVar5;
        *(float *)(lVar21 + 8 + lVar8) = (float)dVar6;
        lVar21 = lVar21 + 0xc;
      } while ((int)uVar17 < local_88.ArrayNum);
    }
    (**(code **)(*(longlong *)&this->MPreW + 8))(&this->MPreW,local_a0._8_8_ & 0xffffffff);
    uVar17 = 0;
    if (0 < local_a0.ArrayNum) {
      lVar21 = 0;
      lVar23 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar17 < local_a0.ArrayNum) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        dVar13 = *(double *)(local_a0.AllocatorInstance.Data + lVar23);
        dVar5 = *(double *)(local_a0.AllocatorInstance.Data + lVar23 + 8);
        dVar6 = *(double *)(local_a0.AllocatorInstance.Data + lVar23 + 0x10);
        uVar19 = 0;
        if ((int)uVar17 < *(int *)&(this->MPreW).field_0x10) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar8 = *(longlong *)&(this->MPreW).field_0x8;
        uVar17 = uVar17 + 1;
        lVar23 = lVar23 + 0x18;
        *(float *)(lVar21 + lVar8) = (float)dVar13;
        *(float *)(lVar21 + 4 + lVar8) = (float)dVar5;
        *(float *)(lVar21 + 8 + lVar8) = (float)dVar6;
        lVar21 = lVar21 + 0xc;
      } while ((int)uVar17 < local_a0.ArrayNum);
    }
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
    local_90 = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    local_78 = &___7__TArrayCollectionArray_V__TRotation_N_02_Chaos___Chaos__6B_;
    if (local_70[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70[0].AllocatorInstance.Data);
    }
  }
  else {
    pFVar16 = operator<<<Chaos::TRotation<float,3>_TSizedDefaultAllocator<32>_>
                        (param_1,(TArray<Chaos::TRotation<float,3>,TSizedDefaultAllocator<32>_> *)
                                 &(this->MQ).field_0x8);
    pFVar16 = operator<<<Chaos::TVector<float,3>_TSizedDefaultAllocator<32>_>
                        (pFVar16,(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                                 &(this->MPreV).field_0x8);
    operator<<<Chaos::TVector<float,3>_TSizedDefaultAllocator<32>_>
              (pFVar16,(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                       &(this->MPreW).field_0x8);
  }
  return;
}

// SetPreV @ 143b40f90

void __thiscall
Chaos::TPBDRigidParticles<double,3>::SetPreV
          (TPBDRigidParticles<double,3> *this,int param_1,TVector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  
  dVar1 = *(double *)param_2;
  dVar2 = *(double *)&param_2->field_0x8;
  dVar3 = *(double *)&param_2->field_0x10;
  lVar8 = (longlong)param_1;
  uVar7 = 0;
  if (param_1 < *(int *)&(this->MPreV).field_0x10) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)&(this->MPreV).field_0x8;
  *(float *)(lVar4 + lVar8 * 0xc) = (float)dVar1;
  *(float *)(lVar4 + 4 + lVar8 * 0xc) = (float)dVar2;
  *(float *)(lVar4 + 8 + lVar8 * 0xc) = (float)dVar3;
  return;
}

// SetPreWf @ 143b41060

void __thiscall
Chaos::TPBDRigidParticles<double,3>::SetPreWf
          (TPBDRigidParticles<double,3> *this,int param_1,TVector<float,3> *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined4 *)&param_2->field_0x8;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MPreW).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)&(this->MPreW).field_0x8;
  *(undefined8 *)(lVar3 + (longlong)param_1 * 0xc) = uVar1;
  *(undefined4 *)(lVar3 + 8 + (longlong)param_1 * 0xc) = uVar2;
  return;
}

// SetTransformPQCom @ 143b413d0

void __thiscall
Chaos::TPBDRigidParticles<double,3>::SetTransformPQCom
          (TPBDRigidParticles<double,3> *this,int param_1,TVector<double,3> *param_2,
          TRotation<double,3> *param_3)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined8 uVar3;
  double dVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  bool bVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  double dVar28;
  double dVar29;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8;
  undefined1 local_88 [112];
  
  lVar27 = (longlong)param_1;
  uVar26 = (uint)~param_1 >> 0x1f;
  uVar25 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar25 = uVar26;
  }
  if (uVar25 == 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  dVar4 = *(double *)param_3;
  dVar21 = *(double *)&param_3->field_0x8;
  dVar22 = *(double *)&param_3->field_0x10;
  dVar23 = *(double *)&param_3->field_0x18;
  pdVar2 = (double *)(lVar27 * 0x20 + 0x10 + this->_padding_);
  dVar28 = *pdVar2 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar29 = pdVar2[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  pdVar2 = (double *)(lVar27 * 0x20 + this->_padding_);
  dVar19 = *pdVar2 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar20 = pdVar2[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  uVar25 = 0;
  if (param_1 < *(int *)&(this->MQ).field_0x10) {
    uVar25 = uVar26;
  }
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
  dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar15 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
  dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar17 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar18 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  if (uVar25 == 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)&(this->MQ).field_0x8 + lVar27 * 0x10);
  *puVar1 = CONCAT44((float)(dVar4 * dVar28 * dVar13 + dVar23 * dVar20 + dVar21 * dVar29 * dVar16 +
                            dVar22 * dVar19 * dVar15),
                     (float)(dVar4 * dVar29 * dVar7 + dVar23 * dVar19 + dVar21 * dVar28 * dVar10 +
                            dVar22 * dVar20 * dVar9));
  puVar1[1] = CONCAT44((float)(dVar4 * dVar19 * dVar14 + dVar23 * dVar29 + dVar21 * dVar20 * dVar17
                              + dVar22 * dVar28 * dVar18),
                       (float)(dVar4 * dVar20 * dVar8 + dVar23 * dVar28 + dVar21 * dVar19 * dVar11 +
                              dVar22 * dVar29 * dVar12));
  uVar25 = 0;
  if (param_1 < *(int *)&(this->MQ).field_0x10) {
    uVar25 = uVar26;
  }
  if (uVar25 == 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *(longlong *)&(this->MQ).field_0x8;
  local_88._0_8_ = (undefined8)*(float *)(lVar5 + lVar27 * 0x10);
  local_88._8_8_ = (undefined8)*(float *)(lVar5 + 4 + lVar27 * 0x10);
  uVar3 = *(undefined8 *)(lVar5 + 8 + lVar27 * 0x10);
  dVar19 = (double)(float)((ulonglong)uVar3 >> 0x20);
  uVar25 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar25 = uVar26;
  }
  local_88._24_4_ = SUB84(dVar19,0);
  local_88._16_8_ = (double)(float)uVar3;
  local_88._28_4_ = (int)((ulonglong)dVar19 >> 0x20);
  if (uVar25 == 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pdVar2 = (double *)(this->_padding_ + lVar27 * 0x18);
  local_a8._s_0.X = *pdVar2;
  local_a8._s_0.Y = pdVar2[1];
  local_a8._s_0.Z = *(double *)(this->_padding_ + 0x10 + lVar27 * 0x18);
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)local_88,(TVector<double> *)&local_c8._s_0,
             (TVector<double> *)&local_a8._s_0);
  dVar19 = *(double *)&param_2->field_0x10;
  dVar20 = *(double *)&param_2->field_0x8;
  dVar4 = *(double *)param_2;
  uVar25 = 0;
  if (param_1 < *(int *)&(this->MP).field_0x10) {
    uVar25 = uVar26;
  }
  if (uVar25 == 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *(longlong *)&(this->MP).field_0x8;
  *(double *)(lVar5 + lVar27 * 0x18) = dVar4 - local_c8._s_0.X;
  *(double *)(lVar5 + 8 + lVar27 * 0x18) = dVar20 - local_c8._s_0.Y;
  *(double *)(lVar5 + 0x10 + lVar27 * 0x18) = dVar19 - local_c8._s_0.Z;
  return;
}

// SetObjectState @ 143b78340

void __thiscall
Chaos::TPBDRigidParticles<double,3>::SetObjectState
          (TPBDRigidParticles<double,3> *this,int param_1,EObjectStateType param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  TVector<double,3> *pTVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  lVar18 = (longlong)param_1;
  uVar21 = (uint)~param_1 >> 0x1f;
  uVar14 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar14 = uVar21;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar20 = lVar18 * 0x10;
  cVar6 = *(char *)(lVar20 + 0xb + this->_padding_);
  uVar14 = 0;
  uVar19 = 0;
  if (cVar6 == '\0') {
    uVar22 = uVar14;
    if (param_1 < (int)this->_padding_) {
      uVar22 = uVar21;
    }
    if ((uVar22 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    *(undefined8 *)(this->_padding_ + lVar18 * 8) = 0;
    uVar22 = uVar14;
    if (param_1 < (int)this->_padding_) {
      uVar22 = uVar21;
    }
    if ((uVar22 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar7 = this->_padding_;
    *(undefined8 *)(lVar7 + lVar18 * 0xc) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar18 * 0xc) = 0;
  }
  else {
    if (((cVar6 == '\x04') || (cVar6 == '\x01')) && ((byte)(param_2 - Kinematic) < 2)) {
      uVar22 = uVar14;
      if (param_1 < (int)this->_padding_) {
        uVar22 = uVar21;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined8 *)(this->_padding_ + lVar18 * 8) = 0;
      if (param_1 < (int)this->_padding_) {
        uVar14 = uVar21;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = this->_padding_;
      *(undefined8 *)(lVar7 + lVar18 * 0xc) = 0;
      *(undefined4 *)(lVar7 + 8 + lVar18 * 0xc) = 0;
      goto LAB_143b78a57;
    }
    if (1 < (byte)(cVar6 - 2U)) {
      if (param_2 == Sleeping) {
        SetSleeping(this,param_1,true);
        return;
      }
      goto LAB_143b78a57;
    }
  }
  if ((param_2 != Dynamic) && (param_2 != Sleeping)) goto LAB_143b78a57;
  uVar22 = uVar14;
  if (param_1 < (int)this->_padding_) {
    uVar22 = uVar21;
  }
  if ((uVar22 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  dVar12 = __real_3e45798ee2308c3a;
  uVar5 = *(undefined8 *)(this->_padding_ + lVar18 * 8);
  uVar22 = (uint)uVar5 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar23 = (uint)((ulonglong)uVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar23,uVar22) &&
      (double)CONCAT44(uVar23,uVar22) != __real_3e45798ee2308c3a) {
    uVar22 = uVar14;
    if (param_1 < (int)this->_padding_) {
      uVar22 = uVar21;
    }
    if ((uVar22 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    dVar9 = __real_3ff0000000000000 / *(double *)(this->_padding_ + lVar18 * 8);
  }
  else {
    dVar9 = 0.0;
  }
  uVar22 = uVar19;
  if (param_1 < (int)this->_padding_) {
    uVar22 = uVar21;
  }
  if ((uVar22 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar23 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  *(double *)(this->_padding_ + lVar18 * 8) = dVar9;
  uVar15 = uVar19;
  if (param_1 < (int)this->_padding_) {
    uVar15 = uVar21;
  }
  if ((uVar15 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar23 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_, bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar7 = this->_padding_;
  if (((__real_38d1b717 <
        (float)(*(uint *)(lVar7 + lVar18 * 0xc) & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
      (__real_38d1b717 <
       (float)(*(uint *)(lVar7 + 4 + lVar18 * 0xc) & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     (__real_38d1b717 <
      (float)(*(uint *)(lVar7 + 8 + lVar18 * 0xc) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    uVar15 = uVar19;
    if (param_1 < (int)this->_padding_) {
      uVar15 = uVar21;
    }
    if ((uVar15 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar23 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_, bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar5 = *(undefined8 *)(this->_padding_ + lVar18 * 8);
    uVar22 = (uint)uVar5 & uVar22;
    uVar23 = (uint)((ulonglong)uVar5 >> 0x20) & uVar23;
    if ((double)CONCAT44(uVar23,uVar22) < dVar12 || (double)CONCAT44(uVar23,uVar22) == dVar12)
    goto LAB_143b78808;
    uVar22 = uVar19;
    if (param_1 < (int)this->_padding_) {
      uVar22 = uVar21;
    }
    if ((uVar22 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    fVar24 = __real_3f800000;
    uVar26 = __real_3f800000 / *(float *)(this->_padding_ + 8 + lVar18 * 0xc);
    uVar22 = uVar14;
    if (param_1 < (int)this->_padding_) {
      uVar22 = uVar21;
    }
    if ((uVar22 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    fVar25 = fVar24 / *(float *)(this->_padding_ + 4 + lVar18 * 0xc);
    uVar22 = uVar14;
    if (param_1 < (int)this->_padding_) {
      uVar22 = uVar21;
    }
    if ((uVar22 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    fVar24 = fVar24 / *(float *)(this->_padding_ + lVar18 * 0xc);
  }
  else {
LAB_143b78808:
    fVar24 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    fVar25 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    uVar26 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  }
  uVar22 = uVar14;
  if (param_1 < (int)this->_padding_) {
    uVar22 = uVar21;
  }
  if ((uVar22 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar7 = this->_padding_;
  *(ulonglong *)(lVar7 + lVar18 * 0xc) = CONCAT44(fVar25,fVar24);
  *(undefined4 *)(lVar7 + 8 + lVar18 * 0xc) = uVar26;
  pTVar17 = TParticles<double,3>::GetX((TParticles<double,3> *)this,param_1);
  uVar10 = *(undefined8 *)pTVar17;
  uVar11 = *(undefined8 *)&pTVar17->field_0x8;
  uVar5 = *(undefined8 *)&pTVar17->field_0x10;
  uVar22 = uVar14;
  if (param_1 < *(int *)&(this->MP).field_0x10) {
    uVar22 = uVar21;
  }
  if ((uVar22 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar7 = *(longlong *)&(this->MP).field_0x8;
  puVar3 = (undefined8 *)(lVar7 + lVar18 * 0x18);
  *puVar3 = uVar10;
  puVar3[1] = uVar11;
  *(undefined8 *)(lVar7 + 0x10 + lVar18 * 0x18) = uVar5;
  uVar22 = uVar14;
  if (param_1 < (int)this->_padding_) {
    uVar22 = uVar21;
  }
  if ((uVar22 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  puVar3 = (undefined8 *)(this->_padding_ + lVar20);
  uVar5 = *puVar3;
  uVar10 = puVar3[1];
  if (param_1 < *(int *)&(this->MQ).field_0x10) {
    uVar14 = uVar21;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  puVar3 = (undefined8 *)(lVar20 + *(longlong *)&(this->MQ).field_0x8);
  *puVar3 = uVar5;
  puVar3[1] = uVar10;
LAB_143b78a57:
  uVar14 = uVar19;
  if (param_1 < (int)this->_padding_) {
    uVar14 = uVar21;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((*(char *)(lVar20 + 0xb + this->_padding_) == '\x01') != (param_2 == Sleeping)) {
    local_68 = Handle(this,param_1);
    uStack_60 = CONCAT31(uStack_60._1_3_,param_2 == Sleeping);
    AcquireSRWLockExclusive((PSRWLOCK)&this->_padding_);
    plVar2 = &this->_padding_;
    if ((((undefined8 *)*plVar2 <= &local_68) &&
        (&local_68 < (undefined8 *)*plVar2 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 2)
        ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar16 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar16 == *piVar1) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)plVar2,piVar1);
    }
    *(int *)&this->_padding_ = iVar16 + 1;
    puVar4 = (undefined4 *)(*plVar2 + (longlong)iVar16 * 0x10);
    *puVar4 = (undefined4)local_68;
    puVar4[1] = local_68._4_4_;
    puVar4[2] = uStack_60;
    puVar4[3] = uStack_5c;
    ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
  }
  if (param_1 < (int)this->_padding_) {
    uVar19 = uVar21;
  }
  if ((uVar19 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  *(EObjectStateType *)(this->_padding_ + 0xb + lVar18 * 0x10) = param_2;
  return;
}

// SetSleeping @ 143b79060

void __thiscall
Chaos::TPBDRigidParticles<double,3>::SetSleeping
          (TPBDRigidParticles<double,3> *this,int param_1,bool param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  TVector<double,3> *pTVar12;
  undefined1 uVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  TVector<double,3> local_b8;
  TVector<double,3> local_a0;
  TVector<double,3> local_88;
  TVector<double,3> local_70 [3];
  
  lVar15 = (longlong)param_1;
  uVar14 = (uint)~param_1 >> 0x1f;
  uVar10 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar10 = uVar14;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (*(char *)(this->_padding_ + 0xb + lVar15 * 0x10) == '\x01') {
    if (param_2) {
LAB_143b7924a:
      local_b8._16_8_ = 0;
      local_b8._0_8_ = 0;
      local_b8._8_8_ = 0;
      TKinematicGeometryParticlesImp<double,3,0>::SetV
                ((TKinematicGeometryParticlesImp<double,3,0> *)this,param_1,&local_b8);
      local_a0._16_8_ = 0;
      local_a0._0_8_ = 0;
      local_a0._8_8_ = 0;
      TKinematicGeometryParticlesImp<double,3,0>::SetW
                ((TKinematicGeometryParticlesImp<double,3,0> *)this,param_1,&local_a0);
    }
    else {
      pTVar12 = TKinematicGeometryParticlesImp<double,3,0>::GetV
                          ((TKinematicGeometryParticlesImp<double,3,0> *)this,&local_88,param_1);
      dVar4 = *(double *)pTVar12;
      dVar5 = *(double *)&pTVar12->field_0x8;
      dVar6 = *(double *)&pTVar12->field_0x10;
      uVar10 = 0;
      if (param_1 < *(int *)&(this->MPreV).field_0x10) {
        uVar10 = uVar14;
      }
      if (uVar10 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar7 = *(longlong *)&(this->MPreV).field_0x8;
      *(float *)(lVar7 + lVar15 * 0xc) = (float)dVar4;
      *(float *)(lVar7 + 4 + lVar15 * 0xc) = (float)dVar5;
      *(float *)(lVar7 + 8 + lVar15 * 0xc) = (float)dVar6;
      pTVar12 = TKinematicGeometryParticlesImp<double,3,0>::GetW
                          ((TKinematicGeometryParticlesImp<double,3,0> *)this,local_70,param_1);
      dVar4 = *(double *)pTVar12;
      dVar5 = *(double *)&pTVar12->field_0x8;
      dVar6 = *(double *)&pTVar12->field_0x10;
      uVar10 = 0;
      if (param_1 < *(int *)&(this->MPreW).field_0x10) {
        uVar10 = uVar14;
      }
      if (uVar10 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar7 = *(longlong *)&(this->MPreW).field_0x8;
      *(float *)(lVar7 + lVar15 * 0xc) = (float)dVar4;
      *(float *)(lVar7 + 4 + lVar15 * 0xc) = (float)dVar5;
      *(float *)(lVar7 + 8 + lVar15 * 0xc) = (float)dVar6;
    }
  }
  else if (param_2) goto LAB_143b7924a;
  uVar10 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar10 = uVar14;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if ((*(char *)(this->_padding_ + 0xb + lVar15 * 0x10) == '\x01') != param_2) {
    local_c8 = Handle(this,param_1);
    uStack_c0 = CONCAT31(uStack_c0._1_3_,param_2);
    AcquireSRWLockExclusive((PSRWLOCK)&this->_padding_);
    plVar2 = &this->_padding_;
    if (((undefined8 *)*plVar2 <= &local_c8) &&
       (&local_c8 < (undefined8 *)*plVar2 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 2))
    {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar11 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)plVar2,piVar1);
    }
    *(int *)&this->_padding_ = iVar11 + 1;
    puVar3 = (undefined4 *)(*plVar2 + (longlong)iVar11 * 0x10);
    *puVar3 = (undefined4)local_c8;
    puVar3[1] = local_c8._4_4_;
    puVar3[2] = uStack_c0;
    puVar3[3] = uStack_bc;
    ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
  }
  uVar10 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar10 = uVar14;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (*(char *)(this->_padding_ + 0xb + lVar15 * 0x10) != '\x04') {
    uVar10 = 0;
    if (param_1 < (int)this->_padding_) {
      uVar10 = uVar14;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (*(char *)(this->_padding_ + 0xb + lVar15 * 0x10) != '\x01') goto LAB_143b794ce;
  }
  uVar10 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar10 = uVar14;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar13 = 4;
  if (param_2) {
    uVar13 = 1;
  }
  *(undefined1 *)(this->_padding_ + 0xb + lVar15 * 0x10) = uVar13;
LAB_143b794ce:
  uVar10 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar10 = uVar14;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (param_2) {
    if (*(char *)(this->_padding_ + 0xb + lVar15 * 0x10) == '\x02') {
      uVar10 = 0;
      if (param_1 < (int)this->_padding_) {
        uVar10 = uVar14;
      }
      if (uVar10 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      *(undefined1 *)(this->_padding_ + 0xb + lVar15 * 0x10) = 1;
    }
    uVar10 = 0;
    if (param_1 < (int)this->_padding_) {
      uVar10 = uVar14;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    EnsureSleepingObjectState(*(EObjectStateType *)(this->_padding_ + 0xb + lVar15 * 0x10));
  }
  return;
}

// GetPreV @ 143c07260

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticles<double,3>::GetPreV
          (TPBDRigidParticles<double,3> *this,TVector<double,3> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double,3> *pTVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MPreV).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)&(this->MPreV).field_0x8;
  fVar1 = *(float *)(lVar3 + 4 + lVar8 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar3 + lVar8 * 0xc);
  fVar2 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// GetPreW @ 143c073c0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticles<double,3>::GetPreW
          (TPBDRigidParticles<double,3> *this,TVector<double,3> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double,3> *pTVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MPreW).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)&(this->MPreW).field_0x8;
  fVar1 = *(float *)(lVar3 + 4 + lVar8 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar3 + lVar8 * 0xc);
  fVar2 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// SetPreW @ 143c18500

void __thiscall
Chaos::TPBDRigidParticles<double,3>::SetPreW
          (TPBDRigidParticles<double,3> *this,int param_1,TVector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  
  dVar1 = *(double *)param_2;
  dVar2 = *(double *)&param_2->field_0x8;
  dVar3 = *(double *)&param_2->field_0x10;
  lVar8 = (longlong)param_1;
  uVar7 = 0;
  if (param_1 < *(int *)&(this->MPreW).field_0x10) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)&(this->MPreW).field_0x8;
  *(float *)(lVar4 + lVar8 * 0xc) = (float)dVar1;
  *(float *)(lVar4 + 4 + lVar8 * 0xc) = (float)dVar2;
  *(float *)(lVar4 + 8 + lVar8 * 0xc) = (float)dVar3;
  return;
}

// TPBDRigidParticles<double,3> @ 143cff980

TPBDRigidParticles<double,3> * __thiscall
Chaos::TPBDRigidParticles<double,3>::TPBDRigidParticles<double,3>
          (TPBDRigidParticles<double,3> *this,TPBDRigidParticles<double,3> *param_1)

{
  TArrayCollectionArray<Chaos::TVector<double,3>_> *pTVar1;
  TArrayCollectionArray<Chaos::TRotation<float,3>_> *pTVar2;
  TArrayCollectionArray<Chaos::TVector<float,3>_> *pTVar3;
  TArrayCollectionArray<Chaos::TVector<float,3>_> *pTVar4;
  TArrayCollectionArray<int> *pTVar5;
  
  TRigidParticles<double,3>::TRigidParticles<double,3>
            ((TRigidParticles<double,3> *)this,(TRigidParticles<double,3> *)param_1);
  pTVar1 = &this->MP;
  pTVar2 = &this->MQ;
  pTVar3 = &this->MPreV;
  pTVar4 = &this->MPreW;
  pTVar5 = &this->MSolverBodyIndex;
  this->_padding_ = (longlong)&___7__TPBDRigidParticles_N_02_Chaos__6B_;
  *(undefined ***)pTVar1 = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MP).field_0x8 = 0;
  *(undefined8 *)&(this->MP).field_0x8 = *(undefined8 *)&(param_1->MP).field_0x8;
  *(undefined8 *)&(param_1->MP).field_0x8 = 0;
  *(undefined4 *)&(this->MP).field_0x10 = *(undefined4 *)&(param_1->MP).field_0x10;
  *(undefined4 *)&(this->MP).field_0x14 = *(undefined4 *)&(param_1->MP).field_0x14;
  *(undefined8 *)&(param_1->MP).field_0x10 = 0;
  *(undefined ***)pTVar1 = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined ***)pTVar2 = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MQ).field_0x8 = 0;
  *(undefined8 *)&(this->MQ).field_0x8 = *(undefined8 *)&(param_1->MQ).field_0x8;
  *(undefined8 *)&(param_1->MQ).field_0x8 = 0;
  *(undefined4 *)&(this->MQ).field_0x10 = *(undefined4 *)&(param_1->MQ).field_0x10;
  *(undefined4 *)&(this->MQ).field_0x14 = *(undefined4 *)&(param_1->MQ).field_0x14;
  *(undefined8 *)&(param_1->MQ).field_0x10 = 0;
  *(undefined ***)pTVar2 = &___7__TArrayCollectionArray_V__TRotation_M_02_Chaos___Chaos__6B_;
  *(undefined ***)pTVar3 = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MPreV).field_0x8 = 0;
  *(undefined8 *)&(this->MPreV).field_0x8 = *(undefined8 *)&(param_1->MPreV).field_0x8;
  *(undefined8 *)&(param_1->MPreV).field_0x8 = 0;
  *(undefined4 *)&(this->MPreV).field_0x10 = *(undefined4 *)&(param_1->MPreV).field_0x10;
  *(undefined4 *)&(this->MPreV).field_0x14 = *(undefined4 *)&(param_1->MPreV).field_0x14;
  *(undefined8 *)&(param_1->MPreV).field_0x10 = 0;
  *(undefined ***)pTVar3 = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)pTVar4 = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MPreW).field_0x8 = 0;
  *(undefined8 *)&(this->MPreW).field_0x8 = *(undefined8 *)&(param_1->MPreW).field_0x8;
  *(undefined8 *)&(param_1->MPreW).field_0x8 = 0;
  *(undefined4 *)&(this->MPreW).field_0x10 = *(undefined4 *)&(param_1->MPreW).field_0x10;
  *(undefined4 *)&(this->MPreW).field_0x14 = *(undefined4 *)&(param_1->MPreW).field_0x14;
  *(undefined8 *)&(param_1->MPreW).field_0x10 = 0;
  *(undefined ***)pTVar4 = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)pTVar5 = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MSolverBodyIndex).field_0x8 = 0;
  *(undefined8 *)&(this->MSolverBodyIndex).field_0x8 =
       *(undefined8 *)&(param_1->MSolverBodyIndex).field_0x8;
  *(undefined8 *)&(param_1->MSolverBodyIndex).field_0x8 = 0;
  *(undefined4 *)&(this->MSolverBodyIndex).field_0x10 =
       *(undefined4 *)&(param_1->MSolverBodyIndex).field_0x10;
  *(undefined4 *)&(this->MSolverBodyIndex).field_0x14 =
       *(undefined4 *)&(param_1->MSolverBodyIndex).field_0x14;
  *(undefined8 *)&(param_1->MSolverBodyIndex).field_0x10 = 0;
  *(undefined ***)pTVar5 = &___7__TArrayCollectionArray_H_Chaos__6B_;
  *(undefined1 *)&this->_padding_ = 2;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)pTVar1);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)pTVar2);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)pTVar3);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)pTVar4);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)pTVar5);
  return this;
}

// GetP @ 143d56310

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticles<double,3>::GetP(TPBDRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MP).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double,3> *)(*(longlong *)&(this->MP).field_0x8 + (longlong)param_1 * 0x18);
}

// GetPreVf @ 143d563e0

TVector<float,3> * __thiscall
Chaos::TPBDRigidParticles<double,3>::GetPreVf
          (TPBDRigidParticles<double,3> *this,TVector<float,3> *__return_storage_ptr__,int param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<float,3> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < *(int *)&(this->MPreV).field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<float,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar2 = *(longlong *)&(this->MPreV).field_0x8;
  uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1 * 0xc);
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)(lVar2 + (longlong)param_1 * 0xc);
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// GetPreWf @ 143d56480

TVector<float,3> * __thiscall
Chaos::TPBDRigidParticles<double,3>::GetPreWf
          (TPBDRigidParticles<double,3> *this,TVector<float,3> *__return_storage_ptr__,int param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<float,3> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < *(int *)&(this->MPreW).field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<float,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar2 = *(longlong *)&(this->MPreW).field_0x8;
  uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1 * 0xc);
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)(lVar2 + (longlong)param_1 * 0xc);
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// GetQ @ 143d56520

TRotation<double,3> * __thiscall
Chaos::TPBDRigidParticles<double,3>::GetQ
          (TPBDRigidParticles<double,3> *this,TRotation<double,3> *__return_storage_ptr__,
          int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TRotation<double,3> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < *(int *)&(this->MQ).field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TRotation<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar2 = *(longlong *)&(this->MQ).field_0x8;
  uVar1 = *(undefined8 *)(lVar2 + (longlong)param_1 * 0x10);
  *(double *)__return_storage_ptr__ = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)(lVar2 + 8 + (longlong)param_1 * 0x10);
  *(double *)&__return_storage_ptr__->field_0x10 = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x18 = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// GetQf @ 143d565c0

TRotation<float,3> * __thiscall
Chaos::TPBDRigidParticles<double,3>::GetQf
          (TPBDRigidParticles<double,3> *this,TRotation<float,3> *__return_storage_ptr__,int param_1
          )

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  TRotation<float,3> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < *(int *)&(this->MQ).field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TRotation<float,3> *)(*pcVar2)();
      return pTVar6;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)&(this->MQ).field_0x8 + (longlong)param_1 * 0x10);
  uVar3 = puVar1[1];
  *(undefined8 *)__return_storage_ptr__ = *puVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
  return __return_storage_ptr__;
}

// Handle @ 143d58070

TPBDRigidParticleHandleImp<double,3,1> * __thiscall
Chaos::TPBDRigidParticles<double,3>::Handle(TPBDRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TPBDRigidParticleHandleImp<double,3,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return *(TPBDRigidParticleHandleImp<double,3,1> **)(this->_padding_ + (longlong)param_1 * 8);
}

// P @ 143d5ae30

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticles<double,3>::P(TPBDRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MP).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double,3> *)(*(longlong *)&(this->MP).field_0x8 + (longlong)param_1 * 0x18);
}

// P @ 143d5aeb0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticles<double,3>::P(TPBDRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MP).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double,3> *)(*(longlong *)&(this->MP).field_0x8 + (longlong)param_1 * 0x18);
}

// PreV @ 143d5b6b0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticles<double,3>::PreV
          (TPBDRigidParticles<double,3> *this,TVector<double,3> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double,3> *pTVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MPreV).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)&(this->MPreV).field_0x8;
  fVar1 = *(float *)(lVar3 + 4 + lVar8 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar3 + lVar8 * 0xc);
  fVar2 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// PreV @ 143d5b770

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticles<double,3>::PreV
          (TPBDRigidParticles<double,3> *this,TVector<double,3> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double,3> *pTVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MPreV).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)&(this->MPreV).field_0x8;
  fVar1 = *(float *)(lVar3 + 4 + lVar8 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar3 + lVar8 * 0xc);
  fVar2 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// PreW @ 143d5b830

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticles<double,3>::PreW
          (TPBDRigidParticles<double,3> *this,TVector<double,3> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double,3> *pTVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MPreW).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)&(this->MPreW).field_0x8;
  fVar1 = *(float *)(lVar3 + 4 + lVar8 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar3 + lVar8 * 0xc);
  fVar2 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// PreW @ 143d5b8f0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticles<double,3>::PreW
          (TPBDRigidParticles<double,3> *this,TVector<double,3> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double,3> *pTVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MPreW).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)&(this->MPreW).field_0x8;
  fVar1 = *(float *)(lVar3 + 4 + lVar8 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar3 + lVar8 * 0xc);
  fVar2 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// Q @ 143d5f390

TRotation<double,3> * __thiscall
Chaos::TPBDRigidParticles<double,3>::Q
          (TPBDRigidParticles<double,3> *this,TRotation<double,3> *__return_storage_ptr__,
          int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TRotation<double,3> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < *(int *)&(this->MQ).field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TRotation<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar2 = *(longlong *)&(this->MQ).field_0x8;
  uVar1 = *(undefined8 *)(lVar2 + (longlong)param_1 * 0x10);
  *(double *)__return_storage_ptr__ = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)(lVar2 + 8 + (longlong)param_1 * 0x10);
  *(double *)&__return_storage_ptr__->field_0x10 = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x18 = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// Q @ 143d5f430

TRotation<double,3> * __thiscall
Chaos::TPBDRigidParticles<double,3>::Q
          (TPBDRigidParticles<double,3> *this,TRotation<double,3> *__return_storage_ptr__,
          int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TRotation<double,3> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < *(int *)&(this->MQ).field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TRotation<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar2 = *(longlong *)&(this->MQ).field_0x8;
  uVar1 = *(undefined8 *)(lVar2 + (longlong)param_1 * 0x10);
  *(double *)__return_storage_ptr__ = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)(lVar2 + 8 + (longlong)param_1 * 0x10);
  *(double *)&__return_storage_ptr__->field_0x10 = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x18 = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// RegisterArrays @ 143d60890

void __thiscall
Chaos::TPBDRigidParticles<double,3>::RegisterArrays(TPBDRigidParticles<double,3> *this)

{
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MP);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MQ);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MPreV);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MPreW);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MSolverBodyIndex);
  return;
}

// SetP @ 143d6f7f0

void __thiscall
Chaos::TPBDRigidParticles<double,3>::SetP
          (TPBDRigidParticles<double,3> *this,int param_1,TVector<double,3> *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  
  uVar5 = *(undefined4 *)param_2;
  uVar6 = *(undefined4 *)&param_2->field_0x4;
  uVar7 = *(undefined4 *)&param_2->field_0x8;
  uVar8 = *(undefined4 *)&param_2->field_0xc;
  uVar2 = *(undefined8 *)&param_2->field_0x10;
  uVar10 = 0;
  if (param_1 < *(int *)&(this->MP).field_0x10) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)&(this->MP).field_0x8;
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  *(undefined8 *)(lVar3 + 0x10 + (longlong)param_1 * 0x18) = uVar2;
  return;
}

// SetPreVf @ 143d70600

void __thiscall
Chaos::TPBDRigidParticles<double,3>::SetPreVf
          (TPBDRigidParticles<double,3> *this,int param_1,TVector<float,3> *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined4 *)&param_2->field_0x8;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MPreV).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)&(this->MPreV).field_0x8;
  *(undefined8 *)(lVar3 + (longlong)param_1 * 0xc) = uVar1;
  *(undefined4 *)(lVar3 + 8 + (longlong)param_1 * 0xc) = uVar2;
  return;
}

// SetQ @ 143d70b60

void __thiscall
Chaos::TPBDRigidParticles<double,3>::SetQ
          (TPBDRigidParticles<double,3> *this,int param_1,TRotation<double,3> *param_2)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  
  dVar2 = *(double *)param_2;
  dVar3 = *(double *)&param_2->field_0x8;
  uVar8 = 0;
  if (param_1 < *(int *)&(this->MQ).field_0x10) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  dVar4 = *(double *)&param_2->field_0x10;
  dVar5 = *(double *)&param_2->field_0x18;
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)&(this->MQ).field_0x8 + (longlong)param_1 * 0x10);
  *puVar1 = CONCAT44((float)dVar3,(float)dVar2);
  puVar1[1] = CONCAT44((float)dVar5,(float)dVar4);
  return;
}

// SetQf @ 143d70c20

void __thiscall
Chaos::TPBDRigidParticles<double,3>::SetQf
          (TPBDRigidParticles<double,3> *this,int param_1,TRotation<float,3> *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  
  uVar3 = *(undefined4 *)param_2;
  uVar4 = *(undefined4 *)&param_2->field_0x4;
  uVar5 = *(undefined4 *)&param_2->field_0x8;
  uVar6 = *(undefined4 *)&param_2->field_0xc;
  uVar8 = 0;
  if (param_1 < *(int *)&(this->MQ).field_0x10) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar1 = (undefined4 *)(*(longlong *)&(this->MQ).field_0x8 + (longlong)param_1 * 0x10);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  return;
}

// SetSleepType @ 143d70d90

void __thiscall
Chaos::TPBDRigidParticles<double,3>::SetSleepType
          (TPBDRigidParticles<double,3> *this,int param_1,ESleepType param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_2 == NeverSleep) {
    uVar3 = 0;
    if (param_1 < (int)this->_padding_) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(char *)(this->_padding_ + 0xb + (longlong)param_1 * 0x10) == '\x01') {
      SetObjectState(this,param_1,Dynamic);
    }
  }
  uVar3 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(ESleepType *)((longlong)param_1 + this->_padding_) = param_2;
  return;
}

// SetSolverBodyIndex @ 143d70e90

void __thiscall
Chaos::TPBDRigidParticles<double,3>::SetSolverBodyIndex
          (TPBDRigidParticles<double,3> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MSolverBodyIndex).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(int *)(*(longlong *)&(this->MSolverBodyIndex).field_0x8 + (longlong)param_1 * 4) = param_2;
  return;
}

// SolverBodyIndex @ 143d70f90

int __thiscall
Chaos::TPBDRigidParticles<double,3>::SolverBodyIndex(TPBDRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MSolverBodyIndex).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)(*(longlong *)&(this->MSolverBodyIndex).field_0x8 + (longlong)param_1 * 4);
}

// ToString @ 143d75c40

FString * __thiscall
Chaos::TPBDRigidParticles<double,3>::ToString
          (TPBDRigidParticles<double,3> *this,FString *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FString *pFVar5;
  uint uVar6;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  TVector<double,3> local_a0;
  TVector<double,3> local_88 [3];
  
  TKinematicGeometryParticlesImp<double,3,0>::ToString
            ((TKinematicGeometryParticlesImp<double,3,0> *)this,&local_100,param_1);
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar3 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar3 = uVar6;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  uVar3 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar3 = uVar6;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  uVar4 = 0;
  uVar3 = uVar4;
  if (param_1 < (int)this->_padding_) {
    uVar3 = uVar6;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  uVar3 = uVar4;
  if (param_1 < (int)this->_padding_) {
    uVar3 = uVar6;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  if (*(longlong *)(this->_padding_ + (longlong)param_1 * 8) != 0) {
    uVar3 = uVar4;
    if (param_1 < (int)this->_padding_) {
      uVar3 = uVar6;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
  }
  uVar3 = uVar4;
  if (param_1 < (int)this->_padding_) {
    uVar3 = uVar6;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  ::FString::PrintfImpl(&local_110,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
  if (param_1 < (int)this->_padding_) {
    uVar4 = uVar6;
  }
  if ((uVar4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  ::FString::PrintfImpl(&local_120,L"X=%3.3f Y=%3.3f Z=%3.3f");
  uVar4 = 0;
  uVar3 = uVar4;
  if (param_1 < (int)this->_padding_) {
    uVar3 = uVar6;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  uVar3 = uVar4;
  if (param_1 < (int)this->_padding_) {
    uVar3 = uVar6;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  uVar3 = uVar4;
  if (param_1 < (int)this->_padding_) {
    uVar3 = uVar6;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  ::FString::PrintfImpl(&local_130,L"X=%3.3f Y=%3.3f Z=%3.3f");
  uVar3 = uVar4;
  if (param_1 < (int)this->_padding_) {
    uVar3 = uVar6;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  ::FString::PrintfImpl(&local_140,L"X=%3.3f Y=%3.3f Z=%3.3f");
  uVar3 = uVar4;
  if (param_1 < (int)this->_padding_) {
    uVar3 = uVar6;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  ::FString::PrintfImpl(&local_150,L"X=%3.3f Y=%3.3f Z=%3.3f");
  uVar3 = uVar4;
  if (param_1 < (int)this->_padding_) {
    uVar3 = uVar6;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  ::FString::PrintfImpl(&local_160,L"X=%3.3f Y=%3.3f Z=%3.3f");
  uVar3 = uVar4;
  if (param_1 < (int)this->_padding_) {
    uVar3 = uVar6;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  ::FString::PrintfImpl(&local_170,L"X=%3.3f Y=%3.3f Z=%3.3f");
  if (param_1 < (int)this->_padding_) {
    uVar4 = uVar6;
  }
  if ((uVar4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  ::FString::PrintfImpl(&local_180,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl
            (&local_b0,
             L"%s, MAcceleration:%s, MAngularAcceleration:%s, MLinearImpulseVelocity:%s, MAngularImpulseVelocity:%s, MI:%s, MInvI:%s, MM:%f, MInvM:%f, MCenterOfMass:%s, MRotationOfMass:%s, MCollisionParticles(num):%d, MCollisionGroup:%d, MDisabled:%d, MSleeping:%d"
            );
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  GetPreW(this,&local_a0,param_1);
  ::FString::PrintfImpl(&local_c0,L"X=%3.3f Y=%3.3f Z=%3.3f");
  GetPreV(this,local_88,param_1);
  ::FString::PrintfImpl(&local_d0,L"X=%3.3f Y=%3.3f Z=%3.3f");
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MQ).field_0x10) {
    uVar3 = uVar6;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  ::FString::PrintfImpl(&local_e0,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MP).field_0x10) {
    uVar3 = uVar6;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  ::FString::PrintfImpl(&local_f0,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s, MP:%s, MQ:%s, MPreV:%s, MPreW:%s");
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

