// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 183

// AngularEtherDrag @ 1436f8ad0

double __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::AngularEtherDrag
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  double dVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x448)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar6 = (double)(*pcVar3)();
      return dVar6;
    }
  }
  return *(double *)(*(longlong *)(lVar2 + 0x440) + (longlong)(int)uVar1 * 8);
}

// CenterOfMass @ 1436fbae0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x400)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 0x3f8) + (longlong)(int)uVar1 * 0x18);
}

// CollisionGroup @ 1436fbd60

int __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::CollisionGroup
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  return *(int *)(*(longlong *)(lVar2 + 0x2d8) + (longlong)(int)uVar1 * 0x10);
}

// Disabled @ 1436fe3f0

bool __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  return (bool)*(undefined1 *)(*(longlong *)(lVar2 + 0x2d8) + 0xd + (longlong)(int)uVar1 * 0x10);
}

// GetP @ 1436ffce0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::GetP(TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x550)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 0x548) + (longlong)(int)uVar1 * 0x18);
}

// I @ 1437004d0

TVector<float,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::I(TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<float,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x388)) {
    uVar5 = ~uVar1 >> 0x1f;
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
  return (TVector<float,3> *)(*(longlong *)(lVar2 + 0x380) + (longlong)(int)uVar1 * 0xc);
}

// InitialOverlapDepenetrationVelocity @ 143700550

float __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::InitialOverlapDepenetrationVelocity
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  float fVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x490)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return fVar6;
    }
  }
  return *(float *)(*(longlong *)(lVar2 + 0x488) + (longlong)(int)uVar1 * 4);
}

// InvI @ 143701730

TVector<float,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::InvI(TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<float,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x3a0)) {
    uVar5 = ~uVar1 >> 0x1f;
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
  return (TVector<float,3> *)(*(longlong *)(lVar2 + 0x398) + (longlong)(int)uVar1 * 0xc);
}

// InvM @ 1437017b0

double __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::InvM(TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  double dVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 1000)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar6 = (double)(*pcVar3)();
      return dVar6;
    }
  }
  return *(double *)(*(longlong *)(lVar2 + 0x3e0) + (longlong)(int)uVar1 * 8);
}

// LinearEtherDrag @ 143701a30

double __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::LinearEtherDrag
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  double dVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x430)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar6 = (double)(*pcVar3)();
      return dVar6;
    }
  }
  return *(double *)(*(longlong *)(lVar2 + 0x428) + (longlong)(int)uVar1 * 8);
}

// M @ 143701ab0

double __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::M(TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  double dVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x3d0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar6 = (double)(*pcVar3)();
      return dVar6;
    }
  }
  return *(double *)(*(longlong *)(lVar2 + 0x3c8) + (longlong)(int)uVar1 * 8);
}

// MaxAngularSpeedSq @ 143701b30

double __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::MaxAngularSpeedSq
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  double dVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x478)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar6 = (double)(*pcVar3)();
      return dVar6;
    }
  }
  return *(double *)(*(longlong *)(lVar2 + 0x470) + (longlong)(int)uVar1 * 8);
}

// MaxLinearSpeedSq @ 143701bb0

double __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::MaxLinearSpeedSq
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  double dVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x460)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar6 = (double)(*pcVar3)();
      return dVar6;
    }
  }
  return *(double *)(*(longlong *)(lVar2 + 0x458) + (longlong)(int)uVar1 * 8);
}

// ObjectState @ 143701dc0

EObjectStateType __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  EObjectStateType EVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  return *(EObjectStateType *)(*(longlong *)(lVar2 + 0x2d8) + 0xb + (longlong)(int)uVar1 * 0x10);
}

// RotationOfMass @ 143703d20

TRotation<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TRotation<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x418)) {
    uVar5 = ~uVar1 >> 0x1f;
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
  return (TRotation<double,3> *)((longlong)(int)uVar1 * 0x20 + *(longlong *)(lVar2 + 0x410));
}

// SleepThresholdMultiplier @ 143704520

float __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SleepThresholdMultiplier
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  float fVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x4a8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return fVar6;
    }
  }
  return *(float *)(*(longlong *)(lVar2 + 0x4a0) + (longlong)(int)uVar1 * 4);
}

// CollisionParticles @ 143759b90

TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::CollisionParticles
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x4c0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *)(*pcVar3)()
      ;
      return pTVar6;
    }
  }
  return (TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *)
         (*(longlong *)(lVar2 + 0x4b8) + (longlong)(int)uVar1 * 8);
}

// InvIConditioning @ 143797090

TVector<float,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::InvIConditioning
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<float,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x3b8)) {
    uVar5 = ~uVar1 >> 0x1f;
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
  return (TVector<float,3> *)(*(longlong *)(lVar2 + 0x3b0) + (longlong)(int)uVar1 * 0xc);
}

// InvM @ 143797110

double * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::InvM(TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  double *pdVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 1000)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pdVar6 = (double *)(*pcVar3)();
      return pdVar6;
    }
  }
  return (double *)(*(longlong *)(lVar2 + 0x3e0) + (longlong)(int)uVar1 * 8);
}

// IsDynamic @ 1437972f0

bool __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::IsDynamic
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  EObjectStateType EVar1;
  
  EVar1 = ObjectState(this);
  if (EVar1 != Dynamic) {
    EVar1 = ObjectState(this);
    if (EVar1 != Sleeping) {
      return false;
    }
  }
  return true;
}

// OneWayInteraction @ 14379acd0

bool __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::OneWayInteraction
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  return (bool)(*(byte *)(*(longlong *)(lVar2 + 0x2d8) + 8 + (longlong)(int)uVar1 * 0x10) >> 2 & 1);
}

// SetP @ 1437ae430

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetP
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  
  uVar3 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar6 = *(undefined4 *)param_1;
  uVar7 = *(undefined4 *)&param_1->field_0x4;
  uVar8 = *(undefined4 *)&param_1->field_0x8;
  uVar9 = *(undefined4 *)&param_1->field_0xc;
  uVar2 = *(undefined8 *)&param_1->field_0x10;
  uVar11 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x550)) {
    uVar11 = ~uVar3 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x548);
  puVar1 = (undefined4 *)(lVar4 + (longlong)(int)uVar3 * 0x18);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  *(undefined8 *)(lVar4 + 0x10 + (longlong)(int)uVar3 * 0x18) = uVar2;
  return;
}

// AngularEtherDrag @ 14389c660

double * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::AngularEtherDrag
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  double *pdVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x448)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pdVar6 = (double *)(*pcVar3)();
      return pdVar6;
    }
  }
  return (double *)(*(longlong *)(lVar2 + 0x440) + (longlong)(int)uVar1 * 8);
}

// Disabled @ 1438ae280

bool * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  bool *pbVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pbVar6 = (bool *)(*pcVar3)();
      return pbVar6;
    }
  }
  return (bool *)(*(longlong *)(lVar2 + 0x2d8) + 0xd + (longlong)(int)uVar1 * 0x10);
}

// GravityEnabled @ 1438bd4f0

bool __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::GravityEnabled
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  return (bool)(*(byte *)(*(longlong *)(lVar2 + 0x2d8) + 8 + (longlong)(int)uVar1 * 0x10) & 1);
}

// LinearEtherDrag @ 1438c3d30

double * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::LinearEtherDrag
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  double *pdVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x430)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pdVar6 = (double *)(*pcVar3)();
      return pdVar6;
    }
  }
  return (double *)(*(longlong *)(lVar2 + 0x428) + (longlong)(int)uVar1 * 8);
}

// M @ 1438c3db0

double * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::M(TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  double *pdVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x3d0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pdVar6 = (double *)(*pcVar3)();
      return pdVar6;
    }
  }
  return (double *)(*(longlong *)(lVar2 + 0x3c8) + (longlong)(int)uVar1 * 8);
}

// MACDEnabled @ 1438c3e30

bool __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::MACDEnabled
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
                                (*(longlong *)(lVar2 + 0x2d8) + 8 + (longlong)(int)uVar1 * 0x10) >>
                      9) & 1);
}

// SetDisabled @ 1438d1f90

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetDisabled
          (TPBDRigidParticleHandleImp<double,3,1> *this,bool param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(bool *)(*(longlong *)(lVar2 + 0x2d8) + 0xd + (longlong)(int)uVar1 * 0x10) = param_1;
  return;
}

// SetGravityEnabled @ 1438d2290

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetGravityEnabled
          (TPBDRigidParticleHandleImp<double,3,1> *this,bool param_1)

{
  ushort *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar6 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar2 < *(int *)(lVar6 + 0x2e0)) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar6 = (longlong)(int)uVar2 * 0x10 + *(longlong *)(lVar6 + 0x2d8);
  puVar1 = (ushort *)(lVar6 + 8);
  *puVar1 = *puVar1 & 0xfffe;
  puVar1 = (ushort *)(lVar6 + 8);
  *puVar1 = *puVar1 | (ushort)param_1;
  return;
}

// SetGravityGroupIndex @ 1438d2330

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetGravityGroupIndex
          (TPBDRigidParticleHandleImp<double,3,1> *this,int param_1)

{
  ushort *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar6 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar2 < *(int *)(lVar6 + 0x2e0)) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar6 = (longlong)(int)uVar2 * 0x10 + *(longlong *)(lVar6 + 0x2d8);
  if (7 < param_1) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1166656608155992106>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\RigidParticleControlFlags.h"
                       ,0x2a,"GravityGroupIndex < 8");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = (ushort *)(lVar6 + 8);
  *puVar1 = *puVar1 ^ ((short)param_1 << 5 ^ *(ushort *)(lVar6 + 8)) & 0xe0;
  return;
}

// SetInitialOverlapDepenetrationVelocity @ 1438d2c50

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetInitialOverlapDepenetrationVelocity
          (TPBDRigidParticleHandleImp<double,3,1> *this,float param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x490)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(float *)(*(longlong *)(lVar2 + 0x488) + (longlong)(int)uVar1 * 4) = param_1;
  return;
}

// SetMACDEnabled @ 1438d2dd0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetMACDEnabled
          (TPBDRigidParticleHandleImp<double,3,1> *this,bool param_1)

{
  ushort *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar6 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar2 < *(int *)(lVar6 + 0x2e0)) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar6 = (longlong)(int)uVar2 * 0x10 + *(longlong *)(lVar6 + 0x2d8);
  puVar1 = (ushort *)(lVar6 + 8);
  *puVar1 = *puVar1 & 0xfdff;
  puVar1 = (ushort *)(lVar6 + 8);
  *puVar1 = *puVar1 | (ushort)param_1 << 9;
  return;
}

// SetQ @ 1438d3f40

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetQ
          (TPBDRigidParticleHandleImp<double,3,1> *this,TRotation<double,3> *param_1)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  
  uVar6 = *(uint *)&this->field_0x8;
  lVar7 = *(longlong *)this;
  dVar2 = *(double *)param_1;
  dVar3 = *(double *)&param_1->field_0x8;
  dVar4 = *(double *)&param_1->field_0x10;
  dVar5 = *(double *)&param_1->field_0x18;
  uVar10 = 0;
  if ((int)uVar6 < *(int *)(lVar7 + 0x568)) {
    uVar10 = ~uVar6 >> 0x1f;
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
  puVar1 = (undefined8 *)(*(longlong *)(lVar7 + 0x560) + (longlong)(int)uVar6 * 0x10);
  *puVar1 = CONCAT44((float)dVar3,(float)dVar2);
  puVar1[1] = CONCAT44((float)dVar5,(float)dVar4);
  return;
}

