// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// GetDelta<Chaos::Softs::FSolverParticles> @ 143c2dca0

TVector<float,3> * __thiscall
Chaos::Softs::FPBDAxialSpringConstraintsBase::GetDelta<Chaos::Softs::FSolverParticles>
          (FPBDAxialSpringConstraintsBase *this,TVector<float,3> *__return_storage_ptr__,
          FSolverParticles *param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TVector<float,3> *pTVar9;
  TVector<float,3> *pTVar10;
  TVector<float,3> *pTVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  lVar13 = (longlong)param_2;
  uVar12 = (uint)~param_2 >> 0x1f;
  uVar7 = 0;
  if (param_2 < (this->Constraints).ArrayNum) {
    uVar7 = uVar12;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TVector<float,3> *)(*pcVar5)();
    return pTVar9;
  }
  pFVar4 = (this->Constraints).AllocatorInstance.Data;
  iVar1 = *(int *)(pFVar4 + lVar13 * 0xc + 4);
  iVar2 = *(int *)(pFVar4 + lVar13 * 0xc);
  iVar3 = *(int *)(pFVar4 + lVar13 * 0xc + 8);
  uVar8 = 0;
  uVar7 = uVar8;
  if (param_2 < (this->Barys).ArrayNum) {
    uVar7 = uVar12;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TVector<float,3> *)(*pcVar5)();
    return pTVar9;
  }
  pFVar4 = (this->Barys).AllocatorInstance.Data;
  uVar7 = uVar8;
  if (param_2 < (this->Barys).ArrayNum) {
    uVar7 = uVar12;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TVector<float,3> *)(*pcVar5)();
    return pTVar9;
  }
  fVar20 = __real_3f800000;
  fVar19 = __real_3f800000 - *(float *)((this->Barys).AllocatorInstance.Data + lVar13 * 4);
  fVar14 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar3);
  fVar16 = *(float *)(pFVar4 + lVar13 * 4);
  fVar15 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar1);
  fVar14 = fVar15 * fVar16 + fVar14 * fVar19;
  fVar16 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar2);
  if ((fVar16 != 0.0) || (fVar14 != 0.0)) {
    pTVar9 = FSolverParticles::P(param_1,iVar2);
    pTVar10 = FSolverParticles::P(param_1,iVar1);
    pTVar11 = FSolverParticles::P(param_1,iVar3);
    if (param_2 < (this->Barys).ArrayNum) {
      uVar8 = uVar12;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TVector<float,3> *)(*pcVar5)();
      return pTVar9;
    }
    fVar16 = *(float *)((this->Barys).AllocatorInstance.Data + lVar13 * 4);
    fVar15 = *(float *)&pTVar9->field_0x8 -
             ((*(float *)&pTVar10->field_0x8 - *(float *)&pTVar11->field_0x8) * fVar16 +
             *(float *)&pTVar11->field_0x8);
    fVar19 = *(float *)&pTVar9->field_0x4 -
             ((*(float *)&pTVar10->field_0x4 - *(float *)&pTVar11->field_0x4) * fVar16 +
             *(float *)&pTVar11->field_0x4);
    fVar21 = *(float *)pTVar9 -
             ((*(float *)pTVar10 - *(float *)pTVar11) * fVar16 + *(float *)pTVar11);
    fVar16 = SQRT(fVar19 * fVar19 + fVar21 * fVar21 + fVar15 * fVar15);
    if (__real_322bcc77 < fVar16) {
      fVar17 = fVar20 / fVar16;
      uVar7 = 0;
      if (param_2 < (this->Dists).ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TVector<float,3> *)(*pcVar5)();
        return pTVar9;
      }
      fVar16 = fVar16 - *(float *)((this->Dists).AllocatorInstance.Data + lVar13 * 4);
      fVar18 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar2);
      fVar20 = fVar20 / (fVar18 + fVar14);
      *(float *)__return_storage_ptr__ = param_3 * fVar20 * fVar21 * fVar17 * fVar16;
      *(float *)&__return_storage_ptr__->field_0x4 = param_3 * fVar20 * fVar19 * fVar17 * fVar16;
      *(float *)&__return_storage_ptr__->field_0x8 = param_3 * fVar20 * fVar15 * fVar17 * fVar16;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// GetDelta<Chaos::Softs::FSolverParticlesRange> @ 143c2e970

