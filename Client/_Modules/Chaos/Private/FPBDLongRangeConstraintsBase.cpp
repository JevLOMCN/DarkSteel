// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// GetDelta<Chaos::Softs::FSolverParticles> @ 143c836c0

TVector<float,3> * __thiscall
Chaos::Softs::FPBDLongRangeConstraintsBase::GetDelta<Chaos::Softs::FSolverParticles>
          (FPBDLongRangeConstraintsBase *this,TVector<float,3> *__return_storage_ptr__,
          FSolverParticles *param_1,TTuple<int,int,float> *param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  TVector<float,3> *pTVar4;
  TVector<float,3> *pTVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_38;
  float local_30;
  
  iVar2 = *(int *)&param_2->field_0x4;
  iVar3 = this->ParticleOffset;
  fVar1 = *(float *)&param_2->field_0x8;
  pTVar4 = FSolverParticles::P(param_1,*(int *)param_2 + this->ParticleOffset);
  pTVar5 = FSolverParticles::P(param_1,iVar2 + iVar3);
  fVar10 = *(float *)&pTVar4->field_0x4 - *(float *)&pTVar5->field_0x4;
  fVar8 = *(float *)pTVar4 - *(float *)pTVar5;
  fVar9 = *(float *)&pTVar4->field_0x8 - *(float *)&pTVar5->field_0x8;
  fVar7 = fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9;
  fVar6 = 0.0;
  if (__real_38d1b717 <= fVar7) {
    fVar6 = SQRT(fVar7);
    local_30 = __real_3f800000 / fVar6;
    fVar8 = local_30 * fVar8;
    fVar10 = local_30 * fVar10;
    local_30 = local_30 * fVar9;
  }
  else {
    fVar10 = 0.0;
    local_30 = 0.0;
    fVar8 = __real_3f800000;
  }
  fVar6 = fVar6 - param_3 * fVar1;
  if (0.0 <= fVar6) {
    local_30 = local_30 * fVar6;
    local_38 = CONCAT44(fVar10 * fVar6,fVar8 * fVar6);
  }
  else {
    local_38 = 0;
    local_30 = 0.0;
  }
  *(undefined8 *)__return_storage_ptr__ = local_38;
  *(float *)&__return_storage_ptr__->field_0x8 = local_30;
  return __return_storage_ptr__;
}

// GetDelta<Chaos::Softs::FSolverParticlesRange> @ 143c83810

TVector<float,3> * __thiscall
Chaos::Softs::FPBDLongRangeConstraintsBase::GetDelta<Chaos::Softs::FSolverParticlesRange>
          (FPBDLongRangeConstraintsBase *this,TVector<float,3> *__return_storage_ptr__,
          FSolverParticlesRange *param_1,TTuple<int,int,float> *param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  TVector<float,3> *pTVar8;
  TVector<float,3> *pTVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_48 [4];
  float local_38;
  float local_34;
  
  iVar2 = *(int *)param_2;
  iVar3 = *(int *)&param_2->field_0x4;
  iVar4 = this->ParticleOffset;
  iVar5 = this->ParticleOffset;
  fVar1 = *(float *)&param_2->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x56,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TVector<float,3> *)(*pcVar6)();
      return pTVar8;
    }
  }
  pTVar8 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                               *(int *)&param_1->field_0x10 + iVar2 + iVar4);
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x56,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TVector<float,3> *)(*pcVar6)();
      return pTVar8;
    }
  }
  pTVar9 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                               *(int *)&param_1->field_0x10 + iVar3 + iVar5);
  fVar15 = *(float *)&pTVar8->field_0x4 - *(float *)&pTVar9->field_0x4;
  fVar13 = *(float *)pTVar8 - *(float *)pTVar9;
  fVar14 = *(float *)&pTVar8->field_0x8 - *(float *)&pTVar9->field_0x8;
  fVar12 = fVar13 * fVar13 + fVar15 * fVar15 + fVar14 * fVar14;
  fVar11 = 0.0;
  if (__real_38d1b717 <= fVar12) {
    fVar11 = SQRT(fVar12);
    fVar12 = __real_3f800000 / fVar11;
    fVar13 = fVar12 * fVar13;
    fVar15 = fVar12 * fVar15;
    fVar12 = fVar12 * fVar14;
  }
  else {
    fVar15 = 0.0;
    fVar12 = 0.0;
    fVar13 = __real_3f800000;
  }
  fVar11 = fVar11 - param_3 * fVar1;
  if (0.0 <= fVar11) {
    pfVar10 = local_48 + 3;
    local_48[3] = fVar13 * fVar11;
    local_38 = fVar15 * fVar11;
    local_34 = fVar12 * fVar11;
  }
  else {
    local_48[0] = 0.0;
    local_48[1] = 0.0;
    pfVar10 = local_48;
    local_48[2] = 0.0;
  }
  fVar13 = pfVar10[1];
  fVar1 = pfVar10[2];
  *(float *)&__return_storage_ptr__->field_0x0 = pfVar10[0];
  *(float *)&__return_storage_ptr__->field_0x4 = fVar13;
  *(float *)&__return_storage_ptr__->field_0x8 = fVar1;
  return __return_storage_ptr__;
}

