// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 15

// GetGradients<Chaos::Softs::FSolverParticlesRange> @ 143c2f900

TStaticArray<Chaos::TVector<float,3>,4,4294967295> * __thiscall
Chaos::Softs::FPBDBendingConstraintsBase::GetGradients<Chaos::Softs::FSolverParticlesRange>
          (FPBDBendingConstraintsBase *this,
          TStaticArray<Chaos::TVector<float,3>,4,4294967295> *__return_storage_ptr__,
          FSolverParticlesRange *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TStaticArray<Chaos::TVector<float,3>,4,4294967295> *pTVar5;
  TVector<float,3> *pTVar6;
  TVector<float,3> *pTVar7;
  TVector<float,3> *pTVar8;
  TVector<float,3> *pTVar9;
  FScriptContainerElement *pFVar10;
  
  uVar4 = 0;
  if (param_2 < (this->Constraints).ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar10 = (this->Constraints).AllocatorInstance.Data + (longlong)param_2 * 0x10;
  iVar1 = *(int *)pFVar10;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x56,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pTVar6 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                               *(int *)&param_1->field_0x10 + iVar1);
  iVar1 = *(int *)(pFVar10 + 4);
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x56,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pTVar7 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                               *(int *)&param_1->field_0x10 + iVar1);
  iVar1 = *(int *)(pFVar10 + 8);
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x56,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pTVar8 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                               *(int *)&param_1->field_0x10 + iVar1);
  iVar1 = *(int *)(pFVar10 + 0xc);
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x56,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pTVar9 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                               *(int *)&param_1->field_0x10 + iVar1);
  CalcGradients(__return_storage_ptr__,pTVar6,pTVar7,pTVar8,pTVar9,(float *)0x0);
  return __return_storage_ptr__;
}

// GetScalingFactor<Chaos::Softs::FSolverParticles> @ 143c2fac0

