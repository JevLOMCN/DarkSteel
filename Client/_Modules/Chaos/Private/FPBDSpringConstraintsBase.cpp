// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// GetDelta<Chaos::Softs::FSolverParticles> @ 143d8bc60

TVector<float,3> * __thiscall
Chaos::Softs::FPBDSpringConstraintsBase::GetDelta<Chaos::Softs::FSolverParticles>
          (FPBDSpringConstraintsBase *this,TVector<float,3> *__return_storage_ptr__,
          FSolverParticles *param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<float,3> *pTVar7;
  TVector<float,3> *pTVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar9 = (longlong)param_2;
  uVar6 = 0;
  if (param_2 < (this->Constraints).ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TVector<float,3> *)(*pcVar4)();
    return pTVar7;
  }
  pFVar3 = (this->Constraints).AllocatorInstance.Data;
  iVar1 = *(int *)(pFVar3 + lVar9 * 8);
  iVar2 = *(int *)(pFVar3 + lVar9 * 8 + 4);
  fVar10 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar2);
  fVar17 = 0.0;
  if ((fVar10 == 0.0) &&
     (fVar10 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar1),
     fVar10 == 0.0)) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
    return __return_storage_ptr__;
  }
  fVar11 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar2);
  fVar12 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar1);
  pTVar7 = FSolverParticles::P(param_1,iVar1);
  pTVar8 = FSolverParticles::P(param_1,iVar2);
  fVar10 = __real_3f800000;
  fVar15 = *(float *)&pTVar7->field_0x4 - *(float *)&pTVar8->field_0x4;
  fVar16 = *(float *)pTVar7 - *(float *)pTVar8;
  fVar14 = *(float *)&pTVar7->field_0x8 - *(float *)&pTVar8->field_0x8;
  fVar13 = fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14;
  if (__real_38d1b717 <= fVar13) {
    fVar17 = SQRT(fVar13);
    fVar13 = __real_3f800000 / fVar17;
    fVar16 = fVar13 * fVar16;
    fVar15 = fVar13 * fVar15;
    fVar13 = fVar13 * fVar14;
  }
  else {
    fVar15 = 0.0;
    fVar13 = 0.0;
    fVar16 = __real_3f800000;
  }
  uVar6 = 0;
  if (param_2 < (this->Dists).ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TVector<float,3> *)(*pcVar4)();
    return pTVar7;
  }
  fVar10 = fVar10 / (fVar11 + fVar12);
  fVar17 = fVar17 - *(float *)((this->Dists).AllocatorInstance.Data + lVar9 * 4);
  *(float *)&__return_storage_ptr__->field_0x8 = fVar10 * param_3 * fVar17 * fVar13;
  *(float *)&__return_storage_ptr__->field_0x4 = fVar10 * param_3 * fVar17 * fVar15;
  *(float *)__return_storage_ptr__ = fVar10 * param_3 * fVar17 * fVar16;
  return __return_storage_ptr__;
}

// GetDelta<Chaos::Softs::FSolverParticlesRange> @ 143d8bee0

