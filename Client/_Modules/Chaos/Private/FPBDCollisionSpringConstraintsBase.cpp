// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 24

// Apply<Chaos::Softs::FSolverParticles> @ 143c23c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FPBDCollisionSpringConstraintsBase::Apply<Chaos::Softs::FSolverParticles>
          (FPBDCollisionSpringConstraintsBase *this,FSolverParticles *param_1,float param_2)

{
  FScriptContainerElement FVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  longlong lVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  uint uVar45;
  float fVar46;
  float fVar47;
  longlong lStack_170;
  float fStack_160;
  float fStack_15c;
  float fStack_154;
  float fStack_150;
  float fStack_148;
  float fStack_144;
  
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDCollisionSpringConstraintsBase::ApplyDynamicConstraints<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId506,"ChaosPBDCollisionSpring_ApplyDynamic",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionSpringConstraintsBase.cpp"
               ,0x1fa);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDCollisionSpringConstraintsBase::ApplyDynamicConstraints<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId506);
  }
  if (((this->Constraints).ArrayNum != (this->Barys).ArrayNum) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Constraints.Num() == Barys.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionSpringConstraintsBase.cpp"
                          ,0x1fc,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (((this->Constraints).ArrayNum != (this->FlipNormal).ArrayNum) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Constraints.Num() == FlipNormal.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionSpringConstraintsBase.cpp"
                          ,0x1fd,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar6 = (this->FlipNormal).AllocatorInstance.Data;
  uVar25 = 0;
  pFVar7 = (this->Constraints).AllocatorInstance.Data;
  pFVar26 = (this->Barys).AllocatorInstance.Data;
  lVar8 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
  lVar9 = param_1->_padding_;
  if (0 < (this->Constraints).ArrayNum) {
    pFVar18 = pFVar26 + 8;
    pFVar19 = pFVar7 + 8;
    lVar12 = -(longlong)pFVar26;
    lStack_170 = 0;
    fVar38 = __real_38d1b717;
    fVar35 = __real_33d6bf95;
    uVar40 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar43 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    fVar33 = __real_3f800000;
    uVar45 = __xmm_80000000800000008000000080000000;
    fVar47 = __real_322bcc77;
    uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    do {
      lVar15 = (longlong)*(int *)pFVar19;
      lVar20 = (longlong)*(int *)(pFVar19 + -8);
      lVar23 = lVar15 * 0x10;
      lVar16 = (longlong)*(int *)(pFVar19 + -4);
      lVar17 = (longlong)*(int *)(pFVar19 + 4);
      lVar24 = lVar16 * 0x10;
      lVar22 = lVar17 * 0x10;
      lVar21 = lVar20 * 0x10;
      fVar34 = *(float *)(pFVar18 + -8) * *(float *)(lVar24 + 0xc + lVar8) +
               *(float *)(pFVar18 + -4) * *(float *)(lVar23 + 0xc + lVar8) +
               *(float *)(lVar22 + 0xc + lVar8) * *(float *)pFVar18;
      fVar28 = fVar34 + *(float *)(lVar21 + 0xc + lVar8);
      if (fVar35 < fVar28) {
        if (((this->ThicknessWeighted).MapView.MapValues.ArrayNum < 1) ||
           ((float)(*(uint *)&(this->ThicknessWeighted).MapView.OffsetRange.field_0x4 & uVar14) <=
            fVar38)) {
          fVar42 = *(float *)&(this->ThicknessWeighted).MapView.OffsetRange;
          fVar42 = fVar42 + fVar42;
        }
        else {
          uVar14 = 0;
          if ((int)uVar25 < (this->Constraints).ArrayNum) {
            uVar14 = ~uVar25 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar26 = pFVar19 + (longlong)
                              ((this->Constraints).AllocatorInstance.Data + (-8 - (longlong)pFVar7))
          ;
          uVar14 = 0;
          if ((int)uVar25 < (this->Barys).ArrayNum) {
            uVar14 = ~uVar25 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar2 = this->Offset;
          pFVar10 = (this->Barys).AllocatorInstance.Data;
          iVar3 = *(int *)pFVar26;
          iVar4 = *(int *)(pFVar26 + 8);
          iVar5 = *(int *)(pFVar26 + 0xc);
          fVar38 = *(float *)(pFVar18 + (longlong)(pFVar10 + lVar12));
          fVar35 = *(float *)(pFVar18 + (longlong)(pFVar10 + lVar12 + -4));
          fVar42 = *(float *)(pFVar18 + (longlong)(pFVar10 + lVar12 + -8));
          fVar29 = FPBDFlatWeightMap::GetValue
                             (&this->ThicknessWeighted,*(int *)(pFVar26 + 4) - iVar2);
          fVar30 = FPBDFlatWeightMap::GetValue(&this->ThicknessWeighted,iVar3 - iVar2);
          fVar31 = FPBDFlatWeightMap::GetValue(&this->ThicknessWeighted,iVar4 - iVar2);
          fVar32 = FPBDFlatWeightMap::GetValue(&this->ThicknessWeighted,iVar5 - iVar2);
          fVar42 = fVar32 * fVar38 + fVar31 * fVar35 + fVar29 * fVar42 + fVar30;
          uVar40 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar43 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        }
        fVar38 = *(float *)(lVar24 + 8 + lVar8);
        fVar35 = *(float *)(lVar22 + 8 + lVar8);
        fStack_154 = (float)*(undefined8 *)(lVar23 + lVar8);
        fStack_160 = (float)*(undefined8 *)(lVar24 + lVar8);
        fStack_154 = fStack_154 - fStack_160;
        fStack_148 = (float)*(undefined8 *)(lVar22 + lVar8);
        fStack_148 = fStack_148 - fStack_160;
        fStack_144 = (float)((ulonglong)*(undefined8 *)(lVar22 + lVar8) >> 0x20);
        fStack_15c = (float)((ulonglong)*(undefined8 *)(lVar24 + lVar8) >> 0x20);
        fStack_144 = fStack_144 - fStack_15c;
        fVar29 = *(float *)(lVar23 + 8 + lVar8) - fVar38;
        fStack_150 = (float)((ulonglong)*(undefined8 *)(lVar23 + lVar8) >> 0x20);
        if (pFVar6[lStack_170] == (FScriptContainerElement)0x0) {
          fVar35 = fVar35 - fVar38;
          fVar31 = (fStack_150 - fStack_15c) * fVar35 - fVar29 * fStack_144;
          fVar32 = fStack_148 * fVar29 - fStack_154 * fVar35;
          fVar35 = fStack_154 * fStack_144 - fStack_148 * (fStack_150 - fStack_15c);
          fVar38 = fVar31 * fVar31 + fVar32 * fVar32 + fVar35 * fVar35;
          fVar29 = fVar35;
          uVar39 = fVar31;
          fVar30 = fVar32;
          if ((fVar38 != fVar33) &&
             (fVar29 = (float)uVar40,
             uVar39 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X, fVar30 = (float)uVar43
             , fVar47 <= fVar38)) {
            fVar33 = fVar33 / SQRT(fVar38);
            fVar29 = fVar33 * fVar35;
            uVar39 = fVar33 * fVar31;
            fVar30 = fVar33 * fVar32;
          }
        }
        else {
          fVar35 = fVar35 - fVar38;
          fVar38 = (fStack_150 - fStack_15c) * fVar35 - fVar29 * fStack_144;
          fVar35 = fStack_148 * fVar29 - fStack_154 * fVar35;
          fVar30 = fStack_154 * fStack_144 - fStack_148 * (fStack_150 - fStack_15c);
          fVar29 = fVar35 * fVar35 + fVar38 * fVar38 + fVar30 * fVar30;
          if (fVar29 != fVar33) {
            if (fVar29 < fVar47) {
              fVar29 = (float)(uVar40 ^ uVar45);
              uVar39 = (uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X ^ uVar45;
              fVar30 = (float)(uVar43 ^ uVar45);
              goto LAB_143c25908;
            }
            fVar33 = fVar33 / SQRT(fVar29);
            fVar38 = fVar33 * fVar38;
            fVar35 = fVar33 * fVar35;
            fVar30 = fVar33 * fVar30;
          }
          fVar29 = (float)((uint)fVar30 ^ uVar45);
          uVar39 = (uint)fVar38 ^ uVar45;
          fVar30 = (float)((uint)fVar35 ^ uVar45);
        }
LAB_143c25908:
        fVar47 = *(float *)(pFVar18 + -8);
        fVar38 = *(float *)(pFVar18 + -4);
        fVar35 = *(float *)pFVar18;
        fVar44 = fVar47 * *(float *)(lVar24 + lVar8) + fVar38 * *(float *)(lVar23 + lVar8) +
                 fVar35 * *(float *)(lVar22 + lVar8);
        fVar46 = fVar47 * *(float *)(lVar24 + 4 + lVar8) + fVar38 * *(float *)(lVar23 + 4 + lVar8) +
                 fVar35 * *(float *)(lVar22 + 4 + lVar8);
        fVar32 = fVar47 * *(float *)(lVar24 + 8 + lVar8) + fVar38 * *(float *)(lVar23 + 8 + lVar8) +
                 fVar35 * *(float *)(lVar22 + 8 + lVar8);
        fVar31 = (*(float *)(lVar21 + 4 + lVar8) - fVar46) * fVar30 +
                 (*(float *)(lVar21 + lVar8) - fVar44) * (float)uVar39 +
                 (*(float *)(lVar21 + 8 + lVar8) - fVar32) * fVar29;
        fVar38 = __real_38d1b717;
        fVar35 = __real_33d6bf95;
        fVar33 = __real_3f800000;
        uVar45 = __xmm_80000000800000008000000080000000;
        fVar47 = __real_322bcc77;
        uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        if (fVar31 <= fVar42) {
          uVar45 = 0;
          if ((int)uVar25 < (this->ConstraintTypes).ArrayNum) {
            uVar45 = ~uVar25 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          fVar47 = __real_322bcc77;
          FVar1 = (this->ConstraintTypes).AllocatorInstance.Data[lStack_170];
          if ((FVar1 == (FScriptContainerElement)0x0) || (FVar1 != (FScriptContainerElement)0x1)) {
            fVar38 = this->FrictionCoefficient;
          }
          else {
            fVar38 = 0.0;
          }
          fVar42 = fVar42 - fVar31;
          fVar28 = __real_3f800000 / fVar28;
          fVar41 = fVar42 * this->Stiffness;
          fVar36 = 0.0;
          fVar37 = 0.0;
          fVar31 = 0.0;
          fVar35 = (float)uVar39 * fVar41 * fVar28;
          fVar33 = fVar41 * fVar30 * fVar28;
          fVar41 = fVar41 * fVar29 * fVar28;
          if (0.0 < fVar38) {
            fVar31 = *(float *)(pFVar18 + -4);
            fVar36 = *(float *)(pFVar18 + -8);
            fVar37 = *(float *)pFVar18;
            fVar34 = *(float *)(lVar8 + 0xc + lVar20 * 0x10) - fVar34;
            fVar32 = ((*(float *)(lVar21 + 8 + lVar8) - *(float *)(lVar9 + 8 + lVar20 * 0xc)) -
                     (fVar32 - (fVar31 * *(float *)(lVar9 + 8 + lVar15 * 0xc) +
                                fVar36 * *(float *)(lVar9 + 8 + lVar16 * 0xc) +
                               fVar37 * *(float *)(lVar9 + 8 + lVar17 * 0xc)))) + fVar41 * fVar34;
            fVar46 = ((*(float *)(lVar21 + 4 + lVar8) - *(float *)(lVar9 + 4 + lVar20 * 0xc)) -
                     (fVar46 - (fVar31 * *(float *)(lVar9 + 4 + lVar15 * 0xc) +
                                fVar36 * *(float *)(lVar9 + 4 + lVar16 * 0xc) +
                               fVar37 * *(float *)(lVar9 + 4 + lVar17 * 0xc)))) + fVar33 * fVar34;
            fVar31 = ((*(float *)(lVar21 + lVar8) - *(float *)(lVar9 + lVar20 * 0xc)) -
                     (fVar44 - (fVar36 * *(float *)(lVar9 + lVar16 * 0xc) +
                                fVar31 * *(float *)(lVar9 + lVar15 * 0xc) +
                               fVar37 * *(float *)(lVar9 + lVar17 * 0xc)))) + fVar35 * fVar34;
            fVar34 = (float)uVar39 * fVar31 + fVar46 * fVar30 + fVar32 * fVar29;
            fVar31 = fVar31 - (float)uVar39 * fVar34;
            fVar32 = fVar32 - fVar34 * fVar29;
            fVar46 = fVar46 - fVar34 * fVar30;
            fVar38 = fVar38 * fVar42;
            fVar34 = SQRT(fVar31 * fVar31 + fVar46 * fVar46 + fVar32 * fVar32);
            if (fVar34 <= fVar38) {
              fVar38 = fVar34;
            }
            if (__real_322bcc77 <= fVar34) {
              fVar38 = fVar38 / fVar34;
            }
            else {
              fVar38 = 0.0;
            }
            fVar38 = (float)((uint)fVar38 ^ __xmm_80000000800000008000000080000000);
            fVar36 = fVar38 * fVar31 * fVar28;
            fVar37 = fVar38 * fVar46 * fVar28;
            fVar31 = fVar38 * fVar32 * fVar28;
          }
          fVar36 = fVar36 + fVar35;
          fVar37 = fVar37 + fVar33;
          fVar31 = fVar31 + fVar41;
          fVar38 = *(float *)(lVar8 + 0xc + lVar20 * 0x10);
          *(float *)(lVar21 + lVar8) = fVar36 * fVar38 + *(float *)(lVar21 + lVar8);
          *(float *)(lVar21 + 4 + lVar8) = fVar37 * fVar38 + *(float *)(lVar21 + 4 + lVar8);
          *(float *)(lVar21 + 8 + lVar8) = fVar31 * fVar38 + *(float *)(lVar21 + 8 + lVar8);
          fVar38 = *(float *)(lVar8 + 0xc + lVar16 * 0x10) * *(float *)(pFVar18 + -8);
          *(float *)(lVar24 + lVar8) = *(float *)(lVar24 + lVar8) - fVar38 * fVar36;
          *(float *)(lVar24 + 4 + lVar8) = *(float *)(lVar24 + 4 + lVar8) - fVar38 * fVar37;
          *(float *)(lVar24 + 8 + lVar8) = *(float *)(lVar24 + 8 + lVar8) - fVar38 * fVar31;
          fVar38 = *(float *)(lVar8 + 0xc + lVar15 * 0x10) * *(float *)(pFVar18 + -4);
          *(float *)(lVar23 + lVar8) = *(float *)(lVar23 + lVar8) - fVar38 * fVar36;
          *(float *)(lVar23 + 4 + lVar8) = *(float *)(lVar23 + 4 + lVar8) - fVar38 * fVar37;
          *(float *)(lVar23 + 8 + lVar8) = *(float *)(lVar23 + 8 + lVar8) - fVar38 * fVar31;
          fVar38 = *(float *)(lVar8 + 0xc + lVar17 * 0x10) * *(float *)pFVar18;
          *(float *)(lVar22 + lVar8) = *(float *)(lVar22 + lVar8) - fVar38 * fVar36;
          *(float *)(lVar22 + 4 + lVar8) = *(float *)(lVar22 + 4 + lVar8) - fVar38 * fVar37;
          *(float *)(lVar22 + 8 + lVar8) = *(float *)(lVar22 + 8 + lVar8) - fVar38 * fVar31;
          fVar38 = __real_38d1b717;
          fVar35 = __real_33d6bf95;
          uVar40 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar43 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          fVar33 = __real_3f800000;
          uVar45 = __xmm_80000000800000008000000080000000;
          uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        }
      }
      lStack_170 = lStack_170 + 1;
      pFVar19 = pFVar19 + 0x10;
      uVar25 = uVar25 + 1;
      pFVar18 = pFVar18 + 0xc;
    } while ((int)uVar25 < (this->Constraints).ArrayNum);
  }
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Apply<Chaos::Softs::FSolverParticlesRange> @ 143c25230

void __thiscall
Chaos::Softs::FPBDCollisionSpringConstraintsBase::Apply<Chaos::Softs::FSolverParticlesRange>
          (FPBDCollisionSpringConstraintsBase *this,FSolverParticlesRange *param_1,float param_2)

{
  ApplyDynamicConstraints<Chaos::Softs::FSolverParticlesRange>(this,param_1,param_2);
  FPBDKinematicTriangleMeshCollisions::Apply(&this->KinematicCollisions,param_1,param_2);
  return;
}

// ApplyDynamicConstraints<Chaos::Softs::FSolverParticles> @ 143c25280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FPBDCollisionSpringConstraintsBase::
ApplyDynamicConstraints<Chaos::Softs::FSolverParticles>
          (FPBDCollisionSpringConstraintsBase *this,FSolverParticles *param_1,float param_2)

{
  FScriptContainerElement FVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  longlong lVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  uint uVar45;
  float fVar46;
  float fVar47;
  longlong local_170;
  float local_160;
  float fStack_15c;
  float local_154;
  float fStack_150;
  float local_148;
  float fStack_144;
  
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDCollisionSpringConstraintsBase::ApplyDynamicConstraints<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId506,"ChaosPBDCollisionSpring_ApplyDynamic",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionSpringConstraintsBase.cpp"
               ,0x1fa);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDCollisionSpringConstraintsBase::ApplyDynamicConstraints<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId506);
  }
  if (((this->Constraints).ArrayNum != (this->Barys).ArrayNum) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Constraints.Num() == Barys.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionSpringConstraintsBase.cpp"
                          ,0x1fc,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (((this->Constraints).ArrayNum != (this->FlipNormal).ArrayNum) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Constraints.Num() == FlipNormal.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionSpringConstraintsBase.cpp"
                          ,0x1fd,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar6 = (this->FlipNormal).AllocatorInstance.Data;
  uVar25 = 0;
  pFVar7 = (this->Constraints).AllocatorInstance.Data;
  pFVar26 = (this->Barys).AllocatorInstance.Data;
  lVar8 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
  lVar9 = param_1->_padding_;
  if (0 < (this->Constraints).ArrayNum) {
    pFVar18 = pFVar26 + 8;
    pFVar19 = pFVar7 + 8;
    lVar12 = -(longlong)pFVar26;
    local_170 = 0;
    fVar38 = __real_38d1b717;
    fVar35 = __real_33d6bf95;
    uVar40 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar43 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    fVar33 = __real_3f800000;
    uVar45 = __xmm_80000000800000008000000080000000;
    fVar47 = __real_322bcc77;
    uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    do {
      lVar15 = (longlong)*(int *)pFVar19;
      lVar20 = (longlong)*(int *)(pFVar19 + -8);
      lVar23 = lVar15 * 0x10;
      lVar16 = (longlong)*(int *)(pFVar19 + -4);
      lVar17 = (longlong)*(int *)(pFVar19 + 4);
      lVar24 = lVar16 * 0x10;
      lVar22 = lVar17 * 0x10;
      lVar21 = lVar20 * 0x10;
      fVar34 = *(float *)(pFVar18 + -8) * *(float *)(lVar24 + 0xc + lVar8) +
               *(float *)(pFVar18 + -4) * *(float *)(lVar23 + 0xc + lVar8) +
               *(float *)(lVar22 + 0xc + lVar8) * *(float *)pFVar18;
      fVar28 = fVar34 + *(float *)(lVar21 + 0xc + lVar8);
      if (fVar35 < fVar28) {
        if (((this->ThicknessWeighted).MapView.MapValues.ArrayNum < 1) ||
           ((float)(*(uint *)&(this->ThicknessWeighted).MapView.OffsetRange.field_0x4 & uVar14) <=
            fVar38)) {
          fVar42 = *(float *)&(this->ThicknessWeighted).MapView.OffsetRange;
          fVar42 = fVar42 + fVar42;
        }
        else {
          uVar14 = 0;
          if ((int)uVar25 < (this->Constraints).ArrayNum) {
            uVar14 = ~uVar25 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar26 = pFVar19 + (longlong)
                              ((this->Constraints).AllocatorInstance.Data + (-8 - (longlong)pFVar7))
          ;
          uVar14 = 0;
          if ((int)uVar25 < (this->Barys).ArrayNum) {
            uVar14 = ~uVar25 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar2 = this->Offset;
          pFVar10 = (this->Barys).AllocatorInstance.Data;
          iVar3 = *(int *)pFVar26;
          iVar4 = *(int *)(pFVar26 + 8);
          iVar5 = *(int *)(pFVar26 + 0xc);
          fVar38 = *(float *)(pFVar18 + (longlong)(pFVar10 + lVar12));
          fVar35 = *(float *)(pFVar18 + (longlong)(pFVar10 + lVar12 + -4));
          fVar42 = *(float *)(pFVar18 + (longlong)(pFVar10 + lVar12 + -8));
          fVar29 = FPBDFlatWeightMap::GetValue
                             (&this->ThicknessWeighted,*(int *)(pFVar26 + 4) - iVar2);
          fVar30 = FPBDFlatWeightMap::GetValue(&this->ThicknessWeighted,iVar3 - iVar2);
          fVar31 = FPBDFlatWeightMap::GetValue(&this->ThicknessWeighted,iVar4 - iVar2);
          fVar32 = FPBDFlatWeightMap::GetValue(&this->ThicknessWeighted,iVar5 - iVar2);
          fVar42 = fVar32 * fVar38 + fVar31 * fVar35 + fVar29 * fVar42 + fVar30;
          uVar40 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar43 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        }
        fVar38 = *(float *)(lVar24 + 8 + lVar8);
        fVar35 = *(float *)(lVar22 + 8 + lVar8);
        local_154 = (float)*(undefined8 *)(lVar23 + lVar8);
        local_160 = (float)*(undefined8 *)(lVar24 + lVar8);
        local_154 = local_154 - local_160;
        local_148 = (float)*(undefined8 *)(lVar22 + lVar8);
        local_148 = local_148 - local_160;
        fStack_144 = (float)((ulonglong)*(undefined8 *)(lVar22 + lVar8) >> 0x20);
        fStack_15c = (float)((ulonglong)*(undefined8 *)(lVar24 + lVar8) >> 0x20);
        fStack_144 = fStack_144 - fStack_15c;
        fVar29 = *(float *)(lVar23 + 8 + lVar8) - fVar38;
        fStack_150 = (float)((ulonglong)*(undefined8 *)(lVar23 + lVar8) >> 0x20);
        if (pFVar6[local_170] == (FScriptContainerElement)0x0) {
          fVar35 = fVar35 - fVar38;
          fVar31 = (fStack_150 - fStack_15c) * fVar35 - fVar29 * fStack_144;
          fVar32 = local_148 * fVar29 - local_154 * fVar35;
          fVar35 = local_154 * fStack_144 - local_148 * (fStack_150 - fStack_15c);
          fVar38 = fVar31 * fVar31 + fVar32 * fVar32 + fVar35 * fVar35;
          fVar29 = fVar35;
          uVar39 = fVar31;
          fVar30 = fVar32;
          if ((fVar38 != fVar33) &&
             (fVar29 = (float)uVar40,
             uVar39 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X, fVar30 = (float)uVar43
             , fVar47 <= fVar38)) {
            fVar33 = fVar33 / SQRT(fVar38);
            fVar29 = fVar33 * fVar35;
            uVar39 = fVar33 * fVar31;
            fVar30 = fVar33 * fVar32;
          }
        }
        else {
          fVar35 = fVar35 - fVar38;
          fVar38 = (fStack_150 - fStack_15c) * fVar35 - fVar29 * fStack_144;
          fVar35 = local_148 * fVar29 - local_154 * fVar35;
          fVar30 = local_154 * fStack_144 - local_148 * (fStack_150 - fStack_15c);
          fVar29 = fVar35 * fVar35 + fVar38 * fVar38 + fVar30 * fVar30;
          if (fVar29 != fVar33) {
            if (fVar29 < fVar47) {
              fVar29 = (float)(uVar40 ^ uVar45);
              uVar39 = (uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X ^ uVar45;
              fVar30 = (float)(uVar43 ^ uVar45);
              goto LAB_143c25908;
            }
            fVar33 = fVar33 / SQRT(fVar29);
            fVar38 = fVar33 * fVar38;
            fVar35 = fVar33 * fVar35;
            fVar30 = fVar33 * fVar30;
          }
          fVar29 = (float)((uint)fVar30 ^ uVar45);
          uVar39 = (uint)fVar38 ^ uVar45;
          fVar30 = (float)((uint)fVar35 ^ uVar45);
        }
LAB_143c25908:
        fVar47 = *(float *)(pFVar18 + -8);
        fVar38 = *(float *)(pFVar18 + -4);
        fVar35 = *(float *)pFVar18;
        fVar44 = fVar47 * *(float *)(lVar24 + lVar8) + fVar38 * *(float *)(lVar23 + lVar8) +
                 fVar35 * *(float *)(lVar22 + lVar8);
        fVar46 = fVar47 * *(float *)(lVar24 + 4 + lVar8) + fVar38 * *(float *)(lVar23 + 4 + lVar8) +
                 fVar35 * *(float *)(lVar22 + 4 + lVar8);
        fVar32 = fVar47 * *(float *)(lVar24 + 8 + lVar8) + fVar38 * *(float *)(lVar23 + 8 + lVar8) +
                 fVar35 * *(float *)(lVar22 + 8 + lVar8);
        fVar31 = (*(float *)(lVar21 + 4 + lVar8) - fVar46) * fVar30 +
                 (*(float *)(lVar21 + lVar8) - fVar44) * (float)uVar39 +
                 (*(float *)(lVar21 + 8 + lVar8) - fVar32) * fVar29;
        fVar38 = __real_38d1b717;
        fVar35 = __real_33d6bf95;
        fVar33 = __real_3f800000;
        uVar45 = __xmm_80000000800000008000000080000000;
        fVar47 = __real_322bcc77;
        uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        if (fVar31 <= fVar42) {
          uVar45 = 0;
          if ((int)uVar25 < (this->ConstraintTypes).ArrayNum) {
            uVar45 = ~uVar25 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          fVar47 = __real_322bcc77;
          FVar1 = (this->ConstraintTypes).AllocatorInstance.Data[local_170];
          if ((FVar1 == (FScriptContainerElement)0x0) || (FVar1 != (FScriptContainerElement)0x1)) {
            fVar38 = this->FrictionCoefficient;
          }
          else {
            fVar38 = 0.0;
          }
          fVar42 = fVar42 - fVar31;
          fVar28 = __real_3f800000 / fVar28;
          fVar41 = fVar42 * this->Stiffness;
          fVar36 = 0.0;
          fVar37 = 0.0;
          fVar31 = 0.0;
          fVar35 = (float)uVar39 * fVar41 * fVar28;
          fVar33 = fVar41 * fVar30 * fVar28;
          fVar41 = fVar41 * fVar29 * fVar28;
          if (0.0 < fVar38) {
            fVar31 = *(float *)(pFVar18 + -4);
            fVar36 = *(float *)(pFVar18 + -8);
            fVar37 = *(float *)pFVar18;
            fVar34 = *(float *)(lVar8 + 0xc + lVar20 * 0x10) - fVar34;
            fVar32 = ((*(float *)(lVar21 + 8 + lVar8) - *(float *)(lVar9 + 8 + lVar20 * 0xc)) -
                     (fVar32 - (fVar31 * *(float *)(lVar9 + 8 + lVar15 * 0xc) +
                                fVar36 * *(float *)(lVar9 + 8 + lVar16 * 0xc) +
                               fVar37 * *(float *)(lVar9 + 8 + lVar17 * 0xc)))) + fVar41 * fVar34;
            fVar46 = ((*(float *)(lVar21 + 4 + lVar8) - *(float *)(lVar9 + 4 + lVar20 * 0xc)) -
                     (fVar46 - (fVar31 * *(float *)(lVar9 + 4 + lVar15 * 0xc) +
                                fVar36 * *(float *)(lVar9 + 4 + lVar16 * 0xc) +
                               fVar37 * *(float *)(lVar9 + 4 + lVar17 * 0xc)))) + fVar33 * fVar34;
            fVar31 = ((*(float *)(lVar21 + lVar8) - *(float *)(lVar9 + lVar20 * 0xc)) -
                     (fVar44 - (fVar36 * *(float *)(lVar9 + lVar16 * 0xc) +
                                fVar31 * *(float *)(lVar9 + lVar15 * 0xc) +
                               fVar37 * *(float *)(lVar9 + lVar17 * 0xc)))) + fVar35 * fVar34;
            fVar34 = (float)uVar39 * fVar31 + fVar46 * fVar30 + fVar32 * fVar29;
            fVar31 = fVar31 - (float)uVar39 * fVar34;
            fVar32 = fVar32 - fVar34 * fVar29;
            fVar46 = fVar46 - fVar34 * fVar30;
            fVar38 = fVar38 * fVar42;
            fVar34 = SQRT(fVar31 * fVar31 + fVar46 * fVar46 + fVar32 * fVar32);
            if (fVar34 <= fVar38) {
              fVar38 = fVar34;
            }
            if (__real_322bcc77 <= fVar34) {
              fVar38 = fVar38 / fVar34;
            }
            else {
              fVar38 = 0.0;
            }
            fVar38 = (float)((uint)fVar38 ^ __xmm_80000000800000008000000080000000);
            fVar36 = fVar38 * fVar31 * fVar28;
            fVar37 = fVar38 * fVar46 * fVar28;
            fVar31 = fVar38 * fVar32 * fVar28;
          }
          fVar36 = fVar36 + fVar35;
          fVar37 = fVar37 + fVar33;
          fVar31 = fVar31 + fVar41;
          fVar38 = *(float *)(lVar8 + 0xc + lVar20 * 0x10);
          *(float *)(lVar21 + lVar8) = fVar36 * fVar38 + *(float *)(lVar21 + lVar8);
          *(float *)(lVar21 + 4 + lVar8) = fVar37 * fVar38 + *(float *)(lVar21 + 4 + lVar8);
          *(float *)(lVar21 + 8 + lVar8) = fVar31 * fVar38 + *(float *)(lVar21 + 8 + lVar8);
          fVar38 = *(float *)(lVar8 + 0xc + lVar16 * 0x10) * *(float *)(pFVar18 + -8);
          *(float *)(lVar24 + lVar8) = *(float *)(lVar24 + lVar8) - fVar38 * fVar36;
          *(float *)(lVar24 + 4 + lVar8) = *(float *)(lVar24 + 4 + lVar8) - fVar38 * fVar37;
          *(float *)(lVar24 + 8 + lVar8) = *(float *)(lVar24 + 8 + lVar8) - fVar38 * fVar31;
          fVar38 = *(float *)(lVar8 + 0xc + lVar15 * 0x10) * *(float *)(pFVar18 + -4);
          *(float *)(lVar23 + lVar8) = *(float *)(lVar23 + lVar8) - fVar38 * fVar36;
          *(float *)(lVar23 + 4 + lVar8) = *(float *)(lVar23 + 4 + lVar8) - fVar38 * fVar37;
          *(float *)(lVar23 + 8 + lVar8) = *(float *)(lVar23 + 8 + lVar8) - fVar38 * fVar31;
          fVar38 = *(float *)(lVar8 + 0xc + lVar17 * 0x10) * *(float *)pFVar18;
          *(float *)(lVar22 + lVar8) = *(float *)(lVar22 + lVar8) - fVar38 * fVar36;
          *(float *)(lVar22 + 4 + lVar8) = *(float *)(lVar22 + 4 + lVar8) - fVar38 * fVar37;
          *(float *)(lVar22 + 8 + lVar8) = *(float *)(lVar22 + 8 + lVar8) - fVar38 * fVar31;
          fVar38 = __real_38d1b717;
          fVar35 = __real_33d6bf95;
          uVar40 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar43 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          fVar33 = __real_3f800000;
          uVar45 = __xmm_80000000800000008000000080000000;
          uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        }
      }
      local_170 = local_170 + 1;
      pFVar19 = pFVar19 + 0x10;
      uVar25 = uVar25 + 1;
      pFVar18 = pFVar18 + 0xc;
    } while ((int)uVar25 < (this->Constraints).ArrayNum);
  }
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyDynamicConstraints<Chaos::Softs::FSolverParticlesRange> @ 143c25f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FPBDCollisionSpringConstraintsBase::
ApplyDynamicConstraints<Chaos::Softs::FSolverParticlesRange>
          (FPBDCollisionSpringConstraintsBase *this,FSolverParticlesRange *param_1,float param_2)

{
  FScriptContainerElement FVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FPAndInvM *pFVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  code *pcVar15;
  longlong lVar16;
  bool bVar17;
  uint uVar18;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  uint uVar47;
  longlong local_170;
  float local_148;
  float fStack_144;
  float local_13c;
  float fStack_138;
  float local_130;
  float fStack_12c;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_e8 [11];
  
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDCollisionSpringConstraintsBase::ApplyDynamicConstraints<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId506,"ChaosPBDCollisionSpring_ApplyDynamic",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionSpringConstraintsBase.cpp"
               ,0x1fa);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDCollisionSpringConstraintsBase::ApplyDynamicConstraints<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId506);
  }
  if (((this->Constraints).ArrayNum != (this->Barys).ArrayNum) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Constraints.Num() == Barys.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionSpringConstraintsBase.cpp"
                          ,0x1fc,L""), bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if (((this->Constraints).ArrayNum != (this->FlipNormal).ArrayNum) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Constraints.Num() == FlipNormal.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionSpringConstraintsBase.cpp"
                          ,0x1fd,L""), bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pFVar27 = (this->Barys).AllocatorInstance.Data;
  pFVar10 = (this->Constraints).AllocatorInstance.Data;
  pFVar11 = (this->FlipNormal).AllocatorInstance.Data;
  pTVar19 = FSolverParticlesRange::GetPAndInvM(param_1,local_e8);
  pFVar12 = pTVar19->DataPtr;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  lVar13 = *(longlong *)&param_1->field_0x8;
  if (((*(int *)&param_1->field_0x10 < 0) ||
      (*(int *)(lVar13 + 0x30) < *(int *)&param_1->field_0x10 + *(int *)&param_1->field_0x14)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x52,L""), bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  lVar13 = *(longlong *)(lVar13 + 0x28) + (longlong)*(int *)&param_1->field_0x10 * 0xc;
  if ((*(int *)&param_1->field_0x14 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  uVar25 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    pFVar26 = pFVar10 + 8;
    pFVar24 = pFVar27 + 8;
    lVar16 = -(longlong)pFVar27;
    local_170 = 0;
    fVar37 = __real_33d6bf95;
    uVar42 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar44 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    fVar33 = __real_3f800000;
    uVar47 = __xmm_80000000800000008000000080000000;
    uVar18 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar36 = __real_38d1b717;
    do {
      iVar2 = *(int *)(pFVar26 + -4);
      iVar3 = *(int *)pFVar26;
      iVar4 = *(int *)(pFVar26 + 4);
      iVar5 = *(int *)(pFVar26 + -8);
      fVar34 = *(float *)(pFVar24 + -4) * pFVar12[iVar3].InvM +
               *(float *)(pFVar24 + -8) * pFVar12[iVar2].InvM +
               pFVar12[iVar4].InvM * *(float *)pFVar24;
      fVar39 = fVar34 + pFVar12[iVar5].InvM;
      if (fVar37 < fVar39) {
        if (((this->ThicknessWeighted).MapView.MapValues.ArrayNum < 1) ||
           ((float)(*(uint *)&(this->ThicknessWeighted).MapView.OffsetRange.field_0x4 & uVar18) <=
            fVar36)) {
          fVar41 = *(float *)&(this->ThicknessWeighted).MapView.OffsetRange;
          fVar41 = fVar41 + fVar41;
        }
        else {
          uVar18 = 0;
          if ((int)uVar25 < (this->Constraints).ArrayNum) {
            uVar18 = ~uVar25 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pFVar27 = pFVar26 + (longlong)
                              ((this->Constraints).AllocatorInstance.Data + (-8 - (longlong)pFVar10)
                              );
          uVar18 = 0;
          if ((int)uVar25 < (this->Barys).ArrayNum) {
            uVar18 = ~uVar25 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          iVar6 = this->Offset;
          pFVar14 = (this->Barys).AllocatorInstance.Data;
          iVar7 = *(int *)pFVar27;
          iVar8 = *(int *)(pFVar27 + 8);
          iVar9 = *(int *)(pFVar27 + 0xc);
          fVar37 = *(float *)(pFVar24 + (longlong)(pFVar14 + lVar16));
          fVar36 = *(float *)(pFVar24 + (longlong)(pFVar14 + lVar16 + -4));
          fVar41 = *(float *)(pFVar24 + (longlong)(pFVar14 + lVar16 + -8));
          fVar29 = FPBDFlatWeightMap::GetValue
                             (&this->ThicknessWeighted,*(int *)(pFVar27 + 4) - iVar6);
          fVar30 = FPBDFlatWeightMap::GetValue(&this->ThicknessWeighted,iVar7 - iVar6);
          fVar31 = FPBDFlatWeightMap::GetValue(&this->ThicknessWeighted,iVar8 - iVar6);
          fVar32 = FPBDFlatWeightMap::GetValue(&this->ThicknessWeighted,iVar9 - iVar6);
          fVar41 = fVar32 * fVar37 + fVar31 * fVar36 + fVar29 * fVar41 + fVar30;
          uVar42 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar44 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        }
        fVar37 = *(float *)&pFVar12[iVar2].P.field_0x8;
        fVar36 = *(float *)&pFVar12[iVar4].P.field_0x8;
        local_13c = (float)*(undefined8 *)&pFVar12[iVar3].P;
        local_148 = (float)*(undefined8 *)&pFVar12[iVar2].P;
        local_13c = local_13c - local_148;
        local_130 = (float)*(undefined8 *)&pFVar12[iVar4].P;
        local_130 = local_130 - local_148;
        fStack_12c = (float)((ulonglong)*(undefined8 *)&pFVar12[iVar4].P >> 0x20);
        fStack_144 = (float)((ulonglong)*(undefined8 *)&pFVar12[iVar2].P >> 0x20);
        fStack_12c = fStack_12c - fStack_144;
        fVar29 = *(float *)&pFVar12[iVar3].P.field_0x8 - fVar37;
        fStack_138 = (float)((ulonglong)*(undefined8 *)&pFVar12[iVar3].P >> 0x20);
        if (pFVar11[local_170] == (FScriptContainerElement)0x0) {
          fVar36 = fVar36 - fVar37;
          fVar31 = (fStack_138 - fStack_144) * fVar36 - fVar29 * fStack_12c;
          fVar32 = local_130 * fVar29 - local_13c * fVar36;
          fVar36 = local_13c * fStack_12c - local_130 * (fStack_138 - fStack_144);
          fVar37 = fVar32 * fVar32 + fVar31 * fVar31 + fVar36 * fVar36;
          fVar29 = fVar36;
          uVar38 = fVar31;
          fVar30 = fVar32;
          if ((fVar37 != fVar33) &&
             (fVar29 = (float)uVar42,
             uVar38 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X, fVar30 = (float)uVar44
             , __real_322bcc77 <= fVar37)) {
            fVar33 = fVar33 / SQRT(fVar37);
            fVar29 = fVar33 * fVar36;
            uVar38 = fVar33 * fVar31;
            fVar30 = fVar33 * fVar32;
          }
        }
        else {
          fVar36 = fVar36 - fVar37;
          fVar37 = (fStack_138 - fStack_144) * fVar36 - fVar29 * fStack_12c;
          fVar36 = local_130 * fVar29 - local_13c * fVar36;
          fVar30 = local_13c * fStack_12c - local_130 * (fStack_138 - fStack_144);
          fVar29 = fVar36 * fVar36 + fVar37 * fVar37 + fVar30 * fVar30;
          if (fVar29 != fVar33) {
            if (fVar29 < __real_322bcc77) {
              fVar29 = (float)(uVar42 ^ uVar47);
              uVar38 = (uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X ^ uVar47;
              fVar30 = (float)(uVar44 ^ uVar47);
              goto LAB_143c2669a;
            }
            fVar33 = fVar33 / SQRT(fVar29);
            fVar37 = fVar33 * fVar37;
            fVar36 = fVar33 * fVar36;
            fVar30 = fVar33 * fVar30;
          }
          fVar29 = (float)((uint)fVar30 ^ uVar47);
          uVar38 = (uint)fVar37 ^ uVar47;
          fVar30 = (float)((uint)fVar36 ^ uVar47);
        }
LAB_143c2669a:
        fVar37 = *(float *)(pFVar24 + -8);
        fVar33 = *(float *)(pFVar24 + -4);
        fVar36 = *(float *)pFVar24;
        fVar46 = fVar37 * *(float *)&pFVar12[iVar2].P + fVar33 * *(float *)&pFVar12[iVar3].P +
                 fVar36 * *(float *)&pFVar12[iVar4].P;
        fVar31 = fVar37 * *(float *)&pFVar12[iVar2].P.field_0x4 +
                 fVar33 * *(float *)&pFVar12[iVar3].P.field_0x4 +
                 fVar36 * *(float *)&pFVar12[iVar4].P.field_0x4;
        fVar45 = fVar37 * *(float *)&pFVar12[iVar2].P.field_0x8 +
                 fVar33 * *(float *)&pFVar12[iVar3].P.field_0x8 +
                 fVar36 * *(float *)&pFVar12[iVar4].P.field_0x8;
        fVar32 = (*(float *)&pFVar12[iVar5].P.field_0x4 - fVar31) * fVar30 +
                 (*(float *)&pFVar12[iVar5].P - fVar46) * (float)uVar38 +
                 (*(float *)&pFVar12[iVar5].P.field_0x8 - fVar45) * fVar29;
        fVar37 = __real_33d6bf95;
        fVar33 = __real_3f800000;
        uVar47 = __xmm_80000000800000008000000080000000;
        uVar18 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        fVar36 = __real_38d1b717;
        if (fVar32 <= fVar41) {
          uVar47 = 0;
          if ((int)uVar25 < (this->ConstraintTypes).ArrayNum) {
            uVar47 = ~uVar25 >> 0x1f;
          }
          if ((uVar47 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          uVar47 = __xmm_80000000800000008000000080000000;
          FVar1 = (this->ConstraintTypes).AllocatorInstance.Data[local_170];
          if ((FVar1 == (FScriptContainerElement)0x0) || (FVar1 != (FScriptContainerElement)0x1)) {
            fVar37 = this->FrictionCoefficient;
          }
          else {
            fVar37 = 0.0;
          }
          fVar41 = fVar41 - fVar32;
          fVar33 = __real_3f800000 / fVar39;
          fVar36 = fVar41 * this->Stiffness;
          fVar35 = 0.0;
          fVar32 = 0.0;
          fVar40 = (float)uVar38 * fVar36 * fVar33;
          fVar43 = fVar30 * fVar36 * fVar33;
          fVar33 = fVar29 * fVar36 * fVar33;
          fVar36 = 0.0;
          if (0.0 < fVar37) {
            fVar36 = *(float *)pFVar24;
            lVar20 = (longlong)iVar5;
            fVar32 = *(float *)(pFVar24 + -8);
            fVar35 = *(float *)(pFVar24 + -4);
            lVar21 = (longlong)iVar2;
            lVar22 = (longlong)iVar3;
            lVar23 = (longlong)iVar4;
            fVar34 = pFVar12[iVar5].InvM - fVar34;
            fVar45 = ((*(float *)&pFVar12[iVar5].P.field_0x8 - *(float *)(lVar13 + 8 + lVar20 * 0xc)
                      ) - (fVar45 - (fVar32 * *(float *)(lVar13 + 8 + lVar21 * 0xc) +
                                     fVar35 * *(float *)(lVar13 + 8 + lVar22 * 0xc) +
                                    fVar36 * *(float *)(lVar13 + 8 + lVar23 * 0xc)))) +
                     fVar34 * fVar33;
            fVar31 = ((*(float *)&pFVar12[iVar5].P.field_0x4 - *(float *)(lVar13 + 4 + lVar20 * 0xc)
                      ) - (fVar31 - (fVar32 * *(float *)(lVar13 + 4 + lVar21 * 0xc) +
                                     fVar35 * *(float *)(lVar13 + 4 + lVar22 * 0xc) +
                                    fVar36 * *(float *)(lVar13 + 4 + lVar23 * 0xc)))) +
                     fVar34 * fVar43;
            fVar34 = ((*(float *)&pFVar12[iVar5].P - *(float *)(lVar13 + lVar20 * 0xc)) -
                     (fVar46 - (fVar32 * *(float *)(lVar13 + lVar21 * 0xc) +
                                fVar35 * *(float *)(lVar13 + lVar22 * 0xc) +
                               fVar36 * *(float *)(lVar13 + lVar23 * 0xc)))) + fVar34 * fVar40;
            fVar36 = (float)uVar38 * fVar34 + fVar30 * fVar31 + fVar29 * fVar45;
            fVar31 = fVar31 - fVar30 * fVar36;
            fVar34 = fVar34 - (float)uVar38 * fVar36;
            fVar45 = fVar45 - fVar29 * fVar36;
            fVar37 = fVar37 * fVar41;
            fVar36 = SQRT(fVar31 * fVar31 + fVar34 * fVar34 + fVar45 * fVar45);
            if (fVar36 <= fVar37) {
              fVar37 = fVar36;
            }
            if (__real_322bcc77 <= fVar36) {
              fVar37 = fVar37 / fVar36;
            }
            else {
              fVar37 = 0.0;
            }
            fVar37 = (float)((uint)fVar37 ^ __xmm_80000000800000008000000080000000);
            fVar32 = (fVar37 * fVar34) / fVar39;
            fVar35 = (fVar37 * fVar31) / fVar39;
            fVar36 = (fVar37 * fVar45) / fVar39;
          }
          fVar33 = fVar33 + fVar36;
          fVar40 = fVar40 + fVar32;
          fVar43 = fVar43 + fVar35;
          fVar37 = pFVar12[iVar5].InvM;
          fVar36 = *(float *)&pFVar12[iVar5].P.field_0x4;
          *(float *)&pFVar12[iVar5].P = fVar40 * fVar37 + *(float *)&pFVar12[iVar5].P;
          *(float *)&pFVar12[iVar5].P.field_0x4 = fVar43 * fVar37 + fVar36;
          *(float *)&pFVar12[iVar5].P.field_0x8 =
               fVar33 * fVar37 + *(float *)&pFVar12[iVar5].P.field_0x8;
          fVar37 = pFVar12[iVar2].InvM * *(float *)(pFVar24 + -8);
          *(float *)&pFVar12[iVar2].P = *(float *)&pFVar12[iVar2].P - fVar40 * fVar37;
          *(float *)&pFVar12[iVar2].P.field_0x4 =
               *(float *)&pFVar12[iVar2].P.field_0x4 - fVar43 * fVar37;
          *(float *)&pFVar12[iVar2].P.field_0x8 =
               *(float *)&pFVar12[iVar2].P.field_0x8 - fVar33 * fVar37;
          fVar37 = pFVar12[iVar3].InvM * *(float *)(pFVar24 + -4);
          *(float *)&pFVar12[iVar3].P = *(float *)&pFVar12[iVar3].P - fVar40 * fVar37;
          *(float *)&pFVar12[iVar3].P.field_0x4 =
               *(float *)&pFVar12[iVar3].P.field_0x4 - fVar43 * fVar37;
          *(float *)&pFVar12[iVar3].P.field_0x8 =
               *(float *)&pFVar12[iVar3].P.field_0x8 - fVar33 * fVar37;
          fVar37 = pFVar12[iVar4].InvM * *(float *)pFVar24;
          *(float *)&pFVar12[iVar4].P = *(float *)&pFVar12[iVar4].P - fVar37 * fVar40;
          *(float *)&pFVar12[iVar4].P.field_0x4 =
               *(float *)&pFVar12[iVar4].P.field_0x4 - fVar37 * fVar43;
          *(float *)&pFVar12[iVar4].P.field_0x8 =
               *(float *)&pFVar12[iVar4].P.field_0x8 - fVar37 * fVar33;
          fVar37 = __real_33d6bf95;
          uVar42 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar44 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          fVar33 = __real_3f800000;
          uVar18 = __xmm_7fffffff7fffffff7fffffff7fffffff;
          fVar36 = __real_38d1b717;
        }
      }
      local_170 = local_170 + 1;
      pFVar26 = pFVar26 + 0x10;
      uVar25 = uVar25 + 1;
      pFVar24 = pFVar24 + 0xc;
    } while ((int)uVar25 < (this->Constraints).ArrayNum);
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetDelta<Chaos::Softs::FSolverParticles> @ 143c2e090

TVector<float,3> * __thiscall
Chaos::Softs::FPBDCollisionSpringConstraintsBase::GetDelta<Chaos::Softs::FSolverParticles>
          (FPBDCollisionSpringConstraintsBase *this,TVector<float,3> *__return_storage_ptr__,
          FSolverParticles *param_1,int param_2)

{
  float fVar1;
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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  code *pcVar27;
  bool bVar28;
  uint uVar29;
  TVector<float,3> *pTVar30;
  TVector<float,3> *pTVar31;
  TVector<float,3> *pTVar32;
  TVector<float,3> *pTVar33;
  longlong lVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  undefined4 uVar49;
  float fVar50;
  float fVar51;
  float local_138;
  float fStack_134;
  float local_12c;
  float fStack_128;
  float local_120;
  float fStack_11c;
  
  lVar34 = (longlong)param_2;
  uVar35 = (uint)~param_2 >> 0x1f;
  uVar29 = 0;
  if (param_2 < (this->Constraints).ArrayNum) {
    uVar29 = uVar35;
  }
  if ((uVar29 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar27 = (code *)swi(3);
    pTVar30 = (TVector<float,3> *)(*pcVar27)();
    return pTVar30;
  }
  pFVar25 = (this->Constraints).AllocatorInstance.Data;
  iVar21 = *(int *)(pFVar25 + lVar34 * 0x10);
  iVar22 = *(int *)(pFVar25 + lVar34 * 0x10 + 4);
  iVar23 = *(int *)(pFVar25 + lVar34 * 0x10 + 8);
  iVar24 = *(int *)(pFVar25 + lVar34 * 0x10 + 0xc);
  uVar29 = 0;
  if (param_2 < (this->Barys).ArrayNum) {
    uVar29 = uVar35;
  }
  if ((uVar29 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar27 = (code *)swi(3);
    pTVar30 = (TVector<float,3> *)(*pcVar27)();
    return pTVar30;
  }
  pFVar25 = (this->Barys).AllocatorInstance.Data;
  uVar29 = 0;
  if (param_2 < (this->Barys).ArrayNum) {
    uVar29 = uVar35;
  }
  if ((uVar29 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar27 = (code *)swi(3);
    pTVar30 = (TVector<float,3> *)(*pcVar27)();
    return pTVar30;
  }
  pFVar26 = (this->Barys).AllocatorInstance.Data;
  uVar29 = 0;
  if (param_2 < (this->Barys).ArrayNum) {
    uVar29 = uVar35;
  }
  if ((uVar29 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar27 = (code *)swi(3);
    pTVar30 = (TVector<float,3> *)(*pcVar27)();
    return pTVar30;
  }
  fVar39 = *(float *)((this->Barys).AllocatorInstance.Data + lVar34 * 0xc + 8);
  fVar42 = *(float *)(pFVar26 + lVar34 * 0xc + 4);
  fVar48 = *(float *)(pFVar25 + lVar34 * 0xc);
  fVar36 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar22);
  fVar37 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar23);
  fVar38 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar24);
  fVar42 = fVar38 * fVar39 + fVar37 * fVar42 + fVar36 * fVar48;
  fVar39 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar21);
  fVar39 = fVar39 + fVar42;
  if (fVar39 <= __real_33d6bf95) goto LAB_143c2e960;
  pTVar30 = FSolverParticles::P(param_1,iVar21);
  pTVar31 = FSolverParticles::P(param_1,iVar22);
  pTVar32 = FSolverParticles::P(param_1,iVar23);
  pTVar33 = FSolverParticles::P(param_1,iVar24);
  fVar38 = GetConstraintThickness(this,param_2);
  fVar48 = *(float *)&pTVar31->field_0x8;
  uVar18 = *(undefined8 *)pTVar31;
  uVar19 = *(undefined8 *)pTVar32;
  fVar36 = *(float *)&pTVar32->field_0x8;
  uVar20 = *(undefined8 *)pTVar33;
  fVar37 = *(float *)&pTVar33->field_0x8;
  uVar29 = 0;
  if (param_2 < (this->FlipNormal).ArrayNum) {
    uVar29 = uVar35;
  }
  if ((uVar29 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar27 = (code *)swi(3);
    pTVar30 = (TVector<float,3> *)(*pcVar27)();
    return pTVar30;
  }
  fVar51 = __real_3f800000;
  fVar36 = fVar36 - fVar48;
  local_12c = (float)uVar19;
  local_138 = (float)uVar18;
  fStack_128 = (float)((ulonglong)uVar19 >> 0x20);
  fStack_134 = (float)((ulonglong)uVar18 >> 0x20);
  fVar37 = fVar37 - fVar48;
  local_120 = (float)uVar20;
  fStack_11c = (float)((ulonglong)uVar20 >> 0x20);
  fVar46 = (fStack_128 - fStack_134) * fVar37 - fVar36 * (fStack_11c - fStack_134);
  fVar48 = (local_120 - local_138) * fVar36 - (local_12c - local_138) * fVar37;
  fVar37 = (local_12c - local_138) * (fStack_11c - fStack_134) -
           (local_120 - local_138) * (fStack_128 - fStack_134);
  fVar36 = fVar48 * fVar48 + fVar46 * fVar46 + fVar37 * fVar37;
  if ((this->FlipNormal).AllocatorInstance.Data[lVar34] == (FScriptContainerElement)0x0) {
    uVar45 = fVar37;
    uVar47 = fVar46;
    uVar49 = fVar48;
    if ((fVar36 != __real_3f800000) &&
       (uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
       uVar47 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
       uVar49 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y, __real_322bcc77 <= fVar36))
    {
      fVar36 = __real_3f800000 / SQRT(fVar36);
      uVar45 = fVar36 * fVar37;
      uVar47 = fVar36 * fVar46;
      uVar49 = fVar36 * fVar48;
    }
  }
  else {
    if (fVar36 != __real_3f800000) {
      if (fVar36 < __real_322bcc77) {
        uVar45 = (uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z ^
                 __xmm_80000000800000008000000080000000;
        uVar47 = (uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X ^
                 __xmm_80000000800000008000000080000000;
        uVar49 = (uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y ^
                 __xmm_80000000800000008000000080000000;
        goto LAB_143c2e559;
      }
      fVar36 = __real_3f800000 / SQRT(fVar36);
      fVar46 = fVar46 * fVar36;
      fVar48 = fVar36 * fVar48;
      fVar37 = fVar36 * fVar37;
    }
    uVar45 = (uint)fVar37 ^ __xmm_80000000800000008000000080000000;
    uVar47 = (uint)fVar46 ^ __xmm_80000000800000008000000080000000;
    uVar49 = (uint)fVar48 ^ __xmm_80000000800000008000000080000000;
  }
LAB_143c2e559:
  uVar29 = 0;
  if (param_2 < (this->Barys).ArrayNum) {
    uVar29 = uVar35;
  }
  if ((uVar29 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar27 = (code *)swi(3);
    pTVar30 = (TVector<float,3> *)(*pcVar27)();
    return pTVar30;
  }
  pFVar25 = (this->Barys).AllocatorInstance.Data;
  fVar48 = *(float *)(pFVar25 + lVar34 * 0xc);
  fVar36 = *(float *)(pFVar25 + lVar34 * 0xc + 4);
  fVar37 = *(float *)(pFVar25 + lVar34 * 0xc + 8);
  fVar46 = fVar36 * *(float *)pTVar32 + fVar48 * *(float *)pTVar31 + fVar37 * *(float *)pTVar33;
  fVar43 = fVar36 * *(float *)&pTVar32->field_0x4 + fVar48 * *(float *)&pTVar31->field_0x4 +
           fVar37 * *(float *)&pTVar33->field_0x4;
  fVar48 = fVar36 * *(float *)&pTVar32->field_0x8 + fVar48 * *(float *)&pTVar31->field_0x8 +
           fVar37 * *(float *)&pTVar33->field_0x8;
  fVar36 = (*(float *)pTVar30 - fVar46) * (float)uVar47 +
           (*(float *)&pTVar30->field_0x4 - fVar43) * (float)uVar49 +
           (*(float *)&pTVar30->field_0x8 - fVar48) * (float)uVar45;
  if (fVar36 <= fVar38) {
    fVar37 = GetConstraintFrictionCoefficient(this,param_2);
    fVar38 = fVar38 - fVar36;
    fVar51 = fVar51 / fVar39;
    fVar50 = 0.0;
    fVar39 = fVar38 * this->Stiffness;
    fVar36 = fVar39 * (float)uVar47 * fVar51;
    fVar41 = fVar39 * (float)uVar49 * fVar51;
    fVar39 = fVar39 * (float)uVar45 * fVar51;
    if (0.0 < fVar37) {
      pTVar31 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,iVar21);
      pTVar32 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,iVar22);
      fVar1 = *(float *)(pFVar25 + lVar34 * 0xc);
      fVar2 = *(float *)pTVar32;
      fVar3 = *(float *)&pTVar32->field_0x4;
      fVar44 = *(float *)&pTVar32->field_0x8;
      pTVar32 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,iVar23);
      fVar4 = *(float *)(pFVar25 + lVar34 * 0xc + 4);
      fVar5 = *(float *)pTVar32;
      fVar6 = *(float *)&pTVar32->field_0x4;
      fVar7 = *(float *)&pTVar32->field_0x8;
      pTVar32 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,iVar24);
      fVar8 = *(float *)(pFVar25 + lVar34 * 0xc + 8);
      fVar9 = *(float *)pTVar30;
      fVar10 = *(float *)pTVar32;
      fVar11 = *(float *)pTVar31;
      fVar12 = *(float *)&pTVar30->field_0x4;
      fVar13 = *(float *)&pTVar31->field_0x4;
      fVar14 = *(float *)&pTVar32->field_0x4;
      fVar15 = *(float *)&pTVar32->field_0x8;
      fVar16 = *(float *)&pTVar30->field_0x8;
      fVar17 = *(float *)&pTVar31->field_0x8;
      fVar40 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar21);
      fVar40 = fVar40 - fVar42;
      fVar44 = fVar39 * fVar40 +
               ((fVar16 - fVar17) - (fVar48 - (fVar8 * fVar15 + fVar4 * fVar7 + fVar1 * fVar44)));
      fVar48 = fVar41 * fVar40 +
               ((fVar12 - fVar13) - (fVar43 - (fVar8 * fVar14 + fVar4 * fVar6 + fVar1 * fVar3)));
      fVar46 = fVar36 * fVar40 +
               ((fVar9 - fVar11) - (fVar46 - (fVar8 * fVar10 + fVar4 * fVar5 + fVar1 * fVar2)));
      fVar42 = fVar46 * (float)uVar47 + fVar48 * (float)uVar49 + (float)uVar45 * fVar44;
      fVar44 = fVar44 - fVar42 * (float)uVar45;
      fVar48 = fVar48 - fVar42 * (float)uVar49;
      fVar46 = fVar46 - fVar42 * (float)uVar47;
      fVar38 = fVar38 * fVar37;
      fVar42 = SQRT(fVar48 * fVar48 + fVar46 * fVar46 + fVar44 * fVar44);
      if (fVar42 <= fVar38) {
        fVar38 = fVar42;
      }
      if (__real_322bcc77 <= fVar42) {
        fVar50 = fVar38 / fVar42;
      }
      fVar50 = (float)((uint)fVar50 ^ __xmm_80000000800000008000000080000000);
      *(float *)&__return_storage_ptr__->field_0x8 = fVar50 * fVar44 * fVar51 + fVar39;
      *(float *)&__return_storage_ptr__->field_0x4 = fVar50 * fVar48 * fVar51 + fVar41;
      *(float *)__return_storage_ptr__ = fVar50 * fVar46 * fVar51 + fVar36;
      return __return_storage_ptr__;
    }
    *(float *)__return_storage_ptr__ = fVar36;
    *(float *)&__return_storage_ptr__->field_0x4 = fVar41;
    *(float *)&__return_storage_ptr__->field_0x8 = fVar39;
    return __return_storage_ptr__;
  }
LAB_143c2e960:
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// GetDelta<Chaos::Softs::FSolverParticlesRange> @ 143c2eea0

TVector<float,3> * __thiscall
Chaos::Softs::FPBDCollisionSpringConstraintsBase::GetDelta<Chaos::Softs::FSolverParticlesRange>
          (FPBDCollisionSpringConstraintsBase *this,TVector<float,3> *__return_storage_ptr__,
          FSolverParticlesRange *param_1,int param_2)

{
  float fVar1;
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
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  code *pcVar28;
  bool bVar29;
  uint uVar30;
  TVector<float,3> *pTVar31;
  TVector<float,3> *pTVar32;
  TVector<float,3> *pTVar33;
  TVector<float,3> *pTVar34;
  longlong lVar35;
  uint uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  float fVar50;
  float fVar51;
  float local_138;
  float fStack_134;
  float local_12c;
  float fStack_128;
  float local_120;
  float fStack_11c;
  
  lVar35 = (longlong)param_2;
  uVar36 = (uint)~param_2 >> 0x1f;
  uVar30 = 0;
  if (param_2 < (this->Constraints).ArrayNum) {
    uVar30 = uVar36;
  }
  if ((uVar30 == 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar29)) {
    pcVar28 = (code *)swi(3);
    pTVar31 = (TVector<float,3> *)(*pcVar28)();
    return pTVar31;
  }
  pFVar26 = (this->Constraints).AllocatorInstance.Data;
  iVar22 = *(int *)(pFVar26 + lVar35 * 0x10);
  iVar23 = *(int *)(pFVar26 + lVar35 * 0x10 + 4);
  iVar24 = *(int *)(pFVar26 + lVar35 * 0x10 + 8);
  iVar25 = *(int *)(pFVar26 + lVar35 * 0x10 + 0xc);
  uVar30 = 0;
  if (param_2 < (this->Barys).ArrayNum) {
    uVar30 = uVar36;
  }
  if ((uVar30 == 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar29)) {
    pcVar28 = (code *)swi(3);
    pTVar31 = (TVector<float,3> *)(*pcVar28)();
    return pTVar31;
  }
  pFVar26 = (this->Barys).AllocatorInstance.Data;
  uVar30 = 0;
  if (param_2 < (this->Barys).ArrayNum) {
    uVar30 = uVar36;
  }
  if ((uVar30 == 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar29)) {
    pcVar28 = (code *)swi(3);
    pTVar31 = (TVector<float,3> *)(*pcVar28)();
    return pTVar31;
  }
  pFVar27 = (this->Barys).AllocatorInstance.Data;
  uVar30 = 0;
  if (param_2 < (this->Barys).ArrayNum) {
    uVar30 = uVar36;
  }
  if ((uVar30 == 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar29)) {
    pcVar28 = (code *)swi(3);
    pTVar31 = (TVector<float,3> *)(*pcVar28)();
    return pTVar31;
  }
  fVar44 = *(float *)((this->Barys).AllocatorInstance.Data + lVar35 * 0xc + 8);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar29)) {
    pcVar28 = (code *)swi(3);
    pTVar31 = (TVector<float,3> *)(*pcVar28)();
    return pTVar31;
  }
  fVar37 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      iVar25 + *(int *)&param_1->field_0x10);
  fVar40 = *(float *)(pFVar27 + lVar35 * 0xc + 4);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar29)) {
    pcVar28 = (code *)swi(3);
    pTVar31 = (TVector<float,3> *)(*pcVar28)();
    return pTVar31;
  }
  fVar38 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      iVar24 + *(int *)&param_1->field_0x10);
  fVar42 = *(float *)(pFVar26 + lVar35 * 0xc);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar29)) {
    pcVar28 = (code *)swi(3);
    pTVar31 = (TVector<float,3> *)(*pcVar28)();
    return pTVar31;
  }
  fVar39 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      iVar23 + *(int *)&param_1->field_0x10);
  fVar44 = fVar39 * fVar42 + fVar38 * fVar40 + fVar37 * fVar44;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar29)) {
    pcVar28 = (code *)swi(3);
    pTVar31 = (TVector<float,3> *)(*pcVar28)();
    return pTVar31;
  }
  fVar40 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      iVar22 + *(int *)&param_1->field_0x10);
  fVar40 = fVar40 + fVar44;
  if (fVar40 <= __real_33d6bf95) goto LAB_143c2f8ec;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar29)) {
    pcVar28 = (code *)swi(3);
    pTVar31 = (TVector<float,3> *)(*pcVar28)();
    return pTVar31;
  }
  pTVar31 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                iVar22 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar29)) {
    pcVar28 = (code *)swi(3);
    pTVar31 = (TVector<float,3> *)(*pcVar28)();
    return pTVar31;
  }
  pTVar32 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                iVar23 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar29)) {
    pcVar28 = (code *)swi(3);
    pTVar31 = (TVector<float,3> *)(*pcVar28)();
    return pTVar31;
  }
  pTVar33 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                iVar24 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar29)) {
    pcVar28 = (code *)swi(3);
    pTVar31 = (TVector<float,3> *)(*pcVar28)();
    return pTVar31;
  }
  pTVar34 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                iVar25 + *(int *)&param_1->field_0x10);
  fVar39 = GetConstraintThickness(this,param_2);
  fVar37 = *(float *)&pTVar32->field_0x8;
  uVar19 = *(undefined8 *)pTVar32;
  uVar20 = *(undefined8 *)pTVar33;
  fVar42 = *(float *)&pTVar33->field_0x8;
  uVar21 = *(undefined8 *)pTVar34;
  fVar38 = *(float *)&pTVar34->field_0x8;
  uVar30 = 0;
  if (param_2 < (this->FlipNormal).ArrayNum) {
    uVar30 = uVar36;
  }
  if ((uVar30 == 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar29)) {
    pcVar28 = (code *)swi(3);
    pTVar31 = (TVector<float,3> *)(*pcVar28)();
    return pTVar31;
  }
  fVar51 = __real_3f800000;
  fVar42 = fVar42 - fVar37;
  local_12c = (float)uVar20;
  local_138 = (float)uVar19;
  fStack_128 = (float)((ulonglong)uVar20 >> 0x20);
  fStack_134 = (float)((ulonglong)uVar19 >> 0x20);
  fVar38 = fVar38 - fVar37;
  local_120 = (float)uVar21;
  fStack_11c = (float)((ulonglong)uVar21 >> 0x20);
  fVar47 = (fStack_128 - fStack_134) * fVar38 - fVar42 * (fStack_11c - fStack_134);
  fVar38 = (local_120 - local_138) * fVar42 - (local_12c - local_138) * fVar38;
  fVar42 = (local_12c - local_138) * (fStack_11c - fStack_134) -
           (local_120 - local_138) * (fStack_128 - fStack_134);
  fVar37 = fVar38 * fVar38 + fVar47 * fVar47 + fVar42 * fVar42;
  if ((this->FlipNormal).AllocatorInstance.Data[lVar35] == (FScriptContainerElement)0x0) {
    uVar46 = fVar42;
    uVar48 = fVar47;
    uVar49 = fVar38;
    if ((fVar37 != __real_3f800000) &&
       (uVar46 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
       uVar48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
       uVar49 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y, __real_322bcc77 <= fVar37))
    {
      fVar37 = __real_3f800000 / SQRT(fVar37);
      uVar46 = fVar37 * fVar42;
      uVar48 = fVar37 * fVar47;
      uVar49 = fVar37 * fVar38;
    }
  }
  else {
    if (fVar37 != __real_3f800000) {
      if (fVar37 < __real_322bcc77) {
        uVar46 = (uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z ^
                 __xmm_80000000800000008000000080000000;
        uVar48 = (uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X ^
                 __xmm_80000000800000008000000080000000;
        uVar49 = (uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y ^
                 __xmm_80000000800000008000000080000000;
        goto LAB_143c2f4f2;
      }
      fVar37 = __real_3f800000 / SQRT(fVar37);
      fVar47 = fVar47 * fVar37;
      fVar38 = fVar38 * fVar37;
      fVar42 = fVar37 * fVar42;
    }
    uVar46 = (uint)fVar42 ^ __xmm_80000000800000008000000080000000;
    uVar48 = (uint)fVar47 ^ __xmm_80000000800000008000000080000000;
    uVar49 = (uint)fVar38 ^ __xmm_80000000800000008000000080000000;
  }
LAB_143c2f4f2:
  uVar30 = 0;
  if (param_2 < (this->Barys).ArrayNum) {
    uVar30 = uVar36;
  }
  if ((uVar30 == 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar29)) {
    pcVar28 = (code *)swi(3);
    pTVar31 = (TVector<float,3> *)(*pcVar28)();
    return pTVar31;
  }
  pFVar26 = (this->Barys).AllocatorInstance.Data;
  fVar37 = *(float *)(pFVar26 + lVar35 * 0xc);
  fVar42 = *(float *)(pFVar26 + lVar35 * 0xc + 4);
  fVar38 = *(float *)(pFVar26 + lVar35 * 0xc + 8);
  fVar47 = fVar42 * *(float *)pTVar33 + fVar37 * *(float *)pTVar32 + fVar38 * *(float *)pTVar34;
  fVar45 = fVar42 * *(float *)&pTVar33->field_0x4 + fVar37 * *(float *)&pTVar32->field_0x4 +
           fVar38 * *(float *)&pTVar34->field_0x4;
  fVar37 = fVar42 * *(float *)&pTVar33->field_0x8 + fVar37 * *(float *)&pTVar32->field_0x8 +
           fVar38 * *(float *)&pTVar34->field_0x8;
  fVar42 = (*(float *)pTVar31 - fVar47) * (float)uVar48 +
           (*(float *)&pTVar31->field_0x4 - fVar45) * (float)uVar49 +
           (*(float *)&pTVar31->field_0x8 - fVar37) * (float)uVar46;
  if (fVar42 <= fVar39) {
    fVar38 = GetConstraintFrictionCoefficient(this,param_2);
    fVar39 = fVar39 - fVar42;
    fVar51 = fVar51 / fVar40;
    fVar50 = 0.0;
    fVar40 = fVar39 * this->Stiffness;
    fVar42 = fVar40 * (float)uVar48 * fVar51;
    fVar43 = fVar40 * (float)uVar49 * fVar51;
    fVar40 = fVar40 * (float)uVar46 * fVar51;
    if (0.0 < fVar38) {
      pTVar32 = FSolverParticlesRange::GetX(param_1,iVar22);
      pTVar33 = FSolverParticlesRange::GetX(param_1,iVar23);
      fVar1 = *(float *)(pFVar26 + lVar35 * 0xc);
      fVar2 = *(float *)pTVar33;
      fVar3 = *(float *)&pTVar33->field_0x4;
      fVar4 = *(float *)&pTVar33->field_0x8;
      pTVar33 = FSolverParticlesRange::GetX(param_1,iVar24);
      fVar5 = *(float *)(pFVar26 + lVar35 * 0xc + 4);
      fVar6 = *(float *)pTVar33;
      fVar7 = *(float *)&pTVar33->field_0x4;
      fVar8 = *(float *)&pTVar33->field_0x8;
      pTVar33 = FSolverParticlesRange::GetX(param_1,iVar25);
      fVar9 = *(float *)(pFVar26 + lVar35 * 0xc + 8);
      fVar10 = *(float *)pTVar31;
      fVar11 = *(float *)pTVar33;
      fVar12 = *(float *)pTVar32;
      fVar13 = *(float *)&pTVar31->field_0x4;
      fVar14 = *(float *)&pTVar32->field_0x4;
      fVar15 = *(float *)&pTVar33->field_0x4;
      fVar16 = *(float *)&pTVar33->field_0x8;
      fVar17 = *(float *)&pTVar31->field_0x8;
      fVar18 = *(float *)&pTVar32->field_0x8;
      fVar41 = FSolverParticlesRange::InvM(param_1,iVar22);
      fVar41 = fVar41 - fVar44;
      fVar37 = fVar40 * fVar41 +
               ((fVar17 - fVar18) - (fVar37 - (fVar9 * fVar16 + fVar5 * fVar8 + fVar1 * fVar4)));
      fVar45 = fVar43 * fVar41 +
               ((fVar13 - fVar14) - (fVar45 - (fVar9 * fVar15 + fVar5 * fVar7 + fVar1 * fVar3)));
      fVar47 = fVar42 * fVar41 +
               ((fVar10 - fVar12) - (fVar47 - (fVar9 * fVar11 + fVar5 * fVar6 + fVar1 * fVar2)));
      fVar44 = fVar45 * (float)uVar49 + (float)uVar48 * fVar47 + fVar37 * (float)uVar46;
      fVar37 = fVar37 - fVar44 * (float)uVar46;
      fVar45 = fVar45 - fVar44 * (float)uVar49;
      fVar47 = fVar47 - fVar44 * (float)uVar48;
      fVar39 = fVar39 * fVar38;
      fVar44 = SQRT(fVar45 * fVar45 + fVar47 * fVar47 + fVar37 * fVar37);
      if (fVar44 <= fVar39) {
        fVar39 = fVar44;
      }
      if (__real_322bcc77 <= fVar44) {
        fVar50 = fVar39 / fVar44;
      }
      fVar50 = (float)((uint)fVar50 ^ __xmm_80000000800000008000000080000000);
      *(float *)&__return_storage_ptr__->field_0x8 = fVar37 * fVar50 * fVar51 + fVar40;
      *(float *)&__return_storage_ptr__->field_0x4 = fVar45 * fVar50 * fVar51 + fVar43;
      *(float *)__return_storage_ptr__ = fVar47 * fVar50 * fVar51 + fVar42;
      return __return_storage_ptr__;
    }
    *(float *)__return_storage_ptr__ = fVar42;
    *(float *)&__return_storage_ptr__->field_0x4 = fVar43;
    *(float *)&__return_storage_ptr__->field_0x8 = fVar40;
    return __return_storage_ptr__;
  }
LAB_143c2f8ec:
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticles> @ 143c310d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FPBDCollisionSpringConstraintsBase::
Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticles>
          (FPBDCollisionSpringConstraintsBase *this,FSolverParticles *param_1,
          TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
          *param_2,TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                   *param_3,
          TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>
          *param_4)

{
  undefined1 auStackY_538 [32];
  FTriangleSubMesh local_4f8;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  local_218;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_538;
  local_4f8.FullMesh = this->TriangleMesh;
  FTriangleMesh::FTriangleMesh(&local_4f8.DynamicSubMesh);
  FTriangleMesh::FTriangleMesh(&local_4f8.KinematicColliderSubMesh);
  local_4f8.FullMeshToSubMeshIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4f8.FullMeshToSubMeshIndices.ArrayNum = 0;
  local_4f8.FullMeshToSubMeshIndices.ArrayMax = 0;
  local_4f8.DynamicSubMeshToFullMeshIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4f8.DynamicSubMeshToFullMeshIndices.ArrayNum = 0;
  local_4f8.DynamicSubMeshToFullMeshIndices.ArrayMax = 0;
  local_4f8.KinematicColliderSubMeshToFullMeshIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_4f8.KinematicColliderSubMeshToFullMeshIndices.ArrayNum = 0;
  local_4f8.KinematicColliderSubMeshToFullMeshIndices.ArrayMax = 0;
  local_4f8.DynamicVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4f8.DynamicVertices.ArrayNum = 0;
  local_4f8.DynamicVertices.ArrayMax = 0;
  FPBDTriangleMeshCollisions::FTriangleSubMesh::InitAllDynamic(&local_4f8);
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  ::
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
            (&local_218);
  Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticles>
            (this,param_1,__real_7f7fc99e,&local_4f8,param_2,&local_218,param_3,param_4);
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  ::
  ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
            (&local_218);
  if (local_4f8.DynamicVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.DynamicVertices.AllocatorInstance.Data);
  }
  if (local_4f8.KinematicColliderSubMeshToFullMeshIndices.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.KinematicColliderSubMeshToFullMeshIndices.AllocatorInstance.Data);
  }
  if (local_4f8.DynamicSubMeshToFullMeshIndices.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.DynamicSubMeshToFullMeshIndices.AllocatorInstance.Data);
  }
  if (local_4f8.FullMeshToSubMeshIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.FullMeshToSubMeshIndices.AllocatorInstance.Data);
  }
  FTriangleMesh::~FTriangleMesh(&local_4f8.KinematicColliderSubMesh);
  FTriangleMesh::~FTriangleMesh(&local_4f8.DynamicSubMesh);
  return;
}

// Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticles> @ 143c31240

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDCollisionSpringConstraintsBase::
Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticles>
          (FPBDCollisionSpringConstraintsBase *this,FSolverParticles *param_1,float param_2,
          FTriangleSubMesh *param_3,
          TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
          *param_4,TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                   *param_5,
          TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int> *param_6,
          TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>
          *param_7)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  int local_res8 [2];
  FScriptContainerElement *local_a8;
  int local_a0;
  code *local_98;
  FPBDCollisionSpringConstraintsBase **local_90;
  FPBDCollisionSpringConstraintsBase *local_88;
  float local_80;
  FTriangleSubMesh *local_78;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *local_70;
  FSolverParticles *local_68;
  int *local_60;
  undefined4 local_58;
  TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int> *local_50;
  TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_> *local_48;
  FScriptContainerElement **local_40;
  
  FPBDKinematicTriangleMeshCollisions::Reset(&this->KinematicCollisions);
  iVar4 = (param_3->DynamicSubMesh).MElements.ArrayNum;
  if ((iVar4 == 0) || (this->bOnlyCollideKinematics != false)) {
    (this->Constraints).ArrayNum = 0;
    if ((this->Constraints).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&(this->Constraints).AllocatorInstance,0,&(this->Constraints).ArrayMax);
    }
    (this->Barys).ArrayNum = 0;
    if ((this->Barys).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&(this->Barys).AllocatorInstance,0,&(this->Barys).ArrayMax);
    }
    (this->FlipNormal).ArrayNum = 0;
    if ((this->FlipNormal).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->FlipNormal).AllocatorInstance,0,&(this->FlipNormal).ArrayMax);
    }
    (this->ConstraintTypes).ArrayNum = 0;
    if ((this->ConstraintTypes).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->ConstraintTypes).AllocatorInstance,0,
                 &(this->ConstraintTypes).ArrayMax);
    }
  }
  else {
    if ((param_6->ArrayNum == this->Offset + this->NumParticles) && (param_7->ArrayNum == iVar4)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    this->bGlobalIntersectionAnalysis = bVar5;
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_void___cdecl_Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles_const&___ptr64,float,Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh_const&___ptr64,Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>_const&___ptr64,Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>_const&___ptr64,TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>_const&___ptr64,TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l7::__CpuProfilerEventSpecId150,"ChaosPBDCollisionSpring_ProximityQuery",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionSpringConstraintsBase.cpp"
                 ,0x96);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_void___cdecl_Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles_const&___ptr64,float,Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh_const&___ptr64,Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>_const&___ptr64,Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>_const&___ptr64,TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>_const&___ptr64,TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                 ::__l7::__CpuProfilerEventSpecId150);
    }
    iVar4 = (param_3->DynamicVertices).ArrayNum;
    if (iVar4 == 0) {
      iVar4 = this->NumParticles;
    }
    iVar2 = iVar4 * 3;
    TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->Constraints,iVar2,Default);
    TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->Barys,iVar2,Default);
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this->FlipNormal,iVar2,Default);
    TArray<enum_Chaos::Softs::FPBDCollisionSpringConstraintsBase::EConstraintType,TSizedDefaultAllocator<32>_>
    ::SetNumUninitialized(&this->ConstraintTypes,iVar2,Default);
    local_res8[0] = 0;
    if (this->ReferencePositions ==
        (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0) {
      local_a8 = (FScriptContainerElement *)0x0;
      local_a0 = 0;
    }
    else {
      local_a8 = (this->ReferencePositions->AllocatorInstance).Data;
      local_a0 = this->NumParticles + this->Offset;
      if ((local_a0 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_70 = param_4;
    local_60 = local_res8;
    local_40 = &local_a8;
    local_90 = &local_88;
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticles>'::__l7::<lambda_1>,void,int>
               ::Call;
    local_58 = 3;
    local_50 = param_6;
    local_48 = param_7;
    local_88 = this;
    local_80 = param_2;
    local_78 = param_3;
    local_68 = param_1;
    PhysicsParallelFor(iVar4,(TFunctionRef<void___cdecl(int)> *)&local_98,false);
    iVar4 = local_res8[0];
    TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Constraints,local_res8[0],No);
    TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum(&this->Barys,iVar4,No);
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(&this->FlipNormal,iVar4,No);
    TArray<enum_Chaos::Softs::FPBDCollisionSpringConstraintsBase::EConstraintType,TSizedDefaultAllocator<32>_>
    ::SetNum(&this->ConstraintTypes,iVar4,No);
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticlesRange> @ 143c315b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FPBDCollisionSpringConstraintsBase::
Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticlesRange>
          (FPBDCollisionSpringConstraintsBase *this,FSolverParticlesRange *param_1,
          TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
          *param_2,TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                   *param_3,
          TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>
          *param_4)

{
  undefined1 auStackY_538 [32];
  FTriangleSubMesh local_4f8;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  local_218;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_538;
  local_4f8.FullMesh = this->TriangleMesh;
  FTriangleMesh::FTriangleMesh(&local_4f8.DynamicSubMesh);
  FTriangleMesh::FTriangleMesh(&local_4f8.KinematicColliderSubMesh);
  local_4f8.FullMeshToSubMeshIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4f8.FullMeshToSubMeshIndices.ArrayNum = 0;
  local_4f8.FullMeshToSubMeshIndices.ArrayMax = 0;
  local_4f8.DynamicSubMeshToFullMeshIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4f8.DynamicSubMeshToFullMeshIndices.ArrayNum = 0;
  local_4f8.DynamicSubMeshToFullMeshIndices.ArrayMax = 0;
  local_4f8.KinematicColliderSubMeshToFullMeshIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_4f8.KinematicColliderSubMeshToFullMeshIndices.ArrayNum = 0;
  local_4f8.KinematicColliderSubMeshToFullMeshIndices.ArrayMax = 0;
  local_4f8.DynamicVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4f8.DynamicVertices.ArrayNum = 0;
  local_4f8.DynamicVertices.ArrayMax = 0;
  FPBDTriangleMeshCollisions::FTriangleSubMesh::InitAllDynamic(&local_4f8);
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  ::
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
            (&local_218);
  Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticlesRange>
            (this,param_1,__real_7f7fc99e,&local_4f8,param_2,&local_218,param_3,param_4);
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  ::
  ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
            (&local_218);
  if (local_4f8.DynamicVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.DynamicVertices.AllocatorInstance.Data);
  }
  if (local_4f8.KinematicColliderSubMeshToFullMeshIndices.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.KinematicColliderSubMeshToFullMeshIndices.AllocatorInstance.Data);
  }
  if (local_4f8.DynamicSubMeshToFullMeshIndices.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.DynamicSubMeshToFullMeshIndices.AllocatorInstance.Data);
  }
  if (local_4f8.FullMeshToSubMeshIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.FullMeshToSubMeshIndices.AllocatorInstance.Data);
  }
  FTriangleMesh::~FTriangleMesh(&local_4f8.KinematicColliderSubMesh);
  FTriangleMesh::~FTriangleMesh(&local_4f8.DynamicSubMesh);
  return;
}

// Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticlesRange> @ 143c31720

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDCollisionSpringConstraintsBase::
Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticlesRange>
          (FPBDCollisionSpringConstraintsBase *this,FSolverParticlesRange *param_1,float param_2,
          FTriangleSubMesh *param_3,
          TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
          *param_4,TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                   *param_5,
          TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int> *param_6,
          TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>
          *param_7)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_res8 [2];
  TArrayView<Chaos::TVector<float,3>_const_,int> local_a8;
  code *local_98;
  FPBDCollisionSpringConstraintsBase **local_90;
  FPBDCollisionSpringConstraintsBase *local_88;
  float local_80;
  FTriangleSubMesh *local_78;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *local_70;
  FSolverParticlesRange *local_68;
  int *local_60;
  undefined4 local_58;
  TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int> *local_50;
  TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_> *local_48;
  TArrayView<Chaos::TVector<float,3>_const_,int> *local_40;
  
  FPBDKinematicTriangleMeshCollisions::Reset(&this->KinematicCollisions);
  iVar2 = (param_3->DynamicSubMesh).MElements.ArrayNum;
  if ((iVar2 == 0) || (this->bOnlyCollideKinematics != false)) {
    (this->Constraints).ArrayNum = 0;
    if ((this->Constraints).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&(this->Constraints).AllocatorInstance,0,&(this->Constraints).ArrayMax);
    }
    (this->Barys).ArrayNum = 0;
    if ((this->Barys).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&(this->Barys).AllocatorInstance,0,&(this->Barys).ArrayMax);
    }
    (this->FlipNormal).ArrayNum = 0;
    if ((this->FlipNormal).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->FlipNormal).AllocatorInstance,0,&(this->FlipNormal).ArrayMax);
    }
    (this->ConstraintTypes).ArrayNum = 0;
    if ((this->ConstraintTypes).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->ConstraintTypes).AllocatorInstance,0,
                 &(this->ConstraintTypes).ArrayMax);
    }
  }
  else {
    if ((param_6->ArrayNum == this->Offset + this->NumParticles) && (param_7->ArrayNum == iVar2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    this->bGlobalIntersectionAnalysis = bVar3;
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_void___cdecl_Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange_const&___ptr64,float,Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh_const&___ptr64,Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>_const&___ptr64,Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>_const&___ptr64,TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>_const&___ptr64,TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l7::__CpuProfilerEventSpecId150,"ChaosPBDCollisionSpring_ProximityQuery",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionSpringConstraintsBase.cpp"
                 ,0x96);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_void___cdecl_Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange_const&___ptr64,float,Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh_const&___ptr64,Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>_const&___ptr64,Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>_const&___ptr64,TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>_const&___ptr64,TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                 ::__l7::__CpuProfilerEventSpecId150);
    }
    iVar2 = (param_3->DynamicVertices).ArrayNum;
    if (iVar2 == 0) {
      iVar2 = this->NumParticles;
    }
    iVar1 = iVar2 * 3;
    TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->Constraints,iVar1,Default);
    TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->Barys,iVar1,Default);
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this->FlipNormal,iVar1,Default);
    TArray<enum_Chaos::Softs::FPBDCollisionSpringConstraintsBase::EConstraintType,TSizedDefaultAllocator<32>_>
    ::SetNumUninitialized(&this->ConstraintTypes,iVar1,Default);
    local_res8[0] = 0;
    if (this->ReferencePositions ==
        (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0) {
      local_a8.DataPtr = (TVector<float,3> *)0x0;
      local_a8.ArrayNum = 0;
    }
    else {
      TParticlesRange<Chaos::Softs::FSolverParticles,void>::
      GetConstArrayView<Chaos::TVector<float,3>_>
                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_a8,
                 this->ReferencePositions);
    }
    local_70 = param_4;
    local_60 = local_res8;
    local_40 = &local_a8;
    local_90 = &local_88;
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticlesRange>'::__l7::<lambda_1>,void,int>
               ::Call;
    local_58 = 3;
    local_50 = param_6;
    local_48 = param_7;
    local_88 = this;
    local_80 = param_2;
    local_78 = param_3;
    local_68 = param_1;
    PhysicsParallelFor(iVar2,(TFunctionRef<void___cdecl(int)> *)&local_98,false);
    iVar2 = local_res8[0];
    TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Constraints,local_res8[0],No);
    TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum(&this->Barys,iVar2,No);
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(&this->FlipNormal,iVar2,No);
    TArray<enum_Chaos::Softs::FPBDCollisionSpringConstraintsBase::EConstraintType,TSizedDefaultAllocator<32>_>
    ::SetNum(&this->ConstraintTypes,iVar2,No);
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles> @ 143c31a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FPBDCollisionSpringConstraintsBase::
Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles>
          (FPBDCollisionSpringConstraintsBase *this,FSolverParticles *param_1,
          THierarchicalSpatialHash<int,float> *param_2,
          TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int> *param_3,
          TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>
          *param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auStackY_3f8 [32];
  undefined1 local_3b8 [40];
  ForAnyElementType local_390;
  undefined8 local_388;
  TBitArray<FDefaultBitArrayAllocator> local_380;
  undefined8 uStack_360;
  void *local_350;
  undefined4 local_348;
  ForAnyElementType local_340;
  undefined8 local_338;
  FTriangleSubMesh local_328;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  local_328.FullMesh = this->TriangleMesh;
  FTriangleMesh::FTriangleMesh(&local_328.DynamicSubMesh);
  FTriangleMesh::FTriangleMesh(&local_328.KinematicColliderSubMesh);
  local_328.FullMeshToSubMeshIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.FullMeshToSubMeshIndices.ArrayNum = 0;
  local_328.FullMeshToSubMeshIndices.ArrayMax = 0;
  local_328.DynamicSubMeshToFullMeshIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.DynamicSubMeshToFullMeshIndices.ArrayNum = 0;
  local_328.DynamicSubMeshToFullMeshIndices.ArrayMax = 0;
  local_328.KinematicColliderSubMeshToFullMeshIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_328.KinematicColliderSubMeshToFullMeshIndices.ArrayNum = 0;
  local_328.KinematicColliderSubMeshToFullMeshIndices.ArrayMax = 0;
  local_328.DynamicVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.DynamicVertices.ArrayNum = 0;
  local_328.DynamicVertices.ArrayMax = 0;
  FPBDTriangleMeshCollisions::FTriangleSubMesh::InitAllDynamic(&local_328);
  local_3b8._32_4_ = 0;
  local_3b8._0_8_ = (void *)0x0;
  local_3b8._8_8_ = 0;
  local_3b8._16_8_ = (void *)0x0;
  local_3b8._24_8_ = 0;
  local_390.Data = (FScriptContainerElement *)0x0;
  local_388 = 0;
  local_380.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_380.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_380.MaxBits = _UNK_150631d94;
  uStack_360 = _UNK_150631d98;
  local_350 = (void *)0x0;
  local_348 = 0;
  local_340.Data = (FScriptContainerElement *)0x0;
  local_338._0_4_ = 0;
  local_338._4_4_ = 0;
  Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles>
            (this,param_1,__real_7f7fc99e,&local_328,param_2,
             (THierarchicalSpatialHash<int,float> *)local_3b8,param_3,param_4);
  if (local_340.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data);
  }
  local_348 = 0;
  if (local_350 != (void *)0x0) {
    FMemory::Free(local_350);
  }
  uVar1 = local_388 >> 0x20;
  local_388 = local_388 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_390,0,(int *)((longlong)&local_388 + 4));
  }
  iVar2 = local_380.MaxBits;
  uStack_360 = 0xffffffff;
  local_380._24_8_ = (ulonglong)(uint)local_380.MaxBits << 0x20;
  if (0x80 < (uint)iVar2) {
    local_380.NumBits = 0;
    local_380.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_380,0);
  }
  if (local_380.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_380.AllocatorInstance.SecondaryData);
  }
  if (local_390.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.Data);
  }
  if ((void *)local_3b8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3b8._16_8_);
  }
  if ((void *)local_3b8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3b8._0_8_);
  }
  if (local_328.DynamicVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.DynamicVertices.AllocatorInstance.Data);
  }
  if (local_328.KinematicColliderSubMeshToFullMeshIndices.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.KinematicColliderSubMeshToFullMeshIndices.AllocatorInstance.Data);
  }
  if (local_328.DynamicSubMeshToFullMeshIndices.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.DynamicSubMeshToFullMeshIndices.AllocatorInstance.Data);
  }
  if (local_328.FullMeshToSubMeshIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.FullMeshToSubMeshIndices.AllocatorInstance.Data);
  }
  FTriangleMesh::~FTriangleMesh(&local_328.KinematicColliderSubMesh);
  FTriangleMesh::~FTriangleMesh(&local_328.DynamicSubMesh);
  return;
}

// Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles> @ 143c31cb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDCollisionSpringConstraintsBase::
Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles>
          (FPBDCollisionSpringConstraintsBase *this,FSolverParticles *param_1,float param_2,
          FTriangleSubMesh *param_3,THierarchicalSpatialHash<int,float> *param_4,
          THierarchicalSpatialHash<int,float> *param_5,
          TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int> *param_6,
          TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>
          *param_7)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  int local_res8 [2];
  FScriptContainerElement *local_a8;
  int local_a0;
  code *local_98;
  FPBDCollisionSpringConstraintsBase **local_90;
  FPBDCollisionSpringConstraintsBase *local_88;
  float local_80;
  FTriangleSubMesh *local_78;
  THierarchicalSpatialHash<int,float> *local_70;
  FSolverParticles *local_68;
  int *local_60;
  undefined4 local_58;
  TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int> *local_50;
  TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_> *local_48;
  FScriptContainerElement **local_40;
  
  FPBDKinematicTriangleMeshCollisions::Reset(&this->KinematicCollisions);
  iVar4 = (param_3->DynamicSubMesh).MElements.ArrayNum;
  if ((iVar4 == 0) || (this->bOnlyCollideKinematics != false)) {
    (this->Constraints).ArrayNum = 0;
    if ((this->Constraints).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&(this->Constraints).AllocatorInstance,0,&(this->Constraints).ArrayMax);
    }
    (this->Barys).ArrayNum = 0;
    if ((this->Barys).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&(this->Barys).AllocatorInstance,0,&(this->Barys).ArrayMax);
    }
    (this->FlipNormal).ArrayNum = 0;
    if ((this->FlipNormal).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->FlipNormal).AllocatorInstance,0,&(this->FlipNormal).ArrayMax);
    }
    (this->ConstraintTypes).ArrayNum = 0;
    if ((this->ConstraintTypes).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->ConstraintTypes).AllocatorInstance,0,
                 &(this->ConstraintTypes).ArrayMax);
    }
  }
  else {
    if ((param_6->ArrayNum == this->Offset + this->NumParticles) && (param_7->ArrayNum == iVar4)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    this->bGlobalIntersectionAnalysis = bVar5;
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_void___cdecl_Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles_const&___ptr64,float,Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh_const&___ptr64,Chaos::THierarchicalSpatialHash<int,float>_const&___ptr64,Chaos::THierarchicalSpatialHash<int,float>_const&___ptr64,TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>_const&___ptr64,TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l7::__CpuProfilerEventSpecId150,"ChaosPBDCollisionSpring_ProximityQuery",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionSpringConstraintsBase.cpp"
                 ,0x96);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_void___cdecl_Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles_const&___ptr64,float,Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh_const&___ptr64,Chaos::THierarchicalSpatialHash<int,float>_const&___ptr64,Chaos::THierarchicalSpatialHash<int,float>_const&___ptr64,TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>_const&___ptr64,TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                 ::__l7::__CpuProfilerEventSpecId150);
    }
    iVar4 = (param_3->DynamicVertices).ArrayNum;
    if (iVar4 == 0) {
      iVar4 = this->NumParticles;
    }
    iVar2 = iVar4 * 3;
    TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->Constraints,iVar2,Default);
    TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->Barys,iVar2,Default);
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this->FlipNormal,iVar2,Default);
    TArray<enum_Chaos::Softs::FPBDCollisionSpringConstraintsBase::EConstraintType,TSizedDefaultAllocator<32>_>
    ::SetNumUninitialized(&this->ConstraintTypes,iVar2,Default);
    local_res8[0] = 0;
    if (this->ReferencePositions ==
        (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0) {
      local_a8 = (FScriptContainerElement *)0x0;
      local_a0 = 0;
    }
    else {
      local_a8 = (this->ReferencePositions->AllocatorInstance).Data;
      local_a0 = this->NumParticles + this->Offset;
      if ((local_a0 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_70 = param_4;
    local_60 = local_res8;
    local_40 = &local_a8;
    local_90 = &local_88;
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles>'::__l7::<lambda_1>,void,int>
               ::Call;
    local_58 = 3;
    local_50 = param_6;
    local_48 = param_7;
    local_88 = this;
    local_80 = param_2;
    local_78 = param_3;
    local_68 = param_1;
    PhysicsParallelFor(iVar4,(TFunctionRef<void___cdecl(int)> *)&local_98,false);
    iVar4 = local_res8[0];
    TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Constraints,local_res8[0],No);
    TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum(&this->Barys,iVar4,No);
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(&this->FlipNormal,iVar4,No);
    TArray<enum_Chaos::Softs::FPBDCollisionSpringConstraintsBase::EConstraintType,TSizedDefaultAllocator<32>_>
    ::SetNum(&this->ConstraintTypes,iVar4,No);
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange> @ 143c32020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FPBDCollisionSpringConstraintsBase::
Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange>
          (FPBDCollisionSpringConstraintsBase *this,FSolverParticlesRange *param_1,
          THierarchicalSpatialHash<int,float> *param_2,
          TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int> *param_3,
          TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>
          *param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auStackY_3f8 [32];
  undefined1 local_3b8 [40];
  ForAnyElementType local_390;
  undefined8 local_388;
  TBitArray<FDefaultBitArrayAllocator> local_380;
  undefined8 uStack_360;
  void *local_350;
  undefined4 local_348;
  ForAnyElementType local_340;
  undefined8 local_338;
  FTriangleSubMesh local_328;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  local_328.FullMesh = this->TriangleMesh;
  FTriangleMesh::FTriangleMesh(&local_328.DynamicSubMesh);
  FTriangleMesh::FTriangleMesh(&local_328.KinematicColliderSubMesh);
  local_328.FullMeshToSubMeshIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.FullMeshToSubMeshIndices.ArrayNum = 0;
  local_328.FullMeshToSubMeshIndices.ArrayMax = 0;
  local_328.DynamicSubMeshToFullMeshIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.DynamicSubMeshToFullMeshIndices.ArrayNum = 0;
  local_328.DynamicSubMeshToFullMeshIndices.ArrayMax = 0;
  local_328.KinematicColliderSubMeshToFullMeshIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_328.KinematicColliderSubMeshToFullMeshIndices.ArrayNum = 0;
  local_328.KinematicColliderSubMeshToFullMeshIndices.ArrayMax = 0;
  local_328.DynamicVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.DynamicVertices.ArrayNum = 0;
  local_328.DynamicVertices.ArrayMax = 0;
  FPBDTriangleMeshCollisions::FTriangleSubMesh::InitAllDynamic(&local_328);
  local_3b8._32_4_ = 0;
  local_3b8._0_8_ = (void *)0x0;
  local_3b8._8_8_ = 0;
  local_3b8._16_8_ = (void *)0x0;
  local_3b8._24_8_ = 0;
  local_390.Data = (FScriptContainerElement *)0x0;
  local_388 = 0;
  local_380.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_380.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_380.MaxBits = _UNK_150631d94;
  uStack_360 = _UNK_150631d98;
  local_350 = (void *)0x0;
  local_348 = 0;
  local_340.Data = (FScriptContainerElement *)0x0;
  local_338._0_4_ = 0;
  local_338._4_4_ = 0;
  Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange>
            (this,param_1,__real_7f7fc99e,&local_328,param_2,
             (THierarchicalSpatialHash<int,float> *)local_3b8,param_3,param_4);
  if (local_340.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data);
  }
  local_348 = 0;
  if (local_350 != (void *)0x0) {
    FMemory::Free(local_350);
  }
  uVar1 = local_388 >> 0x20;
  local_388 = local_388 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_390,0,(int *)((longlong)&local_388 + 4));
  }
  iVar2 = local_380.MaxBits;
  uStack_360 = 0xffffffff;
  local_380._24_8_ = (ulonglong)(uint)local_380.MaxBits << 0x20;
  if (0x80 < (uint)iVar2) {
    local_380.NumBits = 0;
    local_380.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_380,0);
  }
  if (local_380.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_380.AllocatorInstance.SecondaryData);
  }
  if (local_390.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.Data);
  }
  if ((void *)local_3b8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3b8._16_8_);
  }
  if ((void *)local_3b8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3b8._0_8_);
  }
  if (local_328.DynamicVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.DynamicVertices.AllocatorInstance.Data);
  }
  if (local_328.KinematicColliderSubMeshToFullMeshIndices.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.KinematicColliderSubMeshToFullMeshIndices.AllocatorInstance.Data);
  }
  if (local_328.DynamicSubMeshToFullMeshIndices.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.DynamicSubMeshToFullMeshIndices.AllocatorInstance.Data);
  }
  if (local_328.FullMeshToSubMeshIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.FullMeshToSubMeshIndices.AllocatorInstance.Data);
  }
  FTriangleMesh::~FTriangleMesh(&local_328.KinematicColliderSubMesh);
  FTriangleMesh::~FTriangleMesh(&local_328.DynamicSubMesh);
  return;
}

// Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange> @ 143c32270

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDCollisionSpringConstraintsBase::
Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange>
          (FPBDCollisionSpringConstraintsBase *this,FSolverParticlesRange *param_1,float param_2,
          FTriangleSubMesh *param_3,THierarchicalSpatialHash<int,float> *param_4,
          THierarchicalSpatialHash<int,float> *param_5,
          TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int> *param_6,
          TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>
          *param_7)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int local_res8 [2];
  TArrayView<Chaos::TVector<float,3>_const_,int> local_e8;
  FPAndInvM *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  code *local_c8;
  FPBDCollisionSpringConstraintsBase **local_c0;
  FPBDCollisionSpringConstraintsBase *local_b8;
  float local_b0;
  FTriangleSubMesh *local_a8;
  THierarchicalSpatialHash<int,float> *local_a0;
  FSolverParticlesRange *local_98;
  int *local_90;
  undefined4 local_88;
  TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int> *local_80;
  TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_> *local_78;
  TArrayView<Chaos::TVector<float,3>_const_,int> *local_70;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_68;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_58 [2];
  
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetConstArrayView<Chaos::TVector<float,3>_>
            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,local_58,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&param_1->field_0x8 + 0x48));
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)&param_1->field_0x8;
  if (((*(int *)&param_1->field_0x10 < 0) ||
      (*(int *)(lVar1 + 0xb0) < *(int *)&param_1->field_0x10 + *(int *)&param_1->field_0x14)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x4b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_d8 = (FPAndInvM *)
             ((longlong)*(int *)&param_1->field_0x10 * 0x10 + *(longlong *)(lVar1 + 0xa8));
  iStack_d0 = *(int *)&param_1->field_0x14;
  if ((iStack_d0 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetConstArrayView<Chaos::TVector<float,3>_>
            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_68,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&param_1->field_0x8 + 0x28));
  (this->KinematicCollisions).TriangleMesh = &param_3->KinematicColliderSubMesh;
  (this->KinematicCollisions).Positions.DataPtr = local_68.DataPtr;
  (this->KinematicCollisions).Positions.ArrayNum = local_68.ArrayNum;
  *(undefined4 *)&(this->KinematicCollisions).Positions.field_0xc = local_68._12_4_;
  (this->KinematicCollisions).SpatialHash = param_5;
  (this->KinematicCollisions).PAndInvM.DataPtr = local_d8;
  *(ulonglong *)&(this->KinematicCollisions).PAndInvM.ArrayNum = CONCAT44(uStack_cc,iStack_d0);
  (this->KinematicCollisions).Velocities.DataPtr = local_58[0].DataPtr;
  (this->KinematicCollisions).Velocities.ArrayNum = local_58[0].ArrayNum;
  *(undefined4 *)&(this->KinematicCollisions).Velocities.field_0xc = local_58[0]._12_4_;
  FPBDKinematicTriangleMeshCollisions::Init(&this->KinematicCollisions,param_1,param_2);
  iVar5 = (param_3->DynamicSubMesh).MElements.ArrayNum;
  if ((iVar5 == 0) || (this->bOnlyCollideKinematics != false)) {
    (this->Constraints).ArrayNum = 0;
    if ((this->Constraints).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&(this->Constraints).AllocatorInstance,0,&(this->Constraints).ArrayMax);
    }
    (this->Barys).ArrayNum = 0;
    if ((this->Barys).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&(this->Barys).AllocatorInstance,0,&(this->Barys).ArrayMax);
    }
    (this->FlipNormal).ArrayNum = 0;
    if ((this->FlipNormal).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->FlipNormal).AllocatorInstance,0,&(this->FlipNormal).ArrayMax);
    }
    (this->ConstraintTypes).ArrayNum = 0;
    if ((this->ConstraintTypes).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->ConstraintTypes).AllocatorInstance,0,
                 &(this->ConstraintTypes).ArrayMax);
    }
  }
  else {
    if ((param_6->ArrayNum == this->Offset + this->NumParticles) && (param_7->ArrayNum == iVar5)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    this->bGlobalIntersectionAnalysis = bVar4;
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_void___cdecl_Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange_const&___ptr64,float,Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh_const&___ptr64,Chaos::THierarchicalSpatialHash<int,float>_const&___ptr64,Chaos::THierarchicalSpatialHash<int,float>_const&___ptr64,TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>_const&___ptr64,TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l7::__CpuProfilerEventSpecId150,"ChaosPBDCollisionSpring_ProximityQuery",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionSpringConstraintsBase.cpp"
                 ,0x96);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_void___cdecl_Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange_const&___ptr64,float,Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh_const&___ptr64,Chaos::THierarchicalSpatialHash<int,float>_const&___ptr64,Chaos::THierarchicalSpatialHash<int,float>_const&___ptr64,TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>_const&___ptr64,TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                 ::__l7::__CpuProfilerEventSpecId150);
    }
    iVar5 = (param_3->DynamicVertices).ArrayNum;
    if (iVar5 == 0) {
      iVar5 = this->NumParticles;
    }
    iVar3 = iVar5 * 3;
    TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->Constraints,iVar3,Default);
    TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->Barys,iVar3,Default);
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this->FlipNormal,iVar3,Default);
    TArray<enum_Chaos::Softs::FPBDCollisionSpringConstraintsBase::EConstraintType,TSizedDefaultAllocator<32>_>
    ::SetNumUninitialized(&this->ConstraintTypes,iVar3,Default);
    local_res8[0] = 0;
    if (this->ReferencePositions ==
        (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0) {
      local_e8.DataPtr = (TVector<float,3> *)0x0;
      local_e8.ArrayNum = 0;
    }
    else {
      TParticlesRange<Chaos::Softs::FSolverParticles,void>::
      GetConstArrayView<Chaos::TVector<float,3>_>
                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_e8,
                 this->ReferencePositions);
    }
    local_a0 = param_4;
    local_90 = local_res8;
    local_70 = &local_e8;
    local_c0 = &local_b8;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange>'::__l7::<lambda_1>,void,int>
               ::Call;
    local_88 = 3;
    local_80 = param_6;
    local_78 = param_7;
    local_b8 = this;
    local_b0 = param_2;
    local_a8 = param_3;
    local_98 = param_1;
    PhysicsParallelFor(iVar5,(TFunctionRef<void___cdecl(int)> *)&local_c8,false);
    iVar5 = local_res8[0];
    TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Constraints,local_res8[0],No);
    TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum(&this->Barys,iVar5,No);
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(&this->FlipNormal,iVar5,No);
    TArray<enum_Chaos::Softs::FPBDCollisionSpringConstraintsBase::EConstraintType,TSizedDefaultAllocator<32>_>
    ::SetNum(&this->ConstraintTypes,iVar5,No);
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// FPBDCollisionSpringConstraintsBase @ 143c43bb0

FPBDCollisionSpringConstraintsBase * __thiscall
Chaos::Softs::FPBDCollisionSpringConstraintsBase::FPBDCollisionSpringConstraintsBase
          (FPBDCollisionSpringConstraintsBase *this,int param_1,int param_2,FTriangleMesh *param_3,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_4,
          TSet<Chaos::TVector<int,2>,DefaultKeyFuncs<Chaos::TVector<int,2>,0>,FDefaultSetAllocator>
          *param_5,TArrayView<float_const_,int> *param_6,TArrayView<float_const_,int> *param_7,
          TArrayView<int_const_,int> *param_8,TVector<float,2> param_9,float param_10,float param_11
          ,bool param_12,float param_13,float param_14,TVector<float,2> param_15,float param_16)

{
  TVector<float,2> local_res8;
  
  local_res8._0_4_ = 0;
  this->_padding_ = (longlong)&___7FPBDCollisionSpringConstraintsBase_Softs_Chaos__6B_;
  local_res8._4_4_ = 0x3f800000;
  FPBDFlatWeightMap::FPBDFlatWeightMap
            (&this->ThicknessWeighted,&param_9,param_6,param_2,&local_res8);
  this->bOnlyCollideKinematics = param_12;
  this->Stiffness = param_10;
  this->FrictionCoefficient = param_11;
  local_res8._0_4_ = 0;
  local_res8._4_4_ = 0x3f800000;
  FPBDFlatWeightMap::FPBDFlatWeightMap
            (&this->KinematicColliderFrictionCoefficient,&param_15,param_7,param_2,&local_res8);
  FPBDKinematicTriangleMeshCollisions::FPBDKinematicTriangleMeshCollisions
            (&this->KinematicCollisions,param_2,&this->ThicknessWeighted,
             &this->KinematicColliderFrictionCoefficient,param_14,param_13);
  this->ProximityStiffness = param_16;
  this->ReferencePositions = param_4;
  *(undefined8 *)&(this->DisabledCollisionElements).Elements = 0;
  *(undefined8 *)&(this->DisabledCollisionElements).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DisabledCollisionElements).Elements.field_0x20 = 0;
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).ArrayMax = 0;
  (this->Barys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Barys).ArrayNum = 0;
  (this->Barys).ArrayMax = 0;
  (this->FlipNormal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FlipNormal).ArrayNum = 0;
  (this->FlipNormal).ArrayMax = 0;
  this->TriangleMesh = param_3;
  *(undefined4 *)&(this->DisabledCollisionElements).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DisabledCollisionElements).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DisabledCollisionElements).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DisabledCollisionElements).Elements.field_0x34 = 0;
  (this->DisabledCollisionElements).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DisabledCollisionElements).HashSize = 0;
  TSet<Chaos::TVector<int,2>,DefaultKeyFuncs<Chaos::TVector<int,2>,0>,FDefaultSetAllocator>::
  operator=(&this->DisabledCollisionElements,param_5);
  (this->FaceCollisionLayers).DataPtr = (int *)0x0;
  (this->FaceCollisionLayers).ArrayNum = 0;
  (this->VertexCollisionLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexCollisionLayers).ArrayNum = 0;
  (this->VertexCollisionLayers).ArrayMax = 0;
  (this->ConstraintTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintTypes).ArrayNum = 0;
  (this->ConstraintTypes).ArrayMax = 0;
  this->Offset = param_1;
  this->NumParticles = param_2;
  this->bGlobalIntersectionAnalysis = false;
  UpdateCollisionLayers(this,param_8);
  return this;
}

// ~FPBDCollisionSpringConstraintsBase @ 143c454f0

void __thiscall
Chaos::Softs::FPBDCollisionSpringConstraintsBase::~FPBDCollisionSpringConstraintsBase
          (FPBDCollisionSpringConstraintsBase *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&___7FPBDCollisionSpringConstraintsBase_Softs_Chaos__6B_;
  pFVar1 = (this->ConstraintTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VertexCollisionLayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->DisabledCollisionElements).HashSize = 0;
  FVar2 = (this->DisabledCollisionElements).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<Chaos::TVector<int,2>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Chaos::TVector<int,2>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DisabledCollisionElements).Elements);
  pFVar1 = (this->FlipNormal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Barys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Constraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,int>
            ((TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *)
             (this->KinematicCollisions).Timers.AllocatorInstance.Data,
             (this->KinematicCollisions).Timers.ArrayNum);
  pFVar1 = (this->KinematicCollisions).Timers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->KinematicCollisions).CollidingElements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->KinematicCollisions).CollidingParticles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->KinematicColliderFrictionCoefficient).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ThicknessWeighted).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 143c49e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Chaos::Softs::FPBDCollisionSpringConstraintsBase::
Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticles>'
::__l7::<lambda_1>::operator()(void *this,int param_1)

