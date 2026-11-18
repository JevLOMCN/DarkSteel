// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 49

// FPBDJointConstraintHandle @ 143c444b0

FPBDJointConstraintHandle * __thiscall
Chaos::FPBDJointConstraintHandle::FPBDJointConstraintHandle
          (FPBDJointConstraintHandle *this,FPBDJointConstraints *param_1,int param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FPBDJointConstraintHandle_Chaos__6B_;
  this->_padding_ = 0;
  *(int *)&this->_padding_ = param_2;
  this->bLinearPlasticityInitialized = false;
  this->bAngularPlasticityInitialized = false;
  return this;
}

// FPBDJointConstraintHandle @ 143c444e0

FPBDJointConstraintHandle * __thiscall
Chaos::FPBDJointConstraintHandle::FPBDJointConstraintHandle(FPBDJointConstraintHandle *this)

{
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FPBDJointConstraintHandle_Chaos__6B_;
  this->bLinearPlasticityInitialized = false;
  this->bAngularPlasticityInitialized = false;
  return this;
}

// CalculateConstraintSpace @ 143c5d1c0

void __thiscall
Chaos::FPBDJointConstraintHandle::CalculateConstraintSpace
          (FPBDJointConstraintHandle *this,TVector<double,3> *param_1,PMatrix<double,3,3> *param_2,
          TVector<double,3> *param_3,PMatrix<double,3,3> *param_4)

{
  FPBDJointConstraints::CalculateConstraintSpace
            ((FPBDJointConstraints *)this->_padding_,(int)this->_padding_,param_1,param_2,param_3,
             param_4);
  return;
}

// ClearConstraintBreaking @ 143c5e9c0

void __thiscall
Chaos::FPBDJointConstraintHandle::ClearConstraintBreaking(FPBDJointConstraintHandle *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x110)) {
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
  *(undefined1 *)((longlong)(int)uVar1 * 0x58 + 0x12 + *(longlong *)(lVar2 + 0x108)) = 0;
  return;
}

// ClearConstraintViolating @ 143c5eac0

void __thiscall
Chaos::FPBDJointConstraintHandle::ClearConstraintViolating(FPBDJointConstraintHandle *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x110)) {
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
  *(undefined1 *)((longlong)(int)uVar1 * 0x58 + 0x13 + *(longlong *)(lVar2 + 0x108)) = 0;
  return;
}

// ClearDriveTargetChanged @ 143c5ebc0

void __thiscall
Chaos::FPBDJointConstraintHandle::ClearDriveTargetChanged(FPBDJointConstraintHandle *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x110)) {
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
  *(undefined1 *)((longlong)(int)uVar1 * 0x58 + 0x14 + *(longlong *)(lVar2 + 0x108)) = 0;
  return;
}

// GetAngularImpulse @ 143c679f0

TVector<double,3> * __thiscall
Chaos::FPBDJointConstraintHandle::GetAngularImpulse
          (FPBDJointConstraintHandle *this,TVector<double,3> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  TVector<double,3> *pTVar9;
  
  uVar3 = (uint)this->_padding_;
  lVar4 = this->_padding_;
  uVar8 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x110)) {
    uVar8 = ~uVar3 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TVector<double,3> *)(*pcVar5)();
      return pTVar9;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x108);
  puVar1 = (undefined8 *)((longlong)(int)uVar3 * 0x58 + 0x30 + lVar4);
  uVar6 = puVar1[1];
  uVar2 = *(undefined8 *)((longlong)(int)uVar3 * 0x58 + 0x40 + lVar4);
  *(undefined8 *)__return_storage_ptr__ = *puVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar6;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar2;
  return __return_storage_ptr__;
}

// GetAngularViolation @ 143c67a90

float __thiscall
Chaos::FPBDJointConstraintHandle::GetAngularViolation(FPBDJointConstraintHandle *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  float fVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x110)) {
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
  return *(float *)((longlong)(int)uVar1 * 0x58 + 0x4c + *(longlong *)(lVar2 + 0x108));
}

// GetConstrainedParticles @ 143c67c70

TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> * __thiscall
Chaos::FPBDJointConstraintHandle::GetConstrainedParticles
          (FPBDJointConstraintHandle *this,
          TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *__return_storage_ptr__)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar2;
  
  pTVar2 = FPBDJointConstraints::GetConstrainedParticles
                     ((FPBDJointConstraints *)this->_padding_,(int)this->_padding_);
  pTVar1 = pTVar2->V[1];
  __return_storage_ptr__->V[0] = pTVar2->V[0];
  __return_storage_ptr__->V[1] = pTVar1;
  return __return_storage_ptr__;
}

// GetConstraintColor @ 143c67fe0

int __thiscall Chaos::FPBDJointConstraintHandle::GetConstraintColor(FPBDJointConstraintHandle *this)

{
  int iVar1;
  
  iVar1 = FPBDJointConstraints::GetConstraintColor
                    ((FPBDJointConstraints *)this->_padding_,(int)this->_padding_);
  return iVar1;
}

// GetConstraintIsland @ 143c68290

int __thiscall
Chaos::FPBDJointConstraintHandle::GetConstraintIsland(FPBDJointConstraintHandle *this)

{
  int iVar1;
  
  iVar1 = FPBDJointConstraints::GetConstraintIsland
                    ((FPBDJointConstraints *)this->_padding_,(int)this->_padding_);
  return iVar1;
}

// GetConstraintLevel @ 143c68330

int __thiscall Chaos::FPBDJointConstraintHandle::GetConstraintLevel(FPBDJointConstraintHandle *this)

{
  int iVar1;
  
  iVar1 = FPBDJointConstraints::GetConstraintLevel
                    ((FPBDJointConstraints *)this->_padding_,(int)this->_padding_);
  return iVar1;
}

// GetConstraintSettingsInternal @ 143c685f0

FPBDJointSettings * __thiscall
Chaos::FPBDJointConstraintHandle::GetConstraintSettingsInternal(FPBDJointConstraintHandle *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FPBDJointSettings *pFVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0xf0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FPBDJointSettings *)(*pcVar3)();
      return pFVar6;
    }
  }
  return (FPBDJointSettings *)((longlong)(int)uVar1 * 800 + *(longlong *)(lVar2 + 0xe8));
}

// GetLinearImpulse @ 143c692d0

TVector<double,3> * __thiscall
Chaos::FPBDJointConstraintHandle::GetLinearImpulse
          (FPBDJointConstraintHandle *this,TVector<double,3> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  TVector<double,3> *pTVar9;
  
  uVar3 = (uint)this->_padding_;
  lVar4 = this->_padding_;
  uVar8 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x110)) {
    uVar8 = ~uVar3 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TVector<double,3> *)(*pcVar5)();
      return pTVar9;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x108);
  puVar1 = (undefined8 *)((longlong)(int)uVar3 * 0x58 + 0x18 + lVar4);
  uVar6 = puVar1[1];
  uVar2 = *(undefined8 *)((longlong)(int)uVar3 * 0x58 + 0x28 + lVar4);
  *(undefined8 *)__return_storage_ptr__ = *puVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar6;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar2;
  return __return_storage_ptr__;
}

// GetLinearViolation @ 143c69370

float __thiscall
Chaos::FPBDJointConstraintHandle::GetLinearViolation(FPBDJointConstraintHandle *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  float fVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x110)) {
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
  return *(float *)((longlong)(int)uVar1 * 0x58 + 0x48 + *(longlong *)(lVar2 + 0x108));
}

// GetSettings @ 143c69810

FPBDJointSettings * __thiscall
Chaos::FPBDJointConstraintHandle::GetSettings(FPBDJointConstraintHandle *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FPBDJointSettings *pFVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0xf0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FPBDJointSettings *)(*pcVar3)();
      return pFVar6;
    }
  }
  return (FPBDJointSettings *)((longlong)(int)uVar1 * 800 + *(longlong *)(lVar2 + 0xe8));
}

// IsConstraintBreaking @ 143c6aed0

bool __thiscall
Chaos::FPBDJointConstraintHandle::IsConstraintBreaking(FPBDJointConstraintHandle *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x110)) {
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
  return (bool)*(undefined1 *)((longlong)(int)uVar1 * 0x58 + 0x12 + *(longlong *)(lVar2 + 0x108));
}

// IsConstraintBroken @ 143c6afd0

bool __thiscall
Chaos::FPBDJointConstraintHandle::IsConstraintBroken(FPBDJointConstraintHandle *this)