TVector<float,3> * __thiscall
Chaos::Softs::FPBDSpringConstraintsBase::GetDelta<Chaos::Softs::FSolverParticlesRange>
          (FPBDSpringConstraintsBase *this,TVector<float,3> *__return_storage_ptr__,
          FSolverParticlesRange *param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<float,3> *pTVar7;
  TVector<float,3> *pTVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar9 = (longlong)param_2;
  uVar6 = 0;
  if (param_2 < (this->Constraints).ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TVector<float,3> *)(*pcVar4)();
    return pTVar7;
  }
  pFVar3 = (this->Constraints).AllocatorInstance.Data;
  iVar1 = *(int *)(pFVar3 + lVar9 * 8);
  iVar2 = *(int *)(pFVar3 + lVar9 * 8 + 4);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TVector<float,3> *)(*pcVar4)();
    return pTVar7;
  }
  fVar10 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      iVar2 + *(int *)&param_1->field_0x10);
  fVar17 = 0.0;
  if (fVar10 == 0.0) {
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x56,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<float,3> *)(*pcVar4)();
      return pTVar7;
    }
    fVar10 = TDynamicParticles<float,3>::InvM
                       (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                        *(int *)&param_1->field_0x10 + iVar1);
    if (fVar10 == 0.0) {
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
      return __return_storage_ptr__;
    }
  }
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TVector<float,3> *)(*pcVar4)();
    return pTVar7;
  }
  fVar10 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      iVar2 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TVector<float,3> *)(*pcVar4)();
    return pTVar7;
  }
  fVar11 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      *(int *)&param_1->field_0x10 + iVar1);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TVector<float,3> *)(*pcVar4)();
    return pTVar7;
  }
  pTVar7 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                               *(int *)&param_1->field_0x10 + iVar1);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TVector<float,3> *)(*pcVar4)();
    return pTVar7;
  }
  pTVar8 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                               iVar2 + *(int *)&param_1->field_0x10);
  fVar16 = __real_3f800000;
  fVar14 = *(float *)&pTVar7->field_0x4 - *(float *)&pTVar8->field_0x4;
  fVar15 = *(float *)pTVar7 - *(float *)pTVar8;
  fVar13 = *(float *)&pTVar7->field_0x8 - *(float *)&pTVar8->field_0x8;
  fVar12 = fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13;
  if (__real_38d1b717 <= fVar12) {
    fVar17 = SQRT(fVar12);
    fVar12 = __real_3f800000 / fVar17;
    fVar15 = fVar12 * fVar15;
    fVar14 = fVar12 * fVar14;
    fVar12 = fVar12 * fVar13;
  }
  else {
    fVar14 = 0.0;
    fVar12 = 0.0;
    fVar15 = __real_3f800000;
  }
  uVar6 = 0;
  if (param_2 < (this->Dists).ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TVector<float,3> *)(*pcVar4)();
    return pTVar7;
  }
  fVar16 = fVar16 / (fVar11 + fVar10);
  fVar17 = fVar17 - *(float *)((this->Dists).AllocatorInstance.Data + lVar9 * 4);
  *(float *)&__return_storage_ptr__->field_0x8 = fVar16 * param_3 * fVar12 * fVar17;
  *(float *)__return_storage_ptr__ = fVar16 * param_3 * fVar15 * fVar17;
  *(float *)&__return_storage_ptr__->field_0x4 = fVar16 * param_3 * fVar14 * fVar17;
  return __return_storage_ptr__;
}

// ~FPBDSpringConstraintsBase @ 143d92a20

void __thiscall
Chaos::Softs::FPBDSpringConstraintsBase::~FPBDSpringConstraintsBase(FPBDSpringConstraintsBase *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FPBDSpringConstraintsBase_Softs_Chaos__6B_;
  pvVar1 = (void *)(this->Stiffness)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->Stiffness)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->Dists).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Constraints).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// CalculateRestLengths @ 143da2e80

void __thiscall
Chaos::Softs::FPBDSpringConstraintsBase::CalculateRestLengths
          (FPBDSpringConstraintsBase *this,TArrayView<Chaos::TVector<float,3>_const_,int> *param_1,
          TArrayView<float,int> *param_2)

