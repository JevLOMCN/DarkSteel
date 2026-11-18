// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 21

// FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> @ 143a33530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> * __thiscall
Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>
          (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4,
          TArray<float,TSizedDefaultAllocator<32>_> *param_5,FDeformableXPBDCorotatedParams *param_6
          ,float *param_7,bool param_8,bool param_9)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *pTVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *pFVar17;
  uint uVar18;
  longlong lVar19;
  float *pfVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
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
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStackY_268 [32];
  undefined1 local_228 [8];
  FSolverParticles *local_220;
  FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *local_218;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  uint local_1fc;
  TArray<float,TSizedDefaultAllocator<32>_> *local_1f8;
  longlong local_1f0;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *local_1e8;
  TArray<float,TSizedDefaultAllocator<32>_> *local_1e0;
  TArray<float,TSizedDefaultAllocator<32>_> *local_1d8;
  FScriptContainerElement *local_1d0;
  TArray<float,TSizedDefaultAllocator<32>_> *local_1c8;
  TArray<float,TSizedDefaultAllocator<32>_> *local_1c0;
  TArray<float,TSizedDefaultAllocator<32>_> *local_1b8;
  TArray<float,TSizedDefaultAllocator<32>_> *local_1b0;
  float local_1a8 [4];
  float local_198 [4];
  float local_188 [4];
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  TMatrix<float> local_128;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_268;
  pTVar2 = &this->DmInverse;
  this->_padding_ =
       (longlong)&___7__FXPBDCorotatedConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_;
  pTVar3 = &this->MeshConstraints;
  local_1b0 = &this->DmInverseSave;
  (local_1b0->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DmInverseSave).ArrayNum = 0;
  (this->DmInverseSave).ArrayMax = 0;
  (this->LambdaArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LambdaArray).ArrayNum = 0;
  (this->LambdaArray).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DmInverse).ArrayNum = 0;
  (this->DmInverse).ArrayMax = 0;
  iVar14 = param_6->XPBDCorotatedBatchThreshold;
  (this->CorotatedParams).XPBDCorotatedBatchSize = param_6->XPBDCorotatedBatchSize;
  (this->CorotatedParams).XPBDCorotatedBatchThreshold = iVar14;
  (this->CorotatedParams).NumLogExtremeParticle = param_6->NumLogExtremeParticle;
  local_1c0 = &this->MuElementArray;
  (local_1c0->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MuElementArray).ArrayNum = 0;
  (this->MuElementArray).ArrayMax = 0;
  (this->LambdaElementArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LambdaElementArray).ArrayNum = 0;
  (this->LambdaElementArray).ArrayMax = 0;
  (this->AlphaJArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8 = &this->LambdaElementArray;
  local_1e0 = param_4;
  (this->AlphaJArray).AllocatorInstance.Data = (param_5->AllocatorInstance).Data;
  (param_5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AlphaJArray).ArrayNum = param_5->ArrayNum;
  (this->AlphaJArray).ArrayMax = param_5->ArrayMax;
  param_5->ArrayNum = 0;
  param_5->ArrayMax = 0;
  this->bRecordMetric = param_8;
  piVar1 = &(this->MeshConstraints).ArrayMax;
  (this->HErrorArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HErrorArray).ArrayNum = 0;
  (this->HErrorArray).ArrayMax = 0;
  this->VariableStiffness = false;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar14 = param_2->ArrayNum;
  pFVar5 = (param_2->AllocatorInstance).Data;
  (this->MeshConstraints).ArrayNum = iVar14;
  local_220 = param_1;
  local_218 = this;
  local_1f8 = param_3;
  local_1e8 = param_2;
  local_1d8 = pTVar2;
  if (iVar14 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar14,0,&pTVar3->AllocatorInstance,iVar14,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar14 << 4);
  }
  pTVar4 = &this->Measure;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Measure).ArrayNum = 0;
  (this->Measure).ArrayMax = 0;
  local_1b8 = pTVar4;
  FSolverParticles::FSolverParticles(&this->RestParticles);
  pTVar12 = local_1e8;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  (this->GError).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GError).ArrayNum = 0;
  (this->GError).ArrayMax = 0;
  if (param_3->ArrayNum != local_1e8->ArrayNum) {
    local_228[0] = 0;
    `Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
    FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>'::__l2::<lambda_1>::operator()
              (local_228);
  }
  local_210 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->LambdaArray,&local_210,(this->MeshConstraints).ArrayNum * 2);
  local_20c = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (pTVar2,&local_20c,(this->MeshConstraints).ArrayNum * 9);
  local_208 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (pTVar4,&local_208,(this->MeshConstraints).ArrayNum);
  local_204 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->LambdaElementArray,&local_204,(this->MeshConstraints).ArrayNum);
  local_200 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->MuElementArray,&local_200,(this->MeshConstraints).ArrayNum);
  iVar14 = pTVar12->ArrayNum;
  uVar21 = 0;
  if (0 < iVar14) {
    lVar24 = 0;
    lVar23 = 0;
    do {
      uVar25 = ~uVar21 >> 0x1f;
      lVar19 = 0;
      do {
        uVar26 = 0;
        if ((int)uVar21 < (this->MeshConstraints).ArrayNum) {
          uVar26 = uVar25;
        }
        if ((uVar26 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar7)();
          return pFVar17;
        }
        if (*(int *)((pTVar3->AllocatorInstance).Data + lVar19 + lVar23) < 0) {
LAB_143a33891:
          bVar13 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6606092475037646984>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDCorotatedConstraints.h"
                              ,0x88,
                              "MeshConstraints[e][j] > -1 && MeshConstraints[e][j] < int32(InParticles.Size())"
                             );
          if (bVar13) {
            pcVar7 = (code *)swi(3);
            pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar7)()
            ;
            return pFVar17;
          }
        }
        else {
          uVar26 = 0;
          if ((int)uVar21 < (this->MeshConstraints).ArrayNum) {
            uVar26 = uVar25;
          }
          if ((uVar26 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar7)()
            ;
            return pFVar17;
          }
          if ((int)local_220->_padding_ <=
              *(int *)((pTVar3->AllocatorInstance).Data + lVar19 + lVar23)) goto LAB_143a33891;
        }
        uVar26 = 0;
        if ((int)uVar21 < (this->MeshConstraints).ArrayNum) {
          uVar26 = uVar25;
        }
        if ((uVar26 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar7)();
          return pFVar17;
        }
        uVar26 = *(uint *)((pTVar3->AllocatorInstance).Data + lVar19 + lVar23);
        uVar18 = 0;
        if ((int)uVar26 < (int)local_220->_padding_) {
          uVar18 = ~uVar26 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar7)();
          return pFVar17;
        }
        pFVar17 = local_218;
        if (*(float *)(local_220->_padding_ + (longlong)(int)uVar26 * 4) == 0.0) {
          uVar26 = 0;
          if ((int)uVar21 < (local_218->AlphaJArray).ArrayNum) {
            uVar26 = uVar25;
          }
          if ((uVar26 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar7)()
            ;
            return pFVar17;
          }
          *(undefined4 *)((pFVar17->AlphaJArray).AllocatorInstance.Data + lVar24 * 4) = 0x3f800000;
        }
        lVar19 = lVar19 + 4;
      } while (lVar19 < 0x10);
      uVar21 = uVar21 + 1;
      lVar24 = lVar24 + 1;
      lVar23 = lVar23 + 0x10;
      iVar14 = local_1e8->ArrayNum;
    } while ((int)uVar21 < iVar14);
  }
  fVar11 = __real_40000000;
  fVar10 = __real_3e2aaaab;
  uVar25 = __xmm_80000000800000008000000080000000;
  uVar21 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar9 = __real_3f800000;
  fVar8 = __real_322bcc77;
  uVar26 = 0;
  if (0 < iVar14) {
    lVar23 = 0;
    lVar24 = 0;
    uVar18 = 2;
    local_1f0 = 0;
    do {
      pTVar2 = local_1e0;
      uVar22 = ~uVar26 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar26 < local_1e0->ArrayNum) {
        uVar15 = uVar22;
      }
      local_1fc = uVar22;
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar7)();
        return pFVar17;
      }
      local_1d0 = (pTVar2->AllocatorInstance).Data;
      uVar15 = 0;
      if ((int)uVar26 < pTVar2->ArrayNum) {
        uVar15 = uVar22;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar7)();
        return pFVar17;
      }
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      uVar15 = 0;
      if ((int)uVar26 < pTVar2->ArrayNum) {
        uVar15 = uVar22;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar7)();
        return pFVar17;
      }
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      uVar15 = 0;
      if ((int)uVar26 < local_1f8->ArrayNum) {
        uVar15 = uVar22;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar7)();
        return pFVar17;
      }
      pTVar2 = local_1c8;
      fVar40 = *(float *)(local_1d0 + lVar23 * 4);
      fVar41 = *(float *)((local_1f8->AllocatorInstance).Data + lVar23 * 4);
      fVar42 = *(float *)(pFVar6 + lVar23 * 4);
      fVar27 = *(float *)(pFVar5 + local_1f0);
      uVar15 = 0;
      if ((int)uVar26 < local_1c8->ArrayNum) {
        uVar15 = uVar22;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar7)();
        return pFVar17;
      }
      pTVar4 = local_1e0;
      *(float *)((pTVar2->AllocatorInstance).Data + lVar23 * 4) =
           (fVar41 * fVar42) / ((fVar9 - (fVar40 + fVar40)) * (fVar27 + fVar9));
      uVar15 = 0;
      if ((int)uVar26 < local_1e0->ArrayNum) {
        uVar15 = uVar22;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar7)();
        return pFVar17;
      }
      pTVar2 = local_1f8;
      pFVar5 = (pTVar4->AllocatorInstance).Data;
      uVar15 = 0;
      if ((int)uVar26 < local_1f8->ArrayNum) {
        uVar15 = uVar22;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar7)();
        return pFVar17;
      }
      pTVar4 = local_1c0;
      fVar40 = *(float *)(pFVar5 + lVar23 * 4);
      fVar41 = *(float *)((pTVar2->AllocatorInstance).Data + lVar23 * 4);
      uVar15 = 0;
      if ((int)uVar26 < local_1c0->ArrayNum) {
        uVar15 = uVar22;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar7)();
        return pFVar17;
      }
      *(float *)((pTVar4->AllocatorInstance).Data + lVar23 * 4) =
           fVar41 / (fVar40 + fVar40 + fVar11);
      DsInit(local_218,(PMatrix<float,3,3> *)&local_168,uVar26,local_220);
      if ((((((fVar8 < (float)((uint)local_168 & uVar21)) ||
             (fVar8 < (float)((uint)local_164 & uVar21))) ||
            (fVar8 < (float)((uint)local_160 & uVar21))) ||
           ((fVar8 < (float)((uint)local_158 & uVar21) ||
            (fVar8 < (float)((uint)local_154 & uVar21))))) ||
          ((fVar8 < (float)((uint)local_150 & uVar21) ||
           ((fVar8 < (float)((uint)local_148 & uVar21) ||
            (fVar8 < (float)((uint)local_144 & uVar21))))))) ||
         (fVar40 = UE::Math::TMatrix<float>::Identity.M[0][0],
         fVar41 = UE::Math::TMatrix<float>::Identity.M[0][1],
         fVar42 = UE::Math::TMatrix<float>::Identity.M[0][2],
         fVar27 = UE::Math::TMatrix<float>::Identity.M[0][3],
         fVar28 = UE::Math::TMatrix<float>::Identity.M[1][0],
         fVar29 = UE::Math::TMatrix<float>::Identity.M[1][1],
         fVar30 = UE::Math::TMatrix<float>::Identity.M[1][2],
         fVar31 = UE::Math::TMatrix<float>::Identity.M[1][3],
         fVar32 = UE::Math::TMatrix<float>::Identity.M[2][0],
         fVar33 = UE::Math::TMatrix<float>::Identity.M[2][1],
         fVar34 = UE::Math::TMatrix<float>::Identity.M[2][2],
         fVar35 = UE::Math::TMatrix<float>::Identity.M[2][3],
         fVar36 = UE::Math::TMatrix<float>::Identity.M[3][0],
         fVar37 = UE::Math::TMatrix<float>::Identity.M[3][1],
         fVar38 = UE::Math::TMatrix<float>::Identity.M[3][2],
         fVar39 = UE::Math::TMatrix<float>::Identity.M[3][3],
         fVar8 < (float)((uint)local_140 & uVar21))) {
        FMath::MatrixInverse(&local_128,(TMatrix<float> *)&local_168);
        fVar40 = local_128.M[0][0];
        fVar41 = local_128.M[0][1];
        fVar42 = local_128.M[0][2];
        fVar27 = local_128.M[0][3];
        fVar28 = local_128.M[1][0];
        fVar29 = local_128.M[1][1];
        fVar30 = local_128.M[1][2];
        fVar31 = local_128.M[1][3];
        fVar32 = local_128.M[2][0];
        fVar33 = local_128.M[2][1];
        fVar34 = local_128.M[2][2];
        fVar35 = local_128.M[2][3];
        fVar36 = local_128.M[3][0];
        fVar37 = local_128.M[3][1];
        fVar38 = local_128.M[3][2];
        fVar39 = local_128.M[3][3];
      }
      pTVar2 = local_1d8;
      pfVar20 = local_188;
      local_1a8[0] = fVar40;
      local_1a8[1] = fVar41;
      local_1a8[2] = fVar42;
      local_1a8[3] = fVar27;
      lVar19 = 3;
      local_198[0] = fVar28;
      local_198[1] = fVar29;
      local_198[2] = fVar30;
      local_198[3] = fVar31;
      local_188[0] = fVar32;
      local_188[1] = fVar33;
      local_188[2] = fVar34;
      local_188[3] = fVar35;
      local_178 = fVar36;
      fStack_174 = fVar37;
      fStack_170 = fVar38;
      fStack_16c = fVar39;
      do {
        fVar40 = pfVar20[-8];
        uVar15 = 0;
        if ((int)(uVar18 - 2) < pTVar2->ArrayNum) {
          uVar15 = ~(uVar18 - 2) >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar7)();
          return pFVar17;
        }
        *(float *)((pTVar2->AllocatorInstance).Data + lVar24) = fVar40;
        fVar40 = pfVar20[-4];
        uVar15 = 0;
        if ((int)(uVar18 - 1) < pTVar2->ArrayNum) {
          uVar15 = ~(uVar18 - 1) >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar7)();
          return pFVar17;
        }
        *(float *)((pTVar2->AllocatorInstance).Data + lVar24 + 4) = fVar40;
        fVar40 = *pfVar20;
        uVar15 = 0;
        if ((int)uVar18 < pTVar2->ArrayNum) {
          uVar15 = ~uVar18 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar7)();
          return pFVar17;
        }
        pTVar4 = local_1b8;
        uVar15 = local_1fc;
        uVar18 = uVar18 + 3;
        pfVar20 = pfVar20 + 1;
        *(float *)((pTVar2->AllocatorInstance).Data + lVar24 + 8) = fVar40;
        lVar24 = lVar24 + 0xc;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      uVar22 = 0;
      if ((int)uVar26 < local_1b8->ArrayNum) {
        uVar22 = local_1fc;
      }
      fVar42 = (local_140 * local_154 - local_144 * local_150) * local_168;
      fVar41 = (local_144 * local_158 - local_148 * local_154) * local_160;
      fVar40 = (local_140 * local_158 - local_148 * local_150) * local_164;
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar7)();
        return pFVar17;
      }
      *(float *)((pTVar4->AllocatorInstance).Data + lVar23 * 4) =
           ((fVar42 - fVar40) + fVar41) * fVar10;
      uVar22 = 0;
      if ((int)uVar26 < pTVar4->ArrayNum) {
        uVar22 = uVar15;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar7)();
        return pFVar17;
      }
      pFVar5 = (pTVar4->AllocatorInstance).Data + lVar23 * 4;
      if (*(float *)pFVar5 <= 0.0 && *(float *)pFVar5 != 0.0) {
        uVar22 = 0;
        if ((int)uVar26 < pTVar4->ArrayNum) {
          uVar22 = uVar15;
        }
        if ((uVar22 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar7)();
          return pFVar17;
        }
        uVar22 = *(uint *)((pTVar4->AllocatorInstance).Data + lVar23 * 4);
        uVar16 = 0;
        if ((int)uVar26 < pTVar4->ArrayNum) {
          uVar16 = uVar15;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar7)();
          return pFVar17;
        }
        *(uint *)((pTVar4->AllocatorInstance).Data + lVar23 * 4) = uVar22 ^ uVar25;
      }
      uVar26 = uVar26 + 1;
      local_1f0 = local_1f0 + 4;
      lVar23 = lVar23 + 1;
    } while ((int)uVar26 < local_1e8->ArrayNum);
  }
  pTVar2 = local_1b0;
  if (local_1b0 != local_1d8) {
    iVar14 = local_1d8->ArrayNum;
    piVar1 = &local_1b0->ArrayMax;
    pFVar5 = (local_1d8->AllocatorInstance).Data;
    local_1b0->ArrayNum = iVar14;
    if ((iVar14 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar14,*piVar1,&local_1b0->AllocatorInstance,iVar14,piVar1);
      if (iVar14 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar14 << 2);
      }
    }
  }
  if (param_9) {
    InitColor(local_218,local_220);
  }
  return local_218;
}

// FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> @ 143a34240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> * __thiscall
Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>
          (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,float *param_4,bool param_5)

{
  int *piVar1;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *pFVar9;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *pTVar10;
  FSolverParticles *pFVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *pFVar17;
  uint uVar18;
  longlong lVar19;
  float *pfVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
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
  float fVar39;
  float fVar40;
  undefined1 auStackY_228 [32];
  undefined1 local_1e8 [8];
  TArray<float,TSizedDefaultAllocator<32>_> *local_1e0;
  FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0 [2];
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *local_1b8;
  FSolverParticles *local_1b0;
  float local_1a8 [4];
  float local_198 [4];
  float local_188 [4];
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  TMatrix<float> local_168;
  TMatrix<float> local_128;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  this->_padding_ =
       (longlong)&___7__FXPBDCorotatedConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_;
  this->bRecordMetric = param_5;
  pTVar2 = &this->MeshConstraints;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->MeshConstraints).ArrayMax;
  (this->LambdaArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LambdaArray).ArrayNum = 0;
  (this->LambdaArray).ArrayMax = 0;
  (this->DmInverse).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DmInverse).ArrayNum = 0;
  (this->DmInverse).ArrayMax = 0;
  (this->DmInverseSave).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DmInverseSave).ArrayNum = 0;
  (this->DmInverseSave).ArrayMax = 0;
  (this->CorotatedParams).XPBDCorotatedBatchSize = 5;
  (this->CorotatedParams).XPBDCorotatedBatchThreshold = 5;
  (this->CorotatedParams).NumLogExtremeParticle = 0;
  (this->MuElementArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MuElementArray).ArrayNum = 0;
  (this->MuElementArray).ArrayMax = 0;
  (this->LambdaElementArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LambdaElementArray).ArrayNum = 0;
  (this->LambdaElementArray).ArrayMax = 0;
  (this->AlphaJArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AlphaJArray).ArrayNum = 0;
  (this->AlphaJArray).ArrayMax = 0;
  (this->HErrorArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HErrorArray).ArrayNum = 0;
  (this->HErrorArray).ArrayMax = 0;
  this->VariableStiffness = false;
  iVar14 = param_2->ArrayNum;
  pFVar3 = (param_2->AllocatorInstance).Data;
  (this->MeshConstraints).ArrayNum = iVar14;
  local_1e0 = param_3;
  local_1d8 = this;
  local_1b8 = param_2;
  local_1b0 = param_1;
  if (iVar14 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar14,0,&pTVar2->AllocatorInstance,iVar14,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar3,(longlong)iVar14 << 4);
  }
  (this->Measure).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Measure).ArrayNum = 0;
  (this->Measure).ArrayMax = 0;
  FSolverParticles::FSolverParticles(&this->RestParticles);
  pTVar10 = local_1b8;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  (this->GError).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GError).ArrayNum = 0;
  (this->GError).ArrayMax = 0;
  if (local_1e0->ArrayNum != local_1b8->ArrayNum) {
    local_1e8[0] = 0;
    `Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
    FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>'::__l2::<lambda_1>::operator()
              (local_1e8);
  }
  local_1d0 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->LambdaArray,&local_1d0,(this->MeshConstraints).ArrayNum * 2);
  local_1cc = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->DmInverse,&local_1cc,(this->MeshConstraints).ArrayNum * 9);
  local_1c8 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->Measure,&local_1c8,(this->MeshConstraints).ArrayNum);
  local_1c4 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->LambdaElementArray,&local_1c4,(this->MeshConstraints).ArrayNum);
  local_1c0[0] = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->MuElementArray,local_1c0,(this->MeshConstraints).ArrayNum);
  pFVar11 = local_1b0;
  iVar14 = pTVar10->ArrayNum;
  uVar24 = 0;
  pFVar17 = this;
  if (0 < iVar14) {
    lVar21 = 0;
    do {
      lVar19 = 0;
      do {
        uVar13 = 0;
        if ((int)uVar24 < (this->MeshConstraints).ArrayNum) {
          uVar13 = ~uVar24 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar4)();
          return pFVar17;
        }
        if (*(int *)((pTVar2->AllocatorInstance).Data + lVar21 + lVar19) < 0) {
LAB_143a3451e:
          bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6606092475037646932>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDCorotatedConstraints.h"
                              ,0x54,
                              "MeshConstraints[e][j] > -1 && MeshConstraints[e][j] < int32(InParticles.Size())"
                             );
          if (bVar12) {
            pcVar4 = (code *)swi(3);
            pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar4)()
            ;
            return pFVar17;
          }
        }
        else {
          uVar13 = 0;
          if ((int)uVar24 < (this->MeshConstraints).ArrayNum) {
            uVar13 = ~uVar24 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar4)()
            ;
            return pFVar17;
          }
          if ((int)pFVar11->_padding_ <=
              *(int *)((pTVar2->AllocatorInstance).Data + lVar21 + lVar19)) goto LAB_143a3451e;
        }
        lVar19 = lVar19 + 4;
      } while (lVar19 < 0x10);
      uVar24 = uVar24 + 1;
      lVar21 = lVar21 + 0x10;
      iVar14 = local_1b8->ArrayNum;
      pFVar17 = local_1d8;
    } while ((int)uVar24 < iVar14);
  }
  fVar8 = __real_40000000;
  fVar7 = __real_3e2aaaab;
  uVar13 = __xmm_80000000800000008000000080000000;
  uVar24 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_3f800000;
  fVar5 = __real_322bcc77;
  uVar23 = 0;
  if (0 < iVar14) {
    lVar21 = 0;
    uVar18 = 2;
    local_1d8 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)0x0;
    do {
      pFVar9 = local_1d8;
      uVar22 = ~uVar23 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar23 < local_1e0->ArrayNum) {
        uVar15 = uVar22;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar4)();
        return pFVar17;
      }
      fVar38 = *param_4;
      fVar39 = *(float *)((longlong)&pFVar9->_padding_ +
                         (longlong)(local_1e0->AllocatorInstance).Data);
      uVar15 = 0;
      if ((int)uVar23 < (pFVar17->LambdaElementArray).ArrayNum) {
        uVar15 = uVar22;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar4)();
        return pFVar17;
      }
      *(float *)((longlong)&pFVar9->_padding_ +
                (longlong)(pFVar17->LambdaElementArray).AllocatorInstance.Data) =
           (fVar38 * fVar39) / ((fVar6 - (fVar38 + fVar38)) * (fVar38 + fVar6));
      uVar15 = 0;
      if ((int)uVar23 < local_1e0->ArrayNum) {
        uVar15 = uVar22;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar4)();
        return pFVar17;
      }
      fVar38 = *param_4;
      fVar39 = *(float *)((longlong)&pFVar9->_padding_ +
                         (longlong)(local_1e0->AllocatorInstance).Data);
      uVar15 = 0;
      if ((int)uVar23 < (pFVar17->MuElementArray).ArrayNum) {
        uVar15 = uVar22;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar4)();
        return pFVar17;
      }
      *(float *)((longlong)&pFVar9->_padding_ +
                (longlong)(pFVar17->MuElementArray).AllocatorInstance.Data) =
           fVar39 / (fVar38 + fVar38 + fVar8);
      DsInit(pFVar17,(PMatrix<float,3,3> *)&local_168,uVar23,local_1b0);
      if ((((((fVar5 < (float)((uint)local_168.M[0][0] & uVar24)) ||
             (fVar5 < (float)((uint)local_168.M[0][1] & uVar24))) ||
            (fVar5 < (float)((uint)local_168.M[0][2] & uVar24))) ||
           ((fVar5 < (float)((uint)local_168.M[1][0] & uVar24) ||
            (fVar5 < (float)((uint)local_168.M[1][1] & uVar24))))) ||
          ((fVar5 < (float)((uint)local_168.M[1][2] & uVar24) ||
           ((fVar5 < (float)((uint)local_168.M[2][0] & uVar24) ||
            (fVar5 < (float)((uint)local_168.M[2][1] & uVar24))))))) ||
         (fVar38 = UE::Math::TMatrix<float>::Identity.M[0][0],
         fVar39 = UE::Math::TMatrix<float>::Identity.M[0][1],
         fVar40 = UE::Math::TMatrix<float>::Identity.M[0][2],
         fVar25 = UE::Math::TMatrix<float>::Identity.M[0][3],
         fVar26 = UE::Math::TMatrix<float>::Identity.M[1][0],
         fVar27 = UE::Math::TMatrix<float>::Identity.M[1][1],
         fVar28 = UE::Math::TMatrix<float>::Identity.M[1][2],
         fVar29 = UE::Math::TMatrix<float>::Identity.M[1][3],
         fVar30 = UE::Math::TMatrix<float>::Identity.M[2][0],
         fVar31 = UE::Math::TMatrix<float>::Identity.M[2][1],
         fVar32 = UE::Math::TMatrix<float>::Identity.M[2][2],
         fVar33 = UE::Math::TMatrix<float>::Identity.M[2][3],
         fVar34 = UE::Math::TMatrix<float>::Identity.M[3][0],
         fVar35 = UE::Math::TMatrix<float>::Identity.M[3][1],
         fVar36 = UE::Math::TMatrix<float>::Identity.M[3][2],
         fVar37 = UE::Math::TMatrix<float>::Identity.M[3][3],
         fVar5 < (float)((uint)local_168.M[2][2] & uVar24))) {
        FMath::MatrixInverse(&local_128,&local_168);
        fVar38 = local_128.M[0][0];
        fVar39 = local_128.M[0][1];
        fVar40 = local_128.M[0][2];
        fVar25 = local_128.M[0][3];
        fVar26 = local_128.M[1][0];
        fVar27 = local_128.M[1][1];
        fVar28 = local_128.M[1][2];
        fVar29 = local_128.M[1][3];
        fVar30 = local_128.M[2][0];
        fVar31 = local_128.M[2][1];
        fVar32 = local_128.M[2][2];
        fVar33 = local_128.M[2][3];
        fVar34 = local_128.M[3][0];
        fVar35 = local_128.M[3][1];
        fVar36 = local_128.M[3][2];
        fVar37 = local_128.M[3][3];
      }
      local_1a8[0] = fVar38;
      local_1a8[1] = fVar39;
      local_1a8[2] = fVar40;
      local_1a8[3] = fVar25;
      pfVar20 = local_188;
      local_198[0] = fVar26;
      local_198[1] = fVar27;
      local_198[2] = fVar28;
      local_198[3] = fVar29;
      lVar19 = 3;
      local_188[0] = fVar30;
      local_188[1] = fVar31;
      local_188[2] = fVar32;
      local_188[3] = fVar33;
      local_178 = fVar34;
      fStack_174 = fVar35;
      fStack_170 = fVar36;
      fStack_16c = fVar37;
      do {
        fVar38 = pfVar20[-8];
        uVar15 = 0;
        if ((int)(uVar18 - 2) < (pFVar17->DmInverse).ArrayNum) {
          uVar15 = ~(uVar18 - 2) >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar4)();
          return pFVar17;
        }
        *(float *)((pFVar17->DmInverse).AllocatorInstance.Data + lVar21) = fVar38;
        fVar38 = pfVar20[-4];
        uVar15 = 0;
        if ((int)(uVar18 - 1) < (pFVar17->DmInverse).ArrayNum) {
          uVar15 = ~(uVar18 - 1) >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar4)();
          return pFVar17;
        }
        *(float *)((pFVar17->DmInverse).AllocatorInstance.Data + lVar21 + 4) = fVar38;
        fVar38 = *pfVar20;
        uVar15 = 0;
        if ((int)uVar18 < (pFVar17->DmInverse).ArrayNum) {
          uVar15 = ~uVar18 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar4)();
          return pFVar17;
        }
        uVar18 = uVar18 + 3;
        pfVar20 = pfVar20 + 1;
        *(float *)((pFVar17->DmInverse).AllocatorInstance.Data + lVar21 + 8) = fVar38;
        lVar21 = lVar21 + 0xc;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      uVar15 = 0;
      if ((int)uVar23 < (pFVar17->Measure).ArrayNum) {
        uVar15 = uVar22;
      }
      fVar40 = (local_168.M[2][2] * local_168.M[1][1] - local_168.M[2][1] * local_168.M[1][2]) *
               local_168.M[0][0];
      fVar39 = (local_168.M[2][1] * local_168.M[1][0] - local_168.M[2][0] * local_168.M[1][1]) *
               local_168.M[0][2];
      fVar38 = (local_168.M[2][2] * local_168.M[1][0] - local_168.M[2][0] * local_168.M[1][2]) *
               local_168.M[0][1];
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar4)();
        return pFVar17;
      }
      pFVar9 = local_1d8;
      *(float *)((longlong)&local_1d8->_padding_ +
                (longlong)(pFVar17->Measure).AllocatorInstance.Data) =
           ((fVar40 - fVar38) + fVar39) * fVar7;
      uVar15 = 0;
      if ((int)uVar23 < (pFVar17->Measure).ArrayNum) {
        uVar15 = uVar22;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar4)();
        return pFVar17;
      }
      pFVar3 = (FScriptContainerElement *)
               ((longlong)&pFVar9->_padding_ + (longlong)(pFVar17->Measure).AllocatorInstance.Data);
      if (*(float *)pFVar3 <= 0.0 && *(float *)pFVar3 != 0.0) {
        uVar15 = 0;
        if ((int)uVar23 < (pFVar17->Measure).ArrayNum) {
          uVar15 = uVar22;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar4)();
          return pFVar17;
        }
        uVar15 = *(uint *)((longlong)&pFVar9->_padding_ +
                          (longlong)(pFVar17->Measure).AllocatorInstance.Data);
        uVar16 = 0;
        if ((int)uVar23 < (pFVar17->Measure).ArrayNum) {
          uVar16 = uVar22;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          pFVar17 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar4)();
          return pFVar17;
        }
        *(uint *)((longlong)&pFVar9->_padding_ + (longlong)(pFVar17->Measure).AllocatorInstance.Data
                 ) = uVar15 ^ uVar13;
      }
      local_1d8 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)
                  ((longlong)&pFVar9->_padding_ + 4);
      uVar23 = uVar23 + 1;
    } while ((int)uVar23 < local_1b8->ArrayNum);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&pFVar17->DmInverseSave,&pFVar17->DmInverse);
  InitColor(pFVar17,local_1b0);
  return pFVar17;
}

// FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> @ 143a34c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> * __thiscall
Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>
          (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_2,float param_3,
          float *param_4,float *param_5)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *this_01;
  float fVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *pFVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStackY_1f8 [32];
  float local_1b8;
  float local_1b4;
  float local_1b0 [2];
  longlong local_1a8;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *local_1a0;
  FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *local_198;
  FSolverParticles *local_190;
  TArray<float,TSizedDefaultAllocator<32>_> *local_188;
  float local_178 [4];
  float local_168 [4];
  float local_158 [4];
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  TMatrix<float> local_138;
  TMatrix<float> local_f8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  (this->DmInverseSave).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_00 = &this->DmInverse;
  this->_padding_ =
       (longlong)&___7__FXPBDCorotatedConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_;
  pTVar2 = &this->MeshConstraints;
  local_188 = &this->DmInverseSave;
  (this->LambdaArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DmInverseSave).ArrayNum = 0;
  (this->DmInverseSave).ArrayMax = 0;
  piVar1 = &(this->MeshConstraints).ArrayMax;
  (this->LambdaArray).ArrayNum = 0;
  (this->LambdaArray).ArrayMax = 0;
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DmInverse).ArrayNum = 0;
  (this->DmInverse).ArrayMax = 0;
  (this->CorotatedParams).XPBDCorotatedBatchSize = 5;
  (this->CorotatedParams).XPBDCorotatedBatchThreshold = 5;
  (this->CorotatedParams).NumLogExtremeParticle = 0;
  (this->MuElementArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MuElementArray).ArrayNum = 0;
  (this->MuElementArray).ArrayMax = 0;
  (this->LambdaElementArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LambdaElementArray).ArrayNum = 0;
  (this->LambdaElementArray).ArrayMax = 0;
  (this->AlphaJArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AlphaJArray).ArrayNum = 0;
  (this->AlphaJArray).ArrayMax = 0;
  (this->HErrorArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HErrorArray).ArrayNum = 0;
  (this->HErrorArray).ArrayMax = 0;
  this->VariableStiffness = false;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = param_2->ArrayNum;
  pFVar5 = (param_2->AllocatorInstance).Data;
  (this->MeshConstraints).ArrayNum = iVar4;
  local_1a0 = param_2;
  local_198 = this;
  local_190 = param_1;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 4);
  }
  this_01 = &this->Measure;
  (this_01->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Measure).ArrayNum = 0;
  (this->Measure).ArrayMax = 0;
  FSolverParticles::FSolverParticles(&this->RestParticles);
  uVar14 = 0;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  (this->GError).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GError).ArrayNum = 0;
  (this->GError).ArrayMax = 0;
  local_1b8 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->LambdaArray,&local_1b8,(this->MeshConstraints).ArrayNum * 2);
  local_1b4 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (this_00,&local_1b4,(this->MeshConstraints).ArrayNum * 9);
  local_1b0[0] = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (this_01,local_1b0,(this->MeshConstraints).ArrayNum);
  fVar3 = *param_5;
  this->Lambda = (fVar3 * *param_4) /
                 ((__real_3f800000 - (fVar3 + fVar3)) * (fVar3 + __real_3f800000));
  this->Mu = *param_4 / (*param_5 + *param_5 + __real_40000000);
  fVar9 = __real_3e2aaaab;
  uVar8 = __xmm_80000000800000008000000080000000;
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar3 = __real_322bcc77;
  if (0 < local_1a0->ArrayNum) {
    lVar18 = 0;
    local_1a8 = 0;
    uVar15 = 2;
    do {
      DsInit(local_198,(PMatrix<float,3,3> *)&local_138,uVar14,local_190);
      if ((((((fVar3 < (float)((uint)local_138.M[0][0] & uVar7)) ||
             (fVar3 < (float)((uint)local_138.M[0][1] & uVar7))) ||
            (fVar3 < (float)((uint)local_138.M[0][2] & uVar7))) ||
           ((fVar3 < (float)((uint)local_138.M[1][0] & uVar7) ||
            (fVar3 < (float)((uint)local_138.M[1][1] & uVar7))))) ||
          ((fVar3 < (float)((uint)local_138.M[1][2] & uVar7) ||
           ((fVar3 < (float)((uint)local_138.M[2][0] & uVar7) ||
            (fVar3 < (float)((uint)local_138.M[2][1] & uVar7))))))) ||
         (fVar33 = UE::Math::TMatrix<float>::Identity.M[0][0],
         fVar34 = UE::Math::TMatrix<float>::Identity.M[0][1],
         fVar35 = UE::Math::TMatrix<float>::Identity.M[0][2],
         fVar20 = UE::Math::TMatrix<float>::Identity.M[0][3],
         fVar21 = UE::Math::TMatrix<float>::Identity.M[1][0],
         fVar22 = UE::Math::TMatrix<float>::Identity.M[1][1],
         fVar23 = UE::Math::TMatrix<float>::Identity.M[1][2],
         fVar24 = UE::Math::TMatrix<float>::Identity.M[1][3],
         fVar25 = UE::Math::TMatrix<float>::Identity.M[2][0],
         fVar26 = UE::Math::TMatrix<float>::Identity.M[2][1],
         fVar27 = UE::Math::TMatrix<float>::Identity.M[2][2],
         fVar28 = UE::Math::TMatrix<float>::Identity.M[2][3],
         fVar29 = UE::Math::TMatrix<float>::Identity.M[3][0],
         fVar30 = UE::Math::TMatrix<float>::Identity.M[3][1],
         fVar31 = UE::Math::TMatrix<float>::Identity.M[3][2],
         fVar32 = UE::Math::TMatrix<float>::Identity.M[3][3],
         fVar3 < (float)((uint)local_138.M[2][2] & uVar7))) {
        FMath::MatrixInverse(&local_f8,&local_138);
        fVar33 = local_f8.M[0][0];
        fVar34 = local_f8.M[0][1];
        fVar35 = local_f8.M[0][2];
        fVar20 = local_f8.M[0][3];
        fVar21 = local_f8.M[1][0];
        fVar22 = local_f8.M[1][1];
        fVar23 = local_f8.M[1][2];
        fVar24 = local_f8.M[1][3];
        fVar25 = local_f8.M[2][0];
        fVar26 = local_f8.M[2][1];
        fVar27 = local_f8.M[2][2];
        fVar28 = local_f8.M[2][3];
        fVar29 = local_f8.M[3][0];
        fVar30 = local_f8.M[3][1];
        fVar31 = local_f8.M[3][2];
        fVar32 = local_f8.M[3][3];
      }
      local_178[0] = fVar33;
      local_178[1] = fVar34;
      local_178[2] = fVar35;
      local_178[3] = fVar20;
      pfVar17 = local_158;
      local_168[0] = fVar21;
      local_168[1] = fVar22;
      local_168[2] = fVar23;
      local_168[3] = fVar24;
      lVar19 = 3;
      local_158[0] = fVar25;
      local_158[1] = fVar26;
      local_158[2] = fVar27;
      local_158[3] = fVar28;
      local_148 = fVar29;
      fStack_144 = fVar30;
      fStack_140 = fVar31;
      fStack_13c = fVar32;
      do {
        fVar33 = pfVar17[-8];
        uVar11 = 0;
        if ((int)(uVar15 - 2) < (this->DmInverse).ArrayNum) {
          uVar11 = ~(uVar15 - 2) >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar13 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar6)();
          return pFVar13;
        }
        *(float *)((this_00->AllocatorInstance).Data + lVar18) = fVar33;
        fVar33 = pfVar17[-4];
        uVar11 = 0;
        if ((int)(uVar15 - 1) < (this->DmInverse).ArrayNum) {
          uVar11 = ~(uVar15 - 1) >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar13 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar6)();
          return pFVar13;
        }
        *(float *)((this_00->AllocatorInstance).Data + lVar18 + 4) = fVar33;
        fVar33 = *pfVar17;
        uVar11 = 0;
        if ((int)uVar15 < (this->DmInverse).ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar13 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar6)();
          return pFVar13;
        }
        uVar15 = uVar15 + 3;
        pfVar17 = pfVar17 + 1;
        *(float *)((this_00->AllocatorInstance).Data + lVar18 + 8) = fVar33;
        lVar18 = lVar18 + 0xc;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      uVar16 = ~uVar14 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar14 < (this->Measure).ArrayNum) {
        uVar11 = uVar16;
      }
      fVar35 = (local_138.M[2][2] * local_138.M[1][1] - local_138.M[2][1] * local_138.M[1][2]) *
               local_138.M[0][0];
      fVar34 = (local_138.M[2][1] * local_138.M[1][0] - local_138.M[2][0] * local_138.M[1][1]) *
               local_138.M[0][2];
      fVar33 = (local_138.M[2][2] * local_138.M[1][0] - local_138.M[2][0] * local_138.M[1][2]) *
               local_138.M[0][1];
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar13 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar6)();
        return pFVar13;
      }
      lVar19 = local_1a8;
      *(float *)((this_01->AllocatorInstance).Data + local_1a8) =
           ((fVar35 - fVar33) + fVar34) * fVar9;
      uVar11 = 0;
      if ((int)uVar14 < (this->Measure).ArrayNum) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar13 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar6)();
        return pFVar13;
      }
      pFVar5 = (this_01->AllocatorInstance).Data + lVar19;
      if (*(float *)pFVar5 <= 0.0 && *(float *)pFVar5 != 0.0) {
        uVar11 = 0;
        if ((int)uVar14 < (this->Measure).ArrayNum) {
          uVar11 = uVar16;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar13 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar6)();
          return pFVar13;
        }
        uVar11 = *(uint *)((this_01->AllocatorInstance).Data + lVar19);
        uVar12 = 0;
        if ((int)uVar14 < (this->Measure).ArrayNum) {
          uVar12 = uVar16;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar13 = (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar6)();
          return pFVar13;
        }
        *(uint *)((this_01->AllocatorInstance).Data + lVar19) = uVar11 ^ uVar8;
      }
      local_1a8 = lVar19 + 4;
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < local_1a0->ArrayNum);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(local_188,this_00);
  return local_198;
}

