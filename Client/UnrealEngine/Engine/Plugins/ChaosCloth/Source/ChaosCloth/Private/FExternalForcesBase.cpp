// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 3

// ~FExternalForcesBase @ 14db9fbf0

void __thiscall Chaos::Softs::FExternalForcesBase::~FExternalForcesBase(FExternalForcesBase *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FExternalForcesBase_Softs_Chaos__6B_;
  pFVar1 = (this->GravityScale).MapValues.AllocatorInstance.Data;
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

// Apply @ 14dbbc370

void __thiscall
Chaos::Softs::FExternalForcesBase::Apply
          (FExternalForcesBase *this,FSolverParticlesRange *param_1,float param_2)

{
  float *pfVar1;
  TVector<float,3> *pTVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  TArrayView<float,int> *pTVar10;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar11;
  float *pfVar12;
  int iVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  TArrayView<Chaos::TVector<float,3>,int> local_130;
  TArrayView<Chaos::TVector<float,3>,int> local_120;
  TArrayView<Chaos::TVector<float,3>,int> local_110;
  TArrayView<float,int> local_100;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_f0;
  float *local_e0;
  undefined8 uStack_d8;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FExternalForcesBase::Apply(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId38,"FExternalForcesBase_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsExternalForces.h"
               ,0x26);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FExternalForcesBase::Apply(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId38);
  }
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_130,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&param_1->field_0x8 + 0x60));
  pTVar10 = FSolverParticlesRange::GetInvM(param_1,&local_100);
  pfVar1 = pTVar10->DataPtr;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_120,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&param_1->field_0x8 + 0x28));
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_110,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&param_1->field_0x8 + 0x48));
  pTVar11 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
            GetConstArrayView<Chaos::TVector<float,3>_>
                      ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_f0,
                       this->Normals);
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_3f800000;
  pTVar2 = pTVar11->DataPtr;
  if (((__real_38d1b717 <
        (float)(*(uint *)&this->FictitiousAngularVelocity & __xmm_7fffffff7fffffff7fffffff7fffffff))
      || (__real_38d1b717 <
          (float)(*(uint *)&(this->FictitiousAngularVelocity).field_0x4 &
                 __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     (bVar8 = false,
     __real_38d1b717 <
     (float)(*(uint *)&(this->FictitiousAngularVelocity).field_0x8 &
            __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    bVar8 = true;
  }
  if (((this->bApplyGravityScale == false) || ((this->GravityScale).MapView.MapValues.ArrayNum < 1))
     || ((float)(*(uint *)&(this->GravityScale).MapView.OffsetRange.field_0x4 &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    bVar4 = false;
    if (this->bApplyGravityScale == false) {
      pfVar15 = (this->GravityScale).MapView.MapValues.DataPtr;
      fVar28 = __real_3f800000;
      goto LAB_14dbbc5eb;
    }
  }
  else {
    bVar4 = true;
  }
  fVar28 = *(float *)&(this->GravityScale).MapView.OffsetRange;
  pfVar15 = (this->GravityScale).MapView.MapValues.DataPtr;
  if (bVar4) {
    local_e0 = (this->GravityScale).MapView.MapValues.DataPtr;
    uStack_d8 = *(undefined8 *)&(this->GravityScale).MapView.MapValues.ArrayNum;
    if (((int)*(undefined8 *)&(this->GravityScale).MapView.MapValues.ArrayNum !=
         *(int *)&param_1->field_0x14) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bHasPerParticleGravity || (GravityScale.GetMapValues().Num() == Particles.GetRangeSize())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsExternalForces.h"
                           ,0x33,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
LAB_14dbbc5eb:
  fVar5 = __real_322bcc77;
  iVar13 = 0;
  if (0 < *(int *)&param_1->field_0x14) {
    lVar17 = (longlong)local_110.DataPtr - (longlong)local_120.DataPtr;
    lVar18 = (longlong)local_130.DataPtr - (longlong)local_120.DataPtr;
    lVar16 = (longlong)pTVar2 - (longlong)local_120.DataPtr;
    pfVar12 = (float *)&(local_120.DataPtr)->field_0x4;
    lVar14 = (longlong)pfVar1 - (longlong)pfVar15;
    do {
      if (*(float *)((longlong)pfVar15 + lVar14) != 0.0) {
        fVar21 = fVar28;
        if (bVar4) {
          fVar21 = *(float *)&(this->GravityScale).MapView.OffsetRange.field_0x4 * *pfVar15 +
                   *(float *)&(this->GravityScale).MapView.OffsetRange;
        }
        fVar23 = *(float *)&(this->Gravity).field_0x4;
        fVar25 = *(float *)&(this->Gravity).field_0x8;
        *(float *)(lVar18 + -4 + (longlong)pfVar12) = fVar21 * *(float *)&this->Gravity;
        *(float *)(lVar18 + (longlong)pfVar12) = fVar21 * fVar23;
        *(float *)((longlong)pfVar12 + lVar18 + 4) = fVar21 * fVar25;
        if (bVar8) {
          fVar21 = *(float *)&(this->FictitiousAngularVelocity).field_0x4;
          fVar23 = *(float *)&this->FictitiousAngularVelocity;
          fVar25 = *(float *)&(this->FictitiousAngularVelocity).field_0x8;
          fVar20 = pfVar12[-1] - *(float *)&this->ReferenceSpaceLocation;
          fVar26 = *pfVar12 - *(float *)&(this->ReferenceSpaceLocation).field_0x4;
          fVar27 = pfVar12[1] - *(float *)&(this->ReferenceSpaceLocation).field_0x8;
          fVar22 = fVar23 * fVar26 - fVar21 * fVar20;
          fVar24 = fVar25 * fVar20 - fVar23 * fVar27;
          *(float *)(lVar18 + -4 + (longlong)pfVar12) =
               *(float *)(lVar18 + -4 + (longlong)pfVar12) - (fVar21 * fVar22 - fVar25 * fVar24);
          fVar20 = fVar21 * fVar27 - fVar25 * fVar26;
          *(float *)(lVar18 + (longlong)pfVar12) =
               *(float *)(lVar18 + (longlong)pfVar12) - (fVar20 * fVar25 - fVar23 * fVar22);
          *(float *)((longlong)pfVar12 + lVar18 + 4) =
               *(float *)((longlong)pfVar12 + lVar18 + 4) - (fVar23 * fVar24 - fVar20 * fVar21);
        }
        if (this->bUsePointBasedWindModel != false) {
          fVar25 = *(float *)&(this->PointBasedWind).field_0x4 -
                   *(float *)((longlong)pfVar12 + lVar17);
          fVar20 = *(float *)&this->PointBasedWind - *(float *)((longlong)pfVar12 + lVar17 + -4);
          fVar23 = *(float *)&(this->PointBasedWind).field_0x8 -
                   *(float *)((longlong)pfVar12 + lVar17 + 4);
          fVar21 = fVar20 * fVar20 + fVar25 * fVar25 + fVar23 * fVar23;
          if (fVar5 < fVar21) {
            fVar21 = __real_3f800000 / SQRT(fVar21);
            fVar21 = (float)((uint)(fVar20 * fVar21 * *(float *)(lVar16 + -4 + (longlong)pfVar12) +
                                    fVar21 * fVar25 * *(float *)(lVar16 + (longlong)pfVar12) +
                                   fVar21 * fVar23 * *(float *)(lVar16 + 4 + (longlong)pfVar12)) &
                            uVar7) * this->LegacyWindAdaptation;
            if (fVar6 <= fVar21) {
              fVar21 = fVar6;
            }
            *(float *)(lVar18 + -4 + (longlong)pfVar12) =
                 fVar20 * fVar21 + *(float *)(lVar18 + -4 + (longlong)pfVar12);
            *(float *)(lVar18 + (longlong)pfVar12) =
                 fVar25 * fVar21 + *(float *)(lVar18 + (longlong)pfVar12);
            *(float *)((longlong)pfVar12 + lVar18 + 4) =
                 fVar23 * fVar21 + *(float *)((longlong)pfVar12 + lVar18 + 4);
          }
        }
      }
      iVar13 = iVar13 + 1;
      pfVar15 = pfVar15 + 1;
      pfVar12 = pfVar12 + 3;
    } while (iVar13 < *(int *)&param_1->field_0x14);
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateLinearSystem @ 14dc234e0

void __thiscall
Chaos::Softs::FExternalForcesBase::UpdateLinearSystem
          (FExternalForcesBase *this,FSolverParticlesRange *param_1,float param_2,
          FEvolutionLinearSystem *param_3)

{
  float *pfVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  TVector<float,3> *pTVar13;
  longlong lVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_178;
  float local_174;
  float local_170;
  TVector<float,3> *local_168;
  float *local_160;
  TVector<float,3> *local_158;
  TArrayView<float_const_,int> local_150;
  TArrayView<float_const_,int> local_140;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_130;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_120;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_110;
  float *local_100;
  undefined8 uStack_f8;
  
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetConstArrayView<float>
            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_150,
             (TArray<float,TSizedDefaultAllocator<32>_> *)(*(longlong *)&param_1->field_0x8 + 0x90))
  ;
  local_160 = local_150.DataPtr;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetConstArrayView<float>
            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_140,
             (TArray<float,TSizedDefaultAllocator<32>_> *)(*(longlong *)&param_1->field_0x8 + 0x78))
  ;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetConstArrayView<Chaos::TVector<float,3>_>
            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_130,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&param_1->field_0x8 + 0x28));
  local_158 = local_130.DataPtr;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetConstArrayView<Chaos::TVector<float,3>_>
            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_120,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&param_1->field_0x8 + 0x48));
  pTVar9 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
           GetConstArrayView<Chaos::TVector<float,3>_>
                     ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_110,
                      this->Normals);
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar24 = __real_3f800000;
  local_168 = pTVar9->DataPtr;
  if (((__real_38d1b717 <
        (float)(*(uint *)&this->FictitiousAngularVelocity & __xmm_7fffffff7fffffff7fffffff7fffffff))
      || (__real_38d1b717 <
          (float)(*(uint *)&(this->FictitiousAngularVelocity).field_0x4 &
                 __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     (bVar7 = false,
     __real_38d1b717 <
     (float)(*(uint *)&(this->FictitiousAngularVelocity).field_0x8 &
            __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    bVar7 = true;
  }
  if (((this->bApplyGravityScale == false) || ((this->GravityScale).MapView.MapValues.ArrayNum < 1))
     || ((float)(*(uint *)&(this->GravityScale).MapView.OffsetRange.field_0x4 &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    bVar4 = false;
    bVar5 = false;
    if (this->bApplyGravityScale == false) {
      pfVar15 = (this->GravityScale).MapView.MapValues.DataPtr;
      bVar5 = false;
      fVar25 = __real_3f800000;
      goto LAB_14dc2375c;
    }
  }
  else {
    bVar4 = true;
    bVar5 = true;
  }
  fVar25 = *(float *)&(this->GravityScale).MapView.OffsetRange;
  pfVar15 = (this->GravityScale).MapView.MapValues.DataPtr;
  if (bVar4) {
    local_100 = (this->GravityScale).MapView.MapValues.DataPtr;
    uStack_f8 = *(undefined8 *)&(this->GravityScale).MapView.MapValues.ArrayNum;
    if (((int)*(undefined8 *)&(this->GravityScale).MapView.MapValues.ArrayNum !=
         *(int *)&param_1->field_0x14) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bHasPerParticleGravity || (GravityScale.GetMapValues().Num() == Particles.GetRangeSize())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsExternalForces.h"
                           ,0x60,L""), bVar4 = bVar5, bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
LAB_14dc2375c:
  iVar11 = 0;
  if (0 < *(int *)&param_1->field_0x14) {
    pTVar13 = (TVector<float,3> *)((longlong)local_168 - (longlong)local_158);
    pfVar10 = (float *)((longlong)local_160 - (longlong)pfVar15);
    lVar14 = (longlong)local_120.DataPtr - (longlong)local_158;
    pfVar12 = (float *)&local_158->field_0x4;
    pfVar16 = local_140.DataPtr;
    local_168 = pTVar13;
    local_160 = pfVar10;
    do {
      pfVar1 = (float *)((longlong)pfVar16 + ((longlong)pfVar15 - (longlong)local_140.DataPtr));
      if (*(float *)((longlong)pfVar1 + (longlong)pfVar10) != 0.0) {
        local_170 = fVar25;
        if (bVar4) {
          local_170 = *(float *)&(this->GravityScale).MapView.OffsetRange.field_0x4 * *pfVar1 +
                      *(float *)&(this->GravityScale).MapView.OffsetRange;
        }
        fVar2 = *pfVar16;
        local_178 = fVar2 * *(float *)&this->Gravity * local_170;
        local_174 = fVar2 * *(float *)&(this->Gravity).field_0x4 * local_170;
        local_170 = fVar2 * *(float *)&(this->Gravity).field_0x8 * local_170;
        if (bVar7) {
          fVar24 = *(float *)&(this->FictitiousAngularVelocity).field_0x8;
          fVar19 = *(float *)&(this->FictitiousAngularVelocity).field_0x4;
          fVar21 = *(float *)&this->FictitiousAngularVelocity;
          fVar17 = pfVar12[-1] - *(float *)&this->ReferenceSpaceLocation;
          fVar18 = *pfVar12 - *(float *)&(this->ReferenceSpaceLocation).field_0x4;
          fVar20 = pfVar12[1] - *(float *)&(this->ReferenceSpaceLocation).field_0x8;
          fVar22 = fVar21 * fVar18 - fVar19 * fVar17;
          fVar23 = fVar24 * fVar17 - fVar21 * fVar20;
          fVar17 = fVar19 * fVar20 - fVar24 * fVar18;
          local_178 = local_178 - (fVar19 * fVar22 - fVar24 * fVar23) * fVar2;
          local_174 = local_174 - (fVar17 * fVar24 - fVar21 * fVar22) * fVar2;
          local_170 = local_170 - (fVar21 * fVar23 - fVar17 * fVar19) * fVar2;
          fVar24 = __real_3f800000;
        }
        if (this->bUsePointBasedWindModel != false) {
          fVar17 = *(float *)&(this->PointBasedWind).field_0x4 -
                   *(float *)(lVar14 + (longlong)pfVar12);
          fVar18 = *(float *)&this->PointBasedWind - *(float *)(lVar14 + -4 + (longlong)pfVar12);
          fVar21 = *(float *)&(this->PointBasedWind).field_0x8 -
                   *(float *)(lVar14 + 4 + (longlong)pfVar12);
          fVar19 = fVar18 * fVar18 + fVar17 * fVar17 + fVar21 * fVar21;
          if (__real_322bcc77 < fVar19) {
            fVar19 = __real_3f800000 / SQRT(fVar19);
            fVar19 = (float)((uint)(fVar18 * fVar19 *
                                    *(float *)((longlong)pfVar12 + (longlong)pTVar13 + -4) +
                                    fVar19 * fVar17 *
                                    *(float *)((longlong)pfVar12 + (longlong)pTVar13) +
                                   fVar19 * fVar21 *
                                   *(float *)((longlong)pfVar12 + (longlong)pTVar13 + 4)) & uVar6) *
                     this->LegacyWindAdaptation;
            if (fVar24 <= fVar19) {
              fVar19 = fVar24;
            }
            local_178 = local_178 + fVar18 * fVar19 * fVar2;
            local_174 = local_174 + fVar17 * fVar19 * fVar2;
            local_170 = local_170 + fVar21 * fVar19 * fVar2;
          }
        }
        FEvolutionLinearSystem::AddForce
                  (param_3,param_1,(TVector<float,3> *)&local_178,iVar11,param_2);
        pfVar10 = local_160;
        pTVar13 = local_168;
      }
      iVar11 = iVar11 + 1;
      pfVar12 = pfVar12 + 3;
      pfVar16 = pfVar16 + 1;
      bVar4 = bVar5;
    } while (iVar11 < *(int *)&param_1->field_0x14);
  }
  return;
}