float __thiscall
Chaos::Softs::FPBDBendingConstraintsBase::GetScalingFactor<Chaos::Softs::FSolverParticles>
          (FPBDBendingConstraintsBase *this,FSolverParticles *param_1,int param_2,
          TStaticArray<Chaos::TVector<float,3>,4,4294967295> *param_3,float param_4,float param_5)

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
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  code *pcVar16;
  bool bVar17;
  uint uVar18;
  TVector<float,3> *pTVar19;
  TVector<float,3> *pTVar20;
  TVector<float,3> *pTVar21;
  TVector<float,3> *pTVar22;
  longlong lVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  lVar23 = (longlong)param_2;
  uVar24 = (uint)~param_2 >> 0x1f;
  uVar18 = 0;
  if (param_2 < (this->Constraints).ArrayNum) {
    uVar18 = uVar24;
  }
  if ((uVar18 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar16 = (code *)swi(3);
    fVar25 = (float)(*pcVar16)();
    return fVar25;
  }
  pFVar15 = (this->Constraints).AllocatorInstance.Data;
  iVar11 = *(int *)(pFVar15 + lVar23 * 0x10);
  iVar12 = *(int *)(pFVar15 + lVar23 * 0x10 + 4);
  iVar13 = *(int *)(pFVar15 + lVar23 * 0x10 + 8);
  iVar14 = *(int *)(pFVar15 + lVar23 * 0x10 + 0xc);
  pTVar19 = FSolverParticles::P(param_1,iVar11);
  pTVar20 = FSolverParticles::P(param_1,iVar12);
  pTVar21 = FSolverParticles::P(param_1,iVar13);
  pTVar22 = FSolverParticles::P(param_1,iVar14);
  fVar26 = CalcAngle(pTVar19,pTVar20,pTVar21,pTVar22);
  fVar25 = *(float *)&param_3->Elements[3].field_0x8;
  fVar31 = *(float *)&param_3->Elements[0].field_0x8;
  fVar1 = *(float *)param_3->Elements;
  fVar2 = *(float *)&param_3->Elements[0].field_0x4;
  fVar3 = *(float *)&param_3->Elements[1].field_0x8;
  fVar4 = *(float *)(param_3->Elements + 1);
  fVar5 = *(float *)&param_3->Elements[1].field_0x4;
  fVar6 = *(float *)&param_3->Elements[2].field_0x8;
  fVar7 = *(float *)(param_3->Elements + 2);
  fVar8 = *(float *)&param_3->Elements[2].field_0x4;
  fVar9 = *(float *)(param_3->Elements + 3);
  fVar10 = *(float *)&param_3->Elements[3].field_0x4;
  fVar27 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar12);
  fVar28 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar11);
  fVar29 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar13);
  fVar30 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar14);
  uVar18 = 0;
  if (param_2 < (this->IsBuckled).ArrayNum) {
    uVar18 = uVar24;
  }
  fVar25 = fVar30 * (fVar10 * fVar10 + fVar9 * fVar9 + fVar25 * fVar25) +
           fVar29 * (fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) +
           fVar28 * (fVar2 * fVar2 + fVar1 * fVar1 + fVar31 * fVar31) +
           fVar27 * (fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  if ((uVar18 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar16 = (code *)swi(3);
    fVar25 = (float)(*pcVar16)();
    return fVar25;
  }
  if ((this->IsBuckled).AllocatorInstance.Data[param_2] != (FScriptContainerElement)0x0) {
    param_4 = param_5;
  }
  uVar18 = 0;
  if (param_2 < (this->RestAngles).ArrayNum) {
    uVar18 = uVar24;
  }
  if ((uVar18 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar16 = (code *)swi(3);
    fVar25 = (float)(*pcVar16)();
    return fVar25;
  }
  fVar31 = (fVar26 - *(float *)((this->RestAngles).AllocatorInstance.Data + (longlong)param_2 * 4))
           * param_4;
  if (__real_3f490fdb <= fVar31) {
    fVar31 = __real_3f490fdb;
  }
  if (fVar31 <= __real_bf490fdb) {
    fVar31 = __real_bf490fdb;
  }
  if (fVar25 <= __real_322bcc77) {
    fVar31 = 0.0;
  }
  else {
    fVar31 = fVar31 / fVar25;
  }
  return fVar31;
}

// GetScalingFactor<Chaos::Softs::FSolverParticlesRange> @ 143c2fe60

float __thiscall
Chaos::Softs::FPBDBendingConstraintsBase::GetScalingFactor<Chaos::Softs::FSolverParticlesRange>
          (FPBDBendingConstraintsBase *this,FSolverParticlesRange *param_1,int param_2,
          TStaticArray<Chaos::TVector<float,3>,4,4294967295> *param_3,float param_4,float param_5)

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
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  code *pcVar16;
  bool bVar17;
  uint uVar18;
  TVector<float,3> *pTVar19;
  TVector<float,3> *pTVar20;
  TVector<float,3> *pTVar21;
  TVector<float,3> *pTVar22;
  uint uVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  lVar24 = (longlong)param_2;
  uVar23 = (uint)~param_2 >> 0x1f;
  uVar18 = 0;
  if (param_2 < (this->Constraints).ArrayNum) {
    uVar18 = uVar23;
  }
  if ((uVar18 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar16 = (code *)swi(3);
    fVar25 = (float)(*pcVar16)();
    return fVar25;
  }
  pFVar15 = (this->Constraints).AllocatorInstance.Data;
  iVar11 = *(int *)(pFVar15 + lVar24 * 0x10 + 4);
  iVar12 = *(int *)(pFVar15 + lVar24 * 0x10);
  iVar13 = *(int *)(pFVar15 + lVar24 * 0x10 + 8);
  iVar14 = *(int *)(pFVar15 + lVar24 * 0x10 + 0xc);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar17)) {
    pcVar16 = (code *)swi(3);
    fVar25 = (float)(*pcVar16)();
    return fVar25;
  }
  pTVar19 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar12);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar17)) {
    pcVar16 = (code *)swi(3);
    fVar25 = (float)(*pcVar16)();
    return fVar25;
  }
  pTVar20 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                iVar11 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar17)) {
    pcVar16 = (code *)swi(3);
    fVar25 = (float)(*pcVar16)();
    return fVar25;
  }
  pTVar21 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                iVar13 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar17)) {
    pcVar16 = (code *)swi(3);
    fVar25 = (float)(*pcVar16)();
    return fVar25;
  }
  pTVar22 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                iVar14 + *(int *)&param_1->field_0x10);
  fVar25 = CalcAngle(pTVar19,pTVar20,pTVar21,pTVar22);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar17)) {
    pcVar16 = (code *)swi(3);
    fVar25 = (float)(*pcVar16)();
    return fVar25;
  }
  fVar26 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      *(int *)&param_1->field_0x10 + iVar12);
  fVar30 = *(float *)&param_3->Elements[0].field_0x8;
  fVar1 = *(float *)&param_3->Elements[0].field_0x4;
  fVar2 = *(float *)param_3->Elements;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar17)) {
    pcVar16 = (code *)swi(3);
    fVar25 = (float)(*pcVar16)();
    return fVar25;
  }
  fVar27 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      iVar11 + *(int *)&param_1->field_0x10);
  fVar3 = *(float *)&param_3->Elements[1].field_0x8;
  fVar4 = *(float *)(param_3->Elements + 1);
  fVar5 = *(float *)&param_3->Elements[1].field_0x4;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar17)) {
    pcVar16 = (code *)swi(3);
    fVar25 = (float)(*pcVar16)();
    return fVar25;
  }
  fVar28 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      iVar13 + *(int *)&param_1->field_0x10);
  fVar6 = *(float *)&param_3->Elements[2].field_0x8;
  fVar7 = *(float *)(param_3->Elements + 2);
  fVar8 = *(float *)&param_3->Elements[2].field_0x4;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar17)) {
    pcVar16 = (code *)swi(3);
    fVar25 = (float)(*pcVar16)();
    return fVar25;
  }
  fVar29 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      iVar14 + *(int *)&param_1->field_0x10);
  fVar9 = *(float *)&param_3->Elements[3].field_0x4;
  fVar10 = *(float *)&param_3->Elements[3].field_0x8;
  uVar18 = 0;
  if (param_2 < (this->IsBuckled).ArrayNum) {
    uVar18 = uVar23;
  }
  fVar30 = (fVar9 * fVar9 + *(float *)(param_3->Elements + 3) * *(float *)(param_3->Elements + 3) +
           fVar10 * fVar10) * fVar29 + (fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) * fVar28 +
           (fVar1 * fVar1 + fVar2 * fVar2 + fVar30 * fVar30) * fVar26 +
           (fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) * fVar27;
  if ((uVar18 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar16 = (code *)swi(3);
    fVar25 = (float)(*pcVar16)();
    return fVar25;
  }
  if ((this->IsBuckled).AllocatorInstance.Data[lVar24] != (FScriptContainerElement)0x0) {
    param_4 = param_5;
  }
  uVar18 = 0;
  if (param_2 < (this->RestAngles).ArrayNum) {
    uVar18 = uVar23;
  }
  if ((uVar18 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar16 = (code *)swi(3);
    fVar25 = (float)(*pcVar16)();
    return fVar25;
  }
  fVar25 = (fVar25 - *(float *)((this->RestAngles).AllocatorInstance.Data + lVar24 * 4)) * param_4;
  if (__real_3f490fdb <= fVar25) {
    fVar25 = __real_3f490fdb;
  }
  if (fVar25 <= __real_bf490fdb) {
    fVar25 = __real_bf490fdb;
  }
  if (fVar30 <= __real_322bcc77) {
    fVar25 = 0.0;
  }
  else {
    fVar25 = fVar25 / fVar30;
  }
  return fVar25;
}

// Init<Chaos::Softs::FSolverParticles> @ 143c326f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDBendingConstraintsBase::Init<Chaos::Softs::FSolverParticles>
          (FPBDBendingConstraintsBase *this,FSolverParticles *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  uint uVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  longlong local_res20;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FPBDBendingConstraintsBase::Init<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId137,"FPBDBendingConstraintsBase_Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDBendingConstraintsBase.cpp"
               ,0x89);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FPBDBendingConstraintsBase::Init<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId137);
  }
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->IsBuckled,(this->Constraints).ArrayNum,Default);
  fVar11 = __real_40490fdb;
  uVar10 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar20 = __real_38d1b717;
  if (bChaos_Bending_ISPC_Enabled == false) {
    uVar17 = 0;
    if (0 < (this->Constraints).ArrayNum) {
      lVar18 = 0;
      local_res20 = 0;
      do {
        uVar16 = ~uVar17 >> 0x1f;
        uVar13 = 0;
        if ((int)uVar17 < (this->Constraints).ArrayNum) {
          uVar13 = uVar16;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar4 = (this->Constraints).AllocatorInstance.Data;
        uVar13 = *(uint *)(pFVar4 + local_res20);
        uVar15 = *(uint *)(pFVar4 + local_res20 + 0xc);
        uVar2 = *(uint *)(pFVar4 + local_res20 + 4);
        uVar3 = *(uint *)(pFVar4 + local_res20 + 8);
        uVar14 = 0;
        if ((int)uVar13 < (int)param_1->_padding_) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar6 = param_1->_padding_;
        uVar14 = 0;
        if ((int)uVar2 < (int)param_1->_padding_) {
          uVar14 = ~uVar2 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar7 = param_1->_padding_;
        uVar14 = 0;
        if ((int)uVar3 < (int)param_1->_padding_) {
          uVar14 = ~uVar3 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar8 = param_1->_padding_;
        uVar14 = 0;
        if ((int)uVar15 < (int)param_1->_padding_) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        fVar21 = CalcAngle((TVector<float,3> *)(lVar6 + (longlong)(int)uVar13 * 0xc),
                           (TVector<float,3> *)(lVar7 + (longlong)(int)uVar2 * 0xc),
                           (TVector<float,3> *)(lVar8 + (longlong)(int)uVar3 * 0xc),
                           (TVector<float,3> *)(param_1->_padding_ + (longlong)(int)uVar15 * 0xc));
        uVar13 = 0;
        if ((int)uVar17 < (this->RestAngles).ArrayNum) {
          uVar13 = uVar16;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar13 = *(uint *)((this->RestAngles).AllocatorInstance.Data + lVar18 * 4);
        if (((this->BucklingRatioWeighted).Table.ArrayNum < 2) ||
           ((float)((uint)(*(float *)&(this->BucklingRatioWeighted).WeightedValue -
                          *(float *)&(this->BucklingRatioWeighted).WeightedValue.field_0x4) & uVar10
                   ) <= fVar20)) {
          fVar22 = FPBDWeightMap::GetLow(&this->BucklingRatioWeighted);
        }
        else {
          fVar22 = FPBDWeightMap::operator[](&this->BucklingRatioWeighted,uVar17);
        }
        uVar15 = 0;
        if ((int)uVar17 < (this->IsBuckled).ArrayNum) {
          uVar15 = uVar16;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar17 = uVar17 + 1;
        local_res20 = local_res20 + 0x10;
        (this->IsBuckled).AllocatorInstance.Data[lVar18] =
             (FScriptContainerElement)
             (fVar11 - (float)((uint)fVar21 & uVar10) < (fVar11 - (float)(uVar13 & uVar10)) * fVar22
             );
        lVar18 = lVar18 + 1;
      } while ((int)uVar17 < (this->Constraints).ArrayNum);
    }
  }
  else if (((this->BucklingRatioWeighted).Table.ArrayNum < 2) ||
          ((float)((uint)(*(float *)&(this->BucklingRatioWeighted).WeightedValue -
                         *(float *)&(this->BucklingRatioWeighted).WeightedValue.field_0x4) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    iVar1 = (this->Constraints).ArrayNum;
    fVar20 = FPBDWeightMap::GetLow(&this->BucklingRatioWeighted);
    InitBendingConstraintsIsBuckled
              (param_1->_padding_,(this->Constraints).AllocatorInstance.Data,
               (this->RestAngles).AllocatorInstance.Data,(this->IsBuckled).AllocatorInstance.Data,
               fVar20,iVar1);
  }
  else {
    iVar1 = (this->Constraints).ArrayNum;
    pFVar4 = (this->BucklingRatioWeighted).Table.AllocatorInstance.Data;
    if (((this->BucklingRatioWeighted).Table.ArrayNum < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar5 = (this->BucklingRatioWeighted).Indices.AllocatorInstance.Data;
    if (((this->BucklingRatioWeighted).Indices.ArrayNum < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    InitBendingConstraintsIsBuckledWithMaps
              (param_1->_padding_,(this->Constraints).AllocatorInstance.Data,
               (this->RestAngles).AllocatorInstance.Data,(this->IsBuckled).AllocatorInstance.Data,
               pFVar5,pFVar4,iVar1);
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Init<Chaos::Softs::FSolverParticlesRange> @ 143c337c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDBendingConstraintsBase::Init<Chaos::Softs::FSolverParticlesRange>
          (FPBDBendingConstraintsBase *this,FSolverParticlesRange *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  uint uVar11;
  float fVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  TVector<float,3> *pTVar16;
  TVector<float,3> *pTVar17;
  TVector<float,3> *pTVar18;
  TVector<float,3> *pTVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar28;
  undefined8 in_stack_ffffffffffffff30;
  undefined4 uVar29;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_a8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_98 [6];
  
  uVar28 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  uVar29 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FPBDBendingConstraintsBase::Init<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId137,"FPBDBendingConstraintsBase_Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDBendingConstraintsBase.cpp"
               ,0x89);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FPBDBendingConstraintsBase::Init<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId137);
  }
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->IsBuckled,(this->Constraints).ArrayNum,Default);
  fVar12 = __real_40490fdb;
  uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar25 = __real_38d1b717;
  if (bChaos_Bending_ISPC_Enabled == false) {
    uVar20 = 0;
    if (0 < (this->Constraints).ArrayNum) {
      lVar22 = 0;
      lVar21 = 0;
      do {
        uVar23 = ~uVar20 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar20 < (this->Constraints).ArrayNum) {
          uVar14 = uVar23;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar5 = (this->Constraints).AllocatorInstance.Data;
        iVar1 = *(int *)(pFVar5 + lVar21 + 4);
        iVar2 = *(int *)(pFVar5 + lVar21);
        iVar3 = *(int *)(pFVar5 + lVar21 + 8);
        iVar4 = *(int *)(pFVar5 + lVar21 + 0xc);
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x56,L""), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar16 = TParticles<float,3>::GetX
                            (*(TParticles<float,3> **)&param_1->field_0x8,
                             *(int *)&param_1->field_0x10 + iVar2);
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x56,L""), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar17 = TParticles<float,3>::GetX
                            (*(TParticles<float,3> **)&param_1->field_0x8,
                             iVar1 + *(int *)&param_1->field_0x10);
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x56,L""), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar18 = TParticles<float,3>::GetX
                            (*(TParticles<float,3> **)&param_1->field_0x8,
                             iVar3 + *(int *)&param_1->field_0x10);
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x56,L""), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar19 = TParticles<float,3>::GetX
                            (*(TParticles<float,3> **)&param_1->field_0x8,
                             iVar4 + *(int *)&param_1->field_0x10);
        fVar26 = CalcAngle(pTVar16,pTVar17,pTVar18,pTVar19);
        uVar14 = 0;
        if ((int)uVar20 < (this->RestAngles).ArrayNum) {
          uVar14 = uVar23;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar14 = *(uint *)((this->RestAngles).AllocatorInstance.Data + lVar22 * 4);
        if (((this->BucklingRatioWeighted).Table.ArrayNum < 2) ||
           ((float)((uint)(*(float *)&(this->BucklingRatioWeighted).WeightedValue -
                          *(float *)&(this->BucklingRatioWeighted).WeightedValue.field_0x4) & uVar11
                   ) <= fVar25)) {
          fVar27 = FPBDWeightMap::GetLow(&this->BucklingRatioWeighted);
        }
        else {
          fVar27 = FPBDWeightMap::operator[](&this->BucklingRatioWeighted,uVar20);
        }
        uVar15 = 0;
        if ((int)uVar20 < (this->IsBuckled).ArrayNum) {
          uVar15 = uVar23;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar20 = uVar20 + 1;
        lVar21 = lVar21 + 0x10;
        (this->IsBuckled).AllocatorInstance.Data[lVar22] =
             (FScriptContainerElement)
             (fVar12 - (float)((uint)fVar26 & uVar11) < (fVar12 - (float)(uVar14 & uVar11)) * fVar27
             );
        lVar22 = lVar22 + 1;
      } while ((int)uVar20 < (this->Constraints).ArrayNum);
    }
  }
  else if (((this->BucklingRatioWeighted).Table.ArrayNum < 2) ||
          ((float)((uint)(*(float *)&(this->BucklingRatioWeighted).WeightedValue -
                         *(float *)&(this->BucklingRatioWeighted).WeightedValue.field_0x4) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    iVar1 = (this->Constraints).ArrayNum;
    fVar25 = FPBDWeightMap::GetLow(&this->BucklingRatioWeighted);
    pFVar5 = (this->IsBuckled).AllocatorInstance.Data;
    pFVar6 = (this->RestAngles).AllocatorInstance.Data;
    pFVar7 = (this->Constraints).AllocatorInstance.Data;
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    TParticlesRange<Chaos::Softs::FSolverParticles,void>::
    GetConstArrayView<Chaos::TVector<float,3>_>
              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,local_98,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)&param_1->field_0x8 + 0x28));
    InitBendingConstraintsIsBuckled
              (local_98[0].DataPtr,pFVar7,pFVar6,pFVar5,CONCAT44(uVar28,fVar25),
               CONCAT44(uVar29,iVar1));
  }
  else {
    iVar1 = (this->Constraints).ArrayNum;
    pFVar5 = (this->BucklingRatioWeighted).Table.AllocatorInstance.Data;
    if (((this->BucklingRatioWeighted).Table.ArrayNum < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar6 = (this->BucklingRatioWeighted).Indices.AllocatorInstance.Data;
    if (((this->BucklingRatioWeighted).Indices.ArrayNum < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar7 = (this->IsBuckled).AllocatorInstance.Data;
    pFVar8 = (this->RestAngles).AllocatorInstance.Data;
    pFVar9 = (this->Constraints).AllocatorInstance.Data;
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    TParticlesRange<Chaos::Softs::FSolverParticles,void>::
    GetConstArrayView<Chaos::TVector<float,3>_>
              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_a8,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)&param_1->field_0x8 + 0x28));
    InitBendingConstraintsIsBuckledWithMaps
              (local_a8.DataPtr,pFVar9,pFVar8,pFVar7,pFVar6,pFVar5,iVar1);
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CalcAngle @ 143c5c340

float __cdecl
Chaos::Softs::FPBDBendingConstraintsBase::CalcAngle
          (TVector<float,3> *param_1,TVector<float,3> *param_2,TVector<float,3> *param_3,
          TVector<float,3> *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  
  fVar6 = *(float *)&param_1->field_0x8 - *(float *)&param_3->field_0x8;
  fVar1 = *(float *)&param_1->field_0x4 - *(float *)&param_3->field_0x4;
  fVar10 = *(float *)&param_2->field_0x8;
  fVar2 = fVar10 - *(float *)&param_3->field_0x8;
  fVar13 = *(float *)param_1 - *(float *)param_3;
  fVar17 = *(float *)&param_2->field_0x4;
  fVar18 = *(float *)param_2;
  fVar3 = fVar17 - *(float *)&param_3->field_0x4;
  fVar15 = fVar1 * fVar2 - fVar6 * fVar3;
  fVar3 = fVar13 * fVar3 - fVar1 * (fVar18 - *(float *)param_3);
  fVar2 = fVar6 * (fVar18 - *(float *)param_3) - fVar13 * fVar2;
  fVar1 = fVar2 * fVar2 + fVar15 * fVar15 + fVar3 * fVar3;
  uVar7 = fVar2;
  uVar14 = fVar3;
  uVar16 = fVar15;
  if ((fVar1 != __real_3f800000) &&
     (uVar7 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
     uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
     uVar16 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X, __real_322bcc77 <= fVar1)) {
    fVar1 = __real_3f800000 / SQRT(fVar1);
    uVar7 = fVar2 * fVar1;
    uVar14 = fVar3 * fVar1;
    uVar16 = fVar15 * fVar1;
  }
  fVar2 = *(float *)&param_1->field_0x8 - *(float *)&param_4->field_0x8;
  fVar3 = *(float *)param_1 - *(float *)param_4;
  fVar1 = fVar17 - *(float *)&param_4->field_0x4;
  fVar6 = *(float *)&param_1->field_0x4 - *(float *)&param_4->field_0x4;
  fVar13 = fVar10 - *(float *)&param_4->field_0x8;
  fVar15 = fVar1 * fVar2 - fVar13 * fVar6;
  fVar2 = fVar13 * fVar3 - (fVar18 - *(float *)param_4) * fVar2;
  fVar3 = (fVar18 - *(float *)param_4) * fVar6 - fVar1 * fVar3;
  fVar1 = fVar2 * fVar2 + fVar15 * fVar15 + fVar3 * fVar3;
  uVar8 = fVar2;
  uVar9 = fVar3;
  uVar12 = fVar15;
  if ((fVar1 != __real_3f800000) &&
     (uVar8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
     uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
     uVar12 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X, __real_322bcc77 <= fVar1)) {
    fVar1 = __real_3f800000 / SQRT(fVar1);
    uVar12 = fVar15 * fVar1;
    uVar8 = fVar2 * fVar1;
    uVar9 = fVar3 * fVar1;
  }
  fVar17 = fVar17 - *(float *)&param_1->field_0x4;
  fVar18 = fVar18 - *(float *)param_1;
  fVar10 = fVar10 - *(float *)&param_1->field_0x8;
  fVar1 = fVar18 * fVar18 + fVar17 * fVar17 + fVar10 * fVar10;
  uVar4 = fVar17;
  uVar5 = fVar18;
  uVar11 = fVar10;
  if ((fVar1 != __real_3f800000) &&
     (uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
     uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
     uVar11 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, __real_322bcc77 <= fVar1)) {
    fVar1 = __real_3f800000 / SQRT(fVar1);
    uVar4 = fVar17 * fVar1;
    uVar5 = fVar1 * fVar18;
    uVar11 = fVar10 * fVar1;
  }
  fVar10 = (float)uVar16 * (float)uVar12 + (float)uVar7 * (float)uVar8 +
           (float)uVar14 * (float)uVar9;
  if (__real_3f800000 <= fVar10) {
    fVar10 = __real_3f800000;
  }
  if (fVar10 <= __real_bf800000) {
    fVar10 = __real_bf800000;
  }
  fVar17 = ((float)uVar14 * (float)uVar8 - (float)uVar7 * (float)uVar9) * (float)uVar5 +
           ((float)uVar16 * (float)uVar9 - (float)uVar14 * (float)uVar12) * (float)uVar4 +
           ((float)uVar7 * (float)uVar12 - (float)uVar16 * (float)uVar8) * (float)uVar11;
  if (__real_3f800000 <= fVar17) {
    fVar17 = __real_3f800000;
  }
  if (fVar17 <= __real_bf800000) {
    fVar17 = __real_bf800000;
  }
  fVar10 = FGenericPlatformMath::Atan2(fVar17,fVar10);
  return fVar10;
}

// CalcGradients @ 143c5c710

TStaticArray<Chaos::TVector<float,3>,4,4294967295> * __cdecl
Chaos::Softs::FPBDBendingConstraintsBase::CalcGradients
          (TStaticArray<Chaos::TVector<float,3>,4,4294967295> *__return_storage_ptr__,
          TVector<float,3> *param_1,TVector<float,3> *param_2,TVector<float,3> *param_3,
          TVector<float,3> *param_4,float *param_5)

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
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_c8;
  
  fVar9 = *(float *)&param_2->field_0x8;
  fVar17 = *(float *)&param_2->field_0x4;
  fVar20 = *(float *)&param_1->field_0x4;
  fVar11 = fVar17 - fVar20;
  fVar23 = *(float *)&param_1->field_0x8;
  uVar19 = fVar9 - fVar23;
  fVar25 = *(float *)param_1;
  local_c8 = *(float *)param_2 - fVar25;
  fVar5 = local_c8 * local_c8 + fVar11 * fVar11 + (float)uVar19 * (float)uVar19;
  if (fVar5 != __real_3f800000) {
    if (__real_322bcc77 <= fVar5) {
      fVar5 = __real_3f800000 / SQRT(fVar5);
      local_c8 = local_c8 * fVar5;
      fVar11 = fVar11 * fVar5;
      uVar19 = (float)uVar19 * fVar5;
    }
    else {
      fVar11 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      local_c8 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  fVar6 = fVar20 - *(float *)&param_3->field_0x4;
  fVar15 = *(float *)param_2 - *(float *)param_3;
  fVar3 = fVar25 - *(float *)param_3;
  fVar13 = fVar23 - *(float *)&param_3->field_0x8;
  fVar5 = fVar9 - *(float *)&param_3->field_0x8;
  fVar1 = fVar17 - *(float *)&param_3->field_0x4;
  fVar12 = fVar6 * fVar5 - fVar13 * fVar1;
  fVar14 = fVar13 * fVar15 - fVar3 * fVar5;
  fVar16 = fVar3 * fVar1 - fVar6 * fVar15;
  fVar4 = SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar16 * fVar16);
  if (fVar4 <= __real_322bcc77) {
    fVar12 = 0.0;
    fVar14 = 0.0;
    fVar16 = 0.0;
  }
  else {
    fVar2 = __real_3f800000 / fVar4;
    fVar12 = fVar12 * fVar2;
    fVar14 = fVar14 * fVar2;
    fVar16 = fVar16 * fVar2;
  }
  fVar7 = *(float *)param_2 - *(float *)param_4;
  fVar23 = fVar23 - *(float *)&param_4->field_0x8;
  fVar20 = fVar20 - *(float *)&param_4->field_0x4;
  fVar9 = fVar9 - *(float *)&param_4->field_0x8;
  fVar17 = fVar17 - *(float *)&param_4->field_0x4;
  fVar25 = fVar25 - *(float *)param_4;
  fVar10 = fVar17 * fVar23 - fVar9 * fVar20;
  fVar21 = fVar9 * fVar25 - fVar7 * fVar23;
  fVar24 = fVar7 * fVar20 - fVar17 * fVar25;
  fVar2 = SQRT(fVar21 * fVar21 + fVar10 * fVar10 + fVar24 * fVar24);
  if (fVar2 <= __real_322bcc77) {
    fVar10 = 0.0;
    fVar21 = 0.0;
    fVar18 = 0.0;
  }
  else {
    fVar18 = __real_3f800000 / fVar2;
    fVar10 = fVar18 * fVar10;
    fVar21 = fVar18 * fVar21;
    fVar18 = fVar18 * fVar24;
  }
  fVar24 = fVar21 * fVar14 + fVar10 * fVar12 + fVar18 * fVar16;
  if (__real_3f800000 <= fVar24) {
    fVar24 = __real_3f800000;
  }
  if (fVar24 <= __real_bf800000) {
    fVar24 = __real_bf800000;
  }
  fVar22 = (fVar21 * fVar16 - fVar18 * fVar14) * local_c8 +
           (fVar18 * fVar12 - fVar10 * fVar16) * fVar11 +
           (fVar10 * fVar14 - fVar21 * fVar12) * (float)uVar19;
  if (__real_3f800000 <= fVar22) {
    fVar22 = __real_3f800000;
  }
  if (fVar22 <= __real_bf800000) {
    fVar22 = __real_bf800000;
  }
  if (fVar4 <= __real_322bcc77) {
    fVar26 = 0.0;
    fVar8 = 0.0;
    fVar4 = 0.0;
  }
  else {
    fVar4 = __real_3f800000 / fVar4;
    fVar26 = ((fVar11 * fVar18 - (float)uVar19 * fVar21) * fVar24 - fVar22 * fVar10) * fVar4;
    fVar8 = (((float)uVar19 * fVar10 - local_c8 * fVar18) * fVar24 - fVar22 * fVar21) * fVar4;
    fVar4 = ((local_c8 * fVar21 - fVar11 * fVar10) * fVar24 - fVar22 * fVar18) * fVar4;
  }
  if (fVar2 <= __real_322bcc77) {
    fVar10 = 0.0;
    fVar21 = 0.0;
    fVar2 = 0.0;
  }
  else {
    fVar2 = __real_3f800000 / fVar2;
    fVar10 = (((float)uVar19 * fVar14 - fVar11 * fVar16) * fVar24 - fVar22 * fVar12) * fVar2;
    fVar21 = ((local_c8 * fVar16 - (float)uVar19 * fVar12) * fVar24 - fVar22 * fVar14) * fVar2;
    fVar2 = ((fVar11 * fVar12 - local_c8 * fVar14) * fVar24 - fVar22 * fVar16) * fVar2;
  }
  fVar14 = fVar4 * fVar1 - fVar8 * fVar5;
  fVar12 = fVar26 * fVar5 - fVar15 * fVar4;
  fVar11 = fVar15 * fVar8 - fVar26 * fVar1;
  fVar15 = fVar26 * fVar6 - fVar8 * fVar3;
  fVar3 = fVar4 * fVar3 - fVar13 * fVar26;
  fVar1 = fVar13 * fVar8 - fVar4 * fVar6;
  fVar5 = fVar20 * fVar2 - fVar23 * fVar21;
  fVar20 = fVar25 * fVar21 - fVar20 * fVar10;
  fVar23 = fVar23 * fVar10 - fVar25 * fVar2;
  fVar25 = fVar9 * fVar21 - fVar17 * fVar2;
  fVar9 = fVar7 * fVar2 - fVar9 * fVar10;
  fVar17 = fVar17 * fVar10 - fVar7 * fVar21;
  *(float *)__return_storage_ptr__->Elements = fVar25 + fVar14;
  *(float *)&__return_storage_ptr__->Elements[0].field_0x4 = fVar9 + fVar12;
  *(float *)&__return_storage_ptr__->Elements[0].field_0x8 = fVar17 + fVar11;
  *(float *)(__return_storage_ptr__->Elements + 1) = fVar5 + fVar1;
  *(float *)&__return_storage_ptr__->Elements[1].field_0x4 = fVar23 + fVar3;
  *(float *)&__return_storage_ptr__->Elements[1].field_0x8 = fVar20 + fVar15;
  fVar12 = (float)((uint)fVar12 ^ __xmm_80000000800000008000000080000000);
  fVar11 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
  fVar25 = (float)((uint)fVar25 ^ __xmm_80000000800000008000000080000000);
  fVar9 = (float)((uint)fVar9 ^ __xmm_80000000800000008000000080000000);
  fVar17 = (float)((uint)fVar17 ^ __xmm_80000000800000008000000080000000);
  *(float *)(__return_storage_ptr__->Elements + 2) =
       (float)((uint)fVar14 ^ __xmm_80000000800000008000000080000000) - fVar1;
  *(float *)&__return_storage_ptr__->Elements[2].field_0x4 = fVar12 - fVar3;
  *(float *)&__return_storage_ptr__->Elements[2].field_0x8 = fVar11 - fVar15;
  *(float *)(__return_storage_ptr__->Elements + 3) = fVar25 - fVar5;
  *(float *)&__return_storage_ptr__->Elements[3].field_0x4 = fVar9 - fVar23;
  *(float *)&__return_storage_ptr__->Elements[3].field_0x8 = fVar17 - fVar20;
  if (param_5 != (float *)0x0) {
    fVar9 = FGenericPlatformMath::Atan2(fVar22,fVar24);
    *param_5 = fVar9;
  }
  return __return_storage_ptr__;
}

// CalculateRestAngles @ 143c5e240

void __thiscall
Chaos::Softs::FPBDBendingConstraintsBase::CalculateRestAngles
          (FPBDBendingConstraintsBase *this,TArrayView<Chaos::TVector<float,3>_const_,int> *param_1,
          int param_2,int param_3,TArrayView<float_const_,int> *param_4,TVector<float,2> *param_5,
          ERestAngleConstructionType param_6)

{
  if (param_6 != Use3DRestAngles) {
    if (param_6 == FlatnessRatio) {
      Softs::Private::CalculateFlatnessRestAngles
                (param_1,param_2,param_3,param_4,param_5,&this->Constraints,&this->RestAngles);
      return;
    }
    if (param_6 == ExplicitRestAngles) {
      Softs::Private::CalculateExplicitRestAngles
                (param_2,param_3,param_4,param_5,&this->Constraints,&this->RestAngles);
      return;
    }
  }
  Softs::Private::Calculate3DRestAngles(param_1,&this->Constraints,&this->RestAngles);
  return;
}

// GetGradients<Chaos::Softs::FSolverParticles> @ 143f056a0

TStaticArray<Chaos::TVector<float,3>,4,4294967295> * __thiscall
Chaos::Softs::FPBDBendingConstraintsBase::GetGradients<Chaos::Softs::FSolverParticles>
          (FPBDBendingConstraintsBase *this,
          TStaticArray<Chaos::TVector<float,3>,4,4294967295> *__return_storage_ptr__,
          FSolverParticles *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TStaticArray<Chaos::TVector<float,3>,4,4294967295> *pTVar4;
  TVector<float,3> *pTVar5;
  TVector<float,3> *pTVar6;
  TVector<float,3> *pTVar7;
  TVector<float,3> *pTVar8;
  FScriptContainerElement *pFVar9;
  
  uVar3 = 0;
  if (param_2 < (this->Constraints).ArrayNum) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)(*pcVar1)();
      return pTVar4;
    }
  }
  pFVar9 = (this->Constraints).AllocatorInstance.Data + (longlong)param_2 * 0x10;
  pTVar5 = FSolverParticles::P(param_1,*(int *)pFVar9);
  pTVar6 = FSolverParticles::P(param_1,*(int *)(pFVar9 + 4));
  pTVar7 = FSolverParticles::P(param_1,*(int *)(pFVar9 + 8));
  pTVar8 = FSolverParticles::P(param_1,*(int *)(pFVar9 + 0xc));
  CalcGradients(__return_storage_ptr__,pTVar5,pTVar6,pTVar7,pTVar8,(float *)0x0);
  return __return_storage_ptr__;
}

// TrimKinematicConstraints<Chaos::Softs::FSolverParticles> @ 143f0f830

TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::Softs::FPBDBendingConstraintsBase::TrimKinematicConstraints<Chaos::Softs::FSolverParticles>
          (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_1,
          FSolverParticles *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  float fVar13;
  undefined1 local_res8 [8];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = param_1->ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar3 = param_1->ArrayNum;
  pFVar11 = (param_1->AllocatorInstance).Data;
  pFVar12 = pFVar11 + (longlong)iVar3 * 0x10;
  do {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TVector<int,4>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar12) {
      iVar3 = __return_storage_ptr__->ArrayNum;
      if (*piVar1 != iVar3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar3,&__return_storage_ptr__->AllocatorInstance,iVar3,piVar1);
      }
      return __return_storage_ptr__;
    }
    uVar2 = *(uint *)pFVar11;
    uVar8 = 0;
    if ((int)uVar2 < (int)param_2->_padding_) {
      uVar8 = ~uVar2 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
    }
    if (*(float *)(param_2->_padding_ + (longlong)(int)uVar2 * 4) == 0.0) {
      uVar2 = *(uint *)(pFVar11 + 4);
      uVar8 = 0;
      if ((int)uVar2 < (int)param_2->_padding_) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar10;
        }
      }
      if (*(float *)(param_2->_padding_ + (longlong)(int)uVar2 * 4) != 0.0) goto LAB_143f0f9f9;
      uVar2 = *(uint *)(pFVar11 + 8);
      uVar8 = 0;
      if ((int)uVar2 < (int)param_2->_padding_) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar10;
        }
      }
      if (*(float *)(param_2->_padding_ + (longlong)(int)uVar2 * 4) != 0.0) goto LAB_143f0f9f9;
      fVar13 = TDynamicParticles<float,3>::InvM
                         ((TDynamicParticles<float,3> *)param_2,*(uint *)(pFVar11 + 0xc));
      if (fVar13 != 0.0) goto LAB_143f0f9f9;
    }
    else {
LAB_143f0f9f9:
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar4 <= pFVar11) && (pFVar11 < pFVar4 + (longlong)*piVar1 * 0x10)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar10;
        }
      }
      iVar9 = __return_storage_ptr__->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
      uVar6 = *(undefined8 *)(pFVar11 + 8);
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      *(undefined8 *)pFVar4 = *(undefined8 *)pFVar11;
      *(undefined8 *)(pFVar4 + 8) = uVar6;
    }
    pFVar11 = pFVar11 + 0x10;
  } while( true );
}

