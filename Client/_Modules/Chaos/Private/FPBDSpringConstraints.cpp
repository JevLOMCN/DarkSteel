// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// FPBDSpringConstraints<3> @ 143d83a10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPBDSpringConstraints * __thiscall
Chaos::Softs::FPBDSpringConstraints::FPBDSpringConstraints<3>
          (FPBDSpringConstraints *this,FSolverParticlesRange *param_1,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_2,
          TArrayView<float_const_,int> *param_3,TVector<float,2> *param_4,bool param_5,bool param_6,
          void *param_7)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPBDSpringConstraints *pFVar4;
  undefined7 uStack_6f;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_68;
  TArrayView<float,int> local_58;
  <lambda_6_> local_48;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_38;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  this->_padding_ = (longlong)&___7FPBDSpringConstraintsBase_Softs_Chaos__6B_;
  local_48._9_7_ = uStack_6f;
  local_48.bTrimKinematicConstraints = param_5;
  local_48.Particles = param_1;
  FPBDSpringConstraintsBase::
  TrimConstraints<3,_Chaos::Softs::FPBDSpringConstraintsBase::FPBDSpringConstraintsBase<3>_::__l1::<lambda_6_>_>
            ((FPBDSpringConstraintsBase *)this,
             (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)&this->_padding_,param_2,
             &local_48);
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  iVar1 = *(int *)&param_1->field_0x14;
  *(int *)((longlong)&this->_padding_ + 4) = iVar1;
  local_68.DataPtr = (TVector<int,2> *)this->_padding_;
  local_68.ArrayNum = (int)this->_padding_;
  if (local_68.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDSpringConstraints *)(*pcVar2)();
      return pFVar4;
    }
  }
  FPBDStiffness::FPBDStiffness<2>
            ((FPBDStiffness *)&this->_padding_,param_4,param_3,&local_68,0,iVar1,0x10,
             __real_447a0000,__real_3f800000);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&this->_padding_,(int)this->_padding_,
             Default);
  local_58.DataPtr = (float *)this->_padding_;
  local_58.ArrayNum = (int)this->_padding_;
  if (local_58.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDSpringConstraints *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x56,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDSpringConstraints *)(*pcVar2)();
      return pFVar4;
    }
  }
  TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetConstArrayView<Chaos::TVector<float,3>_>
            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_38,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&param_1->field_0x8 + 0x28));
  FPBDSpringConstraintsBase::CalculateRestLengths
            ((FPBDSpringConstraintsBase *)this,&local_38,&local_58);
  this->_padding_ = (longlong)&___7FPBDSpringConstraints_Softs_Chaos__6B_;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  if (param_6) {
    InitColor<Chaos::Softs::FSolverParticlesRange>(this,&local_28,param_1);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return this;
}

// Apply<Chaos::Softs::FSolverParticles> @ 143d84d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>
          (FPBDSpringConstraints *this,FSolverParticles *param_1,float param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_PBD_Spring> FVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  bool bVar21;
  float fVar22;
  FName local_f0;
  FName local_e8;
  FColor_u_0 local_e0 [2];
  FName local_d8;
  FName local_d0;
  longlong local_c0;
  FPBDSpringConstraints *local_b8;
  FSolverParticles *local_b0;
  float local_a8;
  int local_a4;
  code *local_a0;
  FPBDSpringConstraints **local_98;
  code *local_90;
  FPBDSpringConstraints **local_88;
  FPBDSpringConstraints *local_80;
  FSolverParticles *local_78;
  float local_70;
  int local_6c;
  float local_68;
  
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId102,"FPBDSpringConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSpringConstraints.cpp"
               ,0x66);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId102);
  }
  uVar17 = 0;
  uVar19 = 0;
  FVar12 = StatPtr_STAT_PBD_Spring;
  if (StatPtr_STAT_PBD_Spring == (FThreadSafeStaticStat<FStat_STAT_PBD_Spring>)0x0) {
    pFVar11 = ::FName::FName(&local_e8,"STAT_PBD_Spring");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_PBD_Spring>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_Spring,*pFVar11,
                        L"Chaos PBD Spring Constraint","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_f0 = *(FName *)FVar12;
  bVar7 = false;
  bVar6 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  bVar9 = false;
  bVar8 = false;
  if ((local_f0.ComparisonIndex.Value.Value != 0) || (local_f0.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e0[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.ComparisonIndex.Value = local_f0.ComparisonIndex.Value.Value;
        local_d8.Number = local_f0.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d8,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSpringConstraints.cpp"
                   ,0x67);
        bVar7 = true;
        bVar6 = true;
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_f0,CycleScopeStart);
      bVar8 = true;
      goto LAB_143d84f43;
    }
  }
  bVar7 = bVar9;
  bVar6 = bVar8;
  bVar8 = false;
  local_f0 = local_d0;
