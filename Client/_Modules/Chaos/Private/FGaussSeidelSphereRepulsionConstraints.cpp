// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles> @ 143a32560

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles> * __thiscall
Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::
FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>
          (FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles> *this,
          float param_1,float param_2,FSolverParticles *param_3,
          FDeformableXPBDWeakConstraintParams *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  undefined3 uVar7;
  bool bVar8;
  uint uVar9;
  FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles> *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar12 = 0;
  this->Radius = param_1;
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).ArrayMax = 0;
  (this->ConstraintStiffness).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintStiffness).ArrayNum = 0;
  (this->ConstraintStiffness).ArrayMax = 0;
  (this->ReferencePositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencePositions).ArrayNum = 0;
  (this->ReferencePositions).ArrayMax = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__FGaussSeidelSphereRepulsionConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_
  ;
  this->Stiffness = param_2;
  fVar6 = param_4->DebugParticleWidth;
  (this->DebugDrawParams).DebugLineWidth = param_4->DebugLineWidth;
  (this->DebugDrawParams).DebugParticleWidth = fVar6;
  uVar7 = *(undefined3 *)&param_4->field_0x9;
  (this->DebugDrawParams).bVisualizeBindings = param_4->bVisualizeBindings;
  *(undefined3 *)&(this->DebugDrawParams).field_0x9 = uVar7;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ReferencePositions,*(int *)&(param_3->MPAndInvM).field_0x10,Default);
  uVar13 = uVar12;
  uVar14 = uVar12;
  if (0 < *(int *)&(param_3->MPAndInvM).field_0x10) {
    do {
      uVar11 = (uint)uVar12;
      uVar9 = 0;
      if ((int)uVar11 < *(int *)&(param_3->MPAndInvM).field_0x10) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles> *)
                  (*pcVar5)();
        return pFVar10;
      }
      lVar3 = *(longlong *)&(param_3->MPAndInvM).field_0x8;
      uVar1 = *(undefined8 *)(lVar3 + uVar13);
      uVar2 = *(undefined4 *)(lVar3 + 8 + uVar13);
      uVar9 = 0;
      if ((int)uVar11 < (this->ReferencePositions).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles> *)
                  (*pcVar5)();
        return pFVar10;
      }
      pFVar4 = (this->ReferencePositions).AllocatorInstance.Data;
      uVar12 = (ulonglong)(uVar11 + 1);
      *(undefined8 *)(pFVar4 + uVar14) = uVar1;
      *(undefined4 *)(pFVar4 + uVar14 + 8) = uVar2;
      uVar13 = uVar13 + 0x10;
      uVar14 = uVar14 + 0xc;
    } while ((int)(uVar11 + 1) < *(int *)&(param_3->MPAndInvM).field_0x10);
  }
  return this;
}

// ~FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles> @ 143a38aa0