TVector<float,3> * __thiscall
Chaos::Softs::FPBDAxialSpringConstraintsBase::GetDelta<Chaos::Softs::FSolverParticlesRange>
          (FPBDAxialSpringConstraintsBase *this,TVector<float,3> *__return_storage_ptr__,
          FSolverParticlesRange *param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  TVector<float,3> *pTVar10;
  TVector<float,3> *pTVar11;
  TVector<float,3> *pTVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  lVar14 = (longlong)param_2;
  uVar13 = (uint)~param_2 >> 0x1f;
  uVar8 = 0;
  if (param_2 < (this->Constraints).ArrayNum) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TVector<float,3> *)(*pcVar6)();
    return pTVar10;
  }
  pFVar4 = (this->Constraints).AllocatorInstance.Data;
  iVar1 = *(int *)(pFVar4 + lVar14 * 0xc);
  iVar2 = *(int *)(pFVar4 + lVar14 * 0xc + 4);
  iVar3 = *(int *)(pFVar4 + lVar14 * 0xc + 8);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TVector<float,3> *)(*pcVar6)();
    return pTVar10;
  }
  fVar15 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      *(int *)&param_1->field_0x10 + iVar2);
  uVar9 = 0;
  uVar8 = uVar9;
  if (param_2 < (this->Barys).ArrayNum) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TVector<float,3> *)(*pcVar6)();
    return pTVar10;
  }
  pFVar4 = (this->Barys).AllocatorInstance.Data;
  uVar8 = uVar9;
  if (param_2 < (this->Barys).ArrayNum) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TVector<float,3> *)(*pcVar6)();
    return pTVar10;
  }
  pFVar5 = (this->Barys).AllocatorInstance.Data;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TVector<float,3> *)(*pcVar6)();
    return pTVar10;
  }
  fVar16 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      iVar3 + *(int *)&param_1->field_0x10);
  fVar22 = __real_3f800000;
  fVar15 = (__real_3f800000 - *(float *)(pFVar5 + lVar14 * 4)) * fVar16 +
           fVar15 * *(float *)(pFVar4 + lVar14 * 4);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TVector<float,3> *)(*pcVar6)();
    return pTVar10;
  }
  fVar16 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      *(int *)&param_1->field_0x10 + iVar1);
  if ((fVar16 != 0.0) || (fVar15 != 0.0)) {
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x56,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TVector<float,3> *)(*pcVar6)();
      return pTVar10;
    }
    pTVar10 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                  *(int *)&param_1->field_0x10 + iVar1);
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x56,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TVector<float,3> *)(*pcVar6)();
      return pTVar10;
    }
    pTVar11 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                  iVar2 + *(int *)&param_1->field_0x10);
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x56,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TVector<float,3> *)(*pcVar6)();
      return pTVar10;
    }
    pTVar12 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                  iVar3 + *(int *)&param_1->field_0x10);
    if (param_2 < (this->Barys).ArrayNum) {
      uVar9 = uVar13;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TVector<float,3> *)(*pcVar6)();
      return pTVar10;
    }
    fVar16 = *(float *)((this->Barys).AllocatorInstance.Data + lVar14 * 4);
    fVar19 = *(float *)&pTVar10->field_0x8 -
             ((*(float *)&pTVar11->field_0x8 - *(float *)&pTVar12->field_0x8) * fVar16 +
             *(float *)&pTVar12->field_0x8);
    fVar20 = *(float *)&pTVar10->field_0x4 -
             ((*(float *)&pTVar11->field_0x4 - *(float *)&pTVar12->field_0x4) * fVar16 +
             *(float *)&pTVar12->field_0x4);
    fVar16 = *(float *)pTVar10 -
             ((*(float *)pTVar11 - *(float *)pTVar12) * fVar16 + *(float *)pTVar12);
    fVar21 = SQRT(fVar16 * fVar16 + fVar20 * fVar20 + fVar19 * fVar19);
    if (__real_322bcc77 < fVar21) {
      fVar17 = fVar22 / fVar21;
      uVar8 = 0;
      if (param_2 < (this->Dists).ArrayNum) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TVector<float,3> *)(*pcVar6)();
        return pTVar10;
      }
      fVar21 = fVar21 - *(float *)((this->Dists).AllocatorInstance.Data + lVar14 * 4);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x56,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TVector<float,3> *)(*pcVar6)();
        return pTVar10;
      }
      fVar18 = TDynamicParticles<float,3>::InvM
                         (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                          iVar1 + *(int *)&param_1->field_0x10);
      fVar22 = fVar22 / (fVar18 + fVar15);
      *(float *)__return_storage_ptr__ = fVar16 * fVar17 * fVar21 * param_3 * fVar22;
      *(float *)&__return_storage_ptr__->field_0x4 = fVar20 * fVar17 * fVar21 * param_3 * fVar22;
      *(float *)&__return_storage_ptr__->field_0x8 = fVar19 * fVar17 * fVar21 * param_3 * fVar22;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// Init<Chaos::Softs::FSolverParticlesRange> @ 143c32ca0

