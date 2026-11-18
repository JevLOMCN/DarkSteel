// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// Apply<Chaos::Softs::FSolverParticles> @ 143cb44f0

void __thiscall
Chaos::Softs::FPBDSelfCollisionSphereConstraintsBase::Apply<Chaos::Softs::FSolverParticles>
          (FPBDSelfCollisionSphereConstraintsBase *this,FSolverParticles *param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 local_res20 [8];
  
  fVar6 = __real_3f800000;
  pFVar13 = (this->Constraints).AllocatorInstance.Data;
  uVar2 = (this->Constraints).ArrayNum;
  uVar10 = (ulonglong)(int)uVar2;
  fVar23 = this->Radius + this->Radius;
  pFVar1 = pFVar13 + uVar10 * 8;
  while( true ) {
    if ((this->Constraints).ArrayNum != (int)uVar10) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<Chaos::TVector<int,2>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar13 == pFVar1) {
      return;
    }
    uVar9 = *(uint *)pFVar13;
    lVar15 = (longlong)(int)uVar9;
    uVar3 = *(uint *)(pFVar13 + 4);
    lVar16 = (longlong)(int)uVar3;
    uVar11 = ~uVar9 >> 0x1f;
    uVar8 = 0;
    if ((int)uVar9 < (int)param_1->_padding_) {
      uVar8 = uVar11;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = param_1->_padding_;
    uVar12 = ~uVar3 >> 0x1f;
    uVar8 = 0;
    if ((int)uVar3 < (int)param_1->_padding_) {
      uVar8 = uVar12;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar17 = *(float *)(lVar4 + lVar15 * 4);
    fVar19 = *(float *)(param_1->_padding_ + lVar16 * 4);
    uVar8 = 0;
    if ((int)uVar9 < *(int *)&(param_1->MPAndInvM).field_0x10) {
      uVar8 = uVar11;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pfVar14 = (float *)(lVar15 * 0x10 + *(longlong *)&(param_1->MPAndInvM).field_0x8);
    uVar8 = 0;
    if ((int)uVar3 < *(int *)&(param_1->MPAndInvM).field_0x10) {
      uVar8 = uVar12;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    lVar4 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
    fVar21 = pfVar14[1] - *(float *)(lVar4 + 4 + lVar16 * 0x10);
    fVar20 = *pfVar14 - *(float *)(lVar4 + lVar16 * 0x10);
    fVar22 = pfVar14[2] - *(float *)(lVar4 + 8 + lVar16 * 0x10);
    fVar18 = fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22;
    if (fVar18 < fVar23 * fVar23) {
      fVar18 = SQRT(fVar18);
      fVar17 = fVar6 / (fVar18 * (fVar17 + fVar19));
      fVar19 = (fVar18 - fVar23) * this->Stiffness;
      uVar8 = 0;
      if ((int)uVar9 < (int)param_1->_padding_) {
        uVar8 = uVar11;
      }
      fVar18 = fVar20 * fVar19 * fVar17;
      fVar20 = fVar21 * fVar19 * fVar17;
      fVar17 = fVar22 * fVar19 * fVar17;
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (0.0 < *(float *)(param_1->_padding_ + lVar15 * 4)) {
        uVar8 = 0;
        if ((int)uVar9 < (int)param_1->_padding_) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar19 = *(float *)(param_1->_padding_ + lVar15 * 4);
        *pfVar14 = *pfVar14 - fVar19 * fVar18;
        pfVar14[1] = pfVar14[1] - fVar19 * fVar20;
        pfVar14[2] = pfVar14[2] - fVar19 * fVar17;
      }
      uVar9 = 0;
      if ((int)uVar3 < (int)param_1->_padding_) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (0.0 < *(float *)(param_1->_padding_ + lVar16 * 4)) {
        uVar9 = 0;
        if ((int)uVar3 < (int)param_1->_padding_) {
          uVar9 = uVar12;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar19 = *(float *)(param_1->_padding_ + lVar16 * 4);
        *(float *)(lVar4 + lVar16 * 0x10) = fVar18 * fVar19 + *(float *)(lVar4 + lVar16 * 0x10);
        *(float *)(lVar4 + 4 + lVar16 * 0x10) =
             fVar20 * fVar19 + *(float *)(lVar4 + 4 + lVar16 * 0x10);
        *(float *)(lVar4 + 8 + lVar16 * 0x10) =
             fVar17 * fVar19 + *(float *)(lVar4 + 8 + lVar16 * 0x10);
      }
    }
    pFVar13 = pFVar13 + 8;
    uVar10 = (ulonglong)uVar2;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Apply<Chaos::Softs::FSolverParticlesRange> @ 143cb49e0

void __thiscall
Chaos::Softs::FPBDSelfCollisionSphereConstraintsBase::Apply<Chaos::Softs::FSolverParticlesRange>
          (FPBDSelfCollisionSphereConstraintsBase *this,FSolverParticlesRange *param_1,float param_2
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  float *pfVar8;
  float *pfVar9;
  TVector<float,3> *pTVar10;
  TVector<float,3> *pTVar11;
  FScriptContainerElement *pFVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 local_res8 [8];
  
  fVar6 = __real_3f800000;
  pFVar12 = (this->Constraints).AllocatorInstance.Data;
  iVar2 = (this->Constraints).ArrayNum;
  fVar19 = this->Radius + this->Radius;
  pFVar1 = pFVar12 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Constraints).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TVector<int,2>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar12 == pFVar1) break;
    iVar3 = *(int *)pFVar12;
    iVar4 = *(int *)(pFVar12 + 4);
    if (*(longlong *)&param_1->field_0x8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pfVar8 = TDynamicParticles<float,3>::InvM
                       (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                        *(int *)&param_1->field_0x10 + iVar3);
    if (*(longlong *)&param_1->field_0x8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pfVar9 = TDynamicParticles<float,3>::InvM
                       (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                        *(int *)&param_1->field_0x10 + iVar4);
    fVar13 = *pfVar8;
    fVar18 = *pfVar9;
    if (*(longlong *)&param_1->field_0x8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar10 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                  *(int *)&param_1->field_0x10 + iVar3);
    if (*(longlong *)&param_1->field_0x8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar11 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                  *(int *)&param_1->field_0x10 + iVar4);
    fVar16 = *(float *)&pTVar10->field_0x4 - *(float *)&pTVar11->field_0x4;
    fVar17 = *(float *)pTVar10 - *(float *)pTVar11;
    fVar15 = *(float *)&pTVar10->field_0x8 - *(float *)&pTVar11->field_0x8;
    fVar14 = fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15;
    if (fVar14 < fVar19 * fVar19) {
      fVar14 = SQRT(fVar14);
      fVar13 = fVar6 / (fVar14 * (fVar13 + fVar18));
      fVar14 = (fVar14 - fVar19) * this->Stiffness;
      fVar18 = fVar14 * fVar17 * fVar13;
      fVar16 = fVar14 * fVar16 * fVar13;
      fVar13 = fVar14 * fVar15 * fVar13;
      if (*(longlong *)&param_1->field_0x8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pfVar8 = TDynamicParticles<float,3>::InvM
                         (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                          *(int *)&param_1->field_0x10 + iVar3);
      if (0.0 < *pfVar8) {
        if (*(longlong *)&param_1->field_0x8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x57,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pfVar8 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                            *(int *)&param_1->field_0x10 + iVar3);
        fVar14 = *pfVar8;
        *(float *)pTVar10 = *(float *)pTVar10 - fVar14 * fVar18;
        *(float *)&pTVar10->field_0x4 = *(float *)&pTVar10->field_0x4 - fVar14 * fVar16;
        *(float *)&pTVar10->field_0x8 = *(float *)&pTVar10->field_0x8 - fVar14 * fVar13;
      }
      if (*(longlong *)&param_1->field_0x8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pfVar8 = TDynamicParticles<float,3>::InvM
                         (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                          *(int *)&param_1->field_0x10 + iVar4);
      if (0.0 < *pfVar8) {
        if (*(longlong *)&param_1->field_0x8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x57,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pfVar8 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                            *(int *)&param_1->field_0x10 + iVar4);
        fVar14 = *pfVar8;
        *(float *)pTVar11 = fVar14 * fVar18 + *(float *)pTVar11;
        *(float *)&pTVar11->field_0x4 = fVar14 * fVar16 + *(float *)&pTVar11->field_0x4;
        *(float *)&pTVar11->field_0x8 = fVar14 * fVar13 + *(float *)&pTVar11->field_0x8;
      }
    }
    pFVar12 = pFVar12 + 8;
  }
  return;
}

// Init<Chaos::Softs::FSolverParticles> @ 143ce1a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FPBDSelfCollisionSphereConstraintsBase::Init<Chaos::Softs::FSolverParticles>
          (FPBDSelfCollisionSphereConstraintsBase *this,FSolverParticles *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar4;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar5;
  FSolverParticles *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  int *piVar19;
  uint uVar20;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *pTVar21;
  float fVar22;
  undefined1 auStackY_248 [32];
  TArray<Chaos::Softs::Private::FSphereSpatialEntry,TSizedDefaultAllocator<32>_> local_1f8;
  undefined1 local_1e8 [16];
  FSolverParticles *local_1d8;
  int iStack_1d0;
  longlong *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  longlong *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  int local_1a8;
  int local_1a4;
  int *local_1a0;
  longlong local_198;
  int local_190;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  code *local_128;
  FPBDSelfCollisionSphereConstraintsBase **local_120;
  FPBDSelfCollisionSphereConstraintsBase *local_118;
  FSolverParticles *local_110;
  float local_108;
  FScriptContainerElement **local_100;
  FScriptContainerElement *local_f8;
  undefined8 uStack_f0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_e8;
  undefined4 local_cc;
  undefined4 local_bc;
  undefined4 local_9c;
  TSpatialHashGridPoints<int,float> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  piVar19 = &(this->Constraints).ArrayMax;
  iVar14 = 0;
  iVar16 = 0;
  (this->Constraints).ArrayNum = 0;
  local_1d8 = param_1;
  local_1a0 = piVar19;
  if ((this->Constraints).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->Constraints).AllocatorInstance,0,piVar19);
  }
  if ((this->NumParticles != 0) &&
     (((pTVar4 = this->VertexSetNoOffset,
       pTVar4 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0 ||
       (*(int *)&(pTVar4->Elements).field_0x8 != *(int *)&(pTVar4->Elements).field_0x34)) &&
      (0.0 < this->Stiffness)))) {
    local_198 = param_1->_padding_;
    iVar13 = (int)param_1->_padding_;
    local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    fVar22 = this->Radius + this->Radius;
    local_1f8.ArrayMax = 0;
    if ((iVar13 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar4 = this->VertexSetNoOffset;
    local_190 = iVar13;
    if (pTVar4 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
      uVar15 = this->NumParticles;
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      local_1f8.ArrayNum = 0;
      if (local_1f8.ArrayMax < (int)uVar15) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar15,&local_1f8.AllocatorInstance,0,&local_1f8.ArrayMax);
      }
      if (0 < this->NumParticles) {
        do {
          local_1b8 = &local_198;
          iStack_1b0 = this->Offset + iVar14;
          if (((local_1f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1b8) &&
              ((FScriptContainerElement *)&local_1b8 <
               local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayMax * 0x10)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (local_1f8.ArrayNum == local_1f8.ArrayMax) {
            local_1f8.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_1f8.AllocatorInstance,&local_1f8.ArrayMax);
          }
          lVar12 = (longlong)local_1f8.ArrayNum;
          iVar14 = iVar14 + 1;
          local_1f8.ArrayNum = local_1f8.ArrayNum + 1;
          *(longlong **)(local_1f8.AllocatorInstance.Data + lVar12 * 0x10) = local_1b8;
          *(longlong *)(local_1f8.AllocatorInstance.Data + lVar12 * 0x10 + 8) =
               CONCAT44(uStack_1ac,iStack_1b0);
        } while (iVar14 < this->NumParticles);
      }
    }
    else {
      uVar15 = *(int *)&(pTVar4->Elements).field_0x8 - *(int *)&(pTVar4->Elements).field_0x34;
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      local_1f8.ArrayNum = 0;
      if (local_1f8.ArrayMax < (int)uVar15) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar15,&local_1f8.AllocatorInstance,0,&local_1f8.ArrayMax);
      }
      pTVar4 = this->VertexSetNoOffset;
      iVar14 = *(int *)&(pTVar4->Elements).field_0x28;
      puVar2 = &(pTVar4->Elements).field_0x10;
      uStack_17c = 1;
      local_168 = 0;
      iStack_16c = local_168;
      if (iVar14 != 0) {
        puVar18 = *(uint **)&(pTVar4->Elements).field_0x20;
        if (puVar18 == (uint *)0x0) {
          puVar18 = (uint *)puVar2;
        }
        uVar15 = *puVar18;
        local_168 = 0;
        iVar16 = 0;
        while (uVar15 == 0) {
          lVar12 = (longlong)iVar16;
          local_168 = local_168 + 0x20;
          iVar16 = iVar16 + 1;
          iStack_16c = iVar14;
          if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_143ce1c0d;
          uVar15 = puVar18[lVar12 + 1];
        }
        uStack_17c = -uVar15 & uVar15;
        uVar1 = (ulonglong)uStack_17c * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_1a8 = (int)lVar12;
        iStack_16c = local_168 + -1 + local_1a8;
        if (iVar14 < iStack_16c) {
          iStack_16c = iVar14;
        }
      }
LAB_143ce1c0d:
      uVar15 = *(uint *)&(pTVar4->Elements).field_0x28;
      uStack_164 = local_9c;
      uVar20 = uVar15 & 0xffffffe0;
      iStack_160 = *(int *)&(pTVar4->Elements).field_0x8 - *(int *)&(pTVar4->Elements).field_0x34;
      uStack_170 = 0xffffffff;
      TStack_150._padding_ = CONCAT44(uStack_17c,iVar16);
      TStack_150.CurrentBitIndex = iStack_16c;
      TStack_150.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar15 >> 5;
      TStack_150._28_4_ = local_9c;
      TStack_150.BaseBitIndex = local_168;
      uStack_130 = CONCAT44(uStack_15c,iStack_160);
      local_188 = pTVar4;
      iStack_180 = iVar16;
      local_178 = puVar2;
      local_158 = pTVar4;
      TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar15 < 0) || (iVar14 < (int)uVar15)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar3 = *(uint *)&(pTVar4->Elements).field_0x28;
      if (uVar15 != uVar3) {
        puVar17 = *(undefined1 **)&(pTVar4->Elements).field_0x20;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = puVar2;
        }
        uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
        while (uVar15 == 0) {
          lVar12 = (longlong)iVar13;
          uVar20 = uVar20 + 0x20;
          iVar13 = iVar13 + 1;
          uVar15 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_143ce1d10;
          uVar15 = *(uint *)(puVar17 + lVar12 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_1a4 = (int)lVar12;
        uVar15 = local_1a4 + -1 + uVar20;
        if ((int)uVar3 < (int)uVar15) {
          uVar15 = uVar3;
        }
      }
LAB_143ce1d10:
      while( true ) {
        pTVar9 = local_158;
        if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
            (int)uStack_130) {
          local_1e8[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1e8);
        }
        if (((TStack_150.CurrentBitIndex == uVar15) &&
            (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (piVar19 = local_1a0, param_1 = local_1d8, pTVar9 == pTVar4)) break;
        local_1c8 = &local_198;
        iStack_1c0 = *(int *)(*(longlong *)&pTVar9->Elements +
                             (longlong)TStack_150.CurrentBitIndex * 0xc) + this->Offset;
        if (((local_1f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1c8) &&
            ((FScriptContainerElement *)&local_1c8 <
             local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayMax * 0x10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (local_1f8.ArrayNum == local_1f8.ArrayMax) {
          local_1f8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_1f8.AllocatorInstance,&local_1f8.ArrayMax);
        }
        lVar12 = (longlong)local_1f8.ArrayNum;
        local_1f8.ArrayNum = local_1f8.ArrayNum + 1;
        *(longlong **)(local_1f8.AllocatorInstance.Data + lVar12 * 0x10) = local_1c8;
        *(longlong *)(local_1f8.AllocatorInstance.Data + lVar12 * 0x10 + 8) =
             CONCAT44(uStack_1bc,iStack_1c0);
        TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
      }
    }
    pTVar21 = &this->Constraints;
    local_98._padding_ = 0;
    local_98.ParticleIndexToElement.ArrayNum = 0;
    local_98.ParticleIndexToElement.ArrayMax = 0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    local_98.ParticleIndexToElement.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.CellSize.m128_f32[0] = fVar22;
    local_98.CellSize.m128_f32[1] = fVar22;
    local_98.CellSize.m128_f32[2] = fVar22;
    local_98.CellSize.m128_f32[3] = fVar22;
    TSpatialHashGridPoints<int,float>::
    InitializePoints<TArray<Chaos::Softs::Private::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_>
              (&local_98,&local_1f8,
               local_1f8.ArrayNum < Softs::Private::Chaos_SelfCollisionSphere_ParallelCount);
    iVar16 = local_1f8.ArrayNum;
    pTVar5 = this->ReferencePositions;
    local_108 = fVar22 * fVar22;
    if (pTVar5 == (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0) {
      local_1d8 = (FSolverParticles *)0x0;
      iStack_1d0 = 0;
      pFVar6 = local_1d8;
    }
    else {
      iStack_1d0 = pTVar5->ArrayNum;
      pFVar6 = (FSolverParticles *)(pTVar5->AllocatorInstance).Data;
      local_bc = local_cc;
      if ((iStack_1d0 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), local_bc = local_cc, bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    local_1d8 = pFVar6;
    uStack_f0 = CONCAT44(local_bc,iStack_1d0);
    local_100 = &local_f8;
    local_120 = &local_118;
    local_f8 = (FScriptContainerElement *)local_1d8;
    local_128 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::Softs::FPBDSelfCollisionSphereConstraintsBase::Init<Chaos::Softs::FSolverParticles>'::__l2::<lambda_1>,bool,int,int>
                ::Call;
    local_118 = this;
    local_110 = param_1;
    pTVar11 = TSpatialHashGridPoints<int,float>::FindAllSelfProximities
                        (&local_98,&local_e8,1,iVar16 * 3,
                         (TFunctionRef<bool___cdecl(int,int)> *)&local_128,
                         local_1f8.ArrayNum <
                         Softs::Private::Chaos_SelfCollisionSphere_ParallelCount);
    if (pTVar21 != pTVar11) {
      pFVar7 = (pTVar21->AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pTVar21->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
      (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->Constraints).ArrayNum = pTVar11->ArrayNum;
      *piVar19 = pTVar11->ArrayMax;
      pTVar11->ArrayNum = 0;
      pTVar11->ArrayMax = 0;
    }
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    if (local_98.ParticleIndexToElement.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.ParticleIndexToElement.AllocatorInstance.Data);
    }
    if ((void *)local_98._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_98._padding_);
    }
    if ((void *)local_98._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_98._padding_);
    }
    if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.AllocatorInstance.Data);
    }
  }
  return;
}

// Init<Chaos::Softs::FSolverParticlesRange> @ 143ce2170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FPBDSelfCollisionSphereConstraintsBase::Init<Chaos::Softs::FSolverParticlesRange>
          (FPBDSelfCollisionSphereConstraintsBase *this,FSolverParticlesRange *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar9;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *pTVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  int *piVar20;
  float fVar21;
  undefined1 auStackY_248 [32];
  TArray<Chaos::Softs::Private::FSphereSpatialEntry,TSizedDefaultAllocator<32>_> local_1f8;
  undefined1 local_1e8 [8];
  TArrayView<Chaos::TVector<float,3>_const_,int> *local_1e0;
  int iStack_1d8;
  undefined4 uStack_1d4;
  TArrayView<Chaos::TVector<float,3>_const_,int> *local_1d0;
  int iStack_1c8;
  undefined4 uStack_1c4;
  int local_1c0;
  int local_1bc;
  TParticlesRange<Chaos::Softs::FSolverParticles,void> *local_1b8;
  int *local_1b0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1a8;
  int iStack_1a0;
  uint uStack_19c;
  undefined1 *local_198;
  undefined4 uStack_190;
  int iStack_18c;
  int local_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_148;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_138;
  code *local_128;
  FPBDSelfCollisionSphereConstraintsBase **local_120;
  FPBDSelfCollisionSphereConstraintsBase *local_118;
  TParticlesRange<Chaos::Softs::FSolverParticles,void> *local_110;
  float local_108;
  TVector<float,3> **local_100;
  TVector<float,3> *local_f8;
  undefined8 uStack_f0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_e8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_d8 [2];
  undefined4 local_ac;
  TSpatialHashGridPoints<int,float> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_248;
  piVar20 = &(this->Constraints).ArrayMax;
  iVar13 = 0;
  iVar16 = 0;
  (this->Constraints).ArrayNum = 0;
  local_1b8 = (TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1;
  local_1b0 = piVar20;
  if ((this->Constraints).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->Constraints).AllocatorInstance,0,piVar20);
  }
  if ((this->NumParticles != 0) &&
     (((pTVar4 = this->VertexSetNoOffset,
       pTVar4 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0 ||
       (*(int *)&(pTVar4->Elements).field_0x8 != *(int *)&(pTVar4->Elements).field_0x34)) &&
      (0.0 < this->Stiffness)))) {
    fVar21 = this->Radius + this->Radius;
    local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.ArrayMax = 0;
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x56,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TParticlesRange<Chaos::Softs::FSolverParticles,void>::
    GetConstArrayView<Chaos::TVector<float,3>_>
              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_148,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)&param_1->field_0x8 + 0x28));
    pTVar4 = this->VertexSetNoOffset;
    if (pTVar4 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
      uVar15 = this->NumParticles;
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      local_1f8.ArrayNum = 0;
      if (local_1f8.ArrayMax < (int)uVar15) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar15,&local_1f8.AllocatorInstance,0,&local_1f8.ArrayMax);
      }
      if (0 < this->NumParticles) {
        do {
          iStack_1c8 = this->Offset + iVar13;
          local_1d0 = &local_148;
          if (((local_1f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1d0) &&
              ((FScriptContainerElement *)&local_1d0 <
               local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayMax * 0x10)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (local_1f8.ArrayNum == local_1f8.ArrayMax) {
            local_1f8.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_1f8.AllocatorInstance,&local_1f8.ArrayMax);
          }
          lVar11 = (longlong)local_1f8.ArrayNum;
          iVar13 = iVar13 + 1;
          local_1f8.ArrayNum = local_1f8.ArrayNum + 1;
          *(TArrayView<Chaos::TVector<float,3>_const_,int> **)
           (local_1f8.AllocatorInstance.Data + lVar11 * 0x10) = local_1d0;
          *(ulonglong *)(local_1f8.AllocatorInstance.Data + lVar11 * 0x10 + 8) =
               CONCAT44(uStack_1c4,iStack_1c8);
        } while (iVar13 < this->NumParticles);
      }
    }
    else {
      uVar15 = *(int *)&(pTVar4->Elements).field_0x8 - *(int *)&(pTVar4->Elements).field_0x34;
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      local_1f8.ArrayNum = 0;
      if (local_1f8.ArrayMax < (int)uVar15) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar15,&local_1f8.AllocatorInstance,0,&local_1f8.ArrayMax);
      }
      pTVar4 = this->VertexSetNoOffset;
      iVar13 = *(int *)&(pTVar4->Elements).field_0x28;
      puVar2 = &(pTVar4->Elements).field_0x10;
      local_188 = 0;
      uStack_19c = 1;
      iStack_18c = 0;
      if (iVar13 != 0) {
        puVar18 = *(uint **)&(pTVar4->Elements).field_0x20;
        if (puVar18 == (uint *)0x0) {
          puVar18 = (uint *)puVar2;
        }
        uVar15 = *puVar18;
        iVar16 = 0;
        while (uVar15 == 0) {
          lVar11 = (longlong)iVar16;
          local_188 = local_188 + 0x20;
          iVar16 = iVar16 + 1;
          iStack_18c = iVar13;
          if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_143ce233d;
          uVar15 = puVar18[lVar11 + 1];
        }
        uStack_19c = -uVar15 & uVar15;
        uVar1 = (ulonglong)uStack_19c * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_1c0 = (int)lVar11;
        iStack_18c = local_188 + -1 + local_1c0;
        if (iVar13 < iStack_18c) {
          iStack_18c = iVar13;
        }
      }
LAB_143ce233d:
      uVar15 = *(uint *)&(pTVar4->Elements).field_0x28;
      uStack_184 = local_ac;
      uVar19 = uVar15 & 0xffffffe0;
      iStack_180 = *(int *)&(pTVar4->Elements).field_0x8 - *(int *)&(pTVar4->Elements).field_0x34;
      uStack_190 = 0xffffffff;
      TStack_170._padding_ = CONCAT44(uStack_19c,iVar16);
      TStack_170.CurrentBitIndex = iStack_18c;
      TStack_170.UnvisitedBitMask = 0xffffffff;
      iVar12 = (int)uVar15 >> 5;
      TStack_170._28_4_ = local_ac;
      TStack_170.BaseBitIndex = local_188;
      uStack_150 = CONCAT44(uStack_17c,iStack_180);
      local_1a8 = pTVar4;
      iStack_1a0 = iVar16;
      local_198 = puVar2;
      local_178 = pTVar4;
      TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar15 < 0) || (iVar13 < (int)uVar15)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar3 = *(uint *)&(pTVar4->Elements).field_0x28;
      if (uVar15 != uVar3) {
        puVar17 = *(undefined1 **)&(pTVar4->Elements).field_0x20;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = puVar2;
        }
        uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar12 * 4);
        while (uVar15 == 0) {
          lVar11 = (longlong)iVar12;
          uVar19 = uVar19 + 0x20;
          iVar12 = iVar12 + 1;
          uVar15 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_143ce2440;
          uVar15 = *(uint *)(puVar17 + lVar11 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_1bc = (int)lVar11;
        uVar15 = local_1bc + -1 + uVar19;
        if ((int)uVar3 < (int)uVar15) {
          uVar15 = uVar3;
        }
      }
LAB_143ce2440:
      while( true ) {
        pTVar7 = local_178;
        if (*(int *)&(local_178->Elements).field_0x8 - *(int *)&(local_178->Elements).field_0x34 !=
            (int)uStack_150) {
          local_1e8[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1e8);
        }
        if (((TStack_170.CurrentBitIndex == uVar15) &&
            (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (param_1 = (FSolverParticlesRange *)local_1b8, piVar20 = local_1b0, pTVar7 == pTVar4))
        break;
        iStack_1d8 = *(int *)(*(longlong *)&pTVar7->Elements +
                             (longlong)TStack_170.CurrentBitIndex * 0xc) + this->Offset;
        local_1e0 = &local_148;
        if (((local_1f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1e0) &&
            ((FScriptContainerElement *)&local_1e0 <
             local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayMax * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_1f8.ArrayNum == local_1f8.ArrayMax) {
          local_1f8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_1f8.AllocatorInstance,&local_1f8.ArrayMax);
        }
        lVar11 = (longlong)local_1f8.ArrayNum;
        local_1f8.ArrayNum = local_1f8.ArrayNum + 1;
        *(TArrayView<Chaos::TVector<float,3>_const_,int> **)
         (local_1f8.AllocatorInstance.Data + lVar11 * 0x10) = local_1e0;
        *(ulonglong *)(local_1f8.AllocatorInstance.Data + lVar11 * 0x10 + 8) =
             CONCAT44(uStack_1d4,iStack_1d8);
        TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
      }
    }
    pTVar14 = &this->Constraints;
    local_a8._padding_ = 0;
    local_a8.ParticleIndexToElement.ArrayNum = 0;
    local_a8.ParticleIndexToElement.ArrayMax = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8.ParticleIndexToElement.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.CellSize.m128_f32[0] = fVar21;
    local_a8.CellSize.m128_f32[1] = fVar21;
    local_a8.CellSize.m128_f32[2] = fVar21;
    local_a8.CellSize.m128_f32[3] = fVar21;
    TSpatialHashGridPoints<int,float>::
    InitializePoints<TArray<Chaos::Softs::Private::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_>
              (&local_a8,&local_1f8,
               local_1f8.ArrayNum < Softs::Private::Chaos_SelfCollisionSphere_ParallelCount);
    iVar16 = local_1f8.ArrayNum;
    local_108 = fVar21 * fVar21;
    if (this->ReferencePositions ==
        (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0) {
      local_138.DataPtr = (TVector<float,3> *)0x0;
      pTVar9 = &local_138;
      local_138.ArrayNum = 0;
    }
    else {
      pTVar9 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
               GetConstArrayView<Chaos::TVector<float,3>_>
                         ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,local_d8,
                          this->ReferencePositions);
    }
    local_f8 = pTVar9->DataPtr;
    uStack_f0 = *(undefined8 *)&pTVar9->ArrayNum;
    local_100 = &local_f8;
    local_120 = &local_118;
    local_128 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::Softs::FPBDSelfCollisionSphereConstraintsBase::Init<Chaos::Softs::FSolverParticlesRange>'::__l2::<lambda_1>,bool,int,int>
                ::Call;
    local_118 = this;
    local_110 = (TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1;
    pTVar10 = TSpatialHashGridPoints<int,float>::FindAllSelfProximities
                        (&local_a8,&local_e8,1,iVar16 * 3,
                         (TFunctionRef<bool___cdecl(int,int)> *)&local_128,
                         local_1f8.ArrayNum <
                         Softs::Private::Chaos_SelfCollisionSphere_ParallelCount);
    if (pTVar14 != pTVar10) {
      pFVar5 = (pTVar14->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar14->AllocatorInstance).Data = (pTVar10->AllocatorInstance).Data;
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->Constraints).ArrayNum = pTVar10->ArrayNum;
      *piVar20 = pTVar10->ArrayMax;
      pTVar10->ArrayNum = 0;
      pTVar10->ArrayMax = 0;
    }
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    if (local_a8.ParticleIndexToElement.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.ParticleIndexToElement.AllocatorInstance.Data);
    }
    if ((void *)local_a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._padding_);
    }
    if ((void *)local_a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._padding_);
    }
    if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.AllocatorInstance.Data);
    }
  }
  return;
}