// SetSleepThresholdMultiplier @ 1438d48a0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetSleepThresholdMultiplier
          (TPBDRigidParticleHandleImp<double,3,1> *this,float param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x4a8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(float *)(*(longlong *)(lVar2 + 0x4a0) + (longlong)(int)uVar1 * 4) = param_1;
  return;
}

// Sleeping @ 1438d4a70

bool __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::Sleeping
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  return *(char *)(*(longlong *)(lVar2 + 0x2d8) + 0xb + (longlong)(int)uVar1 * 0x10) == '\x01';
}

// CCDEnabled @ 143959e00

bool __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::CCDEnabled
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  return (bool)(*(byte *)(*(longlong *)(lVar2 + 0x2d8) + 8 + (longlong)(int)uVar1 * 0x10) >> 1 & 1);
}

// GetQ @ 1439616c0

TRotation<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::GetQ
          (TPBDRigidParticleHandleImp<double,3,1> *this,TRotation<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TRotation<double,3> *pTVar7;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x568)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TRotation<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x560);
  uVar1 = *(undefined8 *)(lVar3 + (longlong)(int)uVar2 * 0x10);
  *(double *)__return_storage_ptr__ = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)(lVar3 + 8 + (longlong)(int)uVar2 * 0x10);
  *(double *)&__return_storage_ptr__->field_0x10 = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x18 = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// IsMovingKinematic @ 1439d55e0

bool __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::IsMovingKinematic
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  EObjectStateType EVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  
  EVar4 = ObjectState(this);
  if (EVar4 == Kinematic) {
    uVar1 = *(uint *)&this->field_0x8;
    lVar2 = *(longlong *)this;
    uVar7 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    if ((*(byte *)(*(longlong *)(lVar2 + 0x2d8) + 10 + (longlong)(int)uVar1 * 0x10) & 4) != 0) {
      return true;
    }
  }
  return false;
}

// UseIgnoreCollisionManager @ 143a24820

bool __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::UseIgnoreCollisionManager
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  return (bool)(*(byte *)(*(longlong *)(lVar2 + 0x2d8) + 10 + (longlong)(int)uVar1 * 0x10) >> 1 & 1)
  ;
}

// GetQf @ 143a6f5b0

TRotation<float,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::GetQf
          (TPBDRigidParticleHandleImp<double,3,1> *this,TRotation<float,3> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TRotation<float,3> *pTVar8;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x568)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TRotation<float,3> *)(*pcVar4)();
      return pTVar8;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x560) + (longlong)(int)uVar2 * 0x10);
  uVar5 = puVar1[1];
  *(undefined8 *)__return_storage_ptr__ = *puVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar5;
  return __return_storage_ptr__;
}

// GetTransformPQ @ 143a70450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRigidTransform<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::GetTransformPQ
          (TPBDRigidParticleHandleImp<double,3,1> *this,
          TRigidTransform<double,3> *__return_storage_ptr__)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  TRigidTransform<double,3> *pTVar13;
  TVector<double,3> *pTVar14;
  longlong lVar15;
  
  uVar3 = *(uint *)&this->field_0x8;
  lVar15 = (longlong)(int)uVar3;
  lVar4 = *(longlong *)this;
  uVar12 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x568)) {
    uVar12 = ~uVar3 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TRigidTransform<double,3> *)(*pcVar5)();
      return pTVar13;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x560);
  fVar1 = *(float *)(lVar4 + lVar15 * 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 8 + lVar15 * 0x10);
  dVar7 = (double)(float)((ulonglong)uVar2 >> 0x20);
  dVar9 = (double)*(float *)(lVar4 + 4 + lVar15 * 0x10);
  pTVar14 = GetP(this);
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar8;
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = (double)(float)uVar2;
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x10 = auVar6;
  uVar10 = *(undefined8 *)&pTVar14->field_0x8;
  uVar2 = *(undefined8 *)&pTVar14->field_0x10;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = *(undefined8 *)pTVar14;
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

// GetP @ 143b219e0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,0>::GetP(TPBDRigidParticleHandleImp<double,3,0> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x550)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 0x548) + (longlong)(int)uVar1 * 0x18);
}

// GetQ @ 143b21f40

TRotation<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,0>::GetQ
          (TPBDRigidParticleHandleImp<double,3,0> *this,TRotation<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TRotation<double,3> *pTVar7;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x568)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TRotation<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x560);
  uVar1 = *(undefined8 *)(lVar3 + (longlong)(int)uVar2 * 0x10);
  *(double *)__return_storage_ptr__ = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)(lVar3 + 8 + (longlong)(int)uVar2 * 0x10);
  *(double *)&__return_storage_ptr__->field_0x10 = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x18 = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// ObjectState @ 143b29cb0

EObjectStateType __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,0>::ObjectState
          (TPBDRigidParticleHandleImp<double,3,0> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  EObjectStateType EVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  return *(EObjectStateType *)(*(longlong *)(lVar2 + 0x2d8) + 0xb + (longlong)(int)uVar1 * 0x10);
}

// SetSolverBodyIndex @ 143b41330

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetSolverBodyIndex
          (TPBDRigidParticleHandleImp<double,3,1> *this,int param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x5b0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(int *)(*(longlong *)(lVar2 + 0x5a8) + (longlong)(int)uVar1 * 4) = param_1;
  return;
}

// GetPreV @ 143b68590

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::GetPreV
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TVector<double,3> *pTVar8;
  longlong lVar9;
  
  uVar3 = *(uint *)&this->field_0x8;
  lVar9 = (longlong)(int)uVar3;
  lVar4 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x580)) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TVector<double,3> *)(*pcVar5)();
      return pTVar8;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x578);
  fVar1 = *(float *)(lVar4 + 4 + lVar9 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar4 + lVar9 * 0xc);
  fVar2 = *(float *)(lVar4 + 8 + lVar9 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// GetPreW @ 143b68640

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::GetPreW
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TVector<double,3> *pTVar8;
  longlong lVar9;
  
  uVar3 = *(uint *)&this->field_0x8;
  lVar9 = (longlong)(int)uVar3;
  lVar4 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x598)) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TVector<double,3> *)(*pcVar5)();
      return pTVar8;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x590);
  fVar1 = *(float *)(lVar4 + 4 + lVar9 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar4 + lVar9 * 0xc);
  fVar2 = *(float *)(lVar4 + 8 + lVar9 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// SetSleepCounter @ 143b78fd0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetSleepCounter
          (TPBDRigidParticleHandleImp<double,3,1> *this,schar param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x4f0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(schar *)((longlong)(int)uVar1 + *(longlong *)(lVar2 + 0x4e8)) = param_1;
  return;
}

// SetVSmooth @ 143b795f0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetVSmooth
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  
  uVar3 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar6 = *(undefined4 *)param_1;
  uVar7 = *(undefined4 *)&param_1->field_0x4;
  uVar8 = *(undefined4 *)&param_1->field_0x8;
  uVar9 = *(undefined4 *)&param_1->field_0xc;
  uVar2 = *(undefined8 *)&param_1->field_0x10;
  uVar11 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x2f8)) {
    uVar11 = ~uVar3 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x2f0);
  puVar1 = (undefined4 *)(lVar4 + (longlong)(int)uVar3 * 0x18);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  *(undefined8 *)(lVar4 + 0x10 + (longlong)(int)uVar3 * 0x18) = uVar2;
  return;
}

// SleepCounter @ 143b79880

schar __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SleepCounter
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  schar sVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x4f0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      sVar5 = (*pcVar3)();
      return sVar5;
    }
  }
  return *(schar *)((longlong)(int)uVar1 + *(longlong *)(lVar2 + 0x4e8));
}

// SleepType @ 143b79cc0

ESleepType __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SleepType
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  ESleepType EVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x4d8)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  return *(ESleepType *)((longlong)(int)uVar1 + *(longlong *)(lVar2 + 0x4d0));
}

// VSmooth @ 143b7eb20

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::VSmooth(TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2f8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 0x2f0) + (longlong)(int)uVar1 * 0x18);
}

// VSmooth @ 143b7eba0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,0>::VSmooth(TPBDRigidParticleHandleImp<double,3,0> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2f8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 0x2f0) + (longlong)(int)uVar1 * 0x18);
}

// WSmooth @ 143b80230

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::WSmooth(TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x310)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 0x308) + (longlong)(int)uVar1 * 0x18);
}

// WSmooth @ 143b802b0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,0>::WSmooth(TPBDRigidParticleHandleImp<double,3,0> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x310)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 0x308) + (longlong)(int)uVar1 * 0x18);
}

// TPBDRigidParticleHandleImp<double,3,1> @ 143bdd920