// TrimKinematicConstraints<Chaos::Softs::FSolverParticlesRange> @ 143f0fb00

TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::Softs::FPBDBendingConstraintsBase::
TrimKinematicConstraints<Chaos::Softs::FSolverParticlesRange>
          (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_1,
          FSolverParticlesRange *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  float fVar12;
  undefined1 local_res8 [8];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = param_1->ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar3 = param_1->ArrayNum;
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar11 = pFVar10 + (longlong)iVar3 * 0x10;
  do {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TVector<int,4>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar11) {
      iVar3 = __return_storage_ptr__->ArrayNum;
      if (*piVar1 != iVar3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar3,&__return_storage_ptr__->AllocatorInstance,iVar3,piVar1);
      }
      return __return_storage_ptr__;
    }
    iVar8 = *(int *)pFVar10;
    if (*(longlong *)&param_2->field_0x8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
    }
    fVar12 = TDynamicParticles<float,3>::InvM
                       (*(TDynamicParticles<float,3> **)&param_2->field_0x8,
                        *(int *)&param_2->field_0x10 + iVar8);
    if (fVar12 == 0.0) {
      iVar8 = *(int *)(pFVar10 + 4);
      if (*(longlong *)&param_2->field_0x8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x56,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
      }
      fVar12 = TDynamicParticles<float,3>::InvM
                         (*(TDynamicParticles<float,3> **)&param_2->field_0x8,
                          *(int *)&param_2->field_0x10 + iVar8);
      if (fVar12 != 0.0) goto LAB_143f0fcc3;
      iVar8 = *(int *)(pFVar10 + 8);
      if (*(longlong *)&param_2->field_0x8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x56,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
      }
      fVar12 = TDynamicParticles<float,3>::InvM
                         (*(TDynamicParticles<float,3> **)&param_2->field_0x8,
                          *(int *)&param_2->field_0x10 + iVar8);
      if (fVar12 != 0.0) goto LAB_143f0fcc3;
      iVar8 = *(int *)(pFVar10 + 0xc);
      if (*(longlong *)&param_2->field_0x8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x56,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
      }
      fVar12 = TDynamicParticles<float,3>::InvM
                         (*(TDynamicParticles<float,3> **)&param_2->field_0x8,
                          *(int *)&param_2->field_0x10 + iVar8);
      if (fVar12 != 0.0) goto LAB_143f0fcc3;
    }
    else {
LAB_143f0fcc3:
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar4 <= pFVar10) && (pFVar10 < pFVar4 + (longlong)*piVar1 * 0x10)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      uVar6 = *(undefined8 *)(pFVar10 + 8);
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar4 = *(undefined8 *)pFVar10;
      *(undefined8 *)(pFVar4 + 8) = uVar6;
    }
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// FPBDBendingConstraintsBase @ 143f10040

