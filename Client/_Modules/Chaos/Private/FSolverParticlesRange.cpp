// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 13

// GetPAndInvM @ 143c69630

TArrayView<Chaos::Softs::FPAndInvM,int> * __thiscall
Chaos::Softs::FSolverParticlesRange::GetPAndInvM
          (FSolverParticlesRange *this,
          TArrayView<Chaos::Softs::FPAndInvM,int> *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar5;
  
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::Softs::FPAndInvM,int> *)(*pcVar3)();
    return pTVar5;
  }
  lVar2 = *(longlong *)&this->field_0x8;
  if (((*(int *)&this->field_0x10 < 0) ||
      (*(int *)(lVar2 + 0xb0) < *(int *)&this->field_0x10 + *(int *)&this->field_0x14)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x52,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::Softs::FPAndInvM,int> *)(*pcVar3)();
    return pTVar5;
  }
  __return_storage_ptr__->DataPtr =
       (FPAndInvM *)((longlong)*(int *)&this->field_0x10 * 0x10 + *(longlong *)(lVar2 + 0xa8));
  iVar1 = *(int *)&this->field_0x14;
  __return_storage_ptr__->ArrayNum = iVar1;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::Softs::FPAndInvM,int> *)(*pcVar3)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

// GetX @ 143c69e00

TVector<float,3> * __thiscall
Chaos::Softs::FSolverParticlesRange::GetX(FSolverParticlesRange *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector<float,3> *pTVar3;
  
  if (*(longlong *)&this->field_0x8 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x56,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector<float,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = TParticles<float,3>::GetX
                     (*(TParticles<float,3> **)&this->field_0x8,*(int *)&this->field_0x10 + param_1)
  ;
  return pTVar3;
}

// InvM @ 143c6ae60

float __thiscall Chaos::Softs::FSolverParticlesRange::InvM(FSolverParticlesRange *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (*(longlong *)&this->field_0x8 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x56,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = TDynamicParticles<float,3>::InvM
                    (*(TDynamicParticles<float,3> **)&this->field_0x8,
                     *(int *)&this->field_0x10 + param_1);
  return fVar3;
}

// X @ 143c7e9a0

TVector<float,3> * __thiscall
Chaos::Softs::FSolverParticlesRange::X(FSolverParticlesRange *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector<float,3> *pTVar3;
  
  if (*(longlong *)&this->field_0x8 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x56,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector<float,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = TParticles<float,3>::GetX
                     (*(TParticles<float,3> **)&this->field_0x8,*(int *)&this->field_0x10 + param_1)
  ;
  return pTVar3;
}

// InvM @ 143ca3160

float * __thiscall
Chaos::Softs::FSolverParticlesRange::InvM(FSolverParticlesRange *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  
  if (*(longlong *)&this->field_0x8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pfVar5 = (float *)(*pcVar2)();
      return pfVar5;
    }
  }
  uVar6 = param_1 + *(int *)&this->field_0x10;
  lVar1 = *(longlong *)&this->field_0x8;
  uVar4 = 0;
  if ((int)uVar6 < *(int *)(lVar1 + 0x98)) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pfVar5 = (float *)(*pcVar2)();
      return pfVar5;
    }
  }
  return (float *)(*(longlong *)(lVar1 + 0x90) + (longlong)(int)uVar6 * 4);
}

// P @ 143ca39c0

TVector<float,3> * __thiscall
Chaos::Softs::FSolverParticlesRange::P(FSolverParticlesRange *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector<float,3> *pTVar3;
  
  if (*(longlong *)&this->field_0x8 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector<float,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FSolverParticles::P(*(FSolverParticles **)&this->field_0x8,
                               *(int *)&this->field_0x10 + param_1);
  return pTVar3;
}

// X @ 143cb1ae0

TVector<float,3> * __thiscall
Chaos::Softs::FSolverParticlesRange::X(FSolverParticlesRange *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TVector<float,3> *pTVar5;
  uint uVar6;
  
  if (*(longlong *)&this->field_0x8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TVector<float,3> *)(*pcVar2)();
      return pTVar5;
    }
  }
  uVar6 = param_1 + *(int *)&this->field_0x10;
  lVar1 = *(longlong *)&this->field_0x8;
  uVar4 = 0;
  if ((int)uVar6 < *(int *)(lVar1 + 0x30)) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TVector<float,3> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TVector<float,3> *)(*(longlong *)(lVar1 + 0x28) + (longlong)(int)uVar6 * 0xc);
}

// XArray @ 143cb1b90