TPBDRigidParticleHandleImp<double,3,1> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::TPBDRigidParticleHandleImp<double,3,1>
          (TPBDRigidParticleHandleImp<double,3,1> *this,
          TSerializablePtr<Chaos::TPBDRigidParticles<double,3>_> param_1,int param_2,int param_3,
          FPBDRigidParticleParameters *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  EObjectStateType EVar8;
  uint uVar9;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar10;
  TVector<double,3> *pTVar11;
  uint uVar12;
  longlong lVar13;
  TVector<double,3> local_98;
  TVector<double,3> local_80;
  TVector<double,3> local_68;
  TVector<double,3> local_50 [2];
  
  TKinematicGeometryParticleHandleImp<double,3,1>::TKinematicGeometryParticleHandleImp<double,3,1>
            ((TKinematicGeometryParticleHandleImp<double,3,1> *)this,
             (TSerializablePtr<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>)param_1.Ptr,
             param_2,param_3,(FKinematicGeometryParticleParameters *)param_4);
  PBDRigidParticleDefaultConstruct<double,3,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
            (this,param_4);
  uVar9 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar12 = 0;
  if ((int)uVar9 < *(int *)(lVar4 + 0x2e0)) {
    uVar12 = ~uVar9 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  *(undefined4 *)(*(longlong *)(lVar4 + 0x2d8) + 4 + (longlong)(int)uVar9 * 0x10) = 0;
  SetDisabled(this,(bool)param_4->_padding_);
  uVar9 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar12 = 0;
  if ((int)uVar9 < *(int *)(lVar4 + 0x298)) {
    uVar12 = ~uVar9 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x290);
  uVar12 = *(uint *)&this->field_0x8;
  lVar13 = *(longlong *)this;
  uVar2 = *(undefined8 *)(lVar4 + (longlong)(int)uVar9 * 0xc);
  uVar3 = *(undefined4 *)(lVar4 + 8 + (longlong)(int)uVar9 * 0xc);
  uVar9 = 0;
  if ((int)uVar12 < *(int *)(lVar13 + 0x580)) {
    uVar9 = ~uVar12 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  lVar4 = *(longlong *)(lVar13 + 0x578);
  *(undefined8 *)(lVar4 + (longlong)(int)uVar12 * 0xc) = uVar2;
  *(undefined4 *)(lVar4 + 8 + (longlong)(int)uVar12 * 0xc) = uVar3;
  uVar9 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar12 = 0;
  if ((int)uVar9 < *(int *)(lVar4 + 0x2b0)) {
    uVar12 = ~uVar9 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x2a8);
  uVar12 = *(uint *)&this->field_0x8;
  lVar13 = *(longlong *)this;
  uVar2 = *(undefined8 *)(lVar4 + (longlong)(int)uVar9 * 0xc);
  uVar3 = *(undefined4 *)(lVar4 + 8 + (longlong)(int)uVar9 * 0xc);
  uVar9 = 0;
  if ((int)uVar12 < *(int *)(lVar13 + 0x598)) {
    uVar9 = ~uVar12 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  lVar4 = *(longlong *)(lVar13 + 0x590);
  *(undefined8 *)(lVar4 + (longlong)(int)uVar12 * 0xc) = uVar2;
  *(undefined4 *)(lVar4 + 8 + (longlong)(int)uVar12 * 0xc) = uVar3;
  uVar9 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar12 = 0;
  if ((int)uVar9 < *(int *)(lVar4 + 0x5b0)) {
    uVar12 = ~uVar9 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  *(undefined4 *)(*(longlong *)(lVar4 + 0x5a8) + (longlong)(int)uVar9 * 4) = 0xffffffff;
  pTVar11 = TParticles<double,3>::GetX(*(TParticles<double,3> **)this,*(int *)&this->field_0x8);
  SetP(this,pTVar11);
  uVar9 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar12 = 0;
  if ((int)uVar9 < *(int *)(lVar4 + 0x50)) {
    uVar12 = ~uVar9 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  uVar12 = *(uint *)&this->field_0x8;
  lVar13 = *(longlong *)this;
  puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 0x48) + (longlong)(int)uVar9 * 0x10);
  uVar2 = *puVar1;
  uVar6 = puVar1[1];
  uVar9 = 0;
  if ((int)uVar12 < *(int *)(lVar13 + 0x568)) {
    uVar9 = ~uVar12 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar13 + 0x560) + (longlong)(int)uVar12 * 0x10);
  *puVar1 = uVar2;
  puVar1[1] = uVar6;
  TKinematicGeometryParticlesImp<double,3,0>::GetV
            (*(TKinematicGeometryParticlesImp<double,3,0> **)this,&local_98,*(int *)&this->field_0x8
            );
  uVar9 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar12 = 0;
  if ((int)uVar9 < *(int *)(lVar4 + 0x2f8)) {
    uVar12 = ~uVar9 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x2f0);
  puVar1 = (undefined8 *)(lVar4 + (longlong)(int)uVar9 * 0x18);
  *puVar1 = local_98._0_8_;
  puVar1[1] = local_98._8_8_;
  *(undefined8 *)(lVar4 + 0x10 + (longlong)(int)uVar9 * 0x18) = local_98._16_8_;
  TKinematicGeometryParticlesImp<double,3,0>::GetW
            (*(TKinematicGeometryParticlesImp<double,3,0> **)this,&local_80,*(int *)&this->field_0x8
            );
  uVar9 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar12 = 0;
  if ((int)uVar9 < *(int *)(lVar4 + 0x310)) {
    uVar12 = ~uVar9 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x308);
  local_68._0_8_ = 0;
  local_68._8_8_ = 0;
  puVar1 = (undefined8 *)(lVar4 + (longlong)(int)uVar9 * 0x18);
  *puVar1 = local_80._0_8_;
  puVar1[1] = local_80._8_8_;
  *(undefined8 *)(lVar4 + 0x10 + (longlong)(int)uVar9 * 0x18) = local_80._16_8_;
  local_68._16_8_ = 0;
  SetAcceleration(this,&local_68);
  local_50[0]._16_8_ = 0;
  local_50[0]._0_8_ = 0;
  local_50[0]._8_8_ = 0;
  SetAngularAcceleration(this,local_50);
  EVar8 = Dynamic;
  if (param_4->bStartSleeping != false) {
    EVar8 = Sleeping;
  }
  TPBDRigidParticles<double,3>::SetObjectState
            (*(TPBDRigidParticles<double,3> **)this,*(int *)&this->field_0x8,EVar8);
  EVar8 = ObjectState(this);
  uVar9 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar12 = 0;
  if ((int)uVar9 < *(int *)(lVar4 + 0x2e0)) {
    uVar12 = ~uVar9 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  *(EObjectStateType *)(*(longlong *)(lVar4 + 0x2d8) + 0xc + (longlong)(int)uVar9 * 0x10) = EVar8;
  uVar9 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar12 = 0;
  if ((int)uVar9 < *(int *)(lVar4 + 0x4d8)) {
    uVar12 = ~uVar9 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  *(undefined1 *)((longlong)(int)uVar9 + *(longlong *)(lVar4 + 0x4d0)) = 0;
  uVar9 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar12 = 0;
  if ((int)uVar9 < *(int *)(lVar4 + 0x4f0)) {
    uVar12 = ~uVar9 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  *(undefined1 *)((longlong)(int)uVar9 + *(longlong *)(lVar4 + 0x4e8)) = 0;
  uVar9 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar12 = 0;
  if ((int)uVar9 < *(int *)(lVar4 + 0x508)) {
    uVar12 = ~uVar9 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  *(undefined1 *)((longlong)(int)uVar9 + *(longlong *)(lVar4 + 0x500)) = 0;
  uVar9 = *(uint *)&this->field_0x8;
  lVar13 = (longlong)(int)uVar9;
  lVar4 = *(longlong *)this;
  uVar12 = 0;
  if ((int)uVar9 < *(int *)(lVar4 + 0x3b8)) {
    uVar12 = ~uVar9 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x3b0);
  *(undefined4 *)(lVar4 + lVar13 * 0xc) = 0x3f800000;
  *(undefined4 *)(lVar4 + 4 + lVar13 * 0xc) = 0x3f800000;
  *(undefined4 *)(lVar4 + 8 + lVar13 * 0xc) = 0x3f800000;
  return this;
}

// TPBDRigidParticleHandleImp<double,3,1> @ 143bde030

TPBDRigidParticleHandleImp<double,3,1> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::TPBDRigidParticleHandleImp<double,3,1>
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  this->field_0xc = 0;
  TGeometryParticleHandleImp<double,3,1>::SetConstraintGraphNode
            ((TGeometryParticleHandleImp<double,3,1> *)this,(FPBDIslandParticle *)0x0);
  return this;
}

// ~TPBDRigidParticleHandleImp<double,3,1> @ 143be2b50

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::~TPBDRigidParticleHandleImp<double,3,1>
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  TArrayCollection *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FPBDIslandParticle *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStackX_8 [8];
  
  pFVar9 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode
                     ((TGeometryParticleHandleImp<double,3,1> *)this);
  if (pFVar9 != (FPBDIslandParticle *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetConstraintGraphNode() == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                       ,0x1fa,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar8 = *(uint *)&this->field_0x8;
  lVar13 = *(longlong *)this;
  uVar10 = 0;
  if ((int)uVar8 < *(int *)(lVar13 + 0x1a8)) {
    uVar10 = ~uVar8 >> 0x1f;
  }
  if (uVar10 == 0) {
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
  puVar4 = *(undefined8 **)(*(longlong *)(lVar13 + 0x1a0) + (longlong)(int)uVar8 * 0x10);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
  }
  this_00 = *(TArrayCollection **)this;
  iVar7 = *(int *)&this->field_0x8;
  if ((char)this_00[1].MSize == '\0') {
    TArrayCollection::RemoveAtSwapHelper(this_00,iVar7);
  }
  else {
    pFVar11 = (this_00->MArrays).AllocatorInstance.Data;
    iVar14 = (this_00->MArrays).ArrayNum;
    pFVar2 = pFVar11 + (longlong)iVar14 * 8;
    while( true ) {
      if ((this_00->MArrays).ArrayNum != iVar14) {
        auStackX_8[0] = 0;
        `TCheckedPointerIterator<Chaos::TArrayCollectionArrayBase_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStackX_8);
      }
      if (pFVar11 == pFVar2) break;
      plVar3 = *(longlong **)pFVar11;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,iVar7,1);
      }
      pFVar11 = pFVar11 + 8;
    }
    iVar7 = this_00->MSize - iVar7;
    iVar14 = 1;
    if (iVar7 < 1) {
      iVar14 = iVar7;
    }
    this_00->MSize = this_00->MSize - iVar14;
  }
  *(int *)&this_00[1].field_0x1c = *(int *)&this_00[1].field_0x1c + 1;
  lVar13 = *(longlong *)this;
  uVar8 = *(uint *)&this->field_0x8;
  uVar12 = (ulonglong)(int)uVar8;
  if (uVar8 < *(uint *)(lVar13 + 0x18)) {
    if (*(char *)(lVar13 + 0x38) == '\0') {
      uVar10 = 0;
      if ((int)uVar8 < *(int *)(lVar13 + 0xa0)) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if (uVar10 == 0) {
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
      *(uint *)(*(longlong *)(*(longlong *)(lVar13 + 0x98) + uVar12 * 8) + 8) = uVar8;
    }
    else {
      lVar15 = uVar12 * 8;
      do {
        uVar10 = (uint)uVar12;
        uVar8 = 0;
        if ((int)uVar10 < *(int *)(lVar13 + 0xa0)) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if (uVar8 == 0) {
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
        uVar12 = (ulonglong)(uVar10 + 1);
        plVar3 = (longlong *)(lVar15 + *(longlong *)(lVar13 + 0x98));
        lVar15 = lVar15 + 8;
        piVar1 = (int *)(*plVar3 + 8);
        *piVar1 = *piVar1 + -1;
        lVar13 = *(longlong *)this;
      } while (uVar10 + 1 < *(uint *)(lVar13 + 0x18));
    }
  }
  *(undefined4 *)&this->field_0x10 = 0xffffffff;
  *(undefined8 *)this = 0;
  *(undefined4 *)&this->field_0x8 = 0xffffffff;
  this->field_0xc = 7;
  FChaosVisualDebuggerTrace::InvalidateParticleMetadataFromCache
            ((TGeometryParticleHandleImp<double,3,1> *)this);
  return;
}

// Acceleration @ 143bec140

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::Acceleration
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x328)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 800) + (longlong)(int)uVar1 * 0x18);
}

// Acceleration @ 143bec1c0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::Acceleration
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x328)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 800) + (longlong)(int)uVar1 * 0x18);
}

// AddCollisionConstraintFlag @ 143bec270

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::AddCollisionConstraintFlag
          (TPBDRigidParticleHandleImp<double,3,1> *this,ECollisionConstraintFlags param_1)

{
  ECollisionConstraintFlags *pEVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x2e0)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pEVar1 = (ECollisionConstraintFlags *)
           ((longlong)(int)uVar2 * 0x10 + 4 + *(longlong *)(lVar3 + 0x2d8));
  *pEVar1 = *pEVar1 | param_1;
  return;
}

// AddForce @ 143bec6c0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::AddForce
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *param_1,bool param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  
  uVar6 = *(uint *)&this->field_0x8;
  lVar7 = *(longlong *)this;
  uVar16 = 0;
  if ((int)uVar6 < *(int *)(lVar7 + 0x328)) {
    uVar16 = ~uVar6 >> 0x1f;
  }
  if (uVar16 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  lVar7 = *(longlong *)(lVar7 + 800);
  uVar16 = *(uint *)&this->field_0x8;
  lVar8 = *(longlong *)this;
  uVar15 = 0;
  if ((int)uVar16 < *(int *)(lVar8 + 1000)) {
    uVar15 = ~uVar16 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  lVar8 = *(longlong *)(lVar8 + 0x3e0);
  dVar12 = *(double *)&param_1->field_0x8;
  dVar2 = *(double *)(lVar8 + (longlong)(int)uVar16 * 8);
  dVar3 = *(double *)(lVar8 + (longlong)(int)uVar16 * 8);
  uVar16 = *(uint *)&this->field_0x8;
  lVar8 = *(longlong *)this;
  dVar4 = *(double *)param_1;
  uVar15 = 0;
  if ((int)uVar16 < *(int *)(lVar8 + 0x328)) {
    uVar15 = ~uVar16 >> 0x1f;
  }
  pdVar1 = (double *)(lVar7 + 8 + (longlong)(int)uVar6 * 0x18);
  dVar13 = *pdVar1;
  dVar5 = *(double *)(lVar7 + (longlong)(int)uVar6 * 0x18);
  dVar11 = dVar3 * *(double *)&param_1->field_0x10 + pdVar1[1];
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  lVar7 = *(longlong *)(lVar8 + 800);
  *(double *)(lVar7 + (longlong)(int)uVar16 * 0x18) = dVar2 * dVar4 + dVar5;
  auVar10._8_4_ = SUB84(dVar11,0);
  auVar10._0_8_ = dVar3 * dVar12 + dVar13;
  auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(lVar7 + 8 + (longlong)(int)uVar16 * 0x18) = auVar10;
  return;
}

// AddTorque @ 143bedea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::AddTorque
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *param_1,bool param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  code *pcVar13;
  bool bVar14;
  TVector<float,3> *pTVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  double local_168 [6];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  double local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  TRotation<double,3> local_68 [2];
  
  pTVar15 = InvI(this);
  fVar1 = *(float *)pTVar15;
  fVar2 = *(float *)&pTVar15->field_0x4;
  fVar3 = *(float *)&pTVar15->field_0x8;
  TPBDRigidParticles<double,3>::QCom
            (*(TPBDRigidParticles<double,3> **)this,local_68,*(int *)&this->field_0x8);
  local_168[4] = 0.0;
  local_128 = 0;
  local_168[1] = 0.0;
  local_120 = 0;
  local_168[2] = 0.0;
  local_138 = 0;
  local_168[3] = 0.0;
  local_130 = 0;
  local_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = ___xmm_3ff00000000000000000000000000000;
  uStack_f0 = _UNK_15061cbc8;
  local_168[0] = (double)fVar1;
  local_168[5] = (double)fVar2;
  local_118 = (double)fVar3;
  Utilities::ComputeWorldSpaceInertia
            ((PMatrix<double,3,3> *)&local_e8,local_68,(PMatrix<double,3,3> *)local_168);
  uVar10 = *(uint *)&this->field_0x8;
  lVar17 = (longlong)(int)uVar10;
  lVar11 = *(longlong *)this;
  uVar16 = 0;
  if ((int)uVar10 < *(int *)(lVar11 + 0x340)) {
    uVar16 = ~uVar10 >> 0x1f;
  }
  if (uVar16 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  lVar11 = *(longlong *)(lVar11 + 0x338);
  dVar4 = *(double *)param_1;
  dVar5 = *(double *)&param_1->field_0x8;
  dVar6 = *(double *)&param_1->field_0x10;
  uVar10 = *(uint *)&this->field_0x8;
  lVar18 = (longlong)(int)uVar10;
  lVar12 = *(longlong *)this;
  dVar7 = *(double *)(lVar11 + 0x10 + lVar17 * 0x18);
  dVar8 = *(double *)(lVar11 + 8 + lVar17 * 0x18);
  dVar9 = *(double *)(lVar11 + lVar17 * 0x18);
  uVar16 = 0;
  if ((int)uVar10 < *(int *)(lVar12 + 0x340)) {
    uVar16 = ~uVar10 >> 0x1f;
  }
  if (uVar16 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  lVar11 = *(longlong *)(lVar12 + 0x338);
  *(double *)(lVar11 + lVar18 * 0x18) =
       local_d8 * dVar6 + local_e0 * dVar5 + local_e8 * dVar4 + dVar9;
  *(double *)(lVar11 + 8 + lVar18 * 0x18) =
       local_b8 * dVar6 + local_c8 * dVar4 + local_c0 * dVar5 + dVar8;
  *(double *)(lVar11 + 0x10 + lVar18 * 0x18) =
       local_98 * dVar6 + local_a0 * dVar5 + local_a8 * dVar4 + dVar7;
  return;
}

// AngularAcceleration @ 143beead0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::AngularAcceleration
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x340)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 0x338) + (longlong)(int)uVar1 * 0x18);
}

// AngularAcceleration @ 143beeb50

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::AngularAcceleration
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x340)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 0x338) + (longlong)(int)uVar1 * 0x18);
}

// AngularImpulseVelocity @ 143beec30

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::AngularImpulseVelocity
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x370)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 0x368) + (longlong)(int)uVar1 * 0x18);
}

// AngularImpulseVelocity @ 143beecb0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::AngularImpulseVelocity
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x370)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 0x368) + (longlong)(int)uVar1 * 0x18);
}

// ClearInertiaConditioningDirty @ 143bf48a0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::ClearInertiaConditioningDirty
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x2e0)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)(int)uVar2 * 0x10 + 10 + *(longlong *)(lVar3 + 0x2d8));
  *pbVar1 = *pbVar1 & 0xfe;
  return;
}

// ClearIsMovingKinematic @ 143bf4920

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::ClearIsMovingKinematic
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x2e0)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)(int)uVar2 * 0x10 + 10 + *(longlong *)(lVar3 + 0x2d8));
  *pbVar1 = *pbVar1 & 0xfb;
  return;
}

// ClearUseIgnoreCollisionManager @ 143bf4b00

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::ClearUseIgnoreCollisionManager
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x2e0)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)(int)uVar2 * 0x10 + 10 + *(longlong *)(lVar3 + 0x2d8));
  *pbVar1 = *pbVar1 & 0xfd;
  return;
}

// CollisionConstraintFlags @ 143bf4c50

uint __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::CollisionConstraintFlags
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)&this->field_0x8;
  lVar1 = *(longlong *)this;
  uVar4 = 0;
  if ((int)uVar5 < *(int *)(lVar1 + 0x2e0)) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  return *(uint *)(*(longlong *)(lVar1 + 0x2d8) + 4 + (longlong)(int)uVar5 * 0x10);
}

// CollisionGroup @ 143bf4ce0

int * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::CollisionGroup
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      piVar6 = (int *)(*pcVar3)();
      return piVar6;
    }
  }
  return (int *)((longlong)(int)uVar1 * 0x10 + *(longlong *)(lVar2 + 0x2d8));
}

// CollisionParticles @ 143bf4d60

TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::CollisionParticles
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x4c0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *)(*pcVar3)()
      ;
      return pTVar6;
    }
  }
  return (TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *)
         (*(longlong *)(lVar2 + 0x4b8) + (longlong)(int)uVar1 * 8);
}

// CollisionParticlesInitIfNeeded @ 143bf4de0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::CollisionParticlesInitIfNeeded
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  TRigidParticles<double,3>::CollisionParticlesInitIfNeeded
            (*(TRigidParticles<double,3> **)this,*(int *)&this->field_0x8);
  return;
}

// CollisionParticlesSize @ 143bf4e00

int __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::CollisionParticlesSize
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  uVar6 = uVar5;
  if ((int)uVar1 < *(int *)(lVar2 + 0x4c0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar7 = (*pcVar3)();
    return iVar7;
  }
  if (*(longlong *)(*(longlong *)(lVar2 + 0x4b8) + (longlong)(int)uVar1 * 8) != 0) {
    uVar5 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0x4c0)) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
    uVar5 = *(uint *)(*(longlong *)(*(longlong *)(lVar2 + 0x4b8) + (longlong)(int)uVar1 * 8) + 0x18)
    ;
  }
  return uVar5;
}

// ConditionedI @ 143bfe510

TVector<float,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::ConditionedI
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<float,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TVector<float,3> *pTVar5;
  TVector<float,3> *pTVar6;
  
  pTVar5 = I(this);
  pTVar6 = InvIConditioning(this);
  fVar1 = *(float *)&pTVar5->field_0x4;
  fVar2 = *(float *)&pTVar6->field_0x4;
  *(float *)__return_storage_ptr__ = *(float *)pTVar5 / *(float *)pTVar6;
  fVar3 = *(float *)&pTVar5->field_0x8;
  fVar4 = *(float *)&pTVar6->field_0x8;
  *(float *)&__return_storage_ptr__->field_0x4 = fVar1 / fVar2;
  *(float *)&__return_storage_ptr__->field_0x8 = fVar3 / fVar4;
  return __return_storage_ptr__;
}

// ConditionedInvI @ 143bfe580

TVector<float,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::ConditionedInvI
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<float,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TVector<float,3> *pTVar5;
  TVector<float,3> *pTVar6;
  
  pTVar5 = InvIConditioning(this);
  pTVar6 = InvI(this);
  fVar1 = *(float *)&pTVar5->field_0x4;
  fVar2 = *(float *)&pTVar6->field_0x4;
  *(float *)__return_storage_ptr__ = *(float *)pTVar5 * *(float *)pTVar6;
  fVar3 = *(float *)&pTVar5->field_0x8;
  fVar4 = *(float *)&pTVar6->field_0x8;
  *(float *)&__return_storage_ptr__->field_0x4 = fVar1 * fVar2;
  *(float *)&__return_storage_ptr__->field_0x8 = fVar3 * fVar4;
  return __return_storage_ptr__;
}

// ControlFlags @ 143bfe620

FRigidParticleControlFlags __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::ControlFlags
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FRigidParticleControlFlags_u_0 FVar5;
  uint uVar6;
  undefined2 *in_RDX;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar5.Bits = (*pcVar3)();
      return (FRigidParticleControlFlags_u_0)(FRigidParticleControlFlags_u_0)FVar5.Flags;
    }
  }
  *in_RDX = *(undefined2 *)(*(longlong *)(lVar2 + 0x2d8) + 8 + (longlong)(int)uVar1 * 0x10);
  return (FRigidParticleControlFlags)SUB82(in_RDX,0);
}

// CreateParticleHandle @ 143c00ac0

TUniquePtr<Chaos::TPBDRigidParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>_>
 __cdecl Chaos::TPBDRigidParticleHandleImp<double,3,1>::CreateParticleHandle
                   (TSerializablePtr<Chaos::TPBDRigidParticles<double,3>_> param_1,int param_2,
                   int param_3,FPBDRigidParticleParameters *param_4)

{
  TPBDRigidParticleHandleImp<double,3,1> *this;
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  undefined4 in_register_00000014;
  TSerializablePtr<Chaos::TPBDRigidParticles<double,3>_> this_00;
  FPBDRigidParticleParameters *in_stack_00000028;
  
  this_00.Ptr._4_4_ = in_register_00000014;
  this_00.Ptr._0_4_ = param_2;
  this = ::operator_new(0x18);
  pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (this != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)
             TPBDRigidParticleHandleImp<double,3,1>
                       (this,this_00,param_3,(int)param_4,in_stack_00000028);
  }
  (param_1.Ptr)->_padding_ = (longlong)pTVar1;
  TGeometryParticlesImp<double,3,0>::SetHandle
            ((TGeometryParticlesImp<double,3,0> *)this_00.Ptr,param_3,pTVar1);
  return (TUniquePtr<Chaos::TPBDRigidParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>_>
          )(TPBDRigidParticleHandleImp<double,3,1> *)param_1.Ptr;
}

// DisableCounter @ 143c01760

schar __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::DisableCounter
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  schar sVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x508)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      sVar5 = (*pcVar3)();
      return sVar5;
    }
  }
  return *(schar *)((longlong)(int)uVar1 + *(longlong *)(lVar2 + 0x500));
}

// GetPreVf @ 143c07320

TVector<float,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::GetPreVf
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<float,3> *__return_storage_ptr__)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<float,3> *pTVar7;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar3 + 0x580)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<float,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x578);
  uVar2 = *(undefined4 *)(lVar3 + 8 + (longlong)(int)uVar1 * 0xc);
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)(lVar3 + (longlong)(int)uVar1 * 0xc);
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar2;
  return __return_storage_ptr__;
}

// GetPreWf @ 143c07480

TVector<float,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::GetPreWf
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<float,3> *__return_storage_ptr__)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<float,3> *pTVar7;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar3 + 0x598)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<float,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x590);
  uVar2 = *(undefined4 *)(lVar3 + 8 + (longlong)(int)uVar1 * 0xc);
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)(lVar3 + (longlong)(int)uVar1 * 0xc);
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar2;
  return __return_storage_ptr__;
}

// GetTransformPQCom @ 143c075f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRigidTransform<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::GetTransformPQCom
          (TPBDRigidParticleHandleImp<double,3,1> *this,
          TRigidTransform<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  TVector<double,3> local_48;
  TRotation<double,3> local_28;
  
  TPBDRigidParticles<double,3>::QCom
            (*(TPBDRigidParticles<double,3> **)this,&local_28,*(int *)&this->field_0x8);
  TPBDRigidParticles<double,3>::PCom
            (*(TPBDRigidParticles<double,3> **)this,&local_48,*(int *)&this->field_0x8);
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

// GetTransformXRCom @ 143c07680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRigidTransform<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::GetTransformXRCom
          (TPBDRigidParticleHandleImp<double,3,1> *this,
          TRigidTransform<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  TVector<double,3> local_48;
  TRotation<double,3> local_28;
  
  TPBDRigidParticles<double,3>::RCom
            (*(TPBDRigidParticles<double,3> **)this,&local_28,*(int *)&this->field_0x8);
  TPBDRigidParticles<double,3>::XCom
            (*(TPBDRigidParticles<double,3> **)this,&local_48,*(int *)&this->field_0x8);
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

// GravityGroupIndex @ 143c0a240

int __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::GravityGroupIndex
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  return *(ushort *)(*(longlong *)(lVar2 + 0x2d8) + 8 + (longlong)(int)uVar1 * 0x10) >> 5 & 7;
}

// GyroscopicTorqueEnabled @ 143c0a2f0

bool __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::GyroscopicTorqueEnabled
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
                                (*(longlong *)(lVar2 + 0x2d8) + 8 + (longlong)(int)uVar1 * 0x10) >>
                      0xb) & 1);
}

// Handle @ 143c0a620

TPBDRigidParticleHandleImp<double,3,1> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::Handle(TPBDRigidParticleHandleImp<double,3,1> *this)

{
  TPBDRigidParticleHandleImp<double,3,1> *pTVar1;
  
  pTVar1 = TPBDRigidParticles<double,3>::Handle
                     (*(TPBDRigidParticles<double,3> **)this,*(int *)&this->field_0x8);
  return pTVar1;
}

// Handle @ 143c0a640

TPBDRigidParticleHandleImp<double,3,1> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::Handle(TPBDRigidParticleHandleImp<double,3,1> *this)

{
  TPBDRigidParticleHandleImp<double,3,1> *pTVar1;
  
  pTVar1 = TPBDRigidParticles<double,3>::Handle
                     (*(TPBDRigidParticles<double,3> **)this,*(int *)&this->field_0x8);
  return pTVar1;
}

// HasCollisionConstraintFlag @ 143c0a6a0

bool __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::HasCollisionConstraintFlag
          (TPBDRigidParticleHandleImp<double,3,1> *this,ECollisionConstraintFlags param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  return (*(ECollisionConstraintFlags *)
           (*(longlong *)(lVar2 + 0x2d8) + 4 + (longlong)(int)uVar1 * 0x10) & param_1) != CCF_None;
}

// I @ 143c0a740

TVector<float,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::I(TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<float,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x388)) {
    uVar5 = ~uVar1 >> 0x1f;
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
  return (TVector<float,3> *)(*(longlong *)(lVar2 + 0x380) + (longlong)(int)uVar1 * 0xc);
}

// InertiaConditioningDirty @ 143c0a7c0

bool __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::InertiaConditioningDirty
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  return (bool)(*(byte *)(*(longlong *)(lVar2 + 0x2d8) + 10 + (longlong)(int)uVar1 * 0x10) & 1);
}

// InertiaConditioningEnabled @ 143c0a860

bool __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::InertiaConditioningEnabled
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  return (bool)(*(byte *)(*(longlong *)(lVar2 + 0x2d8) + 8 + (longlong)(int)uVar1 * 0x10) >> 4 & 1);
}

// InitTransform @ 143c0ab40

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::InitTransform
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *param_1,
          TRotation<double,3> *param_2)

{
  TGeometryParticleHandleImp<double,3,1>::SetX
            ((TGeometryParticleHandleImp<double,3,1> *)this,param_1,false);
  TGeometryParticleHandleImp<double,3,1>::SetR
            ((TGeometryParticleHandleImp<double,3,1> *)this,param_2,false);
  SetP(this,param_1);
  SetQ(this,param_2);
  return;
}

// InvI @ 143c0ad20

TVector<float,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::InvI(TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<float,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x3a0)) {
    uVar5 = ~uVar1 >> 0x1f;
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
  return (TVector<float,3> *)(*(longlong *)(lVar2 + 0x398) + (longlong)(int)uVar1 * 0xc);
}

// IsKinematic @ 143c0b520

bool __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::IsKinematic
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  EObjectStateType EVar1;
  
  EVar1 = ObjectState(this);
  return EVar1 == Kinematic;
}

// IsSleeping @ 143c0b560

bool __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::IsSleeping
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  EObjectStateType EVar1;
  
  EVar1 = ObjectState(this);
  return EVar1 == Sleeping;
}

// IslandIndex @ 143c0b590

int * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::IslandIndex
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  return &`public:_int&___ptr64___cdecl_Chaos::TPBDRigidParticleHandleImp<double,3,1>::IslandIndex(void)___ptr64'
          ::__l2::Dummy;
}

// IslandIndex @ 143c0b5a0

int __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::IslandIndex
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  return -1;
}

// IterationSettings @ 143c0b5d0

TIterationSettings<signed_char> __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::IterationSettings
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TIterationSettings<signed_char> TVar5;
  uint uVar6;
  undefined2 *in_RDX;
  undefined2 *puVar7;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x520)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TIterationSettings<signed_char>)(*pcVar3)();
      return TVar5;
    }
  }
  puVar7 = (undefined2 *)((longlong)(int)uVar1 * 3 + *(longlong *)(lVar2 + 0x518));
  *in_RDX = *puVar7;
  *(undefined1 *)(in_RDX + 1) = *(undefined1 *)(puVar7 + 1);
  return SUB83(in_RDX,0);
}

// LinearImpulseVelocity @ 143c0b940

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::LinearImpulseVelocity
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x358)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 0x350) + (longlong)(int)uVar1 * 0x18);
}