// ~FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> @ 143a38d20

void __thiscall
Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
~FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>
          (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ =
       (longlong)&___7__FXPBDCorotatedConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_;
  pFVar1 = (this->GError).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)&(this->RestParticles).MPAndInvM =
       &___7__TArrayCollectionArray_UFPAndInvM_Softs_Chaos___Chaos__6B_;
  pvVar2 = *(void **)&(this->RestParticles).MPAndInvM.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TDynamicParticles<float,3>::~TDynamicParticles<float,3>
            ((TDynamicParticles<float,3> *)&this->RestParticles);
  pFVar1 = (this->Measure).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MeshConstraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HErrorArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AlphaJArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LambdaElementArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MuElementArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DmInverseSave).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DmInverse).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LambdaArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 143a42d80

void __thiscall
`Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel'::
__l11::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = 0;
  plVar1 = *(longlong **)this;
  if (0 < (int)plVar1[7]) {
    do {
      if (param_1 * (int)plVar1[7] + **(int **)((longlong)this + 8) + iVar2 <
          **(int **)((longlong)this + 0x10) + **(int **)((longlong)this + 8)) {
        (**(code **)(*plVar1 + 0x10))
                  (plVar1,*(undefined8 *)((longlong)this + 0x18),
                   **(undefined4 **)((longlong)this + 0x20));
      }
      plVar1 = *(longlong **)this;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)plVar1[7]);
  }
  return;
}

// ApplyInParallel @ 143a4e580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel
          (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,float param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_ChaosXPBDCorotated> FVar11;
  int iVar12;
  uint uVar13;
  FName FVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  float local_res18 [2];
  int local_res20 [2];
  float local_b8;
  float local_b4;
  FColor_u_0 local_b0;
  int local_ac;
  FName local_a8;
  FName local_a0;
  FName local_98;
  code *local_88;
  FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> **local_80;
  FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *local_78;
  int *local_70;
  int *local_68;
  FSolverParticles *local_60;
  float *local_58;
  FName local_50 [2];
  
  local_res18[0] = param_2;
  if (this->bRecordMetric != false) {
    local_b8 = 0.0;
    TArray<float,TSizedDefaultAllocator<32>_>::Init
              (&this->GError,&local_b8,(int)param_1->_padding_ * 3);
    local_b4 = 0.0;
    TArray<float,TSizedDefaultAllocator<32>_>::Init
              (&this->HErrorArray,&local_b4,(this->MeshConstraints).ArrayNum * 2);
  }
  uVar15 = 0;
  FVar11 = StatPtr_STAT_ChaosXPBDCorotated;
  if (StatPtr_STAT_ChaosXPBDCorotated == (FThreadSafeStaticStat<FStat_STAT_ChaosXPBDCorotated>)0x0)
  {
    pFVar10 = ::FName::FName(local_50,"STAT_ChaosXPBDCorotated");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_ChaosXPBDCorotated>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosXPBDCorotated,*pFVar10,
                        L"Chaos XPBD Corotated Constraint","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  if ((FVar14.ComparisonIndex.Value.Value != 0) || (FVar14.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b0._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_a8.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDCorotatedConstraints.h"
                   ,0x134);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_a0 = FVar14;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar5 = true;
      goto LAB_143a4e722;
    }
  }
  bVar5 = false;
  local_a0 = local_98;
  FVar14 = local_98;
LAB_143a4e722:
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
                ::__l6::__CpuProfilerEventSpecId309,"STAT_ChaosXPBDCorotatedApply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDCorotatedConstraints.h"
               ,0x135);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
               ::__l6::__CpuProfilerEventSpecId309);
  }
  iVar8 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  if ((1 < iVar8) && (iVar8 = iVar8 + -1, uVar16 = uVar15, 0 < iVar8)) {
    do {
      uVar13 = (uint)uVar16;
      uVar9 = 0;
      if ((int)uVar13 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar13 = uVar13 + 1;
      local_res20[0] =
           *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + uVar15 * 4);
      uVar9 = 0;
      if ((int)uVar13 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_88 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel'::__l11::<lambda_1>,void,int>
                 ::Call;
      local_ac = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                         uVar15 * 4 + 4) - local_res20[0];
      iVar1 = (this->CorotatedParams).XPBDCorotatedBatchSize;
      iVar3 = local_ac / iVar1;
      iVar12 = iVar3 + 1;
      if (local_ac % iVar1 == 0) {
        iVar12 = iVar3;
      }
      local_70 = local_res20;
      local_68 = &local_ac;
      local_58 = local_res18;
      local_80 = &local_78;
      local_78 = this;
      local_60 = param_1;
      PhysicsParallelFor(iVar12,(TFunctionRef<void___cdecl(int)> *)&local_88,
                         iVar12 < (this->CorotatedParams).XPBDCorotatedBatchThreshold);
      uVar15 = uVar15 + 1;
      FVar14 = local_a0;
      uVar16 = (ulonglong)uVar13;
    } while ((longlong)uVar15 < (longlong)iVar8);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  return;
}

// ApplyInSerial @ 143a4f110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInSerial
          (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,float param_2,int param_3)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  undefined1 local_d8 [8];
  float local_d0 [10];
  undefined1 local_a8 [8];
  float local_a0 [10];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_118;
  lVar12 = (longlong)param_3;
  if (CpuChannel->Enabled < 0) {
    local_e8 = '\0';
  }
  else {
    local_e8 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInSerial(Chaos::Softs::FSolverParticles&___ptr64,float,int)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId261,"STAT_ChaosXPBDCorotatedApplySingle",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDCorotatedConstraints.h"
               ,0x105);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInSerial(Chaos::Softs::FSolverParticles&___ptr64,float,int)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId261);
  }
  uVar5 = __real_3a83126f;
  local_f0 = CONCAT44(local_f0._4_4_,__real_3a83126f);
  local_f8 = CONCAT44(local_f8._4_4_,param_3);
  (**(code **)(this->_padding_ + 0x20))(this,local_d8,param_1,param_2);
  pfVar10 = local_d0;
  local_e0 = lVar12 << 4;
  lVar13 = 0;
  do {
    lVar11 = local_e0;
    iVar2 = (this->MeshConstraints).ArrayNum;
    uVar8 = 0;
    if (param_3 < iVar2) {
      uVar8 = (uint)~param_3 >> 0x1f;
    }
    if (uVar8 == 0) {
      local_f8 = lVar12;
      local_f0 = (longlong)iVar2;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar2 = *(int *)&(param_1->MPAndInvM).field_0x10;
    uVar8 = *(uint *)((this->MeshConstraints).AllocatorInstance.Data + lVar13 + lVar11);
    lVar11 = (longlong)(int)uVar8;
    uVar9 = 0;
    if ((int)uVar8 < iVar2) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_f8 = lVar11;
      local_f0 = (longlong)iVar2;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar3 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
    lVar13 = lVar13 + 4;
    *(float *)(lVar3 + lVar11 * 0x10) = pfVar10[-2] + *(float *)(lVar3 + lVar11 * 0x10);
    *(float *)(lVar3 + 4 + lVar11 * 0x10) = pfVar10[-1] + *(float *)(lVar3 + 4 + lVar11 * 0x10);
    fVar1 = *pfVar10;
    pfVar10 = pfVar10 + 3;
    *(float *)(lVar3 + 8 + lVar11 * 0x10) = *(float *)(lVar3 + 8 + lVar11 * 0x10) + fVar1;
  } while (lVar13 < 0x10);
  local_f0 = CONCAT44(local_f0._4_4_,uVar5);
  local_f8 = CONCAT44(local_f8._4_4_,param_3);
  (**(code **)(this->_padding_ + 0x18))(this,local_a8,param_1,param_2);
  cVar6 = local_e8;
  pfVar10 = local_a0;
  lVar13 = 0;
  do {
    iVar2 = (this->MeshConstraints).ArrayNum;
    uVar8 = 0;
    if (param_3 < iVar2) {
      uVar8 = (uint)~param_3 >> 0x1f;
    }
    if (uVar8 == 0) {
      local_f8 = lVar12;
      local_f0 = (longlong)iVar2;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar2 = *(int *)&(param_1->MPAndInvM).field_0x10;
    uVar8 = *(uint *)((this->MeshConstraints).AllocatorInstance.Data + local_e0 + lVar13);
    lVar11 = (longlong)(int)uVar8;
    uVar9 = 0;
    if ((int)uVar8 < iVar2) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_f8 = lVar11;
      local_f0 = (longlong)iVar2;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar3 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
    lVar13 = lVar13 + 4;
    *(float *)(lVar3 + lVar11 * 0x10) = pfVar10[-2] + *(float *)(lVar3 + lVar11 * 0x10);
    *(float *)(lVar3 + 4 + lVar11 * 0x10) = pfVar10[-1] + *(float *)(lVar3 + 4 + lVar11 * 0x10);
    fVar1 = *pfVar10;
    pfVar10 = pfVar10 + 3;
    *(float *)(lVar3 + 8 + lVar11 * 0x10) = *(float *)(lVar3 + 8 + lVar11 * 0x10) + fVar1;
  } while (lVar13 < 0x10);
  if (cVar6 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Ds @ 143a65780

PMatrix<float,3,3> * __thiscall
Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::Ds
          (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          PMatrix<float,3,3> *__return_storage_ptr__,int param_1,FSolverParticles *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  PMatrix<float,3,3> *pPVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_48;
  PMatrix<float,3,3> *local_40;
  longlong local_38;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  lVar10 = 1;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0x3f800000;
  local_38 = 3;
  local_40 = __return_storage_ptr__;
  local_48 = (longlong)param_1 * 0x10;
  do {
    local_48 = local_48 + 4;
    lVar9 = 0;
    do {
      uVar5 = 0;
      if (param_1 < (this->MeshConstraints).ArrayNum) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pPVar8 = (PMatrix<float,3,3> *)(*pcVar3)();
        return pPVar8;
      }
      pFVar1 = (this->MeshConstraints).AllocatorInstance.Data;
      if (lVar10 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                           ,0x90,L"");
        if (bVar4) {
code_r0x000143a658e1:
          pcVar3 = (code *)swi(3);
          pPVar8 = (PMatrix<float,3,3> *)(*pcVar3)();
          return pPVar8;
        }
      }
      else if ((3 < lVar10) &&
              (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < NumElements",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                  ,0x91,L""), bVar4)) goto code_r0x000143a658e1;
      uVar5 = *(uint *)(pFVar1 + local_48);
      uVar6 = 0;
      if ((int)uVar5 < *(int *)&(param_2->MPAndInvM).field_0x10) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pPVar8 = (PMatrix<float,3,3> *)(*pcVar3)();
        return pPVar8;
      }
      lVar2 = *(longlong *)&(param_2->MPAndInvM).field_0x8;
      uVar6 = 0;
      if (param_1 < (this->MeshConstraints).ArrayNum) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pPVar8 = (PMatrix<float,3,3> *)(*pcVar3)();
        return pPVar8;
      }
      uVar6 = *(uint *)((this->MeshConstraints).AllocatorInstance.Data + (longlong)param_1 * 0x10);
      uVar7 = 0;
      if ((int)uVar6 < *(int *)&(param_2->MPAndInvM).field_0x10) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pPVar8 = (PMatrix<float,3,3> *)(*pcVar3)();
        return pPVar8;
      }
      *(float *)(&local_40->field_0x0 + lVar9) =
           *(float *)(lVar9 + (longlong)(int)uVar5 * 0x10 + lVar2) -
           *(float *)((longlong)(int)uVar6 * 0x10 + lVar9 +
                     *(longlong *)&(param_2->MPAndInvM).field_0x8);
      lVar9 = lVar9 + 4;
    } while (lVar9 < 0xc);
    local_40 = (PMatrix<float,3,3> *)&local_40->field_0x10;
    lVar10 = lVar10 + 1;
    local_38 = local_38 + -1;
    if (local_38 == 0) {
      return __return_storage_ptr__;
    }
  } while( true );
}

// DsInit @ 143a65c70

PMatrix<float,3,3> * __thiscall
Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::DsInit
          (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          PMatrix<float,3,3> *__return_storage_ptr__,int param_1,FSolverParticles *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  PMatrix<float,3,3> *pPVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  PMatrix<float,3,3> *local_40;
  longlong local_38;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  lVar11 = 1;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0x3f800000;
  local_38 = 3;
  local_40 = __return_storage_ptr__;
  lVar10 = (longlong)param_1 * 0x10;
  do {
    lVar10 = lVar10 + 4;
    lVar9 = 0;
    do {
      uVar5 = 0;
      if (param_1 < (this->MeshConstraints).ArrayNum) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pPVar8 = (PMatrix<float,3,3> *)(*pcVar3)();
        return pPVar8;
      }
      pFVar1 = (this->MeshConstraints).AllocatorInstance.Data;
      if (lVar11 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                           ,0x90,L"");
        if (bVar4) {
code_r0x000143a65dd1:
          pcVar3 = (code *)swi(3);
          pPVar8 = (PMatrix<float,3,3> *)(*pcVar3)();
          return pPVar8;
        }
      }
      else if ((3 < lVar11) &&
              (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < NumElements",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                  ,0x91,L""), bVar4)) goto code_r0x000143a65dd1;
      uVar5 = *(uint *)(pFVar1 + lVar10);
      uVar6 = 0;
      if ((int)uVar5 < (int)param_2->_padding_) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pPVar8 = (PMatrix<float,3,3> *)(*pcVar3)();
        return pPVar8;
      }
      lVar2 = param_2->_padding_;
      uVar6 = 0;
      if (param_1 < (this->MeshConstraints).ArrayNum) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pPVar8 = (PMatrix<float,3,3> *)(*pcVar3)();
        return pPVar8;
      }
      uVar6 = *(uint *)((this->MeshConstraints).AllocatorInstance.Data + (longlong)param_1 * 0x10);
      uVar7 = 0;
      if ((int)uVar6 < (int)param_2->_padding_) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pPVar8 = (PMatrix<float,3,3> *)(*pcVar3)();
        return pPVar8;
      }
      *(float *)(&local_40->field_0x0 + lVar9) =
           *(float *)(lVar9 + lVar2 + (longlong)(int)uVar5 * 0xc) -
           *(float *)(lVar9 + (longlong)(int)uVar6 * 0xc + param_2->_padding_);
      lVar9 = lVar9 + 4;
    } while (lVar9 < 0xc);
    local_40 = (PMatrix<float,3,3> *)&local_40->field_0x10;
    lVar11 = lVar11 + 1;
    local_38 = local_38 + -1;
    if (local_38 == 0) {
      return __return_storage_ptr__;
    }
  } while( true );
}

// ElementDmInv @ 143a65f50

PMatrix<float,3,3> * __thiscall
Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ElementDmInv
          (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          PMatrix<float,3,3> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  PMatrix<float,3,3> *pPVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  puVar8 = (undefined4 *)&__return_storage_ptr__->field_0x20;
  *(undefined8 *)__return_storage_ptr__ = 0;
  uVar7 = param_1 * 9 + 2;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *puVar8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x24 = 0;
  lVar9 = (longlong)param_1 * 0x24;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  lVar10 = 3;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0x3f800000;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0;
  do {
    uVar5 = 0;
    if ((int)(uVar7 - 2) < (this->DmInverse).ArrayNum) {
      uVar5 = ~(uVar7 - 2) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pPVar6 = (PMatrix<float,3,3> *)(*pcVar3)();
        return pPVar6;
      }
    }
    iVar2 = (this->DmInverse).ArrayNum;
    puVar8[-8] = *(undefined4 *)((this->DmInverse).AllocatorInstance.Data + lVar9);
    uVar5 = 0;
    if ((int)(uVar7 - 1) < iVar2) {
      uVar5 = ~(uVar7 - 1) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pPVar6 = (PMatrix<float,3,3> *)(*pcVar3)();
        return pPVar6;
      }
    }
    iVar2 = (this->DmInverse).ArrayNum;
    puVar8[-4] = *(undefined4 *)((this->DmInverse).AllocatorInstance.Data + lVar9 + 4);
    uVar5 = 0;
    if ((int)uVar7 < iVar2) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pPVar6 = (PMatrix<float,3,3> *)(*pcVar3)();
        return pPVar6;
      }
    }
    uVar7 = uVar7 + 3;
    lVar1 = lVar9 + 8;
    lVar9 = lVar9 + 0xc;
    *puVar8 = *(undefined4 *)((this->DmInverse).AllocatorInstance.Data + lVar1);
    puVar8 = puVar8 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return __return_storage_ptr__;
}

// ElementDmInvSave @ 143a66110

PMatrix<float,3,3> * __thiscall
Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ElementDmInvSave
          (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          PMatrix<float,3,3> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  PMatrix<float,3,3> *pPVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  puVar8 = (undefined4 *)&__return_storage_ptr__->field_0x20;
  *(undefined8 *)__return_storage_ptr__ = 0;
  uVar7 = param_1 * 9 + 2;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *puVar8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x24 = 0;
  lVar9 = (longlong)param_1 * 0x24;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  lVar10 = 3;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0x3f800000;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0;
  do {
    uVar5 = 0;
    if ((int)(uVar7 - 2) < (this->DmInverseSave).ArrayNum) {
      uVar5 = ~(uVar7 - 2) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pPVar6 = (PMatrix<float,3,3> *)(*pcVar3)();
        return pPVar6;
      }
    }
    iVar2 = (this->DmInverseSave).ArrayNum;
    puVar8[-8] = *(undefined4 *)((this->DmInverseSave).AllocatorInstance.Data + lVar9);
    uVar5 = 0;
    if ((int)(uVar7 - 1) < iVar2) {
      uVar5 = ~(uVar7 - 1) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pPVar6 = (PMatrix<float,3,3> *)(*pcVar3)();
        return pPVar6;
      }
    }
    iVar2 = (this->DmInverseSave).ArrayNum;
    puVar8[-4] = *(undefined4 *)((this->DmInverseSave).AllocatorInstance.Data + lVar9 + 4);
    uVar5 = 0;
    if ((int)uVar7 < iVar2) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pPVar6 = (PMatrix<float,3,3> *)(*pcVar3)();
        return pPVar6;
      }
    }
    uVar7 = uVar7 + 3;
    lVar1 = lVar9 + 8;
    lVar9 = lVar9 + 0xc;
    *puVar8 = *(undefined4 *)((this->DmInverseSave).AllocatorInstance.Data + lVar1);
    puVar8 = puVar8 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return __return_storage_ptr__;
}

// GetDeterminantDelta @ 143a6a370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<Chaos::TVector<float,3>,4> * __thiscall
Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::GetDeterminantDelta
          (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          TVector<Chaos::TVector<float,3>,4> *__return_storage_ptr__,FSolverParticles *param_1,
          float param_2,int param_3,float param_4)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TVector<float,3> *pTVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  PMatrix<float,3,3> *pPVar9;
  PMatrix<float,3,3> *pPVar10;
  TVector<Chaos::TVector<float,3>,4> *pTVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  float *pfVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_308 [32];
  longlong local_2e8;
  longlong local_2e0;
  char local_2d8;
  uint local_2d4;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  TVector<Chaos::TVector<float,3>,4> *local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  TVector<Chaos::TVector<float,3>,4> local_278;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218 [2];
  float afStack_210 [2];
  PMatrix<float,3,3> local_208;
  TMatrix<float> local_1c8;
  PMatrix<float,3,3> local_188;
  PMatrix<float,3,3> local_148;
  PMatrix<float,3,3> local_108;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_308;
  lVar15 = (longlong)param_3;
  bVar20 = CpuChannel->Enabled < 0;
  local_2b0 = __return_storage_ptr__;
  if (bVar20) {
    local_2d8 = '\0';
  }
  else {
    local_2d8 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`protected:_virtual_class_Chaos::TVector<Chaos::TVector<float,3>,4>___cdecl_Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::GetDeterminantDelta(Chaos::Softs::FSolverParticles_const&___ptr64,float,int,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId496,"STAT_ChaosXPBDCorotatedApplyDet",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDCorotatedConstraints.h"
               ,0x1f0);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_virtual_class_Chaos::TVector<Chaos::TVector<float,3>,4>___cdecl_Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::GetDeterminantDelta(Chaos::Softs::FSolverParticles_const&___ptr64,float,int,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId496);
  }
  pPVar9 = ElementDmInv(this,&local_188,param_3);
  pPVar10 = Ds(this,&local_148,param_3,param_1);
  VectorMatrixMultiply(&local_1c8,(TMatrix<float> *)pPVar9,(TMatrix<float> *)pPVar10);
  local_218[0] = local_1c8.M[3][0];
  local_218[1] = local_1c8.M[3][1];
  afStack_210[0] = local_1c8.M[3][2];
  afStack_210[1] = local_1c8.M[3][3];
  local_248 = local_1c8.M[0][0];
  fStack_244 = local_1c8.M[0][1];
  fStack_240 = local_1c8.M[0][2];
  fStack_23c = local_1c8.M[0][3];
  local_238 = local_1c8.M[1][0];
  fStack_234 = local_1c8.M[1][1];
  fStack_230 = local_1c8.M[1][2];
  fStack_22c = local_1c8.M[1][3];
  local_228 = local_1c8.M[2][0];
  fStack_224 = local_1c8.M[2][1];
  fStack_220 = local_1c8.M[2][2];
  fStack_21c = local_1c8.M[2][3];
  pPVar9 = ElementDmInv(this,&local_108,param_3);
  uVar17 = (uint)~param_3 >> 0x1f;
  local_208._4_4_ = *(undefined4 *)&pPVar9->field_0x10;
  local_208._16_4_ = *(undefined4 *)&pPVar9->field_0x4;
  local_208._36_4_ = *(undefined4 *)&pPVar9->field_0x18;
  local_208._20_4_ = *(undefined4 *)&pPVar9->field_0x14;
  local_208._32_4_ = *(undefined4 *)&pPVar9->field_0x8;
  local_208._0_4_ = *(undefined4 *)pPVar9;
  local_208._40_4_ = *(undefined4 *)&pPVar9->field_0x28;
  local_208._24_4_ = *(undefined4 *)&pPVar9->field_0x24;
  local_208._8_4_ = *(undefined4 *)&pPVar9->field_0x20;
  local_208._48_8_ = ___xmm_3f800000000000000000000000000000;
  local_208._56_8_ = _UNK_150689648;
  local_208._12_4_ = 0;
  local_208._28_4_ = 0;
  local_208._44_4_ = 0;
  fVar24 = ((local_1c8.M[2][2] * local_1c8.M[1][1] - local_1c8.M[1][2] * local_1c8.M[2][1]) *
            local_1c8.M[0][0] -
           (local_1c8.M[1][0] * local_1c8.M[2][2] - local_1c8.M[2][0] * local_1c8.M[1][2]) *
           local_1c8.M[0][1]) +
           (local_1c8.M[1][0] * local_1c8.M[2][1] - local_1c8.M[2][0] * local_1c8.M[1][1]) *
           local_1c8.M[0][2];
  iVar16 = (this->AlphaJArray).ArrayNum;
  uVar7 = 0;
  if (param_3 < iVar16) {
    uVar7 = uVar17;
  }
  local_2c8 = CONCAT44(local_2c8._4_4_,uVar17);
  if ((uVar7 == 0) &&
     (local_2e8 = lVar15, local_2e0 = (longlong)iVar16,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar6
     )) {
    pcVar3 = (code *)swi(3);
    pTVar11 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
    return pTVar11;
  }
  if (param_4 <= fVar24 - *(float *)((this->AlphaJArray).AllocatorInstance.Data + lVar15 * 4)) {
    GetDeterminantGradient(this,&local_278,(PMatrix<float,3,3> *)&local_248,&local_208);
    iVar16 = (this->Measure).ArrayNum;
    uVar7 = 0;
    if (param_3 < iVar16) {
      uVar7 = uVar17;
    }
    if ((uVar7 == 0) &&
       (local_2e8 = lVar15, local_2e0 = (longlong)iVar16,
       bVar20 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
      return pTVar11;
    }
    iVar16 = (this->LambdaElementArray).ArrayNum;
    pFVar2 = (this->Measure).AllocatorInstance.Data;
    uVar7 = 0;
    if (param_3 < iVar16) {
      uVar7 = uVar17;
    }
    if ((uVar7 == 0) &&
       (local_2e8 = lVar15, local_2e0 = (longlong)iVar16,
       bVar20 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
      return pTVar11;
    }
    iVar16 = (this->LambdaElementArray).ArrayNum;
    uVar7 = 0;
    if (param_3 < iVar16) {
      uVar7 = uVar17;
    }
    fVar22 = __real_40000000 /
             (param_2 * *(float *)((this->LambdaElementArray).AllocatorInstance.Data + lVar15 * 4) *
             param_2 * *(float *)(pFVar2 + lVar15 * 4));
    if ((uVar7 == 0) &&
       (local_2e8 = lVar15, local_2e0 = (longlong)iVar16,
       bVar20 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
      return pTVar11;
    }
    if (__real_4cbebc20 < *(float *)((this->LambdaElementArray).AllocatorInstance.Data + lVar15 * 4)
       ) {
      fVar22 = 0.0;
    }
    if (this->bRecordMetric != false) {
      iVar16 = (this->LambdaArray).ArrayNum;
      uVar17 = param_3 * 2 + 1;
      local_2d4 = ~uVar17 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar17 < iVar16) {
        uVar7 = local_2d4;
      }
      if (uVar7 == 0) {
        local_2e8 = (longlong)(int)uVar17;
        local_2e0 = (longlong)iVar16;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar20) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
          return pTVar11;
        }
      }
      pTVar11 = &local_278;
      lVar14 = (longlong)(int)uVar17;
      fVar23 = fVar24 - __real_3f800000;
      local_2b8 = lVar15 << 4;
      lVar12 = 0;
      this->HError = fVar22 * *(float *)((this->LambdaArray).AllocatorInstance.Data + lVar14 * 4) +
                     fVar23 + this->HError;
      do {
        iVar16 = 0;
        local_2d0 = 3;
        do {
          iVar18 = (this->LambdaArray).ArrayNum;
          uVar7 = 0;
          if ((int)uVar17 < iVar18) {
            uVar7 = local_2d4;
          }
          if ((uVar7 == 0) &&
             (local_2e8 = lVar14, local_2e0 = (longlong)iVar18,
             bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar3 = (code *)swi(3);
            pTVar11 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
            return pTVar11;
          }
          iVar18 = (this->MeshConstraints).ArrayNum;
          fVar21 = *(float *)((this->LambdaArray).AllocatorInstance.Data + lVar15 * 8 + 4);
          fVar1 = *(float *)pTVar11->V;
          iVar8 = 0;
          if (param_3 < iVar18) {
            iVar8 = (int)local_2c8;
          }
          if ((iVar8 == 0) &&
             (local_2e8 = lVar15, local_2e0 = (longlong)iVar18,
             bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar3 = (code *)swi(3);
            pTVar11 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
            return pTVar11;
          }
          uVar13 = *(int *)((this->MeshConstraints).AllocatorInstance.Data + local_2b8 + lVar12) * 3
                   + iVar16;
          iVar18 = (this->GError).ArrayNum;
          uVar7 = 0;
          if ((int)uVar13 < iVar18) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if (uVar7 == 0) {
            local_2e8 = (longlong)(int)uVar13;
            local_2e0 = (longlong)iVar18;
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar3 = (code *)swi(3);
              pTVar11 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
              return pTVar11;
            }
          }
          uVar7 = local_2d4;
          pFVar2 = (this->GError).AllocatorInstance.Data;
          iVar16 = iVar16 + 1;
          pTVar11 = (TVector<Chaos::TVector<float,3>,4> *)&pTVar11->V[0].field_0x4;
          local_2d0 = local_2d0 + -1;
          uVar17 = param_3 * 2 + 1;
          lVar14 = (longlong)(int)uVar17;
          *(float *)(pFVar2 + (longlong)(int)uVar13 * 4) =
               *(float *)(pFVar2 + (longlong)(int)uVar13 * 4) - fVar21 * fVar1;
        } while (local_2d0 != 0);
        lVar12 = lVar12 + 4;
        uVar17 = param_3 * 2 + 1;
        lVar14 = (longlong)(int)uVar17;
      } while (lVar12 < 0x10);
      iVar16 = (this->LambdaArray).ArrayNum;
      iVar18 = param_3 * 2 + 1;
      lVar12 = (longlong)iVar18;
      uVar17 = 0;
      if (iVar18 < iVar16) {
        uVar17 = local_2d4;
      }
      if ((uVar17 == 0) &&
         (local_2e8 = lVar12, local_2e0 = (longlong)iVar16,
         bVar20 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar3 = (code *)swi(3);
        pTVar11 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
        return pTVar11;
      }
      iVar16 = (this->HErrorArray).ArrayNum;
      fVar21 = *(float *)((this->LambdaArray).AllocatorInstance.Data + lVar12 * 4);
      uVar17 = 0;
      if (iVar18 < iVar16) {
        uVar17 = uVar7;
      }
      if ((uVar17 == 0) &&
         (local_2e8 = lVar12, local_2e0 = (longlong)iVar16,
         bVar20 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar3 = (code *)swi(3);
        pTVar11 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
        return pTVar11;
      }
      *(float *)((this->HErrorArray).AllocatorInstance.Data + lVar12 * 4) = fVar22 * fVar21 + fVar23
      ;
    }
    iVar16 = (this->LambdaArray).ArrayNum;
    uVar17 = param_3 * 2 + 1;
    uVar7 = 0;
    if ((int)uVar17 < iVar16) {
      uVar7 = ~uVar17 >> 0x1f;
    }
    if (uVar7 == 0) {
      local_2e8 = (longlong)(int)uVar17;
      local_2e0 = (longlong)iVar16;
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar20) {
        pcVar3 = (code *)swi(3);
        pTVar11 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
        return pTVar11;
      }
    }
    iVar16 = (this->AlphaJArray).ArrayNum;
    pFVar2 = (this->LambdaArray).AllocatorInstance.Data;
    uVar7 = 0;
    if (param_3 < iVar16) {
      uVar7 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (local_2e8 = lVar15, local_2e0 = (longlong)iVar16,
       bVar20 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
      return pTVar11;
    }
    fVar21 = fVar22 * *(float *)(pFVar2 + (longlong)(int)uVar17 * 4);
    local_2d0 = lVar15 << 4;
    pTVar11 = &local_278;
    fVar23 = *(float *)((this->AlphaJArray).AllocatorInstance.Data + lVar15 * 4);
    local_2d4 = (uint)~param_3 >> 0x1f;
    lVar12 = 0;
    do {
      lVar14 = 3;
      do {
        lVar5 = local_2d0;
        iVar16 = (this->MeshConstraints).ArrayNum;
        uVar7 = 0;
        if (param_3 < iVar16) {
          uVar7 = local_2d4;
        }
        if ((uVar7 == 0) &&
           (local_2e8 = lVar15, local_2e0 = (longlong)iVar16,
           bVar20 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar20)) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
          return pTVar11;
        }
        iVar16 = (int)param_1->_padding_;
        uVar7 = *(uint *)((this->MeshConstraints).AllocatorInstance.Data + lVar5 + lVar12);
        uVar17 = 0;
        if ((int)uVar7 < iVar16) {
          uVar17 = ~uVar7 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_2e8 = (longlong)(int)uVar7, local_2e0 = (longlong)iVar16,
           bVar20 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar20)) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
          return pTVar11;
        }
        pTVar4 = pTVar11->V;
        pTVar11 = (TVector<Chaos::TVector<float,3>,4> *)&pTVar11->V[0].field_0x4;
        fVar22 = fVar22 + *(float *)pTVar4 *
                          *(float *)(param_1->_padding_ + (longlong)(int)uVar7 * 4) *
                          *(float *)pTVar4;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      lVar12 = lVar12 + 4;
    } while (lVar12 < 0x10);
    iVar16 = (this->LambdaArray).ArrayNum;
    uVar17 = param_3 * 2 + 1;
    fVar22 = ((fVar23 - fVar24) - fVar21) / fVar22;
    uVar7 = 0;
    if ((int)uVar17 < iVar16) {
      uVar7 = ~uVar17 >> 0x1f;
    }
    if (uVar7 == 0) {
      local_2e8 = (longlong)(int)uVar17;
      local_2e0 = (longlong)iVar16;
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar20) {
        pcVar3 = (code *)swi(3);
        pTVar11 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
        return pTVar11;
      }
    }
    pFVar2 = (this->LambdaArray).AllocatorInstance.Data;
    local_2c8 = 0;
    local_2d4 = (uint)~param_3 >> 0x1f;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_288 = 0;
    uStack_280 = 0;
    *(float *)(pFVar2 + (longlong)(int)uVar17 * 4) =
         fVar22 + *(float *)(pFVar2 + (longlong)(int)uVar17 * 4);
    local_298 = 0;
    uStack_290 = 0;
    local_2d0 = 0;
    do {
      pfVar19 = (float *)((longlong)&local_2a8 + local_2d0);
      local_2c0 = (longlong)&local_278 + (local_2d0 - (longlong)pfVar19);
      lVar12 = 3;
      do {
        lVar14 = local_2c8;
        iVar16 = (this->MeshConstraints).ArrayNum;
        uVar7 = 0;
        if (param_3 < iVar16) {
          uVar7 = local_2d4;
        }
        if ((uVar7 == 0) &&
           (local_2e8 = lVar15, local_2e0 = (longlong)iVar16,
           bVar20 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar20)) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
          return pTVar11;
        }
        iVar16 = (int)param_1->_padding_;
        uVar7 = *(uint *)((this->MeshConstraints).AllocatorInstance.Data + lVar14 + lVar15 * 0x10);
        uVar17 = 0;
        if ((int)uVar7 < iVar16) {
          uVar17 = ~uVar7 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_2e8 = (longlong)(int)uVar7, local_2e0 = (longlong)iVar16,
           bVar20 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar20)) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
          return pTVar11;
        }
        __return_storage_ptr__ = local_2b0;
        *pfVar19 = *(float *)(param_1->_padding_ + (longlong)(int)uVar7 * 4) *
                   *(float *)((longlong)pfVar19 + local_2c0) * fVar22;
        pfVar19 = pfVar19 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      local_2c8 = local_2c8 + 4;
      local_2d0 = local_2d0 + 0xc;
    } while (local_2c8 < 0x10);
    *(undefined8 *)local_2b0->V = local_2a8;
    *(undefined8 *)&local_2b0->V[0].field_0x8 = uStack_2a0;
    *(undefined8 *)&local_2b0->V[1].field_0x4 = local_298;
    *(undefined8 *)(local_2b0->V + 2) = uStack_290;
    *(undefined8 *)&local_2b0->V[2].field_0x8 = local_288;
    *(undefined8 *)&local_2b0->V[3].field_0x4 = uStack_280;
    if (local_2d8 != '\0') {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    *(undefined8 *)__return_storage_ptr__->V = 0;
    *(undefined8 *)&__return_storage_ptr__->V[0].field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->V[1].field_0x4 = 0;
    *(undefined8 *)(__return_storage_ptr__->V + 2) = 0;
    *(undefined8 *)&__return_storage_ptr__->V[2].field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->V[3].field_0x4 = 0;
    if (!bVar20) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return __return_storage_ptr__;
}

