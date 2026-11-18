// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 15

// CCDEnabled @ 143759340

bool __thiscall Chaos::FGenericParticleHandleImp::CCDEnabled(FGenericParticleHandleImp *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  uint uVar7;
  
  pTVar6 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->MHandle->_padding_ + 4)) {
    pTVar6 = this->MHandle;
  }
  if (pTVar6 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    uVar1 = (uint)pTVar6->_padding_;
    lVar2 = pTVar6->_padding_;
    uVar7 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    return (bool)(*(byte *)(*(longlong *)(lVar2 + 0x2d8) + 8 + (longlong)(int)uVar1 * 0x10) >> 1 & 1
                 );
  }
  return false;
}

// GetTransformPQ @ 143792d10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRigidTransform<double,3> * __thiscall
Chaos::FGenericParticleHandleImp::GetTransformPQ
          (FGenericParticleHandleImp *this,TRigidTransform<double,3> *__return_storage_ptr__)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined8 uVar10;
  bool bVar11;
  TRigidTransform<double,3> *pTVar12;
  TVector<double,3> *pTVar13;
  uint uVar14;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  longlong lVar15;
  
  bVar11 = IsDynamic(this);
  this_00 = this->MHandle;
  if (!bVar11) {
    TGeometryParticleHandleImp<double,3,1>::GetTransformXR(this_00,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  this_01 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this_00->_padding_ + 4)) {
    this_01 = this_00;
  }
  uVar3 = (uint)this_01->_padding_;
  lVar15 = (longlong)(int)uVar3;
  lVar4 = this_01->_padding_;
  uVar14 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x568)) {
    uVar14 = ~uVar3 >> 0x1f;
  }
  if (uVar14 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TRigidTransform<double,3> *)(*pcVar5)();
      return pTVar12;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x560);
  fVar1 = *(float *)(lVar4 + lVar15 * 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 8 + lVar15 * 0x10);
  dVar7 = (double)(float)((ulonglong)uVar2 >> 0x20);
  dVar9 = (double)*(float *)(lVar4 + 4 + lVar15 * 0x10);
  pTVar13 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                      ((TPBDRigidParticleHandleImp<double,3,1> *)this_01);
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar8;
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = (double)(float)uVar2;
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x10 = auVar6;
  uVar10 = *(undefined8 *)&pTVar13->field_0x8;
  uVar2 = *(undefined8 *)&pTVar13->field_0x10;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = *(undefined8 *)pTVar13;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = uVar10;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = uVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  uVar2 = _UNK_150689688;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = ___xmm_3ff00000000000003ff0000000000000;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = uVar2;
  uVar2 = _UNK_150689518;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = ___xmm_00000000000000003ff0000000000000;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = uVar2;
  return __return_storage_ptr__;
}

// GetTransformPQCom @ 143792e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRigidTransform<double,3> * __thiscall
Chaos::FGenericParticleHandleImp::GetTransformPQCom
          (FGenericParticleHandleImp *this,TRigidTransform<double,3> *__return_storage_ptr__)

{
  TGeometryParticleHandleImp<double,3,1> *this_00;
  undefined8 uVar1;
  bool bVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  TVector<double,3> local_48;
  TRotation<double,3> local_28;
  
  bVar2 = IsDynamic(this);
  this_00 = this->MHandle;
  if (bVar2) {
    pTVar3 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&this_00->_padding_ + 4)) {
      pTVar3 = this_00;
    }
    TPBDRigidParticles<double,3>::QCom
              ((TPBDRigidParticles<double,3> *)pTVar3->_padding_,&local_28,(int)pTVar3->_padding_);
    TPBDRigidParticles<double,3>::PCom
              ((TPBDRigidParticles<double,3> *)pTVar3->_padding_,&local_48,(int)pTVar3->_padding_);
    *(undefined8 *)__return_storage_ptr__ = local_28._0_8_;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = local_28._8_8_;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = local_28._16_8_;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = local_28._24_8_;
    *(undefined8 *)&__return_storage_ptr__->field_0x20 = local_48._0_8_;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = local_48._8_8_;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = local_48._16_8_;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
    uVar1 = _UNK_150689688;
    *(undefined8 *)&__return_storage_ptr__->field_0x40 = ___xmm_3ff00000000000003ff0000000000000;
    *(undefined8 *)&__return_storage_ptr__->field_0x48 = uVar1;
    uVar1 = _UNK_150689518;
    *(undefined8 *)&__return_storage_ptr__->field_0x50 = ___xmm_00000000000000003ff0000000000000;
    *(undefined8 *)&__return_storage_ptr__->field_0x58 = uVar1;
    return __return_storage_ptr__;
  }
  TGeometryParticleHandleImp<double,3,1>::GetTransformXR(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsDynamic @ 143797330

bool __thiscall Chaos::FGenericParticleHandleImp::IsDynamic(FGenericParticleHandleImp *this)

{
  EObjectStateType EVar1;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  
  this_01 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  pTVar2 = this_01;
  if (*(char *)((longlong)&this->MHandle->_padding_ + 4) != '\0') {
    pTVar2 = this->MHandle;
  }
  if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    this_00 = this_01;
    if (1 < *(byte *)((longlong)&pTVar2->_padding_ + 4)) {
      this_00 = pTVar2;
    }
    if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar1 = Kinematic;
    }
    else {
      EVar1 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    }
    if (EVar1 == Dynamic) {
      return true;
    }
  }
  pTVar2 = this_01;
  if (*(char *)((longlong)&this->MHandle->_padding_ + 4) != '\0') {
    pTVar2 = this->MHandle;
  }
  if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    if (1 < *(byte *)((longlong)&pTVar2->_padding_ + 4)) {
      this_01 = pTVar2;
    }
    if (this_01 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar1 = Kinematic;
    }
    else {
      EVar1 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_01);
    }
    if (EVar1 == Sleeping) {
      return true;
    }
  }
  return false;
}