FPBDBendingConstraintsBase * __thiscall
Chaos::Softs::FPBDBendingConstraintsBase::FPBDBendingConstraintsBase
          (FPBDBendingConstraintsBase *this,FSolverParticles *param_1,int param_2,int param_3,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_4,
          TArrayView<float_const_,int> *param_5,TArrayView<float_const_,int> *param_6,
          TArrayView<float_const_,int> *param_7,TArrayView<float_const_,int> *param_8,
          TVector<float,2> *param_9,TVector<float,2> *param_10,TVector<float,2> *param_11,
          TVector<float,2> *param_12,ERestAngleConstructionType param_13,bool param_14,
          float param_15)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *pTVar4;
  FPBDBendingConstraintsBase *pFVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  TVector<float,2> local_res8;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> local_b8;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_a8;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_98;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_88;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_78;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> local_68 [3];
  
  this->_padding_ = (longlong)&___7FPBDBendingConstraintsBase_Softs_Chaos__6B_;
  bVar6 = !param_14;
  if (bVar6) {
    local_b8.AllocatorInstance.Data = (param_4->AllocatorInstance).Data;
    (param_4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = param_4->ArrayNum;
    local_b8.ArrayMax = param_4->ArrayMax;
    param_4->ArrayNum = 0;
    param_4->ArrayMax = 0;
    pTVar4 = &local_b8;
  }
  else {
    pTVar4 = TrimKinematicConstraints<Chaos::Softs::FSolverParticles>(local_68,param_4,param_1);
  }
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).AllocatorInstance.Data = (pTVar4->AllocatorInstance).Data;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Constraints).ArrayNum = pTVar4->ArrayNum;
  (this->Constraints).ArrayMax = pTVar4->ArrayMax;
  pTVar4->ArrayNum = 0;
  pTVar4->ArrayMax = 0;
  if (bVar6) {
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  if ((!bVar6) && (local_68[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68[0].AllocatorInstance.Data);
  }
  ExtractConstraintSharedEdges(&this->ConstraintSharedEdges,&this->Constraints);
  this->ParticleOffset = param_2;
  this->ParticleCount = param_3;
  local_a8.DataPtr = (TVector<int,2> *)(this->ConstraintSharedEdges).AllocatorInstance.Data;
  local_a8.ArrayNum = (this->ConstraintSharedEdges).ArrayNum;
  if (local_a8.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FPBDBendingConstraintsBase *)(*pcVar3)();
      return pFVar5;
    }
  }
  fVar9 = __real_447a0000;
  FPBDStiffness::FPBDStiffness<2>
            (&this->Stiffness,param_9,param_5,&local_a8,param_2,param_3,0x10,__real_447a0000,
             param_15);
  local_98.DataPtr = (TVector<int,2> *)(this->ConstraintSharedEdges).AllocatorInstance.Data;
  local_98.ArrayNum = (this->ConstraintSharedEdges).ArrayNum;
  iVar1 = this->ParticleCount;
  iVar2 = this->ParticleOffset;
  if (local_98.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FPBDBendingConstraintsBase *)(*pcVar3)();
      return pFVar5;
    }
  }
  fVar7 = *(float *)param_10;
  if (__real_3f800000 <= *(float *)param_10) {
    fVar7 = __real_3f800000;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar8 = *(float *)&param_10->field_0x4;
  if (__real_3f800000 <= *(float *)&param_10->field_0x4) {
    fVar8 = __real_3f800000;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  local_res8._4_4_ = fVar8;
  local_res8._0_4_ = fVar7;
  FPBDWeightMap::FPBDWeightMap<2>
            (&this->BucklingRatioWeighted,&local_res8,param_6,&local_98,iVar2,iVar1,0x10,(void *)0x0
            );
  local_88.DataPtr = (TVector<int,2> *)(this->ConstraintSharedEdges).AllocatorInstance.Data;
  local_88.ArrayNum = (this->ConstraintSharedEdges).ArrayNum;
  iVar1 = this->ParticleCount;
  iVar2 = this->ParticleOffset;
  if (local_88.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FPBDBendingConstraintsBase *)(*pcVar3)();
      return pFVar5;
    }
  }
  FPBDStiffness::FPBDStiffness<2>
            (&this->BucklingStiffness,param_11,param_7,&local_88,iVar2,iVar1,0x10,fVar9,param_15);
  (this->RestAngles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestAngles).ArrayNum = 0;
  (this->RestAngles).ArrayMax = 0;
  (this->IsBuckled).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IsBuckled).ArrayNum = 0;
  (this->IsBuckled).ArrayMax = 0;
  fVar9 = FPBDWeightMap::GetLow(&this->BucklingRatioWeighted);
  iVar1 = this->ParticleCount;
  iVar2 = this->ParticleOffset;
  this->BucklingRatio = fVar9;
  local_78.DataPtr = (TVector<float,3> *)param_1->_padding_;
  local_78.ArrayNum = (int)param_1->_padding_;
  if (local_78.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FPBDBendingConstraintsBase *)(*pcVar3)();
      return pFVar5;
    }
  }
  CalculateRestAngles(this,&local_78,iVar2,iVar1,param_8,param_12,param_13);
  return this;
}

