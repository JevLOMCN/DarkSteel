// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// ~TDynamicParticles<float,3> @ 143a390f0

void __thiscall
Chaos::TDynamicParticles<float,3>::~TDynamicParticles<float,3>(TDynamicParticles<float,3> *this)

{
  void *pvVar1;
  
  *(undefined ***)&this->MInvM = &___7__TArrayCollectionArray_M_Chaos__6B_;
  pvVar1 = *(void **)&(this->MInvM).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MM = &___7__TArrayCollectionArray_M_Chaos__6B_;
  pvVar1 = *(void **)&(this->MM).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MAcceleration =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MAcceleration).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MV = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MV).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7__TParticles_M_02_Chaos__6B_;
  this->_padding_ = (longlong)&___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TArrayCollection::~TArrayCollection((TArrayCollection *)this);
  return;
}

// InvM @ 143a827c0

float * __thiscall
Chaos::TDynamicParticles<float,3>::InvM(TDynamicParticles<float,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MInvM).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar1)();
      return pfVar4;
    }
  }
  return (float *)(*(longlong *)&(this->MInvM).field_0x8 + (longlong)param_1 * 4);
}

// InvM @ 143a82840

float __thiscall
Chaos::TDynamicParticles<float,3>::InvM(TDynamicParticles<float,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MInvM).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return *(float *)(*(longlong *)&(this->MInvM).field_0x8 + (longlong)param_1 * 4);
}

// M @ 143a82a30

float __thiscall Chaos::TDynamicParticles<float,3>::M(TDynamicParticles<float,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MM).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return *(float *)(*(longlong *)&(this->MM).field_0x8 + (longlong)param_1 * 4);
}

// InvM @ 143b24310

double __thiscall
Chaos::TDynamicParticles<double,3>::InvM(TDynamicParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  double dVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MInvM).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar4 = (double)(*pcVar1)();
      return dVar4;
    }
  }
  return *(double *)(*(longlong *)&(this->MInvM).field_0x8 + (longlong)param_1 * 8);
}

// Acceleration @ 143bec080

TVector<float,3> * __thiscall
Chaos::TDynamicParticles<float,3>::Acceleration(TDynamicParticles<float,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MAcceleration).field_0x10) {
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
  return (TVector<float,3> *)
         (*(longlong *)&(this->MAcceleration).field_0x8 + (longlong)param_1 * 0xc);
}

// V @ 143c1d290

TVector<float,3> * __thiscall
Chaos::TDynamicParticles<float,3>::V(TDynamicParticles<float,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MV).field_0x10) {
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
  return (TVector<float,3> *)(*(longlong *)&(this->MV).field_0x8 + (longlong)param_1 * 0xc);
}