// W @ 1437c1630

TVector<double,3> * __thiscall
Chaos::FGenericParticleHandleImp::W
          (FGenericParticleHandleImp *this,TVector<double,3> *__return_storage_ptr__)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  TVector<double,3> local_28;
  
  pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&this->MHandle->_padding_ + 4) != '\0') {
    pTVar1 = this->MHandle;
  }
  if (pTVar1 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    local_28._0_8_ = ZeroVector._0_8_;
    local_28._8_8_ = ZeroVector._8_8_;
    local_28._16_8_ = ZeroVector._16_8_;
  }
  else {
    TKinematicGeometryParticlesImp<double,3,0>::GetW
              ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar1->_padding_,&local_28,
               (int)pTVar1->_padding_);
  }
  *(undefined8 *)__return_storage_ptr__ = local_28._0_8_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = local_28._8_8_;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = local_28._16_8_;
  return __return_storage_ptr__;
}

// CollisionParticles @ 1439c8110

TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> * __thiscall
Chaos::FGenericParticleHandleImp::CollisionParticles(FGenericParticleHandleImp *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *pTVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  uint uVar7;
  
  pTVar6 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->MHandle->_padding_ + 4)) {
    pTVar6 = this->MHandle;
  }
  if (pTVar6 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    uVar1 = (uint)pTVar6->_padding_;
    lVar2 = pTVar6->_padding_;
    uVar7 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0x4c0)) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *)
                 (*pcVar3)();
        return pTVar5;
      }
    }
    return (TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *)
           (*(longlong *)(lVar2 + 0x4b8) + (longlong)(int)uVar1 * 8);
  }
  return &NullBVHParticles;
}

// GetDebugName @ 1439d2f80

FString * __thiscall Chaos::FGenericParticleHandleImp::GetDebugName(FGenericParticleHandleImp *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  
  uVar1 = (uint)this->MHandle->_padding_;
  lVar2 = this->MHandle->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x280)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (*(longlong *)(*(longlong *)(lVar2 + 0x278) + (longlong)(int)uVar1 * 0x10) == 0) {
    pFVar6 = &Chaos::Private::EmptyParticleName;
  }
  else {
    uVar5 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0x280)) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
    }
    pFVar6 = *(FString **)(*(longlong *)(lVar2 + 0x278) + (longlong)(int)uVar1 * 0x10);
  }
  return pFVar6;
}

// GetPreVf @ 1439d3800

TVector<float,3> * __thiscall
Chaos::FGenericParticleHandleImp::GetPreVf
          (FGenericParticleHandleImp *this,TVector<float,3> *__return_storage_ptr__)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TVector<float,3> *pTVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  uint uVar8;
  
  uVar2 = ZeroVectorf._8_4_;
  pTVar7 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->MHandle->_padding_ + 4)) {
    pTVar7 = this->MHandle;
  }
  if (pTVar7 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    lVar3 = pTVar7->_padding_;
    uVar1 = (uint)pTVar7->_padding_;
    uVar8 = 0;
    if ((int)uVar1 < *(int *)(lVar3 + 0x580)) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TVector<float,3> *)(*pcVar4)();
        return pTVar6;
      }
    }
    lVar3 = *(longlong *)(lVar3 + 0x578);
    uVar2 = *(undefined4 *)(lVar3 + 8 + (longlong)(int)uVar1 * 0xc);
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)(lVar3 + (longlong)(int)uVar1 * 0xc);
    *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar2;
    return __return_storage_ptr__;
  }
  *(undefined8 *)__return_storage_ptr__ = ZeroVectorf._0_8_;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar2;
  return __return_storage_ptr__;
}