// FPBDBendingConstraintsBase @ 143f103f0

FPBDBendingConstraintsBase * __thiscall
Chaos::Softs::FPBDBendingConstraintsBase::FPBDBendingConstraintsBase
          (FPBDBendingConstraintsBase *this,FSolverParticlesRange *param_1,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_2,
          TArrayView<float_const_,int> *param_3,TArrayView<float_const_,int> *param_4,
          TArrayView<float_const_,int> *param_5,TArrayView<float_const_,int> *param_6,
          TVector<float,2> *param_7,TVector<float,2> *param_8,TVector<float,2> *param_9,
          TVector<float,2> *param_10,ERestAngleConstructionType param_11,bool param_12,
          float param_13)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *pTVar4;
  FPBDBendingConstraintsBase *pFVar5;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  TVector<float,2> local_res8;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> local_a8;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_98;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_88;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_78;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> local_68;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_58 [3];
  
  local_res8 = (TVector<float,2>)((ulonglong)local_res8 & 0xffffffff00000000);
  this->_padding_ = (longlong)&___7FPBDBendingConstraintsBase_Softs_Chaos__6B_;
  bVar7 = !param_12;
  if (bVar7) {
    local_a8.AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
    pTVar4 = &local_a8;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = param_2->ArrayNum;
    local_a8.ArrayMax = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
  }
  else {
    pTVar4 = TrimKinematicConstraints<Chaos::Softs::FSolverParticlesRange>
                       (&local_68,param_2,param_1);
  }
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).AllocatorInstance.Data = (pTVar4->AllocatorInstance).Data;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Constraints).ArrayNum = pTVar4->ArrayNum;
  (this->Constraints).ArrayMax = pTVar4->ArrayMax;
  pTVar4->ArrayNum = 0;
  pTVar4->ArrayMax = 0;
  if (bVar7) {
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
  }
  if ((!bVar7) && (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  ExtractConstraintSharedEdges(&this->ConstraintSharedEdges,&this->Constraints);
  this->ParticleOffset = 0;
  iVar1 = *(int *)&param_1->field_0x14;
  this->ParticleCount = iVar1;
  local_98.DataPtr = (TVector<int,2> *)(this->ConstraintSharedEdges).AllocatorInstance.Data;
  local_98.ArrayNum = (this->ConstraintSharedEdges).ArrayNum;
  if (local_98.ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FPBDBendingConstraintsBase *)(*pcVar3)();
      return pFVar5;
    }
  }
  fVar10 = __real_447a0000;
  FPBDStiffness::FPBDStiffness<2>
            (&this->Stiffness,param_7,param_3,&local_98,0,iVar1,0x10,__real_447a0000,param_13);
  local_88.DataPtr = (TVector<int,2> *)(this->ConstraintSharedEdges).AllocatorInstance.Data;
  local_88.ArrayNum = (this->ConstraintSharedEdges).ArrayNum;
  iVar1 = this->ParticleCount;
  iVar2 = this->ParticleOffset;
  if (local_88.ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FPBDBendingConstraintsBase *)(*pcVar3)();
      return pFVar5;
    }
  }
  fVar8 = *(float *)param_8;
  if (__real_3f800000 <= *(float *)param_8) {
    fVar8 = __real_3f800000;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar9 = *(float *)&param_8->field_0x4;
  if (__real_3f800000 <= *(float *)&param_8->field_0x4) {
    fVar9 = __real_3f800000;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  local_res8._4_4_ = fVar9;
  local_res8._0_4_ = fVar8;
  FPBDWeightMap::FPBDWeightMap<2>
            (&this->BucklingRatioWeighted,&local_res8,param_4,&local_88,iVar2,iVar1,0x10,(void *)0x0
            );
  local_78.DataPtr = (TVector<int,2> *)(this->ConstraintSharedEdges).AllocatorInstance.Data;
  local_78.ArrayNum = (this->ConstraintSharedEdges).ArrayNum;
  iVar1 = this->ParticleCount;
  iVar2 = this->ParticleOffset;
  if (local_78.ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FPBDBendingConstraintsBase *)(*pcVar3)();
      return pFVar5;
    }
  }
  FPBDStiffness::FPBDStiffness<2>
            (&this->BucklingStiffness,param_9,param_5,&local_78,iVar2,iVar1,0x10,fVar10,param_13);
  (this->RestAngles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestAngles).ArrayNum = 0;
  (this->RestAngles).ArrayMax = 0;
  (this->IsBuckled).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IsBuckled).ArrayNum = 0;
  (this->IsBuckled).ArrayMax = 0;
  fVar10 = FPBDWeightMap::GetLow(&this->BucklingRatioWeighted);
  iVar1 = this->ParticleCount;
  iVar2 = this->ParticleOffset;
  this->BucklingRatio = fVar10;
  pTVar6 = FSolverParticlesRange::XArray(param_1,local_58);
  CalculateRestAngles(this,pTVar6,iVar2,iVar1,param_6,param_10,param_11);
  return this;
}

