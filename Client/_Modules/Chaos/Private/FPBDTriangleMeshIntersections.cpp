// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// Apply<Chaos::Softs::FSolverParticles> @ 143d85680

void __thiscall
Chaos::Softs::FPBDTriangleMeshIntersections::Apply<Chaos::Softs::FSolverParticles>
          (FPBDTriangleMeshIntersections *this,FSolverParticles *param_1,
          TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FContourMinimizationIntersection,TSizedDefaultAllocator<32>_>
          *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 local_a8 [4];
  uint local_a4;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FPBDTriangleMeshIntersections::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FContourMinimizationIntersection,TSizedDefaultAllocator<32>_>_const&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId24,"ChaosFPBDTriangleMeshIntersections_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDTriangleMeshIntersections.cpp"
               ,0x18);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FPBDTriangleMeshIntersections::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FContourMinimizationIntersection,TSizedDefaultAllocator<32>_>_const&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId24);
  }
  fVar7 = __real_3f800000;
  fVar6 = __real_322bcc77;
  local_a4 = param_2->ArrayNum;
  uVar10 = (ulonglong)(int)local_a4;
  pFVar13 = (param_2->AllocatorInstance).Data;
  pFVar11 = pFVar13 + uVar10 * 0x2c;
  uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  while( true ) {
    if (param_2->ArrayNum != (int)uVar10) {
      local_a8[0] = 0;
      `TCheckedPointerIterator<Chaos::Softs::FPBDTriangleMeshCollisions::FContourMinimizationIntersection_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_a8);
      uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    }
    if (pFVar13 == pFVar11) {
      if (bVar14) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    fVar16 = *(float *)(pFVar13 + 0x20);
    fVar1 = *(float *)(pFVar13 + 0x24);
    fVar2 = *(float *)(pFVar13 + 0x28);
    fVar20 = fVar16 * fVar16 + fVar1 * fVar1 + fVar2 * fVar2;
    fVar23 = SQRT(fVar20);
    fVar21 = (float)uVar19;
    fVar22 = (float)uVar18;
    fVar15 = (float)uVar17;
    if (fVar6 < fVar23) {
      fVar15 = fVar7 / fVar23;
      fVar21 = fVar16 * fVar15;
      fVar22 = fVar1 * fVar15;
      fVar15 = fVar2 * fVar15;
    }
    uVar3 = *(uint *)pFVar13;
    uVar9 = 0;
    if ((int)uVar3 < (int)param_1->_padding_) {
      uVar9 = ~uVar3 >> 0x1f;
    }
    fVar16 = (__real_3f800000 /
             SQRT(fVar20 + `public:_void___cdecl_Chaos::Softs::FPBDTriangleMeshIntersections::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FContourMinimizationIntersection,TSizedDefaultAllocator<32>_>_const&___ptr64,float)const___ptr64'
                           ::__l2::RegularizeEpsilonSq)) *
             fVar23 * Chaos_TriangleIntersections_MaxDelta;
    fVar21 = fVar21 * fVar16;
    fVar22 = fVar22 * fVar16;
    fVar15 = fVar15 * fVar16;
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
       uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
       uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X, bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (0.0 < *(float *)(param_1->_padding_ + (longlong)(int)uVar3 * 4)) {
      uVar3 = *(uint *)pFVar13;
      lVar12 = (longlong)(int)uVar3;
      uVar9 = 0;
      if ((int)uVar3 < *(int *)&(param_1->MPAndInvM).field_0x10) {
        uVar9 = ~uVar3 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
      *(float *)(lVar4 + lVar12 * 0x10) = fVar21 + *(float *)(lVar4 + lVar12 * 0x10);
      *(float *)(lVar4 + 4 + lVar12 * 0x10) = fVar22 + *(float *)(lVar4 + 4 + lVar12 * 0x10);
      *(float *)(lVar4 + 8 + lVar12 * 0x10) = fVar15 + *(float *)(lVar4 + 8 + lVar12 * 0x10);
      uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    }
    uVar3 = *(uint *)(pFVar13 + 4);
    uVar9 = 0;
    if ((int)uVar3 < (int)param_1->_padding_) {
      uVar9 = ~uVar3 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
       uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
       uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X, bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (0.0 < *(float *)(param_1->_padding_ + (longlong)(int)uVar3 * 4)) {
      uVar3 = *(uint *)(pFVar13 + 4);
      lVar12 = (longlong)(int)uVar3;
      uVar9 = 0;
      if ((int)uVar3 < *(int *)&(param_1->MPAndInvM).field_0x10) {
        uVar9 = ~uVar3 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
      *(float *)(lVar4 + lVar12 * 0x10) = fVar21 + *(float *)(lVar4 + lVar12 * 0x10);
      *(float *)(lVar4 + 4 + lVar12 * 0x10) = fVar22 + *(float *)(lVar4 + 4 + lVar12 * 0x10);
      *(float *)(lVar4 + 8 + lVar12 * 0x10) = fVar15 + *(float *)(lVar4 + 8 + lVar12 * 0x10);
      uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    }
    uVar3 = *(uint *)(pFVar13 + 8);
    uVar9 = 0;
    if ((int)uVar3 < (int)param_1->_padding_) {
      uVar9 = ~uVar3 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
       uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
       uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X, bVar8)) break;
    if (0.0 < *(float *)(param_1->_padding_ + (longlong)(int)uVar3 * 4)) {
      uVar3 = *(uint *)(pFVar13 + 8);
      lVar12 = (longlong)(int)uVar3;
      uVar9 = 0;
      if ((int)uVar3 < *(int *)&(param_1->MPAndInvM).field_0x10) {
        uVar9 = ~uVar3 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
      *(float *)(lVar4 + lVar12 * 0x10) = *(float *)(lVar4 + lVar12 * 0x10) - fVar21;
      *(float *)(lVar4 + 4 + lVar12 * 0x10) = *(float *)(lVar4 + 4 + lVar12 * 0x10) - fVar22;
      *(float *)(lVar4 + 8 + lVar12 * 0x10) = *(float *)(lVar4 + 8 + lVar12 * 0x10) - fVar15;
      uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    }
    uVar3 = *(uint *)(pFVar13 + 0xc);
    uVar9 = 0;
    if ((int)uVar3 < (int)param_1->_padding_) {
      uVar9 = ~uVar3 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
       uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
       uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X, bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (0.0 < *(float *)(param_1->_padding_ + (longlong)(int)uVar3 * 4)) {
      uVar3 = *(uint *)(pFVar13 + 0xc);
      lVar12 = (longlong)(int)uVar3;
      uVar9 = 0;
      if ((int)uVar3 < *(int *)&(param_1->MPAndInvM).field_0x10) {
        uVar9 = ~uVar3 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
      *(float *)(lVar4 + lVar12 * 0x10) = *(float *)(lVar4 + lVar12 * 0x10) - fVar21;
      *(float *)(lVar4 + 4 + lVar12 * 0x10) = *(float *)(lVar4 + 4 + lVar12 * 0x10) - fVar22;
      *(float *)(lVar4 + 8 + lVar12 * 0x10) = *(float *)(lVar4 + 8 + lVar12 * 0x10) - fVar15;
      uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    }
    uVar3 = *(uint *)(pFVar13 + 0x10);
    uVar9 = 0;
    if ((int)uVar3 < (int)param_1->_padding_) {
      uVar9 = ~uVar3 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
       uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
       uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X, bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (0.0 < *(float *)(param_1->_padding_ + (longlong)(int)uVar3 * 4)) {
      uVar3 = *(uint *)(pFVar13 + 0x10);
      lVar12 = (longlong)(int)uVar3;
      uVar9 = 0;
      if ((int)uVar3 < *(int *)&(param_1->MPAndInvM).field_0x10) {
        uVar9 = ~uVar3 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
      *(float *)(lVar4 + lVar12 * 0x10) = *(float *)(lVar4 + lVar12 * 0x10) - fVar21;
      *(float *)(lVar4 + 4 + lVar12 * 0x10) = *(float *)(lVar4 + 4 + lVar12 * 0x10) - fVar22;
      *(float *)(lVar4 + 8 + lVar12 * 0x10) = *(float *)(lVar4 + 8 + lVar12 * 0x10) - fVar15;
      uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    }
    uVar10 = (ulonglong)local_a4;
    pFVar13 = pFVar13 + 0x2c;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Apply<Chaos::Softs::FSolverParticlesRange> @ 143d86810

void __thiscall
Chaos::Softs::FPBDTriangleMeshIntersections::Apply<Chaos::Softs::FSolverParticlesRange>
          (FPBDTriangleMeshIntersections *this,FSolverParticlesRange *param_1,
          TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FContourMinimizationIntersection,TSizedDefaultAllocator<32>_>
          *param_2,float param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  float *pfVar7;
  TVector<float,3> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_res18 [16];
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FPBDTriangleMeshIntersections::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FContourMinimizationIntersection,TSizedDefaultAllocator<32>_>_const&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId24,"ChaosFPBDTriangleMeshIntersections_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDTriangleMeshIntersections.cpp"
               ,0x18);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FPBDTriangleMeshIntersections::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FContourMinimizationIntersection,TSizedDefaultAllocator<32>_>_const&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId24);
  }
  fVar5 = __real_3f800000;
  fVar4 = __real_322bcc77;
  iVar1 = param_2->ArrayNum;
  pFVar10 = (param_2->AllocatorInstance).Data;
  pFVar9 = pFVar10 + (longlong)iVar1 * 0x2c;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::Softs::FPBDTriangleMeshCollisions::FContourMinimizationIntersection_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar10 == pFVar9) {
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    fVar17 = *(float *)(pFVar10 + 0x20);
    fVar19 = *(float *)(pFVar10 + 0x24);
    fVar20 = *(float *)(pFVar10 + 0x28);
    fVar14 = fVar19 * fVar19 + fVar17 * fVar17 + fVar20 * fVar20;
    fVar18 = SQRT(fVar14);
    uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar15 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uVar16 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    if (fVar4 < fVar18) {
      fVar12 = fVar5 / fVar18;
      uVar13 = fVar12 * fVar20;
      uVar15 = fVar12 * fVar17;
      uVar16 = fVar12 * fVar19;
    }
    iVar2 = *(int *)pFVar10;
    fVar17 = (__real_3f800000 /
             SQRT(fVar14 + `public:_void___cdecl_Chaos::Softs::FPBDTriangleMeshIntersections::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FContourMinimizationIntersection,TSizedDefaultAllocator<32>_>_const&___ptr64,float)const___ptr64'
                           ::__l2::RegularizeEpsilonSq)) *
             fVar18 * Chaos_TriangleIntersections_MaxDelta;
    fVar19 = fVar17 * (float)uVar15;
    fVar20 = fVar17 * (float)uVar16;
    fVar17 = fVar17 * (float)uVar13;
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pfVar7 = TDynamicParticles<float,3>::InvM
                       (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                        *(int *)&param_1->field_0x10 + iVar2);
    if (0.0 < *pfVar7) {
      iVar2 = *(int *)pFVar10;
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x57,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar8 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                   *(int *)&param_1->field_0x10 + iVar2);
      *(float *)pTVar8 = fVar19 + *(float *)pTVar8;
      *(float *)&pTVar8->field_0x4 = fVar20 + *(float *)&pTVar8->field_0x4;
      *(float *)&pTVar8->field_0x8 = fVar17 + *(float *)&pTVar8->field_0x8;
    }
    iVar2 = *(int *)(pFVar10 + 4);
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pfVar7 = TDynamicParticles<float,3>::InvM
                       (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                        *(int *)&param_1->field_0x10 + iVar2);
    if (0.0 < *pfVar7) {
      iVar2 = *(int *)(pFVar10 + 4);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x57,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar8 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                   *(int *)&param_1->field_0x10 + iVar2);
      *(float *)pTVar8 = fVar19 + *(float *)pTVar8;
      *(float *)&pTVar8->field_0x4 = fVar20 + *(float *)&pTVar8->field_0x4;
      *(float *)&pTVar8->field_0x8 = fVar17 + *(float *)&pTVar8->field_0x8;
    }
    iVar2 = *(int *)(pFVar10 + 8);
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pfVar7 = TDynamicParticles<float,3>::InvM
                       (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                        *(int *)&param_1->field_0x10 + iVar2);
    if (0.0 < *pfVar7) {
      iVar2 = *(int *)(pFVar10 + 8);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x57,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar8 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                   *(int *)&param_1->field_0x10 + iVar2);
      *(float *)pTVar8 = *(float *)pTVar8 - fVar19;
      *(float *)&pTVar8->field_0x4 = *(float *)&pTVar8->field_0x4 - fVar20;
      *(float *)&pTVar8->field_0x8 = *(float *)&pTVar8->field_0x8 - fVar17;
    }
    iVar2 = *(int *)(pFVar10 + 0xc);
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L""), bVar6)) break;
    pfVar7 = TDynamicParticles<float,3>::InvM
                       (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                        *(int *)&param_1->field_0x10 + iVar2);
    if (0.0 < *pfVar7) {
      iVar2 = *(int *)(pFVar10 + 0xc);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x57,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar8 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                   *(int *)&param_1->field_0x10 + iVar2);
      *(float *)pTVar8 = *(float *)pTVar8 - fVar19;
      *(float *)&pTVar8->field_0x4 = *(float *)&pTVar8->field_0x4 - fVar20;
      *(float *)&pTVar8->field_0x8 = *(float *)&pTVar8->field_0x8 - fVar17;
    }
    iVar2 = *(int *)(pFVar10 + 0x10);
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pfVar7 = TDynamicParticles<float,3>::InvM
                       (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                        *(int *)&param_1->field_0x10 + iVar2);
    if (0.0 < *pfVar7) {
      iVar2 = *(int *)(pFVar10 + 0x10);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x57,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar8 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                   *(int *)&param_1->field_0x10 + iVar2);
      *(float *)pTVar8 = *(float *)pTVar8 - fVar19;
      *(float *)&pTVar8->field_0x4 = *(float *)&pTVar8->field_0x4 - fVar20;
      *(float *)&pTVar8->field_0x8 = *(float *)&pTVar8->field_0x8 - fVar17;
    }
    pFVar10 = pFVar10 + 0x2c;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