// GetVf @ 1439d4640

TVector<float,3> * __thiscall
Chaos::FGenericParticleHandleImp::GetVf
          (FGenericParticleHandleImp *this,TVector<float,3> *__return_storage_ptr__)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TVector<float,3> *pTVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  uint uVar8;
  TVector<float,3> local_28;
  TVector<float,3> local_1c;
  
  pTVar7 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&this->MHandle->_padding_ + 4) != '\0') {
    pTVar7 = this->MHandle;
  }
  if (pTVar7 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    local_1c._8_4_ = ZeroVectorf._8_4_;
    pTVar6 = &local_1c;
    local_1c._0_8_ = ZeroVectorf._0_8_;
  }
  else {
    lVar3 = pTVar7->_padding_;
    uVar1 = (uint)pTVar7->_padding_;
    uVar8 = 0;
    if ((int)uVar1 < *(int *)(lVar3 + 0x298)) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TVector<float,3> *)(*pcVar4)();
        return pTVar6;
      }
    }
    lVar3 = *(longlong *)(lVar3 + 0x290);
    local_28._8_4_ = *(undefined4 *)(lVar3 + 8 + (longlong)(int)uVar1 * 0xc);
    pTVar6 = &local_28;
    local_28._0_8_ = *(undefined8 *)(lVar3 + (longlong)(int)uVar1 * 0xc);
  }
  uVar2 = *(undefined4 *)&pTVar6->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)pTVar6;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar2;
  return __return_storage_ptr__;
}

// MACDEnabled @ 1439d5800

bool __thiscall Chaos::FGenericParticleHandleImp::MACDEnabled(FGenericParticleHandleImp *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  uint uVar7;
  
  pTVar6 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->MHandle->_padding_ + 4)) {
    pTVar6 = this->MHandle;
  }
  if (pTVar6 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    uVar1 = (uint)pTVar6->_padding_;
    lVar2 = pTVar6->_padding_;
    uVar7 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    return (bool)((byte)((ushort)*(undefined2 *)
                                  (*(longlong *)(lVar2 + 0x2d8) + 8 + (longlong)(int)uVar1 * 0x10)
                        >> 9) & 1);
  }
  return false;
}

// OneWayInteraction @ 1439d5c80

bool __thiscall Chaos::FGenericParticleHandleImp::OneWayInteraction(FGenericParticleHandleImp *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  uint uVar7;
  
  pTVar6 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->MHandle->_padding_ + 4)) {
    pTVar6 = this->MHandle;
  }
  if (pTVar6 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    uVar1 = (uint)pTVar6->_padding_;
    lVar2 = pTVar6->_padding_;
    uVar7 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    return (bool)(*(byte *)(*(longlong *)(lVar2 + 0x2d8) + 8 + (longlong)(int)uVar1 * 0x10) >> 2 & 1
                 );
  }
  return false;
}

// InitialOverlapDepenetrationVelocity @ 143a0fb00

float __thiscall
Chaos::FGenericParticleHandleImp::InitialOverlapDepenetrationVelocity
          (FGenericParticleHandleImp *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  uint uVar6;
  float fVar7;
  
  pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->MHandle->_padding_ + 4)) {
    pTVar5 = this->MHandle;
  }
  if (pTVar5 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    uVar1 = (uint)pTVar5->_padding_;
    lVar2 = pTVar5->_padding_;
    uVar6 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0x490)) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        fVar7 = (float)(*pcVar3)();
        return fVar7;
      }
    }
    return *(float *)(*(longlong *)(lVar2 + 0x488) + (longlong)(int)uVar1 * 4);
  }
  return __real_bf800000;
}

// InvM @ 143a0fba0

double __thiscall Chaos::FGenericParticleHandleImp::InvM(FGenericParticleHandleImp *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  uint uVar6;
  double dVar7;
  
  bVar4 = IsDynamic(this);
  if (!bVar4) {
    return 0.0;
  }
  pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->MHandle->_padding_ + 4)) {
    pTVar5 = this->MHandle;
  }
  uVar1 = (uint)pTVar5->_padding_;
  lVar2 = pTVar5->_padding_;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 1000)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar7 = (double)(*pcVar3)();
      return dVar7;
    }
  }
  return *(double *)(*(longlong *)(lVar2 + 0x3e0) + (longlong)(int)uVar1 * 8);
}