// ~FPBDBendingConstraintsBase @ 143f15e10

void __thiscall
Chaos::Softs::FPBDBendingConstraintsBase::~FPBDBendingConstraintsBase
          (FPBDBendingConstraintsBase *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FPBDBendingConstraintsBase_Softs_Chaos__6B_;
  pFVar1 = (this->IsBuckled).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RestAngles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->BucklingStiffness)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->BucklingStiffness)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->BucklingRatioWeighted).Table.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BucklingRatioWeighted).Indices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->Stiffness)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->Stiffness)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->ConstraintSharedEdges).AllocatorInstance.Data;
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

// ExtractConstraintSharedEdges @ 143f1f7c0

TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::Softs::FPBDBendingConstraintsBase::ExtractConstraintSharedEdges
          (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = param_1->ArrayNum;
  if (-1 < (int)uVar3) {
    if (0 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    }
    iVar4 = param_1->ArrayNum;
    pFVar9 = (param_1->AllocatorInstance).Data;
    pFVar8 = pFVar9 + (longlong)iVar4 * 0x10;
    while( true ) {
      if (param_1->ArrayNum != iVar4) {
        `TCheckedPointerIterator<Chaos::TVector<int,4>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar9 == pFVar8) break;
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8;
      uVar5 = *(undefined4 *)(pFVar9 + 4);
      uVar6 = *(undefined4 *)pFVar9;
      pFVar9 = pFVar9 + 0x10;
      *(undefined4 *)pFVar2 = uVar6;
      *(undefined4 *)(pFVar2 + 4) = uVar5;
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