void __thiscall
Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::
~FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>
          (FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FGaussSeidelSphereRepulsionConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_
  ;
  pFVar1 = (this->ReferencePositions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintStiffness).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Constraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 143a40f70

bool __thiscall
`Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::
UpdateSphereRepulsionConstraints'::__l2::<lambda_1>::operator()(void *this,int param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  TDynamicParticles<float,3> *this_00;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  plVar1 = *(longlong **)((longlong)this + 0x18);
  lVar8 = (longlong)param_2;
  lVar9 = (longlong)param_1;
  uVar7 = 0;
  if (param_2 < (int)plVar1[1]) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  lVar2 = *plVar1;
  uVar7 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (*(int *)(*plVar1 + lVar9 * 4) != *(int *)(lVar2 + lVar8 * 4)) {
    this_00 = *(TDynamicParticles<float,3> **)((longlong)this + 8);
    fVar10 = Chaos::TDynamicParticles<float,3>::InvM(this_00,param_1);
    fVar11 = Chaos::TDynamicParticles<float,3>::InvM(this_00,param_2);
    if (__real_33d6bf95 <= fVar11 + fVar10) {
      lVar2 = *(longlong *)this;
      uVar7 = 0;
      if (param_2 < *(int *)(lVar2 + 0x38)) {
        uVar7 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
      lVar3 = *(longlong *)this;
      uVar7 = 0;
      if (param_1 < *(int *)(lVar3 + 0x38)) {
        uVar7 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
      fVar12 = *(float *)(lVar2 + 4 + lVar8 * 0xc) - *(float *)(lVar3 + 4 + lVar9 * 0xc);
      fVar11 = *(float *)(lVar2 + lVar8 * 0xc) - *(float *)(lVar3 + lVar9 * 0xc);
      fVar10 = *(float *)(lVar2 + 8 + lVar8 * 0xc) - *(float *)(lVar3 + 8 + lVar9 * 0xc);
      return *(float *)((longlong)this + 0x10) <=
             fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
    }
  }
  return false;
}

// AddSphereRepulsionResidualAndHessian @ 143a4b3a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::
AddSphereRepulsionResidualAndHessian
          (FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,int param_2,int param_3,float param_4,TVector<float,3> *param_5,
          PMatrix<float,3,3> *param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TVector<float,3> *pTVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float local_288;
  float local_278;
  float fStack_274;
  
  lVar6 = (longlong)param_2;
  uVar8 = (uint)~param_2 >> 0x1f;
  uVar4 = 0;
  if (param_2 < (this->Constraints).ArrayNum) {
    uVar4 = uVar8;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = FSolverParticles::P(param_1,*(int *)((this->Constraints).AllocatorInstance.Data +
                                               lVar6 * 8));
  uVar1 = *(undefined8 *)pTVar5;
  fVar13 = *(float *)&pTVar5->field_0x8;
  uVar4 = 0;
  if (param_2 < (this->Constraints).ArrayNum) {
    uVar4 = uVar8;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = FSolverParticles::P(param_1,*(int *)((this->Constraints).AllocatorInstance.Data +
                                               lVar6 * 8 + 4));
  uVar4 = __xmm_80000000800000008000000080000000;
  uVar22 = *(float *)&pTVar5->field_0x8 - fVar13;
  fStack_274 = (float)((ulonglong)uVar1 >> 0x20);
  fStack_274 = (float)((ulonglong)*(undefined8 *)pTVar5 >> 0x20) - fStack_274;
  local_278 = (float)uVar1;
  local_288 = (float)*(undefined8 *)pTVar5 - local_278;
  fVar13 = local_288 * local_288 + fStack_274 * fStack_274 + (float)uVar22 * (float)uVar22;
  if (fVar13 != __real_3f800000) {
    if (__real_322bcc77 <= fVar13) {
      fVar23 = __real_3f800000 / SQRT(fVar13);
      fStack_274 = fStack_274 * fVar23;
      local_288 = fVar23 * local_288;
      uVar22 = (float)uVar22 * fVar23;
    }
    else {
      fStack_274 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20)
      ;
      local_288 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar22 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  if (param_3 == 0) {
    local_288 = (float)((uint)local_288 ^ __xmm_80000000800000008000000080000000);
    fStack_274 = (float)((uint)fStack_274 ^ __xmm_80000000800000008000000080000000);
    uVar22 = uVar22 ^ __xmm_80000000800000008000000080000000;
  }
  fVar23 = (this->Radius + this->Radius) - SQRT(fVar13);
  if (0.0 < fVar23) {
    fVar11 = __real_3f800000 / (SQRT(fVar13) + ___real_2b8cbccc);
    fVar13 = (float)uVar22 * fStack_274;
    fVar15 = (float)PMatrix<float,3,3>::Identity._20_4_ - fStack_274 * fStack_274;
    fVar19 = (float)PMatrix<float,3,3>::Identity._0_4_ - local_288 * local_288;
    fVar21 = local_288 * (float)uVar22;
    fVar24 = local_288 * fStack_274;
    fVar17 = (float)PMatrix<float,3,3>::Identity._32_4_ - fVar21;
    fVar18 = (float)PMatrix<float,3,3>::Identity._16_4_ - fVar24;
    fVar10 = (float)PMatrix<float,3,3>::Identity._24_4_ - fVar13;
    fVar16 = (float)PMatrix<float,3,3>::Identity._4_4_ - fVar24;
    fVar14 = (float)PMatrix<float,3,3>::Identity._36_4_ - fVar13;
    fVar12 = (float)PMatrix<float,3,3>::Identity._8_4_ - fVar21;
    fVar9 = (float)PMatrix<float,3,3>::Identity._40_4_ - (float)uVar22 * (float)uVar22;
    uVar7 = 0;
    if (param_2 < (this->ConstraintStiffness).ArrayNum) {
      uVar7 = uVar8;
    }
    if (uVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    fVar20 = param_4 * param_4 *
             *(float *)((this->ConstraintStiffness).AllocatorInstance.Data + lVar6 * 4);
    *(float *)&param_6->field_0x24 =
         fVar20 * (fVar13 - fVar14 * fVar11 * fVar23) + *(float *)&param_6->field_0x24;
    *(float *)&param_6->field_0x20 =
         fVar20 * (fVar21 - fVar17 * fVar11 * fVar23) + *(float *)&param_6->field_0x20;
    *(float *)&param_6->field_0x28 =
         fVar20 * ((float)uVar22 * (float)uVar22 - fVar9 * fVar11 * fVar23) +
         *(float *)&param_6->field_0x28;
    *(float *)param_6 =
         fVar20 * (local_288 * local_288 - fVar19 * fVar11 * fVar23) + *(float *)param_6;
    *(float *)&param_6->field_0x4 =
         fVar20 * (fVar24 - fVar16 * fVar11 * fVar23) + *(float *)&param_6->field_0x4;
    *(float *)&param_6->field_0x8 =
         fVar20 * (fVar21 - fVar12 * fVar11 * fVar23) + *(float *)&param_6->field_0x8;
    *(float *)&param_6->field_0x10 =
         fVar20 * (fVar24 - fVar18 * fVar11 * fVar23) + *(float *)&param_6->field_0x10;
    *(float *)&param_6->field_0x14 =
         fVar20 * (fStack_274 * fStack_274 - fVar15 * fVar11 * fVar23) +
         *(float *)&param_6->field_0x14;
    *(float *)&param_6->field_0x18 =
         fVar20 * (fVar13 - fVar10 * fVar11 * fVar23) + *(float *)&param_6->field_0x18;
    uVar7 = 0;
    if (param_2 < (this->ConstraintStiffness).ArrayNum) {
      uVar7 = uVar8;
    }
    if (uVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    fVar13 = (float)((uint)(param_4 * param_4 * fVar23 *
                           *(float *)((this->ConstraintStiffness).AllocatorInstance.Data + lVar6 * 4
                                     )) ^ uVar4);
    *(float *)&param_5->field_0x8 = fVar13 * (float)uVar22 + *(float *)&param_5->field_0x8;
    *(float *)param_5 = fVar13 * local_288 + *(float *)param_5;
    *(float *)&param_5->field_0x4 = fVar13 * fStack_274 + *(float *)&param_5->field_0x4;
  }
  return;
}

// ReturnSphereRepulsionConstraints @ 143a90af0

void __thiscall
Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::
ReturnSphereRepulsionConstraints
          (FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles> *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar7;
  void *_Dst;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  longlong local_res8;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_48;
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Init
            (param_1,&local_58,(this->Constraints).ArrayNum);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  uVar10 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    lVar11 = 0;
    local_res8 = 0;
    do {
      uVar9 = ~uVar10 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar12 = (param_1->AllocatorInstance).Data + local_res8;
      iVar8 = *(int *)&pFVar12[8].field_0x0;
      pFVar2 = pFVar12 + 8;
      if (iVar8 < 2) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,2 - iVar8,(ForAnyElementType *)pFVar12,(int *)pFVar2,
                           (int *)(pFVar12 + 0xc));
        memset((void *)(*(longlong *)&pFVar12->field_0x0 + (longlong)iVar6 * 4),0,
               (longlong)(2 - iVar8) << 2);
      }
      else if (2 < iVar8) {
        iVar8 = iVar8 + -2;
        if (iVar8 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else if (iVar8 == 0) goto LAB_143a90cb0;
        _Dst = (void *)(*(longlong *)&pFVar12->field_0x0 + 8);
        iVar6 = (*(int *)&pFVar2->field_0x0 - iVar8) + -2;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar8 * 4),(longlong)iVar6 << 2);
        }
        *(int *)&pFVar2->field_0x0 = *(int *)&pFVar2->field_0x0 - iVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)pFVar12,*(int *)&pFVar2->field_0x0,
                   (int *)(pFVar12 + 0xc));
      }
LAB_143a90cb0:
      uVar5 = 0;
      if ((int)uVar10 < (this->Constraints).ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar1 = *(undefined4 *)((this->Constraints).AllocatorInstance.Data + lVar11 * 8);
      uVar5 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if ((*(int *)(pFVar2 + local_res8 + 8) < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      **(undefined4 **)(pFVar2 + local_res8) = uVar1;
      uVar5 = 0;
      if ((int)uVar10 < (this->Constraints).ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar1 = *(undefined4 *)((this->Constraints).AllocatorInstance.Data + lVar11 * 8 + 4);
      uVar5 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if ((*(int *)(pFVar2 + local_res8 + 8) < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = pFVar2 + local_res8;
      uVar10 = uVar10 + 1;
      local_res8 = local_res8 + 0x10;
      lVar11 = lVar11 + 1;
      *(undefined4 *)(*(longlong *)pFVar2 + 4) = uVar1;
    } while ((int)uVar10 < (this->Constraints).ArrayNum);
  }
  pTVar7 = Utilities::ComputeIncidentElements(&local_48,param_1,param_3);
  if (param_2 != pTVar7) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(param_2->AllocatorInstance).Data,
               param_2->ArrayNum);
    pFVar2 = (param_2->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_2->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_2->ArrayNum = pTVar7->ArrayNum;
    param_2->ArrayMax = pTVar7->ArrayMax;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.AllocatorInstance.Data,
             local_48.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// UpdateSphereRepulsionConstraints @ 143a9a2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::
UpdateSphereRepulsionConstraints
          (FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Src;
  bool bVar7;
  BOOLEAN BVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles> *pFVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  undefined1 auStackY_208 [32];
  undefined1 local_1b7 [7];
  TArray<Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>
  local_1b0;
  float local_1a0 [2];
  ForAnyElementType local_198;
  undefined8 local_190;
  TArray<int,TSizedDefaultAllocator<32>_> *local_188;
  FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles> *local_180;
  longlong *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168 [2];
  code *local_160;
  FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles> **local_158;
  TSpatialHashGridPoints<int,float> *local_150;
  TArray<int,TSizedDefaultAllocator<32>_> *local_148;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_140;
  undefined8 uStack_130;
  RTL_SRWLOCK local_128 [2];
  longlong local_118;
  int local_110;
  code *local_108;
  undefined4 *local_100;
  FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles> *local_f8;
  FSolverParticles *local_f0;
  float local_e8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_e0;
  TSpatialHashGridPoints<int,float> local_d8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_208;
  bVar18 = -1 < CpuChannel->Enabled;
  local_188 = param_3;
  local_180 = this;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::UpdateSphereRepulsionConstraints(Chaos::Softs::FSolverParticles_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId103,"STAT_GaussSeidelSphereRepulsionConstraints",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelSphereRepulsionConstraints.h"
               ,0x67);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::UpdateSphereRepulsionConstraints(Chaos::Softs::FSolverParticles_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId103);
  }
  pTVar1 = &this->Constraints;
  piVar2 = &(this->Constraints).ArrayMax;
  (this->Constraints).ArrayNum = 0;
  if ((this->Constraints).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  (this->ConstraintStiffness).ArrayNum = 0;
  if ((this->ConstraintStiffness).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ConstraintStiffness).AllocatorInstance,0,
               &(this->ConstraintStiffness).ArrayMax);
  }
  if (param_2->ArrayNum != 0) {
    local_118 = param_1->_padding_;
    fVar19 = this->Radius + this->Radius;
    iVar12 = (int)param_1->_padding_;
    local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.ArrayMax = 0;
    if ((iVar12 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar9 = param_2->ArrayNum;
    local_110 = iVar12;
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    local_1b0.ArrayNum = 0;
    if (local_1b0.ArrayMax < (int)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar9,&local_1b0.AllocatorInstance,0,&local_1b0.ArrayMax);
    }
    uVar15 = 0;
    iVar12 = param_2->ArrayNum;
    pFVar17 = this;
    uVar16 = uVar15;
    if (0 < iVar12) {
      do {
        local_178 = &local_118;
        uVar14 = (uint)uVar15;
        uVar9 = 0;
        if ((int)uVar14 < iVar12) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uStack_170 = *(undefined4 *)((param_2->AllocatorInstance).Data + uVar16);
        if (((local_1b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_178) &&
            ((FScriptContainerElement *)&local_178 <
             local_1b0.AllocatorInstance.Data + (longlong)local_1b0.ArrayMax * 0x10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_1b0.ArrayNum == local_1b0.ArrayMax) {
          local_1b0.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_1b0.AllocatorInstance,&local_1b0.ArrayMax);
        }
        lVar11 = (longlong)local_1b0.ArrayNum;
        uVar15 = (ulonglong)(uVar14 + 1);
        local_1b0.ArrayNum = local_1b0.ArrayNum + 1;
        *(longlong **)(local_1b0.AllocatorInstance.Data + lVar11 * 0x10) = local_178;
        *(longlong *)(local_1b0.AllocatorInstance.Data + lVar11 * 0x10 + 8) =
             CONCAT44(uStack_16c,uStack_170);
        iVar12 = param_2->ArrayNum;
        pFVar17 = local_180;
        uVar16 = uVar16 + 4;
      } while ((int)(uVar14 + 1) < iVar12);
    }
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8.ParticleIndexToElement.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ParticleIndexToElement.ArrayNum = 0;
    local_d8.ParticleIndexToElement.ArrayMax = 0;
    local_d8.CellSize.m128_f32[0] = fVar19;
    local_d8.CellSize.m128_f32[1] = fVar19;
    local_d8.CellSize.m128_f32[2] = fVar19;
    local_d8.CellSize.m128_f32[3] = fVar19;
    TSpatialHashGridPoints<int,float>::
    InitializePoints<TArray<Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_>
              (&local_d8,&local_1b0,false);
    local_e0 = local_188;
    local_e8 = fVar19 * fVar19;
    local_160 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::UpdateSphereRepulsionConstraints'::__l2::<lambda_1>,bool,int,int>
                ::Call;
    local_158 = &local_f8;
    local_150 = &local_d8;
    local_148 = &local_d8.ParticleIndexToElement;
    local_128[0].Ptr = (PVOID)0x0;
    local_168[0] = 1;
    local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.ArrayNum = 0;
    local_140.ArrayMax = 0;
    uStack_130 = 0;
    local_f8 = pFVar17;
    local_f0 = param_1;
    TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_140,local_1b0.ArrayNum * 3,Default);
    TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_140,local_140.ArrayMax,Default);
    local_100 = local_168;
    LOCK();
    uStack_130 = CONCAT44(local_140.ArrayNum,(int)uStack_130);
    UNLOCK();
    local_108 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::TSpatialHashGridPoints<int,float>::FindAllSelfProximities'::__l2::FParticleProximities,void,int>
                ::Call;
    PhysicsParallelFor(local_d8.ParticleIndexToElement.ArrayNum,
                       (TFunctionRef<void___cdecl(int)> *)&local_108,false);
    TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_140,(int)uStack_130,Default);
    _Src.Data = local_140.AllocatorInstance.Data;
    local_198.Data = (FScriptContainerElement *)0x0;
    lVar11 = (longlong)local_140.ArrayNum;
    local_190 = CONCAT44(local_190._4_4_,local_140.ArrayNum);
    if (local_140.ArrayNum == 0) {
      local_190 = local_140._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_140.ArrayNum,0,&local_198,local_140.ArrayNum,
                 (int *)((longlong)&local_190 + 4));
      memcpy(local_198.Data,_Src.Data,lVar11 << 3);
    }
    BVar8 = TryAcquireSRWLockExclusive(local_128);
    if (BVar8 == '\0') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive(local_128);
    }
    if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.AllocatorInstance.Data);
    }
    if (pTVar1 != (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)&local_198) {
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar1->AllocatorInstance).Data = local_198.Data;
      (this->Constraints).ArrayNum = (int)local_190;
      *piVar2 = local_190._4_4_;
      local_190 = 0;
      local_198.Data = (FScriptContainerElement *)0x0;
    }
    if (local_198.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data);
    }
    fVar5 = __real_33d6bf95;
    fVar19 = __real_3f000000;
    pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar1->AllocatorInstance).Data;
    iVar12 = (this->Constraints).ArrayNum;
    local_188 = (TArray<int,TSizedDefaultAllocator<32>_> *)(&pTVar13->AllocatorInstance + iVar12);
    while( true ) {
      pTVar6 = local_188;
      if ((this->Constraints).ArrayNum != iVar12) {
        local_1b7[0] = 0;
        `TCheckedPointerIterator<Chaos::TVector<int,2>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1b7);
      }
      if (pTVar13 == pTVar6) break;
      uVar9 = *(uint *)&(pTVar13->AllocatorInstance).Data;
      fVar20 = 0.0;
      uVar14 = 0;
      if ((int)uVar9 < (int)param_1->_padding_) {
        uVar14 = ~uVar9 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (fVar5 < *(float *)(param_1->_padding_ + (longlong)(int)uVar9 * 4)) {
        uVar9 = *(uint *)&(pTVar13->AllocatorInstance).Data;
        uVar14 = 0;
        if ((int)uVar9 < (int)param_1->_padding_) {
          uVar14 = ~uVar9 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar20 = *(float *)(param_1->_padding_ + (longlong)(int)uVar9 * 4);
      }
      uVar9 = *(uint *)((longlong)&(pTVar13->AllocatorInstance).Data + 4);
      uVar14 = 0;
      if ((int)uVar9 < (int)param_1->_padding_) {
        uVar14 = ~uVar9 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (fVar5 < *(float *)(param_1->_padding_ + (longlong)(int)uVar9 * 4)) {
        uVar9 = *(uint *)((longlong)&(pTVar13->AllocatorInstance).Data + 4);
        uVar14 = 0;
        if ((int)uVar9 < (int)param_1->_padding_) {
          uVar14 = ~uVar9 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar20 = fVar20 + *(float *)(param_1->_padding_ + (longlong)(int)uVar9 * 4);
      }
      pFVar3 = (pFVar17->ConstraintStiffness).AllocatorInstance.Data;
      local_1a0[0] = fVar20 * local_180->Stiffness * fVar19;
      if (((pFVar3 <= (FScriptContainerElement *)local_1a0) &&
          ((FScriptContainerElement *)local_1a0 <
           pFVar3 + (longlong)(pFVar17->ConstraintStiffness).ArrayMax * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = (pFVar17->ConstraintStiffness).ArrayNum;
      if (iVar10 == (pFVar17->ConstraintStiffness).ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(pFVar17->ConstraintStiffness).AllocatorInstance,
                            &(pFVar17->ConstraintStiffness).ArrayMax);
      }
      pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)&pTVar13->ArrayNum;
      (pFVar17->ConstraintStiffness).ArrayNum = iVar10 + 1;
      *(float *)((pFVar17->ConstraintStiffness).AllocatorInstance.Data + (longlong)iVar10 * 4) =
           local_1a0[0];
    }
    if (local_d8.ParticleIndexToElement.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.ParticleIndexToElement.AllocatorInstance.Data);
    }
    if ((void *)local_d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
    if ((void *)local_d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
    if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.AllocatorInstance.Data);
    }
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