// FPBDLongRangeConstraintsBase @ 143c87e80

FPBDLongRangeConstraintsBase * __thiscall
Chaos::Softs::FPBDLongRangeConstraintsBase::FPBDLongRangeConstraintsBase
          (FPBDLongRangeConstraintsBase *this,FSolverParticles *param_1,int param_2,int param_3,
          TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_> *param_4,
          TArrayView<float_const_,int> *param_5,TArrayView<float_const_,int> *param_6,
          TVector<float,2> *param_7,TVector<float,2> *param_8,float param_9,float param_10)

{
  float fVar1;
  float fVar2;
  
  fVar1 = __real_447a0000;
  this->_padding_ = (longlong)&___7FPBDLongRangeConstraintsBase_Softs_Chaos__6B_;
  this->ParticleOffset = param_2;
  this->Tethers = param_4;
  this->ParticleCount = param_3;
  FPBDStiffness::FPBDStiffness(&this->Stiffness,param_7,param_5,param_3,0x10,fVar1,param_9);
  fVar1 = *(float *)param_8;
  if (__real_41200000 <= *(float *)param_8) {
    fVar1 = __real_41200000;
  }
  if (fVar1 <= __real_3c23d70a) {
    fVar1 = __real_3c23d70a;
  }
  fVar2 = *(float *)&param_8->field_0x4;
  if (__real_41200000 <= *(float *)&param_8->field_0x4) {
    fVar2 = __real_41200000;
  }
  if (fVar2 <= __real_3c23d70a) {
    fVar2 = __real_3c23d70a;
  }
  param_4 = (TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_> *)
            CONCAT44(fVar2 * param_10,fVar1 * param_10);
  FPBDWeightMap::FPBDWeightMap(&this->TetherScale,(TVector<float,2> *)&param_4,param_6,param_3,0x10)
  ;
  FPBDStiffness::ApplyPBDValues(&this->Stiffness,__real_3c088889,1);
  FPBDWeightMap::ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
            (&this->TetherScale,(<lambda_1> *)&param_10,(bool *)0x0);
  return this;
}

// FPBDLongRangeConstraintsBase @ 143c87fc0

FPBDLongRangeConstraintsBase * __thiscall
Chaos::Softs::FPBDLongRangeConstraintsBase::FPBDLongRangeConstraintsBase
          (FPBDLongRangeConstraintsBase *this,FSolverParticlesRange *param_1,
          TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_> *param_2,
          TArrayView<float_const_,int> *param_3,TArrayView<float_const_,int> *param_4,
          TVector<float,2> *param_5,TVector<float,2> *param_6,float param_7,float param_8)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = __real_447a0000;
  this->_padding_ = (longlong)&___7FPBDLongRangeConstraintsBase_Softs_Chaos__6B_;
  this->Tethers = param_2;
  this->ParticleOffset = 0;
  iVar1 = *(int *)&param_1->field_0x14;
  this->ParticleCount = iVar1;
  FPBDStiffness::FPBDStiffness(&this->Stiffness,param_5,param_3,iVar1,0x10,fVar2,param_7);
  fVar2 = *(float *)param_6;
  if (__real_41200000 <= *(float *)param_6) {
    fVar2 = __real_41200000;
  }
  if (fVar2 <= __real_3c23d70a) {
    fVar2 = __real_3c23d70a;
  }
  fVar3 = *(float *)&param_6->field_0x4;
  if (__real_41200000 <= *(float *)&param_6->field_0x4) {
    fVar3 = __real_41200000;
  }
  if (fVar3 <= __real_3c23d70a) {
    fVar3 = __real_3c23d70a;
  }
  param_6 = (TVector<float,2> *)CONCAT44(fVar3 * param_8,fVar2 * param_8);
  FPBDWeightMap::FPBDWeightMap
            (&this->TetherScale,(TVector<float,2> *)&param_6,param_4,this->ParticleCount,0x10);
  FPBDStiffness::ApplyPBDValues(&this->Stiffness,__real_3c088889,1);
  FPBDWeightMap::ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
            (&this->TetherScale,(<lambda_1> *)&param_8,(bool *)0x0);
  return this;
}

// ~FPBDLongRangeConstraintsBase @ 143c892d0

void __thiscall
Chaos::Softs::FPBDLongRangeConstraintsBase::~FPBDLongRangeConstraintsBase
          (FPBDLongRangeConstraintsBase *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FPBDLongRangeConstraintsBase_Softs_Chaos__6B_;
  pFVar1 = (this->TetherScale).Table.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TetherScale).Indices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->Stiffness)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->Stiffness)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

// GetMinParallelBatchSize @ 143c9fdf0

int __cdecl Chaos::Softs::FPBDLongRangeConstraintsBase::GetMinParallelBatchSize(void)

{
  return ChaosPBDLongRangeConstraintsMinParallelBatchSize;
}

