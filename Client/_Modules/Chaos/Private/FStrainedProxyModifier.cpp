// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 14

// operator() @ 143e00b40

void __thiscall
`Chaos::FStrainedProxyModifier::AdjustStrainForBreak'::__l2::<lambda_1>::operator()
          (void *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  float fVar1;
  byte bVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
  pfVar3 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetInternalStrains(param_1);
  bVar2 = *(byte *)((longlong)this + 0x10);
  fVar5 = 0.0;
  fVar1 = *pfVar3;
  if ((bVar2 & 4) == 0) {
    fVar4 = 0.0;
  }
  else {
    pfVar3 = Chaos::TPBDRigidClusteredParticles<double,3>::CollisionImpulses
                       (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                        *(int *)&param_1->field_0x8);
    fVar4 = *pfVar3;
  }
  if ((bVar2 & 2) != 0) {
    fVar5 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetExternalStrain(param_1);
  }
  if (fVar5 <= fVar4) {
    fVar5 = fVar4;
  }
  fVar4 = fVar1 * *(float *)((longlong)this + 8);
  if (fVar4 <= *(float *)((longlong)this + 0xc)) {
    fVar4 = *(float *)((longlong)this + 0xc);
  }
  if (fVar4 <= fVar5) {
    Chaos::FRigidClustering::SetExternalStrain
              ((FRigidClustering *)**(undefined8 **)this,param_1,fVar1);
  }
  return;
}

// operator() @ 143e00d70

void __thiscall
`Chaos::FStrainedProxyModifier::GetMaxBreakStrainRatio'::__l2::<lambda_1>::operator()
          (void *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  byte bVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pfVar2 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetInternalStrains(param_1);
  bVar1 = *(byte *)((longlong)this + 0x19);
  fVar5 = *pfVar2;
  if ((bVar1 & 4) == 0) {
    fVar4 = 0.0;
  }
  else {
    pfVar2 = Chaos::TPBDRigidClusteredParticles<double,3>::CollisionImpulses
                       (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                        *(int *)&param_1->field_0x8);
    fVar4 = *pfVar2;
  }
  if ((bVar1 & 2) == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetExternalStrain(param_1);
  }
  if (fVar3 <= fVar4) {
    fVar3 = fVar4;
  }
  fVar4 = fVar5 * *(float *)((longlong)this + 0x10);
  if (fVar4 <= *(float *)((longlong)this + 0x14)) {
    fVar4 = *(float *)((longlong)this + 0x14);
  }
  if (fVar4 <= fVar3) {
    if (*(char *)((longlong)this + 0x18) != '\0') {
      fVar5 = fVar5 - fVar4;
      fVar3 = fVar3 - fVar4;
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
    }
    fVar4 = __real_3f800000;
    if (__real_322bcc77 < fVar5) {
      fVar4 = fVar3 / fVar5;
    }
    fVar5 = **(float **)((longlong)this + 8);
    if (fVar5 <= fVar4) {
      fVar5 = fVar4;
    }
    **(float **)((longlong)this + 8) = fVar5;
  }
  return;
}

// operator() @ 143e00e60

void __thiscall
`Chaos::FStrainedProxyModifier::GetNumBreakingStrains'::__l2::<lambda_1>::operator()
          (void *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  float fVar1;
  byte bVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
  pfVar3 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetInternalStrains(param_1);
  fVar4 = 0.0;
  fVar1 = *pfVar3;
  bVar2 = **(byte **)((longlong)this + 0x18);
  if ((bVar2 & 4) == 0) {
    fVar5 = 0.0;
  }
  else {
    pfVar3 = Chaos::TPBDRigidClusteredParticles<double,3>::CollisionImpulses
                       (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                        *(int *)&param_1->field_0x8);
    fVar5 = *pfVar3;
  }
  if ((bVar2 & 2) != 0) {
    fVar4 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetExternalStrain(param_1);
  }
  if (fVar4 <= fVar5) {
    fVar4 = fVar5;
  }
  if ((**(char **)((longlong)this + 0x10) == '\0') || (fVar1 <= __real_322bcc77)) {
    if (fVar1 <= fVar4) {
      **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
    }
  }
  else {
    **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + (int)(fVar4 / fVar1);
  }
  return;
}

// operator() @ 143e00f20

void __thiscall
`Chaos::FStrainedProxyModifier::GetStrainUsedForBreakRatio'::__l2::<lambda_1>::operator()
          (void *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  byte bVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pfVar2 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetInternalStrains(param_1);
  bVar1 = *(byte *)((longlong)this + 0x21);
  fVar6 = *pfVar2;
  if ((bVar1 & 4) == 0) {
    fVar5 = 0.0;
  }
  else {
    pfVar2 = Chaos::TPBDRigidClusteredParticles<double,3>::CollisionImpulses
                       (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                        *(int *)&param_1->field_0x8);
    fVar5 = *pfVar2;
  }
  if ((bVar1 & 2) == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetExternalStrain(param_1);
  }
  if (fVar3 <= fVar5) {
    fVar3 = fVar5;
  }
  fVar5 = fVar6 * *(float *)((longlong)this + 0x18);
  if (fVar5 <= *(float *)((longlong)this + 0x1c)) {
    fVar5 = *(float *)((longlong)this + 0x1c);
  }
  if (fVar5 <= fVar3) {
    fVar4 = fVar3;
    if (*(char *)((longlong)this + 0x20) != '\0') {
      fVar6 = fVar6 - fVar5;
      fVar4 = fVar3 - fVar5;
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
    }
    fVar5 = __real_3f800000;
    if (__real_322bcc77 < fVar6) {
      fVar5 = fVar4 / fVar6;
    }
    pfVar2 = *(float **)((longlong)this + 8);
    if (*pfVar2 <= fVar5 && fVar5 != *pfVar2) {
      *pfVar2 = fVar5;
      **(float **)((longlong)this + 0x10) = fVar3;
    }
  }
  return;
}