// WorldSpaceInflatedBounds @ 143a9d7d0

TAABB<double,3> * __thiscall
Chaos::FGenericParticleHandleImp::WorldSpaceInflatedBounds(FGenericParticleHandleImp *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TAABB<double,3> *pTVar6;
  
  uVar1 = (uint)this->MHandle->_padding_;
  lVar2 = this->MHandle->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x148)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TAABB<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TAABB<double,3> *)((longlong)(int)uVar1 * 0x30 + *(longlong *)(lVar2 + 0x140));
}

// GetComRelativeTransform @ 143ba1bb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRigidTransform<double,3> * __thiscall
Chaos::FGenericParticleHandleImp::GetComRelativeTransform
          (FGenericParticleHandleImp *this,TRigidTransform<double,3> *__return_storage_ptr__,
          TRigidTransform<double,3> *param_1)

{
  double dVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  TRotation<double,3> *pTVar17;
  TRigidTransform<double,3> *pTVar18;
  TGeometryParticleHandleImp<double,3,1> *pTVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  uint uVar25;
  double dVar26;
  double dVar27;
  uint uVar28;
  double dVar29;
  double dVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  double local_128;
  double dStack_120;
  double local_118;
  undefined1 local_f8 [16];
  
  bVar16 = IsDynamic(this);
  if (bVar16) {
    dVar10 = *(double *)param_1;
    dVar11 = *(double *)&param_1->field_0x8;
    dVar1 = *(double *)&param_1->field_0x10;
    dVar5 = *(double *)&param_1->field_0x18;
    local_f8 = *(undefined1 (*) [16])&param_1->field_0x10;
    bVar16 = IsDynamic(this);
    if (bVar16) {
      pTVar19 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&this->MHandle->_padding_ + 4)) {
        pTVar19 = this->MHandle;
      }
      pTVar17 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar19);
      dVar26 = *(double *)pTVar17 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar29 = *(double *)&pTVar17->field_0x8 *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar7 = *(double *)&pTVar17->field_0x10 *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar8 = *(double *)&pTVar17->field_0x18 *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar4 = dVar26 * dVar11;
      dVar6 = dVar26 * dVar10;
      auVar21._8_4_ = SUB84(dVar8,0);
      auVar21._0_8_ = dVar8;
      auVar21._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar24._8_4_ = SUB84(dVar29,0);
      auVar24._0_8_ = dVar29;
      auVar24._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      auVar22._8_4_ = SUB84(dVar7,0);
      auVar22._0_8_ = dVar7;
      auVar22._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      dVar27 = dVar29 * dVar10;
      dVar30 = dVar29 * dVar11;
      dVar23 = auVar22._8_8_ * dVar10;
      dVar10 = dVar5 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar8 * dVar10 +
               dVar29 * dVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar7 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar11 = dVar1 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar21._8_8_ * dVar11 +
               auVar24._8_8_ * dVar5 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar6 = dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar8 * dVar5 +
              dVar30 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar7 * dVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_f8._8_4_ = SUB84(dVar6,0);
      local_f8._0_8_ =
           dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar8 * dVar1 +
           dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar7 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_f8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    }
    local_118 = *(double *)&param_1->field_0x30;
    local_128 = *(double *)&param_1->field_0x20;
    dStack_120 = *(double *)&param_1->field_0x28;
    bVar16 = IsDynamic(this);
    if (bVar16) {
      pTVar19 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&this->MHandle->_padding_ + 4)) {
        pTVar19 = this->MHandle;
      }
      pTVar17 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar19);
      uVar25 = (uint)pTVar19->_padding_;
      lVar20 = (longlong)(int)uVar25;
      lVar2 = pTVar19->_padding_;
      uVar28 = 0;
      if ((int)uVar25 < *(int *)(lVar2 + 0x400)) {
        uVar28 = ~uVar25 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar3 = (code *)swi(3);
        pTVar18 = (TRigidTransform<double,3> *)(*pcVar3)();
        return pTVar18;
      }
      uVar25 = (uint)__xmm_80000000000000008000000000000000;
      uVar33 = (uint)*(undefined8 *)pTVar17 ^ uVar25;
      uVar28 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      uVar34 = (uint)((ulonglong)*(undefined8 *)pTVar17 >> 0x20) ^ uVar28;
      uVar31 = (uint)*(undefined8 *)&pTVar17->field_0x8 ^ uVar25;
      uVar32 = (uint)((ulonglong)*(undefined8 *)&pTVar17->field_0x8 >> 0x20) ^ uVar28;
      lVar2 = *(longlong *)(lVar2 + 0x3f8);
      uVar25 = (uint)*(undefined8 *)&pTVar17->field_0x10 ^ uVar25;
      uVar28 = (uint)((ulonglong)*(undefined8 *)&pTVar17->field_0x10 >> 0x20) ^ uVar28;
      dVar1 = *(double *)&pTVar17->field_0x18;
      local_118 = local_118 - *(double *)(lVar2 + 0x10 + lVar20 * 0x18);
      dStack_120 = dStack_120 - *(double *)(lVar2 + 8 + lVar20 * 0x18);
      local_128 = local_128 - *(double *)(lVar2 + lVar20 * 0x18);
      dVar4 = (double)CONCAT44(uVar32,uVar31) * local_118 -
              (double)CONCAT44(uVar28,uVar25) * dStack_120;
      dVar4 = dVar4 + dVar4;
      dVar6 = (double)CONCAT44(uVar28,uVar25) * local_128 -
              (double)CONCAT44(uVar34,uVar33) * local_118;
      dVar6 = dVar6 + dVar6;
      dVar5 = (double)CONCAT44(uVar34,uVar33) * dStack_120 -
              (double)CONCAT44(uVar32,uVar31) * local_128;
      dVar5 = dVar5 + dVar5;
      local_128 = (dVar5 * (double)CONCAT44(uVar32,uVar31) - dVar6 * (double)CONCAT44(uVar28,uVar25)
                  ) + dVar4 * dVar1 + local_128;
      local_118 = (dVar6 * (double)CONCAT44(uVar34,uVar33) - dVar4 * (double)CONCAT44(uVar32,uVar31)
                  ) + dVar5 * dVar1 + local_118;
      dStack_120 = (dVar4 * (double)CONCAT44(uVar28,uVar25) -
                   dVar5 * (double)CONCAT44(uVar34,uVar33)) + dVar6 * dVar1 + dStack_120;
    }
    auVar9._8_4_ = SUB84(dVar11,0);
    auVar9._0_8_ = dVar10;
    auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    *(undefined1 (*) [16])__return_storage_ptr__ = auVar9;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = local_f8._0_8_;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = local_f8._8_8_;
    *(double *)&__return_storage_ptr__->field_0x20 = local_128;
    *(double *)&__return_storage_ptr__->field_0x28 = dStack_120;
    *(double *)&__return_storage_ptr__->field_0x30 = local_118;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
    uVar12 = _UNK_150689688;
    *(undefined8 *)&__return_storage_ptr__->field_0x40 = ___xmm_3ff00000000000003ff0000000000000;
    *(undefined8 *)&__return_storage_ptr__->field_0x48 = uVar12;
    uVar12 = _UNK_150689518;
    *(undefined8 *)&__return_storage_ptr__->field_0x50 = ___xmm_00000000000000003ff0000000000000;
    *(undefined8 *)&__return_storage_ptr__->field_0x58 = uVar12;
  }
  else {
    uVar12 = *(undefined8 *)&param_1->field_0x8;
    uVar13 = *(undefined8 *)&param_1->field_0x10;
    uVar14 = *(undefined8 *)&param_1->field_0x18;
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar12;
    uVar12 = *(undefined8 *)&param_1->field_0x20;
    uVar15 = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar13;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar14;
    uVar13 = *(undefined8 *)&param_1->field_0x30;
    uVar14 = *(undefined8 *)&param_1->field_0x38;
    *(undefined8 *)&__return_storage_ptr__->field_0x20 = uVar12;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = uVar15;
    uVar12 = *(undefined8 *)&param_1->field_0x40;
    uVar15 = *(undefined8 *)&param_1->field_0x48;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = uVar13;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = uVar14;
    uVar13 = *(undefined8 *)&param_1->field_0x50;
    uVar14 = *(undefined8 *)&param_1->field_0x58;
    *(undefined8 *)&__return_storage_ptr__->field_0x40 = uVar12;
    *(undefined8 *)&__return_storage_ptr__->field_0x48 = uVar15;
    *(undefined8 *)&__return_storage_ptr__->field_0x50 = uVar13;
    *(undefined8 *)&__return_storage_ptr__->field_0x58 = uVar14;
  }
  return __return_storage_ptr__;
}