{
  bool bVar1;
  
  bVar1 = FPBDJointConstraints::IsConstraintBroken
                    ((FPBDJointConstraints *)this->_padding_,(int)this->_padding_);
  return bVar1;
}

// IsConstraintEnabled @ 143c6b070

bool __thiscall
Chaos::FPBDJointConstraintHandle::IsConstraintEnabled(FPBDJointConstraintHandle *this)

{
  bool bVar1;
  
  bVar1 = FPBDJointConstraints::IsConstraintEnabled
                    ((FPBDJointConstraints *)this->_padding_,(int)this->_padding_);
  return bVar1;
}

// IsConstraintViolating @ 143c6b1a0

bool __thiscall
Chaos::FPBDJointConstraintHandle::IsConstraintViolating(FPBDJointConstraintHandle *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x110)) {
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
  return (bool)*(undefined1 *)((longlong)(int)uVar1 * 0x58 + 0x13 + *(longlong *)(lVar2 + 0x108));
}

// IsDriveTargetChanged @ 143c6b2a0

bool __thiscall
Chaos::FPBDJointConstraintHandle::IsDriveTargetChanged(FPBDJointConstraintHandle *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x110)) {
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
  return (bool)*(undefined1 *)((longlong)(int)uVar1 * 0x58 + 0x14 + *(longlong *)(lVar2 + 0x108));
}

// IsEnabledDuringResim @ 143c6b3a0

bool __thiscall
Chaos::FPBDJointConstraintHandle::IsEnabledDuringResim(FPBDJointConstraintHandle *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x110)) {
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
  return (bool)*(undefined1 *)((longlong)(int)uVar1 * 0x58 + 0x52 + *(longlong *)(lVar2 + 0x108));
}

// ResimType @ 143c716c0

EResimType __thiscall Chaos::FPBDJointConstraintHandle::ResimType(FPBDJointConstraintHandle *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  EResimType EVar5;
  uint uVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x110)) {
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
  return *(EResimType *)((longlong)(int)uVar1 * 0x58 + 0x50 + *(longlong *)(lVar2 + 0x108));
}

// SetAngularDriveDamping @ 143c73170

void __thiscall
Chaos::FPBDJointConstraintHandle::SetAngularDriveDamping
          (FPBDJointConstraintHandle *this,TVector<double,3> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FPBDJointSettings *pFVar3;
  
  pFVar3 = GetConstraintSettingsInternal(this);
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&pFVar3->AngularDriveDamping = *(undefined8 *)param_1;
  *(undefined8 *)&(pFVar3->AngularDriveDamping).field_0x8 = uVar2;
  *(undefined8 *)&(pFVar3->AngularDriveDamping).field_0x10 = uVar1;
  return;
}

// SetAngularDriveForceMode @ 143c731b0

void __thiscall
Chaos::FPBDJointConstraintHandle::SetAngularDriveForceMode
          (FPBDJointConstraintHandle *this,EJointForceMode param_1)

{
  FPBDJointSettings *pFVar1;
  
  pFVar1 = GetConstraintSettingsInternal(this);
  pFVar1->AngularDriveForceMode = param_1;
  return;
}

// SetAngularDriveMaxTorque @ 143c731d0

void __thiscall
Chaos::FPBDJointConstraintHandle::SetAngularDriveMaxTorque
          (FPBDJointConstraintHandle *this,TVector<double,3> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FPBDJointSettings *pFVar3;
  
  pFVar3 = GetConstraintSettingsInternal(this);
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&pFVar3->AngularDriveMaxTorque = *(undefined8 *)param_1;
  *(undefined8 *)&(pFVar3->AngularDriveMaxTorque).field_0x8 = uVar2;
  *(undefined8 *)&(pFVar3->AngularDriveMaxTorque).field_0x10 = uVar1;
  return;
}

// SetAngularDrivePositionTarget @ 143c73210

void __thiscall
Chaos::FPBDJointConstraintHandle::SetAngularDrivePositionTarget
          (FPBDJointConstraintHandle *this,TQuat<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FPBDJointSettings *pFVar4;
  
  pFVar4 = GetConstraintSettingsInternal(this);
  dVar1 = param_1->Y;
  dVar2 = param_1->Z;
  dVar3 = param_1->W;
  *(double *)&pFVar4->AngularDrivePositionTarget = param_1->X;
  *(double *)&(pFVar4->AngularDrivePositionTarget).field_0x8 = dVar1;
  *(double *)&(pFVar4->AngularDrivePositionTarget).field_0x10 = dVar2;
  *(double *)&(pFVar4->AngularDrivePositionTarget).field_0x18 = dVar3;
  return;
}