{
  FTriangleMesh *this_00;
  undefined8 *puVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined8 uVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  TVector<float,3> *pTVar16;
  TVector<float,3> *pTVar17;
  TVector<float,3> *pTVar18;
  TVector<float,3> *pTVar19;
  float *pfVar20;
  int *piVar21;
  FGIAColor *pFVar22;
  FGIAColor *pFVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  int iVar28;
  ulonglong uVar29;
  FScriptContainerElement *pFVar30;
  int iVar31;
  longlong lVar32;
  longlong lVar33;
  bool bVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auStackY_218 [32];
  char local_1c7;
  undefined1 local_1c6;
  undefined1 local_1c5;
  FIdentityFunctor local_1c4 [4];
  int local_1c0;
  TArray<Chaos::TTriangleCollisionPoint<float>,TSizedDefaultAllocator<32>_> local_1b8;
  uint local_1a8;
  int local_1a4;
  float local_1a0;
  uint local_19c;
  longlong local_198;
  longlong local_190;
  FScriptContainerElement *local_188;
  undefined8 local_180;
  float local_178;
  undefined8 local_174;
  float local_16c;
  undefined8 local_168;
  float local_160;
  code *local_158;
  longlong *local_150;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_148;
  longlong local_138;
  char local_130;
  FSolverParticles *local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  int local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_218;
  lVar33 = *(longlong *)((longlong)this + 0x10);
  uVar27 = (ulonglong)param_1;
  iVar28 = *(int *)(lVar33 + 0x2d0);
  local_1a8 = param_1;
  if (iVar28 != 0) {
    uVar26 = 0;
    if (param_1 < iVar28) {
      uVar26 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_1a8 = *(int *)(*(longlong *)(lVar33 + 0x2c8) + uVar27 * 4) -
                *(int *)(*(longlong *)this + 0x1d8);
    uVar27 = (ulonglong)local_1a8;
  }
  uVar26 = (uint)uVar27;
  iVar28 = *(int *)(*(longlong *)this + 0x1d8) + uVar26;
  local_1c0 = iVar28;
  fVar35 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)((longlong)this + 0x20),iVar28);
  if (fVar35 == 0.0) {
    return;
  }
  if (((int)uVar26 < 0) || (lVar33 = *(longlong *)this, *(int *)(lVar33 + 0x1c0) <= (int)uVar26)) {
LAB_143c4a04b:
    local_1c7 = '\0';
  }
  else {
    uVar25 = ~uVar26 >> 0x1f;
    uVar13 = 0;
    if ((int)uVar26 < *(int *)(lVar33 + 0x1c0)) {
      uVar13 = uVar25;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar32 = (longlong)(int)uVar26;
    if (*(int *)(*(longlong *)(lVar33 + 0x1b8) + lVar32 * 8) == -1) goto LAB_143c4a04b;
    lVar33 = *(longlong *)this;
    local_1c7 = '\x01';
    uVar13 = 0;
    if ((int)uVar26 < *(int *)(lVar33 + 0x1c0)) {
      uVar13 = uVar25;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar33 = *(longlong *)(lVar33 + 0x1b8);
    lVar6 = *(longlong *)this;
    uVar13 = 0;
    if ((int)uVar26 < *(int *)(lVar6 + 0x1c0)) {
      uVar13 = uVar25;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((*(int *)(*(longlong *)(lVar6 + 0x1b8) + 4 + lVar32 * 8) < *(int *)(lVar33 + lVar32 * 8)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bVertexHasCollisionLayers || VertexCollisionLayers[i][0] <= VertexCollisionLayers[i][1]"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionSpringConstraintsBase.cpp"
                            ,0xb1,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  fVar36 = Chaos::Softs::FPBDFlatWeightMap::GetValue
                     ((FPBDFlatWeightMap *)(*(longlong *)this + 8),uVar26);
  fVar46 = __real_3fc00000;
  uVar26 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar35 = __real_38d1b717;
  local_138 = *(longlong *)this;
  local_128 = *(FSolverParticles **)((longlong)this + 0x20);
  local_120 = *(longlong *)((longlong)this + 0x10);
  local_130 = local_1c7;
  local_118 = *(undefined8 *)((longlong)this + 0x38);
  local_110 = *(undefined8 *)((longlong)this + 0x40);
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 0;
  local_1b8.ArrayMax = 0;
  local_1a0 = fVar36;
  if ((*(int *)(local_138 + 0x28) < 1) ||
     ((float)(*(uint *)(local_138 + 0x34) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_38d1b717)) {
    local_150 = &local_138;
    this_00 = (FTriangleMesh *)(local_120 + 8);
    local_158 = UE::Core::Private::Function::
                TFunctionRefCaller<``Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticles>'::__l7::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int>
                ::Call;
    fVar40 = *(float *)(local_138 + 0x30) * __real_3fc00000;
    pTVar16 = Chaos::Softs::FSolverParticles::X(local_128,iVar28);
    local_148.DataPtr = *(TVector<float,3> **)(*(longlong *)((longlong)this + 0x20) + 0x28);
    local_148.ArrayNum = *(int *)(*(longlong *)((longlong)this + 0x20) + 0x30);
    if ((local_148.ArrayNum < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    Chaos::FTriangleMesh::PointProximityQuery<float>
              (this_00,*(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                         **)((longlong)this + 0x18),&local_148,iVar28,pTVar16,fVar36 * fVar46,fVar40
               ,(TFunctionRef<bool___cdecl(int,int)> *)&local_158,&local_1b8);
  }
  else {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionSpringConstraintsBase.cpp"
                        ,0xee,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar24 = local_1b8._8_8_ & 0xffffffff;
  if (local_1b8.ArrayNum == 0) goto LAB_143c4abc9;
  if (3 < local_1b8.ArrayNum) {
    AlgoImpl::
    IntroSortInternal<Chaos::TTriangleCollisionPoint<float>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::TTriangleCollisionPoint<float>,__Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticles>_::__l7::<lambda_1>::operator()_::__l31::<lambda_2>_>_>
              ((TTriangleCollisionPoint<float> *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum
               ,local_1c4[0],(<lambda_2> *)local_1c4);
    uVar24 = (ulonglong)local_1b8.ArrayNum;
    if (local_1b8.ArrayNum < 3) {
      iVar31 = 3 - local_1b8.ArrayNum;
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x38,4,iVar31,&local_1b8.AllocatorInstance,&local_1b8.ArrayNum,
                          &local_1b8.ArrayMax);
      DefaultConstructItems<Chaos::TTriangleCollisionPoint<float>,int>
                (local_1b8.AllocatorInstance.Data + (longlong)iVar14 * 0x38,iVar31);
      uVar24 = local_1b8._8_8_ & 0xffffffff;
    }
    else if (3 < local_1b8.ArrayNum) {
      iVar14 = local_1b8.ArrayNum + -3;
      if (iVar14 < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else if (iVar14 == 0) goto LAB_143c4a2d4;
      iVar15 = (local_1b8.ArrayNum - iVar14) + -3;
      iVar31 = local_1b8.ArrayNum;
      if (iVar15 != 0) {
        memmove((TTriangleCollisionPoint<float> *)(local_1b8.AllocatorInstance.Data + 0xa8),
                (TTriangleCollisionPoint<float> *)(local_1b8.AllocatorInstance.Data + 0xa8) + iVar14
                ,(longlong)iVar15 * 0x38);
        iVar31 = local_1b8.ArrayNum;
      }
      uVar24 = (ulonglong)(uint)(iVar31 - iVar14);
      local_1b8.ArrayNum = iVar31 - iVar14;
    }
  }
LAB_143c4a2d4:
  local_19c = (uint)uVar24;
  uVar29 = (ulonglong)(int)local_19c;
  pFVar30 = local_1b8.AllocatorInstance.Data + 0x10;
  local_188 = local_1b8.AllocatorInstance.Data + uVar29 * 0x38;
  while( true ) {
    pFVar10 = local_188;
    if ((int)uVar24 != (int)uVar29) {
      local_1c5 = 0;
      `TCheckedPointerIterator<Chaos::TTriangleCollisionPoint<float>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1c5);
    }
    if (pFVar30 + -0x10 == pFVar10) break;
    fVar46 = *(float *)(pFVar30 + -8);
    lVar32 = (longlong)(int)fVar46;
    lVar33 = *(longlong *)((longlong)this + 0x10);
    uVar13 = 0;
    if ((int)fVar46 < *(int *)(lVar33 + 0x10)) {
      uVar13 = ~(uint)fVar46 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar33 = *(longlong *)(lVar33 + 8);
    uVar13 = (uint)uVar27;
    local_190 = lVar33;
    if ((*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x48))->ArrayNum == 0
       ) {
LAB_143c4a58c:
      uVar9 = *(undefined8 *)pFVar30;
      fVar35 = *(float *)(pFVar30 + 8);
      local_1a4 = Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh::
                  GetFullMeshElementIndexFromDynamicElement
                            (*(FTriangleSubMesh **)((longlong)this + 0x10),
                             (int)*(float *)(pFVar30 + -8));
      local_1c6 = 0;
      if ((local_1c7 == '\0') ||
         (piVar21 = TArrayView<int_const_,int>::operator[]
                              ((TArrayView<int_const_,int> *)(*(longlong *)this + 0x1a8),local_1a4),
         *piVar21 == -1)) {
LAB_143c4a6d0:
        pTVar16 = Chaos::TParticles<float,3>::GetX
                            (*(TParticles<float,3> **)((longlong)this + 0x20),
                             *(int *)(lVar33 + 8 + lVar32 * 0xc));
        pTVar17 = Chaos::TParticles<float,3>::GetX
                            (*(TParticles<float,3> **)((longlong)this + 0x20),
                             *(int *)(lVar33 + 4 + lVar32 * 0xc));
        pTVar18 = Chaos::TParticles<float,3>::GetX
                            (*(TParticles<float,3> **)((longlong)this + 0x20),
                             *(int *)(lVar33 + lVar32 * 0xc));
        iVar28 = local_1c0;
        fVar46 = *(float *)&pTVar17->field_0x8;
        uVar3 = *(undefined8 *)pTVar17;
        fVar36 = *(float *)&pTVar16->field_0x8;
        uVar4 = *(undefined8 *)pTVar16;
        fVar40 = *(float *)&pTVar18->field_0x8;
        uVar5 = *(undefined8 *)pTVar18;
        local_178 = fVar40;
        local_16c = fVar46;
        local_160 = fVar36;
        pTVar16 = Chaos::TParticles<float,3>::GetX
                            (*(TParticles<float,3> **)((longlong)this + 0x20),local_1c0);
        lVar33 = local_190;
        fVar42 = (float)uVar4 - (float)uVar5;
        fVar47 = (float)uVar3 - (float)uVar5;
        fVar46 = fVar46 - fVar40;
        local_180._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
        fVar37 = (float)((ulonglong)uVar3 >> 0x20) - local_180._4_4_;
        fVar36 = fVar36 - fVar40;
        local_180._4_4_ = (float)((ulonglong)uVar4 >> 0x20) - local_180._4_4_;
        fVar40 = fVar37 * fVar36 - fVar46 * local_180._4_4_;
        fVar43 = fVar42 * fVar46 - fVar47 * fVar36;
        fVar36 = fVar47 * local_180._4_4_ - fVar42 * fVar37;
        fVar46 = fVar43 * fVar43 + fVar40 * fVar40 + fVar36 * fVar36;
        uVar38 = fVar36;
        uVar41 = fVar40;
        uVar44 = fVar43;
        if ((fVar46 != __real_3f800000) &&
           (uVar38 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
           uVar41 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
           uVar44 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
           __real_322bcc77 <= fVar46)) {
          fVar46 = __real_3f800000 / SQRT(fVar46);
          uVar38 = fVar46 * fVar36;
          uVar41 = fVar46 * fVar40;
          uVar44 = fVar46 * fVar43;
        }
        bVar11 = (*(float *)pTVar16 - *(float *)(pFVar30 + 0xc)) * (float)uVar41 +
                 (*(float *)&pTVar16->field_0x4 - *(float *)(pFVar30 + 0x10)) * (float)uVar44 +
                 (float)uVar38 * (*(float *)&pTVar16->field_0x8 - *(float *)(pFVar30 + 0x14)) <
                 __real_00000000;
        local_180 = uVar5;
        local_174 = uVar3;
        local_168 = uVar4;
        if (*(char *)(*(longlong *)this + 0x1e0) != '\0') {
          pFVar22 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                    operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                 **)((longlong)this + 0x38),*(int *)(local_190 + lVar32 * 0xc));
          pFVar23 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                    operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                 **)((longlong)this + 0x38),iVar28);
          if (((pFVar23->ColorBits ^ pFVar22->ColorBits) & pFVar22->ContourIndexBits &
               pFVar23->ContourIndexBits & 0xfffffffeU) == 0) {
            pFVar22 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                      operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                   **)((longlong)this + 0x38),*(int *)(lVar33 + 4 + lVar32 * 0xc));
            pFVar23 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                      operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                   **)((longlong)this + 0x38),iVar28);
            if (((pFVar23->ColorBits ^ pFVar22->ColorBits) & pFVar22->ContourIndexBits &
                 pFVar23->ContourIndexBits & 0xfffffffeU) == 0) {
              pFVar22 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                        operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                     **)((longlong)this + 0x38),*(int *)(lVar33 + 8 + lVar32 * 0xc))
              ;
              pFVar23 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                        operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                     **)((longlong)this + 0x38),iVar28);
              if (((pFVar23->ColorBits ^ pFVar22->ColorBits) & pFVar22->ContourIndexBits &
                   pFVar23->ContourIndexBits & 0xfffffffeU) == 0) {
                fVar46 = *(float *)(pFVar30 + -8);
                plVar7 = *(longlong **)((longlong)this + 0x40);
                uVar13 = 0;
                if ((int)fVar46 < (int)plVar7[1]) {
                  uVar13 = ~(uint)fVar46 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar34)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                lVar6 = *plVar7;
                pFVar22 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                          ::operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                         **)((longlong)this + 0x38),local_1c0);
                if (((*(uint *)(lVar6 + 4 + (longlong)(int)fVar46 * 8) ^ pFVar22->ColorBits) &
                     *(uint *)(lVar6 + (longlong)(int)fVar46 * 8) & pFVar22->ContourIndexBits &
                    0xfffffffe) == 0) goto LAB_143c4a9b1;
              }
            }
          }
          local_1c6 = 1;
          bVar11 = !bVar11;
        }
      }
      else {
        lVar6 = *(longlong *)this;
        uVar25 = 0;
        if ((int)uVar13 < *(int *)(lVar6 + 0x1c0)) {
          uVar25 = ~uVar13 >> 0x1f;
        }
        local_198 = lVar6;
        if ((uVar25 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar6 = *(longlong *)(lVar6 + 0x1b8);
        piVar21 = TArrayView<int_const_,int>::operator[]
                            ((TArrayView<int_const_,int> *)(local_198 + 0x1a8),local_1a4);
        if (*piVar21 < *(int *)(lVar6 + (longlong)(int)uVar13 * 8)) {
          bVar11 = true;
        }
        else {
          lVar6 = *(longlong *)this;
          uVar25 = 0;
          if ((int)uVar13 < *(int *)(lVar6 + 0x1c0)) {
            uVar25 = ~uVar13 >> 0x1f;
          }
          local_198 = lVar6;
          if ((uVar25 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = *(longlong *)(lVar6 + 0x1b8);
          piVar21 = TArrayView<int_const_,int>::operator[]
                              ((TArrayView<int_const_,int> *)(local_198 + 0x1a8),local_1a4);
          if (*piVar21 <= *(int *)(lVar6 + 4 + (longlong)(int)uVar13 * 8)) goto LAB_143c4a6d0;
          bVar11 = false;
        }
      }
LAB_143c4a9b1:
      piVar21 = *(int **)((longlong)this + 0x28);
      LOCK();
      iVar28 = *piVar21;
      *piVar21 = *piVar21 + 1;
      UNLOCK();
      local_108 = local_1c0;
      uStack_104 = *(undefined4 *)(lVar33 + lVar32 * 0xc);
      uStack_100 = *(undefined4 *)(lVar33 + 4 + lVar32 * 0xc);
      uStack_fc = *(undefined4 *)(lVar33 + 8 + lVar32 * 0xc);
      lVar33 = *(longlong *)this;
      bVar34 = iVar28 < 0;
      uVar3 = CONCAT44(uStack_104,local_1c0);
      uVar4 = CONCAT44(uStack_fc,uStack_100);
      local_f8 = uVar3;
      uStack_f0 = uVar4;
      if ((bVar34 || *(int *)(lVar33 + 0x120) <= iVar28) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar32 = (longlong)iVar28;
      puVar1 = (undefined8 *)(*(longlong *)(lVar33 + 0x118) + lVar32 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      lVar33 = *(longlong *)this;
      if ((bVar34 || *(int *)(lVar33 + 0x130) <= iVar28) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar33 = *(longlong *)(lVar33 + 0x128);
      *(undefined8 *)(lVar33 + lVar32 * 0xc) = uVar9;
      *(float *)(lVar33 + 8 + lVar32 * 0xc) = fVar35;
      lVar33 = *(longlong *)this;
      if ((bVar34 || *(int *)(lVar33 + 0x140) <= iVar28) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar34)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(bool *)(lVar32 + *(longlong *)(lVar33 + 0x138)) = bVar11;
      lVar33 = *(longlong *)this;
      if ((iVar28 < 0 || *(int *)(lVar33 + 0x1d0) <= iVar28) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar35 = __real_38d1b717;
      *(undefined1 *)((longlong)iVar28 + *(longlong *)(lVar33 + 0x1c8)) = local_1c6;
      fVar36 = local_1a0;
    }
    else {
      pTVar16 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                          (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)
                            ((longlong)this + 0x48),iVar28);
      pTVar17 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                          (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)
                            ((longlong)this + 0x48),*(int *)(lVar33 + lVar32 * 0xc));
      pTVar18 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                          (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)
                            ((longlong)this + 0x48),*(int *)(lVar33 + 4 + lVar32 * 0xc));
      pTVar19 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                          (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)
                            ((longlong)this + 0x48),*(int *)(lVar33 + 8 + lVar32 * 0xc));
      fVar46 = *(float *)pFVar30;
      fVar40 = *(float *)(pFVar30 + 4);
      fVar37 = *(float *)(pFVar30 + 8);
      fVar42 = ((*(float *)pTVar16 - fVar46 * *(float *)pTVar17) - fVar40 * *(float *)pTVar18) -
               fVar37 * *(float *)pTVar19;
      lVar6 = *(longlong *)this;
      fVar47 = ((*(float *)&pTVar16->field_0x8 - fVar46 * *(float *)&pTVar17->field_0x8) -
               fVar40 * *(float *)&pTVar18->field_0x8) - fVar37 * *(float *)&pTVar19->field_0x8;
      fVar46 = ((*(float *)&pTVar16->field_0x4 - fVar46 * *(float *)&pTVar17->field_0x4) -
               fVar40 * *(float *)&pTVar18->field_0x4) - fVar37 * *(float *)&pTVar19->field_0x4;
      if ((*(int *)(lVar6 + 0x28) < 1) || ((float)(*(uint *)(lVar6 + 0x34) & uVar26) <= fVar35)) {
        fVar40 = *(float *)(lVar6 + 0x30);
      }
      else {
        iVar28 = *(int *)(lVar6 + 0x1d8);
        iVar14 = *(int *)(lVar33 + 4 + lVar32 * 0xc);
        iVar31 = *(int *)(lVar33 + 8 + lVar32 * 0xc);
        fVar40 = *(float *)(lVar6 + 0x34);
        fVar37 = *(float *)(lVar6 + 0x30);
        pfVar20 = TArrayView<float_const_,int>::operator[]
                            ((TArrayView<float_const_,int> *)(lVar6 + 0x20),
                             *(int *)(lVar33 + lVar32 * 0xc) - iVar28);
        fVar43 = *pfVar20;
        if ((*(int *)(lVar6 + 0x28) < 1) ||
           (fVar2 = *(float *)(lVar6 + 0x34), (float)((uint)fVar2 & uVar26) <= fVar35)) {
          fVar39 = *(float *)(lVar6 + 0x30);
        }
        else {
          fVar39 = *(float *)(lVar6 + 0x30);
          pfVar20 = TArrayView<float_const_,int>::operator[]
                              ((TArrayView<float_const_,int> *)(lVar6 + 0x20),iVar14 - iVar28);
          fVar39 = fVar2 * *pfVar20 + fVar39;
        }
        if ((*(int *)(lVar6 + 0x28) < 1) ||
           (fVar2 = *(float *)(lVar6 + 0x34), (float)((uint)fVar2 & uVar26) <= fVar35)) {
          fVar45 = *(float *)(lVar6 + 0x30);
        }
        else {
          fVar45 = *(float *)(lVar6 + 0x30);
          pfVar20 = TArrayView<float_const_,int>::operator[]
                              ((TArrayView<float_const_,int> *)(lVar6 + 0x20),iVar31 - iVar28);
          fVar45 = fVar2 * *pfVar20 + fVar45;
        }
        fVar40 = fVar39 * *(float *)(pFVar30 + 4) + (fVar40 * fVar43 + fVar37) * *(float *)pFVar30 +
                 fVar45 * *(float *)(pFVar30 + 8);
      }
      uVar13 = local_1a8;
      if ((fVar40 + fVar36) * (fVar40 + fVar36) <=
          fVar42 * fVar42 + fVar46 * fVar46 + fVar47 * fVar47) goto LAB_143c4a58c;
    }
    uVar24 = local_1b8._8_8_ & 0xffffffff;
    pFVar30 = pFVar30 + 0x38;
    uVar27 = (ulonglong)local_1a8;
    uVar29 = (ulonglong)local_19c;
    iVar28 = local_1c0;
  }
LAB_143c4abc9:
  if ((TTriangleCollisionPoint<float> *)local_1b8.AllocatorInstance.Data !=
      (TTriangleCollisionPoint<float> *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 143c4ac40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::Softs::FPBDCollisionSpringConstraintsBase::
Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticlesRange>'
::__l7::<lambda_1>::operator()(void *this,int param_1)

{
  FTriangleMesh *this_00;
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  TParticlesRange<Chaos::Softs::FSolverParticles,void> *this_01;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  TVector<float,3> *pTVar19;
  TVector<float,3> *pTVar20;
  TVector<float,3> *pTVar21;
  TVector<float,3> *pTVar22;
  float *pfVar23;
  int *piVar24;
  FGIAColor *pFVar25;
  FGIAColor *pFVar26;
  ulonglong uVar27;
  uint uVar28;
  int iVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined1 uVar32;
  int iVar33;
  FScriptContainerElement *pFVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  undefined1 auStackY_208 [32];
  undefined1 local_1b6;
  undefined1 local_1b0;
  FIdentityFunctor local_1af [3];
  int local_1ac;
  TArray<Chaos::TTriangleCollisionPoint<float>,TSizedDefaultAllocator<32>_> local_1a8;
  uint local_198;
  float local_194;
  uint local_190;
  undefined8 local_188;
  float local_180;
  undefined8 local_17c;
  float local_174;
  undefined8 local_170;
  float local_168;
  longlong local_160;
  FScriptContainerElement *local_158;
  code *local_150;
  longlong *local_148;
  longlong local_140;
  undefined1 local_138;
  FSolverParticlesRange *local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_110;
  int local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_208;
  lVar4 = *(longlong *)((longlong)this + 0x10);
  iVar33 = *(int *)(lVar4 + 0x2d0);
  if (iVar33 != 0) {
    uVar16 = 0;
    if (param_1 < iVar33) {
      uVar16 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (local_198 = param_1,
       bVar13 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    param_1 = *(int *)(*(longlong *)(lVar4 + 0x2c8) + (longlong)param_1 * 4) -
              *(int *)(*(longlong *)this + 0x1d8);
  }
  lVar4 = *(longlong *)((longlong)this + 0x20);
  iVar33 = *(int *)(*(longlong *)this + 0x1d8) + param_1;
  local_198 = param_1;
  if ((*(longlong *)(lVar4 + 8) == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar36 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)(lVar4 + 8),*(int *)(lVar4 + 0x10) + iVar33);
  if (fVar36 == 0.0) {
    return;
  }
  if ((param_1 < 0) || (lVar4 = *(longlong *)this, *(int *)(lVar4 + 0x1c0) <= param_1)) {
LAB_143c4b006:
    uVar32 = 0;
    bVar13 = false;
  }
  else {
    uVar28 = (uint)~param_1 >> 0x1f;
    uVar16 = 0;
    if (param_1 < *(int *)(lVar4 + 0x1c0)) {
      uVar16 = uVar28;
    }
    if ((uVar16 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar30 = (longlong)param_1;
    if (*(int *)(*(longlong *)(lVar4 + 0x1b8) + lVar30 * 8) == -1) goto LAB_143c4b006;
    lVar4 = *(longlong *)this;
    uVar32 = 1;
    bVar13 = true;
    uVar16 = 0;
    if (param_1 < *(int *)(lVar4 + 0x1c0)) {
      uVar16 = uVar28;
    }
    if ((uVar16 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar4 = *(longlong *)(lVar4 + 0x1b8);
    lVar5 = *(longlong *)this;
    uVar16 = 0;
    if (param_1 < *(int *)(lVar5 + 0x1c0)) {
      uVar16 = uVar28;
    }
    if ((uVar16 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((*(int *)(*(longlong *)(lVar5 + 0x1b8) + 4 + lVar30 * 8) < *(int *)(lVar4 + lVar30 * 8)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bVertexHasCollisionLayers || VertexCollisionLayers[i][0] <= VertexCollisionLayers[i][1]"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionSpringConstraintsBase.cpp"
                            ,0xb1,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  fVar37 = Chaos::Softs::FPBDFlatWeightMap::GetValue
                     ((FPBDFlatWeightMap *)(*(longlong *)this + 8),param_1);
  fVar46 = __real_3fc00000;
  uVar16 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar36 = __real_38d1b717;
  local_140 = *(longlong *)this;
  local_130 = *(FSolverParticlesRange **)((longlong)this + 0x20);
  local_128 = *(longlong *)((longlong)this + 0x10);
  local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax = 0;
  local_120 = *(undefined8 *)((longlong)this + 0x38);
  local_118 = *(undefined8 *)((longlong)this + 0x40);
  local_194 = fVar37;
  local_138 = uVar32;
  if ((*(int *)(local_140 + 0x28) < 1) ||
     ((float)(*(uint *)(local_140 + 0x34) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_38d1b717)) {
    local_148 = &local_140;
    this_00 = (FTriangleMesh *)(local_128 + 8);
    local_150 = UE::Core::Private::Function::
                TFunctionRefCaller<``Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticlesRange>'::__l7::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int>
                ::Call;
    fVar39 = *(float *)(local_140 + 0x30) * __real_3fc00000;
    pTVar19 = Chaos::Softs::FSolverParticlesRange::X(local_130,iVar33);
    this_01 = *(TParticlesRange<Chaos::Softs::FSolverParticles,void> **)((longlong)this + 0x20);
    if ((this_01->Particles == (FSolverParticles *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
    GetConstArrayView<Chaos::TVector<float,3>_>
              (this_01,&local_110,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
               &this_01->Particles->_padding_);
    Chaos::FTriangleMesh::PointProximityQuery<float>
              (this_00,*(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                         **)((longlong)this + 0x18),&local_110,iVar33,pTVar19,fVar37 * fVar46,fVar39
               ,(TFunctionRef<bool___cdecl(int,int)> *)&local_150,&local_1a8);
  }
  else {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionSpringConstraintsBase.cpp"
                        ,0xee,L"");
    if (bVar14) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar27 = local_1a8._8_8_ & 0xffffffff;
  if (local_1a8.ArrayNum == 0) goto LAB_143c4bb22;
  if (3 < local_1a8.ArrayNum) {
    AlgoImpl::
    IntroSortInternal<Chaos::TTriangleCollisionPoint<float>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::TTriangleCollisionPoint<float>,__Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticlesRange>_::__l7::<lambda_1>::operator()_::__l31::<lambda_2>_>_>
              ((TTriangleCollisionPoint<float> *)local_1a8.AllocatorInstance.Data,local_1a8.ArrayNum
               ,local_1af[0],(<lambda_2> *)local_1af);
    uVar27 = (ulonglong)local_1a8.ArrayNum;
    if (local_1a8.ArrayNum < 3) {
      iVar29 = 3 - local_1a8.ArrayNum;
      iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x38,4,iVar29,&local_1a8.AllocatorInstance,&local_1a8.ArrayNum,
                          &local_1a8.ArrayMax);
      DefaultConstructItems<Chaos::TTriangleCollisionPoint<float>,int>
                (local_1a8.AllocatorInstance.Data + (longlong)iVar17 * 0x38,iVar29);
      uVar27 = local_1a8._8_8_ & 0xffffffff;
    }
    else if (3 < local_1a8.ArrayNum) {
      iVar17 = local_1a8.ArrayNum + -3;
      if (iVar17 < 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar14) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else if (iVar17 == 0) goto LAB_143c4b162;
      iVar18 = (local_1a8.ArrayNum - iVar17) + -3;
      iVar29 = local_1a8.ArrayNum;
      if (iVar18 != 0) {
        memmove((TTriangleCollisionPoint<float> *)(local_1a8.AllocatorInstance.Data + 0xa8),
                (TTriangleCollisionPoint<float> *)(local_1a8.AllocatorInstance.Data + 0xa8) + iVar17
                ,(longlong)iVar18 * 0x38);
        iVar29 = local_1a8.ArrayNum;
      }
      uVar27 = (ulonglong)(uint)(iVar29 - iVar17);
      local_1a8.ArrayNum = iVar29 - iVar17;
    }
  }
LAB_143c4b162:
  local_190 = (uint)uVar27;
  uVar31 = (ulonglong)(int)local_190;
  pFVar34 = local_1a8.AllocatorInstance.Data + 0x10;
  local_160 = (longlong)param_1;
  local_158 = local_1a8.AllocatorInstance.Data + uVar31 * 0x38;
  while( true ) {
    pFVar12 = local_158;
    if ((int)uVar27 != (int)uVar31) {
      local_1b0 = 0;
      `TCheckedPointerIterator<Chaos::TTriangleCollisionPoint<float>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1b0);
    }
    if (pFVar34 + -0x10 == pFVar12) break;
    fVar46 = *(float *)(pFVar34 + -8);
    lVar30 = (longlong)(int)fVar46;
    lVar4 = *(longlong *)((longlong)this + 0x10);
    uVar28 = 0;
    if ((int)fVar46 < *(int *)(lVar4 + 0x10)) {
      uVar28 = ~(uint)fVar46 >> 0x1f;
    }
    if ((uVar28 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar4 = *(longlong *)(lVar4 + 8);
    if ((*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x48))->ArrayNum == 0
       ) {
LAB_143c4b416:
      uVar9 = *(undefined8 *)pFVar34;
      fVar36 = *(float *)(pFVar34 + 8);
      local_1ac = Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh::
                  GetFullMeshElementIndexFromDynamicElement
                            (*(FTriangleSubMesh **)((longlong)this + 0x10),
                             (int)*(float *)(pFVar34 + -8));
      local_1b6 = 0;
      if ((bVar13) &&
         (piVar24 = TArrayView<int_const_,int>::operator[]
                              ((TArrayView<int_const_,int> *)(*(longlong *)this + 0x1a8),local_1ac),
         *piVar24 != -1)) {
        lVar5 = *(longlong *)this;
        uVar28 = ~local_198;
        uVar16 = 0;
        if ((int)local_198 < *(int *)(lVar5 + 0x1c0)) {
          uVar16 = uVar28 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar6 = *(longlong *)(lVar5 + 0x1b8);
        piVar24 = TArrayView<int_const_,int>::operator[]
                            ((TArrayView<int_const_,int> *)(lVar5 + 0x1a8),local_1ac);
        if (*piVar24 < *(int *)(lVar6 + local_160 * 8)) {
          bVar14 = true;
        }
        else {
          lVar5 = *(longlong *)this;
          uVar16 = 0;
          if ((int)local_198 < *(int *)(lVar5 + 0x1c0)) {
            uVar16 = uVar28 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = *(longlong *)(lVar5 + 0x1b8);
          piVar24 = TArrayView<int_const_,int>::operator[]
                              ((TArrayView<int_const_,int> *)(lVar5 + 0x1a8),local_1ac);
          if (*piVar24 <= *(int *)(lVar6 + 4 + local_160 * 8)) goto LAB_143c4b54f;
          bVar14 = false;
        }
      }
      else {
LAB_143c4b54f:
        lVar5 = *(longlong *)((longlong)this + 0x20);
        iVar17 = *(int *)(lVar4 + 8 + lVar30 * 0xc);
        if ((*(longlong *)(lVar5 + 8) == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x56,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar19 = Chaos::TParticles<float,3>::GetX
                            (*(TParticles<float,3> **)(lVar5 + 8),*(int *)(lVar5 + 0x10) + iVar17);
        lVar5 = *(longlong *)((longlong)this + 0x20);
        iVar17 = *(int *)(lVar4 + 4 + lVar30 * 0xc);
        if ((*(longlong *)(lVar5 + 8) == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x56,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar20 = Chaos::TParticles<float,3>::GetX
                            (*(TParticles<float,3> **)(lVar5 + 8),*(int *)(lVar5 + 0x10) + iVar17);
        lVar5 = *(longlong *)((longlong)this + 0x20);
        local_1ac = *(int *)(lVar4 + lVar30 * 0xc);
        if ((*(longlong *)(lVar5 + 8) == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x56,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar21 = Chaos::TParticles<float,3>::GetX
                            (*(TParticles<float,3> **)(lVar5 + 8),local_1ac + *(int *)(lVar5 + 0x10)
                            );
        lVar5 = *(longlong *)((longlong)this + 0x20);
        local_188 = *(undefined8 *)pTVar21;
        local_180 = *(float *)&pTVar21->field_0x8;
        local_17c = *(undefined8 *)pTVar20;
        local_174 = *(float *)&pTVar20->field_0x8;
        local_170 = *(undefined8 *)pTVar19;
        local_168 = *(float *)&pTVar19->field_0x8;
        if ((*(longlong *)(lVar5 + 8) == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x56,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar19 = Chaos::TParticles<float,3>::GetX
                            (*(TParticles<float,3> **)(lVar5 + 8),*(int *)(lVar5 + 0x10) + iVar33);
        fVar37 = (local_17c._4_4_ - local_188._4_4_) * (local_168 - local_180) -
                 (local_174 - local_180) * (local_170._4_4_ - local_188._4_4_);
        fVar44 = ((float)local_170 - (float)local_188) * (local_174 - local_180) -
                 ((float)local_17c - (float)local_188) * (local_168 - local_180);
        fVar39 = ((float)local_17c - (float)local_188) * (local_170._4_4_ - local_188._4_4_) -
                 ((float)local_170 - (float)local_188) * (local_17c._4_4_ - local_188._4_4_);
        fVar46 = fVar44 * fVar44 + fVar37 * fVar37 + fVar39 * fVar39;
        uVar40 = fVar37;
        uVar42 = fVar39;
        uVar45 = fVar44;
        if ((fVar46 != __real_3f800000) &&
           (uVar40 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
           uVar42 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
           uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
           __real_322bcc77 <= fVar46)) {
          fVar46 = __real_3f800000 / SQRT(fVar46);
          uVar40 = fVar46 * fVar37;
          uVar42 = fVar46 * fVar39;
          uVar45 = fVar46 * fVar44;
        }
        bVar14 = (float)uVar40 * (*(float *)pTVar19 - *(float *)(pFVar34 + 0xc)) +
                 (*(float *)&pTVar19->field_0x4 - *(float *)(pFVar34 + 0x10)) * (float)uVar45 +
                 (float)uVar42 * (*(float *)&pTVar19->field_0x8 - *(float *)(pFVar34 + 0x14)) <
                 __real_00000000;
        if (*(char *)(*(longlong *)this + 0x1e0) != '\0') {
          pFVar25 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                    operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                 **)((longlong)this + 0x38),*(int *)(lVar4 + lVar30 * 0xc));
          pFVar26 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                    operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                 **)((longlong)this + 0x38),iVar33);
          if (((pFVar26->ColorBits ^ pFVar25->ColorBits) & pFVar25->ContourIndexBits &
               pFVar26->ContourIndexBits & 0xfffffffeU) == 0) {
            pFVar25 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                      operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                   **)((longlong)this + 0x38),*(int *)(lVar4 + 4 + lVar30 * 0xc));
            pFVar26 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                      operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                   **)((longlong)this + 0x38),iVar33);
            if (((pFVar26->ColorBits ^ pFVar25->ColorBits) & pFVar25->ContourIndexBits &
                 pFVar26->ContourIndexBits & 0xfffffffeU) == 0) {
              pFVar25 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                        operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                     **)((longlong)this + 0x38),*(int *)(lVar4 + 8 + lVar30 * 0xc));
              pFVar26 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                        operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                     **)((longlong)this + 0x38),iVar33);
              if (((pFVar26->ColorBits ^ pFVar25->ColorBits) & pFVar25->ContourIndexBits &
                   pFVar26->ContourIndexBits & 0xfffffffeU) == 0) {
                fVar46 = *(float *)(pFVar34 + -8);
                plVar7 = *(longlong **)((longlong)this + 0x40);
                uVar16 = 0;
                if ((int)fVar46 < (int)plVar7[1]) {
                  uVar16 = ~(uint)fVar46 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar35)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                lVar5 = *plVar7;
                pFVar25 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                          ::operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                         **)((longlong)this + 0x38),iVar33);
                if (((pFVar25->ColorBits ^ *(uint *)(lVar5 + 4 + (longlong)(int)fVar46 * 8)) &
                     *(uint *)(lVar5 + (longlong)(int)fVar46 * 8) & pFVar25->ContourIndexBits &
                    0xfffffffe) == 0) goto LAB_143c4b90a;
              }
            }
          }
          local_1b6 = 1;
          bVar14 = !bVar14;
        }
      }
LAB_143c4b90a:
      piVar24 = *(int **)((longlong)this + 0x28);
      LOCK();
      iVar17 = *piVar24;
      *piVar24 = *piVar24 + 1;
      UNLOCK();
      uStack_fc = *(undefined4 *)(lVar4 + lVar30 * 0xc);
      uStack_f8 = *(undefined4 *)(lVar4 + 4 + lVar30 * 0xc);
      uStack_f4 = *(undefined4 *)(lVar4 + 8 + lVar30 * 0xc);
      lVar4 = *(longlong *)this;
      bVar35 = iVar17 < 0;
      uVar10 = CONCAT44(uStack_fc,iVar33);
      uVar11 = CONCAT44(uStack_f4,uStack_f8);
      local_100 = iVar33;
      local_f0 = uVar10;
      uStack_e8 = uVar11;
      if ((bVar35 || *(int *)(lVar4 + 0x120) <= iVar17) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar30 = (longlong)iVar17;
      puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 0x118) + lVar30 * 0x10);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      lVar4 = *(longlong *)this;
      if ((bVar35 || *(int *)(lVar4 + 0x130) <= iVar17) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar4 = *(longlong *)(lVar4 + 0x128);
      *(undefined8 *)(lVar4 + lVar30 * 0xc) = uVar9;
      *(float *)(lVar4 + 8 + lVar30 * 0xc) = fVar36;
      lVar4 = *(longlong *)this;
      if ((bVar35 || *(int *)(lVar4 + 0x140) <= iVar17) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar35)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(bool *)(lVar30 + *(longlong *)(lVar4 + 0x138)) = bVar14;
      lVar4 = *(longlong *)this;
      if ((iVar17 < 0 || *(int *)(lVar4 + 0x1d0) <= iVar17) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar16 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar36 = __real_38d1b717;
      *(undefined1 *)((longlong)iVar17 + *(longlong *)(lVar4 + 0x1c8)) = local_1b6;
      fVar37 = local_194;
    }
    else {
      pTVar19 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                          (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)
                            ((longlong)this + 0x48),iVar33);
      pTVar20 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                          (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)
                            ((longlong)this + 0x48),*(int *)(lVar4 + lVar30 * 0xc));
      pTVar21 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                          (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)
                            ((longlong)this + 0x48),*(int *)(lVar4 + 4 + lVar30 * 0xc));
      pTVar22 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                          (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)
                            ((longlong)this + 0x48),*(int *)(lVar4 + 8 + lVar30 * 0xc));
      fVar46 = *(float *)pFVar34;
      fVar39 = *(float *)(pFVar34 + 4);
      fVar44 = *(float *)(pFVar34 + 8);
      fVar43 = ((*(float *)pTVar19 - fVar46 * *(float *)pTVar20) - fVar39 * *(float *)pTVar21) -
               fVar44 * *(float *)pTVar22;
      lVar5 = *(longlong *)this;
      fVar47 = ((*(float *)&pTVar19->field_0x8 - fVar46 * *(float *)&pTVar20->field_0x8) -
               fVar39 * *(float *)&pTVar21->field_0x8) - fVar44 * *(float *)&pTVar22->field_0x8;
      fVar46 = ((*(float *)&pTVar19->field_0x4 - fVar46 * *(float *)&pTVar20->field_0x4) -
               fVar39 * *(float *)&pTVar21->field_0x4) - fVar44 * *(float *)&pTVar22->field_0x4;
      if ((*(int *)(lVar5 + 0x28) < 1) || ((float)(*(uint *)(lVar5 + 0x34) & uVar16) <= fVar36)) {
        fVar39 = *(float *)(lVar5 + 0x30);
      }
      else {
        iVar17 = *(int *)(lVar5 + 0x1d8);
        iVar29 = *(int *)(lVar4 + 4 + lVar30 * 0xc);
        iVar18 = *(int *)(lVar4 + 8 + lVar30 * 0xc);
        fVar39 = *(float *)(lVar5 + 0x34);
        fVar44 = *(float *)(lVar5 + 0x30);
        pfVar23 = TArrayView<float_const_,int>::operator[]
                            ((TArrayView<float_const_,int> *)(lVar5 + 0x20),
                             *(int *)(lVar4 + lVar30 * 0xc) - iVar17);
        fVar2 = *pfVar23;
        if ((*(int *)(lVar5 + 0x28) < 1) ||
           (fVar3 = *(float *)(lVar5 + 0x34), (float)((uint)fVar3 & uVar16) <= fVar36)) {
          fVar38 = *(float *)(lVar5 + 0x30);
        }
        else {
          fVar38 = *(float *)(lVar5 + 0x30);
          pfVar23 = TArrayView<float_const_,int>::operator[]
                              ((TArrayView<float_const_,int> *)(lVar5 + 0x20),iVar29 - iVar17);
          fVar38 = fVar3 * *pfVar23 + fVar38;
        }
        if ((*(int *)(lVar5 + 0x28) < 1) ||
           (fVar3 = *(float *)(lVar5 + 0x34), (float)((uint)fVar3 & uVar16) <= fVar36)) {
          fVar41 = *(float *)(lVar5 + 0x30);
        }
        else {
          fVar41 = *(float *)(lVar5 + 0x30);
          pfVar23 = TArrayView<float_const_,int>::operator[]
                              ((TArrayView<float_const_,int> *)(lVar5 + 0x20),iVar18 - iVar17);
          fVar41 = fVar3 * *pfVar23 + fVar41;
        }
        fVar39 = fVar38 * *(float *)(pFVar34 + 4) + (fVar39 * fVar2 + fVar44) * *(float *)pFVar34 +
                 fVar41 * *(float *)(pFVar34 + 8);
      }
      if ((fVar39 + fVar37) * (fVar39 + fVar37) <=
          fVar43 * fVar43 + fVar46 * fVar46 + fVar47 * fVar47) goto LAB_143c4b416;
    }
    uVar27 = local_1a8._8_8_ & 0xffffffff;
    pFVar34 = pFVar34 + 0x38;
    uVar31 = (ulonglong)local_190;
  }
LAB_143c4bb22:
  if ((TTriangleCollisionPoint<float> *)local_1a8.AllocatorInstance.Data !=
      (TTriangleCollisionPoint<float> *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 143c4bba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::Softs::FPBDCollisionSpringConstraintsBase::
Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles>'::__l7::<lambda_1>::
operator()(void *this,int param_1)

{
  FTriangleMesh *pFVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  code *pcVar12;
  undefined8 uVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  TVector<float,3> *pTVar20;
  TVector<float,3> *pTVar21;
  TVector<float,3> *pTVar22;
  TVector<float,3> *pTVar23;
  float *pfVar24;
  int *piVar25;
  TVector<float,3> *pTVar26;
  FGIAColor *pFVar27;
  FGIAColor *pFVar28;
  ulonglong uVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  int iVar33;
  ulonglong uVar34;
  FScriptContainerElement *pFVar35;
  int iVar36;
  longlong lVar37;
  bool bVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  float fVar50;
  undefined1 auStackY_248 [32];
  char local_1e7;
  undefined1 local_1e6;
  undefined1 local_1e5;
  FIdentityFunctor local_1e4 [4];
  TArray<Chaos::TTriangleCollisionPoint<float>,TSizedDefaultAllocator<32>_> local_1e0;
  int local_1d0;
  uint local_1cc;
  int local_1c8;
  TVector<float,3> *local_1c0;
  float local_1b8;
  uint local_1b4;
  longlong local_1b0;
  FScriptContainerElement *local_1a8;
  undefined8 local_1a0;
  float local_198;
  undefined8 local_194;
  float local_18c;
  undefined8 local_188;
  float local_180;
  code *local_178;
  longlong *local_170;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_168;
  code *local_158;
  longlong *local_150;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_148;
  longlong local_138;
  char local_130;
  FSolverParticles *local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  int local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_248;
  lVar9 = *(longlong *)((longlong)this + 0x10);
  uVar32 = (ulonglong)param_1;
  iVar33 = *(int *)(lVar9 + 0x2d0);
  local_1cc = param_1;
  if (iVar33 != 0) {
    uVar31 = 0;
    if (param_1 < iVar33) {
      uVar31 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_1cc = *(int *)(*(longlong *)(lVar9 + 0x2c8) + uVar32 * 4) -
                *(int *)(*(longlong *)this + 0x1d8);
    uVar32 = (ulonglong)local_1cc;
  }
  uVar31 = (uint)uVar32;
  iVar33 = *(int *)(*(longlong *)this + 0x1d8) + uVar31;
  local_1d0 = iVar33;
  fVar39 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)((longlong)this + 0x20),iVar33);
  if (fVar39 == 0.0) {
    return;
  }
  if (((int)uVar31 < 0) || (lVar9 = *(longlong *)this, *(int *)(lVar9 + 0x1c0) <= (int)uVar31)) {
LAB_143c4bddb:
    local_1e7 = '\0';
  }
  else {
    uVar30 = ~uVar31 >> 0x1f;
    uVar17 = 0;
    if ((int)uVar31 < *(int *)(lVar9 + 0x1c0)) {
      uVar17 = uVar30;
    }
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    lVar37 = (longlong)(int)uVar31;
    if (*(int *)(*(longlong *)(lVar9 + 0x1b8) + lVar37 * 8) == -1) goto LAB_143c4bddb;
    lVar9 = *(longlong *)this;
    local_1e7 = '\x01';
    uVar17 = 0;
    if ((int)uVar31 < *(int *)(lVar9 + 0x1c0)) {
      uVar17 = uVar30;
    }
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    lVar9 = *(longlong *)(lVar9 + 0x1b8);
    lVar10 = *(longlong *)this;
    uVar17 = 0;
    if ((int)uVar31 < *(int *)(lVar10 + 0x1c0)) {
      uVar17 = uVar30;
    }
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if ((*(int *)(*(longlong *)(lVar10 + 0x1b8) + 4 + lVar37 * 8) < *(int *)(lVar9 + lVar37 * 8)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bVertexHasCollisionLayers || VertexCollisionLayers[i][0] <= VertexCollisionLayers[i][1]"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionSpringConstraintsBase.cpp"
                            ,0xb1,L""), bVar15)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  fVar40 = Chaos::Softs::FPBDFlatWeightMap::GetValue
                     ((FPBDFlatWeightMap *)(*(longlong *)this + 8),uVar31);
  fVar8 = __real_3fc00000;
  uVar31 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar39 = __real_38d1b717;
  lVar9 = *(longlong *)this;
  local_128 = *(FSolverParticles **)((longlong)this + 0x20);
  local_120 = *(longlong *)((longlong)this + 0x10);
  local_130 = local_1e7;
  local_118 = *(undefined8 *)((longlong)this + 0x38);
  local_110 = *(undefined8 *)((longlong)this + 0x40);
  local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.ArrayNum = 0;
  local_1e0.ArrayMax = 0;
  local_1b8 = fVar40;
  local_138 = lVar9;
  if ((*(int *)(lVar9 + 0x28) < 1) ||
     ((float)(*(uint *)(lVar9 + 0x34) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717))
  {
    local_150 = &local_138;
    pFVar1 = (FTriangleMesh *)(local_120 + 8);
    local_158 = UE::Core::Private::Function::
                TFunctionRefCaller<``Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles>'::__l7::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int>
                ::Call;
    fVar46 = *(float *)(lVar9 + 0x30) * __real_3fc00000;
    pTVar26 = Chaos::Softs::FSolverParticles::X(local_128,iVar33);
    local_148.DataPtr = *(TVector<float,3> **)(*(longlong *)((longlong)this + 0x20) + 0x28);
    local_148.ArrayNum = *(int *)(*(longlong *)((longlong)this + 0x20) + 0x30);
    if ((local_148.ArrayNum < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    Chaos::FTriangleMesh::PointProximityQuery<float>
              (pFVar1,*(THierarchicalSpatialHash<int,float> **)((longlong)this + 0x18),&local_148,
               iVar33,pTVar26,fVar40 * fVar8,fVar46,
               (TFunctionRef<bool___cdecl(int,int)> *)&local_158,&local_1e0);
  }
  else {
    local_170 = &local_138;
    pFVar1 = (FTriangleMesh *)(local_120 + 8);
    local_178 = UE::Core::Private::Function::
                TFunctionRefCaller<``Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles>'::__l7::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int>
                ::Call;
    iVar18 = *(int *)(lVar9 + 0x1d8);
    local_1c0 = Chaos::Softs::FSolverParticles::X(local_128,iVar33);
    local_168.DataPtr = *(TVector<float,3> **)(*(longlong *)((longlong)this + 0x20) + 0x28);
    local_168.ArrayNum = *(int *)(*(longlong *)((longlong)this + 0x20) + 0x30);
    if ((local_168.ArrayNum < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    Chaos::FTriangleMesh::PointProximityQuery
              (pFVar1,*(THierarchicalSpatialHash<int,float> **)((longlong)this + 0x18),&local_168,
               iVar33,local_1c0,fVar40 * __real_3fc00000,(FPBDFlatWeightMap *)(lVar9 + 8),
               __real_3fc00000,iVar18,(TFunctionRef<bool___cdecl(int,int)> *)&local_178,&local_1e0);
  }
  uVar29 = local_1e0._8_8_ & 0xffffffff;
  if (local_1e0.ArrayNum == 0) goto LAB_143c4c9f9;
  if (3 < local_1e0.ArrayNum) {
    AlgoImpl::
    IntroSortInternal<Chaos::TTriangleCollisionPoint<float>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::TTriangleCollisionPoint<float>,__Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles>_::__l7::<lambda_1>::operator()_::__l24::<lambda_2>_>_>
              ((TTriangleCollisionPoint<float> *)local_1e0.AllocatorInstance.Data,local_1e0.ArrayNum
               ,local_1e4[0],(<lambda_2> *)local_1e4);
    uVar29 = (ulonglong)local_1e0.ArrayNum;
    if (local_1e0.ArrayNum < 3) {
      iVar36 = 3 - local_1e0.ArrayNum;
      iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x38,4,iVar36,&local_1e0.AllocatorInstance,&local_1e0.ArrayNum,
                          &local_1e0.ArrayMax);
      DefaultConstructItems<Chaos::TTriangleCollisionPoint<float>,int>
                (local_1e0.AllocatorInstance.Data + (longlong)iVar18 * 0x38,iVar36);
      uVar29 = local_1e0._8_8_ & 0xffffffff;
    }
    else if (3 < local_1e0.ArrayNum) {
      iVar18 = local_1e0.ArrayNum + -3;
      if (iVar18 < 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar15) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      else if (iVar18 == 0) goto LAB_143c4c0ff;
      iVar19 = (local_1e0.ArrayNum - iVar18) + -3;
      iVar36 = local_1e0.ArrayNum;
      if (iVar19 != 0) {
        memmove((TTriangleCollisionPoint<float> *)(local_1e0.AllocatorInstance.Data + 0xa8),
                (TTriangleCollisionPoint<float> *)(local_1e0.AllocatorInstance.Data + 0xa8) + iVar18
                ,(longlong)iVar19 * 0x38);
        iVar36 = local_1e0.ArrayNum;
      }
      uVar29 = (ulonglong)(uint)(iVar36 - iVar18);
      local_1e0.ArrayNum = iVar36 - iVar18;
    }
  }
LAB_143c4c0ff:
  local_1b4 = (uint)uVar29;
  uVar34 = (ulonglong)(int)local_1b4;
  pFVar35 = local_1e0.AllocatorInstance.Data + 0x10;
  local_1a8 = local_1e0.AllocatorInstance.Data + uVar34 * 0x38;
  while( true ) {
    pFVar14 = local_1a8;
    if ((int)uVar29 != (int)uVar34) {
      local_1e5 = 0;
      `TCheckedPointerIterator<Chaos::TTriangleCollisionPoint<float>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1e5);
    }
    if (pFVar35 + -0x10 == pFVar14) break;
    fVar8 = *(float *)(pFVar35 + -8);
    lVar9 = *(longlong *)((longlong)this + 0x10);
    uVar17 = 0;
    if ((int)fVar8 < *(int *)(lVar9 + 0x10)) {
      uVar17 = ~(uint)fVar8 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pTVar26 = *(TVector<float,3> **)(lVar9 + 8);
    uVar17 = (uint)uVar32;
    local_1c0 = pTVar26;
    if ((*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x48))->ArrayNum == 0
       ) {
LAB_143c4c3b3:
      uVar13 = *(undefined8 *)pFVar35;
      fVar39 = *(float *)(pFVar35 + 8);
      local_1c8 = Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh::
                  GetFullMeshElementIndexFromDynamicElement
                            (*(FTriangleSubMesh **)((longlong)this + 0x10),
                             (int)*(float *)(pFVar35 + -8));
      local_1e6 = 0;
      if ((local_1e7 == '\0') ||
         (piVar25 = TArrayView<int_const_,int>::operator[]
                              ((TArrayView<int_const_,int> *)(*(longlong *)this + 0x1a8),local_1c8),
         *piVar25 == -1)) {
LAB_143c4c4f4:
        pTVar20 = Chaos::TParticles<float,3>::GetX
                            (*(TParticles<float,3> **)((longlong)this + 0x20),
                             *(int *)&pTVar26[(int)fVar8].field_0x8);
        pTVar21 = Chaos::TParticles<float,3>::GetX
                            (*(TParticles<float,3> **)((longlong)this + 0x20),
                             *(int *)&pTVar26[(int)fVar8].field_0x4);
        pTVar26 = Chaos::TParticles<float,3>::GetX
                            (*(TParticles<float,3> **)((longlong)this + 0x20),
                             *(int *)(pTVar26 + (int)fVar8));
        iVar33 = local_1d0;
        fVar40 = *(float *)&pTVar21->field_0x8;
        uVar5 = *(undefined8 *)pTVar21;
        fVar46 = *(float *)&pTVar20->field_0x8;
        uVar6 = *(undefined8 *)pTVar20;
        fVar44 = *(float *)&pTVar26->field_0x8;
        uVar7 = *(undefined8 *)pTVar26;
        local_198 = fVar44;
        local_18c = fVar40;
        local_180 = fVar46;
        pTVar20 = Chaos::TParticles<float,3>::GetX
                            (*(TParticles<float,3> **)((longlong)this + 0x20),local_1d0);
        pTVar26 = local_1c0;
        fVar48 = (float)uVar6 - (float)uVar7;
        fVar40 = fVar40 - fVar44;
        fVar50 = (float)uVar5 - (float)uVar7;
        local_1a0._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
        fVar41 = (float)((ulonglong)uVar5 >> 0x20) - local_1a0._4_4_;
        fVar46 = fVar46 - fVar44;
        local_1a0._4_4_ = (float)((ulonglong)uVar6 >> 0x20) - local_1a0._4_4_;
        fVar44 = fVar41 * fVar46 - fVar40 * local_1a0._4_4_;
        fVar46 = fVar48 * fVar40 - fVar50 * fVar46;
        fVar41 = fVar50 * local_1a0._4_4_ - fVar48 * fVar41;
        fVar40 = fVar46 * fVar46 + fVar44 * fVar44 + fVar41 * fVar41;
        uVar42 = fVar44;
        uVar45 = fVar46;
        uVar49 = fVar41;
        if ((fVar40 != __real_3f800000) &&
           (uVar42 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
           uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
           uVar49 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
           __real_322bcc77 <= fVar40)) {
          fVar40 = __real_3f800000 / SQRT(fVar40);
          uVar42 = fVar40 * fVar44;
          uVar45 = fVar40 * fVar46;
          uVar49 = fVar40 * fVar41;
        }
        bVar15 = (*(float *)&pTVar20->field_0x4 - *(float *)(pFVar35 + 0x10)) * (float)uVar45 +
                 (float)uVar42 * (*(float *)pTVar20 - *(float *)(pFVar35 + 0xc)) +
                 (*(float *)&pTVar20->field_0x8 - *(float *)(pFVar35 + 0x14)) * (float)uVar49 <
                 __real_00000000;
        local_1a0 = uVar7;
        local_194 = uVar5;
        local_188 = uVar6;
        if (*(char *)(*(longlong *)this + 0x1e0) != '\0') {
          pFVar27 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                    operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                 **)((longlong)this + 0x38),*(int *)(local_1c0 + (int)fVar8));
          pFVar28 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                    operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                 **)((longlong)this + 0x38),iVar33);
          if (((pFVar28->ColorBits ^ pFVar27->ColorBits) & pFVar27->ContourIndexBits &
               pFVar28->ContourIndexBits & 0xfffffffeU) == 0) {
            pFVar27 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                      operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                   **)((longlong)this + 0x38),*(int *)&pTVar26[(int)fVar8].field_0x4
                                );
            pFVar28 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                      operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                   **)((longlong)this + 0x38),iVar33);
            if (((pFVar28->ColorBits ^ pFVar27->ColorBits) & pFVar27->ContourIndexBits &
                 pFVar28->ContourIndexBits & 0xfffffffeU) == 0) {
              pFVar27 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                        operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                     **)((longlong)this + 0x38),
                                   *(int *)&pTVar26[(int)fVar8].field_0x8);
              pFVar28 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                        operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                     **)((longlong)this + 0x38),iVar33);
              if (((pFVar28->ColorBits ^ pFVar27->ColorBits) & pFVar27->ContourIndexBits &
                   pFVar28->ContourIndexBits & 0xfffffffeU) == 0) {
                fVar40 = *(float *)(pFVar35 + -8);
                plVar11 = *(longlong **)((longlong)this + 0x40);
                uVar31 = 0;
                if ((int)fVar40 < (int)plVar11[1]) {
                  uVar31 = ~(uint)fVar40 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar38)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                lVar9 = *plVar11;
                pFVar27 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                          ::operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                         **)((longlong)this + 0x38),local_1d0);
                if (((*(uint *)(lVar9 + 4 + (longlong)(int)fVar40 * 8) ^ pFVar27->ColorBits) &
                     pFVar27->ContourIndexBits & *(uint *)(lVar9 + (longlong)(int)fVar40 * 8) &
                    0xfffffffe) == 0) goto LAB_143c4c7da;
              }
            }
          }
          local_1e6 = 1;
          bVar15 = !bVar15;
        }
      }
      else {
        lVar9 = *(longlong *)this;
        uVar31 = 0;
        if ((int)uVar17 < *(int *)(lVar9 + 0x1c0)) {
          uVar31 = ~uVar17 >> 0x1f;
        }
        local_1b0 = lVar9;
        if ((uVar31 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar9 = *(longlong *)(lVar9 + 0x1b8);
        piVar25 = TArrayView<int_const_,int>::operator[]
                            ((TArrayView<int_const_,int> *)(local_1b0 + 0x1a8),local_1c8);
        if (*piVar25 < *(int *)(lVar9 + (longlong)(int)uVar17 * 8)) {
          bVar15 = true;
        }
        else {
          lVar9 = *(longlong *)this;
          uVar31 = 0;
          if ((int)uVar17 < *(int *)(lVar9 + 0x1c0)) {
            uVar31 = ~uVar17 >> 0x1f;
          }
          local_1b0 = lVar9;
          if ((uVar31 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar9 = *(longlong *)(lVar9 + 0x1b8);
          piVar25 = TArrayView<int_const_,int>::operator[]
                              ((TArrayView<int_const_,int> *)(local_1b0 + 0x1a8),local_1c8);
          if (*piVar25 <= *(int *)(lVar9 + 4 + (longlong)(int)uVar17 * 8)) goto LAB_143c4c4f4;
          bVar15 = false;
        }
      }
LAB_143c4c7da:
      piVar25 = *(int **)((longlong)this + 0x28);
      LOCK();
      iVar33 = *piVar25;
      *piVar25 = *piVar25 + 1;
      UNLOCK();
      local_108 = local_1d0;
      uStack_104 = *(undefined4 *)(pTVar26 + (int)fVar8);
      uStack_100 = *(undefined4 *)&pTVar26[(int)fVar8].field_0x4;
      uStack_fc = *(undefined4 *)&pTVar26[(int)fVar8].field_0x8;
      lVar9 = *(longlong *)this;
      bVar38 = iVar33 < 0;
      uVar5 = CONCAT44(uStack_104,local_1d0);
      uVar6 = CONCAT44(uStack_fc,uStack_100);
      local_f8 = uVar5;
      uStack_f0 = uVar6;
      if ((bVar38 || *(int *)(lVar9 + 0x120) <= iVar33) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar37 = (longlong)iVar33;
      puVar2 = (undefined8 *)(*(longlong *)(lVar9 + 0x118) + lVar37 * 0x10);
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      lVar9 = *(longlong *)this;
      if ((bVar38 || *(int *)(lVar9 + 0x130) <= iVar33) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar9 = *(longlong *)(lVar9 + 0x128);
      *(undefined8 *)(lVar9 + lVar37 * 0xc) = uVar13;
      *(float *)(lVar9 + 8 + lVar37 * 0xc) = fVar39;
      lVar9 = *(longlong *)this;
      if ((bVar38 || *(int *)(lVar9 + 0x140) <= iVar33) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar38)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      *(bool *)(lVar37 + *(longlong *)(lVar9 + 0x138)) = bVar15;
      lVar9 = *(longlong *)this;
      if ((iVar33 < 0 || *(int *)(lVar9 + 0x1d0) <= iVar33) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar31 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar39 = __real_38d1b717;
      *(undefined1 *)((longlong)iVar33 + *(longlong *)(lVar9 + 0x1c8)) = local_1e6;
      fVar40 = local_1b8;
    }
    else {
      pTVar20 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                          (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)
                            ((longlong)this + 0x48),iVar33);
      pTVar21 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                          (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)
                            ((longlong)this + 0x48),*(int *)(pTVar26 + (int)fVar8));
      pTVar22 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                          (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)
                            ((longlong)this + 0x48),*(int *)&pTVar26[(int)fVar8].field_0x4);
      pTVar23 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                          (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)
                            ((longlong)this + 0x48),*(int *)&pTVar26[(int)fVar8].field_0x8);
      fVar46 = *(float *)pFVar35;
      fVar44 = *(float *)(pFVar35 + 4);
      fVar41 = *(float *)(pFVar35 + 8);
      fVar48 = ((*(float *)pTVar20 - fVar46 * *(float *)pTVar21) - fVar44 * *(float *)pTVar22) -
               fVar41 * *(float *)pTVar23;
      lVar9 = *(longlong *)this;
      fVar50 = ((*(float *)&pTVar20->field_0x8 - fVar46 * *(float *)&pTVar21->field_0x8) -
               fVar44 * *(float *)&pTVar22->field_0x8) - fVar41 * *(float *)&pTVar23->field_0x8;
      fVar46 = ((*(float *)&pTVar20->field_0x4 - fVar46 * *(float *)&pTVar21->field_0x4) -
               fVar44 * *(float *)&pTVar22->field_0x4) - fVar41 * *(float *)&pTVar23->field_0x4;
      if ((*(int *)(lVar9 + 0x28) < 1) || ((float)(*(uint *)(lVar9 + 0x34) & uVar31) <= fVar39)) {
        fVar44 = *(float *)(lVar9 + 0x30);
      }
      else {
        iVar33 = *(int *)(lVar9 + 0x1d8);
        iVar18 = *(int *)(pTVar26 + (int)fVar8);
        iVar36 = *(int *)&pTVar26[(int)fVar8].field_0x4;
        fVar44 = *(float *)(lVar9 + 0x34);
        fVar41 = *(float *)(lVar9 + 0x30);
        pfVar24 = TArrayView<float_const_,int>::operator[]
                            ((TArrayView<float_const_,int> *)(lVar9 + 0x20),
                             *(int *)&pTVar26[(int)fVar8].field_0x8 - iVar33);
        fVar3 = *pfVar24;
        if ((*(int *)(lVar9 + 0x28) < 1) ||
           (fVar4 = *(float *)(lVar9 + 0x34), (float)((uint)fVar4 & uVar31) <= fVar39)) {
          fVar43 = *(float *)(lVar9 + 0x30);
        }
        else {
          fVar43 = *(float *)(lVar9 + 0x30);
          pfVar24 = TArrayView<float_const_,int>::operator[]
                              ((TArrayView<float_const_,int> *)(lVar9 + 0x20),iVar36 - iVar33);
          fVar43 = fVar4 * *pfVar24 + fVar43;
        }
        if ((*(int *)(lVar9 + 0x28) < 1) ||
           (fVar4 = *(float *)(lVar9 + 0x34), (float)((uint)fVar4 & uVar31) <= fVar39)) {
          fVar47 = *(float *)(lVar9 + 0x30);
        }
        else {
          fVar47 = *(float *)(lVar9 + 0x30);
          pfVar24 = TArrayView<float_const_,int>::operator[]
                              ((TArrayView<float_const_,int> *)(lVar9 + 0x20),iVar18 - iVar33);
          fVar47 = fVar4 * *pfVar24 + fVar47;
        }
        fVar44 = fVar43 * *(float *)(pFVar35 + 4) + fVar47 * *(float *)pFVar35 +
                 (fVar44 * fVar3 + fVar41) * *(float *)(pFVar35 + 8);
      }
      uVar17 = local_1cc;
      if ((fVar44 + fVar40) * (fVar44 + fVar40) <=
          fVar46 * fVar46 + fVar48 * fVar48 + fVar50 * fVar50) goto LAB_143c4c3b3;
    }
    uVar29 = local_1e0._8_8_ & 0xffffffff;
    pFVar35 = pFVar35 + 0x38;
    uVar32 = (ulonglong)local_1cc;
    uVar34 = (ulonglong)local_1b4;
    iVar33 = local_1d0;
  }
LAB_143c4c9f9:
  if ((TTriangleCollisionPoint<float> *)local_1e0.AllocatorInstance.Data !=
      (TTriangleCollisionPoint<float> *)0x0) {
    FMemory::Free(local_1e0.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 143c4ca70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Chaos::Softs::FPBDCollisionSpringConstraintsBase::
Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange>'::__l7::
<lambda_1>::operator()(void *this,int param_1)

{
  FTriangleMesh *pFVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  TParticlesRange<Chaos::Softs::FSolverParticles,void> *pTVar7;
  longlong lVar8;
  longlong *plVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  TVector<float,3> *pTVar19;
  TVector<float,3> *pTVar20;
  TVector<float,3> *pTVar21;
  TVector<float,3> *pTVar22;
  float *pfVar23;
  int *piVar24;
  FGIAColor *pFVar25;
  FGIAColor *pFVar26;
  ulonglong uVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  longlong lVar31;
  ulonglong uVar32;
  int iVar33;
  FScriptContainerElement *pFVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  undefined1 auStackY_238 [32];
  char local_1d7;
  undefined1 local_1d6;
  undefined1 local_1d5;
  FIdentityFunctor local_1d4 [4];
  int local_1d0;
  TArray<Chaos::TTriangleCollisionPoint<float>,TSizedDefaultAllocator<32>_> local_1c8;
  int local_1b8;
  uint local_1b4;
  float local_1b0;
  uint local_1ac;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_19c;
  float local_194;
  undefined8 local_190;
  float local_188;
  longlong local_180;
  FScriptContainerElement *local_178;
  code *local_170;
  longlong *local_168;
  code *local_160;
  longlong *local_158;
  longlong local_150;
  char local_148;
  FSolverParticlesRange *local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_120;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_110;
  int local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_238;
  lVar5 = *(longlong *)((longlong)this + 0x10);
  iVar33 = *(int *)(lVar5 + 0x2d0);
  if (iVar33 != 0) {
    uVar17 = 0;
    if (param_1 < iVar33) {
      uVar17 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (local_1b4 = param_1,
       bVar15 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    param_1 = *(int *)(*(longlong *)(lVar5 + 0x2c8) + (longlong)param_1 * 4) -
              *(int *)(*(longlong *)this + 0x1d8);
  }
  lVar5 = *(longlong *)((longlong)this + 0x20);
  iVar33 = *(int *)(*(longlong *)this + 0x1d8) + param_1;
  local_1d0 = iVar33;
  local_1b4 = param_1;
  if ((*(longlong *)(lVar5 + 8) == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  fVar36 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)(lVar5 + 8),*(int *)(lVar5 + 0x10) + iVar33);
  if (fVar36 == 0.0) {
    return;
  }
  if ((param_1 < 0) || (lVar5 = *(longlong *)this, *(int *)(lVar5 + 0x1c0) <= param_1)) {
LAB_143c4ccec:
    local_1d7 = '\0';
  }
  else {
    uVar28 = (uint)~param_1 >> 0x1f;
    uVar17 = 0;
    if (param_1 < *(int *)(lVar5 + 0x1c0)) {
      uVar17 = uVar28;
    }
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar31 = (longlong)param_1;
    if (*(int *)(*(longlong *)(lVar5 + 0x1b8) + lVar31 * 8) == -1) goto LAB_143c4ccec;
    lVar5 = *(longlong *)this;
    local_1d7 = '\x01';
    uVar17 = 0;
    if (param_1 < *(int *)(lVar5 + 0x1c0)) {
      uVar17 = uVar28;
    }
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar5 = *(longlong *)(lVar5 + 0x1b8);
    lVar6 = *(longlong *)this;
    uVar17 = 0;
    if (param_1 < *(int *)(lVar6 + 0x1c0)) {
      uVar17 = uVar28;
    }
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if ((*(int *)(*(longlong *)(lVar6 + 0x1b8) + 4 + lVar31 * 8) < *(int *)(lVar5 + lVar31 * 8)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bVertexHasCollisionLayers || VertexCollisionLayers[i][0] <= VertexCollisionLayers[i][1]"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionSpringConstraintsBase.cpp"
                            ,0xb1,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  fVar37 = Chaos::Softs::FPBDFlatWeightMap::GetValue
                     ((FPBDFlatWeightMap *)(*(longlong *)this + 8),param_1);
  fVar46 = __real_3fc00000;
  uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar36 = __real_38d1b717;
  lVar5 = *(longlong *)this;
  local_140 = *(FSolverParticlesRange **)((longlong)this + 0x20);
  local_138 = *(longlong *)((longlong)this + 0x10);
  local_148 = local_1d7;
  local_130 = *(undefined8 *)((longlong)this + 0x38);
  local_128 = *(undefined8 *)((longlong)this + 0x40);
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0;
  local_1c8.ArrayMax = 0;
  local_1b0 = fVar37;
  local_150 = lVar5;
  if ((*(int *)(lVar5 + 0x28) < 1) ||
     ((float)(*(uint *)(lVar5 + 0x34) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717))
  {
    local_158 = &local_150;
    pFVar1 = (FTriangleMesh *)(local_138 + 8);
    local_160 = UE::Core::Private::Function::
                TFunctionRefCaller<``Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange>'::__l7::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int>
                ::Call;
    fVar40 = *(float *)(lVar5 + 0x30) * __real_3fc00000;
    pTVar19 = Chaos::Softs::FSolverParticlesRange::X(local_140,iVar33);
    pTVar7 = *(TParticlesRange<Chaos::Softs::FSolverParticles,void> **)((longlong)this + 0x20);
    if ((pTVar7->Particles == (FSolverParticles *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
    GetConstArrayView<Chaos::TVector<float,3>_>
              (pTVar7,&local_110,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
               &pTVar7->Particles->_padding_);
    Chaos::FTriangleMesh::PointProximityQuery<float>
              (pFVar1,*(THierarchicalSpatialHash<int,float> **)((longlong)this + 0x18),&local_110,
               iVar33,pTVar19,fVar37 * fVar46,fVar40,
               (TFunctionRef<bool___cdecl(int,int)> *)&local_160,&local_1c8);
  }
  else {
    local_168 = &local_150;
    pFVar1 = (FTriangleMesh *)(local_138 + 8);
    local_170 = UE::Core::Private::Function::
                TFunctionRefCaller<``Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange>'::__l7::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int>
                ::Call;
    iVar29 = *(int *)(lVar5 + 0x1d8);
    pTVar19 = Chaos::Softs::FSolverParticlesRange::X(local_140,iVar33);
    pTVar7 = *(TParticlesRange<Chaos::Softs::FSolverParticles,void> **)((longlong)this + 0x20);
    if ((pTVar7->Particles == (FSolverParticles *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
    GetConstArrayView<Chaos::TVector<float,3>_>
              (pTVar7,&local_120,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
               &pTVar7->Particles->_padding_);
    Chaos::FTriangleMesh::PointProximityQuery
              (pFVar1,*(THierarchicalSpatialHash<int,float> **)((longlong)this + 0x18),&local_120,
               local_1d0,pTVar19,fVar37 * __real_3fc00000,(FPBDFlatWeightMap *)(lVar5 + 8),
               __real_3fc00000,iVar29,(TFunctionRef<bool___cdecl(int,int)> *)&local_170,&local_1c8);
  }
  uVar27 = local_1c8._8_8_ & 0xffffffff;
  if (local_1c8.ArrayNum == 0) goto LAB_143c4d9ad;
  if (3 < local_1c8.ArrayNum) {
    AlgoImpl::
    IntroSortInternal<Chaos::TTriangleCollisionPoint<float>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::TTriangleCollisionPoint<float>,__Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange>_::__l7::<lambda_1>::operator()_::__l24::<lambda_2>_>_>
              ((TTriangleCollisionPoint<float> *)local_1c8.AllocatorInstance.Data,local_1c8.ArrayNum
               ,local_1d4[0],(<lambda_2> *)local_1d4);
    uVar27 = (ulonglong)local_1c8.ArrayNum;
    if (local_1c8.ArrayNum < 3) {
      iVar29 = 3 - local_1c8.ArrayNum;
      iVar33 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x38,4,iVar29,&local_1c8.AllocatorInstance,&local_1c8.ArrayNum,
                          &local_1c8.ArrayMax);
      DefaultConstructItems<Chaos::TTriangleCollisionPoint<float>,int>
                (local_1c8.AllocatorInstance.Data + (longlong)iVar33 * 0x38,iVar29);
      uVar27 = local_1c8._8_8_ & 0xffffffff;
    }
    else if (3 < local_1c8.ArrayNum) {
      iVar33 = local_1c8.ArrayNum + -3;
      if (iVar33 < 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar15) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      else if (iVar33 == 0) goto LAB_143c4d01b;
      iVar18 = (local_1c8.ArrayNum - iVar33) + -3;
      iVar29 = local_1c8.ArrayNum;
      if (iVar18 != 0) {
        memmove((TTriangleCollisionPoint<float> *)(local_1c8.AllocatorInstance.Data + 0xa8),
                (TTriangleCollisionPoint<float> *)(local_1c8.AllocatorInstance.Data + 0xa8) + iVar33
                ,(longlong)iVar18 * 0x38);
        iVar29 = local_1c8.ArrayNum;
      }
      uVar27 = (ulonglong)(uint)(iVar29 - iVar33);
      local_1c8.ArrayNum = iVar29 - iVar33;
    }
  }
LAB_143c4d01b:
  local_1ac = (uint)uVar27;
  uVar32 = (ulonglong)(int)local_1ac;
  pFVar34 = local_1c8.AllocatorInstance.Data + 0x10;
  local_180 = (longlong)param_1;
  local_178 = local_1c8.AllocatorInstance.Data + uVar32 * 0x38;
  while( true ) {
    pFVar14 = local_178;
    if ((int)uVar27 != (int)uVar32) {
      local_1d5 = 0;
      `TCheckedPointerIterator<Chaos::TTriangleCollisionPoint<float>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1d5);
    }
    if (pFVar34 + -0x10 == pFVar14) break;
    fVar46 = *(float *)(pFVar34 + -8);
    lVar31 = (longlong)(int)fVar46;
    lVar5 = *(longlong *)((longlong)this + 0x10);
    uVar28 = 0;
    if ((int)fVar46 < *(int *)(lVar5 + 0x10)) {
      uVar28 = ~(uint)fVar46 >> 0x1f;
    }
    if ((uVar28 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar5 = *(longlong *)(lVar5 + 8);
    if ((*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x48))->ArrayNum == 0
       ) {
LAB_143c4d2d6:
      uVar11 = *(undefined8 *)pFVar34;
      fVar36 = *(float *)(pFVar34 + 8);
      local_1b8 = Chaos::Softs::FPBDTriangleMeshCollisions::FTriangleSubMesh::
                  GetFullMeshElementIndexFromDynamicElement
                            (*(FTriangleSubMesh **)((longlong)this + 0x10),
                             (int)*(float *)(pFVar34 + -8));
      local_1d6 = 0;
      if ((local_1d7 == '\0') ||
         (piVar24 = TArrayView<int_const_,int>::operator[]
                              ((TArrayView<int_const_,int> *)(*(longlong *)this + 0x1a8),local_1b8),
         *piVar24 == -1)) {
LAB_143c4d40a:
        lVar6 = *(longlong *)((longlong)this + 0x20);
        iVar33 = *(int *)(lVar5 + 8 + lVar31 * 0xc);
        if ((*(longlong *)(lVar6 + 8) == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x56,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar19 = Chaos::TParticles<float,3>::GetX
                            (*(TParticles<float,3> **)(lVar6 + 8),*(int *)(lVar6 + 0x10) + iVar33);
        lVar6 = *(longlong *)((longlong)this + 0x20);
        iVar33 = *(int *)(lVar5 + 4 + lVar31 * 0xc);
        if ((*(longlong *)(lVar6 + 8) == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x56,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar20 = Chaos::TParticles<float,3>::GetX
                            (*(TParticles<float,3> **)(lVar6 + 8),*(int *)(lVar6 + 0x10) + iVar33);
        lVar6 = *(longlong *)((longlong)this + 0x20);
        local_1b8 = *(int *)(lVar5 + lVar31 * 0xc);
        if ((*(longlong *)(lVar6 + 8) == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x56,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar21 = Chaos::TParticles<float,3>::GetX
                            (*(TParticles<float,3> **)(lVar6 + 8),local_1b8 + *(int *)(lVar6 + 0x10)
                            );
        lVar6 = *(longlong *)((longlong)this + 0x20);
        local_1a8 = *(undefined8 *)pTVar21;
        local_1a0 = *(float *)&pTVar21->field_0x8;
        local_19c = *(undefined8 *)pTVar20;
        local_194 = *(float *)&pTVar20->field_0x8;
        local_190 = *(undefined8 *)pTVar19;
        local_188 = *(float *)&pTVar19->field_0x8;
        if ((*(longlong *)(lVar6 + 8) == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x56,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar33 = local_1d0;
        pTVar19 = Chaos::TParticles<float,3>::GetX
                            (*(TParticles<float,3> **)(lVar6 + 8),*(int *)(lVar6 + 0x10) + local_1d0
                            );
        fVar44 = (local_19c._4_4_ - local_1a8._4_4_) * (local_188 - local_1a0) -
                 (local_194 - local_1a0) * (local_190._4_4_ - local_1a8._4_4_);
        fVar46 = (local_194 - local_1a0) * ((float)local_190 - (float)local_1a8) -
                 (local_188 - local_1a0) * ((float)local_19c - (float)local_1a8);
        fVar40 = (local_190._4_4_ - local_1a8._4_4_) * ((float)local_19c - (float)local_1a8) -
                 (local_19c._4_4_ - local_1a8._4_4_) * ((float)local_190 - (float)local_1a8);
        fVar37 = fVar46 * fVar46 + fVar44 * fVar44 + fVar40 * fVar40;
        uVar38 = fVar46;
        uVar41 = fVar40;
        uVar45 = fVar44;
        if ((fVar37 != __real_3f800000) &&
           (uVar38 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
           uVar41 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
           uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
           __real_322bcc77 <= fVar37)) {
          fVar37 = __real_3f800000 / SQRT(fVar37);
          uVar38 = fVar46 * fVar37;
          uVar41 = fVar40 * fVar37;
          uVar45 = fVar44 * fVar37;
        }
        bVar15 = (*(float *)pTVar19 - *(float *)(pFVar34 + 0xc)) * (float)uVar45 +
                 (*(float *)&pTVar19->field_0x4 - *(float *)(pFVar34 + 0x10)) * (float)uVar38 +
                 (float)uVar41 * (*(float *)&pTVar19->field_0x8 - *(float *)(pFVar34 + 0x14)) <
                 __real_00000000;
        if (*(char *)(*(longlong *)this + 0x1e0) != '\0') {
          pFVar25 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                    operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                 **)((longlong)this + 0x38),*(int *)(lVar5 + lVar31 * 0xc));
          pFVar26 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                    operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                 **)((longlong)this + 0x38),iVar33);
          if (((pFVar26->ColorBits ^ pFVar25->ColorBits) & pFVar25->ContourIndexBits &
               pFVar26->ContourIndexBits & 0xfffffffeU) == 0) {
            pFVar25 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                      operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                   **)((longlong)this + 0x38),*(int *)(lVar5 + 4 + lVar31 * 0xc));
            pFVar26 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                      operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                   **)((longlong)this + 0x38),iVar33);
            if (((pFVar26->ColorBits ^ pFVar25->ColorBits) & pFVar25->ContourIndexBits &
                 pFVar26->ContourIndexBits & 0xfffffffeU) == 0) {
              pFVar25 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                        operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                     **)((longlong)this + 0x38),*(int *)(lVar5 + 8 + lVar31 * 0xc));
              pFVar26 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>::
                        operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                     **)((longlong)this + 0x38),iVar33);
              if (((pFVar26->ColorBits ^ pFVar25->ColorBits) & pFVar25->ContourIndexBits &
                   pFVar26->ContourIndexBits & 0xfffffffeU) == 0) {
                fVar46 = *(float *)(pFVar34 + -8);
                plVar9 = *(longlong **)((longlong)this + 0x40);
                uVar28 = 0;
                if ((int)fVar46 < (int)plVar9[1]) {
                  uVar28 = ~(uint)fVar46 >> 0x1f;
                }
                if ((uVar28 == 0) &&
                   (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar35)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                lVar6 = *plVar9;
                pFVar25 = TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                          ::operator[](*(TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int>
                                         **)((longlong)this + 0x38),local_1d0);
                if (((pFVar25->ColorBits ^ *(uint *)(lVar6 + 4 + (longlong)(int)fVar46 * 8)) &
                     pFVar25->ContourIndexBits & *(uint *)(lVar6 + (longlong)(int)fVar46 * 8) &
                    0xfffffffe) == 0) goto LAB_143c4d7a4;
              }
            }
          }
          local_1d6 = 1;
          bVar15 = !bVar15;
        }
      }
      else {
        lVar6 = *(longlong *)this;
        uVar30 = ~local_1b4;
        uVar28 = 0;
        if ((int)local_1b4 < *(int *)(lVar6 + 0x1c0)) {
          uVar28 = uVar30 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar8 = *(longlong *)(lVar6 + 0x1b8);
        piVar24 = TArrayView<int_const_,int>::operator[]
                            ((TArrayView<int_const_,int> *)(lVar6 + 0x1a8),local_1b8);
        if (*piVar24 < *(int *)(lVar8 + local_180 * 8)) {
          bVar15 = true;
        }
        else {
          lVar6 = *(longlong *)this;
          uVar28 = 0;
          if ((int)local_1b4 < *(int *)(lVar6 + 0x1c0)) {
            uVar28 = uVar30 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar8 = *(longlong *)(lVar6 + 0x1b8);
          piVar24 = TArrayView<int_const_,int>::operator[]
                              ((TArrayView<int_const_,int> *)(lVar6 + 0x1a8),local_1b8);
          if (*piVar24 <= *(int *)(lVar8 + 4 + local_180 * 8)) goto LAB_143c4d40a;
          bVar15 = false;
        }
      }
LAB_143c4d7a4:
      piVar24 = *(int **)((longlong)this + 0x28);
      LOCK();
      iVar33 = *piVar24;
      *piVar24 = *piVar24 + 1;
      UNLOCK();
      local_100 = local_1d0;
      uStack_fc = *(undefined4 *)(lVar5 + lVar31 * 0xc);
      uStack_f8 = *(undefined4 *)(lVar5 + 4 + lVar31 * 0xc);
      uStack_f4 = *(undefined4 *)(lVar5 + 8 + lVar31 * 0xc);
      lVar5 = *(longlong *)this;
      bVar35 = iVar33 < 0;
      uVar12 = CONCAT44(uStack_fc,local_1d0);
      uVar13 = CONCAT44(uStack_f4,uStack_f8);
      local_f0 = uVar12;
      uStack_e8 = uVar13;
      if ((bVar35 || *(int *)(lVar5 + 0x120) <= iVar33) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar31 = (longlong)iVar33;
      puVar2 = (undefined8 *)(*(longlong *)(lVar5 + 0x118) + lVar31 * 0x10);
      *puVar2 = uVar12;
      puVar2[1] = uVar13;
      lVar5 = *(longlong *)this;
      if ((bVar35 || *(int *)(lVar5 + 0x130) <= iVar33) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar5 = *(longlong *)(lVar5 + 0x128);
      *(undefined8 *)(lVar5 + lVar31 * 0xc) = uVar11;
      *(float *)(lVar5 + 8 + lVar31 * 0xc) = fVar36;
      lVar5 = *(longlong *)this;
      if ((bVar35 || *(int *)(lVar5 + 0x140) <= iVar33) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar35)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(bool *)(lVar31 + *(longlong *)(lVar5 + 0x138)) = bVar15;
      lVar5 = *(longlong *)this;
      if ((iVar33 < 0 || *(int *)(lVar5 + 0x1d0) <= iVar33) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      fVar36 = __real_38d1b717;
      *(undefined1 *)((longlong)iVar33 + *(longlong *)(lVar5 + 0x1c8)) = local_1d6;
      fVar37 = local_1b0;
    }
    else {
      pTVar19 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                          (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)
                            ((longlong)this + 0x48),local_1d0);
      pTVar20 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                          (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)
                            ((longlong)this + 0x48),*(int *)(lVar5 + lVar31 * 0xc));
      pTVar21 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                          (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)
                            ((longlong)this + 0x48),*(int *)(lVar5 + 4 + lVar31 * 0xc));
      pTVar22 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                          (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)
                            ((longlong)this + 0x48),*(int *)(lVar5 + 8 + lVar31 * 0xc));
      fVar46 = *(float *)pFVar34;
      fVar40 = *(float *)(pFVar34 + 4);
      fVar44 = *(float *)(pFVar34 + 8);
      fVar43 = ((*(float *)pTVar19 - fVar46 * *(float *)pTVar20) - fVar40 * *(float *)pTVar21) -
               fVar44 * *(float *)pTVar22;
      lVar6 = *(longlong *)this;
      fVar47 = ((*(float *)&pTVar19->field_0x8 - fVar46 * *(float *)&pTVar20->field_0x8) -
               fVar40 * *(float *)&pTVar21->field_0x8) - fVar44 * *(float *)&pTVar22->field_0x8;
      fVar46 = ((*(float *)&pTVar19->field_0x4 - fVar46 * *(float *)&pTVar20->field_0x4) -
               fVar40 * *(float *)&pTVar21->field_0x4) - fVar44 * *(float *)&pTVar22->field_0x4;
      if ((*(int *)(lVar6 + 0x28) < 1) || ((float)(*(uint *)(lVar6 + 0x34) & uVar17) <= fVar36)) {
        fVar40 = *(float *)(lVar6 + 0x30);
      }
      else {
        iVar33 = *(int *)(lVar6 + 0x1d8);
        iVar29 = *(int *)(lVar5 + 4 + lVar31 * 0xc);
        iVar18 = *(int *)(lVar5 + 8 + lVar31 * 0xc);
        fVar40 = *(float *)(lVar6 + 0x34);
        fVar44 = *(float *)(lVar6 + 0x30);
        pfVar23 = TArrayView<float_const_,int>::operator[]
                            ((TArrayView<float_const_,int> *)(lVar6 + 0x20),
                             *(int *)(lVar5 + lVar31 * 0xc) - iVar33);
        fVar3 = *pfVar23;
        if ((*(int *)(lVar6 + 0x28) < 1) ||
           (fVar4 = *(float *)(lVar6 + 0x34), (float)((uint)fVar4 & uVar17) <= fVar36)) {
          fVar39 = *(float *)(lVar6 + 0x30);
        }
        else {
          fVar39 = *(float *)(lVar6 + 0x30);
          pfVar23 = TArrayView<float_const_,int>::operator[]
                              ((TArrayView<float_const_,int> *)(lVar6 + 0x20),iVar29 - iVar33);
          fVar39 = fVar4 * *pfVar23 + fVar39;
        }
        if ((*(int *)(lVar6 + 0x28) < 1) ||
           (fVar4 = *(float *)(lVar6 + 0x34), (float)((uint)fVar4 & uVar17) <= fVar36)) {
          fVar42 = *(float *)(lVar6 + 0x30);
        }
        else {
          fVar42 = *(float *)(lVar6 + 0x30);
          pfVar23 = TArrayView<float_const_,int>::operator[]
                              ((TArrayView<float_const_,int> *)(lVar6 + 0x20),iVar18 - iVar33);
          fVar42 = fVar4 * *pfVar23 + fVar42;
        }
        fVar40 = fVar39 * *(float *)(pFVar34 + 4) + (fVar40 * fVar3 + fVar44) * *(float *)pFVar34 +
                 fVar42 * *(float *)(pFVar34 + 8);
      }
      if ((fVar40 + fVar37) * (fVar40 + fVar37) <=
          fVar43 * fVar43 + fVar46 * fVar46 + fVar47 * fVar47) goto LAB_143c4d2d6;
    }
    uVar27 = local_1c8._8_8_ & 0xffffffff;
    pFVar34 = pFVar34 + 0x38;
    uVar32 = (ulonglong)local_1ac;
  }
LAB_143c4d9ad:
  if ((TTriangleCollisionPoint<float> *)local_1c8.AllocatorInstance.Data !=
      (TTriangleCollisionPoint<float> *)0x0) {
    FMemory::Free(local_1c8.AllocatorInstance.Data);
  }
  return;
}

// GetConstraintFrictionCoefficient @ 143c68080

float __thiscall
Chaos::Softs::FPBDCollisionSpringConstraintsBase::GetConstraintFrictionCoefficient
          (FPBDCollisionSpringConstraintsBase *this,int param_1)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  
  uVar4 = 0;
  if (param_1 < (this->ConstraintTypes).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  FVar1 = (this->ConstraintTypes).AllocatorInstance.Data[param_1];
  if ((FVar1 != (FScriptContainerElement)0x0) && (FVar1 == (FScriptContainerElement)0x1)) {
    return 0.0;
  }
  return this->FrictionCoefficient;
}

// GetConstraintThickness @ 143c686f0

float __thiscall
Chaos::Softs::FPBDCollisionSpringConstraintsBase::GetConstraintThickness
          (FPBDCollisionSpringConstraintsBase *this,int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  FPBDFlatWeightMap *this_00;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar11 = (longlong)param_1;
  if ((0 < (this->ThicknessWeighted).MapView.MapValues.ArrayNum) &&
     (__real_38d1b717 <
      (float)(*(uint *)&(this->ThicknessWeighted).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    uVar10 = 0;
    if (param_1 < (this->Constraints).ArrayNum) {
      uVar10 = (uint)~param_1 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        fVar13 = (float)(*pcVar8)();
        return fVar13;
      }
    }
    pFVar12 = (this->Constraints).AllocatorInstance.Data + lVar11 * 0x10;
    uVar10 = 0;
    if (param_1 < (this->Barys).ArrayNum) {
      uVar10 = (uint)~param_1 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        fVar13 = (float)(*pcVar8)();
        return fVar13;
      }
    }
    iVar3 = this->Offset;
    pFVar7 = (this->Barys).AllocatorInstance.Data;
    this_00 = &this->ThicknessWeighted;
    iVar4 = *(int *)(pFVar12 + 8);
    iVar5 = *(int *)pFVar12;
    iVar6 = *(int *)(pFVar12 + 0xc);
    fVar13 = *(float *)(pFVar7 + lVar11 * 0xc + 8);
    fVar1 = *(float *)(pFVar7 + lVar11 * 0xc + 4);
    fVar2 = *(float *)(pFVar7 + lVar11 * 0xc);
    fVar14 = FPBDFlatWeightMap::GetValue(this_00,*(int *)(pFVar12 + 4) - iVar3);
    fVar15 = FPBDFlatWeightMap::GetValue(this_00,iVar5 - iVar3);
    fVar16 = FPBDFlatWeightMap::GetValue(this_00,iVar4 - iVar3);
    fVar17 = FPBDFlatWeightMap::GetValue(this_00,iVar6 - iVar3);
    return fVar17 * fVar13 + fVar16 * fVar1 + fVar15 + fVar14 * fVar2;
  }
  fVar13 = *(float *)&(this->ThicknessWeighted).MapView.OffsetRange;
  return fVar13 + fVar13;
}

// UpdateCollisionLayers @ 143c799a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDCollisionSpringConstraintsBase::UpdateCollisionLayers
          (FPBDCollisionSpringConstraintsBase *this,TArrayView<int_const_,int> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  uint local_res10;
  uint local_res18;
  undefined8 local_res20;
  longlong local_88;
  uint uStack_64;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_60 [2];
  
  if (param_1->ArrayNum == (this->TriangleMesh->MElements).ArrayNum) {
    iVar2 = param_1->ArrayNum;
    uVar5 = *(undefined4 *)&param_1->field_0xc;
    iVar12 = this->NumParticles;
    (this->FaceCollisionLayers).DataPtr = param_1->DataPtr;
    (this->FaceCollisionLayers).ArrayNum = iVar2;
    *(undefined4 *)&(this->FaceCollisionLayers).field_0xc = uVar5;
    TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->VertexCollisionLayers,iVar12,Default);
    FTriangleMesh::GetPointToTriangleMap(this->TriangleMesh,local_60);
    local_res10 = 0;
    if (0 < this->NumParticles) {
      local_88 = 0;
      do {
        uVar11 = this->Offset + local_res10;
        uVar7 = 0;
        if ((int)local_res10 < (this->VertexCollisionLayers).ArrayNum) {
          uVar7 = ~local_res10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar14 = (this->VertexCollisionLayers).AllocatorInstance.Data + local_88;
        local_res20 = 0xffffffffffffffff;
        *(undefined8 *)pFVar14 = 0xffffffffffffffff;
        uVar7 = 0;
        if ((int)uVar11 < local_60[0].ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar9 = local_60[0].DataPtr + (int)uVar11;
        local_res18 = pTVar9->ArrayNum;
        uVar10 = (ulonglong)(int)local_res18;
        pFVar15 = (pTVar9->AllocatorInstance).Data;
        pFVar1 = pFVar15 + uVar10 * 4;
        while( true ) {
          if (pTVar9->ArrayNum != (int)uVar10) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (pFVar15 == pFVar1) break;
          uVar7 = *(uint *)pFVar15;
          uVar13 = ~uVar7 >> 0x1f;
          uVar8 = 0;
          uVar11 = uVar8;
          if ((int)uVar7 < (this->FaceCollisionLayers).ArrayNum) {
            uVar11 = uVar13;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((this->FaceCollisionLayers).DataPtr[(int)uVar7] != -1) {
            iVar12 = *(int *)pFVar14;
            iVar2 = (this->FaceCollisionLayers).ArrayNum;
            if (iVar12 == -1) {
              uVar11 = uVar8;
              if ((int)uVar7 < iVar2) {
                uVar11 = uVar13;
              }
              if ((uVar11 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar12 = (this->FaceCollisionLayers).DataPtr[(int)uVar7];
            }
            else {
              uVar11 = uVar8;
              if ((int)uVar7 < iVar2) {
                uVar11 = uVar13;
              }
              if ((uVar11 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              piVar3 = (this->FaceCollisionLayers).DataPtr;
              if (piVar3[(int)uVar7] < iVar12) {
                iVar12 = piVar3[(int)uVar7];
              }
            }
            *(int *)pFVar14 = iVar12;
            iVar12 = *(int *)(pFVar14 + 4);
            iVar2 = (this->FaceCollisionLayers).ArrayNum;
            if (iVar12 == -1) {
              if ((int)uVar7 < iVar2) {
                uVar8 = uVar13;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar12 = (this->FaceCollisionLayers).DataPtr[(int)uVar7];
            }
            else {
              if ((int)uVar7 < iVar2) {
                uVar8 = uVar13;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              piVar3 = (this->FaceCollisionLayers).DataPtr;
              if (iVar12 < piVar3[(int)uVar7]) {
                iVar12 = piVar3[(int)uVar7];
              }
            }
            *(int *)(pFVar14 + 4) = iVar12;
          }
          pFVar15 = pFVar15 + 4;
          uVar10 = (ulonglong)local_res18;
        }
        local_res10 = local_res10 + 1;
        local_88 = local_88 + 8;
      } while ((int)local_res10 < this->NumParticles);
    }
  }
  else {
    (this->FaceCollisionLayers).DataPtr = (int *)0x0;
    *(ulonglong *)&(this->FaceCollisionLayers).ArrayNum = (ulonglong)uStack_64 << 0x20;
    (this->VertexCollisionLayers).ArrayNum = 0;
    if ((this->VertexCollisionLayers).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->VertexCollisionLayers).AllocatorInstance,0,
                 &(this->VertexCollisionLayers).ArrayMax);
      return;
    }
  }
  return;
}

// UpdateLinearSystem @ 143c7ce50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FPBDCollisionSpringConstraintsBase::UpdateLinearSystem
          (FPBDCollisionSpringConstraintsBase *this,FSolverParticlesRange *param_1,float param_2,
          FEvolutionLinearSystem *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  FScriptContainerElement FVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  code *pcVar22;
  uint uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  FEvolutionLinearSystem *this_00;
  bool bVar26;
  uint uVar27;
  TVector<float,3> *pTVar28;
  FSolverParticles *this_01;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  longlong lVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  undefined1 auStackY_3f8 [32];
  float local_3a8;
  float local_3a4;
  float local_3a0;
  uint local_398;
  undefined8 local_390;
  float local_388;
  undefined8 local_384;
  float local_37c;
  undefined8 local_378;
  float local_370;
  uint local_368;
  longlong local_360;
  TVector<float,3> *local_358;
  FEvolutionLinearSystem *local_350;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  FScriptContainerElement *local_318;
  TVector<float,3> *local_310;
  TVector<float,3> *local_308;
  TVector<float,3> *local_300;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  undefined4 local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  undefined4 local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  undefined4 local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  undefined4 local_29c;
  float local_298;
  float local_294;
  float local_290;
  undefined4 local_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  float local_278;
  undefined8 local_274;
  undefined8 local_26c;
  float local_264;
  undefined8 local_260;
  undefined8 local_258;
  float local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  float local_238;
  float local_234;
  float local_230;
  undefined4 local_22c;
  float local_228;
  float local_224;
  float local_220;
  undefined4 local_21c;
  float local_218;
  float local_214;
  float local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  undefined4 local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  undefined4 local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  undefined4 local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined4 local_19c;
  float local_198;
  float local_194;
  float local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  float local_178;
  float local_174;
  float local_170;
  undefined4 local_16c;
  float local_168;
  float local_164;
  float local_160;
  undefined4 local_15c;
  float local_158;
  float local_154;
  float local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  float local_138;
  float local_134;
  float local_130;
  undefined4 local_12c;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_11c;
  float local_118;
  float local_114;
  float local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  iVar12 = (this->Constraints).ArrayNum;
  local_350 = param_3;
  TBlockSparseSymmetricLinearSystem<float,3>::ReserveForParallelAdd
            (&param_3->Matrix,iVar12 * 4,iVar12 * 3);
  uVar23 = __xmm_80000000800000008000000080000000;
  local_398 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    lVar32 = 0;
    local_360 = 0;
    do {
      uVar30 = local_398;
      uVar29 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar45 = __real_38d1b717;
      uVar31 = ~local_398 >> 0x1f;
      uVar27 = 0;
      if ((int)local_398 < (this->Constraints).ArrayNum) {
        uVar27 = uVar31;
      }
      local_368 = uVar31;
      if ((uVar27 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      pFVar20 = (this->Constraints).AllocatorInstance.Data;
      iVar12 = *(int *)(pFVar20 + lVar32 * 0x10);
      iVar13 = *(int *)(pFVar20 + lVar32 * 0x10 + 8);
      iVar14 = *(int *)(pFVar20 + lVar32 * 0x10 + 4);
      iVar15 = *(int *)(pFVar20 + lVar32 * 0x10 + 0xc);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar26)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      local_300 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                      iVar12 + *(int *)&param_1->field_0x10);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar26)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      local_358 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                      *(int *)&param_1->field_0x10 + iVar14);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar26)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      pTVar28 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                    iVar13 + *(int *)&param_1->field_0x10);
      local_310 = pTVar28;
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar26)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      local_308 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                      iVar15 + *(int *)&param_1->field_0x10);
      if (((this->ThicknessWeighted).MapView.MapValues.ArrayNum < 1) ||
         ((float)(*(uint *)&(this->ThicknessWeighted).MapView.OffsetRange.field_0x4 & uVar29) <=
          fVar45)) {
        fVar45 = *(float *)&(this->ThicknessWeighted).MapView.OffsetRange;
        fVar45 = fVar45 + fVar45;
      }
      else {
        uVar29 = 0;
        if ((int)uVar30 < (this->Constraints).ArrayNum) {
          uVar29 = uVar31;
        }
        if ((uVar29 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
        pFVar20 = (this->Constraints).AllocatorInstance.Data;
        uVar29 = 0;
        if ((int)uVar30 < (this->Barys).ArrayNum) {
          uVar29 = uVar31;
        }
        local_318 = pFVar20;
        if ((uVar29 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
        iVar16 = this->Offset;
        pFVar21 = (this->Barys).AllocatorInstance.Data;
        iVar17 = *(int *)(pFVar20 + lVar32 * 0x10);
        iVar18 = *(int *)(pFVar20 + lVar32 * 0x10 + 8);
        iVar19 = *(int *)(pFVar20 + lVar32 * 0x10 + 0xc);
        fVar45 = *(float *)(pFVar21 + local_360 + 8);
        fVar44 = *(float *)(pFVar21 + local_360 + 4);
        fVar1 = *(float *)(pFVar21 + local_360);
        fVar33 = FPBDFlatWeightMap::GetValue
                           (&this->ThicknessWeighted,
                            *(int *)(local_318 + lVar32 * 0x10 + 4) - iVar16);
        fVar34 = FPBDFlatWeightMap::GetValue(&this->ThicknessWeighted,iVar17 - iVar16);
        fVar35 = FPBDFlatWeightMap::GetValue(&this->ThicknessWeighted,iVar18 - iVar16);
        fVar36 = FPBDFlatWeightMap::GetValue(&this->ThicknessWeighted,iVar19 - iVar16);
        fVar45 = fVar36 * fVar45 + fVar35 * fVar44 + fVar34 + fVar33 * fVar1;
        pTVar28 = local_310;
        uVar31 = local_368;
        uVar30 = local_398;
      }
      uVar29 = 0;
      if ((int)uVar30 < (this->Barys).ArrayNum) {
        uVar29 = uVar31;
      }
      if ((uVar29 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      fVar44 = *(float *)((this->Barys).AllocatorInstance.Data + lVar32 * 0xc);
      fVar1 = *(float *)local_358;
      fVar33 = *(float *)&local_358->field_0x4;
      fVar34 = *(float *)&local_358->field_0x8;
      uVar29 = 0;
      if ((int)uVar30 < (this->Barys).ArrayNum) {
        uVar29 = uVar31;
      }
      if ((uVar29 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      fVar35 = *(float *)((this->Barys).AllocatorInstance.Data + lVar32 * 0xc + 4);
      fVar36 = *(float *)pTVar28;
      uVar29 = 0;
      if ((int)uVar30 < (this->Barys).ArrayNum) {
        uVar29 = uVar31;
      }
      fVar2 = *(float *)&pTVar28->field_0x4;
      fVar3 = *(float *)&pTVar28->field_0x8;
      if ((uVar29 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      fVar4 = *(float *)((this->Barys).AllocatorInstance.Data + lVar32 * 0xc + 8);
      fVar5 = *(float *)&local_308->field_0x8;
      fVar6 = *(float *)&local_308->field_0x4;
      fVar7 = *(float *)&local_300->field_0x8;
      fVar8 = *(float *)&local_300->field_0x4;
      fVar9 = *(float *)local_300;
      fVar10 = *(float *)local_308;
      local_390 = *(undefined8 *)local_358;
      local_388 = *(float *)&local_358->field_0x8;
      local_37c = *(float *)&pTVar28->field_0x8;
      local_370 = *(float *)&local_308->field_0x8;
      local_384 = *(undefined8 *)pTVar28;
      local_378 = *(undefined8 *)local_308;
      uVar29 = 0;
      if ((int)uVar30 < (this->FlipNormal).ArrayNum) {
        uVar29 = uVar31;
      }
      if ((uVar29 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      fVar42 = (local_384._4_4_ - local_390._4_4_) * (local_370 - local_388) -
               (local_37c - local_388) * (local_378._4_4_ - local_390._4_4_);
      fVar40 = (local_37c - local_388) * ((float)local_378 - (float)local_390) -
               (local_370 - local_388) * ((float)local_384 - (float)local_390);
      fVar38 = (local_378._4_4_ - local_390._4_4_) * ((float)local_384 - (float)local_390) -
               (local_384._4_4_ - local_390._4_4_) * ((float)local_378 - (float)local_390);
      fVar37 = fVar40 * fVar40 + fVar42 * fVar42 + fVar38 * fVar38;
      if ((this->FlipNormal).AllocatorInstance.Data[lVar32] == (FScriptContainerElement)0x0) {
        uVar39 = fVar38;
        uVar43 = fVar42;
        uVar41 = fVar40;
        if ((fVar37 != __real_3f800000) &&
           (uVar39 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
           uVar43 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
           uVar41 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
           __real_322bcc77 <= fVar37)) {
          fVar37 = __real_3f800000 / SQRT(fVar37);
          uVar39 = fVar38 * fVar37;
          uVar43 = fVar42 * fVar37;
          uVar41 = fVar40 * fVar37;
        }
      }
      else {
        if (fVar37 != __real_3f800000) {
          if (fVar37 < __real_322bcc77) {
            uVar39 = (uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z ^ uVar23;
            uVar43 = (uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X ^ uVar23;
            uVar41 = (uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y ^ uVar23;
            goto LAB_143c7d58b;
          }
          fVar37 = __real_3f800000 / SQRT(fVar37);
          fVar42 = fVar42 * fVar37;
          fVar40 = fVar40 * fVar37;
          fVar38 = fVar38 * fVar37;
        }
        uVar39 = (uint)fVar38 ^ uVar23;
        uVar43 = (uint)fVar42 ^ uVar23;
        uVar41 = (uint)fVar40 ^ uVar23;
      }
LAB_143c7d58b:
      fVar44 = (fVar8 - (fVar4 * fVar6 + fVar35 * fVar2 + fVar44 * fVar33)) * (float)uVar41 +
               (fVar9 - (fVar4 * fVar10 + fVar35 * fVar36 + fVar44 * fVar1)) * (float)uVar43 +
               (fVar7 - (fVar4 * fVar5 + fVar35 * fVar3 + fVar44 * fVar34)) * (float)uVar39;
      if (fVar44 <= fVar45) {
        uVar29 = 0;
        if ((int)uVar30 < (this->ConstraintTypes).ArrayNum) {
          uVar29 = uVar31;
        }
        if ((uVar29 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
        uVar25 = _UNK_150689648;
        uVar24 = ___xmm_3f800000000000000000000000000000;
        FVar11 = (this->ConstraintTypes).AllocatorInstance.Data[lVar32];
        if ((FVar11 == (FScriptContainerElement)0x0) || (FVar11 != (FScriptContainerElement)0x1)) {
          local_278 = this->FrictionCoefficient;
        }
        else {
          local_278 = 0.0;
        }
        local_2f4 = (float)uVar43 * (float)uVar41;
        local_2ec = 0;
        local_2d0 = (float)uVar39 * (float)uVar39;
        local_2dc = 0;
        local_2e0 = (float)uVar39 * (float)uVar41;
        local_2cc = 0;
        local_3a0 = (fVar45 - fVar44) * this->ProximityStiffness;
        local_2ac = 0;
        local_3a8 = local_3a0 * (float)uVar43;
        local_29c = 0;
        local_3a4 = local_3a0 * (float)uVar41;
        local_28c = 0;
        local_3a0 = local_3a0 * (float)uVar39;
        local_26c = 0;
        local_2f0 = (float)uVar39 * (float)uVar43;
        local_258 = 0;
        local_2f8 = (float)uVar43 * (float)uVar43;
        local_274 = 0;
        local_2e4 = (float)uVar41 * (float)uVar41;
        local_260 = 0;
        local_2a0 = __real_3f800000 - local_278;
        local_2b4 = local_2f4 * local_2a0;
        local_24c = 0;
        local_2b8 = local_2f8 * local_2a0;
        local_22c = 0;
        local_2a4 = local_2e4 * local_2a0;
        local_21c = 0;
        local_290 = local_2d0 * local_2a0;
        local_238 = local_2b8 + local_278;
        local_224 = local_278 + local_2a4;
        local_210 = local_278 + local_290;
        local_2b0 = local_2f0 * local_2a0;
        local_2a0 = local_2e0 * local_2a0;
        local_2c8 = ___xmm_3f800000000000000000000000000000;
        uStack_2c0 = _UNK_150689648;
        local_288 = ___xmm_3f800000000000000000000000000000;
        uStack_280 = _UNK_150689648;
        local_248 = ___xmm_3f800000000000000000000000000000;
        uStack_240 = _UNK_150689648;
        local_208 = ___xmm_3f800000000000000000000000000000;
        uStack_200 = _UNK_150689648;
        local_1d0 = (float)((uint)this->ProximityStiffness ^ uVar23);
        local_20c = 0;
        local_1f8 = local_238 * local_1d0;
        local_1ec = 0;
        local_1f4 = local_1d0 * local_2b4;
        local_1dc = 0;
        local_1f0 = local_1d0 * local_2b0;
        local_1cc = 0;
        local_1e0 = local_1d0 * local_2a0;
        local_1e4 = local_224 * local_1d0;
        local_1d0 = local_210 * local_1d0;
        local_1c8 = ___xmm_3f800000000000000000000000000000;
        uStack_1c0 = _UNK_150689648;
        local_2e8 = local_2f4;
        local_2d8 = local_2f0;
        local_2d4 = local_2e0;
        local_2a8 = local_2b4;
        local_298 = local_2b0;
        local_294 = local_2a0;
        local_264 = local_278;
        local_250 = local_278;
        local_234 = local_2b4;
        local_230 = local_2b0;
        local_228 = local_2b4;
        local_220 = local_2a0;
        local_218 = local_2b0;
        local_214 = local_2a0;
        local_1e8 = local_1f4;
        local_1d8 = local_1f0;
        local_1d4 = local_1e0;
        this_01 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
        fVar45 = TDynamicParticles<float,3>::InvM
                           ((TDynamicParticles<float,3> *)this_01,
                            *(int *)&param_1->field_0x10 + iVar12);
        this_00 = local_350;
        if (0.0 < fVar45) {
          FEvolutionLinearSystem::AddForce
                    (local_350,param_1,(TVector<float,3> *)&local_3a8,iVar12,param_2);
          FEvolutionLinearSystem::AddSymmetricForceDerivative
                    (this_00,param_1,(PMatrix<float,3,3> *)&local_1f8,(PMatrix<float,3,3> *)0x0,
                     iVar12,iVar12,param_2);
        }
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x56,L""), bVar26)) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
        fVar45 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                            iVar14 + *(int *)&param_1->field_0x10);
        if (0.0 < fVar45) {
          uVar29 = 0;
          if ((int)uVar30 < (this->Barys).ArrayNum) {
            uVar29 = uVar31;
          }
          if ((uVar29 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          local_340 = (float)(*(uint *)((this->Barys).AllocatorInstance.Data + lVar32 * 0xc) ^
                             uVar23);
          local_348 = local_340 * local_3a8;
          local_344 = local_340 * local_3a4;
          local_340 = local_340 * local_3a0;
          FEvolutionLinearSystem::AddForce
                    (this_00,param_1,(TVector<float,3> *)&local_348,iVar14,param_2);
          uVar29 = 0;
          if ((int)uVar30 < (this->Barys).ArrayNum) {
            uVar29 = uVar31;
          }
          if ((uVar29 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          local_190 = (float)(*(uint *)((this->Barys).AllocatorInstance.Data + lVar32 * 0xc) ^
                             uVar23);
          local_1b8 = local_190 * local_1f8;
          local_1a8 = local_190 * local_1e8;
          local_1ac = 0;
          local_198 = local_190 * local_1d8;
          local_19c = 0;
          local_1b4 = local_190 * local_1f4;
          local_18c = 0;
          local_1a4 = local_190 * local_1e4;
          local_194 = local_190 * local_1d4;
          local_1b0 = local_190 * local_1f0;
          local_1a0 = local_190 * local_1e0;
          local_190 = local_190 * local_1d0;
          local_188 = uVar24;
          uStack_180 = uVar25;
          FEvolutionLinearSystem::AddSymmetricForceDerivative
                    (this_00,param_1,(PMatrix<float,3,3> *)&local_1b8,(PMatrix<float,3,3> *)0x0,
                     iVar12,iVar14,param_2);
          uVar29 = 0;
          if ((int)uVar30 < (this->Barys).ArrayNum) {
            uVar29 = uVar31;
          }
          if ((uVar29 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          fVar45 = (float)(*(uint *)((this->Barys).AllocatorInstance.Data + lVar32 * 0xc) ^ uVar23);
          local_1b8 = local_1b8 * fVar45;
          local_1b4 = local_1b4 * fVar45;
          local_1b0 = local_1b0 * fVar45;
          local_1a4 = local_1a4 * fVar45;
          local_1a8 = local_1a8 * fVar45;
          local_198 = local_198 * fVar45;
          local_1a0 = local_1a0 * fVar45;
          local_190 = local_190 * fVar45;
          local_194 = local_194 * fVar45;
          FEvolutionLinearSystem::AddSymmetricForceDerivative
                    (this_00,param_1,(PMatrix<float,3,3> *)&local_1b8,(PMatrix<float,3,3> *)0x0,
                     iVar14,iVar14,param_2);
        }
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x56,L""), bVar26)) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
        fVar45 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                            iVar13 + *(int *)&param_1->field_0x10);
        if (0.0 < fVar45) {
          uVar29 = 0;
          if ((int)uVar30 < (this->Barys).ArrayNum) {
            uVar29 = uVar31;
          }
          if ((uVar29 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          local_334 = (float)(*(uint *)((this->Barys).AllocatorInstance.Data + lVar32 * 0xc + 4) ^
                             uVar23);
          local_33c = local_334 * local_3a8;
          local_338 = local_334 * local_3a4;
          local_334 = local_334 * local_3a0;
          FEvolutionLinearSystem::AddForce
                    (this_00,param_1,(TVector<float,3> *)&local_33c,iVar13,param_2);
          uVar29 = 0;
          if ((int)uVar30 < (this->Barys).ArrayNum) {
            uVar29 = uVar31;
          }
          if ((uVar29 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          local_150 = (float)(*(uint *)((this->Barys).AllocatorInstance.Data + lVar32 * 0xc + 4) ^
                             uVar23);
          local_178 = local_150 * local_1f8;
          local_168 = local_150 * local_1e8;
          local_16c = 0;
          local_158 = local_150 * local_1d8;
          local_15c = 0;
          local_174 = local_150 * local_1f4;
          local_14c = 0;
          local_164 = local_150 * local_1e4;
          local_154 = local_150 * local_1d4;
          local_170 = local_150 * local_1f0;
          local_160 = local_150 * local_1e0;
          local_150 = local_150 * local_1d0;
          local_148 = uVar24;
          uStack_140 = uVar25;
          FEvolutionLinearSystem::AddSymmetricForceDerivative
                    (this_00,param_1,(PMatrix<float,3,3> *)&local_178,(PMatrix<float,3,3> *)0x0,
                     iVar12,iVar13,param_2);
          uVar29 = 0;
          if ((int)uVar30 < (this->Barys).ArrayNum) {
            uVar29 = uVar31;
          }
          if ((uVar29 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          fVar45 = (float)(*(uint *)((this->Barys).AllocatorInstance.Data + lVar32 * 0xc + 4) ^
                          uVar23);
          local_178 = local_178 * fVar45;
          local_174 = local_174 * fVar45;
          local_170 = local_170 * fVar45;
          local_164 = local_164 * fVar45;
          local_168 = local_168 * fVar45;
          local_158 = local_158 * fVar45;
          local_160 = local_160 * fVar45;
          local_150 = local_150 * fVar45;
          local_154 = local_154 * fVar45;
          FEvolutionLinearSystem::AddSymmetricForceDerivative
                    (this_00,param_1,(PMatrix<float,3,3> *)&local_178,(PMatrix<float,3,3> *)0x0,
                     iVar13,iVar13,param_2);
        }
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x56,L""), bVar26)) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
        fVar45 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                            iVar15 + *(int *)&param_1->field_0x10);
        if (0.0 < fVar45) {
          uVar29 = 0;
          if ((int)uVar30 < (this->Barys).ArrayNum) {
            uVar29 = uVar31;
          }
          if ((uVar29 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          local_328 = (float)(*(uint *)((this->Barys).AllocatorInstance.Data + lVar32 * 0xc + 8) ^
                             uVar23);
          local_330 = local_328 * local_3a8;
          local_32c = local_328 * local_3a4;
          local_328 = local_328 * local_3a0;
          FEvolutionLinearSystem::AddForce
                    (this_00,param_1,(TVector<float,3> *)&local_330,iVar15,param_2);
          uVar29 = 0;
          if ((int)uVar30 < (this->Barys).ArrayNum) {
            uVar29 = uVar31;
          }
          if ((uVar29 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          local_110 = (float)(*(uint *)((this->Barys).AllocatorInstance.Data + lVar32 * 0xc + 8) ^
                             uVar23);
          local_138 = local_110 * local_1f8;
          local_128 = local_110 * local_1e8;
          local_12c = 0;
          local_118 = local_110 * local_1d8;
          local_11c = 0;
          local_134 = local_110 * local_1f4;
          local_10c = 0;
          local_124 = local_110 * local_1e4;
          local_114 = local_110 * local_1d4;
          local_130 = local_110 * local_1f0;
          local_120 = local_110 * local_1e0;
          local_110 = local_110 * local_1d0;
          local_108 = uVar24;
          uStack_100 = uVar25;
          FEvolutionLinearSystem::AddSymmetricForceDerivative
                    (this_00,param_1,(PMatrix<float,3,3> *)&local_138,(PMatrix<float,3,3> *)0x0,
                     iVar12,iVar15,param_2);
          uVar29 = 0;
          if ((int)uVar30 < (this->Barys).ArrayNum) {
            uVar29 = uVar31;
          }
          if ((uVar29 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          fVar45 = (float)(*(uint *)((this->Barys).AllocatorInstance.Data + lVar32 * 0xc + 8) ^
                          uVar23);
          local_138 = local_138 * fVar45;
          local_134 = local_134 * fVar45;
          local_130 = local_130 * fVar45;
          local_124 = local_124 * fVar45;
          local_128 = local_128 * fVar45;
          local_118 = local_118 * fVar45;
          local_120 = local_120 * fVar45;
          local_110 = local_110 * fVar45;
          local_114 = local_114 * fVar45;
          FEvolutionLinearSystem::AddSymmetricForceDerivative
                    (this_00,param_1,(PMatrix<float,3,3> *)&local_138,(PMatrix<float,3,3> *)0x0,
                     iVar15,iVar15,param_2);
        }
      }
      local_360 = local_360 + 0xc;
      local_398 = uVar30 + 1;
      lVar32 = lVar32 + 1;
    } while ((int)local_398 < (this->Constraints).ArrayNum);
  }
  return;
}