LAB_143d84f43:
  iVar13 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  plVar1 = &this->_padding_;
  uVar10 = 0;
  if ((iVar13 < 2) || ((int)*plVar1 <= Chaos_Spring_ParallelConstraintCount)) {
    if (((int)this->_padding_ < 2) ||
       ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
      fVar22 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->_padding_);
      if (0 < (int)*plVar1) {
        do {
          ApplyHelper<Chaos::Softs::FSolverParticles>(this,param_1,param_2,(int)uVar17,fVar22);
          uVar19 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar19;
        } while ((int)uVar19 < (int)*plVar1);
      }
    }
    else {
      uVar20 = uVar17;
      if (0 < (int)this->_padding_) {
        do {
          uVar15 = (uint)uVar20;
          uVar19 = uVar10;
          if ((int)uVar15 < (int)this->_padding_) {
            uVar19 = ~uVar15 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          bVar2 = *(byte *)(this->_padding_ + uVar17);
          if (((int)this->_padding_ <= (int)(uint)bVar2) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          ApplyHelper<Chaos::Softs::FSolverParticles>
                    (this,param_1,param_2,uVar15,*(float *)(this->_padding_ + (ulonglong)bVar2 * 4))
          ;
          uVar17 = uVar17 + 1;
          uVar20 = (ulonglong)(uVar15 + 1);
        } while ((int)(uVar15 + 1) < (int)this->_padding_);
      }
    }
  }
  else {
    iVar13 = iVar13 + -1;
    if (((int)this->_padding_ < 2) ||
       ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
      lVar18 = (longlong)iVar13;
      fVar22 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->_padding_);
      if (bChaos_Spring_ISPC_Enabled == false) {
        uVar20 = uVar17;
        if (0 < lVar18) {
          do {
            uVar15 = (uint)uVar17;
            uVar19 = uVar10;
            if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar19 = ~uVar15 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar15 = uVar15 + 1;
            uVar17 = (ulonglong)uVar15;
            iVar13 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                             uVar20 * 4);
            uVar19 = uVar10;
            if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar19 = ~uVar15 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_88 = &local_80;
            local_90 = UE::Core::Private::Function::
                       TFunctionRefCaller<`Chaos::Softs::FPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l17::<lambda_1>,void,int>
                       ::Call;
            local_80 = this;
            local_78 = param_1;
            local_70 = param_2;
            local_6c = iVar13;
            local_68 = fVar22;
            PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + uVar20 * 4 + 4) - iVar13,
                               (TFunctionRef<void___cdecl(int)> *)&local_90,false);
            uVar20 = uVar20 + 1;
          } while ((longlong)uVar20 < lVar18);
        }
      }
      else {
        uVar20 = uVar17;
        if (0 < lVar18) {
          do {
            uVar15 = (uint)uVar20;
            uVar19 = uVar10;
            if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar19 = ~uVar15 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar15 = uVar15 + 1;
            iVar13 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                             uVar17 * 4);
            uVar19 = uVar10;
            if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar19 = ~uVar15 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            ApplySpringConstraints
                      (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,
                       this->_padding_ + (longlong)iVar13 * 8,this->_padding_ + (longlong)iVar13 * 4
                       ,fVar22,*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + uVar17 * 4 + 4) - iVar13);
            uVar17 = uVar17 + 1;
            uVar20 = (ulonglong)uVar15;
          } while ((longlong)uVar17 < lVar18);
        }
      }
    }
    else if (bChaos_Spring_ISPC_Enabled == false) {
      uVar20 = uVar17;
      if (0 < iVar13) {
        do {
          uVar16 = (uint)uVar17;
          uVar15 = uVar19;
          if ((int)uVar16 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar16 = uVar16 + 1;
          uVar17 = (ulonglong)uVar16;
          iVar3 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + uVar20 * 4
                          );
          uVar15 = uVar10;
          if ((int)uVar16 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_98 = &local_b8;
          local_a0 = UE::Core::Private::Function::
                     TFunctionRefCaller<`Chaos::Softs::FPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l28::<lambda_2>,void,int>
                     ::Call;
          local_b8 = this;
          local_b0 = param_1;
          local_a8 = param_2;
          local_a4 = iVar3;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar20 * 4 + 4) - iVar3,
                             (TFunctionRef<void___cdecl(int)> *)&local_a0,false);
          uVar20 = uVar20 + 1;
        } while ((longlong)uVar20 < (longlong)iVar13);
      }
    }
    else {
      uVar20 = uVar17;
      if (0 < iVar13) {
        do {
          uVar15 = (uint)uVar20;
          uVar10 = uVar19;
          if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar15 = uVar15 + 1;
          iVar3 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + uVar17 * 4
                          );
          uVar10 = uVar19;
          if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar4 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                          uVar17 * 4 + 4);
          local_c0 = this->_padding_;
          if (((int)this->_padding_ < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar18 = this->_padding_;
          if (((int)this->_padding_ < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar14 = (longlong)iVar3;
          ApplySpringConstraintsWithWeightMaps
                    (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,this->_padding_ + lVar14 * 8,
                     this->_padding_ + lVar14 * 4,lVar14 + lVar18,local_c0,iVar4 - iVar3);
          uVar17 = uVar17 + 1;
          uVar20 = (ulonglong)uVar15;
        } while ((longlong)uVar17 < (longlong)iVar13);
      }
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(local_f0,CycleScopeEnd);
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Apply<Chaos::Softs::FSolverParticlesRange> @ 143d85ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
          (FPBDSpringConstraints *this,FSolverParticlesRange *param_1,float param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_PBD_Spring> FVar14;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  bool bVar24;
  float fVar25;
  FName local_118;
  FColor_u_0 local_110 [2];
  FName local_108;
  FName local_100;
  longlong local_f8;
  longlong local_f0;
  FName local_e8;
  FPBDSpringConstraints *local_d8;
  FSolverParticlesRange *local_d0;
  float local_c8;
  int local_c4;
  code *local_c0;
  FPBDSpringConstraints **local_b8;
  code *local_b0;
  FPBDSpringConstraints **local_a8;
  FPBDSpringConstraints *local_a0;
  FSolverParticlesRange *local_98;
  float local_90;
  int local_8c;
  float local_88;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_80;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_70 [3];
  
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId102,"FPBDSpringConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSpringConstraints.cpp"
               ,0x66);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId102);
  }
  uVar19 = 0;
  uVar22 = 0;
  FVar14 = StatPtr_STAT_PBD_Spring;
  if (StatPtr_STAT_PBD_Spring == (FThreadSafeStaticStat<FStat_STAT_PBD_Spring>)0x0) {
    pFVar13 = ::FName::FName(&local_108,"STAT_PBD_Spring");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_PBD_Spring>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_Spring,*pFVar13,
                        L"Chaos PBD Spring Constraint","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_118 = *(FName *)FVar14;
  bVar9 = false;
  bVar8 = false;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  bVar11 = false;
  bVar10 = false;
  if ((local_118.ComparisonIndex.Value.Value != 0) || (local_118.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_110[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_110[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar9 = false;
      bVar8 = true;
      bVar11 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_100.ComparisonIndex.Value = local_118.ComparisonIndex.Value.Value;
        local_100.Number = local_118.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_100,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSpringConstraints.cpp"
                   ,0x67);
        bVar9 = true;
        bVar8 = true;
        bVar11 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_118,CycleScopeStart);
      bVar10 = true;
      goto LAB_143d8609e;
    }
  }
  bVar9 = bVar11;
  bVar8 = bVar10;
  bVar10 = false;
  local_118 = local_e8;
LAB_143d8609e:
  iVar16 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  plVar1 = &this->_padding_;
  uVar12 = 0;
  if ((iVar16 < 2) || ((int)*plVar1 <= Chaos_Spring_ParallelConstraintCount)) {
    if (((int)this->_padding_ < 2) ||
       ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
      fVar25 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->_padding_);
      if (0 < (int)*plVar1) {
        do {
          ApplyHelper<Chaos::Softs::FSolverParticlesRange>(this,param_1,param_2,(int)uVar19,fVar25);
          uVar22 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar22;
        } while ((int)uVar22 < (int)*plVar1);
      }
    }
    else {
      uVar21 = uVar19;
      if (0 < (int)this->_padding_) {
        do {
          uVar17 = (uint)uVar19;
          uVar22 = uVar12;
          if ((int)uVar17 < (int)this->_padding_) {
            uVar22 = ~uVar17 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          bVar2 = *(byte *)(uVar21 + this->_padding_);
          if (((int)this->_padding_ <= (int)(uint)bVar2) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          ApplyHelper<Chaos::Softs::FSolverParticlesRange>
                    (this,param_1,param_2,uVar17,*(float *)(this->_padding_ + (ulonglong)bVar2 * 4))
          ;
          uVar19 = (ulonglong)(uVar17 + 1);
          uVar21 = uVar21 + 1;
        } while ((int)(uVar17 + 1) < (int)this->_padding_);
      }
    }
  }
  else {
    iVar16 = iVar16 + -1;
    if (((int)this->_padding_ < 2) ||
       ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
      lVar20 = (longlong)iVar16;
      fVar25 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->_padding_);
      if (bChaos_Spring_ISPC_Enabled == false) {
        uVar21 = uVar19;
        if (0 < lVar20) {
          do {
            uVar17 = (uint)uVar21;
            uVar22 = uVar12;
            if ((int)uVar17 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar22 = ~uVar17 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar17 = uVar17 + 1;
            iVar16 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                             uVar19 * 4);
            uVar22 = uVar12;
            if ((int)uVar17 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar22 = ~uVar17 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_a8 = &local_a0;
            local_b0 = UE::Core::Private::Function::
                       TFunctionRefCaller<`Chaos::Softs::FPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l17::<lambda_1>,void,int>
                       ::Call;
            local_a0 = this;
            local_98 = param_1;
            local_90 = param_2;
            local_8c = iVar16;
            local_88 = fVar25;
            PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + uVar19 * 4 + 4) - iVar16,
                               (TFunctionRef<void___cdecl(int)> *)&local_b0,false);
            uVar19 = uVar19 + 1;
            uVar21 = (ulonglong)uVar17;
          } while ((longlong)uVar19 < lVar20);
        }
      }
      else {
        uVar21 = uVar19;
        if (0 < lVar20) {
          do {
            uVar17 = (uint)uVar21;
            uVar22 = uVar12;
            if ((int)uVar17 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar22 = ~uVar17 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar17 = uVar17 + 1;
            iVar16 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                             uVar19 * 4);
            uVar22 = uVar12;
            if ((int)uVar17 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar22 = ~uVar17 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar3 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                            uVar19 * 4 + 4);
            lVar23 = this->_padding_;
            lVar5 = this->_padding_;
            pTVar15 = FSolverParticlesRange::GetPAndInvM(param_1,local_70);
            ApplySpringConstraints
                      (pTVar15->DataPtr,lVar5 + (longlong)iVar16 * 8,lVar23 + (longlong)iVar16 * 4,
                       fVar25,iVar3 - iVar16);
            uVar19 = uVar19 + 1;
            uVar21 = (ulonglong)uVar17;
          } while ((longlong)uVar19 < lVar20);
        }
      }
    }
    else if (bChaos_Spring_ISPC_Enabled == false) {
      uVar21 = uVar19;
      if (0 < iVar16) {
        do {
          uVar18 = (uint)uVar21;
          uVar17 = uVar22;
          if ((int)uVar18 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar18 = uVar18 + 1;
          iVar3 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + uVar19 * 4
                          );
          uVar17 = uVar12;
          if ((int)uVar18 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_b8 = &local_d8;
          local_c0 = UE::Core::Private::Function::
                     TFunctionRefCaller<`Chaos::Softs::FPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l28::<lambda_2>,void,int>
                     ::Call;
          local_d8 = this;
          local_d0 = param_1;
          local_c8 = param_2;
          local_c4 = iVar3;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar19 * 4 + 4) - iVar3,
                             (TFunctionRef<void___cdecl(int)> *)&local_c0,false);
          uVar19 = uVar19 + 1;
          uVar21 = (ulonglong)uVar18;
        } while ((longlong)uVar19 < (longlong)iVar16);
      }
    }
    else if (0 < iVar16) {
      local_f8 = 0;
      do {
        lVar20 = local_f8;
        uVar17 = (uint)uVar19;
        uVar12 = uVar22;
        if ((int)uVar17 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar12 = ~uVar17 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar17 = uVar17 + 1;
        uVar19 = (ulonglong)uVar17;
        iVar3 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + lVar20 * 4);
        lVar23 = (longlong)iVar3;
        uVar12 = uVar22;
        if ((int)uVar17 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar12 = ~uVar17 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar4 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                        lVar20 * 4 + 4);
        local_f0 = this->_padding_;
        if (((int)this->_padding_ < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar20 = this->_padding_;
        if (((int)this->_padding_ < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = this->_padding_;
        lVar6 = this->_padding_;
        pTVar15 = FSolverParticlesRange::GetPAndInvM(param_1,&local_80);
        ApplySpringConstraintsWithWeightMaps
                  (pTVar15->DataPtr,lVar5 + lVar23 * 8,lVar6 + lVar23 * 4,lVar20 + lVar23,local_f0,
                   iVar4 - iVar3);
        local_f8 = local_f8 + 1;
      } while (local_f8 < iVar16);
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(local_118,CycleScopeEnd);
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyHelper<Chaos::Softs::FSolverParticles> @ 143d871b0

void __thiscall
Chaos::Softs::FPBDSpringConstraints::ApplyHelper<Chaos::Softs::FSolverParticles>
          (FPBDSpringConstraints *this,FSolverParticles *param_1,float param_2,int param_3,
          float param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  float *pfVar7;
  TVector<float,3> *pTVar8;
  float local_38;
  float local_34;
  float local_30;
  
  uVar6 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar6 = (uint)~param_3 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar2 = *(int *)(this->_padding_ + (longlong)param_3 * 8);
  iVar3 = *(int *)(this->_padding_ + 4 + (longlong)param_3 * 8);
  FPBDSpringConstraintsBase::GetDelta<Chaos::Softs::FSolverParticles>
            ((FPBDSpringConstraintsBase *)this,(TVector<float,3> *)&local_38,param_1,param_3,param_4
            );
  pfVar7 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar2);
  if (0.0 < *pfVar7) {
    pfVar7 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar2);
    fVar1 = *pfVar7;
    pTVar8 = FSolverParticles::P(param_1,iVar2);
    *(float *)pTVar8 = *(float *)pTVar8 - fVar1 * local_38;
    *(float *)&pTVar8->field_0x4 = *(float *)&pTVar8->field_0x4 - fVar1 * local_34;
    *(float *)&pTVar8->field_0x8 = *(float *)&pTVar8->field_0x8 - fVar1 * local_30;
  }
  pfVar7 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar3);
  if (0.0 < *pfVar7) {
    pfVar7 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar3);
    fVar1 = *pfVar7;
    pTVar8 = FSolverParticles::P(param_1,iVar3);
    *(float *)pTVar8 = fVar1 * local_38 + *(float *)pTVar8;
    *(float *)&pTVar8->field_0x4 = fVar1 * local_34 + *(float *)&pTVar8->field_0x4;
    *(float *)&pTVar8->field_0x8 = fVar1 * local_30 + *(float *)&pTVar8->field_0x8;
  }
  return;
}

// ApplyHelper<Chaos::Softs::FSolverParticlesRange> @ 143d87350

void __thiscall
Chaos::Softs::FPBDSpringConstraints::ApplyHelper<Chaos::Softs::FSolverParticlesRange>
          (FPBDSpringConstraints *this,FSolverParticlesRange *param_1,float param_2,int param_3,
          float param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  TVector<float,3> *pTVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_58;
  float local_54;
  float local_50;
  
  uVar5 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar5 = (uint)~param_3 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  iVar1 = *(int *)(this->_padding_ + (longlong)param_3 * 8);
  iVar2 = *(int *)(this->_padding_ + 4 + (longlong)param_3 * 8);
  FPBDSpringConstraintsBase::GetDelta<Chaos::Softs::FSolverParticlesRange>
            ((FPBDSpringConstraintsBase *)this,(TVector<float,3> *)&local_58,param_1,param_3,param_4
            );
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar6 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      *(int *)&param_1->field_0x10 + iVar1);
  if (0.0 < *pfVar6) {
    if (*(longlong *)&param_1->field_0x8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pfVar6 = TDynamicParticles<float,3>::InvM
                       (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                        *(int *)&param_1->field_0x10 + iVar1);
    fVar8 = *pfVar6;
    fVar9 = fVar8 * local_58;
    fVar10 = fVar8 * local_54;
    fVar8 = fVar8 * local_50;
    if (*(longlong *)&param_1->field_0x8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar7 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                 *(int *)&param_1->field_0x10 + iVar1);
    *(float *)pTVar7 = *(float *)pTVar7 - fVar9;
    *(float *)&pTVar7->field_0x4 = *(float *)&pTVar7->field_0x4 - fVar10;
    *(float *)&pTVar7->field_0x8 = *(float *)&pTVar7->field_0x8 - fVar8;
  }
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar6 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      *(int *)&param_1->field_0x10 + iVar2);
  if (0.0 < *pfVar6) {
    if (*(longlong *)&param_1->field_0x8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pfVar6 = TDynamicParticles<float,3>::InvM
                       (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                        *(int *)&param_1->field_0x10 + iVar2);
    fVar8 = *pfVar6;
    if (*(longlong *)&param_1->field_0x8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar7 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                 *(int *)&param_1->field_0x10 + iVar2);
    *(float *)pTVar7 = fVar8 * local_58 + *(float *)pTVar7;
    *(float *)&pTVar7->field_0x4 = fVar8 * local_54 + *(float *)&pTVar7->field_0x4;
    *(float *)&pTVar7->field_0x8 = fVar8 * local_50 + *(float *)&pTVar7->field_0x8;
  }
  return;
}

// InitColor<Chaos::Softs::FSolverParticles> @ 143d8f1a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::FPBDSpringConstraints::InitColor<Chaos::Softs::FSolverParticles>
          (FPBDSpringConstraints *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FSolverParticles *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  int *piVar18;
  longlong lVar19;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *pTVar20;
  undefined1 local_res20 [8];
  uint local_a8;
  undefined1 local_a4 [4];
  TArray<float,TSizedDefaultAllocator<32>_> local_a0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_90;
  uint local_80;
  uint local_7c;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_78;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *local_68;
  FScriptContainerElement *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  
  pTVar20 = (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)&this->_padding_;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar7 = (int)this->_padding_;
  local_68 = pTVar20;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,2,0>
            (&local_78,pTVar20,param_1,iVar7,*(int *)((longlong)&this->_padding_ + 4) + iVar7);
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_90,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a0,(int)this->_padding_,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (__return_storage_ptr__,(int)this->_padding_,Default);
  uVar15 = local_78.ArrayNum + 1;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar15,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,
               &(this->ConstraintsPerColorStartIndex).ArrayMax);
  }
  local_a8 = 0;
  uVar11 = (ulonglong)local_78.ArrayNum;
  local_7c = local_78.ArrayNum;
  local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_78.AllocatorInstance.Data + uVar11 * 0x10);
  FVar17.Data = local_78.AllocatorInstance.Data;
  do {
    pTVar10 = local_58;
    pTVar12 = &this->ConstraintsPerColorStartIndex;
    piVar18 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
    if (local_78.ArrayNum != (uint)uVar11) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res20);
    }
    pFVar16 = (pTVar12->AllocatorInstance).Data;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar17.Data == pTVar10) {
      if (((pFVar16 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < pFVar16 + (longlong)*piVar18 * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar10;
      }
      iVar7 = (this->ConstraintsPerColorStartIndex).ArrayNum;
      if (iVar7 == *piVar18) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar12->AllocatorInstance,piVar18);
      }
      (this->ConstraintsPerColorStartIndex).ArrayNum = iVar7 + 1;
      *(uint *)((pTVar12->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_a8;
      if (pTVar20 != &local_90) {
        pFVar16 = (pTVar20->AllocatorInstance).Data;
        if (pFVar16 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar16);
        }
        (pTVar20->AllocatorInstance).Data = local_90.AllocatorInstance.Data;
        pTVar20->ArrayNum = local_90.ArrayNum;
        pTVar20->ArrayMax = local_90.ArrayMax;
        local_90.ArrayNum = 0;
        local_90.ArrayMax = 0;
        local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      plVar1 = &this->_padding_;
      if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar1 != &local_a0) {
        if ((void *)*plVar1 != (void *)0x0) {
          FMemory::Free((void *)*plVar1);
        }
        *plVar1 = (longlong)local_a0.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_a0.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_a0.ArrayMax;
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 0;
        local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->_padding_,__return_storage_ptr__);
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_78.AllocatorInstance.Data,
                 local_78.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_78.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    if (((pFVar16 <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 < pFVar16 + (longlong)*piVar18 * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar10;
    }
    iVar7 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar7 == *piVar18) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar12->AllocatorInstance,piVar18);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar7 + 1;
    *(uint *)((pTVar12->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_a8;
    local_80 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar17.Data)->ArrayNum;
    uVar11 = (ulonglong)(int)local_80;
    pFVar16 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar17.Data)->AllocatorInstance).Data;
    local_60 = pFVar16 + uVar11 * 4;
    while( true ) {
      pFVar5 = local_60;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar17.Data)->ArrayNum != (int)uVar11) {
        local_a4[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_a4);
      }
      if (pFVar16 == pFVar5) break;
      uVar15 = *(uint *)pFVar16;
      lVar19 = (longlong)(int)uVar15;
      uVar14 = ~uVar15 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar15 < (int)*(longlong *)&pTVar20->ArrayNum) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar10;
      }
      lVar13 = (longlong)(int)local_a8;
      uVar8 = 0;
      if ((int)local_a8 < local_90.ArrayNum) {
        uVar8 = ~local_a8 >> 0x1f;
      }
      uVar3 = *(undefined8 *)(this->_padding_ + lVar19 * 8);
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar10;
      }
      *(undefined8 *)(local_90.AllocatorInstance.Data + lVar13 * 8) = uVar3;
      uVar8 = 0;
      if ((int)uVar15 < (int)this->_padding_) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar10;
      }
      lVar13 = (longlong)(int)local_a8;
      uVar2 = *(undefined4 *)(this->_padding_ + lVar19 * 4);
      uVar8 = 0;
      if ((int)local_a8 < local_a0.ArrayNum) {
        uVar8 = ~local_a8 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar10;
      }
      uVar8 = local_a8;
      *(undefined4 *)(local_a0.AllocatorInstance.Data + lVar13 * 4) = uVar2;
      uVar9 = 0;
      if ((int)uVar15 < __return_storage_ptr__->ArrayNum) {
        uVar9 = uVar14;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar10;
      }
      uVar11 = (ulonglong)local_80;
      *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + lVar19 * 4) = uVar8;
      local_a8 = local_a8 + 1;
      pFVar16 = pFVar16 + 4;
      pTVar20 = local_68;
    }
    FVar17.Data = FVar17.Data + 0x10;
    uVar11 = (ulonglong)local_7c;
  } while( true );
}