// GetDeterminantGradient @ 143a6ae50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<Chaos::TVector<float,3>,4> * __thiscall
Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
GetDeterminantGradient
          (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          TVector<Chaos::TVector<float,3>,4> *__return_storage_ptr__,PMatrix<float,3,3> *param_1,
          PMatrix<float,3,3> *param_2)

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
  code *pcVar10;
  bool bVar11;
  TVector<Chaos::TVector<float,3>,4> *pTVar12;
  char *pcVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_198 [48];
  float local_168 [8];
  float local_148 [4];
  float local_138 [2];
  float afStack_130 [2];
  TMatrix<float> local_128;
  TMatrix<float> local_e8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_198;
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_class_Chaos::TVector<Chaos::TVector<float,3>,4>___cdecl_Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::GetDeterminantGradient(Chaos::PMatrix<float,3,3>_const&___ptr64,Chaos::PMatrix<float,3,3>_const&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId375,"STAT_ChaosXPBDCorotatedGetDetGradient",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDCorotatedConstraints.h"
               ,0x177);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_class_Chaos::TVector<Chaos::TVector<float,3>,4>___cdecl_Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::GetDeterminantGradient(Chaos::PMatrix<float,3,3>_const&___ptr64,Chaos::PMatrix<float,3,3>_const&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId375);
  }
  *(undefined8 *)__return_storage_ptr__->V = 0;
  *(undefined8 *)&__return_storage_ptr__->V[0].field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->V[1].field_0x4 = 0;
  *(undefined8 *)(__return_storage_ptr__->V + 2) = 0;
  *(undefined8 *)&__return_storage_ptr__->V[2].field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->V[3].field_0x4 = 0;
  fVar1 = *(float *)&param_1->field_0x14;
  fVar2 = *(float *)&param_1->field_0x18;
  fVar3 = *(float *)&param_1->field_0x28;
  fVar4 = *(float *)&param_1->field_0x24;
  fVar5 = *(float *)&param_1->field_0x8;
  fVar6 = *(float *)&param_1->field_0x4;
  fVar7 = *(float *)&param_1->field_0x20;
  fVar8 = *(float *)&param_1->field_0x10;
  fVar9 = *(float *)param_1;
  local_128.M[3][0] = ___xmm_3f800000000000000000000000000000;
  local_128.M[3][1] = _UNK_150689644;
  local_128.M[3][2] = _UNK_150689648;
  local_128.M[3][3] = _UNK_15068964c;
  local_128.M[0][3] = 0.0;
  local_128.M[1][3] = 0.0;
  local_128.M[2][3] = 0.0;
  local_128.M[0][0] = fVar1 * fVar3 - fVar2 * fVar4;
  local_128.M[1][0] = fVar5 * fVar4 - fVar6 * fVar3;
  local_128.M[2][0] = fVar6 * fVar2 - fVar5 * fVar1;
  local_128.M[0][1] = fVar7 * fVar2 - fVar8 * fVar3;
  local_128.M[1][1] = fVar9 * fVar3 - fVar7 * fVar5;
  local_128.M[2][1] = fVar8 * fVar5 - fVar9 * fVar2;
  local_128.M[0][2] = fVar8 * fVar4 - fVar7 * fVar1;
  local_128.M[1][2] = fVar7 * fVar6 - fVar9 * fVar4;
  local_128.M[2][2] = fVar9 * fVar1 - fVar8 * fVar6;
  VectorMatrixMultiply(&local_e8,(TMatrix<float> *)param_2,&local_128);
  local_168[0] = local_e8.M[0][0];
  local_168[1] = local_e8.M[0][1];
  local_168[2] = local_e8.M[0][2];
  local_168[3] = local_e8.M[0][3];
  local_168[4] = local_e8.M[1][0];
  local_168[5] = local_e8.M[1][1];
  local_168[6] = local_e8.M[1][2];
  local_168[7] = local_e8.M[1][3];
  pfVar14 = local_168 + 1;
  lVar19 = 3;
  local_138[0] = local_e8.M[3][0];
  local_138[1] = local_e8.M[3][1];
  afStack_130[0] = local_e8.M[3][2];
  afStack_130[1] = local_e8.M[3][3];
  lVar17 = 3;
  local_148[0] = local_e8.M[2][0];
  local_148[1] = local_e8.M[2][1];
  local_148[2] = local_e8.M[2][2];
  local_148[3] = local_e8.M[2][3];
  iVar18 = 1;
  pfVar15 = (float *)&__return_storage_ptr__->V[1].field_0x4;
  do {
    fVar1 = pfVar14[-1];
    if (iVar18 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                          ,0x86,L"");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        pTVar12 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar10)();
        return pTVar12;
      }
    }
    else if ((3 < iVar18) &&
            (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < NumElements",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                 ,0x87,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      pTVar12 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar10)();
      return pTVar12;
    }
    pfVar15[-1] = fVar1;
    fVar1 = *pfVar14;
    if (iVar18 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                          ,0x86,L"");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        pTVar12 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar10)();
        return pTVar12;
      }
    }
    else if ((3 < iVar18) &&
            (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < NumElements",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                 ,0x87,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      pTVar12 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar10)();
      return pTVar12;
    }
    *pfVar15 = fVar1;
    fVar1 = pfVar14[1];
    if (iVar18 < 0) {
      iVar16 = 0x86;
      pcVar13 = "Index >= 0";
LAB_143a6b1a4:
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         (pcVar13,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                          ,iVar16,L"");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        pTVar12 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar10)();
        return pTVar12;
      }
    }
    else if (3 < iVar18) {
      iVar16 = 0x87;
      pcVar13 = "Index < NumElements";
      goto LAB_143a6b1a4;
    }
    pfVar15[1] = fVar1;
    iVar18 = iVar18 + 1;
    pfVar15 = pfVar15 + 3;
    pfVar14 = pfVar14 + 4;
    lVar17 = lVar17 + -1;
    if (lVar17 == 0) {
      lVar17 = (longlong)local_148 - (longlong)__return_storage_ptr__;
      pTVar12 = __return_storage_ptr__;
      do {
        *(float *)pTVar12->V =
             ((*(float *)pTVar12->V - *(float *)((longlong)pTVar12 + lVar17 + -0x20)) -
             *(float *)((longlong)pTVar12 + lVar17 + -0x10)) -
             *(float *)((longlong)pTVar12 + lVar17);
        pTVar12 = (TVector<Chaos::TVector<float,3>,4> *)&pTVar12->V[0].field_0x4;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      if (bVar20) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// GetPolarDelta @ 143a6d290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TVector<Chaos::TVector<float,3>,4> * __thiscall
Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::GetPolarDelta
          (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          TVector<Chaos::TVector<float,3>,4> *__return_storage_ptr__,FSolverParticles *param_1,
          float param_2,int param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TVector<float,3> *pTVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  FSolverParticles *pFVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_ChaosXPBDCorotatedPolar> FVar19;
  PMatrix<float,3,3> *pPVar20;
  PMatrix<float,3,3> *pPVar21;
  TVector<Chaos::TVector<float,3>,4> *pTVar22;
  float *pfVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStackY_458 [32];
  longlong local_3e8;
  FName local_3e0;
  float local_3c8 [4];
  float local_3b8 [4];
  float local_3a8 [8];
  undefined1 local_388 [8];
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  FColor_u_0 local_348;
  uint local_344;
  FName local_340;
  FSolverParticles *local_338;
  TVector<Chaos::TVector<float,3>,4> *local_330;
  FName local_328;
  longlong local_318;
  undefined1 local_308 [24];
  float afStack_2f0 [2];
  float local_2e8;
  float fStack_2e4;
  float afStack_2e0 [2];
  float local_2d8 [2];
  float afStack_2d0 [2];
  PMatrix<float,3,3> local_2c8;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  FName local_258;
  TVector<Chaos::TVector<float,3>,4> local_250;
  PMatrix<float,3,3> local_218;
  TMatrix<float> local_1d8;
  PMatrix<float,3,3> local_198;
  PMatrix<float,3,3> local_158;
  PMatrix<float,3,3> local_118;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_458;
  lVar29 = (longlong)param_3;
  bVar30 = -1 < CpuChannel->Enabled;
  local_338 = param_1;
  local_330 = __return_storage_ptr__;
  if (bVar30) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`protected:_virtual_class_Chaos::TVector<Chaos::TVector<float,3>,4>___cdecl_Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::GetPolarDelta(Chaos::Softs::FSolverParticles_const&___ptr64,float,int,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId560,"STAT_ChaosXPBDCorotatedApplyPolar",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDCorotatedConstraints.h"
               ,0x230);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_virtual_class_Chaos::TVector<Chaos::TVector<float,3>,4>___cdecl_Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::GetPolarDelta(Chaos::Softs::FSolverParticles_const&___ptr64,float,int,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId560);
  }
  FVar19 = StatPtr_STAT_ChaosXPBDCorotatedPolar;
  if (StatPtr_STAT_ChaosXPBDCorotatedPolar ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosXPBDCorotatedPolar>)0x0) {
    pFVar18 = ::FName::FName(&local_258,"STAT_ChaosXPBDCorotatedPolar");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_ChaosXPBDCorotatedPolar>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosXPBDCorotatedPolar,*pFVar18,
                        L"Chaos XPBD Corotated Constraint Polar Compute","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar6 = false;
  bVar7 = false;
  local_328.ComparisonIndex.Value = 0;
  local_328.Number = 0;
  local_3e0 = *(FName *)FVar19;
  bVar14 = false;
  bVar15 = false;
  if ((local_3e0.ComparisonIndex.Value.Value != 0) || (local_3e0.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_348.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_348._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar6 = false;
      bVar7 = true;
      bVar14 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_340.ComparisonIndex.Value = local_3e0.ComparisonIndex.Value.Value;
        local_340.Number = local_3e0.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_340,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDCorotatedConstraints.h"
                   ,0x231);
        bVar6 = true;
        bVar7 = true;
        bVar14 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_3e0,CycleScopeStart);
      bVar14 = true;
      goto LAB_143a6d4a8;
    }
  }
  bVar7 = bVar15;
  bVar6 = bVar14;
  bVar14 = false;
  local_3e0 = local_328;
LAB_143a6d4a8:
  pPVar20 = ElementDmInv(this,&local_198,param_3);
  pPVar21 = Ds(this,&local_158,param_3,param_1);
  VectorMatrixMultiply(&local_1d8,(TMatrix<float> *)pPVar20,(TMatrix<float> *)pPVar21);
  uVar11 = _UNK_150689648;
  uVar9 = ___xmm_3f800000000000000000000000000000;
  local_308._0_4_ = local_1d8.M[0][0];
  local_308._4_4_ = local_1d8.M[0][1];
  local_308._8_4_ = local_1d8.M[0][2];
  local_308._12_4_ = local_1d8.M[0][3];
  local_308._16_4_ = local_1d8.M[1][0];
  local_308._20_4_ = local_1d8.M[1][1];
  afStack_2f0[0] = local_1d8.M[1][2];
  afStack_2f0[1] = local_1d8.M[1][3];
  local_2e8 = local_1d8.M[2][0];
  fStack_2e4 = local_1d8.M[2][1];
  afStack_2e0[0] = local_1d8.M[2][2];
  afStack_2e0[1] = local_1d8.M[2][3];
  local_2d8[0] = local_1d8.M[3][0];
  local_2d8[1] = local_1d8.M[3][1];
  afStack_2d0[0] = local_1d8.M[3][2];
  afStack_2d0[1] = local_1d8.M[3][3];
  local_388 = (undefined1  [8])0x0;
  local_378 = 0;
  local_368 = 0;
  local_380 = 0;
  local_370 = 0;
  local_360 = 0;
  local_358 = ___xmm_3f800000000000000000000000000000;
  uStack_350 = _UNK_150689648;
  local_2c8._0_8_ = 0;
  local_2c8._16_8_ = 0;
  local_2c8._32_8_ = 0;
  local_2c8._8_8_ = 0;
  local_2c8._24_8_ = 0;
  local_2c8._40_8_ = 0;
  local_2c8._48_8_ = ___xmm_3f800000000000000000000000000000;
  local_2c8._56_8_ = _UNK_150689648;
  PolarDecomposition<float>
            ((PMatrix<float,3,3> *)local_308,(PMatrix<float,3,3> *)local_388,&local_2c8);
  uVar26 = (uint)~param_3 >> 0x1f;
  uVar16 = 0;
  if (param_3 < (this->AlphaJArray).ArrayNum) {
    uVar16 = uVar26;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar5 = (code *)swi(3);
    pTVar22 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
    return pTVar22;
  }
  fVar31 = powf(*(float *)((this->AlphaJArray).AllocatorInstance.Data + lVar29 * 4),__real_3eaaaaab)
  ;
  uVar12 = _UNK_150689648;
  uVar10 = ___xmm_3f800000000000000000000000000000;
  pfVar23 = local_3a8;
  lVar24 = 3;
  fVar33 = 0.0;
  local_3a8[1] = fStack_2e4 - local_368._4_4_ * fVar31;
  local_388._4_4_ = (float)local_388._4_4_ * fVar31;
  local_388._0_4_ = (float)local_388._0_4_ * fVar31;
  local_380._0_4_ = (float)local_380 * fVar31;
  local_378._4_4_ = local_378._4_4_ * fVar31;
  local_378._0_4_ = (float)local_378 * fVar31;
  local_370._0_4_ = (float)local_370 * fVar31;
  local_3a8[0] = local_2e8 - (float)local_368 * fVar31;
  local_3a8[2] = afStack_2e0[0] - (float)local_360 * fVar31;
  local_368._4_4_ = local_368._4_4_ * fVar31;
  local_368._0_4_ = (float)local_368 * fVar31;
  local_360._0_4_ = (float)local_360 * fVar31;
  do {
    ___xmm_3f800000000000000000000000000000 = (undefined4)uVar9;
    _UNK_150689644 = SUB84(uVar9,4);
    local_3a8[4] = (float)___xmm_3f800000000000000000000000000000;
    local_3a8[5] = (float)_UNK_150689644;
    _UNK_150689648 = (undefined4)uVar11;
    _UNK_15068964c = SUB84(uVar11,4);
    local_3a8[6] = (float)_UNK_150689648;
    local_3a8[7] = (float)_UNK_15068964c;
    local_3a8[3] = 0.0;
    pfVar1 = pfVar23 + -8;
    ___xmm_3f800000000000000000000000000000 = (undefined4)uVar9;
    _UNK_150689644 = SUB84(uVar9,4);
    local_3a8[4] = (float)___xmm_3f800000000000000000000000000000;
    local_3a8[5] = (float)_UNK_150689644;
    _UNK_150689648 = (undefined4)uVar11;
    _UNK_15068964c = SUB84(uVar11,4);
    local_3a8[6] = (float)_UNK_150689648;
    local_3a8[7] = (float)_UNK_15068964c;
    local_3a8[3] = 0.0;
    pfVar2 = pfVar23 + -4;
    ___xmm_3f800000000000000000000000000000 = (undefined4)uVar9;
    _UNK_150689644 = SUB84(uVar9,4);
    local_3a8[4] = (float)___xmm_3f800000000000000000000000000000;
    local_3a8[5] = (float)_UNK_150689644;
    _UNK_150689648 = (undefined4)uVar11;
    _UNK_15068964c = SUB84(uVar11,4);
    local_3a8[6] = (float)_UNK_150689648;
    local_3a8[7] = (float)_UNK_15068964c;
    local_3a8[3] = 0.0;
    fVar31 = *pfVar23;
    pfVar23 = pfVar23 + 1;
    fVar33 = fVar33 + *pfVar1 * *pfVar1 + *pfVar2 * *pfVar2 + fVar31 * fVar31;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  fVar33 = SQRT(fVar33);
  ___xmm_3f800000000000000000000000000000 = uVar10;
  _UNK_150689648 = uVar12;
  if (param_4 <= fVar33) {
    pPVar20 = ElementDmInv(this,&local_118,param_3);
    local_218._40_4_ = *(undefined4 *)&pPVar20->field_0x28;
    local_218._24_4_ = *(undefined4 *)&pPVar20->field_0x24;
    local_218._8_4_ = *(undefined4 *)&pPVar20->field_0x20;
    local_218._36_4_ = *(undefined4 *)&pPVar20->field_0x18;
    local_218._20_4_ = *(undefined4 *)&pPVar20->field_0x14;
    local_218._4_4_ = *(undefined4 *)&pPVar20->field_0x10;
    local_218._32_4_ = *(undefined4 *)&pPVar20->field_0x8;
    local_218._16_4_ = *(undefined4 *)&pPVar20->field_0x4;
    local_218._0_4_ = *(undefined4 *)pPVar20;
    local_218._48_8_ = uVar9;
    local_218._56_8_ = uVar11;
    local_218._12_4_ = 0;
    local_218._28_4_ = 0;
    local_218._44_4_ = 0;
    GetPolarGradient(this,&local_250,(PMatrix<float,3,3> *)local_308,(PMatrix<float,3,3> *)local_388
                     ,&local_218,fVar33);
    uVar16 = 0;
    if (param_3 < (this->MuElementArray).ArrayNum) {
      uVar16 = uVar26;
    }
    if ((uVar16 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      pTVar22 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
      return pTVar22;
    }
    pFVar4 = (this->MuElementArray).AllocatorInstance.Data;
    uVar16 = 0;
    if (param_3 < (this->Measure).ArrayNum) {
      uVar16 = uVar26;
    }
    if ((uVar16 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      pTVar22 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
      return pTVar22;
    }
    uVar16 = 0;
    if (param_3 < (this->MuElementArray).ArrayNum) {
      uVar16 = uVar26;
    }
    fVar31 = __real_3f800000 /
             (param_2 * *(float *)((this->Measure).AllocatorInstance.Data + lVar29 * 4) *
             param_2 * *(float *)(pFVar4 + lVar29 * 4));
    if ((uVar16 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      pTVar22 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
      return pTVar22;
    }
    if (__real_4cbebc20 < *(float *)((this->MuElementArray).AllocatorInstance.Data + lVar29 * 4)) {
      fVar31 = 0.0;
    }
    if (this->bRecordMetric != false) {
      uVar16 = param_3 * 2;
      local_344 = uVar16;
      uVar25 = ~uVar16 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar16 < (this->LambdaArray).ArrayNum) {
        uVar17 = uVar25;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        pTVar22 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
        return pTVar22;
      }
      pTVar22 = &local_250;
      local_318 = lVar29 << 4;
      lVar24 = 0;
      this->HError = fVar31 * *(float *)((this->LambdaArray).AllocatorInstance.Data +
                                        (longlong)(int)uVar16 * 4) + fVar33 + this->HError;
      do {
        iVar27 = 0;
        local_3e8 = 3;
        do {
          uVar16 = 0;
          if (param_3 * 2 < (this->LambdaArray).ArrayNum) {
            uVar16 = uVar25;
          }
          if ((uVar16 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar5 = (code *)swi(3);
            pTVar22 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
            return pTVar22;
          }
          fVar32 = *(float *)((this->LambdaArray).AllocatorInstance.Data + lVar29 * 8);
          fVar3 = *(float *)pTVar22->V;
          uVar16 = 0;
          if (param_3 < (this->MeshConstraints).ArrayNum) {
            uVar16 = uVar26;
          }
          if ((uVar16 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar5 = (code *)swi(3);
            pTVar22 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
            return pTVar22;
          }
          uVar16 = iVar27 + *(int *)((this->MeshConstraints).AllocatorInstance.Data +
                                    local_318 + lVar24) * 3;
          uVar17 = 0;
          if ((int)uVar16 < (this->GError).ArrayNum) {
            uVar17 = ~uVar16 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar5 = (code *)swi(3);
            pTVar22 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
            return pTVar22;
          }
          param_1 = local_338;
          uVar17 = local_344;
          pFVar4 = (this->GError).AllocatorInstance.Data;
          iVar27 = iVar27 + 1;
          pTVar22 = (TVector<Chaos::TVector<float,3>,4> *)&pTVar22->V[0].field_0x4;
          local_3e8 = local_3e8 + -1;
          *(float *)(pFVar4 + (longlong)(int)uVar16 * 4) =
               *(float *)(pFVar4 + (longlong)(int)uVar16 * 4) - fVar32 * fVar3;
        } while (local_3e8 != 0);
        lVar24 = lVar24 + 4;
      } while (lVar24 < 0x10);
      lVar24 = (longlong)(int)local_344;
      uVar16 = 0;
      if ((int)local_344 < (this->LambdaArray).ArrayNum) {
        uVar16 = uVar25;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        pTVar22 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
        return pTVar22;
      }
      fVar32 = *(float *)((this->LambdaArray).AllocatorInstance.Data + lVar24 * 4);
      uVar16 = 0;
      if ((int)uVar17 < (this->HErrorArray).ArrayNum) {
        uVar16 = uVar25;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        pTVar22 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
        return pTVar22;
      }
      *(float *)((this->HErrorArray).AllocatorInstance.Data + lVar24 * 4) = fVar31 * fVar32 + fVar33
      ;
    }
    uVar16 = param_3 * 2;
    uVar26 = 0;
    if ((int)uVar16 < (this->LambdaArray).ArrayNum) {
      uVar26 = ~uVar16 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      pTVar22 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
      return pTVar22;
    }
    fVar33 = (float)((uint)fVar33 ^ __xmm_80000000800000008000000080000000);
    pTVar22 = &local_250;
    lVar24 = 0;
    fVar32 = fVar31 * *(float *)((this->LambdaArray).AllocatorInstance.Data +
                                (longlong)(int)uVar16 * 4);
    do {
      lVar28 = 3;
      do {
        uVar16 = 0;
        if (param_3 < (this->MeshConstraints).ArrayNum) {
          uVar16 = (uint)~param_3 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          pTVar22 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
          return pTVar22;
        }
        uVar16 = *(uint *)((this->MeshConstraints).AllocatorInstance.Data + lVar24 + lVar29 * 0x10);
        uVar26 = 0;
        if ((int)uVar16 < (int)param_1->_padding_) {
          uVar26 = ~uVar16 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          pTVar22 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
          return pTVar22;
        }
        pTVar8 = pTVar22->V;
        pTVar22 = (TVector<Chaos::TVector<float,3>,4> *)&pTVar22->V[0].field_0x4;
        fVar31 = fVar31 + *(float *)pTVar8 *
                          *(float *)(param_1->_padding_ + (longlong)(int)uVar16 * 4) *
                          *(float *)pTVar8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar24 = lVar24 + 4;
    } while (lVar24 < 0x10);
    uVar16 = param_3 * 2;
    fVar31 = (fVar33 - fVar32) / fVar31;
    uVar26 = 0;
    if ((int)uVar16 < (this->LambdaArray).ArrayNum) {
      uVar26 = ~uVar16 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      pTVar22 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
      return pTVar22;
    }
    pFVar13 = local_338;
    pFVar4 = (this->LambdaArray).AllocatorInstance.Data;
    lVar29 = 0;
    local_288 = 0;
    uStack_280 = 0;
    local_268 = 0;
    uStack_260 = 0;
    *(float *)(pFVar4 + (longlong)(int)uVar16 * 4) =
         fVar31 + *(float *)(pFVar4 + (longlong)(int)uVar16 * 4);
    local_278 = 0;
    uStack_270 = 0;
    local_3e8 = 0;
    do {
      lVar28 = 3;
      pfVar23 = (float *)((longlong)&local_288 + local_3e8);
      lVar24 = local_3e8 - (longlong)pfVar23;
      do {
        uVar16 = 0;
        if (param_3 < (this->MeshConstraints).ArrayNum) {
          uVar16 = (uint)~param_3 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          pTVar22 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
          return pTVar22;
        }
        uVar16 = *(uint *)((this->MeshConstraints).AllocatorInstance.Data +
                          lVar29 + (longlong)param_3 * 0x10);
        uVar26 = 0;
        if ((int)uVar16 < (int)pFVar13->_padding_) {
          uVar26 = ~uVar16 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          pTVar22 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
          return pTVar22;
        }
        *pfVar23 = *(float *)(pFVar13->_padding_ + (longlong)(int)uVar16 * 4) *
                   *(float *)((longlong)pfVar23 + (longlong)&local_250 + lVar24) * fVar31;
        pfVar23 = pfVar23 + 1;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar29 = lVar29 + 4;
      local_3e8 = local_3e8 + 0xc;
    } while (lVar29 < 0x10);
    *(undefined8 *)local_330->V = local_288;
    *(undefined8 *)&local_330->V[0].field_0x8 = uStack_280;
    *(undefined8 *)&local_330->V[1].field_0x4 = local_278;
    *(undefined8 *)(local_330->V + 2) = uStack_270;
    *(undefined8 *)&local_330->V[2].field_0x8 = local_268;
    *(undefined8 *)&local_330->V[3].field_0x4 = uStack_260;
  }
  else {
    *(undefined8 *)local_330->V = 0;
    *(undefined8 *)&local_330->V[0].field_0x8 = 0;
    *(undefined8 *)&local_330->V[1].field_0x4 = 0;
    *(undefined8 *)(local_330->V + 2) = 0;
    *(undefined8 *)&local_330->V[2].field_0x8 = 0;
    *(undefined8 *)&local_330->V[3].field_0x4 = 0;
  }
  pTVar22 = local_330;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(local_3e0,CycleScopeEnd);
  }
  if (bVar30) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pTVar22;
}

// GetPolarGradient @ 143a6e120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<Chaos::TVector<float,3>,4> * __thiscall
Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::GetPolarGradient
          (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          TVector<Chaos::TVector<float,3>,4> *__return_storage_ptr__,PMatrix<float,3,3> *param_1,
          PMatrix<float,3,3> *param_2,PMatrix<float,3,3> *param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  TVector<Chaos::TVector<float,3>,4> *pTVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStack_168 [48];
  float local_138 [8];
  float local_118 [4];
  float local_108 [2];
  float afStack_100 [2];
  TMatrix<float> local_f8;
  TMatrix<float> local_b8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_168;
  pfVar7 = (float *)&__return_storage_ptr__->V[0].field_0x8;
  *(undefined8 *)__return_storage_ptr__->V = 0;
  *pfVar7 = 0.0;
  *(undefined8 *)(__return_storage_ptr__->V + 1) = 0;
  *(undefined8 *)&__return_storage_ptr__->V[1].field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->V[2].field_0x4 = 0;
  *(undefined8 *)(__return_storage_ptr__->V + 3) = 0;
  *(undefined4 *)&__return_storage_ptr__->V[3].field_0x8 = 0;
  local_f8.M[0][0] = *(float *)param_1 - *(float *)param_2;
  local_f8.M[1][0] = *(float *)&param_1->field_0x10 - *(float *)&param_2->field_0x10;
  local_f8.M[0][3] = 0.0;
  local_f8.M[1][3] = 0.0;
  local_f8.M[2][0] = *(float *)&param_1->field_0x20 - *(float *)&param_2->field_0x20;
  local_f8.M[0][1] = *(float *)&param_1->field_0x4 - *(float *)&param_2->field_0x4;
  local_f8.M[2][3] = 0.0;
  local_f8.M[1][1] = *(float *)&param_1->field_0x14 - *(float *)&param_2->field_0x14;
  local_f8.M[2][1] = *(float *)&param_1->field_0x24 - *(float *)&param_2->field_0x24;
  local_f8.M[0][2] = *(float *)&param_1->field_0x8 - *(float *)&param_2->field_0x8;
  local_f8.M[1][2] = *(float *)&param_1->field_0x18 - *(float *)&param_2->field_0x18;
  local_f8.M[2][2] = *(float *)&param_1->field_0x28 - *(float *)&param_2->field_0x28;
  local_f8.M[3][0] = ___xmm_3f800000000000000000000000000000;
  local_f8.M[3][1] = _UNK_150689644;
  local_f8.M[3][2] = _UNK_150689648;
  local_f8.M[3][3] = _UNK_15068964c;
  VectorMatrixMultiply(&local_b8,(TMatrix<float> *)param_3,&local_f8);
  lVar12 = 3;
  local_138[0] = local_b8.M[0][0];
  local_138[1] = local_b8.M[0][1];
  local_138[2] = local_b8.M[0][2];
  local_138[3] = local_b8.M[0][3];
  lVar5 = -(longlong)__return_storage_ptr__;
  local_138[4] = local_b8.M[1][0];
  local_138[5] = local_b8.M[1][1];
  local_138[6] = local_b8.M[1][2];
  local_138[7] = local_b8.M[1][3];
  lVar6 = 3;
  local_118[0] = local_b8.M[2][0];
  local_118[1] = local_b8.M[2][1];
  local_118[2] = local_b8.M[2][2];
  local_118[3] = local_b8.M[2][3];
  local_108[0] = local_b8.M[3][0];
  local_108[1] = local_b8.M[3][1];
  afStack_100[0] = local_b8.M[3][2];
  afStack_100[1] = local_b8.M[3][3];
  pTVar3 = __return_storage_ptr__;
  do {
    *(float *)pTVar3->V =
         ((*(float *)pTVar3->V - *(float *)((longlong)local_138 + lVar5 + (longlong)pTVar3)) -
         *(float *)((longlong)local_138 + lVar5 + 0x10 + (longlong)pTVar3)) -
         *(float *)((longlong)local_118 + lVar5 + (longlong)pTVar3);
    pTVar3 = (TVector<Chaos::TVector<float,3>,4> *)&pTVar3->V[0].field_0x4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  pfVar8 = local_138 + 1;
  pfVar9 = (float *)&__return_storage_ptr__->V[1].field_0x4;
  iVar11 = 1;
  do {
    fVar13 = pfVar8[-1];
    if (iVar11 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                         ,0x86,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar1)();
        return pTVar3;
      }
    }
    else if (3 < iVar11) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < NumElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                         ,0x87,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar1)();
        return pTVar3;
      }
    }
    pfVar9[-1] = fVar13;
    fVar13 = *pfVar8;
    if (iVar11 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                         ,0x86,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar1)();
        return pTVar3;
      }
    }
    else if (3 < iVar11) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < NumElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                         ,0x87,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar1)();
        return pTVar3;
      }
    }
    *pfVar9 = fVar13;
    fVar13 = pfVar8[1];
    if (iVar11 < 0) {
      iVar10 = 0x86;
      pcVar4 = "Index >= 0";
LAB_143a6e408:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar4,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                         ,iVar10,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar1)();
        return pTVar3;
      }
    }
    else if (3 < iVar11) {
      iVar10 = 0x87;
      pcVar4 = "Index < NumElements";
      goto LAB_143a6e408;
    }
    pfVar9[1] = fVar13;
    iVar11 = iVar11 + 1;
    pfVar9 = pfVar9 + 3;
    pfVar8 = pfVar8 + 4;
    lVar12 = lVar12 + -1;
    if (lVar12 == 0) {
      if (param_4 != 0.0) {
        lVar5 = 4;
        fVar13 = __real_3f800000 / param_4;
        do {
          pfVar7[-2] = fVar13 * pfVar7[-2];
          pfVar7[-1] = fVar13 * pfVar7[-1];
          *pfVar7 = fVar13 * *pfVar7;
          lVar5 = lVar5 + -1;
          pfVar7 = pfVar7 + 3;
        } while (lVar5 != 0);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// Init @ 143a71a30

void __thiscall
Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::Init
          (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->LambdaArray).AllocatorInstance.Data;
  iVar2 = (this->LambdaArray).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->LambdaArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    *(undefined4 *)pFVar3 = 0;
    pFVar3 = pFVar3 + 4;
  }
  return;
}

// InitColor @ 143a72540

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::InitColor
          (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  int *piVar19;
  longlong lVar20;
  uint uVar21;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *pTVar22;
  longlong lVar23;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_f8 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_f0;
  TArray<float,TSizedDefaultAllocator<32>_> local_e0;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> local_d0;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_a0;
  FScriptContainerElement *local_90;
  TArray<int,TSizedDefaultAllocator<32>_> *local_88;
  longlong local_80;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *local_78;
  FScriptContainerElement *local_70;
  int *local_68;
  TArray<int,TSizedDefaultAllocator<32>_> *local_60;
  
  pTVar22 = &this->MeshConstraints;
  local_78 = pTVar22;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,4,0>
            (&local_b0,pTVar22,(TDynamicParticles<float,3> *)param_1,0,(int)param_1->_padding_);
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_d0,(this->MeshConstraints).ArrayNum,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_e0,(this->Measure).ArrayNum,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_f0,(this->DmInverse).ArrayNum,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a0,(this->MeshConstraints).ArrayNum,Default);
  uVar18 = local_b0.ArrayNum + 1;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  piVar19 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  local_68 = piVar19;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar18,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,piVar19);
  }
  uVar11 = (ulonglong)local_b0.ArrayNum;
  local_f8[0] = 0;
  local_60 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_b0.AllocatorInstance.Data + uVar11 * 0x10);
  local_b8 = local_b0.ArrayNum;
  FVar17.Data = local_b0.AllocatorInstance.Data;
  do {
    pTVar7 = local_60;
    pTVar13 = &this->ConstraintsPerColorStartIndex;
    local_88 = (TArray<int,TSizedDefaultAllocator<32>_> *)FVar17.Data;
    if (local_b0.ArrayNum != (uint)uVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    pFVar14 = (pTVar13->AllocatorInstance).Data;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar17.Data == pTVar7) {
      if (((pFVar14 <= (FScriptContainerElement *)local_f8) &&
          ((FScriptContainerElement *)local_f8 < pFVar14 + (longlong)*piVar19 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = (this->ConstraintsPerColorStartIndex).ArrayNum;
      if (iVar9 == *piVar19) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar13->AllocatorInstance,piVar19);
      }
      (this->ConstraintsPerColorStartIndex).ArrayNum = iVar9 + 1;
      *(uint *)((pTVar13->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_f8[0];
      if (pTVar22 != &local_d0) {
        pFVar14 = (pTVar22->AllocatorInstance).Data;
        if (pFVar14 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar14);
        }
        (pTVar22->AllocatorInstance).Data = local_d0.AllocatorInstance.Data;
        pTVar22->ArrayNum = local_d0.ArrayNum;
        pTVar22->ArrayMax = local_d0.ArrayMax;
        local_d0.ArrayNum = 0;
        local_d0.ArrayMax = 0;
        local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      pTVar1 = &this->Measure;
      if (pTVar1 != &local_e0) {
        pFVar14 = (pTVar1->AllocatorInstance).Data;
        if (pFVar14 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar14);
        }
        (pTVar1->AllocatorInstance).Data = local_e0.AllocatorInstance.Data;
        (this->Measure).ArrayNum = local_e0.ArrayNum;
        (this->Measure).ArrayMax = local_e0.ArrayMax;
        local_e0.ArrayNum = 0;
        local_e0.ArrayMax = 0;
        local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      pTVar1 = &this->DmInverse;
      if (pTVar1 != &local_f0) {
        pFVar14 = (pTVar1->AllocatorInstance).Data;
        if (pFVar14 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar14);
        }
        (pTVar1->AllocatorInstance).Data = local_f0.AllocatorInstance.Data;
        (this->DmInverse).ArrayNum = local_f0.ArrayNum;
        (this->DmInverse).ArrayMax = local_f0.ArrayMax;
        local_f0.ArrayNum = 0;
        local_f0.ArrayMax = 0;
        local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.AllocatorInstance.Data);
      }
      if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.AllocatorInstance.Data);
      }
      if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_b0.AllocatorInstance.Data,
                 local_b0.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_b0.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
      return;
    }
    if (((pFVar14 <= (FScriptContainerElement *)local_f8) &&
        ((FScriptContainerElement *)local_f8 < pFVar14 + (longlong)*piVar19 * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar9 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar9 == *piVar19) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar13->AllocatorInstance,piVar19);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar9 + 1;
    *(uint *)((pTVar13->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_f8[0];
    local_bc = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar17.Data)->ArrayNum;
    uVar11 = (ulonglong)(int)local_bc;
    pFVar14 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar17.Data)->AllocatorInstance).Data;
    local_70 = pFVar14 + uVar11 * 4;
    while( true ) {
      pFVar6 = local_70;
      local_90 = pFVar14;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar17.Data)->ArrayNum != (int)uVar11) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar14 == pFVar6) break;
      uVar18 = *(uint *)pFVar14;
      lVar20 = (longlong)(int)uVar18;
      uVar21 = ~uVar18 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar18 < pTVar22->ArrayNum) {
        uVar12 = uVar21;
      }
      local_res20 = uVar18;
      local_c0 = uVar21;
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar15 = (longlong)(int)local_f8[0];
      pFVar14 = (pTVar22->AllocatorInstance).Data + lVar20 * 0x10;
      uVar4 = *(undefined8 *)pFVar14;
      uVar5 = *(undefined8 *)(pFVar14 + 8);
      uVar10 = 0;
      uVar12 = uVar10;
      if ((int)local_f8[0] < local_d0.ArrayNum) {
        uVar12 = ~local_f8[0] >> 0x1f;
      }
      local_80 = lVar20;
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined8 *)(local_d0.AllocatorInstance.Data + lVar15 * 0x10) = uVar4;
      *(undefined8 *)(local_d0.AllocatorInstance.Data + lVar15 * 0x10 + 8) = uVar5;
      uVar12 = uVar10;
      if ((int)uVar18 < (this->Measure).ArrayNum) {
        uVar12 = uVar21;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar15 = (longlong)(int)local_f8[0];
      uVar2 = *(undefined4 *)((this->Measure).AllocatorInstance.Data + lVar20 * 4);
      uVar12 = uVar10;
      if ((int)local_f8[0] < local_e0.ArrayNum) {
        uVar12 = ~local_f8[0] >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar20 = lVar20 * 0x24;
      lVar23 = 9;
      *(undefined4 *)(local_e0.AllocatorInstance.Data + lVar15 * 4) = uVar2;
      uVar12 = uVar18 * 9;
      do {
        uVar21 = uVar10;
        if ((int)uVar12 < (this->DmInverse).ArrayNum) {
          uVar21 = ~uVar12 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar2 = *(undefined4 *)((this->DmInverse).AllocatorInstance.Data + lVar20);
        uVar16 = local_f8[0] * 9 + uVar18 * -9 + uVar12;
        uVar21 = uVar10;
        if ((int)uVar16 < local_f0.ArrayNum) {
          uVar21 = ~uVar16 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar21 = local_f8[0];
        uVar12 = uVar12 + 1;
        lVar20 = lVar20 + 4;
        *(undefined4 *)(local_f0.AllocatorInstance.Data + (longlong)(int)uVar16 * 4) = uVar2;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar20 = (longlong)(int)local_res20;
      if ((int)local_res20 < local_a0.ArrayNum) {
        uVar10 = local_c0;
      }
      lVar15 = local_80;
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         lVar15 = lVar20, bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar11 = (ulonglong)local_bc;
      *(uint *)(local_a0.AllocatorInstance.Data + lVar15 * 4) = uVar21;
      local_f8[0] = local_f8[0] + 1;
      pFVar14 = local_90 + 4;
      FVar17.Data = (FScriptContainerElement *)local_88;
      pTVar22 = local_78;
    }
    FVar17.Data = FVar17.Data + 0x10;
    uVar11 = (ulonglong)local_b8;
    piVar19 = local_68;
  } while( true );
}

// ModifyDmInverseFromMuscleLength @ 143a83a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
ModifyDmInverseFromMuscleLength
          (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,int param_1,
          float param_2,PMatrix<float,3,3> *param_3,float param_4)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  float (*pafVar9) [4];
  bool bVar10;
  undefined1 auStack_288 [32];
  longlong local_268;
  longlong local_260;
  TMatrix<float> local_258;
  TMatrix<float> local_218;
  TMatrix<float> local_1d8;
  TMatrix<float> local_198;
  TMatrix<float> local_158;
  TMatrix<float> local_118;
  TMatrix<float> local_d8;
  TMatrix<float> local_98;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_288;
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ModifyDmInverseFromMuscleLength(int,float,Chaos::PMatrix<float,3,3>_const&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId411,
               "STAT_ChaosXPBDCorotatedModifyDmInverseFromMuscleLength",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDCorotatedConstraints.h"
               ,0x19b);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ModifyDmInverseFromMuscleLength(int,float,Chaos::PMatrix<float,3,3>_const&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId411);
  }
  ElementDmInvSave(this,(PMatrix<float,3,3> *)&local_1d8,param_1);
  if (param_2 < __real_3f800000) {
    local_258.M[0][3] = 0.0;
    local_258.M[1][0] = 0.0;
    local_258.M[0][0] = __real_3f800000 / param_2;
    local_258.M[2][0] = 0.0;
    local_258.M[2][1] = 0.0;
    local_258.M[0][1] = 0.0;
    local_258.M[0][2] = 0.0;
    local_258.M[1][1] = powf(param_2,param_4 * __real_3f000000);
    local_258.M[3][0] = ___xmm_3f800000000000000000000000000000;
    local_258.M[3][1] = _UNK_150689644;
    local_258.M[3][2] = _UNK_150689648;
    local_258.M[3][3] = _UNK_15068964c;
    local_258.M[1][2] = 0.0;
    local_258.M[1][3] = 0.0;
    local_258.M[2][3] = 0.0;
    local_258.M[2][2] = local_258.M[1][1];
    VectorMatrixMultiply(&local_198,(TMatrix<float> *)param_3,&local_258);
    local_158.M[0][0] = local_198.M[0][0];
    local_158.M[0][1] = local_198.M[0][1];
    local_158.M[0][2] = local_198.M[0][2];
    local_158.M[0][3] = local_198.M[0][3];
    local_158.M[1][0] = local_198.M[1][0];
    local_158.M[1][1] = local_198.M[1][1];
    local_158.M[1][2] = local_198.M[1][2];
    local_158.M[1][3] = local_198.M[1][3];
    local_158.M[2][0] = local_198.M[2][0];
    local_158.M[2][1] = local_198.M[2][1];
    local_158.M[2][2] = local_198.M[2][2];
    local_158.M[2][3] = local_198.M[2][3];
    local_218.M[0][0] = *(float *)param_3;
    local_158.M[3][0] = local_198.M[3][0];
    local_158.M[3][1] = local_198.M[3][1];
    local_158.M[3][2] = local_198.M[3][2];
    local_158.M[3][3] = local_198.M[3][3];
    local_218.M[1][0] = *(float *)&param_3->field_0x4;
    local_218.M[2][0] = *(float *)&param_3->field_0x8;
    local_218.M[0][1] = *(float *)&param_3->field_0x10;
    local_218.M[1][1] = *(float *)&param_3->field_0x14;
    local_218.M[2][1] = *(float *)&param_3->field_0x18;
    local_218.M[0][2] = *(float *)&param_3->field_0x20;
    local_218.M[1][2] = *(float *)&param_3->field_0x24;
    local_218.M[2][2] = *(float *)&param_3->field_0x28;
    local_218.M[3][0] = ___xmm_3f800000000000000000000000000000;
    local_218.M[3][1] = _UNK_150689644;
    local_218.M[3][2] = _UNK_150689648;
    local_218.M[3][3] = _UNK_15068964c;
    local_218.M[0][3] = 0.0;
    local_218.M[1][3] = 0.0;
    local_218.M[2][3] = 0.0;
    VectorMatrixMultiply(&local_118,&local_158,&local_218);
    local_d8.M[0][0] = local_118.M[0][0];
    local_d8.M[0][1] = local_118.M[0][1];
    local_d8.M[0][2] = local_118.M[0][2];
    local_d8.M[0][3] = local_118.M[0][3];
    local_d8.M[1][0] = local_118.M[1][0];
    local_d8.M[1][1] = local_118.M[1][1];
    local_d8.M[1][2] = local_118.M[1][2];
    local_d8.M[1][3] = local_118.M[1][3];
    local_d8.M[2][0] = local_118.M[2][0];
    local_d8.M[2][1] = local_118.M[2][1];
    local_d8.M[2][2] = local_118.M[2][2];
    local_d8.M[2][3] = local_118.M[2][3];
    local_d8.M[3][0] = local_118.M[3][0];
    local_d8.M[3][1] = local_118.M[3][1];
    local_d8.M[3][2] = local_118.M[3][2];
    local_d8.M[3][3] = local_118.M[3][3];
    VectorMatrixMultiply(&local_98,&local_d8,&local_1d8);
    local_1d8.M[0][0] = local_98.M[0][0];
    local_1d8.M[0][1] = local_98.M[0][1];
    local_1d8.M[0][2] = local_98.M[0][2];
    local_1d8.M[0][3] = local_98.M[0][3];
    local_1d8.M[1][0] = local_98.M[1][0];
    local_1d8.M[1][1] = local_98.M[1][1];
    local_1d8.M[1][2] = local_98.M[1][2];
    local_1d8.M[1][3] = local_98.M[1][3];
    local_1d8.M[2][0] = local_98.M[2][0];
    local_1d8.M[2][1] = local_98.M[2][1];
    local_1d8.M[2][2] = local_98.M[2][2];
    local_1d8.M[2][3] = local_98.M[2][3];
    local_1d8.M[3][0] = local_98.M[3][0];
    local_1d8.M[3][1] = local_98.M[3][1];
    local_1d8.M[3][2] = local_98.M[3][2];
    local_1d8.M[3][3] = local_98.M[3][3];
  }
  lVar7 = 3;
  lVar8 = (longlong)param_1 * 0x24;
  uVar6 = param_1 * 9 + 2;
  pafVar9 = local_1d8.M + 2;
  do {
    iVar2 = (this->DmInverse).ArrayNum;
    fVar1 = ((TMatrix<float> *)(pafVar9 + -2))->M[0][0];
    uVar5 = 0;
    if ((int)(uVar6 - 2) < iVar2) {
      uVar5 = ~(uVar6 - 2) >> 0x1f;
    }
    if (uVar5 == 0) {
      local_268 = (longlong)(int)(uVar6 - 2);
      local_260 = (longlong)iVar2;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(float *)((this->DmInverse).AllocatorInstance.Data + lVar8) = fVar1;
    iVar2 = (this->DmInverse).ArrayNum;
    fVar1 = pafVar9[-1][0];
    uVar5 = 0;
    if ((int)(uVar6 - 1) < iVar2) {
      uVar5 = ~(uVar6 - 1) >> 0x1f;
    }
    if (uVar5 == 0) {
      local_268 = (longlong)(int)(uVar6 - 1);
      local_260 = (longlong)iVar2;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(float *)((this->DmInverse).AllocatorInstance.Data + lVar8 + 4) = fVar1;
    iVar2 = (this->DmInverse).ArrayNum;
    fVar1 = (*pafVar9)[0];
    uVar5 = 0;
    if ((int)uVar6 < iVar2) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      local_268 = (longlong)(int)uVar6;
      local_260 = (longlong)iVar2;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = uVar6 + 3;
    pafVar9 = (float (*) [4])(*pafVar9 + 1);
    *(float *)((this->DmInverse).AllocatorInstance.Data + lVar8 + 8) = fVar1;
    lVar8 = lVar8 + 0xc;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ModifyDmInverseSaveFromInflationVolumeScale @ 143a83e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
ModifyDmInverseSaveFromInflationVolumeScale
          (FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,int param_1,
          float param_2,PMatrix<float,3,3> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  float (*pafVar10) [4];
  uint uVar11;
  undefined1 auStack_2a8 [32];
  longlong local_288;
  longlong local_280;
  longlong local_278;
  TMatrix<float> local_268;
  TMatrix<float> local_228;
  TMatrix<float> local_1e8;
  TMatrix<float> local_1a8;
  TMatrix<float> local_168;
  TMatrix<float> local_128;
  TMatrix<float> local_e8;
  TMatrix<float> local_a8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  ElementDmInvSave(this,(PMatrix<float,3,3> *)&local_1e8,param_1);
  if (__real_322bcc77 <
      (float)((uint)(param_2 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    local_268.M[0][0] = 1.0;
    local_268.M[0][1] = 0.0;
    local_268.M[0][3] = 0.0;
    local_268.M[1][0] = 0.0;
    local_268.M[2][0] = 0.0;
    local_268.M[2][1] = 0.0;
    local_268.M[0][2] = 0.0;
    local_268.M[1][2] = 0.0;
    local_268.M[1][3] = 0.0;
    local_268.M[2][3] = 0.0;
    local_268.M[3][0] = ___xmm_3f800000000000000000000000000000;
    local_268.M[3][1] = _UNK_150689644;
    local_268.M[3][2] = _UNK_150689648;
    local_268.M[3][3] = _UNK_15068964c;
    local_268.M[1][1] = __real_3f800000 / SQRT(param_2);
    local_268.M[2][2] = local_268.M[1][1];
    VectorMatrixMultiply(&local_1a8,(TMatrix<float> *)param_3,&local_268);
    local_168.M[0][0] = local_1a8.M[0][0];
    local_168.M[0][1] = local_1a8.M[0][1];
    local_168.M[0][2] = local_1a8.M[0][2];
    local_168.M[0][3] = local_1a8.M[0][3];
    local_168.M[1][0] = local_1a8.M[1][0];
    local_168.M[1][1] = local_1a8.M[1][1];
    local_168.M[1][2] = local_1a8.M[1][2];
    local_168.M[1][3] = local_1a8.M[1][3];
    local_168.M[2][0] = local_1a8.M[2][0];
    local_168.M[2][1] = local_1a8.M[2][1];
    local_168.M[2][2] = local_1a8.M[2][2];
    local_168.M[2][3] = local_1a8.M[2][3];
    local_228.M[0][0] = *(float *)param_3;
    local_168.M[3][0] = local_1a8.M[3][0];
    local_168.M[3][1] = local_1a8.M[3][1];
    local_168.M[3][2] = local_1a8.M[3][2];
    local_168.M[3][3] = local_1a8.M[3][3];
    local_228.M[1][0] = *(float *)&param_3->field_0x4;
    local_228.M[2][0] = *(float *)&param_3->field_0x8;
    local_228.M[0][1] = *(float *)&param_3->field_0x10;
    local_228.M[1][1] = *(float *)&param_3->field_0x14;
    local_228.M[2][1] = *(float *)&param_3->field_0x18;
    local_228.M[0][2] = *(float *)&param_3->field_0x20;
    local_228.M[1][2] = *(float *)&param_3->field_0x24;
    local_228.M[2][2] = *(float *)&param_3->field_0x28;
    local_228.M[3][0] = ___xmm_3f800000000000000000000000000000;
    local_228.M[3][1] = _UNK_150689644;
    local_228.M[3][2] = _UNK_150689648;
    local_228.M[3][3] = _UNK_15068964c;
    local_228.M[0][3] = 0.0;
    local_228.M[1][3] = 0.0;
    local_228.M[2][3] = 0.0;
    VectorMatrixMultiply(&local_128,&local_168,&local_228);
    local_e8.M[0][0] = local_128.M[0][0];
    local_e8.M[0][1] = local_128.M[0][1];
    local_e8.M[0][2] = local_128.M[0][2];
    local_e8.M[0][3] = local_128.M[0][3];
    local_e8.M[1][0] = local_128.M[1][0];
    local_e8.M[1][1] = local_128.M[1][1];
    local_e8.M[1][2] = local_128.M[1][2];
    local_e8.M[1][3] = local_128.M[1][3];
    local_e8.M[2][0] = local_128.M[2][0];
    local_e8.M[2][1] = local_128.M[2][1];
    local_e8.M[2][2] = local_128.M[2][2];
    local_e8.M[2][3] = local_128.M[2][3];
    local_e8.M[3][0] = local_128.M[3][0];
    local_e8.M[3][1] = local_128.M[3][1];
    local_e8.M[3][2] = local_128.M[3][2];
    local_e8.M[3][3] = local_128.M[3][3];
    VectorMatrixMultiply(&local_a8,&local_e8,&local_1e8);
    local_1e8.M[0][0] = local_a8.M[0][0];
    local_1e8.M[0][1] = local_a8.M[0][1];
    local_1e8.M[0][2] = local_a8.M[0][2];
    local_1e8.M[0][3] = local_a8.M[0][3];
    local_1e8.M[1][0] = local_a8.M[1][0];
    local_1e8.M[1][1] = local_a8.M[1][1];
    local_1e8.M[1][2] = local_a8.M[1][2];
    local_1e8.M[1][3] = local_a8.M[1][3];
    local_1e8.M[2][0] = local_a8.M[2][0];
    local_1e8.M[2][1] = local_a8.M[2][1];
    local_1e8.M[2][2] = local_a8.M[2][2];
    local_1e8.M[2][3] = local_a8.M[2][3];
    local_1e8.M[3][0] = local_a8.M[3][0];
    local_1e8.M[3][1] = local_a8.M[3][1];
    local_1e8.M[3][2] = local_a8.M[3][2];
    local_1e8.M[3][3] = local_a8.M[3][3];
  }
  local_278 = 3;
  iVar9 = param_1 * 9;
  lVar7 = (longlong)param_1 * 0x24;
  uVar6 = iVar9 + 2;
  pafVar10 = local_1e8.M + 2;
  do {
    iVar2 = (this->DmInverseSave).ArrayNum;
    local_280 = (longlong)iVar2;
    fVar1 = ((TMatrix<float> *)(pafVar10 + -2))->M[0][0];
    uVar11 = ~(uVar6 - 2) >> 0x1f;
    uVar5 = 0;
    if (iVar9 < iVar2) {
      uVar5 = uVar11;
    }
    if (uVar5 == 0) {
      local_288 = (longlong)(int)(uVar6 - 2);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(float *)((this->DmInverseSave).AllocatorInstance.Data + lVar7) = fVar1;
    iVar2 = (this->DmInverse).ArrayNum;
    local_280 = (longlong)iVar2;
    fVar1 = ((TMatrix<float> *)(pafVar10 + -2))->M[0][0];
    uVar5 = 0;
    if ((int)(uVar6 - 2) < iVar2) {
      uVar5 = uVar11;
    }
    if (uVar5 == 0) {
      local_288 = (longlong)(int)(uVar6 - 2);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar8 = uVar6 - 1;
    uVar11 = ~(uVar6 - 1) >> 0x1f;
    *(float *)((this->DmInverse).AllocatorInstance.Data + lVar7) = fVar1;
    iVar2 = (this->DmInverseSave).ArrayNum;
    local_280 = (longlong)iVar2;
    fVar1 = pafVar10[-1][0];
    uVar5 = 0;
    if (iVar8 < iVar2) {
      uVar5 = uVar11;
    }
    if (uVar5 == 0) {
      local_288 = (longlong)iVar8;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(float *)((this->DmInverseSave).AllocatorInstance.Data + lVar7 + 4) = fVar1;
    iVar2 = (this->DmInverse).ArrayNum;
    local_280 = (longlong)iVar2;
    fVar1 = pafVar10[-1][0];
    uVar5 = 0;
    if (iVar8 < iVar2) {
      uVar5 = uVar11;
    }
    if (uVar5 == 0) {
      local_288 = (longlong)iVar8;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(float *)((this->DmInverse).AllocatorInstance.Data + lVar7 + 4) = fVar1;
    iVar2 = (this->DmInverseSave).ArrayNum;
    local_280 = (longlong)iVar2;
    fVar1 = (*pafVar10)[0];
    uVar5 = 0;
    if ((int)uVar6 < iVar2) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      local_288 = (longlong)(int)uVar6;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(float *)((this->DmInverseSave).AllocatorInstance.Data + lVar7 + 8) = fVar1;
    iVar2 = (this->DmInverse).ArrayNum;
    local_280 = (longlong)iVar2;
    fVar1 = (*pafVar10)[0];
    uVar5 = 0;
    if ((int)uVar6 < iVar2) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      local_288 = (longlong)(int)uVar6;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar9 = iVar9 + 3;
    uVar6 = uVar6 + 3;
    pafVar10 = (float (*) [4])(*pafVar10 + 1);
    *(float *)((this->DmInverse).AllocatorInstance.Data + lVar7 + 8) = fVar1;
    lVar7 = lVar7 + 0xc;
    local_278 = local_278 + -1;
  } while (local_278 != 0);
  return;
}

// operator() @ 1504a47d0

bool __thiscall
`Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6606092475037646973>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6606092475037646973>,
                       &`public:___cdecl_`public:___cdecl_Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles_const&___ptr64,TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<float,class_TSizedDefaultAllocator<32>_>&&___ptr64,Chaos::Softs::FDeformableXPBDCorotatedParams_const&___ptr64,float_const&___ptr64,bool,bool)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a4810

bool __thiscall
`Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6606092475037646921>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6606092475037646921>,
                       &`public:___cdecl_`public:___cdecl_Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles_const&___ptr64,TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64,float_const&___ptr64,bool)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