// SetAngularDriveStiffness @ 143c732f0

void __thiscall
Chaos::FPBDJointConstraintHandle::SetAngularDriveStiffness
          (FPBDJointConstraintHandle *this,TVector<double,3> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FPBDJointSettings *pFVar3;
  
  pFVar3 = GetConstraintSettingsInternal(this);
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&pFVar3->AngularDriveStiffness = *(undefined8 *)param_1;
  *(undefined8 *)&(pFVar3->AngularDriveStiffness).field_0x8 = uVar2;
  *(undefined8 *)&(pFVar3->AngularDriveStiffness).field_0x10 = uVar1;
  return;
}

// SetAngularDriveVelocityTarget @ 143c73330

void __thiscall
Chaos::FPBDJointConstraintHandle::SetAngularDriveVelocityTarget
          (FPBDJointConstraintHandle *this,TVector<double,3> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FPBDJointSettings *pFVar3;
  
  pFVar3 = GetConstraintSettingsInternal(this);
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&pFVar3->AngularDriveVelocityTarget = *(undefined8 *)param_1;
  *(undefined8 *)&(pFVar3->AngularDriveVelocityTarget).field_0x8 = uVar2;
  *(undefined8 *)&(pFVar3->AngularDriveVelocityTarget).field_0x10 = uVar1;
  return;
}

// SetChildConnectorLocation @ 143c73450

void __thiscall
Chaos::FPBDJointConstraintHandle::SetChildConnectorLocation
          (FPBDJointConstraintHandle *this,TVector<double,3> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FPBDJointSettings *pFVar3;
  
  uVar1 = *(undefined8 *)&param_1->field_0x10;
  pFVar3 = GetConstraintSettingsInternal(this);
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&(pFVar3->ConnectorTransforms).V[0].field_0x20 = *(undefined8 *)param_1;
  *(undefined8 *)&(pFVar3->ConnectorTransforms).V[0].field_0x28 = uVar2;
  *(undefined8 *)&(pFVar3->ConnectorTransforms).V[0].field_0x30 = uVar1;
  *(undefined8 *)&(pFVar3->ConnectorTransforms).V[0].field_0x38 = 0;
  return;
}

// SetChildConnectorRotation @ 143c73490

void __thiscall
Chaos::FPBDJointConstraintHandle::SetChildConnectorRotation
          (FPBDJointConstraintHandle *this,TQuat<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FPBDJointSettings *pFVar4;
  
  dVar1 = param_1->Z;
  dVar2 = param_1->W;
  pFVar4 = GetConstraintSettingsInternal(this);
  dVar3 = param_1->Y;
  *(double *)(pFVar4->ConnectorTransforms).V = param_1->X;
  *(double *)&(pFVar4->ConnectorTransforms).V[0].field_0x8 = dVar3;
  *(double *)&(pFVar4->ConnectorTransforms).V[0].field_0x10 = dVar1;
  *(double *)&(pFVar4->ConnectorTransforms).V[0].field_0x18 = dVar2;
  return;
}

// SetCollisionEnabled @ 143c734d0

void __thiscall
Chaos::FPBDJointConstraintHandle::SetCollisionEnabled(FPBDJointConstraintHandle *this,bool param_1)

{
  FPBDJointSettings *pFVar1;
  
  pFVar1 = GetConstraintSettingsInternal(this);
  pFVar1->bCollisionEnabled = param_1;
  return;
}

// SetConstraintEnabled @ 143c73610

void __thiscall
Chaos::FPBDJointConstraintHandle::SetConstraintEnabled(FPBDJointConstraintHandle *this,bool param_1)

{
  FPBDJointConstraints::SetConstraintEnabled
            ((FPBDJointConstraints *)this->_padding_,(int)this->_padding_,param_1);
  return;
}

// SetDriveParams @ 143c73c80