// LinearImpulseVelocity @ 143c0b9c0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::LinearImpulseVelocity
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x358)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 0x350) + (longlong)(int)uVar1 * 0x18);
}

// MaxAngularSpeedSq @ 143c0c0e0

double * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::MaxAngularSpeedSq
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  double *pdVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x478)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pdVar6 = (double *)(*pcVar3)();
      return pdVar6;
    }
  }
  return (double *)(*(longlong *)(lVar2 + 0x470) + (longlong)(int)uVar1 * 8);
}

// MaxLinearSpeedSq @ 143c0c180

double * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::MaxLinearSpeedSq
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  double *pdVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x460)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pdVar6 = (double *)(*pcVar3)();
      return pdVar6;
    }
  }
  return (double *)(*(longlong *)(lVar2 + 0x458) + (longlong)(int)uVar1 * 8);
}

// P @ 143c0ed40

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::P(TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x550)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 0x548) + (longlong)(int)uVar1 * 0x18);
}

// P @ 143c0edc0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::P(TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x550)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 0x548) + (longlong)(int)uVar1 * 0x18);
}

// PCom @ 143c0ee40

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::PCom
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *__return_storage_ptr__)

{
  TPBDRigidParticles<double,3>::PCom
            (*(TPBDRigidParticles<double,3> **)this,__return_storage_ptr__,*(int *)&this->field_0x8)
  ;
  return __return_storage_ptr__;
}