void __thiscall
Chaos::Softs::FPBDAxialSpringConstraintsBase::Init<Chaos::Softs::FSolverParticlesRange>
          (FPBDAxialSpringConstraintsBase *this,FSolverParticlesRange *param_1,bool param_2)

{
  int *piVar1;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  TVector<float,3> *pTVar13;
  TVector<float,3> *pTVar14;
  TVector<float,3> *pTVar15;
  int iVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint local_res20;
  float local_108;
  float local_104;
  int local_100;
  uint local_fc;
  uint local_f8;
  longlong local_f0;
  TVector<float,3> *local_e8;
  
  uVar3 = (this->Constraints).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &(this->Barys).ArrayMax;
  (this->Barys).ArrayNum = 0;
  if (*piVar1 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&(this->Barys).AllocatorInstance,0,piVar1);
  }
  uVar3 = (this->Constraints).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  (this->Dists).ArrayNum = 0;
  if ((this->Dists).ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&(this->Dists).AllocatorInstance,0,&(this->Dists).ArrayMax);
  }
  fVar9 = __real_3f000000;
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar8 = __real_3f800000;
  fVar7 = __real_322bcc77;
  iVar12 = (this->Constraints).ArrayNum;
  local_res20 = 0;
  if (0 < iVar12) {
    lVar17 = 0;
    pTVar2 = &this->Constraints;
    local_f0 = 0;
    do {
      local_f8 = ~local_res20;
      local_fc = local_f8 >> 0x1f;
      uVar11 = 0;
      if ((int)local_res20 < (this->Constraints).ArrayNum) {
        uVar11 = local_fc;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      iVar12 = *(int *)(pFVar5 + lVar17 + 4);
      iVar16 = *(int *)(pFVar5 + lVar17);
      iVar4 = *(int *)(pFVar5 + lVar17 + 8);
      local_100 = iVar12;
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar13 = TParticles<float,3>::GetX
                          (*(TParticles<float,3> **)&param_1->field_0x8,
                           *(int *)&param_1->field_0x10 + iVar16);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar14 = TParticles<float,3>::GetX
                          (*(TParticles<float,3> **)&param_1->field_0x8,
                           *(int *)&param_1->field_0x10 + iVar12);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar15 = TParticles<float,3>::GetX
                          (*(TParticles<float,3> **)&param_1->field_0x8,
                           *(int *)&param_1->field_0x10 + iVar4);
      fVar20 = *(float *)&pTVar15->field_0x4 - *(float *)&pTVar14->field_0x4;
      fVar21 = *(float *)pTVar15 - *(float *)pTVar14;
      fVar23 = *(float *)&pTVar15->field_0x8 - *(float *)&pTVar14->field_0x8;
      fVar20 = ((*(float *)&pTVar15->field_0x4 - *(float *)&pTVar13->field_0x4) * fVar20 +
                (*(float *)pTVar15 - *(float *)pTVar13) * fVar21 +
               (*(float *)&pTVar15->field_0x8 - *(float *)&pTVar13->field_0x8) * fVar23) /
               (fVar21 * fVar21 + fVar20 * fVar20 + fVar23 * fVar23);
      if (fVar8 <= fVar20) {
        fVar20 = fVar8;
      }
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar13 = TParticles<float,3>::GetX
                          (*(TParticles<float,3> **)&param_1->field_0x8,
                           local_100 + *(int *)&param_1->field_0x10);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar14 = TParticles<float,3>::GetX
                          (*(TParticles<float,3> **)&param_1->field_0x8,
                           *(int *)&param_1->field_0x10 + iVar4);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar15 = TParticles<float,3>::GetX
                          (*(TParticles<float,3> **)&param_1->field_0x8,
                           *(int *)&param_1->field_0x10 + iVar16);
      fVar21 = *(float *)&pTVar15->field_0x4 - *(float *)&pTVar14->field_0x4;
      fVar23 = *(float *)pTVar15 - *(float *)pTVar14;
      fVar24 = *(float *)&pTVar15->field_0x8 - *(float *)&pTVar14->field_0x8;
      fVar21 = ((*(float *)&pTVar15->field_0x4 - *(float *)&pTVar13->field_0x4) * fVar21 +
                (*(float *)pTVar15 - *(float *)pTVar13) * fVar23 +
               (*(float *)&pTVar15->field_0x8 - *(float *)&pTVar13->field_0x8) * fVar24) /
               (fVar23 * fVar23 + fVar21 * fVar21 + fVar24 * fVar24);
      if (fVar8 <= fVar21) {
        fVar21 = fVar8;
      }
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_e8 = TParticles<float,3>::GetX
                           (*(TParticles<float,3> **)&param_1->field_0x8,
                            *(int *)&param_1->field_0x10 + iVar4);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar13 = TParticles<float,3>::GetX
                          (*(TParticles<float,3> **)&param_1->field_0x8,
                           *(int *)&param_1->field_0x10 + iVar16);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = local_100;
      pTVar14 = TParticles<float,3>::GetX
                          (*(TParticles<float,3> **)&param_1->field_0x8,
                           *(int *)&param_1->field_0x10 + local_100);
      fVar22 = *(float *)pTVar14 - *(float *)pTVar13;
      fVar24 = *(float *)&pTVar14->field_0x4 - *(float *)&pTVar13->field_0x4;
      fVar25 = *(float *)&pTVar14->field_0x8 - *(float *)&pTVar13->field_0x8;
      fVar26 = (float)((uint)(fVar20 - fVar9) & uVar3);
      fVar23 = (float)((uint)(fVar21 - fVar9) & uVar3);
      local_108 = ((*(float *)&pTVar14->field_0x4 - *(float *)&local_e8->field_0x4) * fVar24 +
                   (*(float *)pTVar14 - *(float *)local_e8) * fVar22 +
                  (*(float *)&pTVar14->field_0x8 - *(float *)&local_e8->field_0x8) * fVar25) /
                  (fVar22 * fVar22 + fVar24 * fVar24 + fVar25 * fVar25);
      if (fVar8 <= local_108) {
        local_108 = fVar8;
      }
      if (local_108 <= 0.0) {
        local_108 = 0.0;
      }
      fVar24 = (float)((uint)(local_108 - fVar9) & uVar3);
      if ((fVar23 <= fVar24) || (fVar26 <= fVar24)) {
        local_108 = fVar20;
        if ((fVar23 < fVar26) && (fVar23 < fVar24)) {
          *(int *)(pFVar5 + lVar17) = iVar12;
          *(int *)(pFVar5 + lVar17 + 4) = iVar4;
          *(int *)(pFVar5 + lVar17 + 8) = iVar16;
          local_108 = fVar21;
        }
      }
      else {
        *(int *)(pFVar5 + lVar17) = iVar4;
        *(int *)(pFVar5 + lVar17 + 4) = iVar16;
        *(int *)(pFVar5 + lVar17 + 8) = iVar12;
      }
      iVar12 = *(int *)(pFVar5 + lVar17);
      iVar16 = *(int *)(pFVar5 + lVar17 + 4);
      iVar4 = *(int *)(pFVar5 + lVar17 + 8);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar13 = TParticles<float,3>::GetX
                          (*(TParticles<float,3> **)&param_1->field_0x8,
                           *(int *)&param_1->field_0x10 + iVar12);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar14 = TParticles<float,3>::GetX
                          (*(TParticles<float,3> **)&param_1->field_0x8,
                           *(int *)&param_1->field_0x10 + iVar16);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar15 = TParticles<float,3>::GetX
                          (*(TParticles<float,3> **)&param_1->field_0x8,
                           *(int *)&param_1->field_0x10 + iVar4);
      fVar24 = (*(float *)pTVar14 - *(float *)pTVar15) * local_108;
      fVar22 = (*(float *)&pTVar14->field_0x4 - *(float *)&pTVar15->field_0x4) * local_108;
      fVar20 = *(float *)pTVar15;
      fVar25 = (*(float *)&pTVar14->field_0x8 - *(float *)&pTVar15->field_0x8) * local_108;
      fVar21 = *(float *)&pTVar15->field_0x4;
      fVar23 = *(float *)&pTVar15->field_0x8;
      if (param_2) {
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x56,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar26 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                            *(int *)&param_1->field_0x10 + iVar4);
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x56,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar18 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                            *(int *)&param_1->field_0x10 + iVar16);
        fVar27 = fVar8 - local_108;
        fVar18 = fVar18 * local_108;
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x56,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar19 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                            *(int *)&param_1->field_0x10 + iVar12);
        if (fVar7 <= fVar19 + fVar27 * fVar26 + fVar18) goto LAB_143c33507;
        uVar11 = 0;
        if ((int)local_res20 < (this->Constraints).ArrayNum) {
          uVar11 = local_fc;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = (this->Constraints).ArrayNum;
        iVar16 = local_f8 + iVar12;
        pFVar5 = (pTVar2->AllocatorInstance).Data;
        if (1 < iVar16) {
          iVar16 = 1;
        }
        if (iVar16 != 0) {
          memmove(pFVar5 + lVar17,pFVar5 + (longlong)(iVar12 - iVar16) * 0xc,(longlong)iVar16 * 0xc)
          ;
        }
        piVar1 = &(this->Constraints).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,&pTVar2->AllocatorInstance,(this->Constraints).ArrayNum,
                   &(this->Constraints).ArrayMax);
      }
      else {
LAB_143c33507:
        pFVar5 = (this->Barys).AllocatorInstance.Data;
        piVar1 = &(this->Barys).ArrayMax;
        if (((pFVar5 <= (FScriptContainerElement *)&local_108) &&
            ((FScriptContainerElement *)&local_108 < pFVar5 + (longlong)*piVar1 * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = (this->Barys).ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->Barys).AllocatorInstance,piVar1);
        }
        (this->Barys).ArrayNum = iVar12 + 1;
        piVar1 = &(this->Dists).ArrayMax;
        *(float *)((this->Barys).AllocatorInstance.Data + (longlong)iVar12 * 4) = local_108;
        fVar21 = *(float *)&pTVar13->field_0x4 - (fVar22 + fVar21);
        fVar20 = *(float *)pTVar13 - (fVar24 + fVar20);
        pFVar5 = (this->Dists).AllocatorInstance.Data;
        fVar23 = *(float *)&pTVar13->field_0x8 - (fVar25 + fVar23);
        local_104 = SQRT(fVar20 * fVar20 + fVar21 * fVar21 + fVar23 * fVar23);
        if (((pFVar5 <= (FScriptContainerElement *)&local_104) &&
            ((FScriptContainerElement *)&local_104 < pFVar5 + (longlong)*piVar1 * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = (this->Dists).ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->Dists).AllocatorInstance,piVar1);
        }
        local_res20 = local_res20 + 1;
        local_f0 = local_f0 + 1;
        (this->Dists).ArrayNum = iVar12 + 1;
        lVar17 = lVar17 + 0xc;
        *(float *)((this->Dists).AllocatorInstance.Data + (longlong)iVar12 * 4) = local_104;
      }
      iVar12 = (this->Constraints).ArrayNum;
    } while ((int)local_res20 < iVar12);
  }
  if (((this->Barys).ArrayNum != iVar12) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Barys.Num() == Constraints.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAxialSpringConstraintsBase.h"
                          ,0xed,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->Dists).ArrayNum != (this->Constraints).ArrayNum) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Dists.Num() == Constraints.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAxialSpringConstraintsBase.h"
                          ,0xee,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  return;
}

