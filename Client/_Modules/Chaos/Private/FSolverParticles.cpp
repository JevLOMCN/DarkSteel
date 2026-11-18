// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// FSolverParticles @ 143a38070

FSolverParticles * __thiscall
Chaos::Softs::FSolverParticles::FSolverParticles(FSolverParticles *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TParticles_M_02_Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->_padding_)
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7__TDynamicParticles_M_02_Chaos__6B_;
  this->_padding_ = (longlong)&___7__TArrayCollectionArray_M_Chaos__6B_;
  this->_padding_ = (longlong)&___7__TArrayCollectionArray_M_Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->_padding_)
  ;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->_padding_)
  ;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->_padding_)
  ;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->_padding_)
  ;
  this->_padding_ = (longlong)&___7FSolverParticles_Softs_Chaos__6B_;
  *(undefined ***)&this->MPAndInvM =
       &___7__TArrayCollectionArray_UFPAndInvM_Softs_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MPAndInvM).field_0x8 = 0;
  *(undefined8 *)&(this->MPAndInvM).field_0x10 = 0;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MPAndInvM)
  ;
  return this;
}

// P @ 143a88080

TVector<float,3> * __thiscall Chaos::Softs::FSolverParticles::P(FSolverParticles *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MPAndInvM).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<float,3> *)((longlong)param_1 * 0x10 + *(longlong *)&(this->MPAndInvM).field_0x8);
}

// P @ 143a88100

TVector<float,3> * __thiscall Chaos::Softs::FSolverParticles::P(FSolverParticles *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MPAndInvM).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<float,3> *)((longlong)param_1 * 0x10 + *(longlong *)&(this->MPAndInvM).field_0x8);
}

// PAndInvM @ 143a88180

FPAndInvM * __thiscall Chaos::Softs::FSolverParticles::PAndInvM(FSolverParticles *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPAndInvM *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MPAndInvM).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPAndInvM *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPAndInvM *)((longlong)param_1 * 0x10 + *(longlong *)&(this->MPAndInvM).field_0x8);
}

// SetP @ 143c18070

void __thiscall
Chaos::Softs::FSolverParticles::SetP(FSolverParticles *this,int param_1,TVector<float,3> *param_2)

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
  if (param_1 < *(int *)&(this->MPAndInvM).field_0x10) {
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
  lVar3 = *(longlong *)&(this->MPAndInvM).field_0x8;
  *(undefined8 *)(lVar3 + (longlong)param_1 * 0x10) = uVar1;
  *(undefined4 *)(lVar3 + 8 + (longlong)param_1 * 0x10) = uVar2;
  return;
}

// GetP @ 143c695b0

TVector<float,3> * __thiscall
Chaos::Softs::FSolverParticles::GetP(FSolverParticles *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MPAndInvM).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<float,3> *)((longlong)param_1 * 0x10 + *(longlong *)&(this->MPAndInvM).field_0x8);
}

// X @ 143c7e920

TVector<float,3> * __thiscall Chaos::Softs::FSolverParticles::X(FSolverParticles *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  
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
      pTVar4 = (TVector<float,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<float,3> *)(this->_padding_ + (longlong)param_1 * 0xc);
}