TArrayView<Chaos::TVector<float,3>,int> * __thiscall
Chaos::Softs::FSolverParticlesRange::XArray
          (FSolverParticlesRange *this,
          TArrayView<Chaos::TVector<float,3>,int> *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar5;
  
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::TVector<float,3>,int> *)(*pcVar3)();
    return pTVar5;
  }
  lVar2 = *(longlong *)&this->field_0x8;
  if (((*(int *)&this->field_0x10 < 0) ||
      (*(int *)(lVar2 + 0x30) < *(int *)&this->field_0x10 + *(int *)&this->field_0x14)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x52,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::TVector<float,3>,int> *)(*pcVar3)();
    return pTVar5;
  }
  iVar1 = *(int *)&this->field_0x14;
  __return_storage_ptr__->DataPtr =
       (TVector<float,3> *)(*(longlong *)(lVar2 + 0x28) + (longlong)*(int *)&this->field_0x10 * 0xc)
  ;
  __return_storage_ptr__->ArrayNum = iVar1;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::TVector<float,3>,int> *)(*pcVar3)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

// M @ 143daf610

float __thiscall Chaos::Softs::FSolverParticlesRange::M(FSolverParticlesRange *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  if (*(longlong *)&this->field_0x8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x56,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  uVar5 = param_1 + *(int *)&this->field_0x10;
  lVar1 = *(longlong *)&this->field_0x8;
  uVar4 = 0;
  if ((int)uVar5 < *(int *)(lVar1 + 0x80)) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  return *(float *)(*(longlong *)(lVar1 + 0x78) + (longlong)(int)uVar5 * 4);
}

// V @ 143dbce20

TVector<float,3> * __thiscall
Chaos::Softs::FSolverParticlesRange::V(FSolverParticlesRange *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TVector<float,3> *pTVar5;
  uint uVar6;
  
  if (*(longlong *)&this->field_0x8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x56,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TVector<float,3> *)(*pcVar2)();
      return pTVar5;
    }
  }
  uVar6 = param_1 + *(int *)&this->field_0x10;
  lVar1 = *(longlong *)&this->field_0x8;
  uVar4 = 0;
  if ((int)uVar6 < *(int *)(lVar1 + 0x50)) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TVector<float,3> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TVector<float,3> *)(*(longlong *)(lVar1 + 0x48) + (longlong)(int)uVar6 * 0xc);
}

// Acceleration @ 143eb3e20

TVector<float,3> * __thiscall
Chaos::Softs::FSolverParticlesRange::Acceleration(FSolverParticlesRange *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector<float,3> *pTVar3;
  
  if (*(longlong *)&this->field_0x8 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector<float,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = TDynamicParticles<float,3>::Acceleration
                     (*(TDynamicParticles<float,3> **)&this->field_0x8,
                      *(int *)&this->field_0x10 + param_1);
  return pTVar3;
}

// GetInvM @ 143ec30b0

TArrayView<float,int> * __thiscall
Chaos::Softs::FSolverParticlesRange::GetInvM
          (FSolverParticlesRange *this,TArrayView<float,int> *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<float,int> *pTVar5;
  
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<float,int> *)(*pcVar3)();
    return pTVar5;
  }
  lVar2 = *(longlong *)&this->field_0x8;
  if (((*(int *)&this->field_0x10 < 0) ||
      (*(int *)(lVar2 + 0x98) < *(int *)&this->field_0x10 + *(int *)&this->field_0x14)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x52,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<float,int> *)(*pcVar3)();
    return pTVar5;
  }
  iVar1 = *(int *)&this->field_0x14;
  __return_storage_ptr__->DataPtr =
       (float *)(*(longlong *)(lVar2 + 0x90) + (longlong)*(int *)&this->field_0x10 * 4);
  __return_storage_ptr__->ArrayNum = iVar1;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<float,int> *)(*pcVar3)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

// XArray @ 143f294b0

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::Softs::FSolverParticlesRange::XArray
          (FSolverParticlesRange *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar5;
  
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar3)();
    return pTVar5;
  }
  lVar2 = *(longlong *)&this->field_0x8;
  if (((*(int *)&this->field_0x10 < 0) ||
      (*(int *)(lVar2 + 0x30) < *(int *)&this->field_0x10 + *(int *)&this->field_0x14)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x4b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar3)();
    return pTVar5;
  }
  iVar1 = *(int *)&this->field_0x14;
  __return_storage_ptr__->DataPtr =
       (TVector<float,3> *)(*(longlong *)(lVar2 + 0x28) + (longlong)*(int *)&this->field_0x10 * 0xc)
  ;
  __return_storage_ptr__->ArrayNum = iVar1;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar3)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