// AdjustStrainForBreak @ 143e0c2c0

void __thiscall
Chaos::FStrainedProxyModifier::AdjustStrainForBreak
          (FStrainedProxyModifier *this,float param_1,float param_2,uchar param_3)

{
  undefined7 uStack_37;
  <lambda_1> local_28;
  
  local_28._17_7_ = uStack_37;
  local_28.StrainTypes = param_3;
  local_28.FatigueThresholdPercent = param_1;
  local_28.FatigueThresholdMinimum = param_2;
  local_28.__this = this;
  ForEachRootChildParticle<_Chaos::FStrainedProxyModifier::AdjustStrainForBreak_::__l2::<lambda_1>_>
            (&this->ProxyAndRoot,this->RestChildren,&local_28);
  return;
}

// ClearStrains @ 143e14cb0

void __thiscall Chaos::FStrainedProxyModifier::ClearStrains(FStrainedProxyModifier *this)

{
  ForEachRootChildParticle<_Chaos::FStrainedProxyModifier::ClearStrains_::__l2::<lambda_1>_>
            (&this->ProxyAndRoot,this->RestChildren,(<lambda_1>)this);
  return;
}

// GetMaxBreakStrainRatio @ 143e2a050

float __thiscall
Chaos::FStrainedProxyModifier::GetMaxBreakStrainRatio
          (FStrainedProxyModifier *this,float param_1,float param_2,bool param_3,uchar param_4)

{
  float local_res20 [2];
  bool bStack_30;
  uchar uStack_2f;
  undefined2 uStack_2e;
  <lambda_1> local_28;
  
  local_28.MaxBreakStrainRatio = local_res20;
  local_res20[0] = 0.0;
  local_28.bRelative = param_3;
  local_28.StrainTypes = param_4;
  local_28._26_2_ = uStack_2e;
  local_28.__this = this;
  local_28.FatigueThresholdPercent = param_1;
  local_28.FatigueThresholdMinimum = param_2;
  ForEachRootChildParticle<_Chaos::FStrainedProxyModifier::GetMaxBreakStrainRatio_::__l2::<lambda_1>_>
            (&this->ProxyAndRoot,this->RestChildren,&local_28);
  return local_res20[0];
}

// GetNumBreakingStrains @ 143e2ac20

int __thiscall
Chaos::FStrainedProxyModifier::GetNumBreakingStrains
          (FStrainedProxyModifier *this,bool param_1,uchar param_2)

{
  int local_res8 [2];
  bool local_res10 [8];
  uchar local_res18 [16];
  <lambda_1> local_28;
  
  local_28.NumBreakingStrains = local_res8;
  local_res8[0] = 0;
  local_28.bDoubleCount = local_res10;
  local_28.StrainTypes = local_res18;
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  local_28.__this = this;
  ForEachRootChildParticle<_Chaos::FStrainedProxyModifier::GetNumBreakingStrains_::__l2::<lambda_1>_>
            (&this->ProxyAndRoot,this->RestChildren,&local_28);
  return local_res8[0];
}

// GetNumRestBreakables @ 143e2ac80