void __thiscall
Chaos::FPBDJointConstraintHandle::SetDriveParams
          (FPBDJointConstraintHandle *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3,TVector<double,3> *param_4,TVector<double,3> *param_5,
          TVector<double,3> *param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FPBDJointSettings *pFVar6;
  
  pFVar6 = GetConstraintSettingsInternal(this);
  uVar4 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&pFVar6->LinearDriveStiffness = *(undefined8 *)param_1;
  *(undefined8 *)&(pFVar6->LinearDriveStiffness).field_0x8 = uVar4;
  uVar4 = *(undefined8 *)param_2;
  uVar5 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&(pFVar6->LinearDriveStiffness).field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&pFVar6->LinearDriveDamping = uVar4;
  *(undefined8 *)&(pFVar6->LinearDriveDamping).field_0x8 = uVar5;
  uVar4 = *(undefined8 *)param_3;
  uVar5 = *(undefined8 *)&param_3->field_0x8;
  *(undefined8 *)&(pFVar6->LinearDriveDamping).field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&pFVar6->LinearDriveMaxForce = uVar4;
  *(undefined8 *)&(pFVar6->LinearDriveMaxForce).field_0x8 = uVar5;
  uVar4 = *(undefined8 *)param_4;
  uVar5 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&(pFVar6->LinearDriveMaxForce).field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&pFVar6->AngularDriveStiffness = uVar4;
  *(undefined8 *)&(pFVar6->AngularDriveStiffness).field_0x8 = uVar5;
  uVar4 = *(undefined8 *)param_5;
  uVar5 = *(undefined8 *)&param_5->field_0x8;
  *(undefined8 *)&(pFVar6->AngularDriveStiffness).field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&param_5->field_0x10;
  *(undefined8 *)&pFVar6->AngularDriveDamping = uVar4;
  *(undefined8 *)&(pFVar6->AngularDriveDamping).field_0x8 = uVar5;
  *(undefined8 *)&(pFVar6->AngularDriveDamping).field_0x10 = uVar1;
  uVar4 = *(undefined8 *)&param_6->field_0x8;
  uVar1 = *(undefined8 *)&param_6->field_0x10;
  *(undefined8 *)&pFVar6->AngularDriveMaxTorque = *(undefined8 *)param_6;
  *(undefined8 *)&(pFVar6->AngularDriveMaxTorque).field_0x8 = uVar4;
  *(undefined8 *)&(pFVar6->AngularDriveMaxTorque).field_0x10 = uVar1;
  dVar2 = *(double *)&param_1->field_0x8;
  (pFVar6->bLinearPositionDriveEnabled).field0_0x0._s_0.X = 0.0 < *(double *)param_1;
  dVar3 = *(double *)&param_1->field_0x10;
  (pFVar6->bLinearPositionDriveEnabled).field0_0x0._s_0.Y = 0.0 < dVar2;
  dVar2 = *(double *)param_2;
  (pFVar6->bLinearPositionDriveEnabled).field0_0x0._s_0.Z = 0.0 < dVar3;
  dVar3 = *(double *)&param_2->field_0x8;
  (pFVar6->bLinearVelocityDriveEnabled).field0_0x0._s_0.X = 0.0 < dVar2;
  dVar2 = *(double *)&param_2->field_0x10;
  (pFVar6->bLinearVelocityDriveEnabled).field0_0x0._s_0.Y = 0.0 < dVar3;
  dVar3 = *(double *)param_4;
  (pFVar6->bLinearVelocityDriveEnabled).field0_0x0._s_0.Z = 0.0 < dVar2;
  dVar2 = *(double *)&param_4->field_0x8;
  pFVar6->bAngularSwingPositionDriveEnabled = 0.0 < dVar3;
  dVar3 = *(double *)&param_4->field_0x10;
  pFVar6->bAngularTwistPositionDriveEnabled = 0.0 < dVar2;
  dVar2 = *(double *)param_5;
  pFVar6->bAngularSLerpPositionDriveEnabled = 0.0 < dVar3;
  dVar3 = *(double *)&param_5->field_0x8;
  pFVar6->bAngularSwingVelocityDriveEnabled = 0.0 < dVar2;
  dVar2 = *(double *)&param_5->field_0x10;
  pFVar6->bAngularTwistVelocityDriveEnabled = 0.0 < dVar3;
  pFVar6->bAngularSLerpVelocityDriveEnabled = 0.0 < dVar2;
  return;
}

// SetEnabledDuringResim @ 143c73ec0