// PartialIslandSleepAllowed @ 143c0ee90

bool __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::PartialIslandSleepAllowed
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
                                (*(longlong *)(lVar2 + 0x2d8) + 8 + (longlong)(int)uVar1 * 0x10) >>
                      10) & 1);
}

// PreObjectState @ 143c0f800

EObjectStateType __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::PreObjectState
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  EObjectStateType EVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  return *(EObjectStateType *)(*(longlong *)(lVar2 + 0x2d8) + 0xc + (longlong)(int)uVar1 * 0x10);
}

// PreV @ 143c0f880

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::PreV
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *__return_storage_ptr__)

{
  TPBDRigidParticles<double,3>::GetPreV
            (*(TPBDRigidParticles<double,3> **)this,__return_storage_ptr__,*(int *)&this->field_0x8)
  ;
  return __return_storage_ptr__;
}

// PreV @ 143c0f8b0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::PreV
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *__return_storage_ptr__)

{
  TPBDRigidParticles<double,3>::GetPreV
            (*(TPBDRigidParticles<double,3> **)this,__return_storage_ptr__,*(int *)&this->field_0x8)
  ;
  return __return_storage_ptr__;
}

// PreW @ 143c0f8e0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::PreW
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *__return_storage_ptr__)

{
  TPBDRigidParticles<double,3>::GetPreW
            (*(TPBDRigidParticles<double,3> **)this,__return_storage_ptr__,*(int *)&this->field_0x8)
  ;
  return __return_storage_ptr__;
}

// PreW @ 143c0f910

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::PreW
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *__return_storage_ptr__)

{
  TPBDRigidParticles<double,3>::GetPreW
            (*(TPBDRigidParticles<double,3> **)this,__return_storage_ptr__,*(int *)&this->field_0x8)
  ;
  return __return_storage_ptr__;
}

// Q @ 143c0fd80

TRotation<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::Q
          (TPBDRigidParticleHandleImp<double,3,1> *this,TRotation<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TRotation<double,3> *pTVar7;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x568)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TRotation<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x560);
  uVar1 = *(undefined8 *)(lVar3 + (longlong)(int)uVar2 * 0x10);
  *(double *)__return_storage_ptr__ = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)(lVar3 + 8 + (longlong)(int)uVar2 * 0x10);
  *(double *)&__return_storage_ptr__->field_0x10 = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x18 = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// Q @ 143c0fe20

TRotation<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::Q
          (TPBDRigidParticleHandleImp<double,3,1> *this,TRotation<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TRotation<double,3> *pTVar7;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x568)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TRotation<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x560);
  uVar1 = *(undefined8 *)(lVar3 + (longlong)(int)uVar2 * 0x10);
  *(double *)__return_storage_ptr__ = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)(lVar3 + 8 + (longlong)(int)uVar2 * 0x10);
  *(double *)&__return_storage_ptr__->field_0x10 = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x18 = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// QCom @ 143c0fec0

TRotation<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::QCom
          (TPBDRigidParticleHandleImp<double,3,1> *this,TRotation<double,3> *__return_storage_ptr__)

{
  TPBDRigidParticles<double,3>::QCom
            (*(TPBDRigidParticles<double,3> **)this,__return_storage_ptr__,*(int *)&this->field_0x8)
  ;
  return __return_storage_ptr__;
}

// RCom @ 143c10050

TRotation<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::RCom
          (TPBDRigidParticleHandleImp<double,3,1> *this,TRotation<double,3> *__return_storage_ptr__)

{
  TPBDRigidParticles<double,3>::RCom
            (*(TPBDRigidParticles<double,3> **)this,__return_storage_ptr__,*(int *)&this->field_0x8)
  ;
  return __return_storage_ptr__;
}

