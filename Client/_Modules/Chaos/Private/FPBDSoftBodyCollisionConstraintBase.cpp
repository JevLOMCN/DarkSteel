// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 54

// ApplyComplexInternal<1,1,1> @ 143cb4df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,1>
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined1 *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  uchar uVar13;
  char cVar14;
  int iVar15;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar16;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  TFunctionRef<void___cdecl(int)> *pTVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  uint uVar25;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this_00;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this_01;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  FPAndInvM *pFVar28;
  bool bVar29;
  undefined1 auStackY_2d8 [32];
  undefined1 local_288 [4];
  uint local_284;
  longlong local_280;
  longlong local_278;
  uint local_270;
  TVector<float,3> *local_268;
  FSolverParticlesRange *local_260;
  TVector<float,3> *local_258;
  FPAndInvM *local_250;
  longlong local_248;
  longlong local_240;
  FScriptContainerElement *local_238;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *local_230;
  FScriptContainerElement *local_228;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_220;
  FPAndInvM *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  code *local_208;
  FPBDSoftBodyCollisionConstraintBase **local_200;
  FPAndInvM *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  FPAndInvM *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  code *local_1d8;
  FPBDSoftBodyCollisionConstraintBase **local_1d0;
  FPBDSoftBodyCollisionConstraintBase *local_1c8;
  TVector<float,3> **local_1c0;
  FPAndInvM **local_1b8;
  longlong local_1b0;
  TVector<float,3> *local_1a8;
  longlong local_1a0;
  undefined1 *local_198;
  float local_190;
  FScriptContainerElement **local_188;
  FPBDSoftBodyCollisionConstraintBase *local_180;
  TVector<float,3> **local_178;
  FPAndInvM **local_170;
  undefined1 *local_168;
  longlong local_160;
  TVector<float,3> *local_158;
  longlong local_150;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *local_148;
  float local_140;
  FScriptContainerElement **local_138;
  undefined1 local_128 [16];
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_118;
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_108;
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_f8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_e8;
  TArrayView<Chaos::TVector<float,3>,int> local_d8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_c8;
  undefined1 local_b8 [48];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  bVar29 = -1 < CpuChannel->Enabled;
  local_260 = param_1;
  local_220 = param_3;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId495,
               "FPBDSoftBodyCollisionConstraint_ApplyComplexInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
               ,0x1ef);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId495);
  }
  if (this->bEnableComplexColliders != false) {
    pTVar16 = FSolverParticlesRange::GetPAndInvM(param_1,&local_e8);
    local_250 = pTVar16->DataPtr;
    pTVar17 = FSolverParticlesRange::XArray(param_1,&local_d8);
    uVar11 = _UNK_150689548;
    uVar10 = ___xmm_000000003f8000003f8000003f800000;
    pFVar23 = (param_3->AllocatorInstance).Data;
    local_258 = pTVar17->DataPtr;
    local_270 = param_3->ArrayNum;
    uVar18 = (ulonglong)(int)local_270;
    pFVar27 = pFVar23 + uVar18 * 0x20;
    local_228 = pFVar27;
    while( true ) {
      if (param_3->ArrayNum != (int)uVar18) {
        local_288[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_288);
      }
      if (pFVar23 == pFVar27) break;
      uVar18 = 0;
      local_284 = 0;
      if (0 < *(int *)(pFVar23 + 0x14)) {
        do {
          uVar25 = (uint)uVar18;
          if ((*(longlong *)(pFVar23 + 8) == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar6 = *(longlong *)(pFVar23 + 8);
          uVar26 = *(int *)(pFVar23 + 0x10) + uVar25;
          uVar19 = 0;
          if ((int)uVar26 < *(int *)(lVar6 + 0x68)) {
            uVar19 = ~uVar26 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_278 = *(longlong *)(lVar6 + 0x60);
          local_280 = (longlong)(int)uVar26;
          uVar13 = FImplicitObject::GetType(*(FImplicitObject **)(local_278 + local_280 * 8));
          if ((uVar13 == '&') || (uVar13 == '\x11')) {
            if ((*(longlong *)(pFVar23 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar6 = *(longlong *)(pFVar23 + 8);
            uVar26 = *(int *)(pFVar23 + 0x10) + uVar25;
            uVar19 = 0;
            if ((int)uVar26 < *(int *)(lVar6 + 0x50)) {
              uVar19 = ~uVar26 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            puVar21 = (undefined8 *)(*(longlong *)(lVar6 + 0x48) + (longlong)(int)uVar26 * 0x10);
            local_128._0_8_ = *puVar21;
            local_128._8_8_ = puVar21[1];
            if ((*(longlong *)(pFVar23 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar6 = *(longlong *)(pFVar23 + 8);
            uVar26 = *(int *)(pFVar23 + 0x10) + uVar25;
            uVar19 = 0;
            if ((int)uVar26 < *(int *)(lVar6 + 0x80)) {
              uVar19 = ~uVar26 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_248 = *(longlong *)(lVar6 + 0x78) + (longlong)(int)uVar26 * 0xc;
            if ((*(longlong *)(pFVar23 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_268 = TParticles<float,3>::GetX
                                  (*(TParticles<float,3> **)(pFVar23 + 8),
                                   *(int *)(pFVar23 + 0x10) + uVar25);
            if ((*(longlong *)(pFVar23 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar6 = *(longlong *)(pFVar23 + 8);
            uVar26 = *(int *)(pFVar23 + 0x10) + uVar25;
            uVar19 = 0;
            if ((int)uVar26 < *(int *)(lVar6 + 0x98)) {
              uVar19 = ~uVar26 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pTVar7 = this->CollisionParticleCollided;
            local_240 = *(longlong *)(lVar6 + 0x90) + (longlong)(int)uVar26 * 0xc;
            if (((*(int *)(pFVar23 + 0x10) < 0) ||
                (pTVar7->ArrayNum < *(int *)(pFVar23 + 0x10) + *(int *)(pFVar23 + 0x14))) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x52,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar15 = *(int *)(pFVar23 + 0x10);
            pFVar27 = (pTVar7->AllocatorInstance).Data;
            iVar5 = *(int *)(pFVar23 + 0x14);
            if ((iVar5 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar19 = 0;
            if ((int)uVar25 < iVar5) {
              uVar19 = ~uVar25 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_b8._0_8_ = local_128._0_8_;
            local_b8._8_8_ = local_128._8_8_;
            local_238 = pFVar27 + (longlong)(int)uVar25 + (longlong)iVar15;
            uVar26 = *(int *)(pFVar23 + 0x18) - uVar25 ^ (uint)(uVar18 >> 0xd);
            local_b8._28_4_ = 0;
            local_b8._16_12_ = (undefined1  [12])*local_268;
            local_b8._32_8_ = uVar10;
            local_b8._40_8_ = uVar11;
            uVar19 = (-0x61c88647 - uVar26) - uVar25 ^ uVar26 << 8;
            uVar24 = (uVar25 - uVar19) - uVar26 ^ uVar19 >> 0xd;
            uVar26 = (uVar26 - uVar24) - uVar19 ^ uVar24 >> 0xc;
            uVar19 = (uVar19 - uVar24) - uVar26 ^ uVar26 << 0x10;
            uVar24 = (uVar24 - uVar19) - uVar26 ^ uVar19 >> 5;
            uVar26 = (uVar26 - uVar24) - uVar19 ^ uVar24 >> 3;
            uVar19 = (uVar19 - uVar26) - uVar24 ^ uVar26 << 10;
            if (*(int *)&(this->ComplexBoneData).field_0x8 !=
                *(int *)&(this->ComplexBoneData).field_0x34) {
              puVar8 = *(undefined1 **)&(this->ComplexBoneData).field_0x40;
              puVar20 = &(this->ComplexBoneData).field_0x38;
              if (puVar8 != (undefined1 *)0x0) {
                puVar20 = puVar8;
              }
              iVar15 = *(int *)(puVar20 +
                               (ulonglong)
                               (*(int *)&(this->ComplexBoneData).field_0x48 - 1U &
                               ((uVar24 - uVar19) - uVar26 ^ uVar19 >> 0xf)) * 4);
              if (iVar15 != -1) {
                do {
                  puVar21 = (undefined8 *)
                            ((longlong)iVar15 * 0x60 + *(longlong *)&this->ComplexBoneData);
                  if (((int)*puVar21 == *(int *)(pFVar23 + 0x18)) &&
                     ((uint)((ulonglong)*puVar21 >> 0x20) == uVar25)) {
                    if (iVar15 != -1) {
                      local_230 = (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)(puVar21 + 1);
                      if (puVar21 == (undefined8 *)0x0) {
                        local_230 = (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0;
                      }
                      this_00 = *(TWeightedLatticeImplicitObject<Chaos::FLevelSet> **)
                                 (local_278 + local_280 * 8);
                      cVar14 = this_00->field_0x18;
                      if (local_230 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0)
                      goto LAB_143cb53e6;
                      if ((cVar14 == '&') &&
                         (this_00 != (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0)) {
                        fVar3 = this->SoftBodyCollisionThickness;
                        fVar4 = this->CollisionThickness;
                        if ((*(longlong *)&param_1->field_0x8 == 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Particles",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                                ,0x57,L""), bVar12)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        lVar6 = *(longlong *)&param_1->field_0x8;
                        if (((*(int *)&param_1->field_0x10 < 0) ||
                            (*(int *)(lVar6 + 0xb0) <
                             *(int *)&param_1->field_0x10 + *(int *)&param_1->field_0x14)) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                                ,0x52,L""), bVar12)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        pFVar28 = (FPAndInvM *)
                                  ((longlong)*(int *)&param_1->field_0x10 * 0x10 +
                                  *(longlong *)(lVar6 + 0xa8));
                        iVar15 = *(int *)&param_1->field_0x14;
                        if ((iVar15 < 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("ArrayNum >= 0",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                ,0xfe,L""), bVar12)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        local_118._12_4_ = uStack_20c;
                        local_118.ArrayNum = iVar15;
                        local_218 = pFVar28;
                        iStack_210 = iVar15;
                        local_118.DataPtr = pFVar28;
                        TWeightedLatticeImplicitObject<Chaos::FLevelSet>::
                        BatchPhiWithNormalAndGreatestInfluenceBone
                                  (this_00,&local_118,(TRigidTransform<float,3> *)local_b8,
                                   fVar3 + fVar4,&this->BatchPhis,&this->BatchNormals,
                                   &this->BatchVelocityBones);
                      }
                      else {
                        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("!\"Enclosing block should never be called\"",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
                                            ,0x213,L"");
                        if (bVar12) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                      }
                      local_178 = &local_258;
                      pTVar22 = (TFunctionRef<void___cdecl(int)> *)&local_208;
                      local_170 = &local_250;
                      local_168 = local_b8;
                      local_160 = local_248;
                      local_158 = local_268;
                      local_150 = local_240;
                      local_148 = local_230;
                      local_138 = &local_238;
                      local_200 = &local_180;
                      local_208 = UE::Core::Private::Function::
                                  TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,1>'::__l18::<lambda_1>,void,int>
                                  ::Call;
                      local_180 = this;
                      local_140 = param_2;
                      goto LAB_143cb59ca;
                    }
                    break;
                  }
                  iVar15 = *(int *)(puVar21 + 0xb);
                } while (iVar15 != -1);
              }
            }
            this_00 = *(TWeightedLatticeImplicitObject<Chaos::FLevelSet> **)
                       (local_278 + local_280 * 8);
            cVar14 = this_00->field_0x18;
LAB_143cb53e6:
            this_01 = this_00;
            if (cVar14 != '\x11') {
              this_01 = (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0;
            }
            if (this_01 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
              if ((cVar14 == '&') &&
                 (this_00 != (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0)) {
                pTVar16 = FSolverParticlesRange::GetPAndInvM(param_1,&local_c8);
                local_1e8 = pTVar16->DataPtr;
                iStack_1e0 = pTVar16->ArrayNum;
                local_f8._12_4_ = uStack_1dc;
                local_f8.ArrayNum = iStack_1e0;
                local_f8.DataPtr = local_1e8;
                TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormal
                          (this_00,&local_f8,(TRigidTransform<float,3> *)local_b8,&this->BatchPhis,
                           &this->BatchNormals);
              }
              else {
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!\"Enclosing block should never be called\"",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
                                    ,0x25a,L"");
                if (bVar12) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
            }
            else {
              uVar25 = *(uint *)&param_1->field_0x14;
              pTVar1 = &this->BatchPhis;
              iVar15 = (this->BatchPhis).ArrayNum;
              if (iVar15 < (int)uVar25) {
                UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar25 - iVar15,&pTVar1->AllocatorInstance,
                           &(this->BatchPhis).ArrayNum,&(this->BatchPhis).ArrayMax);
              }
              else {
                if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
                }
                if ((int)uVar25 < iVar15) {
                  uVar19 = iVar15 - uVar25;
                  if (((int)(uVar25 | uVar19) < 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x458,
                                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  if (uVar19 != 0) {
                    pFVar27 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar25 * 4;
                    iVar15 = ((this->BatchPhis).ArrayNum - uVar19) - uVar25;
                    if (iVar15 != 0) {
                      memmove(pFVar27,pFVar27 + (longlong)(int)uVar19 * 4,(longlong)iVar15 << 2);
                    }
                    iVar15 = (this->BatchPhis).ArrayNum - uVar19;
                    (this->BatchPhis).ArrayNum = iVar15;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,&pTVar1->AllocatorInstance,iVar15,&(this->BatchPhis).ArrayMax);
                  }
                }
              }
              pTVar2 = &this->BatchNormals;
              iVar15 = (this->BatchNormals).ArrayNum;
              uVar25 = *(uint *)&local_260->field_0x14;
              if (iVar15 < (int)uVar25) {
                UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,uVar25 - iVar15,&pTVar2->AllocatorInstance,
                           &(this->BatchNormals).ArrayNum,&(this->BatchNormals).ArrayMax);
              }
              else {
                if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
                }
                if ((int)uVar25 < iVar15) {
                  uVar19 = iVar15 - uVar25;
                  if (((int)(uVar19 | uVar25) < 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x458,
                                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  if (uVar19 != 0) {
                    pFVar27 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar25 * 0xc;
                    iVar15 = ((this->BatchNormals).ArrayNum - uVar19) - uVar25;
                    if (iVar15 != 0) {
                      memmove(pFVar27,pFVar27 + (longlong)(int)uVar19 * 0xc,(longlong)iVar15 * 0xc);
                    }
                    iVar15 = (this->BatchNormals).ArrayNum - uVar19;
                    (this->BatchNormals).ArrayNum = iVar15;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0xc,4,&pTVar2->AllocatorInstance,iVar15,
                               &(this->BatchNormals).ArrayMax);
                  }
                }
              }
              param_1 = local_260;
              fVar3 = this->SoftBodyCollisionThickness;
              fVar4 = this->CollisionThickness;
              local_280 = CONCAT44(local_280._4_4_,*(undefined4 *)&local_260->field_0x14);
              if ((*(longlong *)&local_260->field_0x8 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x57,L""), bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar6 = *(longlong *)&param_1->field_0x8;
              if (((*(int *)&param_1->field_0x10 < 0) ||
                  (*(int *)(lVar6 + 0xb0) <
                   *(int *)&param_1->field_0x10 + *(int *)&param_1->field_0x14)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x52,L""), bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar28 = (FPAndInvM *)
                        ((longlong)*(int *)&param_1->field_0x10 * 0x10 + *(longlong *)(lVar6 + 0xa8)
                        );
              iVar15 = *(int *)&param_1->field_0x14;
              if ((iVar15 < 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              local_108._12_4_ = uStack_1ec;
              local_108.ArrayNum = iVar15;
              local_1f8 = pFVar28;
              iStack_1f0 = iVar15;
              local_108.DataPtr = pFVar28;
              FMLLevelSet::BatchPhiWithNormal
                        ((FMLLevelSet *)this_01,&local_108,(TRigidTransform<float,3> *)local_b8,
                         &this->BatchPhis,&this->BatchNormals,fVar3 + fVar4,0,0,(int)local_280);
            }
            local_1c0 = &local_258;
            local_1b8 = &local_250;
            local_1b0 = local_248;
            local_1a8 = local_268;
            local_1a0 = local_240;
            local_198 = local_b8;
            local_188 = &local_238;
            local_1d0 = &local_1c8;
            local_1d8 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,1>'::__l32::<lambda_2>,void,int>
                        ::Call;
            pTVar22 = (TFunctionRef<void___cdecl(int)> *)&local_1d8;
            local_1c8 = this;
            local_190 = param_2;
LAB_143cb59ca:
            PhysicsParallelFor(*(int *)&param_1->field_0x14,pTVar22,false);
            uVar25 = local_284;
          }
          local_284 = uVar25 + 1;
          uVar18 = (ulonglong)local_284;
          pFVar27 = local_228;
          param_3 = local_220;
        } while ((int)local_284 < *(int *)(pFVar23 + 0x14));
      }
      uVar18 = (ulonglong)local_270;
      pFVar23 = pFVar23 + 0x20;
    }
  }
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyComplexInternal<1,1,0> @ 143cb5a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,0>
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined1 *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  uchar uVar13;
  char cVar14;
  int iVar15;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar16;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  TFunctionRef<void___cdecl(int)> *pTVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  uint uVar25;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this_00;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this_01;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  FPAndInvM *pFVar28;
  bool bVar29;
  undefined1 auStackY_2d8 [32];
  undefined1 local_288 [4];
  uint local_284;
  longlong local_280;
  longlong local_278;
  uint local_270;
  TVector<float,3> *local_268;
  FSolverParticlesRange *local_260;
  TVector<float,3> *local_258;
  FPAndInvM *local_250;
  longlong local_248;
  longlong local_240;
  FScriptContainerElement *local_238;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *local_230;
  FScriptContainerElement *local_228;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_220;
  FPAndInvM *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  code *local_208;
  FPBDSoftBodyCollisionConstraintBase **local_200;
  FPAndInvM *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  FPAndInvM *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  code *local_1d8;
  FPBDSoftBodyCollisionConstraintBase **local_1d0;
  FPBDSoftBodyCollisionConstraintBase *local_1c8;
  TVector<float,3> **local_1c0;
  FPAndInvM **local_1b8;
  longlong local_1b0;
  TVector<float,3> *local_1a8;
  longlong local_1a0;
  undefined1 *local_198;
  float local_190;
  FScriptContainerElement **local_188;
  FPBDSoftBodyCollisionConstraintBase *local_180;
  TVector<float,3> **local_178;
  FPAndInvM **local_170;
  undefined1 *local_168;
  longlong local_160;
  TVector<float,3> *local_158;
  longlong local_150;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *local_148;
  float local_140;
  FScriptContainerElement **local_138;
  undefined1 local_128 [16];
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_118;
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_108;
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_f8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_e8;
  TArrayView<Chaos::TVector<float,3>,int> local_d8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_c8;
  undefined1 local_b8 [48];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  bVar29 = -1 < CpuChannel->Enabled;
  local_260 = param_1;
  local_220 = param_3;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,0>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId495,
               "FPBDSoftBodyCollisionConstraint_ApplyComplexInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
               ,0x1ef);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,0>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId495);
  }
  if (this->bEnableComplexColliders != false) {
    pTVar16 = FSolverParticlesRange::GetPAndInvM(param_1,&local_e8);
    local_250 = pTVar16->DataPtr;
    pTVar17 = FSolverParticlesRange::XArray(param_1,&local_d8);
    uVar11 = _UNK_150689548;
    uVar10 = ___xmm_000000003f8000003f8000003f800000;
    pFVar23 = (param_3->AllocatorInstance).Data;
    local_258 = pTVar17->DataPtr;
    local_270 = param_3->ArrayNum;
    uVar18 = (ulonglong)(int)local_270;
    pFVar27 = pFVar23 + uVar18 * 0x20;
    local_228 = pFVar27;
    while( true ) {
      if (param_3->ArrayNum != (int)uVar18) {
        local_288[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_288);
      }
      if (pFVar23 == pFVar27) break;
      uVar18 = 0;
      local_284 = 0;
      if (0 < *(int *)(pFVar23 + 0x14)) {
        do {
          uVar25 = (uint)uVar18;
          if ((*(longlong *)(pFVar23 + 8) == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar6 = *(longlong *)(pFVar23 + 8);
          uVar26 = *(int *)(pFVar23 + 0x10) + uVar25;
          uVar19 = 0;
          if ((int)uVar26 < *(int *)(lVar6 + 0x68)) {
            uVar19 = ~uVar26 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_278 = *(longlong *)(lVar6 + 0x60);
          local_280 = (longlong)(int)uVar26;
          uVar13 = FImplicitObject::GetType(*(FImplicitObject **)(local_278 + local_280 * 8));
          if ((uVar13 == '&') || (uVar13 == '\x11')) {
            if ((*(longlong *)(pFVar23 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar6 = *(longlong *)(pFVar23 + 8);
            uVar26 = *(int *)(pFVar23 + 0x10) + uVar25;
            uVar19 = 0;
            if ((int)uVar26 < *(int *)(lVar6 + 0x50)) {
              uVar19 = ~uVar26 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            puVar21 = (undefined8 *)(*(longlong *)(lVar6 + 0x48) + (longlong)(int)uVar26 * 0x10);
            local_128._0_8_ = *puVar21;
            local_128._8_8_ = puVar21[1];
            if ((*(longlong *)(pFVar23 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar6 = *(longlong *)(pFVar23 + 8);
            uVar26 = *(int *)(pFVar23 + 0x10) + uVar25;
            uVar19 = 0;
            if ((int)uVar26 < *(int *)(lVar6 + 0x80)) {
              uVar19 = ~uVar26 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_248 = *(longlong *)(lVar6 + 0x78) + (longlong)(int)uVar26 * 0xc;
            if ((*(longlong *)(pFVar23 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_268 = TParticles<float,3>::GetX
                                  (*(TParticles<float,3> **)(pFVar23 + 8),
                                   *(int *)(pFVar23 + 0x10) + uVar25);
            if ((*(longlong *)(pFVar23 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar6 = *(longlong *)(pFVar23 + 8);
            uVar26 = *(int *)(pFVar23 + 0x10) + uVar25;
            uVar19 = 0;
            if ((int)uVar26 < *(int *)(lVar6 + 0x98)) {
              uVar19 = ~uVar26 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pTVar7 = this->CollisionParticleCollided;
            local_240 = *(longlong *)(lVar6 + 0x90) + (longlong)(int)uVar26 * 0xc;
            if (((*(int *)(pFVar23 + 0x10) < 0) ||
                (pTVar7->ArrayNum < *(int *)(pFVar23 + 0x10) + *(int *)(pFVar23 + 0x14))) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x52,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar15 = *(int *)(pFVar23 + 0x10);
            pFVar27 = (pTVar7->AllocatorInstance).Data;
            iVar5 = *(int *)(pFVar23 + 0x14);
            if ((iVar5 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar19 = 0;
            if ((int)uVar25 < iVar5) {
              uVar19 = ~uVar25 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_b8._0_8_ = local_128._0_8_;
            local_b8._8_8_ = local_128._8_8_;
            local_238 = pFVar27 + (longlong)(int)uVar25 + (longlong)iVar15;
            uVar26 = *(int *)(pFVar23 + 0x18) - uVar25 ^ (uint)(uVar18 >> 0xd);
            local_b8._28_4_ = 0;
            local_b8._16_12_ = (undefined1  [12])*local_268;
            local_b8._32_8_ = uVar10;
            local_b8._40_8_ = uVar11;
            uVar19 = (-0x61c88647 - uVar26) - uVar25 ^ uVar26 << 8;
            uVar24 = (uVar25 - uVar19) - uVar26 ^ uVar19 >> 0xd;
            uVar26 = (uVar26 - uVar24) - uVar19 ^ uVar24 >> 0xc;
            uVar19 = (uVar19 - uVar24) - uVar26 ^ uVar26 << 0x10;
            uVar24 = (uVar24 - uVar19) - uVar26 ^ uVar19 >> 5;
            uVar26 = (uVar26 - uVar24) - uVar19 ^ uVar24 >> 3;
            uVar19 = (uVar19 - uVar26) - uVar24 ^ uVar26 << 10;
            if (*(int *)&(this->ComplexBoneData).field_0x8 !=
                *(int *)&(this->ComplexBoneData).field_0x34) {
              puVar8 = *(undefined1 **)&(this->ComplexBoneData).field_0x40;
              puVar20 = &(this->ComplexBoneData).field_0x38;
              if (puVar8 != (undefined1 *)0x0) {
                puVar20 = puVar8;
              }
              iVar15 = *(int *)(puVar20 +
                               (ulonglong)
                               (*(int *)&(this->ComplexBoneData).field_0x48 - 1U &
                               ((uVar24 - uVar19) - uVar26 ^ uVar19 >> 0xf)) * 4);
              if (iVar15 != -1) {
                do {
                  puVar21 = (undefined8 *)
                            ((longlong)iVar15 * 0x60 + *(longlong *)&this->ComplexBoneData);
                  if (((int)*puVar21 == *(int *)(pFVar23 + 0x18)) &&
                     ((uint)((ulonglong)*puVar21 >> 0x20) == uVar25)) {
                    if (iVar15 != -1) {
                      local_230 = (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)(puVar21 + 1);
                      if (puVar21 == (undefined8 *)0x0) {
                        local_230 = (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0;
                      }
                      this_00 = *(TWeightedLatticeImplicitObject<Chaos::FLevelSet> **)
                                 (local_278 + local_280 * 8);
                      cVar14 = this_00->field_0x18;
                      if (local_230 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0)
                      goto LAB_143cb6076;
                      if ((cVar14 == '&') &&
                         (this_00 != (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0)) {
                        fVar3 = this->SoftBodyCollisionThickness;
                        fVar4 = this->CollisionThickness;
                        if ((*(longlong *)&param_1->field_0x8 == 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Particles",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                                ,0x57,L""), bVar12)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        lVar6 = *(longlong *)&param_1->field_0x8;
                        if (((*(int *)&param_1->field_0x10 < 0) ||
                            (*(int *)(lVar6 + 0xb0) <
                             *(int *)&param_1->field_0x10 + *(int *)&param_1->field_0x14)) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                                ,0x52,L""), bVar12)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        pFVar28 = (FPAndInvM *)
                                  ((longlong)*(int *)&param_1->field_0x10 * 0x10 +
                                  *(longlong *)(lVar6 + 0xa8));
                        iVar15 = *(int *)&param_1->field_0x14;
                        if ((iVar15 < 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("ArrayNum >= 0",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                ,0xfe,L""), bVar12)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        local_118._12_4_ = uStack_20c;
                        local_118.ArrayNum = iVar15;
                        local_218 = pFVar28;
                        iStack_210 = iVar15;
                        local_118.DataPtr = pFVar28;
                        TWeightedLatticeImplicitObject<Chaos::FLevelSet>::
                        BatchPhiWithNormalAndGreatestInfluenceBone
                                  (this_00,&local_118,(TRigidTransform<float,3> *)local_b8,
                                   fVar3 + fVar4,&this->BatchPhis,&this->BatchNormals,
                                   &this->BatchVelocityBones);
                      }
                      else {
                        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("!\"Enclosing block should never be called\"",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
                                            ,0x213,L"");
                        if (bVar12) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                      }
                      local_178 = &local_258;
                      pTVar22 = (TFunctionRef<void___cdecl(int)> *)&local_208;
                      local_170 = &local_250;
                      local_168 = local_b8;
                      local_160 = local_248;
                      local_158 = local_268;
                      local_150 = local_240;
                      local_148 = local_230;
                      local_138 = &local_238;
                      local_200 = &local_180;
                      local_208 = UE::Core::Private::Function::
                                  TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,0>'::__l18::<lambda_1>,void,int>
                                  ::Call;
                      local_180 = this;
                      local_140 = param_2;
                      goto LAB_143cb665a;
                    }
                    break;
                  }
                  iVar15 = *(int *)(puVar21 + 0xb);
                } while (iVar15 != -1);
              }
            }
            this_00 = *(TWeightedLatticeImplicitObject<Chaos::FLevelSet> **)
                       (local_278 + local_280 * 8);
            cVar14 = this_00->field_0x18;
LAB_143cb6076:
            this_01 = this_00;
            if (cVar14 != '\x11') {
              this_01 = (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0;
            }
            if (this_01 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
              if ((cVar14 == '&') &&
                 (this_00 != (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0)) {
                pTVar16 = FSolverParticlesRange::GetPAndInvM(param_1,&local_c8);
                local_1e8 = pTVar16->DataPtr;
                iStack_1e0 = pTVar16->ArrayNum;
                local_f8._12_4_ = uStack_1dc;
                local_f8.ArrayNum = iStack_1e0;
                local_f8.DataPtr = local_1e8;
                TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormal
                          (this_00,&local_f8,(TRigidTransform<float,3> *)local_b8,&this->BatchPhis,
                           &this->BatchNormals);
              }
              else {
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!\"Enclosing block should never be called\"",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
                                    ,0x25a,L"");
                if (bVar12) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
            }
            else {
              uVar25 = *(uint *)&param_1->field_0x14;
              pTVar1 = &this->BatchPhis;
              iVar15 = (this->BatchPhis).ArrayNum;
              if (iVar15 < (int)uVar25) {
                UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar25 - iVar15,&pTVar1->AllocatorInstance,
                           &(this->BatchPhis).ArrayNum,&(this->BatchPhis).ArrayMax);
              }
              else {
                if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
                }
                if ((int)uVar25 < iVar15) {
                  uVar19 = iVar15 - uVar25;
                  if (((int)(uVar25 | uVar19) < 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x458,
                                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  if (uVar19 != 0) {
                    pFVar27 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar25 * 4;
                    iVar15 = ((this->BatchPhis).ArrayNum - uVar19) - uVar25;
                    if (iVar15 != 0) {
                      memmove(pFVar27,pFVar27 + (longlong)(int)uVar19 * 4,(longlong)iVar15 << 2);
                    }
                    iVar15 = (this->BatchPhis).ArrayNum - uVar19;
                    (this->BatchPhis).ArrayNum = iVar15;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,&pTVar1->AllocatorInstance,iVar15,&(this->BatchPhis).ArrayMax);
                  }
                }
              }
              pTVar2 = &this->BatchNormals;
              iVar15 = (this->BatchNormals).ArrayNum;
              uVar25 = *(uint *)&local_260->field_0x14;
              if (iVar15 < (int)uVar25) {
                UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,uVar25 - iVar15,&pTVar2->AllocatorInstance,
                           &(this->BatchNormals).ArrayNum,&(this->BatchNormals).ArrayMax);
              }
              else {
                if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
                }
                if ((int)uVar25 < iVar15) {
                  uVar19 = iVar15 - uVar25;
                  if (((int)(uVar19 | uVar25) < 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x458,
                                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  if (uVar19 != 0) {
                    pFVar27 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar25 * 0xc;
                    iVar15 = ((this->BatchNormals).ArrayNum - uVar19) - uVar25;
                    if (iVar15 != 0) {
                      memmove(pFVar27,pFVar27 + (longlong)(int)uVar19 * 0xc,(longlong)iVar15 * 0xc);
                    }
                    iVar15 = (this->BatchNormals).ArrayNum - uVar19;
                    (this->BatchNormals).ArrayNum = iVar15;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0xc,4,&pTVar2->AllocatorInstance,iVar15,
                               &(this->BatchNormals).ArrayMax);
                  }
                }
              }
              param_1 = local_260;
              fVar3 = this->SoftBodyCollisionThickness;
              fVar4 = this->CollisionThickness;
              local_280 = CONCAT44(local_280._4_4_,*(undefined4 *)&local_260->field_0x14);
              if ((*(longlong *)&local_260->field_0x8 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x57,L""), bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar6 = *(longlong *)&param_1->field_0x8;
              if (((*(int *)&param_1->field_0x10 < 0) ||
                  (*(int *)(lVar6 + 0xb0) <
                   *(int *)&param_1->field_0x10 + *(int *)&param_1->field_0x14)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x52,L""), bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar28 = (FPAndInvM *)
                        ((longlong)*(int *)&param_1->field_0x10 * 0x10 + *(longlong *)(lVar6 + 0xa8)
                        );
              iVar15 = *(int *)&param_1->field_0x14;
              if ((iVar15 < 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              local_108._12_4_ = uStack_1ec;
              local_108.ArrayNum = iVar15;
              local_1f8 = pFVar28;
              iStack_1f0 = iVar15;
              local_108.DataPtr = pFVar28;
              FMLLevelSet::BatchPhiWithNormal
                        ((FMLLevelSet *)this_01,&local_108,(TRigidTransform<float,3> *)local_b8,
                         &this->BatchPhis,&this->BatchNormals,fVar3 + fVar4,0,0,(int)local_280);
            }
            local_1c0 = &local_258;
            local_1b8 = &local_250;
            local_1b0 = local_248;
            local_1a8 = local_268;
            local_1a0 = local_240;
            local_198 = local_b8;
            local_188 = &local_238;
            local_1d0 = &local_1c8;
            local_1d8 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,0>'::__l32::<lambda_2>,void,int>
                        ::Call;
            pTVar22 = (TFunctionRef<void___cdecl(int)> *)&local_1d8;
            local_1c8 = this;
            local_190 = param_2;
LAB_143cb665a:
            PhysicsParallelFor(*(int *)&param_1->field_0x14,pTVar22,false);
            uVar25 = local_284;
          }
          local_284 = uVar25 + 1;
          uVar18 = (ulonglong)local_284;
          pFVar27 = local_228;
          param_3 = local_220;
        } while ((int)local_284 < *(int *)(pFVar23 + 0x14));
      }
      uVar18 = (ulonglong)local_270;
      pFVar23 = pFVar23 + 0x20;
    }
  }
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyComplexInternal<1,0,1> @ 143cb6710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,0,1>
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar7;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this_00;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FPBDSoftBodyCollisionConstraintBase *pFVar11;
  bool bVar12;
  uchar uVar13;
  uint uVar14;
  int iVar15;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar16;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar17;
  ulonglong uVar18;
  TVector<float,3> *pTVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  FPAndInvM *pFVar24;
  FSolverParticlesRange *pFVar25;
  FScriptContainerElement *pFVar26;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar27;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar28;
  bool bVar29;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1a8 [4];
  uint local_1a4;
  FPBDSoftBodyCollisionConstraintBase *local_1a0;
  FSolverParticlesRange *local_198;
  uint local_190;
  TVector<float,3> *local_188;
  FPAndInvM *local_180;
  FScriptContainerElement *local_178;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_170;
  FScriptContainerElement *local_168;
  FPAndInvM *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  FPAndInvM *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  code *local_138;
  FPBDSoftBodyCollisionConstraintBase **local_130;
  FPBDSoftBodyCollisionConstraintBase *local_128;
  TVector<float,3> **local_120;
  FPAndInvM **local_118;
  undefined1 *local_110;
  FScriptContainerElement **local_108;
  undefined1 local_f8 [16];
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_e8;
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_d8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_c8;
  TArrayView<Chaos::TVector<float,3>,int> local_b8;
  undefined1 local_a8 [48];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar29 = -1 < CpuChannel->Enabled;
  local_1a0 = this;
  local_198 = param_1;
  local_170 = param_3;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,0,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId495,
               "FPBDSoftBodyCollisionConstraint_ApplyComplexInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
               ,0x1ef);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,0,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId495);
  }
  if (this->bEnableComplexColliders != false) {
    pTVar16 = FSolverParticlesRange::GetPAndInvM(param_1,&local_c8);
    local_180 = pTVar16->DataPtr;
    pTVar17 = FSolverParticlesRange::XArray(param_1,&local_b8);
    uVar10 = _UNK_150689548;
    uVar9 = ___xmm_000000003f8000003f8000003f800000;
    pFVar26 = (param_3->AllocatorInstance).Data;
    local_188 = pTVar17->DataPtr;
    local_190 = param_3->ArrayNum;
    uVar18 = (ulonglong)(int)local_190;
    pFVar23 = pFVar26 + uVar18 * 0x20;
    local_168 = pFVar23;
    while( true ) {
      if (param_3->ArrayNum != (int)uVar18) {
        local_1a8[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_1a8);
      }
      if (pFVar26 == pFVar23) break;
      local_1a4 = 0;
      if (0 < *(int *)(pFVar26 + 0x14)) {
        do {
          uVar14 = local_1a4;
          if ((*(longlong *)(pFVar26 + 8) == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar5 = *(longlong *)(pFVar26 + 8);
          uVar21 = *(int *)(pFVar26 + 0x10) + uVar14;
          uVar20 = 0;
          if ((int)uVar21 < *(int *)(lVar5 + 0x68)) {
            uVar20 = ~uVar21 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar5 = *(longlong *)(lVar5 + 0x60);
          uVar13 = FImplicitObject::GetType
                             (*(FImplicitObject **)(lVar5 + (longlong)(int)uVar21 * 8));
          if ((uVar13 == '&') || (uVar13 == '\x11')) {
            if ((*(longlong *)(pFVar26 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar6 = *(longlong *)(pFVar26 + 8);
            uVar22 = *(int *)(pFVar26 + 0x10) + uVar14;
            uVar20 = 0;
            if ((int)uVar22 < *(int *)(lVar6 + 0x50)) {
              uVar20 = ~uVar22 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            puVar1 = (undefined8 *)(*(longlong *)(lVar6 + 0x48) + (longlong)(int)uVar22 * 0x10);
            local_f8._0_8_ = *puVar1;
            local_f8._8_8_ = puVar1[1];
            if ((*(longlong *)(pFVar26 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar20 = 0;
            if ((int)(*(int *)(pFVar26 + 0x10) + uVar14) <
                *(int *)(*(longlong *)(pFVar26 + 8) + 0x80)) {
              uVar20 = ~(*(int *)(pFVar26 + 0x10) + uVar14) >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((*(longlong *)(pFVar26 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pTVar19 = TParticles<float,3>::GetX
                                (*(TParticles<float,3> **)(pFVar26 + 8),
                                 *(int *)(pFVar26 + 0x10) + uVar14);
            if ((*(longlong *)(pFVar26 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar14 = 0;
            if ((int)(*(int *)(pFVar26 + 0x10) + local_1a4) <
                *(int *)(*(longlong *)(pFVar26 + 8) + 0x98)) {
              uVar14 = ~(*(int *)(pFVar26 + 0x10) + local_1a4) >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pTVar7 = local_1a0->CollisionParticleCollided;
            if (((*(int *)(pFVar26 + 0x10) < 0) ||
                (pTVar7->ArrayNum < *(int *)(pFVar26 + 0x10) + *(int *)(pFVar26 + 0x14))) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x52,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar15 = *(int *)(pFVar26 + 0x10);
            pFVar23 = (pTVar7->AllocatorInstance).Data;
            iVar4 = *(int *)(pFVar26 + 0x14);
            if ((iVar4 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar14 = 0;
            if ((int)local_1a4 < iVar4) {
              uVar14 = ~local_1a4 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar25 = local_198;
            pFVar11 = local_1a0;
            local_a8._0_8_ = local_f8._0_8_;
            local_a8._8_8_ = local_f8._8_8_;
            local_178 = pFVar23 + (longlong)(int)local_1a4 + (longlong)iVar15;
            local_a8._32_8_ = uVar9;
            local_a8._40_8_ = uVar10;
            local_a8._28_4_ = 0;
            local_a8._16_12_ = (undefined1  [12])*pTVar19;
            this_00 = *(TWeightedLatticeImplicitObject<Chaos::FLevelSet> **)
                       (lVar5 + (longlong)(int)uVar21 * 8);
            if (this_00->field_0x18 == '\x11') {
              if (this_00 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
LAB_143cb6fc7:
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!\"Enclosing block should never be called\"",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
                                    ,0x299,L"");
                pFVar25 = local_198;
                if (bVar12) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              else {
                pTVar27 = &local_1a0->BatchPhis;
                iVar15 = (local_1a0->BatchPhis).ArrayNum;
                uVar14 = *(uint *)&local_198->field_0x14;
                if (iVar15 < (int)uVar14) {
                  UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,uVar14 - iVar15,&pTVar27->AllocatorInstance,
                             &(local_1a0->BatchPhis).ArrayNum,&(local_1a0->BatchPhis).ArrayMax);
                }
                else {
                  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
                  }
                  if ((int)uVar14 < iVar15) {
                    uVar20 = iVar15 - uVar14;
                    if (((int)(uVar20 | uVar14) < 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x458,
                                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    if (uVar20 != 0) {
                      pFVar23 = (pTVar27->AllocatorInstance).Data + (longlong)(int)uVar14 * 4;
                      iVar15 = ((pFVar11->BatchPhis).ArrayNum - uVar20) - uVar14;
                      if (iVar15 != 0) {
                        memmove(pFVar23,pFVar23 + (longlong)(int)uVar20 * 4,(longlong)iVar15 << 2);
                      }
                      iVar15 = (pFVar11->BatchPhis).ArrayNum - uVar20;
                      (pFVar11->BatchPhis).ArrayNum = iVar15;
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,&pTVar27->AllocatorInstance,iVar15,
                                 &(pFVar11->BatchPhis).ArrayMax);
                    }
                  }
                }
                pFVar11 = local_1a0;
                uVar14 = *(uint *)&pFVar25->field_0x14;
                pTVar28 = &local_1a0->BatchNormals;
                iVar15 = (local_1a0->BatchNormals).ArrayNum;
                if (iVar15 < (int)uVar14) {
                  UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,uVar14 - iVar15,&pTVar28->AllocatorInstance,
                             &(local_1a0->BatchNormals).ArrayNum,&(local_1a0->BatchNormals).ArrayMax
                            );
                }
                else {
                  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
                  }
                  if ((int)uVar14 < iVar15) {
                    uVar20 = iVar15 - uVar14;
                    if (((int)(uVar20 | uVar14) < 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x458,
                                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    if (uVar20 != 0) {
                      pFVar23 = (pTVar28->AllocatorInstance).Data + (longlong)(int)uVar14 * 0xc;
                      iVar15 = ((pFVar11->BatchNormals).ArrayNum - uVar20) - uVar14;
                      if (iVar15 != 0) {
                        memmove(pFVar23,pFVar23 + (longlong)(int)uVar20 * 0xc,(longlong)iVar15 * 0xc
                               );
                      }
                      iVar15 = (pFVar11->BatchNormals).ArrayNum - uVar20;
                      (pFVar11->BatchNormals).ArrayNum = iVar15;
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0xc,4,&pTVar28->AllocatorInstance,iVar15,
                                 &(pFVar11->BatchNormals).ArrayMax);
                    }
                  }
                }
                iVar15 = *(int *)&pFVar25->field_0x14;
                fVar2 = local_1a0->SoftBodyCollisionThickness;
                fVar3 = local_1a0->CollisionThickness;
                if ((*(longlong *)&pFVar25->field_0x8 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Particles",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x57,L""), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                lVar5 = *(longlong *)&pFVar25->field_0x8;
                if (((*(int *)&pFVar25->field_0x10 < 0) ||
                    (*(int *)(lVar5 + 0xb0) <
                     *(int *)&pFVar25->field_0x10 + *(int *)&pFVar25->field_0x14)) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x52,L""), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar24 = (FPAndInvM *)
                          ((longlong)*(int *)&pFVar25->field_0x10 * 0x10 +
                          *(longlong *)(lVar5 + 0xa8));
                iVar4 = *(int *)&pFVar25->field_0x14;
                if ((iVar4 < 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ArrayNum >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xfe,L""), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                local_e8._12_4_ = uStack_14c;
                local_e8.ArrayNum = iVar4;
                local_158 = pFVar24;
                iStack_150 = iVar4;
                local_e8.DataPtr = pFVar24;
                FMLLevelSet::BatchPhiWithNormal
                          ((FMLLevelSet *)this_00,&local_e8,(TRigidTransform<float,3> *)local_a8,
                           &local_1a0->BatchPhis,&local_1a0->BatchNormals,fVar2 + fVar3,0,0,iVar15);
              }
            }
            else {
              if ((this_00->field_0x18 != '&') ||
                 (this_00 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0))
              goto LAB_143cb6fc7;
              if ((*(longlong *)&local_198->field_0x8 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x57,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar5 = *(longlong *)&pFVar25->field_0x8;
              if (((*(int *)&pFVar25->field_0x10 < 0) ||
                  (*(int *)(lVar5 + 0xb0) <
                   *(int *)&pFVar25->field_0x10 + *(int *)&pFVar25->field_0x14)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x52,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar24 = (FPAndInvM *)
                        ((longlong)*(int *)&pFVar25->field_0x10 * 0x10 + *(longlong *)(lVar5 + 0xa8)
                        );
              iVar15 = *(int *)&pFVar25->field_0x14;
              if ((iVar15 < 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              local_d8._12_4_ = uStack_13c;
              local_d8.ArrayNum = iVar15;
              local_148 = pFVar24;
              iStack_140 = iVar15;
              local_d8.DataPtr = pFVar24;
              TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormal
                        (this_00,&local_d8,(TRigidTransform<float,3> *)local_a8,
                         &local_1a0->BatchPhis,&local_1a0->BatchNormals);
            }
            local_120 = &local_188;
            local_118 = &local_180;
            local_128 = local_1a0;
            local_110 = local_a8;
            local_108 = &local_178;
            local_130 = &local_128;
            local_138 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,0,1>'::__l15::<lambda_1>,void,int>
                        ::Call;
            PhysicsParallelFor(*(int *)&pFVar25->field_0x14,
                               (TFunctionRef<void___cdecl(int)> *)&local_138,false);
            uVar14 = local_1a4;
          }
          local_1a4 = uVar14 + 1;
          param_3 = local_170;
          pFVar23 = local_168;
        } while ((int)local_1a4 < *(int *)(pFVar26 + 0x14));
      }
      uVar18 = (ulonglong)local_190;
      pFVar26 = pFVar26 + 0x20;
    }
  }
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyComplexInternal<1,0,0> @ 143cb70e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,0,0>
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar7;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this_00;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FPBDSoftBodyCollisionConstraintBase *pFVar11;
  bool bVar12;
  uchar uVar13;
  uint uVar14;
  int iVar15;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar16;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar17;
  ulonglong uVar18;
  TVector<float,3> *pTVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  FPAndInvM *pFVar24;
  FSolverParticlesRange *pFVar25;
  FScriptContainerElement *pFVar26;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar27;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar28;
  bool bVar29;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1a8 [4];
  uint local_1a4;
  FPBDSoftBodyCollisionConstraintBase *local_1a0;
  FSolverParticlesRange *local_198;
  uint local_190;
  TVector<float,3> *local_188;
  FPAndInvM *local_180;
  FScriptContainerElement *local_178;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_170;
  FScriptContainerElement *local_168;
  FPAndInvM *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  FPAndInvM *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  code *local_138;
  FPBDSoftBodyCollisionConstraintBase **local_130;
  FPBDSoftBodyCollisionConstraintBase *local_128;
  TVector<float,3> **local_120;
  FPAndInvM **local_118;
  undefined1 *local_110;
  FScriptContainerElement **local_108;
  undefined1 local_f8 [16];
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_e8;
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_d8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_c8;
  TArrayView<Chaos::TVector<float,3>,int> local_b8;
  undefined1 local_a8 [48];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar29 = -1 < CpuChannel->Enabled;
  local_1a0 = this;
  local_198 = param_1;
  local_170 = param_3;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,0,0>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId495,
               "FPBDSoftBodyCollisionConstraint_ApplyComplexInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
               ,0x1ef);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,0,0>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId495);
  }
  if (this->bEnableComplexColliders != false) {
    pTVar16 = FSolverParticlesRange::GetPAndInvM(param_1,&local_c8);
    local_180 = pTVar16->DataPtr;
    pTVar17 = FSolverParticlesRange::XArray(param_1,&local_b8);
    uVar10 = _UNK_150689548;
    uVar9 = ___xmm_000000003f8000003f8000003f800000;
    pFVar26 = (param_3->AllocatorInstance).Data;
    local_188 = pTVar17->DataPtr;
    local_190 = param_3->ArrayNum;
    uVar18 = (ulonglong)(int)local_190;
    pFVar23 = pFVar26 + uVar18 * 0x20;
    local_168 = pFVar23;
    while( true ) {
      if (param_3->ArrayNum != (int)uVar18) {
        local_1a8[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_1a8);
      }
      if (pFVar26 == pFVar23) break;
      local_1a4 = 0;
      if (0 < *(int *)(pFVar26 + 0x14)) {
        do {
          uVar14 = local_1a4;
          if ((*(longlong *)(pFVar26 + 8) == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar5 = *(longlong *)(pFVar26 + 8);
          uVar21 = *(int *)(pFVar26 + 0x10) + uVar14;
          uVar20 = 0;
          if ((int)uVar21 < *(int *)(lVar5 + 0x68)) {
            uVar20 = ~uVar21 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar5 = *(longlong *)(lVar5 + 0x60);
          uVar13 = FImplicitObject::GetType
                             (*(FImplicitObject **)(lVar5 + (longlong)(int)uVar21 * 8));
          if ((uVar13 == '&') || (uVar13 == '\x11')) {
            if ((*(longlong *)(pFVar26 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar6 = *(longlong *)(pFVar26 + 8);
            uVar22 = *(int *)(pFVar26 + 0x10) + uVar14;
            uVar20 = 0;
            if ((int)uVar22 < *(int *)(lVar6 + 0x50)) {
              uVar20 = ~uVar22 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            puVar1 = (undefined8 *)(*(longlong *)(lVar6 + 0x48) + (longlong)(int)uVar22 * 0x10);
            local_f8._0_8_ = *puVar1;
            local_f8._8_8_ = puVar1[1];
            if ((*(longlong *)(pFVar26 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar20 = 0;
            if ((int)(*(int *)(pFVar26 + 0x10) + uVar14) <
                *(int *)(*(longlong *)(pFVar26 + 8) + 0x80)) {
              uVar20 = ~(*(int *)(pFVar26 + 0x10) + uVar14) >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((*(longlong *)(pFVar26 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pTVar19 = TParticles<float,3>::GetX
                                (*(TParticles<float,3> **)(pFVar26 + 8),
                                 *(int *)(pFVar26 + 0x10) + uVar14);
            if ((*(longlong *)(pFVar26 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar14 = 0;
            if ((int)(*(int *)(pFVar26 + 0x10) + local_1a4) <
                *(int *)(*(longlong *)(pFVar26 + 8) + 0x98)) {
              uVar14 = ~(*(int *)(pFVar26 + 0x10) + local_1a4) >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pTVar7 = local_1a0->CollisionParticleCollided;
            if (((*(int *)(pFVar26 + 0x10) < 0) ||
                (pTVar7->ArrayNum < *(int *)(pFVar26 + 0x10) + *(int *)(pFVar26 + 0x14))) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x52,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar15 = *(int *)(pFVar26 + 0x10);
            pFVar23 = (pTVar7->AllocatorInstance).Data;
            iVar4 = *(int *)(pFVar26 + 0x14);
            if ((iVar4 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar14 = 0;
            if ((int)local_1a4 < iVar4) {
              uVar14 = ~local_1a4 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar25 = local_198;
            pFVar11 = local_1a0;
            local_a8._0_8_ = local_f8._0_8_;
            local_a8._8_8_ = local_f8._8_8_;
            local_178 = pFVar23 + (longlong)(int)local_1a4 + (longlong)iVar15;
            local_a8._32_8_ = uVar9;
            local_a8._40_8_ = uVar10;
            local_a8._28_4_ = 0;
            local_a8._16_12_ = (undefined1  [12])*pTVar19;
            this_00 = *(TWeightedLatticeImplicitObject<Chaos::FLevelSet> **)
                       (lVar5 + (longlong)(int)uVar21 * 8);
            if (this_00->field_0x18 == '\x11') {
              if (this_00 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
LAB_143cb7997:
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!\"Enclosing block should never be called\"",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
                                    ,0x299,L"");
                pFVar25 = local_198;
                if (bVar12) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              else {
                pTVar27 = &local_1a0->BatchPhis;
                iVar15 = (local_1a0->BatchPhis).ArrayNum;
                uVar14 = *(uint *)&local_198->field_0x14;
                if (iVar15 < (int)uVar14) {
                  UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,uVar14 - iVar15,&pTVar27->AllocatorInstance,
                             &(local_1a0->BatchPhis).ArrayNum,&(local_1a0->BatchPhis).ArrayMax);
                }
                else {
                  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
                  }
                  if ((int)uVar14 < iVar15) {
                    uVar20 = iVar15 - uVar14;
                    if (((int)(uVar20 | uVar14) < 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x458,
                                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    if (uVar20 != 0) {
                      pFVar23 = (pTVar27->AllocatorInstance).Data + (longlong)(int)uVar14 * 4;
                      iVar15 = ((pFVar11->BatchPhis).ArrayNum - uVar20) - uVar14;
                      if (iVar15 != 0) {
                        memmove(pFVar23,pFVar23 + (longlong)(int)uVar20 * 4,(longlong)iVar15 << 2);
                      }
                      iVar15 = (pFVar11->BatchPhis).ArrayNum - uVar20;
                      (pFVar11->BatchPhis).ArrayNum = iVar15;
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,&pTVar27->AllocatorInstance,iVar15,
                                 &(pFVar11->BatchPhis).ArrayMax);
                    }
                  }
                }
                pFVar11 = local_1a0;
                uVar14 = *(uint *)&pFVar25->field_0x14;
                pTVar28 = &local_1a0->BatchNormals;
                iVar15 = (local_1a0->BatchNormals).ArrayNum;
                if (iVar15 < (int)uVar14) {
                  UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,uVar14 - iVar15,&pTVar28->AllocatorInstance,
                             &(local_1a0->BatchNormals).ArrayNum,&(local_1a0->BatchNormals).ArrayMax
                            );
                }
                else {
                  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
                  }
                  if ((int)uVar14 < iVar15) {
                    uVar20 = iVar15 - uVar14;
                    if (((int)(uVar20 | uVar14) < 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x458,
                                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    if (uVar20 != 0) {
                      pFVar23 = (pTVar28->AllocatorInstance).Data + (longlong)(int)uVar14 * 0xc;
                      iVar15 = ((pFVar11->BatchNormals).ArrayNum - uVar20) - uVar14;
                      if (iVar15 != 0) {
                        memmove(pFVar23,pFVar23 + (longlong)(int)uVar20 * 0xc,(longlong)iVar15 * 0xc
                               );
                      }
                      iVar15 = (pFVar11->BatchNormals).ArrayNum - uVar20;
                      (pFVar11->BatchNormals).ArrayNum = iVar15;
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0xc,4,&pTVar28->AllocatorInstance,iVar15,
                                 &(pFVar11->BatchNormals).ArrayMax);
                    }
                  }
                }
                iVar15 = *(int *)&pFVar25->field_0x14;
                fVar2 = local_1a0->SoftBodyCollisionThickness;
                fVar3 = local_1a0->CollisionThickness;
                if ((*(longlong *)&pFVar25->field_0x8 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Particles",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x57,L""), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                lVar5 = *(longlong *)&pFVar25->field_0x8;
                if (((*(int *)&pFVar25->field_0x10 < 0) ||
                    (*(int *)(lVar5 + 0xb0) <
                     *(int *)&pFVar25->field_0x10 + *(int *)&pFVar25->field_0x14)) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x52,L""), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar24 = (FPAndInvM *)
                          ((longlong)*(int *)&pFVar25->field_0x10 * 0x10 +
                          *(longlong *)(lVar5 + 0xa8));
                iVar4 = *(int *)&pFVar25->field_0x14;
                if ((iVar4 < 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ArrayNum >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xfe,L""), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                local_e8._12_4_ = uStack_14c;
                local_e8.ArrayNum = iVar4;
                local_158 = pFVar24;
                iStack_150 = iVar4;
                local_e8.DataPtr = pFVar24;
                FMLLevelSet::BatchPhiWithNormal
                          ((FMLLevelSet *)this_00,&local_e8,(TRigidTransform<float,3> *)local_a8,
                           &local_1a0->BatchPhis,&local_1a0->BatchNormals,fVar2 + fVar3,0,0,iVar15);
              }
            }
            else {
              if ((this_00->field_0x18 != '&') ||
                 (this_00 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0))
              goto LAB_143cb7997;
              if ((*(longlong *)&local_198->field_0x8 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x57,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar5 = *(longlong *)&pFVar25->field_0x8;
              if (((*(int *)&pFVar25->field_0x10 < 0) ||
                  (*(int *)(lVar5 + 0xb0) <
                   *(int *)&pFVar25->field_0x10 + *(int *)&pFVar25->field_0x14)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x52,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar24 = (FPAndInvM *)
                        ((longlong)*(int *)&pFVar25->field_0x10 * 0x10 + *(longlong *)(lVar5 + 0xa8)
                        );
              iVar15 = *(int *)&pFVar25->field_0x14;
              if ((iVar15 < 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              local_d8._12_4_ = uStack_13c;
              local_d8.ArrayNum = iVar15;
              local_148 = pFVar24;
              iStack_140 = iVar15;
              local_d8.DataPtr = pFVar24;
              TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormal
                        (this_00,&local_d8,(TRigidTransform<float,3> *)local_a8,
                         &local_1a0->BatchPhis,&local_1a0->BatchNormals);
            }
            local_120 = &local_188;
            local_118 = &local_180;
            local_128 = local_1a0;
            local_110 = local_a8;
            local_108 = &local_178;
            local_130 = &local_128;
            local_138 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,0,0>'::__l15::<lambda_1>,void,int>
                        ::Call;
            PhysicsParallelFor(*(int *)&pFVar25->field_0x14,
                               (TFunctionRef<void___cdecl(int)> *)&local_138,false);
            uVar14 = local_1a4;
          }
          local_1a4 = uVar14 + 1;
          param_3 = local_170;
          pFVar23 = local_168;
        } while ((int)local_1a4 < *(int *)(pFVar26 + 0x14));
      }
      uVar18 = (ulonglong)local_190;
      pFVar26 = pFVar26 + 0x20;
    }
  }
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyComplexInternal<0,1,1> @ 143cb7ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,1>
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  uchar uVar12;
  int iVar13;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar14;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar15;
  ulonglong uVar16;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this_00;
  char cVar17;
  uint uVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  TFunctionRef<void___cdecl(int)> *pTVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  FPAndInvM *pFVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  bool bVar28;
  undefined1 auStackY_2d8 [32];
  undefined1 local_288 [4];
  uint local_284;
  uint local_280;
  TVector<float,3> *local_278;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *local_270;
  longlong local_268;
  longlong local_260;
  TVector<float,3> *local_258;
  FPAndInvM *local_250;
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  FScriptContainerElement *local_230;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_228;
  FPAndInvM *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  code *local_208;
  FPBDSoftBodyCollisionConstraintBase **local_200;
  FPAndInvM *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  FPAndInvM *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  code *local_1d8;
  FPBDSoftBodyCollisionConstraintBase **local_1d0;
  FPBDSoftBodyCollisionConstraintBase *local_1c8;
  TVector<float,3> **local_1c0;
  FPAndInvM **local_1b8;
  longlong local_1b0;
  TVector<float,3> *local_1a8;
  longlong local_1a0;
  undefined1 *local_198;
  float local_190;
  undefined8 *local_188;
  FPBDSoftBodyCollisionConstraintBase *local_180;
  TVector<float,3> **local_178;
  FPAndInvM **local_170;
  undefined1 *local_168;
  longlong local_160;
  TVector<float,3> *local_158;
  longlong local_150;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *local_148;
  float local_140;
  undefined8 *local_138;
  undefined1 local_128 [16];
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_118;
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_108;
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_f8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_e8;
  TArrayView<Chaos::TVector<float,3>,int> local_d8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_c8;
  undefined1 local_b8 [48];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  bVar28 = -1 < CpuChannel->Enabled;
  local_228 = param_3;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId495,
               "FPBDSoftBodyCollisionConstraint_ApplyComplexInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
               ,0x1ef);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId495);
  }
  if (this->bEnableComplexColliders != false) {
    pTVar14 = FSolverParticlesRange::GetPAndInvM(param_1,&local_e8);
    local_250 = pTVar14->DataPtr;
    pTVar15 = FSolverParticlesRange::XArray(param_1,&local_d8);
    uVar10 = _UNK_150689548;
    uVar9 = ___xmm_000000003f8000003f8000003f800000;
    pFVar26 = (param_3->AllocatorInstance).Data;
    local_258 = pTVar15->DataPtr;
    local_280 = param_3->ArrayNum;
    uVar16 = (ulonglong)(int)local_280;
    pFVar23 = pFVar26 + uVar16 * 0x20;
    local_230 = pFVar23;
    while( true ) {
      if (param_3->ArrayNum != (int)uVar16) {
        local_288[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_288);
      }
      if (pFVar26 == pFVar23) break;
      uVar16 = 0;
      local_284 = 0;
      if (0 < *(int *)(pFVar26 + 0x14)) {
        do {
          uVar27 = (uint)uVar16;
          if ((*(longlong *)(pFVar26 + 8) == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = *(longlong *)(pFVar26 + 8);
          uVar22 = *(int *)(pFVar26 + 0x10) + uVar27;
          uVar18 = 0;
          if ((int)uVar22 < *(int *)(lVar6 + 0x68)) {
            uVar18 = ~uVar22 >> 0x1f;
          }
          if ((uVar18 == 0) &&
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
          local_260 = *(longlong *)(lVar6 + 0x60);
          local_268 = (longlong)(int)uVar22;
          uVar12 = FImplicitObject::GetType(*(FImplicitObject **)(local_260 + local_268 * 8));
          if ((uVar12 == '&') || (uVar12 == '\x11')) {
            if ((*(longlong *)(pFVar26 + 8) == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar6 = *(longlong *)(pFVar26 + 8);
            uVar22 = *(int *)(pFVar26 + 0x10) + uVar27;
            uVar18 = 0;
            if ((int)uVar22 < *(int *)(lVar6 + 0x50)) {
              uVar18 = ~uVar22 >> 0x1f;
            }
            if ((uVar18 == 0) &&
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
            puVar20 = (undefined8 *)(*(longlong *)(lVar6 + 0x48) + (longlong)(int)uVar22 * 0x10);
            local_128._0_8_ = *puVar20;
            local_128._8_8_ = puVar20[1];
            if ((*(longlong *)(pFVar26 + 8) == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar6 = *(longlong *)(pFVar26 + 8);
            uVar22 = *(int *)(pFVar26 + 0x10) + uVar27;
            uVar18 = 0;
            if ((int)uVar22 < *(int *)(lVar6 + 0x80)) {
              uVar18 = ~uVar22 >> 0x1f;
            }
            if ((uVar18 == 0) &&
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
            local_248 = *(longlong *)(lVar6 + 0x78) + (longlong)(int)uVar22 * 0xc;
            if ((*(longlong *)(pFVar26 + 8) == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_278 = TParticles<float,3>::GetX
                                  (*(TParticles<float,3> **)(pFVar26 + 8),
                                   *(int *)(pFVar26 + 0x10) + uVar27);
            if ((*(longlong *)(pFVar26 + 8) == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar6 = *(longlong *)(pFVar26 + 8);
            uVar22 = *(int *)(pFVar26 + 0x10) + uVar27;
            uVar18 = 0;
            if ((int)uVar22 < *(int *)(lVar6 + 0x98)) {
              uVar18 = ~uVar22 >> 0x1f;
            }
            if ((uVar18 == 0) &&
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
            local_238 = 0;
            local_b8._0_8_ = local_128._0_8_;
            local_b8._8_8_ = local_128._8_8_;
            local_240 = *(longlong *)(lVar6 + 0x90) + (longlong)(int)uVar22 * 0xc;
            uVar22 = *(int *)(pFVar26 + 0x18) - uVar27 ^ (uint)(uVar16 >> 0xd);
            local_b8._28_4_ = 0;
            local_b8._16_12_ = (undefined1  [12])*local_278;
            local_b8._32_8_ = uVar9;
            local_b8._40_8_ = uVar10;
            uVar18 = (-0x61c88647 - uVar22) - uVar27 ^ uVar22 << 8;
            uVar25 = (uVar27 - uVar18) - uVar22 ^ uVar18 >> 0xd;
            uVar22 = (uVar22 - uVar25) - uVar18 ^ uVar25 >> 0xc;
            uVar18 = (uVar18 - uVar22) - uVar25 ^ uVar22 << 0x10;
            uVar25 = (uVar25 - uVar18) - uVar22 ^ uVar18 >> 5;
            uVar22 = (uVar22 - uVar25) - uVar18 ^ uVar25 >> 3;
            uVar18 = (uVar18 - uVar22) - uVar25 ^ uVar22 << 10;
            if (*(int *)&(this->ComplexBoneData).field_0x8 !=
                *(int *)&(this->ComplexBoneData).field_0x34) {
              puVar7 = *(undefined1 **)&(this->ComplexBoneData).field_0x40;
              puVar19 = &(this->ComplexBoneData).field_0x38;
              if (puVar7 != (undefined1 *)0x0) {
                puVar19 = puVar7;
              }
              iVar13 = *(int *)(puVar19 +
                               (ulonglong)
                               (*(int *)&(this->ComplexBoneData).field_0x48 - 1U &
                               ((uVar25 - uVar18) - uVar22 ^ uVar18 >> 0xf)) * 4);
              if (iVar13 != -1) {
                do {
                  puVar20 = (undefined8 *)
                            ((longlong)iVar13 * 0x60 + *(longlong *)&this->ComplexBoneData);
                  if (((int)*puVar20 == *(int *)(pFVar26 + 0x18)) &&
                     ((uint)((ulonglong)*puVar20 >> 0x20) == uVar27)) {
                    if (iVar13 != -1) {
                      local_270 = (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)(puVar20 + 1);
                      if (puVar20 == (undefined8 *)0x0) {
                        local_270 = (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0;
                      }
                      this_00 = *(TWeightedLatticeImplicitObject<Chaos::FLevelSet> **)
                                 (local_260 + local_268 * 8);
                      cVar17 = this_00->field_0x18;
                      if (local_270 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0)
                      goto LAB_143cb7fde;
                      if ((cVar17 == '&') &&
                         (this_00 != (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0)) {
                        fVar3 = this->SoftBodyCollisionThickness;
                        fVar4 = this->CollisionThickness;
                        if ((*(longlong *)&param_1->field_0x8 == 0) &&
                           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Particles",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                                ,0x57,L""), bVar11)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        lVar6 = *(longlong *)&param_1->field_0x8;
                        if (((*(int *)&param_1->field_0x10 < 0) ||
                            (*(int *)(lVar6 + 0xb0) <
                             *(int *)&param_1->field_0x10 + *(int *)&param_1->field_0x14)) &&
                           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                                ,0x52,L""), bVar11)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        pFVar24 = (FPAndInvM *)
                                  ((longlong)*(int *)&param_1->field_0x10 * 0x10 +
                                  *(longlong *)(lVar6 + 0xa8));
                        iVar13 = *(int *)&param_1->field_0x14;
                        if ((iVar13 < 0) &&
                           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                               ("ArrayNum >= 0",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                ,0xfe,L""), bVar11)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        local_118._12_4_ = uStack_20c;
                        local_118.ArrayNum = iVar13;
                        local_218 = pFVar24;
                        iStack_210 = iVar13;
                        local_118.DataPtr = pFVar24;
                        TWeightedLatticeImplicitObject<Chaos::FLevelSet>::
                        BatchPhiWithNormalAndGreatestInfluenceBone
                                  (this_00,&local_118,(TRigidTransform<float,3> *)local_b8,
                                   fVar3 + fVar4,&this->BatchPhis,&this->BatchNormals,
                                   &this->BatchVelocityBones);
                      }
                      else {
                        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("!\"Enclosing block should never be called\"",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
                                            ,0x213,L"");
                        if (bVar11) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                      }
                      local_178 = &local_258;
                      pTVar21 = (TFunctionRef<void___cdecl(int)> *)&local_208;
                      local_170 = &local_250;
                      local_168 = local_b8;
                      local_160 = local_248;
                      local_158 = local_278;
                      local_150 = local_240;
                      local_148 = local_270;
                      local_138 = &local_238;
                      local_200 = &local_180;
                      local_208 = UE::Core::Private::Function::
                                  TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,1>'::__l18::<lambda_1>,void,int>
                                  ::Call;
                      local_180 = this;
                      local_140 = param_2;
                      goto LAB_143cb85b9;
                    }
                    break;
                  }
                  iVar13 = *(int *)(puVar20 + 0xb);
                } while (iVar13 != -1);
              }
            }
            this_00 = *(TWeightedLatticeImplicitObject<Chaos::FLevelSet> **)
                       (local_260 + local_268 * 8);
            cVar17 = this_00->field_0x18;
LAB_143cb7fde:
            local_270 = this_00;
            if (cVar17 != '\x11') {
              local_270 = (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0;
            }
            if (local_270 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
              if ((cVar17 == '&') &&
                 (this_00 != (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0)) {
                pTVar14 = FSolverParticlesRange::GetPAndInvM(param_1,&local_c8);
                local_1e8 = pTVar14->DataPtr;
                iStack_1e0 = pTVar14->ArrayNum;
                local_f8._12_4_ = uStack_1dc;
                local_f8.ArrayNum = iStack_1e0;
                local_f8.DataPtr = local_1e8;
                TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormal
                          (this_00,&local_f8,(TRigidTransform<float,3> *)local_b8,&this->BatchPhis,
                           &this->BatchNormals);
              }
              else {
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!\"Enclosing block should never be called\"",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
                                    ,0x25a,L"");
                if (bVar11) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
            }
            else {
              uVar27 = *(uint *)&param_1->field_0x14;
              pTVar1 = &this->BatchPhis;
              iVar13 = (this->BatchPhis).ArrayNum;
              if (iVar13 < (int)uVar27) {
                UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar27 - iVar13,&pTVar1->AllocatorInstance,
                           &(this->BatchPhis).ArrayNum,&(this->BatchPhis).ArrayMax);
              }
              else {
                if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
                }
                if ((int)uVar27 < iVar13) {
                  uVar18 = iVar13 - uVar27;
                  if (((int)(uVar27 | uVar18) < 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x458,
                                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  if (uVar18 != 0) {
                    pFVar23 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar27 * 4;
                    iVar13 = ((this->BatchPhis).ArrayNum - uVar18) - uVar27;
                    if (iVar13 != 0) {
                      memmove(pFVar23,pFVar23 + (longlong)(int)uVar18 * 4,(longlong)iVar13 << 2);
                    }
                    iVar13 = (this->BatchPhis).ArrayNum - uVar18;
                    (this->BatchPhis).ArrayNum = iVar13;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,&pTVar1->AllocatorInstance,iVar13,&(this->BatchPhis).ArrayMax);
                  }
                }
              }
              uVar27 = *(uint *)&param_1->field_0x14;
              pTVar2 = &this->BatchNormals;
              iVar13 = (this->BatchNormals).ArrayNum;
              if (iVar13 < (int)uVar27) {
                UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,uVar27 - iVar13,&pTVar2->AllocatorInstance,
                           &(this->BatchNormals).ArrayNum,&(this->BatchNormals).ArrayMax);
              }
              else {
                if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
                }
                if ((int)uVar27 < iVar13) {
                  uVar18 = iVar13 - uVar27;
                  if (((int)(uVar27 | uVar18) < 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x458,
                                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  if (uVar18 != 0) {
                    pFVar23 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar27 * 0xc;
                    iVar13 = ((this->BatchNormals).ArrayNum - uVar18) - uVar27;
                    if (iVar13 != 0) {
                      memmove(pFVar23,pFVar23 + (longlong)(int)uVar18 * 0xc,(longlong)iVar13 * 0xc);
                    }
                    iVar13 = (this->BatchNormals).ArrayNum - uVar18;
                    (this->BatchNormals).ArrayNum = iVar13;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0xc,4,&pTVar2->AllocatorInstance,iVar13,
                               &(this->BatchNormals).ArrayMax);
                  }
                }
              }
              fVar3 = this->SoftBodyCollisionThickness;
              fVar4 = this->CollisionThickness;
              iVar13 = *(int *)&param_1->field_0x14;
              if ((*(longlong *)&param_1->field_0x8 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x57,L""), bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar6 = *(longlong *)&param_1->field_0x8;
              if (((*(int *)&param_1->field_0x10 < 0) ||
                  (*(int *)(lVar6 + 0xb0) <
                   *(int *)&param_1->field_0x10 + *(int *)&param_1->field_0x14)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x52,L""), bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar24 = (FPAndInvM *)
                        ((longlong)*(int *)&param_1->field_0x10 * 0x10 + *(longlong *)(lVar6 + 0xa8)
                        );
              iVar5 = *(int *)&param_1->field_0x14;
              if ((iVar5 < 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              local_108._12_4_ = uStack_1ec;
              local_108.ArrayNum = iVar5;
              local_1f8 = pFVar24;
              iStack_1f0 = iVar5;
              local_108.DataPtr = pFVar24;
              FMLLevelSet::BatchPhiWithNormal
                        ((FMLLevelSet *)local_270,&local_108,(TRigidTransform<float,3> *)local_b8,
                         &this->BatchPhis,&this->BatchNormals,fVar3 + fVar4,0,0,iVar13);
            }
            local_1c0 = &local_258;
            local_1b8 = &local_250;
            local_1b0 = local_248;
            local_1a8 = local_278;
            local_1a0 = local_240;
            local_198 = local_b8;
            local_188 = &local_238;
            local_1d0 = &local_1c8;
            local_1d8 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,1>'::__l32::<lambda_2>,void,int>
                        ::Call;
            pTVar21 = (TFunctionRef<void___cdecl(int)> *)&local_1d8;
            local_1c8 = this;
            local_190 = param_2;
LAB_143cb85b9:
            PhysicsParallelFor(*(int *)&param_1->field_0x14,pTVar21,false);
            uVar27 = local_284;
          }
          local_284 = uVar27 + 1;
          uVar16 = (ulonglong)local_284;
          param_3 = local_228;
          pFVar23 = local_230;
        } while ((int)local_284 < *(int *)(pFVar26 + 0x14));
      }
      uVar16 = (ulonglong)local_280;
      pFVar26 = pFVar26 + 0x20;
    }
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyComplexInternal<0,1,0> @ 143cb8670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,0>
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  uchar uVar12;
  int iVar13;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar14;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar15;
  ulonglong uVar16;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this_00;
  char cVar17;
  uint uVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  TFunctionRef<void___cdecl(int)> *pTVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  FPAndInvM *pFVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  bool bVar28;
  undefined1 auStackY_2d8 [32];
  undefined1 local_288 [4];
  uint local_284;
  uint local_280;
  TVector<float,3> *local_278;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *local_270;
  longlong local_268;
  longlong local_260;
  TVector<float,3> *local_258;
  FPAndInvM *local_250;
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  FScriptContainerElement *local_230;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_228;
  FPAndInvM *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  code *local_208;
  FPBDSoftBodyCollisionConstraintBase **local_200;
  FPAndInvM *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  FPAndInvM *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  code *local_1d8;
  FPBDSoftBodyCollisionConstraintBase **local_1d0;
  FPBDSoftBodyCollisionConstraintBase *local_1c8;
  TVector<float,3> **local_1c0;
  FPAndInvM **local_1b8;
  longlong local_1b0;
  TVector<float,3> *local_1a8;
  longlong local_1a0;
  undefined1 *local_198;
  float local_190;
  undefined8 *local_188;
  FPBDSoftBodyCollisionConstraintBase *local_180;
  TVector<float,3> **local_178;
  FPAndInvM **local_170;
  undefined1 *local_168;
  longlong local_160;
  TVector<float,3> *local_158;
  longlong local_150;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *local_148;
  float local_140;
  undefined8 *local_138;
  undefined1 local_128 [16];
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_118;
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_108;
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_f8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_e8;
  TArrayView<Chaos::TVector<float,3>,int> local_d8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_c8;
  undefined1 local_b8 [48];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  bVar28 = -1 < CpuChannel->Enabled;
  local_228 = param_3;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,0>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId495,
               "FPBDSoftBodyCollisionConstraint_ApplyComplexInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
               ,0x1ef);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,0>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId495);
  }
  if (this->bEnableComplexColliders != false) {
    pTVar14 = FSolverParticlesRange::GetPAndInvM(param_1,&local_e8);
    local_250 = pTVar14->DataPtr;
    pTVar15 = FSolverParticlesRange::XArray(param_1,&local_d8);
    uVar10 = _UNK_150689548;
    uVar9 = ___xmm_000000003f8000003f8000003f800000;
    pFVar26 = (param_3->AllocatorInstance).Data;
    local_258 = pTVar15->DataPtr;
    local_280 = param_3->ArrayNum;
    uVar16 = (ulonglong)(int)local_280;
    pFVar23 = pFVar26 + uVar16 * 0x20;
    local_230 = pFVar23;
    while( true ) {
      if (param_3->ArrayNum != (int)uVar16) {
        local_288[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_288);
      }
      if (pFVar26 == pFVar23) break;
      uVar16 = 0;
      local_284 = 0;
      if (0 < *(int *)(pFVar26 + 0x14)) {
        do {
          uVar27 = (uint)uVar16;
          if ((*(longlong *)(pFVar26 + 8) == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = *(longlong *)(pFVar26 + 8);
          uVar22 = *(int *)(pFVar26 + 0x10) + uVar27;
          uVar18 = 0;
          if ((int)uVar22 < *(int *)(lVar6 + 0x68)) {
            uVar18 = ~uVar22 >> 0x1f;
          }
          if ((uVar18 == 0) &&
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
          local_260 = *(longlong *)(lVar6 + 0x60);
          local_268 = (longlong)(int)uVar22;
          uVar12 = FImplicitObject::GetType(*(FImplicitObject **)(local_260 + local_268 * 8));
          if ((uVar12 == '&') || (uVar12 == '\x11')) {
            if ((*(longlong *)(pFVar26 + 8) == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar6 = *(longlong *)(pFVar26 + 8);
            uVar22 = *(int *)(pFVar26 + 0x10) + uVar27;
            uVar18 = 0;
            if ((int)uVar22 < *(int *)(lVar6 + 0x50)) {
              uVar18 = ~uVar22 >> 0x1f;
            }
            if ((uVar18 == 0) &&
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
            puVar20 = (undefined8 *)(*(longlong *)(lVar6 + 0x48) + (longlong)(int)uVar22 * 0x10);
            local_128._0_8_ = *puVar20;
            local_128._8_8_ = puVar20[1];
            if ((*(longlong *)(pFVar26 + 8) == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar6 = *(longlong *)(pFVar26 + 8);
            uVar22 = *(int *)(pFVar26 + 0x10) + uVar27;
            uVar18 = 0;
            if ((int)uVar22 < *(int *)(lVar6 + 0x80)) {
              uVar18 = ~uVar22 >> 0x1f;
            }
            if ((uVar18 == 0) &&
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
            local_248 = *(longlong *)(lVar6 + 0x78) + (longlong)(int)uVar22 * 0xc;
            if ((*(longlong *)(pFVar26 + 8) == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_278 = TParticles<float,3>::GetX
                                  (*(TParticles<float,3> **)(pFVar26 + 8),
                                   *(int *)(pFVar26 + 0x10) + uVar27);
            if ((*(longlong *)(pFVar26 + 8) == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar6 = *(longlong *)(pFVar26 + 8);
            uVar22 = *(int *)(pFVar26 + 0x10) + uVar27;
            uVar18 = 0;
            if ((int)uVar22 < *(int *)(lVar6 + 0x98)) {
              uVar18 = ~uVar22 >> 0x1f;
            }
            if ((uVar18 == 0) &&
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
            local_238 = 0;
            local_b8._0_8_ = local_128._0_8_;
            local_b8._8_8_ = local_128._8_8_;
            local_240 = *(longlong *)(lVar6 + 0x90) + (longlong)(int)uVar22 * 0xc;
            uVar22 = *(int *)(pFVar26 + 0x18) - uVar27 ^ (uint)(uVar16 >> 0xd);
            local_b8._28_4_ = 0;
            local_b8._16_12_ = (undefined1  [12])*local_278;
            local_b8._32_8_ = uVar9;
            local_b8._40_8_ = uVar10;
            uVar18 = (-0x61c88647 - uVar22) - uVar27 ^ uVar22 << 8;
            uVar25 = (uVar27 - uVar18) - uVar22 ^ uVar18 >> 0xd;
            uVar22 = (uVar22 - uVar25) - uVar18 ^ uVar25 >> 0xc;
            uVar18 = (uVar18 - uVar22) - uVar25 ^ uVar22 << 0x10;
            uVar25 = (uVar25 - uVar18) - uVar22 ^ uVar18 >> 5;
            uVar22 = (uVar22 - uVar25) - uVar18 ^ uVar25 >> 3;
            uVar18 = (uVar18 - uVar22) - uVar25 ^ uVar22 << 10;
            if (*(int *)&(this->ComplexBoneData).field_0x8 !=
                *(int *)&(this->ComplexBoneData).field_0x34) {
              puVar7 = *(undefined1 **)&(this->ComplexBoneData).field_0x40;
              puVar19 = &(this->ComplexBoneData).field_0x38;
              if (puVar7 != (undefined1 *)0x0) {
                puVar19 = puVar7;
              }
              iVar13 = *(int *)(puVar19 +
                               (ulonglong)
                               (*(int *)&(this->ComplexBoneData).field_0x48 - 1U &
                               ((uVar25 - uVar18) - uVar22 ^ uVar18 >> 0xf)) * 4);
              if (iVar13 != -1) {
                do {
                  puVar20 = (undefined8 *)
                            ((longlong)iVar13 * 0x60 + *(longlong *)&this->ComplexBoneData);
                  if (((int)*puVar20 == *(int *)(pFVar26 + 0x18)) &&
                     ((uint)((ulonglong)*puVar20 >> 0x20) == uVar27)) {
                    if (iVar13 != -1) {
                      local_270 = (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)(puVar20 + 1);
                      if (puVar20 == (undefined8 *)0x0) {
                        local_270 = (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0;
                      }
                      this_00 = *(TWeightedLatticeImplicitObject<Chaos::FLevelSet> **)
                                 (local_260 + local_268 * 8);
                      cVar17 = this_00->field_0x18;
                      if (local_270 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0)
                      goto LAB_143cb8b9e;
                      if ((cVar17 == '&') &&
                         (this_00 != (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0)) {
                        fVar3 = this->SoftBodyCollisionThickness;
                        fVar4 = this->CollisionThickness;
                        if ((*(longlong *)&param_1->field_0x8 == 0) &&
                           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Particles",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                                ,0x57,L""), bVar11)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        lVar6 = *(longlong *)&param_1->field_0x8;
                        if (((*(int *)&param_1->field_0x10 < 0) ||
                            (*(int *)(lVar6 + 0xb0) <
                             *(int *)&param_1->field_0x10 + *(int *)&param_1->field_0x14)) &&
                           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                                ,0x52,L""), bVar11)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        pFVar24 = (FPAndInvM *)
                                  ((longlong)*(int *)&param_1->field_0x10 * 0x10 +
                                  *(longlong *)(lVar6 + 0xa8));
                        iVar13 = *(int *)&param_1->field_0x14;
                        if ((iVar13 < 0) &&
                           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                               ("ArrayNum >= 0",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                ,0xfe,L""), bVar11)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        local_118._12_4_ = uStack_20c;
                        local_118.ArrayNum = iVar13;
                        local_218 = pFVar24;
                        iStack_210 = iVar13;
                        local_118.DataPtr = pFVar24;
                        TWeightedLatticeImplicitObject<Chaos::FLevelSet>::
                        BatchPhiWithNormalAndGreatestInfluenceBone
                                  (this_00,&local_118,(TRigidTransform<float,3> *)local_b8,
                                   fVar3 + fVar4,&this->BatchPhis,&this->BatchNormals,
                                   &this->BatchVelocityBones);
                      }
                      else {
                        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("!\"Enclosing block should never be called\"",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
                                            ,0x213,L"");
                        if (bVar11) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                      }
                      local_178 = &local_258;
                      pTVar21 = (TFunctionRef<void___cdecl(int)> *)&local_208;
                      local_170 = &local_250;
                      local_168 = local_b8;
                      local_160 = local_248;
                      local_158 = local_278;
                      local_150 = local_240;
                      local_148 = local_270;
                      local_138 = &local_238;
                      local_200 = &local_180;
                      local_208 = UE::Core::Private::Function::
                                  TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,0>'::__l18::<lambda_1>,void,int>
                                  ::Call;
                      local_180 = this;
                      local_140 = param_2;
                      goto LAB_143cb9179;
                    }
                    break;
                  }
                  iVar13 = *(int *)(puVar20 + 0xb);
                } while (iVar13 != -1);
              }
            }
            this_00 = *(TWeightedLatticeImplicitObject<Chaos::FLevelSet> **)
                       (local_260 + local_268 * 8);
            cVar17 = this_00->field_0x18;
LAB_143cb8b9e:
            local_270 = this_00;
            if (cVar17 != '\x11') {
              local_270 = (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0;
            }
            if (local_270 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
              if ((cVar17 == '&') &&
                 (this_00 != (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0)) {
                pTVar14 = FSolverParticlesRange::GetPAndInvM(param_1,&local_c8);
                local_1e8 = pTVar14->DataPtr;
                iStack_1e0 = pTVar14->ArrayNum;
                local_f8._12_4_ = uStack_1dc;
                local_f8.ArrayNum = iStack_1e0;
                local_f8.DataPtr = local_1e8;
                TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormal
                          (this_00,&local_f8,(TRigidTransform<float,3> *)local_b8,&this->BatchPhis,
                           &this->BatchNormals);
              }
              else {
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!\"Enclosing block should never be called\"",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
                                    ,0x25a,L"");
                if (bVar11) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
            }
            else {
              uVar27 = *(uint *)&param_1->field_0x14;
              pTVar1 = &this->BatchPhis;
              iVar13 = (this->BatchPhis).ArrayNum;
              if (iVar13 < (int)uVar27) {
                UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar27 - iVar13,&pTVar1->AllocatorInstance,
                           &(this->BatchPhis).ArrayNum,&(this->BatchPhis).ArrayMax);
              }
              else {
                if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
                }
                if ((int)uVar27 < iVar13) {
                  uVar18 = iVar13 - uVar27;
                  if (((int)(uVar27 | uVar18) < 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x458,
                                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  if (uVar18 != 0) {
                    pFVar23 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar27 * 4;
                    iVar13 = ((this->BatchPhis).ArrayNum - uVar18) - uVar27;
                    if (iVar13 != 0) {
                      memmove(pFVar23,pFVar23 + (longlong)(int)uVar18 * 4,(longlong)iVar13 << 2);
                    }
                    iVar13 = (this->BatchPhis).ArrayNum - uVar18;
                    (this->BatchPhis).ArrayNum = iVar13;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,&pTVar1->AllocatorInstance,iVar13,&(this->BatchPhis).ArrayMax);
                  }
                }
              }
              uVar27 = *(uint *)&param_1->field_0x14;
              pTVar2 = &this->BatchNormals;
              iVar13 = (this->BatchNormals).ArrayNum;
              if (iVar13 < (int)uVar27) {
                UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,uVar27 - iVar13,&pTVar2->AllocatorInstance,
                           &(this->BatchNormals).ArrayNum,&(this->BatchNormals).ArrayMax);
              }
              else {
                if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
                }
                if ((int)uVar27 < iVar13) {
                  uVar18 = iVar13 - uVar27;
                  if (((int)(uVar27 | uVar18) < 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x458,
                                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  if (uVar18 != 0) {
                    pFVar23 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar27 * 0xc;
                    iVar13 = ((this->BatchNormals).ArrayNum - uVar18) - uVar27;
                    if (iVar13 != 0) {
                      memmove(pFVar23,pFVar23 + (longlong)(int)uVar18 * 0xc,(longlong)iVar13 * 0xc);
                    }
                    iVar13 = (this->BatchNormals).ArrayNum - uVar18;
                    (this->BatchNormals).ArrayNum = iVar13;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0xc,4,&pTVar2->AllocatorInstance,iVar13,
                               &(this->BatchNormals).ArrayMax);
                  }
                }
              }
              fVar3 = this->SoftBodyCollisionThickness;
              fVar4 = this->CollisionThickness;
              iVar13 = *(int *)&param_1->field_0x14;
              if ((*(longlong *)&param_1->field_0x8 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x57,L""), bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar6 = *(longlong *)&param_1->field_0x8;
              if (((*(int *)&param_1->field_0x10 < 0) ||
                  (*(int *)(lVar6 + 0xb0) <
                   *(int *)&param_1->field_0x10 + *(int *)&param_1->field_0x14)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x52,L""), bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar24 = (FPAndInvM *)
                        ((longlong)*(int *)&param_1->field_0x10 * 0x10 + *(longlong *)(lVar6 + 0xa8)
                        );
              iVar5 = *(int *)&param_1->field_0x14;
              if ((iVar5 < 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              local_108._12_4_ = uStack_1ec;
              local_108.ArrayNum = iVar5;
              local_1f8 = pFVar24;
              iStack_1f0 = iVar5;
              local_108.DataPtr = pFVar24;
              FMLLevelSet::BatchPhiWithNormal
                        ((FMLLevelSet *)local_270,&local_108,(TRigidTransform<float,3> *)local_b8,
                         &this->BatchPhis,&this->BatchNormals,fVar3 + fVar4,0,0,iVar13);
            }
            local_1c0 = &local_258;
            local_1b8 = &local_250;
            local_1b0 = local_248;
            local_1a8 = local_278;
            local_1a0 = local_240;
            local_198 = local_b8;
            local_188 = &local_238;
            local_1d0 = &local_1c8;
            local_1d8 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,0>'::__l32::<lambda_2>,void,int>
                        ::Call;
            pTVar21 = (TFunctionRef<void___cdecl(int)> *)&local_1d8;
            local_1c8 = this;
            local_190 = param_2;
LAB_143cb9179:
            PhysicsParallelFor(*(int *)&param_1->field_0x14,pTVar21,false);
            uVar27 = local_284;
          }
          local_284 = uVar27 + 1;
          uVar16 = (ulonglong)local_284;
          param_3 = local_228;
          pFVar23 = local_230;
        } while ((int)local_284 < *(int *)(pFVar26 + 0x14));
      }
      uVar16 = (ulonglong)local_280;
      pFVar26 = pFVar26 + 0x20;
    }
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyComplexInternal<0,0,1> @ 143cb9230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,0,1>
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this_00;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FPBDSoftBodyCollisionConstraintBase *pFVar11;
  bool bVar12;
  uchar uVar13;
  uint uVar14;
  int iVar15;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar16;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar17;
  ulonglong uVar18;
  TVector<float,3> *pTVar19;
  uint uVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  FPAndInvM *pFVar23;
  FScriptContainerElement *pFVar24;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar25;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar26;
  FSolverParticlesRange *pFVar27;
  bool bVar28;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1a8 [8];
  FSolverParticlesRange *local_1a0;
  FPBDSoftBodyCollisionConstraintBase *local_198;
  int local_190;
  uint local_18c;
  TVector<float,3> *local_188;
  FPAndInvM *local_180;
  undefined8 local_178;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_170;
  FScriptContainerElement *local_168;
  FPAndInvM *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  FPAndInvM *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  code *local_138;
  FPBDSoftBodyCollisionConstraintBase **local_130;
  FPBDSoftBodyCollisionConstraintBase *local_128;
  TVector<float,3> **local_120;
  FPAndInvM **local_118;
  undefined1 *local_110;
  undefined8 *local_108;
  undefined1 local_f8 [16];
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_e8;
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_d8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_c8;
  TArrayView<Chaos::TVector<float,3>,int> local_b8;
  undefined1 local_a8 [48];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar28 = -1 < CpuChannel->Enabled;
  local_1a0 = param_1;
  local_198 = this;
  local_170 = param_3;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,0,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId495,
               "FPBDSoftBodyCollisionConstraint_ApplyComplexInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
               ,0x1ef);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,0,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId495);
  }
  if (this->bEnableComplexColliders != false) {
    pTVar16 = FSolverParticlesRange::GetPAndInvM(param_1,&local_c8);
    local_180 = pTVar16->DataPtr;
    pTVar17 = FSolverParticlesRange::XArray(param_1,&local_b8);
    uVar10 = _UNK_150689548;
    uVar9 = ___xmm_000000003f8000003f8000003f800000;
    pFVar24 = (param_3->AllocatorInstance).Data;
    local_188 = pTVar17->DataPtr;
    local_18c = param_3->ArrayNum;
    uVar18 = (ulonglong)(int)local_18c;
    pFVar22 = pFVar24 + uVar18 * 0x20;
    local_168 = pFVar22;
    while( true ) {
      if (param_3->ArrayNum != (int)uVar18) {
        local_1a8[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_1a8);
      }
      if (pFVar24 == pFVar22) break;
      local_190 = 0;
      if (0 < *(int *)(pFVar24 + 0x14)) {
        do {
          iVar15 = local_190;
          if ((*(longlong *)(pFVar24 + 8) == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = *(longlong *)(pFVar24 + 8);
          uVar20 = *(int *)(pFVar24 + 0x10) + iVar15;
          uVar14 = 0;
          if ((int)uVar20 < *(int *)(lVar6 + 0x68)) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = *(longlong *)(lVar6 + 0x60);
          uVar13 = FImplicitObject::GetType
                             (*(FImplicitObject **)(lVar6 + (longlong)(int)uVar20 * 8));
          if ((uVar13 == '&') || (uVar13 == '\x11')) {
            if ((*(longlong *)(pFVar24 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar7 = *(longlong *)(pFVar24 + 8);
            uVar21 = *(int *)(pFVar24 + 0x10) + iVar15;
            uVar14 = 0;
            if ((int)uVar21 < *(int *)(lVar7 + 0x50)) {
              uVar14 = ~uVar21 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            puVar2 = (undefined8 *)(*(longlong *)(lVar7 + 0x48) + (longlong)(int)uVar21 * 0x10);
            local_f8._0_8_ = *puVar2;
            local_f8._8_8_ = puVar2[1];
            if ((*(longlong *)(pFVar24 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar14 = 0;
            if (*(int *)(pFVar24 + 0x10) + iVar15 < *(int *)(*(longlong *)(pFVar24 + 8) + 0x80)) {
              uVar14 = (uint)~(*(int *)(pFVar24 + 0x10) + iVar15) >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((*(longlong *)(pFVar24 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pTVar19 = TParticles<float,3>::GetX
                                (*(TParticles<float,3> **)(pFVar24 + 8),
                                 *(int *)(pFVar24 + 0x10) + iVar15);
            if ((*(longlong *)(pFVar24 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar14 = 0;
            if (*(int *)(pFVar24 + 0x10) + iVar15 < *(int *)(*(longlong *)(pFVar24 + 8) + 0x98)) {
              uVar14 = (uint)~(*(int *)(pFVar24 + 0x10) + iVar15) >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar11 = local_198;
            pFVar27 = local_1a0;
            local_a8._0_8_ = local_f8._0_8_;
            local_a8._8_8_ = local_f8._8_8_;
            local_178 = 0;
            local_a8._32_8_ = uVar9;
            local_a8._40_8_ = uVar10;
            local_a8._28_4_ = 0;
            local_a8._16_12_ = (undefined1  [12])*pTVar19;
            this_00 = *(TWeightedLatticeImplicitObject<Chaos::FLevelSet> **)
                       (lVar6 + (longlong)(int)uVar20 * 8);
            if (this_00->field_0x18 == '\x11') {
              if (this_00 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
LAB_143cb9a19:
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!\"Enclosing block should never be called\"",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
                                    ,0x299,L"");
                pFVar27 = local_1a0;
                if (bVar12) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              else {
                pTVar25 = &local_198->BatchPhis;
                iVar15 = (local_198->BatchPhis).ArrayNum;
                piVar1 = &(local_198->BatchPhis).ArrayNum;
                uVar14 = *(uint *)&local_1a0->field_0x14;
                if (iVar15 < (int)uVar14) {
                  UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,uVar14 - iVar15,&pTVar25->AllocatorInstance,piVar1,
                             &(local_198->BatchPhis).ArrayMax);
                }
                else {
                  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
                  }
                  if ((int)uVar14 < iVar15) {
                    uVar20 = iVar15 - uVar14;
                    if (((int)(uVar20 | uVar14) < 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x458,
                                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    if (uVar20 != 0) {
                      pFVar22 = (pTVar25->AllocatorInstance).Data + (longlong)(int)uVar14 * 4;
                      iVar15 = (*piVar1 - uVar20) - uVar14;
                      if (iVar15 != 0) {
                        memmove(pFVar22,pFVar22 + (longlong)(int)uVar20 * 4,(longlong)iVar15 << 2);
                      }
                      *piVar1 = *piVar1 - uVar20;
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,&pTVar25->AllocatorInstance,*piVar1,
                                 &(pFVar11->BatchPhis).ArrayMax);
                    }
                  }
                }
                pFVar11 = local_198;
                pTVar26 = &local_198->BatchNormals;
                piVar1 = &(local_198->BatchNormals).ArrayNum;
                uVar14 = *(uint *)&local_1a0->field_0x14;
                iVar15 = *piVar1;
                if (iVar15 < (int)uVar14) {
                  UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,uVar14 - iVar15,&pTVar26->AllocatorInstance,piVar1,
                             &(local_198->BatchNormals).ArrayMax);
                }
                else {
                  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
                  }
                  if ((int)uVar14 < iVar15) {
                    uVar20 = iVar15 - uVar14;
                    if (((int)(uVar20 | uVar14) < 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x458,
                                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    if (uVar20 != 0) {
                      pFVar22 = (pTVar26->AllocatorInstance).Data + (longlong)(int)uVar14 * 0xc;
                      iVar15 = (*piVar1 - uVar20) - uVar14;
                      if (iVar15 != 0) {
                        memmove(pFVar22,pFVar22 + (longlong)(int)uVar20 * 0xc,(longlong)iVar15 * 0xc
                               );
                      }
                      *piVar1 = *piVar1 - uVar20;
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0xc,4,&pTVar26->AllocatorInstance,*piVar1,
                                 &(pFVar11->BatchNormals).ArrayMax);
                    }
                  }
                }
                pFVar27 = local_1a0;
                fVar3 = local_198->SoftBodyCollisionThickness;
                fVar4 = local_198->CollisionThickness;
                iVar15 = *(int *)&local_1a0->field_0x14;
                if ((*(longlong *)&local_1a0->field_0x8 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Particles",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x57,L""), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                lVar6 = *(longlong *)&pFVar27->field_0x8;
                if (((*(int *)&pFVar27->field_0x10 < 0) ||
                    (*(int *)(lVar6 + 0xb0) <
                     *(int *)&pFVar27->field_0x10 + *(int *)&pFVar27->field_0x14)) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x52,L""), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar23 = (FPAndInvM *)
                          ((longlong)*(int *)&pFVar27->field_0x10 * 0x10 +
                          *(longlong *)(lVar6 + 0xa8));
                iVar5 = *(int *)&pFVar27->field_0x14;
                if ((iVar5 < 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ArrayNum >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xfe,L""), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                local_e8._12_4_ = uStack_14c;
                local_e8.ArrayNum = iVar5;
                local_158 = pFVar23;
                iStack_150 = iVar5;
                local_e8.DataPtr = pFVar23;
                FMLLevelSet::BatchPhiWithNormal
                          ((FMLLevelSet *)this_00,&local_e8,(TRigidTransform<float,3> *)local_a8,
                           &local_198->BatchPhis,&local_198->BatchNormals,fVar3 + fVar4,0,0,iVar15);
              }
            }
            else {
              if ((this_00->field_0x18 != '&') ||
                 (this_00 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0))
              goto LAB_143cb9a19;
              if ((*(longlong *)&local_1a0->field_0x8 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x57,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar6 = *(longlong *)&pFVar27->field_0x8;
              if (((*(int *)&pFVar27->field_0x10 < 0) ||
                  (*(int *)(lVar6 + 0xb0) <
                   *(int *)&pFVar27->field_0x10 + *(int *)&pFVar27->field_0x14)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x52,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar23 = (FPAndInvM *)
                        ((longlong)*(int *)&pFVar27->field_0x10 * 0x10 + *(longlong *)(lVar6 + 0xa8)
                        );
              iVar15 = *(int *)&pFVar27->field_0x14;
              if ((iVar15 < 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              local_d8._12_4_ = uStack_13c;
              local_d8.ArrayNum = iVar15;
              local_148 = pFVar23;
              iStack_140 = iVar15;
              local_d8.DataPtr = pFVar23;
              TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormal
                        (this_00,&local_d8,(TRigidTransform<float,3> *)local_a8,
                         &local_198->BatchPhis,&local_198->BatchNormals);
            }
            local_120 = &local_188;
            local_118 = &local_180;
            local_128 = local_198;
            local_110 = local_a8;
            local_108 = &local_178;
            local_130 = &local_128;
            local_138 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,0,1>'::__l15::<lambda_1>,void,int>
                        ::Call;
            PhysicsParallelFor(*(int *)&pFVar27->field_0x14,
                               (TFunctionRef<void___cdecl(int)> *)&local_138,false);
            iVar15 = local_190;
          }
          local_190 = iVar15 + 1;
          param_3 = local_170;
          pFVar22 = local_168;
        } while (local_190 < *(int *)(pFVar24 + 0x14));
      }
      uVar18 = (ulonglong)local_18c;
      pFVar24 = pFVar24 + 0x20;
    }
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyComplexInternal<0,0,0> @ 143cb9b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,0,0>
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this_00;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FPBDSoftBodyCollisionConstraintBase *pFVar11;
  bool bVar12;
  uchar uVar13;
  uint uVar14;
  int iVar15;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar16;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar17;
  ulonglong uVar18;
  TVector<float,3> *pTVar19;
  uint uVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  FPAndInvM *pFVar23;
  FScriptContainerElement *pFVar24;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar25;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar26;
  FSolverParticlesRange *pFVar27;
  bool bVar28;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1a8 [8];
  FSolverParticlesRange *local_1a0;
  FPBDSoftBodyCollisionConstraintBase *local_198;
  int local_190;
  uint local_18c;
  TVector<float,3> *local_188;
  FPAndInvM *local_180;
  undefined8 local_178;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_170;
  FScriptContainerElement *local_168;
  FPAndInvM *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  FPAndInvM *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  code *local_138;
  FPBDSoftBodyCollisionConstraintBase **local_130;
  FPBDSoftBodyCollisionConstraintBase *local_128;
  TVector<float,3> **local_120;
  FPAndInvM **local_118;
  undefined1 *local_110;
  undefined8 *local_108;
  undefined1 local_f8 [16];
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_e8;
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_d8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_c8;
  TArrayView<Chaos::TVector<float,3>,int> local_b8;
  undefined1 local_a8 [48];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar28 = -1 < CpuChannel->Enabled;
  local_1a0 = param_1;
  local_198 = this;
  local_170 = param_3;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,0,0>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId495,
               "FPBDSoftBodyCollisionConstraint_ApplyComplexInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
               ,0x1ef);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,0,0>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId495);
  }
  if (this->bEnableComplexColliders != false) {
    pTVar16 = FSolverParticlesRange::GetPAndInvM(param_1,&local_c8);
    local_180 = pTVar16->DataPtr;
    pTVar17 = FSolverParticlesRange::XArray(param_1,&local_b8);
    uVar10 = _UNK_150689548;
    uVar9 = ___xmm_000000003f8000003f8000003f800000;
    pFVar24 = (param_3->AllocatorInstance).Data;
    local_188 = pTVar17->DataPtr;
    local_18c = param_3->ArrayNum;
    uVar18 = (ulonglong)(int)local_18c;
    pFVar22 = pFVar24 + uVar18 * 0x20;
    local_168 = pFVar22;
    while( true ) {
      if (param_3->ArrayNum != (int)uVar18) {
        local_1a8[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_1a8);
      }
      if (pFVar24 == pFVar22) break;
      local_190 = 0;
      if (0 < *(int *)(pFVar24 + 0x14)) {
        do {
          iVar15 = local_190;
          if ((*(longlong *)(pFVar24 + 8) == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = *(longlong *)(pFVar24 + 8);
          uVar20 = *(int *)(pFVar24 + 0x10) + iVar15;
          uVar14 = 0;
          if ((int)uVar20 < *(int *)(lVar6 + 0x68)) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = *(longlong *)(lVar6 + 0x60);
          uVar13 = FImplicitObject::GetType
                             (*(FImplicitObject **)(lVar6 + (longlong)(int)uVar20 * 8));
          if ((uVar13 == '&') || (uVar13 == '\x11')) {
            if ((*(longlong *)(pFVar24 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar7 = *(longlong *)(pFVar24 + 8);
            uVar21 = *(int *)(pFVar24 + 0x10) + iVar15;
            uVar14 = 0;
            if ((int)uVar21 < *(int *)(lVar7 + 0x50)) {
              uVar14 = ~uVar21 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            puVar2 = (undefined8 *)(*(longlong *)(lVar7 + 0x48) + (longlong)(int)uVar21 * 0x10);
            local_f8._0_8_ = *puVar2;
            local_f8._8_8_ = puVar2[1];
            if ((*(longlong *)(pFVar24 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar14 = 0;
            if (*(int *)(pFVar24 + 0x10) + iVar15 < *(int *)(*(longlong *)(pFVar24 + 8) + 0x80)) {
              uVar14 = (uint)~(*(int *)(pFVar24 + 0x10) + iVar15) >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((*(longlong *)(pFVar24 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pTVar19 = TParticles<float,3>::GetX
                                (*(TParticles<float,3> **)(pFVar24 + 8),
                                 *(int *)(pFVar24 + 0x10) + iVar15);
            if ((*(longlong *)(pFVar24 + 8) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar14 = 0;
            if (*(int *)(pFVar24 + 0x10) + iVar15 < *(int *)(*(longlong *)(pFVar24 + 8) + 0x98)) {
              uVar14 = (uint)~(*(int *)(pFVar24 + 0x10) + iVar15) >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar11 = local_198;
            pFVar27 = local_1a0;
            local_a8._0_8_ = local_f8._0_8_;
            local_a8._8_8_ = local_f8._8_8_;
            local_178 = 0;
            local_a8._32_8_ = uVar9;
            local_a8._40_8_ = uVar10;
            local_a8._28_4_ = 0;
            local_a8._16_12_ = (undefined1  [12])*pTVar19;
            this_00 = *(TWeightedLatticeImplicitObject<Chaos::FLevelSet> **)
                       (lVar6 + (longlong)(int)uVar20 * 8);
            if (this_00->field_0x18 == '\x11') {
              if (this_00 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
LAB_143cba319:
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!\"Enclosing block should never be called\"",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
                                    ,0x299,L"");
                pFVar27 = local_1a0;
                if (bVar12) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              else {
                pTVar25 = &local_198->BatchPhis;
                iVar15 = (local_198->BatchPhis).ArrayNum;
                piVar1 = &(local_198->BatchPhis).ArrayNum;
                uVar14 = *(uint *)&local_1a0->field_0x14;
                if (iVar15 < (int)uVar14) {
                  UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,uVar14 - iVar15,&pTVar25->AllocatorInstance,piVar1,
                             &(local_198->BatchPhis).ArrayMax);
                }
                else {
                  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
                  }
                  if ((int)uVar14 < iVar15) {
                    uVar20 = iVar15 - uVar14;
                    if (((int)(uVar20 | uVar14) < 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x458,
                                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    if (uVar20 != 0) {
                      pFVar22 = (pTVar25->AllocatorInstance).Data + (longlong)(int)uVar14 * 4;
                      iVar15 = (*piVar1 - uVar20) - uVar14;
                      if (iVar15 != 0) {
                        memmove(pFVar22,pFVar22 + (longlong)(int)uVar20 * 4,(longlong)iVar15 << 2);
                      }
                      *piVar1 = *piVar1 - uVar20;
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,&pTVar25->AllocatorInstance,*piVar1,
                                 &(pFVar11->BatchPhis).ArrayMax);
                    }
                  }
                }
                pFVar11 = local_198;
                pTVar26 = &local_198->BatchNormals;
                piVar1 = &(local_198->BatchNormals).ArrayNum;
                uVar14 = *(uint *)&local_1a0->field_0x14;
                iVar15 = *piVar1;
                if (iVar15 < (int)uVar14) {
                  UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,uVar14 - iVar15,&pTVar26->AllocatorInstance,piVar1,
                             &(local_198->BatchNormals).ArrayMax);
                }
                else {
                  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
                  }
                  if ((int)uVar14 < iVar15) {
                    uVar20 = iVar15 - uVar14;
                    if (((int)(uVar20 | uVar14) < 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x458,
                                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    if (uVar20 != 0) {
                      pFVar22 = (pTVar26->AllocatorInstance).Data + (longlong)(int)uVar14 * 0xc;
                      iVar15 = (*piVar1 - uVar20) - uVar14;
                      if (iVar15 != 0) {
                        memmove(pFVar22,pFVar22 + (longlong)(int)uVar20 * 0xc,(longlong)iVar15 * 0xc
                               );
                      }
                      *piVar1 = *piVar1 - uVar20;
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0xc,4,&pTVar26->AllocatorInstance,*piVar1,
                                 &(pFVar11->BatchNormals).ArrayMax);
                    }
                  }
                }
                pFVar27 = local_1a0;
                fVar3 = local_198->SoftBodyCollisionThickness;
                fVar4 = local_198->CollisionThickness;
                iVar15 = *(int *)&local_1a0->field_0x14;
                if ((*(longlong *)&local_1a0->field_0x8 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Particles",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x57,L""), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                lVar6 = *(longlong *)&pFVar27->field_0x8;
                if (((*(int *)&pFVar27->field_0x10 < 0) ||
                    (*(int *)(lVar6 + 0xb0) <
                     *(int *)&pFVar27->field_0x10 + *(int *)&pFVar27->field_0x14)) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x52,L""), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar23 = (FPAndInvM *)
                          ((longlong)*(int *)&pFVar27->field_0x10 * 0x10 +
                          *(longlong *)(lVar6 + 0xa8));
                iVar5 = *(int *)&pFVar27->field_0x14;
                if ((iVar5 < 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ArrayNum >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xfe,L""), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                local_e8._12_4_ = uStack_14c;
                local_e8.ArrayNum = iVar5;
                local_158 = pFVar23;
                iStack_150 = iVar5;
                local_e8.DataPtr = pFVar23;
                FMLLevelSet::BatchPhiWithNormal
                          ((FMLLevelSet *)this_00,&local_e8,(TRigidTransform<float,3> *)local_a8,
                           &local_198->BatchPhis,&local_198->BatchNormals,fVar3 + fVar4,0,0,iVar15);
              }
            }
            else {
              if ((this_00->field_0x18 != '&') ||
                 (this_00 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0))
              goto LAB_143cba319;
              if ((*(longlong *)&local_1a0->field_0x8 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x57,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar6 = *(longlong *)&pFVar27->field_0x8;
              if (((*(int *)&pFVar27->field_0x10 < 0) ||
                  (*(int *)(lVar6 + 0xb0) <
                   *(int *)&pFVar27->field_0x10 + *(int *)&pFVar27->field_0x14)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x52,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar23 = (FPAndInvM *)
                        ((longlong)*(int *)&pFVar27->field_0x10 * 0x10 + *(longlong *)(lVar6 + 0xa8)
                        );
              iVar15 = *(int *)&pFVar27->field_0x14;
              if ((iVar15 < 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              local_d8._12_4_ = uStack_13c;
              local_d8.ArrayNum = iVar15;
              local_148 = pFVar23;
              iStack_140 = iVar15;
              local_d8.DataPtr = pFVar23;
              TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormal
                        (this_00,&local_d8,(TRigidTransform<float,3> *)local_a8,
                         &local_198->BatchPhis,&local_198->BatchNormals);
            }
            local_120 = &local_188;
            local_118 = &local_180;
            local_128 = local_198;
            local_110 = local_a8;
            local_108 = &local_178;
            local_130 = &local_128;
            local_138 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,0,0>'::__l15::<lambda_1>,void,int>
                        ::Call;
            PhysicsParallelFor(*(int *)&pFVar27->field_0x14,
                               (TFunctionRef<void___cdecl(int)> *)&local_138,false);
            iVar15 = local_190;
          }
          local_190 = iVar15 + 1;
          param_3 = local_170;
          pFVar22 = local_168;
        } while (local_190 < *(int *)(pFVar24 + 0x14));
      }
      uVar18 = (ulonglong)local_18c;
      pFVar24 = pFVar24 + 0x20;
    }
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyInternalCCD<1,1> @ 143cba430

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyInternalCCD<1,1>
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar1;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar2;
  FPAndInvM *local_res8;
  TVector<float,3> *local_58;
  undefined1 local_50 [16];
  FPBDSoftBodyCollisionConstraintBase *local_40;
  float local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_20;
  
  if ((this->bEnableSimpleColliders != false) || (this->bEnableComplexColliders != false)) {
    pTVar1 = FSolverParticlesRange::GetPAndInvM
                       (param_1,(TArrayView<Chaos::Softs::FPAndInvM,int> *)local_50);
    local_res8 = pTVar1->DataPtr;
    pTVar2 = FSolverParticlesRange::XArray
                       (param_1,(TArrayView<Chaos::TVector<float,3>,int> *)local_50);
    local_58 = pTVar2->DataPtr;
    local_30 = &local_res8;
    local_28 = &local_58;
    local_50._8_8_ = &local_40;
    local_50._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyInternalCCD<1,1>'::__l2::<lambda_1>,void,int>
         ::Call;
    local_40 = this;
    local_38 = param_2;
    local_20 = param_3;
    PhysicsParallelFor(*(int *)&param_1->field_0x14,(TFunctionRef<void___cdecl(int)> *)local_50,
                       false);
  }
  return;
}

// ApplyInternalCCD<1,0> @ 143cba500

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyInternalCCD<1,0>
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar1;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar2;
  FPAndInvM *local_res8;
  TVector<float,3> *local_58;
  undefined1 local_50 [16];
  FPBDSoftBodyCollisionConstraintBase *local_40;
  float local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_20;
  
  if ((this->bEnableSimpleColliders != false) || (this->bEnableComplexColliders != false)) {
    pTVar1 = FSolverParticlesRange::GetPAndInvM
                       (param_1,(TArrayView<Chaos::Softs::FPAndInvM,int> *)local_50);
    local_res8 = pTVar1->DataPtr;
    pTVar2 = FSolverParticlesRange::XArray
                       (param_1,(TArrayView<Chaos::TVector<float,3>,int> *)local_50);
    local_58 = pTVar2->DataPtr;
    local_30 = &local_res8;
    local_28 = &local_58;
    local_50._8_8_ = &local_40;
    local_50._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyInternalCCD<1,0>'::__l2::<lambda_1>,void,int>
         ::Call;
    local_40 = this;
    local_38 = param_2;
    local_20 = param_3;
    PhysicsParallelFor(*(int *)&param_1->field_0x14,(TFunctionRef<void___cdecl(int)> *)local_50,
                       false);
  }
  return;
}

// ApplyInternalCCD<0,1> @ 143cba5d0

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyInternalCCD<0,1>
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar1;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar2;
  FPAndInvM *local_res8;
  TVector<float,3> *local_58;
  undefined1 local_50 [16];
  FPBDSoftBodyCollisionConstraintBase *local_40;
  float local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_20;
  
  if ((this->bEnableSimpleColliders != false) || (this->bEnableComplexColliders != false)) {
    pTVar1 = FSolverParticlesRange::GetPAndInvM
                       (param_1,(TArrayView<Chaos::Softs::FPAndInvM,int> *)local_50);
    local_res8 = pTVar1->DataPtr;
    pTVar2 = FSolverParticlesRange::XArray
                       (param_1,(TArrayView<Chaos::TVector<float,3>,int> *)local_50);
    local_58 = pTVar2->DataPtr;
    local_30 = &local_res8;
    local_28 = &local_58;
    local_50._8_8_ = &local_40;
    local_50._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyInternalCCD<0,1>'::__l2::<lambda_1>,void,int>
         ::Call;
    local_40 = this;
    local_38 = param_2;
    local_20 = param_3;
    PhysicsParallelFor(*(int *)&param_1->field_0x14,(TFunctionRef<void___cdecl(int)> *)local_50,
                       false);
  }
  return;
}

// ApplyInternalCCD<0,0> @ 143cba6a0

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyInternalCCD<0,0>
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar1;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar2;
  FPAndInvM *local_res8;
  TVector<float,3> *local_58;
  undefined1 local_50 [16];
  FPBDSoftBodyCollisionConstraintBase *local_40;
  float local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_20;
  
  if ((this->bEnableSimpleColliders != false) || (this->bEnableComplexColliders != false)) {
    pTVar1 = FSolverParticlesRange::GetPAndInvM
                       (param_1,(TArrayView<Chaos::Softs::FPAndInvM,int> *)local_50);
    local_res8 = pTVar1->DataPtr;
    pTVar2 = FSolverParticlesRange::XArray
                       (param_1,(TArrayView<Chaos::TVector<float,3>,int> *)local_50);
    local_58 = pTVar2->DataPtr;
    local_30 = &local_res8;
    local_28 = &local_58;
    local_50._8_8_ = &local_40;
    local_50._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyInternalCCD<0,0>'::__l2::<lambda_1>,void,int>
         ::Call;
    local_40 = this;
    local_38 = param_2;
    local_20 = param_3;
    PhysicsParallelFor(*(int *)&param_1->field_0x14,(TFunctionRef<void___cdecl(int)> *)local_50,
                       false);
  }
  return;
}

// ApplySimpleInternal<1,1,1> @ 143cba770

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,1,1>
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar1;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar2;
  bool bVar3;
  TVector<float,3> *local_res8;
  FPAndInvM *local_58;
  undefined1 local_50 [16];
  FPBDSoftBodyCollisionConstraintBase *local_40;
  TVector<float,3> **local_38;
  FPAndInvM **local_30;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_28;
  float local_20;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,1,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId409,
               "FPBDSoftBodyCollisionConstraint_ApplySimpleInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
               ,0x199);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,1,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId409);
  }
  if (this->bEnableSimpleColliders != false) {
    pTVar1 = FSolverParticlesRange::GetPAndInvM
                       (param_1,(TArrayView<Chaos::Softs::FPAndInvM,int> *)local_50);
    local_58 = pTVar1->DataPtr;
    pTVar2 = FSolverParticlesRange::XArray
                       (param_1,(TArrayView<Chaos::TVector<float,3>,int> *)local_50);
    local_res8 = pTVar2->DataPtr;
    local_38 = &local_res8;
    local_30 = &local_58;
    local_50._8_8_ = &local_40;
    local_50._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,1,1>'::__l2::<lambda_1>,void,int>
         ::Call;
    local_40 = this;
    local_28 = param_3;
    local_20 = param_2;
    PhysicsParallelFor(*(int *)&param_1->field_0x14,(TFunctionRef<void___cdecl(int)> *)local_50,
                       false);
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplySimpleInternal<1,1,0> @ 143cba890

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,1,0>
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar1;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar2;
  bool bVar3;
  TVector<float,3> *local_res8;
  FPAndInvM *local_58;
  undefined1 local_50 [16];
  FPBDSoftBodyCollisionConstraintBase *local_40;
  TVector<float,3> **local_38;
  FPAndInvM **local_30;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_28;
  float local_20;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,1,0>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId409,
               "FPBDSoftBodyCollisionConstraint_ApplySimpleInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
               ,0x199);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,1,0>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId409);
  }
  if (this->bEnableSimpleColliders != false) {
    pTVar1 = FSolverParticlesRange::GetPAndInvM
                       (param_1,(TArrayView<Chaos::Softs::FPAndInvM,int> *)local_50);
    local_58 = pTVar1->DataPtr;
    pTVar2 = FSolverParticlesRange::XArray
                       (param_1,(TArrayView<Chaos::TVector<float,3>,int> *)local_50);
    local_res8 = pTVar2->DataPtr;
    local_38 = &local_res8;
    local_30 = &local_58;
    local_50._8_8_ = &local_40;
    local_50._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,1,0>'::__l2::<lambda_1>,void,int>
         ::Call;
    local_40 = this;
    local_28 = param_3;
    local_20 = param_2;
    PhysicsParallelFor(*(int *)&param_1->field_0x14,(TFunctionRef<void___cdecl(int)> *)local_50,
                       false);
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplySimpleInternal<1,0,1> @ 143cba9b0

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,0,1>
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar1;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar2;
  bool bVar3;
  TVector<float,3> *local_res8;
  FPAndInvM *local_58;
  undefined1 local_50 [16];
  FPBDSoftBodyCollisionConstraintBase *local_40;
  TVector<float,3> **local_38;
  FPAndInvM **local_30;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_28;
  float local_20;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,0,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId409,
               "FPBDSoftBodyCollisionConstraint_ApplySimpleInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
               ,0x199);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,0,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId409);
  }
  if (this->bEnableSimpleColliders != false) {
    pTVar1 = FSolverParticlesRange::GetPAndInvM
                       (param_1,(TArrayView<Chaos::Softs::FPAndInvM,int> *)local_50);
    local_58 = pTVar1->DataPtr;
    pTVar2 = FSolverParticlesRange::XArray
                       (param_1,(TArrayView<Chaos::TVector<float,3>,int> *)local_50);
    local_res8 = pTVar2->DataPtr;
    local_38 = &local_res8;
    local_30 = &local_58;
    local_50._8_8_ = &local_40;
    local_50._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,0,1>'::__l2::<lambda_1>,void,int>
         ::Call;
    local_40 = this;
    local_28 = param_3;
    local_20 = param_2;
    PhysicsParallelFor(*(int *)&param_1->field_0x14,(TFunctionRef<void___cdecl(int)> *)local_50,
                       false);
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplySimpleInternal<1,0,0> @ 143cbaad0

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,0,0>
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar1;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar2;
  bool bVar3;
  TVector<float,3> *local_res8;
  FPAndInvM *local_58;
  undefined1 local_50 [16];
  FPBDSoftBodyCollisionConstraintBase *local_40;
  TVector<float,3> **local_38;
  FPAndInvM **local_30;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_28;
  float local_20;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,0,0>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId409,
               "FPBDSoftBodyCollisionConstraint_ApplySimpleInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
               ,0x199);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,0,0>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId409);
  }
  if (this->bEnableSimpleColliders != false) {
    pTVar1 = FSolverParticlesRange::GetPAndInvM
                       (param_1,(TArrayView<Chaos::Softs::FPAndInvM,int> *)local_50);
    local_58 = pTVar1->DataPtr;
    pTVar2 = FSolverParticlesRange::XArray
                       (param_1,(TArrayView<Chaos::TVector<float,3>,int> *)local_50);
    local_res8 = pTVar2->DataPtr;
    local_38 = &local_res8;
    local_30 = &local_58;
    local_50._8_8_ = &local_40;
    local_50._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,0,0>'::__l2::<lambda_1>,void,int>
         ::Call;
    local_40 = this;
    local_28 = param_3;
    local_20 = param_2;
    PhysicsParallelFor(*(int *)&param_1->field_0x14,(TFunctionRef<void___cdecl(int)> *)local_50,
                       false);
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplySimpleInternal<0,1,1> @ 143cbabf0

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,1,1>
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar1;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar2;
  bool bVar3;
  TVector<float,3> *local_res8;
  FPAndInvM *local_58;
  undefined1 local_50 [16];
  FPBDSoftBodyCollisionConstraintBase *local_40;
  TVector<float,3> **local_38;
  FPAndInvM **local_30;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_28;
  float local_20;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,1,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId409,
               "FPBDSoftBodyCollisionConstraint_ApplySimpleInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
               ,0x199);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,1,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId409);
  }
  if (this->bEnableSimpleColliders != false) {
    pTVar1 = FSolverParticlesRange::GetPAndInvM
                       (param_1,(TArrayView<Chaos::Softs::FPAndInvM,int> *)local_50);
    local_58 = pTVar1->DataPtr;
    pTVar2 = FSolverParticlesRange::XArray
                       (param_1,(TArrayView<Chaos::TVector<float,3>,int> *)local_50);
    local_res8 = pTVar2->DataPtr;
    local_38 = &local_res8;
    local_30 = &local_58;
    local_50._8_8_ = &local_40;
    local_50._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,1,1>'::__l2::<lambda_1>,void,int>
         ::Call;
    local_40 = this;
    local_28 = param_3;
    local_20 = param_2;
    PhysicsParallelFor(*(int *)&param_1->field_0x14,(TFunctionRef<void___cdecl(int)> *)local_50,
                       false);
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplySimpleInternal<0,1,0> @ 143cbad10

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,1,0>
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar1;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar2;
  bool bVar3;
  TVector<float,3> *local_res8;
  FPAndInvM *local_58;
  undefined1 local_50 [16];
  FPBDSoftBodyCollisionConstraintBase *local_40;
  TVector<float,3> **local_38;
  FPAndInvM **local_30;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_28;
  float local_20;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,1,0>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId409,
               "FPBDSoftBodyCollisionConstraint_ApplySimpleInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
               ,0x199);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,1,0>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId409);
  }
  if (this->bEnableSimpleColliders != false) {
    pTVar1 = FSolverParticlesRange::GetPAndInvM
                       (param_1,(TArrayView<Chaos::Softs::FPAndInvM,int> *)local_50);
    local_58 = pTVar1->DataPtr;
    pTVar2 = FSolverParticlesRange::XArray
                       (param_1,(TArrayView<Chaos::TVector<float,3>,int> *)local_50);
    local_res8 = pTVar2->DataPtr;
    local_38 = &local_res8;
    local_30 = &local_58;
    local_50._8_8_ = &local_40;
    local_50._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,1,0>'::__l2::<lambda_1>,void,int>
         ::Call;
    local_40 = this;
    local_28 = param_3;
    local_20 = param_2;
    PhysicsParallelFor(*(int *)&param_1->field_0x14,(TFunctionRef<void___cdecl(int)> *)local_50,
                       false);
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplySimpleInternal<0,0,1> @ 143cbae30

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,0,1>
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar1;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar2;
  bool bVar3;
  TVector<float,3> *local_res8;
  FPAndInvM *local_58;
  undefined1 local_50 [16];
  FPBDSoftBodyCollisionConstraintBase *local_40;
  TVector<float,3> **local_38;
  FPAndInvM **local_30;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_28;
  float local_20;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,0,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId409,
               "FPBDSoftBodyCollisionConstraint_ApplySimpleInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
               ,0x199);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,0,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId409);
  }
  if (this->bEnableSimpleColliders != false) {
    pTVar1 = FSolverParticlesRange::GetPAndInvM
                       (param_1,(TArrayView<Chaos::Softs::FPAndInvM,int> *)local_50);
    local_58 = pTVar1->DataPtr;
    pTVar2 = FSolverParticlesRange::XArray
                       (param_1,(TArrayView<Chaos::TVector<float,3>,int> *)local_50);
    local_res8 = pTVar2->DataPtr;
    local_38 = &local_res8;
    local_30 = &local_58;
    local_50._8_8_ = &local_40;
    local_50._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,0,1>'::__l2::<lambda_1>,void,int>
         ::Call;
    local_40 = this;
    local_28 = param_3;
    local_20 = param_2;
    PhysicsParallelFor(*(int *)&param_1->field_0x14,(TFunctionRef<void___cdecl(int)> *)local_50,
                       false);
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplySimpleInternal<0,0,0> @ 143cbaf50

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,0,0>
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar1;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar2;
  bool bVar3;
  TVector<float,3> *local_res8;
  FPAndInvM *local_58;
  undefined1 local_50 [16];
  FPBDSoftBodyCollisionConstraintBase *local_40;
  TVector<float,3> **local_38;
  FPAndInvM **local_30;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_28;
  float local_20;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,0,0>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId409,
               "FPBDSoftBodyCollisionConstraint_ApplySimpleInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
               ,0x199);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,0,0>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId409);
  }
  if (this->bEnableSimpleColliders != false) {
    pTVar1 = FSolverParticlesRange::GetPAndInvM
                       (param_1,(TArrayView<Chaos::Softs::FPAndInvM,int> *)local_50);
    local_58 = pTVar1->DataPtr;
    pTVar2 = FSolverParticlesRange::XArray
                       (param_1,(TArrayView<Chaos::TVector<float,3>,int> *)local_50);
    local_res8 = pTVar2->DataPtr;
    local_38 = &local_res8;
    local_30 = &local_58;
    local_50._8_8_ = &local_40;
    local_50._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,0,0>'::__l2::<lambda_1>,void,int>
         ::Call;
    local_40 = this;
    local_28 = param_3;
    local_20 = param_2;
    PhysicsParallelFor(*(int *)&param_1->field_0x14,(TFunctionRef<void___cdecl(int)> *)local_50,
                       false);
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 143d05330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyInternalCCD<1,1>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  FImplicitObject *this_00;
  ForAnyElementType *pFVar11;
  FScriptContainerElement *pFVar12;
  FWeightedLatticeImplicitObject *this_01;
  code *pcVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  TVector<Chaos::TVector<int,3>,4> *pTVar17;
  TVector<Chaos::TVector<int,3>,4> *pTVar18;
  TVector<Chaos::TVector<int,3>,4> *pTVar19;
  TVector<Chaos::TVector<int,3>,4> *pTVar20;
  TVector<Chaos::TVector<int,3>,4> *pTVar21;
  TVector<Chaos::TVector<int,3>,4> *pTVar22;
  TVector<Chaos::TVector<int,3>,4> *pTVar23;
  ForAnyElementType FVar24;
  FLevelSet *pFVar25;
  TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *pTVar26;
  bool bVar27;
  uchar uVar28;
  uint uVar29;
  int iVar30;
  TVector<float,3> *pTVar31;
  TVector<double,3> *pTVar32;
  FSolverCollisionParticles *pFVar33;
  longlong lVar34;
  longlong lVar35;
  ushort *puVar36;
  ulonglong uVar37;
  float *pfVar38;
  FParticleRangeIndex FVar39;
  uint uVar40;
  uint uVar41;
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar42;
  TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *this_02;
  longlong lVar43;
  TVector<Chaos::TVector<int,3>,4> *pTVar44;
  longlong lVar45;
  longlong lVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar53;
  float fVar54;
  undefined1 auVar52 [16];
  float fVar55;
  float fVar56;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar57 [16];
  float fVar61;
  float fVar64;
  undefined8 uVar62;
  double dVar63;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined1 auStackY_3b8 [32];
  undefined1 local_368 [4];
  uint local_364;
  float local_360;
  longlong local_358;
  float local_350;
  float fStack_34c;
  float local_348;
  TArray<Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate,TSizedDefaultAllocator<32>_>
  local_340;
  int local_330;
  uint local_32c;
  longlong *local_328;
  longlong local_320;
  FLevelSet *local_318;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  TVector<float,3> local_2f8;
  TVector<float,3> local_2e8;
  TVector<float,3> local_2d8;
  TVector<int,3> *local_2c8;
  int *local_2c0;
  int *local_2b8;
  TVector<int,3> *local_2b0;
  int *local_2a8;
  int *local_2a0;
  int *local_298;
  int *local_290;
  double local_288;
  longlong local_280;
  longlong local_278;
  undefined8 local_270;
  float local_268;
  undefined8 local_264;
  float local_25c;
  longlong local_258;
  TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *local_250;
  longlong *local_248;
  undefined1 local_240 [12];
  undefined8 local_234;
  float local_22c;
  undefined8 local_228;
  longlong local_218;
  double local_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  bool local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double dStack_138;
  TVector<float,3> local_130;
  TVector<double,3> local_120;
  TVector<double,3> local_108;
  float local_f0 [4];
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  lVar46 = (longlong)param_1;
  local_218 = lVar46 * 0x10;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + local_218) != 0.0) {
    local_248 = *(longlong **)((longlong)this + 0x20);
    local_32c = *(uint *)(local_248 + 1);
    uVar37 = (ulonglong)(int)local_32c;
    this_02 = (TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *)*local_248;
    uVar71 = (undefined4)__real_47eff933c0000000;
    uVar72 = (undefined4)((ulonglong)__real_47eff933c0000000 >> 0x20);
    local_250 = this_02 + uVar37;
    fVar67 = __real_3dcccccd;
    local_328 = this;
    local_278 = lVar46;
    while( true ) {
      pTVar26 = local_250;
      if ((int)local_248[1] != (int)uVar37) {
        local_368[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_368);
      }
      if (this_02 == pTVar26) break;
      plVar10 = (longlong *)**(longlong **)this;
      if (((this_02->Offset < 0) || ((int)plVar10[1] < this_02->Offset + this_02->RangeSize)) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x4b,L""), bVar27)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      local_258 = (longlong)this_02->Offset * 0x30 + *plVar10;
      local_330 = this_02->RangeSize;
      if ((local_330 < 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar27)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      local_364 = 0;
      local_320 = 0;
      if (0 < this_02->RangeSize) {
        do {
          lVar43 = local_320;
          uVar41 = local_364;
          if ((this_02->Particles == (FSolverCollisionParticles *)0x0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar27)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar33 = this_02->Particles;
          uVar40 = this_02->Offset + uVar41;
          uVar29 = 0;
          if ((int)uVar40 < (int)pFVar33->_padding_) {
            uVar29 = ~uVar40 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar28 = Chaos::FImplicitObject::GetType
                             (*(FImplicitObject **)(pFVar33->_padding_ + (longlong)(int)uVar40 * 8))
          ;
          if ((uVar28 == '&') || (uVar28 == '\x11')) {
            cVar7 = *(char *)(*(longlong *)this + 0x1d);
LAB_143d05582:
            if (cVar7 != '\0') {
              if ((this_02->Particles == (FSolverCollisionParticles *)0x0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar27)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar33 = this_02->Particles;
              uVar40 = this_02->Offset + uVar41;
              uVar29 = 0;
              if ((int)uVar40 < (int)pFVar33->_padding_) {
                uVar29 = ~uVar40 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar27)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pfVar38 = (float *)(pFVar33->_padding_ + (longlong)(int)uVar40 * 0x10);
              fVar69 = *pfVar38;
              fVar14 = pfVar38[1];
              fVar15 = pfVar38[2];
              fVar16 = pfVar38[3];
              local_308 = fVar69;
              fStack_304 = fVar14;
              fStack_300 = fVar15;
              fStack_2fc = fVar16;
              if ((this_02->Particles == (FSolverCollisionParticles *)0x0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar27)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pTVar31 = Chaos::TParticles<float,3>::GetX
                                  ((TParticles<float,3> *)this_02->Particles,
                                   this_02->Offset + uVar41);
              fVar1 = *(float *)&pTVar31->field_0x8;
              fVar68 = (float)*(undefined8 *)pTVar31;
              fVar70 = (float)((ulonglong)*(undefined8 *)pTVar31 >> 0x20);
              if ((this_02->Particles == (FSolverCollisionParticles *)0x0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar27)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar33 = this_02->Particles;
              uVar40 = this_02->Offset + uVar41;
              uVar29 = 0;
              if ((int)uVar40 < (int)pFVar33->_padding_) {
                uVar29 = ~uVar40 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar27)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              fVar61 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
              fVar64 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
              fVar65 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
              fVar66 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
              fVar55 = fVar69 * fVar61;
              fVar58 = fVar14 * fVar64;
              fVar59 = fVar15 * fVar65;
              fVar60 = fVar16 * fVar66;
              this_00 = *(FImplicitObject **)(pFVar33->_padding_ + (longlong)(int)uVar40 * 8);
              fVar47 = *(float *)(*(longlong *)this + 0xc);
              fVar49 = *(float *)(*(longlong *)this + 8);
              uVar62 = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + lVar46 * 0x10);
              auVar52._0_4_ = (float)uVar62 - fVar68;
              auVar52._4_4_ = (float)((ulonglong)uVar62 >> 0x20) - fVar70;
              auVar52._8_4_ =
                   *(float *)(**(longlong **)((longlong)this + 0x10) + 8 + lVar46 * 0x10) - fVar1;
              auVar52._12_4_ = 0;
              uVar29 = 0;
              if ((int)uVar41 < local_330) {
                uVar29 = ~uVar41 >> 0x1f;
              }
              auVar52 = insertps(auVar52,auVar52,8);
              fVar56 = auVar52._0_4_;
              fVar53 = auVar52._4_4_;
              fVar54 = auVar52._8_4_;
              fVar48 = fVar53 * fVar55 - fVar58 * fVar56;
              fVar50 = fVar54 * fVar58 - fVar59 * fVar53;
              fVar51 = fVar56 * fVar59 - fVar55 * fVar54;
              fVar50 = fVar50 + fVar50;
              fVar51 = fVar51 + fVar51;
              fVar48 = fVar48 + fVar48;
              fVar56 = fVar60 * fVar50 + fVar56 + (fVar48 * fVar58 - fVar59 * fVar51);
              fVar59 = fVar60 * fVar51 + fVar53 + (fVar50 * fVar59 - fVar55 * fVar48);
              local_264 = CONCAT44(fVar59,fVar56);
              local_25c = fVar60 * fVar48 + fVar54 + (fVar51 * fVar55 - fVar58 * fVar50);
              local_188 = (double)fVar56;
              local_180 = (double)fVar59;
              local_178 = (double)local_25c;
              if (uVar29 == 0) {
                bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar27) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                fVar61 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
                fVar64 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
                fVar65 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
                fVar66 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
              }
              uVar62 = *(undefined8 *)(**(longlong **)((longlong)this + 0x18) + lVar46 * 0xc);
              pfVar38 = (float *)(local_258 + lVar43 * 0x30);
              fVar61 = *pfVar38 * fVar61;
              fVar64 = pfVar38[1] * fVar64;
              fVar65 = pfVar38[2] * fVar65;
              fVar66 = pfVar38[3] * fVar66;
              pfVar38 = (float *)(local_258 + 0x10 + lVar43 * 0x30);
              auVar57._0_4_ = (float)uVar62 - *pfVar38;
              auVar57._4_4_ = (float)((ulonglong)uVar62 >> 0x20) - pfVar38[1];
              auVar57._8_4_ =
                   *(float *)(**(longlong **)((longlong)this + 0x18) + 8 + lVar46 * 0xc) -
                   pfVar38[2];
              auVar57._12_4_ = 0.0 - pfVar38[3];
              auVar52 = insertps(auVar57,auVar57,8);
              fVar60 = auVar52._0_4_;
              fVar48 = auVar52._4_4_;
              fVar50 = auVar52._8_4_;
              fVar55 = fVar48 * fVar61 - fVar64 * fVar60;
              fVar58 = fVar50 * fVar64 - fVar65 * fVar48;
              fVar59 = fVar60 * fVar65 - fVar61 * fVar50;
              fVar58 = fVar58 + fVar58;
              fVar59 = fVar59 + fVar59;
              fVar55 = fVar55 + fVar55;
              fVar60 = fVar66 * fVar58 + fVar60 + (fVar55 * fVar64 - fVar59 * fVar65);
              fVar65 = fVar66 * fVar59 + fVar48 + (fVar58 * fVar65 - fVar55 * fVar61);
              local_270 = CONCAT44(fVar65,fVar60);
              local_268 = fVar66 * fVar55 + fVar50 + (fVar59 * fVar61 - fVar58 * fVar64);
              local_170 = (double)fVar60;
              local_168 = (double)fVar65;
              local_160 = (double)local_268;
              Chaos::FImplicitObject::FindClosestIntersection
                        (this_00,(Pair<Chaos::TVector<double,3>,bool> *)local_1a8,
                         (TVector<double,3> *)&local_170,(TVector<double,3> *)&local_188,
                         (double)(fVar47 + fVar49));
              if (local_190 != false) {
                if ((this_02->Particles == (FSolverCollisionParticles *)0x0) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Particles",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x56,L""), bVar27)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pFVar33 = this_02->Particles;
                uVar40 = this_02->Offset + uVar41;
                uVar29 = 0;
                if ((int)uVar40 < (int)pFVar33->_padding_) {
                  uVar29 = ~uVar40 >> 0x1f;
                }
                if ((uVar29 == 0) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar27)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pTVar32 = Chaos::FImplicitObject::Normal
                                    (*(FImplicitObject **)
                                      (pFVar33->_padding_ + (longlong)(int)uVar40 * 8),&local_120,
                                     (TVector<double,3> *)local_1a8);
                fVar47 = (float)*(double *)&pTVar32->field_0x8;
                fVar49 = (float)*(double *)&pTVar32->field_0x10;
                fVar66 = (float)*(double *)pTVar32;
                fVar61 = fVar47 * fVar69 - fVar14 * fVar66;
                fVar64 = fVar49 * fVar14 - fVar15 * fVar47;
                fVar65 = fVar66 * fVar15 - fVar69 * fVar49;
                fVar64 = fVar64 + fVar64;
                fVar65 = fVar65 + fVar65;
                fVar61 = fVar61 + fVar61;
                fVar55 = (float)(double)local_1a8._0_8_;
                local_350 = fVar16 * fVar64 + fVar66 + (fVar61 * fVar14 - fVar15 * fVar65);
                fStack_34c = fVar16 * fVar65 + fVar47 + (fVar64 * fVar15 - fVar69 * fVar61);
                fVar65 = fVar16 * fVar61 + fVar49 + (fVar65 * fVar69 - fVar14 * fVar64);
                fVar66 = (float)local_198;
                fVar47 = (float)(double)local_1a8._8_8_;
                fVar49 = fVar47 * fVar69 - fVar55 * fVar14;
                fVar61 = fVar66 * fVar14 - fVar47 * fVar15;
                fVar64 = fVar55 * fVar15 - fVar66 * fVar69;
                fVar61 = fVar61 + fVar61;
                fVar64 = fVar64 + fVar64;
                fVar49 = fVar49 + fVar49;
                uVar62 = CONCAT44(fVar16 * fVar64 + fVar47 + (fVar61 * fVar15 - fVar69 * fVar49) +
                                  fVar70,fVar16 * fVar61 + fVar55 +
                                         (fVar49 * fVar14 - fVar15 * fVar64) + fVar68);
                local_360 = fVar16 * fVar49 + fVar66 + (fVar64 * fVar69 - fVar14 * fVar61) + fVar1;
                lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x98);
                local_348 = fVar65;
                local_240._0_8_ = _local_350;
                local_240._8_4_ = fVar65;
                local_234 = uVar62;
                local_22c = local_360;
                local_228 = uVar62;
                if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::ReportNotNullPtr();
                }
                EnterCriticalSection(lpCriticalSection);
                plVar10 = *(longlong **)(*(longlong *)this + 0x78);
                if (((this_02->Offset < 0) ||
                    ((int)plVar10[1] < this_02->Offset + this_02->RangeSize)) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x52,L""), bVar27)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                iVar30 = this_02->Offset;
                lVar46 = *plVar10;
                iVar8 = this_02->RangeSize;
                if ((iVar8 < 0) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ArrayNum >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xfe,L""), bVar27)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar29 = 0;
                if ((int)uVar41 < iVar8) {
                  uVar29 = ~uVar41 >> 0x1f;
                }
                if ((uVar29 == 0) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar27)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                *(undefined1 *)(iVar30 + lVar46 + local_320) = 1;
                pFVar11 = *(ForAnyElementType **)(*(longlong *)this + 0x80);
                piVar42 = (int *)((longlong)&pFVar11[1].Data + 4);
                iVar30 = *(int *)&pFVar11[1].Data;
                if (iVar30 == *piVar42) {
                  iVar30 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,pFVar11,piVar42);
                }
                fVar69 = local_360;
                *(int *)&pFVar11[1].Data = iVar30 + 1;
                pFVar12 = pFVar11->Data;
                *(undefined8 *)(pFVar12 + (longlong)iVar30 * 0xc) = uVar62;
                *(float *)(pFVar12 + (longlong)iVar30 * 0xc + 8) = local_360;
                pFVar11 = *(ForAnyElementType **)(*(longlong *)this + 0x88);
                piVar42 = (int *)((longlong)&pFVar11[1].Data + 4);
                iVar30 = *(int *)&pFVar11[1].Data;
                if (iVar30 == *piVar42) {
                  iVar30 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,pFVar11,piVar42);
                  *(int *)&pFVar11[1].Data = iVar30 + 1;
                }
                else {
                  *(int *)&pFVar11[1].Data = iVar30 + 1;
                }
                pFVar12 = pFVar11->Data;
                *(undefined8 *)(pFVar12 + (longlong)iVar30 * 0xc) = _local_350;
                *(float *)(pFVar12 + (longlong)iVar30 * 0xc + 8) = fVar65;
                LeaveCriticalSection(lpCriticalSection);
                lVar46 = **(longlong **)((longlong)this + 0x10);
                fVar69 = ((float)local_228 - *(float *)(lVar46 + local_278 * 0x10)) * local_350 +
                         (local_228._4_4_ - *(float *)(lVar46 + 4 + local_278 * 0x10)) * fStack_34c
                         + (fVar69 - *(float *)(lVar46 + 8 + local_278 * 0x10)) * fVar65;
                if (fVar69 <= 0.0) {
                  fVar69 = 0.0;
                }
                fVar69 = fVar69 + fVar67;
                *(float *)(lVar46 + local_278 * 0x10) =
                     local_350 * fVar69 + *(float *)(lVar46 + local_278 * 0x10);
                *(float *)(lVar46 + 4 + local_278 * 0x10) =
                     fVar69 * fStack_34c + *(float *)(lVar46 + 4 + local_278 * 0x10);
                *(float *)(lVar46 + 8 + local_278 * 0x10) =
                     fVar69 * fVar65 + *(float *)(lVar46 + 8 + local_278 * 0x10);
                local_360 = fVar69;
                pFVar33 = Chaos::Softs::
                          TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
                          GetParticles(this_02);
                uVar40 = this_02->Offset + uVar41;
                uVar29 = 0;
                if ((int)uVar40 < *(int *)&(pFVar33->MV).field_0x10) {
                  uVar29 = ~uVar40 >> 0x1f;
                }
                if ((uVar29 == 0) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar27)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                lVar46 = *(longlong *)&(pFVar33->MV).field_0x8;
                local_2e8._0_8_ = *(undefined8 *)(lVar46 + (longlong)(int)uVar40 * 0xc);
                local_2e8._8_4_ = *(undefined4 *)(lVar46 + 8 + (longlong)(int)uVar40 * 0xc);
                pFVar33 = Chaos::Softs::
                          TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
                          GetParticles(this_02);
                pTVar31 = Chaos::TParticles<float,3>::GetX
                                    ((TParticles<float,3> *)pFVar33,this_02->Offset + uVar41);
                local_2f8._0_8_ = *(undefined8 *)pTVar31;
                local_2f8._8_4_ = *(undefined4 *)&pTVar31->field_0x8;
                pFVar33 = Chaos::Softs::
                          TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
                          GetParticles(this_02);
                uVar40 = this_02->Offset + uVar41;
                uVar29 = 0;
                if ((int)uVar40 < *(int *)&(pFVar33->MW).field_0x10) {
                  uVar29 = ~uVar40 >> 0x1f;
                }
                if ((uVar29 == 0) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar27)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                lVar46 = *(longlong *)&(pFVar33->MW).field_0x8;
                local_2d8._0_8_ = *(undefined8 *)(lVar46 + (longlong)(int)uVar40 * 0xc);
                local_2d8._8_4_ = *(undefined4 *)(lVar46 + 8 + (longlong)(int)uVar40 * 0xc);
                pFVar33 = Chaos::Softs::
                          TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
                          GetParticles(this_02);
                uVar40 = this_02->Offset + uVar41;
                uVar29 = 0;
                if ((int)uVar40 < (int)pFVar33->_padding_) {
                  uVar29 = ~uVar40 >> 0x1f;
                }
                if ((uVar29 == 0) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar27)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                this_01 = *(FWeightedLatticeImplicitObject **)
                           (pFVar33->_padding_ + (longlong)(int)uVar40 * 8);
                if (((char)this_01->_padding_ == '&') &&
                   (this_01 != (FWeightedLatticeImplicitObject *)0x0)) {
                  local_340.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_340.ArrayNum = 0;
                  local_340.ArrayMax = 0;
                  Chaos::FWeightedLatticeImplicitObject::GetEmbeddingCoordinates
                            (this_01,(TVector<double,3> *)local_1a8,&local_340,false);
                  uVar37 = local_340._8_8_ & 0xffffffff;
                  uVar41 = 0;
                  lVar46 = 0;
                  local_288 = (double)CONCAT44(uVar72,uVar71);
                  local_358 = CONCAT44(local_358._4_4_,0xffffffff);
                  local_280 = -1;
                  if (0 < local_340.ArrayNum) {
                    lVar43 = 0;
                    do {
                      local_318 = (FLevelSet *)this_01[1]._padding_;
                      uVar29 = 0;
                      if ((int)uVar41 < (int)uVar37) {
                        uVar29 = ~uVar41 >> 0x1f;
                      }
                      if ((uVar29 == 0) &&
                         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar27)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      lVar34 = (longlong)*(int *)(local_340.AllocatorInstance.Data + lVar43 + 0xc);
                      iVar30 = *(int *)(local_340.AllocatorInstance.Data + lVar43 + 4);
                      iVar8 = *(int *)(local_340.AllocatorInstance.Data + lVar43 + 8);
                      iVar9 = *(int *)(local_340.AllocatorInstance.Data + lVar43);
                      if ((iVar8 + iVar30 + iVar9 & 1U) == 0) {
                        pTVar22 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  EvenIndexTetrahedraOffsets;
                        pTVar44 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  EvenIndexTetrahedraOffsets;
                        lVar45 = 0x154bb0714;
                        pTVar23 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  EvenIndexTetrahedraOffsets;
                        pTVar19 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  EvenIndexTetrahedraOffsets;
                        pTVar20 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  EvenIndexTetrahedraOffsets;
                        pTVar21 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  EvenIndexTetrahedraOffsets;
                        pTVar17 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  EvenIndexTetrahedraOffsets;
                        pTVar18 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  EvenIndexTetrahedraOffsets;
                        lVar35 = 0x154bb0704;
                      }
                      else {
                        pTVar22 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  OddIndexTetrahedraOffsets;
                        pTVar44 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  OddIndexTetrahedraOffsets;
                        lVar45 = 0x154bb0804;
                        pTVar23 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  OddIndexTetrahedraOffsets;
                        pTVar19 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  OddIndexTetrahedraOffsets;
                        pTVar20 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  OddIndexTetrahedraOffsets;
                        pTVar21 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  OddIndexTetrahedraOffsets;
                        pTVar17 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  OddIndexTetrahedraOffsets;
                        pTVar18 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  OddIndexTetrahedraOffsets;
                        lVar35 = 0x154bb07f4;
                      }
                      local_290 = &pTVar23[lVar34].V[3].field0_0x0._s_0.Z;
                      local_298 = &pTVar22[lVar34].V[3].field0_0x0._s_0.Y;
                      local_2a0 = &pTVar21[lVar34].V[2].field0_0x0._s_0.Z;
                      local_2a8 = &pTVar20[lVar34].V[2].field0_0x0._s_0.Y;
                      local_2b0 = pTVar19[lVar34].V + 2;
                      local_2c0 = &pTVar18[lVar34].V[1].field0_0x0._s_0.Y;
                      local_2c8 = pTVar17[lVar34].V + 1;
                      dVar63 = *(double *)&(this_01->Grid).field_0x40;
                      local_2b8 = (int *)(lVar35 + lVar34 * 0x30);
                      dStack_138 = *(double *)&(this_01->Grid).field_0x8;
                      pTVar44 = pTVar44 + lVar34;
                      dVar2 = *(double *)&(this_01->Grid).field_0x48;
                      dVar3 = *(double *)&(this_01->Grid).field_0x50;
                      dVar4 = *(double *)(local_340.AllocatorInstance.Data + lVar43 + 0x10);
                      dVar5 = *(double *)(local_340.AllocatorInstance.Data + lVar43 + 0x18);
                      local_208 = *(double *)&this_01->Grid +
                                  (double)(pTVar44->V[0].field0_0x0._s_0.X + iVar9) * dVar63;
                      dStack_200 = dStack_138 +
                                   (double)(pTVar44->V[0].field0_0x0._s_0.Y + iVar30) * dVar2;
                      local_210 = *(double *)&(this_01->Grid).field_0x10 +
                                  (double)(pTVar44->V[0].field0_0x0._s_0.Z + iVar8) * dVar3;
                      local_1f0 = *(double *)&this_01->Grid +
                                  (double)((local_2c8->field0_0x0)._s_0.X + iVar9) * dVar63;
                      dStack_1e8 = *(double *)&(this_01->Grid).field_0x8 +
                                   (double)(*local_2c0 + iVar30) * dVar2;
                      local_1e0 = *(double *)&(this_01->Grid).field_0x10 +
                                  (double)(*local_2b8 + iVar8) * dVar3;
                      local_1d8 = *(double *)&this_01->Grid +
                                  (double)((local_2b0->field0_0x0)._s_0.X + iVar9) * dVar63;
                      dVar6 = *(double *)(local_340.AllocatorInstance.Data + lVar43 + 0x20);
                      dStack_1d0 = *(double *)&(this_01->Grid).field_0x8 +
                                   (double)(*local_2a8 + iVar30) * dVar2;
                      local_1c8 = *(double *)&(this_01->Grid).field_0x10 +
                                  (double)(*local_2a0 + iVar8) * dVar3;
                      local_1c0 = *(double *)&this_01->Grid +
                                  (double)(*(int *)(lVar45 + lVar34 * 0x30) + iVar9) * dVar63;
                      dVar63 = ((__real_3ff0000000000000 - dVar4) - dVar5) - dVar6;
                      dStack_1b8 = *(double *)&(this_01->Grid).field_0x8 +
                                   (double)(*local_298 + iVar30) * dVar2;
                      local_1b0 = *(double *)&(this_01->Grid).field_0x10 +
                                  (double)(*local_290 + iVar8) * dVar3;
                      local_158 = dVar6 * local_1d8 + dVar63 * local_1c0 +
                                  dVar5 * local_1f0 + dVar4 * local_208;
                      local_148 = dVar63 * local_1b0 + dVar6 * local_1c8 +
                                  dVar5 * local_1e0 + dVar4 * local_210;
                      local_150 = dVar6 * dStack_1d0 + dVar63 * dStack_1b8 +
                                  dVar5 * dStack_1e8 + dVar4 * dStack_200;
                      local_1f8 = local_210;
                      local_140 = local_208;
                      dVar63 = Chaos::FLevelSet::PhiWithNormal
                                         (local_318,(TVector<double,3> *)&local_158,&local_108);
                      dVar63 = (double)CONCAT44((uint)((ulonglong)dVar63 >> 0x20) &
                                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                SUB84(dVar63,0) &
                                                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
                      if (local_288 <= dVar63) {
                        uVar29 = (uint)local_358;
                      }
                      else {
                        local_358 = CONCAT44(local_358._4_4_,uVar41);
                        uVar29 = uVar41;
                        local_288 = dVar63;
                        local_280 = lVar46;
                      }
                      iVar30 = local_340.ArrayNum;
                      uVar37 = (ulonglong)local_340.ArrayNum;
                      uVar41 = uVar41 + 1;
                      lVar46 = lVar46 + 1;
                      lVar43 = lVar43 + 0x28;
                    } while ((int)uVar41 < local_340.ArrayNum);
                    if ((uVar29 != 0xffffffff) &&
                       (FVar39.ParticleIndex = local_364, FVar39.RangeId = this_02->RangeId,
                       local_318 = (FLevelSet *)
                                   TMapBase<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>_>
                                   ::Find((TMapBase<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>_>
                                           *)(*local_328 + 0x20),FVar39),
                       local_318 != (FLevelSet *)0x0)) {
                      uVar41 = 0;
                      if ((int)(uint)local_358 < iVar30) {
                        uVar41 = ~(uint)local_358 >> 0x1f;
                      }
                      if ((uVar41 == 0) &&
                         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar27)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      lVar46 = local_280;
                      FVar24.Data = local_340.AllocatorInstance.Data;
                      if (*(int *)(local_340.AllocatorInstance.Data + local_280 * 0x28 + 0xc) != -1)
                      {
                        lVar43 = 0x154bb06f8;
                        if ((*(int *)(local_340.AllocatorInstance.Data + local_280 * 0x28) +
                             *(int *)(local_340.AllocatorInstance.Data + local_280 * 0x28 + 4) +
                             *(int *)(local_340.AllocatorInstance.Data + local_280 * 0x28 + 8) & 1U)
                            != 0) {
                          lVar43 = 0x154bb07e8;
                        }
                        uVar41 = 0xffffffff;
                        local_358 = 0;
                        piVar42 = (int *)(lVar43 + (longlong)
                                                   *(int *)(local_340.AllocatorInstance.Data +
                                                           local_280 * 0x28 + 0xc) * 0x30);
                        local_f0[0] = (float)*(double *)
                                              (local_340.AllocatorInstance.Data +
                                              local_280 * 0x28 + 0x10);
                        local_f0[1] = (float)*(double *)
                                              (local_340.AllocatorInstance.Data +
                                              local_280 * 0x28 + 0x18);
                        local_f0[2] = (float)*(double *)
                                              (local_340.AllocatorInstance.Data +
                                              local_280 * 0x28 + 0x20);
                        fVar67 = 0.0;
                        local_f0[3] = ((__real_3f800000 -
                                       (float)*(double *)
                                               (local_340.AllocatorInstance.Data +
                                               local_280 * 0x28 + 0x10)) -
                                      (float)*(double *)
                                              (local_340.AllocatorInstance.Data +
                                              local_280 * 0x28 + 0x18)) -
                                      (float)*(double *)
                                              (local_340.AllocatorInstance.Data +
                                              local_280 * 0x28 + 0x20);
                        do {
                          uVar40 = ((piVar42[-2] + *(int *)(FVar24.Data + lVar46 * 0x28)) *
                                    *(int *)&(this_01->BoneData).field_0x4 + piVar42[-1] +
                                   *(int *)(FVar24.Data + lVar46 * 0x28 + 4)) *
                                   *(int *)&(this_01->BoneData).field_0x8 +
                                   *(int *)(FVar24.Data + lVar46 * 0x28 + 8) + *piVar42;
                          uVar29 = 0;
                          if ((int)uVar40 < *(int *)&(this_01->BoneData).field_0x18) {
                            uVar29 = ~uVar40 >> 0x1f;
                          }
                          if ((uVar29 == 0) &&
                             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar27)) {
                            pcVar13 = (code *)swi(3);
                            (*pcVar13)();
                            return;
                          }
                          pFVar25 = local_318;
                          lVar43 = *(longlong *)&(this_01->BoneData).field_0x10;
                          lVar34 = (longlong)(int)uVar40 * 0x4c;
                          uVar37 = (ulonglong)*(byte *)(lVar34 + lVar43);
                          if (*(byte *)(lVar34 + lVar43) != 0) {
                            puVar36 = (ushort *)(lVar34 + 2 + lVar43);
                            pfVar38 = (float *)(lVar34 + 0x1c + lVar43);
                            do {
                              if (fVar67 < local_f0[local_358] * *pfVar38) {
                                uVar41 = (uint)*puVar36;
                                fVar67 = local_f0[local_358] * *pfVar38;
                              }
                              pfVar38 = pfVar38 + 1;
                              puVar36 = puVar36 + 1;
                              uVar37 = uVar37 - 1;
                            } while (uVar37 != 0);
                          }
                          local_358 = local_358 + 1;
                          piVar42 = piVar42 + 3;
                        } while (local_358 < 4);
                        if ((-1 < (int)uVar41) && ((int)uVar41 < (int)local_318->_padding_)) {
                          piVar42 = TArrayView<int_const_,int>::operator[]
                                              ((TArrayView<int_const_,int> *)local_318,uVar41);
                          iVar30 = *piVar42;
                          pTVar31 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                                              ((TArrayView<Chaos::TVector<float,3>_const_,int> *)
                                               &pFVar25->MGrid,iVar30);
                          local_2e8._0_8_ = *(undefined8 *)pTVar31;
                          local_2e8._8_4_ = *(undefined4 *)&pTVar31->field_0x8;
                          pTVar31 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                                              ((TArrayView<Chaos::TVector<float,3>_const_,int> *)
                                               &pFVar25->_padding_,iVar30);
                          local_2f8._0_8_ = *(undefined8 *)pTVar31;
                          local_2f8._8_4_ = *(undefined4 *)&pTVar31->field_0x8;
                          pTVar31 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                                              ((TArrayView<Chaos::TVector<float,3>_const_,int> *)
                                               &(pFVar25->MGrid).field_0x20,iVar30);
                          local_2d8._0_8_ = *(undefined8 *)pTVar31;
                          local_2d8._8_4_ = *(undefined4 *)&pTVar31->field_0x8;
                        }
                      }
                    }
                  }
                  if (local_340.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_340.AllocatorInstance.Data);
                  }
                  uVar71 = (undefined4)__real_47eff933c0000000;
                  uVar72 = (undefined4)((ulonglong)__real_47eff933c0000000 >> 0x20);
                  this = local_328;
                  fVar69 = local_360;
                  fVar67 = __real_3dcccccd;
                  uVar41 = local_364;
                }
                lVar46 = local_278;
                Chaos::Softs::Private::ApplyFriction
                          ((TVector<float,3> *)(**(longlong **)((longlong)this + 0x10) + local_218),
                           (TVector<float,3> *)
                           (**(longlong **)((longlong)this + 0x18) + local_278 * 0xc),
                           (TVector<float,3> *)&local_350,
                           fVar69 * *(float *)(*(longlong *)this + 0x10),
                           *(float *)((longlong)this + 8),&local_2f8,&local_2e8,&local_2d8,
                           &local_130);
                lVar43 = local_320;
              }
            }
          }
          else if (uVar28 != '\x12') {
            cVar7 = *(char *)(*(longlong *)this + 0x1c);
            goto LAB_143d05582;
          }
          local_364 = uVar41 + 1;
          local_320 = lVar43 + 1;
        } while ((int)local_364 < this_02->RangeSize);
      }
      this_02 = this_02 + 1;
      uVar37 = (ulonglong)local_32c;
    }
  }
  return;
}

// operator() @ 143d067b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyInternalCCD<1,0>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  FImplicitObject *this_00;
  ForAnyElementType *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  uchar uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  TVector<float,3> *pTVar20;
  TVector<double,3> *pTVar21;
  ulonglong uVar22;
  uint uVar23;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar24;
  longlong lVar25;
  float *pfVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198 [4];
  float local_194;
  int local_190;
  float local_18c;
  uint local_188;
  longlong local_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  longlong local_168;
  float *local_160;
  undefined8 local_158;
  float local_150;
  undefined8 local_14c;
  float local_144;
  longlong local_140;
  longlong *local_138;
  undefined8 local_130;
  float local_128;
  undefined8 local_124;
  float local_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined1 local_f8 [16];
  double local_e8;
  bool local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  TVector<double,3> local_a8;
  ulonglong local_90;
  
  fVar14 = __real_3dcccccd;
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  lVar19 = (longlong)param_1;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + lVar19 * 0x10) != 0.0) {
    local_138 = *(longlong **)((longlong)this + 0x20);
    local_188 = *(uint *)(local_138 + 1);
    uVar22 = (ulonglong)(int)local_188;
    lVar25 = *local_138;
    local_140 = uVar22 * 0x20 + lVar25;
    local_168 = lVar19;
    while( true ) {
      lVar7 = local_140;
      if ((int)local_138[1] != (int)uVar22) {
        local_198[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_198);
      }
      if (lVar25 == lVar7) break;
      plVar6 = (longlong *)**(longlong **)this;
      if (((*(int *)(lVar25 + 0x10) < 0) ||
          ((int)plVar6[1] < *(int *)(lVar25 + 0x10) + *(int *)(lVar25 + 0x14))) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x4b,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_190 = *(int *)(lVar25 + 0x14);
      pfVar26 = (float *)((longlong)*(int *)(lVar25 + 0x10) * 0x30 + *plVar6);
      local_160 = pfVar26;
      if ((local_190 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar24 = 0;
      local_180 = 0;
      if (0 < *(int *)(lVar25 + 0x14)) {
        do {
          if ((*(longlong *)(lVar25 + 8) == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar15)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar7 = *(longlong *)(lVar25 + 8);
          uVar23 = *(int *)(lVar25 + 0x10) + uVar24;
          uVar17 = 0;
          if ((int)uVar23 < *(int *)(lVar7 + 0x68)) {
            uVar17 = ~uVar23 >> 0x1f;
          }
          if ((uVar17 == 0) &&
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
          uVar16 = Chaos::FImplicitObject::GetType
                             (*(FImplicitObject **)
                               (*(longlong *)(lVar7 + 0x60) + (longlong)(int)uVar23 * 8));
          if ((uVar16 == '&') || (uVar16 == '\x11')) {
            cVar4 = *(char *)(*(longlong *)this + 0x1d);
LAB_143d069bf:
            if (cVar4 != '\0') {
              if ((*(longlong *)(lVar25 + 8) == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar7 = *(longlong *)(lVar25 + 8);
              uVar23 = *(int *)(lVar25 + 0x10) + uVar24;
              uVar17 = 0;
              if ((int)uVar23 < *(int *)(lVar7 + 0x50)) {
                uVar17 = ~uVar23 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pfVar2 = (float *)(*(longlong *)(lVar7 + 0x48) + (longlong)(int)uVar23 * 0x10);
              fVar47 = *pfVar2;
              fVar11 = pfVar2[1];
              fVar12 = pfVar2[2];
              fVar13 = pfVar2[3];
              local_178 = fVar47;
              fStack_174 = fVar11;
              fStack_170 = fVar12;
              fStack_16c = fVar13;
              if ((*(longlong *)(lVar25 + 8) == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pTVar20 = Chaos::TParticles<float,3>::GetX
                                  (*(TParticles<float,3> **)(lVar25 + 8),
                                   *(int *)(lVar25 + 0x10) + uVar24);
              fVar3 = *(float *)&pTVar20->field_0x8;
              fVar48 = (float)*(undefined8 *)pTVar20;
              fVar49 = (float)((ulonglong)*(undefined8 *)pTVar20 >> 0x20);
              if ((*(longlong *)(lVar25 + 8) == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar7 = *(longlong *)(lVar25 + 8);
              uVar23 = *(int *)(lVar25 + 0x10) + uVar24;
              uVar17 = 0;
              if ((int)uVar23 < *(int *)(lVar7 + 0x68)) {
                uVar17 = ~uVar23 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              fVar43 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
              fVar44 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
              fVar45 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
              fVar46 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
              fVar38 = fVar47 * fVar43;
              fVar40 = fVar11 * fVar44;
              fVar41 = fVar12 * fVar45;
              fVar42 = fVar13 * fVar46;
              this_00 = *(FImplicitObject **)
                         (*(longlong *)(lVar7 + 0x60) + (longlong)(int)uVar23 * 8);
              fVar27 = *(float *)(*(longlong *)this + 0xc);
              fVar28 = *(float *)(*(longlong *)this + 8);
              uVar29 = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + local_168 * 0x10);
              auVar34._0_4_ = (float)uVar29 - fVar48;
              auVar34._4_4_ = (float)((ulonglong)uVar29 >> 0x20) - fVar49;
              auVar34._8_4_ =
                   *(float *)(**(longlong **)((longlong)this + 0x10) + 8 + local_168 * 0x10) - fVar3
              ;
              auVar34._12_4_ = 0;
              uVar17 = 0;
              if ((int)uVar24 < local_190) {
                uVar17 = ~uVar24 >> 0x1f;
              }
              auVar34 = insertps(auVar34,auVar34,8);
              fVar39 = auVar34._0_4_;
              fVar36 = auVar34._4_4_;
              fVar37 = auVar34._8_4_;
              fVar31 = fVar36 * fVar38 - fVar40 * fVar39;
              fVar32 = fVar37 * fVar40 - fVar41 * fVar36;
              fVar33 = fVar39 * fVar41 - fVar38 * fVar37;
              fVar32 = fVar32 + fVar32;
              fVar33 = fVar33 + fVar33;
              fVar31 = fVar31 + fVar31;
              fVar39 = fVar42 * fVar32 + fVar39 + (fVar31 * fVar40 - fVar33 * fVar41);
              fVar41 = fVar42 * fVar33 + fVar36 + (fVar32 * fVar41 - fVar31 * fVar38);
              local_158 = CONCAT44(fVar41,fVar39);
              local_150 = fVar42 * fVar31 + fVar37 + (fVar33 * fVar38 - fVar32 * fVar40);
              local_d8 = (double)fVar39;
              local_d0 = (double)fVar41;
              local_c8 = (double)local_150;
              if (uVar17 == 0) {
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar15) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                fVar43 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
                fVar44 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
                fVar45 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
                fVar46 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
              }
              fVar43 = fVar43 * *pfVar26;
              fVar44 = fVar44 * pfVar26[1];
              fVar45 = fVar45 * pfVar26[2];
              fVar46 = fVar46 * pfVar26[3];
              uVar29 = *(undefined8 *)(**(longlong **)((longlong)this + 0x18) + local_168 * 0xc);
              auVar35._0_4_ = (float)uVar29 - pfVar26[4];
              auVar35._4_4_ = (float)((ulonglong)uVar29 >> 0x20) - pfVar26[5];
              auVar35._8_4_ =
                   *(float *)(**(longlong **)((longlong)this + 0x18) + 8 + local_168 * 0xc) -
                   pfVar26[6];
              auVar35._12_4_ = 0.0 - pfVar26[7];
              auVar34 = insertps(auVar35,auVar35,8);
              fVar42 = auVar34._0_4_;
              fVar31 = auVar34._4_4_;
              fVar32 = auVar34._8_4_;
              fVar38 = fVar31 * fVar43 - fVar44 * fVar42;
              fVar40 = fVar32 * fVar44 - fVar45 * fVar31;
              fVar41 = fVar42 * fVar45 - fVar43 * fVar32;
              fVar40 = fVar40 + fVar40;
              fVar41 = fVar41 + fVar41;
              fVar38 = fVar38 + fVar38;
              fVar42 = fVar46 * fVar40 + fVar42 + (fVar38 * fVar44 - fVar41 * fVar45);
              fVar45 = fVar46 * fVar41 + fVar31 + (fVar40 * fVar45 - fVar38 * fVar43);
              local_144 = fVar46 * fVar38 + fVar32 + (fVar41 * fVar43 - fVar40 * fVar44);
              local_14c = CONCAT44(fVar45,fVar42);
              local_c0 = (double)fVar42;
              local_b8 = (double)fVar45;
              local_b0 = (double)local_144;
              Chaos::FImplicitObject::FindClosestIntersection
                        (this_00,(Pair<Chaos::TVector<double,3>,bool> *)local_f8,
                         (TVector<double,3> *)&local_c0,(TVector<double,3> *)&local_d8,
                         (double)(fVar27 + fVar28));
              if (local_e0 != false) {
                if ((*(longlong *)(lVar25 + 8) == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Particles",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x56,L""), bVar15)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                lVar7 = *(longlong *)(lVar25 + 8);
                uVar23 = *(int *)(lVar25 + 0x10) + uVar24;
                uVar17 = 0;
                if ((int)uVar23 < *(int *)(lVar7 + 0x68)) {
                  uVar17 = ~uVar23 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pTVar21 = Chaos::FImplicitObject::Normal
                                    (*(FImplicitObject **)
                                      (*(longlong *)(lVar7 + 0x60) + (longlong)(int)uVar23 * 8),
                                     &local_a8,(TVector<double,3> *)local_f8);
                fVar28 = (float)*(double *)&pTVar21->field_0x10;
                fVar27 = (float)*(double *)&pTVar21->field_0x8;
                fVar46 = (float)*(double *)pTVar21;
                fVar43 = fVar27 * fVar47 - fVar11 * fVar46;
                fVar44 = fVar28 * fVar11 - fVar12 * fVar27;
                fVar45 = fVar46 * fVar12 - fVar47 * fVar28;
                fVar44 = fVar44 + fVar44;
                fVar45 = fVar45 + fVar45;
                fVar43 = fVar43 + fVar43;
                fVar38 = (float)(double)local_f8._0_8_;
                uVar29 = CONCAT44(fVar45 * fVar13 + fVar27 + (fVar44 * fVar12 - fVar43 * fVar47),
                                  fVar44 * fVar13 + fVar46 + (fVar43 * fVar11 - fVar45 * fVar12));
                local_194 = fVar43 * fVar13 + fVar28 + (fVar45 * fVar47 - fVar44 * fVar11);
                fVar27 = (float)(double)local_f8._8_8_;
                fVar28 = (float)local_e8;
                fVar43 = fVar27 * fVar47 - fVar38 * fVar11;
                fVar44 = fVar28 * fVar11 - fVar27 * fVar12;
                fVar45 = fVar38 * fVar12 - fVar28 * fVar47;
                fVar44 = fVar44 + fVar44;
                fVar45 = fVar45 + fVar45;
                fVar43 = fVar43 + fVar43;
                uVar30 = CONCAT44(fVar45 * fVar13 + fVar27 + (fVar44 * fVar12 - fVar43 * fVar47) +
                                  fVar49,fVar44 * fVar13 + fVar38 +
                                         (fVar43 * fVar11 - fVar45 * fVar12) + fVar48);
                local_18c = fVar43 * fVar13 + fVar28 + (fVar45 * fVar47 - fVar44 * fVar11) + fVar3;
                lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x98);
                local_130 = uVar29;
                local_128 = local_194;
                local_124 = uVar30;
                local_11c = local_18c;
                local_118 = uVar30;
                local_108 = uVar29;
                if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::ReportNotNullPtr();
                }
                EnterCriticalSection(lpCriticalSection);
                plVar6 = *(longlong **)(*(longlong *)this + 0x78);
                if (((*(int *)(lVar25 + 0x10) < 0) ||
                    ((int)plVar6[1] < *(int *)(lVar25 + 0x10) + *(int *)(lVar25 + 0x14))) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x52,L""), bVar15)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                iVar18 = *(int *)(lVar25 + 0x10);
                lVar7 = *plVar6;
                iVar5 = *(int *)(lVar25 + 0x14);
                if ((iVar5 < 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ArrayNum >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xfe,L""), bVar15)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                uVar17 = 0;
                if ((int)uVar24 < iVar5) {
                  uVar17 = ~uVar24 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar15)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                *(undefined1 *)(local_180 + iVar18 + lVar7) = 1;
                pFVar8 = *(ForAnyElementType **)(*(longlong *)this + 0x80);
                piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
                iVar18 = *(int *)&pFVar8[1].Data;
                if (iVar18 == *piVar1) {
                  iVar18 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,pFVar8,piVar1);
                }
                fVar47 = local_18c;
                *(int *)&pFVar8[1].Data = iVar18 + 1;
                pFVar9 = pFVar8->Data;
                *(undefined8 *)(pFVar9 + (longlong)iVar18 * 0xc) = uVar30;
                *(float *)(pFVar9 + (longlong)iVar18 * 0xc + 8) = local_18c;
                pFVar8 = *(ForAnyElementType **)(*(longlong *)this + 0x88);
                piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
                iVar18 = *(int *)&pFVar8[1].Data;
                if (iVar18 == *piVar1) {
                  iVar18 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,pFVar8,piVar1);
                  *(int *)&pFVar8[1].Data = iVar18 + 1;
                }
                else {
                  *(int *)&pFVar8[1].Data = iVar18 + 1;
                }
                fVar11 = local_194;
                pFVar9 = pFVar8->Data;
                *(undefined8 *)(pFVar9 + (longlong)iVar18 * 0xc) = uVar29;
                *(float *)(pFVar9 + (longlong)iVar18 * 0xc + 8) = local_194;
                LeaveCriticalSection(lpCriticalSection);
                lVar7 = **(longlong **)((longlong)this + 0x10);
                fVar47 = ((float)local_118 - *(float *)(lVar7 + lVar19 * 0x10)) * (float)local_108 +
                         (local_118._4_4_ - *(float *)(lVar7 + 4 + lVar19 * 0x10)) * local_108._4_4_
                         + (fVar47 - *(float *)(lVar7 + 8 + lVar19 * 0x10)) * fVar11;
                if (fVar47 <= 0.0) {
                  fVar47 = 0.0;
                }
                fVar47 = fVar47 + fVar14;
                *(float *)(lVar7 + lVar19 * 0x10) =
                     (float)local_108 * fVar47 + *(float *)(lVar7 + lVar19 * 0x10);
                *(float *)(lVar7 + 4 + lVar19 * 0x10) =
                     fVar47 * local_108._4_4_ + *(float *)(lVar7 + 4 + lVar19 * 0x10);
                *(float *)(lVar7 + 8 + lVar19 * 0x10) =
                     fVar47 * fVar11 + *(float *)(lVar7 + 8 + lVar19 * 0x10);
                pfVar26 = local_160;
              }
            }
          }
          else if (uVar16 != '\x12') {
            cVar4 = *(char *)(*(longlong *)this + 0x1c);
            goto LAB_143d069bf;
          }
          local_180 = local_180 + 1;
          pfVar26 = pfVar26 + 0xc;
          uVar24 = uVar24 + 1;
          local_160 = pfVar26;
        } while ((int)uVar24 < *(int *)(lVar25 + 0x14));
      }
      lVar25 = lVar25 + 0x20;
      uVar22 = (ulonglong)local_188;
    }
  }
  return;
}

// operator() @ 143d07180

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyInternalCCD<0,1>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  FImplicitObject *this_00;
  FWeightedLatticeImplicitObject *this_01;
  code *pcVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  TVector<Chaos::TVector<int,3>,4> *pTVar17;
  TVector<Chaos::TVector<int,3>,4> *pTVar18;
  TVector<Chaos::TVector<int,3>,4> *pTVar19;
  TVector<Chaos::TVector<int,3>,4> *pTVar20;
  TVector<Chaos::TVector<int,3>,4> *pTVar21;
  TVector<Chaos::TVector<int,3>,4> *pTVar22;
  ForAnyElementType FVar23;
  FLevelSet *pFVar24;
  bool bVar25;
  uchar uVar26;
  TVector<float,3> *pTVar27;
  TVector<double,3> *pTVar28;
  longlong lVar29;
  longlong lVar30;
  ushort *puVar31;
  ulonglong uVar32;
  longlong lVar33;
  float *pfVar34;
  FParticleRangeIndex FVar35;
  uint uVar36;
  int *piVar37;
  longlong *plVar38;
  longlong lVar39;
  uint uVar40;
  longlong lVar41;
  TVector<Chaos::TVector<int,3>,4> *pTVar42;
  longlong lVar43;
  uint uVar44;
  longlong lVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar53;
  float fVar54;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar59;
  float fVar60;
  double dVar58;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined1 local_358 [4];
  uint local_354;
  float local_350;
  longlong local_348;
  TArray<Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate,TSizedDefaultAllocator<32>_>
  local_340;
  int local_330;
  uint local_32c;
  longlong *local_328;
  longlong local_320;
  longlong local_318;
  int *local_310;
  longlong *local_308;
  FLevelSet *local_300;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  undefined1 local_2e8 [16];
  TVector<float,3> local_2d8;
  TVector<float,3> local_2c8;
  TVector<float,3> local_2b8;
  TVector<int,3> *local_2a8;
  int *local_2a0;
  int *local_298;
  int *local_290;
  double local_288;
  longlong local_280;
  double local_278;
  TVector<int,3> *local_270;
  int *local_268;
  int *local_260;
  undefined8 local_258;
  float local_250;
  undefined8 local_24c;
  float local_244;
  undefined8 local_240;
  float local_238;
  float local_230 [4];
  longlong local_220;
  longlong local_218;
  longlong local_210;
  undefined1 local_208 [16];
  longlong *local_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  undefined1 local_188 [16];
  double local_178;
  bool local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  TVector<float,3> local_120;
  TVector<double,3> local_110;
  TVector<double,3> local_f8 [8];
  
  local_320 = (longlong)param_1;
  local_210 = local_320 * 0x10;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + local_210) != 0.0) {
    local_1f8 = *(longlong **)((longlong)this + 0x20);
    local_32c = *(uint *)(local_1f8 + 1);
    uVar32 = (ulonglong)(int)local_32c;
    lVar45 = *local_1f8;
    piVar37 = (int *)(lVar45 + 0x10);
    plVar38 = (longlong *)(lVar45 + 8);
    uVar69 = (undefined4)__real_47eff933c0000000;
    uVar70 = (undefined4)((ulonglong)__real_47eff933c0000000 >> 0x20);
    local_218 = uVar32 * 0x20 + lVar45;
    fVar66 = __real_3dcccccd;
    local_328 = this;
    while( true ) {
      lVar41 = local_218;
      local_348 = lVar45;
      local_310 = piVar37;
      local_308 = plVar38;
      if ((int)local_1f8[1] != (int)uVar32) {
        local_358[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_358);
      }
      if (lVar45 == lVar41) break;
      plVar12 = (longlong *)**(longlong **)this;
      if (((*(int *)(lVar45 + 0x10) < 0) ||
          ((int)plVar12[1] < *(int *)(lVar45 + 0x10) + *(int *)(lVar45 + 0x14))) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x4b,L""), bVar25)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      local_330 = *(int *)(lVar45 + 0x14);
      local_220 = (longlong)*(int *)(lVar45 + 0x10) * 0x30 + *plVar12;
      if ((local_330 < 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar25)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      local_354 = 0;
      if (0 < *(int *)(lVar45 + 0x14)) {
        local_318 = 0;
        do {
          uVar44 = local_354;
          if ((*plVar38 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar25)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          lVar41 = *plVar38;
          uVar40 = *piVar37 + uVar44;
          uVar36 = 0;
          if ((int)uVar40 < *(int *)(lVar41 + 0x68)) {
            uVar36 = ~uVar40 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar26 = Chaos::FImplicitObject::GetType
                             (*(FImplicitObject **)
                               (*(longlong *)(lVar41 + 0x60) + (longlong)(int)uVar40 * 8));
          if ((uVar26 == '&') || (uVar26 == '\x11')) {
            cVar8 = *(char *)(*(longlong *)this + 0x1d);
LAB_143d073d5:
            if (cVar8 != '\0') {
              if ((*plVar38 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar25)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              lVar41 = *plVar38;
              uVar40 = *piVar37 + uVar44;
              uVar36 = 0;
              if ((int)uVar40 < *(int *)(lVar41 + 0x50)) {
                uVar36 = ~uVar40 >> 0x1f;
              }
              if ((uVar36 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pfVar34 = (float *)(*(longlong *)(lVar41 + 0x48) + (longlong)(int)uVar40 * 0x10);
              fVar68 = *pfVar34;
              fVar14 = pfVar34[1];
              fVar15 = pfVar34[2];
              fVar16 = pfVar34[3];
              local_2f8 = fVar68;
              fStack_2f4 = fVar14;
              fStack_2f0 = fVar15;
              fStack_2ec = fVar16;
              if ((*plVar38 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar25)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pTVar27 = Chaos::TParticles<float,3>::GetX
                                  ((TParticles<float,3> *)*plVar38,*piVar37 + uVar44);
              fVar2 = *(float *)&pTVar27->field_0x8;
              fVar65 = (float)*(undefined8 *)pTVar27;
              fVar67 = (float)((ulonglong)*(undefined8 *)pTVar27 >> 0x20);
              if ((*plVar38 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar25)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              lVar41 = *plVar38;
              uVar40 = *piVar37 + uVar44;
              uVar36 = 0;
              if ((int)uVar40 < *(int *)(lVar41 + 0x68)) {
                uVar36 = ~uVar40 >> 0x1f;
              }
              if ((uVar36 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              lVar29 = local_320;
              fVar57 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
              fVar60 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
              fVar62 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
              fVar64 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
              fVar55 = fVar68 * fVar57;
              fVar59 = fVar14 * fVar60;
              fVar61 = fVar15 * fVar62;
              fVar63 = fVar16 * fVar64;
              this_00 = *(FImplicitObject **)
                         (*(longlong *)(lVar41 + 0x60) + (longlong)(int)uVar40 * 8);
              fVar46 = *(float *)(*(longlong *)this + 0xc);
              fVar47 = *(float *)(*(longlong *)this + 8);
              uVar3 = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + local_320 * 0x10);
              auVar51._0_4_ = (float)uVar3 - fVar65;
              auVar51._4_4_ = (float)((ulonglong)uVar3 >> 0x20) - fVar67;
              auVar51._8_4_ =
                   *(float *)(**(longlong **)((longlong)this + 0x10) + 8 + local_320 * 0x10) - fVar2
              ;
              auVar51._12_4_ = 0;
              uVar36 = 0;
              if ((int)uVar44 < local_330) {
                uVar36 = ~uVar44 >> 0x1f;
              }
              auVar51 = insertps(auVar51,auVar51,8);
              fVar56 = auVar51._0_4_;
              fVar53 = auVar51._4_4_;
              fVar54 = auVar51._8_4_;
              fVar48 = fVar53 * fVar55 - fVar59 * fVar56;
              fVar49 = fVar54 * fVar59 - fVar61 * fVar53;
              fVar50 = fVar56 * fVar61 - fVar55 * fVar54;
              fVar49 = fVar49 + fVar49;
              fVar50 = fVar50 + fVar50;
              fVar48 = fVar48 + fVar48;
              fVar56 = fVar63 * fVar49 + fVar56 + (fVar48 * fVar59 - fVar50 * fVar61);
              fVar61 = fVar63 * fVar50 + fVar53 + (fVar49 * fVar61 - fVar48 * fVar55);
              local_258 = CONCAT44(fVar61,fVar56);
              local_250 = fVar63 * fVar48 + fVar54 + (fVar50 * fVar55 - fVar49 * fVar59);
              local_168 = (double)fVar56;
              local_160 = (double)fVar61;
              local_158 = (double)local_250;
              if (uVar36 == 0) {
                bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar25) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                fVar57 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
                fVar60 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
                fVar62 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
                fVar64 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
              }
              uVar3 = *(undefined8 *)(**(longlong **)((longlong)this + 0x18) + lVar29 * 0xc);
              pfVar34 = (float *)(local_220 + local_318);
              pfVar1 = (float *)(local_220 + 0x10 + local_318);
              auVar52._0_4_ = (float)uVar3 - *pfVar1;
              auVar52._4_4_ = (float)((ulonglong)uVar3 >> 0x20) - pfVar1[1];
              auVar52._8_4_ =
                   *(float *)(**(longlong **)((longlong)this + 0x18) + 8 + lVar29 * 0xc) - pfVar1[2]
              ;
              auVar52._12_4_ = 0.0 - pfVar1[3];
              fVar57 = *pfVar34 * fVar57;
              fVar60 = pfVar34[1] * fVar60;
              fVar62 = pfVar34[2] * fVar62;
              fVar64 = pfVar34[3] * fVar64;
              auVar51 = insertps(auVar52,auVar52,8);
              fVar63 = auVar51._0_4_;
              fVar48 = auVar51._4_4_;
              fVar49 = auVar51._8_4_;
              fVar55 = fVar48 * fVar57 - fVar60 * fVar63;
              fVar59 = fVar49 * fVar60 - fVar62 * fVar48;
              fVar61 = fVar63 * fVar62 - fVar57 * fVar49;
              fVar59 = fVar59 + fVar59;
              fVar61 = fVar61 + fVar61;
              fVar55 = fVar55 + fVar55;
              fVar63 = fVar64 * fVar59 + fVar63 + (fVar55 * fVar60 - fVar61 * fVar62);
              fVar62 = fVar64 * fVar61 + fVar48 + (fVar59 * fVar62 - fVar55 * fVar57);
              local_24c = CONCAT44(fVar62,fVar63);
              local_244 = fVar64 * fVar55 + fVar49 + (fVar61 * fVar57 - fVar59 * fVar60);
              local_150 = (double)fVar63;
              local_148 = (double)fVar62;
              local_140 = (double)local_244;
              Chaos::FImplicitObject::FindClosestIntersection
                        (this_00,(Pair<Chaos::TVector<double,3>,bool> *)local_188,
                         (TVector<double,3> *)&local_150,(TVector<double,3> *)&local_168,
                         (double)(fVar46 + fVar47));
              if (local_170 != false) {
                if ((*plVar38 == 0) &&
                   (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Particles",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x56,L""), bVar25)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                lVar41 = *plVar38;
                uVar40 = *piVar37 + uVar44;
                uVar36 = 0;
                if ((int)uVar40 < *(int *)(lVar41 + 0x68)) {
                  uVar36 = ~uVar40 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar25)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pTVar28 = Chaos::FImplicitObject::Normal
                                    (*(FImplicitObject **)
                                      (*(longlong *)(lVar41 + 0x60) + (longlong)(int)uVar40 * 8),
                                     &local_110,(TVector<double,3> *)local_188);
                fVar46 = (float)*(double *)&pTVar28->field_0x8;
                lVar41 = **(longlong **)((longlong)this + 0x10);
                fVar60 = (float)*(double *)pTVar28;
                fVar47 = (float)*(double *)&pTVar28->field_0x10;
                fVar57 = (float)local_178;
                fVar64 = fVar46 * fVar68 - fVar14 * fVar60;
                fVar55 = fVar47 * fVar14 - fVar15 * fVar46;
                fVar61 = fVar60 * fVar15 - fVar68 * fVar47;
                fVar55 = fVar55 + fVar55;
                fVar61 = fVar61 + fVar61;
                fVar64 = fVar64 + fVar64;
                fVar62 = (float)(double)local_188._0_8_;
                fVar59 = fVar55 * fVar16 + fVar60 + (fVar64 * fVar14 - fVar61 * fVar15);
                fVar63 = fVar61 * fVar16 + fVar46 + (fVar55 * fVar15 - fVar64 * fVar68);
                local_2e8._8_4_ = fVar64 * fVar16 + fVar47 + (fVar61 * fVar68 - fVar55 * fVar14);
                fVar46 = (float)(double)local_188._8_8_;
                local_2e8._4_4_ = fVar63;
                local_2e8._0_4_ = fVar59;
                fVar47 = fVar46 * fVar68 - fVar62 * fVar14;
                fVar60 = fVar57 * fVar14 - fVar46 * fVar15;
                fVar64 = fVar62 * fVar15 - fVar57 * fVar68;
                fVar60 = fVar60 + fVar60;
                fVar64 = fVar64 + fVar64;
                fVar47 = fVar47 + fVar47;
                fVar65 = fVar60 * fVar16 + fVar62 + (fVar47 * fVar14 - fVar64 * fVar15) + fVar65;
                fVar67 = fVar64 * fVar16 + fVar46 + (fVar60 * fVar15 - fVar47 * fVar68) + fVar67;
                local_238 = fVar47 * fVar16 + fVar57 + (fVar64 * fVar68 - fVar60 * fVar14) + fVar2;
                local_240 = CONCAT44(fVar67,fVar65);
                fVar68 = (fVar67 - *(float *)(lVar41 + 4 + local_320 * 0x10)) * fVar63 +
                         (fVar65 - *(float *)(lVar41 + local_320 * 0x10)) * fVar59 +
                         (local_238 - *(float *)(lVar41 + 8 + local_320 * 0x10)) *
                         (float)local_2e8._8_4_;
                if (fVar68 <= 0.0) {
                  fVar68 = 0.0;
                }
                fVar68 = fVar68 + fVar66;
                *(float *)(lVar41 + local_320 * 0x10) =
                     fVar68 * fVar59 + *(float *)(lVar41 + local_320 * 0x10);
                *(float *)(lVar41 + 4 + local_320 * 0x10) =
                     fVar68 * fVar63 + *(float *)(lVar41 + 4 + local_320 * 0x10);
                *(float *)(lVar41 + 8 + local_320 * 0x10) =
                     (float)local_2e8._8_4_ * fVar68 + *(float *)(lVar41 + 8 + local_320 * 0x10);
                local_350 = fVar68;
                local_208._0_8_ = local_2e8._0_8_;
                local_208._8_4_ = local_2e8._8_4_;
                if ((*plVar38 == 0) &&
                   (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Particles",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x56,L""), bVar25)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                lVar41 = *plVar38;
                uVar40 = *piVar37 + uVar44;
                uVar36 = 0;
                if ((int)uVar40 < *(int *)(lVar41 + 0x80)) {
                  uVar36 = ~uVar40 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar25)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                lVar41 = *(longlong *)(lVar41 + 0x78);
                local_2b8._0_8_ = *(undefined8 *)(lVar41 + (longlong)(int)uVar40 * 0xc);
                local_2b8._8_4_ = *(undefined4 *)(lVar41 + 8 + (longlong)(int)uVar40 * 0xc);
                if ((*plVar38 == 0) &&
                   (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Particles",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x56,L""), bVar25)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pTVar27 = Chaos::TParticles<float,3>::GetX
                                    ((TParticles<float,3> *)*plVar38,*piVar37 + uVar44);
                local_2c8._0_8_ = *(undefined8 *)pTVar27;
                local_2c8._8_4_ = *(undefined4 *)&pTVar27->field_0x8;
                if ((*plVar38 == 0) &&
                   (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Particles",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x56,L""), bVar25)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                lVar41 = *plVar38;
                uVar40 = *piVar37 + uVar44;
                uVar36 = 0;
                if ((int)uVar40 < *(int *)(lVar41 + 0x98)) {
                  uVar36 = ~uVar40 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar25)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                lVar41 = *(longlong *)(lVar41 + 0x90);
                local_2d8._0_8_ = *(undefined8 *)(lVar41 + (longlong)(int)uVar40 * 0xc);
                local_2d8._8_4_ = *(undefined4 *)(lVar41 + 8 + (longlong)(int)uVar40 * 0xc);
                if ((*plVar38 == 0) &&
                   (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Particles",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x56,L""), bVar25)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                lVar41 = *plVar38;
                uVar40 = *piVar37 + uVar44;
                uVar36 = 0;
                if ((int)uVar40 < *(int *)(lVar41 + 0x68)) {
                  uVar36 = ~uVar40 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar25)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                this_01 = *(FWeightedLatticeImplicitObject **)
                           (*(longlong *)(lVar41 + 0x60) + (longlong)(int)uVar40 * 8);
                if (((char)this_01->_padding_ == '&') &&
                   (this_01 != (FWeightedLatticeImplicitObject *)0x0)) {
                  local_340.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_340.ArrayNum = 0;
                  local_340.ArrayMax = 0;
                  Chaos::FWeightedLatticeImplicitObject::GetEmbeddingCoordinates
                            (this_01,(TVector<double,3> *)local_188,&local_340,false);
                  uVar32 = local_340._8_8_ & 0xffffffff;
                  uVar36 = 0;
                  lVar45 = 0;
                  local_288 = (double)CONCAT44(uVar70,uVar69);
                  local_280 = -1;
                  uVar44 = 0xffffffff;
                  if (0 < local_340.ArrayNum) {
                    lVar41 = 0;
                    do {
                      local_300 = (FLevelSet *)this_01[1]._padding_;
                      uVar40 = 0;
                      if ((int)uVar36 < (int)uVar32) {
                        uVar40 = ~uVar36 >> 0x1f;
                      }
                      if ((uVar40 == 0) &&
                         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar25)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      lVar29 = (longlong)*(int *)(local_340.AllocatorInstance.Data + lVar41 + 0xc);
                      iVar9 = *(int *)(local_340.AllocatorInstance.Data + lVar41 + 4);
                      iVar10 = *(int *)(local_340.AllocatorInstance.Data + lVar41 + 8);
                      iVar11 = *(int *)(local_340.AllocatorInstance.Data + lVar41);
                      lVar33 = lVar29 * 0x30;
                      if ((iVar10 + iVar9 + iVar11 & 1U) == 0) {
                        pTVar42 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  EvenIndexTetrahedraOffsets;
                        lVar39 = 0x154bb0714;
                        lVar43 = 0x154bb0718;
                        pTVar22 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  EvenIndexTetrahedraOffsets;
                        pTVar19 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  EvenIndexTetrahedraOffsets;
                        pTVar20 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  EvenIndexTetrahedraOffsets;
                        pTVar21 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  EvenIndexTetrahedraOffsets;
                        pTVar17 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  EvenIndexTetrahedraOffsets;
                        pTVar18 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  EvenIndexTetrahedraOffsets;
                        lVar30 = 0x154bb0704;
                      }
                      else {
                        pTVar42 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  OddIndexTetrahedraOffsets;
                        lVar39 = 0x154bb0804;
                        lVar43 = 0x154bb0808;
                        pTVar22 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  OddIndexTetrahedraOffsets;
                        pTVar19 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  OddIndexTetrahedraOffsets;
                        pTVar20 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  OddIndexTetrahedraOffsets;
                        pTVar21 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  OddIndexTetrahedraOffsets;
                        pTVar17 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  OddIndexTetrahedraOffsets;
                        pTVar18 = Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::
                                  OddIndexTetrahedraOffsets;
                        lVar30 = 0x154bb07f4;
                      }
                      local_268 = &pTVar18[lVar29].V[1].field0_0x0._s_0.Y;
                      local_270 = pTVar17[lVar29].V + 1;
                      local_290 = &pTVar22[lVar29].V[3].field0_0x0._s_0.Z;
                      local_298 = &pTVar21[lVar29].V[2].field0_0x0._s_0.Z;
                      local_2a0 = &pTVar20[lVar29].V[2].field0_0x0._s_0.Y;
                      local_2a8 = pTVar19[lVar29].V + 2;
                      pTVar42 = pTVar42 + lVar29;
                      dVar58 = *(double *)&(this_01->Grid).field_0x40;
                      local_260 = (int *)(lVar30 + lVar33);
                      dVar4 = *(double *)&(this_01->Grid).field_0x48;
                      dVar5 = *(double *)&(this_01->Grid).field_0x50;
                      dVar6 = *(double *)(local_340.AllocatorInstance.Data + lVar41 + 0x18);
                      local_1e8 = *(double *)&this_01->Grid +
                                  (double)(pTVar42->V[0].field0_0x0._s_0.X + iVar11) * dVar58;
                      dStack_1e0 = *(double *)&(this_01->Grid).field_0x8 +
                                   (double)(pTVar42->V[0].field0_0x0._s_0.Y + iVar9) * dVar4;
                      local_1f0 = *(double *)&(this_01->Grid).field_0x10 +
                                  (double)(pTVar42->V[0].field0_0x0._s_0.Z + iVar10) * dVar5;
                      local_278 = *(double *)(local_340.AllocatorInstance.Data + lVar41 + 0x10);
                      local_1d0 = *(double *)&this_01->Grid +
                                  (double)((local_270->field0_0x0)._s_0.X + iVar11) * dVar58;
                      dStack_1c8 = *(double *)&(this_01->Grid).field_0x8 +
                                   (double)(*local_268 + iVar9) * dVar4;
                      local_1c0 = *(double *)&(this_01->Grid).field_0x10 +
                                  (double)(*local_260 + iVar10) * dVar5;
                      local_1b8 = *(double *)&this_01->Grid +
                                  (double)((local_2a8->field0_0x0)._s_0.X + iVar11) * dVar58;
                      dVar7 = *(double *)(local_340.AllocatorInstance.Data + lVar41 + 0x20);
                      dStack_1b0 = *(double *)&(this_01->Grid).field_0x8 +
                                   (double)(*local_2a0 + iVar9) * dVar4;
                      local_1a8 = *(double *)&(this_01->Grid).field_0x10 +
                                  (double)(*local_298 + iVar10) * dVar5;
                      local_1a0 = *(double *)&this_01->Grid +
                                  (double)(*(int *)(lVar39 + lVar33) + iVar11) * dVar58;
                      dVar58 = ((__real_3ff0000000000000 - local_278) - dVar6) - dVar7;
                      dStack_198 = *(double *)&(this_01->Grid).field_0x8 +
                                   (double)(*(int *)(lVar43 + lVar33) + iVar9) * dVar4;
                      local_190 = *(double *)&(this_01->Grid).field_0x10 +
                                  (double)(*local_290 + iVar10) * dVar5;
                      local_138 = dVar58 * local_1a0 + dVar7 * local_1b8 +
                                  dVar6 * local_1d0 + local_278 * local_1e8;
                      local_128 = local_278 * local_1f0 + dVar58 * local_190 +
                                  dVar6 * local_1c0 + dVar7 * local_1a8;
                      local_130 = dVar58 * dStack_198 + dVar7 * dStack_1b0 +
                                  dVar6 * dStack_1c8 + local_278 * dStack_1e0;
                      local_1d8 = local_1f0;
                      dVar58 = Chaos::FLevelSet::PhiWithNormal
                                         (local_300,(TVector<double,3> *)&local_138,local_f8);
                      dVar58 = (double)CONCAT44((uint)((ulonglong)dVar58 >> 0x20) &
                                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                SUB84(dVar58,0) &
                                                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
                      if (dVar58 < local_288) {
                        local_288 = dVar58;
                        local_280 = lVar45;
                        uVar44 = uVar36;
                      }
                      lVar29 = local_280;
                      iVar9 = local_340.ArrayNum;
                      uVar32 = (ulonglong)local_340.ArrayNum;
                      uVar36 = uVar36 + 1;
                      lVar45 = lVar45 + 1;
                      lVar41 = lVar41 + 0x28;
                    } while ((int)uVar36 < local_340.ArrayNum);
                    if ((uVar44 != 0xffffffff) &&
                       (FVar35.ParticleIndex = local_354,
                       FVar35.RangeId = *(int *)(local_348 + 0x18),
                       local_300 = (FLevelSet *)
                                   TMapBase<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>_>
                                   ::Find((TMapBase<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>_>
                                           *)(*local_328 + 0x20),FVar35),
                       local_300 != (FLevelSet *)0x0)) {
                      uVar36 = 0;
                      if ((int)uVar44 < iVar9) {
                        uVar36 = ~uVar44 >> 0x1f;
                      }
                      if ((uVar36 == 0) &&
                         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar25)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      FVar23.Data = local_340.AllocatorInstance.Data;
                      if (*(int *)(local_340.AllocatorInstance.Data + lVar29 * 0x28 + 0xc) != -1) {
                        lVar45 = 0x154bb06f8;
                        lVar41 = 0;
                        if ((*(int *)(local_340.AllocatorInstance.Data + lVar29 * 0x28) +
                             *(int *)(local_340.AllocatorInstance.Data + lVar29 * 0x28 + 4) +
                             *(int *)(local_340.AllocatorInstance.Data + lVar29 * 0x28 + 8) & 1U) !=
                            0) {
                          lVar45 = 0x154bb07e8;
                        }
                        uVar44 = 0xffffffff;
                        piVar37 = (int *)(lVar45 + (longlong)
                                                   *(int *)(local_340.AllocatorInstance.Data +
                                                           lVar29 * 0x28 + 0xc) * 0x30);
                        local_230[0] = (float)*(double *)
                                               (local_340.AllocatorInstance.Data +
                                               lVar29 * 0x28 + 0x10);
                        local_230[1] = (float)*(double *)
                                               (local_340.AllocatorInstance.Data +
                                               lVar29 * 0x28 + 0x18);
                        local_230[2] = (float)*(double *)
                                               (local_340.AllocatorInstance.Data +
                                               lVar29 * 0x28 + 0x20);
                        fVar66 = 0.0;
                        local_230[3] = ((__real_3f800000 -
                                        (float)*(double *)
                                                (local_340.AllocatorInstance.Data +
                                                lVar29 * 0x28 + 0x10)) -
                                       (float)*(double *)
                                               (local_340.AllocatorInstance.Data +
                                               lVar29 * 0x28 + 0x18)) -
                                       (float)*(double *)
                                               (local_340.AllocatorInstance.Data +
                                               lVar29 * 0x28 + 0x20);
                        do {
                          uVar40 = ((piVar37[-2] + *(int *)(FVar23.Data + lVar29 * 0x28)) *
                                    *(int *)&(this_01->BoneData).field_0x4 + piVar37[-1] +
                                   *(int *)(FVar23.Data + lVar29 * 0x28 + 4)) *
                                   *(int *)&(this_01->BoneData).field_0x8 + *piVar37 +
                                   *(int *)(FVar23.Data + lVar29 * 0x28 + 8);
                          uVar36 = 0;
                          if ((int)uVar40 < *(int *)&(this_01->BoneData).field_0x18) {
                            uVar36 = ~uVar40 >> 0x1f;
                          }
                          if ((uVar36 == 0) &&
                             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar25)) {
                            pcVar13 = (code *)swi(3);
                            (*pcVar13)();
                            return;
                          }
                          pFVar24 = local_300;
                          lVar45 = *(longlong *)&(this_01->BoneData).field_0x10;
                          lVar33 = (longlong)(int)uVar40 * 0x4c;
                          uVar32 = (ulonglong)*(byte *)(lVar33 + lVar45);
                          if (*(byte *)(lVar33 + lVar45) != 0) {
                            puVar31 = (ushort *)(lVar33 + 2 + lVar45);
                            pfVar34 = (float *)(lVar33 + 0x1c + lVar45);
                            do {
                              if (fVar66 < local_230[lVar41] * *pfVar34) {
                                uVar44 = (uint)*puVar31;
                                fVar66 = local_230[lVar41] * *pfVar34;
                              }
                              pfVar34 = pfVar34 + 1;
                              puVar31 = puVar31 + 1;
                              uVar32 = uVar32 - 1;
                            } while (uVar32 != 0);
                          }
                          lVar41 = lVar41 + 1;
                          piVar37 = piVar37 + 3;
                        } while (lVar41 < 4);
                        if ((-1 < (int)uVar44) && ((int)uVar44 < (int)local_300->_padding_)) {
                          piVar37 = TArrayView<int_const_,int>::operator[]
                                              ((TArrayView<int_const_,int> *)local_300,uVar44);
                          iVar9 = *piVar37;
                          pTVar27 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                                              ((TArrayView<Chaos::TVector<float,3>_const_,int> *)
                                               &pFVar24->MGrid,iVar9);
                          local_2b8._0_8_ = *(undefined8 *)pTVar27;
                          local_2b8._8_4_ = *(undefined4 *)&pTVar27->field_0x8;
                          pTVar27 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                                              ((TArrayView<Chaos::TVector<float,3>_const_,int> *)
                                               &pFVar24->_padding_,iVar9);
                          local_2c8._0_8_ = *(undefined8 *)pTVar27;
                          local_2c8._8_4_ = *(undefined4 *)&pTVar27->field_0x8;
                          pTVar27 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                                              ((TArrayView<Chaos::TVector<float,3>_const_,int> *)
                                               &(pFVar24->MGrid).field_0x20,iVar9);
                          local_2d8._0_8_ = *(undefined8 *)pTVar27;
                          local_2d8._8_4_ = *(undefined4 *)&pTVar27->field_0x8;
                        }
                      }
                    }
                  }
                  if (local_340.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_340.AllocatorInstance.Data);
                  }
                  uVar69 = (undefined4)__real_47eff933c0000000;
                  uVar70 = (undefined4)((ulonglong)__real_47eff933c0000000 >> 0x20);
                  plVar38 = local_308;
                  this = local_328;
                  lVar45 = local_348;
                  piVar37 = local_310;
                  fVar68 = local_350;
                  fVar66 = __real_3dcccccd;
                  uVar44 = local_354;
                }
                Chaos::Softs::Private::ApplyFriction
                          ((TVector<float,3> *)(**(longlong **)((longlong)this + 0x10) + local_210),
                           (TVector<float,3> *)
                           (**(longlong **)((longlong)this + 0x18) + local_320 * 0xc),
                           (TVector<float,3> *)local_208,
                           fVar68 * *(float *)(*(longlong *)this + 0x10),
                           *(float *)((longlong)this + 8),&local_2c8,&local_2b8,&local_2d8,
                           &local_120);
              }
            }
          }
          else if (uVar26 != '\x12') {
            cVar8 = *(char *)(*(longlong *)this + 0x1c);
            goto LAB_143d073d5;
          }
          local_318 = local_318 + 0x30;
          local_354 = uVar44 + 1;
        } while ((int)local_354 < *(int *)(lVar45 + 0x14));
      }
      lVar45 = lVar45 + 0x20;
      piVar37 = piVar37 + 8;
      uVar32 = (ulonglong)local_32c;
      plVar38 = plVar38 + 4;
    }
  }
  return;
}

// operator() @ 143d08510

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyInternalCCD<0,0>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  FImplicitObject *this_00;
  code *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong lVar15;
  bool bVar16;
  uchar uVar17;
  uint uVar18;
  TVector<float,3> *pTVar19;
  TVector<double,3> *pTVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  float *pfVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar35;
  float fVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 local_res10 [8];
  longlong local_res18;
  longlong local_res20;
  undefined1 local_118 [16];
  double local_108;
  bool local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  TVector<double,3> local_c8 [5];
  
  fVar14 = __real_3dcccccd;
  local_res18 = (longlong)param_1;
  local_res20 = local_res18 * 0x10;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + local_res20) != 0.0) {
    plVar7 = *(longlong **)((longlong)this + 0x20);
    uVar5 = *(uint *)(plVar7 + 1);
    uVar21 = (ulonglong)(int)uVar5;
    lVar22 = *plVar7;
    lVar25 = uVar21 * 0x20 + lVar22;
    while( true ) {
      if ((int)plVar7[1] != (int)uVar21) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (lVar22 == lVar25) break;
      plVar8 = (longlong *)**(longlong **)this;
      if (((*(int *)(lVar22 + 0x10) < 0) ||
          ((int)plVar8[1] < *(int *)(lVar22 + 0x10) + *(int *)(lVar22 + 0x14))) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x4b,L""), bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar6 = *(int *)(lVar22 + 0x14);
      pfVar26 = (float *)((longlong)*(int *)(lVar22 + 0x10) * 0x30 + *plVar8);
      if ((iVar6 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar24 = 0;
      if (0 < *(int *)(lVar22 + 0x14)) {
        do {
          if ((*(longlong *)(lVar22 + 8) == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar9 = *(longlong *)(lVar22 + 8);
          uVar23 = *(int *)(lVar22 + 0x10) + uVar24;
          uVar18 = 0;
          if ((int)uVar23 < *(int *)(lVar9 + 0x68)) {
            uVar18 = ~uVar23 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar17 = Chaos::FImplicitObject::GetType
                             (*(FImplicitObject **)
                               (*(longlong *)(lVar9 + 0x60) + (longlong)(int)uVar23 * 8));
          if ((uVar17 == '&') || (uVar17 == '\x11')) {
            cVar4 = *(char *)(*(longlong *)this + 0x1d);
LAB_143d08721:
            if (cVar4 != '\0') {
              if ((*(longlong *)(lVar22 + 8) == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar16)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar9 = *(longlong *)(lVar22 + 8);
              uVar23 = *(int *)(lVar22 + 0x10) + uVar24;
              uVar18 = 0;
              if ((int)uVar23 < *(int *)(lVar9 + 0x50)) {
                uVar18 = ~uVar23 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pfVar1 = (float *)(*(longlong *)(lVar9 + 0x48) + (longlong)(int)uVar23 * 0x10);
              fVar39 = *pfVar1;
              fVar11 = pfVar1[1];
              fVar12 = pfVar1[2];
              fVar13 = pfVar1[3];
              if ((*(longlong *)(lVar22 + 8) == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar16)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pTVar19 = Chaos::TParticles<float,3>::GetX
                                  (*(TParticles<float,3> **)(lVar22 + 8),
                                   *(int *)(lVar22 + 0x10) + uVar24);
              fVar2 = *(float *)&pTVar19->field_0x8;
              fVar46 = (float)*(undefined8 *)pTVar19;
              fVar47 = (float)((ulonglong)*(undefined8 *)pTVar19 >> 0x20);
              if ((*(longlong *)(lVar22 + 8) == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar16)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar9 = *(longlong *)(lVar22 + 8);
              uVar23 = *(int *)(lVar22 + 0x10) + uVar24;
              uVar18 = 0;
              if ((int)uVar23 < *(int *)(lVar9 + 0x68)) {
                uVar18 = ~uVar23 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar15 = local_res18;
              fVar38 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
              fVar41 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
              fVar43 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
              fVar45 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
              fVar37 = fVar39 * fVar38;
              fVar40 = fVar11 * fVar41;
              fVar42 = fVar12 * fVar43;
              fVar44 = fVar13 * fVar45;
              this_00 = *(FImplicitObject **)
                         (*(longlong *)(lVar9 + 0x60) + (longlong)(int)uVar23 * 8);
              fVar27 = *(float *)(*(longlong *)this + 0xc);
              fVar28 = *(float *)(*(longlong *)this + 8);
              uVar3 = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + local_res18 * 0x10);
              auVar33._0_4_ = (float)uVar3 - fVar46;
              auVar33._4_4_ = (float)((ulonglong)uVar3 >> 0x20) - fVar47;
              auVar33._8_4_ =
                   *(float *)(**(longlong **)((longlong)this + 0x10) + 8 + local_res18 * 0x10) -
                   fVar2;
              auVar33._12_4_ = 0;
              uVar18 = 0;
              if ((int)uVar24 < iVar6) {
                uVar18 = ~uVar24 >> 0x1f;
              }
              auVar33 = insertps(auVar33,auVar33,8);
              fVar32 = auVar33._0_4_;
              fVar35 = auVar33._4_4_;
              fVar36 = auVar33._8_4_;
              fVar29 = fVar35 * fVar37 - fVar40 * fVar32;
              fVar30 = fVar36 * fVar40 - fVar42 * fVar35;
              fVar31 = fVar32 * fVar42 - fVar37 * fVar36;
              fVar30 = fVar30 + fVar30;
              fVar31 = fVar31 + fVar31;
              fVar29 = fVar29 + fVar29;
              local_f8 = (double)(fVar44 * fVar30 + fVar32 + (fVar29 * fVar40 - fVar31 * fVar42));
              local_f0 = (double)(fVar44 * fVar31 + fVar35 + (fVar30 * fVar42 - fVar29 * fVar37));
              local_e8 = (double)(fVar44 * fVar29 + fVar36 + (fVar31 * fVar37 - fVar30 * fVar40));
              if (uVar18 == 0) {
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar16) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                fVar38 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
                fVar41 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
                fVar43 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
                fVar45 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
              }
              fVar38 = *pfVar26 * fVar38;
              fVar41 = pfVar26[1] * fVar41;
              fVar43 = pfVar26[2] * fVar43;
              fVar45 = pfVar26[3] * fVar45;
              uVar3 = *(undefined8 *)(**(longlong **)((longlong)this + 0x18) + lVar15 * 0xc);
              auVar34._0_4_ = (float)uVar3 - pfVar26[4];
              auVar34._4_4_ = (float)((ulonglong)uVar3 >> 0x20) - pfVar26[5];
              auVar34._8_4_ =
                   *(float *)(**(longlong **)((longlong)this + 0x18) + 8 + lVar15 * 0xc) -
                   pfVar26[6];
              auVar34._12_4_ = 0.0 - pfVar26[7];
              auVar33 = insertps(auVar34,auVar34,8);
              fVar44 = auVar33._0_4_;
              fVar29 = auVar33._4_4_;
              fVar30 = auVar33._8_4_;
              fVar37 = fVar29 * fVar38 - fVar41 * fVar44;
              fVar40 = fVar30 * fVar41 - fVar43 * fVar29;
              fVar42 = fVar44 * fVar43 - fVar38 * fVar30;
              fVar40 = fVar40 + fVar40;
              fVar42 = fVar42 + fVar42;
              fVar37 = fVar37 + fVar37;
              local_e0 = (double)(fVar45 * fVar40 + fVar44 + (fVar37 * fVar41 - fVar42 * fVar43));
              local_d8 = (double)(fVar45 * fVar42 + fVar29 + (fVar40 * fVar43 - fVar37 * fVar38));
              local_d0 = (double)(fVar45 * fVar37 + fVar30 + (fVar42 * fVar38 - fVar40 * fVar41));
              Chaos::FImplicitObject::FindClosestIntersection
                        (this_00,(Pair<Chaos::TVector<double,3>,bool> *)local_118,
                         (TVector<double,3> *)&local_e0,(TVector<double,3> *)&local_f8,
                         (double)(fVar27 + fVar28));
              if (local_100 != false) {
                if ((*(longlong *)(lVar22 + 8) == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Particles",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x56,L""), bVar16)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                lVar9 = *(longlong *)(lVar22 + 8);
                uVar23 = *(int *)(lVar22 + 0x10) + uVar24;
                uVar18 = 0;
                if ((int)uVar23 < *(int *)(lVar9 + 0x68)) {
                  uVar18 = ~uVar23 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pTVar20 = Chaos::FImplicitObject::Normal
                                    (*(FImplicitObject **)
                                      (*(longlong *)(lVar9 + 0x60) + (longlong)(int)uVar23 * 8),
                                     local_c8,(TVector<double,3> *)local_118);
                fVar27 = (float)*(double *)&pTVar20->field_0x8;
                lVar9 = **(longlong **)((longlong)this + 0x10);
                fVar28 = (float)*(double *)&pTVar20->field_0x10;
                fVar37 = (float)*(double *)pTVar20;
                fVar38 = fVar27 * fVar39 - fVar11 * fVar37;
                fVar41 = fVar28 * fVar11 - fVar12 * fVar27;
                fVar45 = fVar37 * fVar12 - fVar39 * fVar28;
                fVar41 = fVar41 + fVar41;
                fVar45 = fVar45 + fVar45;
                fVar38 = fVar38 + fVar38;
                fVar43 = (float)local_108;
                fVar40 = (float)(double)local_118._0_8_;
                fVar37 = fVar13 * fVar41 + fVar37 + (fVar38 * fVar11 - fVar12 * fVar45);
                fVar42 = fVar13 * fVar45 + fVar27 + (fVar41 * fVar12 - fVar39 * fVar38);
                fVar45 = fVar13 * fVar38 + fVar28 + (fVar45 * fVar39 - fVar11 * fVar41);
                fVar27 = (float)(double)local_118._8_8_;
                fVar28 = fVar27 * fVar39 - fVar40 * fVar11;
                fVar38 = fVar43 * fVar11 - fVar27 * fVar12;
                fVar41 = fVar40 * fVar12 - fVar43 * fVar39;
                fVar38 = fVar38 + fVar38;
                fVar41 = fVar41 + fVar41;
                fVar28 = fVar28 + fVar28;
                fVar39 = ((fVar13 * fVar38 + fVar40 + (fVar28 * fVar11 - fVar12 * fVar41) + fVar46)
                         - *(float *)(lVar9 + local_res20)) * fVar37 +
                         ((fVar13 * fVar41 + fVar27 + (fVar38 * fVar12 - fVar39 * fVar28) + fVar47)
                         - *(float *)(lVar9 + 4 + local_res20)) * fVar42 +
                         ((fVar13 * fVar28 + fVar43 + (fVar41 * fVar39 - fVar11 * fVar38) + fVar2) -
                         *(float *)(lVar9 + 8 + local_res20)) * fVar45;
                if (fVar39 <= 0.0) {
                  fVar39 = 0.0;
                }
                fVar39 = fVar39 + fVar14;
                *(float *)(lVar9 + local_res20) = fVar37 * fVar39 + *(float *)(lVar9 + local_res20);
                *(float *)(lVar9 + 4 + local_res20) =
                     fVar42 * fVar39 + *(float *)(lVar9 + 4 + local_res20);
                *(float *)(lVar9 + 8 + local_res20) =
                     fVar45 * fVar39 + *(float *)(lVar9 + 8 + local_res20);
              }
            }
          }
          else if (uVar17 != '\x12') {
            cVar4 = *(char *)(*(longlong *)this + 0x1c);
            goto LAB_143d08721;
          }
          uVar24 = uVar24 + 1;
          pfVar26 = pfVar26 + 0xc;
        } while ((int)uVar24 < *(int *)(lVar22 + 0x14));
      }
      lVar22 = lVar22 + 0x20;
      uVar21 = (ulonglong)uVar5;
    }
  }
  return;
}

// operator() @ 143d08d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,1,1>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  int *piVar1;
  float *pfVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  ForAnyElementType *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  longlong lVar19;
  bool bVar20;
  uchar uVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  TVector<float,3> *pTVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong lVar28;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar29;
  uint uVar30;
  undefined8 *puVar31;
  double dVar32;
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar43;
  float fVar44;
  undefined1 auVar42 [16];
  undefined1 auStackY_1d8 [32];
  undefined1 local_188 [8];
  float local_180 [2];
  float local_178;
  float fStack_174;
  float local_170;
  longlong local_168;
  float local_160;
  float fStack_15c;
  float local_158;
  uint local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  double local_120;
  double local_118;
  double local_110;
  longlong local_108;
  longlong local_100;
  longlong *local_f8;
  undefined1 local_f0 [16];
  TVector<float,3> local_e0 [2];
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  double local_b8;
  double local_b0;
  double local_a8;
  TVector<float,3> local_a0;
  ulonglong local_90;
  
  auVar17 = ___xmm_000000003f8000003f8000003f800000;
  uVar16 = _UNK_15061cc78;
  uVar15 = _UNK_15061cc74;
  uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar24 = (longlong)param_1;
  local_140 = lVar24 * 0x10;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + local_140) != 0.0) {
    local_f8 = *(longlong **)((longlong)this + 0x18);
    local_150 = *(uint *)(local_f8 + 1);
    uVar26 = (ulonglong)(int)local_150;
    lVar29 = *local_f8;
    lVar28 = uVar26 * 0x20 + lVar29;
    local_100 = lVar28;
    while( true ) {
      if ((int)local_f8[1] != (int)uVar26) {
        local_188[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_188);
      }
      if (lVar29 == lVar28) break;
      uVar30 = 0;
      local_148 = 0;
      if (0 < *(int *)(lVar29 + 0x14)) {
        do {
          if ((*(longlong *)(lVar29 + 8) == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar20)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar28 = *(longlong *)(lVar29 + 8);
          uVar27 = *(int *)(lVar29 + 0x10) + uVar30;
          uVar22 = 0;
          if ((int)uVar27 < *(int *)(lVar28 + 0x68)) {
            uVar22 = ~uVar27 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_108 = *(longlong *)(lVar28 + 0x60);
          local_168 = (longlong)(int)uVar27;
          uVar21 = Chaos::FImplicitObject::GetType(*(FImplicitObject **)(local_108 + local_168 * 8))
          ;
          if ((uVar21 != '&') && (uVar21 != '\x11')) {
            if ((*(longlong *)(lVar29 + 8) == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar20)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar28 = *(longlong *)(lVar29 + 8);
            uVar27 = *(int *)(lVar29 + 0x10) + uVar30;
            uVar22 = 0;
            if ((int)uVar27 < *(int *)(lVar28 + 0x50)) {
              uVar22 = ~uVar27 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pfVar2 = (float *)(*(longlong *)(lVar28 + 0x48) + (longlong)(int)uVar27 * 0x10);
            fVar10 = *pfVar2;
            fVar11 = pfVar2[1];
            fVar12 = pfVar2[2];
            fVar13 = pfVar2[3];
            local_c8 = fVar10;
            fStack_c4 = fVar11;
            fStack_c0 = fVar12;
            fStack_bc = fVar13;
            if ((*(longlong *)(lVar29 + 8) == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar20)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pTVar25 = Chaos::TParticles<float,3>::GetX
                                (*(TParticles<float,3> **)(lVar29 + 8),
                                 *(int *)(lVar29 + 0x10) + uVar30);
            lVar19 = local_108;
            lVar28 = local_168;
            fVar38 = fVar10 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
            fVar39 = fVar11 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
            fVar40 = fVar12 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
            fVar41 = fVar13 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
            uVar3 = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + local_140);
            auVar42._0_4_ = (float)uVar3 - (float)*(undefined8 *)pTVar25;
            auVar42._4_4_ =
                 (float)((ulonglong)uVar3 >> 0x20) -
                 (float)((ulonglong)*(undefined8 *)pTVar25 >> 0x20);
            auVar42._8_4_ =
                 *(float *)(**(longlong **)((longlong)this + 0x10) + 8 + local_140) -
                 *(float *)&pTVar25->field_0x8;
            auVar42._12_4_ = 0;
            auVar42 = insertps(auVar42,auVar42,8);
            fVar34 = auVar42._0_4_;
            fVar43 = auVar42._4_4_;
            fVar44 = auVar42._8_4_;
            fVar35 = fVar43 * fVar38 - fVar39 * fVar34;
            fVar36 = fVar44 * fVar39 - fVar40 * fVar43;
            fVar37 = fVar34 * fVar40 - fVar38 * fVar44;
            fVar36 = fVar36 + fVar36;
            fVar37 = fVar37 + fVar37;
            fVar35 = fVar35 + fVar35;
            auVar42 = blendps(auVar17,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
            auVar33 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar42);
            fVar34 = (float)(~-(uint)((float)(uVar14 & auVar42._0_4_) <=
                                     GlobalVectorConstants::SmallNumber.m128_f32[0]) & auVar33._0_4_
                            ) * (fVar41 * fVar36 + fVar34 + (fVar35 * fVar39 - fVar37 * fVar40));
            fVar40 = (float)(~-(uint)((float)(uVar15 & auVar42._4_4_) <=
                                     GlobalVectorConstants::SmallNumber.m128_f32[1]) & auVar33._4_4_
                            ) * (fVar41 * fVar37 + fVar43 + (fVar36 * fVar40 - fVar35 * fVar38));
            local_138 = CONCAT44(fVar40,fVar34);
            local_130 = (float)(~-(uint)((float)(uVar16 & auVar42._8_4_) <=
                                        GlobalVectorConstants::SmallNumber.m128_f32[2]) &
                               auVar33._8_4_) *
                        (fVar41 * fVar35 + fVar44 + (fVar37 * fVar38 - fVar36 * fVar39));
            local_120 = (double)fVar34;
            local_118 = (double)fVar40;
            local_110 = (double)local_130;
            plVar6 = *(longlong **)(local_108 + local_168 * 8);
            dVar32 = (double)(**(code **)(*plVar6 + 0x80))(plVar6,&local_120,&local_b8);
            fStack_15c = (float)local_b0;
            local_160 = (float)local_b8;
            local_158 = (float)local_a8;
            local_180[0] = (*(float *)(*(longlong *)this + 0xc) + *(float *)(*(longlong *)this + 8))
                           - (float)dVar32;
            if (0.0 < local_180[0]) {
              if (uVar21 == '\x10') {
                lVar28 = *(longlong *)(lVar19 + lVar28 * 8);
                if ((*(char *)(lVar28 + 0x18) != '\x10') &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("T_DERIVED::StaticType() == Type",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                        ,0xc2,L""), bVar20)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                if (*(char *)(lVar28 + 0x50) != '\0') {
                  local_12c = (float)local_120;
                  local_128 = (float)local_118;
                  local_124 = (float)local_110;
                  Chaos::Softs::Private::ReflectOneSidedCollision
                            ((TVector<float,3> *)&local_12c,(TVector<float,3> *)(lVar28 + 0x38),
                             (TVector<float,3> *)(lVar28 + 0x20),local_180,
                             (TVector<float,3> *)&local_160);
                }
              }
              fVar36 = local_160 * auVar17._0_4_;
              fVar37 = fStack_15c * auVar17._4_4_;
              fVar38 = local_158 * auVar17._8_4_;
              fVar34 = fVar37 * fVar10 - fVar11 * fVar36;
              fVar40 = fVar38 * fVar11 - fVar12 * fVar37;
              fVar35 = fVar36 * fVar12 - fVar10 * fVar38;
              fVar40 = fVar40 + fVar40;
              fVar35 = fVar35 + fVar35;
              fVar34 = fVar34 + fVar34;
              local_170 = fVar13 * fVar34 + fVar38 + (fVar35 * fVar10 - fVar11 * fVar40);
              fStack_174 = fVar13 * fVar35 + fVar37 + (fVar40 * fVar12 - fVar10 * fVar34);
              local_178 = fVar13 * fVar40 + fVar36 + (fVar34 * fVar11 - fVar12 * fVar35);
              lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x98);
              local_f0._0_8_ = _local_178;
              local_f0._8_4_ = local_170;
              if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::ReportNotNullPtr();
              }
              EnterCriticalSection(lpCriticalSection);
              plVar6 = *(longlong **)(*(longlong *)this + 0x78);
              if (((*(int *)(lVar29 + 0x10) < 0) ||
                  ((int)plVar6[1] < *(int *)(lVar29 + 0x10) + *(int *)(lVar29 + 0x14))) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x52,L""), bVar20)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar23 = *(int *)(lVar29 + 0x10);
              lVar28 = *plVar6;
              iVar4 = *(int *)(lVar29 + 0x14);
              if ((iVar4 < 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar20)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar22 = 0;
              if ((int)uVar30 < iVar4) {
                uVar22 = ~uVar30 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar20)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              *(undefined1 *)(local_148 + iVar23 + lVar28) = 1;
              pFVar7 = *(ForAnyElementType **)(*(longlong *)this + 0x80);
              piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
              puVar31 = (undefined8 *)(lVar24 * 0x10 + **(longlong **)((longlong)this + 0x10));
              iVar23 = *(int *)&pFVar7[1].Data;
              if (iVar23 == *piVar1) {
                iVar23 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,pFVar7,piVar1);
              }
              *(int *)&pFVar7[1].Data = iVar23 + 1;
              pFVar8 = pFVar7->Data;
              *(undefined8 *)(pFVar8 + (longlong)iVar23 * 0xc) = *puVar31;
              *(undefined4 *)(pFVar8 + (longlong)iVar23 * 0xc + 8) = *(undefined4 *)(puVar31 + 1);
              pFVar7 = *(ForAnyElementType **)(*(longlong *)this + 0x88);
              piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
              iVar23 = *(int *)&pFVar7[1].Data;
              if (iVar23 == *piVar1) {
                iVar23 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,pFVar7,piVar1);
              }
              *(int *)&pFVar7[1].Data = iVar23 + 1;
              pFVar8 = pFVar7->Data;
              *(undefined8 *)(pFVar8 + (longlong)iVar23 * 0xc) = _local_178;
              *(float *)(pFVar8 + (longlong)iVar23 * 0xc + 8) = local_170;
              pFVar7 = *(ForAnyElementType **)(*(longlong *)this + 0x90);
              piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
              iVar23 = *(int *)&pFVar7[1].Data;
              if (iVar23 == *piVar1) {
                iVar23 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,pFVar7,piVar1);
                *(int *)&pFVar7[1].Data = iVar23 + 1;
              }
              else {
                *(int *)&pFVar7[1].Data = iVar23 + 1;
              }
              *(float *)(pFVar7->Data + (longlong)iVar23 * 4) = (float)dVar32;
              LeaveCriticalSection(lpCriticalSection);
              lVar28 = **(longlong **)((longlong)this + 0x10);
              uVar27 = (uint)~param_1 >> 0x1f;
              *(float *)(lVar28 + 4 + lVar24 * 0x10) =
                   fStack_174 * local_180[0] + *(float *)(lVar28 + 4 + lVar24 * 0x10);
              *(float *)(lVar28 + 8 + lVar24 * 0x10) =
                   local_170 * local_180[0] + *(float *)(lVar28 + 8 + lVar24 * 0x10);
              *(float *)(lVar28 + lVar24 * 0x10) =
                   local_178 * local_180[0] + *(float *)(lVar28 + lVar24 * 0x10);
              lVar28 = *(longlong *)this;
              uVar22 = 0;
              if (param_1 < *(int *)(lVar28 + 0x118)) {
                uVar22 = uVar27;
              }
              if ((uVar22 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              *(undefined1 *)(lVar24 + *(longlong *)(lVar28 + 0x110)) = 1;
              lVar28 = *(longlong *)this;
              uVar5 = *(undefined4 *)(**(longlong **)((longlong)this + 0x10) + 8 + lVar24 * 0x10);
              uVar3 = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + lVar24 * 0x10);
              uVar22 = 0;
              if (param_1 < *(int *)(lVar28 + 0x128)) {
                uVar22 = uVar27;
              }
              local_168._0_4_ = uVar5;
              if ((uVar22 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar18 = _local_178;
              lVar28 = *(longlong *)(lVar28 + 0x120);
              *(undefined8 *)(lVar28 + lVar24 * 0xc) = uVar3;
              *(undefined4 *)(lVar28 + 8 + lVar24 * 0xc) = (undefined4)local_168;
              lVar28 = *(longlong *)this;
              local_168 = CONCAT44(local_168._4_4_,local_170);
              uVar22 = 0;
              if (param_1 < *(int *)(lVar28 + 0x138)) {
                uVar22 = uVar27;
              }
              if ((uVar22 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar28 = *(longlong *)(lVar28 + 0x130);
              *(undefined8 *)(lVar28 + lVar24 * 0xc) = uVar18;
              *(undefined4 *)(lVar28 + 8 + lVar24 * 0xc) = (undefined4)local_168;
              if ((*(longlong *)(lVar29 + 8) == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar20)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar28 = *(longlong *)(lVar29 + 8);
              uVar27 = *(int *)(lVar29 + 0x10) + uVar30;
              uVar22 = 0;
              if ((int)uVar27 < *(int *)(lVar28 + 0x98)) {
                uVar22 = ~uVar27 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar28 = *(longlong *)(lVar28 + 0x90);
              if ((*(longlong *)(lVar29 + 8) == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar20)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pTVar25 = Chaos::TParticles<float,3>::GetX
                                  (*(TParticles<float,3> **)(lVar29 + 8),
                                   *(int *)(lVar29 + 0x10) + uVar30);
              Chaos::Softs::Private::ApplyFriction
                        ((TVector<float,3> *)(local_140 + **(longlong **)((longlong)this + 0x10)),
                         (TVector<float,3> *)(**(longlong **)((longlong)this + 8) + lVar24 * 0xc),
                         (TVector<float,3> *)&local_178,
                         local_180[0] * *(float *)(*(longlong *)this + 0x10),
                         *(float *)((longlong)this + 0x20),pTVar25,
                         (TVector<float,3> *)(lVar28 + (longlong)(int)uVar27 * 0xc),local_e0,
                         &local_a0);
              uVar5 = local_e0[0]._8_4_;
              uVar3 = local_e0[0]._0_8_;
              lVar28 = *(longlong *)this;
              uVar22 = 0;
              if (param_1 < *(int *)(lVar28 + 0x148)) {
                uVar22 = (uint)~param_1 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar28 = *(longlong *)(lVar28 + 0x140);
              *(undefined8 *)(lVar28 + lVar24 * 0xc) = uVar3;
              *(undefined4 *)(lVar28 + 8 + lVar24 * 0xc) = uVar5;
            }
          }
          local_148 = local_148 + 1;
          uVar30 = uVar30 + 1;
          lVar28 = local_100;
        } while ((int)uVar30 < *(int *)(lVar29 + 0x14));
      }
      lVar29 = lVar29 + 0x20;
      uVar26 = (ulonglong)local_150;
    }
  }
  return;
}

// operator() @ 143d09770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,1,0>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ForAnyElementType *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  bool bVar17;
  uchar uVar18;
  uint uVar19;
  int iVar20;
  TVector<float,3> *pTVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar25;
  longlong lVar26;
  undefined8 *puVar27;
  double dVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar39;
  float fVar40;
  undefined1 auVar38 [16];
  undefined1 auStackY_1c8 [32];
  undefined1 local_178 [4];
  float local_174;
  float local_170;
  float fStack_16c;
  float local_168;
  float local_160;
  float fStack_15c;
  float local_158;
  uint local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  double local_120;
  double local_118;
  double local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  double local_c8;
  double local_c0;
  double local_b8;
  TVector<float,3> local_b0;
  TVector<float,3> local_a0;
  ulonglong local_90;
  
  auVar16 = ___xmm_000000003f8000003f8000003f800000;
  uVar15 = _UNK_15061cc78;
  uVar14 = _UNK_15061cc74;
  uVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_100 = (longlong)param_1;
  local_140 = local_100 * 0x10;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + local_140) != 0.0) {
    local_f0 = *(longlong **)((longlong)this + 0x18);
    local_150 = *(uint *)(local_f0 + 1);
    uVar22 = (ulonglong)(int)local_150;
    lVar26 = *local_f0;
    lVar24 = uVar22 * 0x20 + lVar26;
    local_f8 = lVar24;
    while( true ) {
      if ((int)local_f0[1] != (int)uVar22) {
        local_178[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_178);
      }
      if (lVar26 == lVar24) break;
      uVar25 = 0;
      local_148 = 0;
      if (0 < *(int *)(lVar26 + 0x14)) {
        do {
          if ((*(longlong *)(lVar26 + 8) == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar24 = *(longlong *)(lVar26 + 8);
          uVar23 = *(int *)(lVar26 + 0x10) + uVar25;
          uVar19 = 0;
          if ((int)uVar23 < *(int *)(lVar24 + 0x68)) {
            uVar19 = ~uVar23 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_108 = *(longlong *)(lVar24 + 0x60);
          lVar24 = (longlong)(int)uVar23;
          uVar18 = Chaos::FImplicitObject::GetType(*(FImplicitObject **)(local_108 + lVar24 * 8));
          if ((uVar18 != '&') && (uVar18 != '\x11')) {
            if ((*(longlong *)(lVar26 + 8) == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar17)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar4 = *(longlong *)(lVar26 + 8);
            uVar23 = *(int *)(lVar26 + 0x10) + uVar25;
            uVar19 = 0;
            if ((int)uVar23 < *(int *)(lVar4 + 0x50)) {
              uVar19 = ~uVar23 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_d8 = *(undefined1 (*) [16])
                        (*(longlong *)(lVar4 + 0x48) + (longlong)(int)uVar23 * 0x10);
            fVar9 = local_d8._0_4_;
            fVar10 = local_d8._4_4_;
            fVar11 = local_d8._8_4_;
            fVar12 = local_d8._12_4_;
            if ((*(longlong *)(lVar26 + 8) == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar17)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pTVar21 = Chaos::TParticles<float,3>::GetX
                                (*(TParticles<float,3> **)(lVar26 + 8),
                                 *(int *)(lVar26 + 0x10) + uVar25);
            lVar4 = local_108;
            fVar34 = fVar9 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
            fVar35 = fVar10 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
            fVar36 = fVar11 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
            fVar37 = fVar12 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
            uVar2 = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + local_140);
            auVar38._0_4_ = (float)uVar2 - (float)*(undefined8 *)pTVar21;
            auVar38._4_4_ =
                 (float)((ulonglong)uVar2 >> 0x20) -
                 (float)((ulonglong)*(undefined8 *)pTVar21 >> 0x20);
            auVar38._8_4_ =
                 *(float *)(**(longlong **)((longlong)this + 0x10) + 8 + local_140) -
                 *(float *)&pTVar21->field_0x8;
            auVar38._12_4_ = 0;
            auVar38 = insertps(auVar38,auVar38,8);
            fVar30 = auVar38._0_4_;
            fVar39 = auVar38._4_4_;
            fVar40 = auVar38._8_4_;
            fVar31 = fVar39 * fVar34 - fVar35 * fVar30;
            fVar32 = fVar40 * fVar35 - fVar36 * fVar39;
            fVar33 = fVar30 * fVar36 - fVar34 * fVar40;
            fVar32 = fVar32 + fVar32;
            fVar33 = fVar33 + fVar33;
            fVar31 = fVar31 + fVar31;
            auVar38 = blendps(auVar16,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
            auVar29 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar38);
            fVar30 = (float)(~-(uint)((float)(uVar13 & auVar38._0_4_) <=
                                     GlobalVectorConstants::SmallNumber.m128_f32[0]) & auVar29._0_4_
                            ) * (fVar37 * fVar32 + fVar30 + (fVar31 * fVar35 - fVar33 * fVar36));
            fVar36 = (float)(~-(uint)((float)(uVar14 & auVar38._4_4_) <=
                                     GlobalVectorConstants::SmallNumber.m128_f32[1]) & auVar29._4_4_
                            ) * (fVar37 * fVar33 + fVar39 + (fVar32 * fVar36 - fVar31 * fVar34));
            local_138 = CONCAT44(fVar36,fVar30);
            local_130 = (float)(~-(uint)((float)(uVar15 & auVar38._8_4_) <=
                                        GlobalVectorConstants::SmallNumber.m128_f32[2]) &
                               auVar29._8_4_) *
                        (fVar37 * fVar31 + fVar40 + (fVar33 * fVar34 - fVar32 * fVar35));
            local_120 = (double)fVar30;
            local_118 = (double)fVar36;
            local_110 = (double)local_130;
            plVar5 = *(longlong **)(local_108 + lVar24 * 8);
            dVar28 = (double)(**(code **)(*plVar5 + 0x80))(plVar5,&local_120,&local_c8);
            fStack_15c = (float)local_c0;
            local_160 = (float)local_c8;
            local_158 = (float)local_b8;
            local_174 = (*(float *)(*(longlong *)this + 0xc) + *(float *)(*(longlong *)this + 8)) -
                        (float)dVar28;
            if (0.0 < local_174) {
              if (uVar18 == '\x10') {
                lVar24 = *(longlong *)(lVar4 + lVar24 * 8);
                if ((*(char *)(lVar24 + 0x18) != '\x10') &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("T_DERIVED::StaticType() == Type",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                        ,0xc2,L""), bVar17)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                if (*(char *)(lVar24 + 0x50) != '\0') {
                  local_12c = (float)local_120;
                  local_128 = (float)local_118;
                  local_124 = (float)local_110;
                  Chaos::Softs::Private::ReflectOneSidedCollision
                            ((TVector<float,3> *)&local_12c,(TVector<float,3> *)(lVar24 + 0x38),
                             (TVector<float,3> *)(lVar24 + 0x20),&local_174,
                             (TVector<float,3> *)&local_160);
                }
              }
              fVar32 = local_160 * auVar16._0_4_;
              fVar33 = fStack_15c * auVar16._4_4_;
              fVar34 = local_158 * auVar16._8_4_;
              fVar30 = fVar33 * fVar9 - fVar32 * fVar10;
              fVar36 = fVar34 * fVar10 - fVar33 * fVar11;
              fVar31 = fVar32 * fVar11 - fVar34 * fVar9;
              fVar36 = fVar36 + fVar36;
              fVar31 = fVar31 + fVar31;
              fVar30 = fVar30 + fVar30;
              local_168 = fVar12 * fVar30 + fVar34 + (fVar31 * fVar9 - fVar36 * fVar10);
              fStack_16c = fVar12 * fVar31 + fVar33 + (fVar36 * fVar11 - fVar30 * fVar9);
              local_170 = fVar12 * fVar36 + fVar32 + (fVar30 * fVar10 - fVar31 * fVar11);
              lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x98);
              local_e8._0_8_ = _local_170;
              local_e8._8_4_ = local_168;
              if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::ReportNotNullPtr();
              }
              EnterCriticalSection(lpCriticalSection);
              plVar5 = *(longlong **)(*(longlong *)this + 0x78);
              if (((*(int *)(lVar26 + 0x10) < 0) ||
                  ((int)plVar5[1] < *(int *)(lVar26 + 0x10) + *(int *)(lVar26 + 0x14))) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x52,L""), bVar17)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar20 = *(int *)(lVar26 + 0x10);
              lVar24 = *plVar5;
              iVar3 = *(int *)(lVar26 + 0x14);
              if ((iVar3 < 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar17)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar19 = 0;
              if ((int)uVar25 < iVar3) {
                uVar19 = ~uVar25 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar17)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar4 = local_100;
              *(undefined1 *)(iVar20 + lVar24 + local_148) = 1;
              pFVar6 = *(ForAnyElementType **)(*(longlong *)this + 0x80);
              piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
              puVar27 = (undefined8 *)(local_100 * 0x10 + **(longlong **)((longlong)this + 0x10));
              iVar20 = *(int *)&pFVar6[1].Data;
              if (iVar20 == *piVar1) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,pFVar6,piVar1);
              }
              *(int *)&pFVar6[1].Data = iVar20 + 1;
              pFVar7 = pFVar6->Data;
              *(undefined8 *)(pFVar7 + (longlong)iVar20 * 0xc) = *puVar27;
              *(undefined4 *)(pFVar7 + (longlong)iVar20 * 0xc + 8) = *(undefined4 *)(puVar27 + 1);
              pFVar6 = *(ForAnyElementType **)(*(longlong *)this + 0x88);
              piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
              iVar20 = *(int *)&pFVar6[1].Data;
              if (iVar20 == *piVar1) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,pFVar6,piVar1);
              }
              *(int *)&pFVar6[1].Data = iVar20 + 1;
              pFVar7 = pFVar6->Data;
              *(undefined8 *)(pFVar7 + (longlong)iVar20 * 0xc) = _local_170;
              *(float *)(pFVar7 + (longlong)iVar20 * 0xc + 8) = local_168;
              pFVar6 = *(ForAnyElementType **)(*(longlong *)this + 0x90);
              piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
              iVar20 = *(int *)&pFVar6[1].Data;
              if (iVar20 == *piVar1) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,pFVar6,piVar1);
                *(int *)&pFVar6[1].Data = iVar20 + 1;
              }
              else {
                *(int *)&pFVar6[1].Data = iVar20 + 1;
              }
              *(float *)(pFVar6->Data + (longlong)iVar20 * 4) = (float)dVar28;
              LeaveCriticalSection(lpCriticalSection);
              lVar24 = **(longlong **)((longlong)this + 0x10);
              *(float *)(lVar24 + 4 + lVar4 * 0x10) =
                   fStack_16c * local_174 + *(float *)(lVar24 + 4 + lVar4 * 0x10);
              *(float *)(lVar24 + 8 + lVar4 * 0x10) =
                   local_168 * local_174 + *(float *)(lVar24 + 8 + lVar4 * 0x10);
              *(float *)(lVar24 + lVar4 * 0x10) =
                   local_170 * local_174 + *(float *)(lVar24 + lVar4 * 0x10);
              if ((*(longlong *)(lVar26 + 8) == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar17)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar24 = *(longlong *)(lVar26 + 8);
              uVar23 = *(int *)(lVar26 + 0x10) + uVar25;
              uVar19 = 0;
              if ((int)uVar23 < *(int *)(lVar24 + 0x98)) {
                uVar19 = ~uVar23 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar24 = *(longlong *)(lVar24 + 0x90);
              if ((*(longlong *)(lVar26 + 8) == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar17)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pTVar21 = Chaos::TParticles<float,3>::GetX
                                  (*(TParticles<float,3> **)(lVar26 + 8),
                                   *(int *)(lVar26 + 0x10) + uVar25);
              Chaos::Softs::Private::ApplyFriction
                        ((TVector<float,3> *)(local_140 + **(longlong **)((longlong)this + 0x10)),
                         (TVector<float,3> *)(**(longlong **)((longlong)this + 8) + lVar4 * 0xc),
                         (TVector<float,3> *)&local_170,
                         local_174 * *(float *)(*(longlong *)this + 0x10),
                         *(float *)((longlong)this + 0x20),pTVar21,
                         (TVector<float,3> *)(lVar24 + (longlong)(int)uVar23 * 0xc),&local_a0,
                         &local_b0);
            }
          }
          local_148 = local_148 + 1;
          uVar25 = uVar25 + 1;
          lVar24 = local_f8;
        } while ((int)uVar25 < *(int *)(lVar26 + 0x14));
      }
      lVar26 = lVar26 + 0x20;
      uVar22 = (ulonglong)local_150;
    }
  }
  return;
}

// operator() @ 143d0a010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,0,1>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  int *piVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  ForAnyElementType *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  longlong lVar18;
  bool bVar19;
  uchar uVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  TVector<float,3> *pTVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar28;
  longlong lVar29;
  uint uVar30;
  double dVar31;
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar42;
  float fVar43;
  undefined1 auVar41 [16];
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  float local_170 [2];
  longlong local_168;
  float local_160;
  float fStack_15c;
  float local_158;
  longlong local_150;
  uint local_148;
  longlong local_140;
  undefined8 local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  double local_120;
  double local_118;
  double local_110;
  longlong local_108;
  longlong local_100;
  longlong *local_f8;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  auVar17 = ___xmm_000000003f8000003f8000003f800000;
  uVar16 = _UNK_15061cc78;
  uVar15 = _UNK_15061cc74;
  uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_a0 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  lVar23 = (longlong)param_1;
  local_108 = lVar23 * 0x10;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + local_108) != 0.0) {
    local_f8 = *(longlong **)((longlong)this + 0x18);
    local_148 = *(uint *)(local_f8 + 1);
    uVar25 = (ulonglong)(int)local_148;
    lVar29 = *local_f8;
    lVar27 = uVar25 * 0x20 + lVar29;
    local_100 = lVar27;
    while( true ) {
      if ((int)local_f8[1] != (int)uVar25) {
        local_178[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_178);
      }
      if (lVar29 == lVar27) break;
      uVar30 = 0;
      local_140 = 0;
      if (0 < *(int *)(lVar29 + 0x14)) {
        do {
          if ((*(longlong *)(lVar29 + 8) == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar27 = *(longlong *)(lVar29 + 8);
          uVar26 = *(int *)(lVar29 + 0x10) + uVar30;
          uVar21 = 0;
          if ((int)uVar26 < *(int *)(lVar27 + 0x68)) {
            uVar21 = ~uVar26 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_168 = *(longlong *)(lVar27 + 0x60);
          local_150 = (longlong)(int)uVar26;
          uVar20 = Chaos::FImplicitObject::GetType(*(FImplicitObject **)(local_168 + local_150 * 8))
          ;
          if ((uVar20 != '&') && (uVar20 != '\x11')) {
            if ((*(longlong *)(lVar29 + 8) == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar19)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar27 = *(longlong *)(lVar29 + 8);
            uVar26 = *(int *)(lVar29 + 0x10) + uVar30;
            uVar21 = 0;
            if ((int)uVar26 < *(int *)(lVar27 + 0x50)) {
              uVar21 = ~uVar26 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pfVar2 = (float *)(*(longlong *)(lVar27 + 0x48) + (longlong)(int)uVar26 * 0x10);
            fVar10 = *pfVar2;
            fVar11 = pfVar2[1];
            fVar12 = pfVar2[2];
            fVar13 = pfVar2[3];
            local_c8 = fVar10;
            fStack_c4 = fVar11;
            fStack_c0 = fVar12;
            fStack_bc = fVar13;
            if ((*(longlong *)(lVar29 + 8) == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar19)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pTVar24 = Chaos::TParticles<float,3>::GetX
                                (*(TParticles<float,3> **)(lVar29 + 8),
                                 *(int *)(lVar29 + 0x10) + uVar30);
            lVar18 = local_150;
            lVar27 = local_168;
            fVar37 = fVar10 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
            fVar38 = fVar11 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
            fVar39 = fVar12 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
            fVar40 = fVar13 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
            uVar3 = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + local_108);
            auVar41._0_4_ = (float)uVar3 - (float)*(undefined8 *)pTVar24;
            auVar41._4_4_ =
                 (float)((ulonglong)uVar3 >> 0x20) -
                 (float)((ulonglong)*(undefined8 *)pTVar24 >> 0x20);
            auVar41._8_4_ =
                 *(float *)(**(longlong **)((longlong)this + 0x10) + 8 + local_108) -
                 *(float *)&pTVar24->field_0x8;
            auVar41._12_4_ = 0;
            auVar41 = insertps(auVar41,auVar41,8);
            fVar33 = auVar41._0_4_;
            fVar42 = auVar41._4_4_;
            fVar43 = auVar41._8_4_;
            fVar34 = fVar42 * fVar37 - fVar38 * fVar33;
            fVar35 = fVar43 * fVar38 - fVar39 * fVar42;
            fVar36 = fVar33 * fVar39 - fVar37 * fVar43;
            fVar35 = fVar35 + fVar35;
            fVar36 = fVar36 + fVar36;
            fVar34 = fVar34 + fVar34;
            auVar41 = blendps(auVar17,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
            auVar32 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar41);
            fVar33 = (float)(~-(uint)((float)(uVar14 & auVar41._0_4_) <=
                                     GlobalVectorConstants::SmallNumber.m128_f32[0]) & auVar32._0_4_
                            ) * (fVar40 * fVar35 + fVar33 + (fVar34 * fVar38 - fVar36 * fVar39));
            fVar39 = (float)(~-(uint)((float)(uVar15 & auVar41._4_4_) <=
                                     GlobalVectorConstants::SmallNumber.m128_f32[1]) & auVar32._4_4_
                            ) * (fVar40 * fVar36 + fVar42 + (fVar35 * fVar39 - fVar34 * fVar37));
            local_138 = CONCAT44(fVar39,fVar33);
            local_130 = (float)(~-(uint)((float)(uVar16 & auVar41._8_4_) <=
                                        GlobalVectorConstants::SmallNumber.m128_f32[2]) &
                               auVar32._8_4_) *
                        (fVar40 * fVar34 + fVar43 + (fVar36 * fVar37 - fVar35 * fVar38));
            local_120 = (double)fVar33;
            local_118 = (double)fVar39;
            local_110 = (double)local_130;
            plVar6 = *(longlong **)(local_168 + local_150 * 8);
            dVar31 = (double)(**(code **)(*plVar6 + 0x80))(plVar6,&local_120,&local_b8);
            fStack_15c = (float)local_b0;
            local_160 = (float)local_b8;
            local_158 = (float)local_a8;
            local_170[0] = (*(float *)(*(longlong *)this + 0xc) + *(float *)(*(longlong *)this + 8))
                           - (float)dVar31;
            if (0.0 < local_170[0]) {
              if (uVar20 == '\x10') {
                lVar27 = *(longlong *)(lVar27 + lVar18 * 8);
                if ((*(char *)(lVar27 + 0x18) != '\x10') &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("T_DERIVED::StaticType() == Type",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                        ,0xc2,L""), bVar19)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                if (*(char *)(lVar27 + 0x50) != '\0') {
                  local_12c = (float)local_120;
                  local_128 = (float)local_118;
                  local_124 = (float)local_110;
                  Chaos::Softs::Private::ReflectOneSidedCollision
                            ((TVector<float,3> *)&local_12c,(TVector<float,3> *)(lVar27 + 0x38),
                             (TVector<float,3> *)(lVar27 + 0x20),local_170,
                             (TVector<float,3> *)&local_160);
                }
              }
              fVar35 = local_160 * auVar17._0_4_;
              fVar36 = fStack_15c * auVar17._4_4_;
              fVar37 = local_158 * auVar17._8_4_;
              fVar33 = fVar36 * fVar10 - fVar35 * fVar11;
              fVar39 = fVar37 * fVar11 - fVar36 * fVar12;
              fVar34 = fVar35 * fVar12 - fVar37 * fVar10;
              fVar39 = fVar39 + fVar39;
              fVar34 = fVar34 + fVar34;
              fVar33 = fVar33 + fVar33;
              local_e8 = fVar13 * fVar33 + fVar37 + (fVar34 * fVar10 - fVar39 * fVar11);
              uVar3 = CONCAT44(fVar13 * fVar34 + fVar36 + (fVar39 * fVar12 - fVar33 * fVar10),
                               fVar13 * fVar39 + fVar35 + (fVar33 * fVar11 - fVar34 * fVar12));
              local_168 = CONCAT44(local_168._4_4_,local_e8);
              lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x98);
              local_f0 = uVar3;
              local_e0 = uVar3;
              if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::ReportNotNullPtr();
              }
              EnterCriticalSection(lpCriticalSection);
              plVar6 = *(longlong **)(*(longlong *)this + 0x78);
              if (((*(int *)(lVar29 + 0x10) < 0) ||
                  ((int)plVar6[1] < *(int *)(lVar29 + 0x10) + *(int *)(lVar29 + 0x14))) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x52,L""), bVar19)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar22 = *(int *)(lVar29 + 0x10);
              lVar27 = *plVar6;
              iVar5 = *(int *)(lVar29 + 0x14);
              if ((iVar5 < 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar19)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar21 = 0;
              if ((int)uVar30 < iVar5) {
                uVar21 = ~uVar30 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar19)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              *(undefined1 *)(local_140 + iVar22 + lVar27) = 1;
              pFVar7 = *(ForAnyElementType **)(*(longlong *)this + 0x80);
              piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
              puVar28 = (undefined8 *)(lVar23 * 0x10 + **(longlong **)((longlong)this + 0x10));
              iVar22 = *(int *)&pFVar7[1].Data;
              if (iVar22 == *piVar1) {
                iVar22 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,pFVar7,piVar1);
              }
              *(int *)&pFVar7[1].Data = iVar22 + 1;
              pFVar8 = pFVar7->Data;
              *(undefined8 *)(pFVar8 + (longlong)iVar22 * 0xc) = *puVar28;
              *(undefined4 *)(pFVar8 + (longlong)iVar22 * 0xc + 8) = *(undefined4 *)(puVar28 + 1);
              pFVar7 = *(ForAnyElementType **)(*(longlong *)this + 0x88);
              piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
              iVar22 = *(int *)&pFVar7[1].Data;
              if (iVar22 == *piVar1) {
                iVar22 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,pFVar7,piVar1);
              }
              fVar10 = (float)local_168;
              *(int *)&pFVar7[1].Data = iVar22 + 1;
              pFVar8 = pFVar7->Data;
              *(undefined8 *)(pFVar8 + (longlong)iVar22 * 0xc) = uVar3;
              *(float *)(pFVar8 + (longlong)iVar22 * 0xc + 8) = (float)local_168;
              pFVar7 = *(ForAnyElementType **)(*(longlong *)this + 0x90);
              piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
              iVar22 = *(int *)&pFVar7[1].Data;
              if (iVar22 == *piVar1) {
                iVar22 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,pFVar7,piVar1);
                *(int *)&pFVar7[1].Data = iVar22 + 1;
              }
              else {
                *(int *)&pFVar7[1].Data = iVar22 + 1;
              }
              *(float *)(pFVar7->Data + (longlong)iVar22 * 4) = (float)dVar31;
              LeaveCriticalSection(lpCriticalSection);
              uVar26 = (uint)~param_1 >> 0x1f;
              lVar27 = **(longlong **)((longlong)this + 0x10);
              *(float *)(lVar27 + 4 + lVar23 * 0x10) =
                   local_e0._4_4_ * local_170[0] + *(float *)(lVar27 + 4 + lVar23 * 0x10);
              *(float *)(lVar27 + 8 + lVar23 * 0x10) =
                   fVar10 * local_170[0] + *(float *)(lVar27 + 8 + lVar23 * 0x10);
              *(float *)(lVar27 + lVar23 * 0x10) =
                   (float)local_e0 * local_170[0] + *(float *)(lVar27 + lVar23 * 0x10);
              lVar27 = *(longlong *)this;
              uVar21 = 0;
              if (param_1 < *(int *)(lVar27 + 0x118)) {
                uVar21 = uVar26;
              }
              if ((uVar21 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              *(undefined1 *)(lVar23 + *(longlong *)(lVar27 + 0x110)) = 1;
              lVar27 = *(longlong *)this;
              uVar4 = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + lVar23 * 0x10);
              local_150 = CONCAT44(local_150._4_4_,
                                   *(undefined4 *)
                                    (**(longlong **)((longlong)this + 0x10) + 8 + lVar23 * 0x10));
              uVar21 = 0;
              if (param_1 < *(int *)(lVar27 + 0x128)) {
                uVar21 = uVar26;
              }
              if ((uVar21 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar27 = *(longlong *)(lVar27 + 0x120);
              *(undefined8 *)(lVar27 + lVar23 * 0xc) = uVar4;
              *(undefined4 *)(lVar27 + 8 + lVar23 * 0xc) = (undefined4)local_150;
              lVar27 = *(longlong *)this;
              uVar21 = 0;
              if (param_1 < *(int *)(lVar27 + 0x138)) {
                uVar21 = uVar26;
              }
              if ((uVar21 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar27 = *(longlong *)(lVar27 + 0x130);
              *(undefined8 *)(lVar27 + lVar23 * 0xc) = uVar3;
              *(float *)(lVar27 + 8 + lVar23 * 0xc) = (float)local_168;
            }
          }
          local_140 = local_140 + 1;
          uVar30 = uVar30 + 1;
          lVar27 = local_100;
        } while ((int)uVar30 < *(int *)(lVar29 + 0x14));
      }
      lVar29 = lVar29 + 0x20;
      uVar25 = (ulonglong)local_148;
    }
  }
  return;
}

// operator() @ 143d0a8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,0,0>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  int *piVar1;
  float *pfVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  ForAnyElementType *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  longlong lVar17;
  bool bVar18;
  uchar uVar19;
  uint uVar20;
  int iVar21;
  TVector<float,3> *pTVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar26;
  uint uVar27;
  longlong lVar28;
  double dVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar40;
  float fVar41;
  undefined1 auVar39 [16];
  undefined1 auStackY_198 [32];
  undefined1 local_168 [4];
  float local_164;
  float local_160;
  float fStack_15c;
  float local_158;
  longlong local_150;
  uint local_148;
  longlong local_140;
  undefined8 local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  double local_120;
  double local_118;
  double local_110;
  longlong local_108;
  longlong local_100;
  longlong *local_f8;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  auVar16 = ___xmm_000000003f8000003f8000003f800000;
  uVar15 = _UNK_15061cc78;
  uVar14 = _UNK_15061cc74;
  uVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_a0 = __security_cookie.value ^ (ulonglong)auStackY_198;
  lVar28 = (longlong)param_1;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + lVar28 * 0x10) != 0.0) {
    local_f8 = *(longlong **)((longlong)this + 0x18);
    local_148 = *(uint *)(local_f8 + 1);
    uVar23 = (ulonglong)(int)local_148;
    lVar26 = *local_f8;
    lVar25 = uVar23 * 0x20 + lVar26;
    local_100 = lVar25;
    while( true ) {
      if ((int)local_f8[1] != (int)uVar23) {
        local_168[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_168);
      }
      if (lVar26 == lVar25) break;
      uVar27 = 0;
      local_140 = 0;
      if (0 < *(int *)(lVar26 + 0x14)) {
        do {
          if ((*(longlong *)(lVar26 + 8) == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar18)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar25 = *(longlong *)(lVar26 + 8);
          uVar24 = *(int *)(lVar26 + 0x10) + uVar27;
          uVar20 = 0;
          if ((int)uVar24 < *(int *)(lVar25 + 0x68)) {
            uVar20 = ~uVar24 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_108 = *(longlong *)(lVar25 + 0x60);
          local_150 = (longlong)(int)uVar24;
          uVar19 = Chaos::FImplicitObject::GetType(*(FImplicitObject **)(local_108 + local_150 * 8))
          ;
          if ((uVar19 != '&') && (uVar19 != '\x11')) {
            if ((*(longlong *)(lVar26 + 8) == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar25 = *(longlong *)(lVar26 + 8);
            uVar24 = *(int *)(lVar26 + 0x10) + uVar27;
            uVar20 = 0;
            if ((int)uVar24 < *(int *)(lVar25 + 0x50)) {
              uVar20 = ~uVar24 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pfVar2 = (float *)(*(longlong *)(lVar25 + 0x48) + (longlong)(int)uVar24 * 0x10);
            fVar9 = *pfVar2;
            fVar10 = pfVar2[1];
            fVar11 = pfVar2[2];
            fVar12 = pfVar2[3];
            local_c8 = fVar9;
            fStack_c4 = fVar10;
            fStack_c0 = fVar11;
            fStack_bc = fVar12;
            if ((*(longlong *)(lVar26 + 8) == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pTVar22 = Chaos::TParticles<float,3>::GetX
                                (*(TParticles<float,3> **)(lVar26 + 8),
                                 *(int *)(lVar26 + 0x10) + uVar27);
            lVar17 = local_108;
            lVar25 = local_150;
            fVar35 = fVar9 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
            fVar36 = fVar10 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
            fVar37 = fVar11 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
            fVar38 = fVar12 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
            uVar3 = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + lVar28 * 0x10);
            auVar39._0_4_ = (float)uVar3 - (float)*(undefined8 *)pTVar22;
            auVar39._4_4_ =
                 (float)((ulonglong)uVar3 >> 0x20) -
                 (float)((ulonglong)*(undefined8 *)pTVar22 >> 0x20);
            auVar39._8_4_ =
                 *(float *)(**(longlong **)((longlong)this + 0x10) + 8 + lVar28 * 0x10) -
                 *(float *)&pTVar22->field_0x8;
            auVar39._12_4_ = 0;
            auVar39 = insertps(auVar39,auVar39,8);
            fVar31 = auVar39._0_4_;
            fVar40 = auVar39._4_4_;
            fVar41 = auVar39._8_4_;
            fVar32 = fVar40 * fVar35 - fVar36 * fVar31;
            fVar33 = fVar41 * fVar36 - fVar37 * fVar40;
            fVar34 = fVar31 * fVar37 - fVar35 * fVar41;
            fVar33 = fVar33 + fVar33;
            fVar34 = fVar34 + fVar34;
            fVar32 = fVar32 + fVar32;
            auVar39 = blendps(auVar16,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
            auVar30 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar39);
            fVar31 = (float)(~-(uint)((float)(uVar13 & auVar39._0_4_) <=
                                     GlobalVectorConstants::SmallNumber.m128_f32[0]) & auVar30._0_4_
                            ) * (fVar38 * fVar33 + fVar31 + (fVar32 * fVar36 - fVar34 * fVar37));
            fVar37 = (float)(~-(uint)((float)(uVar14 & auVar39._4_4_) <=
                                     GlobalVectorConstants::SmallNumber.m128_f32[1]) & auVar30._4_4_
                            ) * (fVar38 * fVar34 + fVar40 + (fVar33 * fVar37 - fVar32 * fVar35));
            local_138 = CONCAT44(fVar37,fVar31);
            local_130 = (float)(~-(uint)((float)(uVar15 & auVar39._8_4_) <=
                                        GlobalVectorConstants::SmallNumber.m128_f32[2]) &
                               auVar30._8_4_) *
                        (fVar38 * fVar32 + fVar41 + (fVar34 * fVar35 - fVar33 * fVar36));
            local_120 = (double)fVar31;
            local_118 = (double)fVar37;
            local_110 = (double)local_130;
            plVar5 = *(longlong **)(local_108 + local_150 * 8);
            dVar29 = (double)(**(code **)(*plVar5 + 0x80))(plVar5,&local_120,&local_b8);
            fStack_15c = (float)local_b0;
            local_160 = (float)local_b8;
            local_158 = (float)local_a8;
            local_164 = (*(float *)(*(longlong *)this + 0xc) + *(float *)(*(longlong *)this + 8)) -
                        (float)dVar29;
            if (0.0 < local_164) {
              if (uVar19 == '\x10') {
                lVar25 = *(longlong *)(lVar17 + lVar25 * 8);
                if ((*(char *)(lVar25 + 0x18) != '\x10') &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("T_DERIVED::StaticType() == Type",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                        ,0xc2,L""), bVar18)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                if (*(char *)(lVar25 + 0x50) != '\0') {
                  local_12c = (float)local_120;
                  local_128 = (float)local_118;
                  local_124 = (float)local_110;
                  Chaos::Softs::Private::ReflectOneSidedCollision
                            ((TVector<float,3> *)&local_12c,(TVector<float,3> *)(lVar25 + 0x38),
                             (TVector<float,3> *)(lVar25 + 0x20),&local_164,
                             (TVector<float,3> *)&local_160);
                }
              }
              fVar33 = local_160 * auVar16._0_4_;
              fVar34 = fStack_15c * auVar16._4_4_;
              fVar35 = local_158 * auVar16._8_4_;
              fVar31 = fVar34 * fVar9 - fVar33 * fVar10;
              fVar37 = fVar35 * fVar10 - fVar34 * fVar11;
              fVar32 = fVar33 * fVar11 - fVar35 * fVar9;
              fVar37 = fVar37 + fVar37;
              fVar32 = fVar32 + fVar32;
              fVar31 = fVar31 + fVar31;
              local_e8 = fVar12 * fVar31 + fVar35 + (fVar32 * fVar9 - fVar37 * fVar10);
              uVar3 = CONCAT44(fVar12 * fVar32 + fVar34 + (fVar37 * fVar11 - fVar31 * fVar9),
                               fVar12 * fVar37 + fVar33 + (fVar31 * fVar10 - fVar32 * fVar11));
              local_150 = CONCAT44(local_150._4_4_,local_e8);
              lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x98);
              local_f0 = uVar3;
              local_e0 = uVar3;
              if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::ReportNotNullPtr();
              }
              EnterCriticalSection(lpCriticalSection);
              plVar5 = *(longlong **)(*(longlong *)this + 0x78);
              if (((*(int *)(lVar26 + 0x10) < 0) ||
                  ((int)plVar5[1] < *(int *)(lVar26 + 0x10) + *(int *)(lVar26 + 0x14))) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x52,L""), bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar21 = *(int *)(lVar26 + 0x10);
              lVar25 = *plVar5;
              iVar4 = *(int *)(lVar26 + 0x14);
              if ((iVar4 < 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar20 = 0;
              if ((int)uVar27 < iVar4) {
                uVar20 = ~uVar27 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(undefined1 *)(local_140 + iVar21 + lVar25) = 1;
              pFVar6 = *(ForAnyElementType **)(*(longlong *)this + 0x80);
              piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
              lVar25 = **(longlong **)((longlong)this + 0x10);
              iVar21 = *(int *)&pFVar6[1].Data;
              if (iVar21 == *piVar1) {
                iVar21 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,pFVar6,piVar1);
              }
              *(int *)&pFVar6[1].Data = iVar21 + 1;
              pFVar7 = pFVar6->Data;
              *(undefined8 *)(pFVar7 + (longlong)iVar21 * 0xc) =
                   *(undefined8 *)(lVar25 + lVar28 * 0x10);
              *(undefined4 *)(pFVar7 + (longlong)iVar21 * 0xc + 8) =
                   *(undefined4 *)(lVar25 + 8 + lVar28 * 0x10);
              pFVar6 = *(ForAnyElementType **)(*(longlong *)this + 0x88);
              piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
              iVar21 = *(int *)&pFVar6[1].Data;
              if (iVar21 == *piVar1) {
                iVar21 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,pFVar6,piVar1);
              }
              fVar9 = (float)local_150;
              *(int *)&pFVar6[1].Data = iVar21 + 1;
              pFVar7 = pFVar6->Data;
              *(undefined8 *)(pFVar7 + (longlong)iVar21 * 0xc) = uVar3;
              *(float *)(pFVar7 + (longlong)iVar21 * 0xc + 8) = (float)local_150;
              pFVar6 = *(ForAnyElementType **)(*(longlong *)this + 0x90);
              piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
              iVar21 = *(int *)&pFVar6[1].Data;
              if (iVar21 == *piVar1) {
                iVar21 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,pFVar6,piVar1);
                *(int *)&pFVar6[1].Data = iVar21 + 1;
              }
              else {
                *(int *)&pFVar6[1].Data = iVar21 + 1;
              }
              *(float *)(pFVar6->Data + (longlong)iVar21 * 4) = (float)dVar29;
              LeaveCriticalSection(lpCriticalSection);
              lVar25 = **(longlong **)((longlong)this + 0x10);
              *(float *)(lVar25 + 4 + lVar28 * 0x10) =
                   local_e0._4_4_ * local_164 + *(float *)(lVar25 + 4 + lVar28 * 0x10);
              *(float *)(lVar25 + 8 + lVar28 * 0x10) =
                   fVar9 * local_164 + *(float *)(lVar25 + 8 + lVar28 * 0x10);
              *(float *)(lVar25 + lVar28 * 0x10) =
                   (float)local_e0 * local_164 + *(float *)(lVar25 + lVar28 * 0x10);
            }
          }
          local_140 = local_140 + 1;
          uVar27 = uVar27 + 1;
          lVar25 = local_100;
        } while ((int)uVar27 < *(int *)(lVar26 + 0x14));
      }
      lVar26 = lVar26 + 0x20;
      uVar23 = (ulonglong)local_148;
    }
  }
  return;
}

// operator() @ 143d0b030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,1,1>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  bool bVar14;
  uchar uVar15;
  uint uVar16;
  longlong lVar17;
  TVector<float,3> *pTVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  uint uVar25;
  double dVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar37;
  float fVar38;
  undefined1 auVar36 [16];
  float fVar39;
  undefined1 local_188 [4];
  float local_184 [3];
  longlong local_178;
  float local_170;
  float fStack_16c;
  float local_168;
  uint local_160;
  longlong local_158;
  longlong local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  double local_110;
  double local_108;
  double local_100;
  longlong local_f8;
  longlong local_f0;
  longlong *local_e8;
  TVector<float,3> local_e0 [2];
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  double local_b8;
  double local_b0;
  double local_a8;
  TVector<float,3> local_a0 [7];
  
  auVar12 = ___xmm_000000003f8000003f8000003f800000;
  uVar11 = _UNK_15061cc78;
  uVar10 = _UNK_15061cc74;
  uVar9 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  lVar17 = (longlong)param_1;
  lVar23 = lVar17 * 0x10;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + lVar23) != 0.0) {
    local_e8 = *(longlong **)((longlong)this + 0x18);
    local_160 = *(uint *)(local_e8 + 1);
    uVar19 = (ulonglong)(int)local_160;
    lVar20 = *local_e8;
    lVar22 = uVar19 * 0x20 + lVar20;
    local_158 = lVar23;
    local_f0 = lVar22;
    while( true ) {
      if ((int)local_e8[1] != (int)uVar19) {
        local_188[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_188);
      }
      if (lVar20 == lVar22) break;
      iVar24 = 0;
      if (0 < *(int *)(lVar20 + 0x14)) {
        do {
          if ((*(longlong *)(lVar20 + 8) == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar22 = *(longlong *)(lVar20 + 8);
          uVar21 = *(int *)(lVar20 + 0x10) + iVar24;
          uVar16 = 0;
          if ((int)uVar21 < *(int *)(lVar22 + 0x68)) {
            uVar16 = ~uVar21 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_178 = *(longlong *)(lVar22 + 0x60);
          local_150 = (longlong)(int)uVar21;
          uVar15 = Chaos::FImplicitObject::GetType(*(FImplicitObject **)(local_178 + local_150 * 8))
          ;
          if ((uVar15 != '&') && (uVar15 != '\x11')) {
            if ((*(longlong *)(lVar20 + 8) == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_f8 = *(longlong *)(lVar20 + 8);
            uVar21 = *(int *)(lVar20 + 0x10) + iVar24;
            uVar16 = 0;
            if ((int)uVar21 < *(int *)(local_f8 + 0x50)) {
              uVar16 = ~uVar21 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pfVar1 = (float *)(*(longlong *)(local_f8 + 0x48) + (longlong)(int)uVar21 * 0x10);
            fVar6 = *pfVar1;
            fVar7 = pfVar1[1];
            fVar39 = pfVar1[2];
            fVar8 = pfVar1[3];
            local_c8 = fVar6;
            fStack_c4 = fVar7;
            fStack_c0 = fVar39;
            fStack_bc = fVar8;
            if ((*(longlong *)(lVar20 + 8) == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar18 = Chaos::TParticles<float,3>::GetX
                                (*(TParticles<float,3> **)(lVar20 + 8),
                                 *(int *)(lVar20 + 0x10) + iVar24);
            lVar22 = local_150;
            fVar32 = fVar6 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
            fVar33 = fVar7 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
            fVar34 = fVar39 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
            fVar35 = fVar8 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
            uVar2 = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + lVar23);
            auVar36._0_4_ = (float)uVar2 - (float)*(undefined8 *)pTVar18;
            auVar36._4_4_ =
                 (float)((ulonglong)uVar2 >> 0x20) -
                 (float)((ulonglong)*(undefined8 *)pTVar18 >> 0x20);
            auVar36._8_4_ =
                 *(float *)(**(longlong **)((longlong)this + 0x10) + 8 + lVar23) -
                 *(float *)&pTVar18->field_0x8;
            auVar36._12_4_ = 0;
            auVar36 = insertps(auVar36,auVar36,8);
            fVar28 = auVar36._0_4_;
            fVar37 = auVar36._4_4_;
            fVar38 = auVar36._8_4_;
            fVar29 = fVar37 * fVar32 - fVar33 * fVar28;
            fVar30 = fVar38 * fVar33 - fVar34 * fVar37;
            fVar31 = fVar28 * fVar34 - fVar32 * fVar38;
            fVar30 = fVar30 + fVar30;
            fVar31 = fVar31 + fVar31;
            fVar29 = fVar29 + fVar29;
            auVar36 = blendps(auVar12,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
            auVar27 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar36);
            fVar28 = (float)(~-(uint)((float)(uVar9 & auVar36._0_4_) <=
                                     GlobalVectorConstants::SmallNumber.m128_f32[0]) & auVar27._0_4_
                            ) * (fVar35 * fVar30 + fVar28 + (fVar29 * fVar33 - fVar31 * fVar34));
            fVar34 = (float)(~-(uint)((float)(uVar10 & auVar36._4_4_) <=
                                     GlobalVectorConstants::SmallNumber.m128_f32[1]) & auVar27._4_4_
                            ) * (fVar35 * fVar31 + fVar37 + (fVar30 * fVar34 - fVar29 * fVar32));
            local_128 = CONCAT44(fVar34,fVar28);
            local_120 = (float)(~-(uint)((float)(uVar11 & auVar36._8_4_) <=
                                        GlobalVectorConstants::SmallNumber.m128_f32[2]) &
                               auVar27._8_4_) *
                        (fVar35 * fVar29 + fVar38 + (fVar31 * fVar32 - fVar30 * fVar33));
            local_110 = (double)fVar28;
            local_108 = (double)fVar34;
            local_100 = (double)local_120;
            plVar4 = *(longlong **)(local_178 + local_150 * 8);
            dVar26 = (double)(**(code **)(*plVar4 + 0x80))(plVar4,&local_110,&local_b8);
            local_170 = (float)local_b8;
            local_168 = (float)local_a8;
            fStack_16c = (float)local_b0;
            local_184[0] = (*(float *)(*(longlong *)this + 0xc) + *(float *)(*(longlong *)this + 8))
                           - (float)dVar26;
            if (0.0 < local_184[0]) {
              if (uVar15 == '\x10') {
                lVar22 = *(longlong *)(local_178 + lVar22 * 8);
                if ((*(char *)(lVar22 + 0x18) != '\x10') &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("T_DERIVED::StaticType() == Type",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                        ,0xc2,L""), bVar14)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (*(char *)(lVar22 + 0x50) != '\0') {
                  local_11c = (float)local_110;
                  local_118 = (float)local_108;
                  local_114 = (float)local_100;
                  Chaos::Softs::Private::ReflectOneSidedCollision
                            ((TVector<float,3> *)&local_11c,(TVector<float,3> *)(lVar22 + 0x38),
                             (TVector<float,3> *)(lVar22 + 0x20),local_184,
                             (TVector<float,3> *)&local_170);
                }
              }
              fVar30 = local_170 * auVar12._0_4_;
              fVar31 = fStack_16c * auVar12._4_4_;
              fVar32 = local_168 * auVar12._8_4_;
              lVar22 = **(longlong **)((longlong)this + 0x10);
              fVar28 = fVar31 * fVar6 - fVar30 * fVar7;
              fVar34 = fVar32 * fVar7 - fVar31 * fVar39;
              fVar29 = fVar30 * fVar39 - fVar32 * fVar6;
              fVar34 = fVar34 + fVar34;
              fVar29 = fVar29 + fVar29;
              fVar28 = fVar28 + fVar28;
              fVar30 = fVar8 * fVar34 + fVar30 + (fVar28 * fVar7 - fVar29 * fVar39);
              fVar39 = fVar8 * fVar29 + fVar31 + (fVar34 * fVar39 - fVar28 * fVar6);
              local_148._8_4_ = fVar8 * fVar28 + fVar32 + (fVar29 * fVar6 - fVar34 * fVar7);
              local_148._4_4_ = fVar39;
              local_148._0_4_ = fVar30;
              *(float *)(lVar22 + lVar23) = fVar30 * local_184[0] + *(float *)(lVar22 + lVar23);
              *(float *)(lVar22 + 4 + lVar23) =
                   fVar39 * local_184[0] + *(float *)(lVar22 + 4 + lVar23);
              *(float *)(lVar22 + 8 + lVar23) =
                   (float)local_148._8_4_ * local_184[0] + *(float *)(lVar22 + 8 + lVar23);
              lVar23 = *(longlong *)this;
              uVar21 = (uint)~param_1 >> 0x1f;
              uVar16 = 0;
              if (param_1 < *(int *)(lVar23 + 0x118)) {
                uVar16 = uVar21;
              }
              local_138._0_8_ = local_148._0_8_;
              local_138._8_4_ = local_148._8_4_;
              if ((uVar16 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              *(undefined1 *)(lVar17 + *(longlong *)(lVar23 + 0x110)) = 1;
              lVar23 = *(longlong *)this;
              uVar2 = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + local_158);
              uVar3 = *(undefined4 *)(**(longlong **)((longlong)this + 0x10) + 8 + local_158);
              uVar16 = 0;
              if (param_1 < *(int *)(lVar23 + 0x128)) {
                uVar16 = uVar21;
              }
              local_178._0_4_ = uVar3;
              if ((uVar16 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar13 = local_138._0_8_;
              lVar23 = *(longlong *)(lVar23 + 0x120);
              *(undefined8 *)(lVar23 + lVar17 * 0xc) = uVar2;
              *(undefined4 *)(lVar23 + 8 + lVar17 * 0xc) = (undefined4)local_178;
              lVar23 = *(longlong *)this;
              local_178 = CONCAT44(local_178._4_4_,local_138._8_4_);
              uVar16 = 0;
              if (param_1 < *(int *)(lVar23 + 0x138)) {
                uVar16 = uVar21;
              }
              if ((uVar16 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar23 = *(longlong *)(lVar23 + 0x130);
              *(undefined8 *)(lVar23 + lVar17 * 0xc) = uVar13;
              *(undefined4 *)(lVar23 + 8 + lVar17 * 0xc) = (undefined4)local_178;
              if ((*(longlong *)(lVar20 + 8) == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar14)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_150 = *(longlong *)(lVar20 + 8);
              uVar25 = *(int *)(lVar20 + 0x10) + iVar24;
              uVar16 = 0;
              if ((int)uVar25 < *(int *)(local_150 + 0x98)) {
                uVar16 = ~uVar25 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar23 = *(longlong *)(local_150 + 0x90);
              if ((*(longlong *)(lVar20 + 8) == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar14)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pTVar18 = Chaos::TParticles<float,3>::GetX
                                  (*(TParticles<float,3> **)(lVar20 + 8),
                                   *(int *)(lVar20 + 0x10) + iVar24);
              Chaos::Softs::Private::ApplyFriction
                        ((TVector<float,3> *)(local_158 + **(longlong **)((longlong)this + 0x10)),
                         (TVector<float,3> *)(**(longlong **)((longlong)this + 8) + lVar17 * 0xc),
                         (TVector<float,3> *)local_138,
                         local_184[0] * *(float *)(*(longlong *)this + 0x10),
                         *(float *)((longlong)this + 0x20),pTVar18,
                         (TVector<float,3> *)(lVar23 + (longlong)(int)uVar25 * 0xc),local_e0,
                         local_a0);
              uVar2 = local_e0[0]._0_8_;
              lVar23 = *(longlong *)this;
              local_178 = CONCAT44(local_178._4_4_,local_e0[0]._8_4_);
              uVar16 = 0;
              if (param_1 < *(int *)(lVar23 + 0x148)) {
                uVar16 = uVar21;
              }
              if ((uVar16 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar23 = *(longlong *)(lVar23 + 0x140);
              *(undefined8 *)(lVar23 + lVar17 * 0xc) = uVar2;
              *(undefined4 *)(lVar23 + 8 + lVar17 * 0xc) = (undefined4)local_178;
              lVar23 = local_158;
            }
          }
          iVar24 = iVar24 + 1;
          lVar22 = local_f0;
        } while (iVar24 < *(int *)(lVar20 + 0x14));
      }
      lVar20 = lVar20 + 0x20;
      uVar19 = (ulonglong)local_160;
    }
  }
  return;
}

// operator() @ 143d0b890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,1,0>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  longlong lVar13;
  bool bVar14;
  uchar uVar15;
  uint uVar16;
  TVector<float,3> *pTVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  double dVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar34;
  float fVar35;
  undefined1 auVar33 [16];
  float fVar36;
  undefined1 local_168 [4];
  float local_164;
  float local_160;
  float fStack_15c;
  float local_158;
  uint local_150;
  undefined1 local_14c [12];
  undefined8 local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  double local_128;
  double local_120;
  double local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined1 local_e8 [16];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  double local_c8;
  double local_c0;
  double local_b8;
  TVector<float,3> local_b0;
  TVector<float,3> local_a0 [7];
  
  auVar12 = ___xmm_000000003f8000003f8000003f800000;
  uVar11 = _UNK_15061cc78;
  uVar10 = _UNK_15061cc74;
  uVar9 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_100 = (longlong)param_1;
  local_110 = local_100 * 0x10;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + local_110) != 0.0) {
    local_f0 = *(longlong **)((longlong)this + 0x18);
    local_150 = *(uint *)(local_f0 + 1);
    uVar18 = (ulonglong)(int)local_150;
    lVar19 = *local_f0;
    local_f8 = uVar18 * 0x20 + lVar19;
    while( true ) {
      lVar22 = local_f8;
      if ((int)local_f0[1] != (int)uVar18) {
        local_168[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_168);
      }
      if (lVar19 == lVar22) break;
      iVar21 = 0;
      if (0 < *(int *)(lVar19 + 0x14)) {
        do {
          if ((*(longlong *)(lVar19 + 8) == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar22 = *(longlong *)(lVar19 + 8);
          uVar20 = *(int *)(lVar19 + 0x10) + iVar21;
          uVar16 = 0;
          if ((int)uVar20 < *(int *)(lVar22 + 0x68)) {
            uVar16 = ~uVar20 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_108 = *(longlong *)(lVar22 + 0x60);
          lVar22 = (longlong)(int)uVar20;
          uVar15 = Chaos::FImplicitObject::GetType(*(FImplicitObject **)(local_108 + lVar22 * 8));
          if ((uVar15 != '&') && (uVar15 != '\x11')) {
            if ((*(longlong *)(lVar19 + 8) == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar3 = *(longlong *)(lVar19 + 8);
            uVar20 = *(int *)(lVar19 + 0x10) + iVar21;
            uVar16 = 0;
            if ((int)uVar20 < *(int *)(lVar3 + 0x50)) {
              uVar16 = ~uVar20 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pfVar1 = (float *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar20 * 0x10);
            fVar6 = *pfVar1;
            fVar7 = pfVar1[1];
            fVar36 = pfVar1[2];
            fVar8 = pfVar1[3];
            local_d8 = fVar6;
            fStack_d4 = fVar7;
            fStack_d0 = fVar36;
            fStack_cc = fVar8;
            if ((*(longlong *)(lVar19 + 8) == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar17 = Chaos::TParticles<float,3>::GetX
                                (*(TParticles<float,3> **)(lVar19 + 8),
                                 *(int *)(lVar19 + 0x10) + iVar21);
            lVar13 = local_108;
            lVar3 = local_110;
            fVar29 = fVar6 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
            fVar30 = fVar7 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
            fVar31 = fVar36 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
            fVar32 = fVar8 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
            uVar2 = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + local_110);
            auVar33._0_4_ = (float)uVar2 - (float)*(undefined8 *)pTVar17;
            auVar33._4_4_ =
                 (float)((ulonglong)uVar2 >> 0x20) -
                 (float)((ulonglong)*(undefined8 *)pTVar17 >> 0x20);
            auVar33._8_4_ =
                 *(float *)(**(longlong **)((longlong)this + 0x10) + 8 + local_110) -
                 *(float *)&pTVar17->field_0x8;
            auVar33._12_4_ = 0;
            auVar33 = insertps(auVar33,auVar33,8);
            fVar25 = auVar33._0_4_;
            fVar34 = auVar33._4_4_;
            fVar35 = auVar33._8_4_;
            fVar26 = fVar34 * fVar29 - fVar30 * fVar25;
            fVar27 = fVar35 * fVar30 - fVar31 * fVar34;
            fVar28 = fVar25 * fVar31 - fVar29 * fVar35;
            fVar27 = fVar27 + fVar27;
            fVar28 = fVar28 + fVar28;
            fVar26 = fVar26 + fVar26;
            auVar33 = blendps(auVar12,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
            auVar24 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar33);
            fVar25 = (float)(~-(uint)((float)(uVar9 & auVar33._0_4_) <=
                                     GlobalVectorConstants::SmallNumber.m128_f32[0]) & auVar24._0_4_
                            ) * (fVar32 * fVar27 + fVar25 + (fVar26 * fVar30 - fVar28 * fVar31));
            fVar31 = (float)(~-(uint)((float)(uVar10 & auVar33._4_4_) <=
                                     GlobalVectorConstants::SmallNumber.m128_f32[1]) & auVar24._4_4_
                            ) * (fVar32 * fVar28 + fVar34 + (fVar27 * fVar31 - fVar26 * fVar29));
            local_140 = CONCAT44(fVar31,fVar25);
            local_138 = (float)(~-(uint)((float)(uVar11 & auVar33._8_4_) <=
                                        GlobalVectorConstants::SmallNumber.m128_f32[2]) &
                               auVar24._8_4_) *
                        (fVar32 * fVar26 + fVar35 + (fVar28 * fVar29 - fVar27 * fVar30));
            local_128 = (double)fVar25;
            local_120 = (double)fVar31;
            local_118 = (double)local_138;
            plVar4 = *(longlong **)(local_108 + lVar22 * 8);
            dVar23 = (double)(**(code **)(*plVar4 + 0x80))(plVar4,&local_128,&local_c8);
            local_160 = (float)local_c8;
            local_158 = (float)local_b8;
            fStack_15c = (float)local_c0;
            local_164 = (*(float *)(*(longlong *)this + 0xc) + *(float *)(*(longlong *)this + 8)) -
                        (float)dVar23;
            if (0.0 < local_164) {
              if (uVar15 == '\x10') {
                lVar22 = *(longlong *)(lVar13 + lVar22 * 8);
                if ((*(char *)(lVar22 + 0x18) != '\x10') &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("T_DERIVED::StaticType() == Type",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                        ,0xc2,L""), bVar14)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (*(char *)(lVar22 + 0x50) != '\0') {
                  local_134 = (float)local_128;
                  local_130 = (float)local_120;
                  local_12c = (float)local_118;
                  Chaos::Softs::Private::ReflectOneSidedCollision
                            ((TVector<float,3> *)&local_134,(TVector<float,3> *)(lVar22 + 0x38),
                             (TVector<float,3> *)(lVar22 + 0x20),&local_164,
                             (TVector<float,3> *)&local_160);
                }
              }
              fVar27 = local_160 * auVar12._0_4_;
              fVar28 = fStack_15c * auVar12._4_4_;
              fVar29 = local_158 * auVar12._8_4_;
              lVar22 = **(longlong **)((longlong)this + 0x10);
              fVar25 = fVar28 * fVar6 - fVar7 * fVar27;
              fVar31 = fVar29 * fVar7 - fVar36 * fVar28;
              fVar26 = fVar27 * fVar36 - fVar6 * fVar29;
              fVar31 = fVar31 + fVar31;
              fVar26 = fVar26 + fVar26;
              fVar25 = fVar25 + fVar25;
              fVar27 = fVar8 * fVar31 + fVar27 + (fVar25 * fVar7 - fVar36 * fVar26);
              fVar36 = fVar8 * fVar26 + fVar28 + (fVar31 * fVar36 - fVar6 * fVar25);
              local_14c._8_4_ = fVar8 * fVar25 + fVar29 + (fVar26 * fVar6 - fVar7 * fVar31);
              local_14c._4_4_ = fVar36;
              local_14c._0_4_ = fVar27;
              *(float *)(lVar22 + lVar3) = fVar27 * local_164 + *(float *)(lVar22 + lVar3);
              *(float *)(lVar22 + 4 + lVar3) = fVar36 * local_164 + *(float *)(lVar22 + 4 + lVar3);
              *(float *)(lVar22 + 8 + lVar3) =
                   (float)local_14c._8_4_ * local_164 + *(float *)(lVar22 + 8 + lVar3);
              local_e8._0_8_ = local_14c._0_8_;
              local_e8._8_4_ = local_14c._8_4_;
              if ((*(longlong *)(lVar19 + 8) == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar14)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar22 = *(longlong *)(lVar19 + 8);
              uVar20 = *(int *)(lVar19 + 0x10) + iVar21;
              uVar16 = 0;
              if ((int)uVar20 < *(int *)(lVar22 + 0x98)) {
                uVar16 = ~uVar20 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar22 = *(longlong *)(lVar22 + 0x90);
              if ((*(longlong *)(lVar19 + 8) == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar14)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pTVar17 = Chaos::TParticles<float,3>::GetX
                                  (*(TParticles<float,3> **)(lVar19 + 8),
                                   *(int *)(lVar19 + 0x10) + iVar21);
              Chaos::Softs::Private::ApplyFriction
                        ((TVector<float,3> *)(**(longlong **)((longlong)this + 0x10) + lVar3),
                         (TVector<float,3> *)(**(longlong **)((longlong)this + 8) + local_100 * 0xc)
                         ,(TVector<float,3> *)local_e8,
                         local_164 * *(float *)(*(longlong *)this + 0x10),
                         *(float *)((longlong)this + 0x20),pTVar17,
                         (TVector<float,3> *)(lVar22 + (longlong)(int)uVar20 * 0xc),local_a0,
                         &local_b0);
            }
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 < *(int *)(lVar19 + 0x14));
      }
      lVar19 = lVar19 + 0x20;
      uVar18 = (ulonglong)local_150;
    }
  }
  return;
}

// operator() @ 143d0bf40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,0,1>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  bool bVar14;
  uchar uVar15;
  uint uVar16;
  longlong lVar17;
  TVector<float,3> *pTVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  double dVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  float fVar36;
  undefined1 auVar34 [16];
  float fVar37;
  undefined1 local_158 [4];
  float local_154 [3];
  longlong *local_148;
  float local_140;
  float fStack_13c;
  float local_138;
  longlong local_130;
  longlong local_128;
  uint local_120;
  undefined8 local_11c;
  float local_114;
  undefined8 local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  double local_f8;
  double local_f0;
  double local_e8;
  longlong local_e0;
  longlong *local_d8;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  double local_b8;
  double local_b0;
  double local_a8;
  
  auVar13 = ___xmm_000000003f8000003f8000003f800000;
  uVar12 = _UNK_15061cc78;
  uVar11 = _UNK_15061cc74;
  uVar10 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  lVar17 = (longlong)param_1;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + lVar17 * 0x10) != 0.0) {
    local_d8 = *(longlong **)((longlong)this + 0x18);
    local_120 = *(uint *)(local_d8 + 1);
    uVar19 = (ulonglong)(int)local_120;
    lVar20 = *local_d8;
    lVar22 = uVar19 * 0x20 + lVar20;
    local_148 = this;
    local_e0 = lVar22;
    while( true ) {
      if ((int)local_d8[1] != (int)uVar19) {
        local_158[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_158);
      }
      if (lVar20 == lVar22) break;
      iVar23 = 0;
      if (0 < *(int *)(lVar20 + 0x14)) {
        do {
          if ((*(longlong *)(lVar20 + 8) == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar22 = *(longlong *)(lVar20 + 8);
          uVar21 = *(int *)(lVar20 + 0x10) + iVar23;
          uVar16 = 0;
          if ((int)uVar21 < *(int *)(lVar22 + 0x68)) {
            uVar16 = ~uVar21 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_130 = *(longlong *)(lVar22 + 0x60);
          local_128 = (longlong)(int)uVar21;
          uVar15 = Chaos::FImplicitObject::GetType(*(FImplicitObject **)(local_130 + local_128 * 8))
          ;
          if ((uVar15 != '&') && (uVar15 != '\x11')) {
            if ((*(longlong *)(lVar20 + 8) == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar14)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar22 = *(longlong *)(lVar20 + 8);
            uVar21 = *(int *)(lVar20 + 0x10) + iVar23;
            uVar16 = 0;
            if ((int)uVar21 < *(int *)(lVar22 + 0x50)) {
              uVar16 = ~uVar21 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pfVar1 = (float *)(*(longlong *)(lVar22 + 0x48) + (longlong)(int)uVar21 * 0x10);
            fVar7 = *pfVar1;
            fVar8 = pfVar1[1];
            fVar37 = pfVar1[2];
            fVar9 = pfVar1[3];
            local_c8 = fVar7;
            fStack_c4 = fVar8;
            fStack_c0 = fVar37;
            fStack_bc = fVar9;
            if ((*(longlong *)(lVar20 + 8) == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar14)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pTVar18 = Chaos::TParticles<float,3>::GetX
                                (*(TParticles<float,3> **)(lVar20 + 8),
                                 *(int *)(lVar20 + 0x10) + iVar23);
            lVar5 = local_128;
            lVar22 = local_130;
            fVar30 = fVar7 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
            fVar31 = fVar8 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
            fVar32 = fVar37 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
            fVar33 = fVar9 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
            uVar2 = *(undefined8 *)(*(longlong *)local_148[2] + lVar17 * 0x10);
            auVar34._0_4_ = (float)uVar2 - (float)*(undefined8 *)pTVar18;
            auVar34._4_4_ =
                 (float)((ulonglong)uVar2 >> 0x20) -
                 (float)((ulonglong)*(undefined8 *)pTVar18 >> 0x20);
            auVar34._8_4_ =
                 *(float *)(*(longlong *)local_148[2] + 8 + lVar17 * 0x10) -
                 *(float *)&pTVar18->field_0x8;
            auVar34._12_4_ = 0;
            auVar34 = insertps(auVar34,auVar34,8);
            fVar26 = auVar34._0_4_;
            fVar35 = auVar34._4_4_;
            fVar36 = auVar34._8_4_;
            fVar27 = fVar35 * fVar30 - fVar31 * fVar26;
            fVar28 = fVar36 * fVar31 - fVar32 * fVar35;
            fVar29 = fVar26 * fVar32 - fVar30 * fVar36;
            fVar28 = fVar28 + fVar28;
            fVar29 = fVar29 + fVar29;
            fVar27 = fVar27 + fVar27;
            auVar34 = blendps(auVar13,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
            auVar25 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar34);
            fVar26 = (float)(~-(uint)((float)(uVar10 & auVar34._0_4_) <=
                                     GlobalVectorConstants::SmallNumber.m128_f32[0]) & auVar25._0_4_
                            ) * (fVar33 * fVar28 + fVar26 + (fVar27 * fVar31 - fVar29 * fVar32));
            fVar32 = (float)(~-(uint)((float)(uVar11 & auVar34._4_4_) <=
                                     GlobalVectorConstants::SmallNumber.m128_f32[1]) & auVar25._4_4_
                            ) * (fVar33 * fVar29 + fVar35 + (fVar28 * fVar32 - fVar27 * fVar30));
            local_110 = CONCAT44(fVar32,fVar26);
            local_108 = (float)(~-(uint)((float)(uVar12 & auVar34._8_4_) <=
                                        GlobalVectorConstants::SmallNumber.m128_f32[2]) &
                               auVar25._8_4_) *
                        (fVar33 * fVar27 + fVar36 + (fVar29 * fVar30 - fVar28 * fVar31));
            local_f8 = (double)fVar26;
            local_f0 = (double)fVar32;
            local_e8 = (double)local_108;
            plVar4 = *(longlong **)(local_130 + local_128 * 8);
            dVar24 = (double)(**(code **)(*plVar4 + 0x80))(plVar4,&local_f8,&local_b8);
            local_140 = (float)local_b8;
            local_138 = (float)local_a8;
            fStack_13c = (float)local_b0;
            local_154[0] = (*(float *)(*local_148 + 0xc) + *(float *)(*local_148 + 8)) -
                           (float)dVar24;
            if (0.0 < local_154[0]) {
              if (uVar15 == '\x10') {
                lVar22 = *(longlong *)(lVar22 + lVar5 * 8);
                if ((*(char *)(lVar22 + 0x18) != '\x10') &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("T_DERIVED::StaticType() == Type",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                        ,0xc2,L""), bVar14)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if (*(char *)(lVar22 + 0x50) != '\0') {
                  local_104 = (float)local_f8;
                  local_100 = (float)local_f0;
                  local_fc = (float)local_e8;
                  Chaos::Softs::Private::ReflectOneSidedCollision
                            ((TVector<float,3> *)&local_104,(TVector<float,3> *)(lVar22 + 0x38),
                             (TVector<float,3> *)(lVar22 + 0x20),local_154,
                             (TVector<float,3> *)&local_140);
                }
              }
              plVar4 = local_148;
              fVar28 = local_140 * auVar13._0_4_;
              fVar29 = fStack_13c * auVar13._4_4_;
              fVar30 = local_138 * auVar13._8_4_;
              uVar21 = (uint)~param_1 >> 0x1f;
              lVar22 = *(longlong *)local_148[2];
              fVar26 = fVar29 * fVar7 - fVar28 * fVar8;
              fVar32 = fVar30 * fVar8 - fVar29 * fVar37;
              fVar27 = fVar28 * fVar37 - fVar30 * fVar7;
              fVar32 = fVar32 + fVar32;
              fVar27 = fVar27 + fVar27;
              fVar26 = fVar26 + fVar26;
              fVar28 = fVar9 * fVar32 + fVar28 + (fVar26 * fVar8 - fVar27 * fVar37);
              fVar37 = fVar9 * fVar27 + fVar29 + (fVar32 * fVar37 - fVar26 * fVar7);
              local_114 = fVar9 * fVar26 + fVar30 + (fVar27 * fVar7 - fVar32 * fVar8);
              uVar2 = CONCAT44(fVar37,fVar28);
              local_128 = CONCAT44(local_128._4_4_,local_114);
              *(float *)(lVar22 + 8 + lVar17 * 0x10) =
                   local_114 * local_154[0] + *(float *)(lVar22 + 8 + lVar17 * 0x10);
              *(float *)(lVar22 + 4 + lVar17 * 0x10) =
                   fVar37 * local_154[0] + *(float *)(lVar22 + 4 + lVar17 * 0x10);
              *(float *)(lVar22 + lVar17 * 0x10) =
                   fVar28 * local_154[0] + *(float *)(lVar22 + lVar17 * 0x10);
              lVar22 = *local_148;
              uVar16 = 0;
              if (param_1 < *(int *)(lVar22 + 0x118)) {
                uVar16 = uVar21;
              }
              local_11c = uVar2;
              if ((uVar16 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              *(undefined1 *)(lVar17 + *(longlong *)(lVar22 + 0x110)) = 1;
              lVar22 = *plVar4;
              lVar5 = *(longlong *)plVar4[2];
              uVar3 = *(undefined8 *)(lVar5 + lVar17 * 0x10);
              local_130 = CONCAT44(local_130._4_4_,*(undefined4 *)(lVar5 + 8 + lVar17 * 0x10));
              uVar16 = 0;
              if (param_1 < *(int *)(lVar22 + 0x128)) {
                uVar16 = uVar21;
              }
              if ((uVar16 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar22 = *(longlong *)(lVar22 + 0x120);
              *(undefined8 *)(lVar22 + lVar17 * 0xc) = uVar3;
              *(undefined4 *)(lVar22 + 8 + lVar17 * 0xc) = (undefined4)local_130;
              lVar22 = *local_148;
              uVar16 = 0;
              if (param_1 < *(int *)(lVar22 + 0x138)) {
                uVar16 = uVar21;
              }
              if ((uVar16 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar22 = *(longlong *)(lVar22 + 0x130);
              *(undefined8 *)(lVar22 + lVar17 * 0xc) = uVar2;
              *(undefined4 *)(lVar22 + 8 + lVar17 * 0xc) = (undefined4)local_128;
            }
          }
          iVar23 = iVar23 + 1;
          lVar22 = local_e0;
        } while (iVar23 < *(int *)(lVar20 + 0x14));
      }
      lVar20 = lVar20 + 0x20;
      uVar19 = (ulonglong)local_120;
    }
  }
  return;
}

// operator() @ 143d0c620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,0,0>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  bool bVar13;
  uchar uVar14;
  uint uVar15;
  TVector<float,3> *pTVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  double dVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar34;
  float fVar35;
  undefined1 auVar33 [16];
  float fVar36;
  undefined1 local_138 [4];
  float local_134;
  longlong *local_130;
  float local_128;
  float fStack_124;
  float local_120;
  uint local_118;
  undefined8 local_114;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined8 local_fc;
  float local_f4;
  double local_f0;
  double local_e8;
  double local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  double local_a8;
  double local_a0;
  double local_98;
  
  auVar12 = ___xmm_000000003f8000003f8000003f800000;
  uVar11 = _UNK_15061cc78;
  uVar10 = _UNK_15061cc74;
  uVar9 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_d8 = (longlong)param_1 * 0x10;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + local_d8) != 0.0) {
    local_c8 = *(longlong **)((longlong)this + 0x18);
    local_118 = *(uint *)(local_c8 + 1);
    uVar17 = (ulonglong)(int)local_118;
    lVar18 = *local_c8;
    lVar21 = uVar17 * 0x20 + lVar18;
    local_130 = this;
    local_d0 = lVar21;
    while( true ) {
      if ((int)local_c8[1] != (int)uVar17) {
        local_138[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_138);
      }
      if (lVar18 == lVar21) break;
      iVar19 = 0;
      if (0 < *(int *)(lVar18 + 0x14)) {
        do {
          if ((*(longlong *)(lVar18 + 8) == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar21 = *(longlong *)(lVar18 + 8);
          uVar20 = *(int *)(lVar18 + 0x10) + iVar19;
          uVar15 = 0;
          if ((int)uVar20 < *(int *)(lVar21 + 0x68)) {
            uVar15 = ~uVar20 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar21 = *(longlong *)(lVar21 + 0x60);
          lVar22 = (longlong)(int)uVar20;
          uVar14 = Chaos::FImplicitObject::GetType(*(FImplicitObject **)(lVar21 + lVar22 * 8));
          if ((uVar14 != '&') && (uVar14 != '\x11')) {
            if ((*(longlong *)(lVar18 + 8) == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar13)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar3 = *(longlong *)(lVar18 + 8);
            uVar20 = *(int *)(lVar18 + 0x10) + iVar19;
            uVar15 = 0;
            if ((int)uVar20 < *(int *)(lVar3 + 0x50)) {
              uVar15 = ~uVar20 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pfVar1 = (float *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar20 * 0x10);
            fVar6 = *pfVar1;
            fVar7 = pfVar1[1];
            fVar36 = pfVar1[2];
            fVar8 = pfVar1[3];
            local_b8 = fVar6;
            fStack_b4 = fVar7;
            fStack_b0 = fVar36;
            fStack_ac = fVar8;
            if ((*(longlong *)(lVar18 + 8) == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar13)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar16 = Chaos::TParticles<float,3>::GetX
                                (*(TParticles<float,3> **)(lVar18 + 8),
                                 *(int *)(lVar18 + 0x10) + iVar19);
            lVar3 = local_d8;
            fVar29 = fVar6 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
            fVar30 = fVar7 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
            fVar31 = fVar36 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
            fVar32 = fVar8 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
            uVar2 = *(undefined8 *)(*(longlong *)local_130[2] + local_d8);
            auVar33._0_4_ = (float)uVar2 - (float)*(undefined8 *)pTVar16;
            auVar33._4_4_ =
                 (float)((ulonglong)uVar2 >> 0x20) -
                 (float)((ulonglong)*(undefined8 *)pTVar16 >> 0x20);
            auVar33._8_4_ =
                 *(float *)(*(longlong *)local_130[2] + 8 + local_d8) -
                 *(float *)&pTVar16->field_0x8;
            auVar33._12_4_ = 0;
            auVar33 = insertps(auVar33,auVar33,8);
            fVar25 = auVar33._0_4_;
            fVar34 = auVar33._4_4_;
            fVar35 = auVar33._8_4_;
            fVar26 = fVar34 * fVar29 - fVar30 * fVar25;
            fVar27 = fVar35 * fVar30 - fVar31 * fVar34;
            fVar28 = fVar25 * fVar31 - fVar29 * fVar35;
            fVar27 = fVar27 + fVar27;
            fVar28 = fVar28 + fVar28;
            fVar26 = fVar26 + fVar26;
            auVar33 = blendps(auVar12,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
            auVar24 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar33);
            fVar25 = (float)(~-(uint)((float)(uVar9 & auVar33._0_4_) <=
                                     GlobalVectorConstants::SmallNumber.m128_f32[0]) & auVar24._0_4_
                            ) * (fVar32 * fVar27 + fVar25 + (fVar26 * fVar30 - fVar28 * fVar31));
            fVar31 = (float)(~-(uint)((float)(uVar10 & auVar33._4_4_) <=
                                     GlobalVectorConstants::SmallNumber.m128_f32[1]) & auVar24._4_4_
                            ) * (fVar32 * fVar28 + fVar34 + (fVar27 * fVar31 - fVar26 * fVar29));
            local_114 = CONCAT44(fVar31,fVar25);
            local_10c = (float)(~-(uint)((float)(uVar11 & auVar33._8_4_) <=
                                        GlobalVectorConstants::SmallNumber.m128_f32[2]) &
                               auVar24._8_4_) *
                        (fVar32 * fVar26 + fVar35 + (fVar28 * fVar29 - fVar27 * fVar30));
            local_f0 = (double)fVar25;
            local_e8 = (double)fVar31;
            local_e0 = (double)local_10c;
            plVar4 = *(longlong **)(lVar21 + lVar22 * 8);
            dVar23 = (double)(**(code **)(*plVar4 + 0x80))(plVar4,&local_f0,&local_a8);
            local_128 = (float)local_a8;
            local_120 = (float)local_98;
            fStack_124 = (float)local_a0;
            local_134 = (*(float *)(*local_130 + 0xc) + *(float *)(*local_130 + 8)) - (float)dVar23;
            if (0.0 < local_134) {
              if (uVar14 == '\x10') {
                lVar21 = *(longlong *)(lVar21 + lVar22 * 8);
                if ((*(char *)(lVar21 + 0x18) != '\x10') &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("T_DERIVED::StaticType() == Type",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                        ,0xc2,L""), bVar13)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (*(char *)(lVar21 + 0x50) != '\0') {
                  local_108 = (float)local_f0;
                  local_104 = (float)local_e8;
                  local_100 = (float)local_e0;
                  Chaos::Softs::Private::ReflectOneSidedCollision
                            ((TVector<float,3> *)&local_108,(TVector<float,3> *)(lVar21 + 0x38),
                             (TVector<float,3> *)(lVar21 + 0x20),&local_134,
                             (TVector<float,3> *)&local_128);
                }
              }
              fVar27 = local_128 * auVar12._0_4_;
              fVar28 = fStack_124 * auVar12._4_4_;
              fVar29 = local_120 * auVar12._8_4_;
              lVar21 = *(longlong *)local_130[2];
              fVar25 = fVar28 * fVar6 - fVar7 * fVar27;
              fVar31 = fVar29 * fVar7 - fVar36 * fVar28;
              fVar26 = fVar27 * fVar36 - fVar6 * fVar29;
              fVar31 = fVar31 + fVar31;
              fVar26 = fVar26 + fVar26;
              fVar25 = fVar25 + fVar25;
              fVar27 = fVar8 * fVar31 + fVar27 + (fVar25 * fVar7 - fVar36 * fVar26);
              fVar36 = fVar8 * fVar26 + fVar28 + (fVar31 * fVar36 - fVar6 * fVar25);
              local_f4 = fVar8 * fVar25 + fVar29 + (fVar26 * fVar6 - fVar7 * fVar31);
              local_fc = CONCAT44(fVar36,fVar27);
              *(float *)(lVar21 + 8 + lVar3) = local_f4 * local_134 + *(float *)(lVar21 + 8 + lVar3)
              ;
              *(float *)(lVar21 + 4 + lVar3) = fVar36 * local_134 + *(float *)(lVar21 + 4 + lVar3);
              *(float *)(lVar21 + lVar3) = fVar27 * local_134 + *(float *)(lVar21 + lVar3);
            }
          }
          iVar19 = iVar19 + 1;
          lVar21 = local_d0;
        } while (iVar19 < *(int *)(lVar18 + 0x14));
      }
      lVar18 = lVar18 + 0x20;
      uVar17 = (ulonglong)local_118;
    }
  }
  return;
}

// operator() @ 143d0fe90

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternalISPC'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  FSolverCollisionParticles *pFVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  code *pcVar22;
  TVector<float,3> *pTVar23;
  TVector<float,3> *pTVar24;
  TVector<float,3> *pTVar25;
  bool bVar26;
  ulonglong uVar27;
  TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *this_00;
  TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *pTVar28;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_f8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_e8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_d8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_c8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_b8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_a8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_98;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_88 [4];
  
  local_res20 = Chaos_SoftBodyCollision_ISPC_ParallelBatchSize * param_1;
  local_res18 = local_res20 + Chaos_SoftBodyCollision_ISPC_ParallelBatchSize;
  if (*(int *)(*(longlong *)((longlong)this + 8) + 0x14) <
      local_res20 + Chaos_SoftBodyCollision_ISPC_ParallelBatchSize) {
    local_res18 = *(int *)(*(longlong *)((longlong)this + 8) + 0x14);
  }
  plVar11 = *(longlong **)((longlong)this + 0x18);
  uVar5 = *(uint *)(plVar11 + 1);
  uVar27 = (ulonglong)(int)uVar5;
  this_00 = (TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *)*plVar11;
  pTVar28 = this_00 + uVar27;
  while( true ) {
    if ((int)plVar11[1] != (int)uVar27) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == pTVar28) break;
    iVar6 = this_00->RangeSize;
    if (*(char *)((longlong)this + 0x21) == '\0') {
      if (*(char *)((longlong)this + 0x20) == '\0') {
        if (this_00->Particles == (FSolverCollisionParticles *)0x0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        pFVar12 = this_00->Particles;
        if ((this_00->Offset < 0) ||
           ((int)pFVar12->_padding_ < this_00->Offset + this_00->RangeSize)) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x4b,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        iVar7 = this_00->Offset;
        lVar13 = pFVar12->_padding_;
        if (this_00->RangeSize < 0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        fVar2 = *(float *)(*(longlong *)this + 0xc);
        fVar3 = *(float *)(*(longlong *)this + 8);
        if (this_00->Particles == (FSolverCollisionParticles *)0x0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        pFVar12 = this_00->Particles;
        if ((this_00->Offset < 0) ||
           ((int)pFVar12->_padding_ < this_00->Offset + this_00->RangeSize)) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x4b,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        iVar8 = this_00->Offset;
        lVar14 = pFVar12->_padding_;
        if (this_00->RangeSize < 0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        if (this_00->Particles == (FSolverCollisionParticles *)0x0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
        GetConstArrayView<Chaos::TVector<float,3>_>
                  (this_00,local_88,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   &this_00->Particles->_padding_);
        pTVar23 = local_88[0].DataPtr;
        lVar15 = *(longlong *)((longlong)this + 8);
        if (*(longlong *)(lVar15 + 8) == 0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x57,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        lVar16 = *(longlong *)(lVar15 + 8);
        if ((*(int *)(lVar15 + 0x10) < 0) ||
           (*(int *)(lVar16 + 0x30) < *(int *)(lVar15 + 0x10) + *(int *)(lVar15 + 0x14))) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x52,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        iVar9 = *(int *)(lVar15 + 0x10);
        lVar16 = *(longlong *)(lVar16 + 0x28);
        if (*(int *)(lVar15 + 0x14) < 0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        lVar15 = *(longlong *)((longlong)this + 8);
        if (*(longlong *)(lVar15 + 8) == 0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x57,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        lVar17 = *(longlong *)(lVar15 + 8);
        if ((*(int *)(lVar15 + 0x10) < 0) ||
           (*(int *)(lVar17 + 0xb0) < *(int *)(lVar15 + 0x10) + *(int *)(lVar15 + 0x14))) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x52,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        iVar10 = *(int *)(lVar15 + 0x10);
        lVar17 = *(longlong *)(lVar17 + 0xa8);
        if (*(int *)(lVar15 + 0x14) < 0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        ApplyPerParticleSimpleCollisionNoFriction
                  ((longlong)iVar10 * 0x10 + lVar17,lVar16 + (longlong)iVar9 * 0xc,pTVar23,
                   (longlong)iVar8 * 0x10 + lVar14,fVar2 + fVar3,this_00,
                   lVar13 + (longlong)iVar7 * 8,0x20,0x18,0x10,iVar6,local_res20,local_res18);
      }
      else {
        uVar1 = *(undefined4 *)((longlong)this + 0x10);
        if (this_00->Particles == (FSolverCollisionParticles *)0x0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        pFVar12 = this_00->Particles;
        if ((this_00->Offset < 0) ||
           ((int)pFVar12->_padding_ < this_00->Offset + this_00->RangeSize)) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x4b,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        iVar7 = this_00->Offset;
        lVar13 = pFVar12->_padding_;
        if (this_00->RangeSize < 0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        lVar14 = *(longlong *)this;
        fVar2 = *(float *)(lVar14 + 0xc);
        fVar3 = *(float *)(lVar14 + 8);
        uVar4 = *(undefined4 *)(lVar14 + 0x10);
        if (this_00->Particles == (FSolverCollisionParticles *)0x0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        pFVar12 = this_00->Particles;
        if ((this_00->Offset < 0) ||
           ((int)pFVar12->_padding_ < this_00->Offset + this_00->RangeSize)) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x4b,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        iVar8 = this_00->Offset;
        lVar14 = pFVar12->_padding_;
        if (this_00->RangeSize < 0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        if (this_00->Particles == (FSolverCollisionParticles *)0x0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
        GetConstArrayView<Chaos::TVector<float,3>_>
                  (this_00,&local_b8,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   &(this_00->Particles->MW).field_0x8);
        pTVar23 = local_b8.DataPtr;
        if (this_00->Particles == (FSolverCollisionParticles *)0x0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
        GetConstArrayView<Chaos::TVector<float,3>_>
                  (this_00,&local_a8,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   &this_00->Particles->_padding_);
        pTVar24 = local_a8.DataPtr;
        if (this_00->Particles == (FSolverCollisionParticles *)0x0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
        GetConstArrayView<Chaos::TVector<float,3>_>
                  (this_00,&local_98,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   &(this_00->Particles->MV).field_0x8);
        pTVar25 = local_98.DataPtr;
        lVar15 = *(longlong *)((longlong)this + 8);
        if (*(longlong *)(lVar15 + 8) == 0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x57,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        lVar16 = *(longlong *)(lVar15 + 8);
        if ((*(int *)(lVar15 + 0x10) < 0) ||
           (*(int *)(lVar16 + 0x30) < *(int *)(lVar15 + 0x10) + *(int *)(lVar15 + 0x14))) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x52,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        iVar9 = *(int *)(lVar15 + 0x10);
        lVar16 = *(longlong *)(lVar16 + 0x28);
        if (*(int *)(lVar15 + 0x14) < 0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        lVar15 = *(longlong *)((longlong)this + 8);
        if (*(longlong *)(lVar15 + 8) == 0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x57,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        lVar17 = *(longlong *)(lVar15 + 8);
        if ((*(int *)(lVar15 + 0x10) < 0) ||
           (*(int *)(lVar17 + 0xb0) < *(int *)(lVar15 + 0x10) + *(int *)(lVar15 + 0x14))) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x52,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        iVar10 = *(int *)(lVar15 + 0x10);
        lVar17 = *(longlong *)(lVar17 + 0xa8);
        if (*(int *)(lVar15 + 0x14) < 0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L"");
          if (bVar26) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        ApplyPerParticleSimpleCollisionFastFriction
                  ((longlong)iVar10 * 0x10 + lVar17,lVar16 + (longlong)iVar9 * 0xc,pTVar25,pTVar24,
                   pTVar23,(longlong)iVar8 * 0x10 + lVar14,uVar4,fVar2 + fVar3,this_00,
                   lVar13 + (longlong)iVar7 * 8,0x20,0x18,0x10,uVar1,iVar6,local_res20,local_res18);
      }
    }
    else if (*(char *)((longlong)this + 0x20) == '\0') {
      if (this_00->Particles == (FSolverCollisionParticles *)0x0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      pFVar12 = this_00->Particles;
      if ((this_00->Offset < 0) || ((int)pFVar12->_padding_ < this_00->Offset + this_00->RangeSize))
      {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x4b,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      iVar7 = this_00->Offset;
      lVar13 = pFVar12->_padding_;
      if (this_00->RangeSize < 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      fVar2 = *(float *)(*(longlong *)this + 0xc);
      fVar3 = *(float *)(*(longlong *)this + 8);
      if (this_00->Particles == (FSolverCollisionParticles *)0x0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      pFVar12 = this_00->Particles;
      if ((this_00->Offset < 0) || ((int)pFVar12->_padding_ < this_00->Offset + this_00->RangeSize))
      {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x4b,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      iVar8 = this_00->Offset;
      lVar14 = pFVar12->_padding_;
      if (this_00->RangeSize < 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      if (this_00->Particles == (FSolverCollisionParticles *)0x0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
      GetConstArrayView<Chaos::TVector<float,3>_>
                (this_00,&local_c8,
                 (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 &this_00->Particles->_padding_);
      pTVar23 = local_c8.DataPtr;
      lVar15 = *(longlong *)((longlong)this + 8);
      if (*(longlong *)(lVar15 + 8) == 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x57,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      lVar16 = *(longlong *)(lVar15 + 8);
      if ((*(int *)(lVar15 + 0x10) < 0) ||
         (*(int *)(lVar16 + 0x30) < *(int *)(lVar15 + 0x10) + *(int *)(lVar15 + 0x14))) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x52,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      iVar9 = *(int *)(lVar15 + 0x10);
      lVar16 = *(longlong *)(lVar16 + 0x28);
      if (*(int *)(lVar15 + 0x14) < 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      lVar15 = *(longlong *)this;
      lVar17 = *(longlong *)((longlong)this + 8);
      uVar18 = *(undefined8 *)(lVar15 + 0x130);
      uVar19 = *(undefined8 *)(lVar15 + 0x120);
      uVar20 = *(undefined8 *)(lVar15 + 0x110);
      if (*(longlong *)(lVar17 + 8) == 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x57,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      lVar15 = *(longlong *)(lVar17 + 8);
      if ((*(int *)(lVar17 + 0x10) < 0) ||
         (*(int *)(lVar15 + 0xb0) < *(int *)(lVar17 + 0x10) + *(int *)(lVar17 + 0x14))) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x52,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      iVar10 = *(int *)(lVar17 + 0x10);
      lVar15 = *(longlong *)(lVar15 + 0xa8);
      if (*(int *)(lVar17 + 0x14) < 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      ApplyPerParticleSimpleCollisionNoFrictionAndGeneratePlanarConstraints
                ((longlong)iVar10 * 0x10 + lVar15,uVar20,uVar19,uVar18,
                 lVar16 + (longlong)iVar9 * 0xc,pTVar23,(longlong)iVar8 * 0x10 + lVar14,
                 fVar2 + fVar3,this_00,lVar13 + (longlong)iVar7 * 8,0x20,0x18,0x10,iVar6,local_res20
                 ,local_res18);
    }
    else {
      uVar1 = *(undefined4 *)((longlong)this + 0x10);
      if (this_00->Particles == (FSolverCollisionParticles *)0x0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      pFVar12 = this_00->Particles;
      if ((this_00->Offset < 0) || ((int)pFVar12->_padding_ < this_00->Offset + this_00->RangeSize))
      {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x4b,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      iVar7 = this_00->Offset;
      lVar13 = pFVar12->_padding_;
      if (this_00->RangeSize < 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      lVar14 = *(longlong *)this;
      fVar2 = *(float *)(lVar14 + 0xc);
      fVar3 = *(float *)(lVar14 + 8);
      uVar4 = *(undefined4 *)(lVar14 + 0x10);
      if (this_00->Particles == (FSolverCollisionParticles *)0x0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      pFVar12 = this_00->Particles;
      if ((this_00->Offset < 0) || ((int)pFVar12->_padding_ < this_00->Offset + this_00->RangeSize))
      {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x4b,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      iVar8 = this_00->Offset;
      lVar14 = pFVar12->_padding_;
      if (this_00->RangeSize < 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      if (this_00->Particles == (FSolverCollisionParticles *)0x0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
      GetConstArrayView<Chaos::TVector<float,3>_>
                (this_00,&local_f8,
                 (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 &(this_00->Particles->MW).field_0x8);
      pTVar23 = local_f8.DataPtr;
      if (this_00->Particles == (FSolverCollisionParticles *)0x0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
      GetConstArrayView<Chaos::TVector<float,3>_>
                (this_00,&local_e8,
                 (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 &this_00->Particles->_padding_);
      pTVar24 = local_e8.DataPtr;
      if (this_00->Particles == (FSolverCollisionParticles *)0x0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
      GetConstArrayView<Chaos::TVector<float,3>_>
                (this_00,&local_d8,
                 (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 &(this_00->Particles->MV).field_0x8);
      pTVar25 = local_d8.DataPtr;
      lVar15 = *(longlong *)((longlong)this + 8);
      if (*(longlong *)(lVar15 + 8) == 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x57,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      lVar16 = *(longlong *)(lVar15 + 8);
      if ((*(int *)(lVar15 + 0x10) < 0) ||
         (*(int *)(lVar16 + 0x30) < *(int *)(lVar15 + 0x10) + *(int *)(lVar15 + 0x14))) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x52,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      iVar9 = *(int *)(lVar15 + 0x10);
      lVar16 = *(longlong *)(lVar16 + 0x28);
      if (*(int *)(lVar15 + 0x14) < 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      lVar15 = *(longlong *)this;
      lVar17 = *(longlong *)((longlong)this + 8);
      uVar18 = *(undefined8 *)(lVar15 + 0x140);
      uVar19 = *(undefined8 *)(lVar15 + 0x130);
      uVar20 = *(undefined8 *)(lVar15 + 0x120);
      uVar21 = *(undefined8 *)(lVar15 + 0x110);
      if (*(longlong *)(lVar17 + 8) == 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x57,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      lVar15 = *(longlong *)(lVar17 + 8);
      if ((*(int *)(lVar17 + 0x10) < 0) ||
         (*(int *)(lVar15 + 0xb0) < *(int *)(lVar17 + 0x10) + *(int *)(lVar17 + 0x14))) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x52,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      iVar10 = *(int *)(lVar17 + 0x10);
      lVar15 = *(longlong *)(lVar15 + 0xa8);
      if (*(int *)(lVar17 + 0x14) < 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar26) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      ApplyPerParticleSimpleCollisionFastFrictionAndGeneratePlanarConstraints
                ((longlong)iVar10 * 0x10 + lVar15,uVar21,uVar20,uVar19,uVar18,
                 lVar16 + (longlong)iVar9 * 0xc,pTVar25,pTVar24,pTVar23,
                 (longlong)iVar8 * 0x10 + lVar14,uVar4,fVar2 + fVar3,this_00,
                 lVar13 + (longlong)iVar7 * 8,0x20,0x18,0x10,uVar1,iVar6,local_res20,local_res18);
    }
    this_00 = this_00 + 1;
    uVar27 = (ulonglong)uVar5;
  }
  return;
}

// operator() @ 143d13770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::UpdateLinearSystem'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  uint uVar18;
  TVector<float,3> *pTVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  longlong *plVar25;
  float fVar26;
  double dVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStackY_338 [32];
  undefined1 local_2f7 [7];
  undefined1 local_2f0 [8];
  float local_2e8;
  uint local_2e0;
  int local_2dc;
  undefined8 local_2d8;
  float local_2d0;
  undefined8 local_2cc;
  float local_2c4;
  longlong local_2c0;
  longlong *local_2b8;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float local_294;
  float local_290;
  undefined4 local_28c;
  float local_288;
  float local_284;
  float local_280;
  undefined4 local_27c;
  float local_278;
  float local_274;
  float local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  float local_258;
  float local_254;
  float local_250;
  undefined4 local_24c;
  float local_248;
  float local_244;
  float local_240;
  undefined4 local_23c;
  float local_238;
  float local_234;
  float local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  float local_218;
  undefined8 local_214;
  undefined8 local_20c;
  float local_204;
  undefined8 local_200;
  undefined8 local_1f8;
  float local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  undefined4 local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  undefined4 local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_198;
  float local_194;
  float local_190;
  undefined4 local_18c;
  float local_188;
  float local_184;
  float local_180;
  undefined4 local_17c;
  float local_178;
  float local_174;
  float local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  uVar16 = _UNK_150689648;
  uVar15 = ___xmm_3f800000000000000000000000000000;
  auVar14 = ___xmm_000000003f8000003f8000003f800000;
  uVar13 = __xmm_80000000800000008000000080000000;
  uVar12 = _UNK_15061cc78;
  uVar11 = _UNK_15061cc74;
  uVar10 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_338;
  lVar24 = (longlong)param_1;
  if (*(float *)(**(longlong **)((longlong)this + 0x18) + 0xc + lVar24 * 0x10) != 0.0) {
    local_2b8 = *(longlong **)((longlong)this + 0x20);
    bVar9 = false;
    local_f8 = ___xmm_3f800000000000000000000000000000;
    uStack_f0 = _UNK_150689648;
    local_2f0 = (undefined1  [8])0x0;
    local_2e8 = 0.0;
    local_128 = (undefined1  [8])0x0;
    local_118 = 0;
    local_108 = 0;
    local_120 = 0;
    local_110 = 0;
    local_100 = 0;
    local_2e0 = *(uint *)(local_2b8 + 1);
    uVar20 = (ulonglong)(int)local_2e0;
    lVar21 = *local_2b8;
    local_2c0 = uVar20 * 0x20 + lVar21;
    plVar25 = (longlong *)(lVar21 + 8);
    bVar17 = false;
    fVar26 = __real_3f800000;
    local_2dc = param_1;
    while( true ) {
      lVar3 = local_2c0;
      if ((int)local_2b8[1] != (int)uVar20) {
        local_2f7[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_2f7);
        bVar9 = bVar17;
      }
      iVar23 = local_2dc;
      if (lVar21 == lVar3) break;
      iVar23 = 0;
      if (0 < *(int *)(lVar21 + 0x14)) {
        do {
          bVar9 = bVar17;
          if ((*plVar25 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar3 = *(longlong *)(lVar21 + 8);
          uVar22 = *(int *)(lVar21 + 0x10) + iVar23;
          uVar18 = 0;
          if ((int)uVar22 < *(int *)(lVar3 + 0x50)) {
            uVar18 = ~uVar22 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pfVar1 = (float *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar22 * 0x10);
          fVar6 = *pfVar1;
          fVar7 = pfVar1[1];
          fVar40 = pfVar1[2];
          fVar8 = pfVar1[3];
          local_2a8 = fVar6;
          fStack_2a4 = fVar7;
          fStack_2a0 = fVar40;
          fStack_29c = fVar8;
          if ((*(longlong *)(lVar21 + 8) == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar19 = Chaos::TParticles<float,3>::GetX
                              (*(TParticles<float,3> **)(lVar21 + 8),
                               *(int *)(lVar21 + 0x10) + iVar23);
          fVar34 = fVar6 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
          fVar36 = fVar7 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
          fVar38 = fVar40 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
          fVar39 = fVar8 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
          uVar2 = *(undefined8 *)(**(longlong **)((longlong)this + 0x18) + lVar24 * 0x10);
          auVar33._0_4_ = (float)uVar2 - (float)*(undefined8 *)pTVar19;
          auVar33._4_4_ =
               (float)((ulonglong)uVar2 >> 0x20) -
               (float)((ulonglong)*(undefined8 *)pTVar19 >> 0x20);
          auVar33._8_4_ =
               *(float *)(**(longlong **)((longlong)this + 0x18) + 8 + lVar24 * 0x10) -
               *(float *)&pTVar19->field_0x8;
          auVar33._12_4_ = 0;
          auVar33 = insertps(auVar33,auVar33,8);
          fVar35 = auVar33._0_4_;
          fVar37 = auVar33._4_4_;
          fVar29 = auVar33._8_4_;
          fVar30 = fVar37 * fVar34 - fVar36 * fVar35;
          fVar31 = fVar29 * fVar36 - fVar38 * fVar37;
          fVar32 = fVar35 * fVar38 - fVar34 * fVar29;
          fVar31 = fVar31 + fVar31;
          fVar32 = fVar32 + fVar32;
          fVar30 = fVar30 + fVar30;
          auVar33 = blendps(auVar14,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
          auVar28 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar33);
          fVar35 = (fVar39 * fVar31 + fVar35 + (fVar30 * fVar36 - fVar32 * fVar38)) *
                   (float)(~-(uint)((float)(uVar10 & auVar33._0_4_) <=
                                   GlobalVectorConstants::SmallNumber.m128_f32[0]) & auVar28._0_4_);
          fVar37 = (fVar39 * fVar32 + fVar37 + (fVar31 * fVar38 - fVar30 * fVar34)) *
                   (float)(~-(uint)((float)(uVar11 & auVar33._4_4_) <=
                                   GlobalVectorConstants::SmallNumber.m128_f32[1]) & auVar28._4_4_);
          local_2d0 = (fVar39 * fVar30 + fVar29 + (fVar32 * fVar34 - fVar31 * fVar36)) *
                      (float)(~-(uint)((float)(uVar12 & auVar33._8_4_) <=
                                      GlobalVectorConstants::SmallNumber.m128_f32[2]) &
                             auVar28._8_4_);
          local_2d8 = CONCAT44(fVar37,fVar35);
          local_158 = (double)fVar35;
          local_150 = (double)fVar37;
          local_148 = (double)local_2d0;
          if ((*(longlong *)(lVar21 + 8) == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar3 = *(longlong *)(lVar21 + 8);
          uVar22 = *(int *)(lVar21 + 0x10) + iVar23;
          uVar18 = 0;
          if ((int)uVar22 < *(int *)(lVar3 + 0x68)) {
            uVar18 = ~uVar22 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x60) + (longlong)(int)uVar22 * 8);
          dVar27 = (double)(**(code **)(*plVar4 + 0x80))(plVar4,&local_158,&local_140);
          lVar3 = *(longlong *)this;
          fVar32 = (float)local_140;
          fVar35 = (*(float *)(lVar3 + 0xc) + *(float *)(lVar3 + 8)) - (float)dVar27;
          fVar30 = (float)local_138;
          fVar31 = (float)local_130;
          if (0.0 < fVar35) {
            fVar35 = fVar35 * *(float *)(lVar3 + 0x18);
            bVar9 = true;
            local_218 = *(float *)((longlong)this + 0xc);
            local_28c = 0;
            local_27c = 0;
            local_268 = uVar15;
            uStack_260 = uVar16;
            local_26c = 0;
            fVar37 = fVar30 * fVar6 - fVar7 * fVar32;
            fVar29 = fVar31 * fVar7 - fVar40 * fVar30;
            fVar34 = fVar32 * fVar40 - fVar6 * fVar31;
            fVar29 = fVar29 + fVar29;
            fVar34 = fVar34 + fVar34;
            fVar37 = fVar37 + fVar37;
            local_298 = fVar8 * fVar29 + fVar32 + (fVar37 * fVar7 - fVar34 * fVar40);
            fVar40 = fVar8 * fVar34 + fVar30 + (fVar29 * fVar40 - fVar37 * fVar6);
            local_2c4 = fVar8 * fVar37 + fVar31 + (fVar34 * fVar6 - fVar29 * fVar7);
            local_2cc = CONCAT44(fVar40,local_298);
            local_270 = local_2c4 * local_2c4;
            local_280 = local_2c4 * fVar40;
            local_290 = local_2c4 * local_298;
            local_284 = fVar40 * fVar40;
            local_294 = fVar40 * local_298;
            local_2f0._4_4_ = (float)local_2f0._4_4_ + fVar35 * fVar40;
            local_2f0._0_4_ = (float)local_2f0._0_4_ + fVar35 * local_298;
            local_2e8 = local_2e8 + fVar35 * local_2c4;
            local_298 = local_298 * local_298;
            fVar26 = fVar26 - local_218;
            local_250 = local_290 * fVar26;
            local_258 = fVar26 * local_298;
            local_254 = fVar26 * local_294;
            local_240 = local_280 * fVar26;
            local_170 = (float)(*(uint *)(lVar3 + 0x18) ^ uVar13);
            local_24c = 0;
            local_230 = local_270 * fVar26;
            local_23c = 0;
            local_244 = fVar26 * local_284;
            local_22c = 0;
            local_1d8 = local_218 + local_258;
            local_194 = local_170 * local_254;
            local_20c = 0;
            local_1c4 = local_218 + local_244;
            local_198 = local_170 * local_1d8;
            local_1f8 = 0;
            local_184 = local_170 * local_1c4;
            local_214 = 0;
            local_174 = local_240 * local_170;
            local_200 = 0;
            local_128._4_4_ = (float)local_128._4_4_ + local_194;
            local_128._0_4_ = (float)local_128._0_4_ + local_198;
            local_1b0 = local_218 + local_230;
            local_190 = local_170 * local_250;
            local_1ec = 0;
            local_180 = local_240 * local_170;
            local_1cc = 0;
            local_170 = local_170 * local_1b0;
            local_1bc = 0;
            local_120._0_4_ = (float)local_120 + local_190;
            local_118._4_4_ = local_118._4_4_ + local_184;
            local_118._0_4_ = (float)local_118 + local_194;
            local_228 = uVar15;
            uStack_220 = uVar16;
            local_1e8 = uVar15;
            uStack_1e0 = uVar16;
            local_1a8 = uVar15;
            uStack_1a0 = uVar16;
            local_1ac = 0;
            local_168 = uVar15;
            uStack_160 = uVar16;
            local_18c = 0;
            local_17c = 0;
            local_16c = 0;
            local_110._0_4_ = (float)local_110 + local_180;
            local_108._4_4_ = local_108._4_4_ + local_174;
            local_108._0_4_ = (float)local_108 + local_190;
            local_100._0_4_ = (float)local_100 + local_170;
            fVar26 = __real_3f800000;
            local_288 = local_294;
            local_278 = local_290;
            local_274 = local_280;
            local_248 = local_254;
            local_238 = local_250;
            local_234 = local_240;
            local_204 = local_218;
            local_1f0 = local_218;
            local_1d4 = local_254;
            local_1d0 = local_250;
            local_1c8 = local_254;
            local_1c0 = local_240;
            local_1b8 = local_250;
            local_1b4 = local_240;
            local_188 = local_194;
            local_178 = local_190;
          }
          iVar23 = iVar23 + 1;
          bVar17 = bVar9;
        } while (iVar23 < *(int *)(lVar21 + 0x14));
      }
      lVar21 = lVar21 + 0x20;
      plVar25 = plVar25 + 4;
      uVar20 = (ulonglong)local_2e0;
    }
    if (bVar9) {
      Chaos::Softs::FEvolutionLinearSystem::AddForce
                (*(FEvolutionLinearSystem **)((longlong)this + 0x28),
                 *(FSolverParticlesRange **)((longlong)this + 0x10),(TVector<float,3> *)local_2f0,
                 local_2dc,*(float *)((longlong)this + 8));
      Chaos::Softs::FEvolutionLinearSystem::AddSymmetricForceDerivative
                (*(FEvolutionLinearSystem **)((longlong)this + 0x28),
                 *(FSolverParticlesRange **)((longlong)this + 0x10),(PMatrix<float,3,3> *)local_128,
                 (PMatrix<float,3,3> *)0x0,iVar23,iVar23,*(float *)((longlong)this + 8));
    }
  }
  return;
}

// operator() @ 143d1f070

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,1>'::__l18::<lambda_1>
::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  int *piVar15;
  TVector<float,3> *pTVar16;
  TVector<float,3> *pTVar17;
  TVector<float,3> *pTVar18;
  TVector<float,3> *pTVar19;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float local_88;
  float fStack_84;
  float local_80;
  undefined1 local_78 [16];
  TVector<float,3> local_68 [4];
  
  lVar23 = (longlong)param_1;
  lVar22 = lVar23 * 0x10;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + lVar22) != 0.0) {
    uVar20 = (uint)~param_1 >> 0x1f;
    lVar21 = *(longlong *)this;
    uVar12 = 0;
    if (param_1 < *(int *)(lVar21 + 0x158)) {
      uVar12 = uVar20;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar2 = *(longlong *)this;
    fVar31 = (*(float *)(lVar2 + 0xc) + *(float *)(lVar2 + 8)) -
             *(float *)(*(longlong *)(lVar21 + 0x150) + lVar23 * 4);
    if (0.0 < fVar31) {
      pfVar3 = *(float **)((longlong)this + 0x18);
      uVar12 = 0;
      if (param_1 < *(int *)(lVar2 + 0x168)) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar1 = *pfVar3;
      fVar7 = pfVar3[1];
      fVar8 = pfVar3[2];
      fVar9 = pfVar3[3];
      uVar30 = *(undefined8 *)(*(longlong *)(lVar2 + 0x160) + lVar23 * 0xc);
      fVar27 = (float)uVar30 * pfVar3[8];
      fVar28 = (float)((ulonglong)uVar30 >> 0x20) * pfVar3[9];
      fVar29 = *(float *)(*(longlong *)(lVar2 + 0x160) + 8 + lVar23 * 0xc) * pfVar3[10];
      fVar24 = fVar28 * fVar1 - fVar7 * fVar27;
      fVar25 = fVar29 * fVar7 - fVar8 * fVar28;
      fVar26 = fVar27 * fVar8 - fVar1 * fVar29;
      fVar25 = fVar25 + fVar25;
      fVar26 = fVar26 + fVar26;
      fVar24 = fVar24 + fVar24;
      uVar30._0_4_ = fVar9 * fVar25 + fVar27 + (fVar24 * fVar7 - fVar26 * fVar8);
      uVar30._4_4_ = fVar9 * fVar26 + fVar28 + (fVar25 * fVar8 - fVar24 * fVar1);
      local_80 = fVar9 * fVar24 + fVar29 + (fVar26 * fVar1 - fVar25 * fVar7);
      lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x98);
      _local_88 = uVar30;
      local_78._0_8_ = uVar30;
      local_78._8_4_ = local_80;
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      *(undefined1 *)**(undefined8 **)((longlong)this + 0x48) = 1;
      pFVar4 = *(ForAnyElementType **)(*(longlong *)this + 0x80);
      piVar15 = (int *)((longlong)&pFVar4[1].Data + 4);
      lVar21 = **(longlong **)((longlong)this + 0x10);
      iVar13 = *(int *)&pFVar4[1].Data;
      if (iVar13 == *piVar15) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,pFVar4,piVar15);
      }
      pFVar5 = pFVar4->Data;
      *(int *)&pFVar4[1].Data = iVar13 + 1;
      *(undefined8 *)(pFVar5 + (longlong)iVar13 * 0xc) = *(undefined8 *)(lVar22 + lVar21);
      *(undefined4 *)(pFVar5 + (longlong)iVar13 * 0xc + 8) = *(undefined4 *)(lVar22 + 8 + lVar21);
      pFVar4 = *(ForAnyElementType **)(*(longlong *)this + 0x88);
      piVar15 = (int *)((longlong)&pFVar4[1].Data + 4);
      iVar13 = *(int *)&pFVar4[1].Data;
      if (iVar13 == *piVar15) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,pFVar4,piVar15);
      }
      *(int *)&pFVar4[1].Data = iVar13 + 1;
      pFVar5 = pFVar4->Data;
      *(undefined8 *)(pFVar5 + (longlong)iVar13 * 0xc) = uVar30;
      *(float *)(pFVar5 + (longlong)iVar13 * 0xc + 8) = local_80;
      lVar21 = *(longlong *)this;
      pFVar4 = *(ForAnyElementType **)(lVar21 + 0x90);
      uVar12 = 0;
      if (param_1 < *(int *)(lVar21 + 0x158)) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar13 = *(int *)&pFVar4[1].Data;
      lVar21 = *(longlong *)(lVar21 + 0x150);
      if (iVar13 == *(int *)((longlong)&pFVar4[1].Data + 4)) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,pFVar4,(int *)((longlong)&pFVar4[1].Data + 4));
        *(int *)&pFVar4[1].Data = iVar13 + 1;
        uVar14 = *(undefined4 *)(lVar21 + lVar23 * 4);
      }
      else {
        *(int *)&pFVar4[1].Data = iVar13 + 1;
        uVar14 = *(undefined4 *)(lVar21 + lVar23 * 4);
      }
      *(undefined4 *)(pFVar4->Data + (longlong)iVar13 * 4) = uVar14;
      LeaveCriticalSection(lpCriticalSection);
      lVar21 = **(longlong **)((longlong)this + 0x10);
      *(float *)(lVar21 + lVar22) = local_88 * fVar31 + *(float *)(lVar21 + lVar22);
      *(float *)(lVar21 + 4 + lVar22) = fStack_84 * fVar31 + *(float *)(lVar21 + 4 + lVar22);
      *(float *)(lVar21 + 8 + lVar22) = local_80 * fVar31 + *(float *)(lVar21 + 8 + lVar22);
      lVar21 = *(longlong *)this;
      uVar12 = 0;
      if (param_1 < *(int *)(lVar21 + 0x118)) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined1 *)(lVar23 + *(longlong *)(lVar21 + 0x110)) = 1;
      lVar21 = *(longlong *)this;
      uVar14 = *(undefined4 *)(**(longlong **)((longlong)this + 0x10) + 8 + lVar22);
      uVar30 = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + lVar22);
      uVar12 = 0;
      if (param_1 < *(int *)(lVar21 + 0x128)) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar1 = local_80;
      uVar10 = _local_88;
      lVar21 = *(longlong *)(lVar21 + 0x120);
      *(undefined8 *)(lVar21 + lVar23 * 0xc) = uVar30;
      *(undefined4 *)(lVar21 + 8 + lVar23 * 0xc) = uVar14;
      lVar21 = *(longlong *)this;
      uVar12 = 0;
      if (param_1 < *(int *)(lVar21 + 0x138)) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar21 = *(longlong *)(lVar21 + 0x130);
      *(undefined8 *)(lVar21 + lVar23 * 0xc) = uVar10;
      *(float *)(lVar21 + 8 + lVar23 * 0xc) = fVar1;
      lVar21 = *(longlong *)this;
      uVar12 = 0;
      if (param_1 < *(int *)(lVar21 + 0x178)) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar13 = *(int *)(*(longlong *)(lVar21 + 0x170) + lVar23 * 4);
      if ((iVar13 < 0) ||
         ((*(TArrayView<int_const_,int> **)((longlong)this + 0x38))->ArrayNum <= iVar13)) {
        pTVar16 = *(TVector<float,3> **)((longlong)this + 0x30);
        lVar21 = **(longlong **)((longlong)this + 0x10);
        pTVar19 = (TVector<float,3> *)(**(longlong **)((longlong)this + 8) + lVar23 * 0xc);
        pTVar17 = *(TVector<float,3> **)((longlong)this + 0x20);
        fVar1 = *(float *)(*(longlong *)this + 0x10);
        pTVar18 = *(TVector<float,3> **)((longlong)this + 0x28);
      }
      else {
        piVar15 = TArrayView<int_const_,int>::operator[]
                            (*(TArrayView<int_const_,int> **)((longlong)this + 0x38),iVar13);
        iVar13 = *piVar15;
        pTVar16 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                            ((TArrayView<Chaos::TVector<float,3>_const_,int> *)
                             (*(longlong *)((longlong)this + 0x38) + 0x40),iVar13);
        pTVar17 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                            ((TArrayView<Chaos::TVector<float,3>_const_,int> *)
                             (*(longlong *)((longlong)this + 0x38) + 0x20),iVar13);
        pTVar18 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                            ((TArrayView<Chaos::TVector<float,3>_const_,int> *)
                             (*(longlong *)((longlong)this + 0x38) + 0x10),iVar13);
        lVar21 = **(longlong **)((longlong)this + 0x10);
        pTVar19 = (TVector<float,3> *)(**(longlong **)((longlong)this + 8) + lVar23 * 0xc);
        fVar1 = *(float *)(*(longlong *)this + 0x10);
      }
      Chaos::Softs::Private::ApplyFriction
                ((TVector<float,3> *)(lVar21 + lVar22),pTVar19,(TVector<float,3> *)&local_88,
                 fVar31 * fVar1,*(float *)((longlong)this + 0x40),pTVar18,pTVar17,pTVar16,local_68);
      lVar22 = *(longlong *)this;
      uVar12 = 0;
      if (param_1 < *(int *)(lVar22 + 0x148)) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar22 = *(longlong *)(lVar22 + 0x140);
      *(undefined8 *)(lVar22 + lVar23 * 0xc) = local_68[0]._0_8_;
      *(undefined4 *)(lVar22 + 8 + lVar23 * 0xc) = local_68[0]._8_4_;
    }
  }
  return;
}

// operator() @ 143d1f6f0

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,0>'::__l18::<lambda_1>
::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  ForAnyElementType *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  int *piVar15;
  TVector<float,3> *pTVar16;
  TVector<float,3> *pTVar17;
  TVector<float,3> *pTVar18;
  TVector<float,3> *pTVar19;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float local_88;
  float fStack_84;
  float local_80;
  undefined1 local_78 [16];
  TVector<float,3> local_68 [4];
  
  lVar21 = (longlong)param_1;
  lVar22 = lVar21 * 0x10;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + lVar22) != 0.0) {
    lVar2 = *(longlong *)this;
    uVar20 = (uint)~param_1 >> 0x1f;
    uVar12 = 0;
    if (param_1 < *(int *)(lVar2 + 0x158)) {
      uVar12 = uVar20;
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
    lVar3 = *(longlong *)this;
    fVar30 = (*(float *)(lVar3 + 0xc) + *(float *)(lVar3 + 8)) -
             *(float *)(*(longlong *)(lVar2 + 0x150) + lVar21 * 4);
    if (0.0 < fVar30) {
      pfVar4 = *(float **)((longlong)this + 0x18);
      uVar12 = 0;
      if (param_1 < *(int *)(lVar3 + 0x168)) {
        uVar12 = uVar20;
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
      fVar1 = *pfVar4;
      fVar8 = pfVar4[1];
      fVar9 = pfVar4[2];
      fVar10 = pfVar4[3];
      uVar29 = *(undefined8 *)(*(longlong *)(lVar3 + 0x160) + lVar21 * 0xc);
      fVar26 = (float)uVar29 * pfVar4[8];
      fVar27 = (float)((ulonglong)uVar29 >> 0x20) * pfVar4[9];
      fVar28 = *(float *)(*(longlong *)(lVar3 + 0x160) + 8 + lVar21 * 0xc) * pfVar4[10];
      fVar23 = fVar27 * fVar1 - fVar8 * fVar26;
      fVar24 = fVar28 * fVar8 - fVar9 * fVar27;
      fVar25 = fVar26 * fVar9 - fVar1 * fVar28;
      fVar24 = fVar24 + fVar24;
      fVar25 = fVar25 + fVar25;
      fVar23 = fVar23 + fVar23;
      uVar29._0_4_ = fVar10 * fVar24 + fVar26 + (fVar23 * fVar8 - fVar25 * fVar9);
      uVar29._4_4_ = fVar10 * fVar25 + fVar27 + (fVar24 * fVar9 - fVar23 * fVar1);
      local_80 = fVar10 * fVar23 + fVar28 + (fVar25 * fVar1 - fVar24 * fVar8);
      lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x98);
      _local_88 = uVar29;
      local_78._0_8_ = uVar29;
      local_78._8_4_ = local_80;
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      *(undefined1 *)**(undefined8 **)((longlong)this + 0x48) = 1;
      pFVar5 = *(ForAnyElementType **)(*(longlong *)this + 0x80);
      piVar15 = (int *)((longlong)&pFVar5[1].Data + 4);
      lVar2 = **(longlong **)((longlong)this + 0x10);
      iVar13 = *(int *)&pFVar5[1].Data;
      if (iVar13 == *piVar15) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,pFVar5,piVar15);
      }
      pFVar6 = pFVar5->Data;
      *(int *)&pFVar5[1].Data = iVar13 + 1;
      *(undefined8 *)(pFVar6 + (longlong)iVar13 * 0xc) = *(undefined8 *)(lVar22 + lVar2);
      *(undefined4 *)(pFVar6 + (longlong)iVar13 * 0xc + 8) = *(undefined4 *)(lVar22 + 8 + lVar2);
      pFVar5 = *(ForAnyElementType **)(*(longlong *)this + 0x88);
      piVar15 = (int *)((longlong)&pFVar5[1].Data + 4);
      iVar13 = *(int *)&pFVar5[1].Data;
      if (iVar13 == *piVar15) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,pFVar5,piVar15);
      }
      *(int *)&pFVar5[1].Data = iVar13 + 1;
      pFVar6 = pFVar5->Data;
      *(undefined8 *)(pFVar6 + (longlong)iVar13 * 0xc) = uVar29;
      *(float *)(pFVar6 + (longlong)iVar13 * 0xc + 8) = local_80;
      lVar2 = *(longlong *)this;
      pFVar5 = *(ForAnyElementType **)(lVar2 + 0x90);
      uVar12 = 0;
      if (param_1 < *(int *)(lVar2 + 0x158)) {
        uVar12 = uVar20;
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
      iVar13 = *(int *)&pFVar5[1].Data;
      lVar2 = *(longlong *)(lVar2 + 0x150);
      if (iVar13 == *(int *)((longlong)&pFVar5[1].Data + 4)) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,pFVar5,(int *)((longlong)&pFVar5[1].Data + 4));
        *(int *)&pFVar5[1].Data = iVar13 + 1;
        uVar14 = *(undefined4 *)(lVar2 + lVar21 * 4);
      }
      else {
        *(int *)&pFVar5[1].Data = iVar13 + 1;
        uVar14 = *(undefined4 *)(lVar2 + lVar21 * 4);
      }
      *(undefined4 *)(pFVar5->Data + (longlong)iVar13 * 4) = uVar14;
      LeaveCriticalSection(lpCriticalSection);
      lVar2 = **(longlong **)((longlong)this + 0x10);
      *(float *)(lVar2 + lVar22) = local_88 * fVar30 + *(float *)(lVar2 + lVar22);
      *(float *)(lVar2 + 4 + lVar22) = fStack_84 * fVar30 + *(float *)(lVar2 + 4 + lVar22);
      *(float *)(lVar2 + 8 + lVar22) = local_80 * fVar30 + *(float *)(lVar2 + 8 + lVar22);
      lVar2 = *(longlong *)this;
      uVar12 = 0;
      if (param_1 < *(int *)(lVar2 + 0x178)) {
        uVar12 = uVar20;
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
      iVar13 = *(int *)(*(longlong *)(lVar2 + 0x170) + lVar21 * 4);
      if ((iVar13 < 0) ||
         ((*(TArrayView<int_const_,int> **)((longlong)this + 0x38))->ArrayNum <= iVar13)) {
        fVar1 = *(float *)(*(longlong *)this + 0x10);
        pTVar19 = (TVector<float,3> *)(**(longlong **)((longlong)this + 8) + lVar21 * 0xc);
        lVar21 = **(longlong **)((longlong)this + 0x10);
        pTVar16 = *(TVector<float,3> **)((longlong)this + 0x30);
        pTVar17 = *(TVector<float,3> **)((longlong)this + 0x20);
        pTVar18 = *(TVector<float,3> **)((longlong)this + 0x28);
      }
      else {
        piVar15 = TArrayView<int_const_,int>::operator[]
                            (*(TArrayView<int_const_,int> **)((longlong)this + 0x38),iVar13);
        iVar13 = *piVar15;
        pTVar16 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                            ((TArrayView<Chaos::TVector<float,3>_const_,int> *)
                             (*(longlong *)((longlong)this + 0x38) + 0x40),iVar13);
        pTVar17 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                            ((TArrayView<Chaos::TVector<float,3>_const_,int> *)
                             (*(longlong *)((longlong)this + 0x38) + 0x20),iVar13);
        pTVar18 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                            ((TArrayView<Chaos::TVector<float,3>_const_,int> *)
                             (*(longlong *)((longlong)this + 0x38) + 0x10),iVar13);
        fVar1 = *(float *)(*(longlong *)this + 0x10);
        pTVar19 = (TVector<float,3> *)(**(longlong **)((longlong)this + 8) + lVar21 * 0xc);
        lVar21 = **(longlong **)((longlong)this + 0x10);
      }
      Chaos::Softs::Private::ApplyFriction
                ((TVector<float,3> *)(lVar21 + lVar22),pTVar19,(TVector<float,3> *)&local_88,
                 fVar30 * fVar1,*(float *)((longlong)this + 0x40),pTVar18,pTVar17,pTVar16,local_68);
    }
  }
  return;
}

// operator() @ 143d1fbe0

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,1>'::__l18::<lambda_1>
::operator()(void *this,int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  bool bVar13;
  uint uVar14;
  int *piVar15;
  TVector<float,3> *pTVar16;
  uint uVar17;
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
  TVector<float,3> *local_res8;
  TVector<float,3> *local_res18;
  undefined1 local_78 [16];
  TVector<float,3> local_68 [4];
  
  lVar19 = (longlong)param_1;
  lVar18 = lVar19 * 0x10;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + lVar18) != 0.0) {
    lVar4 = *(longlong *)this;
    uVar17 = (uint)~param_1 >> 0x1f;
    uVar14 = 0;
    if (param_1 < *(int *)(lVar4 + 0x158)) {
      uVar14 = uVar17;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar5 = *(longlong *)this;
    fVar27 = (*(float *)(lVar5 + 0xc) + *(float *)(lVar5 + 8)) -
             *(float *)(*(longlong *)(lVar4 + 0x150) + lVar19 * 4);
    if (0.0 < fVar27) {
      pfVar6 = *(float **)((longlong)this + 0x18);
      uVar14 = 0;
      if (param_1 < *(int *)(lVar5 + 0x168)) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar1 = *(undefined8 *)(*(longlong *)(lVar5 + 0x160) + lVar19 * 0xc);
      fVar20 = *pfVar6;
      fVar8 = pfVar6[1];
      fVar9 = pfVar6[2];
      fVar10 = pfVar6[3];
      fVar24 = (float)uVar1 * pfVar6[8];
      fVar25 = (float)((ulonglong)uVar1 >> 0x20) * pfVar6[9];
      fVar26 = *(float *)(*(longlong *)(lVar5 + 0x160) + 8 + lVar19 * 0xc) * pfVar6[10];
      lVar4 = **(longlong **)((longlong)this + 0x10);
      fVar21 = fVar25 * fVar20 - fVar8 * fVar24;
      fVar22 = fVar26 * fVar8 - fVar9 * fVar25;
      fVar23 = fVar24 * fVar9 - fVar20 * fVar26;
      fVar22 = fVar22 + fVar22;
      fVar23 = fVar23 + fVar23;
      fVar21 = fVar21 + fVar21;
      local_78._0_4_ = fVar10 * fVar22 + fVar24 + (fVar21 * fVar8 - fVar23 * fVar9);
      local_78._4_4_ = fVar10 * fVar23 + fVar25 + (fVar22 * fVar9 - fVar21 * fVar20);
      local_78._8_4_ = fVar10 * fVar21 + fVar26 + (fVar23 * fVar20 - fVar22 * fVar8);
      *(float *)(lVar4 + lVar18) = local_78._0_4_ * fVar27 + *(float *)(lVar4 + lVar18);
      *(float *)(lVar4 + 4 + lVar18) = local_78._4_4_ * fVar27 + *(float *)(lVar4 + 4 + lVar18);
      *(float *)(lVar4 + 8 + lVar18) =
           (float)local_78._8_4_ * fVar27 + *(float *)(lVar4 + 8 + lVar18);
      lVar4 = *(longlong *)this;
      uVar14 = 0;
      if (param_1 < *(int *)(lVar4 + 0x118)) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined1 *)(lVar19 + *(longlong *)(lVar4 + 0x110)) = 1;
      lVar4 = **(longlong **)((longlong)this + 0x10);
      uVar2 = *(undefined4 *)(lVar4 + 8 + lVar18);
      uVar1 = *(undefined8 *)(lVar4 + lVar18);
      lVar4 = *(longlong *)this;
      uVar14 = 0;
      if (param_1 < *(int *)(lVar4 + 0x128)) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar12 = local_78._8_4_;
      uVar11 = local_78._0_8_;
      lVar4 = *(longlong *)(lVar4 + 0x120);
      *(undefined8 *)(lVar4 + lVar19 * 0xc) = uVar1;
      *(undefined4 *)(lVar4 + 8 + lVar19 * 0xc) = uVar2;
      lVar4 = *(longlong *)this;
      uVar14 = 0;
      if (param_1 < *(int *)(lVar4 + 0x138)) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar4 = *(longlong *)(lVar4 + 0x130);
      *(undefined8 *)(lVar4 + lVar19 * 0xc) = uVar11;
      *(undefined4 *)(lVar4 + 8 + lVar19 * 0xc) = uVar12;
      lVar4 = *(longlong *)this;
      uVar14 = 0;
      if (param_1 < *(int *)(lVar4 + 0x178)) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar3 = *(int *)(*(longlong *)(lVar4 + 0x170) + lVar19 * 4);
      if ((iVar3 < 0) ||
         ((*(TArrayView<int_const_,int> **)((longlong)this + 0x38))->ArrayNum <= iVar3)) {
        local_res18 = *(TVector<float,3> **)((longlong)this + 0x20);
        pTVar16 = *(TVector<float,3> **)((longlong)this + 0x28);
        local_res8 = *(TVector<float,3> **)((longlong)this + 0x30);
        fVar20 = *(float *)(*(longlong *)this + 0x10);
      }
      else {
        piVar15 = TArrayView<int_const_,int>::operator[]
                            (*(TArrayView<int_const_,int> **)((longlong)this + 0x38),iVar3);
        iVar3 = *piVar15;
        local_res8 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                               ((TArrayView<Chaos::TVector<float,3>_const_,int> *)
                                (*(longlong *)((longlong)this + 0x38) + 0x40),iVar3);
        local_res18 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                                ((TArrayView<Chaos::TVector<float,3>_const_,int> *)
                                 (*(longlong *)((longlong)this + 0x38) + 0x20),iVar3);
        pTVar16 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                            ((TArrayView<Chaos::TVector<float,3>_const_,int> *)
                             (*(longlong *)((longlong)this + 0x38) + 0x10),iVar3);
        fVar20 = *(float *)(*(longlong *)this + 0x10);
      }
      Chaos::Softs::Private::ApplyFriction
                ((TVector<float,3> *)(**(longlong **)((longlong)this + 0x10) + lVar18),
                 (TVector<float,3> *)(**(longlong **)((longlong)this + 8) + lVar19 * 0xc),
                 (TVector<float,3> *)local_78,fVar27 * fVar20,*(float *)((longlong)this + 0x40),
                 pTVar16,local_res18,local_res8,local_68);
      lVar18 = *(longlong *)this;
      uVar14 = 0;
      if (param_1 < *(int *)(lVar18 + 0x148)) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar18 = *(longlong *)(lVar18 + 0x140);
      *(undefined8 *)(lVar18 + lVar19 * 0xc) = local_68[0]._0_8_;
      *(undefined4 *)(lVar18 + 8 + lVar19 * 0xc) = local_68[0]._8_4_;
    }
  }
  return;
}

// operator() @ 143d20140

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,0>'::__l18::<lambda_1>
::operator()(void *this,int param_1)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  int *piVar13;
  TVector<float,3> *pTVar14;
  TVector<float,3> *pTVar15;
  TVector<float,3> *pTVar16;
  TVector<float,3> *pTVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 local_68 [16];
  TVector<float,3> local_58 [4];
  
  lVar18 = (longlong)param_1;
  lVar20 = lVar18 * 0x10;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + lVar20) != 0.0) {
    uVar19 = (uint)~param_1 >> 0x1f;
    lVar4 = *(longlong *)this;
    uVar12 = 0;
    if (param_1 < *(int *)(lVar4 + 0x158)) {
      uVar12 = uVar19;
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
    lVar5 = *(longlong *)this;
    fVar27 = (*(float *)(lVar5 + 0xc) + *(float *)(lVar5 + 8)) -
             *(float *)(*(longlong *)(lVar4 + 0x150) + lVar18 * 4);
    if (0.0 < fVar27) {
      pfVar6 = *(float **)((longlong)this + 0x18);
      uVar12 = 0;
      if (param_1 < *(int *)(lVar5 + 0x168)) {
        uVar12 = uVar19;
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
      uVar2 = *(undefined8 *)(*(longlong *)(lVar5 + 0x160) + lVar18 * 0xc);
      fVar1 = *pfVar6;
      fVar8 = pfVar6[1];
      fVar9 = pfVar6[2];
      fVar10 = pfVar6[3];
      fVar24 = (float)uVar2 * pfVar6[8];
      fVar25 = (float)((ulonglong)uVar2 >> 0x20) * pfVar6[9];
      fVar26 = *(float *)(*(longlong *)(lVar5 + 0x160) + 8 + lVar18 * 0xc) * pfVar6[10];
      lVar4 = **(longlong **)((longlong)this + 0x10);
      fVar21 = fVar25 * fVar1 - fVar8 * fVar24;
      fVar22 = fVar26 * fVar8 - fVar9 * fVar25;
      fVar23 = fVar24 * fVar9 - fVar1 * fVar26;
      fVar22 = fVar22 + fVar22;
      fVar23 = fVar23 + fVar23;
      fVar21 = fVar21 + fVar21;
      local_68._0_4_ = fVar10 * fVar22 + fVar24 + (fVar21 * fVar8 - fVar23 * fVar9);
      local_68._4_4_ = fVar10 * fVar23 + fVar25 + (fVar22 * fVar9 - fVar21 * fVar1);
      local_68._8_4_ = fVar10 * fVar21 + fVar26 + (fVar23 * fVar1 - fVar22 * fVar8);
      *(float *)(lVar4 + lVar20) = local_68._0_4_ * fVar27 + *(float *)(lVar4 + lVar20);
      *(float *)(lVar4 + 4 + lVar20) = local_68._4_4_ * fVar27 + *(float *)(lVar4 + 4 + lVar20);
      *(float *)(lVar4 + 8 + lVar20) =
           (float)local_68._8_4_ * fVar27 + *(float *)(lVar4 + 8 + lVar20);
      lVar4 = *(longlong *)this;
      uVar12 = 0;
      if (param_1 < *(int *)(lVar4 + 0x178)) {
        uVar12 = uVar19;
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
      iVar3 = *(int *)(*(longlong *)(lVar4 + 0x170) + lVar18 * 4);
      if ((iVar3 < 0) ||
         ((*(TArrayView<int_const_,int> **)((longlong)this + 0x38))->ArrayNum <= iVar3)) {
        fVar1 = *(float *)(*(longlong *)this + 0x10);
        pTVar17 = (TVector<float,3> *)(**(longlong **)((longlong)this + 8) + lVar18 * 0xc);
        lVar18 = **(longlong **)((longlong)this + 0x10);
        pTVar14 = *(TVector<float,3> **)((longlong)this + 0x30);
        pTVar15 = *(TVector<float,3> **)((longlong)this + 0x20);
        pTVar16 = *(TVector<float,3> **)((longlong)this + 0x28);
      }
      else {
        piVar13 = TArrayView<int_const_,int>::operator[]
                            (*(TArrayView<int_const_,int> **)((longlong)this + 0x38),iVar3);
        iVar3 = *piVar13;
        pTVar14 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                            ((TArrayView<Chaos::TVector<float,3>_const_,int> *)
                             (*(longlong *)((longlong)this + 0x38) + 0x40),iVar3);
        pTVar15 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                            ((TArrayView<Chaos::TVector<float,3>_const_,int> *)
                             (*(longlong *)((longlong)this + 0x38) + 0x20),iVar3);
        pTVar16 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                            ((TArrayView<Chaos::TVector<float,3>_const_,int> *)
                             (*(longlong *)((longlong)this + 0x38) + 0x10),iVar3);
        fVar1 = *(float *)(*(longlong *)this + 0x10);
        pTVar17 = (TVector<float,3> *)(**(longlong **)((longlong)this + 8) + lVar18 * 0xc);
        lVar18 = **(longlong **)((longlong)this + 0x10);
      }
      Chaos::Softs::Private::ApplyFriction
                ((TVector<float,3> *)(lVar18 + lVar20),pTVar17,(TVector<float,3> *)local_68,
                 fVar27 * fVar1,*(float *)((longlong)this + 0x40),pTVar16,pTVar15,pTVar14,local_58);
    }
  }
  return;
}

// operator() @ 143d21820

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,0,1>'::__l15::<lambda_1>
::operator()(void *this,int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  ForAnyElementType *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar25;
  float fVar26;
  float fVar24;
  
  lVar16 = (longlong)param_1;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + lVar16 * 0x10) != 0.0) {
    uVar15 = (uint)~param_1 >> 0x1f;
    lVar3 = *(longlong *)this;
    uVar12 = 0;
    if (param_1 < *(int *)(lVar3 + 0x158)) {
      uVar12 = uVar15;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar4 = *(longlong *)this;
    fVar26 = (*(float *)(lVar4 + 0xc) + *(float *)(lVar4 + 8)) -
             *(float *)(*(longlong *)(lVar3 + 0x150) + lVar16 * 4);
    if (0.0 < fVar26) {
      pfVar5 = *(float **)((longlong)this + 0x18);
      uVar12 = 0;
      if (param_1 < *(int *)(lVar4 + 0x168)) {
        uVar12 = uVar15;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar25 = *pfVar5;
      fVar9 = pfVar5[1];
      fVar24 = pfVar5[2];
      fVar10 = pfVar5[3];
      uVar23 = *(undefined8 *)(*(longlong *)(lVar4 + 0x160) + lVar16 * 0xc);
      fVar20 = (float)uVar23 * pfVar5[8];
      fVar21 = (float)((ulonglong)uVar23 >> 0x20) * pfVar5[9];
      fVar22 = *(float *)(*(longlong *)(lVar4 + 0x160) + 8 + lVar16 * 0xc) * pfVar5[10];
      fVar17 = fVar21 * fVar25 - fVar9 * fVar20;
      fVar18 = fVar22 * fVar9 - fVar24 * fVar21;
      fVar19 = fVar20 * fVar24 - fVar25 * fVar22;
      fVar18 = fVar18 + fVar18;
      fVar19 = fVar19 + fVar19;
      fVar17 = fVar17 + fVar17;
      fVar20 = fVar10 * fVar18 + fVar20 + (fVar17 * fVar9 - fVar19 * fVar24);
      fVar24 = fVar10 * fVar19 + fVar21 + (fVar18 * fVar24 - fVar17 * fVar25);
      uVar23 = CONCAT44(fVar24,fVar20);
      fVar25 = fVar10 * fVar17 + fVar22 + (fVar19 * fVar25 - fVar18 * fVar9);
      lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x98);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      *(undefined1 *)**(undefined8 **)((longlong)this + 0x20) = 1;
      pFVar6 = *(ForAnyElementType **)(*(longlong *)this + 0x80);
      piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
      lVar3 = **(longlong **)((longlong)this + 0x10);
      iVar13 = *(int *)&pFVar6[1].Data;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,pFVar6,piVar1);
      }
      pFVar7 = pFVar6->Data;
      *(int *)&pFVar6[1].Data = iVar13 + 1;
      *(undefined8 *)(pFVar7 + (longlong)iVar13 * 0xc) = *(undefined8 *)(lVar3 + lVar16 * 0x10);
      *(undefined4 *)(pFVar7 + (longlong)iVar13 * 0xc + 8) =
           *(undefined4 *)(lVar3 + 8 + lVar16 * 0x10);
      pFVar6 = *(ForAnyElementType **)(*(longlong *)this + 0x88);
      piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
      iVar13 = *(int *)&pFVar6[1].Data;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,pFVar6,piVar1);
      }
      *(int *)&pFVar6[1].Data = iVar13 + 1;
      pFVar7 = pFVar6->Data;
      *(undefined8 *)(pFVar7 + (longlong)iVar13 * 0xc) = uVar23;
      *(float *)(pFVar7 + (longlong)iVar13 * 0xc + 8) = fVar25;
      lVar3 = *(longlong *)this;
      pFVar6 = *(ForAnyElementType **)(lVar3 + 0x90);
      uVar12 = 0;
      if (param_1 < *(int *)(lVar3 + 0x158)) {
        uVar12 = uVar15;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar13 = *(int *)&pFVar6[1].Data;
      lVar3 = *(longlong *)(lVar3 + 0x150);
      if (iVar13 == *(int *)((longlong)&pFVar6[1].Data + 4)) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,pFVar6,(int *)((longlong)&pFVar6[1].Data + 4));
        *(int *)&pFVar6[1].Data = iVar13 + 1;
        uVar14 = *(undefined4 *)(lVar3 + lVar16 * 4);
      }
      else {
        *(int *)&pFVar6[1].Data = iVar13 + 1;
        uVar14 = *(undefined4 *)(lVar3 + lVar16 * 4);
      }
      *(undefined4 *)(pFVar6->Data + (longlong)iVar13 * 4) = uVar14;
      LeaveCriticalSection(lpCriticalSection);
      lVar3 = **(longlong **)((longlong)this + 0x10);
      *(float *)(lVar3 + lVar16 * 0x10) = fVar20 * fVar26 + *(float *)(lVar3 + lVar16 * 0x10);
      *(float *)(lVar3 + 4 + lVar16 * 0x10) =
           fVar24 * fVar26 + *(float *)(lVar3 + 4 + lVar16 * 0x10);
      *(float *)(lVar3 + 8 + lVar16 * 0x10) =
           fVar25 * fVar26 + *(float *)(lVar3 + 8 + lVar16 * 0x10);
      lVar3 = *(longlong *)this;
      uVar12 = 0;
      if (param_1 < *(int *)(lVar3 + 0x118)) {
        uVar12 = uVar15;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined1 *)(lVar16 + *(longlong *)(lVar3 + 0x110)) = 1;
      lVar3 = *(longlong *)this;
      uVar2 = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + lVar16 * 0x10);
      uVar14 = *(undefined4 *)(**(longlong **)((longlong)this + 0x10) + 8 + lVar16 * 0x10);
      uVar12 = 0;
      if (param_1 < *(int *)(lVar3 + 0x128)) {
        uVar12 = uVar15;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar3 = *(longlong *)(lVar3 + 0x120);
      *(undefined8 *)(lVar3 + lVar16 * 0xc) = uVar2;
      *(undefined4 *)(lVar3 + 8 + lVar16 * 0xc) = uVar14;
      lVar3 = *(longlong *)this;
      uVar12 = 0;
      if (param_1 < *(int *)(lVar3 + 0x138)) {
        uVar12 = uVar15;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar3 = *(longlong *)(lVar3 + 0x130);
      *(undefined8 *)(lVar3 + lVar16 * 0xc) = uVar23;
      *(float *)(lVar3 + 8 + lVar16 * 0xc) = fVar25;
    }
  }
  return;
}

// operator() @ 143d21cf0

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,0,0>'::__l15::<lambda_1>
::operator()(void *this,int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  ForAnyElementType *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  lVar15 = (longlong)param_1;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + lVar15 * 0x10) != 0.0) {
    uVar14 = (uint)~param_1 >> 0x1f;
    lVar3 = *(longlong *)this;
    uVar12 = 0;
    if (param_1 < *(int *)(lVar3 + 0x158)) {
      uVar12 = uVar14;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar4 = *(longlong *)this;
    fVar24 = (*(float *)(lVar4 + 0xc) + *(float *)(lVar4 + 8)) -
             *(float *)(*(longlong *)(lVar3 + 0x150) + lVar15 * 4);
    if (0.0 < fVar24) {
      pfVar5 = *(float **)((longlong)this + 0x18);
      uVar12 = 0;
      if (param_1 < *(int *)(lVar4 + 0x168)) {
        uVar12 = uVar14;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar23 = *pfVar5;
      fVar9 = pfVar5[1];
      fVar22 = pfVar5[2];
      fVar10 = pfVar5[3];
      uVar2 = *(undefined8 *)(*(longlong *)(lVar4 + 0x160) + lVar15 * 0xc);
      fVar19 = (float)uVar2 * pfVar5[8];
      fVar20 = (float)((ulonglong)uVar2 >> 0x20) * pfVar5[9];
      fVar21 = *(float *)(*(longlong *)(lVar4 + 0x160) + 8 + lVar15 * 0xc) * pfVar5[10];
      fVar16 = fVar20 * fVar23 - fVar9 * fVar19;
      fVar17 = fVar21 * fVar9 - fVar22 * fVar20;
      fVar18 = fVar19 * fVar22 - fVar23 * fVar21;
      fVar17 = fVar17 + fVar17;
      fVar18 = fVar18 + fVar18;
      fVar16 = fVar16 + fVar16;
      fVar19 = fVar10 * fVar17 + fVar19 + (fVar16 * fVar9 - fVar18 * fVar22);
      fVar22 = fVar10 * fVar18 + fVar20 + (fVar17 * fVar22 - fVar16 * fVar23);
      fVar23 = fVar10 * fVar16 + fVar21 + (fVar18 * fVar23 - fVar17 * fVar9);
      lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x98);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      *(undefined1 *)**(undefined8 **)((longlong)this + 0x20) = 1;
      pFVar6 = *(ForAnyElementType **)(*(longlong *)this + 0x80);
      piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
      lVar3 = **(longlong **)((longlong)this + 0x10);
      iVar13 = *(int *)&pFVar6[1].Data;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,pFVar6,piVar1);
      }
      pFVar7 = pFVar6->Data;
      *(int *)&pFVar6[1].Data = iVar13 + 1;
      *(undefined8 *)(pFVar7 + (longlong)iVar13 * 0xc) = *(undefined8 *)(lVar3 + lVar15 * 0x10);
      *(undefined4 *)(pFVar7 + (longlong)iVar13 * 0xc + 8) =
           *(undefined4 *)(lVar3 + 8 + lVar15 * 0x10);
      pFVar6 = *(ForAnyElementType **)(*(longlong *)this + 0x88);
      piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
      iVar13 = *(int *)&pFVar6[1].Data;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,pFVar6,piVar1);
      }
      *(int *)&pFVar6[1].Data = iVar13 + 1;
      pFVar7 = pFVar6->Data;
      *(ulonglong *)(pFVar7 + (longlong)iVar13 * 0xc) = CONCAT44(fVar22,fVar19);
      *(float *)(pFVar7 + (longlong)iVar13 * 0xc + 8) = fVar23;
      lVar3 = *(longlong *)this;
      pFVar6 = *(ForAnyElementType **)(lVar3 + 0x90);
      uVar12 = 0;
      if (param_1 < *(int *)(lVar3 + 0x158)) {
        uVar12 = uVar14;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar13 = *(int *)&pFVar6[1].Data;
      piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
      lVar3 = *(longlong *)(lVar3 + 0x150);
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,pFVar6,piVar1);
        *(int *)&pFVar6[1].Data = iVar13 + 1;
      }
      else {
        *(int *)&pFVar6[1].Data = iVar13 + 1;
      }
      *(undefined4 *)(pFVar6->Data + (longlong)iVar13 * 4) = *(undefined4 *)(lVar3 + lVar15 * 4);
      LeaveCriticalSection(lpCriticalSection);
      lVar3 = **(longlong **)((longlong)this + 0x10);
      *(float *)(lVar3 + lVar15 * 0x10) = fVar19 * fVar24 + *(float *)(lVar3 + lVar15 * 0x10);
      *(float *)(lVar3 + 4 + lVar15 * 0x10) =
           fVar22 * fVar24 + *(float *)(lVar3 + 4 + lVar15 * 0x10);
      *(float *)(lVar3 + 8 + lVar15 * 0x10) =
           fVar23 * fVar24 + *(float *)(lVar3 + 8 + lVar15 * 0x10);
    }
  }
  return;
}

// operator() @ 143d22080

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,0,1>'::__l15::<lambda_1>
::operator()(void *this,int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  lVar11 = (longlong)param_1;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + lVar11 * 0x10) != 0.0) {
    lVar3 = *(longlong *)this;
    uVar12 = (uint)~param_1 >> 0x1f;
    uVar10 = 0;
    if (param_1 < *(int *)(lVar3 + 0x158)) {
      uVar10 = uVar12;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar4 = *(longlong *)this;
    fVar21 = (*(float *)(lVar4 + 0xc) + *(float *)(lVar4 + 8)) -
             *(float *)(*(longlong *)(lVar3 + 0x150) + lVar11 * 4);
    if (0.0 < fVar21) {
      pfVar5 = *(float **)((longlong)this + 0x18);
      uVar10 = 0;
      if (param_1 < *(int *)(lVar4 + 0x168)) {
        uVar10 = uVar12;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar1 = *(undefined8 *)(*(longlong *)(lVar4 + 0x160) + lVar11 * 0xc);
      fVar20 = *pfVar5;
      fVar7 = pfVar5[1];
      fVar19 = pfVar5[2];
      fVar8 = pfVar5[3];
      fVar16 = (float)uVar1 * pfVar5[8];
      fVar17 = (float)((ulonglong)uVar1 >> 0x20) * pfVar5[9];
      fVar18 = *(float *)(*(longlong *)(lVar4 + 0x160) + 8 + lVar11 * 0xc) * pfVar5[10];
      lVar3 = **(longlong **)((longlong)this + 0x10);
      fVar13 = fVar17 * fVar20 - fVar7 * fVar16;
      fVar14 = fVar18 * fVar7 - fVar19 * fVar17;
      fVar15 = fVar16 * fVar19 - fVar20 * fVar18;
      fVar14 = fVar14 + fVar14;
      fVar15 = fVar15 + fVar15;
      fVar13 = fVar13 + fVar13;
      fVar16 = fVar8 * fVar14 + fVar16 + (fVar13 * fVar7 - fVar15 * fVar19);
      fVar19 = fVar8 * fVar15 + fVar17 + (fVar14 * fVar19 - fVar13 * fVar20);
      fVar20 = fVar8 * fVar13 + fVar18 + (fVar15 * fVar20 - fVar14 * fVar7);
      *(float *)(lVar3 + 8 + lVar11 * 0x10) =
           fVar20 * fVar21 + *(float *)(lVar3 + 8 + lVar11 * 0x10);
      *(float *)(lVar3 + lVar11 * 0x10) = fVar16 * fVar21 + *(float *)(lVar3 + lVar11 * 0x10);
      *(float *)(lVar3 + 4 + lVar11 * 0x10) =
           fVar19 * fVar21 + *(float *)(lVar3 + 4 + lVar11 * 0x10);
      lVar3 = *(longlong *)this;
      uVar10 = 0;
      if (param_1 < *(int *)(lVar3 + 0x118)) {
        uVar10 = uVar12;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined1 *)(lVar11 + *(longlong *)(lVar3 + 0x110)) = 1;
      uVar1 = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + lVar11 * 0x10);
      uVar2 = *(undefined4 *)(**(longlong **)((longlong)this + 0x10) + 8 + lVar11 * 0x10);
      lVar3 = *(longlong *)this;
      uVar10 = 0;
      if (param_1 < *(int *)(lVar3 + 0x128)) {
        uVar10 = uVar12;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar3 = *(longlong *)(lVar3 + 0x120);
      *(undefined8 *)(lVar3 + lVar11 * 0xc) = uVar1;
      *(undefined4 *)(lVar3 + 8 + lVar11 * 0xc) = uVar2;
      lVar3 = *(longlong *)this;
      uVar10 = 0;
      if (param_1 < *(int *)(lVar3 + 0x138)) {
        uVar10 = uVar12;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar3 = *(longlong *)(lVar3 + 0x130);
      *(ulonglong *)(lVar3 + lVar11 * 0xc) = CONCAT44(fVar19,fVar16);
      *(float *)(lVar3 + 8 + lVar11 * 0xc) = fVar20;
    }
  }
  return;
}

// operator() @ 143d223c0

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,0,0>'::__l15::<lambda_1>
::operator()(void *this,int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar12 = (longlong)param_1;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + lVar12 * 0x10) != 0.0) {
    lVar2 = *(longlong *)this;
    uVar11 = 0;
    if (param_1 < *(int *)(lVar2 + 0x158)) {
      uVar11 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar3 = *(longlong *)this;
    fVar19 = (*(float *)(lVar3 + 0xc) + *(float *)(lVar3 + 8)) -
             *(float *)(*(longlong *)(lVar2 + 0x150) + lVar12 * 4);
    if (0.0 < fVar19) {
      pfVar4 = *(float **)((longlong)this + 0x18);
      uVar11 = 0;
      if (param_1 < *(int *)(lVar3 + 0x168)) {
        uVar11 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar6 = *pfVar4;
      fVar7 = pfVar4[1];
      fVar8 = pfVar4[2];
      fVar9 = pfVar4[3];
      uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + 0x160) + lVar12 * 0xc);
      fVar16 = (float)uVar1 * pfVar4[8];
      fVar17 = (float)((ulonglong)uVar1 >> 0x20) * pfVar4[9];
      fVar18 = *(float *)(*(longlong *)(lVar3 + 0x160) + 8 + lVar12 * 0xc) * pfVar4[10];
      lVar2 = **(longlong **)((longlong)this + 0x10);
      fVar13 = fVar17 * fVar6 - fVar7 * fVar16;
      fVar14 = fVar18 * fVar7 - fVar8 * fVar17;
      fVar15 = fVar16 * fVar8 - fVar6 * fVar18;
      fVar14 = fVar14 + fVar14;
      fVar15 = fVar15 + fVar15;
      fVar13 = fVar13 + fVar13;
      *(float *)(lVar2 + lVar12 * 0x10) =
           (fVar9 * fVar14 + fVar16 + (fVar13 * fVar7 - fVar15 * fVar8)) * fVar19 +
           *(float *)(lVar2 + lVar12 * 0x10);
      *(float *)(lVar2 + 4 + lVar12 * 0x10) =
           (fVar9 * fVar15 + fVar17 + (fVar14 * fVar8 - fVar13 * fVar6)) * fVar19 +
           *(float *)(lVar2 + 4 + lVar12 * 0x10);
      *(float *)(lVar2 + 8 + lVar12 * 0x10) =
           (fVar9 * fVar13 + fVar18 + (fVar15 * fVar6 - fVar14 * fVar7)) * fVar19 +
           *(float *)(lVar2 + 8 + lVar12 * 0x10);
    }
  }
  return;
}

// operator() @ 143d25e40

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,1>'::__l32::<lambda_2>
::operator()(void *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  ForAnyElementType *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float local_88;
  float fStack_84;
  float local_80;
  undefined1 local_78 [16];
  TVector<float,3> local_68 [4];
  
  lVar19 = (longlong)param_1;
  lVar18 = lVar19 * 0x10;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + lVar18) != 0.0) {
    lVar2 = *(longlong *)this;
    uVar17 = (uint)~param_1 >> 0x1f;
    uVar14 = 0;
    if (param_1 < *(int *)(lVar2 + 0x158)) {
      uVar14 = uVar17;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar3 = *(longlong *)this;
    fVar27 = (*(float *)(lVar3 + 0xc) + *(float *)(lVar3 + 8)) -
             *(float *)(*(longlong *)(lVar2 + 0x150) + lVar19 * 4);
    if (0.0 < fVar27) {
      pfVar4 = *(float **)((longlong)this + 0x30);
      uVar14 = 0;
      if (param_1 < *(int *)(lVar3 + 0x168)) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar8 = *pfVar4;
      fVar9 = pfVar4[1];
      fVar10 = pfVar4[2];
      fVar11 = pfVar4[3];
      uVar26 = *(undefined8 *)(*(longlong *)(lVar3 + 0x160) + lVar19 * 0xc);
      fVar23 = (float)uVar26 * pfVar4[8];
      fVar24 = (float)((ulonglong)uVar26 >> 0x20) * pfVar4[9];
      fVar25 = *(float *)(*(longlong *)(lVar3 + 0x160) + 8 + lVar19 * 0xc) * pfVar4[10];
      fVar20 = fVar24 * fVar8 - fVar9 * fVar23;
      fVar21 = fVar25 * fVar9 - fVar10 * fVar24;
      fVar22 = fVar23 * fVar10 - fVar8 * fVar25;
      fVar21 = fVar21 + fVar21;
      fVar22 = fVar22 + fVar22;
      fVar20 = fVar20 + fVar20;
      uVar26._0_4_ = fVar11 * fVar21 + fVar23 + (fVar20 * fVar9 - fVar22 * fVar10);
      uVar26._4_4_ = fVar11 * fVar22 + fVar24 + (fVar21 * fVar10 - fVar20 * fVar8);
      local_80 = fVar11 * fVar20 + fVar25 + (fVar22 * fVar8 - fVar21 * fVar9);
      lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x98);
      _local_88 = uVar26;
      local_78._0_8_ = uVar26;
      local_78._8_4_ = local_80;
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      *(undefined1 *)**(undefined8 **)((longlong)this + 0x40) = 1;
      pFVar5 = *(ForAnyElementType **)(*(longlong *)this + 0x80);
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      lVar2 = **(longlong **)((longlong)this + 0x10);
      iVar15 = *(int *)&pFVar5[1].Data;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,pFVar5,piVar1);
      }
      pFVar6 = pFVar5->Data;
      *(int *)&pFVar5[1].Data = iVar15 + 1;
      *(undefined8 *)(pFVar6 + (longlong)iVar15 * 0xc) = *(undefined8 *)(lVar18 + lVar2);
      *(undefined4 *)(pFVar6 + (longlong)iVar15 * 0xc + 8) = *(undefined4 *)(lVar18 + 8 + lVar2);
      pFVar5 = *(ForAnyElementType **)(*(longlong *)this + 0x88);
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      iVar15 = *(int *)&pFVar5[1].Data;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,pFVar5,piVar1);
      }
      *(int *)&pFVar5[1].Data = iVar15 + 1;
      pFVar6 = pFVar5->Data;
      *(undefined8 *)(pFVar6 + (longlong)iVar15 * 0xc) = uVar26;
      *(float *)(pFVar6 + (longlong)iVar15 * 0xc + 8) = local_80;
      lVar2 = *(longlong *)this;
      pFVar5 = *(ForAnyElementType **)(lVar2 + 0x90);
      uVar14 = 0;
      if (param_1 < *(int *)(lVar2 + 0x158)) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar15 = *(int *)&pFVar5[1].Data;
      lVar2 = *(longlong *)(lVar2 + 0x150);
      if (iVar15 == *(int *)((longlong)&pFVar5[1].Data + 4)) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,pFVar5,(int *)((longlong)&pFVar5[1].Data + 4));
        *(int *)&pFVar5[1].Data = iVar15 + 1;
        uVar16 = *(undefined4 *)(lVar2 + lVar19 * 4);
      }
      else {
        *(int *)&pFVar5[1].Data = iVar15 + 1;
        uVar16 = *(undefined4 *)(lVar2 + lVar19 * 4);
      }
      *(undefined4 *)(pFVar5->Data + (longlong)iVar15 * 4) = uVar16;
      LeaveCriticalSection(lpCriticalSection);
      lVar2 = **(longlong **)((longlong)this + 0x10);
      *(float *)(lVar2 + lVar18) = local_88 * fVar27 + *(float *)(lVar2 + lVar18);
      *(float *)(lVar2 + 4 + lVar18) = fStack_84 * fVar27 + *(float *)(lVar2 + 4 + lVar18);
      *(float *)(lVar2 + 8 + lVar18) = local_80 * fVar27 + *(float *)(lVar2 + 8 + lVar18);
      lVar2 = *(longlong *)this;
      uVar14 = 0;
      if (param_1 < *(int *)(lVar2 + 0x118)) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined1 *)(lVar19 + *(longlong *)(lVar2 + 0x110)) = 1;
      lVar2 = *(longlong *)this;
      uVar26 = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + lVar18);
      uVar16 = *(undefined4 *)(**(longlong **)((longlong)this + 0x10) + 8 + lVar18);
      uVar14 = 0;
      if (param_1 < *(int *)(lVar2 + 0x128)) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar8 = local_80;
      uVar12 = _local_88;
      lVar2 = *(longlong *)(lVar2 + 0x120);
      *(undefined8 *)(lVar2 + lVar19 * 0xc) = uVar26;
      *(undefined4 *)(lVar2 + 8 + lVar19 * 0xc) = uVar16;
      lVar2 = *(longlong *)this;
      uVar14 = 0;
      if (param_1 < *(int *)(lVar2 + 0x138)) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar2 = *(longlong *)(lVar2 + 0x130);
      *(undefined8 *)(lVar2 + lVar19 * 0xc) = uVar12;
      *(float *)(lVar2 + 8 + lVar19 * 0xc) = fVar8;
      Chaos::Softs::Private::ApplyFriction
                ((TVector<float,3> *)(**(longlong **)((longlong)this + 0x10) + lVar18),
                 (TVector<float,3> *)(**(longlong **)((longlong)this + 8) + lVar19 * 0xc),
                 (TVector<float,3> *)&local_88,fVar27 * *(float *)(*(longlong *)this + 0x10),
                 *(float *)((longlong)this + 0x38),*(TVector<float,3> **)((longlong)this + 0x20),
                 *(TVector<float,3> **)((longlong)this + 0x18),
                 *(TVector<float,3> **)((longlong)this + 0x28),local_68);
      lVar18 = *(longlong *)this;
      uVar14 = 0;
      if (param_1 < *(int *)(lVar18 + 0x148)) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar18 = *(longlong *)(lVar18 + 0x140);
      *(undefined8 *)(lVar18 + lVar19 * 0xc) = local_68[0]._0_8_;
      *(undefined4 *)(lVar18 + 8 + lVar19 * 0xc) = local_68[0]._8_4_;
    }
  }
  return;
}

// operator() @ 143d263f0

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,0>'::__l32::<lambda_2>
::operator()(void *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  ForAnyElementType *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float local_88;
  float fStack_84;
  float local_80;
  undefined1 local_78 [16];
  TVector<float,3> local_68 [4];
  
  lVar17 = (longlong)param_1;
  lVar16 = lVar17 * 0x10;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + lVar16) != 0.0) {
    uVar15 = (uint)~param_1 >> 0x1f;
    lVar2 = *(longlong *)this;
    uVar13 = 0;
    if (param_1 < *(int *)(lVar2 + 0x158)) {
      uVar13 = uVar15;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar3 = *(longlong *)this;
    fVar25 = (*(float *)(lVar3 + 0xc) + *(float *)(lVar3 + 8)) -
             *(float *)(*(longlong *)(lVar2 + 0x150) + lVar17 * 4);
    if (0.0 < fVar25) {
      pfVar4 = *(float **)((longlong)this + 0x30);
      uVar13 = 0;
      if (param_1 < *(int *)(lVar3 + 0x168)) {
        uVar13 = uVar15;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar8 = *pfVar4;
      fVar9 = pfVar4[1];
      fVar10 = pfVar4[2];
      fVar11 = pfVar4[3];
      uVar24 = *(undefined8 *)(*(longlong *)(lVar3 + 0x160) + lVar17 * 0xc);
      fVar21 = (float)uVar24 * pfVar4[8];
      fVar22 = (float)((ulonglong)uVar24 >> 0x20) * pfVar4[9];
      fVar23 = *(float *)(*(longlong *)(lVar3 + 0x160) + 8 + lVar17 * 0xc) * pfVar4[10];
      fVar18 = fVar22 * fVar8 - fVar9 * fVar21;
      fVar19 = fVar23 * fVar9 - fVar10 * fVar22;
      fVar20 = fVar21 * fVar10 - fVar8 * fVar23;
      fVar19 = fVar19 + fVar19;
      fVar20 = fVar20 + fVar20;
      fVar18 = fVar18 + fVar18;
      uVar24._0_4_ = fVar11 * fVar19 + fVar21 + (fVar18 * fVar9 - fVar20 * fVar10);
      uVar24._4_4_ = fVar11 * fVar20 + fVar22 + (fVar19 * fVar10 - fVar18 * fVar8);
      local_80 = fVar11 * fVar18 + fVar23 + (fVar20 * fVar8 - fVar19 * fVar9);
      lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x98);
      _local_88 = uVar24;
      local_78._0_8_ = uVar24;
      local_78._8_4_ = local_80;
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      *(undefined1 *)**(undefined8 **)((longlong)this + 0x40) = 1;
      pFVar5 = *(ForAnyElementType **)(*(longlong *)this + 0x80);
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      lVar2 = **(longlong **)((longlong)this + 0x10);
      iVar14 = *(int *)&pFVar5[1].Data;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,pFVar5,piVar1);
      }
      pFVar6 = pFVar5->Data;
      *(int *)&pFVar5[1].Data = iVar14 + 1;
      *(undefined8 *)(pFVar6 + (longlong)iVar14 * 0xc) = *(undefined8 *)(lVar16 + lVar2);
      *(undefined4 *)(pFVar6 + (longlong)iVar14 * 0xc + 8) = *(undefined4 *)(lVar16 + 8 + lVar2);
      pFVar5 = *(ForAnyElementType **)(*(longlong *)this + 0x88);
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      iVar14 = *(int *)&pFVar5[1].Data;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,pFVar5,piVar1);
      }
      *(int *)&pFVar5[1].Data = iVar14 + 1;
      pFVar6 = pFVar5->Data;
      *(undefined8 *)(pFVar6 + (longlong)iVar14 * 0xc) = uVar24;
      *(float *)(pFVar6 + (longlong)iVar14 * 0xc + 8) = local_80;
      lVar2 = *(longlong *)this;
      pFVar5 = *(ForAnyElementType **)(lVar2 + 0x90);
      uVar13 = 0;
      if (param_1 < *(int *)(lVar2 + 0x158)) {
        uVar13 = uVar15;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar14 = *(int *)&pFVar5[1].Data;
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      lVar2 = *(longlong *)(lVar2 + 0x150);
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,pFVar5,piVar1);
        *(int *)&pFVar5[1].Data = iVar14 + 1;
      }
      else {
        *(int *)&pFVar5[1].Data = iVar14 + 1;
      }
      *(undefined4 *)(pFVar5->Data + (longlong)iVar14 * 4) = *(undefined4 *)(lVar2 + lVar17 * 4);
      LeaveCriticalSection(lpCriticalSection);
      lVar2 = **(longlong **)((longlong)this + 0x10);
      *(float *)(lVar2 + lVar16) = local_88 * fVar25 + *(float *)(lVar2 + lVar16);
      *(float *)(lVar2 + 4 + lVar16) = fStack_84 * fVar25 + *(float *)(lVar2 + 4 + lVar16);
      *(float *)(lVar2 + 8 + lVar16) = local_80 * fVar25 + *(float *)(lVar2 + 8 + lVar16);
      Chaos::Softs::Private::ApplyFriction
                ((TVector<float,3> *)(**(longlong **)((longlong)this + 0x10) + lVar16),
                 (TVector<float,3> *)(**(longlong **)((longlong)this + 8) + lVar17 * 0xc),
                 (TVector<float,3> *)&local_88,fVar25 * *(float *)(*(longlong *)this + 0x10),
                 *(float *)((longlong)this + 0x38),*(TVector<float,3> **)((longlong)this + 0x20),
                 *(TVector<float,3> **)((longlong)this + 0x18),
                 *(TVector<float,3> **)((longlong)this + 0x28),local_68);
    }
  }
  return;
}

// operator() @ 143d267f0

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,1>'::__l32::<lambda_2>
::operator()(void *this,int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 local_78 [16];
  TVector<float,3> local_68 [4];
  
  lVar15 = (longlong)param_1;
  lVar17 = lVar15 * 0x10;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + lVar17) != 0.0) {
    lVar3 = *(longlong *)this;
    uVar16 = (uint)~param_1 >> 0x1f;
    uVar14 = 0;
    if (param_1 < *(int *)(lVar3 + 0x158)) {
      uVar14 = uVar16;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar4 = *(longlong *)this;
    fVar24 = (*(float *)(lVar4 + 0xc) + *(float *)(lVar4 + 8)) -
             *(float *)(*(longlong *)(lVar3 + 0x150) + lVar15 * 4);
    if (0.0 < fVar24) {
      pfVar5 = *(float **)((longlong)this + 0x30);
      uVar14 = 0;
      if (param_1 < *(int *)(lVar4 + 0x168)) {
        uVar14 = uVar16;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar1 = *(undefined8 *)(*(longlong *)(lVar4 + 0x160) + lVar15 * 0xc);
      fVar7 = *pfVar5;
      fVar8 = pfVar5[1];
      fVar9 = pfVar5[2];
      fVar10 = pfVar5[3];
      fVar21 = (float)uVar1 * pfVar5[8];
      fVar22 = (float)((ulonglong)uVar1 >> 0x20) * pfVar5[9];
      fVar23 = *(float *)(*(longlong *)(lVar4 + 0x160) + 8 + lVar15 * 0xc) * pfVar5[10];
      lVar3 = **(longlong **)((longlong)this + 0x10);
      fVar18 = fVar22 * fVar7 - fVar8 * fVar21;
      fVar19 = fVar23 * fVar8 - fVar9 * fVar22;
      fVar20 = fVar21 * fVar9 - fVar7 * fVar23;
      fVar19 = fVar19 + fVar19;
      fVar20 = fVar20 + fVar20;
      fVar18 = fVar18 + fVar18;
      local_78._0_4_ = fVar10 * fVar19 + fVar21 + (fVar18 * fVar8 - fVar20 * fVar9);
      local_78._4_4_ = fVar10 * fVar20 + fVar22 + (fVar19 * fVar9 - fVar18 * fVar7);
      local_78._8_4_ = fVar10 * fVar18 + fVar23 + (fVar20 * fVar7 - fVar19 * fVar8);
      *(float *)(lVar3 + lVar17) = local_78._0_4_ * fVar24 + *(float *)(lVar3 + lVar17);
      *(float *)(lVar3 + 4 + lVar17) = local_78._4_4_ * fVar24 + *(float *)(lVar3 + 4 + lVar17);
      *(float *)(lVar3 + 8 + lVar17) =
           (float)local_78._8_4_ * fVar24 + *(float *)(lVar3 + 8 + lVar17);
      lVar3 = *(longlong *)this;
      uVar14 = 0;
      if (param_1 < *(int *)(lVar3 + 0x118)) {
        uVar14 = uVar16;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined1 *)(lVar15 + *(longlong *)(lVar3 + 0x110)) = 1;
      lVar3 = *(longlong *)this;
      uVar2 = *(undefined4 *)(**(longlong **)((longlong)this + 0x10) + 8 + lVar17);
      uVar1 = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + lVar17);
      uVar14 = 0;
      if (param_1 < *(int *)(lVar3 + 0x128)) {
        uVar14 = uVar16;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar12 = local_78._8_4_;
      uVar11 = local_78._0_8_;
      lVar3 = *(longlong *)(lVar3 + 0x120);
      *(undefined8 *)(lVar3 + lVar15 * 0xc) = uVar1;
      *(undefined4 *)(lVar3 + 8 + lVar15 * 0xc) = uVar2;
      lVar3 = *(longlong *)this;
      uVar14 = 0;
      if (param_1 < *(int *)(lVar3 + 0x138)) {
        uVar14 = uVar16;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar3 = *(longlong *)(lVar3 + 0x130);
      *(undefined8 *)(lVar3 + lVar15 * 0xc) = uVar11;
      *(undefined4 *)(lVar3 + 8 + lVar15 * 0xc) = uVar12;
      Chaos::Softs::Private::ApplyFriction
                ((TVector<float,3> *)(**(longlong **)((longlong)this + 0x10) + lVar17),
                 (TVector<float,3> *)(**(longlong **)((longlong)this + 8) + lVar15 * 0xc),
                 (TVector<float,3> *)local_78,fVar24 * *(float *)(*(longlong *)this + 0x10),
                 *(float *)((longlong)this + 0x38),*(TVector<float,3> **)((longlong)this + 0x20),
                 *(TVector<float,3> **)((longlong)this + 0x18),
                 *(TVector<float,3> **)((longlong)this + 0x28),local_68);
      lVar17 = *(longlong *)this;
      uVar14 = 0;
      if (param_1 < *(int *)(lVar17 + 0x148)) {
        uVar14 = uVar16;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar17 = *(longlong *)(lVar17 + 0x140);
      *(undefined8 *)(lVar17 + lVar15 * 0xc) = local_68[0]._0_8_;
      *(undefined4 *)(lVar17 + 8 + lVar15 * 0xc) = local_68[0]._8_4_;
    }
  }
  return;
}

// operator() @ 143d26c20

void __thiscall
`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,0>'::__l32::<lambda_2>
::operator()(void *this,int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_68 [16];
  TVector<float,3> local_58 [4];
  
  lVar12 = (longlong)param_1;
  lVar13 = lVar12 * 0x10;
  if (*(float *)(**(longlong **)((longlong)this + 0x10) + 0xc + lVar13) != 0.0) {
    lVar2 = *(longlong *)this;
    uVar11 = 0;
    if (param_1 < *(int *)(lVar2 + 0x158)) {
      uVar11 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar3 = *(longlong *)this;
    fVar20 = (*(float *)(lVar3 + 0xc) + *(float *)(lVar3 + 8)) -
             *(float *)(*(longlong *)(lVar2 + 0x150) + lVar12 * 4);
    if (0.0 < fVar20) {
      pfVar4 = *(float **)((longlong)this + 0x30);
      uVar11 = 0;
      if (param_1 < *(int *)(lVar3 + 0x168)) {
        uVar11 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar6 = *pfVar4;
      fVar7 = pfVar4[1];
      fVar8 = pfVar4[2];
      fVar9 = pfVar4[3];
      uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + 0x160) + lVar12 * 0xc);
      fVar17 = (float)uVar1 * pfVar4[8];
      fVar18 = (float)((ulonglong)uVar1 >> 0x20) * pfVar4[9];
      fVar19 = *(float *)(*(longlong *)(lVar3 + 0x160) + 8 + lVar12 * 0xc) * pfVar4[10];
      lVar2 = **(longlong **)((longlong)this + 0x10);
      fVar14 = fVar18 * fVar6 - fVar7 * fVar17;
      fVar15 = fVar19 * fVar7 - fVar8 * fVar18;
      fVar16 = fVar17 * fVar8 - fVar6 * fVar19;
      fVar15 = fVar15 + fVar15;
      fVar16 = fVar16 + fVar16;
      fVar14 = fVar14 + fVar14;
      local_68._0_4_ = fVar9 * fVar15 + fVar17 + (fVar14 * fVar7 - fVar16 * fVar8);
      local_68._4_4_ = fVar9 * fVar16 + fVar18 + (fVar15 * fVar8 - fVar14 * fVar6);
      local_68._8_4_ = fVar9 * fVar14 + fVar19 + (fVar16 * fVar6 - fVar15 * fVar7);
      *(float *)(lVar2 + lVar13) = local_68._0_4_ * fVar20 + *(float *)(lVar2 + lVar13);
      *(float *)(lVar2 + 4 + lVar13) = local_68._4_4_ * fVar20 + *(float *)(lVar2 + 4 + lVar13);
      *(float *)(lVar2 + 8 + lVar13) =
           (float)local_68._8_4_ * fVar20 + *(float *)(lVar2 + 8 + lVar13);
      Chaos::Softs::Private::ApplyFriction
                ((TVector<float,3> *)(**(longlong **)((longlong)this + 0x10) + lVar13),
                 (TVector<float,3> *)(**(longlong **)((longlong)this + 8) + lVar12 * 0xc),
                 (TVector<float,3> *)local_68,fVar20 * *(float *)(*(longlong *)this + 0x10),
                 *(float *)((longlong)this + 0x38),*(TVector<float,3> **)((longlong)this + 0x20),
                 *(TVector<float,3> **)((longlong)this + 0x18),
                 *(TVector<float,3> **)((longlong)this + 0x28),local_58);
    }
  }
  return;
}

// Apply @ 143d40470

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::Apply
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId318,"FPBDSoftBodyCollisionConstraint",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
               ,0x13e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId318);
  }
  if (param_3->ArrayNum != 0) {
    if ((((this->bWriteDebugContacts == false) ||
         (this->CollisionParticleCollided == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0)) ||
        (this->Contacts == (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0)) ||
       ((this->Normals == (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0 ||
        (this->Phis == (TArray<float,TSizedDefaultAllocator<32>_> *)0x0)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    bVar1 = this->FrictionCoefficient <= __real_38d1b717;
    if (this->bUseCCD == false) {
      if (bChaos_SoftBodyCollision_ISPC_Enabled == false) {
        if (bVar2) {
          if (bVar1) {
            ApplySimpleInternal<1,0,0>(this,param_1,param_2,param_3);
            ApplyComplexInternal<1,0,0>(this,param_1,param_2,param_3);
          }
          else {
            ApplySimpleInternal<1,1,0>(this,param_1,param_2,param_3);
            ApplyComplexInternal<1,1,0>(this,param_1,param_2,param_3);
          }
        }
        else if (bVar1) {
          ApplySimpleInternal<0,0,0>(this,param_1,param_2,param_3);
          ApplyComplexInternal<0,0,0>(this,param_1,param_2,param_3);
        }
        else {
          ApplySimpleInternal<0,1,0>(this,param_1,param_2,param_3);
          ApplyComplexInternal<0,1,0>(this,param_1,param_2,param_3);
        }
      }
      else {
        ApplySimpleInternalISPC(this,param_1,param_2,param_3,false);
        ApplyComplexInternalISPC(this,param_1,param_2,param_3,false);
      }
    }
    else if (bVar1) {
      if (bVar2) {
        ApplyInternalCCD<0,1>(this,param_1,param_2,param_3);
      }
      else {
        ApplyInternalCCD<0,0>(this,param_1,param_2,param_3);
      }
    }
    else if (bVar2) {
      ApplyInternalCCD<1,1>(this,param_1,param_2,param_3);
    }
    else {
      ApplyInternalCCD<1,0>(this,param_1,param_2,param_3);
    }
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyComplexInternalISPC @ 143d409e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternalISPC
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3,
          bool param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *pTVar10;
  TVector<float,3> *pTVar11;
  TVector<float,3> *pTVar12;
  code *pcVar13;
  FParticleRangeIndex FVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  uchar uVar18;
  uint uVar19;
  int iVar20;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar21;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar22;
  FPBDComplexColliderBoneData *pFVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  FPAndInvM *pFVar27;
  FScriptContainerElement *pFVar28;
  longlong lVar29;
  FScriptContainerElement *pFVar30;
  bool bVar31;
  undefined1 auStackY_3c8 [32];
  undefined1 local_308;
  char local_307;
  int local_304;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *local_300;
  TVector<float,3> *local_2f8;
  TVector<float,3> *local_2f0;
  FScriptContainerElement *local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  FScriptContainerElement *local_2d0;
  undefined4 local_2c8;
  FScriptContainerElement *local_2c0;
  FScriptContainerElement *local_2b8;
  undefined1 local_2a8 [32];
  int local_288;
  int iStack_284;
  TVector<float,3> *local_280;
  TVector<float,3> *local_278;
  int *local_270;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_268;
  FScriptContainerElement *local_260;
  FPAndInvM *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  FPAndInvM *local_248;
  int iStack_240;
  undefined4 uStack_23c;
  FPAndInvM *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  FPAndInvM *local_228;
  int iStack_220;
  undefined4 uStack_21c;
  FPAndInvM *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_208;
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_1f8;
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_1e8;
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_1d8;
  TArrayView<Chaos::Softs::FPAndInvM_const_,int> local_1c8;
  TArrayView<Chaos::TVector<float,3>,int> local_1b8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1a8;
  TArrayView<Chaos::TVector<float,3>,int> local_198;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_188;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_178;
  TArrayView<Chaos::TVector<float,3>,int> local_168;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_158;
  TArrayView<Chaos::TVector<float,3>,int> local_148;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_138;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_128;
  TArrayView<Chaos::TVector<float,3>,int> local_118;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_108;
  TArrayView<Chaos::TVector<float,3>,int> local_f8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_e8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_d8;
  undefined1 local_c8 [48];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  if (this->bEnableComplexColliders != false) {
    bVar31 = -1 < CpuChannel->Enabled;
    local_2a8._24_8_ = this;
    local_268 = param_3;
    if (bVar31) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId986,
                 "FPBDSoftBodyCollisionConstraint_ApplyComplexInternalISPC",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
                 ,0x3da);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId986);
    }
    uVar16 = _UNK_150689548;
    uVar15 = ___xmm_000000003f8000003f8000003f800000;
    local_2a8._16_4_ = param_3->ArrayNum;
    uVar24 = (ulonglong)(int)local_2a8._16_4_;
    local_307 = __real_38d1b717 < this->FrictionCoefficient;
    pFVar25 = (param_3->AllocatorInstance).Data;
    local_260 = pFVar25 + uVar24 * 0x20;
    while( true ) {
      pFVar30 = local_260;
      local_2d0 = pFVar25;
      if (param_3->ArrayNum != (int)uVar24) {
        local_308 = 0;
        `TCheckedPointerIterator<Chaos::Softs::FSolverCollisionParticlesRange_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_308);
      }
      if (pFVar25 == pFVar30) break;
      local_304 = 0;
      if (0 < *(int *)(pFVar25 + 0x14)) {
        do {
          iVar20 = local_304;
          if ((*(longlong *)(pFVar25 + 8) == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar26 = iVar20 + *(int *)(pFVar25 + 0x10);
          lVar8 = *(longlong *)(pFVar25 + 8);
          uVar19 = 0;
          if ((int)uVar26 < *(int *)(lVar8 + 0x68)) {
            uVar19 = ~uVar26 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          lVar8 = *(longlong *)(lVar8 + 0x60);
          lVar29 = (longlong)(int)uVar26;
          uVar18 = FImplicitObject::GetType(*(FImplicitObject **)(lVar8 + lVar29 * 8));
          pFVar25 = local_2d0;
          if ((uVar18 != '&') && (uVar18 != '\x11')) goto LAB_143d41dde;
          if ((*(longlong *)(local_2d0 + 8) == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar20 = local_304;
          local_2f8 = TParticles<float,3>::GetX
                                (*(TParticles<float,3> **)(pFVar25 + 8),
                                 *(int *)(pFVar25 + 0x10) + local_304);
          if ((*(longlong *)(pFVar25 + 8) == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x56,L""), bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar26 = iVar20 + *(int *)(pFVar25 + 0x10);
          lVar9 = *(longlong *)(pFVar25 + 8);
          uVar19 = 0;
          if ((int)uVar26 < *(int *)(lVar9 + 0x50)) {
            uVar19 = ~uVar26 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar25 = local_2d0;
          puVar2 = (undefined8 *)(*(longlong *)(lVar9 + 0x48) + (longlong)(int)uVar26 * 0x10);
          local_2a8._0_8_ = *puVar2;
          local_2a8._8_8_ = puVar2[1];
          local_c8._28_4_ = 0;
          local_c8._16_12_ = (undefined1  [12])*local_2f8;
          local_c8._32_8_ = uVar15;
          local_c8._40_8_ = uVar16;
          local_c8._0_8_ = local_2a8._0_8_;
          local_c8._8_8_ = local_2a8._8_8_;
          if (local_307 == '\0') {
            pTVar10 = *(TWeightedLatticeImplicitObject<Chaos::FLevelSet> **)(lVar8 + lVar29 * 8);
            if (pTVar10->field_0x18 == '\x11') {
              if (pTVar10 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
LAB_143d41a46:
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!\"Enclosing block should never be called\"",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
                                    ,0x49b,L"");
                if (bVar17) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
              }
              else {
                uVar19 = *(uint *)&param_1->field_0x14;
                pTVar3 = &this->BatchPhis;
                iVar20 = (this->BatchPhis).ArrayNum;
                if (iVar20 < (int)uVar19) {
                  UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,uVar19 - iVar20,&pTVar3->AllocatorInstance,
                             &(this->BatchPhis).ArrayNum,&(this->BatchPhis).ArrayMax);
                }
                else {
                  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
                  }
                  if ((int)uVar19 < iVar20) {
                    uVar26 = iVar20 - uVar19;
                    if (((int)(uVar19 | uVar26) < 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x458,
                                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    if (uVar26 != 0) {
                      pFVar25 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar19 * 4;
                      iVar20 = ((this->BatchPhis).ArrayNum - uVar26) - uVar19;
                      if (iVar20 != 0) {
                        memmove(pFVar25,pFVar25 + (longlong)(int)uVar26 * 4,(longlong)iVar20 << 2);
                      }
                      iVar20 = (this->BatchPhis).ArrayNum - uVar26;
                      (this->BatchPhis).ArrayNum = iVar20;
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,&pTVar3->AllocatorInstance,iVar20,&(this->BatchPhis).ArrayMax);
                    }
                  }
                }
                uVar19 = *(uint *)&param_1->field_0x14;
                pTVar4 = &this->BatchNormals;
                iVar20 = (this->BatchNormals).ArrayNum;
                if (iVar20 < (int)uVar19) {
                  UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,uVar19 - iVar20,&pTVar4->AllocatorInstance,
                             &(this->BatchNormals).ArrayNum,&(this->BatchNormals).ArrayMax);
                }
                else {
                  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
                  }
                  if ((int)uVar19 < iVar20) {
                    uVar26 = iVar20 - uVar19;
                    if (((int)(uVar19 | uVar26) < 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x458,
                                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    if (uVar26 != 0) {
                      pFVar25 = (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar19 * 0xc;
                      iVar20 = ((this->BatchNormals).ArrayNum - uVar26) - uVar19;
                      if (iVar20 != 0) {
                        memmove(pFVar25,pFVar25 + (longlong)(int)uVar26 * 0xc,(longlong)iVar20 * 0xc
                               );
                      }
                      iVar20 = (this->BatchNormals).ArrayNum - uVar26;
                      (this->BatchNormals).ArrayNum = iVar20;
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0xc,4,&pTVar4->AllocatorInstance,iVar20,
                                 &(this->BatchNormals).ArrayMax);
                    }
                  }
                }
                fVar5 = this->SoftBodyCollisionThickness;
                fVar6 = this->CollisionThickness;
                iVar20 = *(int *)&param_1->field_0x14;
                if ((*(longlong *)&param_1->field_0x8 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Particles",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x57,L""), bVar17)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                lVar8 = *(longlong *)&param_1->field_0x8;
                if (((*(int *)&param_1->field_0x10 < 0) ||
                    (*(int *)(lVar8 + 0xb0) <
                     *(int *)&param_1->field_0x10 + *(int *)&param_1->field_0x14)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x52,L""), bVar17)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pFVar27 = (FPAndInvM *)
                          ((longlong)*(int *)&param_1->field_0x10 * 0x10 +
                          *(longlong *)(lVar8 + 0xa8));
                iVar7 = *(int *)&param_1->field_0x14;
                if ((iVar7 < 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ArrayNum >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xfe,L""), bVar17)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                local_1d8._12_4_ = uStack_21c;
                local_1d8.ArrayNum = iVar7;
                local_228 = pFVar27;
                iStack_220 = iVar7;
                local_1d8.DataPtr = pFVar27;
                FMLLevelSet::BatchPhiWithNormal
                          ((FMLLevelSet *)pTVar10,&local_1d8,(TRigidTransform<float,3> *)local_c8,
                           &this->BatchPhis,&this->BatchNormals,fVar5 + fVar6,0,0,iVar20);
              }
            }
            else {
              if ((pTVar10->field_0x18 != '&') ||
                 (pTVar10 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0))
              goto LAB_143d41a46;
              pTVar21 = FSolverParticlesRange::GetPAndInvM(param_1,&local_d8);
              local_218 = pTVar21->DataPtr;
              iStack_210 = pTVar21->ArrayNum;
              local_1c8._12_4_ = uStack_20c;
              local_1c8.ArrayNum = iStack_210;
              local_1c8.DataPtr = local_218;
              TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormal
                        (pTVar10,&local_1c8,(TRigidTransform<float,3> *)local_c8,&this->BatchPhis,
                         &this->BatchNormals);
            }
            local_2e8 = (this->BatchNormals).AllocatorInstance.Data;
            local_2f0 = (TVector<float,3> *)(this->BatchPhis).AllocatorInstance.Data;
            local_300 = (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)
                        CONCAT44(local_300._4_4_,*(undefined4 *)&param_1->field_0x14);
            if (param_4) {
              if ((*(longlong *)&param_1->field_0x8 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x57,L""), bVar17)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              lVar8 = *(longlong *)&param_1->field_0x8;
              if (((*(int *)&param_1->field_0x10 < 0) ||
                  (*(int *)(lVar8 + 0x30) <
                   *(int *)&param_1->field_0x10 + *(int *)&param_1->field_0x14)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x52,L""), bVar17)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              local_2b8 = (FScriptContainerElement *)
                          (*(longlong *)(lVar8 + 0x28) +
                          (longlong)*(int *)&param_1->field_0x10 * 0xc);
              if ((*(int *)&param_1->field_0x14 < 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar17)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              local_2c0 = (this->HasPlanarData).AllocatorInstance.Data;
              pFVar25 = (this->PlanarDataNormals).AllocatorInstance.Data;
              pFVar30 = (this->PlanarDataPositions).AllocatorInstance.Data;
              if ((*(longlong *)&param_1->field_0x8 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x57,L""), bVar17)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              lVar8 = *(longlong *)&param_1->field_0x8;
              if (((*(int *)&param_1->field_0x10 < 0) ||
                  (*(int *)(lVar8 + 0xb0) <
                   *(int *)&param_1->field_0x10 + *(int *)&param_1->field_0x14)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x52,L""), bVar17)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              iVar20 = *(int *)&param_1->field_0x10;
              lVar8 = *(longlong *)(lVar8 + 0xa8);
              if ((*(int *)&param_1->field_0x14 < 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar17)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              ApplyPerParticleBatchCollisionNoFrictionAndGeneratePlanarConstraints
                        ((longlong)iVar20 * 0x10 + lVar8,local_2c0,pFVar30,pFVar25);
            }
            else {
              if ((*(longlong *)&param_1->field_0x8 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x57,L""), bVar17)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              lVar8 = *(longlong *)&param_1->field_0x8;
              if (((*(int *)&param_1->field_0x10 < 0) ||
                  (*(int *)(lVar8 + 0x30) <
                   *(int *)&param_1->field_0x10 + *(int *)&param_1->field_0x14)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x52,L""), bVar17)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              iVar20 = *(int *)&param_1->field_0x10;
              lVar8 = *(longlong *)(lVar8 + 0x28);
              if ((*(int *)&param_1->field_0x14 < 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar17)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              if ((*(longlong *)&param_1->field_0x8 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x57,L""), bVar17)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              lVar29 = *(longlong *)&param_1->field_0x8;
              if (((*(int *)&param_1->field_0x10 < 0) ||
                  (*(int *)(lVar29 + 0xb0) <
                   *(int *)&param_1->field_0x10 + *(int *)&param_1->field_0x14)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x52,L""), bVar17)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              iVar7 = *(int *)&param_1->field_0x10;
              lVar29 = *(longlong *)(lVar29 + 0xa8);
              if ((*(int *)&param_1->field_0x14 < 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar17)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              ApplyPerParticleBatchCollisionNoFriction
                        ((longlong)iVar7 * 0x10 + lVar29,lVar8 + (longlong)iVar20 * 0xc,local_2f0,
                         local_2e8);
            }
          }
          else {
            if ((*(longlong *)(local_2d0 + 8) == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar17)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            uVar26 = *(int *)(pFVar25 + 0x10) + local_304;
            lVar9 = *(longlong *)(pFVar25 + 8);
            uVar19 = 0;
            if ((int)uVar26 < *(int *)(lVar9 + 0x80)) {
              uVar19 = ~uVar26 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pFVar25 = local_2d0;
            local_2d8 = *(longlong *)(lVar9 + 0x78) + (longlong)(int)uVar26 * 0xc;
            if ((*(longlong *)(local_2d0 + 8) == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x56,L""), bVar17)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            uVar26 = *(int *)(pFVar25 + 0x10) + local_304;
            lVar9 = *(longlong *)(pFVar25 + 8);
            uVar19 = 0;
            if ((int)uVar26 < *(int *)(lVar9 + 0x98)) {
              uVar19 = ~uVar26 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pTVar10 = *(TWeightedLatticeImplicitObject<Chaos::FLevelSet> **)(lVar8 + lVar29 * 8);
            local_2e0 = *(longlong *)(lVar9 + 0x90) + (longlong)(int)uVar26 * 0xc;
            local_300 = pTVar10;
            if (pTVar10->field_0x18 == '\x11') {
              if (pTVar10 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
LAB_143d416aa:
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!\"Enclosing block should never be called\"",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
                                    ,0x487,L"");
                if (bVar17) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
              }
              else {
                uVar19 = *(uint *)&param_1->field_0x14;
                pTVar3 = &this->BatchPhis;
                iVar20 = (this->BatchPhis).ArrayNum;
                piVar1 = &(this->BatchPhis).ArrayNum;
                if (iVar20 < (int)uVar19) {
                  UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,uVar19 - iVar20,&pTVar3->AllocatorInstance,piVar1,
                             &(this->BatchPhis).ArrayMax);
                }
                else {
                  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
                  }
                  if ((int)uVar19 < iVar20) {
                    uVar26 = iVar20 - uVar19;
                    if (((int)(uVar26 | uVar19) < 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x458,
                                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    if (uVar26 != 0) {
                      pFVar25 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar19 * 4;
                      iVar20 = (*piVar1 - uVar26) - uVar19;
                      if (iVar20 != 0) {
                        memmove(pFVar25,pFVar25 + (longlong)(int)uVar26 * 4,(longlong)iVar20 << 2);
                      }
                      *piVar1 = *piVar1 - uVar26;
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,&pTVar3->AllocatorInstance,*piVar1,&(this->BatchPhis).ArrayMax)
                      ;
                    }
                  }
                }
                uVar19 = *(uint *)&param_1->field_0x14;
                pTVar4 = &this->BatchNormals;
                iVar20 = (this->BatchNormals).ArrayNum;
                piVar1 = &(this->BatchNormals).ArrayNum;
                if (iVar20 < (int)uVar19) {
                  UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,uVar19 - iVar20,&pTVar4->AllocatorInstance,piVar1,
                             &(this->BatchNormals).ArrayMax);
                }
                else {
                  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
                  }
                  if ((int)uVar19 < iVar20) {
                    uVar26 = iVar20 - uVar19;
                    if (((int)(uVar19 | uVar26) < 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x458,
                                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    if (uVar26 != 0) {
                      pFVar25 = (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar19 * 0xc;
                      iVar20 = (*piVar1 - uVar26) - uVar19;
                      if (iVar20 != 0) {
                        memmove(pFVar25,pFVar25 + (longlong)(int)uVar26 * 0xc,(longlong)iVar20 * 0xc
                               );
                      }
                      *piVar1 = *piVar1 - uVar26;
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0xc,4,&pTVar4->AllocatorInstance,*piVar1,
                                 &(this->BatchNormals).ArrayMax);
                    }
                  }
                }
                fVar5 = this->SoftBodyCollisionThickness;
                fVar6 = this->CollisionThickness;
                iVar20 = *(int *)&param_1->field_0x14;
                if ((*(longlong *)&param_1->field_0x8 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Particles",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x57,L""), bVar17)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                lVar8 = *(longlong *)&param_1->field_0x8;
                if (((*(int *)&param_1->field_0x10 < 0) ||
                    (*(int *)(lVar8 + 0xb0) <
                     *(int *)&param_1->field_0x10 + *(int *)&param_1->field_0x14)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                        ,0x52,L""), bVar17)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pFVar27 = (FPAndInvM *)
                          ((longlong)*(int *)&param_1->field_0x10 * 0x10 +
                          *(longlong *)(lVar8 + 0xa8));
                iVar7 = *(int *)&param_1->field_0x14;
                if ((iVar7 < 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ArrayNum >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xfe,L""), bVar17)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                local_208._12_4_ = uStack_24c;
                local_208.ArrayNum = iVar7;
                local_258 = pFVar27;
                iStack_250 = iVar7;
                local_208.DataPtr = pFVar27;
                FMLLevelSet::BatchPhiWithNormal
                          ((FMLLevelSet *)local_300,&local_208,(TRigidTransform<float,3> *)local_c8,
                           &this->BatchPhis,&this->BatchNormals,fVar5 + fVar6,0,0,iVar20);
                pFVar25 = (this->BatchNormals).AllocatorInstance.Data;
                pTVar11 = (TVector<float,3> *)(this->BatchPhis).AllocatorInstance.Data;
                local_300 = (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)
                            CONCAT44(local_300._4_4_,*(undefined4 *)&param_1->field_0x14);
                local_2f0 = pTVar11;
                local_2e8 = pFVar25;
                if (param_4) {
                  FSolverParticlesRange::XArray(param_1,&local_1b8);
                  pFVar25 = (this->PlanarDataNormals).AllocatorInstance.Data;
                  pFVar30 = (this->PlanarDataPositions).AllocatorInstance.Data;
                  pFVar28 = (this->HasPlanarData).AllocatorInstance.Data;
                  pTVar21 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1a8);
LAB_143d41609:
                  ApplyPerParticleBatchCollisionFastFrictionAndGeneratePlanarConstraints
                            (pTVar21->DataPtr,pFVar28,pFVar30,pFVar25);
                  this = (FPBDSoftBodyCollisionConstraintBase *)local_2a8._24_8_;
                }
                else {
                  pTVar22 = FSolverParticlesRange::XArray(param_1,&local_198);
                  pTVar12 = pTVar22->DataPtr;
                  pTVar21 = FSolverParticlesRange::GetPAndInvM(param_1,&local_188);
                  ApplyPerParticleBatchCollisionFastFriction
                            (pTVar21->DataPtr,pTVar12,pTVar11,pFVar25);
                }
              }
            }
            else {
              if ((pTVar10->field_0x18 != '&') ||
                 (pTVar10 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0))
              goto LAB_143d416aa;
              iStack_284 = local_304;
              local_288 = *(int *)(local_2d0 + 0x18);
              FVar14.ParticleIndex = local_304;
              FVar14.RangeId = local_288;
              pFVar23 = TMapBase<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>_>
                        ::Find((TMapBase<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>_>
                                *)&this->ComplexBoneData,FVar14);
              pTVar4 = &this->BatchNormals;
              pTVar3 = &this->BatchPhis;
              if (pFVar23 == (FPBDComplexColliderBoneData *)0x0) {
                pTVar21 = FSolverParticlesRange::GetPAndInvM(param_1,&local_128);
                local_238 = pTVar21->DataPtr;
                iStack_230 = pTVar21->ArrayNum;
                local_1e8._12_4_ = uStack_22c;
                local_1e8.ArrayNum = iStack_230;
                local_1e8.DataPtr = local_238;
                TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormal
                          (pTVar10,&local_1e8,(TRigidTransform<float,3> *)local_c8,pTVar3,pTVar4);
                pFVar25 = (pTVar4->AllocatorInstance).Data;
                pFVar30 = (pTVar3->AllocatorInstance).Data;
                local_300 = (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)
                            CONCAT44(local_300._4_4_,*(undefined4 *)&param_1->field_0x14);
                local_2c0 = pFVar30;
                local_2b8 = pFVar25;
                if (param_4) {
                  FSolverParticlesRange::XArray(param_1,&local_118);
                  pFVar25 = (this->PlanarDataNormals).AllocatorInstance.Data;
                  pFVar30 = (this->PlanarDataPositions).AllocatorInstance.Data;
                  pFVar28 = (this->HasPlanarData).AllocatorInstance.Data;
                  pTVar21 = FSolverParticlesRange::GetPAndInvM(param_1,&local_108);
                  goto LAB_143d41609;
                }
                pTVar22 = FSolverParticlesRange::XArray(param_1,&local_f8);
                pTVar11 = pTVar22->DataPtr;
                pTVar21 = FSolverParticlesRange::GetPAndInvM(param_1,&local_e8);
                ApplyPerParticleBatchCollisionFastFriction(pTVar21->DataPtr,pTVar11,pFVar30,pFVar25)
                ;
              }
              else {
                fVar5 = this->CollisionThickness;
                fVar6 = this->SoftBodyCollisionThickness;
                pTVar21 = FSolverParticlesRange::GetPAndInvM(param_1,&local_178);
                local_248 = pTVar21->DataPtr;
                iStack_240 = pTVar21->ArrayNum;
                local_1f8._12_4_ = uStack_23c;
                local_1f8.ArrayNum = iStack_240;
                local_1f8.DataPtr = local_248;
                TWeightedLatticeImplicitObject<Chaos::FLevelSet>::
                BatchPhiWithNormalAndGreatestInfluenceBone
                          (local_300,&local_1f8,(TRigidTransform<float,3> *)local_c8,fVar5 + fVar6,
                           pTVar3,pTVar4,&this->BatchVelocityBones);
                local_2c8 = *(undefined4 *)&param_1->field_0x14;
                pFVar25 = (pTVar4->AllocatorInstance).Data;
                pFVar30 = (pTVar3->AllocatorInstance).Data;
                local_280 = (pFVar23->W).DataPtr;
                local_278 = (pFVar23->X).DataPtr;
                local_2f0 = (pFVar23->V).DataPtr;
                local_270 = (pFVar23->MappedBoneIndices).DataPtr;
                local_300 = (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)
                            CONCAT44(local_300._4_4_,(pFVar23->MappedBoneIndices).ArrayNum);
                local_2e8 = (this->BatchVelocityBones).AllocatorInstance.Data;
                local_2c0 = pFVar25;
                local_2b8 = pFVar30;
                if (param_4) {
                  FSolverParticlesRange::XArray(param_1,&local_168);
                  pFVar25 = (this->PlanarDataNormals).AllocatorInstance.Data;
                  pFVar30 = (this->PlanarDataPositions).AllocatorInstance.Data;
                  pFVar28 = (this->HasPlanarData).AllocatorInstance.Data;
                  pTVar21 = FSolverParticlesRange::GetPAndInvM(param_1,&local_158);
                  ApplyPerParticleBatchCollisionFastFrictionWithVelocityBonesAndGeneratePlanarConstraints
                            (pTVar21->DataPtr,pFVar28,pFVar30,pFVar25);
                  this = (FPBDSoftBodyCollisionConstraintBase *)local_2a8._24_8_;
                }
                else {
                  pTVar22 = FSolverParticlesRange::XArray(param_1,&local_148);
                  pTVar11 = pTVar22->DataPtr;
                  pTVar21 = FSolverParticlesRange::GetPAndInvM(param_1,&local_138);
                  ApplyPerParticleBatchCollisionFastFrictionWithVelocityBones
                            (pTVar21->DataPtr,pTVar11,pFVar30,pFVar25);
                }
              }
            }
          }
LAB_143d41dde:
          local_304 = local_304 + 1;
          pFVar25 = local_2d0;
          param_3 = local_268;
        } while (local_304 < *(int *)(local_2d0 + 0x14));
      }
      pFVar25 = pFVar25 + 0x20;
      uVar24 = (ulonglong)(uint)local_2a8._16_4_;
    }
    if (bVar31) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// ApplyPlanarConstraints @ 143d43740

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyPlanarConstraints
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2)

{
  FPBDPlanarConstraints::Apply((FPBDPlanarConstraints *)&this->PlanarConstraint,param_1,param_2);
  return;
}

// ApplySimpleInternalISPC @ 143d43ca0

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternalISPC
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3,
          bool param_4)

{
  bool bVar1;
  code *local_58;
  FPBDSoftBodyCollisionConstraintBase **local_50;
  FPBDSoftBodyCollisionConstraintBase *local_48;
  FSolverParticlesRange *local_40;
  float local_38;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_30;
  undefined1 local_28;
  bool local_27;
  
  if (this->bEnableSimpleColliders != false) {
    bVar1 = -1 < CpuChannel->Enabled;
    if (bVar1) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId870,
                 "FPBDSoftBodyCollisionConstraint_ApplySimpleInternalISPC",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
                 ,0x366);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId870);
    }
    local_28 = __real_38d1b717 < this->FrictionCoefficient;
    local_27 = param_4;
    local_50 = &local_48;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternalISPC'::__l2::<lambda_1>,void,int>
               ::Call;
    local_48 = this;
    local_40 = param_1;
    local_38 = param_2;
    local_30 = param_3;
    PhysicsParallelFor(-((int)ROUND(__real_bf000000 -
                                    ((float)*(int *)&param_1->field_0x14 +
                                    (float)*(int *)&param_1->field_0x14) /
                                    (float)Chaos_SoftBodyCollision_ISPC_ParallelBatchSize) >> 1),
                       (TFunctionRef<void___cdecl(int)> *)&local_58,false);
    if (bVar1) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// ApplyWithPlanarConstraints @ 143d44b40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyWithPlanarConstraints
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3,
          bool param_4)

{
  bool bVar1;
  bool bVar2;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar3;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar4;
  bool bVar5;
  bool bVar6;
  bool local_res20 [8];
  TVector<float,3> *local_1d8;
  FPAndInvM *local_1d0;
  TVector<float,3> *local_1c8;
  FPAndInvM *local_1c0;
  TVector<float,3> *local_1b8;
  FPAndInvM *local_1b0;
  TVector<float,3> *local_1a8;
  FPAndInvM *local_1a0;
  code *local_198;
  FPBDSoftBodyCollisionConstraintBase **local_190;
  code *local_188;
  FPBDSoftBodyCollisionConstraintBase **local_180;
  code *local_178;
  FPBDSoftBodyCollisionConstraintBase **local_170;
  code *local_168;
  FPBDSoftBodyCollisionConstraintBase **local_160;
  FPBDSoftBodyCollisionConstraintBase *local_158;
  TVector<float,3> **local_150;
  FPAndInvM **local_148;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_140;
  float local_138;
  FPBDSoftBodyCollisionConstraintBase *local_130;
  TVector<float,3> **local_128;
  FPAndInvM **local_120;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_118;
  float local_110;
  FPBDSoftBodyCollisionConstraintBase *local_108;
  TVector<float,3> **local_100;
  FPAndInvM **local_f8;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_f0;
  float local_e8;
  FPBDSoftBodyCollisionConstraintBase *local_e0;
  TVector<float,3> **local_d8;
  FPAndInvM **local_d0;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_c8;
  float local_c0;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_b8;
  TArrayView<Chaos::TVector<float,3>,int> local_a8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_98;
  TArrayView<Chaos::TVector<float,3>,int> local_88;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_78;
  TArrayView<Chaos::TVector<float,3>,int> local_68;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_58;
  TArrayView<Chaos::TVector<float,3>,int> local_48 [2];
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId109,
               "FPBDSoftBodyCollisionConstraint_ApplyWithPlanarConstraints",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
               ,0x6d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId109);
  }
  if (param_3->ArrayNum != 0) {
    if ((((this->bWriteDebugContacts == false) ||
         (this->CollisionParticleCollided == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0)) ||
        (this->Contacts == (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0)) ||
       ((this->Normals == (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0 ||
        (this->Phis == (TArray<float,TSizedDefaultAllocator<32>_> *)0x0)))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    bVar2 = this->FrictionCoefficient <= __real_38d1b717;
    if (this->bUseCCD == false) {
      if (param_4) {
        *(undefined4 *)&(this->PlanarConstraint).field_0x18 = 0;
        if (*(int *)&(this->PlanarConstraint).field_0x1c < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,(ForAnyElementType *)&(this->PlanarConstraint).field_0x10,0,
                     (int *)&(this->PlanarConstraint).field_0x1c);
        }
        *(undefined4 *)&(this->PlanarConstraint).field_0x28 = 0;
        if (*(int *)&(this->PlanarConstraint).field_0x2c < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)&(this->PlanarConstraint).field_0x20,0,
                     (int *)&(this->PlanarConstraint).field_0x2c);
        }
        *(undefined4 *)&(this->PlanarConstraint).field_0x38 = 0;
        if (*(int *)&(this->PlanarConstraint).field_0x3c < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)&(this->PlanarConstraint).field_0x30,0,
                     (int *)&(this->PlanarConstraint).field_0x3c);
        }
        *(undefined4 *)&(this->PlanarConstraint).field_0x48 = 0;
        if (*(int *)&(this->PlanarConstraint).field_0x4c < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)&(this->PlanarConstraint).field_0x40,0,
                     (int *)&(this->PlanarConstraint).field_0x4c);
        }
        local_res20[0] = false;
        TArray<bool,TSizedDefaultAllocator<32>_>::Init
                  (&this->HasPlanarData,local_res20,*(int *)&param_1->field_0x14);
        TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&this->PlanarDataPositions,*(int *)&param_1->field_0x14,Default);
        TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&this->PlanarDataNormals,*(int *)&param_1->field_0x14,Default);
        if (!bVar2) {
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                    (&this->PlanarDataVelocities,*(int *)&param_1->field_0x14,Default);
        }
        bVar1 = this->bUsePlanarConstraintForSimpleColliders;
        if (bChaos_SoftBodyCollision_ISPC_Enabled == false) {
          if (bVar6) {
            if (bVar2) {
              if (bVar1 == false) {
                ApplySimpleInternal<1,0,0>(this,param_1,param_2,param_3);
              }
              else {
                bVar6 = -1 < CpuChannel->Enabled;
                if (bVar6) {
                  FCpuProfilerTrace::GetOrCreateSpecId
                            (&`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,0,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                              ::__l2::__CpuProfilerEventSpecId409,
                             "FPBDSoftBodyCollisionConstraint_ApplySimpleInternal",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
                             ,0x199);
                  FCpuProfilerTrace::OutputBeginEvent
                            (`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,0,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                             ::__l2::__CpuProfilerEventSpecId409);
                }
                if (this->bEnableSimpleColliders != false) {
                  pTVar3 = FSolverParticlesRange::GetPAndInvM(param_1,&local_98);
                  local_1c0 = pTVar3->DataPtr;
                  pTVar4 = FSolverParticlesRange::XArray(param_1,&local_88);
                  local_1c8 = pTVar4->DataPtr;
                  local_128 = &local_1c8;
                  local_120 = &local_1c0;
                  local_180 = &local_130;
                  local_188 = UE::Core::Private::Function::
                              TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,0,1>'::__l2::<lambda_1>,void,int>
                              ::Call;
                  local_130 = this;
                  local_118 = param_3;
                  local_110 = param_2;
                  PhysicsParallelFor(*(int *)&param_1->field_0x14,
                                     (TFunctionRef<void___cdecl(int)> *)&local_188,false);
                }
                if (bVar6) {
                  FCpuProfilerTrace::OutputEndEvent();
                }
              }
              if (this->bUsePlanarConstraintForComplexColliders == false) {
                ApplyComplexInternal<1,0,0>(this,param_1,param_2,param_3);
                FinalizePlanarConstraints(this,param_1);
              }
              else {
                ApplyComplexInternal<1,0,1>(this,param_1,param_2,param_3);
                FinalizePlanarConstraints(this,param_1);
              }
            }
            else {
              if (bVar1 == false) {
                ApplySimpleInternal<1,1,0>(this,param_1,param_2,param_3);
              }
              else {
                bVar6 = -1 < CpuChannel->Enabled;
                if (bVar6) {
                  FCpuProfilerTrace::GetOrCreateSpecId
                            (&`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,1,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                              ::__l2::__CpuProfilerEventSpecId409,
                             "FPBDSoftBodyCollisionConstraint_ApplySimpleInternal",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
                             ,0x199);
                  FCpuProfilerTrace::OutputBeginEvent
                            (`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,1,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                             ::__l2::__CpuProfilerEventSpecId409);
                }
                if (this->bEnableSimpleColliders != false) {
                  pTVar3 = FSolverParticlesRange::GetPAndInvM(param_1,&local_b8);
                  local_1d0 = pTVar3->DataPtr;
                  pTVar4 = FSolverParticlesRange::XArray(param_1,&local_a8);
                  local_1d8 = pTVar4->DataPtr;
                  local_150 = &local_1d8;
                  local_148 = &local_1d0;
                  local_190 = &local_158;
                  local_198 = UE::Core::Private::Function::
                              TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,1,1>'::__l2::<lambda_1>,void,int>
                              ::Call;
                  local_158 = this;
                  local_140 = param_3;
                  local_138 = param_2;
                  PhysicsParallelFor(*(int *)&param_1->field_0x14,
                                     (TFunctionRef<void___cdecl(int)> *)&local_198,false);
                }
                if (bVar6) {
                  FCpuProfilerTrace::OutputEndEvent();
                }
              }
              if (this->bUsePlanarConstraintForComplexColliders == false) {
                ApplyComplexInternal<1,1,0>(this,param_1,param_2,param_3);
                FinalizePlanarConstraints(this,param_1);
              }
              else {
                ApplyComplexInternal<1,1,1>(this,param_1,param_2,param_3);
                FinalizePlanarConstraints(this,param_1);
              }
            }
          }
          else if (bVar2) {
            if (bVar1 == false) {
              ApplySimpleInternal<0,0,0>(this,param_1,param_2,param_3);
            }
            else {
              bVar6 = -1 < CpuChannel->Enabled;
              if (bVar6) {
                FCpuProfilerTrace::GetOrCreateSpecId
                          (&`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,0,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                            ::__l2::__CpuProfilerEventSpecId409,
                           "FPBDSoftBodyCollisionConstraint_ApplySimpleInternal",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
                           ,0x199);
                FCpuProfilerTrace::OutputBeginEvent
                          (`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,0,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                           ::__l2::__CpuProfilerEventSpecId409);
              }
              if (this->bEnableSimpleColliders != false) {
                pTVar3 = FSolverParticlesRange::GetPAndInvM(param_1,&local_58);
                local_1a0 = pTVar3->DataPtr;
                pTVar4 = FSolverParticlesRange::XArray(param_1,local_48);
                local_1a8 = pTVar4->DataPtr;
                local_d8 = &local_1a8;
                local_d0 = &local_1a0;
                local_160 = &local_e0;
                local_168 = UE::Core::Private::Function::
                            TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,0,1>'::__l2::<lambda_1>,void,int>
                            ::Call;
                local_e0 = this;
                local_c8 = param_3;
                local_c0 = param_2;
                PhysicsParallelFor(*(int *)&param_1->field_0x14,
                                   (TFunctionRef<void___cdecl(int)> *)&local_168,false);
              }
              if (bVar6) {
                FCpuProfilerTrace::OutputEndEvent();
              }
            }
            if (this->bUsePlanarConstraintForComplexColliders == false) {
              ApplyComplexInternal<0,0,0>(this,param_1,param_2,param_3);
              FinalizePlanarConstraints(this,param_1);
            }
            else {
              ApplyComplexInternal<0,0,1>(this,param_1,param_2,param_3);
              FinalizePlanarConstraints(this,param_1);
            }
          }
          else {
            if (bVar1 == false) {
              ApplySimpleInternal<0,1,0>(this,param_1,param_2,param_3);
            }
            else {
              bVar6 = -1 < CpuChannel->Enabled;
              if (bVar6) {
                FCpuProfilerTrace::GetOrCreateSpecId
                          (&`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,1,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                            ::__l2::__CpuProfilerEventSpecId409,
                           "FPBDSoftBodyCollisionConstraint_ApplySimpleInternal",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
                           ,0x199);
                FCpuProfilerTrace::OutputBeginEvent
                          (`private:_void___cdecl_Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,1,1>(Chaos::Softs::FSolverParticlesRange&___ptr64,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                           ::__l2::__CpuProfilerEventSpecId409);
              }
              if (this->bEnableSimpleColliders != false) {
                pTVar3 = FSolverParticlesRange::GetPAndInvM(param_1,&local_78);
                local_1b0 = pTVar3->DataPtr;
                pTVar4 = FSolverParticlesRange::XArray(param_1,&local_68);
                local_1b8 = pTVar4->DataPtr;
                local_100 = &local_1b8;
                local_f8 = &local_1b0;
                local_178 = UE::Core::Private::Function::
                            TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,1,1>'::__l2::<lambda_1>,void,int>
                            ::Call;
                local_170 = &local_108;
                local_108 = this;
                local_f0 = param_3;
                local_e8 = param_2;
                PhysicsParallelFor(*(int *)&param_1->field_0x14,
                                   (TFunctionRef<void___cdecl(int)> *)&local_178,false);
              }
              if (bVar6) {
                FCpuProfilerTrace::OutputEndEvent();
              }
            }
            if (this->bUsePlanarConstraintForComplexColliders == false) {
              ApplyComplexInternal<0,1,0>(this,param_1,param_2,param_3);
              FinalizePlanarConstraints(this,param_1);
            }
            else {
              ApplyComplexInternal<0,1,1>(this,param_1,param_2,param_3);
              FinalizePlanarConstraints(this,param_1);
            }
          }
        }
        else {
          ApplySimpleInternalISPC(this,param_1,param_2,param_3,bVar1);
          ApplyComplexInternalISPC
                    (this,param_1,param_2,param_3,this->bUsePlanarConstraintForComplexColliders);
          FinalizePlanarConstraints(this,param_1);
        }
      }
      else {
        bVar1 = this->bUsePlanarConstraintForSimpleColliders;
        if (bChaos_SoftBodyCollision_ISPC_Enabled == false) {
          if (bVar6) {
            if (bVar2) {
              if (bVar1 == false) {
                ApplySimpleInternal<1,0,0>(this,param_1,param_2,param_3);
              }
              if (this->bUsePlanarConstraintForComplexColliders == false) {
                ApplyComplexInternal<1,0,0>(this,param_1,param_2,param_3);
              }
            }
            else {
              if (bVar1 == false) {
                ApplySimpleInternal<1,1,0>(this,param_1,param_2,param_3);
              }
              if (this->bUsePlanarConstraintForComplexColliders == false) {
                ApplyComplexInternal<1,1,0>(this,param_1,param_2,param_3);
              }
            }
          }
          else if (bVar2) {
            if (bVar1 == false) {
              ApplySimpleInternal<0,0,0>(this,param_1,param_2,param_3);
            }
            if (this->bUsePlanarConstraintForComplexColliders == false) {
              ApplyComplexInternal<0,0,0>(this,param_1,param_2,param_3);
            }
          }
          else {
            if (bVar1 == false) {
              ApplySimpleInternal<0,1,0>(this,param_1,param_2,param_3);
            }
            if (this->bUsePlanarConstraintForComplexColliders == false) {
              ApplyComplexInternal<0,1,0>(this,param_1,param_2,param_3);
            }
          }
        }
        else {
          if (bVar1 == false) {
            ApplySimpleInternalISPC(this,param_1,param_2,param_3,false);
          }
          if (this->bUsePlanarConstraintForComplexColliders == false) {
            ApplyComplexInternalISPC(this,param_1,param_2,param_3,false);
          }
        }
        FPBDPlanarConstraints::Apply
                  ((FPBDPlanarConstraints *)&this->PlanarConstraint,param_1,param_2);
      }
    }
    else if (bVar2) {
      if (bVar6) {
        ApplyInternalCCD<0,1>(this,param_1,param_2,param_3);
      }
      else {
        ApplyInternalCCD<0,0>(this,param_1,param_2,param_3);
      }
    }
    else if (bVar6) {
      ApplyInternalCCD<1,1>(this,param_1,param_2,param_3);
    }
    else {
      ApplyInternalCCD<1,0>(this,param_1,param_2,param_3);
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FinalizePlanarConstraints @ 143d4f970

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::FinalizePlanarConstraints
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  void *_Dst;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  undefined4 uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 local_res18 [8];
  uint local_res20;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId708,
               "FPBDSoftBodyCollisionConstraint_FinalizePlanarConstraints",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
               ,0x2c4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId708);
  }
  pFVar13 = (this->HasPlanarData).AllocatorInstance.Data;
  uVar16 = 0;
  iVar8 = (this->HasPlanarData).ArrayNum;
  pFVar3 = pFVar13 + iVar8;
  while( true ) {
    if ((this->HasPlanarData).ArrayNum != iVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar13 == pFVar3) break;
    if (*pFVar13 != (FScriptContainerElement)0x0) {
      uVar16 = uVar16 + 1;
    }
    pFVar13 = pFVar13 + 1;
  }
  puVar2 = &(this->PlanarConstraint).field_0x10;
  iVar8 = *(int *)&(this->PlanarConstraint).field_0x18;
  puVar1 = &(this->PlanarConstraint).field_0x18;
  local_res20 = uVar16;
  if (iVar8 < (int)uVar16) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16 - iVar8,(ForAnyElementType *)puVar2,(int *)puVar1,
               (int *)&(this->PlanarConstraint).field_0x1c);
  }
  else {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if ((int)uVar16 < iVar8) {
      uVar15 = iVar8 - uVar16;
      if (((int)(uVar15 | uVar16) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar15 != 0) {
        _Dst = (void *)(*(longlong *)puVar2 + (longlong)(int)uVar16 * 4);
        iVar8 = (*(int *)puVar1 - uVar15) - uVar16;
        if (iVar8 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar15 * 4),(longlong)iVar8 << 2);
        }
        *(uint *)puVar1 = *(int *)puVar1 - uVar15;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)puVar2,*(int *)puVar1,
                   (int *)&(this->PlanarConstraint).field_0x1c);
      }
    }
  }
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            ((TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->PlanarConstraint).field_0x20,uVar16,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            ((TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->PlanarConstraint).field_0x30,uVar16,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            ((TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(this->PlanarConstraint).field_0x40,uVar16,Default);
  if (0 < (int)uVar16) {
    uVar15 = 0;
    uVar16 = 0;
    if (0 < *(int *)&param_1->field_0x14) {
      lVar10 = 0;
      local_78 = 0;
      lVar17 = 0;
      local_80 = 0;
      local_88 = 0;
      do {
        uVar11 = ~uVar16 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar16 < (this->HasPlanarData).ArrayNum) {
          uVar9 = uVar11;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((this->HasPlanarData).AllocatorInstance.Data[local_78] != (FScriptContainerElement)0x0)
        {
          uVar14 = ~uVar15 >> 0x1f;
          uVar9 = 0;
          if ((int)uVar15 < *(int *)&(this->PlanarConstraint).field_0x18) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(uint *)(local_88 + *(longlong *)&(this->PlanarConstraint).field_0x10) = uVar16;
          uVar9 = 0;
          if ((int)uVar16 < (this->PlanarDataPositions).ArrayNum) {
            uVar9 = uVar11;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar3 = (this->PlanarDataPositions).AllocatorInstance.Data;
          uVar4 = *(undefined8 *)(pFVar3 + lVar17);
          uVar12 = *(undefined4 *)(pFVar3 + lVar17 + 8);
          uVar9 = 0;
          if ((int)uVar15 < *(int *)&(this->PlanarConstraint).field_0x28) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar5 = *(longlong *)&(this->PlanarConstraint).field_0x20;
          *(undefined8 *)(lVar10 + lVar5) = uVar4;
          *(undefined4 *)(lVar10 + 8 + lVar5) = uVar12;
          uVar9 = 0;
          if ((int)uVar16 < (this->PlanarDataNormals).ArrayNum) {
            uVar9 = uVar11;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar3 = (this->PlanarDataNormals).AllocatorInstance.Data;
          uVar4 = *(undefined8 *)(pFVar3 + lVar17);
          uVar12 = *(undefined4 *)(pFVar3 + lVar17 + 8);
          uVar9 = 0;
          if ((int)uVar15 < *(int *)&(this->PlanarConstraint).field_0x38) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar5 = *(longlong *)&(this->PlanarConstraint).field_0x30;
          *(undefined8 *)(lVar5 + lVar10) = uVar4;
          *(undefined4 *)(lVar5 + 8 + lVar10) = uVar12;
          if (((int)uVar16 < 0) || ((this->PlanarDataVelocities).ArrayNum <= (int)uVar16)) {
            uVar19 = 0;
            uVar12 = 0;
            uVar20 = 0;
          }
          else {
            if (((int)uVar16 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar3 = (this->PlanarDataVelocities).AllocatorInstance.Data;
            uVar4 = *(undefined8 *)(pFVar3 + lVar17);
            uVar19 = (undefined4)uVar4;
            uVar20 = (undefined4)((ulonglong)uVar4 >> 0x20);
            uVar12 = *(undefined4 *)(pFVar3 + lVar17 + 8);
          }
          uVar9 = 0;
          if ((int)uVar15 < *(int *)&(this->PlanarConstraint).field_0x48) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar15 = uVar15 + 1;
          lVar10 = *(longlong *)&(this->PlanarConstraint).field_0x40;
          local_88 = local_88 + 4;
          *(ulonglong *)(lVar10 + local_80) = CONCAT44(uVar20,uVar19);
          *(undefined4 *)(lVar10 + 8 + local_80) = uVar12;
          lVar10 = local_80 + 0xc;
          local_80 = lVar10;
        }
        local_78 = local_78 + 1;
        uVar16 = uVar16 + 1;
        lVar17 = lVar17 + 0xc;
      } while ((int)uVar16 < *(int *)&param_1->field_0x14);
      if (uVar15 == local_res20) goto LAB_143d4fefe;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ConstraintIndex == NumPlanarConstraints",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
                       ,0x2e2,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
LAB_143d4fefe:
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InitPlanarConstraints @ 143d584d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::InitPlanarConstraints
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,bool param_2)

{
  bool local_res18 [8];
  
  *(undefined4 *)&(this->PlanarConstraint).field_0x18 = 0;
  if (*(int *)&(this->PlanarConstraint).field_0x1c < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&(this->PlanarConstraint).field_0x10,0,
               (int *)&(this->PlanarConstraint).field_0x1c);
  }
  *(undefined4 *)&(this->PlanarConstraint).field_0x28 = 0;
  if (*(int *)&(this->PlanarConstraint).field_0x2c < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&(this->PlanarConstraint).field_0x20,0,
               (int *)&(this->PlanarConstraint).field_0x2c);
  }
  *(undefined4 *)&(this->PlanarConstraint).field_0x38 = 0;
  if (*(int *)&(this->PlanarConstraint).field_0x3c < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&(this->PlanarConstraint).field_0x30,0,
               (int *)&(this->PlanarConstraint).field_0x3c);
  }
  *(undefined4 *)&(this->PlanarConstraint).field_0x48 = 0;
  if (*(int *)&(this->PlanarConstraint).field_0x4c < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&(this->PlanarConstraint).field_0x40,0,
               (int *)&(this->PlanarConstraint).field_0x4c);
  }
  local_res18[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init
            (&this->HasPlanarData,local_res18,*(int *)&param_1->field_0x14);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->PlanarDataPositions,*(int *)&param_1->field_0x14,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->PlanarDataNormals,*(int *)&param_1->field_0x14,Default);
  if (param_2) {
    TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->PlanarDataVelocities,*(int *)&param_1->field_0x14,Default);
  }
  return;
}

// UpdateLinearSystem @ 143d7dee0

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::UpdateLinearSystem
          (FPBDSoftBodyCollisionConstraintBase *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3,
          FEvolutionLinearSystem *param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  longlong local_res20;
  code *local_88;
  FPBDSoftBodyCollisionConstraintBase **local_80;
  FPBDSoftBodyCollisionConstraintBase *local_78;
  float local_70;
  float local_6c;
  FSolverParticlesRange *local_68;
  longlong *local_60;
  TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *local_58;
  FEvolutionLinearSystem *local_50;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1218,"FPBDSoftBodyCollisionConstraint_UpdateLinearSystem",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSoftBodyCollisionConstraint.cpp"
               ,0x4c2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1218);
  }
  if ((param_3->ArrayNum != 0) && (this->ProximityStiffness != 0.0)) {
    TBlockSparseSymmetricLinearSystem<float,3>::ReserveForParallelAdd
              (&param_4->Matrix,*(int *)&param_1->field_0x14,0);
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x56,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar2 = *(longlong *)&param_1->field_0x8;
    if (((*(int *)&param_1->field_0x10 < 0) ||
        (*(int *)(lVar2 + 0xb0) < *(int *)&param_1->field_0x10 + *(int *)&param_1->field_0x14)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x4b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_1->field_0x10;
    lVar2 = *(longlong *)(lVar2 + 0xa8);
    if ((*(int *)&param_1->field_0x14 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_60 = &local_res20;
    local_6c = this->FrictionCoefficient;
    if (__real_3f800000 <= this->FrictionCoefficient) {
      local_6c = __real_3f800000;
    }
    local_80 = &local_78;
    if (local_6c <= 0.0) {
      local_6c = 0.0;
    }
    local_50 = param_4;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::UpdateLinearSystem'::__l2::<lambda_1>,void,int>
               ::Call;
    local_res20 = (longlong)iVar1 * 0x10 + lVar2;
    local_78 = this;
    local_70 = param_2;
    local_68 = param_1;
    local_58 = param_3;
    PhysicsParallelFor(*(int *)&param_1->field_0x14,(TFunctionRef<void___cdecl(int)> *)&local_88,
                       false);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