int __thiscall Chaos::FStrainedProxyModifier::GetNumRestBreakables(FStrainedProxyModifier *this)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  
  pTVar1 = this->RestChildren;
  if (pTVar1 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    return *(int *)&(pTVar1->Elements).field_0x8 - *(int *)&(pTVar1->Elements).field_0x34;
  }
  return 1;
}

// GetOriginalRootHandle @ 143e2acf0

TPBDRigidParticleHandleImp<double,3,1> * __thiscall
Chaos::FStrainedProxyModifier::GetOriginalRootHandle(FStrainedProxyModifier *this)

{
  uint uVar1;
  FGeometryCollectionPhysicsProxy *pFVar2;
  code *pcVar3;
  bool bVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  uint uVar6;
  
  pFVar2 = (this->ProxyAndRoot).Proxy;
  if ((pFVar2 == (FGeometryCollectionPhysicsProxy *)0x0) || (*(int *)&pFVar2->field_0x1c != 2)) {
    return (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  }
  uVar1 = (pFVar2->Parameters).InitialRootIndex;
  uVar6 = 0;
  if ((int)uVar1 < (pFVar2->FromTransformToParticleIndex).ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TPBDRigidParticleHandleImp<double,3,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  uVar1 = *(uint *)((pFVar2->FromTransformToParticleIndex).AllocatorInstance.Data +
                   (longlong)(int)uVar1 * 4);
  if ((-1 < (int)uVar1) && ((int)uVar1 < (pFVar2->SolverParticleHandles).ArrayNum)) {
    uVar6 = 0;
    if ((int)uVar1 < (pFVar2->SolverParticleHandles).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TPBDRigidParticleHandleImp<double,3,1> *)(*pcVar3)();
        return pTVar5;
      }
    }
    return *(TPBDRigidParticleHandleImp<double,3,1> **)
            ((pFVar2->SolverParticleHandles).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  }
  return (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
}

// GetParticleHandle @ 143e2ad10

TPBDRigidParticleHandleImp<double,3,1> * __thiscall
Chaos::FStrainedProxyModifier::GetParticleHandle(FStrainedProxyModifier *this)

{
  return (TPBDRigidParticleHandleImp<double,3,1> *)(this->ProxyAndRoot).ParticleHandle;
}

// GetProxy @ 143e2bd80

IPhysicsProxyBase * __thiscall Chaos::FStrainedProxyModifier::GetProxy(FStrainedProxyModifier *this)

{
  return (IPhysicsProxyBase *)(this->ProxyAndRoot).Proxy;
}

// GetStrainUsedForBreakRatio @ 143e2ca70

float __thiscall
Chaos::FStrainedProxyModifier::GetStrainUsedForBreakRatio
          (FStrainedProxyModifier *this,float param_1,float param_2,bool param_3,uchar param_4)

{
  float local_res10 [4];
  float local_res20 [2];
  undefined6 uStack_46;
  <lambda_1> local_38;
  
  local_38.MaxBreakStrainRatio = local_res10;
  local_38.StrainForBreakRatio = local_res20;
  local_res10[0] = 0.0;
  local_38.StrainTypes = param_4;
  local_38.bRelative = param_3;
  local_38._34_6_ = uStack_46;
  local_res20[0] = 0.0;
  local_38.__this = this;
  local_38.FatigueThresholdPercent = param_1;
  local_38.FatigueThresholdMinimum = param_2;
  ForEachRootChildParticle<_Chaos::FStrainedProxyModifier::GetStrainUsedForBreakRatio_::__l2::<lambda_1>_>
            (&this->ProxyAndRoot,this->RestChildren,&local_38);
  return local_res20[0];
}

// InitRestChildren @ 143e32df0

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __cdecl
Chaos::FStrainedProxyModifier::InitRestChildren(FGeometryCollectionPhysicsProxy *param_1)

{
  uint uVar1;
  FGeometryCollection *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  
  if (param_1 != (FGeometryCollectionPhysicsProxy *)0x0) {
    uVar1 = (param_1->Parameters).InitialRootIndex;
    if (uVar1 != 0xffffffff) {
      if ((param_1->Parameters).RestCollectionShared.Object == (FGeometryCollection *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar3)();
          return pTVar6;
        }
      }
      pFVar2 = (param_1->Parameters).RestCollectionShared.Object;
      uVar5 = 0;
      if ((int)uVar1 < (int)pFVar2->_padding_) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar3)();
          return pTVar6;
        }
      }
      return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             ((longlong)(int)uVar1 * 0x50 + pFVar2->_padding_);
    }
  }
  return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
}