// ~FPBDAxialSpringConstraintsBase @ 143c45430

void __thiscall
Chaos::Softs::FPBDAxialSpringConstraintsBase::~FPBDAxialSpringConstraintsBase
          (FPBDAxialSpringConstraintsBase *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FPBDAxialSpringConstraintsBase_Softs_Chaos__6B_;
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
  pFVar2 = (this->Barys).AllocatorInstance.Data;
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

// Init<Chaos::Softs::FSolverParticles> @ 143f08110

void __thiscall
Chaos::Softs::FPBDAxialSpringConstraintsBase::Init<Chaos::Softs::FSolverParticles>
          (FPBDAxialSpringConstraintsBase *this,FSolverParticles *param_1,bool param_2)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  TVector<float,3> *pTVar15;
  TVector<float,3> *pTVar16;
  TVector<float,3> *pTVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_128;
  uint local_124;
  uint local_120;
  float local_11c;
  uint local_118;
  uint local_114;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  
  uVar4 = (this->Constraints).ArrayNum;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar1 = &(this->Barys).ArrayMax;
  (this->Barys).ArrayNum = 0;
  if (*piVar1 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar4,&(this->Barys).AllocatorInstance,0,piVar1);
  }
  uVar4 = (this->Constraints).ArrayNum;
  pTVar2 = &this->Dists;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  (this->Dists).ArrayNum = 0;
  if ((this->Dists).ArrayMax < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar4,&pTVar2->AllocatorInstance,0,&(this->Dists).ArrayMax);
  }
  fVar10 = __real_3f000000;
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar9 = __real_3f800000;
  fVar8 = __real_322bcc77;
  iVar14 = (this->Constraints).ArrayNum;
  uVar22 = 0;
  if (0 < iVar14) {
    lVar20 = 0;
    pTVar3 = &this->Constraints;
    local_110 = 0;
    do {
      local_114 = ~uVar22;
      local_118 = local_114 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar22 < (this->Constraints).ArrayNum) {
        uVar12 = local_118;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (pTVar3->AllocatorInstance).Data;
      iVar14 = *(int *)(pFVar6 + lVar20 + 8);
      local_120 = *(uint *)(pFVar6 + lVar20);
      iVar18 = *(int *)(pFVar6 + lVar20 + 4);
      local_124 = iVar18;
      pTVar15 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,local_120);
      pTVar16 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,iVar18);
      pTVar17 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,iVar14);
      fVar25 = *(float *)&pTVar17->field_0x4 - *(float *)&pTVar16->field_0x4;
      fVar26 = *(float *)pTVar17 - *(float *)pTVar16;
      fVar28 = *(float *)&pTVar17->field_0x8 - *(float *)&pTVar16->field_0x8;
      fVar25 = ((*(float *)&pTVar17->field_0x4 - *(float *)&pTVar15->field_0x4) * fVar25 +
                (*(float *)pTVar17 - *(float *)pTVar15) * fVar26 +
               (*(float *)&pTVar17->field_0x8 - *(float *)&pTVar15->field_0x8) * fVar28) /
               (fVar26 * fVar26 + fVar25 * fVar25 + fVar28 * fVar28);
      if (fVar9 <= fVar25) {
        fVar25 = fVar9;
      }
      if (fVar25 <= 0.0) {
        fVar25 = 0.0;
      }
      pTVar15 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,local_124);
      pTVar16 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,iVar14);
      pTVar17 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,local_120);
      fVar26 = *(float *)&pTVar17->field_0x4 - *(float *)&pTVar16->field_0x4;
      fVar28 = *(float *)pTVar17 - *(float *)pTVar16;
      fVar29 = *(float *)&pTVar17->field_0x8 - *(float *)&pTVar16->field_0x8;
      fVar26 = ((*(float *)&pTVar17->field_0x4 - *(float *)&pTVar15->field_0x4) * fVar26 +
                (*(float *)pTVar17 - *(float *)pTVar15) * fVar28 +
               (*(float *)&pTVar17->field_0x8 - *(float *)&pTVar15->field_0x8) * fVar29) /
               (fVar28 * fVar28 + fVar26 * fVar26 + fVar29 * fVar29);
      if (fVar9 <= fVar26) {
        fVar26 = fVar9;
      }
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      pTVar15 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,iVar14);
      pTVar16 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,local_120);
      pTVar17 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,local_124);
      fVar27 = *(float *)pTVar17 - *(float *)pTVar16;
      fVar29 = *(float *)&pTVar17->field_0x4 - *(float *)&pTVar16->field_0x4;
      fVar30 = *(float *)&pTVar17->field_0x8 - *(float *)&pTVar16->field_0x8;
      fVar28 = (float)((uint)(fVar26 - fVar10) & uVar4);
      fVar31 = (float)((uint)(fVar25 - fVar10) & uVar4);
      local_128 = ((*(float *)&pTVar17->field_0x4 - *(float *)&pTVar15->field_0x4) * fVar29 +
                   (*(float *)pTVar17 - *(float *)pTVar15) * fVar27 +
                  (*(float *)&pTVar17->field_0x8 - *(float *)&pTVar15->field_0x8) * fVar30) /
                  (fVar27 * fVar27 + fVar29 * fVar29 + fVar30 * fVar30);
      if (fVar9 <= local_128) {
        local_128 = fVar9;
      }
      if (local_128 <= 0.0) {
        local_128 = 0.0;
      }
      fVar29 = (float)((uint)(local_128 - fVar10) & uVar4);
      if ((fVar28 <= fVar29) || (fVar31 <= fVar29)) {
        local_128 = fVar25;
        if ((fVar28 < fVar31) && (fVar28 < fVar29)) {
          *(uint *)(pFVar6 + lVar20) = local_124;
          *(int *)(pFVar6 + lVar20 + 4) = iVar14;
          *(uint *)(pFVar6 + lVar20 + 8) = local_120;
          local_128 = fVar26;
        }
      }
      else {
        *(int *)(pFVar6 + lVar20) = iVar14;
        *(uint *)(pFVar6 + lVar20 + 4) = local_120;
        *(uint *)(pFVar6 + lVar20 + 8) = local_124;
      }
      local_124 = *(uint *)(pFVar6 + lVar20);
      lVar21 = (longlong)(int)local_124;
      uVar12 = *(uint *)(pFVar6 + lVar20 + 8);
      uVar5 = *(uint *)(pFVar6 + lVar20 + 4);
      lVar19 = (longlong)(int)uVar5;
      uVar23 = ~local_124;
      uVar13 = 0;
      if ((int)local_124 < (int)param_1->_padding_) {
        uVar13 = uVar23 >> 0x1f;
      }
      local_120 = uVar5;
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_e0 = param_1->_padding_;
      local_e8 = lVar21 * 3;
      uVar13 = 0;
      if ((int)uVar5 < (int)param_1->_padding_) {
        uVar13 = ~uVar5 >> 0x1f;
      }
      local_100 = lVar21;
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_f8 = lVar19 * 3;
      local_f0 = param_1->_padding_;
      uVar13 = 0;
      if ((int)uVar12 < (int)param_1->_padding_) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      local_108 = lVar19;
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar21 = (longlong)(int)uVar12;
      lVar19 = param_1->_padding_;
      fVar25 = *(float *)(lVar19 + 8 + lVar21 * 0xc);
      fVar26 = *(float *)(lVar19 + 4 + lVar21 * 0xc);
      fVar28 = *(float *)(lVar19 + lVar21 * 0xc);
      fVar29 = (*(float *)(local_f0 + local_f8 * 4) - fVar28) * local_128;
      fVar27 = (*(float *)(local_f0 + 4 + local_f8 * 4) - fVar26) * local_128;
      fVar30 = (*(float *)(local_f0 + 8 + local_f8 * 4) - fVar25) * local_128;
      if (param_2) {
        uVar13 = 0;
        if ((int)uVar12 < (int)param_1->_padding_) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar19 = local_108;
        fVar31 = *(float *)(param_1->_padding_ + (longlong)(int)uVar12 * 4);
        uVar12 = 0;
        if ((int)local_120 < (int)param_1->_padding_) {
          uVar12 = ~uVar5 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar21 = local_100;
        fVar24 = fVar9 - local_128;
        fVar32 = local_128 * *(float *)(param_1->_padding_ + lVar19 * 4);
        uVar12 = 0;
        if ((int)local_124 < (int)param_1->_padding_) {
          uVar12 = uVar23 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (fVar8 <= fVar32 + fVar24 * fVar31 + *(float *)(param_1->_padding_ + lVar21 * 4))
        goto LAB_143f088c6;
        uVar12 = 0;
        if ((int)uVar22 < (this->Constraints).ArrayNum) {
          uVar12 = local_118;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar14 = (this->Constraints).ArrayNum;
        iVar18 = local_114 + iVar14;
        pFVar6 = (pTVar3->AllocatorInstance).Data;
        if (1 < iVar18) {
          iVar18 = 1;
        }
        if (iVar18 != 0) {
          memmove(pFVar6 + lVar20,pFVar6 + (longlong)(iVar14 - iVar18) * 0xc,(longlong)iVar18 * 0xc)
          ;
        }
        piVar1 = &(this->Constraints).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,&pTVar3->AllocatorInstance,(this->Constraints).ArrayNum,
                   &(this->Constraints).ArrayMax);
      }
      else {
LAB_143f088c6:
        pFVar6 = (this->Barys).AllocatorInstance.Data;
        piVar1 = &(this->Barys).ArrayMax;
        if (((pFVar6 <= (FScriptContainerElement *)&local_128) &&
            ((FScriptContainerElement *)&local_128 < pFVar6 + (longlong)*piVar1 * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar14 = (this->Barys).ArrayNum;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->Barys).AllocatorInstance,piVar1);
        }
        (this->Barys).ArrayNum = iVar14 + 1;
        piVar1 = &(this->Dists).ArrayMax;
        *(float *)((this->Barys).AllocatorInstance.Data + (longlong)iVar14 * 4) = local_128;
        fVar26 = *(float *)(local_e0 + 4 + local_e8 * 4) - (fVar27 + fVar26);
        fVar28 = *(float *)(local_e0 + local_e8 * 4) - (fVar29 + fVar28);
        pFVar6 = (pTVar2->AllocatorInstance).Data;
        fVar25 = *(float *)(local_e0 + 8 + local_e8 * 4) - (fVar30 + fVar25);
        local_11c = SQRT(fVar28 * fVar28 + fVar26 * fVar26 + fVar25 * fVar25);
        if (((pFVar6 <= (FScriptContainerElement *)&local_11c) &&
            ((FScriptContainerElement *)&local_11c < pFVar6 + (longlong)*piVar1 * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar14 = (this->Dists).ArrayNum;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        local_110 = local_110 + 1;
        uVar22 = uVar22 + 1;
        (this->Dists).ArrayNum = iVar14 + 1;
        lVar20 = lVar20 + 0xc;
        *(float *)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_11c;
      }
      iVar14 = (this->Constraints).ArrayNum;
    } while ((int)uVar22 < iVar14);
  }
  if (((this->Barys).ArrayNum != iVar14) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Barys.Num() == Constraints.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAxialSpringConstraintsBase.h"
                          ,0xed,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->Dists).ArrayNum != (this->Constraints).ArrayNum) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Dists.Num() == Constraints.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAxialSpringConstraintsBase.h"
                          ,0xee,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  return;
}

// FPBDAxialSpringConstraintsBase @ 143f0fdc0

FPBDAxialSpringConstraintsBase * __thiscall
Chaos::Softs::FPBDAxialSpringConstraintsBase::FPBDAxialSpringConstraintsBase
          (FPBDAxialSpringConstraintsBase *this,FSolverParticles *param_1,int param_2,int param_3,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_4,
          TArrayView<float_const_,int> *param_5,TVector<float,2> *param_6,bool param_7,float param_8
          )

{
  code *pcVar1;
  bool bVar2;
  FPBDAxialSpringConstraintsBase *pFVar3;
  undefined7 uStack_3f;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_38;
  <lambda_6_> local_28;
  
  local_28._9_7_ = uStack_3f;
  local_28.bTrimKinematicConstraints = param_7;
  this->_padding_ = (longlong)&___7FPBDAxialSpringConstraintsBase_Softs_Chaos__6B_;
  local_28.Particles = param_1;
  TrimConstraints<_Chaos::Softs::FPBDAxialSpringConstraintsBase::FPBDAxialSpringConstraintsBase_::__l1::<lambda_6_>_>
            (this,&this->Constraints,param_4,&local_28);
  this->ParticleOffset = param_2;
  (this->Barys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Barys).ArrayNum = 0;
  (this->Barys).ArrayMax = 0;
  (this->Dists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Dists).ArrayNum = 0;
  (this->Dists).ArrayMax = 0;
  this->ParticleCount = param_3;
  local_38.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
  local_38.ArrayNum = (this->Constraints).ArrayNum;
  if (local_38.ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPBDAxialSpringConstraintsBase *)(*pcVar1)();
      return pFVar3;
    }
  }
  FPBDStiffness::FPBDStiffness<3>
            (&this->Stiffness,param_6,param_5,&local_38,param_2,param_3,0x10,__real_447a0000,param_8
            );
  Init<Chaos::Softs::FSolverParticles>(this,param_1,param_7);
  return this;
}

