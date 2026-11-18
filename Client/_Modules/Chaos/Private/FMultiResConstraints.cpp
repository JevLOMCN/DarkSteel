// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// Apply @ 143e10af0

void __thiscall
Chaos::Softs::FMultiResConstraints::Apply
          (FMultiResConstraints *this,FSolverParticlesRange *param_1,float param_2)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar5;
  longlong lVar6;
  FPAndInvM *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  char cVar12;
  longlong lVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  undefined8 in_stack_fffffffffffffef8;
  undefined4 uVar18;
  longlong lVar17;
  undefined8 in_stack_ffffffffffffff00;
  undefined4 uVar20;
  longlong lVar19;
  longlong lVar21;
  TArrayView<Chaos::TVector<float,3>,int> local_c8;
  TArrayView<Chaos::TVector<float,3>,int> local_b8;
  TArrayView<Chaos::TVector<float,3>,int> local_a8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_98;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_88;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_78 [4];
  
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId136,"FMultiResConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsMultiResConstraints.cpp"
               ,0x88);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId136);
  }
  fVar15 = __real_38d1b717;
  iVar11 = *(int *)&param_1->field_0x14;
  if ((this->FineTargetPositions).ArrayNum == iVar11) {
    if ((this->bUseXPBD == false) && (bChaos_MultiRes_ISPC_Enabled != false)) {
      if (((int)(this->Stiffness)._padding_ < 2) ||
         ((float)((uint)(*(float *)&(this->Stiffness)._padding_ -
                        *(float *)((longlong)&(this->Stiffness)._padding_ + 4)) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
        cVar3 = '\0';
      }
      else {
        cVar3 = '\x01';
      }
      if (((int)(this->VelocityTargetStiffness)._padding_ < 2) ||
         ((float)((uint)(*(float *)&(this->VelocityTargetStiffness)._padding_ -
                        *(float *)((longlong)&(this->VelocityTargetStiffness)._padding_ + 4)) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
        cVar12 = '\0';
      }
      else {
        cVar12 = '\x01';
      }
      if ((cVar3 == '\0') && (cVar12 == '\0')) {
        fVar15 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->VelocityTargetStiffness);
        fVar16 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->Stiffness);
        pFVar10 = (this->FineTargetVelocities).AllocatorInstance.Data;
        pFVar9 = (this->FineTargetPositions).AllocatorInstance.Data;
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x57,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
                  ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_c8,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   (*(longlong *)&param_1->field_0x8 + 0x28));
        pTVar5 = FSolverParticlesRange::GetPAndInvM(param_1,&local_98);
        ApplyMultiResConstraints
                  (pTVar5->DataPtr,local_c8.DataPtr,pFVar9,pFVar10,param_2,fVar16,
                   CONCAT44(uVar18,fVar15),CONCAT44(uVar20,iVar11));
      }
      else {
        if ((bChaos_MultiRes_SparseWeightMap_Enabled == false) ||
           (this->bStiffnessEntriesInitialized == false)) {
          iVar11 = *(int *)&param_1->field_0x14;
          lVar21 = (this->VelocityTargetStiffness)._padding_;
          if (((int)(this->VelocityTargetStiffness)._padding_ < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar13 = (this->VelocityTargetStiffness)._padding_;
          if (((int)(this->VelocityTargetStiffness)._padding_ < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar19 = (this->Stiffness)._padding_;
          if (((int)(this->Stiffness)._padding_ < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar17 = (this->Stiffness)._padding_;
          if (((int)(this->Stiffness)._padding_ < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar10 = (this->FineTargetVelocities).AllocatorInstance.Data;
          pFVar9 = (this->FineTargetPositions).AllocatorInstance.Data;
          if ((*(longlong *)&param_1->field_0x8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Particles",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                 ,0x57,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          TParticlesRange<Chaos::Softs::FSolverParticles,void>::
          GetArrayView<Chaos::TVector<float,3>_>
                    ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_a8,
                     (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                     (*(longlong *)&param_1->field_0x8 + 0x28));
          pTVar5 = FSolverParticlesRange::GetPAndInvM(param_1,local_78);
          pFVar7 = pTVar5->DataPtr;
        }
        else {
          piVar1 = &this->NonZeroStiffnessMin;
          if (((this->NonZeroStiffnessMax == -1) || (*piVar1 == -1)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("NonZeroStiffnessMax != INDEX_NONE && NonZeroStiffnessMin != INDEX_NONE"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsMultiResConstraints.cpp"
                                 ,0xa4,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar11 = this->NonZeroStiffnessMax - *piVar1;
          lVar21 = (this->VelocityTargetStiffness)._padding_;
          if (((int)(this->VelocityTargetStiffness)._padding_ < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar13 = (this->VelocityTargetStiffness)._padding_;
          if (((int)(this->VelocityTargetStiffness)._padding_ < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar19 = (this->Stiffness)._padding_;
          lVar13 = *piVar1 + lVar13;
          if (((int)(this->Stiffness)._padding_ < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar17 = (this->Stiffness)._padding_;
          if (((int)(this->Stiffness)._padding_ < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar6 = (longlong)this->NonZeroStiffnessMin;
          lVar17 = lVar17 + lVar6;
          pFVar10 = (this->FineTargetVelocities).AllocatorInstance.Data + lVar6 * 0xc;
          pFVar9 = (this->FineTargetPositions).AllocatorInstance.Data + lVar6 * 0xc;
          if ((*(longlong *)&param_1->field_0x8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Particles",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                 ,0x57,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          TParticlesRange<Chaos::Softs::FSolverParticles,void>::
          GetArrayView<Chaos::TVector<float,3>_>
                    ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_b8,
                     (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                     (*(longlong *)&param_1->field_0x8 + 0x28));
          iVar8 = this->NonZeroStiffnessMin;
          pTVar5 = FSolverParticlesRange::GetPAndInvM(param_1,&local_88);
          pFVar7 = pTVar5->DataPtr + this->NonZeroStiffnessMin;
          local_a8.DataPtr = local_b8.DataPtr + iVar8;
        }
        ApplyMultiResConstraintsWithWeightMaps
                  (pFVar7,local_a8.DataPtr,pFVar9,pFVar10,param_2,cVar3,lVar17,lVar19,cVar12,lVar13,
                   lVar21,iVar11);
      }
    }
    else if (((int)(this->Stiffness)._padding_ < 2) ||
            ((float)((uint)(*(float *)&(this->Stiffness)._padding_ -
                           *(float *)((longlong)&(this->Stiffness)._padding_ + 4)) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
      fVar16 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->Stiffness);
      if (((int)(this->VelocityTargetStiffness)._padding_ < 2) ||
         ((float)((uint)(*(float *)&(this->VelocityTargetStiffness)._padding_ -
                        *(float *)((longlong)&(this->VelocityTargetStiffness)._padding_ + 4)) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar15)) {
        fVar15 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->VelocityTargetStiffness);
        if ((fVar16 != 0.0) || (fVar15 != 0.0)) {
          iVar11 = 0;
          if (0 < *(int *)&param_1->field_0x14) {
            do {
              ApplyHelper(this,param_1,param_2,iVar11,fVar16,fVar15);
              iVar11 = iVar11 + 1;
            } while (iVar11 < *(int *)&param_1->field_0x14);
          }
        }
      }
      else {
        iVar11 = 0;
        if (0 < *(int *)&param_1->field_0x14) {
          do {
            fVar15 = FPBDWeightMap::operator[]
                               ((FPBDWeightMap *)&this->VelocityTargetStiffness,iVar11);
            ApplyHelper(this,param_1,param_2,iVar11,fVar16,fVar15);
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)&param_1->field_0x14);
        }
      }
    }
    else if (((int)(this->VelocityTargetStiffness)._padding_ < 2) ||
            ((float)((uint)(*(float *)&(this->VelocityTargetStiffness)._padding_ -
                           *(float *)((longlong)&(this->VelocityTargetStiffness)._padding_ + 4)) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
      fVar15 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->VelocityTargetStiffness);
      iVar11 = 0;
      if (0 < *(int *)&param_1->field_0x14) {
        do {
          fVar16 = FPBDWeightMap::operator[]((FPBDWeightMap *)&this->Stiffness,iVar11);
          ApplyHelper(this,param_1,param_2,iVar11,fVar16,fVar15);
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)&param_1->field_0x14);
      }
    }
    else {
      iVar8 = 0;
      if (0 < iVar11) {
        do {
          fVar15 = FPBDWeightMap::operator[]((FPBDWeightMap *)&this->Stiffness,iVar8);
          fVar16 = FPBDWeightMap::operator[]((FPBDWeightMap *)&this->VelocityTargetStiffness,iVar8);
          ApplyHelper(this,param_1,param_2,iVar8,fVar15,fVar16);
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)&param_1->field_0x14);
      }
    }
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyHelper @ 143e11890

void __thiscall
Chaos::Softs::FMultiResConstraints::ApplyHelper
          (FMultiResConstraints *this,FSolverParticlesRange *param_1,float param_2,int param_3,
          float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  float *pfVar8;
  TVector<float,3> *pTVar9;
  TVector<float,3> *pTVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  lVar12 = (longlong)param_3;
  if (this->bUseXPBD == false) {
    pfVar8 = FSolverParticlesRange::InvM(param_1,param_3);
    if (*pfVar8 != 0.0) {
      pTVar9 = FSolverParticlesRange::P(param_1,param_3);
      uVar11 = 0;
      if (param_3 < (this->FineTargetPositions).ArrayNum) {
        uVar11 = (uint)~param_3 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar3 = (this->FineTargetPositions).AllocatorInstance.Data;
      fVar19 = *(float *)pTVar9;
      fVar21 = *(float *)&pTVar9->field_0x4;
      fVar18 = *(float *)&pTVar9->field_0x8;
      fVar15 = *(float *)(pFVar3 + lVar12 * 0xc);
      fVar16 = *(float *)(pFVar3 + lVar12 * 0xc + 4);
      fVar17 = *(float *)(pFVar3 + lVar12 * 0xc + 8);
      pTVar9 = FSolverParticlesRange::P(param_1,param_3);
      *(float *)pTVar9 = *(float *)pTVar9 - (fVar19 - fVar15) * param_4;
      *(float *)&pTVar9->field_0x4 = *(float *)&pTVar9->field_0x4 - (fVar21 - fVar16) * param_4;
      *(float *)&pTVar9->field_0x8 = *(float *)&pTVar9->field_0x8 - (fVar18 - fVar17) * param_4;
      pTVar9 = FSolverParticlesRange::P(param_1,param_3);
      if (*(longlong *)&param_1->field_0x8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pTVar10 = TParticles<float,3>::X
                          (*(TParticles<float,3> **)&param_1->field_0x8,
                           *(int *)&param_1->field_0x10 + param_3);
      fVar19 = *(float *)&pTVar9->field_0x8;
      fVar21 = *(float *)&pTVar9->field_0x4;
      fVar18 = *(float *)pTVar9;
      fVar15 = *(float *)&pTVar10->field_0x8;
      fVar16 = *(float *)&pTVar10->field_0x4;
      fVar17 = *(float *)pTVar10;
      uVar11 = 0;
      if (param_3 < (this->FineTargetVelocities).ArrayNum) {
        uVar11 = (uint)~param_3 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar3 = (this->FineTargetVelocities).AllocatorInstance.Data;
      fVar20 = *(float *)(pFVar3 + lVar12 * 0xc);
      fVar1 = *(float *)(pFVar3 + lVar12 * 0xc + 4);
      fVar2 = *(float *)(pFVar3 + lVar12 * 0xc + 8);
      pTVar9 = FSolverParticlesRange::P(param_1,param_3);
      *(float *)pTVar9 = *(float *)pTVar9 - ((fVar18 - fVar17) - param_2 * fVar20) * param_5;
      *(float *)&pTVar9->field_0x4 =
           *(float *)&pTVar9->field_0x4 - ((fVar21 - fVar16) - param_2 * fVar1) * param_5;
      *(float *)&pTVar9->field_0x8 =
           *(float *)&pTVar9->field_0x8 - ((fVar19 - fVar15) - param_2 * fVar2) * param_5;
    }
  }
  else {
    pfVar8 = FSolverParticlesRange::InvM(param_1,param_3);
    fVar19 = 0.0;
    if (*pfVar8 != 0.0) {
      pTVar9 = FSolverParticlesRange::P(param_1,param_3);
      uVar14 = (uint)~param_3 >> 0x1f;
      uVar11 = 0;
      if (param_3 < (this->FineTargetPositions).ArrayNum) {
        uVar11 = uVar14;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      fVar21 = __real_3f800000;
      pFVar3 = (this->FineTargetPositions).AllocatorInstance.Data;
      fVar20 = 0.0;
      fVar17 = *(float *)&pTVar9->field_0x4 - *(float *)(pFVar3 + lVar12 * 0xc + 4);
      fVar18 = *(float *)pTVar9 - *(float *)(pFVar3 + lVar12 * 0xc);
      fVar16 = *(float *)&pTVar9->field_0x8 - *(float *)(pFVar3 + lVar12 * 0xc + 8);
      fVar15 = fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16;
      if (__real_38d1b717 <= fVar15) {
        fVar20 = SQRT(fVar15);
        fVar15 = __real_3f800000 / fVar20;
        fVar18 = fVar15 * fVar18;
        fVar19 = fVar15 * fVar17;
        fVar15 = fVar15 * fVar16;
      }
      else {
        fVar15 = 0.0;
        fVar18 = __real_3f800000;
      }
      uVar7 = 0;
      uVar11 = uVar7;
      if (param_3 < (this->CoarseBarycentricMass).ArrayNum) {
        uVar11 = uVar14;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar3 = (this->CoarseBarycentricMass).AllocatorInstance.Data;
      if (*(longlong *)&param_1->field_0x8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar4 = *(longlong *)&param_1->field_0x8;
      uVar13 = *(int *)&param_1->field_0x10 + param_3;
      uVar11 = uVar7;
      if ((int)uVar13 < *(int *)(lVar4 + 0x80)) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (param_3 < (this->Lambdas).ArrayNum) {
        uVar7 = uVar14;
      }
      fVar16 = (*(float *)(*(longlong *)(lVar4 + 0x78) + (longlong)(int)uVar13 * 4) +
               *(float *)(pFVar3 + lVar12 * 4)) * param_2 * param_2 * __real_3f000000 * param_4;
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      fVar20 = (float)((uint)(fVar20 * fVar16) ^ __xmm_80000000800000008000000080000000);
      fVar17 = *(float *)((this->Lambdas).AllocatorInstance.Data + lVar12 * 4);
      pfVar8 = FSolverParticlesRange::InvM(param_1,param_3);
      uVar11 = 0;
      if (param_3 < (this->Lambdas).ArrayNum) {
        uVar11 = uVar14;
      }
      fVar21 = (fVar20 - fVar17) / (fVar16 * *pfVar8 + fVar21);
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar3 = (this->Lambdas).AllocatorInstance.Data;
      *(float *)(pFVar3 + lVar12 * 4) = fVar21 + *(float *)(pFVar3 + lVar12 * 4);
      pfVar8 = FSolverParticlesRange::InvM(param_1,param_3);
      fVar16 = *pfVar8;
      pTVar9 = FSolverParticlesRange::P(param_1,param_3);
      *(float *)&pTVar9->field_0x4 = fVar21 * fVar19 * fVar16 + *(float *)&pTVar9->field_0x4;
      *(float *)&pTVar9->field_0x8 = fVar21 * fVar15 * fVar16 + *(float *)&pTVar9->field_0x8;
      *(float *)pTVar9 = fVar21 * fVar18 * fVar16 + *(float *)pTVar9;
    }
  }
  return;
}

// SetProperties @ 143e4daa0

void __thiscall
Chaos::Softs::FMultiResConstraints::SetProperties
          (FMultiResConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  uint uVar7;
  ECollectionPropertyFlags EVar8;
  bool bVar9;
  FString *pFVar10;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  TArrayView<unsigned_char_const_,int> *pTVar15;
  float fVar16;
  float fVar17;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar18 [16];
  undefined8 local_res8;
  TVector2<float>_u_0 local_res20;
  TVector2<float>_u_0 local_158;
  TArrayView<float_const_,int> local_150;
  TArrayView<float_const_,int> local_140;
  undefined1 local_130 [40];
  undefined8 local_108;
  bool local_100;
  float local_f8;
  undefined8 local_f4;
  int local_ec;
  undefined1 local_e8 [40];
  undefined8 local_c0;
  bool local_b8;
  float local_b0;
  undefined8 local_ac;
  int local_a4;
  
  iVar2 = (this->MultiResUseXPBDIndex).Index;
  if (iVar2 != -1) {
    EVar8 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,iVar2,&param_1->FlagsArray);
    if (((EVar8 & Animatable) != None) &&
       (EVar8 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->MultiResUseXPBDIndex).Index,&param_1->FlagsArray),
       (char)EVar8 < '\0')) {
      if (((this->MultiResUseXPBDIndex).Index == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("MultiResUseXPBDIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsMultiResConstraints.h"
                             ,0x7d,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar9 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                        (param_1,(this->MultiResUseXPBDIndex).Index,&param_1->LowValueArray);
      this->bUseXPBD = bVar9;
    }
  }
  fVar17 = __real_4e6e6b28;
  fVar6 = __real_3f800000;
  pTVar15 = &param_1->FlagsArray;
  iVar2 = (this->MultiResStiffnessIndex).Index;
  iVar14 = 0;
  if (((iVar2 != -1) &&
      (EVar8 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar2,pTVar15), (EVar8 & Animatable) != None)) &&
     (EVar8 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->MultiResStiffnessIndex).Index,pTVar15), (char)EVar8 < '\0'))
  {
    if (((this->MultiResStiffnessIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("MultiResStiffnessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsMultiResConstraints.h"
                           ,0x7e,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar2 = (this->MultiResStiffnessIndex).Index;
    local_res8._4_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar2,&param_1->HighValueArray);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar2,&param_1->LowValueArray);
    if (((this->MultiResStiffnessIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("MultiResStiffnessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsMultiResConstraints.h"
                           ,0x7e,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar8 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->MultiResStiffnessIndex).Index,pTVar15);
    if ((EVar8 & StringDirty) == None) {
      fVar16 = fVar6;
      if (this->bUseXPBD != false) {
        fVar16 = fVar17;
      }
      if (fVar16 <= (float)local_res8) {
        local_res8._0_4_ = fVar16;
      }
      if (fVar16 <= local_res8._4_4_) {
        local_res8._4_4_ = fVar16;
      }
      if ((float)local_res8 <= 0.0) {
        local_res8._0_4_ = 0.0;
      }
      if (local_res8._4_4_ <= 0.0) {
        local_res8._4_4_ = 0.0;
      }
      if (((float)local_res8 == *(float *)&(this->Stiffness)._padding_) &&
         (local_res8._4_4_ == *(float *)((longlong)&(this->Stiffness)._padding_ + 4))) {
        bVar12 = 0;
      }
      else {
        bVar12 = 1;
      }
      plVar1 = &(this->Stiffness)._padding_;
      *(byte *)plVar1 = (byte)*plVar1 | bVar12;
      (this->Stiffness)._padding_ = (longlong)local_res8;
    }
    else {
      if (((this->MultiResStiffnessIndex).Index == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("MultiResStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsMultiResConstraints.h"
                             ,0x7e,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                          (param_1,(this->MultiResStiffnessIndex).Index,&param_1->StringValueArray);
      fVar16 = fVar6;
      if (this->bUseXPBD != false) {
        fVar16 = fVar17;
      }
      iVar2 = this->NumParticles;
      pTVar11 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar10);
      if (pTVar11 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_150.DataPtr = (float *)0x0;
        local_150._8_8_ = (ulonglong)(uint)local_150._12_4_ << 0x20;
      }
      else {
        local_150.DataPtr = *(float **)&pTVar11->field_0x10;
        local_150._8_8_ = *(undefined8 *)&pTVar11->field_0x18;
      }
      local_res20 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      FPBDWeightMap::FPBDWeightMap
                ((FPBDWeightMap *)local_130,(TVector<float,2> *)&local_res20._s_0,&local_150,iVar2,
                 0x10);
      if (fVar16 <= (float)local_res8) {
        local_res8._0_4_ = fVar16;
      }
      if (fVar16 <= local_res8._4_4_) {
        local_res8._4_4_ = fVar16;
      }
      local_130._0_8_ = &___7FPBDStiffness_Softs_Chaos__6B_;
      local_f8 = 1000.0;
      local_f4._0_4_ = 6.9077554;
      local_f4._4_4_ = 0.0;
      local_ec = 0;
      if ((float)local_res8 <= 0.0) {
        local_res8._0_4_ = 0.0;
      }
      if (local_res8._4_4_ <= 0.0) {
        local_res8._4_4_ = 0.0;
      }
      if (((float)local_108 == (float)local_res8) && (local_108._4_4_ == local_res8._4_4_)) {
        bVar12 = 0;
      }
      else {
        bVar12 = 1;
      }
      local_100 = (bool)(local_100 | bVar12);
      local_108 = local_res8;
      FPBDStiffness::operator=(&this->Stiffness,(FPBDStiffness *)local_130);
      if ((FScriptContainerElement *)local_130._24_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_130._24_8_);
      }
      if ((FScriptContainerElement *)local_130._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_130._8_8_);
      }
    }
  }
  iVar2 = (this->MultiResVelocityTargetStiffnessIndex).Index;
  if (((iVar2 != -1) &&
      (EVar8 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar2,pTVar15), (EVar8 & Animatable) != None)) &&
     (EVar8 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->MultiResVelocityTargetStiffnessIndex).Index,pTVar15),
     (char)EVar8 < '\0')) {
    if (((this->MultiResVelocityTargetStiffnessIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("MultiResVelocityTargetStiffnessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsMultiResConstraints.h"
                           ,0x7f,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar2 = (this->MultiResVelocityTargetStiffnessIndex).Index;
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar2,&param_1->HighValueArray);
    auVar18._4_4_ = extraout_XMM0_Db;
    auVar18._0_4_ = fVar16;
    auVar18._8_4_ = extraout_XMM0_Dc;
    auVar18._12_4_ = extraout_XMM0_Dd;
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar2,&param_1->LowValueArray);
    if (((this->MultiResVelocityTargetStiffnessIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("MultiResVelocityTargetStiffnessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsMultiResConstraints.h"
                           ,0x7f,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar8 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->MultiResVelocityTargetStiffnessIndex).Index,pTVar15);
    if ((EVar8 & StringDirty) == None) {
      if (this->bUseXPBD == false) {
        fVar17 = fVar6;
      }
      if (fVar17 <= (float)local_res8) {
        local_res8._0_4_ = fVar17;
      }
      if (fVar17 <= fVar16) {
        auVar18._0_4_ = fVar17;
      }
      if ((float)local_res8 <= 0.0) {
        local_res8._0_4_ = 0.0;
      }
      if (auVar18._0_4_ <= 0.0) {
        auVar5._12_4_ = 0;
        auVar5._0_12_ = auVar18._4_12_;
        auVar18 = auVar5 << 0x20;
      }
      local_res8 = (TVector<float,2>)CONCAT44(auVar18._0_4_,(float)local_res8);
      if (((float)local_res8 == *(float *)&(this->VelocityTargetStiffness)._padding_) &&
         (auVar18._0_4_ == *(float *)((longlong)&(this->VelocityTargetStiffness)._padding_ + 4))) {
        bVar12 = 0;
      }
      else {
        bVar12 = 1;
      }
      plVar1 = &(this->VelocityTargetStiffness)._padding_;
      *(byte *)plVar1 = (byte)*plVar1 | bVar12;
      (this->VelocityTargetStiffness)._padding_ = (longlong)local_res8;
    }
    else {
      if (((this->MultiResVelocityTargetStiffnessIndex).Index == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("MultiResVelocityTargetStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsMultiResConstraints.h"
                             ,0x7f,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                          (param_1,(this->MultiResVelocityTargetStiffnessIndex).Index,
                           &param_1->StringValueArray);
      if (this->bUseXPBD == false) {
        fVar17 = fVar6;
      }
      iVar2 = this->NumParticles;
      pTVar11 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar10);
      if (pTVar11 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_140.DataPtr = (float *)0x0;
        local_140._8_8_ = (ulonglong)(uint)local_140._12_4_ << 0x20;
      }
      else {
        local_140.DataPtr = *(float **)&pTVar11->field_0x10;
        local_140._8_8_ = *(undefined8 *)&pTVar11->field_0x18;
      }
      local_158 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      FPBDWeightMap::FPBDWeightMap
                ((FPBDWeightMap *)local_e8,(TVector<float,2> *)&local_158._s_0,&local_140,iVar2,0x10
                );
      if (fVar17 <= (float)local_res8) {
        local_res8._0_4_ = fVar17;
      }
      if (fVar17 <= fVar16) {
        auVar18._0_4_ = fVar17;
      }
      local_e8._0_8_ = &___7FPBDStiffness_Softs_Chaos__6B_;
      local_b0 = 1000.0;
      local_ac._0_4_ = 6.9077554;
      local_ac._4_4_ = 0.0;
      local_a4 = 0;
      if ((float)local_res8 <= 0.0) {
        local_res8._0_4_ = 0.0;
      }
      if (auVar18._0_4_ <= 0.0) {
        auVar4._12_4_ = 0;
        auVar4._0_12_ = auVar18._4_12_;
        auVar18 = auVar4 << 0x20;
      }
      local_res8._4_4_ = auVar18._0_4_;
      if (((float)local_c0 == (float)local_res8) && (local_c0._4_4_ == auVar18._0_4_)) {
        bVar12 = 0;
      }
      else {
        bVar12 = 1;
      }
      local_b8 = (bool)(local_b8 | bVar12);
      local_c0 = local_res8;
      FPBDStiffness::operator=(&this->VelocityTargetStiffness,(FPBDStiffness *)local_e8);
      if ((FScriptContainerElement *)local_e8._24_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e8._24_8_);
      }
      if ((FScriptContainerElement *)local_e8._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e8._8_8_);
      }
    }
  }
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_38d1b717;
  if (0 < this->NumParticles) {
    do {
      if (((int)(this->Stiffness)._padding_ < 2) ||
         ((float)((uint)(*(float *)&(this->Stiffness)._padding_ -
                        *(float *)((longlong)&(this->Stiffness)._padding_ + 4)) & uVar7) <= fVar6))
      {
        fVar17 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->Stiffness);
      }
      else {
        fVar17 = FPBDWeightMap::operator[]((FPBDWeightMap *)&this->Stiffness,iVar14);
      }
      if (((int)(this->VelocityTargetStiffness)._padding_ < 2) ||
         ((float)((uint)(*(float *)&(this->VelocityTargetStiffness)._padding_ -
                        *(float *)((longlong)&(this->VelocityTargetStiffness)._padding_ + 4)) &
                 uVar7) <= fVar6)) {
        fVar16 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->VelocityTargetStiffness);
      }
      else {
        fVar16 = FPBDWeightMap::operator[]((FPBDWeightMap *)&this->VelocityTargetStiffness,iVar14);
      }
      if ((0.0 < fVar17) || (0.0 < fVar16)) {
        this->NonZeroStiffnessMin = iVar14;
        break;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < this->NumParticles);
  }
  uVar13 = this->NumParticles - 1;
  if (-1 < (int)uVar13) {
    do {
      if (((int)(this->Stiffness)._padding_ < 2) ||
         ((float)((uint)(*(float *)&(this->Stiffness)._padding_ -
                        *(float *)((longlong)&(this->Stiffness)._padding_ + 4)) & uVar7) <= fVar6))
      {
        fVar17 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->Stiffness);
      }
      else {
        fVar17 = FPBDWeightMap::operator[]((FPBDWeightMap *)&this->Stiffness,uVar13);
      }
      if (((int)(this->VelocityTargetStiffness)._padding_ < 2) ||
         ((float)((uint)(*(float *)&(this->VelocityTargetStiffness)._padding_ -
                        *(float *)((longlong)&(this->VelocityTargetStiffness)._padding_ + 4)) &
                 uVar7) <= fVar6)) {
        fVar16 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->VelocityTargetStiffness);
      }
      else {
        fVar16 = FPBDWeightMap::operator[]((FPBDWeightMap *)&this->VelocityTargetStiffness,uVar13);
      }
      if ((0.0 < fVar17) || (0.0 < fVar16)) {
        this->NonZeroStiffnessMax = uVar13;
        break;
      }
      uVar13 = uVar13 - 1;
    } while (uVar13 < 0x80000000);
  }
  if ((this->NonZeroStiffnessMax < this->NonZeroStiffnessMin) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NonZeroStiffnessMax >= NonZeroStiffnessMin",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsMultiResConstraints.cpp"
                         ,0x5d,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->NonZeroStiffnessMax != -1) && (this->NonZeroStiffnessMin != -1)) {
    this->bStiffnessEntriesInitialized = true;
    return;
  }
  this->bStiffnessEntriesInitialized = false;
  return;
}

// UpdateFineTargets @ 143e601c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FMultiResConstraints::UpdateFineTargets
          (FMultiResConstraints *this,FSolverParticlesRange *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  FTriangleMesh *this_00;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  FScriptContainerElement *pFVar28;
  code *pcVar29;
  TVector<float,3> *pTVar30;
  int iVar31;
  bool bVar32;
  bool bVar33;
  uint uVar34;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  longlong lVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  uint uVar43;
  ulonglong uVar44;
  uint uVar45;
  bool bVar46;
  longlong local_res20;
  longlong local_148;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_130;
  TVector<float,3> *local_120;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_118;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_108;
  TArrayView<float_const_,int> local_f8;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_e8;
  TVector<float,3> *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_c8;
  TArrayView<Chaos::TVector<float,3>,int> local_b8 [7];
  uint uVar35;
  uint uVar36;
  
  bVar46 = -1 < CpuChannel->Enabled;
  if (bVar46) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId255,"FMultiResConstraints_UpdateFineTargets",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsMultiResConstraints.cpp"
               ,0xff);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId255);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum
            (&this->CoarseBarycentricMass,this->NumParticles,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->FineTargetPositions,this->NumParticles,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->FineTargetVelocities,this->NumParticles,Default);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar32)) {
    pcVar29 = (code *)swi(3);
    (*pcVar29)();
    return;
  }
  TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetConstArrayView<Chaos::TVector<float,3>_>
            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_130,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&param_1->field_0x8 + 0x28));
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar32)) {
    pcVar29 = (code *)swi(3);
    (*pcVar29)();
    return;
  }
  TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetConstArrayView<float>
            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_f8,
             (TArray<float,TSizedDefaultAllocator<32>_> *)(*(longlong *)&param_1->field_0x8 + 0x78))
  ;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar32)) {
    pcVar29 = (code *)swi(3);
    (*pcVar29)();
    return;
  }
  TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetConstArrayView<Chaos::TVector<float,3>_>
            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_108,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&param_1->field_0x8 + 0x48));
  uVar41 = 0;
  uVar34 = 0;
  uVar35 = 0;
  uVar36 = 0;
  if (bMultiResConstraintApplyTargetNormalOffset == false) {
    if (0 < this->NumParticles) {
      local_148 = 0;
      uVar42 = uVar41;
      uVar44 = uVar41;
      do {
        uVar43 = (uint)uVar44;
        uVar45 = ~uVar43 >> 0x1f;
        uVar37 = uVar34;
        if ((int)uVar43 < (this->CoarseToFinePositionBaryCoordsAndDist).ArrayNum) {
          uVar37 = uVar45;
        }
        if ((uVar37 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        pFVar26 = (this->CoarseToFinePositionBaryCoordsAndDist).AllocatorInstance.Data;
        uVar37 = uVar34;
        if ((int)uVar43 < (this->CoarseToFineSourceMeshVertIndices).ArrayNum) {
          uVar37 = uVar45;
        }
        if ((uVar37 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        iVar31 = local_130.ArrayNum;
        pFVar27 = (this->CoarseToFineSourceMeshVertIndices).AllocatorInstance.Data;
        uVar37 = *(uint *)(pFVar27 + uVar41);
        uVar38 = uVar34;
        if ((int)uVar37 < local_130.ArrayNum) {
          uVar38 = ~uVar37 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        pTVar30 = local_130.DataPtr;
        fVar2 = *(float *)(pFVar26 + local_148);
        fVar3 = *(float *)(local_130.DataPtr + (int)uVar37);
        fVar4 = *(float *)&local_130.DataPtr[(int)uVar37].field_0x4;
        uVar38 = *(uint *)(pFVar27 + uVar41 + 4);
        fVar5 = *(float *)&local_130.DataPtr[(int)uVar37].field_0x8;
        uVar37 = uVar35;
        if ((int)uVar38 < iVar31) {
          uVar37 = ~uVar38 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        fVar6 = *(float *)(pFVar26 + local_148 + 4);
        fVar7 = *(float *)(pTVar30 + (int)uVar38);
        fVar8 = *(float *)&pTVar30[(int)uVar38].field_0x4;
        uVar37 = *(uint *)(pFVar27 + uVar41 + 8);
        fVar9 = *(float *)&pTVar30[(int)uVar38].field_0x8;
        uVar38 = uVar35;
        if ((int)uVar37 < iVar31) {
          uVar38 = ~uVar37 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        fVar10 = *(float *)(pFVar26 + local_148 + 8);
        fVar11 = *(float *)&pTVar30[(int)uVar37].field_0x8;
        fVar12 = *(float *)&pTVar30[(int)uVar37].field_0x4;
        fVar13 = *(float *)(pTVar30 + (int)uVar37);
        uVar37 = uVar35;
        if ((int)uVar43 < (this->FineTargetPositions).ArrayNum) {
          uVar37 = uVar45;
        }
        if ((uVar37 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        iVar31 = local_f8.ArrayNum;
        pFVar28 = (this->FineTargetPositions).AllocatorInstance.Data;
        *(float *)(pFVar28 + uVar41) = fVar10 * fVar13 + fVar6 * fVar7 + fVar2 * fVar3;
        *(float *)(pFVar28 + uVar41 + 4) = fVar10 * fVar12 + fVar6 * fVar8 + fVar2 * fVar4;
        *(float *)(pFVar28 + uVar41 + 8) = fVar10 * fVar11 + fVar6 * fVar9 + fVar2 * fVar5;
        uVar37 = *(uint *)(pFVar27 + uVar41 + 8);
        uVar38 = uVar35;
        if ((int)uVar37 < local_f8.ArrayNum) {
          uVar38 = ~uVar37 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        local_120 = (TVector<float,3> *)(local_f8.DataPtr + (int)uVar37);
        uVar37 = *(uint *)(pFVar27 + uVar41 + 4);
        uVar38 = uVar36;
        if ((int)uVar37 < iVar31) {
          uVar38 = ~uVar37 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        pfVar1 = local_f8.DataPtr + (int)uVar37;
        uVar37 = *(uint *)(pFVar27 + uVar41);
        uVar38 = uVar36;
        if ((int)uVar37 < iVar31) {
          uVar38 = ~uVar37 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        fVar2 = local_f8.DataPtr[(int)uVar37];
        fVar3 = *(float *)(pFVar26 + local_148);
        fVar4 = *(float *)(pFVar26 + local_148 + 4);
        fVar5 = *pfVar1;
        fVar6 = *(float *)local_120;
        fVar7 = *(float *)(pFVar26 + local_148 + 8);
        uVar37 = uVar36;
        if ((int)uVar43 < (this->CoarseBarycentricMass).ArrayNum) {
          uVar37 = uVar45;
        }
        if ((uVar37 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        iVar31 = local_108.ArrayNum;
        *(float *)((this->CoarseBarycentricMass).AllocatorInstance.Data + uVar42 * 4) =
             fVar2 * fVar3 + fVar4 * fVar5 + fVar6 * fVar7;
        uVar37 = *(uint *)(pFVar27 + uVar41);
        uVar38 = uVar36;
        if ((int)uVar37 < local_108.ArrayNum) {
          uVar38 = ~uVar37 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        pTVar30 = local_108.DataPtr;
        fVar2 = *(float *)(pFVar26 + local_148);
        fVar3 = *(float *)(local_108.DataPtr + (int)uVar37);
        fVar4 = *(float *)&local_108.DataPtr[(int)uVar37].field_0x4;
        uVar38 = *(uint *)(pFVar27 + uVar41 + 4);
        fVar5 = *(float *)&local_108.DataPtr[(int)uVar37].field_0x8;
        uVar37 = uVar36;
        if ((int)uVar38 < iVar31) {
          uVar37 = ~uVar38 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        fVar6 = *(float *)(pFVar26 + local_148 + 4);
        fVar7 = *(float *)(pTVar30 + (int)uVar38);
        fVar8 = *(float *)&pTVar30[(int)uVar38].field_0x4;
        uVar37 = *(uint *)(pFVar27 + uVar41 + 8);
        fVar9 = *(float *)&pTVar30[(int)uVar38].field_0x8;
        uVar38 = uVar36;
        if ((int)uVar37 < iVar31) {
          uVar38 = ~uVar37 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        fVar10 = *(float *)(pFVar26 + local_148 + 8);
        fVar11 = *(float *)&pTVar30[(int)uVar37].field_0x8;
        fVar12 = *(float *)&pTVar30[(int)uVar37].field_0x4;
        fVar13 = *(float *)(pTVar30 + (int)uVar37);
        uVar37 = uVar36;
        if ((int)uVar43 < (this->FineTargetVelocities).ArrayNum) {
          uVar37 = uVar45;
        }
        if ((uVar37 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        pFVar26 = (this->FineTargetVelocities).AllocatorInstance.Data;
        local_148 = local_148 + 0x10;
        uVar44 = (ulonglong)(uVar43 + 1);
        uVar42 = uVar42 + 1;
        *(float *)(pFVar26 + uVar41) = fVar10 * fVar13 + fVar6 * fVar7 + fVar2 * fVar3;
        *(float *)(pFVar26 + uVar41 + 4) = fVar10 * fVar12 + fVar6 * fVar8 + fVar2 * fVar4;
        *(float *)(pFVar26 + uVar41 + 8) = fVar10 * fVar11 + fVar6 * fVar9 + fVar2 * fVar5;
        uVar41 = uVar41 + 0xc;
      } while ((int)(uVar43 + 1) < this->NumParticles);
    }
  }
  else {
    local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.ArrayNum = 0;
    local_118.ArrayMax = 0;
    bVar32 = -1 < CpuChannel->Enabled;
    if (bVar32) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId267,"FXPBDMultiResConstraints_CalculateNormals",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsMultiResConstraints.cpp"
                 ,0x10b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId267);
    }
    TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_118,*(int *)&param_1->field_0x14,Default);
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    FTriangleMesh::GetFaceNormals<float>(this->CoarseMesh,&local_e8,&local_130,false);
    local_c8.ArrayNum = local_e8.ArrayNum;
    this_00 = this->CoarseMesh;
    local_c8.DataPtr = (TVector<float,3> *)local_e8.AllocatorInstance.Data;
    if ((local_e8.ArrayNum < 0) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar33)) {
      pcVar29 = (code *)swi(3);
      (*pcVar29)();
      return;
    }
    iVar31 = local_118.ArrayNum;
    local_d8 = (TVector<float,3> *)local_118.AllocatorInstance.Data;
    if ((local_118.ArrayNum < 0) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar33)) {
      pcVar29 = (code *)swi(3);
      (*pcVar29)();
      return;
    }
    iStack_d0 = iVar31;
    local_b8[0]._12_4_ = uStack_cc;
    local_b8[0].ArrayNum = iVar31;
    local_b8[0].DataPtr = local_d8;
    FTriangleMesh::GetPointNormals(this_00,local_b8,&local_c8,false);
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    if (bVar32) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((this->bUseXPBD == false) && (bChaos_MultiRes_ISPC_Enabled != false)) {
      if (((((int)(this->Stiffness)._padding_ < 2) ||
           ((float)((uint)(*(float *)&(this->Stiffness)._padding_ -
                          *(float *)((longlong)&(this->Stiffness)._padding_ + 4)) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) ||
          (bChaos_MultiRes_SparseWeightMap_Enabled == false)) ||
         (this->bStiffnessEntriesInitialized == false)) {
        MultiResUpdateFineTargets
                  ((this->FineTargetPositions).AllocatorInstance.Data,
                   (this->FineTargetVelocities).AllocatorInstance.Data,local_130.DataPtr,
                   local_118.AllocatorInstance.Data,local_108.DataPtr,
                   (this->CoarseToFinePositionBaryCoordsAndDist).AllocatorInstance.Data,
                   (this->CoarseToFineSourceMeshVertIndices).AllocatorInstance.Data,
                   this->NumParticles);
      }
      else {
        lVar40 = (longlong)this->NonZeroStiffnessMin;
        MultiResUpdateFineTargets
                  ((this->FineTargetPositions).AllocatorInstance.Data + lVar40 * 0xc,
                   (this->FineTargetVelocities).AllocatorInstance.Data + lVar40 * 0xc,
                   local_130.DataPtr,local_118.AllocatorInstance.Data,local_108.DataPtr,
                   (this->CoarseToFinePositionBaryCoordsAndDist).AllocatorInstance.Data +
                   lVar40 * 0x10,
                   (this->CoarseToFineSourceMeshVertIndices).AllocatorInstance.Data + lVar40 * 0xc,
                   this->NonZeroStiffnessMax - this->NonZeroStiffnessMin);
      }
    }
    else if (0 < this->NumParticles) {
      local_res20 = 0;
      uVar42 = uVar41;
      uVar44 = uVar41;
      do {
        uVar43 = (uint)uVar44;
        uVar45 = ~uVar43 >> 0x1f;
        uVar37 = 0;
        if ((int)uVar43 < (this->CoarseToFinePositionBaryCoordsAndDist).ArrayNum) {
          uVar37 = uVar45;
        }
        if ((uVar37 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        pFVar26 = (this->CoarseToFinePositionBaryCoordsAndDist).AllocatorInstance.Data;
        uVar37 = 0;
        if ((int)uVar43 < (this->CoarseToFineSourceMeshVertIndices).ArrayNum) {
          uVar37 = uVar45;
        }
        if ((uVar37 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        iVar31 = local_130.ArrayNum;
        pFVar27 = (this->CoarseToFineSourceMeshVertIndices).AllocatorInstance.Data;
        uVar37 = *(uint *)(pFVar27 + uVar41);
        uVar38 = uVar36;
        if ((int)uVar37 < local_130.ArrayNum) {
          uVar38 = ~uVar37 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        pTVar30 = local_130.DataPtr;
        uVar38 = *(uint *)(pFVar27 + uVar41);
        local_120 = (TVector<float,3> *)((longlong)(int)uVar37 * 3);
        uVar37 = uVar36;
        if ((int)uVar38 < local_118.ArrayNum) {
          uVar37 = ~uVar38 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        lVar40 = (longlong)(int)uVar38;
        fVar2 = *(float *)(pFVar26 + local_res20 + 0xc);
        fVar3 = *(float *)(pFVar26 + local_res20);
        fVar4 = *(float *)(local_118.AllocatorInstance.Data + lVar40 * 0xc);
        fVar5 = *(float *)(local_118.AllocatorInstance.Data + lVar40 * 0xc + 4);
        fVar6 = *(float *)(local_118.AllocatorInstance.Data + lVar40 * 0xc + 8);
        fVar7 = *(float *)(&pTVar30->field_0x0 + (longlong)local_120 * 4);
        fVar8 = *(float *)(&pTVar30->field_0x4 + (longlong)local_120 * 4);
        fVar9 = *(float *)(&pTVar30->field_0x8 + (longlong)local_120 * 4);
        uVar37 = *(uint *)(pFVar27 + uVar41 + 4);
        uVar38 = uVar36;
        if ((int)uVar37 < iVar31) {
          uVar38 = ~uVar37 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        uVar38 = *(uint *)(pFVar27 + uVar41 + 4);
        local_120 = local_130.DataPtr;
        uVar39 = uVar36;
        if ((int)uVar38 < local_118.ArrayNum) {
          uVar39 = ~uVar38 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        lVar40 = (longlong)(int)uVar38;
        fVar10 = *(float *)(pFVar26 + local_res20 + 0xc);
        fVar11 = *(float *)(pFVar26 + local_res20 + 4);
        fVar12 = *(float *)(local_118.AllocatorInstance.Data + lVar40 * 0xc);
        fVar13 = *(float *)(local_118.AllocatorInstance.Data + lVar40 * 0xc + 4);
        fVar14 = *(float *)(local_118.AllocatorInstance.Data + lVar40 * 0xc + 8);
        fVar15 = *(float *)(local_120 + (int)uVar37);
        fVar16 = *(float *)&local_120[(int)uVar37].field_0x4;
        fVar17 = *(float *)&local_120[(int)uVar37].field_0x8;
        uVar37 = *(uint *)(pFVar27 + uVar41 + 8);
        uVar38 = uVar36;
        if ((int)uVar37 < iVar31) {
          uVar38 = ~uVar37 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        pTVar30 = local_130.DataPtr;
        uVar38 = *(uint *)(pFVar27 + uVar41 + 8);
        lVar40 = (longlong)(int)uVar38;
        uVar39 = uVar36;
        if ((int)uVar38 < local_118.ArrayNum) {
          uVar39 = ~uVar38 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        fVar18 = *(float *)(pFVar26 + local_res20 + 0xc);
        fVar19 = *(float *)(pFVar26 + local_res20 + 8);
        fVar20 = *(float *)(local_118.AllocatorInstance.Data + lVar40 * 0xc + 8);
        fVar21 = *(float *)(local_118.AllocatorInstance.Data + lVar40 * 0xc + 4);
        fVar22 = *(float *)(local_118.AllocatorInstance.Data + lVar40 * 0xc);
        fVar23 = *(float *)&pTVar30[(int)uVar37].field_0x8;
        fVar24 = *(float *)&pTVar30[(int)uVar37].field_0x4;
        fVar25 = *(float *)(pTVar30 + (int)uVar37);
        uVar37 = uVar36;
        if ((int)uVar43 < (this->FineTargetPositions).ArrayNum) {
          uVar37 = uVar45;
        }
        if ((uVar37 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        iVar31 = local_f8.ArrayNum;
        pFVar28 = (this->FineTargetPositions).AllocatorInstance.Data;
        *(float *)(pFVar28 + uVar41) =
             (fVar18 * fVar22 + fVar25) * fVar19 +
             (fVar10 * fVar12 + fVar15) * fVar11 + (fVar2 * fVar4 + fVar7) * fVar3;
        *(float *)(pFVar28 + uVar41 + 4) =
             (fVar18 * fVar21 + fVar24) * fVar19 +
             (fVar10 * fVar13 + fVar16) * fVar11 + (fVar2 * fVar5 + fVar8) * fVar3;
        *(float *)(pFVar28 + uVar41 + 8) =
             (fVar18 * fVar20 + fVar23) * fVar19 +
             (fVar10 * fVar14 + fVar17) * fVar11 + (fVar2 * fVar6 + fVar9) * fVar3;
        uVar37 = *(uint *)(pFVar27 + uVar41);
        uVar38 = uVar36;
        if ((int)uVar37 < local_f8.ArrayNum) {
          uVar38 = ~uVar37 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        uVar38 = *(uint *)(pFVar27 + uVar41 + 4);
        local_120 = (TVector<float,3> *)(local_f8.DataPtr + (int)uVar37);
        uVar37 = uVar35;
        if ((int)uVar38 < iVar31) {
          uVar37 = ~uVar38 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        uVar37 = *(uint *)(pFVar27 + uVar41 + 8);
        pfVar1 = local_f8.DataPtr + (int)uVar38;
        uVar38 = uVar35;
        if ((int)uVar37 < iVar31) {
          uVar38 = ~uVar37 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        fVar2 = *(float *)(pFVar26 + local_res20 + 4);
        fVar3 = *pfVar1;
        fVar4 = *(float *)(pFVar26 + local_res20);
        fVar5 = *(float *)local_120;
        fVar6 = local_f8.DataPtr[(int)uVar37];
        fVar7 = *(float *)(pFVar26 + local_res20 + 8);
        uVar37 = uVar35;
        if ((int)uVar43 < (this->CoarseBarycentricMass).ArrayNum) {
          uVar37 = uVar45;
        }
        if ((uVar37 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        iVar31 = local_108.ArrayNum;
        *(float *)((this->CoarseBarycentricMass).AllocatorInstance.Data + uVar42 * 4) =
             fVar2 * fVar3 + fVar4 * fVar5 + fVar6 * fVar7;
        uVar37 = *(uint *)(pFVar27 + uVar41);
        uVar38 = uVar35;
        if ((int)uVar37 < local_108.ArrayNum) {
          uVar38 = ~uVar37 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        pTVar30 = local_108.DataPtr;
        fVar2 = *(float *)(pFVar26 + local_res20);
        fVar3 = *(float *)(local_108.DataPtr + (int)uVar37);
        fVar4 = *(float *)&local_108.DataPtr[(int)uVar37].field_0x4;
        uVar38 = *(uint *)(pFVar27 + uVar41 + 4);
        fVar5 = *(float *)&local_108.DataPtr[(int)uVar37].field_0x8;
        uVar37 = uVar34;
        if ((int)uVar38 < iVar31) {
          uVar37 = ~uVar38 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        fVar6 = *(float *)(pFVar26 + local_res20 + 4);
        fVar7 = *(float *)(pTVar30 + (int)uVar38);
        fVar8 = *(float *)&pTVar30[(int)uVar38].field_0x4;
        uVar37 = *(uint *)(pFVar27 + uVar41 + 8);
        fVar9 = *(float *)&pTVar30[(int)uVar38].field_0x8;
        uVar38 = uVar34;
        if ((int)uVar37 < iVar31) {
          uVar38 = ~uVar37 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        fVar10 = *(float *)(pFVar26 + local_res20 + 8);
        fVar11 = *(float *)&pTVar30[(int)uVar37].field_0x8;
        fVar12 = *(float *)&pTVar30[(int)uVar37].field_0x4;
        fVar13 = *(float *)(pTVar30 + (int)uVar37);
        uVar37 = uVar34;
        if ((int)uVar43 < (this->FineTargetVelocities).ArrayNum) {
          uVar37 = uVar45;
        }
        if ((uVar37 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        pFVar26 = (this->FineTargetVelocities).AllocatorInstance.Data;
        local_res20 = local_res20 + 0x10;
        uVar44 = (ulonglong)(uVar43 + 1);
        uVar42 = uVar42 + 1;
        *(float *)(pFVar26 + uVar41) = fVar10 * fVar13 + fVar6 * fVar7 + fVar2 * fVar3;
        *(float *)(pFVar26 + uVar41 + 4) = fVar10 * fVar12 + fVar6 * fVar8 + fVar2 * fVar4;
        *(float *)(pFVar26 + uVar41 + 8) = fVar10 * fVar11 + fVar6 * fVar9 + fVar2 * fVar5;
        uVar41 = uVar41 + 0xc;
      } while ((int)(uVar43 + 1) < this->NumParticles);
    }
    if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
  }
  if (bVar46) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

