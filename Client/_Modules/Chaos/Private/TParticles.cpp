// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 14

// GetX @ 143700430

TVector<double,3> * __thiscall
Chaos::TParticles<double,3>::GetX(TParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MX).field_0x10) {
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
  return (TVector<double,3> *)(*(longlong *)&(this->MX).field_0x8 + (longlong)param_1 * 0x18);
}

// TParticles<double,3> @ 14373bc70

TParticles<double,3> * __thiscall
Chaos::TParticles<double,3>::TParticles<double,3>
          (TParticles<double,3> *this,TParticles<double,3> *param_1)

{
  int iVar1;
  
  this->_padding_ = (longlong)&___7__TParticles_N_02_Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined ***)&this->MX = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MX).field_0x8 = 0;
  *(undefined8 *)&(this->MX).field_0x8 = *(undefined8 *)&(param_1->MX).field_0x8;
  *(undefined8 *)&(param_1->MX).field_0x8 = 0;
  *(undefined4 *)&(this->MX).field_0x10 = *(undefined4 *)&(param_1->MX).field_0x10;
  *(undefined4 *)&(this->MX).field_0x14 = *(undefined4 *)&(param_1->MX).field_0x14;
  *(undefined8 *)&(param_1->MX).field_0x10 = 0;
  *(undefined ***)&this->MX = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  this->MRemoveParticleBehavior = param_1->MRemoveParticleBehavior;
  iVar1 = (int)param_1->_padding_;
  if (iVar1 != 0) {
    TArrayCollection::ResizeHelper((TArrayCollection *)this,(int)this->_padding_ + iVar1);
  }
  this->MDirtyValidationCount = this->MDirtyValidationCount + 1;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MX);
  *(undefined4 *)&param_1->_padding_ = 0;
  this->MDirtyValidationCount = 0;
  return this;
}

// ~TParticles<float,3> @ 14373e070

void __thiscall Chaos::TParticles<float,3>::~TParticles<float,3>(TParticles<float,3> *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__TParticles_M_02_Chaos__6B_;
  *(undefined ***)&this->MX = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MX).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TArrayCollection::~TArrayCollection((TArrayCollection *)this);
  return;
}

// ~TParticles<double,3> @ 14373e0b0

void __thiscall Chaos::TParticles<double,3>::~TParticles<double,3>(TParticles<double,3> *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__TParticles_N_02_Chaos__6B_;
  *(undefined ***)&this->MX = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MX).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TArrayCollection::~TArrayCollection((TArrayCollection *)this);
  return;
}

// GetX @ 143793fc0

TVector<float,3> * __thiscall
Chaos::TParticles<float,3>::GetX(TParticles<float,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MX).field_0x10) {
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
  return (TVector<float,3> *)(*(longlong *)&(this->MX).field_0x8 + (longlong)param_1 * 0xc);
}

// Serialize @ 1437ab080

void __thiscall Chaos::TParticles<double,3>::Serialize(TParticles<double,3> *this,FArchive *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  bool bVar4;
  uint local_res8 [2];
  
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_res8[0] = (uint)((param_1->field_0x28 & 1) == 0);
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar2 = local_res8[0];
    if ((param_1->field_0x28 & 1) != 0) goto LAB_1437ab0f3;
  }
  else {
    uVar2 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
LAB_1437ab0f3:
    if ((uVar2 == 0) &&
       (bVar4 = `Chaos::TParticles<double,3>::Serialize'::__l3::<lambda_1>::operator()(local_res8),
       !bVar4)) goto LAB_1437ab11f;
  }
  TArrayPrivateFriend::Serialize<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)
                     &(this->MX).field_0x8);
  TArrayCollection::ResizeHelper((TArrayCollection *)this,*(int *)&(this->MX).field_0x10);
LAB_1437ab11f:
  this->MDirtyValidationCount = this->MDirtyValidationCount + 1;
  return;
}

// SetX @ 1437b07e0

void __thiscall
Chaos::TParticles<double,3>::SetX(TParticles<double,3> *this,int param_1,TVector<double,3> *param_2)

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
  if (param_1 < *(int *)&(this->MX).field_0x10) {
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
  lVar3 = *(longlong *)&(this->MX).field_0x8;
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  *(undefined8 *)(lVar3 + 0x10 + (longlong)param_1 * 0x18) = uVar2;
  return;
}

// Serialize @ 143a913f0

void __thiscall Chaos::TParticles<float,3>::Serialize(TParticles<float,3> *this,FArchive *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  bool bVar4;
  uint local_res8 [2];
  
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_res8[0] = (uint)((param_1->field_0x28 & 1) == 0);
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar2 = local_res8[0];
    if ((param_1->field_0x28 & 1) != 0) goto LAB_143a91463;
  }
  else {
    uVar2 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
LAB_143a91463:
    if ((uVar2 == 0) &&
       (bVar4 = `Chaos::TParticles<float,3>::Serialize'::__l3::<lambda_1>::operator()(local_res8),
       !bVar4)) goto LAB_143a9148f;
  }
  TArrayPrivateFriend::Serialize<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                     &(this->MX).field_0x8);
  TArrayCollection::ResizeHelper((TArrayCollection *)this,*(int *)&(this->MX).field_0x10);