// FPBDAxialSpringConstraintsBase @ 143f0ff00

FPBDAxialSpringConstraintsBase * __thiscall
Chaos::Softs::FPBDAxialSpringConstraintsBase::FPBDAxialSpringConstraintsBase
          (FPBDAxialSpringConstraintsBase *this,FSolverParticlesRange *param_1,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_2,
          TArrayView<float_const_,int> *param_3,TVector<float,2> *param_4,bool param_5,float param_6
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPBDAxialSpringConstraintsBase *pFVar4;
  undefined7 uStack_3f;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_38;
  <lambda_5_> local_28;
  
  local_28._9_7_ = uStack_3f;
  local_28.bTrimKinematicConstraints = param_5;
  this->_padding_ = (longlong)&___7FPBDAxialSpringConstraintsBase_Softs_Chaos__6B_;
  local_28.Particles = param_1;
  TrimConstraints<_Chaos::Softs::FPBDAxialSpringConstraintsBase::FPBDAxialSpringConstraintsBase_::__l1::<lambda_5_>_>
            (this,&this->Constraints,param_2,&local_28);
  this->ParticleOffset = 0;
  iVar1 = *(int *)&param_1->field_0x14;
  this->ParticleCount = iVar1;
  (this->Barys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Barys).ArrayNum = 0;
  (this->Barys).ArrayMax = 0;
  (this->Dists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Dists).ArrayNum = 0;
  (this->Dists).ArrayMax = 0;
  local_38.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
  local_38.ArrayNum = (this->Constraints).ArrayNum;
  if (local_38.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDAxialSpringConstraintsBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  FPBDStiffness::FPBDStiffness<3>
            (&this->Stiffness,param_4,param_3,&local_38,0,iVar1,0x10,__real_447a0000,param_6);
  Init<Chaos::Softs::FSolverParticlesRange>(this,param_1,param_5);
  return this;
}