// InitColor<Chaos::Softs::FSolverParticlesRange> @ 143d8f6d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::FPBDSpringConstraints::InitColor<Chaos::Softs::FSolverParticlesRange>
          (FPBDSpringConstraints *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FSolverParticlesRange *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  int *piVar18;
  longlong lVar19;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *pTVar20;
  undefined1 local_res20 [8];
  uint local_a8;
  undefined1 local_a4 [4];
  TArray<float,TSizedDefaultAllocator<32>_> local_a0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_90;
  uint local_80;
  uint local_7c;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_78;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *local_68;
  FScriptContainerElement *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  
  pTVar20 = (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)&this->_padding_;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar7 = (int)this->_padding_;
  local_68 = pTVar20;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,2,0>
            (&local_78,pTVar20,param_1,iVar7,*(int *)((longlong)&this->_padding_ + 4) + iVar7);
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_90,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a0,(int)this->_padding_,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (__return_storage_ptr__,(int)this->_padding_,Default);
  uVar15 = local_78.ArrayNum + 1;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar15,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,
               &(this->ConstraintsPerColorStartIndex).ArrayMax);
  }
  local_a8 = 0;
  uVar11 = (ulonglong)local_78.ArrayNum;
  local_7c = local_78.ArrayNum;
  local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_78.AllocatorInstance.Data + uVar11 * 0x10);
  FVar17.Data = local_78.AllocatorInstance.Data;
  do {
    pTVar10 = local_58;
    pTVar12 = &this->ConstraintsPerColorStartIndex;
    piVar18 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
    if (local_78.ArrayNum != (uint)uVar11) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res20);
    }
    pFVar16 = (pTVar12->AllocatorInstance).Data;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar17.Data == pTVar10) {
      if (((pFVar16 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < pFVar16 + (longlong)*piVar18 * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar10;
      }
      iVar7 = (this->ConstraintsPerColorStartIndex).ArrayNum;
      if (iVar7 == *piVar18) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar12->AllocatorInstance,piVar18);
      }
      (this->ConstraintsPerColorStartIndex).ArrayNum = iVar7 + 1;
      *(uint *)((pTVar12->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_a8;
      if (pTVar20 != &local_90) {
        pFVar16 = (pTVar20->AllocatorInstance).Data;
        if (pFVar16 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar16);
        }
        (pTVar20->AllocatorInstance).Data = local_90.AllocatorInstance.Data;
        pTVar20->ArrayNum = local_90.ArrayNum;
        pTVar20->ArrayMax = local_90.ArrayMax;
        local_90.ArrayNum = 0;
        local_90.ArrayMax = 0;
        local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      plVar1 = &this->_padding_;
      if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar1 != &local_a0) {
        if ((void *)*plVar1 != (void *)0x0) {
          FMemory::Free((void *)*plVar1);
        }
        *plVar1 = (longlong)local_a0.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_a0.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_a0.ArrayMax;
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 0;
        local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->_padding_,__return_storage_ptr__);
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_78.AllocatorInstance.Data,
                 local_78.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_78.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    if (((pFVar16 <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 < pFVar16 + (longlong)*piVar18 * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar10;
    }
    iVar7 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar7 == *piVar18) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar12->AllocatorInstance,piVar18);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar7 + 1;
    *(uint *)((pTVar12->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_a8;
    local_80 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar17.Data)->ArrayNum;
    uVar11 = (ulonglong)(int)local_80;
    pFVar16 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar17.Data)->AllocatorInstance).Data;
    local_60 = pFVar16 + uVar11 * 4;
    while( true ) {
      pFVar5 = local_60;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar17.Data)->ArrayNum != (int)uVar11) {
        local_a4[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_a4);
      }
      if (pFVar16 == pFVar5) break;
      uVar15 = *(uint *)pFVar16;
      lVar19 = (longlong)(int)uVar15;
      uVar14 = ~uVar15 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar15 < (int)*(longlong *)&pTVar20->ArrayNum) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar10;
      }
      lVar13 = (longlong)(int)local_a8;
      uVar8 = 0;
      if ((int)local_a8 < local_90.ArrayNum) {
        uVar8 = ~local_a8 >> 0x1f;
      }
      uVar3 = *(undefined8 *)(this->_padding_ + lVar19 * 8);
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar10;
      }
      *(undefined8 *)(local_90.AllocatorInstance.Data + lVar13 * 8) = uVar3;
      uVar8 = 0;
      if ((int)uVar15 < (int)this->_padding_) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar10;
      }
      lVar13 = (longlong)(int)local_a8;
      uVar2 = *(undefined4 *)(this->_padding_ + lVar19 * 4);
      uVar8 = 0;
      if ((int)local_a8 < local_a0.ArrayNum) {
        uVar8 = ~local_a8 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar10;
      }
      uVar8 = local_a8;
      *(undefined4 *)(local_a0.AllocatorInstance.Data + lVar13 * 4) = uVar2;
      uVar9 = 0;
      if ((int)uVar15 < __return_storage_ptr__->ArrayNum) {
        uVar9 = uVar14;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar10;
      }
      uVar11 = (ulonglong)local_80;
      *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + lVar19 * 4) = uVar8;
      local_a8 = local_a8 + 1;
      pFVar16 = pFVar16 + 4;
      pTVar20 = local_68;
    }
    FVar17.Data = FVar17.Data + 0x10;
    uVar11 = (ulonglong)local_7c;
  } while( true );
}

// ~FPBDSpringConstraints @ 143d929a0

void __thiscall
Chaos::Softs::FPBDSpringConstraints::~FPBDSpringConstraints(FPBDSpringConstraints *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FPBDSpringConstraints_Softs_Chaos__6B_;
  pFVar1 = (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FPBDSpringConstraintsBase_Softs_Chaos__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

