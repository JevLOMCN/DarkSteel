// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// ~FBlendedXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> @ 143a383e0

void __thiscall
Chaos::Softs::FBlendedXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
~FBlendedXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>
          (FBlendedXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)
       &___7__FBlendedXPBDCorotatedConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_;
  pFVar1 = (this->C2Contribution).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->C1Contribution).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
  ~FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>
            ((FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this);
  return;
}

// ApplyInSerial @ 143a4ee40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FBlendedXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInSerial
          (FBlendedXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,float param_2,int param_3)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined1 local_d0 [8];
  float local_c8 [10];
  undefined1 local_a0 [8];
  float local_98 [10];
  ulonglong local_70;
  
  uVar5 = __real_3a83126f;
  local_70 = __security_cookie.value ^ (ulonglong)auStack_108;
  lVar12 = (longlong)param_3;
  local_e0 = CONCAT44(local_e0._4_4_,__real_3a83126f);
  local_e8 = CONCAT44(local_e8._4_4_,param_3);
  (**(code **)(this->_padding_ + 0x20))(this,local_d0,param_1,param_2);
  pfVar11 = local_c8;
  local_d8 = lVar12 << 4;
  lVar10 = 0;
  do {
    lVar9 = local_d8;
    iVar2 = (int)this->_padding_;
    uVar7 = 0;
    if (param_3 < iVar2) {
      uVar7 = (uint)~param_3 >> 0x1f;
    }
    if (uVar7 == 0) {
      local_e8 = lVar12;
      local_e0 = (longlong)iVar2;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar2 = *(int *)&(param_1->MPAndInvM).field_0x10;
    uVar7 = *(uint *)(lVar10 + lVar9 + this->_padding_);
    lVar9 = (longlong)(int)uVar7;
    uVar8 = 0;
    if ((int)uVar7 < iVar2) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      local_e8 = lVar9;
      local_e0 = (longlong)iVar2;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar3 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
    lVar10 = lVar10 + 4;
    *(float *)(lVar3 + lVar9 * 0x10) = pfVar11[-2] + *(float *)(lVar3 + lVar9 * 0x10);
    *(float *)(lVar3 + 4 + lVar9 * 0x10) = pfVar11[-1] + *(float *)(lVar3 + 4 + lVar9 * 0x10);
    fVar1 = *pfVar11;
    pfVar11 = pfVar11 + 3;
    *(float *)(lVar3 + 8 + lVar9 * 0x10) = *(float *)(lVar3 + 8 + lVar9 * 0x10) + fVar1;
  } while (lVar10 < 0x10);
  local_e0 = CONCAT44(local_e0._4_4_,uVar5);
  local_e8 = CONCAT44(local_e8._4_4_,param_3);
  (**(code **)(this->_padding_ + 0x18))(this,local_a0,param_1,param_2);
  lVar10 = 0;
  pfVar11 = local_98;
  do {
    iVar2 = (int)this->_padding_;
    local_e0 = (longlong)iVar2;
    uVar7 = 0;
    if (param_3 < iVar2) {
      uVar7 = (uint)~param_3 >> 0x1f;
    }
    if (uVar7 == 0) {
      local_e8 = lVar12;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar2 = *(int *)&(param_1->MPAndInvM).field_0x10;
    local_e0 = (longlong)iVar2;
    uVar7 = *(uint *)(local_d8 + lVar10 + this->_padding_);
    lVar9 = (longlong)(int)uVar7;
    uVar8 = 0;
    if ((int)uVar7 < iVar2) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      local_e8 = lVar9;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar3 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
    lVar10 = lVar10 + 4;
    *(float *)(lVar3 + lVar9 * 0x10) = pfVar11[-2] + *(float *)(lVar3 + lVar9 * 0x10);
    *(float *)(lVar3 + 4 + lVar9 * 0x10) = pfVar11[-1] + *(float *)(lVar3 + 4 + lVar9 * 0x10);
    fVar1 = *pfVar11;
    pfVar11 = pfVar11 + 3;
    *(float *)(lVar3 + 8 + lVar9 * 0x10) = *(float *)(lVar3 + 8 + lVar9 * 0x10) + fVar1;
  } while (lVar10 < 0x10);
  return;
}

// GetDeterminantDelta @ 143a697c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<Chaos::TVector<float,3>,4> * __thiscall
Chaos::Softs::FBlendedXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
GetDeterminantDelta(FBlendedXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
                   TVector<Chaos::TVector<float,3>,4> *__return_storage_ptr__,
                   FSolverParticles *param_1,float param_2,int param_3,float param_4)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  code *pcVar5;
  TVector<float,3> *pTVar6;
  float fVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  PMatrix<float,3,3> *pPVar12;
  PMatrix<float,3,3> *pPVar13;
  TVector<Chaos::TVector<float,3>,4> *pTVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  char local_358;
  longlong local_350;
  uint local_344;
  longlong local_340;
  float *local_338;
  longlong local_330;
  uint local_328;
  longlong local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  longlong local_2e8;
  FScriptContainerElement *local_2e0;
  TVector<Chaos::TVector<float,3>,4> *local_2d8;
  float local_2d0 [24];
  TVector<Chaos::TVector<float,3>,4> local_270;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208 [2];
  float afStack_200 [2];
  PMatrix<float,3,3> local_1f8;
  TMatrix<float> local_1b8;
  PMatrix<float,3,3> local_178;
  PMatrix<float,3,3> local_138;
  PMatrix<float,3,3> local_f8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_388;
  lVar18 = (longlong)param_3;
  bVar21 = CpuChannel->Enabled < 0;
  local_2d8 = __return_storage_ptr__;
  if (bVar21) {
    local_358 = '\0';
  }
  else {
    local_358 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`protected:_virtual_class_Chaos::TVector<Chaos::TVector<float,3>,4>___cdecl_Chaos::Softs::FBlendedXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::GetDeterminantDelta(Chaos::Softs::FSolverParticles_const&___ptr64,float,int,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId106,"STAT_ChaosBlendedXPBDCorotatedApplyDet",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\BlendedXPBDCorotatedConstraints.h"
               ,0x6a);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_virtual_class_Chaos::TVector<Chaos::TVector<float,3>,4>___cdecl_Chaos::Softs::FBlendedXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::GetDeterminantDelta(Chaos::Softs::FSolverParticles_const&___ptr64,float,int,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId106);
  }
  pPVar12 = FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ElementDmInv
                      ((FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this,
                       &local_178,param_3);
  pPVar13 = FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::Ds
                      ((FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this,
                       &local_138,param_3,param_1);
  VectorMatrixMultiply(&local_1b8,(TMatrix<float> *)pPVar12,(TMatrix<float> *)pPVar13);
  local_208[0] = local_1b8.M[3][0];
  local_208[1] = local_1b8.M[3][1];
  afStack_200[0] = local_1b8.M[3][2];
  afStack_200[1] = local_1b8.M[3][3];
  local_238 = local_1b8.M[0][0];
  fStack_234 = local_1b8.M[0][1];
  fStack_230 = local_1b8.M[0][2];
  fStack_22c = local_1b8.M[0][3];
  local_228 = local_1b8.M[1][0];
  fStack_224 = local_1b8.M[1][1];
  fStack_220 = local_1b8.M[1][2];
  fStack_21c = local_1b8.M[1][3];
  local_218 = local_1b8.M[2][0];
  fStack_214 = local_1b8.M[2][1];
  fStack_210 = local_1b8.M[2][2];
  fStack_20c = local_1b8.M[2][3];
  pPVar12 = FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ElementDmInv
                      ((FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this,
                       &local_f8,param_3);
  fVar7 = __real_3f800000;
  local_1f8._4_4_ = *(undefined4 *)&pPVar12->field_0x10;
  local_1f8._16_4_ = *(undefined4 *)&pPVar12->field_0x4;
  local_1f8._24_4_ = *(undefined4 *)&pPVar12->field_0x24;
  local_1f8._36_4_ = *(undefined4 *)&pPVar12->field_0x18;
  local_1f8._20_4_ = *(undefined4 *)&pPVar12->field_0x14;
  local_1f8._32_4_ = *(undefined4 *)&pPVar12->field_0x8;
  local_1f8._0_4_ = *(undefined4 *)pPVar12;
  local_1f8._40_4_ = *(undefined4 *)&pPVar12->field_0x28;
  local_1f8._8_4_ = *(undefined4 *)&pPVar12->field_0x20;
  local_1f8._48_8_ = ___xmm_3f800000000000000000000000000000;
  local_1f8._56_8_ = _UNK_150689648;
  local_1f8._12_4_ = 0;
  local_1f8._28_4_ = 0;
  local_1f8._44_4_ = 0;
  fVar25 = ((local_1b8.M[2][2] * local_1b8.M[1][1] - local_1b8.M[1][2] * local_1b8.M[2][1]) *
            local_1b8.M[0][0] -
           (local_1b8.M[1][0] * local_1b8.M[2][2] - local_1b8.M[2][0] * local_1b8.M[1][2]) *
           local_1b8.M[0][1]) +
           (local_1b8.M[1][0] * local_1b8.M[2][1] - local_1b8.M[2][0] * local_1b8.M[1][1]) *
           local_1b8.M[0][2];
  if (param_4 <= fVar25 - __real_3f800000) {
    FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::GetDeterminantGradient
              ((FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this,&local_270,
               (PMatrix<float,3,3> *)&local_238,&local_1f8);
    iVar4 = (int)this->_padding_;
    lVar15 = 0;
    local_344 = (uint)~param_3 >> 0x1f;
    uVar9 = 0;
    uVar10 = uVar9;
    if (param_3 < iVar4) {
      uVar10 = local_344;
    }
    if ((uVar10 == 0) &&
       (local_368 = lVar18, local_360 = (longlong)iVar4,
       bVar21 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
      return pTVar14;
    }
    iVar4 = (int)this->_padding_;
    uVar17 = param_3 * 2 + 1;
    local_320 = CONCAT44(local_320._4_4_,uVar17);
    local_328 = ~uVar17 >> 0x1f;
    uVar10 = uVar9;
    if ((int)uVar17 < iVar4) {
      uVar10 = local_328;
    }
    fVar24 = __real_40000000 /
             (*(float *)(this->_padding_ + lVar18 * 4) * *(float *)&this->_padding_ *
             param_2 * param_2);
    if (uVar10 == 0) {
      local_368 = (longlong)(int)uVar17;
      local_360 = (longlong)iVar4;
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar21) {
        pcVar5 = (code *)swi(3);
        pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
        return pTVar14;
      }
    }
    pTVar14 = &local_270;
    local_338 = (float *)(longlong)(int)uVar17;
    local_350 = 0;
    fVar22 = fVar24 * *(float *)(this->_padding_ + (longlong)local_338 * 4);
    local_330 = lVar18 << 4;
    do {
      local_340 = 3;
      do {
        lVar20 = local_350;
        iVar4 = (int)this->_padding_;
        uVar10 = uVar9;
        if (param_3 < iVar4) {
          uVar10 = local_344;
        }
        if ((uVar10 == 0) &&
           (local_368 = lVar18, local_360 = (longlong)iVar4,
           bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar21)) {
          pcVar5 = (code *)swi(3);
          pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
          return pTVar14;
        }
        iVar4 = (int)param_1->_padding_;
        uVar10 = *(uint *)(local_330 + this->_padding_ + lVar20);
        uVar17 = uVar9;
        if ((int)uVar10 < iVar4) {
          uVar17 = ~uVar10 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_368 = (longlong)(int)uVar10, local_360 = (longlong)iVar4,
           bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar21)) {
          pcVar5 = (code *)swi(3);
          pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
          return pTVar14;
        }
        pTVar6 = pTVar14->V;
        pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)&pTVar14->V[0].field_0x4;
        local_340 = local_340 + -1;
        fVar24 = fVar24 + *(float *)pTVar6 *
                          *(float *)(param_1->_padding_ + (longlong)(int)uVar10 * 4) *
                          *(float *)pTVar6;
      } while (local_340 != 0);
      local_350 = local_350 + 4;
    } while (local_350 < 0x10);
    iVar4 = (int)this->_padding_;
    fVar24 = ((fVar7 - fVar25) - fVar22) / fVar24;
    uVar9 = 0;
    uVar10 = uVar9;
    if ((int)local_320 < iVar4) {
      uVar10 = local_328;
    }
    if (uVar10 == 0) {
      local_368 = (longlong)local_338;
      local_360 = (longlong)iVar4;
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar21) {
        pcVar5 = (code *)swi(3);
        pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
        return pTVar14;
      }
    }
    local_2d0[0] = 0.0;
    local_2d0[1] = 0.0;
    local_2d0[2] = 0.0;
    local_2d0[3] = 0.0;
    local_2d0[8] = 0.0;
    local_2d0[9] = 0.0;
    local_2d0[10] = 0.0;
    local_2d0[0xb] = 0.0;
    *(float *)(this->_padding_ + (longlong)local_338 * 4) =
         fVar24 + *(float *)(this->_padding_ + (longlong)local_338 * 4);
    local_2d0[4] = 0.0;
    local_2d0[5] = 0.0;
    local_2d0[6] = 0.0;
    local_2d0[7] = 0.0;
    local_340 = 0;
    local_350 = local_330;
    do {
      local_338 = (float *)0x3;
      pfVar19 = (float *)((longlong)local_2d0 + local_340);
      local_320 = (longlong)&local_270 + (local_340 - (longlong)pfVar19);
      do {
        lVar20 = local_350;
        iVar4 = (int)this->_padding_;
        uVar10 = uVar9;
        if (param_3 < iVar4) {
          uVar10 = local_344;
        }
        if ((uVar10 == 0) &&
           (local_368 = lVar18, local_360 = (longlong)iVar4,
           bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar21)) {
          pcVar5 = (code *)swi(3);
          pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
          return pTVar14;
        }
        iVar4 = (int)param_1->_padding_;
        uVar10 = *(uint *)(lVar20 + this->_padding_);
        uVar17 = uVar9;
        if ((int)uVar10 < iVar4) {
          uVar17 = ~uVar10 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_368 = (longlong)(int)uVar10, local_360 = (longlong)iVar4,
           bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar21)) {
          pcVar5 = (code *)swi(3);
          pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
          return pTVar14;
        }
        *pfVar19 = *(float *)(param_1->_padding_ + (longlong)(int)uVar10 * 4) *
                   *(float *)((longlong)pfVar19 + local_320) * fVar24;
        pfVar19 = pfVar19 + 1;
        local_338 = (float *)((longlong)local_338 + -1);
      } while (local_338 != (float *)0x0);
      local_350 = local_350 + 4;
      local_340 = local_340 + 0xc;
    } while (local_340 < 0x30);
    local_350 = lVar18 * 0x30;
    local_2d0[0xc] = 0.0;
    local_2d0[0xd] = 0.0;
    local_2d0[0xe] = 0.0;
    local_2d0[0xf] = 0.0;
    local_2d0[0x10] = 0.0;
    local_2d0[0x11] = 0.0;
    local_2d0[0x12] = 0.0;
    local_2d0[0x13] = 0.0;
    local_2d0[0x14] = 0.0;
    local_2d0[0x15] = 0.0;
    local_2d0[0x16] = 0.0;
    local_2d0[0x17] = 0.0;
    lVar20 = lVar15;
    do {
      local_340 = 3;
      local_338 = (float *)((longlong)local_2d0 + lVar20 + 0x30);
      do {
        uVar10 = local_344;
        iVar4 = (int)this->_padding_;
        uVar17 = uVar9;
        if (param_3 < iVar4) {
          uVar17 = local_344;
        }
        if ((uVar17 == 0) &&
           (local_368 = lVar18, local_360 = (longlong)iVar4,
           bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar21)) {
          pcVar5 = (code *)swi(3);
          pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
          return pTVar14;
        }
        local_320 = this->_padding_;
        iVar4 = (this->C2Contribution).ArrayNum;
        uVar17 = uVar9;
        if (param_3 < iVar4) {
          uVar17 = uVar10;
        }
        if ((uVar17 == 0) &&
           (local_368 = lVar18, local_360 = (longlong)iVar4,
           bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar21)) {
          pcVar5 = (code *)swi(3);
          pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
          return pTVar14;
        }
        iVar16 = param_3 * 2 + 1;
        local_2e0 = (this->C2Contribution).AllocatorInstance.Data + local_350;
        iVar4 = (int)this->_padding_;
        uVar17 = 0;
        uVar10 = uVar17;
        if (iVar16 < iVar4) {
          uVar10 = local_328;
        }
        if (uVar10 == 0) {
          local_368 = (longlong)iVar16;
          local_360 = (longlong)iVar4;
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar21) {
            pcVar5 = (code *)swi(3);
            pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
            return pTVar14;
          }
        }
        local_2e8 = this->_padding_;
        iVar4 = (int)param_1->_padding_;
        uVar10 = *(uint *)(local_320 + local_330);
        uVar11 = uVar17;
        if ((int)uVar10 < iVar4) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (local_368 = (longlong)(int)uVar10, local_360 = (longlong)iVar4,
           bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar21)) {
          pcVar5 = (code *)swi(3);
          pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
          return pTVar14;
        }
        uVar11 = local_344;
        cVar8 = local_358;
        pfVar19 = (float *)(&local_270.V[0].field_0x0 + lVar20);
        pFVar1 = local_2e0 + lVar20;
        lVar20 = lVar20 + 4;
        *local_338 = *(float *)(param_1->_padding_ + (longlong)(int)uVar10 * 4) * *pfVar19 *
                     *(float *)(local_2e8 + 4 + lVar18 * 8) - *(float *)pFVar1;
        local_338 = local_338 + 1;
        local_340 = local_340 + -1;
      } while (local_340 != 0);
      local_330 = local_330 + 4;
    } while (lVar20 < 0x30);
    local_318 = 0;
    uStack_310 = 0;
    local_308 = 0;
    uStack_300 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    do {
      fVar25 = this->Zeta;
      fVar23 = fVar7 - fVar25;
      fVar24 = *(float *)((longlong)local_2d0 + lVar15 + 0x38);
      fVar22 = *(float *)((longlong)local_2d0 + lVar15 + 8);
      fVar2 = *(float *)((longlong)local_2d0 + lVar15 + 4);
      fVar3 = *(float *)((longlong)local_2d0 + lVar15 + 0x34);
      *(float *)((longlong)&local_318 + lVar15) =
           fVar23 * *(float *)((longlong)local_2d0 + lVar15) +
           fVar25 * *(float *)((longlong)local_2d0 + lVar15 + 0x30);
      *(float *)((longlong)&local_318 + lVar15 + 4) = fVar23 * fVar2 + fVar25 * fVar3;
      *(float *)((longlong)&uStack_310 + lVar15) = fVar23 * fVar22 + fVar25 * fVar24;
      lVar15 = lVar15 + 0xc;
    } while (lVar15 < 0x30);
    iVar4 = (this->C2Contribution).ArrayNum;
    uVar10 = uVar17;
    if (param_3 < iVar4) {
      uVar10 = local_344;
    }
    if ((uVar10 == 0) &&
       (local_368 = lVar18, local_360 = (longlong)iVar4,
       bVar21 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
      return pTVar14;
    }
    lVar15 = local_350;
    pFVar1 = (this->C2Contribution).AllocatorInstance.Data;
    *(float *)(pFVar1 + local_350) = (float)local_318 + *(float *)(pFVar1 + local_350);
    *(float *)(pFVar1 + local_350 + 4) = local_318._4_4_ + *(float *)(pFVar1 + local_350 + 4);
    *(float *)(pFVar1 + local_350 + 8) = (float)uStack_310 + *(float *)(pFVar1 + local_350 + 8);
    iVar4 = (this->C2Contribution).ArrayNum;
    uVar10 = uVar17;
    if (param_3 < iVar4) {
      uVar10 = uVar11;
    }
    if ((uVar10 == 0) &&
       (local_368 = lVar18, local_360 = (longlong)iVar4,
       bVar21 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
      return pTVar14;
    }
    pFVar1 = (this->C2Contribution).AllocatorInstance.Data;
    *(float *)(pFVar1 + lVar15 + 0xc) = uStack_310._4_4_ + *(float *)(pFVar1 + lVar15 + 0xc);
    *(float *)(pFVar1 + lVar15 + 0x10) = (float)local_308 + *(float *)(pFVar1 + lVar15 + 0x10);
    *(float *)(pFVar1 + lVar15 + 0x14) = local_308._4_4_ + *(float *)(pFVar1 + lVar15 + 0x14);
    iVar4 = (this->C2Contribution).ArrayNum;
    uVar10 = uVar17;
    if (param_3 < iVar4) {
      uVar10 = uVar11;
    }
    if ((uVar10 == 0) &&
       (local_368 = lVar18, local_360 = (longlong)iVar4,
       bVar21 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
      return pTVar14;
    }
    pFVar1 = (this->C2Contribution).AllocatorInstance.Data;
    *(float *)(pFVar1 + lVar15 + 0x18) = (float)uStack_300 + *(float *)(pFVar1 + lVar15 + 0x18);
    *(float *)(pFVar1 + lVar15 + 0x1c) = uStack_300._4_4_ + *(float *)(pFVar1 + lVar15 + 0x1c);
    *(float *)(pFVar1 + lVar15 + 0x20) = (float)local_2f8 + *(float *)(pFVar1 + lVar15 + 0x20);
    iVar4 = (this->C2Contribution).ArrayNum;
    if (param_3 < iVar4) {
      uVar17 = uVar11;
    }
    if ((uVar17 == 0) &&
       (local_368 = lVar18, local_360 = (longlong)iVar4,
       bVar21 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar5)();
      return pTVar14;
    }
    __return_storage_ptr__ = local_2d8;
    pFVar1 = (this->C2Contribution).AllocatorInstance.Data;
    *(float *)(pFVar1 + lVar15 + 0x24) = local_2f8._4_4_ + *(float *)(pFVar1 + lVar15 + 0x24);
    *(float *)(pFVar1 + lVar15 + 0x28) = (float)uStack_2f0 + *(float *)(pFVar1 + lVar15 + 0x28);
    *(float *)(pFVar1 + lVar15 + 0x2c) = uStack_2f0._4_4_ + *(float *)(pFVar1 + lVar15 + 0x2c);
    *(undefined8 *)local_2d8->V = local_318;
    *(undefined8 *)&local_2d8->V[0].field_0x8 = uStack_310;
    *(undefined8 *)&local_2d8->V[1].field_0x4 = local_308;
    *(undefined8 *)(local_2d8->V + 2) = uStack_300;
    *(undefined8 *)&local_2d8->V[2].field_0x8 = local_2f8;
    *(undefined8 *)&local_2d8->V[3].field_0x4 = uStack_2f0;
    if (cVar8 != '\0') {
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
    if (!bVar21) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return __return_storage_ptr__;
}

// GetPolarDelta @ 143a6c3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TVector<Chaos::TVector<float,3>,4> * __thiscall
Chaos::Softs::FBlendedXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::GetPolarDelta
          (FBlendedXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          TVector<Chaos::TVector<float,3>,4> *__return_storage_ptr__,FSolverParticles *param_1,
          float param_2,int param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  TVector<float,3> *pTVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_ChaosXPBDCorotatedPolar> FVar23;
  PMatrix<float,3,3> *pPVar24;
  PMatrix<float,3,3> *pPVar25;
  float *pfVar26;
  TVector<Chaos::TVector<float,3>,4> *pTVar27;
  longlong lVar28;
  uint uVar29;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  uint uVar35;
  bool bVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStackY_4b8 [32];
  float *local_440;
  longlong local_438;
  FName local_430;
  longlong local_420;
  float local_408 [4];
  float local_3f8 [4];
  float local_3e8 [8];
  FColor_u_0 local_3c8 [2];
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  FName local_390;
  TVector<Chaos::TVector<float,3>,4> *local_388;
  undefined1 local_378 [32];
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  FName local_338;
  FScriptContainerElement *local_328;
  undefined1 local_318 [24];
  float afStack_300 [2];
  float local_2f8;
  float fStack_2f4;
  float afStack_2f0 [2];
  float local_2e8 [2];
  float afStack_2e0 [2];
  PMatrix<float,3,3> local_2d8;
  float local_298 [24];
  FName local_238;
  TVector<Chaos::TVector<float,3>,4> local_230;
  PMatrix<float,3,3> local_1f8;
  TMatrix<float> local_1b8;
  PMatrix<float,3,3> local_178;
  PMatrix<float,3,3> local_138;
  PMatrix<float,3,3> local_f8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  bVar36 = -1 < CpuChannel->Enabled;
  local_388 = __return_storage_ptr__;
  if (bVar36) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`protected:_virtual_class_Chaos::TVector<Chaos::TVector<float,3>,4>___cdecl_Chaos::Softs::FBlendedXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::GetPolarDelta(Chaos::Softs::FSolverParticles_const&___ptr64,float,int,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId168,"STAT_ChaosBlendedXPBDCorotatedApplyPolar",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\BlendedXPBDCorotatedConstraints.h"
               ,0xa8);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_virtual_class_Chaos::TVector<Chaos::TVector<float,3>,4>___cdecl_Chaos::Softs::FBlendedXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::GetPolarDelta(Chaos::Softs::FSolverParticles_const&___ptr64,float,int,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId168);
  }
  lVar28 = 0;
  uVar35 = 0;
  FVar23 = StatPtr_STAT_ChaosXPBDCorotatedPolar;
  if (StatPtr_STAT_ChaosXPBDCorotatedPolar ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosXPBDCorotatedPolar>)0x0) {
    pFVar22 = ::FName::FName(&local_238,"STAT_ChaosXPBDCorotatedPolar");
    FVar23 = (FThreadSafeStaticStat<FStat_STAT_ChaosXPBDCorotatedPolar>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosXPBDCorotatedPolar,*pFVar22,
                        L"Chaos XPBD Corotated Constraint Polar Compute","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_430 = *(FName *)FVar23;
  local_338.ComparisonIndex.Value = 0;
  local_338.Number = 0;
  bVar16 = false;
  bVar17 = false;
  if ((local_430.ComparisonIndex.Value.Value != 0) || (local_430.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents == 0) {
      bVar9 = false;
      bVar10 = false;
    }
    else {
      local_3c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_3c8[0]._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
      bVar16 = false;
      bVar17 = true;
      if (CpuChannel->Enabled < 0) {
        bVar9 = false;
        bVar10 = true;
      }
      else {
        local_390.ComparisonIndex.Value = local_430.ComparisonIndex.Value.Value;
        local_390.Number = local_430.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_390,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\BlendedXPBDCorotatedConstraints.h"
                   ,0xa9);
        bVar9 = true;
        bVar10 = true;
        bVar16 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_430,CycleScopeStart);
      bVar16 = true;
      goto LAB_143a6c5ec;
    }
  }
  bVar10 = bVar17;
  bVar9 = bVar16;
  bVar16 = false;
  local_430 = local_338;
LAB_143a6c5ec:
  pPVar24 = FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ElementDmInv
                      ((FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this,
                       &local_178,param_3);
  pPVar25 = FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::Ds
                      ((FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this,
                       &local_138,param_3,param_1);
  VectorMatrixMultiply(&local_1b8,(TMatrix<float> *)pPVar24,(TMatrix<float> *)pPVar25);
  uVar14 = _UNK_150689648;
  uVar12 = ___xmm_3f800000000000000000000000000000;
  local_318._0_4_ = local_1b8.M[0][0];
  local_318._4_4_ = local_1b8.M[0][1];
  local_318._8_4_ = local_1b8.M[0][2];
  local_318._12_4_ = local_1b8.M[0][3];
  fVar39 = 0.0;
  local_318._16_4_ = local_1b8.M[1][0];
  local_318._20_4_ = local_1b8.M[1][1];
  afStack_300[0] = local_1b8.M[1][2];
  afStack_300[1] = local_1b8.M[1][3];
  local_2f8 = local_1b8.M[2][0];
  fStack_2f4 = local_1b8.M[2][1];
  afStack_2f0[0] = local_1b8.M[2][2];
  afStack_2f0[1] = local_1b8.M[2][3];
  local_2e8[0] = local_1b8.M[3][0];
  local_2e8[1] = local_1b8.M[3][1];
  afStack_2e0[0] = local_1b8.M[3][2];
  afStack_2e0[1] = local_1b8.M[3][3];
  local_378._0_8_ = 0;
  local_378._16_8_ = 0;
  local_358 = 0;
  local_378._8_8_ = 0;
  local_378._24_8_ = 0;
  local_350 = 0;
  local_348 = ___xmm_3f800000000000000000000000000000;
  uStack_340 = _UNK_150689648;
  local_2d8._0_8_ = 0;
  local_2d8._16_8_ = 0;
  local_2d8._32_8_ = 0;
  local_2d8._8_8_ = 0;
  local_2d8._24_8_ = 0;
  local_2d8._40_8_ = 0;
  local_2d8._48_8_ = ___xmm_3f800000000000000000000000000000;
  local_2d8._56_8_ = _UNK_150689648;
  PolarDecomposition<float>
            ((PMatrix<float,3,3> *)local_318,(PMatrix<float,3,3> *)local_378,&local_2d8);
  uVar15 = _UNK_150689648;
  uVar13 = ___xmm_3f800000000000000000000000000000;
  pfVar26 = local_3e8;
  lVar30 = 3;
  local_3e8[0] = local_2f8 - (float)local_358;
  local_3e8[1] = fStack_2f4 - local_358._4_4_;
  local_3e8[2] = afStack_2f0[0] - (float)local_350;
  do {
    ___xmm_3f800000000000000000000000000000 = (undefined4)uVar12;
    _UNK_150689644 = SUB84(uVar12,4);
    local_3e8[4] = (float)___xmm_3f800000000000000000000000000000;
    local_3e8[5] = (float)_UNK_150689644;
    _UNK_150689648 = (undefined4)uVar14;
    _UNK_15068964c = SUB84(uVar14,4);
    local_3e8[6] = (float)_UNK_150689648;
    local_3e8[7] = (float)_UNK_15068964c;
    local_3e8[3] = 0.0;
    pfVar1 = pfVar26 + -8;
    ___xmm_3f800000000000000000000000000000 = (undefined4)uVar12;
    _UNK_150689644 = SUB84(uVar12,4);
    local_3e8[4] = (float)___xmm_3f800000000000000000000000000000;
    local_3e8[5] = (float)_UNK_150689644;
    _UNK_150689648 = (undefined4)uVar14;
    _UNK_15068964c = SUB84(uVar14,4);
    local_3e8[6] = (float)_UNK_150689648;
    local_3e8[7] = (float)_UNK_15068964c;
    local_3e8[3] = 0.0;
    pfVar2 = pfVar26 + -4;
    ___xmm_3f800000000000000000000000000000 = (undefined4)uVar12;
    _UNK_150689644 = SUB84(uVar12,4);
    local_3e8[4] = (float)___xmm_3f800000000000000000000000000000;
    local_3e8[5] = (float)_UNK_150689644;
    _UNK_150689648 = (undefined4)uVar14;
    _UNK_15068964c = SUB84(uVar14,4);
    local_3e8[6] = (float)_UNK_150689648;
    local_3e8[7] = (float)_UNK_15068964c;
    local_3e8[3] = 0.0;
    fVar4 = *pfVar26;
    pfVar26 = pfVar26 + 1;
    fVar39 = fVar39 + *pfVar1 * *pfVar1 + *pfVar2 * *pfVar2 + fVar4 * fVar4;
    lVar30 = lVar30 + -1;
  } while (lVar30 != 0);
  fVar39 = SQRT(fVar39);
  ___xmm_3f800000000000000000000000000000 = uVar13;
  _UNK_150689648 = uVar15;
  if (param_4 <= fVar39) {
    pPVar24 = FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ElementDmInv
                        ((FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this,
                         &local_f8,param_3);
    local_1f8._40_4_ = *(undefined4 *)&pPVar24->field_0x28;
    local_1f8._24_4_ = *(undefined4 *)&pPVar24->field_0x24;
    local_1f8._8_4_ = *(undefined4 *)&pPVar24->field_0x20;
    local_1f8._36_4_ = *(undefined4 *)&pPVar24->field_0x18;
    local_1f8._20_4_ = *(undefined4 *)&pPVar24->field_0x14;
    local_1f8._4_4_ = *(undefined4 *)&pPVar24->field_0x10;
    local_1f8._32_4_ = *(undefined4 *)&pPVar24->field_0x8;
    local_1f8._16_4_ = *(undefined4 *)&pPVar24->field_0x4;
    local_1f8._0_4_ = *(undefined4 *)pPVar24;
    local_1f8._48_8_ = uVar12;
    local_1f8._56_8_ = uVar14;
    local_1f8._12_4_ = 0;
    local_1f8._28_4_ = 0;
    local_1f8._44_4_ = 0;
    FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::GetPolarGradient
              ((FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this,&local_230,
               (PMatrix<float,3,3> *)local_318,(PMatrix<float,3,3> *)local_378,&local_1f8,fVar39);
    uVar29 = (uint)~param_3 >> 0x1f;
    uVar18 = uVar35;
    if (param_3 < (int)this->_padding_) {
      uVar18 = uVar29;
    }
    if ((uVar18 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      pTVar27 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar8)();
      return pTVar27;
    }
    fVar4 = __real_3f800000;
    uVar18 = param_3 * 2;
    uVar32 = ~uVar18 >> 0x1f;
    lVar30 = (longlong)param_3;
    uVar19 = uVar35;
    if ((int)uVar18 < (int)this->_padding_) {
      uVar19 = uVar32;
    }
    fVar40 = __real_3f800000 /
             (*(float *)(this->_padding_ + lVar30 * 4) * *(float *)((longlong)&this->_padding_ + 4)
             * param_2 * param_2);
    if ((uVar19 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      pTVar27 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar8)();
      return pTVar27;
    }
    fVar39 = (float)((uint)fVar39 ^ __xmm_80000000800000008000000080000000);
    lVar31 = (longlong)(int)uVar18;
    pTVar27 = &local_230;
    fVar37 = fVar40 * *(float *)(this->_padding_ + lVar31 * 4);
    local_438 = lVar30 * 0x10;
    lVar33 = lVar28;
    do {
      lVar34 = 3;
      do {
        uVar19 = uVar35;
        if (param_3 < (int)this->_padding_) {
          uVar19 = uVar29;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pTVar27 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar8)();
          return pTVar27;
        }
        uVar19 = *(uint *)(this->_padding_ + lVar33 + local_438);
        uVar20 = 0;
        uVar21 = uVar20;
        if ((int)uVar19 < (int)param_1->_padding_) {
          uVar21 = ~uVar19 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pTVar27 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar8)();
          return pTVar27;
        }
        pTVar11 = pTVar27->V;
        pTVar27 = (TVector<Chaos::TVector<float,3>,4> *)&pTVar27->V[0].field_0x4;
        fVar40 = fVar40 + *(float *)pTVar11 *
                          *(float *)(param_1->_padding_ + (longlong)(int)uVar19 * 4) *
                          *(float *)pTVar11;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar33 = lVar33 + 4;
    } while (lVar33 < 0x10);
    fVar40 = (fVar39 - fVar37) / fVar40;
    uVar35 = uVar20;
    if ((int)uVar18 < (int)this->_padding_) {
      uVar35 = uVar32;
    }
    if ((uVar35 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      pTVar27 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar8)();
      return pTVar27;
    }
    local_298[0] = 0.0;
    local_298[1] = 0.0;
    local_298[2] = 0.0;
    local_298[3] = 0.0;
    local_298[8] = 0.0;
    local_298[9] = 0.0;
    local_298[10] = 0.0;
    local_298[0xb] = 0.0;
    *(float *)(this->_padding_ + lVar31 * 4) = fVar40 + *(float *)(this->_padding_ + lVar31 * 4);
    local_298[4] = 0.0;
    local_298[5] = 0.0;
    local_298[6] = 0.0;
    local_298[7] = 0.0;
    local_440 = (float *)0x0;
    lVar33 = local_438;
    do {
      lVar34 = 3;
      pfVar26 = (float *)((longlong)local_298 + (longlong)local_440);
      lVar31 = (longlong)local_440 - (longlong)pfVar26;
      do {
        uVar35 = uVar20;
        if (param_3 < (int)this->_padding_) {
          uVar35 = uVar29;
        }
        if ((uVar35 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pTVar27 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar8)();
          return pTVar27;
        }
        uVar35 = *(uint *)(lVar33 + this->_padding_);
        uVar18 = uVar20;
        if ((int)uVar35 < (int)param_1->_padding_) {
          uVar18 = ~uVar35 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pTVar27 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar8)();
          return pTVar27;
        }
        *pfVar26 = *(float *)(param_1->_padding_ + (longlong)(int)uVar35 * 4) *
                   *(float *)((longlong)pfVar26 + (longlong)&local_230 + lVar31) * fVar40;
        pfVar26 = pfVar26 + 1;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar33 = lVar33 + 4;
      local_440 = (float *)((longlong)local_440 + 0xc);
    } while ((longlong)local_440 < 0x30);
    local_298[0xc] = 0.0;
    local_298[0xd] = 0.0;
    local_298[0xe] = 0.0;
    local_298[0xf] = 0.0;
    lVar31 = lVar30 * 0x30;
    local_298[0x10] = 0.0;
    local_298[0x11] = 0.0;
    local_298[0x12] = 0.0;
    local_298[0x13] = 0.0;
    local_298[0x14] = 0.0;
    local_298[0x15] = 0.0;
    local_298[0x16] = 0.0;
    local_298[0x17] = 0.0;
    lVar33 = lVar28;
    do {
      local_440 = (float *)((longlong)local_298 + lVar33 + 0x30);
      local_420 = 3;
      do {
        uVar35 = uVar20;
        if (param_3 < (int)this->_padding_) {
          uVar35 = uVar29;
        }
        if ((uVar35 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pTVar27 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar8)();
          return pTVar27;
        }
        lVar34 = this->_padding_;
        uVar35 = uVar20;
        if (param_3 < (this->C1Contribution).ArrayNum) {
          uVar35 = uVar29;
        }
        if ((uVar35 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pTVar27 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar8)();
          return pTVar27;
        }
        local_328 = (this->C1Contribution).AllocatorInstance.Data + lVar31;
        uVar35 = uVar20;
        if (param_3 * 2 < (int)this->_padding_) {
          uVar35 = uVar32;
        }
        if ((uVar35 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pTVar27 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar8)();
          return pTVar27;
        }
        lVar7 = this->_padding_;
        uVar35 = *(uint *)(local_438 + lVar34);
        uVar18 = uVar20;
        if ((int)uVar35 < (int)param_1->_padding_) {
          uVar18 = ~uVar35 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pTVar27 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar8)();
          return pTVar27;
        }
        pfVar26 = (float *)(&local_230.V[0].field_0x0 + lVar33);
        pFVar3 = local_328 + lVar33;
        lVar33 = lVar33 + 4;
        *local_440 = *(float *)(param_1->_padding_ + (longlong)(int)uVar35 * 4) * *pfVar26 *
                     *(float *)(lVar7 + lVar30 * 8) - *(float *)pFVar3;
        local_440 = local_440 + 1;
        local_420 = local_420 + -1;
      } while (local_420 != 0);
      local_438 = local_438 + 4;
    } while (lVar33 < 0x30);
    local_3c0 = 0;
    uStack_3b8 = 0;
    local_3b0 = 0;
    uStack_3a8 = 0;
    local_3a0 = 0;
    uStack_398 = 0;
    do {
      fVar39 = this->Zeta;
      fVar38 = fVar4 - fVar39;
      fVar40 = *(float *)((longlong)local_298 + lVar28 + 0x38);
      fVar37 = *(float *)((longlong)local_298 + lVar28 + 8);
      fVar5 = *(float *)((longlong)local_298 + lVar28 + 4);
      fVar6 = *(float *)((longlong)local_298 + lVar28 + 0x34);
      *(float *)((longlong)&local_3c0 + lVar28) =
           fVar38 * *(float *)((longlong)local_298 + lVar28) +
           fVar39 * *(float *)((longlong)local_298 + lVar28 + 0x30);
      *(float *)((longlong)&local_3c0 + lVar28 + 4) = fVar38 * fVar5 + fVar39 * fVar6;
      *(float *)((longlong)&uStack_3b8 + lVar28) = fVar38 * fVar37 + fVar39 * fVar40;
      lVar28 = lVar28 + 0xc;
    } while (lVar28 < 0x30);
    uVar18 = 0;
    uVar35 = uVar18;
    if (param_3 < (this->C1Contribution).ArrayNum) {
      uVar35 = uVar29;
    }
    if ((uVar35 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      pTVar27 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar8)();
      return pTVar27;
    }
    pFVar3 = (this->C1Contribution).AllocatorInstance.Data;
    *(float *)(pFVar3 + lVar31) = (float)local_3c0 + *(float *)(pFVar3 + lVar31);
    *(float *)(pFVar3 + lVar31 + 4) = local_3c0._4_4_ + *(float *)(pFVar3 + lVar31 + 4);
    *(float *)(pFVar3 + lVar31 + 8) = (float)uStack_3b8 + *(float *)(pFVar3 + lVar31 + 8);
    uVar35 = uVar18;
    if (param_3 < (this->C1Contribution).ArrayNum) {
      uVar35 = uVar29;
    }
    if ((uVar35 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      pTVar27 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar8)();
      return pTVar27;
    }
    pFVar3 = (this->C1Contribution).AllocatorInstance.Data;
    *(float *)(pFVar3 + lVar31 + 0xc) = uStack_3b8._4_4_ + *(float *)(pFVar3 + lVar31 + 0xc);
    *(float *)(pFVar3 + lVar31 + 0x10) = (float)local_3b0 + *(float *)(pFVar3 + lVar31 + 0x10);
    *(float *)(pFVar3 + lVar31 + 0x14) = local_3b0._4_4_ + *(float *)(pFVar3 + lVar31 + 0x14);
    uVar35 = uVar18;
    if (param_3 < (this->C1Contribution).ArrayNum) {
      uVar35 = uVar29;
    }
    if ((uVar35 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      pTVar27 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar8)();
      return pTVar27;
    }
    pFVar3 = (this->C1Contribution).AllocatorInstance.Data;
    *(float *)(pFVar3 + lVar31 + 0x18) = (float)uStack_3a8 + *(float *)(pFVar3 + lVar31 + 0x18);
    *(float *)(pFVar3 + lVar31 + 0x1c) = uStack_3a8._4_4_ + *(float *)(pFVar3 + lVar31 + 0x1c);
    *(float *)(pFVar3 + lVar31 + 0x20) = (float)local_3a0 + *(float *)(pFVar3 + lVar31 + 0x20);
    if (param_3 < (this->C1Contribution).ArrayNum) {
      uVar18 = uVar29;
    }
    if ((uVar18 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      pTVar27 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar8)();
      return pTVar27;
    }
    pFVar3 = (this->C1Contribution).AllocatorInstance.Data;
    *(float *)(pFVar3 + lVar31 + 0x24) = local_3a0._4_4_ + *(float *)(pFVar3 + lVar31 + 0x24);
    *(float *)(pFVar3 + lVar31 + 0x28) = (float)uStack_398 + *(float *)(pFVar3 + lVar31 + 0x28);
    *(float *)(pFVar3 + lVar31 + 0x2c) = uStack_398._4_4_ + *(float *)(pFVar3 + lVar31 + 0x2c);
    *(undefined8 *)local_388->V = local_3c0;
    *(undefined8 *)&local_388->V[0].field_0x8 = uStack_3b8;
    *(undefined8 *)&local_388->V[1].field_0x4 = local_3b0;
    *(undefined8 *)(local_388->V + 2) = uStack_3a8;
    *(undefined8 *)&local_388->V[2].field_0x8 = local_3a0;
    *(undefined8 *)&local_388->V[3].field_0x4 = uStack_398;
  }
  else {
    *(undefined8 *)local_388->V = 0;
    *(undefined8 *)&local_388->V[0].field_0x8 = 0;
    *(undefined8 *)&local_388->V[1].field_0x4 = 0;
    *(undefined8 *)(local_388->V + 2) = 0;
    *(undefined8 *)&local_388->V[2].field_0x8 = 0;
    *(undefined8 *)&local_388->V[3].field_0x4 = 0;
  }
  pTVar27 = local_388;
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(local_430,CycleScopeEnd);
  }
  if (bVar36) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pTVar27;
}

// Init @ 143a713d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FBlendedXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::Init
          (FBlendedXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  TVector<Chaos::TVector<float,3>,4> local_50;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  puVar3 = (undefined4 *)this->_padding_;
  iVar2 = (int)this->_padding_;
  puVar1 = puVar3 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_58);
    }
    if (puVar3 == puVar1) break;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_50.V[0]._0_8_ = 0;
  local_50.V[0]._8_4_ = 0;
  local_50.V[1]._0_4_ = 0;
  local_50.V[1]._4_8_ = 0;
  local_50.V[2]._0_8_ = 0;
  local_50.V[2]._8_4_ = 0;
  local_50.V[3]._0_4_ = 0;
  local_50.V[3]._4_8_ = 0;
  TArray<Chaos::TVector<Chaos::TVector<float,3>,4>,TSizedDefaultAllocator<32>_>::Init
            (&this->C1Contribution,&local_50,(int)this->_padding_);
  local_50.V[0]._0_8_ = 0;
  local_50.V[0]._8_4_ = 0;
  local_50.V[1]._0_4_ = 0;
  local_50.V[1]._4_8_ = 0;
  local_50.V[2]._0_8_ = 0;
  local_50.V[2]._8_4_ = 0;
  local_50.V[3]._0_4_ = 0;
  local_50.V[3]._4_8_ = 0;
  TArray<Chaos::TVector<Chaos::TVector<float,3>,4>,TSizedDefaultAllocator<32>_>::Init
            (&this->C2Contribution,&local_50,(int)this->_padding_);
  return;
}