// RemoveCollisionConstraintFlag @ 143c11a30

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::RemoveCollisionConstraintFlag
          (TPBDRigidParticleHandleImp<double,3,1> *this,ECollisionConstraintFlags param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x2e0)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar1 = (uint *)((longlong)(int)uVar2 * 0x10 + 4 + *(longlong *)(lVar3 + 0x2d8));
  *puVar1 = *puVar1 & ~param_1;
  return;
}

// ResetSmoothedVelocities @ 143c127e0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::ResetSmoothedVelocities
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double,3> local_38;
  TVector<double,3> local_20;
  
  TKinematicGeometryParticlesImp<double,3,0>::GetV
            (*(TKinematicGeometryParticlesImp<double,3,0> **)this,&local_38,*(int *)&this->field_0x8
            );
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x2f8)) {
    uVar6 = ~uVar2 >> 0x1f;
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
  lVar3 = *(longlong *)(lVar3 + 0x2f0);
  puVar1 = (undefined4 *)(lVar3 + (longlong)(int)uVar2 * 0x18);
  *puVar1 = local_38._0_4_;
  puVar1[1] = local_38._4_4_;
  puVar1[2] = local_38._8_4_;
  puVar1[3] = local_38._12_4_;
  *(undefined8 *)(lVar3 + 0x10 + (longlong)(int)uVar2 * 0x18) = local_38._16_8_;
  TKinematicGeometryParticlesImp<double,3,0>::GetW
            (*(TKinematicGeometryParticlesImp<double,3,0> **)this,&local_20,*(int *)&this->field_0x8
            );
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x310)) {
    uVar6 = ~uVar2 >> 0x1f;
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
  lVar3 = *(longlong *)(lVar3 + 0x308);
  puVar1 = (undefined4 *)(lVar3 + (longlong)(int)uVar2 * 0x18);
  *puVar1 = local_20._0_4_;
  puVar1[1] = local_20._4_4_;
  puVar1[2] = local_20._8_4_;
  puVar1[3] = local_20._12_4_;
  *(undefined8 *)(lVar3 + 0x10 + (longlong)(int)uVar2 * 0x18) = local_20._16_8_;
  return;
}

// SetAcceleration @ 143c14f10

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetAcceleration
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  
  uVar3 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar6 = *(undefined4 *)param_1;
  uVar7 = *(undefined4 *)&param_1->field_0x4;
  uVar8 = *(undefined4 *)&param_1->field_0x8;
  uVar9 = *(undefined4 *)&param_1->field_0xc;
  uVar2 = *(undefined8 *)&param_1->field_0x10;
  uVar11 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x328)) {
    uVar11 = ~uVar3 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 800);
  puVar1 = (undefined4 *)(lVar4 + (longlong)(int)uVar3 * 0x18);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  *(undefined8 *)(lVar4 + 0x10 + (longlong)(int)uVar3 * 0x18) = uVar2;
  return;
}

// SetAngularAcceleration @ 143c15010

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetAngularAcceleration
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  
  uVar3 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar6 = *(undefined4 *)param_1;
  uVar7 = *(undefined4 *)&param_1->field_0x4;
  uVar8 = *(undefined4 *)&param_1->field_0x8;
  uVar9 = *(undefined4 *)&param_1->field_0xc;
  uVar2 = *(undefined8 *)&param_1->field_0x10;
  uVar11 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x340)) {
    uVar11 = ~uVar3 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x338);
  puVar1 = (undefined4 *)(lVar4 + (longlong)(int)uVar3 * 0x18);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  *(undefined8 *)(lVar4 + 0x10 + (longlong)(int)uVar3 * 0x18) = uVar2;
  return;
}

// SetAngularEtherDrag @ 143c150f0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetAngularEtherDrag
          (TPBDRigidParticleHandleImp<double,3,1> *this,double *param_1)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  dVar1 = *param_1;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x448)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(double *)(*(longlong *)(lVar3 + 0x440) + (longlong)(int)uVar2 * 8) = dVar1;
  return;
}

// SetAngularImpulseVelocity @ 143c151e0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetAngularImpulseVelocity
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *param_1,bool param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  
  uVar3 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar6 = *(undefined4 *)param_1;
  uVar7 = *(undefined4 *)&param_1->field_0x4;
  uVar8 = *(undefined4 *)&param_1->field_0x8;
  uVar9 = *(undefined4 *)&param_1->field_0xc;
  uVar2 = *(undefined8 *)&param_1->field_0x10;
  uVar11 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x370)) {
    uVar11 = ~uVar3 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x368);
  puVar1 = (undefined4 *)(lVar4 + (longlong)(int)uVar3 * 0x18);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  *(undefined8 *)(lVar4 + 0x10 + (longlong)(int)uVar3 * 0x18) = uVar2;
  return;
}

// SetCCDEnabled @ 143c152d0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetCCDEnabled
          (TPBDRigidParticleHandleImp<double,3,1> *this,bool param_1)

{
  ushort *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar6 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar2 < *(int *)(lVar6 + 0x2e0)) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar6 = (longlong)(int)uVar2 * 0x10 + *(longlong *)(lVar6 + 0x2d8);
  puVar1 = (ushort *)(lVar6 + 8);
  *puVar1 = *puVar1 & 0xfffd;
  puVar1 = (ushort *)(lVar6 + 8);
  *puVar1 = *puVar1 | (ushort)param_1 * 2;
  return;
}

// SetCenterOfMass @ 143c153c0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetCenterOfMass
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *param_1,bool param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  
  uVar3 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar6 = *(undefined4 *)param_1;
  uVar7 = *(undefined4 *)&param_1->field_0x4;
  uVar8 = *(undefined4 *)&param_1->field_0x8;
  uVar9 = *(undefined4 *)&param_1->field_0xc;
  uVar2 = *(undefined8 *)&param_1->field_0x10;
  uVar11 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x400)) {
    uVar11 = ~uVar3 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x3f8);
  puVar1 = (undefined4 *)(lVar4 + (longlong)(int)uVar3 * 0x18);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  *(undefined8 *)(lVar4 + 0x10 + (longlong)(int)uVar3 * 0x18) = uVar2;
  return;
}

// SetCollisionConstraintFlags @ 143c15490

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetCollisionConstraintFlags
          (TPBDRigidParticleHandleImp<double,3,1> *this,uint param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(uint *)(*(longlong *)(lVar2 + 0x2d8) + 4 + (longlong)(int)uVar1 * 0x10) = param_1;
  return;
}

// SetCollisionGroup @ 143c15550

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetCollisionGroup
          (TPBDRigidParticleHandleImp<double,3,1> *this,int param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(int *)(*(longlong *)(lVar2 + 0x2d8) + (longlong)(int)uVar1 * 0x10) = param_1;
  return;
}

// SetCollisionParticles @ 143c155e0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetCollisionParticles
          (TPBDRigidParticleHandleImp<double,3,1> *this,TParticles<double,3> *param_1)

{
  TRigidParticles<double,3>::SetCollisionParticles
            (*(TRigidParticles<double,3> **)this,*(int *)&this->field_0x8,param_1);
  return;
}

// SetControlFlags @ 143c15670

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetControlFlags
          (TPBDRigidParticleHandleImp<double,3,1> *this,FRigidParticleControlFlags param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ((FRigidParticleControlFlags_u_0 *)
  (*(longlong *)(lVar2 + 0x2d8) + 8 + (longlong)(int)uVar1 * 0x10))->Flags =
       (FFlags)param_1.field0_0x0;
  return;
}

// SetDisableCounter @ 143c157c0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetDisableCounter
          (TPBDRigidParticleHandleImp<double,3,1> *this,schar param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x508)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(schar *)((longlong)(int)uVar1 + *(longlong *)(lVar2 + 0x500)) = param_1;
  return;
}

// SetDisabledLowLevel @ 143c15880

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetDisabledLowLevel
          (TPBDRigidParticleHandleImp<double,3,1> *this,bool param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(bool *)(*(longlong *)(lVar2 + 0x2d8) + 0xd + (longlong)(int)uVar1 * 0x10) = param_1;
  return;
}

// SetDynamicMisc @ 143c159b0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetDynamicMisc
          (TPBDRigidParticleHandleImp<double,3,1> *this,FParticleDynamicMisc *param_1,
          FPBDRigidsEvolutionBase *param_2)

{
  return;
}

// SetDynamics @ 143c15a10

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetDynamics
          (TPBDRigidParticleHandleImp<double,3,1> *this,FParticleDynamics *param_1)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  bool bVar11;
  uint uVar12;
  
  uVar3 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  fVar1 = *(float *)&param_1->MAcceleration;
  uVar2 = *(undefined8 *)&(param_1->MAcceleration).field_0x4;
  dVar10 = (double)(float)((ulonglong)uVar2 >> 0x20);
  uVar12 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x328)) {
    uVar12 = ~uVar3 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 800);
  *(double *)(lVar4 + (longlong)(int)uVar3 * 0x18) = (double)fVar1;
  auVar6._8_4_ = SUB84(dVar10,0);
  auVar6._0_8_ = (double)(float)uVar2;
  auVar6._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(lVar4 + 8 + (longlong)(int)uVar3 * 0x18) = auVar6;
  uVar3 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  fVar1 = *(float *)&param_1->MAngularAcceleration;
  uVar2 = *(undefined8 *)&(param_1->MAngularAcceleration).field_0x4;
  dVar10 = (double)(float)((ulonglong)uVar2 >> 0x20);
  uVar12 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x340)) {
    uVar12 = ~uVar3 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x338);
  *(double *)(lVar4 + (longlong)(int)uVar3 * 0x18) = (double)fVar1;
  auVar7._8_4_ = SUB84(dVar10,0);
  auVar7._0_8_ = (double)(float)uVar2;
  auVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(lVar4 + 8 + (longlong)(int)uVar3 * 0x18) = auVar7;
  uVar3 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  fVar1 = *(float *)&param_1->MLinearImpulseVelocity;
  uVar2 = *(undefined8 *)&(param_1->MLinearImpulseVelocity).field_0x4;
  dVar10 = (double)(float)((ulonglong)uVar2 >> 0x20);
  uVar12 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x358)) {
    uVar12 = ~uVar3 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x350);
  *(double *)(lVar4 + (longlong)(int)uVar3 * 0x18) = (double)fVar1;
  auVar8._8_4_ = SUB84(dVar10,0);
  auVar8._0_8_ = (double)(float)uVar2;
  auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(lVar4 + 8 + (longlong)(int)uVar3 * 0x18) = auVar8;
  uVar3 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  fVar1 = *(float *)&param_1->MAngularImpulseVelocity;
  uVar2 = *(undefined8 *)&(param_1->MAngularImpulseVelocity).field_0x4;
  dVar10 = (double)(float)((ulonglong)uVar2 >> 0x20);
  uVar12 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x370)) {
    uVar12 = ~uVar3 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x368);
  *(double *)(lVar4 + (longlong)(int)uVar3 * 0x18) = (double)fVar1;
  auVar9._8_4_ = SUB84(dVar10,0);
  auVar9._0_8_ = (double)(float)uVar2;
  auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(lVar4 + 8 + (longlong)(int)uVar3 * 0x18) = auVar9;
  return;
}

// SetGyroscopicTorqueEnabled @ 143c160b0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetGyroscopicTorqueEnabled
          (TPBDRigidParticleHandleImp<double,3,1> *this,bool param_1)

{
  ushort *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar6 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar2 < *(int *)(lVar6 + 0x2e0)) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar6 = (longlong)(int)uVar2 * 0x10 + *(longlong *)(lVar6 + 0x2d8);
  puVar1 = (ushort *)(lVar6 + 8);
  *puVar1 = *puVar1 & 0xf7ff;
  puVar1 = (ushort *)(lVar6 + 8);
  *puVar1 = *puVar1 | (ushort)param_1 << 0xb;
  return;
}