void __thiscall
Chaos::FPBDJointConstraintHandle::SetEnabledDuringResim
          (FPBDJointConstraintHandle *this,bool param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x110)) {
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
  *(bool *)((longlong)(int)uVar1 * 0x58 + 0x52 + *(longlong *)(lVar2 + 0x108)) = param_1;
  return;
}

// SetJointState @ 143c74000

void __thiscall
Chaos::FPBDJointConstraintHandle::SetJointState
          (FPBDJointConstraintHandle *this,FPBDJointState *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  uint uVar20;
  longlong lVar21;
  
  uVar4 = (uint)this->_padding_;
  iVar7 = param_1->Island;
  iVar8 = param_1->Level;
  iVar9 = param_1->Color;
  iVar10 = param_1->IslandSize;
  uVar11 = *(undefined8 *)&param_1->bDisabled;
  uVar12 = *(undefined8 *)&param_1->LinearImpulse;
  uVar13 = *(undefined8 *)&(param_1->LinearImpulse).field_0x8;
  uVar14 = *(undefined8 *)&(param_1->LinearImpulse).field_0x10;
  uVar15 = *(undefined8 *)&param_1->AngularImpulse;
  uVar16 = *(undefined8 *)&(param_1->AngularImpulse).field_0x8;
  uVar17 = *(undefined8 *)&(param_1->AngularImpulse).field_0x10;
  uVar18 = *(undefined8 *)&param_1->LinearViolation;
  uVar3 = *(undefined8 *)&param_1->ResimType;
  lVar5 = this->_padding_;
  uVar20 = 0;
  if ((int)uVar4 < *(int *)(lVar5 + 0x110)) {
    uVar20 = ~uVar4 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar5 = *(longlong *)(lVar5 + 0x108);
  lVar21 = (longlong)(int)uVar4 * 0x58;
  piVar1 = (int *)(lVar21 + lVar5);
  *piVar1 = iVar7;
  piVar1[1] = iVar8;
  piVar1[2] = iVar9;
  piVar1[3] = iVar10;
  puVar2 = (undefined8 *)(lVar21 + 0x10 + lVar5);
  *puVar2 = uVar11;
  puVar2[1] = uVar12;
  puVar2 = (undefined8 *)(lVar21 + 0x20 + lVar5);
  *puVar2 = uVar13;
  puVar2[1] = uVar14;
  puVar2 = (undefined8 *)(lVar21 + 0x30 + lVar5);
  *puVar2 = uVar15;
  puVar2[1] = uVar16;
  puVar2 = (undefined8 *)(lVar21 + 0x40 + lVar5);
  *puVar2 = uVar17;
  puVar2[1] = uVar18;
  *(undefined8 *)(lVar21 + 0x50 + lVar5) = uVar3;
  return;
}

// SetLinearDriveDamping @ 143c74180

void __thiscall
Chaos::FPBDJointConstraintHandle::SetLinearDriveDamping
          (FPBDJointConstraintHandle *this,TVector<double,3> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FPBDJointSettings *pFVar3;
  
  pFVar3 = GetConstraintSettingsInternal(this);
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&pFVar3->LinearDriveDamping = *(undefined8 *)param_1;
  *(undefined8 *)&(pFVar3->LinearDriveDamping).field_0x8 = uVar2;
  *(undefined8 *)&(pFVar3->LinearDriveDamping).field_0x10 = uVar1;
  return;
}

// SetLinearDriveForceMode @ 143c741c0

void __thiscall
Chaos::FPBDJointConstraintHandle::SetLinearDriveForceMode
          (FPBDJointConstraintHandle *this,EJointForceMode param_1)

{
  FPBDJointSettings *pFVar1;
  
  pFVar1 = GetConstraintSettingsInternal(this);
  pFVar1->LinearDriveForceMode = param_1;
  return;
}

// SetLinearDriveMaxForce @ 143c741e0

void __thiscall
Chaos::FPBDJointConstraintHandle::SetLinearDriveMaxForce
          (FPBDJointConstraintHandle *this,TVector<double,3> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FPBDJointSettings *pFVar3;
  
  pFVar3 = GetConstraintSettingsInternal(this);
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&pFVar3->LinearDriveMaxForce = *(undefined8 *)param_1;
  *(undefined8 *)&(pFVar3->LinearDriveMaxForce).field_0x8 = uVar2;
  *(undefined8 *)&(pFVar3->LinearDriveMaxForce).field_0x10 = uVar1;
  return;
}

// SetLinearDrivePositionTarget @ 143c74220

void __thiscall
Chaos::FPBDJointConstraintHandle::SetLinearDrivePositionTarget
          (FPBDJointConstraintHandle *this,TVector<double,3> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FPBDJointSettings *pFVar3;
  
  pFVar3 = GetConstraintSettingsInternal(this);
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&pFVar3->LinearDrivePositionTarget = *(undefined8 *)param_1;
  *(undefined8 *)&(pFVar3->LinearDrivePositionTarget).field_0x8 = uVar2;
  *(undefined8 *)&(pFVar3->LinearDrivePositionTarget).field_0x10 = uVar1;
  return;
}

// SetLinearDriveStiffness @ 143c74310

void __thiscall
Chaos::FPBDJointConstraintHandle::SetLinearDriveStiffness
          (FPBDJointConstraintHandle *this,TVector<double,3> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FPBDJointSettings *pFVar3;
  
  pFVar3 = GetConstraintSettingsInternal(this);
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&pFVar3->LinearDriveStiffness = *(undefined8 *)param_1;
  *(undefined8 *)&(pFVar3->LinearDriveStiffness).field_0x8 = uVar2;
  *(undefined8 *)&(pFVar3->LinearDriveStiffness).field_0x10 = uVar1;
  return;
}

// SetLinearDriveVelocityTarget @ 143c74350

void __thiscall
Chaos::FPBDJointConstraintHandle::SetLinearDriveVelocityTarget
          (FPBDJointConstraintHandle *this,TVector<double,3> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FPBDJointSettings *pFVar3;
  
  pFVar3 = GetConstraintSettingsInternal(this);
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&pFVar3->LinearDriveVelocityTarget = *(undefined8 *)param_1;
  *(undefined8 *)&(pFVar3->LinearDriveVelocityTarget).field_0x8 = uVar2;
  *(undefined8 *)&(pFVar3->LinearDriveVelocityTarget).field_0x10 = uVar1;
  return;
}

// SetParentConnectorLocation @ 143c74ac0

void __thiscall
Chaos::FPBDJointConstraintHandle::SetParentConnectorLocation
          (FPBDJointConstraintHandle *this,TVector<double,3> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FPBDJointSettings *pFVar3;
  
  uVar1 = *(undefined8 *)&param_1->field_0x10;
  pFVar3 = GetConstraintSettingsInternal(this);
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&(pFVar3->ConnectorTransforms).V[1].field_0x20 = *(undefined8 *)param_1;
  *(undefined8 *)&(pFVar3->ConnectorTransforms).V[1].field_0x28 = uVar2;
  *(undefined8 *)&(pFVar3->ConnectorTransforms).V[1].field_0x30 = uVar1;
  *(undefined8 *)&(pFVar3->ConnectorTransforms).V[1].field_0x38 = 0;
  return;
}

// SetParentConnectorRotation @ 143c74b00

void __thiscall
Chaos::FPBDJointConstraintHandle::SetParentConnectorRotation
          (FPBDJointConstraintHandle *this,TQuat<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FPBDJointSettings *pFVar4;
  
  dVar1 = param_1->Z;
  dVar2 = param_1->W;
  pFVar4 = GetConstraintSettingsInternal(this);
  dVar3 = param_1->Y;
  *(double *)((pFVar4->ConnectorTransforms).V + 1) = param_1->X;
  *(double *)&(pFVar4->ConnectorTransforms).V[1].field_0x8 = dVar3;
  *(double *)&(pFVar4->ConnectorTransforms).V[1].field_0x10 = dVar1;
  *(double *)&(pFVar4->ConnectorTransforms).V[1].field_0x18 = dVar2;
  return;
}

// SetParentInvMassScale @ 143c74b40

void __thiscall
Chaos::FPBDJointConstraintHandle::SetParentInvMassScale
          (FPBDJointConstraintHandle *this,double param_1)

{
  FPBDJointSettings *pFVar1;
  
  pFVar1 = GetConstraintSettingsInternal(this);
  pFVar1->ParentInvMassScale = param_1;
  return;
}

// SetSettings @ 143c75e10

void __thiscall
Chaos::FPBDJointConstraintHandle::SetSettings
          (FPBDJointConstraintHandle *this,FPBDJointSettings *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  FPBDJointSettings *pFVar15;
  double dVar16;
  double dVar17;
  
  pFVar15 = GetSettings(this);
  uVar6 = *(undefined8 *)&pFVar15->LinearDrivePositionTarget;
  uVar7 = *(undefined8 *)&(pFVar15->LinearDrivePositionTarget).field_0x8;
  uVar2 = *(undefined8 *)&(pFVar15->LinearDrivePositionTarget).field_0x10;
  pFVar15 = GetSettings(this);
  dVar17 = __real_47efffffe0000000;
  uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar12 = __real_3e45798ee2308c3a;
  uVar8 = *(undefined8 *)&pFVar15->AngularDrivePositionTarget;
  uVar9 = *(undefined8 *)&(pFVar15->AngularDrivePositionTarget).field_0x8;
  uVar10 = *(undefined8 *)&(pFVar15->AngularDrivePositionTarget).field_0x10;
  uVar11 = *(undefined8 *)&(pFVar15->AngularDrivePositionTarget).field_0x18;
  if ((this->bLinearPlasticityInitialized == false) &&
     (dVar16 = param_1->LinearPlasticityLimit - __real_47efffffe0000000,
     __real_3e45798ee2308c3a <
     (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    this->bLinearPlasticityInitialized = true;
  }
  if ((this->bAngularPlasticityInitialized == false) &&
     (dVar17 = param_1->AngularPlasticityLimit - dVar17,
     dVar12 < (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & uVar14,SUB84(dVar17,0) & uVar3)))
  {
    this->bAngularPlasticityInitialized = true;
  }
  FPBDJointConstraints::SetConstraintSettings
            ((FPBDJointConstraints *)this->_padding_,(int)this->_padding_,param_1);
  if (this->bLinearPlasticityInitialized != false) {
    uVar3 = (uint)this->_padding_;
    lVar4 = this->_padding_;
    uVar14 = 0;
    if ((int)uVar3 < *(int *)(lVar4 + 0xf0)) {
      uVar14 = ~uVar3 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0xe8);
    puVar1 = (undefined8 *)((longlong)(int)uVar3 * 800 + 0x1b0 + lVar4);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    *(undefined8 *)((longlong)(int)uVar3 * 800 + 0x1c0 + lVar4) = uVar2;
  }
  if (this->bAngularPlasticityInitialized != false) {
    uVar3 = (uint)this->_padding_;
    lVar4 = this->_padding_;
    uVar14 = 0;
    if ((int)uVar3 < *(int *)(lVar4 + 0xf0)) {
      uVar14 = ~uVar3 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0xe8);
    puVar1 = (undefined8 *)((longlong)(int)uVar3 * 800 + 0x240 + lVar4);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    puVar1 = (undefined8 *)((longlong)(int)uVar3 * 800 + 0x250 + lVar4);
    *puVar1 = uVar10;
    puVar1[1] = uVar11;
  }
  return;
}

// SetSyncState @ 143c763c0

void __thiscall
Chaos::FPBDJointConstraintHandle::SetSyncState(FPBDJointConstraintHandle *this,ESyncState param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x110)) {
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
  *(ESyncState *)((longlong)(int)uVar1 * 0x58 + 0x51 + *(longlong *)(lVar2 + 0x108)) = param_1;
  return;
}

// StaticType @ 143c78af0

FConstraintHandleTypeID * __cdecl Chaos::FPBDJointConstraintHandle::StaticType(void)

{
  FConstraintHandleTypeID *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FIndexedConstraintHandle::StaticType();
      ::FName::FName(local_res8,L"FJointConstraintHandle");
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
      ::__l2::STypeID.TypeName = local_res8[0];
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
      ::__l2::STypeID.BaseType = pFVar1;
      _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
          ::__l2::STypeID;
}

// SyncState @ 143c78e70

ESyncState __thiscall Chaos::FPBDJointConstraintHandle::SyncState(FPBDJointConstraintHandle *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  ESyncState EVar5;
  uint uVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x110)) {
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
  return *(ESyncState *)((longlong)(int)uVar1 * 0x58 + 0x51 + *(longlong *)(lVar2 + 0x108));
}