LAB_143a9148f:
  this->MDirtyValidationCount = this->MDirtyValidationCount + 1;
  return;
}

// SetX @ 143a933b0

void __thiscall
Chaos::TParticles<float,3>::SetX(TParticles<float,3> *this,int param_1,TVector<float,3> *param_2)

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
  if (param_1 < *(int *)&(this->MX).field_0x10) {
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
  lVar3 = *(longlong *)&(this->MX).field_0x8;
  *(undefined8 *)(lVar3 + (longlong)param_1 * 0xc) = uVar1;
  *(undefined4 *)(lVar3 + 8 + (longlong)param_1 * 0xc) = uVar2;
  return;
}

// TParticles<float,3> @ 143af8e60

TParticles<float,3> * __thiscall
Chaos::TParticles<float,3>::TParticles<float,3>
          (TParticles<float,3> *this,TParticles<float,3> *param_1)

{
  int iVar1;
  
  this->_padding_ = (longlong)&___7__TParticles_M_02_Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined ***)&this->MX = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MX).field_0x8 = 0;
  *(undefined8 *)&(this->MX).field_0x8 = *(undefined8 *)&(param_1->MX).field_0x8;
  *(undefined8 *)&(param_1->MX).field_0x8 = 0;
  *(undefined4 *)&(this->MX).field_0x10 = *(undefined4 *)&(param_1->MX).field_0x10;
  *(undefined4 *)&(this->MX).field_0x14 = *(undefined4 *)&(param_1->MX).field_0x14;
  *(undefined8 *)&(param_1->MX).field_0x10 = 0;
  *(undefined ***)&this->MX = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  this->MRemoveParticleBehavior = param_1->MRemoveParticleBehavior;
  iVar1 = (int)param_1->_padding_;
  if (iVar1 != 0) {
    TArrayCollection::ResizeHelper((TArrayCollection *)this,(int)this->_padding_ + iVar1);
  }
  this->MDirtyValidationCount = this->MDirtyValidationCount + 1;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MX);
  *(undefined4 *)&param_1->_padding_ = 0;
  this->MDirtyValidationCount = 0;
  return this;
}

// X @ 143e62ce0

TVector<float,3> * __thiscall Chaos::TParticles<float,3>::X(TParticles<float,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MX).field_0x10) {
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
  return (TVector<float,3> *)(*(longlong *)&(this->MX).field_0x8 + (longlong)param_1 * 0xc);
}

// TParticles<double,3> @ 1440fc630

TParticles<double,3> * __thiscall
Chaos::TParticles<double,3>::TParticles<double,3>(TParticles<double,3> *this)

{
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TParticles_N_02_Chaos__6B_;
  this->_padding_ = 0;
  *(undefined ***)&this->MX = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)&(this->MX).field_0x8 = 0;
  *(undefined8 *)&(this->MX).field_0x10 = 0;
  this->MRemoveParticleBehavior = RemoveAtSwap;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MX);
  this->MDirtyValidationCount = 0;
  return this;
}

// operator() @ 1504a2a30

bool __thiscall `Chaos::TParticles<float,3>::Serialize'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1100484931789783166>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1100484931789783166>,
                       &`public:___cdecl_`public:_void___cdecl_Chaos::TParticles<float,3>::Serialize(FArchive&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a2a70

bool __thiscall `Chaos::TParticles<double,3>::Serialize'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1100484931789783166>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1100484931789783166>,
                       &`public:___cdecl_`public:_void___cdecl_Chaos::TParticles<double,3>::Serialize(FArchive&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

