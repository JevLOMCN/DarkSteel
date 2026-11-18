// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// Apply @ 143c8fed0

void __thiscall
Chaos::Softs::FPBDPlanarConstraints::Apply
          (FPBDPlanarConstraints *this,FSolverParticlesRange *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  TVector<float,3> *pTVar7;
  code *pcVar8;
  bool bVar9;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar10;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar11;
  int iVar12;
  bool bVar13;
  code *local_c8;
  FPBDPlanarConstraints **local_c0;
  code *local_b8;
  FPBDPlanarConstraints **local_b0;
  FPBDPlanarConstraints *local_a8;
  FSolverParticlesRange *local_a0;
  float local_98;
  FPBDPlanarConstraints *local_90;
  FSolverParticlesRange *local_88;
  float local_80;
  TArrayView<Chaos::TVector<float,3>,int> local_78;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_68;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_58 [3];
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId31,"FPBDPlanarConstraint_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDPlanarConstraints.cpp"
               ,0x1f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId31);
  }
  if (((this->TargetPositions).ArrayNum != (this->UniqueConstraintIndices).ArrayNum) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetPositions.Num() == UniqueConstraintIndices.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDPlanarConstraints.cpp"
                         ,0x21,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((this->TargetNormals).ArrayNum != (this->UniqueConstraintIndices).ArrayNum) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetNormals.Num() == UniqueConstraintIndices.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDPlanarConstraints.cpp"
                         ,0x22,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar2 = (this->TargetVelocities).ArrayNum;
  if (((iVar2 != 0) && (iVar2 != (this->UniqueConstraintIndices).ArrayNum)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetVelocities.IsEmpty() || TargetVelocities.Num() == UniqueConstraintIndices.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDPlanarConstraints.cpp"
                         ,0x23,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar1 = this->FrictionCoefficient;
  if ((fVar1 <= __real_38d1b717) ||
     ((this->TargetVelocities).ArrayNum != (this->UniqueConstraintIndices).ArrayNum)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  iVar2 = (this->UniqueConstraintIndices).ArrayNum;
  if (Chaos_Planar_ParallelConstraintCount < iVar2) {
    if (bChaos_Planar_ISPC_Enabled == false) {
      if (bVar9) {
        local_c0 = &local_a8;
        local_c8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::Softs::FPBDPlanarConstraints::Apply'::__l40::<lambda_1>,void,int>
                   ::Call;
        local_a8 = this;
        local_a0 = param_1;
        local_98 = param_2;
        PhysicsParallelFor(iVar2,(TFunctionRef<void___cdecl(int)> *)&local_c8,false);
      }
      else {
        local_b0 = &local_90;
        local_b8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::Softs::FPBDPlanarConstraints::Apply'::__l42::<lambda_2>,void,int>
                   ::Call;
        local_90 = this;
        local_88 = param_1;
        local_80 = param_2;
        PhysicsParallelFor(iVar2,(TFunctionRef<void___cdecl(int)> *)&local_b8,false);
      }
    }
    else if (bVar9) {
      pFVar3 = (this->TargetVelocities).AllocatorInstance.Data;
      pFVar4 = (this->TargetNormals).AllocatorInstance.Data;
      pFVar5 = (this->TargetPositions).AllocatorInstance.Data;
      pFVar6 = (this->UniqueConstraintIndices).AllocatorInstance.Data;
      pTVar10 = FSolverParticlesRange::XArray(param_1,&local_78);
      pTVar7 = pTVar10->DataPtr;
      pTVar11 = FSolverParticlesRange::GetPAndInvM(param_1,&local_68);
      ApplyPBDPlanarConstraintsWithFriction
                (pTVar11->DataPtr,pTVar7,pFVar6,pFVar5,pFVar4,pFVar3,fVar1,param_2,iVar2);
    }
    else {
      pFVar3 = (this->TargetNormals).AllocatorInstance.Data;
      pFVar4 = (this->TargetPositions).AllocatorInstance.Data;
      pFVar5 = (this->UniqueConstraintIndices).AllocatorInstance.Data;
      pTVar11 = FSolverParticlesRange::GetPAndInvM(param_1,local_58);
      ApplyPBDPlanarConstraintsNoFriction(pTVar11->DataPtr,pFVar5,pFVar4,pFVar3,iVar2);
    }
  }
  else {
    iVar12 = 0;
    if (bVar9) {
      if (0 < iVar2) {
        do {
          ApplyHelperWithFriction(this,param_1,param_2,iVar12);
          iVar12 = iVar12 + 1;
        } while (iVar12 < (this->UniqueConstraintIndices).ArrayNum);
      }
    }
    else if (0 < iVar2) {
      do {
        ApplyHelperNoFriction(this,param_1,iVar12);
        iVar12 = iVar12 + 1;
      } while (iVar12 < (this->UniqueConstraintIndices).ArrayNum);
    }
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyHelperNoFriction @ 143c90220

void __thiscall
Chaos::Softs::FPBDPlanarConstraints::ApplyHelperNoFriction
          (FPBDPlanarConstraints *this,FSolverParticlesRange *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  float *pfVar11;
  TVector<float,3> *pTVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  
  lVar14 = (longlong)param_2;
  uVar13 = (uint)~param_2 >> 0x1f;
  uVar10 = 0;
  if (param_2 < (this->UniqueConstraintIndices).ArrayNum) {
    uVar10 = uVar13;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar6 = *(int *)((this->UniqueConstraintIndices).AllocatorInstance.Data + lVar14 * 4);
  pfVar11 = FSolverParticlesRange::InvM(param_1,iVar6);
  if (0.0 < *pfVar11) {
    uVar10 = 0;
    if (param_2 < (this->TargetPositions).ArrayNum) {
      uVar10 = uVar13;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar7 = (this->TargetPositions).AllocatorInstance.Data;
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar12 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                  *(int *)&param_1->field_0x10 + iVar6);
    fVar15 = *(float *)(pFVar7 + lVar14 * 0xc + 8);
    fVar1 = *(float *)(pFVar7 + lVar14 * 0xc + 4);
    fVar2 = *(float *)(pFVar7 + lVar14 * 0xc);
    fVar3 = *(float *)&pTVar12->field_0x8;
    fVar4 = *(float *)&pTVar12->field_0x4;
    fVar5 = *(float *)pTVar12;
    uVar10 = 0;
    if (param_2 < (this->TargetNormals).ArrayNum) {
      uVar10 = uVar13;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar7 = (this->TargetNormals).AllocatorInstance.Data;
    fVar15 = (fVar1 - fVar4) * *(float *)(pFVar7 + lVar14 * 0xc + 4) +
             (fVar2 - fVar5) * *(float *)(pFVar7 + lVar14 * 0xc) +
             (fVar15 - fVar3) * *(float *)(pFVar7 + lVar14 * 0xc + 8);
    if (0.0 < fVar15) {
      uVar10 = 0;
      if (param_2 < (this->TargetNormals).ArrayNum) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (this->TargetNormals).AllocatorInstance.Data;
      fVar1 = *(float *)(pFVar7 + lVar14 * 0xc);
      fVar2 = *(float *)(pFVar7 + lVar14 * 0xc + 4);
      fVar3 = *(float *)(pFVar7 + lVar14 * 0xc + 8);
      pTVar12 = FSolverParticlesRange::P(param_1,iVar6);
      *(float *)pTVar12 = fVar15 * fVar1 + *(float *)pTVar12;
      *(float *)&pTVar12->field_0x4 = fVar15 * fVar2 + *(float *)&pTVar12->field_0x4;
      *(float *)&pTVar12->field_0x8 = fVar15 * fVar3 + *(float *)&pTVar12->field_0x8;
    }
  }
  return;
}

// ApplyHelperWithFriction @ 143c904b0

void __thiscall
Chaos::Softs::FPBDPlanarConstraints::ApplyHelperWithFriction
          (FPBDPlanarConstraints *this,FSolverParticlesRange *param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  TVector<float,3> *pTVar11;
  TVector<float,3> *pTVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar14 = (longlong)param_3;
  uVar13 = (uint)~param_3 >> 0x1f;
  uVar8 = 0;
  if (param_3 < (this->UniqueConstraintIndices).ArrayNum) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar3 = *(int *)((this->UniqueConstraintIndices).AllocatorInstance.Data + lVar14 * 4);
  pfVar10 = FSolverParticlesRange::InvM(param_1,iVar3);
  if (0.0 < *pfVar10) {
    uVar8 = 0;
    if (param_3 < (this->TargetPositions).ArrayNum) {
      uVar8 = uVar13;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = (this->TargetPositions).AllocatorInstance.Data;
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar11 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                  iVar3 + *(int *)&param_1->field_0x10);
    fVar19 = *(float *)(pFVar4 + lVar14 * 0xc + 8);
    fVar16 = *(float *)(pFVar4 + lVar14 * 0xc + 4);
    fVar17 = *(float *)(pFVar4 + lVar14 * 0xc);
    fVar18 = *(float *)&pTVar11->field_0x8;
    fVar15 = *(float *)&pTVar11->field_0x4;
    fVar1 = *(float *)pTVar11;
    uVar9 = 0;
    uVar8 = uVar9;
    if (param_3 < (this->TargetNormals).ArrayNum) {
      uVar8 = uVar13;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = (this->TargetNormals).AllocatorInstance.Data;
    fVar19 = (fVar16 - fVar15) * *(float *)(pFVar4 + lVar14 * 0xc + 4) +
             (fVar17 - fVar1) * *(float *)(pFVar4 + lVar14 * 0xc) +
             (fVar19 - fVar18) * *(float *)(pFVar4 + lVar14 * 0xc + 8);
    if (0.0 < fVar19) {
      uVar8 = uVar9;
      if (param_3 < (this->TargetNormals).ArrayNum) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->TargetNormals).AllocatorInstance.Data;
      fVar16 = *(float *)(pFVar4 + lVar14 * 0xc);
      fVar17 = *(float *)(pFVar4 + lVar14 * 0xc + 4);
      fVar18 = *(float *)(pFVar4 + lVar14 * 0xc + 8);
      pTVar11 = FSolverParticlesRange::P(param_1,iVar3);
      *(float *)pTVar11 = fVar19 * fVar16 + *(float *)pTVar11;
      *(float *)&pTVar11->field_0x4 = fVar19 * fVar17 + *(float *)&pTVar11->field_0x4;
      *(float *)&pTVar11->field_0x8 = fVar19 * fVar18 + *(float *)&pTVar11->field_0x8;
      pTVar11 = FSolverParticlesRange::P(param_1,iVar3);
      pTVar12 = FSolverParticlesRange::X(param_1,iVar3);
      fVar16 = *(float *)&pTVar11->field_0x8;
      fVar17 = *(float *)&pTVar11->field_0x4;
      fVar18 = *(float *)pTVar11;
      fVar15 = *(float *)&pTVar12->field_0x8;
      fVar1 = *(float *)&pTVar12->field_0x4;
      fVar2 = *(float *)pTVar12;
      uVar8 = uVar9;
      if (param_3 < (this->TargetVelocities).ArrayNum) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->TargetVelocities).AllocatorInstance.Data;
      if (param_3 < (this->TargetNormals).ArrayNum) {
        uVar9 = uVar13;
      }
      fVar16 = (fVar16 - fVar15) - param_2 * *(float *)(pFVar4 + lVar14 * 0xc + 8);
      fVar17 = (fVar17 - fVar1) - param_2 * *(float *)(pFVar4 + lVar14 * 0xc + 4);
      fVar18 = (fVar18 - fVar2) - param_2 * *(float *)(pFVar4 + lVar14 * 0xc);
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->TargetNormals).AllocatorInstance.Data;
      uVar8 = 0;
      if (param_3 < (this->TargetNormals).ArrayNum) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->TargetNormals).AllocatorInstance.Data;
      fVar15 = fVar17 * *(float *)(pFVar5 + lVar14 * 0xc + 4) +
               fVar18 * *(float *)(pFVar5 + lVar14 * 0xc) +
               fVar16 * *(float *)(pFVar5 + lVar14 * 0xc + 8);
      fVar16 = fVar16 - fVar15 * *(float *)(pFVar4 + lVar14 * 0xc + 8);
      fVar17 = fVar17 - fVar15 * *(float *)(pFVar4 + lVar14 * 0xc + 4);
      fVar18 = fVar18 - fVar15 * *(float *)(pFVar4 + lVar14 * 0xc);
      fVar15 = SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16);
      if (__real_322bcc77 <= fVar15) {
        fVar19 = fVar19 * this->FrictionCoefficient;
        if (fVar15 <= fVar19) {
          fVar19 = fVar15;
        }
        fVar19 = fVar19 / fVar15;
        pTVar11 = FSolverParticlesRange::P(param_1,iVar3);
        *(float *)pTVar11 = *(float *)pTVar11 - fVar19 * fVar18;
        *(float *)&pTVar11->field_0x4 = *(float *)&pTVar11->field_0x4 - fVar17 * fVar19;
        *(float *)&pTVar11->field_0x8 = *(float *)&pTVar11->field_0x8 - fVar16 * fVar19;
      }
    }
  }
  return;
}