// SetI @ 143c16200

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetI
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<float,3> *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar1 = *(undefined8 *)param_1;
  uVar3 = *(undefined4 *)&param_1->field_0x8;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar4 + 0x388)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x380);
  *(undefined8 *)(lVar4 + (longlong)(int)uVar2 * 0xc) = uVar1;
  *(undefined4 *)(lVar4 + 8 + (longlong)(int)uVar2 * 0xc) = uVar3;
  return;
}

// SetInertiaConditioningDirty @ 143c16570

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetInertiaConditioningDirty
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x2e0)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)(int)uVar2 * 0x10 + 10 + *(longlong *)(lVar3 + 0x2d8));
  *pbVar1 = *pbVar1 | 1;
  return;
}

// SetInertiaConditioningEnabled @ 143c16640

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetInertiaConditioningEnabled
          (TPBDRigidParticleHandleImp<double,3,1> *this,bool param_1)

{
  ushort *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar6 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar2 < *(int *)(lVar6 + 0x2e0)) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1 !=
      (bool)(*(byte *)(*(longlong *)(lVar6 + 0x2d8) + 8 + (longlong)(int)uVar2 * 0x10) >> 4 & 1)) {
    uVar2 = *(uint *)&this->field_0x8;
    lVar6 = *(longlong *)this;
    uVar5 = 0;
    if ((int)uVar2 < *(int *)(lVar6 + 0x2e0)) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar6 = (longlong)(int)uVar2 * 0x10 + *(longlong *)(lVar6 + 0x2d8);
    puVar1 = (ushort *)(lVar6 + 8);
    *puVar1 = *puVar1 & 0xffef;
    puVar1 = (ushort *)(lVar6 + 8);
    *puVar1 = *puVar1 | (ushort)param_1 << 4;
    SetInertiaConditioningDirty(this);
  }
  return;
}

// SetInvI @ 143c16800

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetInvI
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<float,3> *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar1 = *(undefined8 *)param_1;
  uVar3 = *(undefined4 *)&param_1->field_0x8;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar4 + 0x3a0)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x398);
  *(undefined8 *)(lVar4 + (longlong)(int)uVar2 * 0xc) = uVar1;
  *(undefined4 *)(lVar4 + 8 + (longlong)(int)uVar2 * 0xc) = uVar3;
  return;
}

// SetInvIConditioning @ 143c168a0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetInvIConditioning
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<float,3> *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar1 = *(undefined8 *)param_1;
  uVar3 = *(undefined4 *)&param_1->field_0x8;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar4 + 0x3b8)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x3b0);
  *(undefined8 *)(lVar4 + (longlong)(int)uVar2 * 0xc) = uVar1;
  *(undefined4 *)(lVar4 + 8 + (longlong)(int)uVar2 * 0xc) = uVar3;
  return;
}

// SetInvM @ 143c16980

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetInvM
          (TPBDRigidParticleHandleImp<double,3,1> *this,double *param_1)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  dVar1 = *param_1;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 1000)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(double *)(*(longlong *)(lVar3 + 0x3e0) + (longlong)(int)uVar2 * 8) = dVar1;
  return;
}

// SetIsMovingKinematic @ 143c16a10

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetIsMovingKinematic
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x2e0)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)(int)uVar2 * 0x10 + 10 + *(longlong *)(lVar3 + 0x2d8));
  *pbVar1 = *pbVar1 | 4;
  return;
}

// SetIslandIndex @ 143c16aa0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetIslandIndex
          (TPBDRigidParticleHandleImp<double,3,1> *this,int param_1)

{
  return;
}

// SetIterationSettings @ 143c16af0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetIterationSettings
          (TPBDRigidParticleHandleImp<double,3,1> *this,TIterationSettings<signed_char> *param_1)

{
  schar sVar1;
  undefined2 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  uVar3 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar2 = *(undefined2 *)param_1;
  sVar1 = param_1->NumProjectionIterations;
  uVar7 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x520)) {
    uVar7 = ~uVar3 >> 0x1f;
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
  lVar4 = *(longlong *)(lVar4 + 0x518);
  *(undefined2 *)((longlong)(int)uVar3 * 3 + lVar4) = uVar2;
  *(schar *)((longlong)(int)uVar3 * 3 + 2 + lVar4) = sVar1;
  return;
}

// SetLinearEtherDrag @ 143c16d00

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetLinearEtherDrag
          (TPBDRigidParticleHandleImp<double,3,1> *this,double *param_1)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  dVar1 = *param_1;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x430)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(double *)(*(longlong *)(lVar3 + 0x428) + (longlong)(int)uVar2 * 8) = dVar1;
  return;
}

// SetLinearImpulseVelocity @ 143c16df0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetLinearImpulseVelocity
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *param_1,bool param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  
  uVar3 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar6 = *(undefined4 *)param_1;
  uVar7 = *(undefined4 *)&param_1->field_0x4;
  uVar8 = *(undefined4 *)&param_1->field_0x8;
  uVar9 = *(undefined4 *)&param_1->field_0xc;
  uVar2 = *(undefined8 *)&param_1->field_0x10;
  uVar11 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x358)) {
    uVar11 = ~uVar3 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x350);
  puVar1 = (undefined4 *)(lVar4 + (longlong)(int)uVar3 * 0x18);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  *(undefined8 *)(lVar4 + 0x10 + (longlong)(int)uVar3 * 0x18) = uVar2;
  return;
}

// SetM @ 143c16fb0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetM
          (TPBDRigidParticleHandleImp<double,3,1> *this,double *param_1)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  dVar1 = *param_1;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x3d0)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(double *)(*(longlong *)(lVar3 + 0x3c8) + (longlong)(int)uVar2 * 8) = dVar1;
  return;
}

// SetMassProps @ 143c17100

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetMassProps
          (TPBDRigidParticleHandleImp<double,3,1> *this,FParticleMassProps *param_1)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  SetCenterOfMass(this,&param_1->MCenterOfMass,false);
  SetRotationOfMass(this,&param_1->MRotationOfMass,false);
  SetI(this,&param_1->MI);
  SetInvI(this,&param_1->MInvI);
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  dVar1 = param_1->MM;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x3d0)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(double *)(*(longlong *)(lVar3 + 0x3c8) + (longlong)(int)uVar2 * 8) = dVar1;
  uVar2 = *(uint *)&this->field_0x8;
  dVar1 = param_1->MInvM;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 1000)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(double *)(*(longlong *)(lVar3 + 0x3e0) + (longlong)(int)uVar2 * 8) = dVar1;
  SetInertiaConditioningDirty(this);
  return;
}

// SetMaxAngularSpeedSq @ 143c17290

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetMaxAngularSpeedSq
          (TPBDRigidParticleHandleImp<double,3,1> *this,double *param_1)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  dVar1 = *param_1;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x478)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(double *)(*(longlong *)(lVar3 + 0x470) + (longlong)(int)uVar2 * 8) = dVar1;
  return;
}

// SetMaxLinearSpeedSq @ 143c17360

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetMaxLinearSpeedSq
          (TPBDRigidParticleHandleImp<double,3,1> *this,double *param_1)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  dVar1 = *param_1;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x460)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(double *)(*(longlong *)(lVar3 + 0x458) + (longlong)(int)uVar2 * 8) = dVar1;
  return;
}

// SetObjectStateLowLevel @ 143c17f60

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetObjectStateLowLevel
          (TPBDRigidParticleHandleImp<double,3,1> *this,EObjectStateType param_1)

{
  TPBDRigidParticles<double,3>::SetObjectState
            (*(TPBDRigidParticles<double,3> **)this,*(int *)&this->field_0x8,param_1);
  return;
}

// SetOneWayInteraction @ 143c17fd0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetOneWayInteraction
          (TPBDRigidParticleHandleImp<double,3,1> *this,bool param_1)

{
  ushort *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar6 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar2 < *(int *)(lVar6 + 0x2e0)) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar6 = (longlong)(int)uVar2 * 0x10 + *(longlong *)(lVar6 + 0x2d8);
  puVar1 = (ushort *)(lVar6 + 8);
  *puVar1 = *puVar1 & 0xfffb;
  puVar1 = (ushort *)(lVar6 + 8);
  *puVar1 = *puVar1 | (ushort)param_1 << 2;
  return;
}

// SetPartialIslandSleepAllowed @ 143c18170

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetPartialIslandSleepAllowed
          (TPBDRigidParticleHandleImp<double,3,1> *this,bool param_1)

{
  ushort *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar6 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar2 < *(int *)(lVar6 + 0x2e0)) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar6 = (longlong)(int)uVar2 * 0x10 + *(longlong *)(lVar6 + 0x2d8);
  puVar1 = (ushort *)(lVar6 + 8);
  *puVar1 = *puVar1 & 0xfbff;
  puVar1 = (ushort *)(lVar6 + 8);
  *puVar1 = *puVar1 | (ushort)param_1 << 10;
  return;
}

// SetPositionSolverIterations @ 143c182f0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetPositionSolverIterations
          (TPBDRigidParticleHandleImp<double,3,1> *this,int param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x520)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = 0x7f;
  if (param_1 < 0x7f) {
    iVar6 = param_1;
  }
  uVar7 = 0xff;
  if (-1 < iVar6) {
    uVar7 = (char)iVar6;
  }
  *(undefined1 *)((longlong)(int)uVar1 * 3 + *(longlong *)(lVar2 + 0x518)) = uVar7;
  return;
}

// SetPreObjectStateLowLevel @ 143c18390

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetPreObjectStateLowLevel
          (TPBDRigidParticleHandleImp<double,3,1> *this,EObjectStateType param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(EObjectStateType *)(*(longlong *)(lVar2 + 0x2d8) + 0xc + (longlong)(int)uVar1 * 0x10) = param_1;
  return;
}

// SetPreV @ 143c18420

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetPreV
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *param_1)

{
  TPBDRigidParticles<double,3>::SetPreV
            (*(TPBDRigidParticles<double,3> **)this,*(int *)&this->field_0x8,param_1);
  return;
}

// SetPreVf @ 143c18440

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetPreVf
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<float,3> *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar1 = *(undefined8 *)param_1;
  uVar3 = *(undefined4 *)&param_1->field_0x8;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar4 + 0x580)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x578);
  *(undefined8 *)(lVar4 + (longlong)(int)uVar2 * 0xc) = uVar1;
  *(undefined4 *)(lVar4 + 8 + (longlong)(int)uVar2 * 0xc) = uVar3;
  return;
}

// SetPreW @ 143c184e0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetPreW
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *param_1)

{
  TPBDRigidParticles<double,3>::SetPreW
            (*(TPBDRigidParticles<double,3> **)this,*(int *)&this->field_0x8,param_1);
  return;
}

// SetPreWf @ 143c185d0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetPreWf
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<float,3> *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar1 = *(undefined8 *)param_1;
  uVar3 = *(undefined4 *)&param_1->field_0x8;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar4 + 0x598)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x590);
  *(undefined8 *)(lVar4 + (longlong)(int)uVar2 * 0xc) = uVar1;
  *(undefined4 *)(lVar4 + 8 + (longlong)(int)uVar2 * 0xc) = uVar3;
  return;
}

// SetProjectionSolverIterations @ 143c186c0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetProjectionSolverIterations
          (TPBDRigidParticleHandleImp<double,3,1> *this,int param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x520)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = 0x7f;
  if (param_1 < 0x7f) {
    iVar6 = param_1;
  }
  uVar7 = 0xff;
  if (-1 < iVar6) {
    uVar7 = (char)iVar6;
  }
  *(undefined1 *)((longlong)(int)uVar1 * 3 + 2 + *(longlong *)(lVar2 + 0x518)) = uVar7;
  return;
}