// FPBDSelfCollisionSphereConstraintsBase @ 143d02390

FPBDSelfCollisionSphereConstraintsBase * __thiscall
Chaos::Softs::FPBDSelfCollisionSphereConstraintsBase::FPBDSelfCollisionSphereConstraintsBase
          (FPBDSelfCollisionSphereConstraintsBase *this,int param_1,int param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_4,float param_5,
          float param_6)

{
  this->_padding_ = (longlong)&___7FPBDSelfCollisionSphereConstraintsBase_Softs_Chaos__6B_;
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).ArrayMax = 0;
  this->ReferencePositions = param_4;
  this->Radius = param_5;
  this->Stiffness = param_6;
  this->VertexSetNoOffset = param_3;
  this->Offset = param_1;
  this->NumParticles = param_2;
  return this;
}

// ~FPBDSelfCollisionSphereConstraintsBase @ 143d039d0

void __thiscall
Chaos::Softs::FPBDSelfCollisionSphereConstraintsBase::~FPBDSelfCollisionSphereConstraintsBase
          (FPBDSelfCollisionSphereConstraintsBase *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FPBDSelfCollisionSphereConstraintsBase_Softs_Chaos__6B_;
  pFVar1 = (this->Constraints).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator() @ 143d0fb00

bool __thiscall
`Chaos::Softs::FPBDSelfCollisionSphereConstraintsBase::Init<Chaos::Softs::FSolverParticles>'::__l2::
<lambda_1>::operator()(void *this,int param_1,int param_2)

{
  TDynamicParticles<float,3> *this_00;
  bool bVar1;
  TVector<float,3> *pTVar2;
  TVector<float,3> *pTVar3;
  float fVar4;
  float fVar5;
  
  this_00 = *(TDynamicParticles<float,3> **)((longlong)this + 8);
  fVar4 = Chaos::TDynamicParticles<float,3>::InvM(this_00,param_1);
  fVar5 = Chaos::TDynamicParticles<float,3>::InvM(this_00,param_2);
  if (fVar5 + fVar4 < __real_33d6bf95) {
    bVar1 = false;
  }
  else if (*(longlong *)(*(longlong *)this + 0x30) == 0) {
    bVar1 = true;
  }
  else {
    pTVar2 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x18),
                        param_2);
    pTVar3 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x18),
                        param_1);
    fVar5 = *(float *)&pTVar2->field_0x4 - *(float *)&pTVar3->field_0x4;
    fVar4 = *(float *)&pTVar2->field_0x8 - *(float *)&pTVar3->field_0x8;
    bVar1 = *(float *)((longlong)this + 0x10) <=
            fVar5 * fVar5 +
            (*(float *)pTVar2 - *(float *)pTVar3) * (*(float *)pTVar2 - *(float *)pTVar3) +
            fVar4 * fVar4;
  }
  return bVar1;
}

// operator() @ 143d0fbd0

bool __thiscall
`Chaos::Softs::FPBDSelfCollisionSphereConstraintsBase::Init<Chaos::Softs::FSolverParticlesRange>'::
__l2::<lambda_1>::operator()(void *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TVector<float,3> *pTVar5;
  TVector<float,3> *pTVar6;
  float fVar7;
  float fVar8;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  if (*(longlong *)(lVar1 + 8) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x56,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  fVar7 = Chaos::TDynamicParticles<float,3>::InvM
                    (*(TDynamicParticles<float,3> **)(lVar1 + 8),*(int *)(lVar1 + 0x10) + param_2);
  if (*(longlong *)(lVar1 + 8) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x56,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  fVar8 = Chaos::TDynamicParticles<float,3>::InvM
                    (*(TDynamicParticles<float,3> **)(lVar1 + 8),*(int *)(lVar1 + 0x10) + param_1);
  if (fVar8 + fVar7 < __real_33d6bf95) {
    bVar3 = false;
  }
  else if (*(longlong *)(*(longlong *)this + 0x30) == 0) {
    bVar3 = true;
  }
  else {
    pTVar5 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x18),
                        param_2);
    pTVar6 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x18),
                        param_1);
    fVar8 = *(float *)&pTVar5->field_0x4 - *(float *)&pTVar6->field_0x4;
    fVar7 = *(float *)&pTVar5->field_0x8 - *(float *)&pTVar6->field_0x8;
    bVar3 = *(float *)((longlong)this + 0x10) <=
            fVar8 * fVar8 +
            (*(float *)pTVar5 - *(float *)pTVar6) * (*(float *)pTVar5 - *(float *)pTVar6) +
            fVar7 * fVar7;
  }
  return bVar3;
}