{
  float fVar1;
  float fVar2;
  TVector<float,3> *pTVar3;
  TVector<float,3> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  
  if ((param_2->ArrayNum != (this->Constraints).ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DistsToCompute.Num() == Constraints.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSpringConstraintsBase.h"
                         ,0x7a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar10 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      uVar11 = ~uVar10 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar10 < (this->Constraints).ArrayNum) {
        uVar7 = uVar11;
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
      uVar7 = *(uint *)((this->Constraints).AllocatorInstance.Data + lVar12);
      uVar8 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar3 = param_1->DataPtr;
      uVar8 = 0;
      if ((int)uVar10 < (this->Constraints).ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = *(uint *)((this->Constraints).AllocatorInstance.Data + lVar12 + 4);
      uVar9 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar4 = param_1->DataPtr;
      fVar14 = *(float *)&pTVar3[(int)uVar7].field_0x4 - *(float *)&pTVar4[(int)uVar8].field_0x4;
      fVar1 = *(float *)(pTVar3 + (int)uVar7);
      fVar2 = *(float *)(pTVar4 + (int)uVar8);
      fVar15 = *(float *)&pTVar3[(int)uVar7].field_0x8 - *(float *)&pTVar4[(int)uVar8].field_0x8;
      uVar7 = 0;
      if ((int)uVar10 < param_2->ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 8;
      *(float *)(lVar13 + (longlong)param_2->DataPtr) =
           SQRT((fVar1 - fVar2) * (fVar1 - fVar2) + fVar14 * fVar14 + fVar15 * fVar15);
      lVar13 = lVar13 + 4;
    } while ((int)uVar10 < (this->Constraints).ArrayNum);
  }
  return;
}

// FPBDSpringConstraintsBase<3> @ 143ee6a50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPBDSpringConstraintsBase * __thiscall
Chaos::Softs::FPBDSpringConstraintsBase::FPBDSpringConstraintsBase<3>
          (FPBDSpringConstraintsBase *this,FSolverParticles *param_1,int param_2,int param_3,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_4,
          TArrayView<float_const_,int> *param_5,TVector<float,2> *param_6,bool param_7,float param_8
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPBDSpringConstraintsBase *pFVar4;
  undefined7 uStack_5f;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_58;
  TArrayView<float,int> local_48;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_38;
  <lambda_8_> local_28;
  
  this->_padding_ = (longlong)&___7FPBDSpringConstraintsBase_Softs_Chaos__6B_;
  local_28._9_7_ = uStack_5f;
  local_28.bTrimKinematicConstraints = param_7;
  local_28.Particles = param_1;
  TrimConstraints<3,_Chaos::Softs::FPBDSpringConstraintsBase::FPBDSpringConstraintsBase<3>_::__l1::<lambda_8_>_>
            (this,&this->Constraints,param_4,&local_28);
  this->ParticleOffset = param_2;
  (this->Dists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Dists).ArrayNum = 0;
  (this->Dists).ArrayMax = 0;
  this->ParticleCount = param_3;
  local_58.DataPtr = (TVector<int,2> *)(this->Constraints).AllocatorInstance.Data;
  local_58.ArrayNum = (this->Constraints).ArrayNum;
  if (local_58.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDSpringConstraintsBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  FPBDStiffness::FPBDStiffness<2>
            (&this->Stiffness,param_6,param_5,&local_58,param_2,param_3,0x10,__real_447a0000,param_8
            );
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->Dists,(this->Constraints).ArrayNum,Default);
  local_48.DataPtr = (float *)(this->Dists).AllocatorInstance.Data;
  local_48.ArrayNum = (this->Dists).ArrayNum;
  if (local_48.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDSpringConstraintsBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_38.DataPtr = (TVector<float,3> *)param_1->_padding_;
  iVar1 = (int)param_1->_padding_;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDSpringConstraintsBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_38.ArrayNum = iVar1;
  CalculateRestLengths(this,&local_38,&local_48);
  return this;
}

// FPBDSpringConstraintsBase<3> @ 143ee6c10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPBDSpringConstraintsBase * __thiscall
Chaos::Softs::FPBDSpringConstraintsBase::FPBDSpringConstraintsBase<3>
          (FPBDSpringConstraintsBase *this,FSolverParticlesRange *param_1,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_2,
          TArrayView<float_const_,int> *param_3,TVector<float,2> *param_4,bool param_5,float param_6
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPBDSpringConstraintsBase *pFVar4;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar5;
  undefined7 uStack_5f;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_58;
  TArrayView<float,int> local_48;
  <lambda_7_> local_38;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_28;
  
  this->_padding_ = (longlong)&___7FPBDSpringConstraintsBase_Softs_Chaos__6B_;
  local_38._9_7_ = uStack_5f;
  local_38.bTrimKinematicConstraints = param_5;
  local_38.Particles = param_1;
  TrimConstraints<3,_Chaos::Softs::FPBDSpringConstraintsBase::FPBDSpringConstraintsBase<3>_::__l1::<lambda_7_>_>
            (this,&this->Constraints,param_2,&local_38);
  (this->Dists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Dists).ArrayNum = 0;
  (this->Dists).ArrayMax = 0;
  this->ParticleOffset = 0;
  iVar1 = *(int *)&param_1->field_0x14;
  this->ParticleCount = iVar1;
  local_58.DataPtr = (TVector<int,2> *)(this->Constraints).AllocatorInstance.Data;
  local_58.ArrayNum = (this->Constraints).ArrayNum;
  if (local_58.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDSpringConstraintsBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  FPBDStiffness::FPBDStiffness<2>
            (&this->Stiffness,param_4,param_3,&local_58,0,iVar1,0x10,__real_447a0000,param_6);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->Dists,(this->Constraints).ArrayNum,Default);
  local_48.DataPtr = (float *)(this->Dists).AllocatorInstance.Data;
  local_48.ArrayNum = (this->Dists).ArrayNum;
  if (local_48.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDSpringConstraintsBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  pTVar5 = FSolverParticlesRange::XArray(param_1,&local_28);
  CalculateRestLengths(this,pTVar5,&local_48);
  return this;
}