// SetQf @ 143c18820

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetQf
          (TPBDRigidParticleHandleImp<double,3,1> *this,TRotation<float,3> *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar5 = *(undefined4 *)param_1;
  uVar6 = *(undefined4 *)&param_1->field_0x4;
  uVar7 = *(undefined4 *)&param_1->field_0x8;
  uVar8 = *(undefined4 *)&param_1->field_0xc;
  uVar10 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x568)) {
    uVar10 = ~uVar2 >> 0x1f;
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
  puVar1 = (undefined4 *)(*(longlong *)(lVar3 + 0x560) + (longlong)(int)uVar2 * 0x10);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  return;
}

// SetRotationOfMass @ 143c189d0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetRotationOfMass
          (TPBDRigidParticleHandleImp<double,3,1> *this,TRotation<double,3> *param_1,bool param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  
  uVar3 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar6 = *(undefined4 *)param_1;
  uVar7 = *(undefined4 *)&param_1->field_0x4;
  uVar8 = *(undefined4 *)&param_1->field_0x8;
  uVar9 = *(undefined4 *)&param_1->field_0xc;
  uVar10 = *(undefined8 *)&param_1->field_0x10;
  uVar11 = *(undefined8 *)&param_1->field_0x18;
  uVar13 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x418)) {
    uVar13 = ~uVar3 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x410);
  puVar1 = (undefined4 *)((longlong)(int)uVar3 * 0x20 + lVar4);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  puVar2 = (undefined8 *)((longlong)(int)uVar3 * 0x20 + 0x10 + lVar4);
  *puVar2 = uVar10;
  puVar2[1] = uVar11;
  return;
}

// SetSleepType @ 143c19650

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetSleepType
          (TPBDRigidParticleHandleImp<double,3,1> *this,ESleepType param_1)

{
  uint uVar1;
  TPBDRigidParticles<double,3> *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  this_00 = *(TPBDRigidParticles<double,3> **)this;
  uVar1 = *(uint *)&this->field_0x8;
  if (param_1 == NeverSleep) {
    uVar4 = 0;
    if ((int)uVar1 < (int)this_00->_padding_) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(char *)(this_00->_padding_ + 0xb + (longlong)(int)uVar1 * 0x10) == '\x01') {
      TPBDRigidParticles<double,3>::SetObjectState(this_00,uVar1,Dynamic);
    }
  }
  uVar4 = 0;
  if ((int)uVar1 < (int)this_00->_padding_) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(ESleepType *)((longlong)(int)uVar1 + this_00->_padding_) = param_1;
  return;
}

// SetSleeping @ 143c19750

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetSleeping
          (TPBDRigidParticleHandleImp<double,3,1> *this,bool param_1)

{
  TPBDRigidParticles<double,3>::SetSleeping
            (*(TPBDRigidParticles<double,3> **)this,*(int *)&this->field_0x8,param_1);
  return;
}

// SetTorque @ 143c19800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetTorque
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *param_1,bool param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  TVector<float,3> *pTVar12;
  longlong lVar13;
  double local_158 [6];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  double local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98;
  double local_90;
  double local_88;
  TRotation<double,3> local_58 [2];
  
  pTVar12 = InvI(this);
  fVar1 = *(float *)pTVar12;
  fVar2 = *(float *)&pTVar12->field_0x4;
  fVar3 = *(float *)&pTVar12->field_0x8;
  TPBDRigidParticles<double,3>::QCom
            (*(TPBDRigidParticles<double,3> **)this,local_58,*(int *)&this->field_0x8);
  local_158[4] = 0.0;
  local_118 = 0;
  local_158[1] = 0.0;
  local_110 = 0;
  local_158[2] = 0.0;
  local_128 = 0;
  local_158[3] = 0.0;
  local_120 = 0;
  local_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = ___xmm_3ff00000000000000000000000000000;
  uStack_e0 = _UNK_15061cbc8;
  local_158[0] = (double)fVar1;
  local_158[5] = (double)fVar2;
  local_108 = (double)fVar3;
  Utilities::ComputeWorldSpaceInertia
            ((PMatrix<double,3,3> *)&local_d8,local_58,(PMatrix<double,3,3> *)local_158);
  dVar4 = *(double *)param_1;
  dVar5 = *(double *)&param_1->field_0x8;
  dVar6 = *(double *)&param_1->field_0x10;
  uVar7 = *(uint *)&this->field_0x8;
  lVar13 = (longlong)(int)uVar7;
  lVar8 = *(longlong *)this;
  uVar11 = 0;
  if ((int)uVar7 < *(int *)(lVar8 + 0x340)) {
    uVar11 = ~uVar7 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  lVar8 = *(longlong *)(lVar8 + 0x338);
  *(double *)(lVar8 + lVar13 * 0x18) = dVar5 * local_d0 + dVar4 * local_d8 + dVar6 * local_c8;
  *(double *)(lVar8 + 8 + lVar13 * 0x18) = dVar5 * local_b0 + dVar4 * local_b8 + dVar6 * local_a8;
  *(double *)(lVar8 + 0x10 + lVar13 * 0x18) = dVar5 * local_90 + dVar4 * local_98 + dVar6 * local_88
  ;
  return;
}

// SetTransformPQCom @ 143c199d0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetTransformPQCom
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *param_1,
          TRotation<double,3> *param_2)

{
  TPBDRigidParticles<double,3>::SetTransformPQCom
            (*(TPBDRigidParticles<double,3> **)this,*(int *)&this->field_0x8,param_1,param_2);
  return;
}

// SetUpdateKinematicFromSimulation @ 143c19aa0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetUpdateKinematicFromSimulation
          (TPBDRigidParticleHandleImp<double,3,1> *this,bool param_1)

{
  ushort *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar6 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar2 < *(int *)(lVar6 + 0x2e0)) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar6 = (longlong)(int)uVar2 * 0x10 + *(longlong *)(lVar6 + 0x2d8);
  puVar1 = (ushort *)(lVar6 + 8);
  *puVar1 = *puVar1 & 0xfeff;
  puVar1 = (ushort *)(lVar6 + 8);
  *puVar1 = *puVar1 | (ushort)param_1 << 8;
  return;
}

// SetUseIgnoreCollisionManager @ 143c19b40

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetUseIgnoreCollisionManager
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x2e0)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)(int)uVar2 * 0x10 + 10 + *(longlong *)(lVar3 + 0x2d8));
  *pbVar1 = *pbVar1 | 2;
  return;
}

// SetVelocitySolverIterations @ 143c19dd0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetVelocitySolverIterations
          (TPBDRigidParticleHandleImp<double,3,1> *this,int param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x520)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = 0x7f;
  if (param_1 < 0x7f) {
    iVar6 = param_1;
  }
  uVar7 = 0xff;
  if (-1 < iVar6) {
    uVar7 = (char)iVar6;
  }
  *(undefined1 *)((longlong)(int)uVar1 * 3 + 1 + *(longlong *)(lVar2 + 0x518)) = uVar7;
  return;
}

// SetWSmooth @ 143c1a0b0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetWSmooth
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  
  uVar3 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar6 = *(undefined4 *)param_1;
  uVar7 = *(undefined4 *)&param_1->field_0x4;
  uVar8 = *(undefined4 *)&param_1->field_0x8;
  uVar9 = *(undefined4 *)&param_1->field_0xc;
  uVar2 = *(undefined8 *)&param_1->field_0x10;
  uVar11 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x310)) {
    uVar11 = ~uVar3 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x308);
  puVar1 = (undefined4 *)(lVar4 + (longlong)(int)uVar3 * 0x18);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  *(undefined8 *)(lVar4 + 0x10 + (longlong)(int)uVar3 * 0x18) = uVar2;
  return;
}

// SolverBodyIndex @ 143c1a9c0

int __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::SolverBodyIndex
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x5b0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  return *(int *)(*(longlong *)(lVar2 + 0x5a8) + (longlong)(int)uVar1 * 4);
}

// StaticType @ 143c1aab0

EParticleType __cdecl Chaos::TPBDRigidParticleHandleImp<double,3,1>::StaticType(void)

{
  return Rigid;
}

// ToSerializable @ 143c1ae70

TSerializablePtr<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::ToSerializable
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  TPBDRigidParticleHandleImp<double,3,1> *in_RDX;
  
  *(TPBDRigidParticleHandleImp<double,3,1> **)in_RDX = this;
  return (TSerializablePtr<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>)in_RDX;
}

// UpdateKinematicFromSimulation @ 143c1cad0

bool __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::UpdateKinematicFromSimulation
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  return (bool)(*(byte *)(*(longlong *)(lVar2 + 0x2d8) + 9 + (longlong)(int)uVar1 * 0x10) & 1);
}

// VSmooth @ 143c1d6b0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::VSmooth(TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2f8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 0x2f0) + (longlong)(int)uVar1 * 0x18);
}

// WSmooth @ 143c1db90

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::WSmooth(TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x310)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 0x308) + (longlong)(int)uVar1 * 0x18);
}

// WasSleeping @ 143c1dc10

bool __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::WasSleeping
          (TPBDRigidParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  return *(char *)(*(longlong *)(lVar2 + 0x2d8) + 0xc + (longlong)(int)uVar1 * 0x10) == '\x01';
}

// XCom @ 143c1e0a0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,1>::XCom
          (TPBDRigidParticleHandleImp<double,3,1> *this,TVector<double,3> *__return_storage_ptr__)

{
  TPBDRigidParticles<double,3>::XCom
            (*(TPBDRigidParticles<double,3> **)this,__return_storage_ptr__,*(int *)&this->field_0x8)
  ;
  return __return_storage_ptr__;
}

// Acceleration @ 143d38b20

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,0>::Acceleration
          (TPBDRigidParticleHandleImp<double,3,0> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x328)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 800) + (longlong)(int)uVar1 * 0x18);
}

// ClearIsMovingKinematic @ 143d47510

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,0>::ClearIsMovingKinematic
          (TPBDRigidParticleHandleImp<double,3,0> *this)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x2e0)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)(int)uVar2 * 0x10 + 10 + *(longlong *)(lVar3 + 0x2d8));
  *pbVar1 = *pbVar1 & 0xfb;
  return;
}

// Disabled @ 143d4cef0

bool __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,0>::Disabled
          (TPBDRigidParticleHandleImp<double,3,0> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  return (bool)*(undefined1 *)(*(longlong *)(lVar2 + 0x2d8) + 0xd + (longlong)(int)uVar1 * 0x10);
}

// SetIsMovingKinematic @ 143d6e9a0

void __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,0>::SetIsMovingKinematic
          (TPBDRigidParticleHandleImp<double,3,0> *this)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x2e0)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)(int)uVar2 * 0x10 + 10 + *(longlong *)(lVar3 + 0x2d8));
  *pbVar1 = *pbVar1 | 4;
  return;
}

// AngularAcceleration @ 1440788d0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,0>::AngularAcceleration
          (TPBDRigidParticleHandleImp<double,3,0> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x340)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 0x338) + (longlong)(int)uVar1 * 0x18);
}

// Sleeping @ 1440f2300

bool __thiscall
Chaos::TPBDRigidParticleHandleImp<double,3,0>::Sleeping
          (TPBDRigidParticleHandleImp<double,3,0> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  return *(char *)(*(longlong *)(lVar2 + 0x2d8) + 0xb + (longlong)(int)uVar1 * 0x10) == '\x01';
}

